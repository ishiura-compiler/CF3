#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = 14710164421256674LLU;
int16_t x24 = -209;
int32_t t4 = 37058;
int64_t t5 = 1LL;
uint32_t x38 = 21092256U;
static int32_t x43 = 132;
static volatile int32_t x47 = INT32_MIN;
int32_t t12 = -5270;
int64_t t13 = 269LL;
static int16_t x70 = 13;
volatile int32_t t18 = -4050;
volatile int64_t x92 = 105716081605414964LL;
int64_t t20 = 250139274LL;
int64_t x102 = INT64_MIN;
static uint32_t x103 = 20657U;
uint64_t x104 = 676539LLU;
int8_t x107 = -1;
static uint32_t x122 = UINT32_MAX;
int8_t x128 = INT8_MIN;
volatile int8_t x129 = INT8_MIN;
volatile uint64_t x135 = 489101073832LLU;
static uint16_t x147 = UINT16_MAX;
int32_t x150 = INT32_MIN;
static uint32_t x151 = UINT32_MAX;
static uint32_t x153 = UINT32_MAX;
int64_t x157 = INT64_MAX;
int64_t x162 = 6852928874186309LL;
volatile uint32_t t34 = 41491U;
int32_t x165 = -1;
int32_t x169 = INT32_MIN;
int32_t x170 = -1;
int64_t x172 = 4065923239653355LL;
uint64_t x173 = UINT64_MAX;
int8_t x179 = -1;
static volatile int32_t x180 = -738688301;
int8_t x190 = INT8_MIN;
uint32_t x193 = UINT32_MAX;
static int8_t x195 = -1;
static int32_t t41 = -25;
int64_t x203 = -1LL;
uint64_t x205 = 1404420LLU;
uint16_t x213 = UINT16_MAX;
int32_t x216 = INT32_MIN;
int16_t x229 = 3691;
volatile int32_t t50 = 6;
int8_t x243 = INT8_MAX;
int16_t x246 = 0;
int64_t x249 = -213465LL;
uint64_t x252 = 7LLU;
uint64_t t54 = 2455450296LLU;
volatile uint16_t x258 = 13725U;
static int8_t x259 = INT8_MIN;
static volatile int16_t x261 = INT16_MIN;
static int64_t x263 = -1LL;
static uint16_t x264 = UINT16_MAX;
int64_t x271 = -1LL;
volatile int32_t t58 = 0;
volatile int16_t x274 = -1;
int32_t x278 = -1;
int32_t t60 = 343;
int32_t x286 = INT32_MAX;
uint32_t x289 = 51881U;
volatile int64_t x290 = INT64_MAX;
volatile int16_t x292 = 1;
static uint8_t x295 = 1U;
uint32_t x300 = 176194U;
int8_t x302 = 1;
uint64_t x304 = 2551LLU;
uint8_t x310 = 95U;
uint16_t x312 = 1641U;
static int16_t x322 = INT16_MIN;
volatile uint32_t x323 = 2U;
int32_t t70 = -124;
int32_t t71 = -24387844;
uint8_t x333 = 1U;
volatile int32_t x336 = INT32_MAX;
int64_t x343 = -1LL;
uint8_t x356 = 11U;
int32_t t76 = -1176;
uint64_t x358 = UINT64_MAX;
int8_t x361 = INT8_MIN;
uint8_t x367 = 3U;
volatile int64_t x370 = INT64_MIN;
volatile uint64_t x375 = UINT64_MAX;
int64_t x386 = INT64_MIN;
int32_t t84 = -99;
int64_t x389 = INT64_MIN;
int16_t x396 = -1;
volatile int32_t t86 = -1;
volatile int32_t t88 = 3818;
static uint16_t x406 = 847U;
int32_t x411 = -1;
uint32_t x412 = 31245798U;
int64_t x423 = INT64_MIN;
int32_t t93 = INT32_MIN;
static volatile int16_t x432 = INT16_MIN;
int32_t t94 = 17;
static int8_t x434 = INT8_MIN;
int8_t x435 = -1;
uint8_t x438 = UINT8_MAX;
int8_t x444 = INT8_MAX;
volatile int32_t x448 = -1827402;
int16_t x452 = -1;


