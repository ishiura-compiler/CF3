#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
volatile int8_t x5 = INT8_MIN;
uint8_t x6 = 64U;
int8_t x7 = 3;
uint64_t x9 = 469293420LLU;
volatile int32_t x10 = INT32_MIN;
uint8_t x18 = 1U;
static int8_t x29 = INT8_MIN;
int16_t x33 = -4320;
static int64_t x34 = 2719615430LL;
int32_t x41 = INT32_MIN;
int32_t t8 = 0;
uint32_t x52 = UINT32_MAX;
int32_t x61 = INT32_MAX;
volatile uint32_t t11 = 0U;
uint64_t x74 = 510624LLU;
volatile uint64_t t12 = 338171LLU;
static int16_t x83 = -628;
static volatile uint64_t t13 = 7911LLU;
volatile int16_t x85 = 10;
int8_t x88 = -18;
volatile int16_t x98 = -1;
volatile int8_t x100 = 0;
uint32_t x103 = 1642796032U;
int64_t x105 = 1LL;
static volatile int64_t t20 = 33120486384LL;
int16_t x118 = INT16_MIN;
int16_t x120 = -1;
volatile int64_t t21 = 1289170LL;
uint64_t x134 = 3519778469729LLU;
static uint64_t x136 = 19LLU;
volatile int64_t t27 = 95613LL;
int32_t x161 = INT32_MIN;
int64_t x171 = -1LL;
int64_t x173 = INT64_MIN;
uint16_t x175 = 2247U;
static int8_t x176 = -1;
int64_t x180 = -1LL;
static volatile int16_t x189 = 7;
volatile int16_t x215 = INT16_MIN;
int32_t t35 = 699056037;
uint64_t t36 = 257975495733LLU;
static int16_t x228 = 1;
uint64_t x244 = 4LLU;
int16_t x248 = -117;
volatile int64_t t40 = 3886897797162LL;
int16_t x283 = INT16_MIN;
int32_t x293 = INT32_MIN;
int16_t x306 = -1;
volatile int8_t x310 = -1;
int8_t x312 = -1;
volatile uint64_t t50 = 669844022446646859LLU;
int64_t x326 = -1LL;
static int64_t t51 = -41120LL;
int8_t x343 = INT8_MAX;
volatile uint64_t t53 = 574LLU;
int32_t x359 = -41;
uint16_t x362 = 5035U;
uint32_t x369 = 187350U;
uint32_t t58 = 43U;
int64_t x395 = 442573935486LL;
int16_t x404 = INT16_MAX;
int64_t x409 = INT64_MIN;
int16_t x422 = INT16_MIN;
int32_t x428 = INT32_MIN;
uint8_t x431 = 57U;
int16_t x441 = -1;
volatile uint8_t x469 = UINT8_MAX;
uint64_t x470 = UINT64_MAX;
int64_t x474 = 3LL;
int32_t x481 = INT32_MIN;
volatile uint16_t x483 = UINT16_MAX;
static int32_t x486 = -407742;
int16_t x507 = INT16_MAX;
static uint8_t x508 = UINT8_MAX;
uint8_t x512 = 2U;
volatile uint64_t x519 = 27LLU;
int8_t x530 = -58;
static int32_t x532 = INT32_MAX;
int32_t t87 = INT32_MIN;
static int16_t x539 = -3;
int32_t x540 = -35;
uint16_t x548 = 5U;
int16_t x568 = 26;
int32_t x569 = -1521588;
uint8_t x574 = 35U;
int8_t x575 = INT8_MIN;
int8_t x579 = -8;
volatile int32_t t95 = -42;
volatile int64_t t96 = -1034453025365585LL;
static uint64_t x597 = UINT64_MAX;


