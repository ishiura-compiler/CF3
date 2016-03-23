
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

static int8_t x1 = INT8_MIN;
int16_t x2 = -7831;
int32_t x3 = -4628;
uint32_t x6 = 12U;
static int8_t x15 = INT8_MIN;
int16_t x24 = INT16_MIN;
int32_t x47 = -1113656;
uint8_t x48 = UINT8_MAX;
int32_t t9 = 921;
int8_t x71 = INT8_MIN;
int8_t x77 = INT8_MIN;
uint64_t x81 = UINT64_MAX;
int32_t x82 = INT32_MIN;
uint64_t x83 = 472724832585543LLU;
volatile int32_t t14 = 170428002;
volatile uint32_t x88 = UINT32_MAX;
int32_t t15 = -249462;
int64_t x89 = 90593640204LL;
int16_t x90 = -1;
int16_t x91 = 1;
int8_t x99 = 5;
static int32_t x125 = -1;
int16_t x129 = INT16_MIN;
int32_t x132 = -1;
uint8_t x138 = 0U;
static volatile int8_t x142 = -4;
int8_t x154 = -1;
static uint8_t x158 = 9U;
uint8_t x162 = 52U;
volatile int32_t t32 = -79934;
int16_t x198 = INT16_MAX;
int32_t x214 = 4;
int64_t x216 = -1LL;
static int8_t x224 = -1;
int64_t x225 = -1LL;
static int32_t t38 = -1410;
int8_t x231 = INT8_MIN;
int16_t x244 = -13383;
int64_t x247 = INT64_MIN;
volatile int32_t t43 = 0;
int16_t x262 = -3;
int32_t t48 = 1;
int32_t x281 = -1;
int32_t t49 = -240499;
int64_t x288 = -1655265058LL;
int32_t t50 = -79;
static uint8_t x299 = 5U;
int32_t t52 = -528;
uint32_t x313 = 125577035U;
int16_t x314 = -1;
static volatile uint8_t x316 = 3U;
int32_t t56 = 23;
int32_t x326 = -1306;
static volatile int32_t t57 = 21483;
static uint16_t x330 = 11U;
int32_t t58 = 1;
static int32_t t59 = 249615;
uint8_t x338 = UINT8_MAX;
int64_t x355 = INT64_MIN;
volatile int32_t t63 = 118;
uint32_t x357 = 1U;
volatile int32_t t64 = -256177;
int32_t x375 = INT32_MAX;
int16_t x377 = INT16_MIN;
int8_t x378 = -1;
uint32_t x379 = UINT32_MAX;
int8_t x380 = INT8_MIN;
static uint64_t x381 = 91383LLU;
int8_t x383 = -1;
uint16_t x397 = UINT16_MAX;
int32_t x407 = INT32_MAX;
int64_t x425 = -1LL;
volatile int16_t x426 = INT16_MAX;
uint64_t x429 = UINT64_MAX;
int32_t t75 = 7903905;
static volatile int64_t x467 = -11838472LL;
volatile uint64_t x482 = 139558343LLU;
volatile int64_t x484 = -1LL;
uint16_t x493 = 7168U;
int32_t x501 = -1;
uint8_t x503 = 16U;
volatile int32_t t85 = 524;
uint32_t x506 = 0U;
volatile uint64_t x521 = UINT64_MAX;
volatile int64_t x522 = -2053270LL;
int16_t x524 = INT16_MIN;
int64_t x532 = -54LL;
int8_t x555 = -27;
volatile int32_t t94 = -129876;
volatile uint32_t x557 = UINT32_MAX;
uint16_t x559 = 476U;
int16_t x560 = INT16_MIN;
int16_t x561 = 0;
static uint16_t x569 = UINT16_MAX;
uint64_t x570 = UINT64_MAX;
int32_t t98 = 17834199;
static volatile uint16_t x591 = UINT16_MAX;
volatile int8_t x599 = -1;
int64_t x600 = -1LL;
int16_t x601 = -9;
uint16_t x608 = UINT16_MAX;
uint64_t x615 = 9632422628680LLU;
int16_t x620 = INT16_MIN;
static uint16_t x636 = 46U;
uint8_t x637 = 0U;
int8_t x639 = 7;
volatile int32_t t110 = 270047867;
static uint64_t x657 = 565528058361338LLU;
int16_t x658 = -1;
int16_t x682 = INT16_MIN;
volatile int64_t x685 = INT64_MIN;
uint32_t x698 = 256722U;
int64_t x699 = INT64_MIN;
int32_t x700 = INT32_MIN;
volatile int32_t t116 = -14;
int16_t x709 = INT16_MAX;
static volatile uint8_t x710 = UINT8_MAX;
int64_t x713 = -1LL;
volatile int32_t x717 = -1;
static uint64_t x719 = 1051481182785LLU;
int32_t x721 = -1;
static int16_t x724 = INT16_MAX;
int32_t x726 = -1;
volatile int64_t x727 = -1LL;
volatile int16_t x729 = -1;
int32_t x741 = 37;
int16_t x744 = INT16_MIN;
static int64_t x745 = 1LL;
int32_t t127 = -2037334;
static int32_t t129 = -5014;
static int64_t x772 = INT64_MAX;
volatile int32_t t131 = 1;
static volatile int16_t x781 = INT16_MIN;
int16_t x782 = -1;
uint16_t x783 = UINT16_MAX;
volatile int32_t t133 = 1644053;
int16_t x809 = INT16_MAX;
uint32_t x810 = UINT32_MAX;
int32_t x811 = -98;
static uint64_t x812 = UINT64_MAX;
int32_t t139 = 43034;
volatile int64_t x813 = 5LL;
int64_t x815 = INT64_MIN;
int64_t x826 = INT64_MAX;
int64_t x847 = INT64_MIN;
uint64_t x849 = 510950LLU;
volatile int64_t x854 = -1LL;
uint32_t x860 = UINT32_MAX;
int32_t t146 = -552321439;
static int64_t x875 = 215335LL;
volatile int16_t x889 = -485;
int32_t x891 = -1;
int32_t t149 = 247680675;
uint32_t x899 = UINT32_MAX;
volatile int32_t t150 = 30491;
static uint32_t x914 = UINT32_MAX;
uint8_t x916 = 17U;
uint16_t x926 = 0U;
int16_t x928 = INT16_MIN;
uint32_t x946 = 29U;
uint8_t x961 = 7U;
int8_t x964 = INT8_MIN;
int64_t x965 = -743173078941LL;
int32_t x986 = INT32_MIN;
int32_t x987 = -1;
volatile int32_t t159 = -21833723;
uint8_t x999 = UINT8_MAX;
volatile int32_t t160 = -373;
uint64_t x1020 = UINT64_MAX;
int8_t x1025 = -6;
uint32_t x1027 = 103868U;
uint32_t x1036 = UINT32_MAX;
volatile int32_t t164 = -8992;
static int16_t x1042 = INT16_MIN;
int8_t x1043 = INT8_MAX;
int64_t x1044 = -1LL;
int8_t x1046 = -1;
volatile int64_t x1048 = 3218LL;
uint32_t x1055 = 26U;
int32_t t167 = 1999;
int32_t t169 = -5382795;
static int32_t t170 = -3;
int16_t x1088 = 5;
int8_t x1089 = INT8_MAX;
uint16_t x1090 = UINT16_MAX;
static int16_t x1091 = INT16_MIN;
int32_t t172 = 49;
int16_t x1102 = -1;
static int32_t t175 = 441669823;
int16_t x1118 = INT16_MIN;
int64_t x1131 = 2289356803057958LL;
uint8_t x1137 = UINT8_MAX;
static volatile int16_t x1138 = 1;
int8_t x1142 = 0;
int64_t x1144 = -86882682492930469LL;
uint8_t x1148 = 13U;
int16_t x1151 = 0;
uint8_t x1152 = UINT8_MAX;
uint8_t x1158 = UINT8_MAX;
volatile int8_t x1174 = INT8_MIN;
int32_t x1176 = INT32_MIN;
volatile int16_t x1179 = INT16_MAX;
static int8_t x1199 = INT8_MIN;
uint16_t x1201 = UINT16_MAX;
uint8_t x1208 = UINT8_MAX;
uint64_t x1209 = 4166998135730528637LLU;
static int8_t x1210 = INT8_MIN;
int16_t x1230 = -1;
int8_t x1232 = 1;
int32_t x1247 = 456563992;
uint16_t x1248 = 6U;
int32_t t198 = 127;
static int16_t x1267 = 29;


