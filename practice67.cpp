module  counter(clk,rst,y);
      input clk,rst;
      output reg [3:0] y;
      always @(posedge(clk))
        begin
          if(rst==1'b1) 
             y=4'b0000;
            else
            y=y+1;
        end
      






endmodule