// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _yolo_upsamp_top_HH_
#define _yolo_upsamp_top_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "yolo_upsamp_top_mac_muladd_5ns_4ns_4ns_8_1_1.h"
#include "yolo_upsamp_top_mac_muladd_4ns_5ns_4ns_8_1_1.h"
#include "yolo_upsamp_top_line_buff_group_0_va.h"
#include "yolo_upsamp_top_CTRL_BUS_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_CTRL_BUS_ADDR_WIDTH = 4,
         unsigned int C_S_AXI_CTRL_BUS_DATA_WIDTH = 32>
struct yolo_upsamp_top : public sc_module {
    // Port declarations 38
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_lv<64> > inStream_TDATA;
    sc_in< sc_logic > inStream_TVALID;
    sc_out< sc_logic > inStream_TREADY;
    sc_in< sc_lv<8> > inStream_TKEEP;
    sc_in< sc_lv<8> > inStream_TSTRB;
    sc_in< sc_lv<2> > inStream_TUSER;
    sc_in< sc_lv<1> > inStream_TLAST;
    sc_in< sc_lv<5> > inStream_TID;
    sc_in< sc_lv<6> > inStream_TDEST;
    sc_out< sc_lv<64> > outStream_TDATA;
    sc_out< sc_logic > outStream_TVALID;
    sc_in< sc_logic > outStream_TREADY;
    sc_out< sc_lv<8> > outStream_TKEEP;
    sc_out< sc_lv<8> > outStream_TSTRB;
    sc_out< sc_lv<2> > outStream_TUSER;
    sc_out< sc_lv<1> > outStream_TLAST;
    sc_out< sc_lv<5> > outStream_TID;
    sc_out< sc_lv<6> > outStream_TDEST;
    sc_in< sc_logic > s_axi_CTRL_BUS_AWVALID;
    sc_out< sc_logic > s_axi_CTRL_BUS_AWREADY;
    sc_in< sc_uint<C_S_AXI_CTRL_BUS_ADDR_WIDTH> > s_axi_CTRL_BUS_AWADDR;
    sc_in< sc_logic > s_axi_CTRL_BUS_WVALID;
    sc_out< sc_logic > s_axi_CTRL_BUS_WREADY;
    sc_in< sc_uint<C_S_AXI_CTRL_BUS_DATA_WIDTH> > s_axi_CTRL_BUS_WDATA;
    sc_in< sc_uint<C_S_AXI_CTRL_BUS_DATA_WIDTH/8> > s_axi_CTRL_BUS_WSTRB;
    sc_in< sc_logic > s_axi_CTRL_BUS_ARVALID;
    sc_out< sc_logic > s_axi_CTRL_BUS_ARREADY;
    sc_in< sc_uint<C_S_AXI_CTRL_BUS_ADDR_WIDTH> > s_axi_CTRL_BUS_ARADDR;
    sc_out< sc_logic > s_axi_CTRL_BUS_RVALID;
    sc_in< sc_logic > s_axi_CTRL_BUS_RREADY;
    sc_out< sc_uint<C_S_AXI_CTRL_BUS_DATA_WIDTH> > s_axi_CTRL_BUS_RDATA;
    sc_out< sc_lv<2> > s_axi_CTRL_BUS_RRESP;
    sc_out< sc_logic > s_axi_CTRL_BUS_BVALID;
    sc_in< sc_logic > s_axi_CTRL_BUS_BREADY;
    sc_out< sc_lv<2> > s_axi_CTRL_BUS_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    yolo_upsamp_top(sc_module_name name);
    SC_HAS_PROCESS(yolo_upsamp_top);