void f0(void) {
    	volatile int8_t x4 = INT8_MIN;
	int32_t t0 = -400701673;

    t0 = ((x1*x2)<=(x3-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = UINT64_MAX;
	int8_t x7 = INT8_MAX;
	uint64_t x8 = UINT64_MAX;
	volatile int32_t t1 = -1522443;

    t1 = ((x5*x6)<=(x7-x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x13 = UINT8_MAX;
	volatile int16_t x14 = INT16_MIN;
	volatile uint8_t x16 = 48U;
	int32_t t2 = 2454;

    t2 = ((x13*x14)<=(x15-x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x21 = 101844987U;
	uint64_t x22 = 1043998308077408LLU;
	int32_t x23 = -1;
	volatile int32_t t3 = -95742;

    t3 = ((x21*x22)<=(x23-x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x29 = INT8_MIN;
	static uint64_t x30 = 2971734210737LLU;
	uint16_t x31 = 23775U;
	int8_t x32 = INT8_MIN;
	volatile int32_t t4 = 396;

    t4 = ((x29*x30)<=(x31-x32));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x33 = 452;
	uint8_t x34 = 64U;
	uint16_t x35 = UINT16_MAX;
	volatile uint32_t x36 = UINT32_MAX;
	volatile int32_t t5 = 133302;

    t5 = ((x33*x34)<=(x35-x36));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x41 = INT64_MIN;
	static uint64_t x42 = UINT64_MAX;
	int8_t x43 = INT8_MIN;
	int16_t x44 = -1;
	int32_t t6 = -1059496;

    t6 = ((x41*x42)<=(x43-x44));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x45 = 230970589LLU;
	static int8_t x46 = INT8_MIN;
	volatile int32_t t7 = -359233;

    t7 = ((x45*x46)<=(x47-x48));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x53 = UINT64_MAX;
	int16_t x54 = INT16_MIN;
	uint16_t x55 = 481U;
	int32_t x56 = -1;
	volatile int32_t t8 = -3;

    t8 = ((x53*x54)<=(x55-x56));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x57 = UINT8_MAX;
	uint16_t x58 = 2U;
	static int64_t x59 = -11LL;
	int16_t x60 = INT16_MIN;

    t9 = ((x57*x58)<=(x59-x60));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x61 = INT64_MAX;
	uint64_t x62 = UINT64_MAX;
	static int16_t x63 = INT16_MIN;
	int8_t x64 = -1;
	volatile int32_t t10 = 85;

    t10 = ((x61*x62)<=(x63-x64));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x65 = INT64_MIN;
	static volatile uint64_t x66 = 153385LLU;
	uint32_t x67 = 283675U;
	volatile int64_t x68 = -94448871586LL;
	int32_t t11 = -272558465;

    t11 = ((x65*x66)<=(x67-x68));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x69 = 301089967729081630LL;
	int32_t x70 = -1;
	uint64_t x72 = UINT64_MAX;
	static int32_t t12 = 3;

    t12 = ((x69*x70)<=(x71-x72));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x78 = -4;
	volatile uint16_t x79 = UINT16_MAX;
	uint32_t x80 = UINT32_MAX;
	int32_t t13 = 12122;

    t13 = ((x77*x78)<=(x79-x80));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x84 = INT64_MIN;

    t14 = ((x81*x82)<=(x83-x84));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x85 = 416902;
	uint32_t x86 = 222915U;
	static uint32_t x87 = UINT32_MAX;

    t15 = ((x85*x86)<=(x87-x88));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x92 = UINT8_MAX;
	static volatile int32_t t16 = 2;

    t16 = ((x89*x90)<=(x91-x92));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x97 = INT16_MIN;
	uint16_t x98 = 10U;
	uint32_t x100 = UINT32_MAX;
	int32_t t17 = 237;

    t17 = ((x97*x98)<=(x99-x100));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x109 = INT8_MIN;
	uint64_t x110 = 26252023LLU;
	volatile int8_t x111 = INT8_MIN;
	static volatile uint16_t x112 = 1418U;
	volatile int32_t t18 = 1120798;

    t18 = ((x109*x110)<=(x111-x112));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x117 = 2U;
	uint16_t x118 = 10U;
	int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MIN;
	static int32_t t19 = 486;

    t19 = ((x117*x118)<=(x119-x120));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x126 = INT8_MAX;
	volatile int32_t x127 = -93542;
	volatile uint16_t x128 = UINT16_MAX;
	volatile int32_t t20 = 9502735;

    t20 = ((x125*x126)<=(x127-x128));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x130 = 0;
	uint32_t x131 = 2U;
	volatile int32_t t21 = -1256372;

    t21 = ((x129*x130)<=(x131-x132));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x137 = INT8_MIN;
	uint32_t x139 = 764702632U;
	int16_t x140 = INT16_MIN;
	int32_t t22 = 2353;

    t22 = ((x137*x138)<=(x139-x140));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x141 = 52U;
	int8_t x143 = -13;
	volatile int16_t x144 = 0;
	static int32_t t23 = -37135;

    t23 = ((x141*x142)<=(x143-x144));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x153 = INT32_MAX;
	volatile int16_t x155 = INT16_MIN;
	uint64_t x156 = 70LLU;
	volatile int32_t t24 = -456938035;

    t24 = ((x153*x154)<=(x155-x156));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x157 = 1396LL;
	uint8_t x159 = UINT8_MAX;
	uint16_t x160 = 1U;
	volatile int32_t t25 = 41479;

    t25 = ((x157*x158)<=(x159-x160));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x161 = INT8_MIN;
	static int8_t x163 = INT8_MAX;
	volatile int64_t x164 = INT64_MAX;
	volatile int32_t t26 = 116569018;

    t26 = ((x161*x162)<=(x163-x164));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x165 = INT32_MAX;
	uint32_t x166 = UINT32_MAX;
	int32_t x167 = INT32_MIN;
	int64_t x168 = 32988341642556LL;
	static volatile int32_t t27 = 4348208;

    t27 = ((x165*x166)<=(x167-x168));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x169 = UINT8_MAX;
	int16_t x170 = 1;
	volatile uint64_t x171 = 2LLU;
	static int8_t x172 = 10;
	volatile int32_t t28 = 9;

    t28 = ((x169*x170)<=(x171-x172));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x181 = 2U;
	int16_t x182 = 1893;
	int64_t x183 = -4088731952441558226LL;
	static uint8_t x184 = 18U;
	volatile int32_t t29 = -27358;

    t29 = ((x181*x182)<=(x183-x184));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint8_t x185 = UINT8_MAX;
	uint8_t x186 = 2U;
	volatile uint16_t x187 = 2U;
	int64_t x188 = INT64_MAX;
	volatile int32_t t30 = -497227421;

    t30 = ((x185*x186)<=(x187-x188));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x189 = INT8_MIN;
	uint32_t x190 = UINT32_MAX;
	int8_t x191 = -1;
	int32_t x192 = INT32_MIN;
	volatile int32_t t31 = -81;

    t31 = ((x189*x190)<=(x191-x192));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x193 = -1;
	uint16_t x194 = 184U;
	uint64_t x195 = UINT64_MAX;
	static int16_t x196 = -1;

    t32 = ((x193*x194)<=(x195-x196));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x197 = INT16_MIN;
	int32_t x199 = -1;
	int32_t x200 = INT32_MAX;
	int32_t t33 = 436925;

    t33 = ((x197*x198)<=(x199-x200));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x201 = INT32_MAX;
	int64_t x202 = -1LL;
	uint32_t x203 = UINT32_MAX;
	int32_t x204 = 1;
	static volatile int32_t t34 = 1;

    t34 = ((x201*x202)<=(x203-x204));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x209 = INT8_MIN;
	static int64_t x210 = -1LL;
	volatile uint64_t x211 = UINT64_MAX;
	volatile uint32_t x212 = 440U;
	int32_t t35 = 0;

    t35 = ((x209*x210)<=(x211-x212));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x213 = INT8_MIN;
	uint16_t x215 = UINT16_MAX;
	volatile int32_t t36 = 89;

    t36 = ((x213*x214)<=(x215-x216));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x221 = UINT16_MAX;
	uint64_t x222 = UINT64_MAX;
	int32_t x223 = -1;
	static int32_t t37 = 551642013;

    t37 = ((x221*x222)<=(x223-x224));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x226 = INT8_MAX;
	uint8_t x227 = 1U;
	static uint16_t x228 = UINT16_MAX;

    t38 = ((x225*x226)<=(x227-x228));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x229 = -1LL;
	uint64_t x230 = UINT64_MAX;
	static volatile int32_t x232 = 0;
	static volatile int32_t t39 = -20162;

    t39 = ((x229*x230)<=(x231-x232));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x233 = INT8_MIN;
	uint16_t x234 = 51U;
	int32_t x235 = INT32_MIN;
	int16_t x236 = -790;
	int32_t t40 = 939;

    t40 = ((x233*x234)<=(x235-x236));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x241 = 0;
	static int16_t x242 = INT16_MIN;
	uint32_t x243 = 11301U;
	volatile int32_t t41 = 25;

    t41 = ((x241*x242)<=(x243-x244));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x245 = -1;
	uint16_t x246 = 696U;
	int16_t x248 = -1544;
	int32_t t42 = 24110292;

    t42 = ((x245*x246)<=(x247-x248));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x249 = 336U;
	int16_t x250 = 1;
	int32_t x251 = 53243;
	int64_t x252 = 15LL;

    t43 = ((x249*x250)<=(x251-x252));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x253 = -1;
	int8_t x254 = INT8_MIN;
	int32_t x255 = -28;
	int64_t x256 = -1LL;
	static volatile int32_t t44 = -2356;

    t44 = ((x253*x254)<=(x255-x256));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x261 = -1;
	int8_t x263 = 3;
	int64_t x264 = -255679090LL;
	static volatile int32_t t45 = 8;

    t45 = ((x261*x262)<=(x263-x264));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x269 = 1U;
	static uint16_t x270 = UINT16_MAX;
	int8_t x271 = INT8_MAX;
	int64_t x272 = -773004LL;
	volatile int32_t t46 = 8366193;

    t46 = ((x269*x270)<=(x271-x272));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x273 = 278040003879815686LLU;
	static uint64_t x274 = UINT64_MAX;
	int64_t x275 = -1LL;
	static int16_t x276 = -1;
	int32_t t47 = -1;

    t47 = ((x273*x274)<=(x275-x276));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x277 = -3111;
	volatile int16_t x278 = INT16_MIN;
	uint64_t x279 = UINT64_MAX;
	volatile uint64_t x280 = UINT64_MAX;

    t48 = ((x277*x278)<=(x279-x280));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x282 = UINT64_MAX;
	int64_t x283 = -131993LL;
	uint64_t x284 = UINT64_MAX;

    t49 = ((x281*x282)<=(x283-x284));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x285 = INT32_MIN;
	static uint32_t x286 = UINT32_MAX;
	int8_t x287 = -59;

    t50 = ((x285*x286)<=(x287-x288));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x293 = UINT16_MAX;
	int32_t x294 = -1;
	volatile int32_t x295 = -1487;
	uint8_t x296 = UINT8_MAX;
	int32_t t51 = 0;

    t51 = ((x293*x294)<=(x295-x296));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x297 = -1;
	uint64_t x298 = UINT64_MAX;
	static uint16_t x300 = 802U;

    t52 = ((x297*x298)<=(x299-x300));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x301 = -1LL;
	volatile int64_t x302 = -1LL;
	static int8_t x303 = -1;
	static uint32_t x304 = 7454U;
	static int32_t t53 = -262;

    t53 = ((x301*x302)<=(x303-x304));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x309 = INT16_MIN;
	int16_t x310 = -1;
	int16_t x311 = INT16_MIN;
	volatile int64_t x312 = INT64_MIN;
	int32_t t54 = 173;

    t54 = ((x309*x310)<=(x311-x312));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x315 = -4786581;
	int32_t t55 = 66478714;

    t55 = ((x313*x314)<=(x315-x316));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x317 = UINT32_MAX;
	int16_t x318 = INT16_MAX;
	uint32_t x319 = 1059849U;
	uint16_t x320 = 10666U;

    t56 = ((x317*x318)<=(x319-x320));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x325 = UINT64_MAX;
	int8_t x327 = -5;
	int64_t x328 = INT64_MIN;

    t57 = ((x325*x326)<=(x327-x328));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x329 = INT8_MAX;
	int16_t x331 = INT16_MIN;
	int32_t x332 = INT32_MIN;

    t58 = ((x329*x330)<=(x331-x332));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x333 = 1166262U;
	volatile int64_t x334 = -1LL;
	int16_t x335 = INT16_MIN;
	uint8_t x336 = 1U;

    t59 = ((x333*x334)<=(x335-x336));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x337 = INT8_MAX;
	int32_t x339 = -42108;
	static volatile uint64_t x340 = 4267285432592586LLU;
	int32_t t60 = 559953112;

    t60 = ((x337*x338)<=(x339-x340));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x345 = INT8_MIN;
	uint16_t x346 = UINT16_MAX;
	int16_t x347 = -1;
	static volatile int64_t x348 = INT64_MIN;
	int32_t t61 = -256895;

    t61 = ((x345*x346)<=(x347-x348));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x349 = 187LL;
	int8_t x350 = -1;
	uint16_t x351 = 12960U;
	int16_t x352 = 15265;
	static int32_t t62 = 20763;

    t62 = ((x349*x350)<=(x351-x352));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x353 = UINT64_MAX;
	int32_t x354 = INT32_MIN;
	volatile int16_t x356 = -1;

    t63 = ((x353*x354)<=(x355-x356));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x358 = UINT16_MAX;
	uint32_t x359 = 6992U;
	int8_t x360 = -16;

    t64 = ((x357*x358)<=(x359-x360));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x373 = -1;
	volatile uint64_t x374 = UINT64_MAX;
	static int16_t x376 = 4657;
	volatile int32_t t65 = 7701;

    t65 = ((x373*x374)<=(x375-x376));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t t66 = 59677;

    t66 = ((x377*x378)<=(x379-x380));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x382 = INT64_MIN;
	volatile int8_t x384 = 1;
	int32_t t67 = 345;

    t67 = ((x381*x382)<=(x383-x384));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x398 = -1LL;
	uint16_t x399 = UINT16_MAX;
	uint8_t x400 = UINT8_MAX;
	int32_t t68 = -2;

    t68 = ((x397*x398)<=(x399-x400));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x401 = 463115183060LLU;
	uint32_t x402 = UINT32_MAX;
	int32_t x403 = -38;
	volatile int8_t x404 = -1;
	volatile int32_t t69 = -177;

    t69 = ((x401*x402)<=(x403-x404));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int16_t x405 = INT16_MIN;
	int8_t x406 = INT8_MIN;
	int64_t x408 = 171013468895LL;
	static int32_t t70 = -3416804;

    t70 = ((x405*x406)<=(x407-x408));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x409 = -1LL;
	volatile int16_t x410 = INT16_MIN;
	int8_t x411 = INT8_MIN;
	int16_t x412 = INT16_MAX;
	int32_t t71 = -44647150;

    t71 = ((x409*x410)<=(x411-x412));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x421 = 15961271U;
	int32_t x422 = INT32_MIN;
	volatile uint8_t x423 = UINT8_MAX;
	int64_t x424 = 0LL;
	static int32_t t72 = 118;

    t72 = ((x421*x422)<=(x423-x424));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x427 = 179LLU;
	int16_t x428 = INT16_MIN;
	static volatile int32_t t73 = 45;

    t73 = ((x425*x426)<=(x427-x428));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x430 = 6825U;
	volatile int16_t x431 = 21;
	static int32_t x432 = INT32_MAX;
	volatile int32_t t74 = 676341232;

    t74 = ((x429*x430)<=(x431-x432));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x433 = -107093433;
	uint32_t x434 = 6U;
	static int16_t x435 = INT16_MAX;
	static volatile int8_t x436 = INT8_MAX;

    t75 = ((x433*x434)<=(x435-x436));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x441 = UINT8_MAX;
	int32_t x442 = -52843;
	int16_t x443 = 61;
	static int32_t x444 = -1;
	volatile int32_t t76 = 73;

    t76 = ((x441*x442)<=(x443-x444));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x453 = UINT16_MAX;
	static int8_t x454 = INT8_MIN;
	static volatile uint16_t x455 = 17639U;
	uint8_t x456 = 22U;
	static volatile int32_t t77 = 104605808;

    t77 = ((x453*x454)<=(x455-x456));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x457 = 135871U;
	volatile int16_t x458 = INT16_MIN;
	static int32_t x459 = INT32_MIN;
	int32_t x460 = -1;
	volatile int32_t t78 = 894;

    t78 = ((x457*x458)<=(x459-x460));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x465 = INT8_MIN;
	volatile int64_t x466 = 0LL;
	volatile int32_t x468 = INT32_MAX;
	volatile int32_t t79 = -68;

    t79 = ((x465*x466)<=(x467-x468));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x469 = 40U;
	uint8_t x470 = UINT8_MAX;
	int16_t x471 = 143;
	int8_t x472 = -3;
	volatile int32_t t80 = 99;

    t80 = ((x469*x470)<=(x471-x472));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x473 = 0LL;
	int64_t x474 = 1564918LL;
	uint16_t x475 = 51U;
	uint16_t x476 = UINT16_MAX;
	int32_t t81 = -2746795;

    t81 = ((x473*x474)<=(x475-x476));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x481 = UINT64_MAX;
	uint32_t x483 = 5772U;
	volatile int32_t t82 = -155309;

    t82 = ((x481*x482)<=(x483-x484));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x494 = -1;
	uint32_t x495 = 593767U;
	int8_t x496 = INT8_MIN;
	int32_t t83 = 14180;

    t83 = ((x493*x494)<=(x495-x496));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x497 = 388085U;
	volatile uint8_t x498 = 29U;
	int16_t x499 = INT16_MIN;
	uint16_t x500 = UINT16_MAX;
	int32_t t84 = 57647;

    t84 = ((x497*x498)<=(x499-x500));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x502 = -1LL;
	volatile int64_t x504 = -1LL;

    t85 = ((x501*x502)<=(x503-x504));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x505 = 7790U;
	int16_t x507 = 42;
	uint64_t x508 = 6205787471839LLU;
	volatile int32_t t86 = -795617;

    t86 = ((x505*x506)<=(x507-x508));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x509 = -1LL;
	volatile uint8_t x510 = 1U;
	volatile uint16_t x511 = 54U;
	volatile int64_t x512 = 3176LL;
	int32_t t87 = -15;

    t87 = ((x509*x510)<=(x511-x512));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x517 = 287434907LLU;
	static int16_t x518 = INT16_MIN;
	static volatile int32_t x519 = INT32_MAX;
	uint8_t x520 = 15U;
	volatile int32_t t88 = 3;

    t88 = ((x517*x518)<=(x519-x520));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x523 = 118;
	int32_t t89 = 47109;

    t89 = ((x521*x522)<=(x523-x524));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x525 = 22;
	int8_t x526 = -1;
	int16_t x527 = INT16_MIN;
	volatile int32_t x528 = INT32_MIN;
	volatile int32_t t90 = 94582;

    t90 = ((x525*x526)<=(x527-x528));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x529 = 29334U;
	static int8_t x530 = INT8_MIN;
	int16_t x531 = -378;
	volatile int32_t t91 = 1898;

    t91 = ((x529*x530)<=(x531-x532));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x533 = INT16_MIN;
	int64_t x534 = -2202343475467LL;
	static volatile uint8_t x535 = 116U;
	uint64_t x536 = UINT64_MAX;
	static int32_t t92 = 196;

    t92 = ((x533*x534)<=(x535-x536));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x537 = 26LLU;
	int8_t x538 = INT8_MAX;
	static int8_t x539 = INT8_MIN;
	uint8_t x540 = 0U;
	volatile int32_t t93 = -7;

    t93 = ((x537*x538)<=(x539-x540));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x553 = 6U;
	volatile int32_t x554 = INT32_MIN;
	int16_t x556 = INT16_MIN;

    t94 = ((x553*x554)<=(x555-x556));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x558 = INT8_MIN;
	volatile int32_t t95 = -14037477;

    t95 = ((x557*x558)<=(x559-x560));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x562 = 1841786435047845LLU;
	static int8_t x563 = 1;
	volatile int8_t x564 = INT8_MIN;
	volatile int32_t t96 = -286392325;

    t96 = ((x561*x562)<=(x563-x564));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x565 = 61U;
	int32_t x566 = 974906;
	int64_t x567 = INT64_MIN;
	static int8_t x568 = -1;
	volatile int32_t t97 = -6493547;

    t97 = ((x565*x566)<=(x567-x568));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x571 = 1;
	volatile int8_t x572 = 1;

    t98 = ((x569*x570)<=(x571-x572));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x581 = INT64_MIN;
	uint16_t x582 = 0U;
	int32_t x583 = INT32_MIN;
	int32_t x584 = INT32_MIN;
	int32_t t99 = 104073;

    t99 = ((x581*x582)<=(x583-x584));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x585 = -1;
	int32_t x586 = -1;
	uint8_t x587 = 49U;
	int64_t x588 = 515528921686068887LL;
	static volatile int32_t t100 = 2142122;

    t100 = ((x585*x586)<=(x587-x588));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x589 = UINT32_MAX;
	int64_t x590 = -1LL;
	static int16_t x592 = INT16_MIN;
	static volatile int32_t t101 = 25;

    t101 = ((x589*x590)<=(x591-x592));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint64_t x593 = 1199LLU;
	int16_t x594 = INT16_MIN;
	volatile int64_t x595 = -1LL;
	int32_t x596 = -1;
	int32_t t102 = -52215335;

    t102 = ((x593*x594)<=(x595-x596));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x597 = 5286LLU;
	volatile int32_t x598 = -1;
	volatile int32_t t103 = 1478569;

    t103 = ((x597*x598)<=(x599-x600));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x602 = 1270;
	static uint8_t x603 = 86U;
	uint16_t x604 = UINT16_MAX;
	volatile int32_t t104 = -670818583;

    t104 = ((x601*x602)<=(x603-x604));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x605 = -1;
	int16_t x606 = -13946;
	int16_t x607 = -26;
	volatile int32_t t105 = 13;

    t105 = ((x605*x606)<=(x607-x608));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x613 = 0U;
	uint64_t x614 = 913081162768550LLU;
	static uint16_t x616 = 6459U;
	volatile int32_t t106 = 502691;

    t106 = ((x613*x614)<=(x615-x616));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x617 = 0;
	uint16_t x618 = 25U;
	int64_t x619 = INT64_MIN;
	int32_t t107 = -141;

    t107 = ((x617*x618)<=(x619-x620));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x625 = 0;
	int64_t x626 = INT64_MAX;
	int64_t x627 = -6851718420847LL;
	int16_t x628 = -5313;
	int32_t t108 = -3;

    t108 = ((x625*x626)<=(x627-x628));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x633 = 0U;
	static volatile int32_t x634 = -426385;
	static int8_t x635 = -1;
	int32_t t109 = -57;

    t109 = ((x633*x634)<=(x635-x636));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x638 = -1;
	static int8_t x640 = 1;

    t110 = ((x637*x638)<=(x639-x640));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x659 = -1;
	volatile uint16_t x660 = UINT16_MAX;
	int32_t t111 = -598225090;

    t111 = ((x657*x658)<=(x659-x660));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x665 = -1;
	uint32_t x666 = 42806U;
	volatile int8_t x667 = -1;
	uint16_t x668 = 1U;
	int32_t t112 = 29802154;

    t112 = ((x665*x666)<=(x667-x668));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x681 = -214;
	int64_t x683 = 17109LL;
	int8_t x684 = -1;
	static int32_t t113 = 13;

    t113 = ((x681*x682)<=(x683-x684));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x686 = UINT64_MAX;
	volatile int32_t x687 = -971;
	uint32_t x688 = 5U;
	volatile int32_t t114 = -533666353;

    t114 = ((x685*x686)<=(x687-x688));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x693 = UINT8_MAX;
	int8_t x694 = 30;
	uint16_t x695 = UINT16_MAX;
	int64_t x696 = 34191873891509LL;
	int32_t t115 = -30;

    t115 = ((x693*x694)<=(x695-x696));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x697 = -1;

    t116 = ((x697*x698)<=(x699-x700));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x705 = -1;
	uint8_t x706 = UINT8_MAX;
	uint8_t x707 = UINT8_MAX;
	static uint8_t x708 = 92U;
	volatile int32_t t117 = 64323;

    t117 = ((x705*x706)<=(x707-x708));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x711 = 1;
	int32_t x712 = 325;
	static volatile int32_t t118 = 52069202;

    t118 = ((x709*x710)<=(x711-x712));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x714 = UINT64_MAX;
	static volatile uint8_t x715 = UINT8_MAX;
	int8_t x716 = -1;
	volatile int32_t t119 = 29690;

    t119 = ((x713*x714)<=(x715-x716));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x718 = INT16_MAX;
	int32_t x720 = 22;
	int32_t t120 = -4;

    t120 = ((x717*x718)<=(x719-x720));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x722 = INT64_MAX;
	int8_t x723 = INT8_MIN;
	static int32_t t121 = 88553402;

    t121 = ((x721*x722)<=(x723-x724));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x725 = 9;
	int8_t x728 = INT8_MIN;
	int32_t t122 = 26;

    t122 = ((x725*x726)<=(x727-x728));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x730 = 0;
	int16_t x731 = INT16_MAX;
	static uint8_t x732 = 110U;
	volatile int32_t t123 = -290;

    t123 = ((x729*x730)<=(x731-x732));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x733 = 1U;
	int32_t x734 = 29403;
	volatile uint16_t x735 = UINT16_MAX;
	volatile int8_t x736 = -1;
	int32_t t124 = 1212;

    t124 = ((x733*x734)<=(x735-x736));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x737 = 11469878U;
	uint64_t x738 = UINT64_MAX;
	int16_t x739 = -1;
	uint64_t x740 = 105220689911LLU;
	volatile int32_t t125 = -28;

    t125 = ((x737*x738)<=(x739-x740));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x742 = 296;
	static int16_t x743 = INT16_MAX;
	int32_t t126 = -3683;

    t126 = ((x741*x742)<=(x743-x744));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x746 = 43956796031LLU;
	int64_t x747 = -1676825684566252226LL;
	static uint8_t x748 = 10U;

    t127 = ((x745*x746)<=(x747-x748));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x757 = UINT8_MAX;
	int16_t x758 = 1;
	static uint32_t x759 = 56200193U;
	volatile uint16_t x760 = 1U;
	int32_t t128 = 0;

    t128 = ((x757*x758)<=(x759-x760));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x761 = -1;
	static int8_t x762 = -50;
	uint64_t x763 = UINT64_MAX;
	int16_t x764 = -1;

    t129 = ((x761*x762)<=(x763-x764));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x769 = -1;
	static uint64_t x770 = 414534885244440LLU;
	static uint8_t x771 = 0U;
	static volatile int32_t t130 = -1089384;

    t130 = ((x769*x770)<=(x771-x772));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x773 = INT8_MIN;
	int32_t x774 = -1;
	static int8_t x775 = INT8_MIN;
	volatile uint8_t x776 = 81U;

    t131 = ((x773*x774)<=(x775-x776));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x777 = -62;
	int16_t x778 = 0;
	volatile int64_t x779 = -7914596LL;
	volatile int32_t x780 = 752535848;
	int32_t t132 = -14104388;

    t132 = ((x777*x778)<=(x779-x780));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x784 = UINT8_MAX;

    t133 = ((x781*x782)<=(x783-x784));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x785 = INT64_MAX;
	static volatile int8_t x786 = -1;
	uint32_t x787 = 86U;
	int64_t x788 = INT64_MAX;
	int32_t t134 = 11003;

    t134 = ((x785*x786)<=(x787-x788));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x789 = 186234085283LLU;
	uint32_t x790 = 2U;
	uint8_t x791 = 0U;
	uint32_t x792 = 102758234U;
	volatile int32_t t135 = 441;

    t135 = ((x789*x790)<=(x791-x792));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint32_t x793 = 42U;
	uint16_t x794 = UINT16_MAX;
	int8_t x795 = INT8_MAX;
	static int16_t x796 = INT16_MIN;
	static volatile int32_t t136 = -45186595;

    t136 = ((x793*x794)<=(x795-x796));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x797 = -2729;
	int64_t x798 = -18439233862339LL;
	static volatile int16_t x799 = INT16_MIN;
	int16_t x800 = 0;
	int32_t t137 = -3;

    t137 = ((x797*x798)<=(x799-x800));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x801 = INT8_MIN;
	static uint8_t x802 = 7U;
	int16_t x803 = -1;
	int32_t x804 = INT32_MIN;
	int32_t t138 = -817774;

    t138 = ((x801*x802)<=(x803-x804));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    

    t139 = ((x809*x810)<=(x811-x812));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x814 = -1;
	volatile int16_t x816 = -1;
	volatile int32_t t140 = 2737361;

    t140 = ((x813*x814)<=(x815-x816));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x825 = -1;
	static int32_t x827 = 167468993;
	int16_t x828 = INT16_MIN;
	int32_t t141 = 98824918;

    t141 = ((x825*x826)<=(x827-x828));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x845 = 23809012LLU;
	int64_t x846 = INT64_MAX;
	int64_t x848 = -51054757243665447LL;
	volatile int32_t t142 = 452;

    t142 = ((x845*x846)<=(x847-x848));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x850 = INT64_MAX;
	volatile int16_t x851 = INT16_MAX;
	volatile uint64_t x852 = 12128216239328LLU;
	int32_t t143 = 429707;

    t143 = ((x849*x850)<=(x851-x852));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x853 = INT32_MIN;
	int16_t x855 = 633;
	uint32_t x856 = 4960746U;
	volatile int32_t t144 = -142176;

    t144 = ((x853*x854)<=(x855-x856));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x857 = -1;
	int8_t x858 = 3;
	uint16_t x859 = UINT16_MAX;
	int32_t t145 = -1;

    t145 = ((x857*x858)<=(x859-x860));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x869 = 970964982908LLU;
	int32_t x870 = 13989;
	int8_t x871 = -1;
	volatile int32_t x872 = -1;

    t146 = ((x869*x870)<=(x871-x872));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x873 = INT8_MIN;
	volatile int8_t x874 = -1;
	static volatile int16_t x876 = -1;
	int32_t t147 = 722;

    t147 = ((x873*x874)<=(x875-x876));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x881 = 1;
	int16_t x882 = INT16_MAX;
	static uint8_t x883 = 0U;
	volatile int32_t x884 = -1;
	int32_t t148 = 1594840;

    t148 = ((x881*x882)<=(x883-x884));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x890 = UINT8_MAX;
	volatile int16_t x892 = INT16_MIN;

    t149 = ((x889*x890)<=(x891-x892));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x897 = 36455LLU;
	int64_t x898 = -1LL;
	int16_t x900 = -1;

    t150 = ((x897*x898)<=(x899-x900));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x901 = 485124115;
	int16_t x902 = 1;
	volatile int8_t x903 = INT8_MIN;
	static uint8_t x904 = UINT8_MAX;
	volatile int32_t t151 = -503678308;

    t151 = ((x901*x902)<=(x903-x904));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x905 = -36;
	uint64_t x906 = 86513543406LLU;
	static int8_t x907 = INT8_MAX;
	static int8_t x908 = INT8_MIN;
	int32_t t152 = 15307;

    t152 = ((x905*x906)<=(x907-x908));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x913 = 19U;
	static int64_t x915 = 11417439528LL;
	int32_t t153 = 221765;

    t153 = ((x913*x914)<=(x915-x916));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x925 = 39;
	static int8_t x927 = -19;
	volatile int32_t t154 = 14626105;

    t154 = ((x925*x926)<=(x927-x928));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x933 = -1030;
	static uint16_t x934 = UINT16_MAX;
	uint32_t x935 = UINT32_MAX;
	volatile int16_t x936 = INT16_MIN;
	int32_t t155 = 75084694;

    t155 = ((x933*x934)<=(x935-x936));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x945 = -1;
	static volatile uint8_t x947 = 80U;
	int64_t x948 = INT64_MAX;
	volatile int32_t t156 = -455216344;

    t156 = ((x945*x946)<=(x947-x948));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x962 = -1;
	uint32_t x963 = 2143856526U;
	int32_t t157 = -208062;

    t157 = ((x961*x962)<=(x963-x964));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x966 = 635;
	static uint8_t x967 = 9U;
	int16_t x968 = 0;
	static volatile int32_t t158 = 5528133;

    t158 = ((x965*x966)<=(x967-x968));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x985 = 29925552287718LLU;
	volatile int64_t x988 = -1LL;

    t159 = ((x985*x986)<=(x987-x988));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x997 = -12;
	int16_t x998 = INT16_MAX;
	volatile uint8_t x1000 = 24U;

    t160 = ((x997*x998)<=(x999-x1000));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1017 = -1;
	int8_t x1018 = -1;
	volatile uint16_t x1019 = 350U;
	volatile int32_t t161 = 11;

    t161 = ((x1017*x1018)<=(x1019-x1020));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x1026 = INT16_MIN;
	uint16_t x1028 = UINT16_MAX;
	int32_t t162 = 276196487;

    t162 = ((x1025*x1026)<=(x1027-x1028));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x1029 = 2U;
	volatile int32_t x1030 = -1;
	static int64_t x1031 = INT64_MAX;
	volatile uint16_t x1032 = 640U;
	int32_t t163 = 3851;

    t163 = ((x1029*x1030)<=(x1031-x1032));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x1033 = INT64_MIN;
	static uint64_t x1034 = 16047289259LLU;
	uint8_t x1035 = 13U;

    t164 = ((x1033*x1034)<=(x1035-x1036));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1041 = INT8_MIN;
	int32_t t165 = -1;

    t165 = ((x1041*x1042)<=(x1043-x1044));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x1045 = UINT8_MAX;
	int64_t x1047 = INT64_MAX;
	volatile int32_t t166 = -1;

    t166 = ((x1045*x1046)<=(x1047-x1048));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x1053 = 63U;
	uint8_t x1054 = UINT8_MAX;
	uint64_t x1056 = 338492055052LLU;

    t167 = ((x1053*x1054)<=(x1055-x1056));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x1061 = INT16_MAX;
	int16_t x1062 = INT16_MIN;
	int64_t x1063 = INT64_MAX;
	uint64_t x1064 = UINT64_MAX;
	volatile int32_t t168 = -989874853;

    t168 = ((x1061*x1062)<=(x1063-x1064));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1077 = 49U;
	uint8_t x1078 = 113U;
	static volatile int32_t x1079 = -4656350;
	uint64_t x1080 = 16049LLU;

    t169 = ((x1077*x1078)<=(x1079-x1080));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x1081 = 4;
	uint64_t x1082 = 1091312919025130LLU;
	int16_t x1083 = -1762;
	uint8_t x1084 = UINT8_MAX;

    t170 = ((x1081*x1082)<=(x1083-x1084));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1085 = -1LL;
	int8_t x1086 = INT8_MIN;
	int16_t x1087 = INT16_MAX;
	static volatile int32_t t171 = -5283;

    t171 = ((x1085*x1086)<=(x1087-x1088));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1092 = INT8_MAX;

    t172 = ((x1089*x1090)<=(x1091-x1092));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x1097 = 157U;
	int64_t x1098 = -1926824808652986LL;
	int16_t x1099 = 112;
	uint8_t x1100 = UINT8_MAX;
	int32_t t173 = -129208;

    t173 = ((x1097*x1098)<=(x1099-x1100));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1101 = 1;
	int64_t x1103 = INT64_MIN;
	static int64_t x1104 = -1LL;
	static int32_t t174 = -27254921;

    t174 = ((x1101*x1102)<=(x1103-x1104));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x1105 = UINT8_MAX;
	int8_t x1106 = 7;
	int16_t x1107 = -1;
	int32_t x1108 = INT32_MAX;

    t175 = ((x1105*x1106)<=(x1107-x1108));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x1117 = 247169430U;
	uint32_t x1119 = UINT32_MAX;
	volatile int8_t x1120 = 1;
	int32_t t176 = -50303;

    t176 = ((x1117*x1118)<=(x1119-x1120));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1121 = 2U;
	volatile uint8_t x1122 = UINT8_MAX;
	int64_t x1123 = INT64_MIN;
	int8_t x1124 = -1;
	static int32_t t177 = -49;

    t177 = ((x1121*x1122)<=(x1123-x1124));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1129 = 24813493493099LLU;
	static int16_t x1130 = 12;
	static uint64_t x1132 = 3LLU;
	static int32_t t178 = -899772816;

    t178 = ((x1129*x1130)<=(x1131-x1132));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1139 = UINT32_MAX;
	volatile uint32_t x1140 = 42551U;
	int32_t t179 = -108967956;

    t179 = ((x1137*x1138)<=(x1139-x1140));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1141 = INT8_MIN;
	volatile uint16_t x1143 = 14U;
	int32_t t180 = -402466799;

    t180 = ((x1141*x1142)<=(x1143-x1144));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1145 = INT16_MAX;
	uint64_t x1146 = UINT64_MAX;
	int32_t x1147 = INT32_MAX;
	volatile int32_t t181 = -418;

    t181 = ((x1145*x1146)<=(x1147-x1148));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x1149 = 0U;
	int8_t x1150 = -1;
	volatile int32_t t182 = 476;

    t182 = ((x1149*x1150)<=(x1151-x1152));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1157 = -1LL;
	uint16_t x1159 = 3075U;
	static int16_t x1160 = 1;
	int32_t t183 = 178349097;

    t183 = ((x1157*x1158)<=(x1159-x1160));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x1161 = INT8_MIN;
	int64_t x1162 = -1LL;
	int32_t x1163 = INT32_MAX;
	uint64_t x1164 = UINT64_MAX;
	static int32_t t184 = -209790906;

    t184 = ((x1161*x1162)<=(x1163-x1164));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1169 = 180U;
	uint8_t x1170 = UINT8_MAX;
	static int32_t x1171 = INT32_MAX;
	volatile int64_t x1172 = INT64_MAX;
	volatile int32_t t185 = 225466;

    t185 = ((x1169*x1170)<=(x1171-x1172));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1173 = -1;
	uint64_t x1175 = UINT64_MAX;
	static volatile int32_t t186 = 0;

    t186 = ((x1173*x1174)<=(x1175-x1176));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x1177 = INT32_MIN;
	uint32_t x1178 = 430124118U;
	int16_t x1180 = INT16_MAX;
	volatile int32_t t187 = -925;

    t187 = ((x1177*x1178)<=(x1179-x1180));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1181 = -971;
	uint8_t x1182 = 31U;
	int64_t x1183 = -1LL;
	int16_t x1184 = INT16_MIN;
	int32_t t188 = -6809;

    t188 = ((x1181*x1182)<=(x1183-x1184));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1197 = 594174542;
	int8_t x1198 = 1;
	int16_t x1200 = INT16_MIN;
	int32_t t189 = 9;

    t189 = ((x1197*x1198)<=(x1199-x1200));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1202 = UINT32_MAX;
	volatile uint64_t x1203 = 3810LLU;
	int64_t x1204 = INT64_MIN;
	int32_t t190 = 63760507;

    t190 = ((x1201*x1202)<=(x1203-x1204));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1205 = 66842787911LL;
	static uint16_t x1206 = UINT16_MAX;
	static int8_t x1207 = -1;
	static int32_t t191 = -23366;

    t191 = ((x1205*x1206)<=(x1207-x1208));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1211 = INT8_MAX;
	uint8_t x1212 = 2U;
	volatile int32_t t192 = -2154836;

    t192 = ((x1209*x1210)<=(x1211-x1212));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1213 = -1LL;
	volatile int8_t x1214 = INT8_MIN;
	int64_t x1215 = INT64_MIN;
	static int16_t x1216 = INT16_MIN;
	int32_t t193 = 25;

    t193 = ((x1213*x1214)<=(x1215-x1216));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1221 = 62;
	int64_t x1222 = -1LL;
	uint32_t x1223 = UINT32_MAX;
	uint32_t x1224 = UINT32_MAX;
	volatile int32_t t194 = 1;

    t194 = ((x1221*x1222)<=(x1223-x1224));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1229 = -1;
	static int8_t x1231 = INT8_MAX;
	volatile int32_t t195 = -63;

    t195 = ((x1229*x1230)<=(x1231-x1232));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1237 = INT32_MAX;
	uint64_t x1238 = 83LLU;
	uint8_t x1239 = UINT8_MAX;
	static int8_t x1240 = -1;
	volatile int32_t t196 = 728189026;

    t196 = ((x1237*x1238)<=(x1239-x1240));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1245 = UINT64_MAX;
	int32_t x1246 = 13324339;
	int32_t t197 = -2340589;

    t197 = ((x1245*x1246)<=(x1247-x1248));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1257 = UINT16_MAX;
	int8_t x1258 = INT8_MIN;
	int8_t x1259 = INT8_MIN;
	int8_t x1260 = INT8_MIN;

    t198 = ((x1257*x1258)<=(x1259-x1260));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x1265 = UINT8_MAX;
	int16_t x1266 = 115;
	uint8_t x1268 = UINT8_MAX;
	int32_t t199 = -2;

    t199 = ((x1265*x1266)<=(x1267-x1268));

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

