#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x7 = 1U;
uint8_t x8 = UINT8_MAX;
volatile int32_t t1 = 180459;
uint64_t t2 = 0LLU;
static volatile int64_t x16 = INT64_MIN;
int64_t t3 = -2063805041LL;
static uint16_t x19 = 7U;
int32_t x22 = -1;
uint64_t x23 = 118626559LLU;
volatile uint64_t t5 = 5737298LLU;
static int64_t t7 = 448LL;
static uint8_t x37 = 15U;
static volatile int64_t x38 = 1255014422416529LL;
volatile int64_t t8 = 348732196963127LL;
static volatile uint8_t x58 = UINT8_MAX;
int8_t x60 = INT8_MAX;
int64_t x62 = INT64_MIN;
static uint32_t x75 = 1602U;
int32_t x86 = INT32_MIN;
int16_t x96 = INT16_MIN;
uint16_t x98 = UINT16_MAX;
int32_t x100 = -1;
static int64_t x110 = INT64_MIN;
int16_t x111 = -12780;
int64_t t24 = INT64_MAX;
static uint32_t x125 = 966680171U;
static int32_t x131 = 1;
static int32_t x137 = INT32_MAX;
uint64_t x138 = 3906436LLU;
int8_t x139 = INT8_MIN;
int8_t x140 = INT8_MIN;
uint64_t x151 = 0LLU;
static int16_t x153 = INT16_MIN;
int32_t x154 = INT32_MAX;
static int32_t t32 = 33353777;
volatile int64_t x162 = -1LL;
uint8_t x163 = 1U;
volatile uint64_t x176 = 9LLU;
uint64_t x178 = 371176972159LLU;
static volatile int32_t x193 = INT32_MAX;
uint64_t x194 = 489421333844LLU;
static volatile int32_t x204 = INT32_MIN;
static volatile uint32_t t41 = 1781U;
volatile uint16_t x211 = UINT16_MAX;
int64_t x213 = 47LL;
volatile int8_t x240 = 1;
uint64_t x242 = 421278210LLU;
uint64_t x244 = UINT64_MAX;
uint16_t x250 = 7U;
uint32_t x254 = 8399U;
int16_t x255 = INT16_MIN;
uint64_t x273 = 726291765LLU;
uint64_t x275 = 109660570845LLU;
uint16_t x285 = 3U;
volatile uint64_t t58 = 16483818503860LLU;
static int8_t x290 = INT8_MIN;
volatile uint64_t t59 = 146752LLU;
volatile int64_t x297 = -126LL;
int8_t x316 = -1;
volatile int32_t t62 = -14701;
volatile int32_t t64 = -2473;
int16_t x329 = INT16_MIN;
uint64_t x333 = 409445317702LLU;
static uint64_t t66 = 1LLU;
int32_t x338 = INT32_MIN;
volatile int16_t x340 = -1;
static volatile int8_t x343 = INT8_MIN;
uint32_t x344 = 182U;
static uint64_t x346 = UINT64_MAX;
int8_t x348 = -1;
int64_t x352 = INT64_MAX;
static volatile int16_t x359 = INT16_MAX;
int32_t t71 = 118;
int16_t x369 = -1;
uint64_t x370 = 56809120167LLU;
volatile uint64_t t74 = 1415LLU;
static int8_t x378 = INT8_MIN;
int8_t x382 = -2;
int64_t x386 = INT64_MIN;
int32_t x395 = -1;
volatile uint64_t x401 = 41LLU;
static int32_t x404 = -1;
int32_t x405 = INT32_MIN;
int32_t x413 = -1;
volatile uint32_t x414 = 4U;
volatile uint32_t t84 = 5U;
int16_t x419 = INT16_MIN;
volatile int32_t x420 = INT32_MAX;
int64_t x425 = -1LL;
int64_t x446 = 870LL;
int8_t x458 = -18;
volatile int8_t x463 = -47;
volatile int64_t t93 = 6257LL;
int8_t x465 = INT8_MIN;
volatile int64_t t94 = 6LL;
int8_t x474 = 7;
static uint64_t x488 = UINT64_MAX;
int64_t x491 = 7165029912LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int8_t x2 = INT8_MIN;
	int16_t x3 = INT16_MAX;
	static uint16_t x4 = UINT16_MAX;
	static int32_t t0 = -40523;

	t0 = ((x1/(x2-x3))^x4);

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	volatile uint8_t x6 = UINT8_MAX;

	t1 = ((x5/(x6-x7))^x8);

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 746494130LL;
	int8_t x10 = INT8_MAX;
	int8_t x11 = INT8_MIN;
	uint64_t x12 = 377600LLU;

	t2 = ((x9/(x10-x11))^x12);

	if (t2 != 2713667LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int8_t x14 = INT8_MAX;
	volatile uint32_t x15 = 13U;

	t3 = ((x13/(x14-x15))^x16);

	if (t3 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x17 = -10;
	int16_t x18 = INT16_MIN;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = -6;

	t4 = ((x17/(x18-x19))^x20);

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = 0;
	int8_t x24 = INT8_MIN;

	t5 = ((x21/(x22-x23))^x24);

	if (t5 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = UINT8_MAX;
	volatile int8_t x30 = -10;
	static int16_t x31 = INT16_MAX;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t6 = 219526;

	t6 = ((x29/(x30-x31))^x32);

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = 113833819604168LL;
	uint32_t x34 = UINT32_MAX;
	int8_t x35 = INT8_MIN;
	static int8_t x36 = INT8_MIN;

	t7 = ((x33/(x34-x35))^x36);

	if (t7 != -896329288291LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x39 = 25LL;
	int32_t x40 = -1;

	t8 = ((x37/(x38-x39))^x40);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 22030638LLU;
	volatile uint32_t x42 = 1770800U;
	int32_t x43 = INT32_MIN;
	int16_t x44 = -1;
	uint64_t t9 = UINT64_MAX;

	t9 = ((x41/(x42-x43))^x44);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	volatile int64_t x46 = -1773623760LL;
	static int64_t x47 = INT64_MIN;
	uint8_t x48 = 42U;
	int64_t t10 = -220110LL;

	t10 = ((x45/(x46-x47))^x48);

	if (t10 != 42LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 86;
	int8_t x50 = INT8_MIN;
	int32_t x51 = INT32_MIN;
	int32_t x52 = INT32_MIN;
	int32_t t11 = INT32_MIN;

	t11 = ((x49/(x50-x51))^x52);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MAX;
	int64_t x59 = -1LL;
	int64_t t12 = 1LL;

	t12 = ((x57/(x58-x59))^x60);

	if (t12 != 8388480LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	volatile uint16_t x63 = 0U;
	static int32_t x64 = INT32_MIN;
	volatile int64_t t13 = 1037094296120LL;

	t13 = ((x61/(x62-x63))^x64);

	if (t13 != -2147483648LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x73 = INT8_MAX;
	int16_t x74 = INT16_MIN;
	volatile int8_t x76 = -53;
	volatile uint32_t t14 = 1849736U;

	t14 = ((x73/(x74-x75))^x76);

	if (t14 != 4294967243U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = -3;
	int8_t x78 = 2;
	uint16_t x79 = 7U;
	volatile int8_t x80 = INT8_MAX;
	volatile int32_t t15 = 0;

	t15 = ((x77/(x78-x79))^x80);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = 11U;
	static uint8_t x82 = UINT8_MAX;
	int16_t x83 = 337;
	int8_t x84 = 0;
	volatile uint32_t t16 = 1U;

	t16 = ((x81/(x82-x83))^x84);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x85 = 24263;
	uint32_t x87 = 350896U;
	static int32_t x88 = -1;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = ((x85/(x86-x87))^x88);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x89 = UINT64_MAX;
	int16_t x90 = -29;
	uint8_t x91 = 1U;
	int64_t x92 = -127808787129654216LL;
	volatile uint64_t t18 = 246059361LLU;

	t18 = ((x89/(x90-x91))^x92);

	if (t18 != 18318935286579897401LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = 17;
	int64_t x94 = 2829LL;
	int16_t x95 = -1;
	volatile int64_t t19 = 256203239503123LL;

	t19 = ((x93/(x94-x95))^x96);

	if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = 14804LL;
	uint8_t x99 = 13U;
	int64_t t20 = 28198345786LL;

	t20 = ((x97/(x98-x99))^x100);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x101 = INT8_MIN;
	static volatile int16_t x102 = INT16_MAX;
	int32_t x103 = INT32_MAX;
	volatile int32_t x104 = -1;
	int32_t t21 = -607198323;

	t21 = ((x101/(x102-x103))^x104);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = -11;
	int64_t x106 = INT64_MIN;
	int16_t x107 = -21;
	int64_t x108 = INT64_MAX;
	static volatile int64_t t22 = INT64_MAX;

	t22 = ((x105/(x106-x107))^x108);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x109 = UINT16_MAX;
	int32_t x112 = INT32_MIN;
	volatile int64_t t23 = 157914675750515LL;

	t23 = ((x109/(x110-x111))^x112);

	if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = -3;
	static int8_t x118 = INT8_MIN;
	volatile uint8_t x119 = UINT8_MAX;
	volatile int64_t x120 = INT64_MAX;

	t24 = ((x117/(x118-x119))^x120);

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x121 = 0U;
	int64_t x122 = -302207325491093LL;
	uint16_t x123 = 3997U;
	int32_t x124 = -1;
	static int64_t t25 = 6692LL;

	t25 = ((x121/(x122-x123))^x124);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x126 = UINT16_MAX;
	uint32_t x127 = 0U;
	static volatile uint16_t x128 = 397U;
	static uint32_t t26 = 93U;

	t26 = ((x125/(x126-x127))^x128);

	if (t26 != 14355U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x129 = UINT16_MAX;
	uint8_t x130 = UINT8_MAX;
	volatile int64_t x132 = INT64_MIN;
	static volatile int64_t t27 = -913520677LL;

	t27 = ((x129/(x130-x131))^x132);

	if (t27 != -9223372036854775550LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t t28 = 73473LLU;

	t28 = ((x137/(x138-x139))^x140);

	if (t28 != 18446744073709551013LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = INT16_MIN;
	int64_t x142 = -1LL;
	int8_t x143 = 6;
	uint8_t x144 = 0U;
	static volatile int64_t t29 = 5LL;

	t29 = ((x141/(x142-x143))^x144);

	if (t29 != 4681LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x145 = UINT16_MAX;
	static int64_t x146 = INT64_MIN;
	volatile int32_t x147 = INT32_MIN;
	int8_t x148 = -1;
	volatile int64_t t30 = -26260164220959050LL;

	t30 = ((x145/(x146-x147))^x148);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x149 = UINT64_MAX;
	int8_t x150 = -1;
	uint32_t x152 = 503122U;
	uint64_t t31 = 18444849LLU;

	t31 = ((x149/(x150-x151))^x152);

	if (t31 != 503123LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x155 = 1;
	uint16_t x156 = UINT16_MAX;

	t32 = ((x153/(x154-x155))^x156);

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = INT32_MIN;
	static uint16_t x158 = UINT16_MAX;
	volatile uint8_t x159 = 56U;
	static volatile int8_t x160 = -9;
	int32_t t33 = 4;

	t33 = ((x157/(x158-x159))^x160);

	if (t33 != 32787) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = -72;
	int16_t x164 = -25;
	int64_t t34 = -39LL;

	t34 = ((x161/(x162-x163))^x164);

	if (t34 != -61LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x165 = -1;
	static int16_t x166 = -1;
	int16_t x167 = INT16_MAX;
	int32_t x168 = INT32_MIN;
	volatile int32_t t35 = INT32_MIN;

	t35 = ((x165/(x166-x167))^x168);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = INT8_MIN;
	static volatile int64_t x174 = -303356942172498002LL;
	uint64_t x175 = UINT64_MAX;
	uint64_t t36 = 15377622298265445LLU;

	t36 = ((x173/(x174-x175))^x176);

	if (t36 != 8LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x177 = 36U;
	static volatile uint64_t x179 = UINT64_MAX;
	volatile int16_t x180 = -7324;
	volatile uint64_t t37 = 23283248422LLU;

	t37 = ((x177/(x178-x179))^x180);

	if (t37 != 18446744073709544292LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = -1;
	int32_t x186 = -1;
	int16_t x187 = INT16_MIN;
	static volatile int32_t x188 = 16287;
	static int32_t t38 = 2570;

	t38 = ((x185/(x186-x187))^x188);

	if (t38 != 16287) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x189 = INT16_MIN;
	static int64_t x190 = -371LL;
	volatile uint8_t x191 = 0U;
	int8_t x192 = -1;
	int64_t t39 = 59221LL;

	t39 = ((x189/(x190-x191))^x192);

	if (t39 != -89LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x195 = 982U;
	uint32_t x196 = 18U;
	static volatile uint64_t t40 = 5LLU;

	t40 = ((x193/(x194-x195))^x196);

	if (t40 != 18LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x201 = INT16_MAX;
	int32_t x202 = 9062815;
	volatile uint32_t x203 = 1U;

	t41 = ((x201/(x202-x203))^x204);

	if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x205 = INT64_MIN;
	volatile int16_t x206 = INT16_MIN;
	int32_t x207 = -1;
	int64_t x208 = INT64_MAX;
	static int64_t t42 = 11581LL;

	t42 = ((x205/(x206-x207))^x208);

	if (t42 != 9223090553287868407LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x209 = 444U;
	volatile int32_t x210 = -462062819;
	int16_t x212 = -3965;
	static volatile uint32_t t43 = 25307258U;

	t43 = ((x209/(x210-x211))^x212);

	if (t43 != 4294963331U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x214 = -59651;
	static volatile int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MIN;
	int64_t t44 = -14163137LL;

	t44 = ((x213/(x214-x215))^x216);

	if (t44 != -2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x217 = INT16_MIN;
	static volatile int64_t x218 = -41185453750248378LL;
	uint64_t x219 = UINT64_MAX;
	static volatile uint64_t x220 = 510365851006654LLU;
	static uint64_t t45 = 4714704071768628544LLU;

	t45 = ((x217/(x218-x219))^x220);

	if (t45 != 510365851006655LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x221 = -33;
	int16_t x222 = INT16_MAX;
	int8_t x223 = INT8_MIN;
	int16_t x224 = -1;
	int32_t t46 = -112;

	t46 = ((x221/(x222-x223))^x224);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x229 = 0;
	int32_t x230 = INT32_MAX;
	uint32_t x231 = UINT32_MAX;
	uint16_t x232 = 1U;
	volatile uint32_t t47 = 1U;

	t47 = ((x229/(x230-x231))^x232);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x233 = -1;
	static int8_t x234 = INT8_MAX;
	uint16_t x235 = 1851U;
	volatile int16_t x236 = 31;
	int32_t t48 = -4;

	t48 = ((x233/(x234-x235))^x236);

	if (t48 != 31) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x237 = 1561989LLU;
	int16_t x238 = 2406;
	uint8_t x239 = 1U;
	uint64_t t49 = 1911469818960865LLU;

	t49 = ((x237/(x238-x239))^x240);

	if (t49 != 648LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x241 = INT32_MAX;
	int8_t x243 = 14;
	uint64_t t50 = 423068LLU;

	t50 = ((x241/(x242-x243))^x244);

	if (t50 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = -1;
	uint64_t x246 = 188770066204LLU;
	int32_t x247 = INT32_MIN;
	int16_t x248 = INT16_MIN;
	static uint64_t t51 = 98697246164LLU;

	t51 = ((x245/(x246-x247))^x248);

	if (t51 != 18446744073612940241LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x249 = INT16_MIN;
	uint32_t x251 = 39U;
	volatile int16_t x252 = INT16_MIN;
	uint32_t t52 = 0U;

	t52 = ((x249/(x250-x251))^x252);

	if (t52 != 4294934528U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x253 = -73;
	uint16_t x256 = 18U;
	volatile uint32_t t53 = 48U;

	t53 = ((x253/(x254-x255))^x256);

	if (t53 != 104344U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x257 = INT64_MIN;
	static volatile uint32_t x258 = UINT32_MAX;
	static uint8_t x259 = 1U;
	uint32_t x260 = 129480922U;
	volatile int64_t t54 = -226LL;

	t54 = ((x257/(x258-x259))^x260);

	if (t54 != -2276964571LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x265 = INT32_MIN;
	volatile uint16_t x266 = 14U;
	volatile int32_t x267 = 3;
	static int8_t x268 = 0;
	int32_t t55 = -32384;

	t55 = ((x265/(x266-x267))^x268);

	if (t55 != -195225786) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x269 = -1;
	int8_t x270 = INT8_MIN;
	uint64_t x271 = 7730338326LLU;
	volatile int32_t x272 = INT32_MIN;
	static uint64_t t56 = 489498113LLU;

	t56 = ((x269/(x270-x271))^x272);

	if (t56 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x274 = INT8_MIN;
	uint8_t x276 = 1U;
	volatile uint64_t t57 = 2665074LLU;

	t57 = ((x273/(x274-x275))^x276);

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x286 = 125U;
	uint64_t x287 = UINT64_MAX;
	uint8_t x288 = 41U;

	t58 = ((x285/(x286-x287))^x288);

	if (t58 != 41LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x289 = 1LLU;
	volatile int16_t x291 = -1;
	int8_t x292 = -3;

	t59 = ((x289/(x290-x291))^x292);

	if (t59 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x298 = -239;
	int8_t x299 = INT8_MIN;
	int8_t x300 = 31;
	static volatile int64_t t60 = 2185710511906LL;

	t60 = ((x297/(x298-x299))^x300);

	if (t60 != 30LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x305 = 928;
	uint64_t x306 = 849LLU;
	volatile int16_t x307 = INT16_MIN;
	uint32_t x308 = 23418U;
	volatile uint64_t t61 = 106LLU;

	t61 = ((x305/(x306-x307))^x308);

	if (t61 != 23418LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x313 = INT16_MAX;
	int8_t x314 = INT8_MIN;
	uint8_t x315 = UINT8_MAX;

	t62 = ((x313/(x314-x315))^x316);

	if (t62 != 84) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = 9182572LL;
	uint64_t x319 = UINT64_MAX;
	volatile int32_t x320 = 872505656;
	uint64_t t63 = 277950LLU;

	t63 = ((x317/(x318-x319))^x320);

	if (t63 != 2008148081073LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x325 = -1;
	uint8_t x326 = 0U;
	int8_t x327 = -1;
	static int16_t x328 = INT16_MIN;

	t64 = ((x325/(x326-x327))^x328);

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x330 = 15U;
	uint64_t x331 = 1700779213662393389LLU;
	uint32_t x332 = 405508U;
	volatile uint64_t t65 = 42729186990554766LLU;

	t65 = ((x329/(x330-x331))^x332);

	if (t65 != 405509LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x334 = -1;
	int32_t x335 = INT32_MIN;
	static uint64_t x336 = 12927289668316LLU;

	t66 = ((x333/(x334-x335))^x336);

	if (t66 != 12927289668194LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x337 = 23932U;
	static volatile uint64_t x339 = 127080300LLU;
	uint64_t t67 = UINT64_MAX;

	t67 = ((x337/(x338-x339))^x340);

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x341 = -1;
	uint16_t x342 = 0U;
	volatile uint32_t t68 = 67U;

	t68 = ((x341/(x342-x343))^x344);

	if (t68 != 182U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x345 = INT16_MAX;
	volatile int16_t x347 = 4045;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = ((x345/(x346-x347))^x348);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x349 = 28933U;
	int64_t x350 = -2033984392LL;
	static int16_t x351 = INT16_MIN;
	int64_t t70 = INT64_MAX;

	t70 = ((x349/(x350-x351))^x352);

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x357 = INT16_MAX;
	static int8_t x358 = -1;
	static int8_t x360 = 6;

	t71 = ((x357/(x358-x359))^x360);

	if (t71 != 6) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x361 = -5048;
	static int64_t x362 = INT64_MAX;
	uint64_t x363 = UINT64_MAX;
	int64_t x364 = 3657LL;
	uint64_t t72 = 13476LLU;

	t72 = ((x361/(x362-x363))^x364);

	if (t72 != 3656LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x365 = INT8_MIN;
	uint64_t x366 = UINT64_MAX;
	uint8_t x367 = UINT8_MAX;
	int64_t x368 = INT64_MIN;
	volatile uint64_t t73 = 40666319863261618LLU;

	t73 = ((x365/(x366-x367))^x368);

	if (t73 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x371 = 4U;
	int8_t x372 = -1;

	t74 = ((x369/(x370-x371))^x372);

	if (t74 != 18446744073384837133LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MIN;
	int32_t x375 = -1;
	static int32_t x376 = INT32_MAX;
	volatile int32_t t75 = -872573;

	t75 = ((x373/(x374-x375))^x376);

	if (t75 != 2147483646) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x377 = INT8_MAX;
	int64_t x379 = -9622714176215140LL;
	uint32_t x380 = 27U;
	static volatile int64_t t76 = -3536948647LL;

	t76 = ((x377/(x378-x379))^x380);

	if (t76 != 27LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x381 = INT32_MIN;
	static volatile int16_t x383 = 0;
	int8_t x384 = INT8_MIN;
	int32_t t77 = 55;

	t77 = ((x381/(x382-x383))^x384);

	if (t77 != -1073741952) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x385 = INT32_MIN;
	int16_t x387 = INT16_MIN;
	int32_t x388 = 1;
	volatile int64_t t78 = -207972424048339LL;

	t78 = ((x385/(x386-x387))^x388);

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x389 = -1LL;
	static int16_t x390 = INT16_MIN;
	uint8_t x391 = UINT8_MAX;
	static volatile int8_t x392 = 5;
	int64_t t79 = -12140LL;

	t79 = ((x389/(x390-x391))^x392);

	if (t79 != 5LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x393 = 4178U;
	int32_t x394 = 285;
	static int8_t x396 = 2;
	static int32_t t80 = -452;

	t80 = ((x393/(x394-x395))^x396);

	if (t80 != 12) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x397 = -1;
	int16_t x398 = INT16_MIN;
	static int8_t x399 = 0;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t81 = 38489;

	t81 = ((x397/(x398-x399))^x400);

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x402 = -12;
	uint8_t x403 = 69U;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = ((x401/(x402-x403))^x404);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x406 = INT64_MIN;
	int16_t x407 = -175;
	int32_t x408 = INT32_MIN;
	volatile int64_t t83 = -20381661LL;

	t83 = ((x405/(x406-x407))^x408);

	if (t83 != -2147483648LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x415 = -1;
	volatile int32_t x416 = 1;

	t84 = ((x413/(x414-x415))^x416);

	if (t84 != 858993458U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x417 = 22U;
	volatile int8_t x418 = INT8_MIN;
	int32_t t85 = INT32_MAX;

	t85 = ((x417/(x418-x419))^x420);

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x421 = INT32_MIN;
	int8_t x422 = INT8_MIN;
	uint32_t x423 = 629353U;
	int32_t x424 = -1;
	uint32_t t86 = UINT32_MAX;

	t86 = ((x421/(x422-x423))^x424);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x426 = -313711;
	uint64_t x427 = UINT64_MAX;
	int16_t x428 = INT16_MIN;
	static volatile uint64_t t87 = 6738950007844032370LLU;

	t87 = ((x425/(x426-x427))^x428);

	if (t87 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x429 = INT16_MAX;
	int8_t x430 = INT8_MIN;
	uint16_t x431 = UINT16_MAX;
	int8_t x432 = -2;
	int32_t t88 = -40;

	t88 = ((x429/(x430-x431))^x432);

	if (t88 != -2) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x433 = INT32_MIN;
	int64_t x434 = INT64_MAX;
	int16_t x435 = INT16_MAX;
	volatile int64_t x436 = INT64_MAX;
	int64_t t89 = INT64_MAX;

	t89 = ((x433/(x434-x435))^x436);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x441 = INT16_MAX;
	int16_t x442 = INT16_MIN;
	int32_t x443 = -28;
	static int64_t x444 = -1LL;
	int64_t t90 = 103892147LL;

	t90 = ((x441/(x442-x443))^x444);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x445 = -5987;
	int32_t x447 = 0;
	int16_t x448 = 15131;
	volatile int64_t t91 = 1983698582LL;

	t91 = ((x445/(x446-x447))^x448);

	if (t91 != -15135LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x457 = INT16_MIN;
	int64_t x459 = -1LL;
	volatile int64_t x460 = INT64_MIN;
	int64_t t92 = -23683488429139911LL;

	t92 = ((x457/(x458-x459))^x460);

	if (t92 != -9223372036854773881LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x461 = UINT8_MAX;
	int16_t x462 = 420;
	int64_t x464 = -1LL;

	t93 = ((x461/(x462-x463))^x464);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x466 = INT64_MAX;
	static volatile uint32_t x467 = 15123756U;
	uint32_t x468 = UINT32_MAX;

	t94 = ((x465/(x466-x467))^x468);

	if (t94 != 4294967295LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x469 = 45U;
	uint16_t x470 = UINT16_MAX;
	int64_t x471 = -1LL;
	uint32_t x472 = 48U;
	int64_t t95 = -26786424712LL;

	t95 = ((x469/(x470-x471))^x472);

	if (t95 != 48LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x473 = INT32_MIN;
	static volatile int8_t x475 = INT8_MAX;
	int8_t x476 = INT8_MAX;
	static volatile int32_t t96 = 26121;

	t96 = ((x473/(x474-x475))^x476);

	if (t96 != 17895790) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x477 = INT16_MIN;
	static int64_t x478 = -1LL;
	uint16_t x479 = 0U;
	static uint32_t x480 = 375U;
	volatile int64_t t97 = -2697926582871LL;

	t97 = ((x477/(x478-x479))^x480);

	if (t97 != 33143LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x485 = INT32_MIN;
	int8_t x486 = 63;
	uint64_t x487 = UINT64_MAX;
	volatile uint64_t t98 = 77620623LLU;

	t98 = ((x485/(x486-x487))^x488);

	if (t98 != 18158513697591394303LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x489 = UINT8_MAX;
	static int32_t x490 = INT32_MAX;
	uint8_t x492 = UINT8_MAX;
	volatile int64_t t99 = 27383LL;

	t99 = ((x489/(x490-x491))^x492);

	if (t99 != 255LL) { NG(); } else { ; }
	
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

