module lane_detection_tb;
    reg clk;
    reg rst;
    reg [23:0] pixel_in; // RGB input
    wire [7:0] pixel_out; // Output pixel (line-detected result)

    // Instantiate the lane_detection module
    lane_detection uut (
        .clk(clk),
        .rst(rst),
        .pixel_in(pixel_in),
        .pixel_out(pixel_out)
    );

    // ROM to store the image pixel data
    reg [23:0] image_rom [0:255]; // Assuming image has 256 pixels (adjust size if necessary)

    // Pointer to track current pixel index
    integer idx;

    // Clock generation
    always begin
        #5 clk = ~clk; // 100 MHz clock (10ns period)
    end

    // Load image data into ROM (manually or automatically)
    initial begin
        $readmemh("imagepixels.mem",image_rom); // Load pixel data from file
    end

    // Testbench stimulus
    initial begin
        // Initialize signals
        clk = 0;
        rst = 0;
        pixel_in = 24'd0;

        // Apply reset
        rst = 1;
        #10;
        rst = 0;

        // Read the image pixel data from ROM (simulate pixel by pixel)
        idx = 0;
        while (idx < 256) begin
            pixel_in = image_rom[idx]; // Read pixel data from ROM
            #10; // Wait for the next clock cycle
            idx = idx + 1; // Move to the next pixel
        end

        $finish; // End the simulation
    end

    // Display output at every rising clock edge
    always @(posedge clk) begin
        $display("Time: %0t, Pixel In: %h, Pixel Out: %h", $time, pixel_in, pixel_out);
    end

endmodule
