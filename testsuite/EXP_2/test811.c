
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = -3;
int32_t x3 = INT32_MAX;
int8_t x5 = INT8_MAX;
static uint8_t x10 = 82U;
int64_t x13 = INT64_MIN;
static int8_t x15 = -1;
int8_t x20 = INT8_MIN;
static int64_t t4 = 121470949398414LL;
int32_t x21 = -1;
int64_t x23 = -1LL;
int32_t x24 = INT32_MAX;
static uint16_t x28 = 5U;
uint64_t x32 = UINT64_MAX;
static uint64_t t7 = UINT64_MAX;
uint8_t x39 = UINT8_MAX;
int8_t x46 = INT8_MIN;
int16_t x49 = -1;
uint8_t x54 = 6U;
int8_t x60 = INT8_MIN;
static int16_t x75 = -5037;
int32_t x81 = -1;
static int8_t x94 = 9;
uint32_t x95 = UINT32_MAX;
int64_t t23 = 108210LL;
uint32_t x99 = UINT32_MAX;
volatile uint8_t x100 = 2U;
volatile uint32_t x101 = 8252195U;
int16_t x102 = -54;
uint8_t x104 = 0U;
static uint32_t x106 = UINT32_MAX;
volatile uint64_t t27 = UINT64_MAX;
static int16_t x116 = INT16_MAX;
int16_t x118 = 0;
uint8_t x121 = 4U;
uint8_t x122 = 43U;
uint16_t x124 = 10879U;
static volatile uint64_t t30 = UINT64_MAX;
int8_t x126 = -1;
volatile int64_t t32 = INT64_MAX;
static uint64_t x137 = 29115327298LLU;
volatile uint8_t x140 = 4U;
volatile uint8_t x144 = 1U;
uint32_t x152 = 117606397U;
volatile int32_t x155 = INT32_MIN;
int64_t t37 = -118LL;
int64_t x157 = -19761161LL;
int16_t x172 = 502;
volatile int8_t x181 = -1;
uint8_t x183 = 40U;
uint32_t t41 = UINT32_MAX;
volatile int8_t x193 = INT8_MIN;
int8_t x195 = INT8_MIN;
uint8_t x196 = UINT8_MAX;
uint32_t x198 = 1223U;
volatile int16_t x200 = INT16_MAX;
int64_t x208 = INT64_MIN;
int64_t x210 = INT64_MIN;
int32_t x212 = -1;
volatile int64_t t46 = 35LL;
volatile int32_t x215 = -1;
uint8_t x216 = UINT8_MAX;
uint64_t x221 = UINT64_MAX;
static int8_t x225 = INT8_MAX;
int16_t x226 = INT16_MIN;
volatile int64_t t50 = -247278042LL;
int16_t x230 = INT16_MIN;
static uint32_t x232 = UINT32_MAX;
int64_t x233 = INT64_MAX;
int16_t x239 = 2238;
uint32_t x256 = 27085844U;
int64_t x259 = 2137744849378828LL;
volatile int32_t x262 = -799452;
uint16_t x268 = UINT16_MAX;
int8_t x271 = INT8_MAX;
int64_t t60 = INT64_MAX;
static volatile int32_t t62 = -46027;
uint64_t x282 = 412LLU;
static uint16_t x290 = 272U;
volatile uint64_t x293 = UINT64_MAX;
int16_t x297 = INT16_MAX;
uint8_t x298 = 0U;
volatile int64_t x303 = -1LL;
static volatile uint64_t t68 = 6766078LLU;
static int32_t x311 = INT32_MAX;
int64_t x316 = 1829707236677LL;
volatile int16_t x319 = INT16_MIN;
int16_t x321 = INT16_MIN;
int8_t x329 = -1;
int16_t x334 = INT16_MIN;
uint32_t x335 = 860655284U;
uint8_t x341 = 0U;
int64_t x352 = -111LL;
volatile int64_t t77 = 39873480406537LL;
static int8_t x361 = INT8_MIN;
int16_t x362 = INT16_MAX;
volatile int64_t x371 = INT64_MIN;
volatile int8_t x373 = INT8_MIN;
int64_t x378 = -38330699333667579LL;
volatile uint64_t x379 = 201128867LLU;
int16_t x380 = INT16_MAX;
uint64_t x391 = UINT64_MAX;
static uint8_t x392 = 11U;
static volatile int64_t t87 = 0LL;
uint8_t x402 = 0U;
static uint64_t x406 = 278LLU;
static uint64_t t89 = 28713262962497670LLU;
volatile uint16_t x412 = UINT16_MAX;
static volatile int8_t x417 = INT8_MAX;
int16_t x418 = -3;
int64_t x422 = -1LL;
static volatile int32_t x425 = -1;
int32_t x427 = -4553;
int64_t t94 = -15706LL;
volatile int16_t x429 = INT16_MAX;
int16_t x432 = INT16_MIN;
int64_t x437 = -1LL;
int8_t x438 = 0;
int8_t x440 = INT8_MAX;
int64_t t97 = -7846884LL;
volatile int8_t x448 = -1;
volatile int32_t t100 = 17052;
volatile uint16_t x453 = 4060U;
volatile uint32_t x461 = UINT32_MAX;
volatile int32_t x474 = 337;
int8_t x477 = 48;
uint16_t x480 = 46U;
int64_t x489 = 548LL;
int16_t x490 = INT16_MAX;
uint32_t t111 = 131424573U;
volatile uint64_t x497 = 20106755602LLU;
int64_t x499 = INT64_MIN;
volatile int64_t x500 = INT64_MIN;
volatile uint32_t x502 = 16047U;
static int32_t x509 = -1;
static volatile uint16_t x510 = UINT16_MAX;
int32_t t115 = -575194822;
int64_t t117 = -202251932LL;
int64_t x524 = INT64_MIN;
int32_t x526 = -862118;
static int16_t x538 = INT16_MIN;
volatile uint8_t x541 = 34U;
int8_t x544 = INT8_MIN;
volatile uint64_t t122 = 27LLU;
static uint16_t x545 = 1020U;
volatile uint64_t x546 = 110156516796LLU;
static int16_t x547 = INT16_MAX;
uint64_t t123 = 20LLU;
volatile uint64_t x553 = 1419069537LLU;
volatile int8_t x559 = INT8_MAX;
uint32_t x560 = 109519U;
static uint16_t x563 = 22582U;
int32_t t127 = 172017;
volatile int16_t x567 = 707;
int64_t x571 = 48LL;
volatile int64_t t131 = -281408610442311LL;
int64_t x585 = -1LL;
int8_t x586 = INT8_MIN;
volatile int8_t x596 = INT8_MIN;
uint32_t x603 = 28738U;
volatile uint16_t x604 = UINT16_MAX;
static uint32_t x612 = 16037557U;
uint8_t x621 = 10U;
uint8_t x624 = 43U;
uint32_t t142 = 2U;
int64_t x636 = 7LL;
static volatile int32_t x641 = INT32_MAX;
uint32_t x643 = 245U;
int64_t x644 = INT64_MIN;
int64_t x648 = INT64_MAX;
static int32_t x652 = INT32_MIN;
static volatile int64_t t148 = 1LL;
uint32_t x671 = UINT32_MAX;
uint8_t x676 = UINT8_MAX;
uint32_t t155 = 7309822U;
int16_t x682 = 140;
static int64_t x685 = -1LL;
static volatile int64_t t157 = -45633208LL;
volatile int16_t x689 = -1;
volatile int64_t x694 = -1LL;
int8_t x700 = -1;
static int32_t x701 = INT32_MAX;
int32_t x703 = INT32_MIN;
int32_t x705 = -1;
volatile uint64_t t162 = 2593856002050364857LLU;
volatile int32_t t163 = INT32_MAX;
uint8_t x713 = 40U;
uint8_t x718 = 9U;
int8_t x724 = INT8_MAX;
int64_t t167 = -18595716568242859LL;
uint32_t x729 = UINT32_MAX;
int16_t x731 = INT16_MIN;
volatile int64_t x732 = INT64_MIN;
int16_t x734 = 207;
uint16_t x735 = UINT16_MAX;
uint16_t x740 = 12224U;
uint32_t t171 = UINT32_MAX;
int64_t x755 = INT64_MIN;
volatile int32_t x756 = -326752376;
static volatile int8_t x776 = INT8_MIN;
volatile int64_t t178 = 382692528303LL;
static int32_t x783 = INT32_MAX;
int16_t x787 = -2;
static uint16_t x789 = 26932U;
int64_t x790 = INT64_MAX;
int16_t x793 = INT16_MIN;
int8_t x798 = -5;
int8_t x799 = -15;
volatile int64_t t187 = -52LL;
volatile int64_t x820 = INT64_MIN;
int32_t x822 = -9365816;
uint32_t x823 = 178717418U;
uint16_t x828 = UINT16_MAX;
uint32_t x836 = 1019U;
int32_t x837 = -1;
int8_t x839 = -1;
int16_t x852 = -1;
static volatile int16_t x854 = INT16_MAX;
volatile int64_t x855 = INT64_MAX;
int8_t x856 = -26;


