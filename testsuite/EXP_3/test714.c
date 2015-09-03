#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x9 = 955U;
volatile int32_t t2 = -2284;
int16_t x56 = -3;
static volatile int32_t t7 = -38271;
uint8_t x78 = 3U;
volatile int64_t t11 = 3174LL;
static int16_t x97 = -1;
static int8_t x99 = -21;
uint8_t x107 = UINT8_MAX;
static int8_t x109 = INT8_MAX;
uint8_t x111 = 0U;
volatile int64_t x130 = INT64_MIN;
int8_t x139 = INT8_MIN;
int8_t x141 = INT8_MIN;
volatile int8_t x146 = -1;
int64_t x147 = INT64_MIN;
int64_t t23 = 622104012684210LL;
int16_t x172 = -10898;
int32_t x180 = 11;
volatile uint32_t t28 = 432664U;
static int64_t x190 = INT64_MAX;
int64_t x192 = 823593996053773LL;
uint16_t x205 = 0U;
volatile uint8_t x206 = UINT8_MAX;
static uint8_t x207 = 69U;
static volatile int32_t t32 = 725482;
uint16_t x211 = 3U;
static uint32_t t33 = 1496U;
int32_t x216 = INT32_MAX;
volatile int64_t t34 = 224763990236541LL;
uint16_t x224 = 2951U;
static volatile int64_t x230 = -47LL;
uint64_t x247 = 56257744LLU;
volatile int32_t x265 = -1;
volatile int32_t t42 = -12172087;
int16_t x275 = INT16_MIN;
int64_t x276 = -1LL;
int32_t x282 = -1;
volatile int16_t x295 = 2;
int16_t x298 = -1;
static int16_t x314 = -1;
int8_t x316 = -1;
uint32_t x337 = 452951033U;
int64_t x343 = -1LL;
volatile uint32_t t56 = 1124U;
uint16_t x349 = 870U;
uint32_t x354 = UINT32_MAX;
static int64_t x355 = INT64_MIN;
uint16_t x358 = UINT16_MAX;
int64_t t59 = -384587656622731LL;
static volatile int16_t x370 = -1;
int64_t x371 = 7LL;
uint16_t x386 = 24U;
static volatile int64_t x387 = INT64_MIN;
static uint16_t x401 = 31540U;
int16_t x406 = INT16_MAX;
volatile int64_t x408 = INT64_MIN;
int64_t t65 = -241009759769727186LL;
int32_t x411 = -1;
volatile int64_t t67 = -7992573263LL;
volatile int64_t x448 = INT64_MAX;
volatile int64_t t71 = 981180769194646LL;
uint32_t x450 = UINT32_MAX;
volatile int16_t x451 = INT16_MIN;
static int64_t x457 = 332LL;
volatile int64_t t74 = -451510644881LL;
int8_t x483 = INT8_MIN;
static uint8_t x488 = 86U;
uint8_t x489 = UINT8_MAX;
static uint16_t x497 = 1131U;
int64_t t80 = -9LL;
uint8_t x502 = UINT8_MAX;
static int64_t x513 = 1992LL;
static volatile uint16_t x515 = 30U;
int8_t x520 = 7;
volatile uint8_t x521 = 127U;
static volatile int64_t x524 = -1LL;
volatile int32_t x527 = INT32_MIN;
volatile int32_t t86 = 152;
volatile uint16_t x534 = UINT16_MAX;
static int8_t x544 = INT8_MIN;
uint64_t x550 = 3535LLU;
volatile int8_t x551 = -3;
static uint64_t t91 = 2LLU;
static int8_t x554 = INT8_MIN;
uint64_t x557 = 367LLU;
uint8_t x559 = 1U;
static volatile uint64_t t93 = 634LLU;
static uint8_t x570 = 64U;
static int8_t x574 = -1;
volatile int32_t t96 = 971532;
int8_t x578 = INT8_MIN;
volatile int64_t t97 = 2356922LL;
int16_t x583 = -3098;


