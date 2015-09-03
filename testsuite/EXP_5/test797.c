#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 197;
int64_t x10 = INT64_MIN;
int32_t x12 = -1;
int64_t x17 = INT64_MAX;
int8_t x18 = INT8_MIN;
static int32_t x19 = 1;
static int16_t x26 = -1;
int16_t x46 = INT16_MIN;
int64_t x48 = INT64_MAX;
uint64_t x55 = 314520893LLU;
uint32_t x58 = 360020U;
uint64_t x60 = 23055524LLU;
uint32_t t8 = 2918U;
static uint64_t x67 = 89526028177007LLU;
int16_t x70 = -503;
int32_t x71 = INT32_MAX;
static int16_t x72 = -1;
static volatile int32_t x75 = INT32_MIN;
volatile int16_t x89 = 115;
int32_t x93 = INT32_MIN;
static uint32_t x96 = 2330538U;
int32_t t14 = INT32_MIN;
uint32_t x100 = 1284000375U;
uint8_t x103 = UINT8_MAX;
int64_t x126 = -1LL;
uint16_t x132 = 414U;
static uint32_t x136 = 7U;
int16_t x137 = INT16_MAX;
int16_t x138 = -30;
uint64_t x145 = 7058198443LLU;
volatile int64_t x159 = INT64_MAX;
uint16_t x160 = 1785U;
int16_t x175 = -1;
uint16_t x176 = 778U;
int32_t t29 = -197;
int16_t x197 = 634;
static int16_t x198 = INT16_MIN;
int64_t x199 = INT64_MIN;
uint8_t x202 = 3U;
int64_t t31 = INT64_MIN;
static int32_t x207 = 6969;
uint64_t x208 = 2609786996LLU;
uint8_t x209 = 124U;
volatile int32_t t36 = -29950;
volatile int32_t x234 = INT32_MIN;
uint8_t x242 = 3U;
static int8_t x247 = INT8_MAX;
static int8_t x248 = 4;
int16_t x252 = INT16_MAX;
volatile uint16_t x256 = UINT16_MAX;
uint8_t x258 = 7U;
static volatile int32_t t43 = -11447;
int32_t x273 = INT32_MIN;
volatile int64_t x278 = 139114365LL;
int32_t t48 = -2985991;
int16_t x314 = INT16_MIN;
int8_t x315 = INT8_MIN;
static uint64_t t53 = 487242724817386LLU;
uint16_t x331 = UINT16_MAX;
int64_t x342 = -23795LL;
static uint8_t x343 = UINT8_MAX;
volatile int64_t t58 = -643832344990134LL;
int64_t t59 = INT64_MAX;
volatile int16_t x363 = 14;
uint64_t x385 = 21LLU;
uint32_t x388 = 3515U;
static volatile uint32_t x398 = 1329047U;
int8_t x400 = 41;
static int16_t x405 = 10;
volatile uint8_t x406 = UINT8_MAX;
int8_t x407 = INT8_MAX;
uint32_t t66 = UINT32_MAX;
int32_t x431 = INT32_MIN;
volatile int64_t t67 = 0LL;
int16_t x449 = 505;
int64_t x450 = -89370741295465156LL;
uint32_t x459 = 1015U;
volatile int32_t t71 = -62692;
static uint32_t x480 = UINT32_MAX;
volatile int32_t t75 = 959;
static int16_t x488 = -1;
static int64_t x501 = INT64_MIN;
int32_t x502 = INT32_MIN;
int32_t x510 = INT32_MIN;
uint8_t x515 = UINT8_MAX;
uint16_t x544 = UINT16_MAX;
volatile int32_t x567 = 117879594;
uint64_t x585 = 3978587LLU;
static int8_t x589 = -1;
static uint32_t x590 = 3U;
int8_t x603 = -1;
static int32_t x618 = -1;
int8_t x622 = -13;
int16_t x623 = INT16_MIN;


