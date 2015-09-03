#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x11 = 7414U;
int32_t t1 = -25;
static volatile int64_t x17 = 336433LL;
int32_t x24 = -1;
int16_t x28 = -1;
volatile int8_t x36 = INT8_MAX;
volatile int64_t x41 = -1LL;
volatile int32_t t8 = 1408353;
static int8_t x46 = 1;
int16_t x47 = INT16_MAX;
static int64_t x53 = -304158299LL;
uint64_t x54 = UINT64_MAX;
static int8_t x57 = -1;
int32_t x69 = -827;
int16_t x71 = INT16_MIN;
int8_t x72 = INT8_MAX;
volatile int32_t t14 = 1025834;
uint64_t x74 = UINT64_MAX;
int64_t x75 = INT64_MAX;
volatile int32_t t15 = -46072;
uint64_t x83 = 16LLU;
static int32_t t16 = 219388;
int8_t x100 = -1;
volatile int32_t t19 = 742118;
volatile int16_t x106 = -4;
uint32_t x107 = 20U;
uint8_t x113 = 19U;
static int32_t t22 = 138;
int32_t t25 = 714;
int16_t x147 = -1;
int64_t x158 = 1LL;
int64_t x161 = INT64_MAX;
int32_t t31 = 16047;
static int16_t x165 = -3919;
uint16_t x175 = UINT16_MAX;
volatile uint64_t t33 = 1LLU;
uint8_t x178 = UINT8_MAX;
int32_t x180 = 3788386;
static uint16_t x189 = UINT16_MAX;
uint64_t x192 = 496598723014398LLU;
uint64_t t37 = 103799009811042119LLU;
volatile uint32_t t38 = 240802U;
int32_t x207 = 104544934;
volatile uint16_t x212 = 6U;
int8_t x219 = INT8_MIN;
int16_t x230 = 113;
int16_t x237 = -469;
static uint8_t x247 = 29U;
volatile int32_t x248 = INT32_MIN;
int16_t x251 = INT16_MIN;
volatile int16_t x261 = -8666;
uint8_t x263 = 2U;
uint8_t x264 = UINT8_MAX;
static uint8_t x267 = 95U;
volatile uint64_t t48 = 552387832435339691LLU;
volatile uint16_t x286 = 5U;
uint64_t x293 = 169973063143170399LLU;
uint64_t t52 = 168768LLU;
uint32_t x308 = 2U;
int32_t x310 = -14;
int16_t x319 = INT16_MAX;
uint8_t x328 = 3U;
int32_t t56 = -2042;
uint64_t x337 = UINT64_MAX;
uint16_t x342 = UINT16_MAX;
static uint32_t t61 = 1U;
uint8_t x357 = 10U;
int16_t x359 = INT16_MIN;
static volatile int32_t t63 = 1;
uint16_t x375 = UINT16_MAX;
int16_t x379 = INT16_MIN;
int8_t x389 = INT8_MIN;
int32_t x391 = -1;
int32_t t70 = -6;
int32_t x403 = -230;
static volatile uint32_t x418 = 235134286U;
uint8_t x423 = 1U;
int16_t x425 = INT16_MAX;
uint32_t x431 = UINT32_MAX;
volatile int64_t t76 = -1990982LL;
volatile int16_t x433 = INT16_MIN;
int32_t t77 = -13788767;
volatile uint32_t x444 = 965U;
volatile uint32_t x445 = UINT32_MAX;
static int32_t x453 = -3349945;
int16_t x466 = -1;
int8_t x467 = 28;
int32_t t83 = -166103570;
int32_t x478 = INT32_MIN;
volatile int64_t t84 = -10962709LL;
uint16_t x500 = 7270U;
volatile int16_t x508 = INT16_MIN;
int8_t x513 = 60;
volatile int32_t t91 = 625680342;
static uint64_t x521 = 2462734319823LLU;
volatile int16_t x522 = 7603;
uint64_t x525 = UINT64_MAX;
volatile int64_t x526 = -1LL;
volatile int16_t x529 = INT16_MIN;
static int64_t t94 = 2137995LL;
static int64_t x536 = INT64_MAX;
int8_t x539 = -1;
int64_t x540 = 4674290896368304LL;
static volatile uint64_t x558 = 36910353803LLU;


