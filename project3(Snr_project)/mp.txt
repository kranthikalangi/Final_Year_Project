

module lane_detection(
    input clk,
    input rst,
    input [23:0] pixel_in, // RGB input
    output [7:0] pixel_out // Output pixel (e.g., line-detected result)
);
    wire [7:0] gray, blurred;
    wire [15:0] grad_x, grad_y;
    wire [15:0] magnitude;
    wire [15:0] angle;
    wire [7:0] suppressed;

    grayscale u1(.clk(clk), .rst(rst), .r(pixel_in[23:16]), .g(pixel_in[15:8]), .b(pixel_in[7:0]), .gray(gray));
    gaussian_blur u2(.clk(clk), .rst(rst), .pixel_in(gray), .pixel_out(blurred));
    sobel u3(.clk(clk), .rst(rst), .pixel(blurred), .grad_x(grad_x), .grad_y(grad_y));
    non_max_suppression u4(.clk(clk), .rst(rst), .magnitude(magnitude), .angle(angle), .suppressed(suppressed));
    hough_transform u5(.clk(clk), .rst(rst), .edge_pixel(suppressed), .hough_space(pixel_out));

endmodule



module grayscale(
    input clk,
    input rst,
    input [7:0] r, g, b,
    output reg [7:0] gray
);
    always @(posedge clk or posedge rst) begin
        if (rst) 
            gray <= 8'd0;
        else 
            gray <= (r * 8'd77 + g * 8'd150 + b * 8'd29) >> 8; // Weighted sum
    end
endmodule


module gaussian_blur #(
    parameter KERNEL_SIZE = 5
)(
    input clk,
    input rst,
    input [7:0] pixel_in,
    output reg [7:0] pixel_out
);
    // Registers to hold pixel data and kernel values
    reg [7:0] window [0:KERNEL_SIZE*KERNEL_SIZE-1];
    reg [15:0] sum;
    integer i;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            sum <= 16'd0;
            pixel_out <= 8'd0;
        end else begin
            // Apply kernel weights and sum
            sum <= 0;
            for (i = 0; i < KERNEL_SIZE * KERNEL_SIZE; i = i + 1) begin
                sum <= sum + window[i]; // Add kernel-weighted pixels
            end
            pixel_out <= sum / KERNEL_SIZE**2; // Normalize
        end
    end
endmodule


module sobel(
    input clk,
    input rst,
    input [7:0] pixel,
    output reg [15:0] grad_x,
    output reg [15:0] grad_y
);
    // Registers for gradient calculation
    reg [7:0] window [0:8];

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            grad_x <= 16'd0;
            grad_y <= 16'd0;
        end else begin
            // Calculate x and y gradients using Sobel kernels
            grad_x <= window[2] + (window[5] << 1) + window[8] - window[0] - (window[3] << 1) - window[6];
            grad_y <= window[0] + (window[1] << 1) + window[2] - window[6] - (window[7] << 1) - window[8];
        end
    end
endmodule



module non_max_suppression(
    input clk,
    input rst,
    input [15:0] magnitude,
    input [15:0] angle,
    output reg [7:0] suppressed
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            suppressed <= 8'd0;
        else begin
            // Logic to compare magnitude with neighbors (omitted for brevity)
            suppressed <= magnitude; // Replace with suppression logic
        end
    end
endmodule



module hough_transform(
    input clk,
    input rst,
    input [7:0] edge_pixel,
    output reg [31:0] hough_space
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            hough_space <= 32'd0;
        else begin
            // Logic to update Hough space accumulator
            hough_space <= hough_space + edge_pixel; // Simplified
        end
    end
endmodule