void f0(void) {
	volatile int16_t x2 = INT16_MIN;
	volatile uint8_t x3 = UINT8_MAX;
	volatile uint16_t x4 = 361U;
	int32_t t0 = -1094971;

	t0 = ((x1/(x2*x3))-x4);

	if (t0 != -618) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x8 = 3797U;
	volatile int32_t t1 = -8341807;

	t1 = ((x5/(x6*x7))-x8);

	if (t1 != -3797) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x11 = 7480714987382814006LLU;
	static int8_t x12 = INT8_MIN;
	uint64_t t2 = 115027867802LLU;

	t2 = ((x9/(x10*x11))-x12);

	if (t2 != 128LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = UINT32_MAX;
	uint64_t x14 = 217058447918099483LLU;
	int32_t x15 = 3781773;
	int8_t x16 = -55;
	volatile uint64_t t3 = 465LLU;

	t3 = ((x13/(x14*x15))-x16);

	if (t3 != 55LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	volatile int16_t x19 = -1;
	int32_t x20 = -1;
	volatile int32_t t4 = -92530;

	t4 = ((x17/(x18*x19))-x20);

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 24U;
	int8_t x22 = INT8_MIN;
	volatile int16_t x23 = INT16_MAX;
	uint16_t x24 = 3913U;
	volatile int32_t t5 = -40;

	t5 = ((x21/(x22*x23))-x24);

	if (t5 != -3913) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x30 = 23955270112134LLU;
	int8_t x31 = -1;
	static uint16_t x32 = 1064U;
	static volatile uint64_t t6 = 30LLU;

	t6 = ((x29/(x30*x31))-x32);

	if (t6 != 18446744073709550553LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x35 = 930524131146204251LLU;
	int32_t x36 = -4723142;
	volatile uint64_t t7 = 134656587579886LLU;

	t7 = ((x33/(x34*x35))-x36);

	if (t7 != 4723143LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x42 = 61U;
	static volatile int16_t x43 = INT16_MAX;
	int32_t x44 = -1;

	t8 = ((x41/(x42*x43))-x44);

	if (t8 != -1073) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = INT32_MIN;
	uint8_t x46 = 2U;
	volatile int16_t x47 = INT16_MAX;
	volatile uint16_t x48 = 42U;
	int32_t t9 = 212300734;

	t9 = ((x45/(x46*x47))-x48);

	if (t9 != -32811) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = 44LL;
	int8_t x50 = INT8_MIN;
	int8_t x51 = 1;
	int64_t t10 = 1LL;

	t10 = ((x49/(x50*x51))-x52);

	if (t10 != -4294967295LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x62 = INT8_MIN;
	uint32_t x63 = UINT32_MAX;
	volatile int8_t x64 = INT8_MIN;

	t11 = ((x61/(x62*x63))-x64);

	if (t11 != 16777343U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x73 = INT64_MAX;
	volatile uint8_t x75 = 19U;
	int64_t x76 = INT64_MAX;

	t12 = ((x73/(x74*x75))-x76);

	if (t12 != 9223372987535968856LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x81 = -1LL;
	volatile uint64_t x82 = 29739859088372724LLU;
	static uint64_t x84 = 200819374075LLU;

	t13 = ((x81/(x82*x83))-x84);

	if (t13 != 18446743872890177542LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x86 = UINT16_MAX;
	int32_t x87 = -6249;
	int32_t t14 = -110227;

	t14 = ((x85/(x86*x87))-x88);

	if (t14 != 18) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MAX;
	int16_t x91 = INT16_MIN;
	uint64_t x92 = 5698791747LLU;
	volatile uint64_t t15 = 8126374089LLU;

	t15 = ((x89/(x90*x91))-x92);

	if (t15 != 2210639607549LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x93 = -1;
	uint32_t x94 = 28738U;
	int16_t x95 = -1;
	int16_t x96 = -1;
	static volatile uint32_t t16 = 9784101U;

	t16 = ((x93/(x94*x95))-x96);

	if (t16 != 2U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x97 = -426167LL;
	uint8_t x99 = 3U;
	int64_t t17 = -883260900438085LL;

	t17 = ((x97/(x98*x99))-x100);

	if (t17 != 142055LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x101 = INT16_MAX;
	uint32_t x102 = UINT32_MAX;
	int16_t x104 = -1;
	uint32_t t18 = 1070849119U;

	t18 = ((x101/(x102*x103))-x104);

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x106 = INT8_MAX;
	static int16_t x107 = INT16_MIN;
	int8_t x108 = -1;
	volatile int64_t t19 = 20317183828LL;

	t19 = ((x105/(x106*x107))-x108);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x109 = -414249361;
	uint32_t x110 = 220612U;
	uint8_t x111 = 9U;
	int64_t x112 = 4072027LL;

	t20 = ((x109/(x110*x111))-x112);

	if (t20 != -4070073LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x117 = 4291805137LL;
	uint32_t x119 = UINT32_MAX;

	t21 = ((x117/(x118*x119))-x120);

	if (t21 != 130976LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x125 = INT8_MIN;
	uint64_t x126 = 11LLU;
	int64_t x127 = -1LL;
	uint32_t x128 = 88057469U;
	uint64_t t22 = 1348403434LLU;

	t22 = ((x125/(x126*x127))-x128);

	if (t22 != 18446744073621494147LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x129 = -5670185701389444LL;
	volatile uint64_t x130 = 24941LLU;
	uint64_t x131 = 7283709LLU;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t23 = 561356044LLU;

	t23 = ((x129/(x130*x131))-x132);

	if (t23 != 101512556LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x133 = 10;
	int64_t x135 = INT64_MIN;
	uint64_t t24 = 64229735309LLU;

	t24 = ((x133/(x134*x135))-x136);

	if (t24 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x137 = 12266;
	static int32_t x138 = INT32_MAX;
	static uint64_t x139 = 2LLU;
	volatile int8_t x140 = INT8_MIN;
	static volatile uint64_t t25 = 2772478507LLU;

	t25 = ((x137/(x138*x139))-x140);

	if (t25 != 128LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x145 = 687;
	volatile int16_t x146 = INT16_MAX;
	static volatile uint8_t x147 = UINT8_MAX;
	static int16_t x148 = INT16_MAX;
	int32_t t26 = -58232;

	t26 = ((x145/(x146*x147))-x148);

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x149 = 1222U;
	static volatile int32_t x150 = -28;
	int8_t x151 = INT8_MIN;
	int64_t x152 = -575563LL;

	t27 = ((x149/(x150*x151))-x152);

	if (t27 != 575563LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x162 = -576493258LL;
	static int8_t x163 = INT8_MIN;
	int32_t x164 = INT32_MAX;
	int64_t t28 = 900617961LL;

	t28 = ((x161/(x162*x163))-x164);

	if (t28 != -2147483647LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x165 = -20LL;
	static uint8_t x166 = UINT8_MAX;
	int16_t x167 = -570;
	int16_t x168 = -1;
	static int64_t t29 = 760621512757228930LL;

	t29 = ((x165/(x166*x167))-x168);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x169 = UINT32_MAX;
	static int8_t x170 = -1;
	uint32_t x172 = UINT32_MAX;
	static volatile int64_t t30 = -3438494778LL;

	t30 = ((x169/(x170*x171))-x172);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x174 = UINT64_MAX;
	static volatile uint64_t t31 = 1414543LLU;

	t31 = ((x173/(x174*x175))-x176);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x177 = -81679661;
	uint64_t x178 = UINT64_MAX;
	static int32_t x179 = INT32_MIN;
	uint64_t t32 = 7515780LLU;

	t32 = ((x177/(x178*x179))-x180);

	if (t32 != 8589934592LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x190 = INT64_MAX;
	volatile uint64_t x191 = UINT64_MAX;
	static uint32_t x192 = 26172523U;
	volatile uint64_t t33 = 3647311097442LLU;

	t33 = ((x189/(x190*x191))-x192);

	if (t33 != 18446744073683379093LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x197 = 356280230U;
	volatile uint8_t x198 = 58U;
	int16_t x199 = -1;
	static int32_t x200 = INT32_MIN;
	static volatile uint32_t t34 = 9U;

	t34 = ((x197/(x198*x199))-x200);

	if (t34 != 2147483648U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x213 = -1;
	int8_t x214 = -6;
	uint8_t x216 = UINT8_MAX;

	t35 = ((x213/(x214*x215))-x216);

	if (t35 != -255) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x217 = 124LLU;
	uint16_t x218 = UINT16_MAX;
	volatile int32_t x219 = 629;
	uint16_t x220 = 30199U;

	t36 = ((x217/(x218*x219))-x220);

	if (t36 != 18446744073709521417LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x225 = 2;
	int32_t x226 = INT32_MIN;
	uint64_t x227 = UINT64_MAX;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = ((x225/(x226*x227))-x228);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x229 = 56034U;
	uint32_t x230 = 261U;
	uint64_t x231 = UINT64_MAX;
	uint16_t x232 = 10195U;
	uint64_t t38 = 30LLU;

	t38 = ((x229/(x230*x231))-x232);

	if (t38 != 18446744073709541421LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x241 = INT64_MIN;
	int16_t x242 = INT16_MAX;
	uint8_t x243 = 2U;
	uint64_t t39 = 62732797704484LLU;

	t39 = ((x241/(x242*x243))-x244);

	if (t39 != 18446603331926097912LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x245 = INT32_MAX;
	static int64_t x246 = -1LL;
	static int16_t x247 = INT16_MIN;

	t40 = ((x245/(x246*x247))-x248);

	if (t40 != 65652LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x257 = -1;
	int8_t x258 = 1;
	uint32_t x259 = 14925003U;
	int16_t x260 = -1;
	uint32_t t41 = 2U;

	t41 = ((x257/(x258*x259))-x260);

	if (t41 != 288U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x277 = INT8_MAX;
	uint16_t x278 = 439U;
	static int8_t x279 = -1;
	static int16_t x280 = -1;
	int32_t t42 = -562051;

	t42 = ((x277/(x278*x279))-x280);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x281 = INT64_MAX;
	int32_t x282 = -1;
	int16_t x284 = INT16_MAX;
	volatile int64_t t43 = 2045812LL;

	t43 = ((x281/(x282*x283))-x284);

	if (t43 != 281474976677888LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x285 = -1;
	volatile uint32_t x286 = 161U;
	uint16_t x287 = UINT16_MAX;
	uint64_t x288 = 29783558179643476LLU;
	uint64_t t44 = 222770087560398375LLU;

	t44 = ((x285/(x286*x287))-x288);

	if (t44 != 18416960515529908547LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x289 = INT16_MAX;
	uint64_t x290 = UINT64_MAX;
	static int16_t x291 = -1;
	uint16_t x292 = 2032U;
	static uint64_t t45 = 272274LLU;

	t45 = ((x289/(x290*x291))-x292);

	if (t45 != 30735LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x294 = UINT64_MAX;
	uint16_t x295 = 331U;
	int32_t x296 = -1;
	volatile uint64_t t46 = 7198019LLU;

	t46 = ((x293/(x294*x295))-x296);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x297 = -1;
	int16_t x298 = -7218;
	volatile int64_t x299 = -1LL;
	int16_t x300 = -1;
	int64_t t47 = -43027196421LL;

	t47 = ((x297/(x298*x299))-x300);

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x305 = 0U;
	int8_t x307 = INT8_MIN;
	uint16_t x308 = 9940U;
	int32_t t48 = -93522957;

	t48 = ((x305/(x306*x307))-x308);

	if (t48 != -9940) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x309 = UINT32_MAX;
	volatile int64_t x311 = 9856LL;
	volatile int64_t t49 = 182497372464887LL;

	t49 = ((x309/(x310*x311))-x312);

	if (t49 != -435770LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x321 = 0U;
	uint64_t x322 = 110239498005177LLU;
	volatile int8_t x323 = INT8_MIN;
	static volatile int16_t x324 = 26;

	t50 = ((x321/(x322*x323))-x324);

	if (t50 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x325 = -13;
	static uint8_t x327 = 8U;
	static int64_t x328 = -1LL;

	t51 = ((x325/(x326*x327))-x328);

	if (t51 != 2LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x337 = 0U;
	uint32_t x338 = UINT32_MAX;
	int8_t x339 = -1;
	static int32_t x340 = INT32_MIN;
	volatile uint32_t t52 = 2960U;

	t52 = ((x337/(x338*x339))-x340);

	if (t52 != 2147483648U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x341 = 612283066455LLU;
	int8_t x342 = INT8_MIN;
	volatile int64_t x344 = INT64_MIN;

	t53 = ((x341/(x342*x343))-x344);

	if (t53 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x345 = -1;
	static int16_t x346 = -32;
	uint16_t x347 = UINT16_MAX;
	uint16_t x348 = 290U;
	volatile int32_t t54 = 0;

	t54 = ((x345/(x346*x347))-x348);

	if (t54 != -290) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x357 = UINT16_MAX;
	uint64_t x358 = 4676803314LLU;
	uint8_t x360 = 0U;
	uint64_t t55 = 29752LLU;

	t55 = ((x357/(x358*x359))-x360);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x361 = -1;
	static int64_t x363 = -1LL;
	static int8_t x364 = INT8_MIN;
	volatile int64_t t56 = 4LL;

	t56 = ((x361/(x362*x363))-x364);

	if (t56 != 128LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x365 = UINT16_MAX;
	volatile int8_t x366 = INT8_MAX;
	uint16_t x367 = 1806U;
	int8_t x368 = INT8_MIN;
	volatile int32_t t57 = -1060271506;

	t57 = ((x365/(x366*x367))-x368);

	if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x370 = 1U;
	int32_t x371 = -4;
	static uint32_t x372 = 131U;

	t58 = ((x369/(x370*x371))-x372);

	if (t58 != 4294967165U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x377 = INT32_MAX;
	volatile uint64_t x378 = 26575467578324031LLU;
	int32_t x379 = INT32_MAX;
	int8_t x380 = -8;
	volatile uint64_t t59 = 5119969252955334LLU;

	t59 = ((x377/(x378*x379))-x380);

	if (t59 != 8LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x393 = INT8_MIN;
	uint64_t x394 = 472802985908LLU;
	static volatile uint16_t x396 = 1593U;
	uint64_t t60 = 2LLU;

	t60 = ((x393/(x394*x395))-x396);

	if (t60 != 18446744073709550025LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x397 = INT32_MIN;
	int8_t x398 = -1;
	static int16_t x399 = INT16_MIN;
	int32_t x400 = 13055984;
	volatile int32_t t61 = 17053740;

	t61 = ((x397/(x398*x399))-x400);

	if (t61 != -13121520) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x401 = INT16_MAX;
	static int8_t x402 = -14;
	uint32_t x403 = UINT32_MAX;
	volatile uint32_t t62 = 16U;

	t62 = ((x401/(x402*x403))-x404);

	if (t62 != 4294936869U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x405 = INT32_MAX;
	int16_t x406 = -1;
	int8_t x407 = INT8_MIN;
	int8_t x408 = -1;
	volatile int32_t t63 = 57;

	t63 = ((x405/(x406*x407))-x408);

	if (t63 != 16777216) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x410 = 946801061LL;
	int16_t x411 = INT16_MAX;
	uint8_t x412 = 16U;
	int64_t t64 = 128333129574LL;

	t64 = ((x409/(x410*x411))-x412);

	if (t64 != -297315LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x417 = -4813LL;
	int16_t x418 = -2;
	int16_t x419 = -1;
	int32_t x420 = 2507388;
	volatile int64_t t65 = 2722LL;

	t65 = ((x417/(x418*x419))-x420);

	if (t65 != -2509794LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x421 = 30U;
	int16_t x423 = INT16_MIN;
	volatile int32_t x424 = -741;
	static volatile int32_t t66 = -332997;

	t66 = ((x421/(x422*x423))-x424);

	if (t66 != 741) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x425 = 1LLU;
	int8_t x426 = INT8_MAX;
	volatile uint8_t x427 = UINT8_MAX;
	uint64_t t67 = 723764153254200LLU;

	t67 = ((x425/(x426*x427))-x428);

	if (t67 != 2147483648LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x429 = -3;
	volatile uint8_t x430 = 34U;
	volatile uint32_t x432 = 58432283U;
	uint32_t t68 = 158740059U;

	t68 = ((x429/(x430*x431))-x432);

	if (t68 != 4236535013U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x433 = 9246LL;
	int64_t x434 = -1LL;
	int32_t x435 = -1;
	static uint16_t x436 = UINT16_MAX;
	int64_t t69 = 53021LL;

	t69 = ((x433/(x434*x435))-x436);

	if (t69 != -56289LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x442 = 2863U;
	int8_t x443 = INT8_MIN;
	volatile int16_t x444 = INT16_MAX;
	volatile int32_t t70 = 223;

	t70 = ((x441/(x442*x443))-x444);

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x445 = -3;
	uint64_t x446 = UINT64_MAX;
	static volatile uint8_t x447 = 30U;
	int16_t x448 = INT16_MAX;
	uint64_t t71 = 36757323957LLU;

	t71 = ((x445/(x446*x447))-x448);

	if (t71 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x449 = INT8_MIN;
	volatile uint64_t x450 = 4084102857180LLU;
	volatile uint8_t x451 = 58U;
	uint8_t x452 = UINT8_MAX;
	uint64_t t72 = 233LLU;

	t72 = ((x449/(x450*x451))-x452);

	if (t72 != 77619LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x453 = -1;
	uint16_t x454 = 35U;
	volatile int8_t x455 = 2;
	volatile uint16_t x456 = 112U;
	static int32_t t73 = 972492;

	t73 = ((x453/(x454*x455))-x456);

	if (t73 != -112) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x461 = INT64_MIN;
	volatile int32_t x462 = INT32_MAX;
	static int16_t x463 = -1;
	static volatile uint16_t x464 = 243U;
	volatile int64_t t74 = -4382581668868LL;

	t74 = ((x461/(x462*x463))-x464);

	if (t74 != 4294967055LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x465 = -913311753834119LL;
	int16_t x466 = INT16_MIN;
	int64_t x467 = -1LL;
	volatile uint8_t x468 = 4U;
	volatile int64_t t75 = -416237350542LL;

	t75 = ((x465/(x466*x467))-x468);

	if (t75 != -27872062804LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x471 = 9453U;
	int32_t x472 = -246;
	static uint64_t t76 = 2874LLU;

	t76 = ((x469/(x470*x471))-x472);

	if (t76 != 246LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x473 = -1170626LL;
	int64_t x475 = -1LL;
	uint16_t x476 = UINT16_MAX;
	int64_t t77 = 86193LL;

	t77 = ((x473/(x474*x475))-x476);

	if (t77 != 324673LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x482 = 14U;
	uint16_t x484 = 7U;
	static volatile int32_t t78 = 320;

	t78 = ((x481/(x482*x483))-x484);

	if (t78 != -2347) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x485 = INT16_MIN;
	int16_t x487 = -1;
	static int16_t x488 = INT16_MIN;
	int32_t t79 = -1823794;

	t79 = ((x485/(x486*x487))-x488);

	if (t79 != 32768) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x493 = -1LL;
	int64_t x494 = -1LL;
	uint32_t x495 = 14464U;
	int64_t x496 = -27674112381255LL;
	int64_t t80 = -132948610486586764LL;

	t80 = ((x493/(x494*x495))-x496);

	if (t80 != 27674112381255LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x497 = INT8_MIN;
	static uint32_t x498 = UINT32_MAX;
	static uint32_t x499 = UINT32_MAX;
	int64_t x500 = -3491739LL;
	volatile int64_t t81 = 99LL;

	t81 = ((x497/(x498*x499))-x500);

	if (t81 != 4298458907LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x501 = UINT32_MAX;
	int32_t x502 = -1;
	int32_t x503 = INT32_MAX;
	int64_t x504 = -16905294210LL;
	volatile int64_t t82 = 61448473772124875LL;

	t82 = ((x501/(x502*x503))-x504);

	if (t82 != 16905294211LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x505 = INT32_MAX;
	static uint64_t x506 = 1314503699127858068LLU;
	static volatile uint64_t t83 = 41362277709473LLU;

	t83 = ((x505/(x506*x507))-x508);

	if (t83 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x509 = UINT8_MAX;
	uint16_t x510 = 105U;
	int16_t x511 = INT16_MIN;
	volatile int32_t t84 = -246;

	t84 = ((x509/(x510*x511))-x512);

	if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x513 = -1;
	int32_t x514 = INT32_MIN;
	uint32_t x515 = 95417415U;
	uint64_t x516 = 1761650252LLU;
	volatile uint64_t t85 = 1301LLU;

	t85 = ((x513/(x514*x515))-x516);

	if (t85 != 18446744071947901365LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x517 = 1965239857914014LL;
	uint8_t x518 = UINT8_MAX;
	volatile uint64_t x520 = UINT64_MAX;
	uint64_t t86 = 4099920831073216LLU;

	t86 = ((x517/(x518*x519))-x520);

	if (t86 != 285437887860LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x529 = INT8_MIN;
	static int8_t x531 = -2;

	t87 = ((x529/(x530*x531))-x532);

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x533 = INT64_MAX;
	volatile int16_t x534 = INT16_MIN;
	int64_t x535 = -5221330806LL;
	int64_t x536 = -1LL;
	int64_t t88 = 2601624LL;

	t88 = ((x533/(x534*x535))-x536);

	if (t88 != 53909LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x537 = INT64_MIN;
	uint64_t x538 = UINT64_MAX;
	volatile uint64_t t89 = 752860790LLU;

	t89 = ((x537/(x538*x539))-x540);

	if (t89 != 3074457345618258637LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x545 = UINT16_MAX;
	volatile int32_t x546 = INT32_MAX;
	uint32_t x547 = 2190087U;
	volatile uint32_t t90 = 4195022U;

	t90 = ((x545/(x546*x547))-x548);

	if (t90 != 4294967291U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x561 = 157251044664574LLU;
	int64_t x562 = -25889635LL;
	int16_t x563 = -1;
	int8_t x564 = INT8_MIN;
	volatile uint64_t t91 = 1290LLU;

	t91 = ((x561/(x562*x563))-x564);

	if (t91 != 6074027LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x565 = 291U;
	volatile uint16_t x566 = UINT16_MAX;
	uint64_t x567 = 119162881229LLU;
	volatile uint64_t t92 = 94237592LLU;

	t92 = ((x565/(x566*x567))-x568);

	if (t92 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x570 = 2631862LLU;
	int32_t x571 = INT32_MAX;
	int64_t x572 = -92579349LL;
	uint64_t t93 = 1LLU;

	t93 = ((x569/(x570*x571))-x572);

	if (t93 != 92582612LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x573 = UINT8_MAX;
	int64_t x576 = INT64_MAX;
	int64_t t94 = -7321879034LL;

	t94 = ((x573/(x574*x575))-x576);

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x577 = INT8_MAX;
	uint8_t x578 = 7U;
	volatile int8_t x580 = -55;

	t95 = ((x577/(x578*x579))-x580);

	if (t95 != 53) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x581 = INT32_MIN;
	int32_t x582 = -1;
	uint32_t x583 = UINT32_MAX;
	int64_t x584 = -1LL;

	t96 = ((x581/(x582*x583))-x584);

	if (t96 != 2147483649LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x585 = 93U;
	int32_t x586 = -1;
	int8_t x587 = -1;
	static uint8_t x588 = 34U;
	volatile int32_t t97 = 1014351720;

	t97 = ((x585/(x586*x587))-x588);

	if (t97 != 59) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x589 = -3;
	int64_t x590 = -58184014443440244LL;
	uint32_t x591 = 29U;
	int8_t x592 = 1;
	volatile int64_t t98 = 5829LL;

	t98 = ((x589/(x590*x591))-x592);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x598 = 6456512U;
	uint16_t x599 = 33U;
	static int16_t x600 = INT16_MIN;
	static volatile uint64_t t99 = 300199459619186620LLU;

	t99 = ((x597/(x598*x599))-x600);

	if (t99 != 86578086778LLU) { NG(); } else { ; }
	
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

