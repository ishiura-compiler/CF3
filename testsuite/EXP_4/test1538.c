#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x15 = INT32_MIN;
static int8_t x25 = INT8_MIN;
volatile uint64_t x38 = 2520060516LLU;
int8_t x40 = -1;
volatile uint64_t t4 = 183585829LLU;
int64_t x43 = -234142303LL;
static int64_t t5 = -863926725LL;
static int8_t x45 = 5;
static uint64_t x46 = 5LLU;
volatile int32_t x48 = INT32_MAX;
static uint64_t t6 = 19LLU;
volatile int64_t t7 = 185164LL;
volatile int16_t x54 = INT16_MIN;
int16_t x58 = -3796;
volatile uint32_t x67 = UINT32_MAX;
uint8_t x73 = UINT8_MAX;
int32_t x77 = -1;
volatile uint32_t t14 = 688U;
volatile int32_t t15 = -61053134;
static uint16_t x85 = 19539U;
static int64_t x106 = 17LL;
volatile int64_t t21 = 617195571005LL;
int64_t x117 = INT64_MIN;
static int16_t x121 = INT16_MIN;
static uint64_t x127 = UINT64_MAX;
static volatile uint64_t t26 = 2LLU;
int32_t t28 = 368084;
static int8_t x145 = -1;
int8_t x146 = INT8_MIN;
volatile uint32_t x149 = 100U;
uint32_t x150 = 9582U;
int8_t x151 = -11;
uint32_t x173 = 59157517U;
volatile int64_t x175 = -1LL;
int64_t x185 = 97625883470LL;
uint16_t x186 = 10002U;
static int64_t t39 = -398575LL;
int64_t x199 = 527400436654LL;
volatile int32_t t41 = -334857858;
uint32_t x238 = UINT32_MAX;
volatile uint8_t x248 = 12U;
volatile uint64_t t51 = 8237298LLU;
static uint16_t x254 = UINT16_MAX;
volatile int8_t x256 = INT8_MIN;
int32_t x257 = -1;
int16_t x260 = -1;
int8_t x264 = INT8_MIN;
int8_t x265 = -1;
int64_t x267 = -3LL;
int64_t t56 = 705LL;
volatile int32_t t57 = 128070136;
static uint64_t x274 = 4490870010464699LLU;
uint16_t x275 = 1U;
uint32_t x276 = 38579U;
uint16_t x279 = 12075U;
uint16_t x284 = 883U;
uint64_t x289 = 283109LLU;
int8_t x295 = 6;
static volatile int8_t x299 = -3;
uint16_t x300 = 1U;
volatile uint64_t t67 = 117991661067002LLU;
uint64_t x319 = UINT64_MAX;
static int64_t t69 = -1355352122924867LL;
volatile uint32_t t70 = 2U;
uint64_t x337 = UINT64_MAX;
static volatile int8_t x343 = INT8_MIN;
static int32_t x345 = INT32_MIN;
uint64_t t75 = 878168125LLU;
int8_t x351 = INT8_MIN;
int64_t x357 = INT64_MIN;
static uint32_t x365 = UINT32_MAX;
static int32_t x369 = INT32_MIN;
int64_t x370 = 5042116099613494LL;
volatile uint32_t x371 = UINT32_MAX;
uint32_t x372 = 211332845U;
volatile int64_t t81 = -51071LL;
uint8_t x377 = 0U;
int8_t x378 = -1;
static uint16_t x380 = UINT16_MAX;
int64_t x387 = -1LL;
int16_t x390 = 98;
volatile uint64_t t86 = 5902LLU;
int64_t x395 = -2988LL;
int64_t x397 = -350LL;
int64_t t88 = 2118367203321LL;
volatile int16_t x402 = INT16_MIN;
volatile int32_t t89 = -28491;
int64_t x408 = INT64_MIN;
uint64_t t91 = 709167427640260446LLU;
int32_t x429 = -5972;
int8_t x436 = INT8_MAX;
static int32_t x441 = INT32_MIN;
volatile int64_t t98 = 240543445LL;
int16_t x445 = INT16_MAX;
volatile int32_t x448 = INT32_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint8_t x2 = UINT8_MAX;
	static volatile int32_t x3 = -1;
	static int32_t x4 = -1;
	volatile int32_t t0 = 1;

	t0 = (x1/(x2-(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = -1;
	int32_t x14 = -1;
	static int16_t x16 = INT16_MIN;
	int32_t t1 = 12119;

	t1 = (x13/(x14-(x15<=x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = UINT16_MAX;
	int8_t x18 = INT8_MIN;
	uint64_t x19 = 225LLU;
	int64_t x20 = -16114LL;
	int32_t t2 = -507070;

	t2 = (x17/(x18-(x19<=x20)));

	if (t2 != -508) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x26 = -1;
	int8_t x27 = INT8_MAX;
	int32_t x28 = 516714;
	volatile int32_t t3 = 39007;

	t3 = (x25/(x26-(x27<=x28)));

	if (t3 != 64) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x37 = INT64_MIN;
	static int8_t x39 = INT8_MIN;

	t4 = (x37/(x38-(x39<=x40)));

	if (t4 != 3659980378LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x41 = -1LL;
	int8_t x42 = INT8_MIN;
	uint64_t x44 = UINT64_MAX;

	t5 = (x41/(x42-(x43<=x44)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x47 = -41;

	t6 = (x45/(x46-(x47<=x48)));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MIN;
	int64_t x50 = -4215051975LL;
	volatile uint16_t x51 = 19256U;
	static int16_t x52 = INT16_MIN;

	t7 = (x49/(x50-(x51<=x52)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x53 = UINT32_MAX;
	volatile int32_t x55 = 1;
	static int8_t x56 = INT8_MAX;
	uint32_t t8 = 6852U;

	t8 = (x53/(x54-(x55<=x56)));

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x57 = -1;
	int8_t x59 = -1;
	int16_t x60 = INT16_MIN;
	volatile int32_t t9 = 3157;

	t9 = (x57/(x58-(x59<=x60)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = -25849758280LL;
	volatile int32_t x62 = -640;
	int8_t x63 = -2;
	static int8_t x64 = 1;
	volatile int64_t t10 = 2573769437472LL;

	t10 = (x61/(x62-(x63<=x64)));

	if (t10 != 40327236LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = -1LL;
	volatile int16_t x66 = INT16_MAX;
	volatile int64_t x68 = INT64_MIN;
	int64_t t11 = -293LL;

	t11 = (x65/(x66-(x67<=x68)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = -1;
	int64_t x70 = 3162477795LL;
	uint32_t x71 = 11885U;
	int8_t x72 = INT8_MAX;
	static volatile int64_t t12 = -76354LL;

	t12 = (x69/(x70-(x71<=x72)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x74 = 2;
	static int64_t x75 = INT64_MAX;
	volatile int64_t x76 = INT64_MAX;
	volatile int32_t t13 = -365;

	t13 = (x73/(x74-(x75<=x76)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x78 = 126416630U;
	volatile int8_t x79 = -1;
	volatile int64_t x80 = INT64_MIN;

	t14 = (x77/(x78-(x79<=x80)));

	if (t14 != 33U) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x81 = INT32_MIN;
	uint8_t x82 = UINT8_MAX;
	int16_t x83 = -1;
	volatile int16_t x84 = 27;

	t15 = (x81/(x82-(x83<=x84)));

	if (t15 != -8454660) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x86 = 18U;
	uint64_t x87 = UINT64_MAX;
	int32_t x88 = INT32_MAX;
	int32_t t16 = 0;

	t16 = (x85/(x86-(x87<=x88)));

	if (t16 != 1085) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x89 = INT8_MIN;
	static int8_t x90 = INT8_MIN;
	int32_t x91 = INT32_MAX;
	uint32_t x92 = UINT32_MAX;
	static volatile int32_t t17 = 4;

	t17 = (x89/(x90-(x91<=x92)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x93 = 1419328U;
	int32_t x94 = INT32_MAX;
	uint64_t x95 = 1013125024786427239LLU;
	int8_t x96 = INT8_MIN;
	volatile uint32_t t18 = 331266734U;

	t18 = (x93/(x94-(x95<=x96)));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = -1LL;
	int64_t x98 = 428402052103LL;
	int32_t x99 = -481924178;
	uint64_t x100 = 481796673919LLU;
	volatile int64_t t19 = -3358744176743LL;

	t19 = (x97/(x98-(x99<=x100)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x101 = 0U;
	static int64_t x102 = -274273LL;
	int32_t x103 = INT32_MAX;
	static int64_t x104 = -15861224LL;
	volatile int64_t t20 = -1989155LL;

	t20 = (x101/(x102-(x103<=x104)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = INT16_MIN;
	uint16_t x107 = 158U;
	int16_t x108 = -1;

	t21 = (x105/(x106-(x107<=x108)));

	if (t21 != -1927LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x109 = INT64_MIN;
	uint64_t x110 = UINT64_MAX;
	volatile int16_t x111 = 2694;
	static uint8_t x112 = 2U;
	uint64_t t22 = 816LLU;

	t22 = (x109/(x110-(x111<=x112)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = 117763U;
	int64_t x114 = INT64_MAX;
	int8_t x115 = 0;
	static volatile uint64_t x116 = 310096773247398LLU;
	int64_t t23 = -9022789079910LL;

	t23 = (x113/(x114-(x115<=x116)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x118 = INT16_MIN;
	static volatile int32_t x119 = INT32_MIN;
	static int32_t x120 = INT32_MAX;
	int64_t t24 = 2259726331794245LL;

	t24 = (x117/(x118-(x119<=x120)));

	if (t24 != 281466387038200LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x122 = 413;
	int16_t x123 = 94;
	uint8_t x124 = 0U;
	volatile int32_t t25 = -361;

	t25 = (x121/(x122-(x123<=x124)));

	if (t25 != -79) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x125 = 14671545U;
	uint64_t x126 = 402685032043433906LLU;
	int16_t x128 = 1;

	t26 = (x125/(x126-(x127<=x128)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x133 = -104880690259LL;
	uint16_t x134 = 2865U;
	uint32_t x135 = UINT32_MAX;
	int8_t x136 = INT8_MIN;
	int64_t t27 = -26776022742253737LL;

	t27 = (x133/(x134-(x135<=x136)));

	if (t27 != -36607570LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = -1;
	int8_t x138 = 1;
	uint16_t x139 = 19U;
	int32_t x140 = INT32_MIN;

	t28 = (x137/(x138-(x139<=x140)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x147 = INT32_MAX;
	int16_t x148 = INT16_MIN;
	int32_t t29 = -143587510;

	t29 = (x145/(x146-(x147<=x148)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x152 = INT64_MIN;
	uint32_t t30 = 1707788052U;

	t30 = (x149/(x150-(x151<=x152)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x153 = 13699U;
	int16_t x154 = INT16_MIN;
	int8_t x155 = -1;
	volatile uint64_t x156 = 57411LLU;
	static volatile int32_t t31 = -7995688;

	t31 = (x153/(x154-(x155<=x156)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x157 = 924951852493LLU;
	int16_t x158 = INT16_MIN;
	int8_t x159 = INT8_MIN;
	static volatile int8_t x160 = -1;
	uint64_t t32 = 767665613LLU;

	t32 = (x157/(x158-(x159<=x160)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x161 = INT8_MAX;
	int16_t x162 = INT16_MIN;
	uint64_t x163 = UINT64_MAX;
	uint64_t x164 = UINT64_MAX;
	static int32_t t33 = -41;

	t33 = (x161/(x162-(x163<=x164)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x165 = 1686U;
	int64_t x166 = INT64_MAX;
	volatile int32_t x167 = 3845753;
	static int32_t x168 = -143;
	volatile int64_t t34 = -3005LL;

	t34 = (x165/(x166-(x167<=x168)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x174 = INT64_MIN;
	static int8_t x176 = INT8_MIN;
	volatile int64_t t35 = -722110273LL;

	t35 = (x173/(x174-(x175<=x176)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x177 = 0;
	static volatile int16_t x178 = INT16_MIN;
	int64_t x179 = INT64_MIN;
	static int32_t x180 = INT32_MIN;
	int32_t t36 = -98433;

	t36 = (x177/(x178-(x179<=x180)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x181 = INT32_MIN;
	volatile uint16_t x182 = 8415U;
	volatile int32_t x183 = -1;
	static uint32_t x184 = 12U;
	volatile int32_t t37 = 1696;

	t37 = (x181/(x182-(x183<=x184)));

	if (t37 != -255197) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x187 = -1056947LL;
	int64_t x188 = -5742LL;
	volatile int64_t t38 = 520534936371LL;

	t38 = (x185/(x186-(x187<=x188)));

	if (t38 != 9761612LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x189 = INT16_MAX;
	int64_t x190 = INT64_MIN;
	int32_t x191 = INT32_MAX;
	int16_t x192 = -377;

	t39 = (x189/(x190-(x191<=x192)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x193 = 9U;
	int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MIN;
	uint32_t x196 = 1481613U;
	volatile int32_t t40 = 499845822;

	t40 = (x193/(x194-(x195<=x196)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x197 = INT16_MAX;
	static int8_t x198 = 1;
	int16_t x200 = INT16_MIN;

	t41 = (x197/(x198-(x199<=x200)));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = INT8_MIN;
	volatile uint16_t x206 = 19U;
	uint64_t x207 = UINT64_MAX;
	volatile int32_t x208 = -1;
	static volatile int32_t t42 = 69;

	t42 = (x205/(x206-(x207<=x208)));

	if (t42 != -7) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x209 = 4959121;
	int16_t x210 = 1308;
	volatile int32_t x211 = -1;
	static int16_t x212 = -1;
	int32_t t43 = -95;

	t43 = (x209/(x210-(x211<=x212)));

	if (t43 != 3794) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x217 = INT32_MIN;
	static int16_t x218 = INT16_MIN;
	uint8_t x219 = 0U;
	int8_t x220 = INT8_MIN;
	int32_t t44 = 2;

	t44 = (x217/(x218-(x219<=x220)));

	if (t44 != 65536) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x221 = -1LL;
	uint16_t x222 = 0U;
	volatile int64_t x223 = -60LL;
	volatile int16_t x224 = -1;
	static volatile int64_t t45 = -424413643903818LL;

	t45 = (x221/(x222-(x223<=x224)));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x225 = INT8_MIN;
	uint8_t x226 = UINT8_MAX;
	uint8_t x227 = 36U;
	static int16_t x228 = -1;
	int32_t t46 = 23216;

	t46 = (x225/(x226-(x227<=x228)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = -884;
	int16_t x230 = INT16_MIN;
	volatile int32_t x231 = INT32_MIN;
	uint8_t x232 = UINT8_MAX;
	int32_t t47 = 422466;

	t47 = (x229/(x230-(x231<=x232)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x233 = 9975;
	uint32_t x234 = 979U;
	volatile int64_t x235 = 14831192479026966LL;
	volatile int8_t x236 = -1;
	volatile uint32_t t48 = 207U;

	t48 = (x233/(x234-(x235<=x236)));

	if (t48 != 10U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x237 = -1LL;
	volatile int8_t x239 = -1;
	static uint32_t x240 = 2708830U;
	static int64_t t49 = -5087440952LL;

	t49 = (x237/(x238-(x239<=x240)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x241 = -727767239LL;
	uint8_t x242 = UINT8_MAX;
	int8_t x243 = -1;
	uint32_t x244 = UINT32_MAX;
	volatile int64_t t50 = -3964181361835LL;

	t50 = (x241/(x242-(x243<=x244)));

	if (t50 != -2865225LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x245 = -232707835961LL;
	uint64_t x246 = 993253608456751934LLU;
	int64_t x247 = 197LL;

	t51 = (x245/(x246-(x247<=x248)));

	if (t51 != 18LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = INT64_MIN;
	static volatile int32_t x250 = -490348886;
	int64_t x251 = INT64_MAX;
	int64_t x252 = INT64_MIN;
	static volatile int64_t t52 = 1532LL;

	t52 = (x249/(x250-(x251<=x252)));

	if (t52 != 18809815419LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x253 = -1LL;
	static int16_t x255 = 861;
	volatile int64_t t53 = 1143LL;

	t53 = (x253/(x254-(x255<=x256)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x258 = INT16_MIN;
	int64_t x259 = -1LL;
	volatile int32_t t54 = -5;

	t54 = (x257/(x258-(x259<=x260)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x261 = INT32_MAX;
	int32_t x262 = -28535;
	int16_t x263 = INT16_MAX;
	int32_t t55 = 81;

	t55 = (x261/(x262-(x263<=x264)));

	if (t55 != -75257) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x266 = -1LL;
	uint32_t x268 = UINT32_MAX;

	t56 = (x265/(x266-(x267<=x268)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x269 = 79U;
	int8_t x270 = -5;
	int8_t x271 = -1;
	uint8_t x272 = UINT8_MAX;

	t57 = (x269/(x270-(x271<=x272)));

	if (t57 != -13) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x273 = 499U;
	static uint64_t t58 = 13841655415269323LLU;

	t58 = (x273/(x274-(x275<=x276)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = -1LL;
	int16_t x278 = -1;
	int32_t x280 = INT32_MIN;
	int64_t t59 = -78734361603843654LL;

	t59 = (x277/(x278-(x279<=x280)));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x281 = 135;
	int64_t x282 = -1LL;
	int32_t x283 = INT32_MIN;
	volatile int64_t t60 = -424LL;

	t60 = (x281/(x282-(x283<=x284)));

	if (t60 != -67LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x285 = INT32_MIN;
	int32_t x286 = INT32_MIN;
	uint8_t x287 = UINT8_MAX;
	uint64_t x288 = 1LLU;
	int32_t t61 = 21;

	t61 = (x285/(x286-(x287<=x288)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x290 = -1;
	uint8_t x291 = UINT8_MAX;
	int32_t x292 = INT32_MIN;
	uint64_t t62 = 44834850198LLU;

	t62 = (x289/(x290-(x291<=x292)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = -1LL;
	int16_t x294 = INT16_MIN;
	volatile int32_t x296 = -1;
	volatile int64_t t63 = -1288521917147943757LL;

	t63 = (x293/(x294-(x295<=x296)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = INT16_MIN;
	int64_t x298 = INT64_MAX;
	static int64_t t64 = 1083LL;

	t64 = (x297/(x298-(x299<=x300)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x301 = -1;
	volatile int32_t x302 = INT32_MAX;
	static int8_t x303 = INT8_MIN;
	int8_t x304 = INT8_MIN;
	volatile int32_t t65 = -1;

	t65 = (x301/(x302-(x303<=x304)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = INT16_MIN;
	int16_t x306 = INT16_MIN;
	uint16_t x307 = UINT16_MAX;
	int64_t x308 = -193051LL;
	int32_t t66 = -59833894;

	t66 = (x305/(x306-(x307<=x308)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x309 = INT8_MAX;
	uint64_t x310 = 1310948359186842LLU;
	int32_t x311 = INT32_MIN;
	int8_t x312 = INT8_MAX;

	t67 = (x309/(x310-(x311<=x312)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x313 = INT64_MAX;
	uint64_t x314 = UINT64_MAX;
	int32_t x315 = -1;
	static uint64_t x316 = 463541LLU;
	volatile uint64_t t68 = 1487LLU;

	t68 = (x313/(x314-(x315<=x316)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x317 = 0LL;
	int64_t x318 = INT64_MAX;
	int16_t x320 = INT16_MIN;

	t69 = (x317/(x318-(x319<=x320)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x321 = 14737U;
	int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MAX;
	volatile int32_t x324 = -14;

	t70 = (x321/(x322-(x323<=x324)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = INT32_MAX;
	volatile uint64_t x330 = 3882LLU;
	volatile int8_t x331 = 0;
	static volatile int8_t x332 = -1;
	static uint64_t t71 = 9624027122LLU;

	t71 = (x329/(x330-(x331<=x332)));

	if (t71 != 553190LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x333 = 177U;
	volatile int16_t x334 = -1;
	uint32_t x335 = UINT32_MAX;
	volatile int8_t x336 = 26;
	volatile uint32_t t72 = 2660U;

	t72 = (x333/(x334-(x335<=x336)));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x338 = INT16_MIN;
	int32_t x339 = INT32_MAX;
	uint64_t x340 = 210217366336048801LLU;
	volatile uint64_t t73 = 1500561628LLU;

	t73 = (x337/(x338-(x339<=x340)));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x341 = 1;
	int8_t x342 = 2;
	volatile uint64_t x344 = 3862215LLU;
	static int32_t t74 = -12;

	t74 = (x341/(x342-(x343<=x344)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x346 = 252641281649812LLU;
	int64_t x347 = 4553LL;
	volatile int64_t x348 = INT64_MIN;

	t75 = (x345/(x346-(x347<=x348)));

	if (t75 != 73015LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x349 = 464547966058661LLU;
	uint64_t x350 = 7687183778528992LLU;
	int32_t x352 = INT32_MIN;
	uint64_t t76 = 63795644912735LLU;

	t76 = (x349/(x350-(x351<=x352)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x353 = INT8_MIN;
	static int8_t x354 = INT8_MIN;
	int8_t x355 = INT8_MIN;
	volatile int64_t x356 = INT64_MIN;
	int32_t t77 = 1;

	t77 = (x353/(x354-(x355<=x356)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x358 = -14;
	int8_t x359 = -1;
	int64_t x360 = 10LL;
	int64_t t78 = -3899101753623485622LL;

	t78 = (x357/(x358-(x359<=x360)));

	if (t78 != 614891469123651720LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x361 = 12899U;
	static volatile int64_t x362 = -7086470LL;
	int16_t x363 = -1;
	int8_t x364 = INT8_MIN;
	volatile int64_t t79 = 65403469LL;

	t79 = (x361/(x362-(x363<=x364)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x366 = -1;
	uint32_t x367 = UINT32_MAX;
	volatile int64_t x368 = INT64_MIN;
	uint32_t t80 = 223950438U;

	t80 = (x365/(x366-(x367<=x368)));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {


	t81 = (x369/(x370-(x371<=x372)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x373 = -1;
	static int8_t x374 = -21;
	static uint16_t x375 = 3182U;
	int8_t x376 = 6;
	int32_t t82 = -475;

	t82 = (x373/(x374-(x375<=x376)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x379 = -2101;
	int32_t t83 = -913;

	t83 = (x377/(x378-(x379<=x380)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x381 = INT8_MAX;
	int16_t x382 = INT16_MAX;
	int64_t x383 = INT64_MIN;
	int8_t x384 = -1;
	int32_t t84 = -1910214;

	t84 = (x381/(x382-(x383<=x384)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x385 = INT32_MIN;
	uint64_t x386 = UINT64_MAX;
	static int32_t x388 = -32;
	uint64_t t85 = 4967474320038359LLU;

	t85 = (x385/(x386-(x387<=x388)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x389 = 1122LLU;
	int64_t x391 = INT64_MIN;
	volatile int8_t x392 = -11;

	t86 = (x389/(x390-(x391<=x392)));

	if (t86 != 11LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x393 = INT64_MAX;
	static int16_t x394 = INT16_MAX;
	int8_t x396 = -1;
	volatile int64_t t87 = 1973682100LL;

	t87 = (x393/(x394-(x395<=x396)));

	if (t87 != 281492157628480LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x398 = INT64_MAX;
	int64_t x399 = -1LL;
	uint8_t x400 = 18U;

	t88 = (x397/(x398-(x399<=x400)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x401 = INT16_MIN;
	uint32_t x403 = UINT32_MAX;
	static int64_t x404 = 106873257249315LL;

	t89 = (x401/(x402-(x403<=x404)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x405 = -2420;
	volatile int64_t x406 = INT64_MAX;
	uint32_t x407 = UINT32_MAX;
	volatile int64_t t90 = 1778572121LL;

	t90 = (x405/(x406-(x407<=x408)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x413 = 28031903961976LLU;
	static uint32_t x414 = UINT32_MAX;
	static volatile int16_t x415 = INT16_MAX;
	volatile int32_t x416 = INT32_MAX;

	t91 = (x413/(x414-(x415<=x416)));

	if (t91 != 6526LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x417 = 0U;
	volatile uint8_t x418 = 7U;
	volatile uint8_t x419 = 10U;
	int8_t x420 = INT8_MIN;
	volatile uint32_t t92 = 286107689U;

	t92 = (x417/(x418-(x419<=x420)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x421 = 11LLU;
	static int32_t x422 = 0;
	static int32_t x423 = -1;
	static uint16_t x424 = 5U;
	static uint64_t t93 = 6492344617086LLU;

	t93 = (x421/(x422-(x423<=x424)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x425 = 12U;
	volatile int16_t x426 = INT16_MIN;
	uint32_t x427 = UINT32_MAX;
	int16_t x428 = -197;
	uint32_t t94 = 16380851U;

	t94 = (x425/(x426-(x427<=x428)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x430 = 13570986914291822LL;
	uint16_t x431 = 3195U;
	int8_t x432 = -1;
	static volatile int64_t t95 = 85689085316565631LL;

	t95 = (x429/(x430-(x431<=x432)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x433 = -32221LL;
	static uint8_t x434 = 10U;
	int8_t x435 = INT8_MIN;
	int64_t t96 = -131475512352LL;

	t96 = (x433/(x434-(x435<=x436)));

	if (t96 != -3580LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x437 = 0U;
	int8_t x438 = INT8_MAX;
	int32_t x439 = INT32_MIN;
	static volatile uint16_t x440 = UINT16_MAX;
	volatile int32_t t97 = -2;

	t97 = (x437/(x438-(x439<=x440)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x442 = INT64_MIN;
	int32_t x443 = 34129290;
	int8_t x444 = INT8_MIN;

	t98 = (x441/(x442-(x443<=x444)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x446 = -157605;
	int8_t x447 = INT8_MIN;
	static int32_t t99 = 0;

	t99 = (x445/(x446-(x447<=x448)));

	if (t99 != 0) { NG(); } else { ; }
	
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

