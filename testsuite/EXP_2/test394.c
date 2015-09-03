#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x16 = INT8_MAX;
uint16_t x17 = UINT16_MAX;
int32_t x20 = INT32_MAX;
int64_t t1 = -1102154380103LL;
int8_t x22 = 2;
uint64_t x24 = 439198229478LLU;
volatile int64_t t3 = 1184LL;
static int32_t t5 = -568354435;
uint32_t x42 = 287U;
static volatile int32_t x58 = -1;
int8_t x60 = INT8_MAX;
static uint64_t x64 = UINT64_MAX;
uint64_t t8 = 579836423809157183LLU;
uint32_t x84 = 104U;
int16_t x102 = -3;
uint32_t x103 = 6570702U;
int32_t x130 = -5972;
volatile int32_t x134 = 1637272;
volatile uint8_t x138 = 60U;
uint64_t x140 = UINT64_MAX;
volatile int64_t x141 = -1LL;
int64_t t18 = -841093699167074200LL;
int16_t x149 = -1;
static int32_t t19 = 0;
uint32_t x161 = 2689505U;
uint32_t x163 = 175966160U;
int32_t x166 = -1;
uint64_t x167 = 61594LLU;
volatile int32_t x188 = 495075;
int16_t x193 = -21;
int32_t x195 = 182157;
int64_t x196 = INT64_MIN;
int32_t x197 = INT32_MIN;
volatile int64_t x201 = 832472372058LL;
volatile int16_t x204 = -1;
int32_t x205 = INT32_MIN;
volatile uint16_t x206 = 6812U;
volatile int32_t t29 = -77442396;
volatile int8_t x214 = INT8_MIN;
static volatile int8_t x216 = INT8_MIN;
uint32_t x225 = UINT32_MAX;
volatile uint64_t t31 = 241LLU;
volatile int32_t x233 = INT32_MAX;
static int8_t x244 = 7;
volatile uint32_t t34 = 16U;
uint64_t x247 = 3LLU;
int64_t x262 = -1LL;
volatile uint64_t t37 = 685794942865674LLU;
volatile int16_t x267 = -1;
uint32_t t38 = 487U;
int64_t x272 = INT64_MIN;
int64_t t40 = -250622LL;
int32_t t42 = 233;
int16_t x286 = INT16_MAX;
volatile int32_t t43 = -1673267;
int32_t x319 = INT32_MAX;
static uint64_t x321 = 39725682LLU;
int8_t x331 = -1;
static int16_t x346 = -26;
static volatile int32_t x348 = INT32_MIN;
static int32_t t51 = 1386859;
volatile int64_t t52 = 23240799578326LL;
int8_t x367 = -1;
int32_t x391 = 9810;
int32_t x393 = INT32_MIN;
uint32_t x395 = 198U;
volatile int32_t t60 = -1;
int32_t x405 = INT32_MIN;
uint64_t t61 = 195276263596836960LLU;
int32_t t62 = -18801176;
volatile uint8_t x413 = UINT8_MAX;
static int64_t x416 = INT64_MIN;
uint16_t x419 = 63U;
static int32_t x424 = INT32_MIN;
uint32_t x432 = UINT32_MAX;
uint64_t x443 = 22203LLU;
int8_t x444 = -4;
static int64_t x448 = 324LL;
int32_t x459 = INT32_MAX;
volatile int64_t t72 = 28824769LL;
volatile uint16_t x477 = UINT16_MAX;
int16_t x486 = INT16_MIN;
int32_t x488 = -23495930;
static int32_t t78 = 0;
uint64_t t79 = 109LLU;
static int16_t x515 = 3;
static int16_t x518 = 3;
int8_t x520 = 3;
static int64_t t83 = -4246231188646LL;
int32_t x524 = -2304;
int32_t t85 = -1;
volatile int32_t x549 = INT32_MIN;
int8_t x551 = INT8_MIN;
volatile int64_t x558 = 1254050549LL;
int8_t x560 = INT8_MIN;
int32_t x564 = INT32_MIN;
volatile int64_t x565 = -1LL;
volatile uint16_t x566 = 4972U;
uint8_t x569 = 8U;
uint8_t x573 = 0U;


