set clock_constraint { \
    name clk \
    module yolo_conv_top \
    port ap_clk \
    period 10 \
    uncertainty 2 \
}

set all_path {}

set false_path {}
