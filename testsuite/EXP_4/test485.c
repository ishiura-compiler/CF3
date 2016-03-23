
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

volatile uint64_t x5 = UINT64_MAX;
int64_t x13 = INT64_MIN;
static volatile int64_t x23 = -1LL;
int8_t x26 = -13;
int64_t x32 = -1LL;
static int8_t x36 = INT8_MIN;
uint32_t x43 = 1403U;
int8_t x45 = -2;
uint8_t x54 = 0U;
volatile int8_t x55 = 0;
int16_t x57 = INT16_MIN;
int32_t t12 = -87;
int16_t x61 = -2;
static int32_t x63 = INT32_MIN;
uint8_t x75 = 18U;
int32_t x78 = INT32_MIN;
uint8_t x79 = 53U;
volatile int32_t t16 = 55;
uint64_t x95 = 2016301002LLU;
uint16_t x102 = UINT16_MAX;
int32_t x104 = 574;
static int16_t x116 = INT16_MIN;
static volatile int64_t x124 = INT64_MAX;
volatile uint64_t x125 = 227928402079816115LLU;
uint32_t x137 = UINT32_MAX;
int64_t x139 = -1822LL;
static int32_t x141 = 83353;
volatile int8_t x144 = INT8_MIN;
static int8_t x145 = 2;
uint64_t x148 = 131792514569392LLU;
uint8_t x153 = UINT8_MAX;
uint64_t x161 = 3008624270580LLU;
uint32_t x164 = UINT32_MAX;
static uint8_t x166 = UINT8_MAX;
volatile int16_t x173 = 210;
static int16_t x176 = -1;
static volatile uint32_t x183 = 3U;
int8_t x185 = INT8_MIN;
uint64_t x187 = 528930174490700792LLU;
int16_t x191 = 3231;
static int8_t x192 = 1;
volatile int32_t t38 = -62782459;
int32_t x201 = -1;
volatile int32_t t41 = 87368;
volatile uint16_t x213 = UINT16_MAX;
uint64_t x215 = 289419864566393LLU;
static uint16_t x220 = 1U;
volatile int32_t t43 = 1788;
static volatile int32_t t45 = -364;
static volatile uint64_t x239 = UINT64_MAX;
static int8_t x243 = -1;
volatile int16_t x245 = -1;
int32_t x246 = 76;
volatile int32_t t51 = 507068527;
volatile int32_t t52 = -1647;
uint32_t x272 = 1968U;
volatile int32_t t54 = 25;
int8_t x279 = INT8_MIN;
uint64_t x280 = 29541396LLU;
int64_t x293 = INT64_MAX;
int8_t x294 = 1;
int8_t x306 = INT8_MIN;
int8_t x307 = -1;
int32_t x322 = -1;
int32_t x326 = 31535;
static int64_t x339 = -7533142573082744LL;
volatile uint8_t x340 = 2U;
int64_t x346 = 10233633549799LL;
uint32_t x348 = 1724449421U;
static volatile int32_t t69 = 0;
volatile uint16_t x355 = 1319U;
volatile uint32_t x359 = 16U;
uint64_t x363 = 120LLU;
int64_t x364 = INT64_MIN;
int8_t x375 = INT8_MIN;
int8_t x376 = INT8_MAX;
volatile int32_t t73 = 148746857;
int8_t x384 = 1;
int32_t x393 = -9009637;
static int8_t x394 = -1;
int32_t x395 = -1;
int32_t x400 = 196423183;
int16_t x402 = INT16_MAX;
int32_t t80 = 7930264;
int16_t x411 = -1;
int16_t x415 = INT16_MIN;
volatile uint64_t x416 = 6999LLU;
volatile int64_t x417 = -1LL;
uint16_t x442 = 31781U;
volatile int32_t x446 = INT32_MIN;
int32_t t88 = 1;
int8_t x460 = -1;
int8_t x466 = INT8_MIN;
uint64_t x468 = 14641LLU;
volatile int32_t t90 = 10;
volatile int8_t x481 = INT8_MIN;
int8_t x487 = 7;
volatile uint64_t x488 = 135908088410LLU;
int16_t x489 = 68;
int32_t x491 = 1324;
int64_t x498 = 54LL;
int32_t x499 = INT32_MAX;
static uint16_t x501 = 29975U;
static int16_t x509 = -1;
int16_t x511 = INT16_MIN;
uint16_t x513 = 454U;
int16_t x516 = -474;
uint32_t x517 = 4795260U;
uint32_t x519 = 7188U;
int64_t x533 = -1LL;
uint64_t x540 = UINT64_MAX;
static int32_t t106 = 472088532;
int8_t x560 = -1;
int32_t t110 = 10670;
int8_t x597 = -1;
uint16_t x601 = UINT16_MAX;
int64_t x604 = INT64_MIN;
int64_t x608 = 3887342028LL;
int8_t x611 = -9;
int16_t x615 = INT16_MIN;
volatile int64_t x620 = 4567088925952LL;
volatile int32_t x627 = -1;
uint8_t x633 = UINT8_MAX;
static int16_t x634 = -16;
int16_t x635 = -22;
int8_t x648 = 0;
static uint16_t x650 = 31230U;
int64_t x666 = -13809780LL;
volatile int32_t t130 = 603680;
volatile int32_t t131 = 28;
uint8_t x677 = 2U;
uint32_t x683 = 41U;
static uint32_t x686 = 1U;
int64_t x691 = -1LL;
static volatile int32_t t135 = -1;
static int8_t x693 = INT8_MIN;
int8_t x694 = -1;
int64_t x696 = -1LL;
volatile int8_t x698 = -1;
uint16_t x712 = 1U;
int16_t x715 = INT16_MIN;
static uint32_t x725 = 377448140U;
int32_t x734 = INT32_MIN;
uint64_t x736 = UINT64_MAX;
int32_t x738 = 6470;
static int32_t t144 = -56174497;
uint64_t x747 = UINT64_MAX;
int32_t x749 = -68305;
static uint8_t x752 = UINT8_MAX;
int64_t x753 = -29554LL;
int8_t x761 = INT8_MAX;
int64_t x762 = -1LL;
uint32_t x766 = UINT32_MAX;
int32_t t149 = -2237;
volatile int32_t x769 = -1019868;
int32_t x770 = -1;
volatile uint8_t x775 = 35U;
volatile uint16_t x776 = UINT16_MAX;
volatile uint32_t x781 = UINT32_MAX;
int8_t x783 = -1;
static uint64_t x787 = UINT64_MAX;
int32_t t153 = -431142;
static volatile int32_t x790 = INT32_MAX;
uint8_t x795 = 3U;
int8_t x798 = INT8_MAX;
volatile uint8_t x804 = 89U;
int32_t t160 = -1045;
volatile int64_t x829 = INT64_MIN;
static int64_t x830 = INT64_MIN;
static int16_t x836 = -1;
volatile int32_t t162 = 501;
int8_t x838 = INT8_MIN;
volatile int32_t x842 = INT32_MAX;
volatile uint8_t x843 = 78U;
int8_t x845 = INT8_MIN;
int16_t x850 = 0;
int32_t x854 = -1;
int8_t x855 = -6;
int32_t x856 = -1;
static uint64_t x881 = 2LLU;
volatile int32_t x882 = INT32_MIN;
volatile uint32_t x899 = 501U;
uint8_t x921 = 13U;
static volatile uint64_t x923 = 38LLU;
int32_t t181 = -627;
volatile uint16_t x934 = 5535U;
uint64_t x936 = 1087760530265025LLU;
volatile int32_t t183 = 1;
int32_t t184 = 13758235;
volatile uint16_t x957 = UINT16_MAX;
uint32_t x959 = 51797607U;
static int32_t t187 = -51;
volatile int32_t x976 = -512450434;
int16_t x984 = 103;
static int64_t x992 = 31643LL;
uint16_t x1000 = 0U;
volatile int32_t t192 = -637;
uint64_t x1001 = 25017254152766979LLU;
static uint32_t x1010 = 1U;
int32_t x1011 = -1;
int32_t x1014 = -275539971;
int32_t x1016 = -1;
int64_t x1018 = 5561LL;
static uint8_t x1020 = 62U;
static int64_t x1029 = INT64_MAX;
int32_t x1042 = 689085326;
int64_t x1044 = 859LL;
int8_t x1052 = -1;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile uint16_t x2 = 16174U;
	static uint16_t x3 = UINT16_MAX;
	int64_t x4 = 3040LL;
	int32_t t0 = 0;

    t0 = (x1>(x2!=(x3*x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x6 = INT64_MAX;
	uint8_t x7 = 8U;
	static uint16_t x8 = 238U;
	volatile int32_t t1 = -1147654;

    t1 = (x5>(x6!=(x7*x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x14 = 430754962U;
	volatile uint64_t x15 = UINT64_MAX;
	int64_t x16 = INT64_MAX;
	int32_t t2 = -194150448;

    t2 = (x13>(x14!=(x15*x16)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x21 = INT64_MIN;
	static uint64_t x22 = 9LLU;
	uint64_t x24 = UINT64_MAX;
	volatile int32_t t3 = -4614;

    t3 = (x21>(x22!=(x23*x24)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x25 = INT32_MAX;
	volatile int32_t x27 = 4;
	static int8_t x28 = 59;
	static volatile int32_t t4 = 60601;

    t4 = (x25>(x26!=(x27*x28)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x29 = 737909U;
	volatile int64_t x30 = 829LL;
	static int8_t x31 = INT8_MIN;
	int32_t t5 = -41852;

    t5 = (x29>(x30!=(x31*x32)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x33 = INT16_MIN;
	static uint64_t x34 = 14120227LLU;
	int8_t x35 = 4;
	volatile int32_t t6 = -7057205;

    t6 = (x33>(x34!=(x35*x36)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x37 = UINT32_MAX;
	volatile uint8_t x38 = UINT8_MAX;
	int32_t x39 = -1;
	int32_t x40 = -185;
	int32_t t7 = -1;

    t7 = (x37>(x38!=(x39*x40)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x41 = INT8_MAX;
	volatile uint64_t x42 = UINT64_MAX;
	int64_t x44 = -134837LL;
	volatile int32_t t8 = 3091;

    t8 = (x41>(x42!=(x43*x44)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x46 = -1;
	uint8_t x47 = 3U;
	static volatile int16_t x48 = -884;
	volatile int32_t t9 = 767;

    t9 = (x45>(x46!=(x47*x48)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = INT16_MIN;
	int8_t x50 = 0;
	static int8_t x51 = -1;
	int32_t x52 = -1;
	volatile int32_t t10 = 78;

    t10 = (x49>(x50!=(x51*x52)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x53 = INT16_MIN;
	int32_t x56 = INT32_MIN;
	volatile int32_t t11 = -2008;

    t11 = (x53>(x54!=(x55*x56)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x58 = 10U;
	int16_t x59 = INT16_MAX;
	int16_t x60 = -1;

    t12 = (x57>(x58!=(x59*x60)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x62 = 61U;
	uint64_t x64 = UINT64_MAX;
	static volatile int32_t t13 = -8971;

    t13 = (x61>(x62!=(x63*x64)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = 1;
	uint64_t x70 = UINT64_MAX;
	uint16_t x71 = UINT16_MAX;
	int16_t x72 = INT16_MIN;
	volatile int32_t t14 = -27958903;

    t14 = (x69>(x70!=(x71*x72)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = INT64_MIN;
	uint16_t x74 = 1224U;
	int64_t x76 = -7650LL;
	volatile int32_t t15 = -27120591;

    t15 = (x73>(x74!=(x75*x76)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x77 = UINT16_MAX;
	static uint8_t x80 = 38U;

    t16 = (x77>(x78!=(x79*x80)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x81 = 12U;
	volatile int64_t x82 = INT64_MIN;
	volatile int64_t x83 = -1158134492LL;
	int8_t x84 = -29;
	volatile int32_t t17 = 5;

    t17 = (x81>(x82!=(x83*x84)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x93 = UINT64_MAX;
	static int64_t x94 = 3309254109162353226LL;
	static int16_t x96 = -2;
	volatile int32_t t18 = 100257;

    t18 = (x93>(x94!=(x95*x96)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x97 = 54261;
	uint64_t x98 = 29987953618191LLU;
	uint8_t x99 = 7U;
	int8_t x100 = -1;
	volatile int32_t t19 = 9;

    t19 = (x97>(x98!=(x99*x100)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x101 = INT64_MIN;
	int8_t x103 = INT8_MIN;
	static volatile int32_t t20 = -330008;

    t20 = (x101>(x102!=(x103*x104)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x105 = -21949936LL;
	static volatile int16_t x106 = INT16_MAX;
	volatile int32_t x107 = 237193;
	int16_t x108 = 280;
	static volatile int32_t t21 = 1711081;

    t21 = (x105>(x106!=(x107*x108)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x109 = 1847406U;
	static int16_t x110 = 2;
	static int16_t x111 = INT16_MIN;
	static uint16_t x112 = 0U;
	int32_t t22 = 27;

    t22 = (x109>(x110!=(x111*x112)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x113 = 30290LL;
	volatile int16_t x114 = INT16_MAX;
	uint32_t x115 = 1U;
	int32_t t23 = 424905;

    t23 = (x113>(x114!=(x115*x116)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x117 = INT32_MAX;
	int8_t x118 = INT8_MIN;
	volatile int16_t x119 = -18;
	int8_t x120 = INT8_MIN;
	int32_t t24 = -434458;

    t24 = (x117>(x118!=(x119*x120)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x121 = -1;
	static int32_t x122 = INT32_MIN;
	static volatile int32_t x123 = -1;
	volatile int32_t t25 = 1303748;

    t25 = (x121>(x122!=(x123*x124)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x126 = INT32_MAX;
	static int16_t x127 = -153;
	int8_t x128 = -1;
	static int32_t t26 = 31735;

    t26 = (x125>(x126!=(x127*x128)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x129 = -538LL;
	int16_t x130 = 49;
	int32_t x131 = INT32_MIN;
	volatile uint64_t x132 = 633497163502962343LLU;
	static int32_t t27 = 3;

    t27 = (x129>(x130!=(x131*x132)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x133 = -1LL;
	uint16_t x134 = 114U;
	volatile int32_t x135 = -1;
	uint8_t x136 = 2U;
	int32_t t28 = 0;

    t28 = (x133>(x134!=(x135*x136)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x138 = 1395223U;
	uint64_t x140 = 33884LLU;
	static int32_t t29 = 1;

    t29 = (x137>(x138!=(x139*x140)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x142 = -1;
	static uint64_t x143 = 1737309LLU;
	int32_t t30 = -793560;

    t30 = (x141>(x142!=(x143*x144)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x146 = -1;
	int32_t x147 = -1;
	volatile int32_t t31 = 92052;

    t31 = (x145>(x146!=(x147*x148)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x154 = INT16_MIN;
	static int32_t x155 = -1;
	uint32_t x156 = UINT32_MAX;
	int32_t t32 = 13899;

    t32 = (x153>(x154!=(x155*x156)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x162 = INT64_MAX;
	static volatile int32_t x163 = INT32_MAX;
	int32_t t33 = 103912601;

    t33 = (x161>(x162!=(x163*x164)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x165 = 1069U;
	int64_t x167 = -23560680444129369LL;
	int8_t x168 = 11;
	volatile int32_t t34 = 0;

    t34 = (x165>(x166!=(x167*x168)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x174 = INT32_MIN;
	int8_t x175 = 3;
	int32_t t35 = -1;

    t35 = (x173>(x174!=(x175*x176)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x181 = INT64_MAX;
	static int64_t x182 = INT64_MIN;
	int16_t x184 = INT16_MAX;
	volatile int32_t t36 = -47;

    t36 = (x181>(x182!=(x183*x184)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x186 = INT64_MIN;
	static int8_t x188 = -1;
	static volatile int32_t t37 = 3068;

    t37 = (x185>(x186!=(x187*x188)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x189 = -1113;
	uint8_t x190 = 3U;

    t38 = (x189>(x190!=(x191*x192)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x197 = 8773;
	volatile int64_t x198 = -1LL;
	static uint32_t x199 = 31446U;
	int16_t x200 = INT16_MAX;
	static volatile int32_t t39 = 442;

    t39 = (x197>(x198!=(x199*x200)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x202 = INT16_MIN;
	static int16_t x203 = INT16_MIN;
	int8_t x204 = -1;
	volatile int32_t t40 = -5530407;

    t40 = (x201>(x202!=(x203*x204)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x209 = 776U;
	uint16_t x210 = 0U;
	uint8_t x211 = 29U;
	static int64_t x212 = 0LL;

    t41 = (x209>(x210!=(x211*x212)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x214 = 62U;
	static uint8_t x216 = UINT8_MAX;
	int32_t t42 = 317193;

    t42 = (x213>(x214!=(x215*x216)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x217 = INT8_MAX;
	static int32_t x218 = 318019;
	uint32_t x219 = 10988017U;

    t43 = (x217>(x218!=(x219*x220)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint64_t x225 = UINT64_MAX;
	int16_t x226 = INT16_MIN;
	uint16_t x227 = 27U;
	int8_t x228 = INT8_MIN;
	int32_t t44 = -10708;

    t44 = (x225>(x226!=(x227*x228)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x229 = -13;
	volatile int64_t x230 = -1LL;
	int16_t x231 = INT16_MIN;
	int8_t x232 = -7;

    t45 = (x229>(x230!=(x231*x232)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int16_t x237 = INT16_MAX;
	static uint64_t x238 = 14400043552441770LLU;
	int16_t x240 = -5;
	int32_t t46 = -1600409;

    t46 = (x237>(x238!=(x239*x240)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x241 = 49;
	int8_t x242 = INT8_MIN;
	volatile int16_t x244 = -15;
	int32_t t47 = -1;

    t47 = (x241>(x242!=(x243*x244)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x247 = 1415U;
	static uint32_t x248 = 7868U;
	volatile int32_t t48 = -340023;

    t48 = (x245>(x246!=(x247*x248)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x249 = UINT16_MAX;
	volatile uint32_t x250 = 56U;
	int8_t x251 = -1;
	uint64_t x252 = UINT64_MAX;
	int32_t t49 = 4;

    t49 = (x249>(x250!=(x251*x252)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x253 = -1;
	volatile uint8_t x254 = 59U;
	int32_t x255 = -1;
	static int32_t x256 = INT32_MAX;
	static int32_t t50 = 4;

    t50 = (x253>(x254!=(x255*x256)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x261 = -1LL;
	uint16_t x262 = UINT16_MAX;
	uint64_t x263 = 6LLU;
	volatile uint16_t x264 = 1U;

    t51 = (x261>(x262!=(x263*x264)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x265 = 2U;
	int64_t x266 = INT64_MAX;
	volatile uint8_t x267 = 9U;
	volatile uint16_t x268 = 6U;

    t52 = (x265>(x266!=(x267*x268)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x269 = INT32_MIN;
	int8_t x270 = INT8_MIN;
	int64_t x271 = -1LL;
	static volatile int32_t t53 = -26887;

    t53 = (x269>(x270!=(x271*x272)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x273 = INT32_MIN;
	int8_t x274 = INT8_MAX;
	int16_t x275 = -1;
	volatile uint8_t x276 = 3U;

    t54 = (x273>(x274!=(x275*x276)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x277 = INT32_MAX;
	int8_t x278 = INT8_MIN;
	volatile int32_t t55 = 823651645;

    t55 = (x277>(x278!=(x279*x280)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x281 = INT32_MAX;
	uint32_t x282 = 946U;
	int8_t x283 = INT8_MIN;
	static uint16_t x284 = 84U;
	volatile int32_t t56 = -64388;

    t56 = (x281>(x282!=(x283*x284)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x285 = INT8_MIN;
	int32_t x286 = INT32_MIN;
	volatile int64_t x287 = -1LL;
	uint8_t x288 = 3U;
	volatile int32_t t57 = -243;

    t57 = (x285>(x286!=(x287*x288)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x295 = -13979;
	int16_t x296 = 11;
	volatile int32_t t58 = 50;

    t58 = (x293>(x294!=(x295*x296)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x297 = 10U;
	int32_t x298 = INT32_MIN;
	static volatile uint64_t x299 = 73LLU;
	int8_t x300 = 29;
	int32_t t59 = 65;

    t59 = (x297>(x298!=(x299*x300)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x301 = 7307U;
	uint32_t x302 = 140937568U;
	int32_t x303 = -40521;
	uint16_t x304 = 1328U;
	int32_t t60 = -1836;

    t60 = (x301>(x302!=(x303*x304)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x305 = 5U;
	int64_t x308 = -1LL;
	volatile int32_t t61 = -1;

    t61 = (x305>(x306!=(x307*x308)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x317 = -81379;
	uint32_t x318 = UINT32_MAX;
	int64_t x319 = -1LL;
	int8_t x320 = -1;
	static volatile int32_t t62 = -17;

    t62 = (x317>(x318!=(x319*x320)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x321 = 1647848263U;
	int64_t x323 = -1LL;
	volatile int16_t x324 = -4375;
	volatile int32_t t63 = -30;

    t63 = (x321>(x322!=(x323*x324)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x325 = UINT32_MAX;
	int32_t x327 = -1;
	int64_t x328 = 104LL;
	volatile int32_t t64 = 1026;

    t64 = (x325>(x326!=(x327*x328)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x329 = INT64_MIN;
	int8_t x330 = 1;
	static uint16_t x331 = 201U;
	int8_t x332 = INT8_MIN;
	int32_t t65 = 36312;

    t65 = (x329>(x330!=(x331*x332)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x337 = -1LL;
	uint64_t x338 = 62038509239196LLU;
	int32_t t66 = -49970903;

    t66 = (x337>(x338!=(x339*x340)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x341 = INT8_MIN;
	int16_t x342 = INT16_MAX;
	uint64_t x343 = 10LLU;
	int32_t x344 = INT32_MIN;
	int32_t t67 = -25505706;

    t67 = (x341>(x342!=(x343*x344)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x345 = -1;
	static uint16_t x347 = 363U;
	static volatile int32_t t68 = -420039;

    t68 = (x345>(x346!=(x347*x348)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x349 = 3604U;
	static uint64_t x350 = 5LLU;
	int16_t x351 = INT16_MIN;
	int16_t x352 = -1280;

    t69 = (x349>(x350!=(x351*x352)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x353 = -1170936LL;
	static uint8_t x354 = UINT8_MAX;
	static uint64_t x356 = UINT64_MAX;
	volatile int32_t t70 = -3512923;

    t70 = (x353>(x354!=(x355*x356)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int8_t x357 = -2;
	static uint32_t x358 = 10U;
	volatile int32_t x360 = -1;
	volatile int32_t t71 = 361;

    t71 = (x357>(x358!=(x359*x360)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x361 = UINT64_MAX;
	uint8_t x362 = 99U;
	static int32_t t72 = 229;

    t72 = (x361>(x362!=(x363*x364)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x373 = 65U;
	uint8_t x374 = UINT8_MAX;

    t73 = (x373>(x374!=(x375*x376)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x377 = -13;
	static int16_t x378 = -1;
	uint16_t x379 = 734U;
	int8_t x380 = INT8_MIN;
	volatile int32_t t74 = -62;

    t74 = (x377>(x378!=(x379*x380)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x381 = 8225LLU;
	int16_t x382 = INT16_MAX;
	int64_t x383 = -226812127781333762LL;
	int32_t t75 = 1;

    t75 = (x381>(x382!=(x383*x384)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int16_t x385 = -1;
	static volatile int16_t x386 = 62;
	int32_t x387 = INT32_MIN;
	uint64_t x388 = 101LLU;
	int32_t t76 = 108257;

    t76 = (x385>(x386!=(x387*x388)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x389 = INT8_MIN;
	volatile int64_t x390 = INT64_MIN;
	uint64_t x391 = 739515LLU;
	int64_t x392 = -140LL;
	static int32_t t77 = 522243497;

    t77 = (x389>(x390!=(x391*x392)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x396 = 55479382742064LLU;
	int32_t t78 = 15868200;

    t78 = (x393>(x394!=(x395*x396)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x397 = 0U;
	volatile int64_t x398 = -4639525LL;
	static uint64_t x399 = UINT64_MAX;
	int32_t t79 = 20;

    t79 = (x397>(x398!=(x399*x400)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x401 = -4308046193907818251LL;
	uint16_t x403 = 984U;
	uint8_t x404 = 12U;

    t80 = (x401>(x402!=(x403*x404)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x409 = INT32_MAX;
	int32_t x410 = INT32_MIN;
	static int8_t x412 = -1;
	volatile int32_t t81 = 1629;

    t81 = (x409>(x410!=(x411*x412)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x413 = INT32_MIN;
	int16_t x414 = -1;
	static volatile int32_t t82 = -240;

    t82 = (x413>(x414!=(x415*x416)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x418 = 991;
	static int8_t x419 = INT8_MAX;
	static int64_t x420 = 2499751428877282LL;
	static volatile int32_t t83 = -65280814;

    t83 = (x417>(x418!=(x419*x420)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x421 = 186433005665979LL;
	volatile int64_t x422 = INT64_MIN;
	static volatile uint32_t x423 = 5766U;
	int32_t x424 = INT32_MAX;
	int32_t t84 = -8;

    t84 = (x421>(x422!=(x423*x424)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x433 = 5298LL;
	int32_t x434 = INT32_MIN;
	uint64_t x435 = UINT64_MAX;
	uint8_t x436 = 29U;
	volatile int32_t t85 = 105;

    t85 = (x433>(x434!=(x435*x436)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x441 = -76325574104LL;
	volatile uint32_t x443 = 0U;
	volatile int8_t x444 = INT8_MAX;
	volatile int32_t t86 = 182625293;

    t86 = (x441>(x442!=(x443*x444)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x445 = 2U;
	static uint32_t x447 = UINT32_MAX;
	uint64_t x448 = 34452836953943706LLU;
	volatile int32_t t87 = -2169;

    t87 = (x445>(x446!=(x447*x448)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x453 = 11093U;
	uint32_t x454 = 2335241U;
	static uint16_t x455 = 3U;
	static volatile int32_t x456 = 119531485;

    t88 = (x453>(x454!=(x455*x456)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x457 = -1861100460641678LL;
	int16_t x458 = INT16_MAX;
	volatile int16_t x459 = 212;
	volatile int32_t t89 = 2928187;

    t89 = (x457>(x458!=(x459*x460)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x465 = -1LL;
	int32_t x467 = INT32_MIN;

    t90 = (x465>(x466!=(x467*x468)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x469 = 25U;
	int8_t x470 = -1;
	volatile int16_t x471 = -1;
	uint64_t x472 = 265497663115LLU;
	static volatile int32_t t91 = 9087779;

    t91 = (x469>(x470!=(x471*x472)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x473 = 27362LL;
	uint64_t x474 = 300560LLU;
	volatile int32_t x475 = 703930;
	int8_t x476 = INT8_MIN;
	int32_t t92 = -2185;

    t92 = (x473>(x474!=(x475*x476)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x477 = -1LL;
	int64_t x478 = -95796184571760689LL;
	static int32_t x479 = -1;
	uint16_t x480 = 391U;
	int32_t t93 = -7354;

    t93 = (x477>(x478!=(x479*x480)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x482 = 459;
	int8_t x483 = INT8_MIN;
	volatile int32_t x484 = -1249;
	volatile int32_t t94 = -429076923;

    t94 = (x481>(x482!=(x483*x484)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x485 = -1;
	static volatile int32_t x486 = -5;
	volatile int32_t t95 = -14847;

    t95 = (x485>(x486!=(x487*x488)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x490 = INT32_MIN;
	int16_t x492 = -1;
	volatile int32_t t96 = -1;

    t96 = (x489>(x490!=(x491*x492)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x493 = 15U;
	int8_t x494 = -10;
	uint8_t x495 = 26U;
	int64_t x496 = 738318563LL;
	int32_t t97 = -3314;

    t97 = (x493>(x494!=(x495*x496)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x497 = -167;
	static volatile int32_t x500 = -1;
	static int32_t t98 = 55403;

    t98 = (x497>(x498!=(x499*x500)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x502 = UINT8_MAX;
	volatile int8_t x503 = -6;
	uint64_t x504 = 5293LLU;
	volatile int32_t t99 = 14692488;

    t99 = (x501>(x502!=(x503*x504)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x505 = INT64_MIN;
	static uint16_t x506 = 4847U;
	uint64_t x507 = 425620582603809LLU;
	uint16_t x508 = 365U;
	int32_t t100 = 0;

    t100 = (x505>(x506!=(x507*x508)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x510 = -1;
	uint32_t x512 = 1U;
	int32_t t101 = 101825587;

    t101 = (x509>(x510!=(x511*x512)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x514 = -1LL;
	uint16_t x515 = 1264U;
	static volatile int32_t t102 = 117678;

    t102 = (x513>(x514!=(x515*x516)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x518 = INT16_MIN;
	static volatile uint64_t x520 = 13995466083315LLU;
	int32_t t103 = 2367855;

    t103 = (x517>(x518!=(x519*x520)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x534 = INT32_MAX;
	volatile int8_t x535 = INT8_MIN;
	static volatile uint32_t x536 = 734659U;
	volatile int32_t t104 = 221825855;

    t104 = (x533>(x534!=(x535*x536)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x537 = 105633U;
	static int8_t x538 = INT8_MIN;
	int32_t x539 = INT32_MAX;
	int32_t t105 = -128895;

    t105 = (x537>(x538!=(x539*x540)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x545 = INT8_MIN;
	int16_t x546 = INT16_MIN;
	volatile int32_t x547 = 92938651;
	uint16_t x548 = 4U;

    t106 = (x545>(x546!=(x547*x548)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x549 = 5;
	volatile int32_t x550 = INT32_MIN;
	int16_t x551 = -1;
	static uint8_t x552 = 3U;
	volatile int32_t t107 = 257795;

    t107 = (x549>(x550!=(x551*x552)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x553 = INT8_MIN;
	int16_t x554 = INT16_MIN;
	int32_t x555 = -164343;
	volatile int8_t x556 = INT8_MAX;
	int32_t t108 = 14;

    t108 = (x553>(x554!=(x555*x556)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x557 = -1;
	int64_t x558 = -17LL;
	volatile int64_t x559 = -3524442612189991LL;
	volatile int32_t t109 = 44530010;

    t109 = (x557>(x558!=(x559*x560)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x561 = -1LL;
	static int16_t x562 = INT16_MAX;
	static int16_t x563 = INT16_MIN;
	int8_t x564 = INT8_MAX;

    t110 = (x561>(x562!=(x563*x564)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x565 = INT8_MIN;
	int16_t x566 = 261;
	int16_t x567 = 0;
	int64_t x568 = -6240113812868LL;
	int32_t t111 = -326175;

    t111 = (x565>(x566!=(x567*x568)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x573 = 27252LLU;
	uint64_t x574 = 121763767100614LLU;
	int8_t x575 = INT8_MIN;
	int32_t x576 = -1;
	int32_t t112 = -22379793;

    t112 = (x573>(x574!=(x575*x576)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x577 = 133U;
	static int8_t x578 = -1;
	volatile uint8_t x579 = 85U;
	static int16_t x580 = -24;
	volatile int32_t t113 = -174776102;

    t113 = (x577>(x578!=(x579*x580)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x581 = INT16_MAX;
	int8_t x582 = 15;
	uint8_t x583 = 0U;
	volatile uint8_t x584 = 2U;
	int32_t t114 = -207363226;

    t114 = (x581>(x582!=(x583*x584)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x585 = 3449U;
	volatile uint32_t x586 = 59271284U;
	uint16_t x587 = 118U;
	int8_t x588 = INT8_MIN;
	volatile int32_t t115 = -160;

    t115 = (x585>(x586!=(x587*x588)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x598 = 3U;
	int8_t x599 = -1;
	static int8_t x600 = 37;
	int32_t t116 = 39340;

    t116 = (x597>(x598!=(x599*x600)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x602 = -1;
	uint64_t x603 = 459468996375LLU;
	volatile int32_t t117 = 43;

    t117 = (x601>(x602!=(x603*x604)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x605 = -1;
	int16_t x606 = -1;
	int16_t x607 = INT16_MIN;
	static volatile int32_t t118 = 0;

    t118 = (x605>(x606!=(x607*x608)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x609 = UINT64_MAX;
	uint64_t x610 = 15662911LLU;
	static volatile int8_t x612 = INT8_MIN;
	int32_t t119 = -31275662;

    t119 = (x609>(x610!=(x611*x612)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x613 = INT16_MIN;
	static uint8_t x614 = 2U;
	int8_t x616 = INT8_MIN;
	int32_t t120 = 1237369;

    t120 = (x613>(x614!=(x615*x616)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x617 = INT32_MAX;
	int32_t x618 = INT32_MIN;
	int64_t x619 = -76318LL;
	int32_t t121 = -53;

    t121 = (x617>(x618!=(x619*x620)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x621 = INT8_MAX;
	static volatile int8_t x622 = INT8_MIN;
	int16_t x623 = INT16_MIN;
	int16_t x624 = 846;
	static volatile int32_t t122 = 4;

    t122 = (x621>(x622!=(x623*x624)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x625 = -67612568077045LL;
	int32_t x626 = INT32_MIN;
	int8_t x628 = INT8_MIN;
	static int32_t t123 = 3771398;

    t123 = (x625>(x626!=(x627*x628)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x636 = 13;
	int32_t t124 = -2174;

    t124 = (x633>(x634!=(x635*x636)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x637 = UINT64_MAX;
	uint64_t x638 = 3836LLU;
	uint32_t x639 = 644690U;
	int64_t x640 = -1LL;
	static int32_t t125 = 129671288;

    t125 = (x637>(x638!=(x639*x640)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x641 = INT16_MAX;
	int8_t x642 = -2;
	static uint64_t x643 = 13391LLU;
	int64_t x644 = INT64_MIN;
	static int32_t t126 = 55289;

    t126 = (x641>(x642!=(x643*x644)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x645 = INT64_MIN;
	static int8_t x646 = INT8_MIN;
	static volatile int64_t x647 = INT64_MIN;
	volatile int32_t t127 = 25004;

    t127 = (x645>(x646!=(x647*x648)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x649 = -114042538909385LL;
	int32_t x651 = -119396879;
	int16_t x652 = -1;
	int32_t t128 = -9;

    t128 = (x649>(x650!=(x651*x652)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x661 = UINT32_MAX;
	static int16_t x662 = 0;
	int32_t x663 = -49590;
	static int32_t x664 = -8;
	int32_t t129 = -8;

    t129 = (x661>(x662!=(x663*x664)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x665 = INT64_MAX;
	uint64_t x667 = 45262307550407LLU;
	uint32_t x668 = 175759578U;

    t130 = (x665>(x666!=(x667*x668)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x673 = 2511U;
	int64_t x674 = INT64_MIN;
	static volatile int16_t x675 = INT16_MAX;
	int8_t x676 = INT8_MIN;

    t131 = (x673>(x674!=(x675*x676)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x678 = -1LL;
	uint64_t x679 = 1608280497LLU;
	uint8_t x680 = 4U;
	int32_t t132 = -220596;

    t132 = (x677>(x678!=(x679*x680)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint8_t x681 = 1U;
	uint32_t x682 = UINT32_MAX;
	static int64_t x684 = -1LL;
	static volatile int32_t t133 = -96522380;

    t133 = (x681>(x682!=(x683*x684)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x685 = INT32_MIN;
	static volatile uint64_t x687 = 444959991635268226LLU;
	int16_t x688 = INT16_MAX;
	int32_t t134 = 18;

    t134 = (x685>(x686!=(x687*x688)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x689 = UINT64_MAX;
	uint64_t x690 = 344720162LLU;
	int8_t x692 = -1;

    t135 = (x689>(x690!=(x691*x692)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x695 = INT32_MIN;
	volatile int32_t t136 = -245728;

    t136 = (x693>(x694!=(x695*x696)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x697 = INT32_MIN;
	volatile uint8_t x699 = 2U;
	uint64_t x700 = 1LLU;
	volatile int32_t t137 = 1156139;

    t137 = (x697>(x698!=(x699*x700)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x709 = -204804123;
	static int8_t x710 = INT8_MAX;
	volatile uint8_t x711 = 12U;
	int32_t t138 = 230838864;

    t138 = (x709>(x710!=(x711*x712)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x713 = -1;
	static uint8_t x714 = 32U;
	volatile uint8_t x716 = UINT8_MAX;
	int32_t t139 = 760;

    t139 = (x713>(x714!=(x715*x716)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x717 = -1;
	int64_t x718 = 6LL;
	volatile int8_t x719 = -1;
	static int32_t x720 = INT32_MAX;
	volatile int32_t t140 = 45820920;

    t140 = (x717>(x718!=(x719*x720)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x721 = INT8_MAX;
	int8_t x722 = -1;
	static uint8_t x723 = UINT8_MAX;
	uint8_t x724 = 5U;
	volatile int32_t t141 = 1817752;

    t141 = (x721>(x722!=(x723*x724)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x726 = UINT64_MAX;
	uint16_t x727 = 97U;
	static uint8_t x728 = 3U;
	volatile int32_t t142 = 674;

    t142 = (x725>(x726!=(x727*x728)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x733 = INT64_MIN;
	static int32_t x735 = INT32_MAX;
	int32_t t143 = 2321;

    t143 = (x733>(x734!=(x735*x736)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x737 = 8118;
	int16_t x739 = INT16_MAX;
	int16_t x740 = 0;

    t144 = (x737>(x738!=(x739*x740)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x745 = 0;
	int64_t x746 = INT64_MAX;
	uint8_t x748 = UINT8_MAX;
	int32_t t145 = 17767;

    t145 = (x745>(x746!=(x747*x748)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x750 = -1;
	uint64_t x751 = UINT64_MAX;
	int32_t t146 = -249;

    t146 = (x749>(x750!=(x751*x752)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x754 = -1LL;
	uint32_t x755 = 34429149U;
	static uint8_t x756 = UINT8_MAX;
	static int32_t t147 = 404731;

    t147 = (x753>(x754!=(x755*x756)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x763 = 34074185854244LL;
	int8_t x764 = -1;
	volatile int32_t t148 = 26175;

    t148 = (x761>(x762!=(x763*x764)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x765 = 824;
	int8_t x767 = -7;
	int32_t x768 = 108;

    t149 = (x765>(x766!=(x767*x768)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x771 = 8593869826787010LLU;
	int32_t x772 = -260806660;
	int32_t t150 = 423596;

    t150 = (x769>(x770!=(x771*x772)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x773 = INT64_MIN;
	uint16_t x774 = 0U;
	volatile int32_t t151 = 51;

    t151 = (x773>(x774!=(x775*x776)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x782 = INT32_MIN;
	int16_t x784 = INT16_MIN;
	static volatile int32_t t152 = 411559;

    t152 = (x781>(x782!=(x783*x784)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x785 = -50;
	int16_t x786 = INT16_MAX;
	int64_t x788 = 26218LL;

    t153 = (x785>(x786!=(x787*x788)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x789 = INT8_MIN;
	int16_t x791 = 88;
	int32_t x792 = -14244;
	volatile int32_t t154 = 15629582;

    t154 = (x789>(x790!=(x791*x792)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x793 = INT16_MIN;
	static int16_t x794 = INT16_MIN;
	static int8_t x796 = INT8_MIN;
	static volatile int32_t t155 = -263957736;

    t155 = (x793>(x794!=(x795*x796)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x797 = 389539LL;
	volatile int32_t x799 = -1;
	volatile int32_t x800 = INT32_MAX;
	static volatile int32_t t156 = -7;

    t156 = (x797>(x798!=(x799*x800)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x801 = INT8_MIN;
	static int16_t x802 = -1;
	volatile int32_t x803 = 294434;
	int32_t t157 = -2337286;

    t157 = (x801>(x802!=(x803*x804)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x813 = -1;
	int64_t x814 = 68557477614LL;
	int64_t x815 = -222477739116603LL;
	int8_t x816 = INT8_MAX;
	int32_t t158 = 0;

    t158 = (x813>(x814!=(x815*x816)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int16_t x817 = INT16_MIN;
	uint64_t x818 = UINT64_MAX;
	int32_t x819 = INT32_MIN;
	uint64_t x820 = 6879094LLU;
	volatile int32_t t159 = -81195652;

    t159 = (x817>(x818!=(x819*x820)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x825 = INT64_MAX;
	static int16_t x826 = -1;
	static volatile uint16_t x827 = UINT16_MAX;
	int32_t x828 = -1;

    t160 = (x825>(x826!=(x827*x828)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x831 = UINT16_MAX;
	int8_t x832 = INT8_MIN;
	int32_t t161 = -439;

    t161 = (x829>(x830!=(x831*x832)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x833 = INT8_MAX;
	volatile uint16_t x834 = 157U;
	volatile int32_t x835 = -1;

    t162 = (x833>(x834!=(x835*x836)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x837 = -1LL;
	volatile int16_t x839 = -128;
	static uint16_t x840 = 636U;
	volatile int32_t t163 = -1064290;

    t163 = (x837>(x838!=(x839*x840)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x841 = -1LL;
	int16_t x844 = INT16_MIN;
	volatile int32_t t164 = -2443;

    t164 = (x841>(x842!=(x843*x844)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x846 = 65U;
	uint32_t x847 = UINT32_MAX;
	int8_t x848 = INT8_MAX;
	static volatile int32_t t165 = 959325055;

    t165 = (x845>(x846!=(x847*x848)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x849 = INT8_MAX;
	volatile uint64_t x851 = 1281LLU;
	uint32_t x852 = 1252387U;
	volatile int32_t t166 = -1;

    t166 = (x849>(x850!=(x851*x852)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x853 = INT64_MIN;
	int32_t t167 = -447520;

    t167 = (x853>(x854!=(x855*x856)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x857 = INT8_MIN;
	static int16_t x858 = 0;
	uint32_t x859 = 116634U;
	uint8_t x860 = UINT8_MAX;
	int32_t t168 = -440624950;

    t168 = (x857>(x858!=(x859*x860)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x873 = -1;
	int16_t x874 = INT16_MIN;
	uint16_t x875 = 59U;
	static uint64_t x876 = 310608895143LLU;
	volatile int32_t t169 = 244682;

    t169 = (x873>(x874!=(x875*x876)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x877 = INT32_MIN;
	int16_t x878 = -1;
	static int64_t x879 = -1LL;
	volatile int32_t x880 = INT32_MIN;
	int32_t t170 = 7857;

    t170 = (x877>(x878!=(x879*x880)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x883 = 50491556668860071LLU;
	int64_t x884 = INT64_MIN;
	volatile int32_t t171 = 3095463;

    t171 = (x881>(x882!=(x883*x884)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x885 = INT64_MIN;
	int8_t x886 = -1;
	int16_t x887 = -1;
	uint8_t x888 = UINT8_MAX;
	volatile int32_t t172 = 253307135;

    t172 = (x885>(x886!=(x887*x888)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x889 = -1;
	uint8_t x890 = UINT8_MAX;
	volatile uint64_t x891 = 1065301723743LLU;
	volatile uint32_t x892 = UINT32_MAX;
	volatile int32_t t173 = -370720525;

    t173 = (x889>(x890!=(x891*x892)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x897 = -1;
	static uint64_t x898 = 571832468340199LLU;
	volatile int32_t x900 = 379324658;
	static volatile int32_t t174 = -3829;

    t174 = (x897>(x898!=(x899*x900)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x905 = -1698371358924457LL;
	int8_t x906 = INT8_MAX;
	volatile uint64_t x907 = 882LLU;
	volatile int64_t x908 = 4814664204668948LL;
	int32_t t175 = 668183995;

    t175 = (x905>(x906!=(x907*x908)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x909 = INT16_MIN;
	static int32_t x910 = -1;
	uint8_t x911 = 1U;
	volatile uint32_t x912 = 22215U;
	int32_t t176 = -820382;

    t176 = (x909>(x910!=(x911*x912)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x913 = 10070136583LLU;
	int8_t x914 = INT8_MIN;
	uint32_t x915 = 58U;
	uint16_t x916 = 221U;
	volatile int32_t t177 = 816103;

    t177 = (x913>(x914!=(x915*x916)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x917 = 125366264660573LLU;
	int16_t x918 = INT16_MIN;
	static int16_t x919 = -1;
	volatile uint8_t x920 = 12U;
	int32_t t178 = -3779072;

    t178 = (x917>(x918!=(x919*x920)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x922 = -929795530;
	uint8_t x924 = UINT8_MAX;
	int32_t t179 = -2573100;

    t179 = (x921>(x922!=(x923*x924)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x925 = UINT16_MAX;
	volatile int64_t x926 = -1973629315815127LL;
	int8_t x927 = -1;
	int8_t x928 = INT8_MIN;
	volatile int32_t t180 = -26873;

    t180 = (x925>(x926!=(x927*x928)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x929 = INT32_MIN;
	volatile int64_t x930 = -41883774090LL;
	uint16_t x931 = UINT16_MAX;
	int32_t x932 = -1;

    t181 = (x929>(x930!=(x931*x932)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x933 = -22295093042934676LL;
	uint16_t x935 = UINT16_MAX;
	static volatile int32_t t182 = -285;

    t182 = (x933>(x934!=(x935*x936)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x937 = -1LL;
	int32_t x938 = INT32_MIN;
	int8_t x939 = 0;
	static int8_t x940 = 10;

    t183 = (x937>(x938!=(x939*x940)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x941 = INT8_MIN;
	uint32_t x942 = 13914858U;
	int16_t x943 = 0;
	uint64_t x944 = 529798LLU;

    t184 = (x941>(x942!=(x943*x944)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x945 = INT8_MIN;
	int16_t x946 = INT16_MIN;
	int64_t x947 = INT64_MAX;
	uint64_t x948 = 3299LLU;
	int32_t t185 = -1001;

    t185 = (x945>(x946!=(x947*x948)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x953 = -1LL;
	volatile int16_t x954 = INT16_MIN;
	static volatile int32_t x955 = -213;
	int8_t x956 = -20;
	static int32_t t186 = -46502338;

    t186 = (x953>(x954!=(x955*x956)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x958 = 0U;
	int32_t x960 = INT32_MAX;

    t187 = (x957>(x958!=(x959*x960)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x969 = 8191U;
	static uint16_t x970 = UINT16_MAX;
	int8_t x971 = INT8_MIN;
	static uint8_t x972 = 25U;
	int32_t t188 = 4115473;

    t188 = (x969>(x970!=(x971*x972)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x973 = UINT16_MAX;
	int16_t x974 = -5190;
	int8_t x975 = -1;
	static volatile int32_t t189 = -4890;

    t189 = (x973>(x974!=(x975*x976)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x981 = UINT16_MAX;
	static int64_t x982 = -246801669LL;
	volatile int32_t x983 = -1;
	int32_t t190 = -143;

    t190 = (x981>(x982!=(x983*x984)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x989 = INT8_MIN;
	int32_t x990 = -1;
	int8_t x991 = INT8_MAX;
	int32_t t191 = 102459;

    t191 = (x989>(x990!=(x991*x992)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x997 = INT32_MIN;
	static int32_t x998 = 336;
	uint16_t x999 = UINT16_MAX;

    t192 = (x997>(x998!=(x999*x1000)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1002 = INT8_MIN;
	uint64_t x1003 = 250444245539209758LLU;
	static uint64_t x1004 = UINT64_MAX;
	int32_t t193 = -216138;

    t193 = (x1001>(x1002!=(x1003*x1004)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x1009 = -12;
	uint16_t x1012 = 339U;
	volatile int32_t t194 = 2;

    t194 = (x1009>(x1010!=(x1011*x1012)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1013 = -504338832;
	int8_t x1015 = INT8_MIN;
	volatile int32_t t195 = -3550;

    t195 = (x1013>(x1014!=(x1015*x1016)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1017 = INT32_MAX;
	int8_t x1019 = -1;
	static int32_t t196 = -1934315;

    t196 = (x1017>(x1018!=(x1019*x1020)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1030 = -43561;
	int64_t x1031 = -1LL;
	uint64_t x1032 = 5758861726LLU;
	int32_t t197 = -867;

    t197 = (x1029>(x1030!=(x1031*x1032)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1041 = INT16_MIN;
	volatile uint16_t x1043 = UINT16_MAX;
	static int32_t t198 = 13266;

    t198 = (x1041>(x1042!=(x1043*x1044)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1049 = INT16_MAX;
	static uint64_t x1050 = 4061531703669234125LLU;
	volatile int8_t x1051 = INT8_MAX;
	int32_t t199 = 12371;

    t199 = (x1049>(x1050!=(x1051*x1052)));

    if (t199 != 1) { NG(); } else { ; }
	
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

