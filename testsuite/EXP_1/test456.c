
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

static int32_t x9 = INT32_MAX;
uint32_t x10 = UINT32_MAX;
int32_t t1 = 6109020;
static int16_t x19 = -1;
static volatile int16_t x22 = -8951;
int16_t x26 = INT16_MIN;
int8_t x27 = INT8_MIN;
int32_t t6 = -27;
static int16_t x42 = -1;
static int64_t x57 = -1LL;
static uint16_t x79 = 969U;
uint64_t x82 = UINT64_MAX;
volatile uint16_t x84 = UINT16_MAX;
volatile int32_t t16 = 231302;
volatile uint8_t x102 = UINT8_MAX;
int32_t x104 = 129441;
volatile int32_t t19 = -422831821;
int64_t x106 = -4878554LL;
volatile uint64_t x109 = UINT64_MAX;
int32_t t21 = 444;
uint64_t x116 = 2390103653696956530LLU;
uint16_t x121 = 402U;
int16_t x130 = INT16_MIN;
uint64_t x134 = 2092575075LLU;
int64_t x164 = INT64_MIN;
uint32_t x172 = 49946506U;
static uint8_t x180 = 0U;
uint32_t x181 = 562573U;
int16_t x197 = -1;
volatile int16_t x199 = INT16_MIN;
volatile uint64_t x204 = 7744298710LLU;
static int32_t t37 = -6647690;
uint64_t x209 = 24109282181LLU;
static uint16_t x210 = 151U;
int64_t x214 = -225990529513534LL;
int8_t x227 = 35;
volatile uint16_t x228 = 13056U;
volatile int32_t x232 = 11;
volatile int16_t x235 = -3;
int64_t x236 = -155237LL;
volatile uint8_t x237 = 0U;
volatile int64_t x245 = 217554104131LL;
uint8_t x246 = 2U;
volatile int32_t t44 = 144459595;
int32_t x250 = 37199;
int32_t x251 = -1;
uint32_t x260 = 362461U;
int64_t x265 = -256499506916LL;
int64_t x267 = 15280421LL;
static int8_t x270 = INT8_MIN;
int16_t x286 = INT16_MAX;
static int32_t t51 = -178978414;
uint32_t x289 = UINT32_MAX;
int32_t t53 = -5;
int8_t x315 = INT8_MIN;
static int32_t x316 = -1;
static int8_t x330 = -35;
int32_t t59 = -18192778;
uint16_t x346 = UINT16_MAX;
volatile uint64_t x349 = 3157736LLU;
int32_t x353 = -1167350;
int32_t x354 = 1;
int32_t t62 = 67993640;
volatile int64_t x358 = -217096510841976083LL;
uint64_t x367 = UINT64_MAX;
static uint64_t x375 = 7800LLU;
volatile int32_t t67 = 6143;
static volatile int64_t x392 = INT64_MIN;
uint32_t x400 = 2U;
uint64_t x404 = UINT64_MAX;
uint16_t x409 = UINT16_MAX;
int32_t t77 = 43126;
static int16_t x425 = -9582;
volatile uint64_t x432 = 15218036280LLU;
int32_t t80 = -10088990;
int16_t x437 = INT16_MIN;
int8_t x447 = 7;
uint8_t x451 = 11U;
volatile int16_t x452 = INT16_MIN;
volatile int32_t t83 = -884;
uint32_t x458 = 18049987U;
int32_t x461 = 175833939;
uint8_t x485 = UINT8_MAX;
static int16_t x488 = -560;
int32_t t89 = -206091266;
uint32_t x489 = UINT32_MAX;
static uint64_t x492 = 305120LLU;
int32_t t91 = 220325;
int32_t x501 = INT32_MIN;
int32_t x503 = -1;
int8_t x508 = INT8_MAX;
volatile int32_t t93 = 1572;
int64_t x511 = INT64_MAX;
int8_t x530 = 15;
int64_t x531 = INT64_MIN;
int32_t t99 = 177938;
uint8_t x544 = 49U;
uint32_t x545 = 0U;
uint16_t x550 = 5U;
static uint64_t x552 = UINT64_MAX;
int16_t x553 = INT16_MIN;
volatile int32_t t105 = 42;
int8_t x569 = INT8_MIN;
static int8_t x581 = INT8_MIN;
volatile uint32_t x582 = 5U;
int32_t x596 = INT32_MIN;
static uint32_t x597 = 15439359U;
volatile int8_t x600 = INT8_MAX;
volatile int32_t x601 = 3;
int16_t x613 = INT16_MIN;
int32_t x617 = 2;
uint8_t x628 = 15U;
volatile int32_t t118 = 206396;
int8_t x635 = INT8_MIN;
int32_t t119 = 14970;
int8_t x644 = -1;
int32_t t121 = 15000045;
static uint16_t x646 = 6382U;
static int64_t x653 = INT64_MAX;
static int64_t x659 = INT64_MIN;
int32_t t124 = 83850;
static int8_t x661 = -2;
volatile int32_t t125 = 8028505;
uint16_t x688 = 3U;
uint64_t x692 = 7501LLU;
int16_t x699 = INT16_MIN;
int16_t x710 = -1;
volatile int8_t x727 = 17;
int32_t x728 = INT32_MAX;
volatile int8_t x729 = 2;
int16_t x744 = 5417;
int32_t x746 = INT32_MIN;
static volatile uint16_t x747 = 1U;
int32_t x754 = -1;
int8_t x775 = INT8_MIN;
volatile uint32_t x792 = 0U;
volatile int32_t t146 = 0;
volatile int32_t t147 = -2039;
int8_t x835 = -35;
int8_t x844 = -30;
int16_t x846 = -3268;
int32_t x856 = INT32_MIN;
uint8_t x857 = 7U;
volatile int64_t x859 = INT64_MIN;
static uint8_t x865 = 109U;
volatile int32_t t164 = 1;
uint32_t x872 = UINT32_MAX;
static int32_t t167 = -1;
int32_t t168 = -18;
static uint32_t x889 = 370U;
static int32_t x892 = 314202269;
static volatile int32_t t169 = -7;
uint8_t x898 = 1U;
static uint64_t x900 = UINT64_MAX;
uint16_t x903 = 30522U;
static uint32_t x917 = UINT32_MAX;
int64_t x920 = INT64_MIN;
uint64_t x921 = UINT64_MAX;
int8_t x953 = -1;
volatile uint8_t x956 = UINT8_MAX;
static volatile int32_t t175 = 355;
static volatile int64_t x959 = INT64_MIN;
int16_t x967 = -6887;
static uint32_t x971 = UINT32_MAX;
int64_t x979 = INT64_MIN;
int64_t x987 = INT64_MIN;
int8_t x989 = -1;
static int8_t x992 = -1;
static int32_t x1024 = INT32_MAX;
static uint64_t x1030 = 559389587437LLU;
uint32_t x1040 = 45U;
volatile uint8_t x1044 = 0U;
static int32_t x1048 = INT32_MIN;
int32_t t194 = 14;
uint32_t x1058 = 3934U;
int32_t t195 = 6550833;
int8_t x1063 = INT8_MIN;
volatile int32_t t196 = -154;
int16_t x1071 = INT16_MAX;
uint8_t x1075 = 1U;