void f0(void) {
	int16_t x13 = -1;
	uint64_t x14 = 2947LLU;
	int8_t x15 = -2;
	static uint64_t t0 = 104931242003248489LLU;

	t0 = ((x13%(x14*x15))/x16);

	if (t0 != 46LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x18 = -1LL;
	int32_t x19 = -1;

	t1 = ((x17%(x18*x19))/x20);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x21 = INT64_MAX;
	static volatile int16_t x23 = INT16_MAX;
	volatile uint64_t t2 = 766643979552LLU;

	t2 = ((x21%(x22*x23))/x24);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x29 = INT16_MIN;
	int64_t x30 = -1LL;
	int16_t x31 = INT16_MIN;
	int8_t x32 = INT8_MAX;

	t3 = ((x29%(x30*x31))/x32);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = INT8_MIN;
	int16_t x34 = INT16_MIN;
	static int16_t x35 = 2700;
	int64_t x36 = -22LL;
	volatile int64_t t4 = 4264699LL;

	t4 = ((x33%(x34*x35))/x36);

	if (t4 != 5LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x37 = INT16_MIN;
	int8_t x38 = -1;
	static int8_t x39 = INT8_MAX;
	uint16_t x40 = 25U;

	t5 = ((x37%(x38*x39))/x40);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x41 = INT16_MAX;
	uint32_t x43 = UINT32_MAX;
	static int8_t x44 = -1;
	volatile uint32_t t6 = 0U;

	t6 = ((x41%(x42*x43))/x44);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x57 = INT64_MAX;
	static volatile int16_t x59 = INT16_MIN;
	volatile int64_t t7 = 7414118683LL;

	t7 = ((x57%(x58*x59))/x60);

	if (t7 != 258LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x61 = 23U;
	uint16_t x62 = 8U;
	int8_t x63 = INT8_MAX;

	t8 = ((x61%(x62*x63))/x64);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x65 = UINT16_MAX;
	static int16_t x66 = INT16_MAX;
	int16_t x67 = INT16_MIN;
	uint64_t x68 = 61LLU;
	uint64_t t9 = 18994919LLU;

	t9 = ((x65%(x66*x67))/x68);

	if (t9 != 1074LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x77 = INT32_MIN;
	int64_t x78 = 57369858101466173LL;
	int8_t x79 = INT8_MIN;
	int64_t x80 = -596516188383192857LL;
	static int64_t t10 = -965514891465436981LL;

	t10 = ((x77%(x78*x79))/x80);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x81 = INT32_MAX;
	static int16_t x82 = INT16_MIN;
	int64_t x83 = -1LL;
	volatile int64_t t11 = -6249128593LL;

	t11 = ((x81%(x82*x83))/x84);

	if (t11 != 315LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x93 = UINT8_MAX;
	uint64_t x94 = 1555122237945LLU;
	int8_t x95 = INT8_MIN;
	int32_t x96 = INT32_MIN;
	uint64_t t12 = 593120LLU;

	t12 = ((x93%(x94*x95))/x96);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x101 = 14U;
	uint8_t x104 = UINT8_MAX;
	volatile uint32_t t13 = 4U;

	t13 = ((x101%(x102*x103))/x104);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x129 = 545U;
	int8_t x131 = INT8_MAX;
	int16_t x132 = -1;
	volatile int32_t t14 = 43;

	t14 = ((x129%(x130*x131))/x132);

	if (t14 != -545) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x133 = -1;
	uint32_t x135 = 428633U;
	int16_t x136 = INT16_MIN;
	volatile uint32_t t15 = 4447146U;

	t15 = ((x133%(x134*x135))/x136);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x137 = 13U;
	volatile uint8_t x139 = 97U;
	uint64_t t16 = 214LLU;

	t16 = ((x137%(x138*x139))/x140);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x142 = -5;
	static int16_t x143 = INT16_MAX;
	int64_t x144 = INT64_MIN;
	volatile int64_t t17 = -110250131464532LL;

	t17 = ((x141%(x142*x143))/x144);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x145 = 23681LL;
	volatile uint8_t x146 = UINT8_MAX;
	volatile int16_t x147 = 1;
	static int8_t x148 = -1;

	t18 = ((x145%(x146*x147))/x148);

	if (t18 != -221LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x150 = -1;
	static uint16_t x151 = 7870U;
	static int8_t x152 = INT8_MAX;

	t19 = ((x149%(x150*x151))/x152);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x162 = INT16_MIN;
	int8_t x164 = -15;
	volatile uint32_t t20 = 47402U;

	t20 = ((x161%(x162*x163))/x164);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x165 = -38;
	int64_t x168 = INT64_MIN;
	uint64_t t21 = 36020588LLU;

	t21 = ((x165%(x166*x167))/x168);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x173 = UINT64_MAX;
	volatile uint8_t x174 = 7U;
	int8_t x175 = INT8_MAX;
	volatile uint16_t x176 = UINT16_MAX;
	uint64_t t22 = 96LLU;

	t22 = ((x173%(x174*x175))/x176);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x181 = 12U;
	static volatile uint16_t x182 = 2U;
	volatile int64_t x183 = 98881019602LL;
	static volatile int8_t x184 = INT8_MIN;
	volatile int64_t t23 = 15LL;

	t23 = ((x181%(x182*x183))/x184);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x185 = -1LL;
	uint16_t x186 = 4U;
	int64_t x187 = -227795750441377LL;
	volatile int64_t t24 = 134099170LL;

	t24 = ((x185%(x186*x187))/x188);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x189 = INT16_MIN;
	int32_t x190 = 225;
	volatile uint8_t x191 = 17U;
	uint16_t x192 = UINT16_MAX;
	static int32_t t25 = -30826;

	t25 = ((x189%(x190*x191))/x192);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x194 = 120U;
	int64_t t26 = 340LL;

	t26 = ((x193%(x194*x195))/x196);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x198 = 76;
	static int64_t x199 = -1LL;
	int32_t x200 = -53;
	int64_t t27 = -4475592152716449LL;

	t27 = ((x197%(x198*x199))/x200);

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x202 = UINT8_MAX;
	volatile int16_t x203 = -11;
	volatile int64_t t28 = 1LL;

	t28 = ((x201%(x202*x203))/x204);

	if (t28 != -888LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x207 = 24U;
	volatile int16_t x208 = 6;

	t29 = ((x205%(x206*x207))/x208);

	if (t29 != -11461) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x213 = UINT32_MAX;
	static int16_t x215 = INT16_MIN;
	volatile uint32_t t30 = 26019U;

	t30 = ((x213%(x214*x215))/x216);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x226 = UINT16_MAX;
	int16_t x227 = -1;
	static uint64_t x228 = 3561728055713651941LLU;

	t31 = ((x225%(x226*x227))/x228);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x229 = UINT64_MAX;
	uint64_t x230 = 196892867533LLU;
	static volatile int64_t x231 = INT64_MIN;
	int32_t x232 = INT32_MAX;
	volatile uint64_t t32 = 529277213906200LLU;

	t32 = ((x229%(x230*x231))/x232);

	if (t32 != 4294967298LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x234 = INT16_MIN;
	int64_t x235 = 1LL;
	uint8_t x236 = UINT8_MAX;
	volatile int64_t t33 = -8037796221LL;

	t33 = ((x233%(x234*x235))/x236);

	if (t33 != 128LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x241 = 942356080U;
	uint32_t x242 = 1306U;
	int32_t x243 = INT32_MAX;

	t34 = ((x241%(x242*x243))/x244);

	if (t34 != 134622297U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x245 = INT32_MIN;
	uint16_t x246 = 7034U;
	int16_t x248 = -87;
	volatile uint64_t t35 = 3943LLU;

	t35 = ((x245%(x246*x247))/x248);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x257 = -893847993LL;
	int16_t x258 = -4045;
	volatile int8_t x259 = INT8_MIN;
	int64_t x260 = INT64_MAX;
	volatile int64_t t36 = 7188526LL;

	t36 = ((x257%(x258*x259))/x260);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x261 = INT16_MIN;
	int8_t x263 = INT8_MIN;
	static uint64_t x264 = 78618595937238LLU;

	t37 = ((x261%(x262*x263))/x264);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x265 = 730;
	volatile int32_t x266 = INT32_MAX;
	static uint32_t x268 = 23U;

	t38 = ((x265%(x266*x267))/x268);

	if (t38 != 31U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x269 = 2;
	int32_t x270 = -2;
	static volatile uint16_t x271 = 1U;
	volatile int64_t t39 = 8239752414931LL;

	t39 = ((x269%(x270*x271))/x272);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x273 = 3266542732545LL;
	int16_t x274 = INT16_MIN;
	int16_t x275 = 103;
	int16_t x276 = 14;

	t40 = ((x273%(x274*x275))/x276);

	if (t40 != 166272LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x277 = UINT16_MAX;
	uint16_t x278 = UINT16_MAX;
	int8_t x279 = -1;
	uint8_t x280 = 19U;
	static volatile int32_t t41 = -51;

	t41 = ((x277%(x278*x279))/x280);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x281 = 16036;
	static int8_t x282 = INT8_MAX;
	int8_t x283 = -1;
	int32_t x284 = 916;

	t42 = ((x281%(x282*x283))/x284);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x285 = 25;
	static volatile int32_t x287 = 12802;
	int8_t x288 = INT8_MAX;

	t43 = ((x285%(x286*x287))/x288);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x297 = INT32_MAX;
	volatile int8_t x298 = -4;
	volatile int8_t x299 = INT8_MIN;
	volatile int64_t x300 = -1LL;
	volatile int64_t t44 = -76615LL;

	t44 = ((x297%(x298*x299))/x300);

	if (t44 != -511LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x301 = 20U;
	uint64_t x302 = UINT64_MAX;
	int16_t x303 = -147;
	int32_t x304 = -3;
	uint64_t t45 = 38LLU;

	t45 = ((x301%(x302*x303))/x304);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x317 = UINT8_MAX;
	uint32_t x318 = 10981U;
	int32_t x320 = INT32_MIN;
	volatile uint32_t t46 = 11180U;

	t46 = ((x317%(x318*x319))/x320);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x322 = UINT8_MAX;
	uint64_t x323 = 255780546405336002LLU;
	static int64_t x324 = INT64_MIN;
	volatile uint64_t t47 = 38845657106178106LLU;

	t47 = ((x321%(x322*x323))/x324);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x329 = 162U;
	int8_t x330 = -1;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t48 = 65715463;

	t48 = ((x329%(x330*x331))/x332);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x333 = 8919057;
	uint16_t x334 = 7353U;
	int8_t x335 = INT8_MIN;
	uint32_t x336 = UINT32_MAX;
	uint32_t t49 = 771530715U;

	t49 = ((x333%(x334*x335))/x336);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x337 = 989188676LLU;
	int8_t x338 = -1;
	int8_t x339 = -1;
	static uint8_t x340 = 1U;
	volatile uint64_t t50 = 2926906LLU;

	t50 = ((x337%(x338*x339))/x340);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x345 = INT8_MIN;
	int8_t x347 = -3;

	t51 = ((x345%(x346*x347))/x348);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x357 = UINT16_MAX;
	int16_t x358 = -1;
	int64_t x359 = INT64_MAX;
	static int64_t x360 = -3514402265604363996LL;

	t52 = ((x357%(x358*x359))/x360);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x361 = INT16_MIN;
	static uint16_t x362 = 87U;
	volatile uint16_t x363 = 1U;
	uint16_t x364 = 30U;
	volatile int32_t t53 = 12344602;

	t53 = ((x361%(x362*x363))/x364);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x365 = 0U;
	static volatile uint16_t x366 = UINT16_MAX;
	volatile uint64_t x368 = 85049614880587630LLU;
	uint64_t t54 = 81423018LLU;

	t54 = ((x365%(x366*x367))/x368);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x377 = UINT32_MAX;
	volatile int8_t x378 = INT8_MAX;
	int8_t x379 = INT8_MIN;
	int32_t x380 = -1;
	volatile uint32_t t55 = 24771607U;

	t55 = ((x377%(x378*x379))/x380);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x381 = UINT32_MAX;
	int8_t x382 = 1;
	int16_t x383 = -1;
	int32_t x384 = INT32_MAX;
	volatile uint32_t t56 = 372151U;

	t56 = ((x381%(x382*x383))/x384);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x389 = INT16_MIN;
	volatile int16_t x390 = 1975;
	volatile int16_t x392 = -5616;
	static volatile int32_t t57 = -174167304;

	t57 = ((x389%(x390*x391))/x392);

	if (t57 != 5) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x394 = 1395U;
	static volatile uint8_t x396 = 10U;
	static uint32_t t58 = 745648U;

	t58 = ((x393%(x394*x395))/x396);

	if (t58 != 22710U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x397 = -1LL;
	int16_t x398 = INT16_MIN;
	uint32_t x399 = UINT32_MAX;
	int16_t x400 = INT16_MIN;
	volatile int64_t t59 = 2428044LL;

	t59 = ((x397%(x398*x399))/x400);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x401 = INT32_MIN;
	uint8_t x402 = 52U;
	uint16_t x403 = 3U;
	static uint16_t x404 = UINT16_MAX;

	t60 = ((x401%(x402*x403))/x404);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x406 = 27089U;
	uint64_t x407 = 50927460LLU;
	int64_t x408 = -390138848LL;

	t61 = ((x405%(x406*x407))/x408);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x409 = 5U;
	volatile int16_t x410 = INT16_MIN;
	volatile int8_t x411 = 1;
	volatile int16_t x412 = INT16_MIN;

	t62 = ((x409%(x410*x411))/x412);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x414 = -4496;
	volatile int8_t x415 = INT8_MIN;
	volatile int64_t t63 = 205180LL;

	t63 = ((x413%(x414*x415))/x416);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x417 = UINT64_MAX;
	int16_t x418 = INT16_MIN;
	uint16_t x420 = UINT16_MAX;
	static uint64_t t64 = 1871214116150780LLU;

	t64 = ((x417%(x418*x419))/x420);

	if (t64 != 31LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x421 = 72;
	static volatile int16_t x422 = 1;
	uint8_t x423 = 2U;
	volatile int32_t t65 = -20;

	t65 = ((x421%(x422*x423))/x424);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x425 = 57LLU;
	uint64_t x426 = 64283188863267LLU;
	static uint32_t x427 = UINT32_MAX;
	int32_t x428 = INT32_MIN;
	volatile uint64_t t66 = 25453107487367LLU;

	t66 = ((x425%(x426*x427))/x428);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x429 = INT16_MAX;
	int16_t x430 = INT16_MIN;
	volatile int16_t x431 = 8;
	uint32_t t67 = 513095U;

	t67 = ((x429%(x430*x431))/x432);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x433 = 939344813U;
	int8_t x434 = 9;
	static uint8_t x435 = 36U;
	int64_t x436 = INT64_MIN;
	volatile int64_t t68 = 365857LL;

	t68 = ((x433%(x434*x435))/x436);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x441 = 1U;
	uint16_t x442 = 55U;
	uint64_t t69 = 2522197LLU;

	t69 = ((x441%(x442*x443))/x444);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x445 = -1;
	uint64_t x446 = 58111726LLU;
	volatile int32_t x447 = INT32_MIN;
	static volatile uint64_t t70 = 238611142940553LLU;

	t70 = ((x445%(x446*x447))/x448);

	if (t70 != 385166609080421LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x453 = -1;
	static uint64_t x454 = 694368358660LLU;
	int32_t x455 = -5;
	int32_t x456 = 1;
	volatile uint64_t t71 = 919332584289LLU;

	t71 = ((x453%(x454*x455))/x456);

	if (t71 != 3471841793299LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x457 = -433363;
	int64_t x458 = -346249LL;
	int64_t x460 = -5400557042LL;

	t72 = ((x457%(x458*x459))/x460);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x461 = 6;
	int16_t x462 = INT16_MAX;
	int8_t x463 = -1;
	static int64_t x464 = INT64_MIN;
	static int64_t t73 = 39046465281219497LL;

	t73 = ((x461%(x462*x463))/x464);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x465 = 2U;
	uint64_t x466 = 862013794LLU;
	static int32_t x467 = -1517;
	int64_t x468 = INT64_MIN;
	volatile uint64_t t74 = 31618141996LLU;

	t74 = ((x465%(x466*x467))/x468);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x469 = UINT64_MAX;
	int16_t x470 = INT16_MIN;
	int8_t x471 = INT8_MAX;
	volatile int16_t x472 = INT16_MAX;
	volatile uint64_t t75 = 6962602447404LLU;

	t75 = ((x469%(x470*x471))/x472);

	if (t75 != 127LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x473 = -1009960548LL;
	int32_t x474 = -2765252;
	int8_t x475 = INT8_MIN;
	static volatile uint16_t x476 = 9758U;
	volatile int64_t t76 = -186193153976LL;

	t76 = ((x473%(x474*x475))/x476);

	if (t76 != -30954LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x478 = INT8_MIN;
	uint16_t x479 = 62U;
	int16_t x480 = INT16_MAX;
	int32_t t77 = 3;

	t77 = ((x477%(x478*x479))/x480);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x485 = INT8_MIN;
	static int16_t x487 = INT16_MIN;

	t78 = ((x485%(x486*x487))/x488);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x497 = UINT64_MAX;
	int16_t x498 = INT16_MIN;
	int8_t x499 = INT8_MIN;
	volatile int64_t x500 = -1LL;

	t79 = ((x497%(x498*x499))/x500);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x505 = INT32_MIN;
	int16_t x506 = INT16_MIN;
	uint64_t x507 = 3LLU;
	volatile int32_t x508 = INT32_MIN;
	static volatile uint64_t t80 = 472654473683LLU;

	t80 = ((x505%(x506*x507))/x508);

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x509 = 1U;
	uint16_t x510 = 1U;
	volatile uint16_t x511 = UINT16_MAX;
	volatile int32_t x512 = INT32_MAX;
	volatile int32_t t81 = 36125;

	t81 = ((x509%(x510*x511))/x512);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x513 = UINT8_MAX;
	int16_t x514 = -1;
	int8_t x516 = -20;
	int32_t t82 = 592330274;

	t82 = ((x513%(x514*x515))/x516);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x517 = -112243523;
	int64_t x519 = 412676401LL;

	t83 = ((x517%(x518*x519))/x520);

	if (t83 != -37414507LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x521 = 6787U;
	uint8_t x522 = UINT8_MAX;
	int16_t x523 = -826;
	uint32_t t84 = 5864334U;

	t84 = ((x521%(x522*x523))/x524);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x529 = INT16_MIN;
	static uint16_t x530 = UINT16_MAX;
	static volatile int32_t x531 = 1;
	volatile int8_t x532 = INT8_MIN;

	t85 = ((x529%(x530*x531))/x532);

	if (t85 != 256) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x537 = UINT64_MAX;
	static uint32_t x538 = 1582U;
	int8_t x539 = -62;
	int8_t x540 = INT8_MAX;
	uint64_t t86 = 695LLU;

	t86 = ((x537%(x538*x539))/x540);

	if (t86 != 8116004LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x541 = INT8_MAX;
	int64_t x542 = -46955984681LL;
	static uint64_t x543 = 3349057468LLU;
	static volatile uint64_t x544 = UINT64_MAX;
	volatile uint64_t t87 = 8LLU;

	t87 = ((x541%(x542*x543))/x544);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x545 = -1;
	static uint64_t x546 = UINT64_MAX;
	uint64_t x547 = UINT64_MAX;
	int8_t x548 = INT8_MAX;
	volatile uint64_t t88 = 6LLU;

	t88 = ((x545%(x546*x547))/x548);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x550 = UINT8_MAX;
	uint8_t x552 = 12U;
	int32_t t89 = -106938;

	t89 = ((x549%(x550*x551))/x552);

	if (t89 != -10) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x557 = 24538901LLU;
	volatile int32_t x559 = 75;
	volatile uint64_t t90 = 5079234799293852LLU;

	t90 = ((x557%(x558*x559))/x560);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x561 = INT32_MIN;
	int64_t x562 = -159576LL;
	int32_t x563 = INT32_MIN;
	volatile int64_t t91 = -53850135336257LL;

	t91 = ((x561%(x562*x563))/x564);

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x567 = 122U;
	int8_t x568 = INT8_MAX;
	static volatile int64_t t92 = 0LL;

	t92 = ((x565%(x566*x567))/x568);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x570 = -1;
	int16_t x571 = INT16_MIN;
	uint8_t x572 = 71U;
	volatile int32_t t93 = 2;

	t93 = ((x569%(x570*x571))/x572);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x574 = 3;
	int32_t x575 = -1;
	uint16_t x576 = 44U;
	int32_t t94 = -41;

	t94 = ((x573%(x574*x575))/x576);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x577 = 9166U;
	int16_t x578 = INT16_MAX;
	int8_t x579 = INT8_MAX;
	volatile uint32_t x580 = 3328U;
	volatile uint32_t t95 = 800U;

	t95 = ((x577%(x578*x579))/x580);

	if (t95 != 2U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x585 = -700;
	static volatile uint64_t x586 = 7LLU;
	int16_t x587 = -59;
	static int32_t x588 = 141967;
	volatile uint64_t t96 = 3304095171606044337LLU;

	t96 = ((x585%(x586*x587))/x588);

	if (t96 != 129936844997144LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x589 = INT32_MIN;
	int32_t x590 = 508;
	uint8_t x591 = 53U;
	static int64_t x592 = INT64_MIN;
	static volatile int64_t t97 = 3LL;

	t97 = ((x589%(x590*x591))/x592);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x597 = UINT64_MAX;
	static uint64_t x598 = 726563237529LLU;
	volatile int8_t x599 = INT8_MAX;
	uint64_t x600 = 48929300826918LLU;
	volatile uint64_t t98 = 2302030408LLU;

	t98 = ((x597%(x598*x599))/x600);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x601 = 7814708;
	static int32_t x602 = -1;
	static uint32_t x603 = 63924596U;
	int32_t x604 = INT32_MAX;
	static volatile uint32_t t99 = 119291U;

	t99 = ((x601%(x602*x603))/x604);

	if (t99 != 0U) { NG(); } else { ; }
	
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

