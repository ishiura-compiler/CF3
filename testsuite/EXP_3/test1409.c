
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

static int8_t x5 = INT8_MIN;
volatile uint8_t x6 = UINT8_MAX;
int32_t t0 = 1;
volatile int8_t x10 = 1;
volatile int32_t t1 = 127042196;
uint32_t x14 = UINT32_MAX;
uint64_t x20 = 732LLU;
int64_t x21 = -1LL;
int16_t x26 = 1;
int32_t t6 = -909;
int8_t x38 = INT8_MAX;
volatile int32_t t7 = 9582;
static uint32_t x47 = 520U;
static int64_t x56 = INT64_MIN;
volatile int8_t x62 = -1;
int64_t x63 = -1LL;
int32_t x67 = -49110;
int8_t x70 = INT8_MAX;
int64_t x77 = -1LL;
int64_t x78 = -2121173524091190356LL;
static uint8_t x83 = 10U;
uint64_t x85 = UINT64_MAX;
uint32_t x102 = 2765656U;
static int32_t x103 = INT32_MIN;
uint8_t x104 = 50U;
uint64_t x112 = 22003682299161607LLU;
static int16_t x115 = -5;
volatile int32_t t24 = 138379;
int16_t x125 = 1;
uint16_t x126 = UINT16_MAX;
int16_t x132 = INT16_MAX;
int64_t x137 = 82992360433LL;
uint32_t x139 = 21U;
volatile int16_t x147 = -1;
int32_t t29 = -45;
volatile uint32_t x155 = UINT32_MAX;
volatile int32_t t31 = -1474;
int8_t x177 = -1;
int16_t x178 = INT16_MAX;
volatile uint64_t x189 = 13273LLU;
int32_t t38 = 83779;
static volatile int64_t x205 = 13967943931LL;
int16_t x206 = 2842;
volatile int32_t t39 = -95598;
uint8_t x210 = UINT8_MAX;
int16_t x218 = INT16_MIN;
int32_t t41 = 976937;
uint8_t x228 = 5U;
volatile int32_t t42 = 1616;
uint64_t x230 = UINT64_MAX;
int64_t x232 = INT64_MIN;
int8_t x236 = -1;
int32_t x238 = -1;
volatile int8_t x241 = INT8_MIN;
int32_t x242 = -833;
volatile uint16_t x249 = UINT16_MAX;
volatile int32_t t48 = 28481017;
int32_t x256 = INT32_MIN;
uint8_t x262 = UINT8_MAX;
volatile uint32_t x263 = 85480853U;
uint32_t x270 = UINT32_MAX;
int16_t x281 = -71;
volatile uint32_t x282 = 73U;
int64_t x293 = 1102784229794395686LL;
uint8_t x294 = 0U;
volatile uint16_t x303 = 307U;
static int8_t x310 = INT8_MIN;
int32_t t60 = -33886;
static int64_t x326 = -1LL;
static uint8_t x328 = 8U;
volatile int32_t x336 = -1;
uint32_t x337 = UINT32_MAX;
volatile int16_t x349 = -3591;
int32_t t67 = 0;
volatile int32_t t68 = -163755439;
int8_t x360 = -6;
uint8_t x362 = UINT8_MAX;
static int32_t x363 = INT32_MIN;
int8_t x364 = INT8_MIN;
int16_t x371 = INT16_MIN;
static uint64_t x381 = 1140132617021LLU;
int32_t x382 = INT32_MAX;
static volatile int64_t x396 = -90LL;
volatile uint32_t x401 = 0U;
int32_t x404 = 5;
int8_t x407 = -1;
int8_t x418 = -1;
volatile int32_t x422 = -1;
volatile uint64_t x426 = 39437299223704646LLU;
int8_t x429 = -3;
int32_t x430 = -31789009;
volatile int16_t x431 = INT16_MIN;
int16_t x440 = -1;
static volatile uint8_t x441 = UINT8_MAX;
volatile int8_t x444 = 44;
int64_t x451 = INT64_MAX;
volatile int32_t t87 = 2;
uint32_t x462 = 0U;
int32_t x479 = -1;
static volatile int32_t t93 = -6;
uint64_t x485 = UINT64_MAX;
volatile uint32_t x486 = 5089168U;
volatile int64_t x488 = -2138011873973426299LL;
int8_t x493 = 57;
uint8_t x517 = 110U;
volatile uint32_t x519 = 3U;
static uint32_t x520 = UINT32_MAX;
int32_t x523 = 0;
static int64_t x524 = -1LL;
volatile int32_t t100 = -41701419;
static volatile int16_t x529 = INT16_MIN;
int32_t t102 = -597542;
int16_t x533 = -1;
static volatile int32_t t103 = -28226;
int8_t x538 = INT8_MAX;
int16_t x539 = -7;
int32_t t106 = -11904;
int64_t x549 = -1LL;
uint64_t x551 = 225875329879248594LLU;
int16_t x553 = 0;
static int8_t x556 = -1;
static int32_t t108 = 13189;
int16_t x566 = 1;
static volatile int32_t x567 = -1;
static int64_t x568 = INT64_MIN;
int8_t x577 = -26;
int64_t x580 = -13LL;
volatile int64_t x582 = -1LL;
int8_t x586 = INT8_MIN;
uint32_t x593 = 16110U;
int8_t x596 = INT8_MIN;
int8_t x606 = 36;
int8_t x607 = INT8_MAX;
uint32_t x615 = UINT32_MAX;
volatile int32_t t122 = 33374547;
uint16_t x622 = UINT16_MAX;
volatile uint8_t x623 = 1U;
uint32_t x625 = 35620U;
static int32_t x632 = INT32_MAX;
uint32_t x638 = UINT32_MAX;
uint16_t x639 = 954U;
static int32_t x641 = 5898880;
uint64_t x644 = UINT64_MAX;
uint32_t x648 = UINT32_MAX;
int32_t x651 = INT32_MAX;
int32_t t129 = -21838;
static int32_t x654 = 817;
uint64_t x662 = 29611696066153862LLU;
volatile uint8_t x666 = UINT8_MAX;
volatile int32_t x674 = -3;
static int16_t x680 = 88;
volatile int32_t t134 = 105539;
int64_t x688 = INT64_MIN;
uint16_t x698 = UINT16_MAX;
static int16_t x702 = INT16_MAX;
uint32_t x706 = UINT32_MAX;
uint16_t x708 = 47U;
int8_t x711 = 1;
int64_t x712 = -1LL;
int32_t t140 = 521305;
volatile int32_t t141 = 79110;
volatile int64_t x726 = -10LL;
static uint8_t x731 = 1U;
static volatile uint8_t x733 = 1U;
int32_t x735 = INT32_MIN;
int32_t x736 = -21280959;
volatile int32_t t145 = -6;
int8_t x738 = INT8_MIN;
int8_t x753 = INT8_MAX;
int32_t t148 = 11594462;
int32_t t150 = -26641;
uint32_t x773 = UINT32_MAX;
int32_t x778 = 2594;
uint64_t x780 = UINT64_MAX;
static int32_t t154 = 393778;
volatile int8_t x787 = -2;
volatile int32_t t156 = -195;
int64_t x797 = -2508753096094212022LL;
int64_t x800 = INT64_MAX;
uint64_t x803 = UINT64_MAX;
int8_t x806 = -1;
int32_t t159 = -1;
int32_t t160 = 50543;
volatile int32_t t162 = -3314574;
int8_t x827 = INT8_MAX;
int8_t x828 = 1;
static volatile int32_t t163 = -533913434;
int8_t x833 = INT8_MIN;
int64_t x836 = INT64_MIN;
int8_t x841 = -25;
int8_t x842 = -1;
uint32_t x846 = UINT32_MAX;
uint32_t x848 = UINT32_MAX;
volatile int32_t t168 = -12;
volatile int32_t t169 = 1296;
uint64_t x853 = 22457LLU;
uint16_t x855 = 26018U;
static int64_t x859 = -1LL;
volatile int32_t t172 = 1;
int64_t x877 = -1LL;
int16_t x878 = -1;
volatile int16_t x885 = 0;
int8_t x888 = INT8_MAX;
static int16_t x890 = -40;
uint32_t x894 = 1517182U;
int64_t x895 = INT64_MAX;
uint64_t x898 = 435LLU;
volatile int32_t t181 = 0;
uint16_t x901 = UINT16_MAX;
int32_t x902 = 0;
static int16_t x910 = INT16_MIN;
int32_t x912 = 351756;
int32_t t187 = 6957;
uint32_t x933 = 1255U;
uint8_t x934 = 0U;
static volatile uint16_t x936 = 197U;
static uint16_t x941 = 2U;
static int8_t x944 = INT8_MIN;
int8_t x948 = -1;
static uint8_t x961 = 1U;
static volatile uint32_t x985 = 1944086858U;
int8_t x986 = INT8_MAX;
uint16_t x989 = 2303U;
int8_t x1002 = INT8_MIN;


