
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

static uint16_t x2 = 89U;
volatile int16_t x6 = 5285;
int16_t x7 = 3609;
static int32_t t1 = -110;
static int64_t x10 = -16838536529LL;
int32_t t3 = -6528766;
uint64_t x17 = 8568621736761685645LLU;
int16_t x20 = -1;
volatile int32_t t4 = 41;
uint8_t x25 = 26U;
static uint8_t x35 = 14U;
volatile uint64_t t9 = 28LLU;
int16_t x63 = -121;
uint32_t x73 = 39U;
int16_t x74 = INT16_MAX;
int32_t x84 = -1;
uint8_t x104 = 4U;
uint8_t x105 = 0U;
volatile uint32_t t20 = 54696U;
uint8_t x109 = 10U;
int8_t x110 = INT8_MIN;
int8_t x123 = -15;
uint8_t x130 = 4U;
uint64_t x132 = 114623367353LLU;
uint64_t x138 = 1707606LLU;
volatile int32_t x140 = -1;
int64_t x141 = INT64_MIN;
int8_t x148 = 3;
static volatile int32_t t30 = 195;
int16_t x169 = INT16_MIN;
int16_t x176 = -377;
uint32_t x179 = 370U;
int64_t x181 = -1LL;
static volatile uint16_t x182 = 10U;
volatile int32_t x185 = 102224;
uint8_t x186 = 7U;
static int8_t x187 = 1;
int8_t x203 = INT8_MIN;
volatile uint32_t t38 = 6430U;
int64_t x218 = INT64_MAX;
static int64_t x219 = -107512LL;
static int32_t x221 = -183346;
int64_t x225 = 1LL;
static int32_t x231 = INT32_MAX;
static uint32_t x234 = 335U;
volatile int32_t x255 = -1;
uint32_t t49 = 23629066U;
uint16_t x260 = UINT16_MAX;
uint8_t x261 = 0U;
int16_t x264 = INT16_MAX;
volatile int64_t t52 = -10LL;
volatile uint8_t x280 = 11U;
uint32_t x281 = 90823U;
uint64_t x284 = 148LLU;
int32_t t57 = 141;
uint64_t x300 = 510802322LLU;
static int64_t x312 = -1LL;
int8_t x313 = INT8_MAX;
volatile int8_t x333 = -1;
static uint16_t x346 = 2U;
uint8_t x348 = 60U;
static uint32_t x354 = 3048513U;
uint16_t x365 = UINT16_MAX;
volatile uint32_t t68 = 26876U;
uint16_t x379 = UINT16_MAX;
static uint8_t x380 = UINT8_MAX;
volatile int8_t x381 = INT8_MAX;
volatile int64_t x382 = -1LL;
int64_t x383 = 9402751792LL;
int64_t x388 = -1LL;
static int64_t x393 = -3LL;
static int8_t x397 = 0;
volatile uint64_t t74 = UINT64_MAX;
static int64_t t76 = -385277393706220194LL;
volatile uint64_t x415 = 54127757035LLU;
static int64_t t78 = 81178523LL;
int16_t x436 = -180;
int32_t t82 = 600;
volatile uint64_t t83 = 89758247451LLU;
int32_t x452 = 8;
int32_t x453 = -1;
uint8_t x465 = 0U;
int16_t x471 = INT16_MIN;
int32_t t88 = 23498298;
static volatile uint64_t x483 = UINT64_MAX;
uint64_t t90 = 7292663146LLU;
volatile uint8_t x493 = UINT8_MAX;
volatile uint64_t t92 = 1078010751LLU;
uint8_t x504 = UINT8_MAX;
int16_t x507 = -1;
uint64_t x508 = 3043941620726936LLU;
static int8_t x521 = -41;
static int64_t x532 = INT64_MIN;
static int8_t x539 = -1;
volatile int16_t x540 = 9559;
volatile int32_t t98 = 34853801;
volatile uint32_t t99 = 53U;
int8_t x550 = INT8_MAX;
int8_t x551 = INT8_MIN;
uint16_t x570 = 20795U;
volatile int64_t x577 = 281125587LL;
static int32_t x587 = -9393;
volatile int8_t x590 = INT8_MAX;
static int16_t x592 = 1;
int8_t x602 = INT8_MAX;
int16_t x605 = INT16_MAX;
volatile int16_t x607 = 6582;
volatile uint32_t x608 = UINT32_MAX;
int32_t t112 = -205990215;
volatile uint32_t x613 = 1185742U;
int32_t t113 = 50103425;
int16_t x624 = INT16_MIN;
int32_t t114 = -573;
int16_t x626 = -1;
volatile int64_t x628 = -1LL;
volatile uint64_t x639 = 22929463744383244LLU;
int8_t x647 = 1;
int32_t x653 = 6;
static volatile int16_t x654 = -1;
volatile uint64_t x655 = UINT64_MAX;
static int32_t t121 = 16535048;
int32_t x672 = -1;
static int32_t x673 = INT32_MIN;
static int64_t x674 = 237766661005LL;
static int64_t x676 = -1LL;
static uint16_t x681 = 303U;
int16_t x692 = -7797;
int16_t x694 = INT16_MAX;
static volatile int32_t x702 = 1;
volatile int32_t x719 = -1;
volatile uint8_t x720 = 4U;
uint16_t x737 = UINT16_MAX;
uint32_t x744 = UINT32_MAX;
volatile int64_t t137 = 15267954741276332LL;
int8_t x755 = INT8_MIN;
volatile int64_t t139 = -420723549354391LL;
int64_t x769 = -5LL;
volatile int64_t x785 = INT64_MAX;
static int16_t x788 = 987;
int64_t x808 = INT64_MAX;
int16_t x817 = INT16_MAX;
int8_t x818 = -1;
int8_t x824 = 0;
int32_t x826 = 20506505;
static int32_t x829 = -1;
uint32_t x837 = 14U;
volatile int32_t x847 = -419;
uint32_t x848 = UINT32_MAX;
static uint64_t x858 = 21883223534637LLU;
int16_t x865 = -15;
uint64_t x867 = 59552LLU;
int8_t x869 = -9;
int32_t x870 = 46610;
static volatile int32_t t161 = -33527552;
uint16_t x879 = UINT16_MAX;
int32_t x883 = INT32_MAX;
static int64_t t163 = 179LL;
int32_t x897 = INT32_MAX;
int32_t x898 = -3241235;
static uint8_t x899 = 15U;
static int32_t t166 = 51319421;
static uint8_t x905 = 5U;
volatile uint32_t x907 = UINT32_MAX;
volatile int32_t x914 = -4036487;
static volatile int16_t x915 = INT16_MAX;
int64_t t168 = 21316857105LL;
volatile int64_t x931 = INT64_MIN;
uint64_t t169 = 6608LLU;
volatile int32_t x934 = INT32_MAX;
int8_t x937 = INT8_MAX;
int32_t t171 = -282278;
int16_t x944 = -1;
volatile uint32_t x950 = UINT32_MAX;
volatile uint32_t t173 = 26194060U;
static volatile int64_t x953 = INT64_MIN;
uint32_t x958 = UINT32_MAX;
static uint64_t x963 = UINT64_MAX;
int32_t x966 = INT32_MAX;
volatile int32_t x967 = 234818;
int64_t x973 = 45144451LL;
static uint16_t x975 = UINT16_MAX;
int64_t x977 = INT64_MIN;
uint64_t x980 = UINT64_MAX;
uint64_t t179 = 1834124037LLU;
volatile int64_t x989 = -34LL;
int32_t x992 = -1;
int32_t t181 = -1;
volatile int32_t t182 = 1;
volatile int16_t x1014 = INT16_MIN;
int64_t x1017 = INT64_MIN;
int8_t x1019 = 1;
int32_t x1023 = 21;
volatile uint16_t x1036 = 3U;
uint32_t x1040 = 180866379U;
int8_t x1041 = -2;
uint32_t x1058 = 52807978U;
static int64_t x1062 = INT64_MIN;
int64_t x1064 = -1LL;
volatile int64_t x1067 = 78325826000772LL;
uint8_t x1072 = 4U;
volatile int32_t t199 = -1040831;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int16_t x3 = 1;
	volatile int16_t x4 = 729;
	static int32_t t0 = -1;

    t0 = ((x1!=x2)*(x3*x4));

    if (t0 != 729) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x5 = -1LL;
	uint16_t x8 = UINT16_MAX;

    t1 = ((x5!=x6)*(x7*x8));

    if (t1 != 236515815) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	uint16_t x11 = 699U;
	static uint8_t x12 = UINT8_MAX;
	int32_t t2 = -144159831;

    t2 = ((x9!=x10)*(x11*x12));

    if (t2 != 178245) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -487003545565216860LL;
	volatile uint32_t x14 = UINT32_MAX;
	static volatile uint8_t x15 = 48U;
	int16_t x16 = 239;

    t3 = ((x13!=x14)*(x15*x16));

    if (t3 != 11472) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = -1LL;
	volatile int8_t x19 = 1;

    t4 = ((x17!=x18)*(x19*x20));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x26 = INT8_MIN;
	uint64_t x27 = 1427436201630092034LLU;
	int64_t x28 = INT64_MIN;
	volatile uint64_t t5 = 24177412824947LLU;

    t5 = ((x25!=x26)*(x27*x28));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = INT16_MIN;
	uint64_t x30 = UINT64_MAX;
	int16_t x31 = 294;
	volatile int16_t x32 = -1;
	volatile int32_t t6 = -2448466;

    t6 = ((x29!=x30)*(x31*x32));

    if (t6 != -294) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = -1;
	int8_t x34 = -1;
	uint32_t x36 = 25311948U;
	volatile uint32_t t7 = 54U;

    t7 = ((x33!=x34)*(x35*x36));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = INT32_MIN;
	int64_t x38 = -1LL;
	int8_t x39 = -1;
	uint16_t x40 = 420U;
	volatile int32_t t8 = 661014;

    t8 = ((x37!=x38)*(x39*x40));

    if (t8 != -420) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x41 = UINT32_MAX;
	static volatile int32_t x42 = -72892;
	uint64_t x43 = 192128533583050292LLU;
	int8_t x44 = -1;

    t9 = ((x41!=x42)*(x43*x44));

    if (t9 != 18254615540126501324LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x45 = 1LL;
	int32_t x46 = -69074584;
	uint64_t x47 = 763654LLU;
	volatile uint32_t x48 = 266U;
	uint64_t t10 = 111438460979718093LLU;

    t10 = ((x45!=x46)*(x47*x48));

    if (t10 != 203131964LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = -9238359772676LL;
	uint64_t x50 = 19LLU;
	uint64_t x51 = UINT64_MAX;
	static int16_t x52 = 5874;
	static volatile uint64_t t11 = 2LLU;

    t11 = ((x49!=x50)*(x51*x52));

    if (t11 != 18446744073709545742LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = UINT16_MAX;
	volatile uint32_t x54 = 7U;
	volatile uint16_t x55 = UINT16_MAX;
	volatile int8_t x56 = INT8_MIN;
	int32_t t12 = 1173815;

    t12 = ((x53!=x54)*(x55*x56));

    if (t12 != -8388480) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = -1LL;
	static int8_t x58 = -1;
	int64_t x59 = INT64_MAX;
	int8_t x60 = -1;
	static int64_t t13 = -42261258LL;

    t13 = ((x57!=x58)*(x59*x60));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x61 = UINT16_MAX;
	static volatile int64_t x62 = INT64_MIN;
	volatile uint16_t x64 = 28922U;
	volatile int32_t t14 = 536202081;

    t14 = ((x61!=x62)*(x63*x64));

    if (t14 != -3499562) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x75 = 26;
	int32_t x76 = -22121192;
	static int32_t t15 = -9071;

    t15 = ((x73!=x74)*(x75*x76));

    if (t15 != -575150992) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x81 = UINT8_MAX;
	int32_t x82 = -1;
	int16_t x83 = -1;
	volatile int32_t t16 = 262642128;

    t16 = ((x81!=x82)*(x83*x84));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x89 = 1576391552U;
	uint16_t x90 = 2401U;
	static int8_t x91 = INT8_MIN;
	int64_t x92 = -41939526LL;
	volatile int64_t t17 = 357932031459712379LL;

    t17 = ((x89!=x90)*(x91*x92));

    if (t17 != 5368259328LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x97 = -12934;
	int64_t x98 = INT64_MIN;
	uint16_t x99 = 3492U;
	int8_t x100 = INT8_MAX;
	volatile int32_t t18 = -294944;

    t18 = ((x97!=x98)*(x99*x100));

    if (t18 != 443484) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x101 = INT64_MAX;
	int32_t x102 = INT32_MIN;
	uint32_t x103 = 741700968U;
	uint32_t t19 = 1322335U;

    t19 = ((x101!=x102)*(x103*x104));

    if (t19 != 2966803872U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x106 = 203U;
	static int8_t x107 = INT8_MIN;
	uint32_t x108 = UINT32_MAX;

    t20 = ((x105!=x106)*(x107*x108));

    if (t20 != 128U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x111 = INT32_MIN;
	int64_t x112 = -1LL;
	int64_t t21 = -1024775612768857LL;

    t21 = ((x109!=x110)*(x111*x112));

    if (t21 != 2147483648LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x113 = -8;
	int32_t x114 = -1439442;
	static uint64_t x115 = UINT64_MAX;
	int16_t x116 = INT16_MIN;
	volatile uint64_t t22 = 216398LLU;

    t22 = ((x113!=x114)*(x115*x116));

    if (t22 != 32768LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x117 = INT64_MIN;
	int16_t x118 = -1;
	uint32_t x119 = 1U;
	int16_t x120 = INT16_MIN;
	static volatile uint32_t t23 = 28U;

    t23 = ((x117!=x118)*(x119*x120));

    if (t23 != 4294934528U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x121 = -1LL;
	uint8_t x122 = UINT8_MAX;
	static int32_t x124 = -2042048;
	volatile int32_t t24 = 102178;

    t24 = ((x121!=x122)*(x123*x124));

    if (t24 != 30630720) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x129 = 60U;
	uint16_t x131 = UINT16_MAX;
	volatile uint64_t t25 = 28080328097LLU;

    t25 = ((x129!=x130)*(x131*x132));

    if (t25 != 7511842379478855LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x133 = INT32_MIN;
	uint8_t x134 = 3U;
	static int16_t x135 = 9850;
	int64_t x136 = 213784677787LL;
	static volatile int64_t t26 = -48LL;

    t26 = ((x133!=x134)*(x135*x136));

    if (t26 != 2105779076201950LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x137 = INT8_MIN;
	int32_t x139 = -1;
	volatile int32_t t27 = 669946012;

    t27 = ((x137!=x138)*(x139*x140));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x142 = 102U;
	int16_t x143 = 13;
	volatile int8_t x144 = INT8_MAX;
	int32_t t28 = 3;

    t28 = ((x141!=x142)*(x143*x144));

    if (t28 != 1651) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x145 = UINT8_MAX;
	int64_t x146 = INT64_MAX;
	int8_t x147 = INT8_MIN;
	static volatile int32_t t29 = 56021374;

    t29 = ((x145!=x146)*(x147*x148));

    if (t29 != -384) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x153 = INT16_MIN;
	uint32_t x154 = 24495294U;
	static uint8_t x155 = 61U;
	uint16_t x156 = 7U;

    t30 = ((x153!=x154)*(x155*x156));

    if (t30 != 427) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x170 = INT32_MIN;
	volatile int16_t x171 = INT16_MIN;
	uint64_t x172 = 302532732LLU;
	static uint64_t t31 = 25356LLU;

    t31 = ((x169!=x170)*(x171*x172));

    if (t31 != 18446734160316989440LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x173 = 6;
	int16_t x174 = INT16_MIN;
	uint32_t x175 = 11506344U;
	volatile uint32_t t32 = 261434614U;

    t32 = ((x173!=x174)*(x175*x176));

    if (t32 != 4252042904U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x177 = 39850795;
	uint8_t x178 = 9U;
	int8_t x180 = -1;
	volatile uint32_t t33 = 42U;

    t33 = ((x177!=x178)*(x179*x180));

    if (t33 != 4294966926U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x183 = 5;
	uint8_t x184 = 2U;
	static int32_t t34 = 76554;

    t34 = ((x181!=x182)*(x183*x184));

    if (t34 != 10) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x188 = -11;
	volatile int32_t t35 = -1;

    t35 = ((x185!=x186)*(x187*x188));

    if (t35 != -11) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x189 = -19;
	uint64_t x190 = 113261LLU;
	uint16_t x191 = 1617U;
	uint64_t x192 = 186LLU;
	uint64_t t36 = 7248451047LLU;

    t36 = ((x189!=x190)*(x191*x192));

    if (t36 != 300762LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x197 = INT8_MIN;
	volatile int16_t x198 = INT16_MIN;
	int64_t x199 = -7162066121555LL;
	int64_t x200 = -1LL;
	volatile int64_t t37 = -1LL;

    t37 = ((x197!=x198)*(x199*x200));

    if (t37 != 7162066121555LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x201 = INT16_MIN;
	volatile uint64_t x202 = 23612569LLU;
	uint32_t x204 = 1017635908U;

    t38 = ((x201!=x202)*(x203*x204));

    if (t38 != 2886589952U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x205 = -2;
	int64_t x206 = INT64_MIN;
	uint32_t x207 = 9042576U;
	uint32_t x208 = UINT32_MAX;
	uint32_t t39 = 160099763U;

    t39 = ((x205!=x206)*(x207*x208));

    if (t39 != 4285924720U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x209 = UINT16_MAX;
	static volatile uint32_t x210 = 0U;
	uint16_t x211 = 27U;
	int8_t x212 = -1;
	static int32_t t40 = -472001254;

    t40 = ((x209!=x210)*(x211*x212));

    if (t40 != -27) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x217 = INT8_MAX;
	int64_t x220 = 590144LL;
	static volatile int64_t t41 = -3069610629269472975LL;

    t41 = ((x217!=x218)*(x219*x220));

    if (t41 != -63447561728LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x222 = INT64_MIN;
	int16_t x223 = INT16_MAX;
	int64_t x224 = -234389253LL;
	volatile int64_t t42 = 597113401234462LL;

    t42 = ((x221!=x222)*(x223*x224));

    if (t42 != -7680232653051LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x226 = 1LL;
	static volatile uint64_t x227 = UINT64_MAX;
	static int8_t x228 = INT8_MAX;
	static volatile uint64_t t43 = 4900098411397585493LLU;

    t43 = ((x225!=x226)*(x227*x228));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x229 = INT64_MAX;
	static int32_t x230 = INT32_MAX;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t44 = 108LLU;

    t44 = ((x229!=x230)*(x231*x232));

    if (t44 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x233 = -7;
	volatile int16_t x235 = INT16_MAX;
	uint16_t x236 = 3290U;
	static int32_t t45 = -1;

    t45 = ((x233!=x234)*(x235*x236));

    if (t45 != 107803430) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x241 = -1;
	int16_t x242 = -1;
	static volatile int8_t x243 = INT8_MIN;
	static int16_t x244 = 355;
	int32_t t46 = 922364408;

    t46 = ((x241!=x242)*(x243*x244));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x245 = 1422010498LL;
	volatile int8_t x246 = INT8_MAX;
	static int16_t x247 = 67;
	uint32_t x248 = 3U;
	static volatile uint32_t t47 = 3721593U;

    t47 = ((x245!=x246)*(x247*x248));

    if (t47 != 201U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x249 = 5;
	static volatile int64_t x250 = 1965212782286119399LL;
	uint8_t x251 = UINT8_MAX;
	volatile int8_t x252 = 4;
	volatile int32_t t48 = 21;

    t48 = ((x249!=x250)*(x251*x252));

    if (t48 != 1020) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x253 = UINT8_MAX;
	int64_t x254 = INT64_MIN;
	uint32_t x256 = UINT32_MAX;

    t49 = ((x253!=x254)*(x255*x256));

    if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x257 = INT16_MAX;
	int32_t x258 = INT32_MIN;
	uint8_t x259 = 8U;
	int32_t t50 = 24377613;

    t50 = ((x257!=x258)*(x259*x260));

    if (t50 != 524280) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x262 = -1;
	uint8_t x263 = 70U;
	int32_t t51 = 141816106;

    t51 = ((x261!=x262)*(x263*x264));

    if (t51 != 2293690) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x269 = 3836566866235878LL;
	uint8_t x270 = UINT8_MAX;
	static int64_t x271 = 256953631LL;
	int16_t x272 = INT16_MIN;

    t52 = ((x269!=x270)*(x271*x272));

    if (t52 != -8419856580608LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x273 = INT32_MIN;
	uint64_t x274 = 775008546217925195LLU;
	uint32_t x275 = 411745U;
	uint64_t x276 = 1396906609LLU;
	uint64_t t53 = 208108307322LLU;

    t53 = ((x273!=x274)*(x275*x276));

    if (t53 != 575169311722705LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x277 = INT64_MIN;
	static uint32_t x278 = 518093879U;
	uint64_t x279 = 343731LLU;
	uint64_t t54 = 12644785224614371LLU;

    t54 = ((x277!=x278)*(x279*x280));

    if (t54 != 3781041LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x282 = UINT16_MAX;
	int8_t x283 = INT8_MAX;
	volatile uint64_t t55 = 762469LLU;

    t55 = ((x281!=x282)*(x283*x284));

    if (t55 != 18796LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x285 = UINT32_MAX;
	int64_t x286 = -14539843917102LL;
	int32_t x287 = -876088;
	static int16_t x288 = 591;
	static volatile int32_t t56 = -11548;

    t56 = ((x285!=x286)*(x287*x288));

    if (t56 != -517768008) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x293 = 0LLU;
	uint8_t x294 = UINT8_MAX;
	int32_t x295 = -1;
	static volatile int16_t x296 = INT16_MIN;

    t57 = ((x293!=x294)*(x295*x296));

    if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x297 = -1LL;
	static uint8_t x298 = 28U;
	int8_t x299 = INT8_MIN;
	static uint64_t t58 = 18810LLU;

    t58 = ((x297!=x298)*(x299*x300));

    if (t58 != 18446744008326854400LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x305 = UINT16_MAX;
	int32_t x306 = INT32_MAX;
	volatile uint64_t x307 = 13895691067762213LLU;
	int32_t x308 = INT32_MIN;
	volatile uint64_t t59 = 8154LLU;

    t59 = ((x305!=x306)*(x307*x308));

    if (t59 != 12033526865411964928LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x309 = INT16_MIN;
	uint64_t x310 = 5470302154056042LLU;
	int16_t x311 = INT16_MAX;
	static int64_t t60 = 32266LL;

    t60 = ((x309!=x310)*(x311*x312));

    if (t60 != -32767LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x314 = 60650077146LLU;
	static int64_t x315 = 64669765608LL;
	int8_t x316 = INT8_MIN;
	static int64_t t61 = -659896781478041240LL;

    t61 = ((x313!=x314)*(x315*x316));

    if (t61 != -8277729997824LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x321 = INT8_MAX;
	int32_t x322 = -4;
	static volatile int32_t x323 = INT32_MIN;
	uint64_t x324 = 1299600048LLU;
	volatile uint64_t t62 = 182387963LLU;

    t62 = ((x321!=x322)*(x323*x324));

    if (t62 != 15655874221689536512LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x334 = -5;
	uint8_t x335 = 10U;
	static int8_t x336 = 7;
	static int32_t t63 = -12496;

    t63 = ((x333!=x334)*(x335*x336));

    if (t63 != 70) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x337 = INT64_MIN;
	int8_t x338 = INT8_MAX;
	static int8_t x339 = INT8_MIN;
	int64_t x340 = -1LL;
	int64_t t64 = 89594443LL;

    t64 = ((x337!=x338)*(x339*x340));

    if (t64 != 128LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x345 = 4077671U;
	static uint8_t x347 = 1U;
	volatile int32_t t65 = -1397;

    t65 = ((x345!=x346)*(x347*x348));

    if (t65 != 60) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x353 = -10;
	static uint32_t x355 = 1U;
	static uint16_t x356 = 56U;
	volatile uint32_t t66 = 41486U;

    t66 = ((x353!=x354)*(x355*x356));

    if (t66 != 56U) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x361 = 61;
	uint8_t x362 = 7U;
	int8_t x363 = INT8_MAX;
	static int64_t x364 = -1LL;
	static volatile int64_t t67 = -48074LL;

    t67 = ((x361!=x362)*(x363*x364));

    if (t67 != -127LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x366 = -1;
	int16_t x367 = -23;
	uint32_t x368 = 131407836U;

    t68 = ((x365!=x366)*(x367*x368));

    if (t68 != 1272587068U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x369 = INT64_MIN;
	uint8_t x370 = 31U;
	volatile int64_t x371 = -1LL;
	uint16_t x372 = UINT16_MAX;
	volatile int64_t t69 = 144334538549738LL;

    t69 = ((x369!=x370)*(x371*x372));

    if (t69 != -65535LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x377 = INT32_MIN;
	static uint64_t x378 = 29872626LLU;
	static volatile int32_t t70 = -29;

    t70 = ((x377!=x378)*(x379*x380));

    if (t70 != 16711425) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x384 = -1;
	volatile int64_t t71 = -217046163LL;

    t71 = ((x381!=x382)*(x383*x384));

    if (t71 != -9402751792LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x385 = 11169770277954288LLU;
	int8_t x386 = INT8_MIN;
	volatile uint8_t x387 = 1U;
	int64_t t72 = 1623LL;

    t72 = ((x385!=x386)*(x387*x388));

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x394 = 12;
	int32_t x395 = INT32_MIN;
	uint64_t x396 = 353617876LLU;
	volatile uint64_t t73 = 369LLU;

    t73 = ((x393!=x394)*(x395*x396));

    if (t73 != 17687355467359059968LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x398 = UINT8_MAX;
	uint8_t x399 = 1U;
	uint64_t x400 = UINT64_MAX;

    t74 = ((x397!=x398)*(x399*x400));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x401 = 1;
	int16_t x402 = INT16_MIN;
	int64_t x403 = -1LL;
	int8_t x404 = 52;
	int64_t t75 = 16545190142LL;

    t75 = ((x401!=x402)*(x403*x404));

    if (t75 != -52LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x405 = UINT8_MAX;
	int8_t x406 = 0;
	int64_t x407 = -1LL;
	int32_t x408 = -1;

    t76 = ((x405!=x406)*(x407*x408));

    if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x413 = INT16_MIN;
	int16_t x414 = -1;
	int16_t x416 = -1;
	volatile uint64_t t77 = 43242LLU;

    t77 = ((x413!=x414)*(x415*x416));

    if (t77 != 18446744019581794581LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x417 = INT8_MIN;
	int16_t x418 = -1;
	int64_t x419 = -4037076205743LL;
	int32_t x420 = 43;

    t78 = ((x417!=x418)*(x419*x420));

    if (t78 != -173594276846949LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x421 = -1;
	int8_t x422 = -1;
	uint32_t x423 = 774670U;
	int8_t x424 = 3;
	volatile uint32_t t79 = 4497203U;

    t79 = ((x421!=x422)*(x423*x424));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x429 = INT16_MIN;
	static volatile int32_t x430 = 42;
	uint16_t x431 = 2875U;
	volatile int8_t x432 = INT8_MIN;
	volatile int32_t t80 = -31;

    t80 = ((x429!=x430)*(x431*x432));

    if (t80 != -368000) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x433 = INT64_MAX;
	static int16_t x434 = INT16_MAX;
	uint32_t x435 = 1194067342U;
	uint32_t t81 = 193229789U;

    t81 = ((x433!=x434)*(x435*x436));

    if (t81 != 4111210536U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x437 = INT16_MIN;
	int16_t x438 = 943;
	int8_t x439 = INT8_MIN;
	int16_t x440 = 0;

    t82 = ((x437!=x438)*(x439*x440));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x441 = INT32_MAX;
	int16_t x442 = -10;
	int64_t x443 = INT64_MIN;
	volatile uint64_t x444 = 10943503893LLU;

    t83 = ((x441!=x442)*(x443*x444));

    if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x445 = -1;
	static int32_t x446 = INT32_MIN;
	int32_t x447 = 925;
	volatile uint64_t x448 = UINT64_MAX;
	uint64_t t84 = 793607018750116LLU;

    t84 = ((x445!=x446)*(x447*x448));

    if (t84 != 18446744073709550691LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x449 = -1;
	volatile int16_t x450 = 915;
	int8_t x451 = 4;
	volatile int32_t t85 = -80768568;

    t85 = ((x449!=x450)*(x451*x452));

    if (t85 != 32) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x454 = 1197777864349529581LL;
	static int64_t x455 = -30515706800862917LL;
	uint8_t x456 = 1U;
	static int64_t t86 = -1096811LL;

    t86 = ((x453!=x454)*(x455*x456));

    if (t86 != -30515706800862917LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x466 = 58;
	int8_t x467 = INT8_MIN;
	uint16_t x468 = UINT16_MAX;
	int32_t t87 = 0;

    t87 = ((x465!=x466)*(x467*x468));

    if (t87 != -8388480) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x469 = 10U;
	int16_t x470 = 17;
	uint16_t x472 = UINT16_MAX;

    t88 = ((x469!=x470)*(x471*x472));

    if (t88 != -2147450880) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x473 = 2;
	uint32_t x474 = 22U;
	static volatile uint64_t x475 = 872956838252783742LLU;
	int32_t x476 = -3499341;
	static uint64_t t89 = 5658288LLU;

    t89 = ((x473!=x474)*(x475*x476));

    if (t89 != 7163277967235095578LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x481 = -1;
	static int16_t x482 = INT16_MIN;
	volatile uint16_t x484 = UINT16_MAX;

    t90 = ((x481!=x482)*(x483*x484));

    if (t90 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x485 = 1408448LL;
	uint32_t x486 = 605506U;
	static int32_t x487 = INT32_MIN;
	volatile uint64_t x488 = 277104042617360LLU;
	volatile uint64_t t91 = 15LLU;

    t91 = ((x485!=x486)*(x487*x488));

    if (t91 != 15563502394414202880LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x494 = -44;
	volatile int64_t x495 = INT64_MAX;
	uint64_t x496 = 779LLU;

    t92 = ((x493!=x494)*(x495*x496));

    if (t92 != 9223372036854775029LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x497 = 23947988LL;
	int8_t x498 = -24;
	static int32_t x499 = 64303;
	int8_t x500 = INT8_MAX;
	volatile int32_t t93 = 1706;

    t93 = ((x497!=x498)*(x499*x500));

    if (t93 != 8166481) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x501 = -28;
	int64_t x502 = -7404639805408252LL;
	int16_t x503 = INT16_MAX;
	static int32_t t94 = -7546240;

    t94 = ((x501!=x502)*(x503*x504));

    if (t94 != 8355585) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x505 = INT32_MIN;
	uint16_t x506 = 183U;
	static uint64_t t95 = 236595799508171749LLU;

    t95 = ((x505!=x506)*(x507*x508));

    if (t95 != 18443700132088824680LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x522 = UINT8_MAX;
	uint32_t x523 = 65387420U;
	uint32_t x524 = 1520536U;
	volatile uint32_t t96 = 351U;

    t96 = ((x521!=x522)*(x523*x524));

    if (t96 != 4023089312U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x529 = INT64_MAX;
	static uint32_t x530 = UINT32_MAX;
	uint64_t x531 = 118432633628762421LLU;
	uint64_t t97 = 37LLU;

    t97 = ((x529!=x530)*(x531*x532));

    if (t97 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x537 = 1;
	volatile uint32_t x538 = 30522U;

    t98 = ((x537!=x538)*(x539*x540));

    if (t98 != -9559) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x541 = -9446;
	static int32_t x542 = INT32_MIN;
	uint32_t x543 = 0U;
	int32_t x544 = 213689476;

    t99 = ((x541!=x542)*(x543*x544));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x549 = INT16_MIN;
	static uint16_t x552 = 451U;
	static volatile int32_t t100 = -168;

    t100 = ((x549!=x550)*(x551*x552));

    if (t100 != -57728) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x557 = INT8_MIN;
	uint16_t x558 = 23U;
	volatile int8_t x559 = INT8_MAX;
	static uint16_t x560 = UINT16_MAX;
	int32_t t101 = -17;

    t101 = ((x557!=x558)*(x559*x560));

    if (t101 != 8322945) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint32_t x565 = 755140743U;
	int32_t x566 = INT32_MAX;
	uint32_t x567 = UINT32_MAX;
	uint8_t x568 = UINT8_MAX;
	volatile uint32_t t102 = 0U;

    t102 = ((x565!=x566)*(x567*x568));

    if (t102 != 4294967041U) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x569 = 1083984797302112LLU;
	uint16_t x571 = 0U;
	int32_t x572 = INT32_MAX;
	int32_t t103 = 23005555;

    t103 = ((x569!=x570)*(x571*x572));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x573 = 15776U;
	uint32_t x574 = 1U;
	int8_t x575 = 1;
	volatile int8_t x576 = -7;
	int32_t t104 = -192572872;

    t104 = ((x573!=x574)*(x575*x576));

    if (t104 != -7) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x578 = INT64_MIN;
	uint8_t x579 = 4U;
	int8_t x580 = INT8_MAX;
	volatile int32_t t105 = 1;

    t105 = ((x577!=x578)*(x579*x580));

    if (t105 != 508) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x585 = 15U;
	int32_t x586 = -1;
	volatile int8_t x588 = 50;
	volatile int32_t t106 = 0;

    t106 = ((x585!=x586)*(x587*x588));

    if (t106 != -469650) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x589 = -1;
	volatile int64_t x591 = 1660423633657LL;
	volatile int64_t t107 = -494083892LL;

    t107 = ((x589!=x590)*(x591*x592));

    if (t107 != 1660423633657LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x593 = UINT32_MAX;
	volatile uint32_t x594 = 47936185U;
	uint32_t x595 = UINT32_MAX;
	int32_t x596 = INT32_MIN;
	volatile uint32_t t108 = 106280U;

    t108 = ((x593!=x594)*(x595*x596));

    if (t108 != 2147483648U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x597 = -1LL;
	int32_t x598 = -1;
	static uint16_t x599 = 1U;
	int64_t x600 = -1LL;
	static volatile int64_t t109 = -41264355LL;

    t109 = ((x597!=x598)*(x599*x600));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x601 = 2509;
	int32_t x603 = -779807;
	static int16_t x604 = -1;
	static int32_t t110 = 5;

    t110 = ((x601!=x602)*(x603*x604));

    if (t110 != 779807) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x606 = 184737808U;
	uint32_t t111 = 86164U;

    t111 = ((x605!=x606)*(x607*x608));

    if (t111 != 4294960714U) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x609 = INT64_MIN;
	int16_t x610 = -1;
	int16_t x611 = 1;
	volatile int8_t x612 = -2;

    t112 = ((x609!=x610)*(x611*x612));

    if (t112 != -2) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x614 = 308601LL;
	static int16_t x615 = INT16_MIN;
	static volatile int16_t x616 = INT16_MIN;

    t113 = ((x613!=x614)*(x615*x616));

    if (t113 != 1073741824) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x621 = INT16_MAX;
	uint64_t x622 = UINT64_MAX;
	int8_t x623 = -1;

    t114 = ((x621!=x622)*(x623*x624));

    if (t114 != 32768) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x625 = -1;
	uint32_t x627 = 173256175U;
	int64_t t115 = 345145941211LL;

    t115 = ((x625!=x626)*(x627*x628));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x633 = INT8_MIN;
	static volatile int16_t x634 = INT16_MIN;
	uint64_t x635 = 19010553263553LLU;
	static uint64_t x636 = 524290882017647569LLU;
	uint64_t t116 = 22662099440LLU;

    t116 = ((x633!=x634)*(x635*x636));

    if (t116 != 196099051917180305LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x637 = UINT8_MAX;
	int8_t x638 = INT8_MIN;
	static int16_t x640 = -1;
	volatile uint64_t t117 = 555482235664116211LLU;

    t117 = ((x637!=x638)*(x639*x640));

    if (t117 != 18423814609965168372LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x645 = INT8_MIN;
	int32_t x646 = -241;
	static uint32_t x648 = 2582918U;
	uint32_t t118 = 42072366U;

    t118 = ((x645!=x646)*(x647*x648));

    if (t118 != 2582918U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x649 = 1743870283LLU;
	int64_t x650 = INT64_MIN;
	uint64_t x651 = 50764LLU;
	volatile int64_t x652 = -1LL;
	static uint64_t t119 = 14068475LLU;

    t119 = ((x649!=x650)*(x651*x652));

    if (t119 != 18446744073709500852LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x656 = 1;
	static volatile uint64_t t120 = UINT64_MAX;

    t120 = ((x653!=x654)*(x655*x656));

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x665 = UINT64_MAX;
	int8_t x666 = INT8_MIN;
	static int32_t x667 = 1;
	int8_t x668 = INT8_MIN;

    t121 = ((x665!=x666)*(x667*x668));

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x669 = INT64_MIN;
	int32_t x670 = INT32_MIN;
	static volatile uint64_t x671 = 1LLU;
	volatile uint64_t t122 = UINT64_MAX;

    t122 = ((x669!=x670)*(x671*x672));

    if (t122 != UINT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x675 = UINT64_MAX;
	static uint64_t t123 = 6223885941LLU;

    t123 = ((x673!=x674)*(x675*x676));

    if (t123 != 1LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x677 = 1;
	int16_t x678 = -1;
	static int16_t x679 = INT16_MIN;
	int16_t x680 = INT16_MAX;
	volatile int32_t t124 = -59234843;

    t124 = ((x677!=x678)*(x679*x680));

    if (t124 != -1073709056) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x682 = 0U;
	int32_t x683 = INT32_MIN;
	static uint32_t x684 = 32490U;
	volatile uint32_t t125 = 1U;

    t125 = ((x681!=x682)*(x683*x684));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x685 = INT64_MIN;
	int16_t x686 = 5;
	int64_t x687 = -1315LL;
	uint64_t x688 = 2330904672462LLU;
	static volatile uint64_t t126 = 95LLU;

    t126 = ((x685!=x686)*(x687*x688));

    if (t126 != 18443678934065264086LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x689 = 1949;
	int16_t x690 = 0;
	static uint32_t x691 = 3716U;
	uint32_t t127 = 308254U;

    t127 = ((x689!=x690)*(x691*x692));

    if (t127 != 4265993644U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x693 = -1LL;
	volatile int64_t x695 = INT64_MAX;
	uint64_t x696 = UINT64_MAX;
	uint64_t t128 = 497935921LLU;

    t128 = ((x693!=x694)*(x695*x696));

    if (t128 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x697 = -1;
	static uint16_t x698 = 27367U;
	uint32_t x699 = UINT32_MAX;
	uint16_t x700 = UINT16_MAX;
	uint32_t t129 = 22U;

    t129 = ((x697!=x698)*(x699*x700));

    if (t129 != 4294901761U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x701 = INT8_MAX;
	static int16_t x703 = -1;
	uint64_t x704 = UINT64_MAX;
	uint64_t t130 = 389396558659463LLU;

    t130 = ((x701!=x702)*(x703*x704));

    if (t130 != 1LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x717 = 622U;
	volatile int16_t x718 = -15;
	static volatile int32_t t131 = -5028708;

    t131 = ((x717!=x718)*(x719*x720));

    if (t131 != -4) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x721 = 833;
	volatile int64_t x722 = -1LL;
	int16_t x723 = INT16_MIN;
	int16_t x724 = -1;
	volatile int32_t t132 = -3157021;

    t132 = ((x721!=x722)*(x723*x724));

    if (t132 != 32768) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x729 = INT32_MIN;
	int16_t x730 = INT16_MAX;
	static uint8_t x731 = UINT8_MAX;
	uint32_t x732 = 674U;
	volatile uint32_t t133 = 18U;

    t133 = ((x729!=x730)*(x731*x732));

    if (t133 != 171870U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x733 = 24101U;
	int8_t x734 = -7;
	int64_t x735 = -3069673965LL;
	static uint8_t x736 = 10U;
	volatile int64_t t134 = -60892960396199916LL;

    t134 = ((x733!=x734)*(x735*x736));

    if (t134 != -30696739650LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x738 = 19608LLU;
	uint32_t x739 = 1957041U;
	static uint8_t x740 = UINT8_MAX;
	uint32_t t135 = 18052U;

    t135 = ((x737!=x738)*(x739*x740));

    if (t135 != 499045455U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x741 = 0U;
	uint32_t x742 = UINT32_MAX;
	uint16_t x743 = 3971U;
	volatile uint32_t t136 = 127508U;

    t136 = ((x741!=x742)*(x743*x744));

    if (t136 != 4294963325U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x745 = 62LLU;
	int32_t x746 = -1;
	int64_t x747 = -3680596988LL;
	static int16_t x748 = INT16_MIN;

    t137 = ((x745!=x746)*(x747*x748));

    if (t137 != 120605802102784LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x753 = 29789682U;
	int16_t x754 = INT16_MIN;
	int16_t x756 = 0;
	int32_t t138 = -961727;

    t138 = ((x753!=x754)*(x755*x756));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x765 = -7;
	uint16_t x766 = 106U;
	int8_t x767 = -1;
	volatile int64_t x768 = -501669589130223LL;

    t139 = ((x765!=x766)*(x767*x768));

    if (t139 != 501669589130223LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x770 = INT16_MIN;
	int16_t x771 = INT16_MIN;
	int16_t x772 = INT16_MIN;
	int32_t t140 = -3164;

    t140 = ((x769!=x770)*(x771*x772));

    if (t140 != 1073741824) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x773 = UINT64_MAX;
	uint8_t x774 = UINT8_MAX;
	uint16_t x775 = 11U;
	uint64_t x776 = UINT64_MAX;
	volatile uint64_t t141 = 366870012913320LLU;

    t141 = ((x773!=x774)*(x775*x776));

    if (t141 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x781 = 10U;
	uint32_t x782 = 1842U;
	int32_t x783 = -2277943;
	static int8_t x784 = -1;
	int32_t t142 = 22816642;

    t142 = ((x781!=x782)*(x783*x784));

    if (t142 != 2277943) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x786 = INT32_MAX;
	uint32_t x787 = 5U;
	uint32_t t143 = 7712599U;

    t143 = ((x785!=x786)*(x787*x788));

    if (t143 != 4935U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x789 = INT16_MIN;
	static volatile int16_t x790 = INT16_MIN;
	uint16_t x791 = 649U;
	int8_t x792 = -8;
	int32_t t144 = 6815;

    t144 = ((x789!=x790)*(x791*x792));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x793 = 0U;
	static int8_t x794 = -1;
	static uint32_t x795 = UINT32_MAX;
	int32_t x796 = -1;
	volatile uint32_t t145 = 1246262U;

    t145 = ((x793!=x794)*(x795*x796));

    if (t145 != 1U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x805 = INT32_MIN;
	volatile int32_t x806 = INT32_MAX;
	uint64_t x807 = 41692129862LLU;
	uint64_t t146 = 105770004901LLU;

    t146 = ((x805!=x806)*(x807*x808));

    if (t146 != 18446744032017421754LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x809 = INT32_MAX;
	volatile int64_t x810 = INT64_MIN;
	int8_t x811 = -1;
	uint16_t x812 = UINT16_MAX;
	volatile int32_t t147 = 47794;

    t147 = ((x809!=x810)*(x811*x812));

    if (t147 != -65535) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x813 = UINT64_MAX;
	uint64_t x814 = UINT64_MAX;
	int8_t x815 = 10;
	int8_t x816 = INT8_MAX;
	int32_t t148 = 24703324;

    t148 = ((x813!=x814)*(x815*x816));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x819 = UINT64_MAX;
	int16_t x820 = -15;
	static uint64_t t149 = 11006778984LLU;

    t149 = ((x817!=x818)*(x819*x820));

    if (t149 != 15LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x821 = -10LL;
	static uint8_t x822 = 64U;
	int32_t x823 = -1;
	static volatile int32_t t150 = -413595;

    t150 = ((x821!=x822)*(x823*x824));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x825 = INT32_MAX;
	uint16_t x827 = 16U;
	int16_t x828 = -1;
	volatile int32_t t151 = 32465989;

    t151 = ((x825!=x826)*(x827*x828));

    if (t151 != -16) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x830 = 14079885LLU;
	static volatile int16_t x831 = INT16_MAX;
	volatile int8_t x832 = INT8_MAX;
	int32_t t152 = -12616;

    t152 = ((x829!=x830)*(x831*x832));

    if (t152 != 4161409) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x838 = INT64_MAX;
	uint32_t x839 = 18U;
	int32_t x840 = INT32_MIN;
	uint32_t t153 = 364775U;

    t153 = ((x837!=x838)*(x839*x840));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x841 = INT32_MIN;
	int8_t x842 = INT8_MIN;
	uint32_t x843 = 28066U;
	int8_t x844 = INT8_MIN;
	uint32_t t154 = 387757U;

    t154 = ((x841!=x842)*(x843*x844));

    if (t154 != 4291374848U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x845 = INT32_MIN;
	uint32_t x846 = 1U;
	volatile uint32_t t155 = 356U;

    t155 = ((x845!=x846)*(x847*x848));

    if (t155 != 419U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x849 = INT64_MIN;
	int8_t x850 = INT8_MIN;
	int16_t x851 = 0;
	uint64_t x852 = 68227911594LLU;
	static uint64_t t156 = 126566LLU;

    t156 = ((x849!=x850)*(x851*x852));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x853 = INT8_MAX;
	uint32_t x854 = 0U;
	int8_t x855 = -1;
	int8_t x856 = INT8_MAX;
	static volatile int32_t t157 = 20329;

    t157 = ((x853!=x854)*(x855*x856));

    if (t157 != -127) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x857 = 2;
	uint8_t x859 = 43U;
	int8_t x860 = INT8_MIN;
	static int32_t t158 = -1594869;

    t158 = ((x857!=x858)*(x859*x860));

    if (t158 != -5504) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x861 = INT16_MIN;
	static int16_t x862 = INT16_MAX;
	int16_t x863 = INT16_MIN;
	uint64_t x864 = 14930258629171LLU;
	uint64_t t159 = 13263201LLU;

    t159 = ((x861!=x862)*(x863*x864));

    if (t159 != 17957509358948876288LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x866 = -1;
	volatile int32_t x868 = -1;
	uint64_t t160 = 9366733605LLU;

    t160 = ((x865!=x866)*(x867*x868));

    if (t160 != 18446744073709492064LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x871 = 2;
	uint8_t x872 = UINT8_MAX;

    t161 = ((x869!=x870)*(x871*x872));

    if (t161 != 510) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x877 = -16;
	uint64_t x878 = 468963255098287506LLU;
	int16_t x880 = INT16_MIN;
	static int32_t t162 = -348;

    t162 = ((x877!=x878)*(x879*x880));

    if (t162 != -2147450880) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x881 = 79U;
	volatile int64_t x882 = INT64_MIN;
	int64_t x884 = -1LL;

    t163 = ((x881!=x882)*(x883*x884));

    if (t163 != -2147483647LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x893 = UINT8_MAX;
	uint8_t x894 = 6U;
	static int32_t x895 = 1;
	static int64_t x896 = INT64_MAX;
	volatile int64_t t164 = INT64_MAX;

    t164 = ((x893!=x894)*(x895*x896));

    if (t164 != INT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x900 = INT8_MIN;
	volatile int32_t t165 = -13;

    t165 = ((x897!=x898)*(x899*x900));

    if (t165 != -1920) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x901 = 69446829434484410LLU;
	int32_t x902 = INT32_MIN;
	static volatile int32_t x903 = 11561;
	volatile int16_t x904 = -2;

    t166 = ((x901!=x902)*(x903*x904));

    if (t166 != -23122) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x906 = -3;
	static int8_t x908 = -1;
	uint32_t t167 = 2U;

    t167 = ((x905!=x906)*(x907*x908));

    if (t167 != 1U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x913 = -1;
	int64_t x916 = -1LL;

    t168 = ((x913!=x914)*(x915*x916));

    if (t168 != -32767LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x929 = 446755279699221163LLU;
	int16_t x930 = -1;
	uint64_t x932 = 721282912LLU;

    t169 = ((x929!=x930)*(x931*x932));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x933 = INT64_MIN;
	uint32_t x935 = 9693443U;
	int8_t x936 = 14;
	uint32_t t170 = 71638U;

    t170 = ((x933!=x934)*(x935*x936));

    if (t170 != 135708202U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x938 = 29U;
	volatile uint16_t x939 = UINT16_MAX;
	int8_t x940 = INT8_MIN;

    t171 = ((x937!=x938)*(x939*x940));

    if (t171 != -8388480) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x941 = INT16_MAX;
	int64_t x942 = INT64_MIN;
	volatile int32_t x943 = -107523301;
	int32_t t172 = -12;

    t172 = ((x941!=x942)*(x943*x944));

    if (t172 != 107523301) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x949 = -1;
	static uint32_t x951 = 146301U;
	int8_t x952 = INT8_MIN;

    t173 = ((x949!=x950)*(x951*x952));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x954 = 177U;
	volatile int32_t x955 = INT32_MIN;
	static int64_t x956 = -38194236LL;
	static int64_t t174 = -2079513486227605345LL;

    t174 = ((x953!=x954)*(x955*x956));

    if (t174 != 82021497257852928LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x957 = UINT64_MAX;
	int8_t x959 = INT8_MIN;
	uint16_t x960 = 4752U;
	volatile int32_t t175 = 9921772;

    t175 = ((x957!=x958)*(x959*x960));

    if (t175 != -608256) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x961 = INT64_MAX;
	int16_t x962 = INT16_MAX;
	int32_t x964 = INT32_MAX;
	static uint64_t t176 = 200384674331058LLU;

    t176 = ((x961!=x962)*(x963*x964));

    if (t176 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x965 = 4527LL;
	static int8_t x968 = INT8_MIN;
	volatile int32_t t177 = 0;

    t177 = ((x965!=x966)*(x967*x968));

    if (t177 != -30056704) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x974 = -1;
	volatile int32_t x976 = 1218;
	int32_t t178 = -160640;

    t178 = ((x973!=x974)*(x975*x976));

    if (t178 != 79821630) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x978 = UINT8_MAX;
	static int8_t x979 = -1;

    t179 = ((x977!=x978)*(x979*x980));

    if (t179 != 1LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x981 = INT16_MIN;
	uint16_t x982 = 18370U;
	int8_t x983 = 20;
	uint64_t x984 = UINT64_MAX;
	uint64_t t180 = 5936322258713433580LLU;

    t180 = ((x981!=x982)*(x983*x984));

    if (t180 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x990 = INT16_MIN;
	static uint8_t x991 = 16U;

    t181 = ((x989!=x990)*(x991*x992));

    if (t181 != -16) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x993 = INT32_MAX;
	uint32_t x994 = 4860U;
	int8_t x995 = INT8_MAX;
	int8_t x996 = 0;

    t182 = ((x993!=x994)*(x995*x996));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1005 = 1;
	int16_t x1006 = INT16_MIN;
	int8_t x1007 = INT8_MIN;
	uint8_t x1008 = 3U;
	int32_t t183 = -117105021;

    t183 = ((x1005!=x1006)*(x1007*x1008));

    if (t183 != -384) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1009 = 8231792178LLU;
	volatile uint8_t x1010 = 26U;
	int32_t x1011 = -1;
	int8_t x1012 = -1;
	volatile int32_t t184 = -766652451;

    t184 = ((x1009!=x1010)*(x1011*x1012));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1013 = INT16_MIN;
	static uint8_t x1015 = UINT8_MAX;
	uint64_t x1016 = 3441977LLU;
	volatile uint64_t t185 = 1980765992861LLU;

    t185 = ((x1013!=x1014)*(x1015*x1016));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1018 = UINT64_MAX;
	volatile int8_t x1020 = -1;
	static int32_t t186 = 3358;

    t186 = ((x1017!=x1018)*(x1019*x1020));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1021 = INT64_MAX;
	volatile uint8_t x1022 = UINT8_MAX;
	uint16_t x1024 = 2049U;
	int32_t t187 = 345838527;

    t187 = ((x1021!=x1022)*(x1023*x1024));

    if (t187 != 43029) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1025 = INT16_MAX;
	int16_t x1026 = -1;
	int16_t x1027 = 0;
	uint8_t x1028 = 1U;
	int32_t t188 = 58;

    t188 = ((x1025!=x1026)*(x1027*x1028));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1029 = -24939LL;
	uint64_t x1030 = 22735292LLU;
	int16_t x1031 = -3;
	uint8_t x1032 = 5U;
	volatile int32_t t189 = -82;

    t189 = ((x1029!=x1030)*(x1031*x1032));

    if (t189 != -15) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1033 = INT8_MIN;
	static int16_t x1034 = INT16_MIN;
	int16_t x1035 = -3;
	static volatile int32_t t190 = -671;

    t190 = ((x1033!=x1034)*(x1035*x1036));

    if (t190 != -9) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1037 = -1LL;
	int16_t x1038 = INT16_MAX;
	int64_t x1039 = -37LL;
	int64_t t191 = 2920961981735LL;

    t191 = ((x1037!=x1038)*(x1039*x1040));

    if (t191 != -6692056023LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1042 = INT16_MIN;
	uint16_t x1043 = 3030U;
	int64_t x1044 = -134829137362499LL;
	static volatile int64_t t192 = 26959LL;

    t192 = ((x1041!=x1042)*(x1043*x1044));

    if (t192 != -408532286208371970LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1045 = UINT32_MAX;
	int64_t x1046 = INT64_MIN;
	uint32_t x1047 = 1006062304U;
	uint16_t x1048 = UINT16_MAX;
	uint32_t t193 = 3736662U;

    t193 = ((x1045!=x1046)*(x1047*x1048));

    if (t193 != 250131744U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1049 = -657929;
	int8_t x1050 = -1;
	int16_t x1051 = -1;
	uint16_t x1052 = UINT16_MAX;
	static volatile int32_t t194 = -13293158;

    t194 = ((x1049!=x1050)*(x1051*x1052));

    if (t194 != -65535) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1053 = INT64_MIN;
	volatile int64_t x1054 = 379LL;
	volatile uint8_t x1055 = 8U;
	uint32_t x1056 = 221615023U;
	uint32_t t195 = 527303592U;

    t195 = ((x1053!=x1054)*(x1055*x1056));

    if (t195 != 1772920184U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1057 = INT16_MIN;
	volatile int32_t x1059 = INT32_MAX;
	volatile uint32_t x1060 = 29942980U;
	uint32_t t196 = 10U;

    t196 = ((x1057!=x1058)*(x1059*x1060));

    if (t196 != 4265024316U) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1061 = INT64_MAX;
	int16_t x1063 = 3;
	int64_t t197 = -1974031736120401LL;

    t197 = ((x1061!=x1062)*(x1063*x1064));

    if (t197 != -3LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x1065 = INT8_MIN;
	int64_t x1066 = INT64_MAX;
	volatile int64_t x1068 = -1LL;
	int64_t t198 = -9476781LL;

    t198 = ((x1065!=x1066)*(x1067*x1068));

    if (t198 != -78325826000772LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1069 = INT8_MIN;
	static uint64_t x1070 = 15693260LLU;
	uint16_t x1071 = 64U;

    t199 = ((x1069!=x1070)*(x1071*x1072));

    if (t199 != 256) { NG(); } else { ; }
	
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