void f0(void) {
    	volatile uint16_t x1 = UINT16_MAX;
	uint64_t x2 = 10897600287LLU;
	static uint32_t x3 = UINT32_MAX;
	int64_t x4 = INT64_MAX;
	int32_t t0 = -13;

    t0 = (((x1*x2)%x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x11 = 63U;
	static uint64_t x12 = 535249186LLU;

    t1 = (((x9*x10)%x11)==x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = INT16_MAX;
	static int32_t x14 = -1;
	int16_t x15 = -1;
	uint64_t x16 = 1LLU;
	volatile int32_t t2 = -341;

    t2 = (((x13*x14)%x15)==x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x17 = -1;
	static int64_t x18 = -87421511LL;
	volatile uint64_t x20 = 75137750LLU;
	volatile int32_t t3 = -1;

    t3 = (((x17*x18)%x19)==x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x21 = UINT8_MAX;
	int64_t x23 = INT64_MIN;
	static volatile int64_t x24 = -218156645361897LL;
	int32_t t4 = -1;

    t4 = (((x21*x22)%x23)==x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = 0;
	int32_t x28 = 12860900;
	volatile int32_t t5 = -917;

    t5 = (((x25*x26)%x27)==x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MAX;
	static int16_t x30 = INT16_MIN;
	uint32_t x31 = UINT32_MAX;
	int8_t x32 = 27;

    t6 = (((x29*x30)%x31)==x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MIN;
	volatile int16_t x34 = 2921;
	volatile uint32_t x35 = 109U;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t7 = 29205;

    t7 = (((x33*x34)%x35)==x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = 1278;
	uint64_t x43 = 2545951216830954LLU;
	int32_t x44 = 405891;
	volatile int32_t t8 = -464381;

    t8 = (((x41*x42)%x43)==x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x53 = 1842787U;
	volatile int64_t x54 = 1LL;
	int16_t x55 = 3587;
	volatile int16_t x56 = -3;
	volatile int32_t t9 = -157;

    t9 = (((x53*x54)%x55)==x56);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x58 = INT8_MAX;
	uint32_t x59 = UINT32_MAX;
	uint8_t x60 = UINT8_MAX;
	int32_t t10 = -614;

    t10 = (((x57*x58)%x59)==x60);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x61 = INT16_MAX;
	uint16_t x62 = 104U;
	int16_t x63 = INT16_MAX;
	int32_t x64 = INT32_MIN;
	volatile int32_t t11 = 18059881;

    t11 = (((x61*x62)%x63)==x64);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x69 = 7U;
	volatile int16_t x70 = INT16_MIN;
	int64_t x71 = -864066127502047798LL;
	static uint16_t x72 = 20U;
	volatile int32_t t12 = 0;

    t12 = (((x69*x70)%x71)==x72);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x73 = 48U;
	uint8_t x74 = UINT8_MAX;
	int16_t x75 = -2;
	static volatile int16_t x76 = -42;
	int32_t t13 = 175541;

    t13 = (((x73*x74)%x75)==x76);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x77 = -1LL;
	int8_t x78 = -7;
	int16_t x80 = 3447;
	int32_t t14 = 2184843;

    t14 = (((x77*x78)%x79)==x80);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x81 = INT16_MIN;
	uint32_t x83 = UINT32_MAX;
	static volatile int32_t t15 = -47907976;

    t15 = (((x81*x82)%x83)==x84);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x85 = -95268793;
	uint32_t x86 = UINT32_MAX;
	uint64_t x87 = 79LLU;
	uint64_t x88 = 0LLU;

    t16 = (((x85*x86)%x87)==x88);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x89 = 31763443U;
	static int16_t x90 = 4311;
	volatile uint64_t x91 = UINT64_MAX;
	int16_t x92 = INT16_MAX;
	int32_t t17 = -204688035;

    t17 = (((x89*x90)%x91)==x92);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x97 = -55916082LL;
	volatile uint64_t x98 = UINT64_MAX;
	uint64_t x99 = 900LLU;
	static volatile int32_t x100 = 144;
	static int32_t t18 = -16451757;

    t18 = (((x97*x98)%x99)==x100);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x101 = 14466U;
	static uint8_t x103 = 11U;

    t19 = (((x101*x102)%x103)==x104);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x105 = INT8_MIN;
	int32_t x107 = INT32_MIN;
	int16_t x108 = INT16_MIN;
	int32_t t20 = 24163184;

    t20 = (((x105*x106)%x107)==x108);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x110 = INT64_MIN;
	int64_t x111 = -62418LL;
	uint32_t x112 = UINT32_MAX;

    t21 = (((x109*x110)%x111)==x112);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x113 = INT16_MAX;
	int8_t x114 = -1;
	static uint16_t x115 = 945U;
	static volatile int32_t t22 = 61511163;

    t22 = (((x113*x114)%x115)==x116);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x117 = UINT64_MAX;
	int64_t x118 = -1LL;
	int16_t x119 = 39;
	int64_t x120 = INT64_MIN;
	int32_t t23 = -1;

    t23 = (((x117*x118)%x119)==x120);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x122 = 246LLU;
	int64_t x123 = INT64_MIN;
	int32_t x124 = INT32_MIN;
	int32_t t24 = -612042402;

    t24 = (((x121*x122)%x123)==x124);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x129 = 94U;
	volatile int32_t x131 = INT32_MAX;
	volatile int16_t x132 = INT16_MIN;
	int32_t t25 = -241488;

    t25 = (((x129*x130)%x131)==x132);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x133 = UINT64_MAX;
	uint32_t x135 = 1U;
	uint64_t x136 = 423957LLU;
	int32_t t26 = 11770;

    t26 = (((x133*x134)%x135)==x136);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x141 = -11013;
	static uint32_t x142 = 6U;
	volatile int16_t x143 = INT16_MIN;
	static uint16_t x144 = 531U;
	int32_t t27 = -135838;

    t27 = (((x141*x142)%x143)==x144);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x145 = 43;
	int8_t x146 = INT8_MAX;
	static uint64_t x147 = 1987132LLU;
	static uint8_t x148 = 7U;
	int32_t t28 = 114;

    t28 = (((x145*x146)%x147)==x148);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x161 = -18137;
	int16_t x162 = INT16_MIN;
	int64_t x163 = INT64_MIN;
	int32_t t29 = -2024889;

    t29 = (((x161*x162)%x163)==x164);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x169 = INT8_MIN;
	int32_t x170 = -1;
	uint8_t x171 = 18U;
	static volatile int32_t t30 = -22;

    t30 = (((x169*x170)%x171)==x172);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x177 = -1;
	volatile uint32_t x178 = 856135U;
	int8_t x179 = -1;
	volatile int32_t t31 = 448323457;

    t31 = (((x177*x178)%x179)==x180);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x182 = 8;
	int16_t x183 = -1;
	int16_t x184 = INT16_MIN;
	volatile int32_t t32 = 410;

    t32 = (((x181*x182)%x183)==x184);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x185 = -1LL;
	volatile int16_t x186 = -13;
	volatile uint64_t x187 = UINT64_MAX;
	static uint16_t x188 = 0U;
	int32_t t33 = -2;

    t33 = (((x185*x186)%x187)==x188);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x193 = INT16_MIN;
	uint64_t x194 = 1400394442961843LLU;
	int32_t x195 = 9;
	int8_t x196 = INT8_MAX;
	int32_t t34 = 19483;

    t34 = (((x193*x194)%x195)==x196);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x198 = -47;
	volatile int8_t x200 = -1;
	int32_t t35 = -84;

    t35 = (((x197*x198)%x199)==x200);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x201 = UINT8_MAX;
	static uint16_t x202 = 6187U;
	static uint8_t x203 = UINT8_MAX;
	int32_t t36 = -173865;

    t36 = (((x201*x202)%x203)==x204);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x205 = INT64_MIN;
	uint64_t x206 = 5192514717770LLU;
	uint8_t x207 = UINT8_MAX;
	int32_t x208 = INT32_MIN;

    t37 = (((x205*x206)%x207)==x208);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x211 = 107242997LLU;
	int32_t x212 = 357868267;
	static volatile int32_t t38 = -2756;

    t38 = (((x209*x210)%x211)==x212);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x213 = -1;
	volatile int64_t x215 = -1LL;
	volatile int16_t x216 = INT16_MAX;
	volatile int32_t t39 = 512207;

    t39 = (((x213*x214)%x215)==x216);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x225 = 1;
	static int64_t x226 = -1148642091LL;
	volatile int32_t t40 = 1502;

    t40 = (((x225*x226)%x227)==x228);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x229 = 7221348U;
	static uint32_t x230 = 8U;
	int8_t x231 = INT8_MIN;
	int32_t t41 = -110272591;

    t41 = (((x229*x230)%x231)==x232);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x233 = -1;
	static int64_t x234 = -1LL;
	static volatile int32_t t42 = 107040;

    t42 = (((x233*x234)%x235)==x236);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x238 = -325;
	volatile uint8_t x239 = UINT8_MAX;
	static uint8_t x240 = 1U;
	int32_t t43 = 2;

    t43 = (((x237*x238)%x239)==x240);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x247 = 12937433615LLU;
	int64_t x248 = -746714652LL;

    t44 = (((x245*x246)%x247)==x248);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x249 = -1;
	uint32_t x252 = 86472U;
	volatile int32_t t45 = 77;

    t45 = (((x249*x250)%x251)==x252);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x253 = 957900U;
	int64_t x254 = -1LL;
	int32_t x255 = INT32_MIN;
	int16_t x256 = -1;
	int32_t t46 = 1201738;

    t46 = (((x253*x254)%x255)==x256);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x257 = INT16_MIN;
	uint8_t x258 = 2U;
	volatile int16_t x259 = INT16_MIN;
	static volatile int32_t t47 = 272540;

    t47 = (((x257*x258)%x259)==x260);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x266 = -1;
	volatile int32_t x268 = -1;
	static volatile int32_t t48 = 32519;

    t48 = (((x265*x266)%x267)==x268);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x269 = -12;
	volatile int64_t x271 = INT64_MIN;
	int8_t x272 = -19;
	volatile int32_t t49 = -6;

    t49 = (((x269*x270)%x271)==x272);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x273 = -1470401LL;
	uint32_t x274 = UINT32_MAX;
	uint8_t x275 = UINT8_MAX;
	uint64_t x276 = 764129603321LLU;
	volatile int32_t t50 = 45128720;

    t50 = (((x273*x274)%x275)==x276);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x285 = -1LL;
	static uint16_t x287 = UINT16_MAX;
	volatile uint64_t x288 = UINT64_MAX;

    t51 = (((x285*x286)%x287)==x288);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x290 = 12614;
	int32_t x291 = 11999;
	int64_t x292 = INT64_MAX;
	volatile int32_t t52 = 658542;

    t52 = (((x289*x290)%x291)==x292);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x309 = INT8_MAX;
	int16_t x310 = 13;
	int16_t x311 = 1;
	int8_t x312 = INT8_MIN;

    t53 = (((x309*x310)%x311)==x312);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x313 = 1093U;
	int8_t x314 = -9;
	static volatile int32_t t54 = -211;

    t54 = (((x313*x314)%x315)==x316);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x321 = INT32_MIN;
	static uint64_t x322 = UINT64_MAX;
	int8_t x323 = -1;
	int8_t x324 = INT8_MIN;
	volatile int32_t t55 = -24103075;

    t55 = (((x321*x322)%x323)==x324);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x325 = 1;
	int64_t x326 = INT64_MIN;
	static volatile uint32_t x327 = 1417U;
	static uint16_t x328 = UINT16_MAX;
	int32_t t56 = -7047;

    t56 = (((x325*x326)%x327)==x328);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x329 = -21379371LL;
	int16_t x331 = INT16_MAX;
	int32_t x332 = -1;
	volatile int32_t t57 = 29;

    t57 = (((x329*x330)%x331)==x332);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x333 = INT8_MAX;
	uint16_t x334 = UINT16_MAX;
	static volatile int32_t x335 = INT32_MAX;
	volatile int32_t x336 = INT32_MIN;
	int32_t t58 = 96;

    t58 = (((x333*x334)%x335)==x336);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x337 = 291U;
	int16_t x338 = -3;
	static volatile int64_t x339 = INT64_MIN;
	int16_t x340 = -2;

    t59 = (((x337*x338)%x339)==x340);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x345 = 2167539062156189101LLU;
	int16_t x347 = INT16_MIN;
	int16_t x348 = INT16_MIN;
	volatile int32_t t60 = -33318551;

    t60 = (((x345*x346)%x347)==x348);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x350 = 10U;
	int64_t x351 = INT64_MAX;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t61 = 7769;

    t61 = (((x349*x350)%x351)==x352);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x355 = UINT64_MAX;
	int16_t x356 = 0;

    t62 = (((x353*x354)%x355)==x356);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x357 = -1;
	static int32_t x359 = INT32_MIN;
	int16_t x360 = INT16_MIN;
	volatile int32_t t63 = 14072;

    t63 = (((x357*x358)%x359)==x360);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x361 = 5219;
	volatile int16_t x362 = 62;
	int16_t x363 = INT16_MIN;
	uint32_t x364 = UINT32_MAX;
	int32_t t64 = 55;

    t64 = (((x361*x362)%x363)==x364);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x365 = UINT16_MAX;
	static uint64_t x366 = 10308889203281LLU;
	int32_t x368 = INT32_MAX;
	int32_t t65 = 27;

    t65 = (((x365*x366)%x367)==x368);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x369 = UINT64_MAX;
	static int64_t x370 = -1LL;
	volatile int32_t x371 = INT32_MAX;
	volatile int32_t x372 = INT32_MAX;
	int32_t t66 = -5;

    t66 = (((x369*x370)%x371)==x372);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x373 = INT16_MIN;
	static int16_t x374 = -1;
	volatile int64_t x376 = -45914LL;

    t67 = (((x373*x374)%x375)==x376);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x377 = UINT64_MAX;
	volatile uint32_t x378 = UINT32_MAX;
	uint8_t x379 = 1U;
	uint64_t x380 = 6462406684686LLU;
	volatile int32_t t68 = -4007166;

    t68 = (((x377*x378)%x379)==x380);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x381 = UINT32_MAX;
	int32_t x382 = INT32_MAX;
	static volatile int16_t x383 = INT16_MIN;
	int32_t x384 = INT32_MIN;
	int32_t t69 = 253694;

    t69 = (((x381*x382)%x383)==x384);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x385 = 18799U;
	int32_t x386 = INT32_MIN;
	int16_t x387 = -47;
	volatile int16_t x388 = -426;
	static volatile int32_t t70 = -28295;

    t70 = (((x385*x386)%x387)==x388);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x389 = -1;
	static int8_t x390 = INT8_MAX;
	static int16_t x391 = -1;
	int32_t t71 = -192497;

    t71 = (((x389*x390)%x391)==x392);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x393 = -1;
	int32_t x394 = -1;
	int32_t x395 = -3828951;
	uint16_t x396 = 236U;
	volatile int32_t t72 = -31767;

    t72 = (((x393*x394)%x395)==x396);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x397 = 1;
	static uint16_t x398 = 32096U;
	uint16_t x399 = 32440U;
	static int32_t t73 = 53069432;

    t73 = (((x397*x398)%x399)==x400);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x401 = 909LLU;
	volatile int64_t x402 = INT64_MIN;
	int16_t x403 = -1;
	volatile int32_t t74 = 0;

    t74 = (((x401*x402)%x403)==x404);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x405 = INT16_MAX;
	static int8_t x406 = -1;
	static int8_t x407 = 1;
	int8_t x408 = -1;
	volatile int32_t t75 = 259546;

    t75 = (((x405*x406)%x407)==x408);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x410 = -1;
	int32_t x411 = INT32_MIN;
	uint8_t x412 = UINT8_MAX;
	volatile int32_t t76 = -42839544;

    t76 = (((x409*x410)%x411)==x412);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x417 = INT32_MIN;
	volatile uint64_t x418 = UINT64_MAX;
	volatile int64_t x419 = -1LL;
	int64_t x420 = -1LL;

    t77 = (((x417*x418)%x419)==x420);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x426 = INT8_MIN;
	int64_t x427 = -2184278668211LL;
	int32_t x428 = 0;
	int32_t t78 = 47432782;

    t78 = (((x425*x426)%x427)==x428);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x429 = -442LL;
	volatile uint64_t x430 = 7519528440229889259LLU;
	int16_t x431 = INT16_MIN;
	volatile int32_t t79 = 4135577;

    t79 = (((x429*x430)%x431)==x432);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x433 = -1;
	volatile int64_t x434 = -1LL;
	int8_t x435 = INT8_MIN;
	static int16_t x436 = -6;

    t80 = (((x433*x434)%x435)==x436);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x438 = 47U;
	uint32_t x439 = 17U;
	int64_t x440 = INT64_MAX;
	static int32_t t81 = -1906;

    t81 = (((x437*x438)%x439)==x440);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x445 = UINT8_MAX;
	uint64_t x446 = UINT64_MAX;
	uint64_t x448 = 17114156800LLU;
	volatile int32_t t82 = 3483;

    t82 = (((x445*x446)%x447)==x448);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x449 = 7404482974487LLU;
	int64_t x450 = INT64_MAX;

    t83 = (((x449*x450)%x451)==x452);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x453 = 0;
	static volatile int32_t x454 = INT32_MIN;
	uint32_t x455 = UINT32_MAX;
	static volatile int32_t x456 = -1;
	int32_t t84 = -132875;

    t84 = (((x453*x454)%x455)==x456);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x457 = -1;
	static int32_t x459 = INT32_MAX;
	uint8_t x460 = 7U;
	int32_t t85 = 150985437;

    t85 = (((x457*x458)%x459)==x460);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x462 = 12245887LL;
	int32_t x463 = INT32_MIN;
	int32_t x464 = -1;
	int32_t t86 = -17942702;

    t86 = (((x461*x462)%x463)==x464);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x465 = -109584335882645LL;
	int16_t x466 = INT16_MAX;
	static volatile int32_t x467 = -1;
	static int64_t x468 = INT64_MIN;
	int32_t t87 = -35153;

    t87 = (((x465*x466)%x467)==x468);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x473 = 5332U;
	uint64_t x474 = 101361261LLU;
	static int32_t x475 = INT32_MIN;
	int16_t x476 = -1;
	int32_t t88 = -311576;

    t88 = (((x473*x474)%x475)==x476);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x486 = 5644U;
	uint8_t x487 = 69U;

    t89 = (((x485*x486)%x487)==x488);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x490 = 10;
	static uint32_t x491 = 95U;
	volatile int32_t t90 = 5651;

    t90 = (((x489*x490)%x491)==x492);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x493 = -610284983LL;
	int16_t x494 = INT16_MAX;
	int16_t x495 = -199;
	uint64_t x496 = 6793LLU;

    t91 = (((x493*x494)%x495)==x496);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x502 = UINT32_MAX;
	int8_t x504 = -1;
	volatile int32_t t92 = -1458;

    t92 = (((x501*x502)%x503)==x504);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x505 = 0LL;
	int64_t x506 = INT64_MIN;
	volatile uint8_t x507 = 56U;

    t93 = (((x505*x506)%x507)==x508);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x509 = -1;
	static int16_t x510 = INT16_MIN;
	volatile int64_t x512 = INT64_MIN;
	int32_t t94 = -686;

    t94 = (((x509*x510)%x511)==x512);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x513 = 1451LL;
	uint32_t x514 = 26570U;
	static volatile uint64_t x515 = 6103624631216LLU;
	int8_t x516 = INT8_MIN;
	int32_t t95 = -34340;

    t95 = (((x513*x514)%x515)==x516);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x517 = 6U;
	int16_t x518 = INT16_MAX;
	int8_t x519 = INT8_MIN;
	volatile int16_t x520 = INT16_MIN;
	int32_t t96 = -20165;

    t96 = (((x517*x518)%x519)==x520);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint16_t x529 = UINT16_MAX;
	int8_t x532 = -4;
	static volatile int32_t t97 = -31214;

    t97 = (((x529*x530)%x531)==x532);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x533 = 0;
	static int32_t x534 = -2922138;
	int32_t x535 = 1494980;
	static int8_t x536 = -2;
	int32_t t98 = 6033;

    t98 = (((x533*x534)%x535)==x536);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x537 = -8;
	volatile int8_t x538 = INT8_MIN;
	int16_t x539 = INT16_MIN;
	int8_t x540 = -1;

    t99 = (((x537*x538)%x539)==x540);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x541 = INT8_MAX;
	static uint32_t x542 = UINT32_MAX;
	volatile int64_t x543 = INT64_MIN;
	volatile int32_t t100 = 5;

    t100 = (((x541*x542)%x543)==x544);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x546 = INT32_MAX;
	int32_t x547 = INT32_MIN;
	static volatile int16_t x548 = -1;
	int32_t t101 = -3562306;

    t101 = (((x545*x546)%x547)==x548);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x549 = -1;
	int16_t x551 = INT16_MIN;
	volatile int32_t t102 = -1;

    t102 = (((x549*x550)%x551)==x552);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x554 = 6258LLU;
	int8_t x555 = INT8_MIN;
	int16_t x556 = -1;
	volatile int32_t t103 = -40346;

    t103 = (((x553*x554)%x555)==x556);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x561 = UINT8_MAX;
	uint64_t x562 = UINT64_MAX;
	int32_t x563 = -1;
	int16_t x564 = 1449;
	int32_t t104 = 33198819;

    t104 = (((x561*x562)%x563)==x564);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x565 = -1;
	int16_t x566 = 27;
	uint8_t x567 = 11U;
	int64_t x568 = -941337636LL;

    t105 = (((x565*x566)%x567)==x568);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x570 = INT16_MIN;
	int64_t x571 = -109593928100LL;
	static int32_t x572 = INT32_MIN;
	volatile int32_t t106 = -245;

    t106 = (((x569*x570)%x571)==x572);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x583 = 42U;
	volatile int16_t x584 = -1;
	int32_t t107 = 5420035;

    t107 = (((x581*x582)%x583)==x584);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x585 = 12211143559907324LLU;
	uint16_t x586 = UINT16_MAX;
	int64_t x587 = INT64_MAX;
	volatile int32_t x588 = INT32_MIN;
	static volatile int32_t t108 = -79;

    t108 = (((x585*x586)%x587)==x588);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x589 = 3627U;
	int16_t x590 = INT16_MIN;
	uint16_t x591 = 7473U;
	uint8_t x592 = UINT8_MAX;
	int32_t t109 = 11;

    t109 = (((x589*x590)%x591)==x592);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x593 = 14U;
	volatile int16_t x594 = INT16_MIN;
	int8_t x595 = -1;
	int32_t t110 = -5;

    t110 = (((x593*x594)%x595)==x596);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x598 = INT16_MIN;
	uint16_t x599 = UINT16_MAX;
	volatile int32_t t111 = -301132440;

    t111 = (((x597*x598)%x599)==x600);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x602 = -133197465198LL;
	int16_t x603 = INT16_MIN;
	uint32_t x604 = UINT32_MAX;
	int32_t t112 = -191;

    t112 = (((x601*x602)%x603)==x604);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x605 = INT8_MAX;
	uint8_t x606 = 12U;
	uint64_t x607 = 18LLU;
	int16_t x608 = 0;
	static volatile int32_t t113 = -1524;

    t113 = (((x605*x606)%x607)==x608);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x614 = 23485;
	static int16_t x615 = 675;
	static uint64_t x616 = 1809425232393390LLU;
	volatile int32_t t114 = 26;

    t114 = (((x613*x614)%x615)==x616);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x618 = -1;
	uint32_t x619 = UINT32_MAX;
	uint16_t x620 = UINT16_MAX;
	volatile int32_t t115 = 110419;

    t115 = (((x617*x618)%x619)==x620);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x621 = UINT16_MAX;
	int16_t x622 = 0;
	static int16_t x623 = INT16_MAX;
	uint64_t x624 = 325553218349LLU;
	int32_t t116 = -24873;

    t116 = (((x621*x622)%x623)==x624);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x625 = -1;
	uint8_t x626 = UINT8_MAX;
	int32_t x627 = INT32_MIN;
	volatile int32_t t117 = 699394;

    t117 = (((x625*x626)%x627)==x628);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint32_t x629 = UINT32_MAX;
	uint16_t x630 = UINT16_MAX;
	static uint16_t x631 = 225U;
	uint64_t x632 = 25353LLU;

    t118 = (((x629*x630)%x631)==x632);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x633 = INT32_MAX;
	uint32_t x634 = 20851U;
	static int64_t x636 = -1408569783718237LL;

    t119 = (((x633*x634)%x635)==x636);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x637 = 7U;
	int16_t x638 = INT16_MAX;
	volatile uint8_t x639 = 3U;
	int64_t x640 = INT64_MIN;
	volatile int32_t t120 = -177186030;

    t120 = (((x637*x638)%x639)==x640);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x641 = 3281;
	int8_t x642 = INT8_MAX;
	int16_t x643 = 5378;

    t121 = (((x641*x642)%x643)==x644);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x645 = UINT8_MAX;
	int32_t x647 = INT32_MIN;
	static int16_t x648 = INT16_MIN;
	volatile int32_t t122 = -233599;

    t122 = (((x645*x646)%x647)==x648);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x654 = -1LL;
	int64_t x655 = 4019188019877LL;
	int64_t x656 = INT64_MIN;
	static int32_t t123 = -1;

    t123 = (((x653*x654)%x655)==x656);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x657 = UINT16_MAX;
	int16_t x658 = INT16_MIN;
	uint16_t x660 = UINT16_MAX;

    t124 = (((x657*x658)%x659)==x660);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x662 = -1;
	static volatile int32_t x663 = INT32_MIN;
	int8_t x664 = INT8_MAX;

    t125 = (((x661*x662)%x663)==x664);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x677 = -1;
	int64_t x678 = -1LL;
	static volatile int16_t x679 = INT16_MIN;
	static int8_t x680 = -2;
	int32_t t126 = -19559296;

    t126 = (((x677*x678)%x679)==x680);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x685 = INT8_MAX;
	static volatile uint16_t x686 = UINT16_MAX;
	int32_t x687 = INT32_MAX;
	int32_t t127 = 30739119;

    t127 = (((x685*x686)%x687)==x688);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x689 = -8113;
	volatile uint8_t x690 = 0U;
	static int64_t x691 = INT64_MIN;
	volatile int32_t t128 = -11992271;

    t128 = (((x689*x690)%x691)==x692);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x693 = 2070;
	int32_t x694 = 130154;
	int16_t x695 = INT16_MIN;
	static int8_t x696 = INT8_MIN;
	int32_t t129 = 104294885;

    t129 = (((x693*x694)%x695)==x696);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x697 = UINT16_MAX;
	volatile uint8_t x698 = 2U;
	int64_t x700 = INT64_MIN;
	volatile int32_t t130 = 1;

    t130 = (((x697*x698)%x699)==x700);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x705 = UINT32_MAX;
	int16_t x706 = INT16_MIN;
	volatile int32_t x707 = -39957814;
	static int8_t x708 = INT8_MIN;
	static volatile int32_t t131 = -5;

    t131 = (((x705*x706)%x707)==x708);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x709 = 506082;
	uint16_t x711 = 39U;
	int32_t x712 = 35;
	int32_t t132 = -44923869;

    t132 = (((x709*x710)%x711)==x712);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x713 = 3892U;
	static int32_t x714 = 9801;
	static volatile uint16_t x715 = 9U;
	static uint16_t x716 = 2U;
	volatile int32_t t133 = -179384889;

    t133 = (((x713*x714)%x715)==x716);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x717 = UINT16_MAX;
	int32_t x718 = 13890;
	static int16_t x719 = 1832;
	int16_t x720 = INT16_MAX;
	static int32_t t134 = 63453;

    t134 = (((x717*x718)%x719)==x720);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x721 = 0;
	int64_t x722 = -1LL;
	int64_t x723 = INT64_MAX;
	volatile int8_t x724 = INT8_MIN;
	volatile int32_t t135 = -1005907714;

    t135 = (((x721*x722)%x723)==x724);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x725 = 105U;
	int8_t x726 = INT8_MAX;
	volatile int32_t t136 = 29;

    t136 = (((x725*x726)%x727)==x728);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x730 = 7649428767518524LLU;
	int64_t x731 = -260367992720960LL;
	volatile uint64_t x732 = UINT64_MAX;
	volatile int32_t t137 = 214451;

    t137 = (((x729*x730)%x731)==x732);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x733 = UINT16_MAX;
	volatile int16_t x734 = -1;
	static int32_t x735 = -1;
	uint8_t x736 = UINT8_MAX;
	int32_t t138 = -112317850;

    t138 = (((x733*x734)%x735)==x736);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x741 = 2348010LL;
	static int16_t x742 = 1;
	static int16_t x743 = INT16_MIN;
	int32_t t139 = 1042;

    t139 = (((x741*x742)%x743)==x744);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x745 = 217892U;
	volatile int32_t x748 = -1;
	volatile int32_t t140 = 260143474;

    t140 = (((x745*x746)%x747)==x748);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x753 = -3;
	static int8_t x755 = -1;
	int16_t x756 = INT16_MIN;
	int32_t t141 = 36439064;

    t141 = (((x753*x754)%x755)==x756);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x769 = INT8_MAX;
	uint64_t x770 = UINT64_MAX;
	static int64_t x771 = 3468719587163403876LL;
	int16_t x772 = 7079;
	int32_t t142 = 33652;

    t142 = (((x769*x770)%x771)==x772);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x773 = INT8_MIN;
	uint32_t x774 = UINT32_MAX;
	static volatile int32_t x776 = -86857;
	static int32_t t143 = -13968260;

    t143 = (((x773*x774)%x775)==x776);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x777 = -1;
	volatile uint16_t x778 = 21U;
	uint64_t x779 = UINT64_MAX;
	uint16_t x780 = 7200U;
	int32_t t144 = 1;

    t144 = (((x777*x778)%x779)==x780);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x785 = 5U;
	uint64_t x786 = UINT64_MAX;
	int8_t x787 = -1;
	int16_t x788 = INT16_MIN;
	static volatile int32_t t145 = 2;

    t145 = (((x785*x786)%x787)==x788);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x789 = INT8_MAX;
	static volatile uint8_t x790 = 2U;
	int16_t x791 = -14845;

    t146 = (((x789*x790)%x791)==x792);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x793 = 57525U;
	uint32_t x794 = 2076957003U;
	int64_t x795 = INT64_MAX;
	int32_t x796 = 21280;

    t147 = (((x793*x794)%x795)==x796);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x801 = INT64_MAX;
	int64_t x802 = -1LL;
	int32_t x803 = INT32_MIN;
	uint8_t x804 = UINT8_MAX;
	volatile int32_t t148 = -63724648;

    t148 = (((x801*x802)%x803)==x804);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x805 = 33;
	volatile int32_t x806 = -1;
	int8_t x807 = INT8_MIN;
	uint32_t x808 = 4163221U;
	int32_t t149 = -237;

    t149 = (((x805*x806)%x807)==x808);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x809 = INT8_MIN;
	int16_t x810 = INT16_MAX;
	static uint16_t x811 = UINT16_MAX;
	int8_t x812 = -19;
	volatile int32_t t150 = -1117417;

    t150 = (((x809*x810)%x811)==x812);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x813 = 3LL;
	static volatile int16_t x814 = INT16_MIN;
	int16_t x815 = -1;
	uint16_t x816 = 515U;
	int32_t t151 = -36856;

    t151 = (((x813*x814)%x815)==x816);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x817 = UINT64_MAX;
	volatile int64_t x818 = INT64_MIN;
	static int64_t x819 = INT64_MAX;
	uint8_t x820 = UINT8_MAX;
	volatile int32_t t152 = 27;

    t152 = (((x817*x818)%x819)==x820);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x821 = UINT64_MAX;
	int32_t x822 = INT32_MIN;
	volatile uint8_t x823 = UINT8_MAX;
	static uint64_t x824 = 1159669LLU;
	int32_t t153 = 3;

    t153 = (((x821*x822)%x823)==x824);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x825 = INT8_MIN;
	uint8_t x826 = UINT8_MAX;
	int8_t x827 = INT8_MAX;
	int16_t x828 = -1;
	static int32_t t154 = 30668061;

    t154 = (((x825*x826)%x827)==x828);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x829 = -46261;
	int8_t x830 = -1;
	static int32_t x831 = INT32_MIN;
	uint64_t x832 = 6554020150854213340LLU;
	static int32_t t155 = 3322441;

    t155 = (((x829*x830)%x831)==x832);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x833 = INT16_MIN;
	volatile uint16_t x834 = 0U;
	int64_t x836 = 369031268LL;
	int32_t t156 = 7;

    t156 = (((x833*x834)%x835)==x836);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x837 = INT64_MIN;
	uint64_t x838 = 18233935LLU;
	static uint8_t x839 = 16U;
	static uint64_t x840 = UINT64_MAX;
	int32_t t157 = 45932126;

    t157 = (((x837*x838)%x839)==x840);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x841 = -1240LL;
	volatile uint64_t x842 = 476722823907LLU;
	int8_t x843 = INT8_MIN;
	int32_t t158 = -485725946;

    t158 = (((x841*x842)%x843)==x844);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x845 = INT8_MIN;
	int16_t x847 = INT16_MIN;
	uint16_t x848 = 11841U;
	int32_t t159 = 192285;

    t159 = (((x845*x846)%x847)==x848);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x849 = UINT64_MAX;
	int32_t x850 = INT32_MAX;
	int8_t x851 = -1;
	volatile int32_t x852 = INT32_MAX;
	int32_t t160 = -403;

    t160 = (((x849*x850)%x851)==x852);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x853 = INT32_MIN;
	volatile uint32_t x854 = 1U;
	int8_t x855 = INT8_MAX;
	static volatile int32_t t161 = 3;

    t161 = (((x853*x854)%x855)==x856);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x858 = INT16_MAX;
	static int64_t x860 = -1LL;
	int32_t t162 = -897978;

    t162 = (((x857*x858)%x859)==x860);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x861 = 872380286503935368LLU;
	int16_t x862 = INT16_MIN;
	int8_t x863 = INT8_MIN;
	static int8_t x864 = -1;
	int32_t t163 = -1328676;

    t163 = (((x861*x862)%x863)==x864);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x866 = 1912546813870LLU;
	int8_t x867 = -1;
	volatile uint16_t x868 = 1U;

    t164 = (((x865*x866)%x867)==x868);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint32_t x869 = 48U;
	uint32_t x870 = 27977U;
	int16_t x871 = INT16_MAX;
	int32_t t165 = 26422;

    t165 = (((x869*x870)%x871)==x872);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x877 = 51U;
	uint64_t x878 = 664608LLU;
	int64_t x879 = INT64_MIN;
	int64_t x880 = INT64_MAX;
	volatile int32_t t166 = 60;

    t166 = (((x877*x878)%x879)==x880);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x881 = 1;
	uint32_t x882 = 16583U;
	uint64_t x883 = 55690498942LLU;
	int64_t x884 = INT64_MIN;

    t167 = (((x881*x882)%x883)==x884);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x885 = 1051287442LL;
	volatile uint64_t x886 = 6133288117LLU;
	int32_t x887 = INT32_MAX;
	int64_t x888 = 116LL;

    t168 = (((x885*x886)%x887)==x888);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x890 = -363564;
	int64_t x891 = -10151LL;

    t169 = (((x889*x890)%x891)==x892);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x897 = UINT16_MAX;
	static int16_t x899 = INT16_MIN;
	int32_t t170 = 58400233;

    t170 = (((x897*x898)%x899)==x900);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x901 = INT16_MIN;
	volatile int64_t x902 = -1LL;
	int8_t x904 = -14;
	int32_t t171 = -1183;

    t171 = (((x901*x902)%x903)==x904);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x918 = INT8_MIN;
	static int16_t x919 = -11315;
	volatile int32_t t172 = -49686;

    t172 = (((x917*x918)%x919)==x920);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x922 = INT16_MAX;
	int32_t x923 = -19931668;
	uint32_t x924 = 1256506U;
	volatile int32_t t173 = 1;

    t173 = (((x921*x922)%x923)==x924);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x949 = INT64_MAX;
	int64_t x950 = 0LL;
	uint64_t x951 = UINT64_MAX;
	volatile int32_t x952 = -28;
	volatile int32_t t174 = -60;

    t174 = (((x949*x950)%x951)==x952);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x954 = INT16_MIN;
	static int8_t x955 = INT8_MIN;

    t175 = (((x953*x954)%x955)==x956);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x957 = UINT64_MAX;
	int8_t x958 = INT8_MIN;
	int64_t x960 = INT64_MIN;
	volatile int32_t t176 = -7540;

    t176 = (((x957*x958)%x959)==x960);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x961 = 10U;
	uint32_t x962 = 1979U;
	volatile uint16_t x963 = UINT16_MAX;
	int8_t x964 = INT8_MIN;
	static int32_t t177 = 1;

    t177 = (((x961*x962)%x963)==x964);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x965 = 14677U;
	static int32_t x966 = 3;
	uint64_t x968 = 4537059LLU;
	volatile int32_t t178 = -39;

    t178 = (((x965*x966)%x967)==x968);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x969 = INT8_MAX;
	int8_t x970 = INT8_MIN;
	uint64_t x972 = 67866153LLU;
	int32_t t179 = -812323654;

    t179 = (((x969*x970)%x971)==x972);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint8_t x977 = 3U;
	volatile int32_t x978 = -1;
	int16_t x980 = INT16_MIN;
	static int32_t t180 = 37980;

    t180 = (((x977*x978)%x979)==x980);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x985 = INT8_MIN;
	int16_t x986 = INT16_MIN;
	int64_t x988 = -1LL;
	int32_t t181 = -68;

    t181 = (((x985*x986)%x987)==x988);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x990 = 46;
	int64_t x991 = -187LL;
	volatile int32_t t182 = 0;

    t182 = (((x989*x990)%x991)==x992);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x993 = INT32_MAX;
	int64_t x994 = -39793938LL;
	int16_t x995 = INT16_MIN;
	int32_t x996 = INT32_MIN;
	volatile int32_t t183 = 460859;

    t183 = (((x993*x994)%x995)==x996);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x997 = UINT64_MAX;
	volatile int32_t x998 = -412;
	static int32_t x999 = 8114188;
	volatile int8_t x1000 = -1;
	static int32_t t184 = 5;

    t184 = (((x997*x998)%x999)==x1000);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1005 = -1LL;
	volatile int32_t x1006 = INT32_MIN;
	static int8_t x1007 = -1;
	static int8_t x1008 = -1;
	int32_t t185 = 82588;

    t185 = (((x1005*x1006)%x1007)==x1008);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x1009 = INT16_MIN;
	int16_t x1010 = -1;
	int64_t x1011 = INT64_MAX;
	volatile uint16_t x1012 = UINT16_MAX;
	int32_t t186 = -6;

    t186 = (((x1009*x1010)%x1011)==x1012);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x1013 = 7U;
	uint16_t x1014 = 602U;
	int32_t x1015 = INT32_MAX;
	uint16_t x1016 = UINT16_MAX;
	volatile int32_t t187 = -3434;

    t187 = (((x1013*x1014)%x1015)==x1016);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1021 = UINT64_MAX;
	volatile uint64_t x1022 = UINT64_MAX;
	int16_t x1023 = -2;
	volatile int32_t t188 = 665669;

    t188 = (((x1021*x1022)%x1023)==x1024);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1029 = -1;
	volatile int8_t x1031 = INT8_MIN;
	volatile int16_t x1032 = -18;
	volatile int32_t t189 = 15;

    t189 = (((x1029*x1030)%x1031)==x1032);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1037 = -1;
	int8_t x1038 = -1;
	static int16_t x1039 = 6176;
	int32_t t190 = 175017;

    t190 = (((x1037*x1038)%x1039)==x1040);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x1041 = -1LL;
	int16_t x1042 = -1;
	int32_t x1043 = INT32_MAX;
	int32_t t191 = 3;

    t191 = (((x1041*x1042)%x1043)==x1044);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1045 = INT8_MIN;
	int8_t x1046 = -1;
	uint32_t x1047 = 519593U;
	int32_t t192 = -61735;

    t192 = (((x1045*x1046)%x1047)==x1048);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1049 = 32336196946392355LL;
	volatile uint16_t x1050 = 0U;
	int8_t x1051 = INT8_MAX;
	uint64_t x1052 = UINT64_MAX;
	volatile int32_t t193 = -6867377;

    t193 = (((x1049*x1050)%x1051)==x1052);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x1053 = INT16_MIN;
	int64_t x1054 = 69976LL;
	int32_t x1055 = INT32_MAX;
	volatile int16_t x1056 = 235;

    t194 = (((x1053*x1054)%x1055)==x1056);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1057 = INT16_MAX;
	int64_t x1059 = 32933378435057LL;
	uint8_t x1060 = 1U;

    t195 = (((x1057*x1058)%x1059)==x1060);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1061 = -881;
	static volatile uint16_t x1062 = UINT16_MAX;
	volatile uint64_t x1064 = 99332LLU;

    t196 = (((x1061*x1062)%x1063)==x1064);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1065 = -38;
	uint32_t x1066 = 212U;
	static int32_t x1067 = INT32_MIN;
	volatile uint16_t x1068 = 7509U;
	int32_t t197 = 53899;

    t197 = (((x1065*x1066)%x1067)==x1068);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1069 = 3;
	int8_t x1070 = 25;
	volatile int32_t x1072 = -601;
	int32_t t198 = 0;

    t198 = (((x1069*x1070)%x1071)==x1072);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1073 = UINT16_MAX;
	uint16_t x1074 = 23U;
	int32_t x1076 = INT32_MIN;
	volatile int32_t t199 = 5345;

    t199 = (((x1073*x1074)%x1075)==x1076);

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

