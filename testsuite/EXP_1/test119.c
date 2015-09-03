#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = UINT16_MAX;
int64_t x3 = INT64_MIN;
int16_t x10 = 50;
int16_t x16 = INT16_MIN;
static int32_t t2 = 0;
static volatile int8_t x23 = INT8_MIN;
int32_t x25 = -103822412;
static uint32_t t6 = 1991U;
int32_t t7 = -71;
volatile int32_t x51 = -3721152;
uint64_t x66 = 2820088LLU;
volatile int64_t x67 = INT64_MIN;
volatile int8_t x86 = INT8_MIN;
int64_t x88 = -17117150555LL;
int64_t t14 = -31037LL;
volatile int8_t x102 = INT8_MAX;
uint16_t x111 = 0U;
volatile int32_t t22 = -976021;
volatile int8_t x126 = -1;
int8_t x129 = INT8_MAX;
int8_t x140 = INT8_MAX;
volatile int32_t t25 = -112;
int8_t x144 = -8;
uint8_t x151 = 51U;
volatile uint8_t x153 = UINT8_MAX;
volatile uint16_t x154 = UINT16_MAX;
static int16_t x172 = INT16_MIN;
static uint8_t x173 = 1U;
int32_t x174 = INT32_MIN;
uint32_t x175 = 3380164U;
static volatile int32_t t33 = 64695883;
uint32_t x177 = UINT32_MAX;
volatile int32_t x180 = -1;
volatile int32_t t34 = -30579392;
int8_t x181 = -1;
uint8_t x193 = 2U;
int8_t x199 = INT8_MAX;
int8_t x208 = 0;
int8_t x209 = INT8_MAX;
static volatile int32_t x216 = 246;
uint16_t x226 = 29U;
static uint64_t x229 = UINT64_MAX;
uint32_t x239 = UINT32_MAX;
int32_t t46 = 464;
uint16_t x264 = 6774U;
int32_t t49 = -22;
static int64_t x282 = INT64_MAX;
volatile uint64_t x291 = 3678939208851951LLU;
int32_t x292 = 14145;
int16_t x294 = 2;
static int32_t t54 = -911186690;
static volatile uint64_t x298 = 9844401LLU;
int32_t x300 = -1;
volatile int32_t t55 = -22813886;
int8_t x309 = -5;
int8_t x310 = -1;
volatile int32_t t56 = -4160;
int64_t x319 = 8425LL;
int32_t x320 = -1;
int64_t x340 = -14554718257547828LL;
volatile int64_t t60 = 0LL;
int8_t x341 = INT8_MAX;
volatile int32_t t61 = -15;
int64_t x351 = INT64_MIN;
int32_t t63 = -78;
uint64_t x353 = 503241056LLU;
int32_t x362 = -9378698;
int16_t x366 = -1;
int16_t x373 = -1;
volatile int32_t t68 = -6;
uint8_t x379 = UINT8_MAX;
static int16_t x380 = INT16_MIN;
uint8_t x383 = 3U;
uint32_t x389 = UINT32_MAX;
int64_t x401 = INT64_MAX;
int8_t x402 = INT8_MIN;
int8_t x422 = -1;
int8_t x427 = INT8_MIN;
uint8_t x437 = 1U;
uint16_t x453 = 32U;
static int16_t x456 = INT16_MAX;
uint64_t x460 = 15464208728838LLU;
uint64_t t82 = 0LLU;
uint64_t x476 = 228619LLU;
int8_t x478 = INT8_MAX;
int64_t t87 = -60942025LL;
volatile int32_t t88 = -297669893;
int64_t x507 = -970160182720LL;
int8_t x511 = -14;
int16_t x517 = 58;
static int32_t x540 = INT32_MAX;
int16_t x556 = 72;


