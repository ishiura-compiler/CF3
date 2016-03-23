
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

static volatile int16_t x1 = INT16_MAX;
static int32_t x3 = -1;
static volatile int64_t x5 = INT64_MIN;
static volatile int8_t x9 = 1;
static int8_t x10 = 3;
int64_t x12 = -88441240942789LL;
uint8_t x13 = 113U;
static uint64_t x18 = UINT64_MAX;
int32_t t5 = -45594427;
int16_t x27 = -37;
static int16_t x28 = INT16_MAX;
static uint32_t x33 = 653U;
volatile uint16_t x37 = 3U;
static uint8_t x39 = UINT8_MAX;
static volatile int64_t x43 = INT64_MIN;
int32_t x45 = INT32_MAX;
static int8_t x52 = INT8_MIN;
volatile int8_t x56 = 3;
static int64_t x61 = -1LL;
static volatile uint32_t x66 = UINT32_MAX;
uint8_t x68 = 97U;
int8_t x72 = INT8_MIN;
volatile int32_t t16 = -10;
int32_t x77 = 95;
int16_t x84 = 0;
uint8_t x85 = 7U;
uint64_t x87 = UINT64_MAX;
int32_t x88 = -1;
volatile int32_t t24 = -168;
volatile uint16_t x109 = 3156U;
uint16_t x111 = 0U;
int8_t x116 = -1;
int32_t t27 = 586;
int32_t t28 = -264;
volatile int32_t t30 = -10;
static int32_t x129 = INT32_MIN;
volatile int32_t t31 = -11;
uint8_t x133 = 39U;
static volatile int64_t x134 = 60467486652415131LL;
int8_t x139 = INT8_MAX;
int32_t t33 = 7781;
int8_t x144 = -1;
int32_t t36 = -1;
int64_t x180 = -1LL;
int32_t x189 = INT32_MAX;
int16_t x191 = -1;
int64_t x194 = INT64_MIN;
int32_t x203 = INT32_MAX;
int16_t x223 = 4;
uint16_t x233 = 1389U;
static int32_t x234 = -1;
uint64_t x246 = 1138725637046LLU;
volatile int8_t x247 = 7;
int32_t t54 = -16728447;
volatile int32_t t56 = -656191;
static int16_t x262 = INT16_MAX;
uint64_t x267 = UINT64_MAX;
static int16_t x269 = -3649;
static volatile int32_t t61 = -1063711463;
int8_t x282 = 1;
volatile uint32_t x286 = 578U;
int16_t x288 = -235;
int32_t t63 = -627910202;
int32_t x289 = INT32_MAX;
int32_t x297 = INT32_MAX;
static uint16_t x307 = 19U;
volatile int32_t t68 = 1358;
static uint8_t x309 = 1U;
uint8_t x310 = UINT8_MAX;
int64_t x316 = 54599926204120717LL;
static volatile int32_t t70 = -606727;
int32_t x326 = INT32_MAX;
int8_t x328 = -1;
int8_t x330 = INT8_MIN;
int8_t x331 = -1;
static int8_t x333 = 44;
volatile int32_t t74 = 58;
int64_t x340 = -472LL;
uint16_t x342 = 2284U;
static volatile int16_t x343 = 0;
int64_t x352 = 1049328253885LL;
volatile int32_t t78 = 1;
int16_t x360 = -1;
int8_t x365 = -55;
uint32_t x368 = UINT32_MAX;
int8_t x372 = -1;
volatile int32_t t82 = -1;
int8_t x376 = INT8_MIN;
int8_t x378 = INT8_MIN;
static uint32_t x382 = 282U;
uint32_t x387 = 355U;
int64_t x396 = INT64_MIN;
static int64_t x404 = -1418717LL;
static volatile int32_t x406 = INT32_MIN;
volatile int32_t t92 = -7561;
int32_t t93 = -3117;
int64_t x431 = 67464043161LL;
uint16_t x433 = 41U;
volatile uint8_t x438 = UINT8_MAX;
int16_t x450 = INT16_MIN;
uint8_t x452 = 35U;
uint16_t x454 = UINT16_MAX;
static int8_t x459 = -2;
volatile int32_t t101 = -4836851;
static volatile int64_t x473 = INT64_MAX;
volatile int8_t x490 = INT8_MAX;
uint64_t x492 = UINT64_MAX;
volatile int32_t t106 = -62423016;
volatile int32_t t108 = 26;
int32_t t109 = -9;
int64_t x509 = -141LL;
int16_t x514 = INT16_MIN;
uint64_t x516 = 0LLU;
static int32_t x517 = INT32_MAX;
static volatile uint8_t x520 = 0U;
int32_t x521 = INT32_MIN;
volatile int32_t t113 = 105217579;
int16_t x528 = INT16_MAX;
int32_t x531 = -149;
static int32_t x535 = -12;
static uint16_t x538 = UINT16_MAX;
uint32_t x551 = 3346U;
static int16_t x569 = INT16_MIN;
int32_t t123 = -2;
uint8_t x573 = 3U;
volatile int32_t t125 = 1;
volatile int32_t t126 = -67001342;
int64_t x585 = INT64_MIN;
int32_t t128 = 3601;
uint16_t x595 = 12U;
uint64_t x605 = UINT64_MAX;
volatile int32_t t132 = -101200477;
int16_t x611 = -9;
uint16_t x615 = 682U;
uint64_t x623 = 3121751303371LLU;
static int64_t x627 = -142628677926951654LL;
int8_t x631 = 25;
int16_t x640 = INT16_MIN;
uint64_t x648 = UINT64_MAX;
static int32_t t143 = 2;
static uint32_t x661 = 782U;
int16_t x662 = INT16_MIN;
int16_t x667 = INT16_MAX;
volatile int16_t x668 = INT16_MIN;
volatile int32_t t145 = -345179749;
static int32_t x673 = -70416;
static int8_t x675 = INT8_MIN;
int16_t x683 = INT16_MAX;
static volatile uint8_t x684 = 0U;
uint8_t x688 = UINT8_MAX;
volatile int8_t x691 = -1;
volatile int32_t t150 = 11470;
static volatile uint16_t x694 = UINT16_MAX;
static volatile int16_t x703 = INT16_MIN;
uint8_t x707 = UINT8_MAX;
int8_t x723 = -1;
static uint16_t x739 = 5U;
volatile uint8_t x743 = UINT8_MAX;
int32_t x756 = -1;
int8_t x764 = -1;
volatile int8_t x766 = INT8_MAX;
uint8_t x772 = 3U;
int64_t x775 = INT64_MAX;
volatile int32_t t169 = 14;
uint32_t x780 = UINT32_MAX;
int32_t t170 = 2417;
int32_t t171 = 30;
uint64_t x785 = 922415794476109LLU;
uint8_t x804 = UINT8_MAX;
static volatile int32_t t175 = -16925;
int16_t x808 = -1;
int16_t x818 = INT16_MIN;
static uint32_t x819 = 50U;
volatile int32_t t180 = 19838;
uint8_t x825 = 8U;
uint16_t x828 = UINT16_MAX;
uint32_t x850 = 454814U;
int8_t x854 = INT8_MIN;
int32_t x860 = 6034;
int32_t t189 = 0;
int32_t t190 = -397460;
int32_t x868 = INT32_MAX;
int8_t x871 = INT8_MIN;
uint8_t x875 = 4U;
uint8_t x880 = UINT8_MAX;
int64_t x884 = -143600LL;
volatile int32_t t195 = 610;
int32_t x896 = INT32_MIN;
static int32_t t198 = 1;


