
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

int8_t x5 = INT8_MAX;
int32_t x16 = INT32_MIN;
volatile int32_t t3 = -1;
int64_t x20 = INT64_MIN;
int32_t x27 = 12715;
uint32_t x30 = 94U;
int32_t x40 = -1;
int32_t t10 = 0;
volatile int32_t t11 = -115067569;
volatile uint16_t x49 = UINT16_MAX;
int32_t x52 = -49429219;
int16_t x53 = INT16_MIN;
int8_t x55 = 18;
int32_t t13 = -597803746;
int32_t x59 = INT32_MIN;
static uint32_t x61 = 116U;
int8_t x69 = 1;
static volatile int32_t t17 = 0;
int32_t x73 = -1;
static int32_t x79 = INT32_MIN;
volatile int32_t t19 = 8;
int32_t x99 = -10;
int32_t x100 = 0;
volatile int8_t x105 = 0;
static uint8_t x107 = 6U;
static int16_t x112 = 499;
static int16_t x116 = 0;
static volatile int16_t x123 = INT16_MIN;
volatile uint8_t x128 = 1U;
uint32_t x130 = 868738919U;
int16_t x133 = -1;
uint32_t x136 = UINT32_MAX;
int32_t x137 = -1;
int64_t x138 = -228364080361979LL;
static volatile int32_t t31 = 5786;
static int64_t x141 = -1LL;
static int64_t x152 = INT64_MAX;
int16_t x159 = -1;
volatile int32_t t36 = 2091191;
static int32_t t39 = 9670997;
uint8_t x175 = UINT8_MAX;
volatile uint16_t x178 = 7134U;
int64_t x184 = -112519617LL;
uint32_t x188 = 52843U;
volatile uint16_t x191 = 227U;
volatile uint16_t x193 = 22U;
static volatile int32_t x202 = INT32_MIN;
int8_t x208 = INT8_MIN;
uint8_t x209 = UINT8_MAX;
volatile int32_t t49 = 14026;
volatile int32_t t50 = 52037813;
int32_t x217 = -215;
int64_t x226 = 15LL;
static volatile uint16_t x227 = UINT16_MAX;
uint16_t x229 = 16U;
volatile uint64_t x231 = UINT64_MAX;
static volatile int32_t t54 = -13354;
volatile int16_t x238 = -905;
uint16_t x244 = 9518U;
static int32_t t59 = -18960553;
int32_t x258 = INT32_MIN;
uint64_t x259 = 339058358LLU;
int8_t x262 = 1;
volatile int16_t x266 = INT16_MAX;
int32_t t62 = 2502499;
int32_t t64 = 167159;
int16_t x278 = -1;
uint16_t x290 = UINT16_MAX;
int32_t t68 = -34470;
static int8_t x294 = INT8_MAX;
int8_t x298 = INT8_MAX;
static int32_t x303 = INT32_MIN;
volatile int32_t x304 = -60834;
volatile int16_t x305 = INT16_MIN;
uint8_t x313 = 23U;
int64_t x323 = INT64_MAX;
volatile int32_t t76 = 0;
uint16_t x332 = 6567U;
static int32_t x335 = -329;
int16_t x340 = INT16_MIN;
volatile uint16_t x351 = 2376U;
uint8_t x353 = UINT8_MAX;
static int64_t x355 = -26LL;
int64_t x356 = -1LL;
volatile int8_t x364 = -1;
int64_t x366 = -1LL;
int32_t t87 = -49;
static int16_t x369 = INT16_MIN;
uint16_t x370 = 326U;
static int32_t t89 = -302719137;
static int32_t t90 = -1692;
uint64_t x381 = UINT64_MAX;
int16_t x383 = INT16_MAX;
uint32_t x384 = UINT32_MAX;
int16_t x387 = -1;
int32_t t92 = -121717;
volatile uint64_t x392 = 52228609480LLU;
int64_t x397 = 84747105317908408LL;
volatile int64_t x400 = INT64_MAX;
int32_t x410 = INT32_MIN;
volatile int8_t x414 = -1;
int32_t x415 = INT32_MIN;
int32_t x416 = -60219968;
static int32_t t99 = 4149;
int64_t x425 = INT64_MAX;
uint32_t x426 = 30983653U;
volatile uint32_t x437 = UINT32_MAX;
uint32_t x452 = 518U;
volatile int32_t t106 = -683664180;
uint8_t x455 = 2U;
static volatile int32_t t107 = -123406112;
int64_t x458 = 8420701512614LL;
int64_t x468 = 4651LL;
volatile int32_t t110 = 19280;
volatile int32_t t111 = 7198;
int32_t t112 = 490;
int64_t x479 = INT64_MIN;
volatile uint8_t x482 = 14U;
int32_t x486 = INT32_MIN;
int32_t t116 = -222;
static volatile int32_t x498 = -161541;
uint8_t x501 = 61U;
int8_t x503 = 9;
int8_t x505 = INT8_MAX;
uint32_t x513 = 44230U;
uint64_t x514 = UINT64_MAX;
volatile int32_t t124 = 240330869;
int8_t x529 = -1;
static int32_t t125 = -1387622;
int8_t x538 = -1;
int8_t x546 = INT8_MAX;
volatile uint32_t x547 = UINT32_MAX;
int32_t x549 = INT32_MIN;
static int16_t x551 = INT16_MIN;
static int32_t t129 = -1511;
static volatile int32_t t132 = -1;
int64_t x566 = 74150601168537872LL;
uint32_t x568 = 1493U;
volatile int16_t x569 = -1;
static uint16_t x571 = 5092U;
static uint8_t x579 = 21U;
int16_t x581 = INT16_MAX;
int32_t t138 = -27;
int32_t x590 = INT32_MIN;
int8_t x597 = -2;
static int8_t x608 = INT8_MAX;
int32_t x615 = -21105;
uint32_t x616 = UINT32_MAX;
volatile uint8_t x622 = 32U;
int16_t x632 = 3;
uint16_t x645 = 13U;
volatile int32_t t151 = 19;
volatile int8_t x658 = -1;
static int32_t x659 = -58;
volatile int32_t t153 = -209;
volatile int32_t x663 = -1;
volatile int32_t t154 = -49755387;
int32_t x674 = 23512750;
int8_t x675 = INT8_MIN;
volatile int32_t t157 = -2;
static int64_t x677 = -1LL;
uint64_t x686 = 8894633315459386900LLU;
uint64_t x694 = 4770747647LLU;
int8_t x696 = INT8_MIN;
int64_t x697 = INT64_MAX;
int16_t x699 = -1;
int8_t x703 = -1;
static volatile int32_t t164 = 46285093;
uint16_t x707 = 51U;
int16_t x708 = -1;
static volatile int8_t x710 = 19;
int8_t x724 = INT8_MAX;
int64_t x737 = INT64_MAX;
static int32_t x741 = INT32_MAX;
uint64_t x743 = UINT64_MAX;
volatile int64_t x747 = INT64_MAX;
int64_t x751 = 15LL;
uint32_t x757 = UINT32_MAX;
uint32_t x767 = 4593U;
int32_t x769 = INT32_MIN;
int32_t x771 = -1;
int8_t x780 = INT8_MIN;
int64_t x781 = -1424784LL;
int8_t x787 = INT8_MIN;
volatile int32_t t186 = 986;
int8_t x801 = -27;
uint16_t x812 = 2810U;
volatile int32_t t189 = -870;
uint64_t x824 = 10662885LLU;
int16_t x826 = INT16_MIN;
int32_t t193 = -4831655;
uint8_t x834 = 94U;
static volatile int32_t x836 = -1;
static uint32_t x841 = 11067U;
volatile int16_t x851 = -4372;
int16_t x856 = -6;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	uint64_t x2 = UINT64_MAX;
	int32_t x3 = -1;
	int64_t x4 = INT64_MAX;
	volatile int32_t t0 = 274414140;

    t0 = (((x1/x2)/x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = UINT32_MAX;
	uint32_t x7 = 15709U;
	uint8_t x8 = UINT8_MAX;
	static volatile int32_t t1 = 33;

    t1 = (((x5/x6)/x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = -41573833;
	static volatile int32_t x10 = 10;
	volatile int64_t x11 = -1LL;
	uint32_t x12 = 7U;
	static int32_t t2 = -20;

    t2 = (((x9/x10)/x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int16_t x14 = 1;
	static uint16_t x15 = UINT16_MAX;

    t3 = (((x13/x14)/x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	uint32_t x18 = 238U;
	volatile int16_t x19 = INT16_MAX;
	int32_t t4 = 3;

    t4 = (((x17/x18)/x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 45U;
	int64_t x22 = 1691260533342LL;
	uint16_t x23 = 7827U;
	uint32_t x24 = 226563U;
	int32_t t5 = -2793;

    t5 = (((x21/x22)/x23)>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -18;
	int64_t x26 = INT64_MIN;
	static int32_t x28 = INT32_MAX;
	volatile int32_t t6 = -108682;

    t6 = (((x25/x26)/x27)>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 66;
	static int64_t x31 = INT64_MAX;
	uint8_t x32 = UINT8_MAX;
	int32_t t7 = 4175;

    t7 = (((x29/x30)/x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -2670373;
	static int32_t x34 = -1;
	int32_t x35 = INT32_MAX;
	volatile int8_t x36 = INT8_MIN;
	int32_t t8 = -88;

    t8 = (((x33/x34)/x35)>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	int16_t x38 = 11662;
	int64_t x39 = INT64_MAX;
	volatile int32_t t9 = 258990;

    t9 = (((x37/x38)/x39)>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = -1;
	volatile int64_t x42 = INT64_MIN;
	uint16_t x43 = UINT16_MAX;
	volatile int32_t x44 = -25;

    t10 = (((x41/x42)/x43)>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 57582648;
	int8_t x46 = INT8_MIN;
	volatile int64_t x47 = INT64_MIN;
	uint16_t x48 = UINT16_MAX;

    t11 = (((x45/x46)/x47)>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x50 = UINT8_MAX;
	volatile uint16_t x51 = 11U;
	volatile int32_t t12 = -647244;

    t12 = (((x49/x50)/x51)>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x54 = INT64_MIN;
	int64_t x56 = INT64_MIN;

    t13 = (((x53/x54)/x55)>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = INT8_MIN;
	uint64_t x58 = 1561037111576460LLU;
	volatile int32_t x60 = INT32_MAX;
	static volatile int32_t t14 = 63957;

    t14 = (((x57/x58)/x59)>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x62 = 28U;
	int8_t x63 = -1;
	int8_t x64 = INT8_MIN;
	int32_t t15 = -522222;

    t15 = (((x61/x62)/x63)>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = UINT32_MAX;
	static uint64_t x66 = 8LLU;
	volatile uint32_t x67 = 5247599U;
	static int8_t x68 = INT8_MIN;
	int32_t t16 = 18;

    t16 = (((x65/x66)/x67)>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = -1;
	static int32_t x71 = -1;
	int8_t x72 = INT8_MAX;

    t17 = (((x69/x70)/x71)>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x74 = INT64_MAX;
	uint8_t x75 = 13U;
	static uint32_t x76 = UINT32_MAX;
	int32_t t18 = -1;

    t18 = (((x73/x74)/x75)>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 2U;
	static volatile uint16_t x78 = 12661U;
	uint32_t x80 = 116U;

    t19 = (((x77/x78)/x79)>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = -86457LL;
	uint8_t x86 = 1U;
	int16_t x87 = INT16_MIN;
	volatile int64_t x88 = INT64_MIN;
	int32_t t20 = -1874925;

    t20 = (((x85/x86)/x87)>x88);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x89 = 1U;
	uint8_t x90 = 25U;
	int16_t x91 = 11;
	static volatile int8_t x92 = -28;
	static volatile int32_t t21 = 819691;

    t21 = (((x89/x90)/x91)>x92);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = INT64_MIN;
	int32_t x94 = 10247320;
	volatile uint32_t x95 = 11107690U;
	volatile int64_t x96 = INT64_MIN;
	int32_t t22 = 236;

    t22 = (((x93/x94)/x95)>x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = INT32_MAX;
	uint8_t x98 = 2U;
	volatile int32_t t23 = -6;

    t23 = (((x97/x98)/x99)>x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x106 = INT8_MIN;
	int8_t x108 = 3;
	int32_t t24 = -17962881;

    t24 = (((x105/x106)/x107)>x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x109 = INT8_MAX;
	volatile int64_t x110 = 101073LL;
	static uint16_t x111 = 9U;
	volatile int32_t t25 = -60750;

    t25 = (((x109/x110)/x111)>x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x113 = -1;
	static int64_t x114 = 1036238566766931534LL;
	int32_t x115 = -1;
	volatile int32_t t26 = -42330578;

    t26 = (((x113/x114)/x115)>x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x121 = -88;
	static uint64_t x122 = 53370LLU;
	int16_t x124 = -1;
	volatile int32_t t27 = 859578;

    t27 = (((x121/x122)/x123)>x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x125 = 36LLU;
	uint16_t x126 = 981U;
	volatile int16_t x127 = INT16_MIN;
	static int32_t t28 = 15657569;

    t28 = (((x125/x126)/x127)>x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x129 = 7600U;
	static volatile uint8_t x131 = UINT8_MAX;
	static int32_t x132 = -1;
	int32_t t29 = 949696674;

    t29 = (((x129/x130)/x131)>x132);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x134 = INT64_MIN;
	static uint16_t x135 = 28973U;
	int32_t t30 = -3257522;

    t30 = (((x133/x134)/x135)>x136);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x139 = INT64_MAX;
	volatile int8_t x140 = 3;

    t31 = (((x137/x138)/x139)>x140);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint32_t x142 = UINT32_MAX;
	uint32_t x143 = 1020U;
	volatile int32_t x144 = INT32_MAX;
	int32_t t32 = 757981;

    t32 = (((x141/x142)/x143)>x144);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x145 = -54;
	static int16_t x146 = INT16_MIN;
	uint8_t x147 = 74U;
	volatile int16_t x148 = 0;
	volatile int32_t t33 = 3077;

    t33 = (((x145/x146)/x147)>x148);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x149 = INT16_MAX;
	static int16_t x150 = -1;
	int64_t x151 = 15642534961430981LL;
	int32_t t34 = 6988;

    t34 = (((x149/x150)/x151)>x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x153 = 746273U;
	int64_t x154 = INT64_MIN;
	static int16_t x155 = INT16_MAX;
	static uint32_t x156 = 11U;
	int32_t t35 = 0;

    t35 = (((x153/x154)/x155)>x156);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x157 = 515352208U;
	volatile int8_t x158 = INT8_MIN;
	static volatile int32_t x160 = 56037408;

    t36 = (((x157/x158)/x159)>x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x161 = INT16_MIN;
	static uint8_t x162 = 14U;
	static int8_t x163 = -3;
	uint8_t x164 = UINT8_MAX;
	int32_t t37 = -77386;

    t37 = (((x161/x162)/x163)>x164);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x165 = 5322737405555LLU;
	int64_t x166 = -20493742480LL;
	int16_t x167 = INT16_MIN;
	static int32_t x168 = INT32_MAX;
	int32_t t38 = -343;

    t38 = (((x165/x166)/x167)>x168);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x169 = -7LL;
	uint64_t x170 = 8562885108784522LLU;
	uint16_t x171 = UINT16_MAX;
	int16_t x172 = -1;

    t39 = (((x169/x170)/x171)>x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x173 = INT16_MAX;
	uint8_t x174 = UINT8_MAX;
	int16_t x176 = 7974;
	int32_t t40 = -62;

    t40 = (((x173/x174)/x175)>x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x177 = -1597734806512750LL;
	int32_t x179 = INT32_MAX;
	int8_t x180 = 5;
	int32_t t41 = -92152;

    t41 = (((x177/x178)/x179)>x180);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = INT8_MAX;
	volatile int64_t x182 = INT64_MIN;
	int8_t x183 = INT8_MAX;
	int32_t t42 = 514708;

    t42 = (((x181/x182)/x183)>x184);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x185 = -1LL;
	volatile int8_t x186 = -41;
	volatile uint32_t x187 = UINT32_MAX;
	static volatile int32_t t43 = -27345866;

    t43 = (((x185/x186)/x187)>x188);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x189 = 16851LL;
	static volatile uint64_t x190 = 4LLU;
	uint8_t x192 = 41U;
	int32_t t44 = 1;

    t44 = (((x189/x190)/x191)>x192);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x194 = 1U;
	static uint8_t x195 = 14U;
	int16_t x196 = INT16_MIN;
	static int32_t t45 = -51;

    t45 = (((x193/x194)/x195)>x196);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x197 = -2;
	static uint16_t x198 = 2U;
	int16_t x199 = -1;
	static uint64_t x200 = 14061414403LLU;
	volatile int32_t t46 = -3625;

    t46 = (((x197/x198)/x199)>x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = INT8_MIN;
	uint8_t x203 = 1U;
	int16_t x204 = INT16_MIN;
	volatile int32_t t47 = -697146;

    t47 = (((x201/x202)/x203)>x204);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x205 = INT64_MAX;
	static volatile uint8_t x206 = 1U;
	int64_t x207 = INT64_MIN;
	static volatile int32_t t48 = 523;

    t48 = (((x205/x206)/x207)>x208);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x210 = INT32_MIN;
	int64_t x211 = -1LL;
	int16_t x212 = INT16_MIN;

    t49 = (((x209/x210)/x211)>x212);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x213 = -1;
	volatile int16_t x214 = -3725;
	static uint16_t x215 = 6606U;
	uint32_t x216 = 443U;

    t50 = (((x213/x214)/x215)>x216);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x218 = INT32_MIN;
	int32_t x219 = INT32_MIN;
	int32_t x220 = INT32_MIN;
	int32_t t51 = 4022576;

    t51 = (((x217/x218)/x219)>x220);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x225 = INT8_MIN;
	int32_t x228 = INT32_MIN;
	volatile int32_t t52 = 26396807;

    t52 = (((x225/x226)/x227)>x228);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x230 = -81796794881502343LL;
	static int8_t x232 = INT8_MIN;
	volatile int32_t t53 = -405;

    t53 = (((x229/x230)/x231)>x232);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x233 = 15471U;
	uint16_t x234 = 4U;
	uint8_t x235 = 1U;
	uint8_t x236 = 3U;

    t54 = (((x233/x234)/x235)>x236);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x237 = 7983LLU;
	int8_t x239 = -1;
	static uint32_t x240 = UINT32_MAX;
	static volatile int32_t t55 = -1;

    t55 = (((x237/x238)/x239)>x240);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint64_t x241 = 5240632LLU;
	volatile uint16_t x242 = UINT16_MAX;
	volatile int8_t x243 = INT8_MIN;
	volatile int32_t t56 = 1;

    t56 = (((x241/x242)/x243)>x244);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x245 = UINT16_MAX;
	volatile int8_t x246 = 14;
	int8_t x247 = -1;
	uint32_t x248 = 124406609U;
	volatile int32_t t57 = -1536;

    t57 = (((x245/x246)/x247)>x248);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int8_t x249 = -1;
	static uint16_t x250 = 122U;
	static int32_t x251 = -753054;
	uint8_t x252 = 2U;
	static int32_t t58 = 2771;

    t58 = (((x249/x250)/x251)>x252);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x253 = UINT64_MAX;
	volatile int16_t x254 = 1;
	int64_t x255 = INT64_MIN;
	volatile int32_t x256 = INT32_MIN;

    t59 = (((x253/x254)/x255)>x256);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x257 = INT32_MAX;
	uint64_t x260 = UINT64_MAX;
	int32_t t60 = 6135223;

    t60 = (((x257/x258)/x259)>x260);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x261 = -1LL;
	uint64_t x263 = UINT64_MAX;
	int64_t x264 = INT64_MAX;
	volatile int32_t t61 = 494099;

    t61 = (((x261/x262)/x263)>x264);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x265 = INT32_MIN;
	static int8_t x267 = INT8_MIN;
	int16_t x268 = INT16_MAX;

    t62 = (((x265/x266)/x267)>x268);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x269 = -688260219136LL;
	int16_t x270 = -8;
	int8_t x271 = INT8_MAX;
	volatile int8_t x272 = INT8_MIN;
	int32_t t63 = -22057812;

    t63 = (((x269/x270)/x271)>x272);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x273 = 3;
	uint16_t x274 = 24U;
	static uint64_t x275 = 59LLU;
	int32_t x276 = -1;

    t64 = (((x273/x274)/x275)>x276);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x277 = 3516063U;
	volatile int64_t x279 = -1LL;
	uint32_t x280 = 44U;
	volatile int32_t t65 = 1478;

    t65 = (((x277/x278)/x279)>x280);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x281 = 24U;
	uint64_t x282 = UINT64_MAX;
	volatile int16_t x283 = INT16_MIN;
	volatile int16_t x284 = INT16_MIN;
	int32_t t66 = -81984;

    t66 = (((x281/x282)/x283)>x284);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x285 = INT16_MAX;
	int32_t x286 = INT32_MAX;
	int32_t x287 = INT32_MIN;
	static int64_t x288 = INT64_MIN;
	volatile int32_t t67 = -14372;

    t67 = (((x285/x286)/x287)>x288);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x289 = 1;
	volatile uint16_t x291 = UINT16_MAX;
	static int16_t x292 = INT16_MIN;

    t68 = (((x289/x290)/x291)>x292);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x293 = 134LLU;
	int64_t x295 = INT64_MIN;
	volatile int16_t x296 = -1;
	static volatile int32_t t69 = 872755;

    t69 = (((x293/x294)/x295)>x296);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x297 = INT16_MIN;
	volatile int16_t x299 = -1;
	volatile int16_t x300 = -1;
	volatile int32_t t70 = -821;

    t70 = (((x297/x298)/x299)>x300);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x301 = INT8_MAX;
	uint32_t x302 = 23U;
	static volatile int32_t t71 = -723262154;

    t71 = (((x301/x302)/x303)>x304);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x306 = INT8_MAX;
	int32_t x307 = -94856;
	int8_t x308 = INT8_MIN;
	int32_t t72 = -7326976;

    t72 = (((x305/x306)/x307)>x308);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x309 = -1;
	int16_t x310 = INT16_MAX;
	uint32_t x311 = UINT32_MAX;
	static int16_t x312 = -12;
	volatile int32_t t73 = 10160;

    t73 = (((x309/x310)/x311)>x312);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x314 = 2442588;
	int8_t x315 = INT8_MAX;
	volatile int16_t x316 = INT16_MIN;
	static volatile int32_t t74 = -53918201;

    t74 = (((x313/x314)/x315)>x316);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x317 = UINT64_MAX;
	volatile uint16_t x318 = UINT16_MAX;
	uint64_t x319 = 17939017888750842LLU;
	uint8_t x320 = UINT8_MAX;
	int32_t t75 = -287698;

    t75 = (((x317/x318)/x319)>x320);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x321 = INT8_MIN;
	uint32_t x322 = 690U;
	volatile int64_t x324 = INT64_MAX;

    t76 = (((x321/x322)/x323)>x324);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x325 = UINT64_MAX;
	volatile int16_t x326 = 7;
	volatile int64_t x327 = INT64_MIN;
	volatile uint8_t x328 = 14U;
	static int32_t t77 = -3;

    t77 = (((x325/x326)/x327)>x328);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x329 = 331U;
	int64_t x330 = 229LL;
	int64_t x331 = 29898260LL;
	volatile int32_t t78 = -2025;

    t78 = (((x329/x330)/x331)>x332);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x333 = INT16_MAX;
	static int8_t x334 = -1;
	volatile int8_t x336 = INT8_MAX;
	int32_t t79 = 427;

    t79 = (((x333/x334)/x335)>x336);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x337 = -1;
	static int16_t x338 = INT16_MAX;
	int32_t x339 = INT32_MIN;
	static int32_t t80 = 43863580;

    t80 = (((x337/x338)/x339)>x340);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x341 = -1;
	static uint64_t x342 = UINT64_MAX;
	volatile int64_t x343 = INT64_MAX;
	int8_t x344 = -14;
	volatile int32_t t81 = 0;

    t81 = (((x341/x342)/x343)>x344);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x345 = INT64_MAX;
	static volatile int32_t x346 = -1;
	static uint64_t x347 = 20849755LLU;
	int64_t x348 = -1LL;
	int32_t t82 = -1;

    t82 = (((x345/x346)/x347)>x348);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x349 = -1;
	int8_t x350 = -25;
	int32_t x352 = 8878573;
	volatile int32_t t83 = -2;

    t83 = (((x349/x350)/x351)>x352);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint16_t x354 = 11U;
	static volatile int32_t t84 = 142650742;

    t84 = (((x353/x354)/x355)>x356);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x357 = -211092596489877403LL;
	uint64_t x358 = UINT64_MAX;
	int16_t x359 = INT16_MIN;
	uint8_t x360 = 44U;
	volatile int32_t t85 = -2;

    t85 = (((x357/x358)/x359)>x360);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x361 = INT64_MAX;
	int32_t x362 = -1;
	uint8_t x363 = UINT8_MAX;
	static int32_t t86 = -12909589;

    t86 = (((x361/x362)/x363)>x364);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x365 = 30460U;
	uint32_t x367 = 26668U;
	int32_t x368 = -3;

    t87 = (((x365/x366)/x367)>x368);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MAX;
	int32_t t88 = 9489594;

    t88 = (((x369/x370)/x371)>x372);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x373 = 7420511965931089005LLU;
	int32_t x374 = -1;
	int32_t x375 = -1;
	volatile int32_t x376 = -303003050;

    t89 = (((x373/x374)/x375)>x376);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x377 = INT16_MAX;
	volatile uint64_t x378 = 92LLU;
	int32_t x379 = INT32_MIN;
	int16_t x380 = -509;

    t90 = (((x377/x378)/x379)>x380);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x382 = 69U;
	volatile int32_t t91 = 265918826;

    t91 = (((x381/x382)/x383)>x384);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x385 = 79784;
	int32_t x386 = INT32_MIN;
	volatile int8_t x388 = 32;

    t92 = (((x385/x386)/x387)>x388);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x389 = INT16_MIN;
	volatile int32_t x390 = INT32_MIN;
	static int16_t x391 = INT16_MIN;
	int32_t t93 = 220812576;

    t93 = (((x389/x390)/x391)>x392);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x393 = INT8_MAX;
	int32_t x394 = INT32_MAX;
	uint64_t x395 = 336853926LLU;
	uint64_t x396 = 4440LLU;
	int32_t t94 = 31664;

    t94 = (((x393/x394)/x395)>x396);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x398 = INT8_MAX;
	uint8_t x399 = 3U;
	volatile int32_t t95 = -6460027;

    t95 = (((x397/x398)/x399)>x400);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x405 = 31;
	static int64_t x406 = INT64_MIN;
	int8_t x407 = -30;
	uint8_t x408 = 6U;
	int32_t t96 = -334832228;

    t96 = (((x405/x406)/x407)>x408);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x409 = 1519627118LL;
	static int32_t x411 = 6;
	int8_t x412 = INT8_MIN;
	int32_t t97 = -1025259;

    t97 = (((x409/x410)/x411)>x412);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x413 = INT64_MAX;
	volatile int32_t t98 = 531931;

    t98 = (((x413/x414)/x415)>x416);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x417 = INT16_MIN;
	volatile uint8_t x418 = 1U;
	volatile uint16_t x419 = UINT16_MAX;
	volatile int8_t x420 = -1;

    t99 = (((x417/x418)/x419)>x420);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x421 = INT32_MAX;
	uint8_t x422 = 6U;
	uint64_t x423 = UINT64_MAX;
	int32_t x424 = INT32_MAX;
	volatile int32_t t100 = -9574;

    t100 = (((x421/x422)/x423)>x424);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x427 = UINT16_MAX;
	volatile uint16_t x428 = 14355U;
	volatile int32_t t101 = 693;

    t101 = (((x425/x426)/x427)>x428);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x429 = 770536;
	int16_t x430 = -1;
	static uint32_t x431 = 900555U;
	int64_t x432 = -1LL;
	static int32_t t102 = 1;

    t102 = (((x429/x430)/x431)>x432);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x438 = INT8_MIN;
	volatile int8_t x439 = INT8_MAX;
	static int8_t x440 = -1;
	volatile int32_t t103 = 118;

    t103 = (((x437/x438)/x439)>x440);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x441 = INT8_MIN;
	int16_t x442 = 416;
	int32_t x443 = INT32_MIN;
	int64_t x444 = -69LL;
	int32_t t104 = -1;

    t104 = (((x441/x442)/x443)>x444);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x445 = -1;
	volatile int64_t x446 = -1375LL;
	static int16_t x447 = INT16_MIN;
	int16_t x448 = INT16_MIN;
	static volatile int32_t t105 = 27465046;

    t105 = (((x445/x446)/x447)>x448);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x449 = 5U;
	int32_t x450 = INT32_MIN;
	static int32_t x451 = INT32_MIN;

    t106 = (((x449/x450)/x451)>x452);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x453 = UINT64_MAX;
	volatile uint32_t x454 = 1119U;
	static volatile int8_t x456 = -1;

    t107 = (((x453/x454)/x455)>x456);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x457 = INT8_MIN;
	volatile int16_t x459 = INT16_MAX;
	volatile int64_t x460 = INT64_MIN;
	volatile int32_t t108 = 14756;

    t108 = (((x457/x458)/x459)>x460);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x461 = -16659842994252444LL;
	uint64_t x462 = 327884853LLU;
	static volatile int8_t x463 = -1;
	int64_t x464 = -1LL;
	int32_t t109 = 4641;

    t109 = (((x461/x462)/x463)>x464);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x465 = INT8_MAX;
	static uint16_t x466 = 1U;
	volatile int16_t x467 = -1;

    t110 = (((x465/x466)/x467)>x468);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x469 = -1;
	int32_t x470 = -367;
	int64_t x471 = INT64_MAX;
	uint16_t x472 = UINT16_MAX;

    t111 = (((x469/x470)/x471)>x472);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x473 = INT16_MIN;
	int64_t x474 = -119295309LL;
	int64_t x475 = -43819LL;
	int32_t x476 = -1;

    t112 = (((x473/x474)/x475)>x476);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x477 = -7;
	int64_t x478 = INT64_MIN;
	int32_t x480 = INT32_MIN;
	static volatile int32_t t113 = -1035667;

    t113 = (((x477/x478)/x479)>x480);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x481 = INT8_MIN;
	int64_t x483 = -1LL;
	int64_t x484 = -1LL;
	int32_t t114 = -39795022;

    t114 = (((x481/x482)/x483)>x484);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x485 = 4663009336204943LL;
	static int16_t x487 = INT16_MIN;
	static int8_t x488 = INT8_MIN;
	volatile int32_t t115 = -15495;

    t115 = (((x485/x486)/x487)>x488);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x489 = INT8_MIN;
	volatile uint8_t x490 = 12U;
	int8_t x491 = INT8_MIN;
	int8_t x492 = INT8_MAX;

    t116 = (((x489/x490)/x491)>x492);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x493 = UINT8_MAX;
	int32_t x494 = INT32_MAX;
	volatile int8_t x495 = -14;
	uint64_t x496 = UINT64_MAX;
	volatile int32_t t117 = -5390778;

    t117 = (((x493/x494)/x495)>x496);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x497 = -1LL;
	volatile uint64_t x499 = 8LLU;
	int64_t x500 = 209768589357586LL;
	int32_t t118 = -1;

    t118 = (((x497/x498)/x499)>x500);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x502 = INT64_MIN;
	volatile uint32_t x504 = 2194394U;
	volatile int32_t t119 = 240550;

    t119 = (((x501/x502)/x503)>x504);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x506 = 1275422549779LLU;
	volatile int8_t x507 = INT8_MAX;
	volatile int16_t x508 = -58;
	volatile int32_t t120 = 50;

    t120 = (((x505/x506)/x507)>x508);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x515 = -1;
	uint64_t x516 = 84649068979956LLU;
	volatile int32_t t121 = -1;

    t121 = (((x513/x514)/x515)>x516);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x517 = -1;
	uint16_t x518 = 25U;
	volatile int32_t x519 = -1;
	static int32_t x520 = INT32_MIN;
	int32_t t122 = 78187;

    t122 = (((x517/x518)/x519)>x520);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x521 = INT8_MIN;
	uint16_t x522 = UINT16_MAX;
	volatile int64_t x523 = -299083LL;
	static volatile uint8_t x524 = 3U;
	static int32_t t123 = -127420643;

    t123 = (((x521/x522)/x523)>x524);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x525 = -1;
	int32_t x526 = INT32_MIN;
	uint16_t x527 = 17934U;
	static int8_t x528 = INT8_MIN;

    t124 = (((x525/x526)/x527)>x528);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x530 = -21;
	int32_t x531 = INT32_MIN;
	int16_t x532 = -1;

    t125 = (((x529/x530)/x531)>x532);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x533 = 5U;
	int32_t x534 = -1;
	static volatile int16_t x535 = INT16_MIN;
	uint64_t x536 = UINT64_MAX;
	static volatile int32_t t126 = 6672627;

    t126 = (((x533/x534)/x535)>x536);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x537 = -3;
	static int16_t x539 = -1;
	uint16_t x540 = 129U;
	static volatile int32_t t127 = 652;

    t127 = (((x537/x538)/x539)>x540);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x545 = INT64_MAX;
	uint64_t x548 = UINT64_MAX;
	static volatile int32_t t128 = -1;

    t128 = (((x545/x546)/x547)>x548);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x550 = INT32_MIN;
	volatile int8_t x552 = 0;

    t129 = (((x549/x550)/x551)>x552);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x553 = INT32_MIN;
	int16_t x554 = INT16_MIN;
	static int8_t x555 = 1;
	uint32_t x556 = UINT32_MAX;
	int32_t t130 = -39872760;

    t130 = (((x553/x554)/x555)>x556);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x557 = -2LL;
	int32_t x558 = 2;
	int64_t x559 = -1LL;
	uint16_t x560 = UINT16_MAX;
	int32_t t131 = -1;

    t131 = (((x557/x558)/x559)>x560);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x561 = INT64_MIN;
	int32_t x562 = 474393754;
	static int32_t x563 = INT32_MIN;
	int64_t x564 = INT64_MIN;

    t132 = (((x561/x562)/x563)>x564);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x565 = INT64_MAX;
	uint64_t x567 = UINT64_MAX;
	int32_t t133 = 8864222;

    t133 = (((x565/x566)/x567)>x568);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x570 = 234U;
	volatile uint16_t x572 = 366U;
	volatile int32_t t134 = 13497;

    t134 = (((x569/x570)/x571)>x572);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x573 = 2072475533U;
	int64_t x574 = INT64_MIN;
	int8_t x575 = INT8_MAX;
	uint8_t x576 = 0U;
	int32_t t135 = 54527704;

    t135 = (((x573/x574)/x575)>x576);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x577 = INT32_MIN;
	uint16_t x578 = 120U;
	static uint8_t x580 = UINT8_MAX;
	static int32_t t136 = 533840807;

    t136 = (((x577/x578)/x579)>x580);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x582 = 480778U;
	int32_t x583 = -1;
	int64_t x584 = 150417382021035658LL;
	static volatile int32_t t137 = 1;

    t137 = (((x581/x582)/x583)>x584);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x585 = -1;
	uint64_t x586 = 56000785LLU;
	uint64_t x587 = 52525042LLU;
	int32_t x588 = 6459;

    t138 = (((x585/x586)/x587)>x588);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x589 = INT8_MAX;
	static volatile int64_t x591 = -1LL;
	static int64_t x592 = INT64_MAX;
	volatile int32_t t139 = 89121238;

    t139 = (((x589/x590)/x591)>x592);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x598 = -1LL;
	volatile int8_t x599 = INT8_MIN;
	int32_t x600 = 74649;
	int32_t t140 = 19763839;

    t140 = (((x597/x598)/x599)>x600);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x601 = 4LLU;
	int16_t x602 = INT16_MIN;
	int32_t x603 = -1;
	static int8_t x604 = INT8_MAX;
	volatile int32_t t141 = -1;

    t141 = (((x601/x602)/x603)>x604);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x605 = 1085468875527174LL;
	static volatile uint32_t x606 = 10580U;
	uint16_t x607 = 24U;
	int32_t t142 = -29402308;

    t142 = (((x605/x606)/x607)>x608);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x609 = INT32_MIN;
	int8_t x610 = INT8_MIN;
	int16_t x611 = -1;
	int16_t x612 = INT16_MIN;
	int32_t t143 = -1;

    t143 = (((x609/x610)/x611)>x612);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x613 = UINT64_MAX;
	int32_t x614 = -1;
	static int32_t t144 = 0;

    t144 = (((x613/x614)/x615)>x616);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x617 = UINT32_MAX;
	static int32_t x618 = -369;
	static volatile int64_t x619 = -332321358LL;
	int64_t x620 = INT64_MIN;
	int32_t t145 = -2101;

    t145 = (((x617/x618)/x619)>x620);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x621 = 1;
	static uint32_t x623 = 7835U;
	uint8_t x624 = 34U;
	int32_t t146 = -14236222;

    t146 = (((x621/x622)/x623)>x624);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x625 = 3647213468316837LL;
	int64_t x626 = INT64_MIN;
	int16_t x627 = -31;
	static int64_t x628 = -103453297664LL;
	volatile int32_t t147 = 58036144;

    t147 = (((x625/x626)/x627)>x628);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x629 = 1;
	int64_t x630 = INT64_MIN;
	volatile uint32_t x631 = UINT32_MAX;
	static int32_t t148 = -117815;

    t148 = (((x629/x630)/x631)>x632);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x633 = -1;
	volatile int16_t x634 = INT16_MAX;
	uint64_t x635 = 473LLU;
	volatile int8_t x636 = INT8_MAX;
	volatile int32_t t149 = -27;

    t149 = (((x633/x634)/x635)>x636);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x641 = 1LL;
	uint32_t x642 = 697769055U;
	volatile int8_t x643 = INT8_MIN;
	static volatile uint8_t x644 = 3U;
	static int32_t t150 = -56;

    t150 = (((x641/x642)/x643)>x644);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x646 = 782U;
	int32_t x647 = 561;
	int32_t x648 = INT32_MIN;

    t151 = (((x645/x646)/x647)>x648);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x653 = INT8_MIN;
	int16_t x654 = INT16_MIN;
	int64_t x655 = INT64_MAX;
	int32_t x656 = INT32_MIN;
	int32_t t152 = 2287;

    t152 = (((x653/x654)/x655)>x656);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x657 = -5;
	static uint8_t x660 = UINT8_MAX;

    t153 = (((x657/x658)/x659)>x660);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x661 = -1;
	int64_t x662 = INT64_MIN;
	static volatile int8_t x664 = -2;

    t154 = (((x661/x662)/x663)>x664);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x665 = 32112U;
	int32_t x666 = -988397946;
	int32_t x667 = 101648784;
	int8_t x668 = -1;
	int32_t t155 = -412;

    t155 = (((x665/x666)/x667)>x668);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x669 = 0;
	uint8_t x670 = UINT8_MAX;
	static uint8_t x671 = UINT8_MAX;
	static volatile int64_t x672 = INT64_MAX;
	int32_t t156 = 3132;

    t156 = (((x669/x670)/x671)>x672);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x673 = 66U;
	static volatile int32_t x676 = -13827077;

    t157 = (((x673/x674)/x675)>x676);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x678 = INT8_MIN;
	static int16_t x679 = -1;
	int8_t x680 = -19;
	static int32_t t158 = 12723;

    t158 = (((x677/x678)/x679)>x680);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x681 = 0U;
	uint32_t x682 = 426U;
	int64_t x683 = -5842072983238LL;
	static volatile uint8_t x684 = 28U;
	static volatile int32_t t159 = 41;

    t159 = (((x681/x682)/x683)>x684);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x685 = -180408058953669450LL;
	static int32_t x687 = -3;
	volatile int32_t x688 = INT32_MIN;
	volatile int32_t t160 = 190;

    t160 = (((x685/x686)/x687)>x688);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x689 = UINT8_MAX;
	int16_t x690 = -15;
	int32_t x691 = INT32_MIN;
	int32_t x692 = -1508884;
	volatile int32_t t161 = -1443;

    t161 = (((x689/x690)/x691)>x692);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x693 = UINT32_MAX;
	int64_t x695 = INT64_MIN;
	int32_t t162 = -15;

    t162 = (((x693/x694)/x695)>x696);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint64_t x698 = 22638996782LLU;
	volatile int16_t x700 = INT16_MIN;
	static volatile int32_t t163 = 2;

    t163 = (((x697/x698)/x699)>x700);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x701 = UINT8_MAX;
	int32_t x702 = -1;
	int16_t x704 = -1;

    t164 = (((x701/x702)/x703)>x704);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x705 = INT16_MIN;
	int16_t x706 = INT16_MAX;
	static volatile int32_t t165 = -115;

    t165 = (((x705/x706)/x707)>x708);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x709 = 7033U;
	uint16_t x711 = UINT16_MAX;
	uint16_t x712 = UINT16_MAX;
	int32_t t166 = -57456;

    t166 = (((x709/x710)/x711)>x712);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x713 = 1358U;
	static int32_t x714 = -31181729;
	int32_t x715 = INT32_MAX;
	int8_t x716 = INT8_MIN;
	int32_t t167 = -185;

    t167 = (((x713/x714)/x715)>x716);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x717 = INT8_MIN;
	volatile uint8_t x718 = 14U;
	int16_t x719 = INT16_MIN;
	int16_t x720 = INT16_MIN;
	volatile int32_t t168 = -30656727;

    t168 = (((x717/x718)/x719)>x720);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x721 = 2U;
	volatile int8_t x722 = INT8_MIN;
	static int16_t x723 = INT16_MIN;
	static volatile int32_t t169 = 43571893;

    t169 = (((x721/x722)/x723)>x724);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x725 = -103;
	int16_t x726 = -1;
	int16_t x727 = 8245;
	volatile int16_t x728 = -2;
	int32_t t170 = -399;

    t170 = (((x725/x726)/x727)>x728);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x729 = 2575U;
	volatile int16_t x730 = INT16_MIN;
	volatile int8_t x731 = INT8_MIN;
	int8_t x732 = 3;
	static volatile int32_t t171 = -3;

    t171 = (((x729/x730)/x731)>x732);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x733 = -1LL;
	int32_t x734 = INT32_MIN;
	volatile int32_t x735 = INT32_MIN;
	int8_t x736 = INT8_MAX;
	volatile int32_t t172 = -4;

    t172 = (((x733/x734)/x735)>x736);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x738 = INT64_MIN;
	uint64_t x739 = 647LLU;
	volatile int32_t x740 = INT32_MAX;
	volatile int32_t t173 = -5;

    t173 = (((x737/x738)/x739)>x740);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x742 = UINT16_MAX;
	int32_t x744 = INT32_MIN;
	int32_t t174 = -165;

    t174 = (((x741/x742)/x743)>x744);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x745 = -2;
	int16_t x746 = INT16_MIN;
	uint64_t x748 = UINT64_MAX;
	int32_t t175 = 3246;

    t175 = (((x745/x746)/x747)>x748);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x749 = 29014LL;
	uint32_t x750 = UINT32_MAX;
	uint64_t x752 = UINT64_MAX;
	volatile int32_t t176 = -49954783;

    t176 = (((x749/x750)/x751)>x752);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x753 = UINT64_MAX;
	int16_t x754 = 21;
	int64_t x755 = INT64_MIN;
	int8_t x756 = INT8_MAX;
	int32_t t177 = 189093658;

    t177 = (((x753/x754)/x755)>x756);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x758 = -16;
	volatile int16_t x759 = INT16_MIN;
	int64_t x760 = INT64_MAX;
	int32_t t178 = 14;

    t178 = (((x757/x758)/x759)>x760);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x761 = INT16_MAX;
	volatile uint64_t x762 = 211230LLU;
	uint16_t x763 = 868U;
	int64_t x764 = INT64_MIN;
	static int32_t t179 = -325;

    t179 = (((x761/x762)/x763)>x764);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x765 = UINT64_MAX;
	uint8_t x766 = 1U;
	uint32_t x768 = 1U;
	volatile int32_t t180 = 3949;

    t180 = (((x765/x766)/x767)>x768);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x770 = -10;
	volatile int8_t x772 = 1;
	volatile int32_t t181 = -119;

    t181 = (((x769/x770)/x771)>x772);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x777 = -3147519915580637642LL;
	int32_t x778 = INT32_MIN;
	volatile int16_t x779 = INT16_MIN;
	int32_t t182 = -85211249;

    t182 = (((x777/x778)/x779)>x780);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x782 = UINT16_MAX;
	int32_t x783 = INT32_MAX;
	int32_t x784 = INT32_MIN;
	int32_t t183 = 29660751;

    t183 = (((x781/x782)/x783)>x784);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x785 = INT16_MIN;
	static int32_t x786 = INT32_MIN;
	int16_t x788 = -4157;
	static int32_t t184 = -754470213;

    t184 = (((x785/x786)/x787)>x788);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x793 = INT32_MIN;
	uint16_t x794 = 95U;
	int16_t x795 = INT16_MIN;
	static int16_t x796 = INT16_MIN;
	volatile int32_t t185 = -6104939;

    t185 = (((x793/x794)/x795)>x796);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x797 = -1;
	int64_t x798 = INT64_MIN;
	volatile uint32_t x799 = 24U;
	int16_t x800 = 1;

    t186 = (((x797/x798)/x799)>x800);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x802 = 90U;
	int32_t x803 = -16;
	int16_t x804 = 12881;
	static int32_t t187 = -7;

    t187 = (((x801/x802)/x803)>x804);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x809 = 9U;
	static uint16_t x810 = 1428U;
	volatile uint64_t x811 = 1012052103LLU;
	static int32_t t188 = 28;

    t188 = (((x809/x810)/x811)>x812);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x813 = INT32_MIN;
	int64_t x814 = INT64_MIN;
	uint32_t x815 = 14933U;
	volatile uint8_t x816 = 3U;

    t189 = (((x813/x814)/x815)>x816);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x817 = 53011183LLU;
	int32_t x818 = INT32_MAX;
	static volatile uint32_t x819 = 1754358670U;
	static int16_t x820 = INT16_MIN;
	volatile int32_t t190 = -59;

    t190 = (((x817/x818)/x819)>x820);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x821 = INT16_MIN;
	int64_t x822 = INT64_MIN;
	volatile int8_t x823 = 3;
	static int32_t t191 = -7158520;

    t191 = (((x821/x822)/x823)>x824);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x825 = 1574LLU;
	volatile int16_t x827 = INT16_MIN;
	uint8_t x828 = UINT8_MAX;
	volatile int32_t t192 = -4170895;

    t192 = (((x825/x826)/x827)>x828);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x829 = -1;
	uint16_t x830 = UINT16_MAX;
	uint64_t x831 = UINT64_MAX;
	volatile int8_t x832 = INT8_MIN;

    t193 = (((x829/x830)/x831)>x832);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x833 = 208079U;
	uint16_t x835 = UINT16_MAX;
	static int32_t t194 = 143;

    t194 = (((x833/x834)/x835)>x836);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x837 = -1LL;
	static int64_t x838 = -1LL;
	static int32_t x839 = INT32_MIN;
	static int32_t x840 = INT32_MIN;
	static int32_t t195 = -1705;

    t195 = (((x837/x838)/x839)>x840);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x842 = INT8_MIN;
	static uint64_t x843 = 50LLU;
	static int32_t x844 = 58870;
	volatile int32_t t196 = -97076306;

    t196 = (((x841/x842)/x843)>x844);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x845 = -2573117325693432LL;
	int32_t x846 = 356023979;
	static int8_t x847 = -3;
	uint32_t x848 = 6507123U;
	int32_t t197 = 1;

    t197 = (((x845/x846)/x847)>x848);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x849 = -27;
	static int8_t x850 = -10;
	int8_t x852 = -1;
	volatile int32_t t198 = 64733549;

    t198 = (((x849/x850)/x851)>x852);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x853 = 6145U;
	int32_t x854 = INT32_MAX;
	int8_t x855 = INT8_MIN;
	static volatile int32_t t199 = -50078;

    t199 = (((x853/x854)/x855)>x856);

    if (t199 != 0) { NG(); } else { ; }
	
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