void f0(void) {
	int16_t x2 = -1;
	volatile int16_t x4 = 71;
	int32_t t0 = -6;

	t0 = (((x1+x2)<=x3)-x4);

	if (t0 != -71) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = 351422;
	int8_t x11 = INT8_MIN;
	int32_t x12 = 696;
	volatile int32_t t1 = -5;

	t1 = (((x9+x10)<=x11)-x12);

	if (t1 != -696) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = INT32_MAX;
	static int8_t x14 = INT8_MIN;
	uint64_t x15 = 2488716025396076LLU;

	t2 = (((x13+x14)<=x15)-x16);

	if (t2 != 32769) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	int8_t x18 = INT8_MIN;
	volatile uint16_t x19 = 28297U;
	int16_t x20 = INT16_MIN;
	static int32_t t3 = 97;

	t3 = (((x17+x18)<=x19)-x20);

	if (t3 != 32769) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	static uint16_t x22 = 10942U;
	static int64_t x24 = -1LL;
	int64_t t4 = -86LL;

	t4 = (((x21+x22)<=x23)-x24);

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x26 = 254U;
	uint32_t x27 = 4569U;
	static int16_t x28 = 193;
	static int32_t t5 = -12974;

	t5 = (((x25+x26)<=x27)-x28);

	if (t5 != -193) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = -86570;
	int8_t x34 = INT8_MIN;
	int8_t x35 = INT8_MIN;
	volatile uint32_t x36 = 6125936U;

	t6 = (((x33+x34)<=x35)-x36);

	if (t6 != 4288841361U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -46682266408198701LL;
	uint64_t x42 = 8077468628LLU;
	volatile int8_t x43 = INT8_MIN;
	static uint8_t x44 = 94U;

	t7 = (((x41+x42)<=x43)-x44);

	if (t7 != -93) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = 2749LLU;
	volatile uint8_t x50 = 0U;
	volatile int8_t x52 = -1;
	volatile int32_t t8 = 371;

	t8 = (((x49+x50)<=x51)-x52);

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = INT16_MIN;
	int16_t x62 = -1;
	int64_t x63 = INT64_MIN;
	static int8_t x64 = 1;
	volatile int32_t t9 = -29086;

	t9 = (((x61+x62)<=x63)-x64);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x65 = 0;
	static int32_t x68 = 1;
	int32_t t10 = 0;

	t10 = (((x65+x66)<=x67)-x68);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = 0;
	int32_t x70 = INT32_MAX;
	volatile int16_t x71 = 14;
	int16_t x72 = INT16_MIN;
	volatile int32_t t11 = 104;

	t11 = (((x69+x70)<=x71)-x72);

	if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x73 = INT8_MIN;
	int32_t x74 = INT32_MAX;
	int64_t x75 = INT64_MAX;
	int64_t x76 = 977LL;
	int64_t t12 = 85471LL;

	t12 = (((x73+x74)<=x75)-x76);

	if (t12 != -976LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x77 = 6U;
	static int16_t x78 = INT16_MIN;
	int32_t x79 = INT32_MIN;
	volatile uint8_t x80 = 12U;
	volatile int32_t t13 = -33815374;

	t13 = (((x77+x78)<=x79)-x80);

	if (t13 != -12) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x85 = 8;
	int64_t x87 = INT64_MIN;

	t14 = (((x85+x86)<=x87)-x88);

	if (t14 != 17117150555LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x89 = 1;
	uint8_t x90 = 13U;
	uint16_t x91 = 31618U;
	uint32_t x92 = 9252566U;
	static uint32_t t15 = 5701U;

	t15 = (((x89+x90)<=x91)-x92);

	if (t15 != 4285714731U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x93 = INT16_MAX;
	uint16_t x94 = 8U;
	int16_t x95 = INT16_MIN;
	int32_t x96 = 87159;
	static int32_t t16 = -1016;

	t16 = (((x93+x94)<=x95)-x96);

	if (t16 != -87159) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x97 = 1805LLU;
	int16_t x98 = INT16_MIN;
	int16_t x99 = -1;
	int16_t x100 = INT16_MIN;
	volatile int32_t t17 = 367883205;

	t17 = (((x97+x98)<=x99)-x100);

	if (t17 != 32769) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x101 = 30U;
	uint16_t x103 = 41U;
	volatile int16_t x104 = 741;
	int32_t t18 = 9539598;

	t18 = (((x101+x102)<=x103)-x104);

	if (t18 != -741) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x109 = 0;
	static volatile int16_t x110 = INT16_MIN;
	volatile int32_t x112 = -28427;
	volatile int32_t t19 = 424488;

	t19 = (((x109+x110)<=x111)-x112);

	if (t19 != 28428) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x113 = -16;
	int16_t x114 = INT16_MIN;
	int32_t x115 = INT32_MIN;
	volatile int64_t x116 = 416944LL;
	int64_t t20 = 9919560LL;

	t20 = (((x113+x114)<=x115)-x116);

	if (t20 != -416944LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x117 = 0;
	volatile int8_t x118 = INT8_MIN;
	int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MAX;
	volatile int32_t t21 = -73121;

	t21 = (((x117+x118)<=x119)-x120);

	if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = 348U;
	int64_t x122 = 2352LL;
	int8_t x123 = INT8_MIN;
	int16_t x124 = 0;

	t22 = (((x121+x122)<=x123)-x124);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x125 = UINT32_MAX;
	int32_t x127 = INT32_MAX;
	int64_t x128 = -5365LL;
	int64_t t23 = -33957LL;

	t23 = (((x125+x126)<=x127)-x128);

	if (t23 != 5365LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x130 = -1;
	volatile int32_t x131 = 1773391;
	static volatile uint16_t x132 = 2712U;
	static int32_t t24 = 14700288;

	t24 = (((x129+x130)<=x131)-x132);

	if (t24 != -2711) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x137 = -36280796230349LL;
	volatile int32_t x138 = -1;
	int16_t x139 = -1;

	t25 = (((x137+x138)<=x139)-x140);

	if (t25 != -126) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x141 = 1309106101942LLU;
	int64_t x142 = INT64_MAX;
	static int32_t x143 = INT32_MIN;
	volatile int32_t t26 = 10676113;

	t26 = (((x141+x142)<=x143)-x144);

	if (t26 != 9) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x145 = UINT64_MAX;
	uint32_t x146 = 504U;
	uint8_t x147 = UINT8_MAX;
	int8_t x148 = 0;
	int32_t t27 = 253454298;

	t27 = (((x145+x146)<=x147)-x148);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x149 = 4;
	uint64_t x150 = 132353358301424LLU;
	volatile int16_t x152 = INT16_MIN;
	static volatile int32_t t28 = 3;

	t28 = (((x149+x150)<=x151)-x152);

	if (t28 != 32768) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x155 = 62147008U;
	static int8_t x156 = INT8_MAX;
	static int32_t t29 = -25007;

	t29 = (((x153+x154)<=x155)-x156);

	if (t29 != -126) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x157 = -1;
	uint64_t x158 = UINT64_MAX;
	static int32_t x159 = -161786;
	static int8_t x160 = -1;
	int32_t t30 = -145334;

	t30 = (((x157+x158)<=x159)-x160);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x165 = 8;
	volatile int64_t x166 = 3715201LL;
	uint8_t x167 = UINT8_MAX;
	volatile int16_t x168 = INT16_MAX;
	int32_t t31 = 99706859;

	t31 = (((x165+x166)<=x167)-x168);

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = INT64_MIN;
	int16_t x170 = 43;
	static int8_t x171 = INT8_MAX;
	int32_t t32 = 0;

	t32 = (((x169+x170)<=x171)-x172);

	if (t32 != 32769) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x176 = INT8_MIN;

	t33 = (((x173+x174)<=x175)-x176);

	if (t33 != 128) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x178 = 5914U;
	int8_t x179 = INT8_MIN;

	t34 = (((x177+x178)<=x179)-x180);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x182 = -1;
	uint32_t x183 = UINT32_MAX;
	uint64_t x184 = 4LLU;
	volatile uint64_t t35 = 2364193465LLU;

	t35 = (((x181+x182)<=x183)-x184);

	if (t35 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x194 = 80U;
	int8_t x195 = INT8_MIN;
	int64_t x196 = INT64_MAX;
	static volatile int64_t t36 = -476990456832273LL;

	t36 = (((x193+x194)<=x195)-x196);

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x197 = 2;
	int16_t x198 = INT16_MAX;
	int16_t x200 = INT16_MAX;
	volatile int32_t t37 = -96850070;

	t37 = (((x197+x198)<=x199)-x200);

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x205 = -1;
	static uint32_t x206 = 241513189U;
	uint8_t x207 = 9U;
	int32_t t38 = 1055185253;

	t38 = (((x205+x206)<=x207)-x208);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x210 = UINT16_MAX;
	static uint8_t x211 = UINT8_MAX;
	int8_t x212 = -42;
	static int32_t t39 = 505;

	t39 = (((x209+x210)<=x211)-x212);

	if (t39 != 42) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x213 = INT8_MAX;
	volatile uint16_t x214 = 660U;
	uint8_t x215 = 10U;
	volatile int32_t t40 = 3;

	t40 = (((x213+x214)<=x215)-x216);

	if (t40 != -246) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x217 = INT32_MIN;
	uint32_t x218 = 214U;
	volatile int32_t x219 = 1383;
	volatile int64_t x220 = 6775873878985LL;
	volatile int64_t t41 = 1639916424819468829LL;

	t41 = (((x217+x218)<=x219)-x220);

	if (t41 != -6775873878985LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x225 = 80394;
	int16_t x227 = -4585;
	uint64_t x228 = 7LLU;
	uint64_t t42 = 163595725699015260LLU;

	t42 = (((x225+x226)<=x227)-x228);

	if (t42 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x230 = 21586LLU;
	int16_t x231 = INT16_MIN;
	int32_t x232 = 1717;
	static int32_t t43 = -3981;

	t43 = (((x229+x230)<=x231)-x232);

	if (t43 != -1716) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x233 = 31U;
	static int8_t x234 = INT8_MAX;
	volatile int64_t x235 = 162781442113472LL;
	uint16_t x236 = UINT16_MAX;
	int32_t t44 = -1064740535;

	t44 = (((x233+x234)<=x235)-x236);

	if (t44 != -65534) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MIN;
	int64_t x240 = 286815LL;
	static int64_t t45 = 618840918893176058LL;

	t45 = (((x237+x238)<=x239)-x240);

	if (t45 != -286814LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x249 = -533187LL;
	int16_t x250 = -1;
	int16_t x251 = 244;
	int8_t x252 = INT8_MIN;

	t46 = (((x249+x250)<=x251)-x252);

	if (t46 != 129) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x253 = UINT64_MAX;
	uint64_t x254 = 228608277424LLU;
	int32_t x255 = -722598608;
	int16_t x256 = INT16_MAX;
	volatile int32_t t47 = 4089;

	t47 = (((x253+x254)<=x255)-x256);

	if (t47 != -32766) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x261 = INT32_MIN;
	static uint8_t x262 = 0U;
	volatile uint64_t x263 = 0LLU;
	int32_t t48 = -1;

	t48 = (((x261+x262)<=x263)-x264);

	if (t48 != -6774) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x269 = UINT8_MAX;
	volatile uint32_t x270 = UINT32_MAX;
	int16_t x271 = INT16_MAX;
	int32_t x272 = -9664219;

	t49 = (((x269+x270)<=x271)-x272);

	if (t49 != 9664220) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x277 = UINT8_MAX;
	int32_t x278 = 566;
	int32_t x279 = INT32_MAX;
	uint32_t x280 = 2005U;
	static uint32_t t50 = 17840772U;

	t50 = (((x277+x278)<=x279)-x280);

	if (t50 != 4294965292U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x281 = 0U;
	volatile int8_t x283 = INT8_MAX;
	static int8_t x284 = 47;
	volatile int32_t t51 = 5631054;

	t51 = (((x281+x282)<=x283)-x284);

	if (t51 != -47) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x285 = 62193127689960896LL;
	int16_t x286 = -1;
	static int32_t x287 = INT32_MAX;
	int16_t x288 = INT16_MIN;
	volatile int32_t t52 = -2769;

	t52 = (((x285+x286)<=x287)-x288);

	if (t52 != 32768) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x289 = -1LL;
	static volatile int8_t x290 = INT8_MIN;
	volatile int32_t t53 = 1;

	t53 = (((x289+x290)<=x291)-x292);

	if (t53 != -14145) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x293 = INT16_MIN;
	volatile int32_t x295 = -1;
	int8_t x296 = INT8_MIN;

	t54 = (((x293+x294)<=x295)-x296);

	if (t54 != 129) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x297 = 5U;
	static int32_t x299 = -1;

	t55 = (((x297+x298)<=x299)-x300);

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x311 = UINT16_MAX;
	volatile uint16_t x312 = 3642U;

	t56 = (((x309+x310)<=x311)-x312);

	if (t56 != -3641) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x313 = 1;
	volatile int16_t x314 = INT16_MAX;
	static int64_t x315 = INT64_MAX;
	int16_t x316 = -1;
	int32_t t57 = -394;

	t57 = (((x313+x314)<=x315)-x316);

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x317 = INT8_MAX;
	static int8_t x318 = -3;
	int32_t t58 = 45277632;

	t58 = (((x317+x318)<=x319)-x320);

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x321 = 74U;
	uint64_t x322 = 5371656685780LLU;
	int8_t x323 = INT8_MIN;
	volatile int16_t x324 = 5982;
	int32_t t59 = 1890;

	t59 = (((x321+x322)<=x323)-x324);

	if (t59 != -5981) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x337 = 91638503U;
	volatile uint32_t x338 = UINT32_MAX;
	uint16_t x339 = 30282U;

	t60 = (((x337+x338)<=x339)-x340);

	if (t60 != 14554718257547828LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x342 = UINT8_MAX;
	uint64_t x343 = 12640LLU;
	uint8_t x344 = 1U;

	t61 = (((x341+x342)<=x343)-x344);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x345 = 1U;
	uint64_t x346 = 0LLU;
	int8_t x347 = -3;
	static int64_t x348 = -1LL;
	int64_t t62 = -1626148839LL;

	t62 = (((x345+x346)<=x347)-x348);

	if (t62 != 2LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x349 = 7U;
	static uint8_t x350 = 22U;
	static int8_t x352 = INT8_MAX;

	t63 = (((x349+x350)<=x351)-x352);

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x354 = INT32_MIN;
	static uint32_t x355 = 87910U;
	static int32_t x356 = -1;
	static int32_t t64 = 1;

	t64 = (((x353+x354)<=x355)-x356);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x361 = INT16_MIN;
	uint16_t x363 = UINT16_MAX;
	int16_t x364 = INT16_MIN;
	int32_t t65 = -997418;

	t65 = (((x361+x362)<=x363)-x364);

	if (t65 != 32769) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x365 = UINT8_MAX;
	uint8_t x367 = 118U;
	int16_t x368 = -1;
	int32_t t66 = 334052;

	t66 = (((x365+x366)<=x367)-x368);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x369 = 189LLU;
	uint16_t x370 = UINT16_MAX;
	static int8_t x371 = INT8_MAX;
	int16_t x372 = -1;
	static volatile int32_t t67 = -8413604;

	t67 = (((x369+x370)<=x371)-x372);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x374 = INT32_MAX;
	uint64_t x375 = 2020020467398LLU;
	int16_t x376 = -1;

	t68 = (((x373+x374)<=x375)-x376);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x377 = -1LL;
	volatile uint8_t x378 = 52U;
	int32_t t69 = -5372;

	t69 = (((x377+x378)<=x379)-x380);

	if (t69 != 32769) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x381 = 89LLU;
	int32_t x382 = INT32_MIN;
	volatile int8_t x384 = INT8_MAX;
	static volatile int32_t t70 = -227;

	t70 = (((x381+x382)<=x383)-x384);

	if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x385 = 8;
	int8_t x386 = -7;
	int64_t x387 = INT64_MAX;
	volatile uint16_t x388 = UINT16_MAX;
	int32_t t71 = 10843;

	t71 = (((x385+x386)<=x387)-x388);

	if (t71 != -65534) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x390 = 4141U;
	static uint64_t x391 = UINT64_MAX;
	int32_t x392 = -1;
	volatile int32_t t72 = -3942098;

	t72 = (((x389+x390)<=x391)-x392);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x403 = 33U;
	volatile int64_t x404 = 5LL;
	int64_t t73 = -260459155LL;

	t73 = (((x401+x402)<=x403)-x404);

	if (t73 != -5LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x413 = -1;
	int32_t x414 = 897;
	uint64_t x415 = 671953LLU;
	uint64_t x416 = 166LLU;
	volatile uint64_t t74 = 124322898LLU;

	t74 = (((x413+x414)<=x415)-x416);

	if (t74 != 18446744073709551451LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x421 = INT16_MAX;
	static int8_t x423 = INT8_MIN;
	int8_t x424 = 1;
	int32_t t75 = -253;

	t75 = (((x421+x422)<=x423)-x424);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x425 = -1LL;
	int16_t x426 = -402;
	int64_t x428 = INT64_MAX;
	int64_t t76 = 2465641384LL;

	t76 = (((x425+x426)<=x427)-x428);

	if (t76 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x433 = 25U;
	volatile int32_t x434 = 8885169;
	int16_t x435 = 84;
	volatile int8_t x436 = INT8_MAX;
	int32_t t77 = -14530056;

	t77 = (((x433+x434)<=x435)-x436);

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x438 = 1;
	uint8_t x439 = 1U;
	uint16_t x440 = 2633U;
	static int32_t t78 = 0;

	t78 = (((x437+x438)<=x439)-x440);

	if (t78 != -2633) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x441 = 11U;
	volatile int64_t x442 = -1LL;
	int64_t x443 = INT64_MAX;
	static int16_t x444 = INT16_MAX;
	int32_t t79 = 272971;

	t79 = (((x441+x442)<=x443)-x444);

	if (t79 != -32766) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x449 = INT64_MIN;
	int16_t x450 = INT16_MAX;
	static uint32_t x451 = 1881U;
	uint32_t x452 = UINT32_MAX;
	volatile uint32_t t80 = 108287U;

	t80 = (((x449+x450)<=x451)-x452);

	if (t80 != 2U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x454 = 31170262U;
	int32_t x455 = INT32_MIN;
	int32_t t81 = -1;

	t81 = (((x453+x454)<=x455)-x456);

	if (t81 != -32766) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x457 = -37;
	uint64_t x458 = 476LLU;
	static volatile int32_t x459 = 5972;

	t82 = (((x457+x458)<=x459)-x460);

	if (t82 != 18446728609500822779LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x461 = INT32_MAX;
	uint32_t x462 = 6621U;
	uint16_t x463 = UINT16_MAX;
	int32_t x464 = -14;
	int32_t t83 = 399641196;

	t83 = (((x461+x462)<=x463)-x464);

	if (t83 != 14) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x465 = 0U;
	uint32_t x466 = 1551U;
	int16_t x467 = -1;
	int16_t x468 = -105;
	volatile int32_t t84 = 259;

	t84 = (((x465+x466)<=x467)-x468);

	if (t84 != 106) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x469 = 2;
	static int8_t x470 = INT8_MIN;
	int8_t x471 = -1;
	uint16_t x472 = UINT16_MAX;
	volatile int32_t t85 = 26875;

	t85 = (((x469+x470)<=x471)-x472);

	if (t85 != -65534) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x473 = UINT16_MAX;
	uint64_t x474 = 0LLU;
	int8_t x475 = INT8_MIN;
	volatile uint64_t t86 = 3333LLU;

	t86 = (((x473+x474)<=x475)-x476);

	if (t86 != 18446744073709322998LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x477 = INT32_MIN;
	int64_t x479 = -1LL;
	static int64_t x480 = -12144348212016427LL;

	t87 = (((x477+x478)<=x479)-x480);

	if (t87 != 12144348212016428LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x481 = INT16_MAX;
	static int16_t x482 = INT16_MAX;
	uint64_t x483 = 65690194614LLU;
	int8_t x484 = -1;

	t88 = (((x481+x482)<=x483)-x484);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x485 = 62U;
	int16_t x486 = INT16_MIN;
	int16_t x487 = -1;
	volatile int8_t x488 = INT8_MAX;
	volatile int32_t t89 = -364755672;

	t89 = (((x485+x486)<=x487)-x488);

	if (t89 != -126) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x501 = INT16_MIN;
	volatile int8_t x502 = -1;
	static int32_t x503 = -10;
	volatile uint64_t x504 = 3516357834LLU;
	static uint64_t t90 = 177043LLU;

	t90 = (((x501+x502)<=x503)-x504);

	if (t90 != 18446744070193193783LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x505 = INT8_MAX;
	volatile uint64_t x506 = UINT64_MAX;
	int16_t x508 = INT16_MIN;
	volatile int32_t t91 = -6;

	t91 = (((x505+x506)<=x507)-x508);

	if (t91 != 32769) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x509 = UINT8_MAX;
	volatile int64_t x510 = -48882260875LL;
	int64_t x512 = -1LL;
	int64_t t92 = -98459234011301LL;

	t92 = (((x509+x510)<=x511)-x512);

	if (t92 != 2LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x513 = 1;
	volatile uint16_t x514 = UINT16_MAX;
	int16_t x515 = INT16_MIN;
	uint32_t x516 = 8U;
	uint32_t t93 = 46637U;

	t93 = (((x513+x514)<=x515)-x516);

	if (t93 != 4294967288U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x518 = INT64_MIN;
	uint8_t x519 = 1U;
	uint16_t x520 = 873U;
	volatile int32_t t94 = -1564;

	t94 = (((x517+x518)<=x519)-x520);

	if (t94 != -872) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x525 = INT8_MIN;
	int16_t x526 = INT16_MAX;
	volatile uint32_t x527 = 3U;
	uint16_t x528 = 22U;
	static int32_t t95 = -462188;

	t95 = (((x525+x526)<=x527)-x528);

	if (t95 != -22) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x537 = -5966804;
	static volatile uint32_t x538 = 4128249U;
	int32_t x539 = -1;
	int32_t t96 = 1929863;

	t96 = (((x537+x538)<=x539)-x540);

	if (t96 != -2147483646) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x541 = -9852;
	int8_t x542 = 49;
	int16_t x543 = INT16_MIN;
	int8_t x544 = -1;
	int32_t t97 = 532;

	t97 = (((x541+x542)<=x543)-x544);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x545 = 26;
	volatile int32_t x546 = -1;
	static volatile int8_t x547 = 5;
	int8_t x548 = INT8_MIN;
	volatile int32_t t98 = 0;

	t98 = (((x545+x546)<=x547)-x548);

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x553 = -1;
	uint64_t x554 = 55386264LLU;
	int32_t x555 = INT32_MAX;
	volatile int32_t t99 = -179;

	t99 = (((x553+x554)<=x555)-x556);

	if (t99 != -71) { NG(); } else { ; }
	
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