    ~yolo_upsamp_top();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    yolo_upsamp_top_CTRL_BUS_s_axi<C_S_AXI_CTRL_BUS_ADDR_WIDTH,C_S_AXI_CTRL_BUS_DATA_WIDTH>* yolo_upsamp_top_CTRL_BUS_s_axi_U;
    yolo_upsamp_top_line_buff_group_0_va* line_buff_group_0_va_U;
    yolo_upsamp_top_line_buff_group_0_va* line_buff_group_1_va_U;
    yolo_upsamp_top_line_buff_group_0_va* line_buff_group_2_va_U;
    yolo_upsamp_top_line_buff_group_0_va* line_buff_group_3_va_U;
    yolo_upsamp_top_mac_muladd_5ns_4ns_4ns_8_1_1<1,1,5,4,4,8>* yolo_upsamp_top_mac_muladd_5ns_4ns_4ns_8_1_1_U1;
    yolo_upsamp_top_mac_muladd_4ns_5ns_4ns_8_1_1<1,1,4,5,4,8>* yolo_upsamp_top_mac_muladd_4ns_5ns_4ns_8_1_1_U2;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<64> > inStream_V_data_0_data_out;
    sc_signal< sc_logic > inStream_V_data_0_vld_in;
    sc_signal< sc_logic > inStream_V_data_0_vld_out;
    sc_signal< sc_logic > inStream_V_data_0_ack_in;
    sc_signal< sc_logic > inStream_V_data_0_ack_out;
    sc_signal< sc_lv<64> > inStream_V_data_0_payload_A;
    sc_signal< sc_lv<64> > inStream_V_data_0_payload_B;
    sc_signal< sc_logic > inStream_V_data_0_sel_rd;
    sc_signal< sc_logic > inStream_V_data_0_sel_wr;
    sc_signal< sc_logic > inStream_V_data_0_sel;
    sc_signal< sc_logic > inStream_V_data_0_load_A;
    sc_signal< sc_logic > inStream_V_data_0_load_B;
    sc_signal< sc_lv<2> > inStream_V_data_0_state;
    sc_signal< sc_logic > inStream_V_data_0_state_cmp_full;
    sc_signal< sc_lv<8> > inStream_V_keep_V_0_data_out;
    sc_signal< sc_logic > inStream_V_keep_V_0_vld_in;
    sc_signal< sc_logic > inStream_V_keep_V_0_vld_out;
    sc_signal< sc_logic > inStream_V_keep_V_0_ack_in;
    sc_signal< sc_logic > inStream_V_keep_V_0_ack_out;
    sc_signal< sc_lv<8> > inStream_V_keep_V_0_payload_A;
    sc_signal< sc_lv<8> > inStream_V_keep_V_0_payload_B;
    sc_signal< sc_logic > inStream_V_keep_V_0_sel_rd;
    sc_signal< sc_logic > inStream_V_keep_V_0_sel_wr;
    sc_signal< sc_logic > inStream_V_keep_V_0_sel;
    sc_signal< sc_logic > inStream_V_keep_V_0_load_A;
    sc_signal< sc_logic > inStream_V_keep_V_0_load_B;
    sc_signal< sc_lv<2> > inStream_V_keep_V_0_state;
    sc_signal< sc_logic > inStream_V_keep_V_0_state_cmp_full;
    sc_signal< sc_lv<8> > inStream_V_strb_V_0_data_out;
    sc_signal< sc_logic > inStream_V_strb_V_0_vld_in;
    sc_signal< sc_logic > inStream_V_strb_V_0_vld_out;
    sc_signal< sc_logic > inStream_V_strb_V_0_ack_in;
    sc_signal< sc_logic > inStream_V_strb_V_0_ack_out;
    sc_signal< sc_lv<8> > inStream_V_strb_V_0_payload_A;
    sc_signal< sc_lv<8> > inStream_V_strb_V_0_payload_B;
    sc_signal< sc_logic > inStream_V_strb_V_0_sel_rd;
    sc_signal< sc_logic > inStream_V_strb_V_0_sel_wr;
    sc_signal< sc_logic > inStream_V_strb_V_0_sel;
    sc_signal< sc_logic > inStream_V_strb_V_0_load_A;
    sc_signal< sc_logic > inStream_V_strb_V_0_load_B;
    sc_signal< sc_lv<2> > inStream_V_strb_V_0_state;
    sc_signal< sc_logic > inStream_V_strb_V_0_state_cmp_full;
    sc_signal< sc_lv<2> > inStream_V_user_V_0_data_out;
    sc_signal< sc_logic > inStream_V_user_V_0_vld_in;
    sc_signal< sc_logic > inStream_V_user_V_0_vld_out;
    sc_signal< sc_logic > inStream_V_user_V_0_ack_in;
    sc_signal< sc_logic > inStream_V_user_V_0_ack_out;
    sc_signal< sc_lv<2> > inStream_V_user_V_0_payload_A;
    sc_signal< sc_lv<2> > inStream_V_user_V_0_payload_B;
    sc_signal< sc_logic > inStream_V_user_V_0_sel_rd;
    sc_signal< sc_logic > inStream_V_user_V_0_sel_wr;
    sc_signal< sc_logic > inStream_V_user_V_0_sel;
    sc_signal< sc_logic > inStream_V_user_V_0_load_A;
    sc_signal< sc_logic > inStream_V_user_V_0_load_B;
    sc_signal< sc_lv<2> > inStream_V_user_V_0_state;
    sc_signal< sc_logic > inStream_V_user_V_0_state_cmp_full;
    sc_signal< sc_lv<5> > inStream_V_id_V_0_data_out;
    sc_signal< sc_logic > inStream_V_id_V_0_vld_in;
    sc_signal< sc_logic > inStream_V_id_V_0_vld_out;
    sc_signal< sc_logic > inStream_V_id_V_0_ack_in;
    sc_signal< sc_logic > inStream_V_id_V_0_ack_out;
    sc_signal< sc_lv<5> > inStream_V_id_V_0_payload_A;
    sc_signal< sc_lv<5> > inStream_V_id_V_0_payload_B;
    sc_signal< sc_logic > inStream_V_id_V_0_sel_rd;
    sc_signal< sc_logic > inStream_V_id_V_0_sel_wr;
    sc_signal< sc_logic > inStream_V_id_V_0_sel;
    sc_signal< sc_logic > inStream_V_id_V_0_load_A;
    sc_signal< sc_logic > inStream_V_id_V_0_load_B;
    sc_signal< sc_lv<2> > inStream_V_id_V_0_state;
    sc_signal< sc_logic > inStream_V_id_V_0_state_cmp_full;
    sc_signal< sc_lv<6> > inStream_V_dest_V_0_data_out;
    sc_signal< sc_logic > inStream_V_dest_V_0_vld_in;
    sc_signal< sc_logic > inStream_V_dest_V_0_vld_out;
    sc_signal< sc_logic > inStream_V_dest_V_0_ack_in;
    sc_signal< sc_logic > inStream_V_dest_V_0_ack_out;
    sc_signal< sc_lv<6> > inStream_V_dest_V_0_payload_A;
    sc_signal< sc_lv<6> > inStream_V_dest_V_0_payload_B;
    sc_signal< sc_logic > inStream_V_dest_V_0_sel_rd;
    sc_signal< sc_logic > inStream_V_dest_V_0_sel_wr;
    sc_signal< sc_logic > inStream_V_dest_V_0_sel;
    sc_signal< sc_logic > inStream_V_dest_V_0_load_A;
    sc_signal< sc_logic > inStream_V_dest_V_0_load_B;
    sc_signal< sc_lv<2> > inStream_V_dest_V_0_state;
    sc_signal< sc_logic > inStream_V_dest_V_0_state_cmp_full;
    sc_signal< sc_lv<64> > outStream_V_data_1_data_out;
    sc_signal< sc_logic > outStream_V_data_1_vld_in;
    sc_signal< sc_logic > outStream_V_data_1_vld_out;
    sc_signal< sc_logic > outStream_V_data_1_ack_in;
    sc_signal< sc_logic > outStream_V_data_1_ack_out;
    sc_signal< sc_lv<64> > outStream_V_data_1_payload_A;
    sc_signal< sc_lv<64> > outStream_V_data_1_payload_B;
    sc_signal< sc_logic > outStream_V_data_1_sel_rd;
    sc_signal< sc_logic > outStream_V_data_1_sel_wr;
    sc_signal< sc_logic > outStream_V_data_1_sel;
    sc_signal< sc_logic > outStream_V_data_1_load_A;
    sc_signal< sc_logic > outStream_V_data_1_load_B;
    sc_signal< sc_lv<2> > outStream_V_data_1_state;
    sc_signal< sc_logic > outStream_V_data_1_state_cmp_full;
    sc_signal< sc_lv<8> > outStream_V_keep_V_1_data_out;
    sc_signal< sc_logic > outStream_V_keep_V_1_vld_in;
    sc_signal< sc_logic > outStream_V_keep_V_1_vld_out;
    sc_signal< sc_logic > outStream_V_keep_V_1_ack_in;
    sc_signal< sc_logic > outStream_V_keep_V_1_ack_out;
    sc_signal< sc_lv<8> > outStream_V_keep_V_1_payload_A;
    sc_signal< sc_lv<8> > outStream_V_keep_V_1_payload_B;
    sc_signal< sc_logic > outStream_V_keep_V_1_sel_rd;
    sc_signal< sc_logic > outStream_V_keep_V_1_sel_wr;
    sc_signal< sc_logic > outStream_V_keep_V_1_sel;
    sc_signal< sc_logic > outStream_V_keep_V_1_load_A;
    sc_signal< sc_logic > outStream_V_keep_V_1_load_B;
    sc_signal< sc_lv<2> > outStream_V_keep_V_1_state;
    sc_signal< sc_logic > outStream_V_keep_V_1_state_cmp_full;
    sc_signal< sc_lv<8> > outStream_V_strb_V_1_data_out;
    sc_signal< sc_logic > outStream_V_strb_V_1_vld_in;
    sc_signal< sc_logic > outStream_V_strb_V_1_vld_out;
    sc_signal< sc_logic > outStream_V_strb_V_1_ack_in;
    sc_signal< sc_logic > outStream_V_strb_V_1_ack_out;
    sc_signal< sc_lv<8> > outStream_V_strb_V_1_payload_A;
    sc_signal< sc_lv<8> > outStream_V_strb_V_1_payload_B;
    sc_signal< sc_logic > outStream_V_strb_V_1_sel_rd;
    sc_signal< sc_logic > outStream_V_strb_V_1_sel_wr;
    sc_signal< sc_logic > outStream_V_strb_V_1_sel;
    sc_signal< sc_logic > outStream_V_strb_V_1_load_A;
    sc_signal< sc_logic > outStream_V_strb_V_1_load_B;
    sc_signal< sc_lv<2> > outStream_V_strb_V_1_state;
    sc_signal< sc_logic > outStream_V_strb_V_1_state_cmp_full;
    sc_signal< sc_lv<2> > outStream_V_user_V_1_data_out;
    sc_signal< sc_logic > outStream_V_user_V_1_vld_in;
    sc_signal< sc_logic > outStream_V_user_V_1_vld_out;
    sc_signal< sc_logic > outStream_V_user_V_1_ack_in;
    sc_signal< sc_logic > outStream_V_user_V_1_ack_out;
    sc_signal< sc_lv<2> > outStream_V_user_V_1_payload_A;
    sc_signal< sc_lv<2> > outStream_V_user_V_1_payload_B;
    sc_signal< sc_logic > outStream_V_user_V_1_sel_rd;
    sc_signal< sc_logic > outStream_V_user_V_1_sel_wr;
    sc_signal< sc_logic > outStream_V_user_V_1_sel;
    sc_signal< sc_logic > outStream_V_user_V_1_load_A;
    sc_signal< sc_logic > outStream_V_user_V_1_load_B;
    sc_signal< sc_lv<2> > outStream_V_user_V_1_state;
    sc_signal< sc_logic > outStream_V_user_V_1_state_cmp_full;
    sc_signal< sc_lv<1> > outStream_V_last_V_1_data_out;
    sc_signal< sc_logic > outStream_V_last_V_1_vld_in;
    sc_signal< sc_logic > outStream_V_last_V_1_vld_out;
    sc_signal< sc_logic > outStream_V_last_V_1_ack_in;
    sc_signal< sc_logic > outStream_V_last_V_1_ack_out;
    sc_signal< sc_lv<1> > outStream_V_last_V_1_payload_A;
    sc_signal< sc_lv<1> > outStream_V_last_V_1_payload_B;
    sc_signal< sc_logic > outStream_V_last_V_1_sel_rd;
    sc_signal< sc_logic > outStream_V_last_V_1_sel_wr;
    sc_signal< sc_logic > outStream_V_last_V_1_sel;
    sc_signal< sc_logic > outStream_V_last_V_1_load_A;
    sc_signal< sc_logic > outStream_V_last_V_1_load_B;
    sc_signal< sc_lv<2> > outStream_V_last_V_1_state;
    sc_signal< sc_logic > outStream_V_last_V_1_state_cmp_full;
    sc_signal< sc_lv<5> > outStream_V_id_V_1_data_out;
    sc_signal< sc_logic > outStream_V_id_V_1_vld_in;
    sc_signal< sc_logic > outStream_V_id_V_1_vld_out;
    sc_signal< sc_logic > outStream_V_id_V_1_ack_in;
    sc_signal< sc_logic > outStream_V_id_V_1_ack_out;
    sc_signal< sc_lv<5> > outStream_V_id_V_1_payload_A;
    sc_signal< sc_lv<5> > outStream_V_id_V_1_payload_B;
    sc_signal< sc_logic > outStream_V_id_V_1_sel_rd;
    sc_signal< sc_logic > outStream_V_id_V_1_sel_wr;
    sc_signal< sc_logic > outStream_V_id_V_1_sel;
    sc_signal< sc_logic > outStream_V_id_V_1_load_A;
    sc_signal< sc_logic > outStream_V_id_V_1_load_B;
    sc_signal< sc_lv<2> > outStream_V_id_V_1_state;
    sc_signal< sc_logic > outStream_V_id_V_1_state_cmp_full;
    sc_signal< sc_lv<6> > outStream_V_dest_V_1_data_out;
    sc_signal< sc_logic > outStream_V_dest_V_1_vld_in;
    sc_signal< sc_logic > outStream_V_dest_V_1_vld_out;
    sc_signal< sc_logic > outStream_V_dest_V_1_ack_in;
    sc_signal< sc_logic > outStream_V_dest_V_1_ack_out;
    sc_signal< sc_lv<6> > outStream_V_dest_V_1_payload_A;
    sc_signal< sc_lv<6> > outStream_V_dest_V_1_payload_B;
    sc_signal< sc_logic > outStream_V_dest_V_1_sel_rd;
    sc_signal< sc_logic > outStream_V_dest_V_1_sel_wr;
    sc_signal< sc_logic > outStream_V_dest_V_1_sel;
    sc_signal< sc_logic > outStream_V_dest_V_1_load_A;
    sc_signal< sc_logic > outStream_V_dest_V_1_load_B;
    sc_signal< sc_lv<2> > outStream_V_dest_V_1_state;
    sc_signal< sc_logic > outStream_V_dest_V_1_state_cmp_full;
    sc_signal< sc_logic > inStream_TDATA_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > icmp_ln15_reg_1308;
    sc_signal< sc_lv<1> > icmp_ln15_reg_1308_pp0_iter1_reg;
    sc_signal< sc_lv<1> > select_ln21_1_reg_1389;
    sc_signal< sc_logic > outStream_TDATA_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<1> > icmp_ln15_reg_1308_pp0_iter2_reg;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_lv<1> > icmp_ln15_reg_1308_pp0_iter3_reg;
    sc_signal< sc_lv<13> > indvar_flatten136_reg_387;
    sc_signal< sc_lv<10> > indvar_flatten72_reg_398;
    sc_signal< sc_lv<9> > indvar_flatten27_reg_409;
    sc_signal< sc_lv<4> > row_idx_0_reg_420;
    sc_signal< sc_lv<2> > row_stride_0_reg_431;
    sc_signal< sc_lv<4> > col_assign_reg_442;
    sc_signal< sc_lv<6> > indvar_flatten_reg_453;
    sc_signal< sc_lv<2> > col_stride_0_reg_464;
    sc_signal< sc_lv<4> > input_ch_idx_0_reg_475;
    sc_signal< sc_lv<3> > add_ln9_fu_526_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<7> > add_ln627_fu_532_p2;
    sc_signal< sc_lv<3> > add_ln10_fu_544_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<7> > add_ln627_1_fu_550_p2;
    sc_signal< sc_lv<3> > add_ln11_fu_562_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<7> > add_ln627_2_fu_568_p2;
    sc_signal< sc_lv<3> > add_ln12_fu_580_p2;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<7> > add_ln627_3_fu_586_p2;
    sc_signal< sc_lv<1> > icmp_ln12_fu_592_p2;
    sc_signal< sc_lv<1> > icmp_ln15_fu_598_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter1;
    sc_signal< bool > ap_predicate_op171_read_state8;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state9_io;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state10_io;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<13> > add_ln15_fu_604_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > icmp_ln17_fu_610_p2;
    sc_signal< sc_lv<1> > icmp_ln17_reg_1317;
    sc_signal< sc_lv<1> > xor_ln52_fu_616_p2;
    sc_signal< sc_lv<1> > xor_ln52_reg_1326;
    sc_signal< sc_lv<1> > icmp_ln19_fu_622_p2;
    sc_signal< sc_lv<1> > icmp_ln19_reg_1337;
    sc_signal< sc_lv<1> > and_ln52_10_fu_628_p2;
    sc_signal< sc_lv<1> > and_ln52_10_reg_1342;
    sc_signal< sc_lv<1> > or_ln17_fu_634_p2;
    sc_signal< sc_lv<1> > or_ln17_reg_1351;
    sc_signal< sc_lv<9> > select_ln19_fu_646_p3;
    sc_signal< sc_lv<10> > select_ln17_5_fu_660_p3;
    sc_signal< sc_lv<4> > select_ln15_fu_785_p3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<2> > select_ln17_4_fu_876_p3;
    sc_signal< sc_lv<4> > select_ln52_4_fu_921_p3;
    sc_signal< sc_lv<4> > select_ln52_4_reg_1377;
    sc_signal< sc_lv<4> > select_ln21_fu_972_p3;
    sc_signal< sc_lv<4> > select_ln21_reg_1383;
    sc_signal< sc_lv<1> > select_ln21_1_fu_990_p3;
    sc_signal< sc_lv<1> > select_ln21_1_reg_1389_pp0_iter2_reg;
    sc_signal< sc_lv<2> > select_ln21_3_fu_1012_p3;
    sc_signal< sc_lv<1> > curr_output_last_V_fu_1038_p2;
    sc_signal< sc_lv<1> > curr_output_last_V_reg_1398;
    sc_signal< sc_lv<1> > curr_output_last_V_reg_1398_pp0_iter2_reg;
    sc_signal< sc_lv<4> > input_ch_idx_fu_1044_p2;
    sc_signal< sc_lv<6> > select_ln21_4_fu_1056_p3;
    sc_signal< sc_lv<16> > curr_input_data_sub_s_fu_1091_p1;
    sc_signal< sc_lv<64> > tmp_data_1_fu_1194_p5;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter1_state7;
    sc_signal< sc_lv<7> > line_buff_group_0_va_address0;
    sc_signal< sc_logic > line_buff_group_0_va_ce0;
    sc_signal< sc_logic > line_buff_group_0_va_we0;
    sc_signal< sc_lv<16> > line_buff_group_0_va_d0;
    sc_signal< sc_lv<16> > line_buff_group_0_va_q0;
    sc_signal< sc_lv<7> > line_buff_group_1_va_address0;
    sc_signal< sc_logic > line_buff_group_1_va_ce0;
    sc_signal< sc_logic > line_buff_group_1_va_we0;
    sc_signal< sc_lv<16> > line_buff_group_1_va_d0;
    sc_signal< sc_lv<16> > line_buff_group_1_va_q0;
    sc_signal< sc_lv<7> > line_buff_group_2_va_address0;
    sc_signal< sc_logic > line_buff_group_2_va_ce0;
    sc_signal< sc_logic > line_buff_group_2_va_we0;
    sc_signal< sc_lv<16> > line_buff_group_2_va_d0;
    sc_signal< sc_lv<16> > line_buff_group_2_va_q0;
    sc_signal< sc_lv<7> > line_buff_group_3_va_address0;
    sc_signal< sc_logic > line_buff_group_3_va_ce0;
    sc_signal< sc_logic > line_buff_group_3_va_we0;
    sc_signal< sc_lv<16> > line_buff_group_3_va_d0;
    sc_signal< sc_lv<16> > line_buff_group_3_va_q0;
    sc_signal< sc_lv<3> > phi_ln9_reg_299;
    sc_signal< sc_lv<1> > icmp_ln9_fu_538_p2;
    sc_signal< sc_lv<7> > phi_mul_reg_310;
    sc_signal< sc_lv<3> > phi_ln10_reg_321;
    sc_signal< sc_lv<1> > icmp_ln10_fu_556_p2;
    sc_signal< sc_lv<7> > phi_mul153_reg_332;
    sc_signal< sc_lv<3> > phi_ln11_reg_343;
    sc_signal< sc_lv<1> > icmp_ln11_fu_574_p2;
    sc_signal< sc_lv<7> > phi_mul155_reg_354;
    sc_signal< sc_lv<3> > phi_ln12_reg_365;
    sc_signal< sc_lv<7> > phi_mul157_reg_376;
    sc_signal< sc_lv<4> > ap_phi_mux_col_assign_phi_fu_446_p4;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_sub_data_0_s_phi_fu_489_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_tmp_data_sub_data_0_s_reg_486;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_tmp_data_sub_data_0_s_reg_486;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter2_tmp_data_sub_data_0_s_reg_486;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter3_tmp_data_sub_data_0_s_reg_486;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_sub_data_1_s_phi_fu_499_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_tmp_data_sub_data_1_s_reg_496;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_tmp_data_sub_data_1_s_reg_496;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter2_tmp_data_sub_data_1_s_reg_496;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter3_tmp_data_sub_data_1_s_reg_496;
    sc_signal< sc_lv<16> > ap_phi_mux_tmp_data_sub_data_2_s_phi_fu_509_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_tmp_data_sub_data_2_s_reg_506;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_tmp_data_sub_data_2_s_reg_506;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter2_tmp_data_sub_data_2_s_reg_506;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter3_tmp_data_sub_data_2_s_reg_506;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_data_sub_3_phi_fu_519_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_data_sub_3_reg_516;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_curr_output_data_sub_3_reg_516;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter2_curr_output_data_sub_3_reg_516;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter3_curr_output_data_sub_3_reg_516;
    sc_signal< sc_lv<64> > sext_ln203_1_fu_1132_p1;
    sc_signal< sc_lv<64> > sext_ln203_fu_1167_p1;
    sc_signal< sc_lv<6> > tmp_dest_V_fu_160;
    sc_signal< sc_lv<8> > tmp_keep_V_fu_164;
    sc_signal< sc_lv<8> > tmp_strb_V_fu_168;
    sc_signal< sc_lv<2> > tmp_user_V_fu_172;
    sc_signal< sc_lv<5> > tmp_id_V_fu_176;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<9> > add_ln19_1_fu_640_p2;
    sc_signal< sc_lv<10> > add_ln17_1_fu_654_p2;
    sc_signal< sc_lv<1> > icmp_ln52_fu_668_p2;
    sc_signal< sc_lv<1> > icmp_ln52_1_fu_678_p2;
    sc_signal< sc_lv<1> > trunc_ln21_fu_690_p1;
    sc_signal< sc_lv<1> > trunc_ln17_fu_674_p1;
    sc_signal< sc_lv<4> > row_idx_fu_706_p2;
    sc_signal< sc_lv<1> > icmp_ln52_3_fu_719_p2;
    sc_signal< sc_lv<1> > and_ln52_fu_684_p2;
    sc_signal< sc_lv<1> > icmp_ln52_5_fu_742_p2;
    sc_signal< sc_lv<1> > or_ln26_fu_694_p2;
    sc_signal< sc_lv<1> > icmp_ln52_2_fu_700_p2;
    sc_signal< sc_lv<1> > icmp_ln23_fu_763_p2;
    sc_signal< sc_lv<1> > icmp_ln21_fu_774_p2;
    sc_signal< sc_lv<2> > select_ln52_fu_712_p3;
    sc_signal< sc_lv<2> > row_stride_fu_792_p2;
    sc_signal< sc_lv<1> > trunc_ln17_1_fu_805_p1;
    sc_signal< sc_lv<1> > and_ln52_3_fu_732_p2;
    sc_signal< sc_lv<1> > select_ln52_1_fu_725_p3;
    sc_signal< sc_lv<1> > icmp_ln52_6_fu_816_p2;
    sc_signal< sc_lv<1> > and_ln52_11_fu_822_p2;
    sc_signal< sc_lv<1> > and_ln52_4_fu_737_p2;
    sc_signal< sc_lv<1> > xor_ln17_fu_835_p2;
    sc_signal< sc_lv<1> > and_ln52_5_fu_748_p2;
    sc_signal< sc_lv<1> > or_ln17_1_fu_840_p2;
    sc_signal< sc_lv<1> > and_ln52_6_fu_753_p2;
    sc_signal< sc_lv<1> > and_ln52_7_fu_758_p2;
    sc_signal< sc_lv<1> > and_ln52_8_fu_769_p2;
    sc_signal< sc_lv<1> > and_ln52_9_fu_780_p2;
    sc_signal< sc_lv<4> > select_ln17_fu_798_p3;
    sc_signal< sc_lv<1> > and_ln17_3_fu_870_p2;
    sc_signal< sc_lv<1> > or_ln52_fu_889_p2;
    sc_signal< sc_lv<1> > or_ln52_1_fu_894_p2;
    sc_signal< sc_lv<4> > col_idx_fu_883_p2;
    sc_signal< sc_lv<1> > icmp_ln52_7_fu_907_p2;
    sc_signal< sc_lv<1> > and_ln17_fu_845_p2;
    sc_signal< sc_lv<1> > select_ln17_1_fu_809_p3;
    sc_signal< sc_lv<1> > select_ln17_3_fu_851_p3;
    sc_signal< sc_lv<1> > and_ln17_1_fu_858_p2;
    sc_signal< sc_lv<1> > xor_ln52_1_fu_937_p2;
    sc_signal< sc_lv<1> > and_ln17_2_fu_864_p2;
    sc_signal< sc_lv<2> > select_ln52_2_fu_899_p3;
    sc_signal< sc_lv<1> > and_ln52_13_fu_949_p2;
    sc_signal< sc_lv<1> > or_ln21_fu_961_p2;
    sc_signal< sc_lv<1> > or_ln21_1_fu_967_p2;
    sc_signal< sc_lv<2> > col_stride_fu_955_p2;
    sc_signal< sc_lv<1> > trunc_ln21_1_fu_980_p1;
    sc_signal< sc_lv<1> > or_ln26_1_fu_984_p2;
    sc_signal< sc_lv<1> > select_ln52_5_fu_929_p3;
    sc_signal< sc_lv<1> > icmp_ln52_8_fu_998_p2;
    sc_signal< sc_lv<1> > and_ln52_12_fu_943_p2;
    sc_signal< sc_lv<1> > select_ln21_2_fu_1004_p3;
    sc_signal< sc_lv<1> > icmp_ln52_4_fu_1020_p2;
    sc_signal< sc_lv<1> > and_ln52_1_fu_1026_p2;
    sc_signal< sc_lv<1> > select_ln52_3_fu_913_p3;
    sc_signal< sc_lv<1> > and_ln52_2_fu_1032_p2;
    sc_signal< sc_lv<1> > select_ln17_2_fu_828_p3;
    sc_signal< sc_lv<6> > add_ln21_1_fu_1050_p2;
    sc_signal< sc_lv<8> > grp_fu_1207_p3;
    sc_signal< sc_lv<8> > grp_fu_1216_p3;
    sc_signal< sc_lv<5> > grp_fu_1207_p0;
    sc_signal< sc_lv<4> > grp_fu_1207_p1;
    sc_signal< sc_lv<4> > grp_fu_1207_p2;
    sc_signal< sc_lv<8> > zext_ln52_fu_1064_p1;
    sc_signal< sc_lv<4> > grp_fu_1216_p0;
    sc_signal< sc_lv<5> > grp_fu_1216_p1;
    sc_signal< sc_lv<4> > grp_fu_1216_p2;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< bool > ap_block_state11;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<8> > grp_fu_1207_p10;
    sc_signal< sc_lv<8> > grp_fu_1216_p00;
    sc_signal< bool > ap_condition_1185;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_fsm_state1;
    static const sc_lv<7> ap_ST_fsm_state2;
    static const sc_lv<7> ap_ST_fsm_state3;
    static const sc_lv<7> ap_ST_fsm_state4;
    static const sc_lv<7> ap_ST_fsm_state5;
    static const sc_lv<7> ap_ST_fsm_pp0_stage0;
    static const sc_lv<7> ap_ST_fsm_state11;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const bool ap_const_boolean_0;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<7> ap_const_lv7_D;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<13> ap_const_lv13_1520;
    static const sc_lv<13> ap_const_lv13_1;
    static const sc_lv<10> ap_const_lv10_1A0;
    static const sc_lv<9> ap_const_lv9_D0;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<4> ap_const_lv4_C;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<6> ap_const_lv6_10;
    static const sc_lv<4> ap_const_lv4_7;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<8> ap_const_lv8_D;
    static const sc_lv<32> ap_const_lv32_6;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_add_ln10_fu_544_p2();
    void thread_add_ln11_fu_562_p2();
    void thread_add_ln12_fu_580_p2();
    void thread_add_ln15_fu_604_p2();
    void thread_add_ln17_1_fu_654_p2();
    void thread_add_ln19_1_fu_640_p2();
    void thread_add_ln21_1_fu_1050_p2();
    void thread_add_ln627_1_fu_550_p2();
    void thread_add_ln627_2_fu_568_p2();
    void thread_add_ln627_3_fu_586_p2();
    void thread_add_ln627_fu_532_p2();
    void thread_add_ln9_fu_526_p2();
    void thread_and_ln17_1_fu_858_p2();
    void thread_and_ln17_2_fu_864_p2();
    void thread_and_ln17_3_fu_870_p2();
    void thread_and_ln17_fu_845_p2();
    void thread_and_ln52_10_fu_628_p2();
    void thread_and_ln52_11_fu_822_p2();
    void thread_and_ln52_12_fu_943_p2();
    void thread_and_ln52_13_fu_949_p2();
    void thread_and_ln52_1_fu_1026_p2();
    void thread_and_ln52_2_fu_1032_p2();
    void thread_and_ln52_3_fu_732_p2();
    void thread_and_ln52_4_fu_737_p2();
    void thread_and_ln52_5_fu_748_p2();
    void thread_and_ln52_6_fu_753_p2();
    void thread_and_ln52_7_fu_758_p2();
    void thread_and_ln52_8_fu_769_p2();
    void thread_and_ln52_9_fu_780_p2();
    void thread_and_ln52_fu_684_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state10_io();
    void thread_ap_block_state10_pp0_stage0_iter4();
    void thread_ap_block_state11();
    void thread_ap_block_state6_pp0_stage0_iter0();
    void thread_ap_block_state7_pp0_stage0_iter1();
    void thread_ap_block_state8_pp0_stage0_iter2();
    void thread_ap_block_state9_io();
    void thread_ap_block_state9_pp0_stage0_iter3();
    void thread_ap_condition_1185();
    void thread_ap_condition_pp0_exit_iter1_state7();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_col_assign_phi_fu_446_p4();
    void thread_ap_phi_mux_curr_output_data_sub_3_phi_fu_519_p4();
    void thread_ap_phi_mux_tmp_data_sub_data_0_s_phi_fu_489_p4();
    void thread_ap_phi_mux_tmp_data_sub_data_1_s_phi_fu_499_p4();
    void thread_ap_phi_mux_tmp_data_sub_data_2_s_phi_fu_509_p4();
    void thread_ap_phi_reg_pp0_iter0_curr_output_data_sub_3_reg_516();
    void thread_ap_phi_reg_pp0_iter0_tmp_data_sub_data_0_s_reg_486();
    void thread_ap_phi_reg_pp0_iter0_tmp_data_sub_data_1_s_reg_496();
    void thread_ap_phi_reg_pp0_iter0_tmp_data_sub_data_2_s_reg_506();
    void thread_ap_predicate_op171_read_state8();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_col_idx_fu_883_p2();
    void thread_col_stride_fu_955_p2();
    void thread_curr_input_data_sub_s_fu_1091_p1();
    void thread_curr_output_last_V_fu_1038_p2();
    void thread_grp_fu_1207_p0();
    void thread_grp_fu_1207_p1();
    void thread_grp_fu_1207_p10();
    void thread_grp_fu_1207_p2();
    void thread_grp_fu_1216_p0();
    void thread_grp_fu_1216_p00();
    void thread_grp_fu_1216_p1();
    void thread_grp_fu_1216_p2();
    void thread_icmp_ln10_fu_556_p2();
    void thread_icmp_ln11_fu_574_p2();
    void thread_icmp_ln12_fu_592_p2();
    void thread_icmp_ln15_fu_598_p2();
    void thread_icmp_ln17_fu_610_p2();
    void thread_icmp_ln19_fu_622_p2();
    void thread_icmp_ln21_fu_774_p2();
    void thread_icmp_ln23_fu_763_p2();
    void thread_icmp_ln52_1_fu_678_p2();
    void thread_icmp_ln52_2_fu_700_p2();
    void thread_icmp_ln52_3_fu_719_p2();
    void thread_icmp_ln52_4_fu_1020_p2();
    void thread_icmp_ln52_5_fu_742_p2();
    void thread_icmp_ln52_6_fu_816_p2();
    void thread_icmp_ln52_7_fu_907_p2();
    void thread_icmp_ln52_8_fu_998_p2();
    void thread_icmp_ln52_fu_668_p2();
    void thread_icmp_ln9_fu_538_p2();
    void thread_inStream_TDATA_blk_n();
    void thread_inStream_TREADY();
    void thread_inStream_V_data_0_ack_in();
    void thread_inStream_V_data_0_ack_out();
    void thread_inStream_V_data_0_data_out();
    void thread_inStream_V_data_0_load_A();
    void thread_inStream_V_data_0_load_B();
    void thread_inStream_V_data_0_sel();
    void thread_inStream_V_data_0_state_cmp_full();
    void thread_inStream_V_data_0_vld_in();
    void thread_inStream_V_data_0_vld_out();
    void thread_inStream_V_dest_V_0_ack_in();
    void thread_inStream_V_dest_V_0_ack_out();
    void thread_inStream_V_dest_V_0_data_out();
    void thread_inStream_V_dest_V_0_load_A();
    void thread_inStream_V_dest_V_0_load_B();
    void thread_inStream_V_dest_V_0_sel();
    void thread_inStream_V_dest_V_0_state_cmp_full();
    void thread_inStream_V_dest_V_0_vld_in();
    void thread_inStream_V_dest_V_0_vld_out();
    void thread_inStream_V_id_V_0_ack_in();
    void thread_inStream_V_id_V_0_ack_out();
    void thread_inStream_V_id_V_0_data_out();
    void thread_inStream_V_id_V_0_load_A();
    void thread_inStream_V_id_V_0_load_B();
    void thread_inStream_V_id_V_0_sel();
    void thread_inStream_V_id_V_0_state_cmp_full();
    void thread_inStream_V_id_V_0_vld_in();
    void thread_inStream_V_id_V_0_vld_out();
    void thread_inStream_V_keep_V_0_ack_in();
    void thread_inStream_V_keep_V_0_ack_out();
    void thread_inStream_V_keep_V_0_data_out();
    void thread_inStream_V_keep_V_0_load_A();
    void thread_inStream_V_keep_V_0_load_B();
    void thread_inStream_V_keep_V_0_sel();
    void thread_inStream_V_keep_V_0_state_cmp_full();
    void thread_inStream_V_keep_V_0_vld_in();
    void thread_inStream_V_keep_V_0_vld_out();
    void thread_inStream_V_strb_V_0_ack_in();
    void thread_inStream_V_strb_V_0_ack_out();
    void thread_inStream_V_strb_V_0_data_out();
    void thread_inStream_V_strb_V_0_load_A();
    void thread_inStream_V_strb_V_0_load_B();
    void thread_inStream_V_strb_V_0_sel();
    void thread_inStream_V_strb_V_0_state_cmp_full();
    void thread_inStream_V_strb_V_0_vld_in();
    void thread_inStream_V_strb_V_0_vld_out();
    void thread_inStream_V_user_V_0_ack_in();
    void thread_inStream_V_user_V_0_ack_out();
    void thread_inStream_V_user_V_0_data_out();
    void thread_inStream_V_user_V_0_load_A();
    void thread_inStream_V_user_V_0_load_B();
    void thread_inStream_V_user_V_0_sel();
    void thread_inStream_V_user_V_0_state_cmp_full();
    void thread_inStream_V_user_V_0_vld_in();
    void thread_inStream_V_user_V_0_vld_out();
    void thread_input_ch_idx_fu_1044_p2();
    void thread_line_buff_group_0_va_address0();
    void thread_line_buff_group_0_va_ce0();
    void thread_line_buff_group_0_va_d0();
    void thread_line_buff_group_0_va_we0();
    void thread_line_buff_group_1_va_address0();
    void thread_line_buff_group_1_va_ce0();
    void thread_line_buff_group_1_va_d0();
    void thread_line_buff_group_1_va_we0();
    void thread_line_buff_group_2_va_address0();
    void thread_line_buff_group_2_va_ce0();
    void thread_line_buff_group_2_va_d0();
    void thread_line_buff_group_2_va_we0();
    void thread_line_buff_group_3_va_address0();
    void thread_line_buff_group_3_va_ce0();
    void thread_line_buff_group_3_va_d0();
    void thread_line_buff_group_3_va_we0();
    void thread_or_ln17_1_fu_840_p2();
    void thread_or_ln17_fu_634_p2();
    void thread_or_ln21_1_fu_967_p2();
    void thread_or_ln21_fu_961_p2();
    void thread_or_ln26_1_fu_984_p2();
    void thread_or_ln26_fu_694_p2();
    void thread_or_ln52_1_fu_894_p2();
    void thread_or_ln52_fu_889_p2();
    void thread_outStream_TDATA();
    void thread_outStream_TDATA_blk_n();
    void thread_outStream_TDEST();
    void thread_outStream_TID();
    void thread_outStream_TKEEP();
    void thread_outStream_TLAST();
    void thread_outStream_TSTRB();
    void thread_outStream_TUSER();
    void thread_outStream_TVALID();
    void thread_outStream_V_data_1_ack_in();
    void thread_outStream_V_data_1_ack_out();
    void thread_outStream_V_data_1_data_out();
    void thread_outStream_V_data_1_load_A();
    void thread_outStream_V_data_1_load_B();
    void thread_outStream_V_data_1_sel();
    void thread_outStream_V_data_1_state_cmp_full();
    void thread_outStream_V_data_1_vld_in();
    void thread_outStream_V_data_1_vld_out();
    void thread_outStream_V_dest_V_1_ack_in();
    void thread_outStream_V_dest_V_1_ack_out();
    void thread_outStream_V_dest_V_1_data_out();
    void thread_outStream_V_dest_V_1_load_A();
    void thread_outStream_V_dest_V_1_load_B();
    void thread_outStream_V_dest_V_1_sel();
    void thread_outStream_V_dest_V_1_state_cmp_full();
    void thread_outStream_V_dest_V_1_vld_in();
    void thread_outStream_V_dest_V_1_vld_out();
    void thread_outStream_V_id_V_1_ack_in();
    void thread_outStream_V_id_V_1_ack_out();
    void thread_outStream_V_id_V_1_data_out();
    void thread_outStream_V_id_V_1_load_A();
    void thread_outStream_V_id_V_1_load_B();
    void thread_outStream_V_id_V_1_sel();
    void thread_outStream_V_id_V_1_state_cmp_full();
    void thread_outStream_V_id_V_1_vld_in();
    void thread_outStream_V_id_V_1_vld_out();
    void thread_outStream_V_keep_V_1_ack_in();
    void thread_outStream_V_keep_V_1_ack_out();
    void thread_outStream_V_keep_V_1_data_out();
    void thread_outStream_V_keep_V_1_load_A();
    void thread_outStream_V_keep_V_1_load_B();
    void thread_outStream_V_keep_V_1_sel();
    void thread_outStream_V_keep_V_1_state_cmp_full();
    void thread_outStream_V_keep_V_1_vld_in();
    void thread_outStream_V_keep_V_1_vld_out();
    void thread_outStream_V_last_V_1_ack_in();
    void thread_outStream_V_last_V_1_ack_out();
    void thread_outStream_V_last_V_1_data_out();
    void thread_outStream_V_last_V_1_load_A();
    void thread_outStream_V_last_V_1_load_B();
    void thread_outStream_V_last_V_1_sel();
    void thread_outStream_V_last_V_1_state_cmp_full();
    void thread_outStream_V_last_V_1_vld_in();
    void thread_outStream_V_last_V_1_vld_out();
    void thread_outStream_V_strb_V_1_ack_in();
    void thread_outStream_V_strb_V_1_ack_out();
    void thread_outStream_V_strb_V_1_data_out();
    void thread_outStream_V_strb_V_1_load_A();
    void thread_outStream_V_strb_V_1_load_B();
    void thread_outStream_V_strb_V_1_sel();
    void thread_outStream_V_strb_V_1_state_cmp_full();
    void thread_outStream_V_strb_V_1_vld_in();
    void thread_outStream_V_strb_V_1_vld_out();
    void thread_outStream_V_user_V_1_ack_in();
    void thread_outStream_V_user_V_1_ack_out();
    void thread_outStream_V_user_V_1_data_out();
    void thread_outStream_V_user_V_1_load_A();
    void thread_outStream_V_user_V_1_load_B();
    void thread_outStream_V_user_V_1_sel();
    void thread_outStream_V_user_V_1_state_cmp_full();
    void thread_outStream_V_user_V_1_vld_in();
    void thread_outStream_V_user_V_1_vld_out();
    void thread_row_idx_fu_706_p2();
    void thread_row_stride_fu_792_p2();
    void thread_select_ln15_fu_785_p3();
    void thread_select_ln17_1_fu_809_p3();
    void thread_select_ln17_2_fu_828_p3();
    void thread_select_ln17_3_fu_851_p3();
    void thread_select_ln17_4_fu_876_p3();
    void thread_select_ln17_5_fu_660_p3();
    void thread_select_ln17_fu_798_p3();
    void thread_select_ln19_fu_646_p3();
    void thread_select_ln21_1_fu_990_p3();
    void thread_select_ln21_2_fu_1004_p3();
    void thread_select_ln21_3_fu_1012_p3();
    void thread_select_ln21_4_fu_1056_p3();
    void thread_select_ln21_fu_972_p3();
    void thread_select_ln52_1_fu_725_p3();
    void thread_select_ln52_2_fu_899_p3();
    void thread_select_ln52_3_fu_913_p3();
    void thread_select_ln52_4_fu_921_p3();
    void thread_select_ln52_5_fu_929_p3();
    void thread_select_ln52_fu_712_p3();
    void thread_sext_ln203_1_fu_1132_p1();
    void thread_sext_ln203_fu_1167_p1();
    void thread_tmp_data_1_fu_1194_p5();
    void thread_trunc_ln17_1_fu_805_p1();
    void thread_trunc_ln17_fu_674_p1();
    void thread_trunc_ln21_1_fu_980_p1();
    void thread_trunc_ln21_fu_690_p1();
    void thread_xor_ln17_fu_835_p2();
    void thread_xor_ln52_1_fu_937_p2();
    void thread_xor_ln52_fu_616_p2();
    void thread_zext_ln52_fu_1064_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif