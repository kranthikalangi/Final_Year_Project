module grayscale_tb;
    reg clk;
    reg rst;
    reg [7:0] r, g, b; // RGB inputs to the grayscale module
    wire [7:0] gray;    // Grayscale output from the module

    // Instantiate the grayscale module
    grayscale uut (
        .clk(clk),
        .rst(rst),
        .r(r),
        .g(g),
        .b(b),
        .gray(gray)
    );

    // Clock generation
    always begin
        #5 clk = ~clk; // 100 MHz clock (10ns period)
    end

    // Test stimulus
    initial begin
        // Initialize signals
        clk = 0;
        rst = 0;
        r = 8'd0;
        g = 8'd0;
        b = 8'd0;

        // Apply reset
        rst = 1;
        #10;
        rst = 0;

        // Test Case 1: RGB = (255, 0, 0) => Gray = 76 (for red)
        r = 8'd255;
        g = 8'd0;
        b = 8'd0;
        #10;

        // Test Case 2: RGB = (0, 255, 0) => Gray = 150 (for green)
        r = 8'd0;
        g = 8'd255;
        b = 8'd0;
        #10;

        // Test Case 3: RGB = (0, 0, 255) => Gray = 29 (for blue)
        r = 8'd0;
        g = 8'd0;
        b = 8'd255;
        #10;

        // Test Case 4: RGB = (255, 255, 255) => Gray = 255 (for white)
        r = 8'd255;
        g = 8'd255;
        b = 8'd255;
        #10;

        // Test Case 5: RGB = (0, 0, 0) => Gray = 0 (for black)
        r = 8'd0;
        g = 8'd0;
        b = 8'd0;
        #10;

        // Test Case 6: RGB = (128, 128, 128) => Gray = 128 (for gray)
        r = 8'd128;
        g = 8'd128;
        b = 8'd128;
        #10;

        // Test Case 7: RGB = (255, 255, 0) => Gray = 226 (for yellow)
        r = 8'd255;
        g = 8'd255;
        b = 8'd0;
        #10;

        // Test Case 8: RGB = (255, 100, 50) => Gray = 126 (for reddish-orange)
        r = 8'd255;
        g = 8'd100;
        b = 8'd50;
        #10;

        // Test Case 9: RGB = (100, 200, 150) => Gray = 153 (for light greenish)
        r = 8'd100;
        g = 8'd200;
        b = 8'd150;
        #10;

        // Test Case 10: RGB = (50, 100, 200) => Gray = 116 (for blueish)
        r = 8'd50;
        g = 8'd100;
        b = 8'd200;
        #10;

        // End the simulation
        $finish;
    end

    // Display the output at each rising clock edge
    always @(posedge clk) begin
        $display("Time: %0t, RGB = (%d, %d, %d) => Gray = %d", $time, r, g, b, gray);
    end

endmodule