void f0(void) {
	static int64_t x1 = -1LL;
	int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MIN;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = -6202800;

	t0 = ((x1<(x2+x3))|x4);

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = INT32_MIN;
	uint32_t x7 = 3036892U;
	static uint8_t x8 = 14U;
	volatile int32_t t1 = 3790;

	t1 = ((x5<(x6+x7))|x8);

	if (t1 != 14) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 51U;
	int32_t x10 = INT32_MAX;
	int8_t x11 = -1;
	volatile uint8_t x12 = UINT8_MAX;
	static int32_t t2 = -10;

	t2 = ((x9<(x10+x11))|x12);

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 61499LLU;
	volatile int32_t x22 = INT32_MIN;
	static int16_t x23 = 1290;
	int32_t t3 = -140199077;

	t3 = ((x21<(x22+x23))|x24);

	if (t3 != -209) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x25 = UINT64_MAX;
	uint8_t x26 = UINT8_MAX;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = 7;

	t4 = ((x25<(x26+x27))|x28);

	if (t4 != 7) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x29 = 1U;
	uint32_t x30 = 746404U;
	int8_t x31 = -4;
	int64_t x32 = 3640129452748026LL;

	t5 = ((x29<(x30+x31))|x32);

	if (t5 != 3640129452748027LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	static int16_t x35 = -1;
	int16_t x36 = 1;
	int32_t t6 = 1;

	t6 = ((x33<(x34+x35))|x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x37 = -1;
	static uint32_t x39 = 406U;
	int64_t x40 = -1336884740514559392LL;
	volatile int64_t t7 = 4LL;

	t7 = ((x37<(x38+x39))|x40);

	if (t7 != -1336884740514559392LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = 19444726;
	int16_t x42 = -1;
	volatile uint8_t x44 = 11U;
	int32_t t8 = 841839813;

	t8 = ((x41<(x42+x43))|x44);

	if (t8 != 11) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x45 = 88U;
	int32_t x46 = 171935;
	static int64_t x48 = -6793655265884LL;
	static volatile int64_t t9 = -281356397877177483LL;

	t9 = ((x45<(x46+x47))|x48);

	if (t9 != -6793655265883LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = -1LL;
	int8_t x50 = 58;
	int16_t x51 = 3;
	int64_t x52 = -1270792529698588LL;
	int64_t t10 = -81504497LL;

	t10 = ((x49<(x50+x51))|x52);

	if (t10 != -1270792529698587LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = 1LL;
	volatile uint8_t x54 = UINT8_MAX;
	uint8_t x55 = 68U;
	static volatile uint16_t x56 = 7632U;
	volatile int32_t t11 = 12;

	t11 = ((x53<(x54+x55))|x56);

	if (t11 != 7633) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x57 = 1120624135615LLU;
	volatile int8_t x58 = 1;
	volatile int16_t x59 = INT16_MAX;
	static uint8_t x60 = UINT8_MAX;

	t12 = ((x57<(x58+x59))|x60);

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x61 = -62;
	static int8_t x62 = INT8_MAX;
	int8_t x63 = INT8_MIN;
	static int64_t x64 = INT64_MIN;

	t13 = ((x61<(x62+x63))|x64);

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x65 = INT64_MIN;
	int16_t x66 = INT16_MIN;
	static int32_t x67 = -15924097;
	int64_t x68 = -1LL;
	volatile int64_t t14 = 3183297895873798973LL;

	t14 = ((x65<(x66+x67))|x68);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MAX;
	uint8_t x71 = 94U;
	int8_t x72 = -1;
	volatile int32_t t15 = 11219354;

	t15 = ((x69<(x70+x71))|x72);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 4U;
	int64_t x74 = -1LL;
	volatile int8_t x75 = -1;
	volatile uint8_t x76 = 105U;
	volatile int32_t t16 = -102;

	t16 = ((x73<(x74+x75))|x76);

	if (t16 != 105) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = 15;
	uint8_t x78 = UINT8_MAX;
	static uint64_t x79 = 131294283931LLU;
	static uint32_t x80 = 98702808U;
	static uint32_t t17 = 1810909U;

	t17 = ((x77<(x78+x79))|x80);

	if (t17 != 98702809U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 1836U;
	int16_t x82 = -1;
	int8_t x83 = -1;
	volatile int16_t x84 = 16;

	t18 = ((x81<(x82+x83))|x84);

	if (t18 != 17) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = 2U;
	int16_t x86 = 2;
	int64_t x87 = -1LL;
	static int32_t x88 = INT32_MAX;
	int32_t t19 = INT32_MAX;

	t19 = ((x85<(x86+x87))|x88);

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MAX;
	int16_t x90 = 59;
	volatile int64_t x91 = -149355009320090LL;

	t20 = ((x89<(x90+x91))|x92);

	if (t20 != 105716081605414964LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = UINT16_MAX;
	volatile int64_t x94 = INT64_MIN;
	int32_t x95 = 126797745;
	uint64_t x96 = 237LLU;
	uint64_t t21 = 13719718LLU;

	t21 = ((x93<(x94+x95))|x96);

	if (t21 != 237LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MAX;
	int16_t x98 = INT16_MAX;
	volatile int16_t x99 = 591;
	int64_t x100 = INT64_MIN;
	static volatile int64_t t22 = INT64_MIN;

	t22 = ((x97<(x98+x99))|x100);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x101 = -1LL;
	static volatile uint64_t t23 = 251517761663LLU;

	t23 = ((x101<(x102+x103))|x104);

	if (t23 != 676539LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MAX;
	uint16_t x106 = UINT16_MAX;
	static int8_t x108 = -1;
	int32_t t24 = -21;

	t24 = ((x105<(x106+x107))|x108);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x109 = 10247U;
	int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MAX;
	uint32_t x112 = 7U;
	uint32_t t25 = 80U;

	t25 = ((x109<(x110+x111))|x112);

	if (t25 != 7U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x121 = UINT16_MAX;
	int64_t x123 = INT64_MIN;
	int8_t x124 = INT8_MIN;
	static int32_t t26 = 11338;

	t26 = ((x121<(x122+x123))|x124);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x125 = -8425;
	volatile int8_t x126 = 19;
	volatile uint32_t x127 = 8224252U;
	volatile int32_t t27 = 4741;

	t27 = ((x125<(x126+x127))|x128);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x130 = -92;
	volatile uint16_t x131 = 138U;
	volatile int64_t x132 = -1LL;
	int64_t t28 = 44LL;

	t28 = ((x129<(x130+x131))|x132);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = 780LLU;
	volatile int32_t x134 = 3183766;
	uint64_t x136 = UINT64_MAX;
	uint64_t t29 = UINT64_MAX;

	t29 = ((x133<(x134+x135))|x136);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x145 = 357677U;
	static volatile int16_t x146 = 60;
	int16_t x148 = 0;
	volatile int32_t t30 = -97985629;

	t30 = ((x145<(x146+x147))|x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = INT64_MAX;
	static int8_t x152 = INT8_MIN;
	int32_t t31 = 3645;

	t31 = ((x149<(x150+x151))|x152);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x154 = 863527LLU;
	int8_t x155 = INT8_MIN;
	volatile uint64_t x156 = 6986388178LLU;
	uint64_t t32 = 78780603367621LLU;

	t32 = ((x153<(x154+x155))|x156);

	if (t32 != 6986388178LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x158 = INT8_MAX;
	uint8_t x159 = 2U;
	volatile int64_t x160 = -50LL;
	int64_t t33 = -12LL;

	t33 = ((x157<(x158+x159))|x160);

	if (t33 != -50LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x161 = INT64_MIN;
	int16_t x163 = INT16_MAX;
	volatile uint32_t x164 = 54563193U;

	t34 = ((x161<(x162+x163))|x164);

	if (t34 != 54563193U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x166 = 11860U;
	int32_t x167 = 2;
	volatile int64_t x168 = INT64_MIN;
	int64_t t35 = 316857624425LL;

	t35 = ((x165<(x166+x167))|x168);

	if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x171 = 2807343LLU;
	int64_t t36 = -38LL;

	t36 = ((x169<(x170+x171))|x172);

	if (t36 != 4065923239653355LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x174 = 191030U;
	static volatile int16_t x175 = INT16_MIN;
	int32_t x176 = 0;
	int32_t t37 = -1;

	t37 = ((x173<(x174+x175))|x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x177 = INT8_MAX;
	uint32_t x178 = 508U;
	int32_t t38 = -1113861;

	t38 = ((x177<(x178+x179))|x180);

	if (t38 != -738688301) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = -1;
	volatile uint32_t x186 = 126517807U;
	int16_t x187 = -6;
	volatile int8_t x188 = INT8_MIN;
	volatile int32_t t39 = 1314024;

	t39 = ((x185<(x186+x187))|x188);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = -1;
	int64_t x191 = 239352735001008736LL;
	uint64_t x192 = UINT64_MAX;
	static uint64_t t40 = UINT64_MAX;

	t40 = ((x189<(x190+x191))|x192);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x194 = INT16_MIN;
	static int16_t x196 = -119;

	t41 = ((x193<(x194+x195))|x196);

	if (t41 != -119) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x197 = INT32_MIN;
	static uint32_t x198 = 720019697U;
	int8_t x199 = INT8_MIN;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t42 = -286014;

	t42 = ((x197<(x198+x199))|x200);

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x201 = INT64_MIN;
	volatile int16_t x202 = -27;
	int64_t x204 = 38557408505759164LL;
	int64_t t43 = -241911085957534909LL;

	t43 = ((x201<(x202+x203))|x204);

	if (t43 != 38557408505759165LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x206 = UINT16_MAX;
	uint32_t x207 = 23255563U;
	static int16_t x208 = INT16_MAX;
	volatile int32_t t44 = 7;

	t44 = ((x205<(x206+x207))|x208);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x214 = 127U;
	int16_t x215 = INT16_MIN;
	int32_t t45 = INT32_MIN;

	t45 = ((x213<(x214+x215))|x216);

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x217 = 70771459;
	int32_t x218 = INT32_MIN;
	uint64_t x219 = 53755967984348LLU;
	int64_t x220 = INT64_MAX;
	volatile int64_t t46 = INT64_MAX;

	t46 = ((x217<(x218+x219))|x220);

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x221 = 486U;
	int16_t x222 = 90;
	int32_t x223 = -1;
	int16_t x224 = INT16_MIN;
	volatile int32_t t47 = 214576;

	t47 = ((x221<(x222+x223))|x224);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x225 = 4626997179LLU;
	volatile int8_t x226 = -2;
	uint16_t x227 = 7681U;
	uint64_t x228 = 3857869438103LLU;
	uint64_t t48 = 38996489559985622LLU;

	t48 = ((x225<(x226+x227))|x228);

	if (t48 != 3857869438103LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x230 = -1;
	static uint16_t x231 = UINT16_MAX;
	static int32_t x232 = 10;
	int32_t t49 = -12;

	t49 = ((x229<(x230+x231))|x232);

	if (t49 != 11) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x233 = UINT64_MAX;
	static uint64_t x234 = 154494340307LLU;
	volatile int8_t x235 = INT8_MIN;
	int8_t x236 = -1;

	t50 = ((x233<(x234+x235))|x236);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = INT8_MAX;
	volatile int8_t x238 = INT8_MIN;
	volatile int16_t x239 = 10;
	static int8_t x240 = INT8_MIN;
	static volatile int32_t t51 = 158801186;

	t51 = ((x237<(x238+x239))|x240);

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x241 = 3;
	int64_t x242 = 293718487LL;
	int8_t x244 = INT8_MIN;
	int32_t t52 = -7295503;

	t52 = ((x241<(x242+x243))|x244);

	if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = INT16_MIN;
	int32_t x247 = INT32_MIN;
	static uint32_t x248 = 34770U;
	volatile uint32_t t53 = 14209668U;

	t53 = ((x245<(x246+x247))|x248);

	if (t53 != 34770U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x250 = 61U;
	int8_t x251 = -1;

	t54 = ((x249<(x250+x251))|x252);

	if (t54 != 7LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x257 = -1;
	uint16_t x260 = 3U;
	int32_t t55 = -200;

	t55 = ((x257<(x258+x259))|x260);

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x262 = 0U;
	static int32_t t56 = 182839;

	t56 = ((x261<(x262+x263))|x264);

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = 265963529;
	volatile uint32_t x266 = 2199U;
	int16_t x267 = -4;
	static uint64_t x268 = UINT64_MAX;
	uint64_t t57 = UINT64_MAX;

	t57 = ((x265<(x266+x267))|x268);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x269 = UINT64_MAX;
	int16_t x270 = -1;
	int32_t x272 = -1;

	t58 = ((x269<(x270+x271))|x272);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = INT16_MAX;
	static volatile int16_t x275 = INT16_MIN;
	int32_t x276 = INT32_MIN;
	int32_t t59 = INT32_MIN;

	t59 = ((x273<(x274+x275))|x276);

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x277 = 148769966127491LLU;
	int8_t x279 = INT8_MAX;
	int16_t x280 = 192;

	t60 = ((x277<(x278+x279))|x280);

	if (t60 != 192) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x281 = UINT16_MAX;
	int64_t x282 = -58392483LL;
	uint16_t x283 = UINT16_MAX;
	volatile int8_t x284 = INT8_MIN;
	int32_t t61 = 857356366;

	t61 = ((x281<(x282+x283))|x284);

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = INT32_MIN;
	int32_t x287 = INT32_MIN;
	volatile uint64_t x288 = UINT64_MAX;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = ((x285<(x286+x287))|x288);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x291 = -1;
	static volatile int32_t t63 = -1;

	t63 = ((x289<(x290+x291))|x292);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x293 = 0U;
	uint64_t x294 = UINT64_MAX;
	volatile int32_t x296 = -1;
	volatile int32_t t64 = 881445051;

	t64 = ((x293<(x294+x295))|x296);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x297 = 379;
	uint64_t x298 = UINT64_MAX;
	uint16_t x299 = UINT16_MAX;
	volatile uint32_t t65 = 26530U;

	t65 = ((x297<(x298+x299))|x300);

	if (t65 != 176195U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x301 = UINT16_MAX;
	int64_t x303 = INT64_MIN;
	volatile uint64_t t66 = 368348LLU;

	t66 = ((x301<(x302+x303))|x304);

	if (t66 != 2551LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x309 = 1;
	volatile uint8_t x311 = UINT8_MAX;
	static volatile int32_t t67 = 296877;

	t67 = ((x309<(x310+x311))|x312);

	if (t67 != 1641) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x313 = -1;
	uint32_t x314 = UINT32_MAX;
	static volatile int64_t x315 = -1138266911850622635LL;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = ((x313<(x314+x315))|x316);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x317 = INT64_MAX;
	uint16_t x318 = 14689U;
	int8_t x319 = INT8_MIN;
	int32_t x320 = 116;
	volatile int32_t t69 = -55494;

	t69 = ((x317<(x318+x319))|x320);

	if (t69 != 116) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x321 = -1;
	uint8_t x324 = UINT8_MAX;

	t70 = ((x321<(x322+x323))|x324);

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = 25;
	volatile int32_t x326 = INT32_MAX;
	int8_t x327 = INT8_MIN;
	uint16_t x328 = 2039U;

	t71 = ((x325<(x326+x327))|x328);

	if (t71 != 2039) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x329 = 3U;
	uint32_t x330 = 2U;
	static volatile uint8_t x331 = 99U;
	int64_t x332 = 1LL;
	static int64_t t72 = 11271LL;

	t72 = ((x329<(x330+x331))|x332);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x334 = -1;
	uint8_t x335 = UINT8_MAX;
	volatile int32_t t73 = INT32_MAX;

	t73 = ((x333<(x334+x335))|x336);

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x337 = UINT16_MAX;
	int64_t x338 = INT64_MIN;
	static uint8_t x339 = 0U;
	static int64_t x340 = INT64_MAX;
	volatile int64_t t74 = INT64_MAX;

	t74 = ((x337<(x338+x339))|x340);

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x341 = 3590U;
	static int8_t x342 = 44;
	static int16_t x344 = -86;
	int32_t t75 = -12939;

	t75 = ((x341<(x342+x343))|x344);

	if (t75 != -86) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = -855096831766LL;
	static int32_t x354 = -1;
	static volatile uint16_t x355 = 8038U;

	t76 = ((x353<(x354+x355))|x356);

	if (t76 != 11) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = INT8_MIN;
	volatile int64_t x359 = INT64_MAX;
	uint64_t x360 = 879703063LLU;
	volatile uint64_t t77 = 27761228776102758LLU;

	t77 = ((x357<(x358+x359))|x360);

	if (t77 != 879703063LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x362 = UINT64_MAX;
	uint16_t x363 = 5U;
	uint8_t x364 = 31U;
	volatile int32_t t78 = -11354;

	t78 = ((x361<(x362+x363))|x364);

	if (t78 != 31) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x365 = 939300686938LLU;
	volatile uint64_t x366 = 3837720932981LLU;
	int16_t x368 = INT16_MIN;
	static int32_t t79 = -173062;

	t79 = ((x365<(x366+x367))|x368);

	if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x369 = UINT8_MAX;
	int64_t x371 = INT64_MAX;
	int32_t x372 = 5;
	int32_t t80 = -26589239;

	t80 = ((x369<(x370+x371))|x372);

	if (t80 != 5) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x373 = 8U;
	int16_t x374 = 1;
	volatile int8_t x376 = -42;
	int32_t t81 = 1945555;

	t81 = ((x373<(x374+x375))|x376);

	if (t81 != -42) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = -1LL;
	int16_t x378 = INT16_MIN;
	int16_t x379 = -3;
	volatile int32_t x380 = INT32_MIN;
	static volatile int32_t t82 = INT32_MIN;

	t82 = ((x377<(x378+x379))|x380);

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x381 = 660393161578037700LLU;
	uint8_t x382 = 6U;
	int16_t x383 = 801;
	int64_t x384 = 1LL;
	int64_t t83 = 44LL;

	t83 = ((x381<(x382+x383))|x384);

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x385 = -516951422850LL;
	int8_t x387 = INT8_MAX;
	volatile int8_t x388 = INT8_MAX;

	t84 = ((x385<(x386+x387))|x388);

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x390 = INT64_MAX;
	int8_t x391 = -46;
	int64_t x392 = 18034157178558786LL;
	volatile int64_t t85 = -9LL;

	t85 = ((x389<(x390+x391))|x392);

	if (t85 != 18034157178558787LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x393 = 6;
	int64_t x394 = -1LL;
	volatile int16_t x395 = 15801;

	t86 = ((x393<(x394+x395))|x396);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x397 = 458518258LLU;
	int64_t x398 = INT64_MAX;
	uint64_t x399 = 63001334782028129LLU;
	static int32_t x400 = -1;
	int32_t t87 = 65841754;

	t87 = ((x397<(x398+x399))|x400);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x401 = UINT16_MAX;
	static uint8_t x402 = 6U;
	int64_t x403 = INT64_MIN;
	int16_t x404 = INT16_MIN;

	t88 = ((x401<(x402+x403))|x404);

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = INT32_MIN;
	int8_t x407 = INT8_MIN;
	volatile int32_t x408 = 62013172;
	int32_t t89 = -116;

	t89 = ((x405<(x406+x407))|x408);

	if (t89 != 62013173) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x409 = 0;
	volatile int64_t x410 = 9190419709237LL;
	static volatile uint32_t t90 = 3816U;

	t90 = ((x409<(x410+x411))|x412);

	if (t90 != 31245799U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x413 = INT32_MIN;
	uint64_t x414 = 80394528220111212LLU;
	int16_t x415 = INT16_MAX;
	uint8_t x416 = 32U;
	static volatile int32_t t91 = -5194;

	t91 = ((x413<(x414+x415))|x416);

	if (t91 != 32) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x417 = -1;
	volatile uint32_t x418 = 53973U;
	int8_t x419 = -1;
	volatile int16_t x420 = -1;
	int32_t t92 = -52903;

	t92 = ((x417<(x418+x419))|x420);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = INT16_MIN;
	volatile int32_t x422 = INT32_MAX;
	int32_t x424 = INT32_MIN;

	t93 = ((x421<(x422+x423))|x424);

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = -3;
	uint32_t x430 = 123758034U;
	uint64_t x431 = 17LLU;

	t94 = ((x429<(x430+x431))|x432);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x433 = INT64_MIN;
	uint64_t x436 = UINT64_MAX;
	static volatile uint64_t t95 = UINT64_MAX;

	t95 = ((x433<(x434+x435))|x436);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x437 = -43364;
	static volatile uint64_t x439 = 6220879172LLU;
	volatile uint64_t x440 = UINT64_MAX;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = ((x437<(x438+x439))|x440);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x441 = INT64_MIN;
	uint16_t x442 = UINT16_MAX;
	int16_t x443 = INT16_MAX;
	volatile int32_t t97 = -2;

	t97 = ((x441<(x442+x443))|x444);

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x445 = 3680LLU;
	volatile int32_t x446 = -88264424;
	uint16_t x447 = 2018U;
	volatile int32_t t98 = 11406;

	t98 = ((x445<(x446+x447))|x448);

	if (t98 != -1827401) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x449 = INT32_MIN;
	uint16_t x450 = UINT16_MAX;
	int32_t x451 = -1;
	volatile int32_t t99 = 16390381;

	t99 = ((x449<(x450+x451))|x452);

	if (t99 != -1) { NG(); } else { ; }
	
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


    return 0;
}