void f0(void) {
	int32_t x5 = -1;
	volatile int8_t x6 = -7;
	static int16_t x7 = INT16_MIN;
	uint64_t x8 = UINT64_MAX;
	static volatile uint64_t t0 = 6433438937887LLU;

	t0 = ((x5*x6)|(x7%x8));

	if (t0 != 18446744073709518855LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x10 = 261365U;
	int64_t x11 = INT64_MAX;
	int32_t x12 = INT32_MAX;
	int64_t t1 = 8898LL;

	t1 = ((x9*x10)|(x11%x12));

	if (t1 != 249603575LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x13 = 1305U;
	volatile int16_t x14 = -1;
	static uint16_t x15 = UINT16_MAX;
	int8_t x16 = INT8_MIN;

	t2 = ((x13*x14)|(x15%x16));

	if (t2 != -1281) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x37 = 2;
	static uint16_t x38 = 5U;
	int32_t x39 = INT32_MIN;
	int16_t x40 = INT16_MIN;
	int32_t t3 = 12;

	t3 = ((x37*x38)|(x39%x40));

	if (t3 != 10) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x41 = 2U;
	uint16_t x42 = 18U;
	int8_t x43 = INT8_MIN;
	int8_t x44 = INT8_MAX;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = ((x41*x42)|(x43%x44));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x49 = INT8_MAX;
	int32_t x50 = 0;
	int16_t x51 = 11;
	int64_t x52 = -1590933260166LL;
	static int64_t t5 = 6615529LL;

	t5 = ((x49*x50)|(x51%x52));

	if (t5 != 11LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x53 = INT8_MIN;
	static uint32_t x54 = 237602U;
	static int8_t x55 = -1;
	static volatile uint32_t t6 = UINT32_MAX;

	t6 = ((x53*x54)|(x55%x56));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x57 = 1905;
	volatile int32_t x58 = 4;
	int32_t x59 = -11665897;
	int32_t x60 = INT32_MAX;

	t7 = ((x57*x58)|(x59%x60));

	if (t7 != -11665449) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x61 = 0U;
	int16_t x62 = INT16_MIN;
	uint16_t x63 = UINT16_MAX;
	int16_t x64 = -8;
	static volatile int32_t t8 = -71342;

	t8 = ((x61*x62)|(x63%x64));

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x65 = -3;
	uint16_t x66 = 9265U;
	int64_t x67 = INT64_MIN;
	volatile int8_t x68 = -5;
	int64_t t9 = 9223LL;

	t9 = ((x65*x66)|(x67%x68));

	if (t9 != -3LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x77 = 101577996U;
	uint32_t x79 = 7U;
	uint64_t x80 = 7079850757652LLU;
	static volatile uint64_t t10 = 28971LLU;

	t10 = ((x77*x78)|(x79%x80));

	if (t10 != 304733991LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x85 = -1LL;
	uint16_t x86 = 3U;
	static volatile int16_t x87 = -256;
	int32_t x88 = INT32_MIN;

	t11 = ((x85*x86)|(x87%x88));

	if (t11 != -3LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x93 = 2009855U;
	volatile int8_t x94 = 0;
	static int64_t x95 = -1LL;
	int64_t x96 = -1LL;
	volatile int64_t t12 = 111652117LL;

	t12 = ((x93*x94)|(x95%x96));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x98 = UINT8_MAX;
	static int8_t x100 = INT8_MIN;
	volatile int32_t t13 = -2;

	t13 = ((x97*x98)|(x99%x100));

	if (t13 != -21) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x101 = -6;
	static uint32_t x102 = 22U;
	uint16_t x103 = UINT16_MAX;
	int8_t x104 = INT8_MAX;
	volatile uint32_t t14 = 461U;

	t14 = ((x101*x102)|(x103%x104));

	if (t14 != 4294967167U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x105 = 54;
	uint64_t x106 = 731427068348440LLU;
	int32_t x108 = -1;
	uint64_t t15 = 20709583546214LLU;

	t15 = ((x105*x106)|(x107%x108));

	if (t15 != 39497061690815760LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x110 = 6U;
	int64_t x112 = 170907145579161LL;
	int64_t t16 = 1LL;

	t16 = ((x109*x110)|(x111%x112));

	if (t16 != 762LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x113 = INT32_MIN;
	int64_t x114 = 495708LL;
	volatile int64_t x115 = INT64_MIN;
	int32_t x116 = INT32_MIN;
	static volatile int64_t t17 = -239703848954LL;

	t17 = ((x113*x114)|(x115%x116));

	if (t17 != -1064524824182784LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x121 = 29U;
	static int8_t x122 = 15;
	uint64_t x123 = 1LLU;
	int32_t x124 = INT32_MAX;
	uint64_t t18 = 481974013179LLU;

	t18 = ((x121*x122)|(x123%x124));

	if (t18 != 435LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x125 = UINT64_MAX;
	uint64_t x126 = UINT64_MAX;
	int64_t x127 = 85776065505884924LL;
	int32_t x128 = INT32_MIN;
	uint64_t t19 = 488086810863105239LLU;

	t19 = ((x125*x126)|(x127%x128));

	if (t19 != 179665661LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x129 = UINT64_MAX;
	int32_t x131 = INT32_MAX;
	uint32_t x132 = 9574U;
	volatile uint64_t t20 = 1577088LLU;

	t20 = ((x129*x130)|(x131%x132));

	if (t20 != 9223372036854782533LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x137 = 20297U;
	int16_t x138 = -2;
	static int32_t x140 = -1;
	int32_t t21 = -7775066;

	t21 = ((x137*x138)|(x139%x140));

	if (t21 != -40594) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x142 = INT16_MIN;
	static int64_t x143 = INT64_MIN;
	uint32_t x144 = 2134555U;
	volatile int64_t t22 = -4948320LL;

	t22 = ((x141*x142)|(x143%x144));

	if (t22 != -600798LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x145 = INT8_MIN;
	int8_t x148 = 7;

	t23 = ((x145*x146)|(x147%x148));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x149 = 29U;
	volatile uint16_t x150 = 15569U;
	uint16_t x151 = 2U;
	volatile int32_t x152 = 2634;
	volatile int32_t t24 = -306310818;

	t24 = ((x149*x150)|(x151%x152));

	if (t24 != 451503) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x161 = INT16_MIN;
	int64_t x162 = -2814171785LL;
	static int32_t x163 = 463;
	uint16_t x164 = UINT16_MAX;
	volatile int64_t t25 = 78857898196710414LL;

	t25 = ((x161*x162)|(x163%x164));

	if (t25 != 92214781051343LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x169 = 64464823427766757LLU;
	volatile uint32_t x170 = 77U;
	uint64_t x171 = 6719290LLU;
	volatile uint64_t t26 = 546782440311LLU;

	t26 = ((x169*x170)|(x171%x172));

	if (t26 != 4963791403940302843LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x177 = 415642LLU;
	uint16_t x178 = 19U;
	static int32_t x179 = INT32_MIN;
	volatile uint64_t t27 = 272897147940LLU;

	t27 = ((x177*x178)|(x179%x180));

	if (t27 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x181 = -1;
	volatile int8_t x182 = INT8_MAX;
	uint32_t x183 = 590907467U;
	static uint8_t x184 = UINT8_MAX;

	t28 = ((x181*x182)|(x183%x184));

	if (t28 != 4294967215U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x185 = 1094U;
	static int8_t x186 = INT8_MIN;
	static volatile int16_t x187 = -1;
	int16_t x188 = INT16_MAX;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = ((x185*x186)|(x187%x188));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x189 = 1;
	static int32_t x191 = INT32_MIN;
	int64_t t30 = -6LL;

	t30 = ((x189*x190)|(x191%x192));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x193 = INT16_MIN;
	static uint16_t x194 = 2U;
	int8_t x195 = -1;
	int8_t x196 = -34;
	int32_t t31 = -122;

	t31 = ((x193*x194)|(x195%x196));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x208 = 849;

	t32 = ((x205*x206)|(x207%x208));

	if (t32 != 69) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x209 = INT16_MIN;
	static int16_t x210 = -1;
	uint32_t x212 = 258215U;

	t33 = ((x209*x210)|(x211%x212));

	if (t33 != 32771U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x213 = INT8_MIN;
	static uint16_t x214 = 109U;
	volatile int64_t x215 = INT64_MAX;

	t34 = ((x213*x214)|(x215%x216));

	if (t34 != -13951LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x221 = -1;
	volatile int64_t x222 = 1065190417802429135LL;
	static uint32_t x223 = 280206855U;
	volatile int64_t t35 = 24377049509163617LL;

	t35 = ((x221*x222)|(x223%x224));

	if (t35 != -1065190417802428615LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x229 = 0U;
	int32_t x231 = 1;
	int16_t x232 = INT16_MIN;
	static volatile int64_t t36 = -700LL;

	t36 = ((x229*x230)|(x231%x232));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x233 = 3U;
	uint16_t x234 = UINT16_MAX;
	volatile int16_t x235 = INT16_MIN;
	uint8_t x236 = UINT8_MAX;
	static int32_t t37 = 5;

	t37 = ((x233*x234)|(x235%x236));

	if (t37 != -3) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x241 = UINT8_MAX;
	int16_t x242 = -29;
	static volatile uint8_t x243 = 0U;
	volatile uint8_t x244 = 77U;
	volatile int32_t t38 = -14;

	t38 = ((x241*x242)|(x243%x244));

	if (t38 != -7395) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x245 = -1;
	static int16_t x246 = -3;
	int32_t x248 = -493962969;
	volatile uint64_t t39 = 19LLU;

	t39 = ((x245*x246)|(x247%x248));

	if (t39 != 56257747LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x257 = UINT32_MAX;
	int64_t x258 = -1260LL;
	volatile int16_t x259 = INT16_MIN;
	int8_t x260 = 1;
	int64_t t40 = 237095LL;

	t40 = ((x257*x258)|(x259%x260));

	if (t40 != -5411658791700LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x261 = 0U;
	static int16_t x262 = 1;
	volatile uint32_t x263 = UINT32_MAX;
	volatile int32_t x264 = INT32_MIN;
	uint32_t t41 = 132926063U;

	t41 = ((x261*x262)|(x263%x264));

	if (t41 != 2147483647U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x266 = -1;
	uint16_t x267 = 4842U;
	int8_t x268 = INT8_MIN;

	t42 = ((x265*x266)|(x267%x268));

	if (t42 != 107) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x269 = -1;
	uint16_t x270 = 3U;
	static int16_t x271 = INT16_MIN;
	int8_t x272 = -1;
	volatile int32_t t43 = 3417;

	t43 = ((x269*x270)|(x271%x272));

	if (t43 != -3) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x273 = INT16_MAX;
	uint32_t x274 = 5U;
	int64_t t44 = 1018572LL;

	t44 = ((x273*x274)|(x275%x276));

	if (t44 != 163835LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x277 = -14818LL;
	static volatile int16_t x278 = 3622;
	uint8_t x279 = UINT8_MAX;
	int32_t x280 = -1;
	int64_t t45 = -5LL;

	t45 = ((x277*x278)|(x279%x280));

	if (t45 != -53670796LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x281 = -271318;
	uint16_t x283 = 0U;
	uint32_t x284 = UINT32_MAX;
	uint32_t t46 = 29689U;

	t46 = ((x281*x282)|(x283%x284));

	if (t46 != 271318U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x289 = 1;
	int8_t x290 = INT8_MIN;
	static volatile uint32_t x291 = 6453U;
	static int8_t x292 = INT8_MIN;
	static uint32_t t47 = 214U;

	t47 = ((x289*x290)|(x291%x292));

	if (t47 != 4294967221U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x293 = INT8_MIN;
	int8_t x294 = INT8_MAX;
	int64_t x296 = -24LL;
	int64_t t48 = -916LL;

	t48 = ((x293*x294)|(x295%x296));

	if (t48 != -16254LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x297 = INT8_MIN;
	static int8_t x299 = -1;
	volatile int16_t x300 = INT16_MAX;
	volatile int32_t t49 = -10949;

	t49 = ((x297*x298)|(x299%x300));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x309 = 14383897U;
	int32_t x310 = INT32_MIN;
	int64_t x311 = -1LL;
	int16_t x312 = INT16_MIN;
	int64_t t50 = 2LL;

	t50 = ((x309*x310)|(x311%x312));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x313 = 18066974627430LLU;
	int16_t x315 = -1;
	static uint64_t t51 = 4027858799LLU;

	t51 = ((x313*x314)|(x315%x316));

	if (t51 != 18446726006734924186LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MIN;
	volatile uint32_t x319 = 2980076U;
	int32_t x320 = INT32_MAX;
	uint32_t t52 = 21U;

	t52 = ((x317*x318)|(x319%x320));

	if (t52 != 7174380U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x329 = UINT16_MAX;
	static uint8_t x330 = 5U;
	static uint16_t x331 = UINT16_MAX;
	static int8_t x332 = INT8_MIN;
	volatile int32_t t53 = -774026428;

	t53 = ((x329*x330)|(x331%x332));

	if (t53 != 327679) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x338 = 993U;
	int16_t x339 = INT16_MIN;
	static uint8_t x340 = 37U;
	volatile uint32_t t54 = 25095176U;

	t54 = ((x337*x338)|(x339%x340));

	if (t54 != 4294967289U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x341 = UINT32_MAX;
	int8_t x342 = INT8_MIN;
	static uint16_t x344 = 41U;
	int64_t t55 = -5493LL;

	t55 = ((x341*x342)|(x343%x344));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x345 = 694220158U;
	int8_t x346 = -1;
	static volatile uint8_t x347 = 1U;
	int32_t x348 = INT32_MIN;

	t56 = ((x345*x346)|(x347%x348));

	if (t56 != 3600747139U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x350 = 3276U;
	int8_t x351 = 2;
	int16_t x352 = -1;
	volatile uint32_t t57 = 431U;

	t57 = ((x349*x350)|(x351%x352));

	if (t57 != 2850120U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x353 = INT16_MAX;
	int16_t x356 = INT16_MIN;
	static int64_t t58 = -2LL;

	t58 = ((x353*x354)|(x355%x356));

	if (t58 != 4294934529LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x357 = -1LL;
	uint16_t x359 = UINT16_MAX;
	int16_t x360 = INT16_MIN;

	t59 = ((x357*x358)|(x359%x360));

	if (t59 != -32769LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x369 = INT16_MAX;
	int32_t x372 = INT32_MIN;
	int64_t t60 = 1LL;

	t60 = ((x369*x370)|(x371%x372));

	if (t60 != -32761LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x373 = 3;
	static volatile int64_t x374 = 312LL;
	static int32_t x375 = -1;
	volatile uint32_t x376 = UINT32_MAX;
	volatile int64_t t61 = 231LL;

	t61 = ((x373*x374)|(x375%x376));

	if (t61 != 936LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x385 = 7;
	int64_t x388 = 112557196193413LL;
	static int64_t t62 = 491094508882LL;

	t62 = ((x385*x386)|(x387%x388));

	if (t62 != -97709177934341LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x393 = UINT8_MAX;
	static uint8_t x394 = UINT8_MAX;
	int64_t x395 = INT64_MIN;
	int32_t x396 = -1;
	int64_t t63 = -8606946511850382LL;

	t63 = ((x393*x394)|(x395%x396));

	if (t63 != 65025LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x402 = 1;
	int16_t x403 = -6;
	uint64_t x404 = UINT64_MAX;
	static uint64_t t64 = 11011922695437LLU;

	t64 = ((x401*x402)|(x403%x404));

	if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x405 = INT8_MIN;
	int8_t x407 = INT8_MIN;

	t65 = ((x405*x406)|(x407%x408));

	if (t65 != -128LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x409 = -1LL;
	int8_t x410 = -19;
	volatile int64_t x412 = INT64_MAX;
	int64_t t66 = -421732677861322472LL;

	t66 = ((x409*x410)|(x411%x412));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x417 = 6U;
	int64_t x418 = -645004724073328486LL;
	int32_t x419 = INT32_MAX;
	uint8_t x420 = UINT8_MAX;

	t67 = ((x417*x418)|(x419%x420));

	if (t67 != -3870028344439970817LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x421 = -1;
	static uint64_t x422 = 392404498929281114LLU;
	uint16_t x423 = UINT16_MAX;
	int16_t x424 = INT16_MIN;
	static uint64_t t68 = 25799554519724041LLU;

	t68 = ((x421*x422)|(x423%x424));

	if (t68 != 18054339574780297215LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x429 = -1;
	int32_t x430 = INT32_MAX;
	static int8_t x431 = -3;
	static uint32_t x432 = 26277U;
	volatile uint32_t t69 = 101282788U;

	t69 = ((x429*x430)|(x431%x432));

	if (t69 != 2147501569U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x437 = INT16_MAX;
	int8_t x438 = INT8_MIN;
	int64_t x439 = INT64_MIN;
	int32_t x440 = -15588;
	static int64_t t70 = 0LL;

	t70 = ((x437*x438)|(x439%x440));

	if (t70 != -1880LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x445 = UINT8_MAX;
	int16_t x446 = 302;
	uint32_t x447 = 1U;

	t71 = ((x445*x446)|(x447%x448));

	if (t71 != 77011LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x449 = INT16_MAX;
	uint64_t x452 = 117078LLU;
	volatile uint64_t t72 = 0LLU;

	t72 = ((x449*x450)|(x451%x452));

	if (t72 != 4294958709LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x453 = 520;
	uint8_t x454 = UINT8_MAX;
	int16_t x455 = INT16_MAX;
	uint8_t x456 = 12U;
	volatile int32_t t73 = -31307183;

	t73 = ((x453*x454)|(x455%x456));

	if (t73 != 132607) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x458 = INT16_MAX;
	int8_t x459 = -9;
	volatile int64_t x460 = -347368912LL;

	t74 = ((x457*x458)|(x459%x460));

	if (t74 != -9LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x465 = 24677778934956LLU;
	static int32_t x466 = INT32_MAX;
	static volatile uint8_t x467 = 28U;
	volatile int64_t x468 = -1LL;
	volatile uint64_t t75 = 169LLU;

	t75 = ((x465*x466)|(x467%x468));

	if (t75 != 16077727405254423380LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x469 = INT8_MIN;
	volatile uint16_t x470 = 8097U;
	int32_t x471 = INT32_MAX;
	int64_t x472 = -1LL;
	volatile int64_t t76 = 2030LL;

	t76 = ((x469*x470)|(x471%x472));

	if (t76 != -1036416LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x481 = 3U;
	uint16_t x482 = UINT16_MAX;
	uint8_t x484 = UINT8_MAX;
	volatile int32_t t77 = 1;

	t77 = ((x481*x482)|(x483%x484));

	if (t77 != -3) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x485 = INT8_MAX;
	uint16_t x486 = 36U;
	static uint32_t x487 = 537946U;
	volatile uint32_t t78 = 1717U;

	t78 = ((x485*x486)|(x487%x488));

	if (t78 != 4572U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x490 = INT16_MAX;
	int16_t x491 = -21;
	uint16_t x492 = 13U;
	static int32_t t79 = 7858;

	t79 = ((x489*x490)|(x491%x492));

	if (t79 != -7) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x498 = 1749963386539LL;
	volatile int16_t x499 = INT16_MAX;
	volatile int32_t x500 = -1;

	t80 = ((x497*x498)|(x499%x500));

	if (t80 != 1979208590175609LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x501 = 47LL;
	static int32_t x503 = INT32_MIN;
	int8_t x504 = INT8_MAX;
	volatile int64_t t81 = -776810LL;

	t81 = ((x501*x502)|(x503%x504));

	if (t81 != -7LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x505 = INT16_MIN;
	int8_t x506 = -1;
	uint8_t x507 = 88U;
	uint64_t x508 = UINT64_MAX;
	volatile uint64_t t82 = 94LLU;

	t82 = ((x505*x506)|(x507%x508));

	if (t82 != 32856LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x514 = INT16_MIN;
	static int32_t x516 = -452256;
	volatile int64_t t83 = -236476400LL;

	t83 = ((x513*x514)|(x515%x516));

	if (t83 != -65273826LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x517 = UINT16_MAX;
	int8_t x518 = INT8_MAX;
	uint16_t x519 = 8754U;
	int32_t t84 = -1441265;

	t84 = ((x517*x518)|(x519%x520));

	if (t84 != 8322949) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x522 = UINT8_MAX;
	int8_t x523 = -1;
	volatile int64_t t85 = -19270LL;

	t85 = ((x521*x522)|(x523%x524));

	if (t85 != 32385LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x525 = INT8_MIN;
	static uint8_t x526 = 6U;
	int8_t x528 = -8;

	t86 = ((x525*x526)|(x527%x528));

	if (t86 != -768) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x529 = INT8_MAX;
	volatile int8_t x530 = INT8_MIN;
	uint32_t x531 = UINT32_MAX;
	uint64_t x532 = UINT64_MAX;
	uint64_t t87 = UINT64_MAX;

	t87 = ((x529*x530)|(x531%x532));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x533 = 1U;
	static volatile int32_t x535 = -87;
	int8_t x536 = 1;
	volatile int32_t t88 = 0;

	t88 = ((x533*x534)|(x535%x536));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x537 = 6752494LLU;
	static volatile uint16_t x538 = 73U;
	static int8_t x539 = INT8_MAX;
	int16_t x540 = INT16_MIN;
	volatile uint64_t t89 = 22987215023LLU;

	t89 = ((x537*x538)|(x539%x540));

	if (t89 != 492932095LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x541 = INT16_MAX;
	static int64_t x542 = -760LL;
	int64_t x543 = INT64_MIN;
	int64_t t90 = -82232LL;

	t90 = ((x541*x542)|(x543%x544));

	if (t90 != -24902920LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x549 = 3;
	static int64_t x552 = INT64_MAX;

	t91 = ((x549*x550)|(x551%x552));

	if (t91 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x553 = 6634173560366682LLU;
	int32_t x555 = -1;
	uint32_t x556 = UINT32_MAX;
	uint64_t t92 = 500716LLU;

	t92 = ((x553*x554)|(x555%x556));

	if (t92 != 17597569857982616320LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x558 = 4U;
	int8_t x560 = INT8_MAX;

	t93 = ((x557*x558)|(x559%x560));

	if (t93 != 1469LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x561 = INT8_MIN;
	uint8_t x562 = 2U;
	int32_t x563 = -1;
	static uint64_t x564 = 105682725LLU;
	volatile uint64_t t94 = 23520714317629LLU;

	t94 = ((x561*x562)|(x563%x564));

	if (t94 != 18446744073709551408LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x569 = 14;
	int8_t x571 = INT8_MIN;
	volatile uint8_t x572 = 111U;
	static volatile int32_t t95 = -41;

	t95 = ((x569*x570)|(x571%x572));

	if (t95 != -17) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x573 = -1417459;
	int16_t x575 = 1;
	static int32_t x576 = -1;

	t96 = ((x573*x574)|(x575%x576));

	if (t96 != 1417459) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x577 = 0U;
	volatile int64_t x579 = INT64_MIN;
	static int8_t x580 = INT8_MIN;

	t97 = ((x577*x578)|(x579%x580));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x581 = 138118761LLU;
	volatile uint32_t x582 = UINT32_MAX;
	int64_t x584 = 1413845679502LL;
	static uint64_t t98 = 6231LLU;

	t98 = ((x581*x582)|(x583%x584));

	if (t98 != 18446744073709550583LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x585 = -1;
	static int8_t x586 = 1;
	volatile uint64_t x587 = 2085494976195125LLU;
	uint16_t x588 = 109U;
	uint64_t t99 = UINT64_MAX;

	t99 = ((x585*x586)|(x587%x588));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