void f0(void) {
    	uint8_t x2 = 33U;
	int16_t x4 = 6;
	volatile int32_t t0 = 86526521;

    t0 = (x1!=(x2|(x3+x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MAX;
	static volatile uint8_t x7 = 110U;
	uint8_t x8 = 111U;
	volatile int32_t t1 = -401;

    t1 = (x5!=(x6|(x7+x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x11 = 5411;
	volatile int32_t t2 = 31;

    t2 = (x9!=(x10|(x11+x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x14 = 36U;
	static uint16_t x15 = 19935U;
	int16_t x16 = 3;
	volatile int32_t t3 = 1;

    t3 = (x13!=(x14|(x15+x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	static int16_t x19 = 551;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 126816724;

    t4 = (x17!=(x18|(x19+x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	int32_t x22 = -860;
	static uint32_t x23 = UINT32_MAX;
	int32_t x24 = -61967;

    t5 = (x21!=(x22|(x23+x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	int32_t x26 = 202485;
	volatile int32_t t6 = 1508;

    t6 = (x25!=(x26|(x27+x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = INT16_MIN;
	int32_t x30 = 7601;
	int8_t x31 = INT8_MIN;
	int32_t x32 = -1;
	int32_t t7 = -1;

    t7 = (x29!=(x30|(x31+x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = -702;
	static uint32_t x35 = 532047U;
	int32_t x36 = INT32_MAX;
	int32_t t8 = 1367;

    t8 = (x33!=(x34|(x35+x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x38 = -18;
	static uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = 157916;

    t9 = (x37!=(x38|(x39+x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 40U;
	static int8_t x42 = 0;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = 677;

    t10 = (x41!=(x42|(x43+x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = INT32_MIN;
	int32_t x47 = 13;
	uint32_t x48 = 6487898U;
	volatile int32_t t11 = -12;

    t11 = (x45!=(x46|(x47+x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 57U;
	int32_t x50 = -311143813;
	uint16_t x51 = 6U;
	volatile int32_t t12 = 759106422;

    t12 = (x49!=(x50|(x51+x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	int16_t x54 = INT16_MIN;
	uint8_t x55 = 1U;
	static int32_t t13 = 4106799;

    t13 = (x53!=(x54|(x55+x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x62 = 2;
	static int8_t x63 = INT8_MAX;
	int32_t x64 = 671;
	static int32_t t14 = 2035;

    t14 = (x61!=(x62|(x63+x64)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = INT8_MIN;
	int16_t x67 = 234;
	volatile int32_t t15 = -4005;

    t15 = (x65!=(x66|(x67+x68)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x69 = 1;
	int32_t x70 = -1;
	uint8_t x71 = UINT8_MAX;

    t16 = (x69!=(x70|(x71+x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MAX;
	uint32_t x74 = 3U;
	int64_t x75 = -21314564673311LL;
	static int16_t x76 = INT16_MAX;
	int32_t t17 = -8714408;

    t17 = (x73!=(x74|(x75+x76)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x78 = 698076983754126LL;
	static int32_t x79 = INT32_MAX;
	int16_t x80 = INT16_MIN;
	static int32_t t18 = 1940638;

    t18 = (x77!=(x78|(x79+x80)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = 4276633;
	static int16_t x82 = INT16_MAX;
	volatile uint32_t x83 = UINT32_MAX;
	volatile int32_t t19 = 299;

    t19 = (x81!=(x82|(x83+x84)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x86 = INT32_MAX;
	int32_t t20 = 35822;

    t20 = (x85!=(x86|(x87+x88)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = INT64_MAX;
	static uint16_t x90 = UINT16_MAX;
	uint32_t x91 = 19U;
	volatile uint32_t x92 = 2105526745U;
	volatile int32_t t21 = -31434854;

    t21 = (x89!=(x90|(x91+x92)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x93 = 11;
	int16_t x94 = INT16_MIN;
	int8_t x95 = -1;
	int64_t x96 = -496768449839930LL;
	static int32_t t22 = -250;

    t22 = (x93!=(x94|(x95+x96)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = -1808975147LL;
	int64_t x98 = -1LL;
	static int16_t x99 = -1;
	static uint32_t x100 = UINT32_MAX;
	int32_t t23 = 496;

    t23 = (x97!=(x98|(x99+x100)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = 2;
	static int16_t x102 = INT16_MAX;
	uint32_t x103 = 35137U;
	static int32_t x104 = -1;

    t24 = (x101!=(x102|(x103+x104)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x105 = INT16_MIN;
	static uint16_t x106 = 26U;
	uint8_t x107 = 125U;
	static volatile int64_t x108 = INT64_MIN;
	int32_t t25 = -596;

    t25 = (x105!=(x106|(x107+x108)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint16_t x110 = 5U;
	int32_t x112 = 918;
	int32_t t26 = 920928;

    t26 = (x109!=(x110|(x111+x112)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = -1;
	volatile uint16_t x114 = 0U;
	static int8_t x115 = -1;

    t27 = (x113!=(x114|(x115+x116)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = -1;
	volatile int64_t x118 = -1LL;
	uint64_t x119 = 1438080252044309790LLU;
	static volatile int32_t x120 = -1039985;

    t28 = (x117!=(x118|(x119+x120)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MAX;
	static volatile uint16_t x122 = UINT16_MAX;
	uint64_t x123 = 41587604966638552LLU;
	volatile int16_t x124 = 320;
	int32_t t29 = -73911;

    t29 = (x121!=(x122|(x123+x124)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = -1;
	static int8_t x126 = 5;
	uint64_t x127 = 2LLU;
	int32_t x128 = 3107;

    t30 = (x125!=(x126|(x127+x128)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x130 = INT8_MAX;
	static int8_t x131 = -1;
	volatile uint64_t x132 = UINT64_MAX;

    t31 = (x129!=(x130|(x131+x132)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x135 = UINT16_MAX;
	int16_t x136 = -1;
	int32_t t32 = -905;

    t32 = (x133!=(x134|(x135+x136)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int16_t x137 = INT16_MIN;
	int32_t x138 = 868;
	static volatile int64_t x140 = INT64_MIN;

    t33 = (x137!=(x138|(x139+x140)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x141 = INT8_MIN;
	volatile uint16_t x142 = UINT16_MAX;
	static uint8_t x143 = UINT8_MAX;
	volatile int32_t t34 = -63;

    t34 = (x141!=(x142|(x143+x144)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x145 = 448839LLU;
	int8_t x146 = INT8_MIN;
	static uint8_t x147 = 2U;
	uint16_t x148 = 182U;
	int32_t t35 = 8438353;

    t35 = (x145!=(x146|(x147+x148)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x149 = UINT16_MAX;
	int8_t x150 = INT8_MIN;
	int64_t x151 = -105306823574208LL;
	int32_t x152 = -5925264;

    t36 = (x149!=(x150|(x151+x152)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x153 = INT32_MIN;
	uint16_t x154 = UINT16_MAX;
	static volatile int32_t x155 = INT32_MIN;
	int64_t x156 = -140896241313075563LL;
	int32_t t37 = -22;

    t37 = (x153!=(x154|(x155+x156)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x157 = INT32_MIN;
	int16_t x158 = INT16_MAX;
	int16_t x159 = 1;
	volatile int16_t x160 = INT16_MIN;
	static int32_t t38 = -1178332;

    t38 = (x157!=(x158|(x159+x160)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x165 = INT8_MIN;
	int32_t x166 = INT32_MIN;
	uint8_t x167 = 6U;
	int8_t x168 = INT8_MIN;
	int32_t t39 = -2307745;

    t39 = (x165!=(x166|(x167+x168)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = -901;
	static int32_t x170 = -1;
	volatile int16_t x171 = INT16_MIN;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t40 = -3;

    t40 = (x169!=(x170|(x171+x172)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = -883486673;
	int64_t x174 = INT64_MAX;
	volatile uint32_t x175 = 1902U;
	int8_t x176 = 7;
	static int32_t t41 = 4;

    t41 = (x173!=(x174|(x175+x176)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = 104928897LL;
	volatile uint8_t x178 = UINT8_MAX;
	static int64_t x179 = -1LL;
	int32_t t42 = -7;

    t42 = (x177!=(x178|(x179+x180)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x181 = 273778336U;
	volatile int32_t x182 = 3168;
	int16_t x183 = INT16_MIN;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t43 = -122619503;

    t43 = (x181!=(x182|(x183+x184)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = -1;
	int32_t x186 = -1;
	int32_t x187 = 2;
	int32_t x188 = INT32_MIN;
	volatile int32_t t44 = -27178;

    t44 = (x185!=(x186|(x187+x188)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x190 = INT32_MIN;
	int16_t x192 = INT16_MIN;
	volatile int32_t t45 = -3;

    t45 = (x189!=(x190|(x191+x192)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x193 = UINT8_MAX;
	static int8_t x195 = INT8_MIN;
	int64_t x196 = -1LL;
	int32_t t46 = -3;

    t46 = (x193!=(x194|(x195+x196)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = -1;
	int8_t x202 = INT8_MAX;
	uint64_t x204 = 1348LLU;
	int32_t t47 = 761876440;

    t47 = (x201!=(x202|(x203+x204)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x205 = -1976;
	uint64_t x206 = UINT64_MAX;
	int8_t x207 = INT8_MIN;
	uint16_t x208 = 6781U;
	int32_t t48 = -294315245;

    t48 = (x205!=(x206|(x207+x208)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x217 = INT32_MIN;
	int8_t x218 = INT8_MIN;
	int16_t x219 = -1;
	uint64_t x220 = 2155248676761883LLU;
	static int32_t t49 = -3490;

    t49 = (x217!=(x218|(x219+x220)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x221 = UINT16_MAX;
	int32_t x222 = INT32_MIN;
	uint32_t x224 = 78U;
	volatile int32_t t50 = 9027;

    t50 = (x221!=(x222|(x223+x224)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x235 = 27U;
	uint16_t x236 = 0U;
	int32_t t51 = 7;

    t51 = (x233!=(x234|(x235+x236)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x237 = -1;
	volatile uint64_t x238 = 22880335631LLU;
	int16_t x239 = 427;
	int16_t x240 = 6;
	int32_t t52 = 13;

    t52 = (x237!=(x238|(x239+x240)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x241 = INT64_MIN;
	static int64_t x242 = -1LL;
	static uint32_t x243 = UINT32_MAX;
	static int64_t x244 = 52321533015114LL;
	int32_t t53 = 5790;

    t53 = (x241!=(x242|(x243+x244)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x245 = UINT8_MAX;
	uint32_t x248 = 657U;

    t54 = (x245!=(x246|(x247+x248)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x249 = -1;
	int16_t x250 = INT16_MAX;
	uint8_t x251 = 2U;
	volatile int64_t x252 = -1LL;
	volatile int32_t t55 = -26063;

    t55 = (x249!=(x250|(x251+x252)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x253 = UINT64_MAX;
	int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MAX;
	int64_t x256 = -36295442793LL;

    t56 = (x253!=(x254|(x255+x256)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x257 = 107U;
	volatile int16_t x258 = 3907;
	uint8_t x259 = 4U;
	static int32_t x260 = -1;
	volatile int32_t t57 = 876;

    t57 = (x257!=(x258|(x259+x260)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x261 = -1LL;
	int16_t x263 = 1;
	int64_t x264 = 2753196924299LL;
	static int32_t t58 = 2;

    t58 = (x261!=(x262|(x263+x264)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x265 = INT32_MIN;
	uint64_t x266 = 73824808691631714LLU;
	volatile int32_t x268 = INT32_MAX;
	int32_t t59 = 30791479;

    t59 = (x265!=(x266|(x267+x268)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x270 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	static volatile int16_t x272 = 8061;
	int32_t t60 = 21;

    t60 = (x269!=(x270|(x271+x272)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x277 = INT8_MIN;
	int64_t x278 = INT64_MIN;
	static uint8_t x279 = UINT8_MAX;
	int8_t x280 = -1;

    t61 = (x277!=(x278|(x279+x280)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x281 = INT8_MIN;
	volatile int32_t x283 = -97066390;
	int8_t x284 = -1;
	int32_t t62 = -671;

    t62 = (x281!=(x282|(x283+x284)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x285 = 4LLU;
	volatile uint16_t x287 = 1U;

    t63 = (x285!=(x286|(x287+x288)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x290 = 86397213713565LLU;
	int32_t x291 = INT32_MAX;
	int16_t x292 = -1;
	int32_t t64 = -69653171;

    t64 = (x289!=(x290|(x291+x292)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x293 = UINT32_MAX;
	static int16_t x294 = INT16_MIN;
	uint16_t x295 = UINT16_MAX;
	int8_t x296 = 0;
	int32_t t65 = -2448426;

    t65 = (x293!=(x294|(x295+x296)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x298 = 387LLU;
	int64_t x299 = -5726923918LL;
	int8_t x300 = 1;
	static volatile int32_t t66 = 7252;

    t66 = (x297!=(x298|(x299+x300)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x301 = INT64_MIN;
	uint32_t x302 = 171555039U;
	int8_t x303 = 1;
	uint16_t x304 = UINT16_MAX;
	int32_t t67 = -189;

    t67 = (x301!=(x302|(x303+x304)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x305 = -354925492770527964LL;
	int32_t x306 = INT32_MIN;
	uint64_t x308 = 940559110236925241LLU;

    t68 = (x305!=(x306|(x307+x308)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x311 = INT8_MIN;
	int64_t x312 = INT64_MAX;
	static int32_t t69 = 2;

    t69 = (x309!=(x310|(x311+x312)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x313 = 0U;
	int64_t x314 = 958287087449458706LL;
	volatile int32_t x315 = INT32_MIN;

    t70 = (x313!=(x314|(x315+x316)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x321 = INT32_MIN;
	int64_t x322 = INT64_MAX;
	uint64_t x323 = UINT64_MAX;
	int16_t x324 = INT16_MIN;
	static volatile int32_t t71 = 2;

    t71 = (x321!=(x322|(x323+x324)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x325 = 2U;
	static int64_t x327 = -1LL;
	int32_t t72 = 3764785;

    t72 = (x325!=(x326|(x327+x328)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x329 = -4904;
	static volatile uint32_t x332 = 750234558U;
	volatile int32_t t73 = 993;

    t73 = (x329!=(x330|(x331+x332)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x334 = 1LL;
	static int32_t x335 = INT32_MAX;
	int64_t x336 = -1LL;

    t74 = (x333!=(x334|(x335+x336)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x337 = 80250067;
	volatile int8_t x338 = INT8_MIN;
	int8_t x339 = -1;
	static int32_t t75 = -325;

    t75 = (x337!=(x338|(x339+x340)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x341 = 4291128U;
	static volatile int32_t x344 = 234;
	static int32_t t76 = -2345274;

    t76 = (x341!=(x342|(x343+x344)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x345 = -1LL;
	uint16_t x346 = 15013U;
	int8_t x347 = -1;
	int64_t x348 = INT64_MAX;
	volatile int32_t t77 = 4790;

    t77 = (x345!=(x346|(x347+x348)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x349 = -2;
	static int64_t x350 = INT64_MAX;
	int32_t x351 = INT32_MIN;

    t78 = (x349!=(x350|(x351+x352)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x353 = 33LLU;
	uint32_t x354 = UINT32_MAX;
	int16_t x355 = -745;
	int16_t x356 = INT16_MAX;
	volatile int32_t t79 = -501454;

    t79 = (x353!=(x354|(x355+x356)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x357 = 1U;
	int8_t x358 = 3;
	int32_t x359 = 1;
	volatile int32_t t80 = 14;

    t80 = (x357!=(x358|(x359+x360)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x366 = INT8_MIN;
	uint32_t x367 = 96012U;
	int32_t t81 = -123128;

    t81 = (x365!=(x366|(x367+x368)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x369 = -1;
	static int16_t x370 = -1;
	uint8_t x371 = 70U;

    t82 = (x369!=(x370|(x371+x372)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x373 = UINT8_MAX;
	uint16_t x374 = UINT16_MAX;
	int8_t x375 = INT8_MIN;
	static int32_t t83 = -1;

    t83 = (x373!=(x374|(x375+x376)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x377 = -1;
	int16_t x379 = INT16_MIN;
	volatile int16_t x380 = 82;
	int32_t t84 = -1881;

    t84 = (x377!=(x378|(x379+x380)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x381 = 2;
	uint8_t x383 = 0U;
	uint32_t x384 = 608754U;
	int32_t t85 = -27670;

    t85 = (x381!=(x382|(x383+x384)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x385 = -5383242044340LL;
	uint16_t x386 = UINT16_MAX;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t86 = 5394;

    t86 = (x385!=(x386|(x387+x388)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x393 = INT16_MIN;
	int64_t x394 = INT64_MIN;
	int64_t x395 = INT64_MAX;
	volatile int32_t t87 = -49026404;

    t87 = (x393!=(x394|(x395+x396)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x401 = INT16_MIN;
	volatile int16_t x402 = INT16_MAX;
	int32_t x403 = INT32_MAX;
	static volatile int32_t t88 = 121;

    t88 = (x401!=(x402|(x403+x404)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x405 = UINT16_MAX;
	uint64_t x407 = 7LLU;
	static int64_t x408 = -1LL;
	int32_t t89 = -196228099;

    t89 = (x405!=(x406|(x407+x408)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x409 = UINT32_MAX;
	static int64_t x410 = INT64_MAX;
	int16_t x411 = INT16_MIN;
	int8_t x412 = -3;
	volatile int32_t t90 = 30439;

    t90 = (x409!=(x410|(x411+x412)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x413 = UINT32_MAX;
	int32_t x414 = -1;
	uint16_t x415 = UINT16_MAX;
	volatile int32_t x416 = -43557;
	int32_t t91 = 148;

    t91 = (x413!=(x414|(x415+x416)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x417 = -445;
	int8_t x418 = 11;
	int8_t x419 = INT8_MAX;
	uint16_t x420 = 3U;

    t92 = (x417!=(x418|(x419+x420)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x421 = -32;
	int64_t x422 = 34LL;
	uint64_t x423 = 25798589080142LLU;
	int32_t x424 = INT32_MIN;

    t93 = (x421!=(x422|(x423+x424)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x429 = INT32_MIN;
	int32_t x430 = 476;
	int16_t x432 = 62;
	static int32_t t94 = -906;

    t94 = (x429!=(x430|(x431+x432)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x434 = 53192432111336LLU;
	int32_t x435 = INT32_MIN;
	volatile uint64_t x436 = 453049994LLU;
	volatile int32_t t95 = -913782;

    t95 = (x433!=(x434|(x435+x436)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x437 = INT64_MAX;
	volatile int8_t x439 = INT8_MIN;
	int64_t x440 = -386767LL;
	int32_t t96 = 26;

    t96 = (x437!=(x438|(x439+x440)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x449 = INT16_MAX;
	volatile uint8_t x451 = 8U;
	volatile int32_t t97 = 546;

    t97 = (x449!=(x450|(x451+x452)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x453 = INT32_MIN;
	volatile int64_t x455 = -3138215642930807572LL;
	static int64_t x456 = -6934812295627LL;
	int32_t t98 = -21;

    t98 = (x453!=(x454|(x455+x456)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x457 = 0U;
	uint32_t x458 = 1005U;
	uint8_t x460 = 5U;
	volatile int32_t t99 = 7886;

    t99 = (x457!=(x458|(x459+x460)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x461 = 15;
	uint64_t x462 = 71LLU;
	int32_t x463 = INT32_MIN;
	static int64_t x464 = INT64_MAX;
	int32_t t100 = 3731548;

    t100 = (x461!=(x462|(x463+x464)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x465 = -1;
	volatile uint32_t x466 = 0U;
	int32_t x467 = INT32_MAX;
	int16_t x468 = INT16_MIN;

    t101 = (x465!=(x466|(x467+x468)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x474 = UINT32_MAX;
	uint32_t x475 = UINT32_MAX;
	uint32_t x476 = 1U;
	int32_t t102 = -46454;

    t102 = (x473!=(x474|(x475+x476)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x477 = 0U;
	volatile int16_t x478 = -1;
	uint32_t x479 = 1U;
	int64_t x480 = INT64_MIN;
	int32_t t103 = -900728977;

    t103 = (x477!=(x478|(x479+x480)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x485 = -1;
	static int8_t x486 = INT8_MAX;
	uint8_t x487 = UINT8_MAX;
	static int16_t x488 = INT16_MIN;
	volatile int32_t t104 = 497217;

    t104 = (x485!=(x486|(x487+x488)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x489 = INT32_MIN;
	int64_t x491 = 273262407573LL;
	int32_t t105 = 2981317;

    t105 = (x489!=(x490|(x491+x492)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x493 = UINT8_MAX;
	static int64_t x494 = INT64_MIN;
	int16_t x495 = 196;
	int16_t x496 = INT16_MAX;

    t106 = (x493!=(x494|(x495+x496)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x497 = 13U;
	int32_t x498 = -799;
	uint8_t x499 = UINT8_MAX;
	int64_t x500 = INT64_MIN;
	int32_t t107 = 15;

    t107 = (x497!=(x498|(x499+x500)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x501 = 9169;
	volatile uint32_t x502 = UINT32_MAX;
	static int64_t x503 = INT64_MIN;
	uint16_t x504 = 2U;

    t108 = (x501!=(x502|(x503+x504)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x505 = 545471741U;
	uint8_t x506 = 50U;
	volatile uint8_t x507 = 58U;
	int8_t x508 = -12;

    t109 = (x505!=(x506|(x507+x508)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x510 = INT32_MIN;
	uint16_t x511 = 1453U;
	uint32_t x512 = 112U;
	volatile int32_t t110 = 0;

    t110 = (x509!=(x510|(x511+x512)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x513 = UINT16_MAX;
	uint8_t x515 = 0U;
	volatile int32_t t111 = 58891071;

    t111 = (x513!=(x514|(x515+x516)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x518 = UINT32_MAX;
	static uint32_t x519 = 340U;
	int32_t t112 = 403;

    t112 = (x517!=(x518|(x519+x520)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x522 = -263;
	int16_t x523 = 942;
	int32_t x524 = INT32_MIN;

    t113 = (x521!=(x522|(x523+x524)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x525 = 1911711594U;
	static volatile int8_t x526 = INT8_MAX;
	static volatile int64_t x527 = 488902460946977LL;
	int32_t t114 = 1;

    t114 = (x525!=(x526|(x527+x528)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x529 = 481627;
	volatile uint32_t x530 = 0U;
	volatile int32_t x532 = -781766;
	static volatile int32_t t115 = -37;

    t115 = (x529!=(x530|(x531+x532)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x533 = UINT32_MAX;
	volatile int32_t x534 = INT32_MIN;
	static int8_t x536 = 0;
	static int32_t t116 = -91;

    t116 = (x533!=(x534|(x535+x536)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x537 = INT32_MIN;
	int16_t x539 = 167;
	static uint64_t x540 = UINT64_MAX;
	static volatile int32_t t117 = 17026061;

    t117 = (x537!=(x538|(x539+x540)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x541 = 502252655398LLU;
	volatile uint64_t x542 = 27LLU;
	int64_t x543 = INT64_MAX;
	uint64_t x544 = 3518792LLU;
	volatile int32_t t118 = -5046136;

    t118 = (x541!=(x542|(x543+x544)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x549 = INT8_MIN;
	int16_t x550 = 5;
	int32_t x552 = INT32_MIN;
	int32_t t119 = 0;

    t119 = (x549!=(x550|(x551+x552)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x553 = INT32_MIN;
	int64_t x554 = INT64_MIN;
	volatile uint8_t x555 = 6U;
	uint32_t x556 = 49887027U;
	int32_t t120 = -770756;

    t120 = (x553!=(x554|(x555+x556)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x557 = INT32_MIN;
	volatile int16_t x558 = INT16_MIN;
	uint32_t x559 = 53U;
	int8_t x560 = INT8_MIN;
	int32_t t121 = -1;

    t121 = (x557!=(x558|(x559+x560)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x565 = 8U;
	volatile int32_t x566 = -151507;
	volatile uint32_t x567 = 176136U;
	uint64_t x568 = UINT64_MAX;
	volatile int32_t t122 = 2;

    t122 = (x565!=(x566|(x567+x568)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x570 = -1LL;
	uint8_t x571 = UINT8_MAX;
	static uint16_t x572 = 79U;

    t123 = (x569!=(x570|(x571+x572)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x574 = 6LLU;
	uint64_t x575 = UINT64_MAX;
	static int8_t x576 = -3;
	int32_t t124 = 4193;

    t124 = (x573!=(x574|(x575+x576)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x577 = INT8_MIN;
	volatile int32_t x578 = INT32_MIN;
	static uint16_t x579 = 9017U;
	static uint64_t x580 = UINT64_MAX;

    t125 = (x577!=(x578|(x579+x580)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x581 = 0;
	volatile uint32_t x582 = UINT32_MAX;
	int8_t x583 = INT8_MAX;
	int8_t x584 = 1;

    t126 = (x581!=(x582|(x583+x584)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x586 = UINT64_MAX;
	static int16_t x587 = INT16_MIN;
	int64_t x588 = -62833613546LL;
	static volatile int32_t t127 = -8;

    t127 = (x585!=(x586|(x587+x588)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x589 = -1;
	volatile int64_t x590 = -30LL;
	static int8_t x591 = -1;
	uint8_t x592 = 19U;

    t128 = (x589!=(x590|(x591+x592)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x593 = -1;
	int16_t x594 = INT16_MIN;
	int64_t x596 = -25705521019LL;
	volatile int32_t t129 = 2559;

    t129 = (x593!=(x594|(x595+x596)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x597 = 30894698U;
	static int16_t x598 = INT16_MIN;
	volatile int8_t x599 = 7;
	int64_t x600 = 1476904850719280LL;
	int32_t t130 = 23;

    t130 = (x597!=(x598|(x599+x600)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x601 = UINT16_MAX;
	static uint8_t x602 = UINT8_MAX;
	volatile uint8_t x603 = 0U;
	volatile int64_t x604 = -1LL;
	int32_t t131 = 968513272;

    t131 = (x601!=(x602|(x603+x604)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x606 = 0U;
	volatile int64_t x607 = -1LL;
	static uint8_t x608 = UINT8_MAX;

    t132 = (x605!=(x606|(x607+x608)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x609 = INT32_MAX;
	static int16_t x610 = -1;
	static int16_t x612 = 0;
	volatile int32_t t133 = 221;

    t133 = (x609!=(x610|(x611+x612)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x613 = INT8_MIN;
	int8_t x614 = 0;
	int8_t x616 = -1;
	int32_t t134 = 1;

    t134 = (x613!=(x614|(x615+x616)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x617 = 28;
	int64_t x618 = INT64_MIN;
	uint16_t x619 = 198U;
	uint16_t x620 = 217U;
	volatile int32_t t135 = 230;

    t135 = (x617!=(x618|(x619+x620)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x621 = -1;
	int16_t x622 = INT16_MIN;
	static int32_t x624 = 86;
	static int32_t t136 = -10352377;

    t136 = (x621!=(x622|(x623+x624)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x625 = UINT32_MAX;
	uint64_t x626 = UINT64_MAX;
	int32_t x628 = INT32_MIN;
	volatile int32_t t137 = 55;

    t137 = (x625!=(x626|(x627+x628)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x629 = 3U;
	int8_t x630 = -4;
	volatile int64_t x632 = INT64_MIN;
	volatile int32_t t138 = 889368;

    t138 = (x629!=(x630|(x631+x632)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x633 = 10U;
	uint32_t x634 = 8173891U;
	volatile uint64_t x635 = 4036346807LLU;
	int8_t x636 = -1;
	static int32_t t139 = 192816;

    t139 = (x633!=(x634|(x635+x636)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x637 = 0;
	static uint32_t x638 = 3U;
	int8_t x639 = -1;
	static int32_t t140 = 80834065;

    t140 = (x637!=(x638|(x639+x640)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x641 = 623157LLU;
	uint16_t x642 = 339U;
	uint32_t x643 = 6932U;
	static uint8_t x644 = 6U;
	static volatile int32_t t141 = 1186943;

    t141 = (x641!=(x642|(x643+x644)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x645 = 32U;
	uint16_t x646 = UINT16_MAX;
	static int16_t x647 = INT16_MIN;
	volatile int32_t t142 = -139978;

    t142 = (x645!=(x646|(x647+x648)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x649 = -1LL;
	int8_t x650 = INT8_MIN;
	uint8_t x651 = 0U;
	volatile int16_t x652 = 29;

    t143 = (x649!=(x650|(x651+x652)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x663 = -1589644LL;
	int8_t x664 = -1;
	static volatile int32_t t144 = 29727;

    t144 = (x661!=(x662|(x663+x664)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x665 = -14;
	int8_t x666 = -1;

    t145 = (x665!=(x666|(x667+x668)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x669 = 26725372U;
	static volatile int32_t x670 = 2287801;
	int8_t x671 = 14;
	uint32_t x672 = 618487678U;
	int32_t t146 = -3206231;

    t146 = (x669!=(x670|(x671+x672)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x674 = INT16_MIN;
	int8_t x676 = 22;
	int32_t t147 = 178158784;

    t147 = (x673!=(x674|(x675+x676)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x681 = -1;
	int32_t x682 = -13150;
	volatile int32_t t148 = 54582;

    t148 = (x681!=(x682|(x683+x684)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x685 = 4662048819LL;
	int64_t x686 = -784LL;
	int64_t x687 = INT64_MIN;
	static int32_t t149 = -181189;

    t149 = (x685!=(x686|(x687+x688)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x689 = INT64_MIN;
	static int16_t x690 = INT16_MAX;
	int32_t x692 = 0;

    t150 = (x689!=(x690|(x691+x692)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x693 = -2783231LL;
	static volatile uint64_t x695 = 5852317LLU;
	uint8_t x696 = 7U;
	int32_t t151 = -3;

    t151 = (x693!=(x694|(x695+x696)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x697 = INT32_MAX;
	int32_t x698 = 104537;
	static int8_t x699 = INT8_MIN;
	volatile int64_t x700 = -387517273LL;
	static volatile int32_t t152 = 2;

    t152 = (x697!=(x698|(x699+x700)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x701 = 188237477LL;
	int64_t x702 = INT64_MIN;
	int16_t x704 = 13;
	int32_t t153 = -16055;

    t153 = (x701!=(x702|(x703+x704)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x705 = 0U;
	static int8_t x706 = INT8_MIN;
	int8_t x708 = -1;
	int32_t t154 = -94057144;

    t154 = (x705!=(x706|(x707+x708)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x713 = 42640260U;
	int16_t x714 = 577;
	int32_t x715 = -1;
	int16_t x716 = INT16_MIN;
	int32_t t155 = -1;

    t155 = (x713!=(x714|(x715+x716)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x717 = INT32_MIN;
	static int32_t x718 = 0;
	int16_t x719 = 5;
	uint64_t x720 = 80873LLU;
	static int32_t t156 = 2701270;

    t156 = (x717!=(x718|(x719+x720)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x721 = 498U;
	uint64_t x722 = UINT64_MAX;
	uint16_t x724 = 29U;
	volatile int32_t t157 = 89903;

    t157 = (x721!=(x722|(x723+x724)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x725 = 1U;
	int8_t x726 = -1;
	uint64_t x727 = 1702176762791113LLU;
	int16_t x728 = -3;
	static int32_t t158 = 445;

    t158 = (x725!=(x726|(x727+x728)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x729 = 583935;
	volatile uint16_t x730 = 220U;
	int32_t x731 = INT32_MAX;
	uint64_t x732 = UINT64_MAX;
	int32_t t159 = -5;

    t159 = (x729!=(x730|(x731+x732)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x733 = -1;
	uint8_t x734 = 4U;
	uint64_t x735 = 53857561662LLU;
	uint32_t x736 = 37U;
	int32_t t160 = -1;

    t160 = (x733!=(x734|(x735+x736)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x737 = 3U;
	uint32_t x738 = 121817130U;
	static int16_t x740 = INT16_MIN;
	int32_t t161 = -1;

    t161 = (x737!=(x738|(x739+x740)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x741 = -123716972995LL;
	uint8_t x742 = 98U;
	static uint16_t x744 = 3397U;
	static int32_t t162 = -184;

    t162 = (x741!=(x742|(x743+x744)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x745 = -27;
	static uint64_t x746 = 205679247947LLU;
	int64_t x747 = INT64_MIN;
	volatile uint8_t x748 = 4U;
	static volatile int32_t t163 = -615;

    t163 = (x745!=(x746|(x747+x748)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x749 = INT32_MAX;
	int8_t x750 = -25;
	int64_t x751 = INT64_MIN;
	int16_t x752 = 3;
	int32_t t164 = -101993;

    t164 = (x749!=(x750|(x751+x752)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x753 = INT16_MAX;
	int8_t x754 = INT8_MIN;
	int8_t x755 = -6;
	volatile int32_t t165 = -18384;

    t165 = (x753!=(x754|(x755+x756)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x761 = INT32_MIN;
	volatile int8_t x762 = 0;
	volatile int16_t x763 = INT16_MAX;
	volatile int32_t t166 = -285602183;

    t166 = (x761!=(x762|(x763+x764)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x765 = -1;
	static uint16_t x767 = UINT16_MAX;
	uint8_t x768 = 31U;
	volatile int32_t t167 = 9;

    t167 = (x765!=(x766|(x767+x768)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x769 = 7U;
	static uint64_t x770 = UINT64_MAX;
	uint32_t x771 = 3498U;
	static int32_t t168 = -87852;

    t168 = (x769!=(x770|(x771+x772)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x773 = -1;
	int32_t x774 = -1;
	int32_t x776 = INT32_MIN;

    t169 = (x773!=(x774|(x775+x776)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x777 = 16510674820234701LL;
	int8_t x778 = INT8_MIN;
	int16_t x779 = -1015;

    t170 = (x777!=(x778|(x779+x780)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x781 = UINT64_MAX;
	int64_t x782 = INT64_MIN;
	int64_t x783 = 12920LL;
	volatile int64_t x784 = -4LL;

    t171 = (x781!=(x782|(x783+x784)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x786 = 2;
	uint32_t x787 = 153025U;
	uint64_t x788 = UINT64_MAX;
	volatile int32_t t172 = -90;

    t172 = (x785!=(x786|(x787+x788)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x789 = INT16_MIN;
	volatile int8_t x790 = 0;
	int32_t x791 = INT32_MIN;
	uint8_t x792 = 3U;
	volatile int32_t t173 = -576441342;

    t173 = (x789!=(x790|(x791+x792)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x793 = -1;
	volatile int8_t x794 = INT8_MIN;
	static int16_t x795 = INT16_MIN;
	int8_t x796 = INT8_MAX;
	static volatile int32_t t174 = 3921;

    t174 = (x793!=(x794|(x795+x796)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x801 = INT16_MIN;
	volatile int16_t x802 = 109;
	static volatile int8_t x803 = -1;

    t175 = (x801!=(x802|(x803+x804)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x805 = -1;
	int16_t x806 = INT16_MIN;
	int16_t x807 = INT16_MIN;
	volatile int32_t t176 = -55;

    t176 = (x805!=(x806|(x807+x808)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x809 = 2U;
	volatile uint64_t x810 = UINT64_MAX;
	uint64_t x811 = 768181688LLU;
	volatile int64_t x812 = 116670284837LL;
	volatile int32_t t177 = 0;

    t177 = (x809!=(x810|(x811+x812)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x813 = 300;
	int16_t x814 = INT16_MIN;
	static uint64_t x815 = 13782541473979306LLU;
	int16_t x816 = INT16_MAX;
	static volatile int32_t t178 = 6826521;

    t178 = (x813!=(x814|(x815+x816)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x817 = UINT8_MAX;
	int64_t x820 = 468339683387608389LL;
	static volatile int32_t t179 = 58491;

    t179 = (x817!=(x818|(x819+x820)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x821 = 1LL;
	int16_t x822 = INT16_MIN;
	uint16_t x823 = 24U;
	volatile int8_t x824 = INT8_MIN;

    t180 = (x821!=(x822|(x823+x824)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x826 = -1;
	volatile uint64_t x827 = 28092LLU;
	volatile int32_t t181 = -40345535;

    t181 = (x825!=(x826|(x827+x828)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x829 = -50486LL;
	static volatile int16_t x830 = -1;
	int64_t x831 = INT64_MAX;
	int32_t x832 = -1;
	volatile int32_t t182 = -2514;

    t182 = (x829!=(x830|(x831+x832)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x833 = INT32_MAX;
	static uint16_t x834 = 3089U;
	static int32_t x835 = -1;
	volatile uint32_t x836 = 15457980U;
	volatile int32_t t183 = -722;

    t183 = (x833!=(x834|(x835+x836)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x837 = 724301916LLU;
	uint16_t x838 = UINT16_MAX;
	static uint8_t x839 = 87U;
	volatile int16_t x840 = INT16_MIN;
	volatile int32_t t184 = -404142671;

    t184 = (x837!=(x838|(x839+x840)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x841 = -1;
	uint8_t x842 = 26U;
	uint16_t x843 = 421U;
	volatile int8_t x844 = -2;
	volatile int32_t t185 = 166290;

    t185 = (x841!=(x842|(x843+x844)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x845 = 77U;
	volatile int16_t x846 = -1;
	int64_t x847 = INT64_MIN;
	static uint32_t x848 = UINT32_MAX;
	int32_t t186 = -651;

    t186 = (x845!=(x846|(x847+x848)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x849 = INT8_MIN;
	int32_t x851 = INT32_MIN;
	uint16_t x852 = 636U;
	int32_t t187 = -1;

    t187 = (x849!=(x850|(x851+x852)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x853 = INT8_MAX;
	uint16_t x855 = 30400U;
	static int32_t x856 = -1;
	int32_t t188 = 1241;

    t188 = (x853!=(x854|(x855+x856)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x857 = -1;
	uint64_t x858 = UINT64_MAX;
	uint64_t x859 = UINT64_MAX;

    t189 = (x857!=(x858|(x859+x860)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x861 = -1;
	volatile int8_t x862 = -2;
	static volatile uint32_t x863 = UINT32_MAX;
	static volatile uint32_t x864 = 174677546U;

    t190 = (x861!=(x862|(x863+x864)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x865 = 5;
	uint32_t x866 = UINT32_MAX;
	int16_t x867 = INT16_MIN;
	static int32_t t191 = 0;

    t191 = (x865!=(x866|(x867+x868)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x869 = 3;
	static uint16_t x870 = 54U;
	volatile int32_t x872 = -232;
	volatile int32_t t192 = 290988;

    t192 = (x869!=(x870|(x871+x872)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x873 = 4U;
	static int8_t x874 = INT8_MIN;
	volatile int16_t x876 = INT16_MIN;
	static volatile int32_t t193 = 455;

    t193 = (x873!=(x874|(x875+x876)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x877 = -1;
	uint8_t x878 = 58U;
	uint64_t x879 = 4861400010LLU;
	int32_t t194 = 3;

    t194 = (x877!=(x878|(x879+x880)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x881 = 0;
	int8_t x882 = INT8_MIN;
	int32_t x883 = INT32_MAX;

    t195 = (x881!=(x882|(x883+x884)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x885 = INT64_MIN;
	int8_t x886 = 1;
	int32_t x887 = INT32_MAX;
	static int8_t x888 = -1;
	static volatile int32_t t196 = 3117929;

    t196 = (x885!=(x886|(x887+x888)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x893 = 7U;
	uint32_t x894 = 763U;
	int16_t x895 = INT16_MAX;
	int32_t t197 = 3167;

    t197 = (x893!=(x894|(x895+x896)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x897 = UINT32_MAX;
	int8_t x898 = INT8_MIN;
	static int8_t x899 = -13;
	static int8_t x900 = INT8_MIN;

    t198 = (x897!=(x898|(x899+x900)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x901 = 109U;
	int8_t x902 = INT8_MIN;
	static uint64_t x903 = 12LLU;
	uint64_t x904 = UINT64_MAX;
	volatile int32_t t199 = 8394;

    t199 = (x901!=(x902|(x903+x904)));

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

