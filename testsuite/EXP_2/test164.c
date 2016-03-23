
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

static uint8_t x9 = 22U;
static volatile int16_t x16 = 110;
static int32_t t4 = 149111355;
static uint32_t x21 = UINT32_MAX;
int32_t x28 = INT32_MIN;
int8_t x31 = INT8_MAX;
int8_t x32 = 6;
int8_t x33 = 1;
int32_t x42 = -469678;
static volatile int8_t x44 = -31;
int32_t t11 = 2;
int32_t t12 = 7397;
static uint64_t x54 = 696063010LLU;
int32_t x59 = INT32_MIN;
int32_t t14 = -7;
static uint64_t x65 = 576484620620554LLU;
int64_t x76 = -1802506032547294492LL;
volatile int64_t x77 = INT64_MIN;
int8_t x79 = INT8_MAX;
int8_t x84 = INT8_MAX;
uint32_t x87 = 59609U;
static uint64_t x91 = 113336514218656LLU;
int64_t x95 = 620926180LL;
int64_t x96 = INT64_MAX;
static int8_t x99 = -1;
int32_t t24 = -8881411;
uint16_t x103 = UINT16_MAX;
uint32_t x104 = 9U;
int32_t t26 = 843549609;
int32_t x116 = 13923312;
static int16_t x119 = INT16_MIN;
int64_t x120 = -1LL;
int16_t x123 = INT16_MIN;
int16_t x124 = INT16_MIN;
volatile int8_t x141 = INT8_MAX;
volatile int32_t t33 = 2859;
int32_t x147 = 260025;
static int16_t x148 = 0;
int32_t x151 = -705912;
static int64_t x154 = 3375449511073685288LL;
int16_t x160 = -15;
volatile int32_t t38 = -25264;
int64_t x172 = -1LL;
uint32_t x176 = 1215U;
int16_t x178 = INT16_MAX;
uint64_t x180 = UINT64_MAX;
int32_t x184 = 4114;
volatile int32_t t42 = 63;
uint8_t x186 = UINT8_MAX;
uint8_t x187 = UINT8_MAX;
int32_t x190 = -1;
volatile int8_t x191 = 3;
int32_t t44 = 3458713;
uint16_t x200 = UINT16_MAX;
int8_t x205 = -1;
static int32_t t50 = -414;
static int32_t t54 = -6706285;
uint8_t x248 = 4U;
volatile int32_t t55 = 17938756;
int16_t x250 = -11788;
static int16_t x260 = 153;
int8_t x266 = INT8_MIN;
volatile uint32_t x271 = 12734409U;
volatile int32_t t60 = -66;
static volatile int32_t x277 = INT32_MIN;
volatile int8_t x283 = 0;
int8_t x290 = INT8_MAX;
int32_t x292 = INT32_MIN;
static int64_t x293 = -65564493299LL;
static volatile uint64_t x294 = UINT64_MAX;
volatile int32_t t67 = 30979;
uint64_t x301 = UINT64_MAX;
int64_t x302 = INT64_MIN;
int32_t x309 = -164;
int8_t x310 = INT8_MAX;
static int8_t x316 = INT8_MAX;
volatile int32_t t70 = -1;
volatile int32_t x320 = INT32_MIN;
static int64_t x325 = 1741168LL;
int8_t x328 = -1;
int64_t x330 = -26320202763LL;
int8_t x331 = -1;
volatile int32_t t74 = -150;
int32_t t75 = -206;
volatile uint32_t x343 = 7003065U;
static int32_t x344 = -1;
int32_t t76 = 979190268;
int64_t x345 = -1LL;
volatile int32_t t79 = -79425592;
volatile int16_t x361 = 1351;
uint64_t x362 = UINT64_MAX;
int16_t x364 = INT16_MAX;
int32_t t80 = 259424843;
static int32_t t81 = 0;
volatile int64_t x370 = INT64_MAX;
int32_t x375 = 7;
volatile int32_t t83 = 9103;
uint64_t x379 = UINT64_MAX;
uint32_t x386 = 491U;
static volatile int32_t t86 = -1450971;
uint8_t x390 = UINT8_MAX;
int64_t x398 = -126984476527887LL;
static volatile int64_t x402 = INT64_MIN;
uint64_t x404 = UINT64_MAX;
static int32_t t90 = 1;
int32_t x423 = INT32_MIN;
static volatile int8_t x426 = INT8_MIN;
static uint8_t x438 = UINT8_MAX;
int64_t x442 = -988515711LL;
static volatile int32_t t99 = -14372116;
int32_t x452 = INT32_MIN;
static int64_t x454 = -7566293484039395LL;
volatile int8_t x460 = -1;
volatile int8_t x472 = INT8_MAX;
static volatile int32_t t105 = 4139031;
uint64_t x476 = UINT64_MAX;
uint64_t x477 = UINT64_MAX;
volatile int32_t t107 = 3382462;
int32_t x483 = -1;
uint32_t x493 = UINT32_MAX;
uint8_t x496 = UINT8_MAX;
int32_t t111 = 74641615;
int8_t x501 = INT8_MIN;
volatile int8_t x502 = INT8_MIN;
volatile int32_t t112 = -71;
int16_t x511 = INT16_MIN;
volatile int32_t x517 = -1;
volatile int32_t t115 = 29599658;
int16_t x526 = INT16_MAX;
int32_t x529 = 6;
static volatile uint32_t x532 = 1352155U;
int32_t x535 = INT32_MIN;
int64_t x537 = INT64_MIN;
int32_t x540 = INT32_MAX;
volatile int32_t t119 = -11972235;
int64_t x558 = INT64_MIN;
uint8_t x562 = 36U;
uint16_t x566 = 4617U;
uint64_t x574 = UINT64_MAX;
volatile int32_t t127 = -148276284;
static uint8_t x582 = 7U;
int32_t t130 = 73;
int8_t x595 = -3;
int64_t x596 = INT64_MIN;
volatile uint16_t x612 = 15U;
uint32_t x613 = UINT32_MAX;
volatile int32_t t135 = 105030697;
int8_t x618 = INT8_MIN;
int64_t x624 = 76629520482LL;
static int32_t t138 = -31;
volatile int64_t x630 = INT64_MAX;
uint32_t x633 = 332U;
static uint16_t x634 = UINT16_MAX;
volatile uint16_t x638 = UINT16_MAX;
int16_t x640 = INT16_MIN;
uint16_t x646 = UINT16_MAX;
int64_t x648 = INT64_MIN;
int8_t x649 = INT8_MIN;
static volatile int32_t x653 = -1;
int16_t x668 = -1;
volatile uint32_t x670 = 304U;
static volatile uint8_t x673 = 64U;
static int8_t x675 = INT8_MIN;
int32_t t150 = -7693;
uint64_t x681 = 3429LLU;
int8_t x682 = INT8_MIN;
volatile int32_t t156 = -349691;
int64_t x709 = -13817078LL;
uint32_t x713 = UINT32_MAX;
int32_t x718 = INT32_MIN;
int8_t x724 = INT8_MIN;
int32_t t163 = 236;
static uint8_t x734 = UINT8_MAX;
volatile int64_t x743 = -1LL;
volatile int64_t x744 = INT64_MIN;
int16_t x755 = -33;
static volatile int64_t x756 = -87LL;
volatile int32_t t169 = 3;
static int16_t x757 = -12162;
static int32_t t171 = 2;
int64_t x765 = -1964LL;
int16_t x766 = 0;
int32_t t172 = 46436;
uint64_t x776 = UINT64_MAX;
uint8_t x779 = UINT8_MAX;
int8_t x782 = INT8_MAX;
int32_t t175 = 1293;
uint16_t x787 = 184U;
int16_t x791 = 784;
static int64_t x793 = 320LL;
int32_t t179 = 8683866;
int16_t x807 = -357;
static uint32_t x810 = 388134U;
int64_t x812 = -27437177LL;
static int32_t x817 = -12022;
volatile uint8_t x823 = UINT8_MAX;
volatile int32_t x830 = -1;
int32_t x832 = -1;
volatile int16_t x838 = 1;
volatile int8_t x839 = 0;
int64_t x844 = INT64_MIN;
static int32_t t189 = 347361639;
int8_t x850 = INT8_MIN;
int16_t x851 = -8;
uint32_t x854 = 208181573U;
volatile int8_t x859 = 0;
int8_t x865 = 0;
volatile uint32_t x870 = 5U;
int8_t x875 = -4;
int8_t x877 = 1;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int64_t x2 = INT64_MIN;
	int64_t x3 = INT64_MAX;
	static uint16_t x4 = UINT16_MAX;
	static int32_t t0 = 103;

    t0 = ((x1&(x2+x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = INT32_MIN;
	static volatile int8_t x6 = INT8_MIN;
	int64_t x7 = 414192039961979408LL;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = 6189;

    t1 = ((x5&(x6+x7))<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = 488470171;
	static int8_t x11 = 1;
	int64_t x12 = INT64_MIN;
	static int32_t t2 = 14288140;

    t2 = ((x9&(x10+x11))<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = UINT8_MAX;
	volatile int32_t x14 = -5356;
	int16_t x15 = INT16_MIN;
	volatile int32_t t3 = 55200554;

    t3 = ((x13&(x14+x15))<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x17 = 12788U;
	int32_t x18 = 0;
	int32_t x19 = 55;
	int8_t x20 = 1;

    t4 = ((x17&(x18+x19))<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MIN;
	int8_t x23 = 1;
	int8_t x24 = -1;
	int32_t t5 = -218023;

    t5 = ((x21&(x22+x23))<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = -1LL;
	uint16_t x26 = UINT16_MAX;
	static int32_t x27 = INT32_MIN;
	volatile int32_t t6 = -16374628;

    t6 = ((x25&(x26+x27))<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 54372805U;
	int8_t x30 = 3;
	int32_t t7 = -1;

    t7 = ((x29&(x30+x31))<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = INT16_MIN;
	uint16_t x35 = 48U;
	uint32_t x36 = 7249U;
	static int32_t t8 = -626696;

    t8 = ((x33&(x34+x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	int64_t x38 = INT64_MIN;
	uint64_t x39 = 22722102LLU;
	int32_t x40 = INT32_MAX;
	int32_t t9 = -450765;

    t9 = ((x37&(x38+x39))<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	static int16_t x43 = INT16_MIN;
	int32_t t10 = 0;

    t10 = ((x41&(x42+x43))<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -330867;
	volatile int32_t x46 = -362140;
	int64_t x47 = 276730864641316516LL;
	int64_t x48 = INT64_MIN;

    t11 = ((x45&(x46+x47))<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	volatile int8_t x50 = 0;
	uint32_t x51 = 3U;
	int64_t x52 = 7830505371LL;

    t12 = ((x49&(x50+x51))<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x53 = UINT16_MAX;
	uint32_t x55 = 25U;
	static int16_t x56 = -5955;
	volatile int32_t t13 = 1298016;

    t13 = ((x53&(x54+x55))<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	uint64_t x58 = UINT64_MAX;
	int8_t x60 = 1;

    t14 = ((x57&(x58+x59))<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	int64_t x62 = -368LL;
	static uint8_t x63 = UINT8_MAX;
	int32_t x64 = INT32_MIN;
	int32_t t15 = -666;

    t15 = ((x61&(x62+x63))<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x66 = -170391963229LL;
	static uint32_t x67 = 59253386U;
	int32_t x68 = -1;
	volatile int32_t t16 = -1596;

    t16 = ((x65&(x66+x67))<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	uint64_t x70 = UINT64_MAX;
	static int32_t x71 = -245;
	int64_t x72 = INT64_MIN;
	int32_t t17 = -91587;

    t17 = ((x69&(x70+x71))<=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	uint64_t x74 = UINT64_MAX;
	volatile uint16_t x75 = UINT16_MAX;
	volatile int32_t t18 = 955;

    t18 = ((x73&(x74+x75))<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x78 = -1;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -16;

    t19 = ((x77&(x78+x79))<=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint32_t x81 = 13183386U;
	static volatile int16_t x82 = -1358;
	uint16_t x83 = UINT16_MAX;
	volatile int32_t t20 = 57658;

    t20 = ((x81&(x82+x83))<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 9U;
	uint32_t x86 = 61U;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = -2644;

    t21 = ((x85&(x86+x87))<=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	uint32_t x90 = UINT32_MAX;
	int8_t x92 = 18;
	static int32_t t22 = -6;

    t22 = ((x89&(x90+x91))<=x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 15544U;
	uint64_t x94 = 402229813478LLU;
	int32_t t23 = 5987723;

    t23 = ((x93&(x94+x95))<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -1LL;
	volatile int16_t x98 = INT16_MAX;
	int64_t x100 = -1LL;

    t24 = ((x97&(x98+x99))<=x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = 1;
	int64_t x102 = INT64_MIN;
	volatile int32_t t25 = -778161959;

    t25 = ((x101&(x102+x103))<=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	static int64_t x106 = -11700LL;
	int8_t x107 = -1;
	static int16_t x108 = INT16_MIN;

    t26 = ((x105&(x106+x107))<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = UINT32_MAX;
	uint32_t x110 = 453942U;
	volatile uint32_t x111 = UINT32_MAX;
	static int8_t x112 = -1;
	static volatile int32_t t27 = 1;

    t27 = ((x109&(x110+x111))<=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	static int64_t x114 = -20228458LL;
	int32_t x115 = INT32_MAX;
	int32_t t28 = -28982;

    t28 = ((x113&(x114+x115))<=x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -1LL;
	static int16_t x118 = INT16_MIN;
	int32_t t29 = 834150;

    t29 = ((x117&(x118+x119))<=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -1294764788939542874LL;
	int64_t x122 = 34831712545719LL;
	static volatile int32_t t30 = -1;

    t30 = ((x121&(x122+x123))<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = INT32_MIN;
	int16_t x130 = 11954;
	static volatile uint16_t x131 = 79U;
	int8_t x132 = 7;
	volatile int32_t t31 = 27;

    t31 = ((x129&(x130+x131))<=x132);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x133 = 32;
	int64_t x134 = -328482962LL;
	uint16_t x135 = UINT16_MAX;
	int32_t x136 = -288;
	int32_t t32 = -27712;

    t32 = ((x133&(x134+x135))<=x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x142 = 1U;
	static int16_t x143 = -1;
	int64_t x144 = INT64_MIN;

    t33 = ((x141&(x142+x143))<=x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x145 = -1LL;
	uint16_t x146 = 25U;
	int32_t t34 = -7;

    t34 = ((x145&(x146+x147))<=x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x149 = 43;
	int64_t x150 = -1LL;
	int8_t x152 = 1;
	volatile int32_t t35 = 2;

    t35 = ((x149&(x150+x151))<=x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = -1;
	int16_t x155 = -97;
	static uint32_t x156 = 13U;
	int32_t t36 = -261674;

    t36 = ((x153&(x154+x155))<=x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x157 = 45U;
	int32_t x158 = INT32_MAX;
	int16_t x159 = INT16_MIN;
	volatile int32_t t37 = -1;

    t37 = ((x157&(x158+x159))<=x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x165 = UINT16_MAX;
	int64_t x166 = INT64_MIN;
	volatile uint64_t x167 = 11721894LLU;
	static int64_t x168 = -1LL;

    t38 = ((x165&(x166+x167))<=x168);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x169 = 17U;
	int8_t x170 = -1;
	volatile int8_t x171 = 1;
	volatile int32_t t39 = 42758;

    t39 = ((x169&(x170+x171))<=x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = INT8_MIN;
	int32_t x174 = INT32_MIN;
	int8_t x175 = 0;
	volatile int32_t t40 = -1;

    t40 = ((x173&(x174+x175))<=x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x177 = INT8_MIN;
	int64_t x179 = INT64_MIN;
	int32_t t41 = 404106;

    t41 = ((x177&(x178+x179))<=x180);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x181 = -1;
	int8_t x182 = -1;
	volatile int8_t x183 = INT8_MAX;

    t42 = ((x181&(x182+x183))<=x184);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x185 = 125U;
	int8_t x188 = -1;
	int32_t t43 = 3370412;

    t43 = ((x185&(x186+x187))<=x188);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x189 = -31;
	int64_t x192 = -1LL;

    t44 = ((x189&(x190+x191))<=x192);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = INT64_MIN;
	int32_t x194 = INT32_MIN;
	int64_t x195 = INT64_MAX;
	uint8_t x196 = 113U;
	volatile int32_t t45 = -3832416;

    t45 = ((x193&(x194+x195))<=x196);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x197 = -325755359037456793LL;
	volatile int16_t x198 = INT16_MIN;
	int8_t x199 = INT8_MIN;
	volatile int32_t t46 = -1888;

    t46 = ((x197&(x198+x199))<=x200);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x201 = UINT32_MAX;
	int16_t x202 = -1;
	int8_t x203 = INT8_MIN;
	int32_t x204 = 39315506;
	static int32_t t47 = -16;

    t47 = ((x201&(x202+x203))<=x204);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x206 = 24002LLU;
	int8_t x207 = 6;
	static int8_t x208 = INT8_MIN;
	volatile int32_t t48 = 2925;

    t48 = ((x205&(x206+x207))<=x208);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x209 = UINT16_MAX;
	int8_t x210 = -1;
	static int16_t x211 = 6;
	int16_t x212 = -1;
	int32_t t49 = 736462;

    t49 = ((x209&(x210+x211))<=x212);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x217 = INT64_MIN;
	static int32_t x218 = 32438;
	int8_t x219 = -1;
	uint32_t x220 = UINT32_MAX;

    t50 = ((x217&(x218+x219))<=x220);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x225 = INT64_MIN;
	int32_t x226 = 127776;
	int64_t x227 = 299035072367600557LL;
	static volatile int8_t x228 = -1;
	volatile int32_t t51 = 124;

    t51 = ((x225&(x226+x227))<=x228);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x229 = INT64_MAX;
	static uint64_t x230 = 1778LLU;
	volatile int32_t x231 = -1;
	int64_t x232 = 228390004527LL;
	int32_t t52 = 30723151;

    t52 = ((x229&(x230+x231))<=x232);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x233 = 3U;
	uint16_t x234 = 29U;
	int16_t x235 = INT16_MAX;
	static volatile int64_t x236 = INT64_MAX;
	int32_t t53 = 10038030;

    t53 = ((x233&(x234+x235))<=x236);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x241 = INT16_MIN;
	uint32_t x242 = UINT32_MAX;
	static uint16_t x243 = 2U;
	static int64_t x244 = INT64_MIN;

    t54 = ((x241&(x242+x243))<=x244);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x245 = 26271;
	static volatile int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MAX;

    t55 = ((x245&(x246+x247))<=x248);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x249 = UINT8_MAX;
	uint64_t x251 = 2120LLU;
	uint8_t x252 = 7U;
	int32_t t56 = 471697346;

    t56 = ((x249&(x250+x251))<=x252);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x257 = -1;
	int32_t x258 = -1;
	int8_t x259 = INT8_MIN;
	volatile int32_t t57 = -75;

    t57 = ((x257&(x258+x259))<=x260);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x261 = 954U;
	int16_t x262 = 1;
	int16_t x263 = INT16_MIN;
	volatile int8_t x264 = INT8_MIN;
	volatile int32_t t58 = 477;

    t58 = ((x261&(x262+x263))<=x264);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x265 = INT16_MIN;
	static int32_t x267 = 52;
	int64_t x268 = 4LL;
	int32_t t59 = -2257;

    t59 = ((x265&(x266+x267))<=x268);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x269 = -1;
	int32_t x270 = INT32_MIN;
	int32_t x272 = INT32_MIN;

    t60 = ((x269&(x270+x271))<=x272);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x273 = 11LLU;
	int32_t x274 = -1;
	int64_t x275 = -1LL;
	static int8_t x276 = -1;
	volatile int32_t t61 = -64655;

    t61 = ((x273&(x274+x275))<=x276);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x278 = 3U;
	int8_t x279 = 11;
	int64_t x280 = INT64_MIN;
	volatile int32_t t62 = 2;

    t62 = ((x277&(x278+x279))<=x280);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x281 = INT64_MIN;
	int16_t x282 = 497;
	uint16_t x284 = 8U;
	volatile int32_t t63 = -22759092;

    t63 = ((x281&(x282+x283))<=x284);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x285 = INT8_MAX;
	volatile int16_t x286 = INT16_MAX;
	uint16_t x287 = 14U;
	int64_t x288 = INT64_MIN;
	volatile int32_t t64 = 285;

    t64 = ((x285&(x286+x287))<=x288);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x289 = 256111665140985LLU;
	int16_t x291 = INT16_MAX;
	static volatile int32_t t65 = -526614300;

    t65 = ((x289&(x290+x291))<=x292);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x295 = UINT32_MAX;
	static uint64_t x296 = 13641258LLU;
	int32_t t66 = -142104388;

    t66 = ((x293&(x294+x295))<=x296);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x297 = 7U;
	int16_t x298 = -1;
	int8_t x299 = INT8_MIN;
	uint32_t x300 = 47305411U;

    t67 = ((x297&(x298+x299))<=x300);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x303 = INT32_MAX;
	static int8_t x304 = 1;
	static int32_t t68 = -996;

    t68 = ((x301&(x302+x303))<=x304);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x311 = -1781393;
	int32_t x312 = INT32_MAX;
	int32_t t69 = -120453;

    t69 = ((x309&(x310+x311))<=x312);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x313 = -1;
	static uint16_t x314 = UINT16_MAX;
	uint32_t x315 = UINT32_MAX;

    t70 = ((x313&(x314+x315))<=x316);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x317 = -895;
	static volatile int16_t x318 = INT16_MAX;
	int32_t x319 = -12807;
	volatile int32_t t71 = 688960;

    t71 = ((x317&(x318+x319))<=x320);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x321 = 73U;
	uint64_t x322 = 31627390474640LLU;
	int32_t x323 = 1;
	static int16_t x324 = -1;
	volatile int32_t t72 = -44098087;

    t72 = ((x321&(x322+x323))<=x324);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x326 = UINT8_MAX;
	static volatile uint8_t x327 = 3U;
	int32_t t73 = -381352;

    t73 = ((x325&(x326+x327))<=x328);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x329 = 0;
	uint64_t x332 = 111293372LLU;

    t74 = ((x329&(x330+x331))<=x332);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x337 = INT32_MAX;
	int16_t x338 = -1;
	int16_t x339 = INT16_MAX;
	int64_t x340 = INT64_MAX;

    t75 = ((x337&(x338+x339))<=x340);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x341 = INT8_MIN;
	int32_t x342 = INT32_MIN;

    t76 = ((x341&(x342+x343))<=x344);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x346 = INT64_MAX;
	int8_t x347 = -27;
	int32_t x348 = INT32_MIN;
	volatile int32_t t77 = 21;

    t77 = ((x345&(x346+x347))<=x348);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x349 = -540;
	int16_t x350 = -1;
	uint64_t x351 = UINT64_MAX;
	int32_t x352 = -1;
	volatile int32_t t78 = -1943;

    t78 = ((x349&(x350+x351))<=x352);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x353 = INT64_MIN;
	volatile int64_t x354 = 1751707054289241404LL;
	static int32_t x355 = -1;
	volatile uint8_t x356 = 17U;

    t79 = ((x353&(x354+x355))<=x356);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x363 = -1;

    t80 = ((x361&(x362+x363))<=x364);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x365 = -1;
	static int16_t x366 = -1;
	uint16_t x367 = 134U;
	uint16_t x368 = 185U;

    t81 = ((x365&(x366+x367))<=x368);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x369 = 1523LL;
	int64_t x371 = -5357057575121LL;
	volatile uint8_t x372 = 7U;
	volatile int32_t t82 = -84;

    t82 = ((x369&(x370+x371))<=x372);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x373 = INT16_MIN;
	int16_t x374 = -1;
	uint16_t x376 = 0U;

    t83 = ((x373&(x374+x375))<=x376);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x377 = 40;
	volatile int16_t x378 = INT16_MIN;
	static uint64_t x380 = UINT64_MAX;
	volatile int32_t t84 = 600513;

    t84 = ((x377&(x378+x379))<=x380);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x381 = INT32_MIN;
	int64_t x382 = INT64_MIN;
	int16_t x383 = 543;
	volatile uint8_t x384 = 9U;
	static volatile int32_t t85 = -52263259;

    t85 = ((x381&(x382+x383))<=x384);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x385 = INT16_MIN;
	int64_t x387 = INT64_MIN;
	static int16_t x388 = -1;

    t86 = ((x385&(x386+x387))<=x388);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x389 = 18U;
	int16_t x391 = INT16_MAX;
	uint64_t x392 = 5949055LLU;
	volatile int32_t t87 = -1;

    t87 = ((x389&(x390+x391))<=x392);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x393 = INT8_MIN;
	int32_t x394 = -2513;
	int32_t x395 = -945;
	int16_t x396 = INT16_MIN;
	int32_t t88 = -169;

    t88 = ((x393&(x394+x395))<=x396);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x397 = INT64_MIN;
	static uint64_t x399 = 15LLU;
	static int32_t x400 = -1;
	int32_t t89 = -180;

    t89 = ((x397&(x398+x399))<=x400);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x401 = -1;
	uint64_t x403 = UINT64_MAX;

    t90 = ((x401&(x402+x403))<=x404);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x405 = UINT8_MAX;
	int64_t x406 = -103181670501074412LL;
	static int32_t x407 = -1;
	static volatile uint16_t x408 = 856U;
	static int32_t t91 = -6;

    t91 = ((x405&(x406+x407))<=x408);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x417 = INT64_MAX;
	static int8_t x418 = INT8_MIN;
	int32_t x419 = -1;
	int8_t x420 = INT8_MIN;
	int32_t t92 = 68845;

    t92 = ((x417&(x418+x419))<=x420);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x421 = 11U;
	int64_t x422 = -179484351014LL;
	int64_t x424 = INT64_MIN;
	volatile int32_t t93 = -243036706;

    t93 = ((x421&(x422+x423))<=x424);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x425 = 0U;
	uint16_t x427 = 0U;
	volatile uint16_t x428 = UINT16_MAX;
	static volatile int32_t t94 = -10481;

    t94 = ((x425&(x426+x427))<=x428);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x429 = INT64_MIN;
	static int32_t x430 = -1;
	int8_t x431 = INT8_MIN;
	uint8_t x432 = UINT8_MAX;
	int32_t t95 = 399637;

    t95 = ((x429&(x430+x431))<=x432);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x433 = INT32_MIN;
	int32_t x434 = INT32_MAX;
	volatile int64_t x435 = -451159206648766LL;
	volatile int64_t x436 = -23120863167763LL;
	int32_t t96 = 7774712;

    t96 = ((x433&(x434+x435))<=x436);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x437 = 1;
	static int8_t x439 = INT8_MIN;
	uint8_t x440 = UINT8_MAX;
	static int32_t t97 = 15890;

    t97 = ((x437&(x438+x439))<=x440);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x441 = INT32_MIN;
	int16_t x443 = -2;
	static int16_t x444 = -5751;
	int32_t t98 = 843319;

    t98 = ((x441&(x442+x443))<=x444);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x445 = INT32_MIN;
	int16_t x446 = INT16_MAX;
	int8_t x447 = INT8_MIN;
	int8_t x448 = -1;

    t99 = ((x445&(x446+x447))<=x448);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x449 = -1;
	int64_t x450 = INT64_MIN;
	uint64_t x451 = 46LLU;
	volatile int32_t t100 = -102865449;

    t100 = ((x449&(x450+x451))<=x452);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint64_t x453 = 58368489772067179LLU;
	int16_t x455 = INT16_MAX;
	volatile int32_t x456 = INT32_MIN;
	static int32_t t101 = 109;

    t101 = ((x453&(x454+x455))<=x456);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x457 = 2;
	static int64_t x458 = 695826230309391LL;
	int64_t x459 = -122149961900070135LL;
	static volatile int32_t t102 = 198;

    t102 = ((x457&(x458+x459))<=x460);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x461 = -1;
	int16_t x462 = INT16_MIN;
	int16_t x463 = INT16_MAX;
	uint16_t x464 = 2647U;
	static volatile int32_t t103 = -885705;

    t103 = ((x461&(x462+x463))<=x464);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x465 = INT16_MAX;
	static int8_t x466 = INT8_MAX;
	int8_t x467 = -3;
	int32_t x468 = INT32_MAX;
	static int32_t t104 = 26172;

    t104 = ((x465&(x466+x467))<=x468);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x469 = 7U;
	int16_t x470 = 0;
	static uint32_t x471 = UINT32_MAX;

    t105 = ((x469&(x470+x471))<=x472);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x473 = INT8_MIN;
	int8_t x474 = -1;
	static uint8_t x475 = 19U;
	volatile int32_t t106 = -1;

    t106 = ((x473&(x474+x475))<=x476);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x478 = INT8_MAX;
	static volatile uint64_t x479 = 1623734247284044155LLU;
	int64_t x480 = -1LL;

    t107 = ((x477&(x478+x479))<=x480);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x481 = 18536U;
	int16_t x482 = 1;
	int16_t x484 = -1;
	int32_t t108 = 13094500;

    t108 = ((x481&(x482+x483))<=x484);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x485 = 27U;
	static uint32_t x486 = UINT32_MAX;
	volatile uint32_t x487 = 44U;
	uint64_t x488 = 505188781LLU;
	static volatile int32_t t109 = -35018;

    t109 = ((x485&(x486+x487))<=x488);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x494 = 3U;
	int16_t x495 = 3;
	volatile int32_t t110 = 927213947;

    t110 = ((x493&(x494+x495))<=x496);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x497 = INT16_MIN;
	volatile uint8_t x498 = 77U;
	uint32_t x499 = 32918928U;
	static uint8_t x500 = 27U;

    t111 = ((x497&(x498+x499))<=x500);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x503 = 0U;
	int32_t x504 = 53929;

    t112 = ((x501&(x502+x503))<=x504);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x505 = 4081U;
	int8_t x506 = -1;
	uint64_t x507 = 1896LLU;
	int8_t x508 = 0;
	volatile int32_t t113 = -251;

    t113 = ((x505&(x506+x507))<=x508);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x509 = INT8_MIN;
	int32_t x510 = -1;
	int8_t x512 = -1;
	int32_t t114 = 70317940;

    t114 = ((x509&(x510+x511))<=x512);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint16_t x518 = 229U;
	int16_t x519 = -3;
	static uint64_t x520 = UINT64_MAX;

    t115 = ((x517&(x518+x519))<=x520);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x525 = -206;
	static int8_t x527 = INT8_MIN;
	int32_t x528 = INT32_MAX;
	volatile int32_t t116 = -34831;

    t116 = ((x525&(x526+x527))<=x528);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x530 = INT16_MIN;
	int64_t x531 = INT64_MAX;
	int32_t t117 = -223699;

    t117 = ((x529&(x530+x531))<=x532);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x533 = UINT64_MAX;
	int16_t x534 = 94;
	int16_t x536 = -1;
	volatile int32_t t118 = -5774;

    t118 = ((x533&(x534+x535))<=x536);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x538 = 116690152;
	static int64_t x539 = INT64_MIN;

    t119 = ((x537&(x538+x539))<=x540);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x545 = 70;
	int64_t x546 = -17160980080LL;
	int8_t x547 = INT8_MIN;
	uint8_t x548 = UINT8_MAX;
	volatile int32_t t120 = -398671613;

    t120 = ((x545&(x546+x547))<=x548);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x549 = INT64_MAX;
	uint16_t x550 = 0U;
	int32_t x551 = 25176;
	volatile int32_t x552 = 8373494;
	volatile int32_t t121 = -7;

    t121 = ((x549&(x550+x551))<=x552);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x553 = 1;
	uint32_t x554 = UINT32_MAX;
	volatile int16_t x555 = INT16_MIN;
	uint16_t x556 = UINT16_MAX;
	volatile int32_t t122 = 124;

    t122 = ((x553&(x554+x555))<=x556);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x557 = INT64_MAX;
	int32_t x559 = 29;
	uint16_t x560 = 2564U;
	int32_t t123 = -269586265;

    t123 = ((x557&(x558+x559))<=x560);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x561 = INT8_MIN;
	int64_t x563 = -877333657LL;
	int64_t x564 = INT64_MIN;
	volatile int32_t t124 = -1;

    t124 = ((x561&(x562+x563))<=x564);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x565 = -1;
	static uint32_t x567 = UINT32_MAX;
	int32_t x568 = 921659;
	int32_t t125 = 26067;

    t125 = ((x565&(x566+x567))<=x568);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x573 = 0U;
	int32_t x575 = 128849469;
	volatile int64_t x576 = INT64_MIN;
	volatile int32_t t126 = 5663;

    t126 = ((x573&(x574+x575))<=x576);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x577 = -75259907LL;
	volatile int64_t x578 = 10216625590846LL;
	volatile int16_t x579 = INT16_MIN;
	int8_t x580 = 1;

    t127 = ((x577&(x578+x579))<=x580);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x581 = 0;
	uint32_t x583 = UINT32_MAX;
	int16_t x584 = -1;
	int32_t t128 = -3;

    t128 = ((x581&(x582+x583))<=x584);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x585 = INT64_MIN;
	volatile uint64_t x586 = 21495727LLU;
	volatile int32_t x587 = INT32_MIN;
	int32_t x588 = INT32_MIN;
	static int32_t t129 = -14;

    t129 = ((x585&(x586+x587))<=x588);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x589 = 9;
	int16_t x590 = INT16_MIN;
	int8_t x591 = -1;
	volatile uint32_t x592 = 15269642U;

    t130 = ((x589&(x590+x591))<=x592);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x593 = -32328;
	uint32_t x594 = UINT32_MAX;
	static int32_t t131 = 111;

    t131 = ((x593&(x594+x595))<=x596);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x597 = UINT32_MAX;
	volatile int64_t x598 = -1LL;
	uint64_t x599 = 13LLU;
	static volatile int32_t x600 = -1;
	volatile int32_t t132 = 0;

    t132 = ((x597&(x598+x599))<=x600);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x601 = INT16_MIN;
	static int8_t x602 = INT8_MAX;
	int64_t x603 = -173565910618051769LL;
	int64_t x604 = INT64_MIN;
	int32_t t133 = -257;

    t133 = ((x601&(x602+x603))<=x604);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x609 = INT16_MAX;
	uint8_t x610 = 48U;
	uint32_t x611 = 75630U;
	static int32_t t134 = 1295;

    t134 = ((x609&(x610+x611))<=x612);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x614 = 42341823U;
	uint32_t x615 = 146287613U;
	int32_t x616 = INT32_MAX;

    t135 = ((x613&(x614+x615))<=x616);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x617 = 839539519LL;
	int16_t x619 = 7031;
	int32_t x620 = INT32_MAX;
	volatile int32_t t136 = -86792;

    t136 = ((x617&(x618+x619))<=x620);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x621 = INT32_MIN;
	static int8_t x622 = INT8_MIN;
	int16_t x623 = INT16_MIN;
	static volatile int32_t t137 = -5045068;

    t137 = ((x621&(x622+x623))<=x624);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x625 = INT8_MIN;
	int8_t x626 = -1;
	int8_t x627 = INT8_MAX;
	int32_t x628 = INT32_MIN;

    t138 = ((x625&(x626+x627))<=x628);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x629 = 26185801LL;
	int16_t x631 = -1;
	uint16_t x632 = UINT16_MAX;
	static int32_t t139 = -424776;

    t139 = ((x629&(x630+x631))<=x632);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x635 = -332LL;
	static uint64_t x636 = 2358074228128369LLU;
	volatile int32_t t140 = -28599;

    t140 = ((x633&(x634+x635))<=x636);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x637 = -1;
	uint16_t x639 = 227U;
	int32_t t141 = 5630465;

    t141 = ((x637&(x638+x639))<=x640);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x641 = INT32_MAX;
	uint32_t x642 = UINT32_MAX;
	int32_t x643 = -310;
	static int8_t x644 = 1;
	volatile int32_t t142 = 0;

    t142 = ((x641&(x642+x643))<=x644);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x645 = INT16_MAX;
	int8_t x647 = INT8_MAX;
	volatile int32_t t143 = 1816;

    t143 = ((x645&(x646+x647))<=x648);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x650 = 30;
	volatile int8_t x651 = -23;
	static uint8_t x652 = 57U;
	int32_t t144 = -13;

    t144 = ((x649&(x650+x651))<=x652);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x654 = 32464598130LL;
	int32_t x655 = -1;
	int64_t x656 = -1LL;
	volatile int32_t t145 = 93;

    t145 = ((x653&(x654+x655))<=x656);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x661 = INT32_MIN;
	uint32_t x662 = 497991U;
	volatile int32_t x663 = INT32_MAX;
	int32_t x664 = -1;
	static int32_t t146 = 0;

    t146 = ((x661&(x662+x663))<=x664);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x665 = INT16_MIN;
	volatile int8_t x666 = -2;
	uint64_t x667 = 22LLU;
	int32_t t147 = -398921830;

    t147 = ((x665&(x666+x667))<=x668);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x669 = 537253U;
	int32_t x671 = -41378;
	int32_t x672 = -1;
	int32_t t148 = 497269;

    t148 = ((x669&(x670+x671))<=x672);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x674 = -1627;
	int64_t x676 = INT64_MIN;
	volatile int32_t t149 = 0;

    t149 = ((x673&(x674+x675))<=x676);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x677 = 6241U;
	uint64_t x678 = UINT64_MAX;
	static uint32_t x679 = 409U;
	static int16_t x680 = -1922;

    t150 = ((x677&(x678+x679))<=x680);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x683 = 23U;
	int32_t x684 = 11806787;
	int32_t t151 = 419109021;

    t151 = ((x681&(x682+x683))<=x684);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x685 = -1;
	int8_t x686 = -5;
	int16_t x687 = -1;
	int16_t x688 = 72;
	volatile int32_t t152 = -25157;

    t152 = ((x685&(x686+x687))<=x688);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x689 = 339990;
	static uint32_t x690 = UINT32_MAX;
	int16_t x691 = INT16_MIN;
	static int32_t x692 = INT32_MIN;
	int32_t t153 = -1342625;

    t153 = ((x689&(x690+x691))<=x692);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x693 = -1;
	static int32_t x694 = INT32_MAX;
	int64_t x695 = INT64_MIN;
	static int32_t x696 = 397;
	static volatile int32_t t154 = 0;

    t154 = ((x693&(x694+x695))<=x696);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x697 = 9884781803260264LL;
	static int8_t x698 = -55;
	int16_t x699 = -1;
	int32_t x700 = INT32_MIN;
	volatile int32_t t155 = -13;

    t155 = ((x697&(x698+x699))<=x700);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x701 = UINT8_MAX;
	volatile int32_t x702 = -1;
	int8_t x703 = INT8_MAX;
	uint8_t x704 = UINT8_MAX;

    t156 = ((x701&(x702+x703))<=x704);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x705 = INT8_MIN;
	volatile int32_t x706 = -774005429;
	int16_t x707 = 7459;
	volatile int32_t x708 = -3538;
	static volatile int32_t t157 = -50;

    t157 = ((x705&(x706+x707))<=x708);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x710 = 28U;
	uint32_t x711 = UINT32_MAX;
	static volatile int16_t x712 = INT16_MAX;
	int32_t t158 = -163;

    t158 = ((x709&(x710+x711))<=x712);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x714 = 63U;
	static int64_t x715 = -5LL;
	int64_t x716 = INT64_MIN;
	volatile int32_t t159 = -1;

    t159 = ((x713&(x714+x715))<=x716);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x717 = 54;
	uint16_t x719 = 100U;
	uint8_t x720 = UINT8_MAX;
	int32_t t160 = -11762714;

    t160 = ((x717&(x718+x719))<=x720);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x721 = 0;
	int64_t x722 = INT64_MIN;
	static uint64_t x723 = 55159606553LLU;
	int32_t t161 = -199;

    t161 = ((x721&(x722+x723))<=x724);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x725 = -8522019;
	int8_t x726 = INT8_MIN;
	int32_t x727 = INT32_MAX;
	static int16_t x728 = INT16_MIN;
	int32_t t162 = -37089359;

    t162 = ((x725&(x726+x727))<=x728);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x729 = 5137070923754LLU;
	uint16_t x730 = UINT16_MAX;
	volatile uint32_t x731 = 35852U;
	int16_t x732 = INT16_MIN;

    t163 = ((x729&(x730+x731))<=x732);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x733 = INT64_MAX;
	static volatile int16_t x735 = 13693;
	int32_t x736 = INT32_MIN;
	volatile int32_t t164 = -564372281;

    t164 = ((x733&(x734+x735))<=x736);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x737 = UINT64_MAX;
	static int16_t x738 = INT16_MIN;
	volatile uint8_t x739 = UINT8_MAX;
	int32_t x740 = -1377220;
	int32_t t165 = -737;

    t165 = ((x737&(x738+x739))<=x740);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x741 = INT16_MIN;
	int32_t x742 = INT32_MAX;
	int32_t t166 = 53967966;

    t166 = ((x741&(x742+x743))<=x744);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x745 = INT8_MIN;
	static int8_t x746 = INT8_MIN;
	uint8_t x747 = UINT8_MAX;
	uint64_t x748 = UINT64_MAX;
	volatile int32_t t167 = -12;

    t167 = ((x745&(x746+x747))<=x748);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x749 = INT32_MIN;
	int8_t x750 = INT8_MAX;
	int64_t x751 = INT64_MIN;
	uint16_t x752 = 21U;
	int32_t t168 = -12704;

    t168 = ((x749&(x750+x751))<=x752);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x753 = -1;
	volatile int64_t x754 = -10442903271LL;

    t169 = ((x753&(x754+x755))<=x756);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x758 = 24330175U;
	int16_t x759 = INT16_MIN;
	static uint8_t x760 = 1U;
	static volatile int32_t t170 = -8022747;

    t170 = ((x757&(x758+x759))<=x760);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x761 = 8700LLU;
	int64_t x762 = -213187375LL;
	int16_t x763 = INT16_MAX;
	volatile int32_t x764 = -7385510;

    t171 = ((x761&(x762+x763))<=x764);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x767 = -1;
	int8_t x768 = 1;

    t172 = ((x765&(x766+x767))<=x768);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x773 = 32U;
	static uint8_t x774 = UINT8_MAX;
	static uint64_t x775 = 292765LLU;
	static int32_t t173 = 62250;

    t173 = ((x773&(x774+x775))<=x776);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x777 = INT16_MAX;
	uint32_t x778 = UINT32_MAX;
	uint8_t x780 = UINT8_MAX;
	volatile int32_t t174 = 14154;

    t174 = ((x777&(x778+x779))<=x780);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x781 = 3162839LL;
	volatile uint32_t x783 = 3U;
	uint8_t x784 = 2U;

    t175 = ((x781&(x782+x783))<=x784);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x785 = INT16_MIN;
	int8_t x786 = -11;
	uint16_t x788 = 10U;
	int32_t t176 = -6939929;

    t176 = ((x785&(x786+x787))<=x788);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x789 = INT16_MIN;
	uint32_t x790 = 682176U;
	int16_t x792 = 10;
	int32_t t177 = -5499;

    t177 = ((x789&(x790+x791))<=x792);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x794 = 31U;
	int32_t x795 = INT32_MIN;
	uint32_t x796 = UINT32_MAX;
	int32_t t178 = 119490186;

    t178 = ((x793&(x794+x795))<=x796);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x801 = INT8_MIN;
	uint8_t x802 = 3U;
	uint32_t x803 = 103019U;
	int16_t x804 = INT16_MIN;

    t179 = ((x801&(x802+x803))<=x804);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x805 = 1267697347U;
	int32_t x806 = -1;
	volatile int64_t x808 = INT64_MIN;
	volatile int32_t t180 = -66;

    t180 = ((x805&(x806+x807))<=x808);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x809 = INT64_MIN;
	int32_t x811 = -1;
	int32_t t181 = 145221;

    t181 = ((x809&(x810+x811))<=x812);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x818 = INT16_MIN;
	static volatile uint16_t x819 = 2U;
	int64_t x820 = INT64_MIN;
	int32_t t182 = 2;

    t182 = ((x817&(x818+x819))<=x820);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x821 = INT8_MIN;
	static uint16_t x822 = 435U;
	uint32_t x824 = 240U;
	volatile int32_t t183 = -1345392;

    t183 = ((x821&(x822+x823))<=x824);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x825 = INT64_MIN;
	int16_t x826 = -740;
	static int64_t x827 = -1LL;
	static uint64_t x828 = 484328890451464187LLU;
	int32_t t184 = 32238;

    t184 = ((x825&(x826+x827))<=x828);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x829 = 10U;
	uint8_t x831 = UINT8_MAX;
	volatile int32_t t185 = -981887887;

    t185 = ((x829&(x830+x831))<=x832);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x833 = UINT16_MAX;
	volatile uint32_t x834 = 53U;
	int32_t x835 = INT32_MIN;
	int32_t x836 = INT32_MIN;
	int32_t t186 = 8;

    t186 = ((x833&(x834+x835))<=x836);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x837 = INT32_MIN;
	static int32_t x840 = INT32_MIN;
	volatile int32_t t187 = 33589;

    t187 = ((x837&(x838+x839))<=x840);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x841 = UINT32_MAX;
	int32_t x842 = 51755;
	int32_t x843 = INT32_MIN;
	static int32_t t188 = -1;

    t188 = ((x841&(x842+x843))<=x844);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x845 = INT16_MIN;
	static int64_t x846 = 7271134212922359LL;
	static int32_t x847 = -45;
	static uint8_t x848 = 3U;

    t189 = ((x845&(x846+x847))<=x848);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x849 = 22U;
	int8_t x852 = 1;
	static volatile int32_t t190 = -91;

    t190 = ((x849&(x850+x851))<=x852);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x853 = INT16_MIN;
	int8_t x855 = INT8_MAX;
	int64_t x856 = INT64_MAX;
	static int32_t t191 = -1433;

    t191 = ((x853&(x854+x855))<=x856);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x857 = 9257;
	int32_t x858 = INT32_MIN;
	static int64_t x860 = 1773LL;
	volatile int32_t t192 = -15;

    t192 = ((x857&(x858+x859))<=x860);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x861 = UINT8_MAX;
	uint16_t x862 = 3634U;
	uint32_t x863 = 2674339U;
	volatile int32_t x864 = -1;
	int32_t t193 = 104959;

    t193 = ((x861&(x862+x863))<=x864);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x866 = 1351997653U;
	int8_t x867 = INT8_MIN;
	volatile int32_t x868 = INT32_MIN;
	volatile int32_t t194 = -5427554;

    t194 = ((x865&(x866+x867))<=x868);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x869 = 66U;
	uint16_t x871 = UINT16_MAX;
	uint32_t x872 = 141577U;
	static volatile int32_t t195 = -2654204;

    t195 = ((x869&(x870+x871))<=x872);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x873 = -269061412;
	static int16_t x874 = -22;
	int32_t x876 = INT32_MIN;
	int32_t t196 = -10347371;

    t196 = ((x873&(x874+x875))<=x876);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint32_t x878 = 97876437U;
	volatile int16_t x879 = INT16_MIN;
	int16_t x880 = INT16_MAX;
	volatile int32_t t197 = -99857;

    t197 = ((x877&(x878+x879))<=x880);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x885 = INT64_MIN;
	uint32_t x886 = 119072361U;
	int16_t x887 = INT16_MIN;
	int16_t x888 = -8165;
	int32_t t198 = -3815847;

    t198 = ((x885&(x886+x887))<=x888);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x889 = INT8_MIN;
	static volatile uint32_t x890 = 833755U;
	int32_t x891 = 75;
	uint16_t x892 = 17831U;
	int32_t t199 = -555;

    t199 = ((x889&(x890+x891))<=x892);

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