void f0(void) {
    	volatile uint64_t x1 = 2LLU;
	static int32_t x4 = INT32_MIN;
	uint64_t t0 = 455185822LLU;

    t0 = ((x1-(x2%x3))|x4);

    if (t0 != 18446744071562067973LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x6 = INT16_MAX;
	int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 48728670;

    t1 = ((x5-(x6%x7))|x8);

    if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MIN;
	int64_t x11 = INT64_MAX;
	int32_t x12 = 1939;
	volatile int64_t t2 = -133947485200296213LL;

    t2 = ((x9-(x10%x11))|x12);

    if (t2 != -65LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x14 = INT64_MAX;
	static int64_t x16 = INT64_MIN;
	static int64_t t3 = INT64_MIN;

    t3 = ((x13-(x14%x15))|x16);

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -2824117982058047609LL;
	int8_t x18 = -1;
	volatile int64_t x19 = 30215LL;

    t4 = ((x17-(x18%x19))|x20);

    if (t4 != -120LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -1LL;
	static int64_t t5 = -812962084177LL;

    t5 = ((x21-(x22%x23))|x24);

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	uint16_t x26 = UINT16_MAX;
	uint64_t x27 = 2851282LLU;
	static volatile uint64_t t6 = 1447637LLU;

    t6 = ((x25-(x26%x27))|x28);

    if (t6 != 18446744073709486085LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x29 = UINT64_MAX;
	volatile int64_t x30 = -1LL;
	int64_t x31 = -10LL;

    t7 = ((x29-(x30%x31))|x32);

    if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 705U;
	int32_t x34 = INT32_MIN;
	uint8_t x35 = 9U;
	int64_t x36 = INT64_MAX;
	volatile int64_t t8 = INT64_MAX;

    t8 = ((x33-(x34%x35))|x36);

    if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = 284;
	int8_t x38 = INT8_MIN;
	int32_t x40 = 10200;
	volatile int32_t t9 = -160;

    t9 = ((x37-(x38%x39))|x40);

    if (t9 != 10204) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 5;
	volatile uint8_t x42 = UINT8_MAX;
	volatile uint32_t x43 = 84U;
	int64_t x44 = 8179897333535LL;
	int64_t t10 = -758737317836LL;

    t10 = ((x41-(x42%x43))|x44);

    if (t10 != 8179897333535LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 1623966877362924LL;
	volatile int32_t x47 = INT32_MIN;
	uint64_t x48 = UINT64_MAX;
	static uint64_t t11 = UINT64_MAX;

    t11 = ((x45-(x46%x47))|x48);

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x50 = INT8_MIN;
	static int16_t x51 = -2;
	int16_t x52 = -7655;
	int32_t t12 = -246926;

    t12 = ((x49-(x50%x51))|x52);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = 137643610LL;
	int8_t x55 = 60;
	int16_t x56 = INT16_MAX;
	static volatile int64_t t13 = 3LL;

    t13 = ((x53-(x54%x55))|x56);

    if (t13 != 137658367LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = INT8_MIN;
	int64_t x58 = INT64_MIN;
	int32_t x59 = -1;
	int64_t t14 = -82845925692009123LL;

    t14 = ((x57-(x58%x59))|x60);

    if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = -1LL;
	int8_t x62 = -1;
	int32_t x63 = 17;
	int32_t x64 = INT32_MAX;
	int64_t t15 = -485808317794LL;

    t15 = ((x61-(x62%x63))|x64);

    if (t15 != 2147483647LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MAX;
	static int32_t x68 = INT32_MIN;
	volatile int64_t t16 = 1777816508166464681LL;

    t16 = ((x65-(x66%x67))|x68);

    if (t16 != -126LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	int8_t x70 = INT8_MAX;
	uint64_t x71 = UINT64_MAX;
	static volatile int16_t x72 = INT16_MAX;
	static volatile uint64_t t17 = 1221152602531637033LLU;

    t17 = ((x69-(x70%x71))|x72);

    if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	static int16_t x74 = -1;
	static int32_t x76 = 510;
	int32_t t18 = -1654;

    t18 = ((x73-(x74%x75))|x76);

    if (t18 != -2147483137) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 478848097763447723LLU;
	static uint16_t x78 = 3U;
	static int64_t x79 = INT64_MAX;
	uint32_t x80 = UINT32_MAX;
	static uint64_t t19 = 295195737LLU;

    t19 = ((x77-(x78%x79))|x80);

    if (t19 != 478848098559328255LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x82 = -1;
	static int8_t x83 = -1;
	int16_t x84 = -1;
	volatile int32_t t20 = 507465;

    t20 = ((x81-(x82%x83))|x84);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 7U;
	static int8_t x86 = 5;
	static int8_t x87 = INT8_MIN;
	uint8_t x88 = 1U;
	int32_t t21 = -517;

    t21 = ((x85-(x86%x87))|x88);

    if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -28;
	int16_t x90 = -1;
	static int64_t x91 = -7LL;
	static volatile uint32_t x92 = UINT32_MAX;
	static int64_t t22 = 769468904331880858LL;

    t22 = ((x89-(x90%x91))|x92);

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = 10726866360576279LL;
	volatile uint32_t x96 = 405969583U;

    t23 = ((x93-(x94%x95))|x96);

    if (t23 != 10726866494929839LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x97 = INT8_MIN;
	volatile int8_t x98 = 1;
	volatile uint32_t t24 = 3U;

    t24 = ((x97-(x98%x99))|x100);

    if (t24 != 4294967167U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x103 = INT64_MIN;
	static volatile int64_t t25 = -139837089842980471LL;

    t25 = ((x101-(x102%x103))|x104);

    if (t25 != 8252249LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = INT16_MAX;
	uint32_t x107 = UINT32_MAX;
	static volatile uint32_t x108 = 207651465U;
	volatile uint32_t t26 = 354015214U;

    t26 = ((x105-(x106%x107))|x108);

    if (t26 != 207683583U) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x109 = UINT64_MAX;
	static volatile int16_t x110 = -1;
	static volatile int64_t x111 = -21355072LL;
	volatile int8_t x112 = -1;

    t27 = ((x109-(x110%x111))|x112);

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = -1LL;
	volatile uint8_t x114 = 27U;
	int8_t x115 = 6;
	int64_t t28 = 1311089708306490033LL;

    t28 = ((x113-(x114%x115))|x116);

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = 582;
	volatile int64_t x119 = -1LL;
	static int64_t x120 = -22936647175094624LL;
	volatile int64_t t29 = -317093924526LL;

    t29 = ((x117-(x118%x119))|x120);

    if (t29 != -22936647175094554LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x123 = 1986LLU;

    t30 = ((x121-(x122%x123))|x124);

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 20U;
	static uint64_t x127 = 131200586680073LLU;
	volatile int32_t x128 = 60468;
	volatile uint64_t t31 = 16440109074LLU;

    t31 = ((x125-(x126%x127))|x128);

    if (t31 != 18446671286631595060LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x129 = -26;
	int8_t x130 = INT8_MIN;
	uint16_t x131 = UINT16_MAX;
	int64_t x132 = INT64_MAX;

    t32 = ((x129-(x130%x131))|x132);

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	volatile int32_t x135 = 285994167;
	static uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = -1;

    t33 = ((x133-(x134%x135))|x136);

    if (t33 != -2001928193) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x138 = 164182912482505150LLU;
	static int64_t x139 = 811480254640455287LL;
	uint64_t t34 = 506970853LLU;

    t34 = ((x137-(x138%x139))|x140);

    if (t34 != 18282561190342373764LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x141 = UINT64_MAX;
	int64_t x142 = -1LL;
	volatile int32_t x143 = INT32_MAX;
	uint64_t t35 = 694674387LLU;

    t35 = ((x141-(x142%x143))|x144);

    if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x149 = -1;
	int8_t x150 = INT8_MAX;
	static int16_t x151 = -1;
	uint32_t t36 = UINT32_MAX;

    t36 = ((x149-(x150%x151))|x152);

    if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x153 = UINT32_MAX;
	static int64_t x154 = INT64_MIN;
	int64_t x156 = INT64_MIN;

    t37 = ((x153-(x154%x155))|x156);

    if (t37 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x158 = 636;
	volatile uint8_t x159 = UINT8_MAX;
	static volatile int32_t x160 = INT32_MIN;
	volatile int64_t t38 = 6758305356194864LL;

    t38 = ((x157-(x158%x159))|x160);

    if (t38 != -19761287LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x161 = 122U;
	int32_t x162 = INT32_MAX;
	uint16_t x163 = 1353U;
	int32_t x164 = 88;
	uint32_t t39 = 1125040833U;

    t39 = ((x161-(x162%x163))|x164);

    if (t39 != 4294966748U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x169 = INT16_MAX;
	static volatile int16_t x170 = -3;
	static int64_t x171 = 53798699784LL;
	volatile int64_t t40 = -293431690371LL;

    t40 = ((x169-(x170%x171))|x172);

    if (t40 != 33270LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x182 = 7453476U;
	static volatile int16_t x184 = INT16_MAX;

    t41 = ((x181-(x182%x183))|x184);

    if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x189 = INT32_MIN;
	int16_t x190 = INT16_MIN;
	static uint8_t x191 = 5U;
	int16_t x192 = INT16_MIN;
	volatile int32_t t42 = -23339612;

    t42 = ((x189-(x190%x191))|x192);

    if (t42 != -32765) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x194 = UINT64_MAX;
	volatile uint64_t t43 = UINT64_MAX;

    t43 = ((x193-(x194%x195))|x196);

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x197 = 1LL;
	int8_t x199 = INT8_MAX;
	static int64_t t44 = -2LL;

    t44 = ((x197-(x198%x199))|x200);

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x205 = INT32_MIN;
	static uint16_t x206 = 29U;
	int8_t x207 = -1;
	volatile int64_t t45 = 2469652531401197LL;

    t45 = ((x205-(x206%x207))|x208);

    if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x209 = INT64_MIN;
	int32_t x211 = INT32_MIN;

    t46 = ((x209-(x210%x211))|x212);

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x213 = INT64_MIN;
	static volatile int8_t x214 = INT8_MIN;
	volatile int64_t t47 = 714674504308251722LL;

    t47 = ((x213-(x214%x215))|x216);

    if (t47 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x217 = -1;
	uint8_t x218 = 0U;
	volatile uint32_t x219 = 358251U;
	static volatile int64_t x220 = INT64_MIN;
	volatile int64_t t48 = 115257895207422568LL;

    t48 = ((x217-(x218%x219))|x220);

    if (t48 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x222 = -2115;
	int64_t x223 = INT64_MAX;
	static int32_t x224 = INT32_MAX;
	uint64_t t49 = 7LLU;

    t49 = ((x221-(x222%x223))|x224);

    if (t49 != 2147483647LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x227 = INT8_MAX;
	static int64_t x228 = INT64_MIN;

    t50 = ((x225-(x226%x227))|x228);

    if (t50 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x229 = -392;
	volatile int16_t x231 = INT16_MAX;
	static volatile uint32_t t51 = UINT32_MAX;

    t51 = ((x229-(x230%x231))|x232);

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x234 = 30575U;
	static int64_t x235 = 2454130LL;
	int64_t x236 = -1LL;
	volatile int64_t t52 = -7719LL;

    t52 = ((x233-(x234%x235))|x236);

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x237 = INT8_MAX;
	int32_t x238 = INT32_MAX;
	int32_t x240 = INT32_MIN;
	static int32_t t53 = -1137976;

    t53 = ((x237-(x238%x239))|x240);

    if (t53 != -1668) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x245 = UINT8_MAX;
	int16_t x246 = INT16_MIN;
	volatile int64_t x247 = INT64_MAX;
	int16_t x248 = INT16_MIN;
	int64_t t54 = -9939321770071LL;

    t54 = ((x245-(x246%x247))|x248);

    if (t54 != -32513LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x249 = -51;
	static int64_t x250 = 1LL;
	int16_t x251 = 3696;
	static int32_t x252 = INT32_MIN;
	volatile int64_t t55 = 15613LL;

    t55 = ((x249-(x250%x251))|x252);

    if (t55 != -52LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x253 = INT32_MIN;
	int32_t x254 = -65190907;
	static uint16_t x255 = 13U;
	volatile uint32_t t56 = 171371549U;

    t56 = ((x253-(x254%x255))|x256);

    if (t56 != 2174569494U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x257 = INT64_MAX;
	static uint16_t x258 = 0U;
	volatile int16_t x260 = INT16_MAX;
	int64_t t57 = INT64_MAX;

    t57 = ((x257-(x258%x259))|x260);

    if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x261 = -1;
	static volatile uint8_t x263 = UINT8_MAX;
	int64_t x264 = -1LL;
	volatile int64_t t58 = 16LL;

    t58 = ((x261-(x262%x263))|x264);

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x265 = 0;
	int8_t x266 = INT8_MIN;
	uint64_t x267 = 84889750776154229LLU;
	static uint64_t t59 = 57096095140LLU;

    t59 = ((x265-(x266%x267))|x268);

    if (t59 != 18421075918425489407LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x269 = INT64_MAX;
	uint16_t x270 = UINT16_MAX;
	volatile int16_t x272 = INT16_MAX;

    t60 = ((x269-(x270%x271))|x272);

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x273 = UINT64_MAX;
	static int16_t x274 = INT16_MIN;
	uint8_t x275 = 10U;
	uint8_t x276 = 13U;
	uint64_t t61 = 546502893416LLU;

    t61 = ((x273-(x274%x275))|x276);

    if (t61 != 15LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x277 = INT16_MIN;
	int8_t x278 = INT8_MAX;
	int8_t x279 = INT8_MIN;
	static volatile uint8_t x280 = 38U;

    t62 = ((x277-(x278%x279))|x280);

    if (t62 != -32857) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x281 = INT16_MIN;
	uint64_t x283 = 1090145088158516LLU;
	int32_t x284 = INT32_MAX;
	volatile uint64_t t63 = UINT64_MAX;

    t63 = ((x281-(x282%x283))|x284);

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x289 = -1;
	uint16_t x291 = UINT16_MAX;
	static uint8_t x292 = UINT8_MAX;
	volatile int32_t t64 = -111688876;

    t64 = ((x289-(x290%x291))|x292);

    if (t64 != -257) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x294 = 1904703552219LL;
	uint16_t x295 = UINT16_MAX;
	volatile int32_t x296 = -1;
	volatile uint64_t t65 = UINT64_MAX;

    t65 = ((x293-(x294%x295))|x296);

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x299 = -1LL;
	uint16_t x300 = 2U;
	int64_t t66 = 114362252LL;

    t66 = ((x297-(x298%x299))|x300);

    if (t66 != 32767LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x301 = 1U;
	int32_t x302 = INT32_MIN;
	static int16_t x304 = INT16_MIN;
	static int64_t t67 = 14LL;

    t67 = ((x301-(x302%x303))|x304);

    if (t67 != -32767LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x305 = -4;
	uint64_t x306 = UINT64_MAX;
	int32_t x307 = -1;
	int16_t x308 = 1;

    t68 = ((x305-(x306%x307))|x308);

    if (t68 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x309 = UINT8_MAX;
	int32_t x310 = INT32_MAX;
	volatile uint32_t x312 = 694442U;
	uint32_t t69 = 774639U;

    t69 = ((x309-(x310%x311))|x312);

    if (t69 != 694527U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x313 = UINT16_MAX;
	uint16_t x314 = UINT16_MAX;
	int32_t x315 = -1;
	int64_t t70 = -1055453556LL;

    t70 = ((x313-(x314%x315))|x316);

    if (t70 != 1829707251711LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x317 = UINT64_MAX;
	static uint16_t x318 = 63U;
	int8_t x320 = -1;
	volatile uint64_t t71 = UINT64_MAX;

    t71 = ((x317-(x318%x319))|x320);

    if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x322 = UINT64_MAX;
	static int8_t x323 = -1;
	static int64_t x324 = INT64_MAX;
	uint64_t t72 = UINT64_MAX;

    t72 = ((x321-(x322%x323))|x324);

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x325 = 11903U;
	uint64_t x326 = 65266187741448LLU;
	int16_t x327 = INT16_MAX;
	volatile int16_t x328 = INT16_MIN;
	static volatile uint64_t t73 = 5910473971LLU;

    t73 = ((x325-(x326%x327))|x328);

    if (t73 != 18446744073709529126LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x330 = 244U;
	static int16_t x331 = 1897;
	static volatile int8_t x332 = 27;
	volatile int32_t t74 = -455713725;

    t74 = ((x329-(x330%x331))|x332);

    if (t74 != -229) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x333 = INT16_MIN;
	volatile uint32_t x336 = UINT32_MAX;
	uint32_t t75 = UINT32_MAX;

    t75 = ((x333-(x334%x335))|x336);

    if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x342 = 377349974U;
	int64_t x343 = INT64_MAX;
	uint32_t x344 = 18843023U;
	int64_t t76 = 850894858093346033LL;

    t76 = ((x341-(x342%x343))|x344);

    if (t76 != -375415377LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x349 = INT64_MAX;
	int64_t x350 = INT64_MIN;
	int8_t x351 = INT8_MIN;

    t77 = ((x349-(x350%x351))|x352);

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x353 = -1;
	static int8_t x354 = -1;
	static int16_t x355 = -1;
	int8_t x356 = INT8_MIN;
	int32_t t78 = 38477;

    t78 = ((x353-(x354%x355))|x356);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x357 = 759951309439LLU;
	int8_t x358 = 7;
	int8_t x359 = 1;
	uint64_t x360 = 3755LLU;
	volatile uint64_t t79 = 1642043574572LLU;

    t79 = ((x357-(x358%x359))|x360);

    if (t79 != 759951310591LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x363 = UINT16_MAX;
	int16_t x364 = INT16_MIN;
	int32_t t80 = -79995911;

    t80 = ((x361-(x362%x363))|x364);

    if (t80 != -127) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x365 = INT8_MAX;
	int16_t x366 = INT16_MIN;
	uint64_t x367 = UINT64_MAX;
	int16_t x368 = INT16_MIN;
	uint64_t t81 = 5773835192LLU;

    t81 = ((x365-(x366%x367))|x368);

    if (t81 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x369 = UINT64_MAX;
	int64_t x370 = -1LL;
	int32_t x372 = INT32_MAX;
	uint64_t t82 = 407206014758LLU;

    t82 = ((x369-(x370%x371))|x372);

    if (t82 != 2147483647LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x374 = INT64_MIN;
	int16_t x375 = -1;
	int8_t x376 = 0;
	static int64_t t83 = -2103053007373104LL;

    t83 = ((x373-(x374%x375))|x376);

    if (t83 != -128LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x377 = UINT16_MAX;
	uint64_t t84 = 716105814747609LLU;

    t84 = ((x377-(x378%x379))|x380);

    if (t84 != 18446744073700376575LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x385 = -1LL;
	static volatile int8_t x386 = 6;
	int64_t x387 = INT64_MIN;
	int32_t x388 = INT32_MAX;
	int64_t t85 = -4LL;

    t85 = ((x385-(x386%x387))|x388);

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x389 = INT32_MIN;
	int8_t x390 = INT8_MIN;
	volatile uint64_t t86 = 60019503LLU;

    t86 = ((x389-(x390%x391))|x392);

    if (t86 != 18446744071562068107LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x397 = INT16_MIN;
	int64_t x398 = -1LL;
	volatile int32_t x399 = INT32_MAX;
	int8_t x400 = INT8_MIN;

    t87 = ((x397-(x398%x399))|x400);

    if (t87 != -127LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x401 = 1;
	volatile int64_t x403 = INT64_MAX;
	int32_t x404 = INT32_MIN;
	int64_t t88 = -532039539305540117LL;

    t88 = ((x401-(x402%x403))|x404);

    if (t88 != -2147483647LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x405 = -4;
	uint64_t x407 = 48131232000444LLU;
	uint16_t x408 = 3U;

    t89 = ((x405-(x406%x407))|x408);

    if (t89 != 18446744073709551335LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x409 = -1;
	int32_t x410 = -14;
	static uint32_t x411 = 1070768327U;
	volatile uint32_t t90 = 563574U;

    t90 = ((x409-(x410%x411))|x412);

    if (t90 != 4283105279U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x413 = INT64_MIN;
	uint16_t x414 = 2U;
	uint64_t x415 = UINT64_MAX;
	volatile int16_t x416 = 100;
	volatile uint64_t t91 = 2064307517101758622LLU;

    t91 = ((x413-(x414%x415))|x416);

    if (t91 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x419 = UINT32_MAX;
	static int8_t x420 = 6;
	static volatile uint32_t t92 = 93225U;

    t92 = ((x417-(x418%x419))|x420);

    if (t92 != 134U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x421 = INT32_MAX;
	uint16_t x423 = UINT16_MAX;
	int64_t x424 = INT64_MIN;
	int64_t t93 = -7596362LL;

    t93 = ((x421-(x422%x423))|x424);

    if (t93 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x426 = -60;
	volatile int64_t x428 = 32223632LL;

    t94 = ((x425-(x426%x427))|x428);

    if (t94 != 32223675LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x430 = -1;
	static int16_t x431 = 126;
	int32_t t95 = -8084668;

    t95 = ((x429-(x430%x431))|x432);

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x433 = 1698U;
	int8_t x434 = -1;
	static int64_t x435 = -1LL;
	static uint32_t x436 = UINT32_MAX;
	int64_t t96 = -995317446183LL;

    t96 = ((x433-(x434%x435))|x436);

    if (t96 != 4294967295LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x439 = 899648036;

    t97 = ((x437-(x438%x439))|x440);

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x441 = INT32_MIN;
	int32_t x442 = INT32_MAX;
	static uint32_t x443 = 25U;
	uint32_t x444 = 62U;
	volatile uint32_t t98 = 25047883U;

    t98 = ((x441-(x442%x443))|x444);

    if (t98 != 2147483646U) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x445 = 24788LLU;
	volatile int32_t x446 = 10;
	uint16_t x447 = 5U;
	volatile uint64_t t99 = UINT64_MAX;

    t99 = ((x445-(x446%x447))|x448);

    if (t99 != UINT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x449 = 1;
	int8_t x450 = -6;
	static uint16_t x451 = 61U;
	int8_t x452 = INT8_MAX;

    t100 = ((x449-(x450%x451))|x452);

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x454 = UINT64_MAX;
	uint16_t x455 = UINT16_MAX;
	uint32_t x456 = UINT32_MAX;
	uint64_t t101 = 173LLU;

    t101 = ((x453-(x454%x455))|x456);

    if (t101 != 4294967295LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x457 = UINT64_MAX;
	int8_t x458 = -52;
	int64_t x459 = INT64_MIN;
	int16_t x460 = -1;
	volatile uint64_t t102 = UINT64_MAX;

    t102 = ((x457-(x458%x459))|x460);

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x462 = 1U;
	int32_t x463 = INT32_MAX;
	volatile uint64_t x464 = 2LLU;
	static volatile uint64_t t103 = 0LLU;

    t103 = ((x461-(x462%x463))|x464);

    if (t103 != 4294967294LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x465 = UINT32_MAX;
	int8_t x466 = INT8_MIN;
	volatile uint8_t x467 = UINT8_MAX;
	int32_t x468 = INT32_MIN;
	volatile uint32_t t104 = 26U;

    t104 = ((x465-(x466%x467))|x468);

    if (t104 != 2147483775U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x469 = 12460;
	uint16_t x470 = 18U;
	int32_t x471 = INT32_MIN;
	int32_t x472 = -102810130;
	volatile int32_t t105 = 2528086;

    t105 = ((x469-(x470%x471))|x472);

    if (t105 != -102810114) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x473 = 8508224327431317639LLU;
	static volatile int16_t x475 = INT16_MIN;
	int64_t x476 = INT64_MIN;
	static uint64_t t106 = 1555791LLU;

    t106 = ((x473-(x474%x475))|x476);

    if (t106 != 17731596364286093110LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x478 = INT32_MAX;
	volatile uint32_t x479 = 2528U;
	volatile uint32_t t107 = 10542191U;

    t107 = ((x477-(x478%x479))|x480);

    if (t107 != 4294966655U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x481 = -1LL;
	uint32_t x482 = 805057559U;
	int32_t x483 = -1;
	int16_t x484 = -1;
	int64_t t108 = 323348071245LL;

    t108 = ((x481-(x482%x483))|x484);

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x485 = INT8_MAX;
	volatile uint16_t x486 = 1804U;
	int16_t x487 = -1;
	uint16_t x488 = 31193U;
	int32_t t109 = -421815645;

    t109 = ((x485-(x486%x487))|x488);

    if (t109 != 31231) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x491 = INT16_MAX;
	int64_t x492 = INT64_MAX;
	volatile int64_t t110 = INT64_MAX;

    t110 = ((x489-(x490%x491))|x492);

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x493 = 2U;
	int32_t x494 = -1;
	int8_t x495 = INT8_MIN;
	static volatile uint32_t x496 = 5885118U;

    t111 = ((x493-(x494%x495))|x496);

    if (t111 != 5885119U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x498 = 1U;
	volatile uint64_t t112 = 37LLU;

    t112 = ((x497-(x498%x499))|x500);

    if (t112 != 9223372056961531409LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x501 = INT8_MAX;
	volatile int8_t x503 = INT8_MIN;
	int32_t x504 = 6999463;
	uint32_t t113 = 873U;

    t113 = ((x501-(x502%x503))|x504);

    if (t113 != 4294954487U) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x505 = 0;
	static int64_t x506 = 17336139701112514LL;
	static uint64_t x507 = 5297067185915663392LLU;
	uint8_t x508 = 5U;
	static uint64_t t114 = 406050546737LLU;

    t114 = ((x505-(x506%x507))|x508);

    if (t114 != 18429407934008439103LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x511 = 19;
	uint8_t x512 = 24U;

    t115 = ((x509-(x510%x511))|x512);

    if (t115 != -5) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x513 = UINT32_MAX;
	static volatile int32_t x514 = 62625;
	int8_t x515 = INT8_MIN;
	volatile int8_t x516 = -12;
	uint32_t t116 = 297415U;

    t116 = ((x513-(x514%x515))|x516);

    if (t116 != 4294967294U) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x517 = INT16_MIN;
	static volatile int64_t x518 = 64LL;
	int64_t x519 = -1LL;
	uint16_t x520 = 29U;

    t117 = ((x517-(x518%x519))|x520);

    if (t117 != -32739LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x521 = 21955U;
	volatile uint16_t x522 = 6U;
	static uint64_t x523 = 986300LLU;
	static uint64_t t118 = 12LLU;

    t118 = ((x521-(x522%x523))|x524);

    if (t118 != 9223372036854797757LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x525 = -3;
	volatile uint32_t x527 = 474381277U;
	int64_t x528 = INT64_MAX;
	static int64_t t119 = INT64_MAX;

    t119 = ((x525-(x526%x527))|x528);

    if (t119 != INT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x533 = 2509300890812347LLU;
	volatile uint16_t x534 = 9U;
	static volatile int16_t x535 = INT16_MIN;
	uint8_t x536 = UINT8_MAX;
	static volatile uint64_t t120 = 357663438LLU;

    t120 = ((x533-(x534%x535))|x536);

    if (t120 != 2509300890812415LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x537 = -1000;
	int8_t x539 = INT8_MAX;
	uint8_t x540 = 29U;
	int32_t t121 = 6;

    t121 = ((x537-(x538%x539))|x540);

    if (t121 != -993) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x542 = UINT64_MAX;
	uint64_t x543 = 1384480060711308222LLU;

    t122 = ((x541-(x542%x543))|x544);

    if (t122 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x548 = UINT8_MAX;

    t123 = ((x545-(x546%x547))|x548);

    if (t123 != 18446744073709529855LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x549 = 0U;
	static int64_t x550 = -2520266829937LL;
	int16_t x551 = INT16_MIN;
	static int16_t x552 = -945;
	volatile int64_t t124 = -12427197168236209LL;

    t124 = ((x549-(x550%x551))|x552);

    if (t124 != -897LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x554 = 4U;
	int64_t x555 = -29002042789249LL;
	int16_t x556 = -1;
	volatile uint64_t t125 = UINT64_MAX;

    t125 = ((x553-(x554%x555))|x556);

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x557 = UINT64_MAX;
	int8_t x558 = INT8_MIN;
	volatile uint64_t t126 = 1546924LLU;

    t126 = ((x557-(x558%x559))|x560);

    if (t126 != 109519LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x561 = -1;
	static volatile int8_t x562 = -1;
	volatile int16_t x564 = -2510;

    t127 = ((x561-(x562%x563))|x564);

    if (t127 != -2510) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x565 = INT32_MIN;
	volatile uint32_t x566 = 14700U;
	static int16_t x568 = -2;
	uint32_t t128 = 1123038U;

    t128 = ((x565-(x566%x567))|x568);

    if (t128 != 4294967294U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x569 = INT32_MIN;
	int32_t x570 = INT32_MAX;
	int64_t x572 = INT64_MIN;
	volatile int64_t t129 = 4787148690015195LL;

    t129 = ((x569-(x570%x571))|x572);

    if (t129 != -2147483679LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x573 = -4287733;
	int64_t x574 = INT64_MIN;
	static int64_t x575 = INT64_MAX;
	int8_t x576 = -13;
	int64_t t130 = 315542067087040LL;

    t130 = ((x573-(x574%x575))|x576);

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x577 = 11771U;
	int32_t x578 = INT32_MIN;
	int64_t x579 = INT64_MAX;
	static int64_t x580 = INT64_MIN;

    t131 = ((x577-(x578%x579))|x580);

    if (t131 != -9223372034707280389LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x581 = UINT64_MAX;
	uint16_t x582 = 0U;
	uint64_t x583 = 6836176306879LLU;
	uint16_t x584 = UINT16_MAX;
	uint64_t t132 = UINT64_MAX;

    t132 = ((x581-(x582%x583))|x584);

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x587 = UINT32_MAX;
	int8_t x588 = INT8_MIN;
	static volatile int64_t t133 = 972471189981309187LL;

    t133 = ((x585-(x586%x587))|x588);

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x589 = INT64_MIN;
	volatile int32_t x590 = INT32_MIN;
	int32_t x591 = 15;
	int8_t x592 = INT8_MAX;
	static int64_t t134 = -36266LL;

    t134 = ((x589-(x590%x591))|x592);

    if (t134 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x593 = INT32_MIN;
	int8_t x594 = -1;
	uint32_t x595 = 15402U;
	volatile uint32_t t135 = 430534U;

    t135 = ((x593-(x594%x595))|x596);

    if (t135 != 4294967291U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x597 = 1982U;
	volatile int8_t x598 = 1;
	volatile uint16_t x599 = UINT16_MAX;
	uint16_t x600 = 124U;
	static volatile int32_t t136 = 3924551;

    t136 = ((x597-(x598%x599))|x600);

    if (t136 != 2045) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x601 = UINT64_MAX;
	volatile uint32_t x602 = UINT32_MAX;
	uint64_t t137 = UINT64_MAX;

    t137 = ((x601-(x602%x603))|x604);

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x609 = 37;
	int16_t x610 = 0;
	uint32_t x611 = UINT32_MAX;
	static volatile uint32_t t138 = 59U;

    t138 = ((x609-(x610%x611))|x612);

    if (t138 != 16037557U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x613 = 3900585004431255LLU;
	uint8_t x614 = 0U;
	static int8_t x615 = -1;
	volatile int32_t x616 = -1;
	static uint64_t t139 = UINT64_MAX;

    t139 = ((x613-(x614%x615))|x616);

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x617 = INT64_MIN;
	volatile int32_t x618 = -1;
	int32_t x619 = -1439024;
	int64_t x620 = INT64_MAX;
	int64_t t140 = -59588339LL;

    t140 = ((x617-(x618%x619))|x620);

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x622 = INT16_MIN;
	int64_t x623 = -4104066700LL;
	int64_t t141 = -725317LL;

    t141 = ((x621-(x622%x623))|x624);

    if (t141 != 32811LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x625 = 0U;
	uint32_t x626 = UINT32_MAX;
	int8_t x627 = -1;
	static int8_t x628 = 46;

    t142 = ((x625-(x626%x627))|x628);

    if (t142 != 46U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x629 = 993055LL;
	static uint16_t x630 = 4769U;
	static volatile uint16_t x631 = UINT16_MAX;
	int16_t x632 = INT16_MIN;
	volatile int64_t t143 = 443329LL;

    t143 = ((x629-(x630%x631))|x632);

    if (t143 != -27522LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x633 = INT8_MIN;
	int32_t x634 = INT32_MIN;
	int16_t x635 = INT16_MIN;
	volatile int64_t t144 = 258750077388287LL;

    t144 = ((x633-(x634%x635))|x636);

    if (t144 != -121LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x637 = 141577;
	int16_t x638 = INT16_MAX;
	int64_t x639 = INT64_MIN;
	uint64_t x640 = UINT64_MAX;
	static volatile uint64_t t145 = UINT64_MAX;

    t145 = ((x637-(x638%x639))|x640);

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x642 = UINT64_MAX;
	uint64_t t146 = 681650797398LLU;

    t146 = ((x641-(x642%x643))|x644);

    if (t146 != 9223372039002259405LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x645 = 18U;
	int16_t x646 = -132;
	int64_t x647 = INT64_MIN;
	volatile int64_t t147 = INT64_MAX;

    t147 = ((x645-(x646%x647))|x648);

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x649 = UINT32_MAX;
	int64_t x650 = -1LL;
	static volatile int64_t x651 = -1LL;

    t148 = ((x649-(x650%x651))|x652);

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x653 = UINT8_MAX;
	static int8_t x654 = INT8_MAX;
	volatile uint64_t x655 = 1295944200998LLU;
	int8_t x656 = INT8_MIN;
	uint64_t t149 = 143615662636LLU;

    t149 = ((x653-(x654%x655))|x656);

    if (t149 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x657 = 576658050LLU;
	int16_t x658 = 13575;
	volatile int8_t x659 = 1;
	volatile int16_t x660 = INT16_MAX;
	volatile uint64_t t150 = 65LLU;

    t150 = ((x657-(x658%x659))|x660);

    if (t150 != 576684031LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x661 = UINT16_MAX;
	uint32_t x662 = UINT32_MAX;
	int64_t x663 = 183083160350LL;
	int8_t x664 = INT8_MAX;
	int64_t t151 = 52073445LL;

    t151 = ((x661-(x662%x663))|x664);

    if (t151 != -4294901633LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x665 = 14;
	uint8_t x666 = 1U;
	int32_t x667 = -2;
	volatile int32_t x668 = INT32_MAX;
	volatile int32_t t152 = INT32_MAX;

    t152 = ((x665-(x666%x667))|x668);

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x669 = 8247153U;
	static int64_t x670 = -128325180LL;
	int16_t x672 = -1551;
	static int64_t t153 = 72801LL;

    t153 = ((x669-(x670%x671))|x672);

    if (t153 != -515LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x673 = 756666742864654LLU;
	uint16_t x674 = 216U;
	int16_t x675 = INT16_MAX;
	uint64_t t154 = 81579318LLU;

    t154 = ((x673-(x674%x675))|x676);

    if (t154 != 756666742864639LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x677 = UINT32_MAX;
	int16_t x678 = INT16_MAX;
	uint8_t x679 = UINT8_MAX;
	uint32_t x680 = 2775U;

    t155 = ((x677-(x678%x679))|x680);

    if (t155 != 4294967255U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x681 = INT8_MAX;
	volatile int16_t x683 = INT16_MIN;
	volatile uint32_t x684 = UINT32_MAX;
	uint32_t t156 = UINT32_MAX;

    t156 = ((x681-(x682%x683))|x684);

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x686 = UINT8_MAX;
	int16_t x687 = INT16_MAX;
	static uint8_t x688 = 0U;

    t157 = ((x685-(x686%x687))|x688);

    if (t157 != -256LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x690 = INT8_MIN;
	int8_t x691 = INT8_MIN;
	int16_t x692 = INT16_MIN;
	volatile int32_t t158 = 4045;

    t158 = ((x689-(x690%x691))|x692);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x693 = 720U;
	static volatile int16_t x695 = -1;
	uint16_t x696 = 2U;
	volatile int64_t t159 = 15372795225441701LL;

    t159 = ((x693-(x694%x695))|x696);

    if (t159 != 722LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x697 = -1;
	volatile int8_t x698 = INT8_MAX;
	uint64_t x699 = UINT64_MAX;
	volatile uint64_t t160 = UINT64_MAX;

    t160 = ((x697-(x698%x699))|x700);

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x702 = -1LL;
	int32_t x704 = INT32_MAX;
	int64_t t161 = -267160681102263LL;

    t161 = ((x701-(x702%x703))|x704);

    if (t161 != 4294967295LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x706 = 21587LLU;
	static int64_t x707 = -59861920372147481LL;
	uint64_t x708 = 0LLU;

    t162 = ((x705-(x706%x707))|x708);

    if (t162 != 18446744073709530028LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x709 = INT16_MAX;
	int32_t x710 = -1;
	int32_t x711 = -1;
	int32_t x712 = INT32_MAX;

    t163 = ((x709-(x710%x711))|x712);

    if (t163 != INT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x714 = INT32_MIN;
	uint32_t x715 = 418U;
	static int16_t x716 = 2;
	uint32_t t164 = 12683U;

    t164 = ((x713-(x714%x715))|x716);

    if (t164 != 4294967050U) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x717 = -74;
	int16_t x719 = -1;
	int32_t x720 = 229933;
	int32_t t165 = -213647;

    t165 = ((x717-(x718%x719))|x720);

    if (t165 != -65) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x721 = INT64_MAX;
	volatile uint32_t x722 = 3U;
	static int64_t x723 = INT64_MIN;
	int64_t t166 = INT64_MAX;

    t166 = ((x721-(x722%x723))|x724);

    if (t166 != INT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x725 = 48U;
	uint16_t x726 = 10025U;
	int64_t x727 = -1LL;
	static uint16_t x728 = 2U;

    t167 = ((x725-(x726%x727))|x728);

    if (t167 != 50LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x730 = -1LL;
	int64_t t168 = 229453634874070231LL;

    t168 = ((x729-(x730%x731))|x732);

    if (t168 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x733 = UINT8_MAX;
	int64_t x736 = INT64_MIN;
	static volatile int64_t t169 = -1102904788342460668LL;

    t169 = ((x733-(x734%x735))|x736);

    if (t169 != -9223372036854775760LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x737 = -62LL;
	static uint32_t x738 = 500310341U;
	int64_t x739 = INT64_MAX;
	int64_t t170 = 142876101556009895LL;

    t170 = ((x737-(x738%x739))|x740);

    if (t170 != -500301827LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x741 = 0U;
	int8_t x742 = 1;
	volatile uint16_t x743 = UINT16_MAX;
	uint32_t x744 = UINT32_MAX;

    t171 = ((x741-(x742%x743))|x744);

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x745 = INT32_MIN;
	static int8_t x746 = INT8_MIN;
	uint64_t x747 = 60LLU;
	uint32_t x748 = 357239752U;
	volatile uint64_t t172 = 108313379LLU;

    t172 = ((x745-(x746%x747))|x748);

    if (t172 != 18446744071562067960LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x753 = UINT8_MAX;
	int16_t x754 = -53;
	volatile int64_t t173 = -39463212067LL;

    t173 = ((x753-(x754%x755))|x756);

    if (t173 != -326752324LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x757 = 14U;
	uint64_t x758 = UINT64_MAX;
	int32_t x759 = -1;
	volatile uint16_t x760 = UINT16_MAX;
	uint64_t t174 = 20846141LLU;

    t174 = ((x757-(x758%x759))|x760);

    if (t174 != 65535LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x761 = INT64_MAX;
	volatile uint8_t x762 = UINT8_MAX;
	static uint16_t x763 = 1623U;
	uint8_t x764 = 0U;
	volatile int64_t t175 = 1LL;

    t175 = ((x761-(x762%x763))|x764);

    if (t175 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x765 = INT64_MIN;
	static int32_t x766 = -1150504;
	static int64_t x767 = INT64_MIN;
	volatile int8_t x768 = INT8_MAX;
	volatile int64_t t176 = 249513068082772LL;

    t176 = ((x765-(x766%x767))|x768);

    if (t176 != -9223372036853625217LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x769 = -930;
	int8_t x770 = INT8_MIN;
	int32_t x771 = -1;
	int32_t x772 = 61722461;
	volatile int32_t t177 = -6218;

    t177 = ((x769-(x770%x771))|x772);

    if (t177 != -161) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x773 = INT64_MIN;
	int16_t x774 = -38;
	int64_t x775 = INT64_MIN;

    t178 = ((x773-(x774%x775))|x776);

    if (t178 != -90LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x777 = UINT8_MAX;
	int16_t x778 = -1;
	int32_t x779 = INT32_MIN;
	uint32_t x780 = 111323226U;
	static volatile uint32_t t179 = 12994102U;

    t179 = ((x777-(x778%x779))|x780);

    if (t179 != 111323482U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x781 = INT8_MIN;
	static int8_t x782 = INT8_MIN;
	static volatile int16_t x784 = -1;
	int32_t t180 = -3987662;

    t180 = ((x781-(x782%x783))|x784);

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x785 = INT8_MIN;
	int32_t x786 = INT32_MAX;
	int8_t x788 = -1;
	static int32_t t181 = -1;

    t181 = ((x785-(x786%x787))|x788);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x791 = -1;
	static int64_t x792 = 17LL;
	int64_t t182 = 16LL;

    t182 = ((x789-(x790%x791))|x792);

    if (t182 != 26933LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x794 = UINT64_MAX;
	int32_t x795 = 2426719;
	int16_t x796 = INT16_MIN;
	static volatile uint64_t t183 = 3078565693LLU;

    t183 = ((x793-(x794%x795))|x796);

    if (t183 != 18446744073709541214LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x797 = INT32_MIN;
	static int8_t x800 = INT8_MIN;
	volatile int32_t t184 = 169884;

    t184 = ((x797-(x798%x799))|x800);

    if (t184 != -123) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x801 = 0;
	int16_t x802 = INT16_MIN;
	uint8_t x803 = 8U;
	int8_t x804 = INT8_MIN;
	int32_t t185 = -1369506;

    t185 = ((x801-(x802%x803))|x804);

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x805 = -7;
	int16_t x806 = INT16_MIN;
	static uint16_t x807 = 5256U;
	static uint8_t x808 = 19U;
	static volatile int32_t t186 = 75693615;

    t186 = ((x805-(x806%x807))|x808);

    if (t186 != 1243) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x809 = INT8_MAX;
	static volatile int32_t x810 = 26967;
	static volatile int32_t x811 = 2792;
	int64_t x812 = INT64_MIN;

    t187 = ((x809-(x810%x811))|x812);

    if (t187 != -1712LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x813 = -1;
	uint32_t x814 = 559309U;
	volatile int32_t x815 = -31;
	volatile uint64_t x816 = 4137850924166971055LLU;
	volatile uint64_t t188 = 4632161610939176223LLU;

    t188 = ((x813-(x814%x815))|x816);

    if (t188 != 4137850928386506687LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x817 = 10695444LL;
	static int32_t x818 = 6565;
	volatile uint8_t x819 = UINT8_MAX;
	int64_t t189 = -577372LL;

    t189 = ((x817-(x818%x819))|x820);

    if (t189 != -9223372036844080554LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x821 = 8044325935LLU;
	int16_t x824 = INT16_MIN;
	uint64_t t190 = 2732086216671474720LLU;

    t190 = ((x821-(x822%x823))|x824);

    if (t190 != 18446744073709541485LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x825 = UINT64_MAX;
	volatile int64_t x826 = INT64_MIN;
	int64_t x827 = INT64_MAX;
	uint64_t t191 = 13512538748577LLU;

    t191 = ((x825-(x826%x827))|x828);

    if (t191 != 65535LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x829 = 0;
	int16_t x830 = INT16_MIN;
	int16_t x831 = -40;
	volatile int64_t x832 = 1LL;
	static volatile int64_t t192 = 371LL;

    t192 = ((x829-(x830%x831))|x832);

    if (t192 != 9LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x833 = UINT64_MAX;
	static uint32_t x834 = 124503507U;
	static int64_t x835 = 53580944LL;
	uint64_t t193 = 264130185397380LLU;

    t193 = ((x833-(x834%x835))|x836);

    if (t193 != 18446744073692210175LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x838 = -647811457517057034LL;
	int64_t x840 = -127332501LL;
	int64_t t194 = 316502701619244LL;

    t194 = ((x837-(x838%x839))|x840);

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x841 = INT16_MAX;
	int64_t x842 = -40104389460LL;
	static volatile int16_t x843 = -1;
	volatile uint8_t x844 = 80U;
	int64_t t195 = 2LL;

    t195 = ((x841-(x842%x843))|x844);

    if (t195 != 32767LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x845 = 49U;
	volatile int16_t x846 = INT16_MAX;
	int64_t x847 = -52150LL;
	int8_t x848 = INT8_MIN;
	volatile int64_t t196 = -309367LL;

    t196 = ((x845-(x846%x847))|x848);

    if (t196 != -78LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x849 = 4681444819451594LLU;
	int32_t x850 = 1;
	static int32_t x851 = INT32_MAX;
	static uint64_t t197 = UINT64_MAX;

    t197 = ((x849-(x850%x851))|x852);

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x853 = 18;
	volatile int64_t t198 = -175334509423080LL;

    t198 = ((x853-(x854%x855))|x856);

    if (t198 != -9LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x857 = 354U;
	uint64_t x858 = UINT64_MAX;
	int32_t x859 = 1;
	int8_t x860 = INT8_MAX;
	volatile uint64_t t199 = 7003032556LLU;

    t199 = ((x857-(x858%x859))|x860);

    if (t199 != 383LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