void f0(void) {
	int8_t x1 = 2;
	static uint32_t x2 = 1U;
	uint16_t x3 = UINT16_MAX;
	uint8_t x4 = 21U;

	t0 = (x1/((x2%x3)<=x4));

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = 529091862753956439LL;
	static uint32_t x11 = UINT32_MAX;
	volatile int64_t t1 = 62024097916841398LL;

	t1 = (x9/((x10%x11)<=x12));

	if (t1 != 529091862753956439LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = 235U;
	int32_t x14 = 24;
	int16_t x15 = -1;
	uint8_t x16 = UINT8_MAX;
	static volatile uint32_t t2 = 15921106U;

	t2 = (x13/((x14%x15)<=x16));

	if (t2 != 235U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x20 = 14500926737748932LL;
	volatile int64_t t3 = INT64_MAX;

	t3 = (x17/((x18%x19)<=x20));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	volatile uint64_t x22 = UINT64_MAX;
	int32_t x23 = 740562;
	int8_t x24 = -1;
	volatile int32_t t4 = 433;

	t4 = (x21/((x22%x23)<=x24));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	static int16_t x27 = INT16_MIN;
	uint8_t x28 = 2U;
	int64_t t5 = INT64_MIN;

	t5 = (x25/((x26%x27)<=x28));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x45 = 27U;
	volatile int64_t x47 = -1LL;
	volatile int32_t t6 = -12264;

	t6 = (x45/((x46%x47)<=x48));

	if (t6 != 27) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x53 = 99U;
	int16_t x54 = 26;
	int8_t x56 = INT8_MAX;
	int32_t t7 = 115;

	t7 = (x53/((x54%x55)<=x56));

	if (t7 != 99) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x57 = 139835U;
	uint8_t x59 = UINT8_MAX;

	t8 = (x57/((x58%x59)<=x60));

	if (t8 != 139835U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x65 = 14900698570733418LLU;
	int8_t x66 = -7;
	static int32_t x68 = INT32_MIN;
	volatile uint64_t t9 = 4896967LLU;

	t9 = (x65/((x66%x67)<=x68));

	if (t9 != 14900698570733418LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x69 = INT32_MIN;
	int32_t t10 = INT32_MIN;

	t10 = (x69/((x70%x71)<=x72));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = INT16_MAX;
	volatile uint64_t x74 = 14LLU;
	static int64_t x76 = -7283LL;
	static volatile int32_t t11 = 112725988;

	t11 = (x73/((x74%x75)<=x76));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x81 = -1;
	static int16_t x82 = INT16_MIN;
	static int16_t x83 = -1;
	static int8_t x84 = 0;
	int32_t t12 = -253860834;

	t12 = (x81/((x82%x83)<=x84));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x90 = -3090266715667416LL;
	uint8_t x91 = 25U;
	int32_t x92 = -1;
	volatile int32_t t13 = 241899672;

	t13 = (x89/((x90%x91)<=x92));

	if (t13 != 115) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x94 = UINT16_MAX;
	int32_t x95 = 533994625;

	t14 = (x93/((x94%x95)<=x96));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x97 = INT8_MAX;
	int8_t x98 = INT8_MAX;
	uint64_t x99 = 936LLU;
	volatile int32_t t15 = 18479591;

	t15 = (x97/((x98%x99)<=x100));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x101 = UINT16_MAX;
	static int16_t x102 = INT16_MAX;
	int32_t x104 = INT32_MAX;
	int32_t t16 = 1871;

	t16 = (x101/((x102%x103)<=x104));

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x113 = INT8_MIN;
	uint16_t x114 = 10U;
	volatile int16_t x115 = INT16_MIN;
	static volatile uint64_t x116 = 19058540LLU;
	int32_t t17 = 108424;

	t17 = (x113/((x114%x115)<=x116));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x117 = 2588;
	volatile uint8_t x118 = UINT8_MAX;
	uint64_t x119 = 24034945LLU;
	int16_t x120 = INT16_MAX;
	volatile int32_t t18 = -1;

	t18 = (x117/((x118%x119)<=x120));

	if (t18 != 2588) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x125 = -1LL;
	uint64_t x127 = 4492614747208859LLU;
	int64_t x128 = 101241464233479335LL;
	volatile int64_t t19 = -143LL;

	t19 = (x125/((x126%x127)<=x128));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x129 = INT64_MIN;
	uint64_t x130 = 1046LLU;
	static int8_t x131 = INT8_MAX;
	int64_t t20 = INT64_MIN;

	t20 = (x129/((x130%x131)<=x132));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x133 = INT32_MAX;
	uint32_t x134 = 175546202U;
	static volatile uint8_t x135 = 1U;
	int32_t t21 = INT32_MAX;

	t21 = (x133/((x134%x135)<=x136));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x139 = 1;
	uint32_t x140 = 1339596192U;
	int32_t t22 = 52832;

	t22 = (x137/((x138%x139)<=x140));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x146 = -96431069;
	int32_t x147 = INT32_MAX;
	uint8_t x148 = 5U;
	uint64_t t23 = 2077951462250196LLU;

	t23 = (x145/((x146%x147)<=x148));

	if (t23 != 7058198443LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x153 = INT32_MIN;
	static int8_t x154 = -1;
	uint64_t x155 = 85989433LLU;
	int8_t x156 = -1;
	int32_t t24 = INT32_MIN;

	t24 = (x153/((x154%x155)<=x156));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x157 = -910LL;
	static volatile uint16_t x158 = 488U;
	volatile int64_t t25 = -504LL;

	t25 = (x157/((x158%x159)<=x160));

	if (t25 != -910LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x161 = INT64_MIN;
	int64_t x162 = -17135356689959825LL;
	int8_t x163 = INT8_MAX;
	volatile int32_t x164 = 15;
	volatile int64_t t26 = INT64_MIN;

	t26 = (x161/((x162%x163)<=x164));

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x173 = 65404LLU;
	int8_t x174 = INT8_MIN;
	static uint64_t t27 = 11370282LLU;

	t27 = (x173/((x174%x175)<=x176));

	if (t27 != 65404LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x189 = -1;
	int16_t x190 = -1;
	volatile uint8_t x191 = UINT8_MAX;
	int32_t x192 = INT32_MAX;
	static volatile int32_t t28 = 75;

	t28 = (x189/((x190%x191)<=x192));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x193 = -1;
	uint8_t x194 = 22U;
	int32_t x195 = -1;
	uint64_t x196 = UINT64_MAX;

	t29 = (x193/((x194%x195)<=x196));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x200 = -1;
	volatile int32_t t30 = 28;

	t30 = (x197/((x198%x199)<=x200));

	if (t30 != 634) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x201 = INT64_MIN;
	static volatile int8_t x203 = -23;
	uint64_t x204 = 1304441734LLU;

	t31 = (x201/((x202%x203)<=x204));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x205 = 1U;
	uint32_t x206 = 81275393U;
	volatile int32_t t32 = -265;

	t32 = (x205/((x206%x207)<=x208));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x210 = 449085784U;
	int8_t x211 = 15;
	int64_t x212 = INT64_MAX;
	volatile int32_t t33 = 0;

	t33 = (x209/((x210%x211)<=x212));

	if (t33 != 124) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x213 = 197;
	int32_t x214 = INT32_MIN;
	int64_t x215 = INT64_MIN;
	volatile int32_t x216 = INT32_MIN;
	int32_t t34 = -21684811;

	t34 = (x213/((x214%x215)<=x216));

	if (t34 != 197) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x217 = 1705743U;
	volatile int32_t x218 = -251347;
	int32_t x219 = INT32_MAX;
	int16_t x220 = 1;
	volatile uint32_t t35 = 199582U;

	t35 = (x217/((x218%x219)<=x220));

	if (t35 != 1705743U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x225 = -1;
	int32_t x226 = INT32_MIN;
	int8_t x227 = -1;
	uint64_t x228 = 7129217835050003LLU;

	t36 = (x225/((x226%x227)<=x228));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x233 = UINT32_MAX;
	static uint16_t x235 = UINT16_MAX;
	int16_t x236 = -1;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = (x233/((x234%x235)<=x236));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x237 = -300539LL;
	int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MIN;
	static int32_t x240 = INT32_MAX;
	int64_t t38 = 93830LL;

	t38 = (x237/((x238%x239)<=x240));

	if (t38 != -300539LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x241 = UINT64_MAX;
	static volatile int16_t x243 = 42;
	volatile uint32_t x244 = UINT32_MAX;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = (x241/((x242%x243)<=x244));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x245 = -43603309175955904LL;
	int16_t x246 = INT16_MIN;
	volatile int64_t t40 = 23822682430633LL;

	t40 = (x245/((x246%x247)<=x248));

	if (t40 != -43603309175955904LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x249 = 9LLU;
	static uint32_t x250 = UINT32_MAX;
	int16_t x251 = INT16_MIN;
	volatile uint64_t t41 = 7LLU;

	t41 = (x249/((x250%x251)<=x252));

	if (t41 != 9LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x253 = 228U;
	int8_t x254 = INT8_MIN;
	volatile int32_t x255 = INT32_MIN;
	volatile uint32_t t42 = 13463402U;

	t42 = (x253/((x254%x255)<=x256));

	if (t42 != 228U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x257 = -1;
	volatile uint64_t x259 = UINT64_MAX;
	int8_t x260 = INT8_MAX;

	t43 = (x257/((x258%x259)<=x260));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x274 = INT32_MIN;
	uint32_t x275 = 3U;
	int16_t x276 = INT16_MAX;
	volatile int32_t t44 = INT32_MIN;

	t44 = (x273/((x274%x275)<=x276));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x277 = INT32_MIN;
	volatile int8_t x279 = 1;
	int32_t x280 = INT32_MAX;
	volatile int32_t t45 = INT32_MIN;

	t45 = (x277/((x278%x279)<=x280));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x281 = INT64_MIN;
	static volatile int32_t x282 = INT32_MAX;
	int16_t x283 = INT16_MIN;
	static uint64_t x284 = 1056604LLU;
	int64_t t46 = INT64_MIN;

	t46 = (x281/((x282%x283)<=x284));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = -232;
	static int8_t x291 = INT8_MIN;
	int16_t x292 = -63;
	int32_t t47 = -6460046;

	t47 = (x289/((x290%x291)<=x292));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x301 = 57;
	static volatile int8_t x302 = -1;
	uint16_t x303 = 8072U;
	volatile int64_t x304 = -1LL;

	t48 = (x301/((x302%x303)<=x304));

	if (t48 != 57) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x305 = UINT16_MAX;
	int16_t x306 = -1;
	static int8_t x307 = INT8_MIN;
	volatile int16_t x308 = INT16_MAX;
	static volatile int32_t t49 = 5101331;

	t49 = (x305/((x306%x307)<=x308));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x309 = -1LL;
	uint32_t x310 = 26381294U;
	int32_t x311 = INT32_MIN;
	volatile int32_t x312 = INT32_MIN;
	volatile int64_t t50 = 1886933367LL;

	t50 = (x309/((x310%x311)<=x312));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x313 = -3711660346471590216LL;
	static volatile uint8_t x316 = UINT8_MAX;
	volatile int64_t t51 = -126999LL;

	t51 = (x313/((x314%x315)<=x316));

	if (t51 != -3711660346471590216LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x317 = 3466U;
	uint32_t x318 = 11U;
	int32_t x319 = INT32_MIN;
	int16_t x320 = 41;
	uint32_t t52 = 217716643U;

	t52 = (x317/((x318%x319)<=x320));

	if (t52 != 3466U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x321 = 21684878211385LLU;
	uint16_t x322 = 1483U;
	int64_t x323 = 98275804LL;
	uint64_t x324 = 620888640LLU;

	t53 = (x321/((x322%x323)<=x324));

	if (t53 != 21684878211385LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x329 = 149U;
	volatile uint32_t x330 = 49717745U;
	int16_t x332 = -1;
	static int32_t t54 = -1866;

	t54 = (x329/((x330%x331)<=x332));

	if (t54 != 149) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x337 = UINT64_MAX;
	static uint8_t x338 = 13U;
	uint64_t x339 = 1868254LLU;
	volatile int16_t x340 = -1;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x337/((x338%x339)<=x340));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x341 = 6;
	uint16_t x344 = 11713U;
	volatile int32_t t56 = -733;

	t56 = (x341/((x342%x343)<=x344));

	if (t56 != 6) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x345 = -1;
	static int32_t x346 = -1;
	uint32_t x347 = 1U;
	int16_t x348 = INT16_MIN;
	int32_t t57 = 1160092;

	t57 = (x345/((x346%x347)<=x348));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x349 = 16178683333075397LL;
	int16_t x350 = 0;
	uint64_t x351 = 5517747318472734418LLU;
	int32_t x352 = 150527;

	t58 = (x349/((x350%x351)<=x352));

	if (t58 != 16178683333075397LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x357 = INT64_MAX;
	uint32_t x358 = UINT32_MAX;
	int16_t x359 = INT16_MAX;
	uint8_t x360 = UINT8_MAX;

	t59 = (x357/((x358%x359)<=x360));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x361 = -1;
	static uint64_t x362 = 150997LLU;
	uint32_t x364 = 29773U;
	int32_t t60 = 719;

	t60 = (x361/((x362%x363)<=x364));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x381 = INT64_MIN;
	static uint8_t x382 = 60U;
	uint32_t x383 = 407875614U;
	int16_t x384 = INT16_MIN;
	volatile int64_t t61 = INT64_MIN;

	t61 = (x381/((x382%x383)<=x384));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x386 = 93U;
	uint8_t x387 = 1U;
	uint64_t t62 = 3993570066220280815LLU;

	t62 = (x385/((x386%x387)<=x388));

	if (t62 != 21LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x397 = 36733467U;
	uint16_t x399 = 7U;
	volatile uint32_t t63 = 6156589U;

	t63 = (x397/((x398%x399)<=x400));

	if (t63 != 36733467U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x408 = 91U;
	int32_t t64 = 47;

	t64 = (x405/((x406%x407)<=x408));

	if (t64 != 10) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x409 = 62399436U;
	int32_t x410 = INT32_MAX;
	uint64_t x411 = UINT64_MAX;
	uint64_t x412 = 4193011729089940LLU;
	uint32_t t65 = 151437U;

	t65 = (x409/((x410%x411)<=x412));

	if (t65 != 62399436U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x421 = UINT32_MAX;
	uint32_t x422 = 71529318U;
	int32_t x423 = -1;
	uint32_t x424 = UINT32_MAX;

	t66 = (x421/((x422%x423)<=x424));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x429 = 56457116820751LL;
	volatile uint64_t x430 = 791579966396144711LLU;
	int8_t x432 = -1;

	t67 = (x429/((x430%x431)<=x432));

	if (t67 != 56457116820751LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x437 = -1;
	int8_t x438 = -19;
	static int16_t x439 = INT16_MIN;
	int8_t x440 = INT8_MAX;
	int32_t t68 = -2;

	t68 = (x437/((x438%x439)<=x440));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x441 = -3;
	uint32_t x442 = 1390270U;
	volatile uint64_t x443 = 29LLU;
	int64_t x444 = -1LL;
	volatile int32_t t69 = 0;

	t69 = (x441/((x442%x443)<=x444));

	if (t69 != -3) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x451 = 63U;
	uint8_t x452 = 90U;
	static int32_t t70 = -430248959;

	t70 = (x449/((x450%x451)<=x452));

	if (t70 != 505) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x457 = INT16_MAX;
	volatile int64_t x458 = INT64_MIN;
	int64_t x460 = 3926583LL;

	t71 = (x457/((x458%x459)<=x460));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x469 = -1;
	volatile uint8_t x470 = UINT8_MAX;
	uint8_t x471 = 1U;
	volatile uint16_t x472 = UINT16_MAX;
	int32_t t72 = -1;

	t72 = (x469/((x470%x471)<=x472));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x473 = UINT64_MAX;
	static int16_t x474 = -12034;
	int32_t x475 = INT32_MAX;
	int16_t x476 = 627;
	static uint64_t t73 = UINT64_MAX;

	t73 = (x473/((x474%x475)<=x476));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x477 = UINT64_MAX;
	static int32_t x478 = -1;
	int32_t x479 = INT32_MIN;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (x477/((x478%x479)<=x480));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x481 = 4U;
	static uint16_t x482 = 7U;
	int16_t x483 = INT16_MAX;
	uint8_t x484 = 13U;

	t75 = (x481/((x482%x483)<=x484));

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x485 = INT32_MIN;
	static int16_t x486 = 226;
	static uint64_t x487 = 19202725953188LLU;
	volatile int32_t t76 = INT32_MIN;

	t76 = (x485/((x486%x487)<=x488));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x497 = -1;
	uint64_t x498 = 10825849LLU;
	static volatile uint8_t x499 = 24U;
	uint32_t x500 = 23284712U;
	volatile int32_t t77 = -227;

	t77 = (x497/((x498%x499)<=x500));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x503 = -1;
	static int8_t x504 = INT8_MAX;
	int64_t t78 = INT64_MIN;

	t78 = (x501/((x502%x503)<=x504));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x505 = INT8_MIN;
	int32_t x506 = INT32_MIN;
	int32_t x507 = -1;
	volatile uint8_t x508 = UINT8_MAX;
	static int32_t t79 = 127;

	t79 = (x505/((x506%x507)<=x508));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x509 = 2466877LLU;
	static uint32_t x511 = 53912835U;
	int8_t x512 = INT8_MIN;
	uint64_t t80 = 13287366685736265LLU;

	t80 = (x509/((x510%x511)<=x512));

	if (t80 != 2466877LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x513 = INT16_MIN;
	int32_t x514 = -50170;
	int16_t x516 = INT16_MAX;
	static volatile int32_t t81 = 123487;

	t81 = (x513/((x514%x515)<=x516));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x521 = 58U;
	static int16_t x522 = -94;
	static int64_t x523 = 151243580994LL;
	static int8_t x524 = 1;
	int32_t t82 = 191;

	t82 = (x521/((x522%x523)<=x524));

	if (t82 != 58) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x529 = 6415549215117361LLU;
	int32_t x530 = INT32_MAX;
	volatile int32_t x531 = INT32_MAX;
	static uint8_t x532 = 111U;
	uint64_t t83 = 121LLU;

	t83 = (x529/((x530%x531)<=x532));

	if (t83 != 6415549215117361LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x537 = UINT32_MAX;
	int64_t x538 = INT64_MIN;
	uint64_t x539 = 428223100914LLU;
	int8_t x540 = INT8_MIN;
	static volatile uint32_t t84 = UINT32_MAX;

	t84 = (x537/((x538%x539)<=x540));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x541 = INT64_MIN;
	static int64_t x542 = INT64_MIN;
	uint32_t x543 = 167219758U;
	volatile int64_t t85 = INT64_MIN;

	t85 = (x541/((x542%x543)<=x544));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x553 = -3;
	int16_t x554 = INT16_MIN;
	int32_t x555 = INT32_MIN;
	int16_t x556 = INT16_MAX;
	volatile int32_t t86 = -1529;

	t86 = (x553/((x554%x555)<=x556));

	if (t86 != -3) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x557 = INT32_MIN;
	int8_t x558 = INT8_MIN;
	static uint16_t x559 = 46U;
	int32_t x560 = INT32_MAX;
	int32_t t87 = INT32_MIN;

	t87 = (x557/((x558%x559)<=x560));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x561 = INT32_MIN;
	volatile int32_t x562 = INT32_MIN;
	uint16_t x563 = UINT16_MAX;
	int16_t x564 = 470;
	int32_t t88 = INT32_MIN;

	t88 = (x561/((x562%x563)<=x564));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x565 = -2;
	volatile uint64_t x566 = 39LLU;
	volatile int16_t x568 = -1;
	static volatile int32_t t89 = 3159;

	t89 = (x565/((x566%x567)<=x568));

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x569 = INT16_MIN;
	int8_t x570 = INT8_MIN;
	static int16_t x571 = INT16_MIN;
	int32_t x572 = -1;
	int32_t t90 = -54;

	t90 = (x569/((x570%x571)<=x572));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x573 = -1;
	uint32_t x574 = 1991695630U;
	uint8_t x575 = UINT8_MAX;
	static volatile int8_t x576 = INT8_MIN;
	int32_t t91 = -3674;

	t91 = (x573/((x574%x575)<=x576));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x586 = INT32_MAX;
	int16_t x587 = 1;
	int16_t x588 = INT16_MAX;
	static uint64_t t92 = 227LLU;

	t92 = (x585/((x586%x587)<=x588));

	if (t92 != 3978587LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x591 = INT8_MAX;
	static int32_t x592 = -2276;
	static volatile int32_t t93 = 1252008;

	t93 = (x589/((x590%x591)<=x592));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x597 = 73LLU;
	static uint64_t x598 = UINT64_MAX;
	int16_t x599 = INT16_MIN;
	int8_t x600 = -1;
	uint64_t t94 = 21282435435041LLU;

	t94 = (x597/((x598%x599)<=x600));

	if (t94 != 73LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x601 = 326;
	static int8_t x602 = -1;
	uint64_t x604 = 6777030448LLU;
	int32_t t95 = 6466;

	t95 = (x601/((x602%x603)<=x604));

	if (t95 != 326) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x609 = UINT8_MAX;
	uint8_t x610 = 56U;
	int64_t x611 = INT64_MAX;
	uint16_t x612 = 15961U;
	int32_t t96 = 15;

	t96 = (x609/((x610%x611)<=x612));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x613 = 7U;
	uint32_t x614 = UINT32_MAX;
	int32_t x615 = -1;
	volatile int16_t x616 = INT16_MIN;
	static int32_t t97 = -73797;

	t97 = (x613/((x614%x615)<=x616));

	if (t97 != 7) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x617 = 4145;
	volatile int64_t x619 = INT64_MIN;
	uint32_t x620 = 12949U;
	int32_t t98 = 6229003;

	t98 = (x617/((x618%x619)<=x620));

	if (t98 != 4145) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x621 = UINT8_MAX;
	int32_t x624 = -1;
	int32_t t99 = 5665802;

	t99 = (x621/((x622%x623)<=x624));

	if (t99 != 255) { NG(); } else { ; }
	
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