void f0(void) {
    	int64_t x7 = INT64_MAX;
	int32_t x8 = INT32_MAX;

    t0 = ((x5*x6)>(x7==x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MIN;
	volatile int64_t x11 = INT64_MAX;
	volatile int16_t x12 = -1;

    t1 = ((x9*x10)>(x11==x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x13 = UINT16_MAX;
	uint32_t x15 = UINT32_MAX;
	static int32_t x16 = INT32_MIN;
	int32_t t2 = -4;

    t2 = ((x13*x14)>(x15==x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MAX;
	int16_t x18 = -45;
	volatile uint16_t x19 = 79U;
	int32_t t3 = 431;

    t3 = ((x17*x18)>(x19==x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x22 = UINT64_MAX;
	uint16_t x23 = UINT16_MAX;
	volatile int8_t x24 = INT8_MIN;
	int32_t t4 = 3879;

    t4 = ((x21*x22)>(x23==x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x25 = 16U;
	static int64_t x27 = -8162035835LL;
	volatile int64_t x28 = INT64_MIN;
	volatile int32_t t5 = 949877568;

    t5 = ((x25*x26)>(x27==x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x33 = INT32_MIN;
	static uint32_t x34 = 7097U;
	uint8_t x35 = UINT8_MAX;
	uint8_t x36 = UINT8_MAX;

    t6 = ((x33*x34)>(x35==x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = INT8_MIN;
	uint32_t x39 = UINT32_MAX;
	int16_t x40 = INT16_MAX;

    t7 = ((x37*x38)>(x39==x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x41 = 1U;
	int8_t x42 = -1;
	int16_t x43 = -1594;
	int64_t x44 = 55LL;
	static volatile int32_t t8 = 7391627;

    t8 = ((x41*x42)>(x43==x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x45 = -1;
	static uint64_t x46 = UINT64_MAX;
	static uint8_t x48 = 1U;
	int32_t t9 = -52406008;

    t9 = ((x45*x46)>(x47==x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x53 = 5U;
	volatile int32_t x54 = INT32_MIN;
	static int16_t x55 = -1;
	volatile int32_t t10 = 62809355;

    t10 = ((x53*x54)>(x55==x56));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = 1;
	int32_t x58 = INT32_MIN;
	uint8_t x59 = 0U;
	int8_t x60 = -12;
	int32_t t11 = -29991;

    t11 = ((x57*x58)>(x59==x60));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x61 = INT16_MIN;
	int64_t x64 = INT64_MAX;
	volatile int32_t t12 = -105844;

    t12 = ((x61*x62)>(x63==x64));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x65 = 1870LLU;
	static int32_t x66 = -569022323;
	static int16_t x68 = -1;
	volatile int32_t t13 = 683;

    t13 = ((x65*x66)>(x67==x68));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x69 = -1LL;
	volatile int16_t x71 = -1;
	uint64_t x72 = UINT64_MAX;
	volatile int32_t t14 = -8049189;

    t14 = ((x69*x70)>(x71==x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = -3263LL;
	int8_t x74 = -1;
	int64_t x75 = INT64_MIN;
	static int64_t x76 = INT64_MIN;
	static volatile int32_t t15 = 192880475;

    t15 = ((x73*x74)>(x75==x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x79 = 0U;
	int8_t x80 = INT8_MIN;
	volatile int32_t t16 = -177315556;

    t16 = ((x77*x78)>(x79==x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = 0;
	int16_t x82 = -1;
	uint16_t x84 = 2U;
	volatile int32_t t17 = 5179092;

    t17 = ((x81*x82)>(x83==x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x86 = 189LLU;
	int32_t x87 = INT32_MIN;
	int32_t x88 = INT32_MAX;
	volatile int32_t t18 = -9519064;

    t18 = ((x85*x86)>(x87==x88));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x89 = UINT64_MAX;
	int64_t x90 = INT64_MIN;
	volatile uint64_t x91 = 19592222858LLU;
	int32_t x92 = 8203;
	volatile int32_t t19 = -27158203;

    t19 = ((x89*x90)>(x91==x92));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x97 = 6815094U;
	int32_t x98 = INT32_MAX;
	static volatile int32_t x99 = INT32_MIN;
	int64_t x100 = 0LL;
	volatile int32_t t20 = 8;

    t20 = ((x97*x98)>(x99==x100));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x101 = UINT8_MAX;
	int32_t t21 = -38859;

    t21 = ((x101*x102)>(x103==x104));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x109 = INT64_MAX;
	uint64_t x110 = 8459940960LLU;
	int32_t x111 = INT32_MIN;
	int32_t t22 = 5448;

    t22 = ((x109*x110)>(x111==x112));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x113 = UINT32_MAX;
	static int32_t x114 = 302360;
	uint16_t x116 = 2U;
	static int32_t t23 = -82;

    t23 = ((x113*x114)>(x115==x116));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x117 = -1;
	static int8_t x118 = INT8_MIN;
	uint32_t x119 = UINT32_MAX;
	static volatile int16_t x120 = INT16_MIN;

    t24 = ((x117*x118)>(x119==x120));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x127 = UINT8_MAX;
	volatile uint8_t x128 = 44U;
	static volatile int32_t t25 = -469;

    t25 = ((x125*x126)>(x127==x128));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x129 = 889257487;
	static volatile int8_t x130 = -1;
	static uint8_t x131 = UINT8_MAX;
	int32_t t26 = 741452;

    t26 = ((x129*x130)>(x131==x132));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x138 = 1U;
	volatile int16_t x140 = INT16_MIN;
	int32_t t27 = -175;

    t27 = ((x137*x138)>(x139==x140));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x141 = 618975U;
	static uint32_t x142 = UINT32_MAX;
	uint16_t x143 = UINT16_MAX;
	int8_t x144 = -2;
	static int32_t t28 = -366;

    t28 = ((x141*x142)>(x143==x144));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x145 = 42;
	uint32_t x146 = UINT32_MAX;
	uint16_t x148 = 7U;

    t29 = ((x145*x146)>(x147==x148));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x153 = UINT16_MAX;
	volatile int16_t x154 = 3;
	int8_t x156 = INT8_MAX;
	int32_t t30 = -73243652;

    t30 = ((x153*x154)>(x155==x156));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x157 = 1;
	static uint32_t x158 = UINT32_MAX;
	volatile uint32_t x159 = 10327908U;
	int32_t x160 = -255861682;

    t31 = ((x157*x158)>(x159==x160));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x161 = INT32_MAX;
	uint64_t x162 = 486LLU;
	int8_t x163 = 1;
	int16_t x164 = INT16_MIN;
	volatile int32_t t32 = 167125277;

    t32 = ((x161*x162)>(x163==x164));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x165 = -1;
	uint8_t x166 = 0U;
	volatile uint8_t x167 = 7U;
	uint8_t x168 = 1U;
	static int32_t t33 = 5578;

    t33 = ((x165*x166)>(x167==x168));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x169 = -6;
	int8_t x170 = -1;
	volatile uint16_t x171 = 1632U;
	volatile uint16_t x172 = UINT16_MAX;
	int32_t t34 = 77614581;

    t34 = ((x169*x170)>(x171==x172));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x179 = 443275U;
	int64_t x180 = 13LL;
	static int32_t t35 = 8480079;

    t35 = ((x177*x178)>(x179==x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x181 = 2;
	static volatile int64_t x182 = -1LL;
	int64_t x183 = -85422LL;
	static uint32_t x184 = 1082795040U;
	int32_t t36 = 23259;

    t36 = ((x181*x182)>(x183==x184));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x185 = 10924U;
	uint8_t x186 = 1U;
	static uint32_t x187 = 15901709U;
	volatile int16_t x188 = -1;
	volatile int32_t t37 = -996;

    t37 = ((x185*x186)>(x187==x188));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x190 = -2749;
	static int64_t x191 = -63988142576LL;
	int32_t x192 = 1;

    t38 = ((x189*x190)>(x191==x192));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x207 = INT16_MIN;
	int32_t x208 = INT32_MIN;

    t39 = ((x205*x206)>(x207==x208));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x209 = -199282LL;
	volatile int8_t x211 = INT8_MIN;
	int32_t x212 = INT32_MAX;
	static int32_t t40 = -101;

    t40 = ((x209*x210)>(x211==x212));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x217 = -1LL;
	volatile int32_t x219 = INT32_MAX;
	uint16_t x220 = 22U;

    t41 = ((x217*x218)>(x219==x220));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x225 = -1;
	volatile uint16_t x226 = 1U;
	int16_t x227 = INT16_MIN;

    t42 = ((x225*x226)>(x227==x228));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x229 = -1284;
	volatile int16_t x231 = -4;
	static int32_t t43 = -6240373;

    t43 = ((x229*x230)>(x231==x232));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x233 = -1;
	static int16_t x234 = -9;
	uint16_t x235 = 159U;
	int32_t t44 = -16463;

    t44 = ((x233*x234)>(x235==x236));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x237 = -21;
	uint8_t x239 = 20U;
	uint32_t x240 = 7561744U;
	static int32_t t45 = 41;

    t45 = ((x237*x238)>(x239==x240));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x243 = 54039446U;
	uint64_t x244 = 3LLU;
	volatile int32_t t46 = -21;

    t46 = ((x241*x242)>(x243==x244));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x245 = -1;
	int8_t x246 = 29;
	volatile int64_t x247 = INT64_MIN;
	int8_t x248 = 26;
	int32_t t47 = -384917959;

    t47 = ((x245*x246)>(x247==x248));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x250 = 95LL;
	volatile uint8_t x251 = 2U;
	static int64_t x252 = -1LL;

    t48 = ((x249*x250)>(x251==x252));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x253 = INT16_MAX;
	uint32_t x254 = UINT32_MAX;
	int16_t x255 = INT16_MIN;
	int32_t t49 = 856;

    t49 = ((x253*x254)>(x255==x256));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x261 = 7267LLU;
	int8_t x264 = INT8_MAX;
	int32_t t50 = 27994686;

    t50 = ((x261*x262)>(x263==x264));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x265 = -1;
	int8_t x266 = INT8_MIN;
	static int32_t x267 = INT32_MIN;
	volatile int32_t x268 = -7;
	int32_t t51 = 1190;

    t51 = ((x265*x266)>(x267==x268));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x269 = INT16_MIN;
	volatile int8_t x271 = -1;
	static uint32_t x272 = 5U;
	static int32_t t52 = -4;

    t52 = ((x269*x270)>(x271==x272));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x273 = 843027075590943LL;
	int16_t x274 = -1;
	static int16_t x275 = INT16_MIN;
	int16_t x276 = INT16_MIN;
	int32_t t53 = -225;

    t53 = ((x273*x274)>(x275==x276));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x277 = 901U;
	volatile uint8_t x278 = UINT8_MAX;
	static uint64_t x279 = 6115296LLU;
	static int64_t x280 = -814282912248094928LL;
	static volatile int32_t t54 = 1;

    t54 = ((x277*x278)>(x279==x280));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x283 = 957363605378LL;
	static int32_t x284 = INT32_MIN;
	int32_t t55 = -503;

    t55 = ((x281*x282)>(x283==x284));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x295 = 1U;
	static volatile int16_t x296 = INT16_MIN;
	volatile int32_t t56 = -37185;

    t56 = ((x293*x294)>(x295==x296));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x301 = INT16_MIN;
	volatile int32_t x302 = -12382;
	int8_t x304 = INT8_MIN;
	int32_t t57 = -2;

    t57 = ((x301*x302)>(x303==x304));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x305 = 5;
	volatile uint64_t x306 = 453522454932LLU;
	uint64_t x307 = 19829866LLU;
	int64_t x308 = 2595109637168125395LL;
	volatile int32_t t58 = 252;

    t58 = ((x305*x306)>(x307==x308));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x309 = 816369;
	int8_t x311 = -1;
	int8_t x312 = INT8_MIN;
	volatile int32_t t59 = -2047684;

    t59 = ((x309*x310)>(x311==x312));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x313 = -11;
	static int16_t x314 = INT16_MAX;
	int32_t x315 = 2;
	uint8_t x316 = 4U;

    t60 = ((x313*x314)>(x315==x316));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x317 = UINT32_MAX;
	uint16_t x318 = UINT16_MAX;
	int8_t x319 = INT8_MIN;
	int32_t x320 = INT32_MIN;
	volatile int32_t t61 = -707569364;

    t61 = ((x317*x318)>(x319==x320));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x321 = -3;
	uint8_t x322 = 3U;
	static volatile int16_t x323 = INT16_MAX;
	volatile int32_t x324 = -70950323;
	volatile int32_t t62 = 7487;

    t62 = ((x321*x322)>(x323==x324));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x325 = -1LL;
	int32_t x327 = -239231328;
	volatile int32_t t63 = 3147;

    t63 = ((x325*x326)>(x327==x328));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x333 = -1;
	volatile int32_t x334 = -1;
	static int64_t x335 = INT64_MAX;
	static volatile int32_t t64 = 834673;

    t64 = ((x333*x334)>(x335==x336));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x338 = INT8_MAX;
	static int64_t x339 = -18702180LL;
	volatile uint64_t x340 = 642183266715LLU;
	volatile int32_t t65 = 0;

    t65 = ((x337*x338)>(x339==x340));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x345 = 270651290;
	static int16_t x346 = 1;
	volatile int64_t x347 = -62LL;
	volatile uint32_t x348 = UINT32_MAX;
	volatile int32_t t66 = -1018;

    t66 = ((x345*x346)>(x347==x348));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x350 = INT8_MAX;
	uint8_t x351 = 14U;
	volatile int16_t x352 = INT16_MAX;

    t67 = ((x349*x350)>(x351==x352));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x353 = INT16_MAX;
	uint8_t x354 = 0U;
	int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MIN;

    t68 = ((x353*x354)>(x355==x356));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x357 = 59558499U;
	uint32_t x358 = 71U;
	int8_t x359 = INT8_MIN;
	int32_t t69 = 431;

    t69 = ((x357*x358)>(x359==x360));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x361 = UINT32_MAX;
	volatile int32_t t70 = -717;

    t70 = ((x361*x362)>(x363==x364));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x369 = -3112;
	static uint16_t x370 = 24U;
	int16_t x372 = -1;
	volatile int32_t t71 = 208613;

    t71 = ((x369*x370)>(x371==x372));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x383 = -1;
	volatile int16_t x384 = -1;
	volatile int32_t t72 = 22335346;

    t72 = ((x381*x382)>(x383==x384));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x385 = UINT16_MAX;
	volatile int8_t x386 = INT8_MAX;
	uint8_t x387 = 109U;
	uint8_t x388 = 26U;
	int32_t t73 = -9;

    t73 = ((x385*x386)>(x387==x388));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x389 = UINT8_MAX;
	int64_t x390 = -554131978543108LL;
	static uint8_t x391 = 15U;
	volatile int8_t x392 = 8;
	volatile int32_t t74 = 1;

    t74 = ((x389*x390)>(x391==x392));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x393 = UINT32_MAX;
	uint32_t x394 = 2035U;
	static volatile uint32_t x395 = 482U;
	int32_t t75 = -7;

    t75 = ((x393*x394)>(x395==x396));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x397 = -1;
	int64_t x398 = -299224280367578LL;
	int8_t x399 = 1;
	int16_t x400 = INT16_MAX;
	int32_t t76 = 13;

    t76 = ((x397*x398)>(x399==x400));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x402 = 23U;
	volatile int16_t x403 = 3;
	int32_t t77 = -57802967;

    t77 = ((x401*x402)>(x403==x404));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x405 = 3U;
	volatile int16_t x406 = INT16_MAX;
	int32_t x408 = INT32_MIN;
	volatile int32_t t78 = 32;

    t78 = ((x405*x406)>(x407==x408));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x413 = 10U;
	volatile int64_t x414 = 50353721899507LL;
	static volatile int64_t x415 = INT64_MAX;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t79 = -361;

    t79 = ((x413*x414)>(x415==x416));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x417 = -631586;
	uint64_t x419 = 3992441459028700LLU;
	uint64_t x420 = 6984543985886335864LLU;
	int32_t t80 = -44;

    t80 = ((x417*x418)>(x419==x420));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x421 = INT64_MAX;
	uint8_t x423 = UINT8_MAX;
	static int8_t x424 = INT8_MIN;
	int32_t t81 = -21136;

    t81 = ((x421*x422)>(x423==x424));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x425 = UINT64_MAX;
	static uint8_t x427 = UINT8_MAX;
	static volatile int16_t x428 = 6;
	volatile int32_t t82 = 0;

    t82 = ((x425*x426)>(x427==x428));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x432 = 354847U;
	int32_t t83 = -1693;

    t83 = ((x429*x430)>(x431==x432));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x433 = UINT32_MAX;
	static int16_t x434 = INT16_MAX;
	int8_t x435 = INT8_MAX;
	int32_t x436 = INT32_MIN;
	int32_t t84 = -408601878;

    t84 = ((x433*x434)>(x435==x436));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x437 = 158963617499LL;
	static int32_t x438 = 45213;
	volatile uint32_t x439 = 48964367U;
	static int32_t t85 = 2798979;

    t85 = ((x437*x438)>(x439==x440));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x442 = -119792508LL;
	uint32_t x443 = 0U;
	volatile int32_t t86 = 20994;

    t86 = ((x441*x442)>(x443==x444));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x449 = 104703U;
	int8_t x450 = INT8_MIN;
	uint8_t x452 = 0U;

    t87 = ((x449*x450)>(x451==x452));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x453 = INT16_MIN;
	int64_t x454 = -1LL;
	int8_t x455 = -1;
	uint16_t x456 = 4133U;
	int32_t t88 = 1580;

    t88 = ((x453*x454)>(x455==x456));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x457 = 2169;
	static uint16_t x458 = 20767U;
	volatile int8_t x459 = INT8_MIN;
	volatile uint16_t x460 = 22259U;
	volatile int32_t t89 = 319177;

    t89 = ((x457*x458)>(x459==x460));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x461 = UINT8_MAX;
	int8_t x463 = INT8_MIN;
	int16_t x464 = INT16_MIN;
	static int32_t t90 = 14378171;

    t90 = ((x461*x462)>(x463==x464));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x469 = 216887370LLU;
	static uint64_t x470 = 1665948587LLU;
	int64_t x471 = INT64_MIN;
	int16_t x472 = INT16_MAX;
	int32_t t91 = 129374845;

    t91 = ((x469*x470)>(x471==x472));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x477 = UINT32_MAX;
	uint16_t x478 = 1740U;
	int16_t x480 = -1;
	static int32_t t92 = 1004334100;

    t92 = ((x477*x478)>(x479==x480));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x481 = 5681683254LLU;
	uint32_t x482 = 2010786495U;
	uint64_t x483 = UINT64_MAX;
	static int8_t x484 = 16;

    t93 = ((x481*x482)>(x483==x484));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x487 = UINT32_MAX;
	static int32_t t94 = 780595;

    t94 = ((x485*x486)>(x487==x488));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x489 = INT8_MIN;
	uint16_t x490 = 3U;
	uint16_t x491 = 24462U;
	int8_t x492 = INT8_MIN;
	volatile int32_t t95 = -1;

    t95 = ((x489*x490)>(x491==x492));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x494 = -1;
	volatile uint16_t x495 = 2U;
	uint32_t x496 = 14830602U;
	volatile int32_t t96 = 2575027;

    t96 = ((x493*x494)>(x495==x496));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x505 = -1;
	int8_t x506 = -1;
	int8_t x507 = INT8_MAX;
	uint8_t x508 = 26U;
	volatile int32_t t97 = -1701;

    t97 = ((x505*x506)>(x507==x508));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x513 = -1;
	static int32_t x514 = -125374962;
	int32_t x515 = INT32_MAX;
	volatile int16_t x516 = INT16_MIN;
	int32_t t98 = 1446887;

    t98 = ((x513*x514)>(x515==x516));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x518 = UINT32_MAX;
	int32_t t99 = 5963648;

    t99 = ((x517*x518)>(x519==x520));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x521 = UINT64_MAX;
	int64_t x522 = -1LL;

    t100 = ((x521*x522)>(x523==x524));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x525 = -1;
	volatile int8_t x526 = INT8_MIN;
	int32_t x527 = INT32_MIN;
	int64_t x528 = -1LL;
	static volatile int32_t t101 = 513;

    t101 = ((x525*x526)>(x527==x528));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x530 = -1;
	int16_t x531 = INT16_MIN;
	uint64_t x532 = 15882881367LLU;

    t102 = ((x529*x530)>(x531==x532));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x534 = UINT8_MAX;
	uint8_t x535 = 0U;
	uint32_t x536 = 2U;

    t103 = ((x533*x534)>(x535==x536));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x537 = 4;
	uint16_t x540 = UINT16_MAX;
	volatile int32_t t104 = 70599357;

    t104 = ((x537*x538)>(x539==x540));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x541 = INT16_MIN;
	int8_t x542 = INT8_MIN;
	volatile int16_t x543 = INT16_MAX;
	int16_t x544 = INT16_MAX;
	int32_t t105 = -961415780;

    t105 = ((x541*x542)>(x543==x544));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x545 = UINT32_MAX;
	int64_t x546 = -1LL;
	uint32_t x547 = UINT32_MAX;
	static int32_t x548 = -226900;

    t106 = ((x545*x546)>(x547==x548));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x550 = INT16_MIN;
	static int32_t x552 = INT32_MIN;
	int32_t t107 = 3720;

    t107 = ((x549*x550)>(x551==x552));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x554 = UINT64_MAX;
	volatile uint32_t x555 = 5U;

    t108 = ((x553*x554)>(x555==x556));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x557 = INT16_MIN;
	static uint64_t x558 = 3916095262683410LLU;
	volatile int8_t x559 = 4;
	int64_t x560 = 2681295370795LL;
	static volatile int32_t t109 = -350557;

    t109 = ((x557*x558)>(x559==x560));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint64_t x561 = 98938235LLU;
	int32_t x562 = INT32_MIN;
	int32_t x563 = INT32_MAX;
	int8_t x564 = 0;
	int32_t t110 = -1056003103;

    t110 = ((x561*x562)>(x563==x564));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x565 = INT32_MIN;
	volatile int32_t t111 = 14935;

    t111 = ((x565*x566)>(x567==x568));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x569 = UINT16_MAX;
	uint8_t x570 = 0U;
	int32_t x571 = INT32_MIN;
	int64_t x572 = -1LL;
	volatile int32_t t112 = 4;

    t112 = ((x569*x570)>(x571==x572));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x573 = INT8_MIN;
	uint64_t x574 = 483955353LLU;
	static int16_t x575 = 6619;
	int8_t x576 = INT8_MIN;
	volatile int32_t t113 = 87894824;

    t113 = ((x573*x574)>(x575==x576));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x578 = UINT64_MAX;
	uint8_t x579 = UINT8_MAX;
	static volatile int32_t t114 = 5424;

    t114 = ((x577*x578)>(x579==x580));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x581 = 1044662690U;
	uint64_t x583 = 5376642353438850LLU;
	uint32_t x584 = UINT32_MAX;
	int32_t t115 = 49804675;

    t115 = ((x581*x582)>(x583==x584));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x585 = 125245343298367764LLU;
	uint16_t x587 = 19U;
	int32_t x588 = -328527;
	int32_t t116 = 505;

    t116 = ((x585*x586)>(x587==x588));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x589 = INT8_MIN;
	static volatile int8_t x590 = INT8_MAX;
	static uint8_t x591 = 1U;
	volatile int32_t x592 = INT32_MIN;
	int32_t t117 = 39796;

    t117 = ((x589*x590)>(x591==x592));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x594 = INT8_MIN;
	int16_t x595 = 1;
	int32_t t118 = -10;

    t118 = ((x593*x594)>(x595==x596));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x601 = 35U;
	uint16_t x602 = 125U;
	uint64_t x603 = 17826014852421LLU;
	static uint64_t x604 = 65503LLU;
	int32_t t119 = -2;

    t119 = ((x601*x602)>(x603==x604));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x605 = -1;
	int16_t x608 = INT16_MIN;
	int32_t t120 = -8182;

    t120 = ((x605*x606)>(x607==x608));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x613 = -1;
	volatile uint8_t x614 = 3U;
	static int8_t x616 = -25;
	volatile int32_t t121 = -9;

    t121 = ((x613*x614)>(x615==x616));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x617 = -1LL;
	int8_t x618 = -1;
	uint64_t x619 = UINT64_MAX;
	uint64_t x620 = 488308416235302LLU;

    t122 = ((x617*x618)>(x619==x620));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x621 = 1U;
	volatile int8_t x624 = -1;
	int32_t t123 = 23833;

    t123 = ((x621*x622)>(x623==x624));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x626 = -76;
	static int8_t x627 = INT8_MIN;
	int8_t x628 = -1;
	int32_t t124 = 0;

    t124 = ((x625*x626)>(x627==x628));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x629 = INT8_MIN;
	volatile uint64_t x630 = UINT64_MAX;
	static int16_t x631 = -1;
	static int32_t t125 = 383;

    t125 = ((x629*x630)>(x631==x632));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x637 = 5LL;
	static int64_t x640 = INT64_MIN;
	static volatile int32_t t126 = -9920;

    t126 = ((x637*x638)>(x639==x640));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x642 = -1;
	static uint32_t x643 = 30U;
	static volatile int32_t t127 = -862106;

    t127 = ((x641*x642)>(x643==x644));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x645 = 1U;
	volatile uint16_t x646 = UINT16_MAX;
	uint16_t x647 = UINT16_MAX;
	volatile int32_t t128 = 0;

    t128 = ((x645*x646)>(x647==x648));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x649 = -13;
	int32_t x650 = 3809940;
	volatile int32_t x652 = -1;

    t129 = ((x649*x650)>(x651==x652));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x653 = 1968;
	int16_t x655 = INT16_MIN;
	int8_t x656 = -1;
	int32_t t130 = -27483627;

    t130 = ((x653*x654)>(x655==x656));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x661 = -6;
	int8_t x663 = 5;
	static int32_t x664 = INT32_MIN;
	int32_t t131 = 22811265;

    t131 = ((x661*x662)>(x663==x664));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x665 = 570U;
	int16_t x667 = INT16_MIN;
	volatile int32_t x668 = 231875560;
	volatile int32_t t132 = 6249;

    t132 = ((x665*x666)>(x667==x668));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x673 = 7U;
	uint64_t x675 = UINT64_MAX;
	uint8_t x676 = 8U;
	volatile int32_t t133 = -65327;

    t133 = ((x673*x674)>(x675==x676));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x677 = -1LL;
	static uint64_t x678 = 7089247487841LLU;
	volatile int32_t x679 = -70618707;

    t134 = ((x677*x678)>(x679==x680));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x681 = INT64_MIN;
	uint64_t x682 = 1269668685494455LLU;
	volatile int32_t x683 = INT32_MAX;
	int16_t x684 = -1;
	static volatile int32_t t135 = 218489;

    t135 = ((x681*x682)>(x683==x684));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x685 = -1;
	int32_t x686 = -240854970;
	volatile int8_t x687 = INT8_MIN;
	volatile int32_t t136 = 135;

    t136 = ((x685*x686)>(x687==x688));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x697 = UINT64_MAX;
	int8_t x699 = INT8_MIN;
	int64_t x700 = 17044021443LL;
	static volatile int32_t t137 = -31780;

    t137 = ((x697*x698)>(x699==x700));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x701 = -3558;
	static int64_t x703 = -1LL;
	static int32_t x704 = -1;
	int32_t t138 = 485494530;

    t138 = ((x701*x702)>(x703==x704));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x705 = INT32_MIN;
	static int32_t x707 = -70079;
	volatile int32_t t139 = -506;

    t139 = ((x705*x706)>(x707==x708));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint16_t x709 = UINT16_MAX;
	int64_t x710 = 64783618353791LL;

    t140 = ((x709*x710)>(x711==x712));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x713 = INT8_MIN;
	static uint16_t x714 = UINT16_MAX;
	int64_t x715 = INT64_MIN;
	int64_t x716 = -5094074LL;

    t141 = ((x713*x714)>(x715==x716));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x721 = UINT32_MAX;
	int16_t x722 = -1;
	uint32_t x723 = 4277798U;
	static uint8_t x724 = 107U;
	static volatile int32_t t142 = -761;

    t142 = ((x721*x722)>(x723==x724));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x725 = INT8_MAX;
	int64_t x727 = INT64_MIN;
	volatile int32_t x728 = -1;
	int32_t t143 = -1748907;

    t143 = ((x725*x726)>(x727==x728));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x729 = 10U;
	static int8_t x730 = -1;
	static volatile int32_t x732 = 12623;
	static volatile int32_t t144 = -7120;

    t144 = ((x729*x730)>(x731==x732));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x734 = 18U;

    t145 = ((x733*x734)>(x735==x736));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x737 = -1;
	volatile int16_t x739 = 0;
	int16_t x740 = -1;
	int32_t t146 = -1;

    t146 = ((x737*x738)>(x739==x740));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x754 = -282;
	int32_t x755 = 11;
	int64_t x756 = INT64_MIN;
	static int32_t t147 = -30882;

    t147 = ((x753*x754)>(x755==x756));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x757 = INT16_MIN;
	static uint8_t x758 = 2U;
	int8_t x759 = -2;
	int32_t x760 = INT32_MAX;

    t148 = ((x757*x758)>(x759==x760));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x761 = -1LL;
	int8_t x762 = INT8_MIN;
	static uint32_t x763 = 793U;
	volatile uint16_t x764 = UINT16_MAX;
	static int32_t t149 = 24;

    t149 = ((x761*x762)>(x763==x764));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x765 = 5U;
	volatile uint8_t x766 = 39U;
	uint32_t x767 = 191U;
	int8_t x768 = 0;

    t150 = ((x765*x766)>(x767==x768));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x769 = INT64_MIN;
	int16_t x770 = 0;
	volatile int8_t x771 = INT8_MAX;
	int32_t x772 = INT32_MAX;
	static int32_t t151 = 92540;

    t151 = ((x769*x770)>(x771==x772));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x774 = -1;
	int8_t x775 = INT8_MIN;
	uint8_t x776 = 3U;
	volatile int32_t t152 = 1479;

    t152 = ((x773*x774)>(x775==x776));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x777 = UINT64_MAX;
	uint16_t x779 = UINT16_MAX;
	volatile int32_t t153 = 11253;

    t153 = ((x777*x778)>(x779==x780));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x781 = 478166723;
	int32_t x782 = 1;
	static uint8_t x783 = 21U;
	int32_t x784 = -1;

    t154 = ((x781*x782)>(x783==x784));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x785 = UINT64_MAX;
	uint8_t x786 = UINT8_MAX;
	uint32_t x788 = 715129U;
	int32_t t155 = -2270905;

    t155 = ((x785*x786)>(x787==x788));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x793 = -1;
	volatile int64_t x794 = 115236111LL;
	volatile uint64_t x795 = 1LLU;
	uint8_t x796 = UINT8_MAX;

    t156 = ((x793*x794)>(x795==x796));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x798 = -1LL;
	int8_t x799 = INT8_MIN;
	int32_t t157 = -308964;

    t157 = ((x797*x798)>(x799==x800));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x801 = -132138157763989378LL;
	uint64_t x802 = 2138165649848309396LLU;
	int16_t x804 = INT16_MIN;
	int32_t t158 = -198;

    t158 = ((x801*x802)>(x803==x804));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x805 = 1150U;
	static volatile int8_t x807 = -7;
	volatile int16_t x808 = 15650;

    t159 = ((x805*x806)>(x807==x808));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x813 = 6181875U;
	int32_t x814 = INT32_MIN;
	int64_t x815 = INT64_MIN;
	int16_t x816 = -1386;

    t160 = ((x813*x814)>(x815==x816));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x817 = UINT8_MAX;
	int16_t x818 = INT16_MIN;
	uint32_t x819 = UINT32_MAX;
	int64_t x820 = 8986670729322348LL;
	volatile int32_t t161 = -61720;

    t161 = ((x817*x818)>(x819==x820));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x821 = 1307;
	volatile uint8_t x822 = 19U;
	int64_t x823 = 82409LL;
	volatile int64_t x824 = INT64_MIN;

    t162 = ((x821*x822)>(x823==x824));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x825 = 2;
	static volatile int16_t x826 = 21;

    t163 = ((x825*x826)>(x827==x828));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x829 = 0U;
	uint64_t x830 = 2143963825LLU;
	volatile uint32_t x831 = 952404U;
	uint16_t x832 = UINT16_MAX;
	int32_t t164 = 3;

    t164 = ((x829*x830)>(x831==x832));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x834 = -1;
	int8_t x835 = -1;
	int32_t t165 = 94;

    t165 = ((x833*x834)>(x835==x836));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x837 = -1;
	int8_t x838 = INT8_MIN;
	static uint16_t x839 = UINT16_MAX;
	uint8_t x840 = 83U;
	int32_t t166 = -463251741;

    t166 = ((x837*x838)>(x839==x840));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x843 = 218970017;
	int32_t x844 = -1;
	int32_t t167 = 43715824;

    t167 = ((x841*x842)>(x843==x844));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x845 = INT32_MIN;
	uint64_t x847 = 1731261059059272LLU;

    t168 = ((x845*x846)>(x847==x848));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x849 = -2688;
	uint64_t x850 = 2838019217LLU;
	int64_t x851 = 61LL;
	volatile uint16_t x852 = 248U;

    t169 = ((x849*x850)>(x851==x852));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x854 = INT64_MIN;
	uint32_t x856 = UINT32_MAX;
	volatile int32_t t170 = -5;

    t170 = ((x853*x854)>(x855==x856));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x857 = -1LL;
	uint32_t x858 = UINT32_MAX;
	int8_t x860 = INT8_MIN;
	int32_t t171 = -15289;

    t171 = ((x857*x858)>(x859==x860));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x861 = 121;
	uint16_t x862 = 31U;
	int8_t x863 = INT8_MIN;
	static int64_t x864 = INT64_MAX;

    t172 = ((x861*x862)>(x863==x864));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x865 = 623400910U;
	uint16_t x866 = 546U;
	volatile int16_t x867 = INT16_MIN;
	int8_t x868 = -30;
	static int32_t t173 = 25711;

    t173 = ((x865*x866)>(x867==x868));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x869 = -1;
	uint32_t x870 = UINT32_MAX;
	int32_t x871 = INT32_MAX;
	int16_t x872 = INT16_MIN;
	volatile int32_t t174 = 1011623691;

    t174 = ((x869*x870)>(x871==x872));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x873 = 2070;
	int64_t x874 = 423357814422368LL;
	uint32_t x875 = 185698U;
	static uint8_t x876 = UINT8_MAX;
	static int32_t t175 = 7933;

    t175 = ((x873*x874)>(x875==x876));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x879 = INT64_MIN;
	int32_t x880 = INT32_MAX;
	static volatile int32_t t176 = 8091173;

    t176 = ((x877*x878)>(x879==x880));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x881 = -1LL;
	uint32_t x882 = 666879364U;
	int8_t x883 = -1;
	uint32_t x884 = UINT32_MAX;
	volatile int32_t t177 = -52067605;

    t177 = ((x881*x882)>(x883==x884));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x886 = 5;
	int32_t x887 = -1360892;
	int32_t t178 = -87775376;

    t178 = ((x885*x886)>(x887==x888));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x889 = UINT8_MAX;
	volatile uint8_t x891 = 1U;
	volatile int16_t x892 = INT16_MIN;
	int32_t t179 = -1019896;

    t179 = ((x889*x890)>(x891==x892));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x893 = 4173;
	int64_t x896 = -1LL;
	volatile int32_t t180 = -21;

    t180 = ((x893*x894)>(x895==x896));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x897 = 40U;
	uint32_t x899 = 13352809U;
	volatile int64_t x900 = INT64_MIN;

    t181 = ((x897*x898)>(x899==x900));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x903 = 11;
	uint32_t x904 = 20619U;
	volatile int32_t t182 = -100722471;

    t182 = ((x901*x902)>(x903==x904));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x905 = -1;
	uint64_t x906 = 128118LLU;
	uint32_t x907 = UINT32_MAX;
	int64_t x908 = INT64_MAX;
	volatile int32_t t183 = 253;

    t183 = ((x905*x906)>(x907==x908));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x909 = 62;
	int32_t x911 = -129852;
	volatile int32_t t184 = 50859603;

    t184 = ((x909*x910)>(x911==x912));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x913 = -1;
	static uint8_t x914 = 5U;
	static volatile int64_t x915 = INT64_MAX;
	uint64_t x916 = UINT64_MAX;
	volatile int32_t t185 = 2670;

    t185 = ((x913*x914)>(x915==x916));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x917 = 133328524;
	volatile uint16_t x918 = 5U;
	volatile int8_t x919 = 0;
	static int32_t x920 = 38788;
	int32_t t186 = -229554039;

    t186 = ((x917*x918)>(x919==x920));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x921 = INT16_MAX;
	uint16_t x922 = UINT16_MAX;
	uint64_t x923 = UINT64_MAX;
	int16_t x924 = -1;

    t187 = ((x921*x922)>(x923==x924));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x935 = 4U;
	int32_t t188 = 1804;

    t188 = ((x933*x934)>(x935==x936));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x937 = 0;
	static int32_t x938 = -1;
	int16_t x939 = -1;
	uint8_t x940 = 19U;
	int32_t t189 = -76200602;

    t189 = ((x937*x938)>(x939==x940));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x942 = 67997250LLU;
	static uint32_t x943 = 871U;
	int32_t t190 = -1920587;

    t190 = ((x941*x942)>(x943==x944));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x945 = UINT64_MAX;
	int32_t x946 = INT32_MIN;
	uint32_t x947 = 382299594U;
	volatile int32_t t191 = 65694630;

    t191 = ((x945*x946)>(x947==x948));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x957 = UINT64_MAX;
	uint16_t x958 = 77U;
	int16_t x959 = INT16_MIN;
	int16_t x960 = -1;
	static int32_t t192 = -16859339;

    t192 = ((x957*x958)>(x959==x960));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x962 = UINT16_MAX;
	static uint64_t x963 = 48489LLU;
	int64_t x964 = INT64_MIN;
	int32_t t193 = 353976;

    t193 = ((x961*x962)>(x963==x964));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x969 = 29686284133730LLU;
	int16_t x970 = INT16_MIN;
	static int16_t x971 = 3;
	uint64_t x972 = 26173044420LLU;
	int32_t t194 = 16;

    t194 = ((x969*x970)>(x971==x972));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x973 = INT8_MIN;
	static volatile int16_t x974 = -1;
	volatile int16_t x975 = INT16_MIN;
	int16_t x976 = INT16_MIN;
	volatile int32_t t195 = -52092935;

    t195 = ((x973*x974)>(x975==x976));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x987 = 2274087LL;
	uint64_t x988 = 105670121LLU;
	volatile int32_t t196 = -1374498;

    t196 = ((x985*x986)>(x987==x988));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x990 = 0U;
	uint32_t x991 = UINT32_MAX;
	volatile uint16_t x992 = 62U;
	int32_t t197 = -589491;

    t197 = ((x989*x990)>(x991==x992));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x993 = UINT64_MAX;
	volatile uint8_t x994 = 1U;
	int32_t x995 = -65252181;
	static volatile int64_t x996 = 6933LL;
	static int32_t t198 = -1;

    t198 = ((x993*x994)>(x995==x996));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1001 = INT16_MAX;
	int8_t x1003 = -1;
	static int64_t x1004 = INT64_MIN;
	volatile int32_t t199 = -1;

    t199 = ((x1001*x1002)>(x1003==x1004));

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