void f0(void) {
	int16_t x5 = INT16_MIN;
	uint32_t x6 = 340196U;
	volatile uint16_t x7 = UINT16_MAX;
	volatile uint32_t x8 = 4449431U;
	uint32_t t0 = 0U;

	t0 = ((x5<=(x6*x7))*x8);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1;
	int8_t x10 = INT8_MIN;
	int16_t x12 = 1063;

	t1 = ((x9<=(x10*x11))*x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	int32_t x14 = INT32_MAX;
	uint32_t x15 = 0U;
	int32_t x16 = INT32_MIN;
	static volatile int32_t t2 = 643;

	t2 = ((x13<=(x14*x15))*x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = -1;
	uint64_t x19 = 151283275LLU;
	volatile int8_t x20 = INT8_MIN;
	static int32_t t3 = 18391686;

	t3 = ((x17<=(x18*x19))*x20);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x21 = 5;
	static int8_t x22 = -1;
	static int16_t x23 = -1;
	int32_t t4 = 6131;

	t4 = ((x21<=(x22*x23))*x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = 429168732188669129LL;
	int16_t x26 = INT16_MIN;
	uint16_t x27 = UINT16_MAX;
	int32_t t5 = 527;

	t5 = ((x25<=(x26*x27))*x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -1;
	uint16_t x34 = 3U;
	static uint16_t x35 = 180U;
	int32_t t6 = 685314;

	t6 = ((x33<=(x34*x35))*x36);

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = UINT8_MAX;
	int64_t x38 = 557138LL;
	int32_t x39 = INT32_MAX;
	uint16_t x40 = 7U;
	static int32_t t7 = 1803;

	t7 = ((x37<=(x38*x39))*x40);

	if (t7 != 7) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x42 = UINT64_MAX;
	static int8_t x43 = INT8_MIN;
	int32_t x44 = INT32_MIN;

	t8 = ((x41<=(x42*x43))*x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -1LL;
	int32_t x48 = INT32_MIN;
	volatile int32_t t9 = INT32_MIN;

	t9 = ((x45<=(x46*x47))*x48);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = -30175;
	volatile int8_t x51 = INT8_MIN;
	uint32_t x52 = 108U;
	uint32_t t10 = 1940U;

	t10 = ((x49<=(x50*x51))*x52);

	if (t10 != 108U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x55 = 38;
	static int8_t x56 = -1;
	int32_t t11 = -1761;

	t11 = ((x53<=(x54*x55))*x56);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x58 = UINT32_MAX;
	int8_t x59 = -1;
	volatile int64_t x60 = INT64_MAX;
	volatile int64_t t12 = -5LL;

	t12 = ((x57<=(x58*x59))*x60);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = UINT16_MAX;
	int16_t x62 = INT16_MAX;
	volatile uint32_t x63 = 55128398U;
	static uint32_t x64 = 554U;
	static uint32_t t13 = 6071U;

	t13 = ((x61<=(x62*x63))*x64);

	if (t13 != 554U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x70 = -1LL;

	t14 = ((x69<=(x70*x71))*x72);

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = 67747012033LLU;
	int8_t x76 = INT8_MAX;

	t15 = ((x73<=(x74*x75))*x76);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MAX;
	int64_t x82 = INT64_MIN;
	uint16_t x84 = UINT16_MAX;

	t16 = ((x81<=(x82*x83))*x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = INT32_MIN;
	volatile int64_t x86 = -5LL;
	static uint16_t x87 = 1120U;
	int32_t x88 = -151;
	static int32_t t17 = 381761393;

	t17 = ((x85<=(x86*x87))*x88);

	if (t17 != -151) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = -305;
	volatile uint32_t x90 = UINT32_MAX;
	int32_t x91 = -1;
	uint64_t x92 = 536926249531LLU;
	volatile uint64_t t18 = 32381LLU;

	t18 = ((x89<=(x90*x91))*x92);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x97 = 0U;
	static uint32_t x98 = UINT32_MAX;
	int32_t x99 = 718346133;

	t19 = ((x97<=(x98*x99))*x100);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = INT32_MAX;
	int64_t x108 = -1LL;
	int64_t t20 = -10LL;

	t20 = ((x105<=(x106*x107))*x108);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MIN;
	int8_t x111 = -1;
	static uint32_t x112 = UINT32_MAX;
	uint32_t t21 = UINT32_MAX;

	t21 = ((x109<=(x110*x111))*x112);

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x114 = 3U;
	int8_t x115 = INT8_MIN;
	volatile int32_t x116 = INT32_MAX;

	t22 = ((x113<=(x114*x115))*x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = -1;
	uint8_t x122 = 0U;
	uint8_t x123 = 0U;
	int64_t x124 = INT64_MAX;
	volatile int64_t t23 = INT64_MAX;

	t23 = ((x121<=(x122*x123))*x124);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = INT8_MIN;
	uint8_t x126 = UINT8_MAX;
	uint32_t x127 = 1U;
	int32_t x128 = INT32_MAX;
	int32_t t24 = 40;

	t24 = ((x125<=(x126*x127))*x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = -1;
	int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MIN;
	static int8_t x132 = -15;

	t25 = ((x129<=(x130*x131))*x132);

	if (t25 != -15) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = INT16_MAX;
	uint16_t x138 = UINT16_MAX;
	uint8_t x139 = 7U;
	int32_t x140 = -236060;
	volatile int32_t t26 = 134059165;

	t26 = ((x137<=(x138*x139))*x140);

	if (t26 != -236060) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x141 = 83809669576239LL;
	int16_t x142 = INT16_MAX;
	static uint32_t x143 = 86269438U;
	volatile int16_t x144 = INT16_MIN;
	static int32_t t27 = 759782;

	t27 = ((x141<=(x142*x143))*x144);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x145 = -1LL;
	static uint16_t x146 = 510U;
	static uint32_t x148 = 0U;
	static volatile uint32_t t28 = 15713543U;

	t28 = ((x145<=(x146*x147))*x148);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x149 = 8U;
	uint8_t x150 = 63U;
	uint8_t x151 = 44U;
	static int16_t x152 = -4;
	volatile int32_t t29 = -2510851;

	t29 = ((x149<=(x150*x151))*x152);

	if (t29 != -4) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x157 = -32879;
	int64_t x159 = INT64_MIN;
	uint32_t x160 = 49U;
	volatile uint32_t t30 = 32839U;

	t30 = ((x157<=(x158*x159))*x160);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x162 = -1;
	uint32_t x163 = 19672901U;
	uint16_t x164 = 211U;

	t31 = ((x161<=(x162*x163))*x164);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x166 = INT8_MIN;
	int32_t x167 = 6;
	static int16_t x168 = 393;
	static int32_t t32 = 11;

	t32 = ((x165<=(x166*x167))*x168);

	if (t32 != 393) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x173 = INT64_MAX;
	volatile uint16_t x174 = 4U;
	uint64_t x176 = 16LLU;

	t33 = ((x173<=(x174*x175))*x176);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int16_t x179 = INT16_MIN;
	volatile int32_t t34 = 52;

	t34 = ((x177<=(x178*x179))*x180);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x181 = -1;
	int8_t x182 = INT8_MIN;
	uint8_t x183 = 3U;
	volatile uint8_t x184 = 2U;
	volatile int32_t t35 = -185607;

	t35 = ((x181<=(x182*x183))*x184);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x185 = UINT8_MAX;
	volatile int8_t x186 = 5;
	volatile int8_t x187 = 1;
	int64_t x188 = -1LL;
	static int64_t t36 = 17278275422203LL;

	t36 = ((x185<=(x186*x187))*x188);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x190 = -1;
	int64_t x191 = INT64_MAX;

	t37 = ((x189<=(x190*x191))*x192);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x197 = INT64_MIN;
	int16_t x198 = -1;
	volatile uint16_t x199 = UINT16_MAX;
	uint32_t x200 = 392511274U;

	t38 = ((x197<=(x198*x199))*x200);

	if (t38 != 392511274U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x205 = -1;
	static int64_t x206 = -1LL;
	int8_t x208 = INT8_MIN;
	volatile int32_t t39 = -62221952;

	t39 = ((x205<=(x206*x207))*x208);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x209 = -1;
	uint64_t x210 = 876612179LLU;
	int16_t x211 = INT16_MIN;
	static volatile int32_t t40 = 93665900;

	t40 = ((x209<=(x210*x211))*x212);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x217 = INT16_MAX;
	uint16_t x218 = UINT16_MAX;
	volatile int16_t x220 = INT16_MIN;
	volatile int32_t t41 = -268;

	t41 = ((x217<=(x218*x219))*x220);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x229 = -1;
	static int16_t x231 = INT16_MIN;
	uint64_t x232 = 264768931699LLU;
	static volatile uint64_t t42 = 1574348432825990LLU;

	t42 = ((x229<=(x230*x231))*x232);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x238 = INT8_MIN;
	uint32_t x239 = 5U;
	int16_t x240 = INT16_MIN;
	volatile int32_t t43 = -28734096;

	t43 = ((x237<=(x238*x239))*x240);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x245 = 205;
	volatile uint64_t x246 = UINT64_MAX;
	volatile int32_t t44 = INT32_MIN;

	t44 = ((x245<=(x246*x247))*x248);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x249 = UINT16_MAX;
	volatile uint32_t x250 = 32918U;
	static int8_t x252 = INT8_MAX;
	volatile int32_t t45 = -9118207;

	t45 = ((x249<=(x250*x251))*x252);

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x253 = 1816U;
	uint16_t x254 = 4836U;
	static int16_t x255 = INT16_MIN;
	int16_t x256 = INT16_MIN;
	volatile int32_t t46 = -835;

	t46 = ((x253<=(x254*x255))*x256);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x262 = INT8_MAX;
	volatile int32_t t47 = 172916;

	t47 = ((x261<=(x262*x263))*x264);

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x265 = -38;
	volatile int16_t x266 = -1;
	uint64_t x268 = 2812562251076381LLU;

	t48 = ((x265<=(x266*x267))*x268);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x269 = 46U;
	volatile int64_t x270 = 19797069LL;
	static int8_t x271 = INT8_MAX;
	uint16_t x272 = 1U;
	int32_t t49 = 488851;

	t49 = ((x269<=(x270*x271))*x272);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x273 = INT64_MAX;
	int32_t x274 = 387;
	volatile uint32_t x275 = 1624197385U;
	int8_t x276 = 0;
	volatile int32_t t50 = 3492501;

	t50 = ((x273<=(x274*x275))*x276);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x285 = -1;
	uint16_t x287 = 8U;
	static int16_t x288 = 198;
	volatile int32_t t51 = 1;

	t51 = ((x285<=(x286*x287))*x288);

	if (t51 != 198) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x294 = 24U;
	uint16_t x295 = 544U;
	uint64_t x296 = UINT64_MAX;

	t52 = ((x293<=(x294*x295))*x296);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x305 = 12U;
	int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MAX;
	uint32_t t53 = 2376918U;

	t53 = ((x305<=(x306*x307))*x308);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x309 = -1;
	static uint8_t x311 = 0U;
	uint32_t x312 = 207099U;
	volatile uint32_t t54 = 19236877U;

	t54 = ((x309<=(x310*x311))*x312);

	if (t54 != 207099U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x317 = INT16_MIN;
	volatile uint32_t x318 = 1270295U;
	volatile int16_t x320 = -1;
	volatile int32_t t55 = -1;

	t55 = ((x317<=(x318*x319))*x320);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x325 = INT64_MIN;
	uint64_t x326 = 301492826457LLU;
	static volatile int64_t x327 = 484LL;

	t56 = ((x325<=(x326*x327))*x328);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = -1LL;
	int32_t x335 = INT32_MAX;
	int16_t x336 = -1;
	int32_t t57 = -125;

	t57 = ((x333<=(x334*x335))*x336);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x338 = -1;
	volatile int8_t x339 = -1;
	uint64_t x340 = UINT64_MAX;
	uint64_t t58 = 235546569023472LLU;

	t58 = ((x337<=(x338*x339))*x340);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x341 = -2;
	int16_t x343 = 2;
	volatile int64_t x344 = INT64_MIN;
	volatile int64_t t59 = INT64_MIN;

	t59 = ((x341<=(x342*x343))*x344);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x345 = -11;
	int8_t x346 = -7;
	int16_t x347 = 14582;
	int32_t x348 = -26221752;
	static volatile int32_t t60 = -10761866;

	t60 = ((x345<=(x346*x347))*x348);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x353 = INT32_MIN;
	static volatile int64_t x354 = -682215945462LL;
	static uint8_t x355 = 38U;
	volatile uint32_t x356 = UINT32_MAX;

	t61 = ((x353<=(x354*x355))*x356);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x358 = -1;
	static int32_t x360 = -1;
	int32_t t62 = 225803240;

	t62 = ((x357<=(x358*x359))*x360);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x361 = INT32_MAX;
	uint32_t x362 = 308254227U;
	static uint16_t x363 = UINT16_MAX;
	int32_t x364 = -93059;

	t63 = ((x361<=(x362*x363))*x364);

	if (t63 != -93059) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x365 = -89;
	static uint64_t x366 = 8275128397LLU;
	int16_t x367 = INT16_MAX;
	uint16_t x368 = UINT16_MAX;
	static int32_t t64 = 5905507;

	t64 = ((x365<=(x366*x367))*x368);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x369 = 1U;
	volatile uint32_t x370 = UINT32_MAX;
	static int32_t x371 = -134184651;
	uint16_t x372 = 61U;
	int32_t t65 = 1;

	t65 = ((x369<=(x370*x371))*x372);

	if (t65 != 61) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x373 = UINT8_MAX;
	int32_t x374 = -26851;
	int8_t x376 = 0;
	int32_t t66 = -318;

	t66 = ((x373<=(x374*x375))*x376);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x377 = INT64_MIN;
	int8_t x378 = -1;
	uint32_t x380 = 211275873U;
	volatile uint32_t t67 = 10U;

	t67 = ((x377<=(x378*x379))*x380);

	if (t67 != 211275873U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x390 = INT64_MAX;
	volatile int32_t x392 = INT32_MIN;
	volatile int32_t t68 = -2;

	t68 = ((x389<=(x390*x391))*x392);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x393 = UINT16_MAX;
	int16_t x394 = INT16_MAX;
	int8_t x395 = -1;
	volatile uint16_t x396 = 21U;
	int32_t t69 = 179203398;

	t69 = ((x393<=(x394*x395))*x396);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x397 = 25;
	uint32_t x398 = 197U;
	static int8_t x399 = INT8_MAX;
	volatile int8_t x400 = 36;

	t70 = ((x397<=(x398*x399))*x400);

	if (t70 != 36) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x401 = INT64_MIN;
	int16_t x402 = -3162;
	uint16_t x404 = 2U;
	volatile int32_t t71 = -77;

	t71 = ((x401<=(x402*x403))*x404);

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x409 = -3;
	static int32_t x410 = 0;
	int64_t x411 = -4092826LL;
	int16_t x412 = 105;
	int32_t t72 = -1;

	t72 = ((x409<=(x410*x411))*x412);

	if (t72 != 105) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x417 = INT16_MAX;
	int16_t x419 = -3;
	int8_t x420 = -3;
	volatile int32_t t73 = -1;

	t73 = ((x417<=(x418*x419))*x420);

	if (t73 != -3) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x421 = INT32_MIN;
	int16_t x422 = INT16_MIN;
	volatile uint8_t x424 = 1U;
	volatile int32_t t74 = 2;

	t74 = ((x421<=(x422*x423))*x424);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x426 = -1;
	volatile uint8_t x427 = 28U;
	volatile int8_t x428 = -1;
	static volatile int32_t t75 = 0;

	t75 = ((x425<=(x426*x427))*x428);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x429 = 18470001LLU;
	static int8_t x430 = 1;
	volatile int64_t x432 = -340956LL;

	t76 = ((x429<=(x430*x431))*x432);

	if (t76 != -340956LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x434 = 2015LL;
	uint16_t x435 = 3U;
	int8_t x436 = INT8_MIN;

	t77 = ((x433<=(x434*x435))*x436);

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x441 = INT16_MIN;
	static int32_t x442 = -506244;
	uint64_t x443 = 20252628991496912LLU;
	volatile uint32_t t78 = 46856U;

	t78 = ((x441<=(x442*x443))*x444);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x446 = INT32_MIN;
	int64_t x447 = -1LL;
	static int64_t x448 = -35143007758LL;
	int64_t t79 = -174209LL;

	t79 = ((x445<=(x446*x447))*x448);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x454 = UINT8_MAX;
	uint32_t x455 = 1U;
	int8_t x456 = INT8_MAX;
	volatile int32_t t80 = 17684;

	t80 = ((x453<=(x454*x455))*x456);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x465 = 990U;
	int32_t x468 = INT32_MIN;
	volatile int32_t t81 = 471831;

	t81 = ((x465<=(x466*x467))*x468);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x469 = 8U;
	int64_t x470 = -1LL;
	int64_t x471 = 62645487894LL;
	int32_t x472 = INT32_MIN;
	int32_t t82 = -1161;

	t82 = ((x469<=(x470*x471))*x472);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x473 = INT16_MIN;
	uint64_t x474 = 113054496828LLU;
	int8_t x475 = -57;
	static int8_t x476 = INT8_MIN;

	t83 = ((x473<=(x474*x475))*x476);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x477 = UINT16_MAX;
	uint64_t x479 = UINT64_MAX;
	int64_t x480 = 0LL;

	t84 = ((x477<=(x478*x479))*x480);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x485 = 17061U;
	static int16_t x486 = INT16_MIN;
	uint32_t x487 = UINT32_MAX;
	static volatile uint32_t x488 = 530347810U;
	volatile uint32_t t85 = 388U;

	t85 = ((x485<=(x486*x487))*x488);

	if (t85 != 530347810U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x489 = 29;
	uint64_t x490 = UINT64_MAX;
	static uint16_t x491 = UINT16_MAX;
	uint8_t x492 = 71U;
	volatile int32_t t86 = -20737603;

	t86 = ((x489<=(x490*x491))*x492);

	if (t86 != 71) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x493 = UINT8_MAX;
	int32_t x494 = INT32_MIN;
	volatile uint64_t x495 = UINT64_MAX;
	int16_t x496 = INT16_MIN;
	static int32_t t87 = -2690938;

	t87 = ((x493<=(x494*x495))*x496);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x497 = -1LL;
	uint16_t x498 = 0U;
	int8_t x499 = -20;
	static int32_t t88 = -77210810;

	t88 = ((x497<=(x498*x499))*x500);

	if (t88 != 7270) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x501 = UINT32_MAX;
	static uint8_t x502 = 104U;
	int16_t x503 = 7;
	int64_t x504 = INT64_MAX;
	volatile int64_t t89 = 58229LL;

	t89 = ((x501<=(x502*x503))*x504);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x505 = 1;
	static uint8_t x506 = 10U;
	uint32_t x507 = 177477U;
	int32_t t90 = 22;

	t90 = ((x505<=(x506*x507))*x508);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x514 = UINT64_MAX;
	volatile int8_t x515 = -1;
	uint16_t x516 = 0U;

	t91 = ((x513<=(x514*x515))*x516);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x523 = -7;
	static int8_t x524 = INT8_MIN;
	volatile int32_t t92 = 1037218;

	t92 = ((x521<=(x522*x523))*x524);

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x527 = 90652352318LLU;
	int64_t x528 = INT64_MAX;
	volatile int64_t t93 = 208142762438301LL;

	t93 = ((x525<=(x526*x527))*x528);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x530 = INT8_MIN;
	volatile uint32_t x531 = UINT32_MAX;
	int64_t x532 = 480629665348LL;

	t94 = ((x529<=(x530*x531))*x532);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x533 = UINT8_MAX;
	int16_t x534 = -10060;
	int64_t x535 = -646557725697687LL;
	int64_t t95 = INT64_MAX;

	t95 = ((x533<=(x534*x535))*x536);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x537 = -4;
	uint8_t x538 = 5U;
	volatile int64_t t96 = -1077669429491LL;

	t96 = ((x537<=(x538*x539))*x540);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x549 = INT32_MIN;
	int8_t x550 = -2;
	int16_t x551 = INT16_MIN;
	uint8_t x552 = 0U;
	volatile int32_t t97 = -57594;

	t97 = ((x549<=(x550*x551))*x552);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x553 = 246707170LLU;
	volatile int8_t x554 = INT8_MIN;
	int8_t x555 = -1;
	int32_t x556 = -23;
	static volatile int32_t t98 = 1813280;

	t98 = ((x553<=(x554*x555))*x556);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x557 = -8;
	volatile uint32_t x559 = 42840513U;
	int64_t x560 = -4545435548938281850LL;
	volatile int64_t t99 = 111890LL;

	t99 = ((x557<=(x558*x559))*x560);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

