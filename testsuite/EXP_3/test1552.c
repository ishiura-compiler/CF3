#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x18 = -1178;
static uint64_t x20 = 2695791796767477992LLU;
static int32_t t1 = -25;
static uint64_t x32 = 8017292330065LLU;
int32_t t6 = -622;
volatile uint64_t x77 = UINT64_MAX;
static uint64_t t8 = 734519921104131LLU;
int16_t x92 = -2;
int64_t t10 = -47746LL;
static volatile uint32_t x141 = UINT32_MAX;
volatile int16_t x145 = -1;
int8_t x148 = -1;
static int8_t x150 = INT8_MIN;
uint16_t x167 = 15U;
int8_t x177 = 0;
static volatile uint16_t x192 = UINT16_MAX;
static int8_t x201 = 12;
uint8_t x210 = 1U;
int16_t x212 = INT16_MIN;
uint32_t x227 = 12U;
static int16_t x241 = INT16_MAX;
int8_t x243 = INT8_MIN;
uint8_t x250 = UINT8_MAX;
int16_t x251 = 97;
int32_t x282 = INT32_MAX;
int32_t x298 = -1;
int16_t x305 = INT16_MAX;
int32_t x307 = INT32_MIN;
int32_t t29 = 372;
int64_t x314 = -1LL;
int16_t x315 = INT16_MIN;
volatile int8_t x325 = 1;
int8_t x328 = INT8_MIN;
volatile int8_t x341 = -1;
static volatile int32_t t32 = -1008942;
volatile uint64_t t34 = 13327175LLU;
volatile uint64_t x363 = 198775299270141574LLU;
static uint64_t t35 = 122412098956804293LLU;
int8_t x367 = INT8_MAX;
uint64_t t38 = 47156LLU;
int64_t x381 = INT64_MAX;
volatile int8_t x389 = INT8_MIN;
static volatile uint64_t x428 = UINT64_MAX;
int64_t x429 = -1LL;
uint64_t x442 = 27LLU;
int8_t x444 = -1;
uint16_t x452 = 8002U;
int16_t x454 = -1;
volatile int32_t x455 = INT32_MIN;
static int8_t x465 = -1;
int32_t x471 = -1;
int32_t x473 = -1;
volatile uint64_t t51 = 14656117816950991LLU;
uint32_t t53 = 15U;
static uint8_t x500 = 1U;
volatile uint32_t x505 = 83U;
static volatile int64_t x507 = INT64_MIN;
static volatile int32_t x514 = -29479;
static int16_t x535 = -1;
static volatile int16_t x550 = 12;
volatile int32_t t62 = 109;
uint8_t x574 = 22U;
static int16_t x593 = -1;
uint32_t x594 = 7U;
int16_t x596 = INT16_MAX;
volatile int32_t x626 = -1;
uint16_t x631 = 15U;
volatile int64_t t69 = 1LL;
int8_t x681 = INT8_MAX;
int32_t x683 = INT32_MIN;
static int16_t x686 = -1;
int16_t x693 = 5;
uint8_t x698 = 6U;
int32_t x701 = -1;
uint8_t x713 = 6U;
static uint16_t x714 = 172U;
int16_t x717 = 86;
int64_t t81 = -13955864873853LL;
int64_t x799 = -4526234LL;
volatile int32_t t85 = -69475511;
int8_t x801 = -1;
volatile uint32_t x802 = UINT32_MAX;
static int16_t x829 = INT16_MIN;
int32_t x833 = INT32_MAX;
uint16_t x836 = UINT16_MAX;
int8_t x868 = -1;
static volatile int64_t t90 = -11929556253LL;
int32_t x876 = 61787;
volatile int64_t t91 = 24LL;
uint32_t x881 = 130176454U;
volatile uint8_t x883 = 31U;
static int8_t x891 = -31;
uint16_t x901 = 69U;
uint16_t x911 = 23U;
uint64_t x916 = UINT64_MAX;
uint16_t x920 = UINT16_MAX;
static volatile int64_t x927 = -2268890740333823013LL;


void f0(void) {
	static uint64_t x1 = 28028963LLU;
	volatile uint64_t x2 = 50576876179529603LLU;
	static volatile int8_t x3 = -1;
	static int8_t x4 = -1;
	volatile uint64_t t0 = 2374512156412LLU;

	t0 = ((x1*x2)%(x3<=x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x17 = INT16_MAX;
	static int64_t x19 = 33279703666LL;

	t1 = ((x17*x18)%(x19<=x20));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x29 = UINT64_MAX;
	static int32_t x30 = -1;
	static uint16_t x31 = 1188U;
	volatile uint64_t t2 = 14541LLU;

	t2 = ((x29*x30)%(x31<=x32));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x45 = -14693;
	volatile uint8_t x46 = 19U;
	volatile int64_t x47 = -1LL;
	static volatile uint16_t x48 = UINT16_MAX;
	static int32_t t3 = 16195501;

	t3 = ((x45*x46)%(x47<=x48));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x53 = INT8_MAX;
	volatile int8_t x54 = INT8_MIN;
	static int16_t x55 = INT16_MIN;
	volatile uint8_t x56 = UINT8_MAX;
	int32_t t4 = -3300218;

	t4 = ((x53*x54)%(x55<=x56));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x65 = 1;
	int32_t x66 = INT32_MIN;
	uint64_t x67 = UINT64_MAX;
	int32_t x68 = -1;
	int32_t t5 = 13891;

	t5 = ((x65*x66)%(x67<=x68));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x69 = 1;
	uint8_t x70 = UINT8_MAX;
	static uint32_t x71 = 1507U;
	int32_t x72 = INT32_MIN;

	t6 = ((x69*x70)%(x71<=x72));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x73 = 6U;
	volatile int64_t x74 = 1915149LL;
	uint64_t x75 = 11449886LLU;
	uint64_t x76 = 400298778691283LLU;
	volatile int64_t t7 = -3195403LL;

	t7 = ((x73*x74)%(x75<=x76));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x78 = 8;
	static uint16_t x79 = 0U;
	volatile int16_t x80 = 223;

	t8 = ((x77*x78)%(x79<=x80));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x85 = 556215395699292LLU;
	volatile int8_t x86 = 1;
	volatile int64_t x87 = -203604LL;
	int32_t x88 = -1;
	uint64_t t9 = 12731567438840LLU;

	t9 = ((x85*x86)%(x87<=x88));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x89 = 5200U;
	int64_t x90 = 136LL;
	volatile int64_t x91 = INT64_MIN;

	t10 = ((x89*x90)%(x91<=x92));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x137 = UINT16_MAX;
	static int16_t x138 = INT16_MIN;
	static uint64_t x139 = 109LLU;
	int64_t x140 = INT64_MIN;
	int32_t t11 = -26;

	t11 = ((x137*x138)%(x139<=x140));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x142 = INT16_MIN;
	int64_t x143 = -1LL;
	volatile uint32_t x144 = UINT32_MAX;
	volatile uint32_t t12 = 1108218U;

	t12 = ((x141*x142)%(x143<=x144));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x146 = INT64_MAX;
	volatile int8_t x147 = -1;
	volatile int64_t t13 = 644543349LL;

	t13 = ((x145*x146)%(x147<=x148));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x149 = 1U;
	int64_t x151 = -1LL;
	int64_t x152 = 5835985910LL;
	int32_t t14 = 0;

	t14 = ((x149*x150)%(x151<=x152));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x165 = -1LL;
	int64_t x166 = -1LL;
	uint16_t x168 = 213U;
	int64_t t15 = 2215LL;

	t15 = ((x165*x166)%(x167<=x168));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x178 = -7;
	int32_t x179 = INT32_MIN;
	uint16_t x180 = 44U;
	int32_t t16 = 1;

	t16 = ((x177*x178)%(x179<=x180));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x189 = INT32_MIN;
	uint32_t x190 = 4U;
	static int64_t x191 = INT64_MIN;
	volatile uint32_t t17 = 65633383U;

	t17 = ((x189*x190)%(x191<=x192));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x197 = INT64_MIN;
	uint64_t x198 = UINT64_MAX;
	uint16_t x199 = 0U;
	static uint8_t x200 = UINT8_MAX;
	volatile uint64_t t18 = 10LLU;

	t18 = ((x197*x198)%(x199<=x200));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x202 = INT16_MAX;
	volatile int16_t x203 = -1;
	int8_t x204 = 1;
	static volatile int32_t t19 = -194485996;

	t19 = ((x201*x202)%(x203<=x204));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x209 = UINT8_MAX;
	uint64_t x211 = 7871711015385606447LLU;
	int32_t t20 = 68600058;

	t20 = ((x209*x210)%(x211<=x212));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x213 = 31U;
	int64_t x214 = -7739411928985LL;
	static int32_t x215 = INT32_MIN;
	static int64_t x216 = INT64_MAX;
	volatile int64_t t21 = -20555110287392LL;

	t21 = ((x213*x214)%(x215<=x216));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x225 = 20;
	static int64_t x226 = -1LL;
	int16_t x228 = INT16_MIN;
	int64_t t22 = 27437LL;

	t22 = ((x225*x226)%(x227<=x228));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x229 = 0;
	volatile int32_t x230 = -11308;
	uint64_t x231 = 542384949LLU;
	static volatile int32_t x232 = INT32_MIN;
	static volatile int32_t t23 = -53823058;

	t23 = ((x229*x230)%(x231<=x232));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x242 = -1;
	static int32_t x244 = -13;
	volatile int32_t t24 = -1;

	t24 = ((x241*x242)%(x243<=x244));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x249 = INT16_MAX;
	uint64_t x252 = 76326924865166LLU;
	static volatile int32_t t25 = 440;

	t25 = ((x249*x250)%(x251<=x252));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x273 = 656LL;
	static uint32_t x274 = UINT32_MAX;
	int32_t x275 = INT32_MIN;
	static volatile int32_t x276 = -1;
	volatile int64_t t26 = 172463LL;

	t26 = ((x273*x274)%(x275<=x276));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x281 = -1;
	int16_t x283 = -1;
	uint32_t x284 = UINT32_MAX;
	int32_t t27 = -25853;

	t27 = ((x281*x282)%(x283<=x284));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x297 = UINT8_MAX;
	volatile int32_t x299 = -1;
	int64_t x300 = -1LL;
	int32_t t28 = 5;

	t28 = ((x297*x298)%(x299<=x300));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x306 = 111U;
	int64_t x308 = -375036LL;

	t29 = ((x305*x306)%(x307<=x308));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x313 = 292LLU;
	volatile int16_t x316 = -1;
	uint64_t t30 = 6189563100232LLU;

	t30 = ((x313*x314)%(x315<=x316));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x326 = -737534938199LL;
	int8_t x327 = INT8_MIN;
	volatile int64_t t31 = 2888330LL;

	t31 = ((x325*x326)%(x327<=x328));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x342 = -1;
	volatile int8_t x343 = INT8_MAX;
	int32_t x344 = 60266;

	t32 = ((x341*x342)%(x343<=x344));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x345 = INT8_MAX;
	int8_t x346 = -1;
	volatile uint8_t x347 = 4U;
	uint32_t x348 = UINT32_MAX;
	volatile int32_t t33 = 8;

	t33 = ((x345*x346)%(x347<=x348));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x349 = 5569090923335127926LLU;
	uint16_t x350 = UINT16_MAX;
	int8_t x351 = INT8_MAX;
	static uint16_t x352 = 434U;

	t34 = ((x349*x350)%(x351<=x352));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x361 = 405139537097LLU;
	static uint8_t x362 = UINT8_MAX;
	static int32_t x364 = -8;

	t35 = ((x361*x362)%(x363<=x364));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x365 = 1135662LLU;
	int32_t x366 = INT32_MIN;
	uint64_t x368 = UINT64_MAX;
	uint64_t t36 = 6786695245140623424LLU;

	t36 = ((x365*x366)%(x367<=x368));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x369 = UINT8_MAX;
	int16_t x370 = 7794;
	int32_t x371 = -1;
	uint8_t x372 = 0U;
	int32_t t37 = -21612;

	t37 = ((x369*x370)%(x371<=x372));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x377 = INT8_MIN;
	uint64_t x378 = UINT64_MAX;
	volatile int16_t x379 = 4856;
	volatile uint16_t x380 = UINT16_MAX;

	t38 = ((x377*x378)%(x379<=x380));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x382 = -1;
	uint8_t x383 = 3U;
	int32_t x384 = 57293;
	int64_t t39 = 53703610786LL;

	t39 = ((x381*x382)%(x383<=x384));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x390 = INT8_MAX;
	int8_t x391 = 22;
	static int64_t x392 = 134450216045LL;
	volatile int32_t t40 = -3;

	t40 = ((x389*x390)%(x391<=x392));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x401 = INT8_MAX;
	int16_t x402 = -1;
	volatile int64_t x403 = -3LL;
	volatile uint8_t x404 = 98U;
	static volatile int32_t t41 = 3710;

	t41 = ((x401*x402)%(x403<=x404));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x417 = 1U;
	volatile uint16_t x418 = 182U;
	int32_t x419 = INT32_MIN;
	int8_t x420 = 0;
	int32_t t42 = 4;

	t42 = ((x417*x418)%(x419<=x420));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x421 = INT16_MIN;
	static volatile int16_t x422 = INT16_MIN;
	int8_t x423 = 0;
	volatile uint32_t x424 = UINT32_MAX;
	volatile int32_t t43 = -2;

	t43 = ((x421*x422)%(x423<=x424));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x425 = UINT8_MAX;
	int8_t x426 = INT8_MAX;
	uint16_t x427 = 60U;
	int32_t t44 = -33992385;

	t44 = ((x425*x426)%(x427<=x428));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x430 = 1;
	int32_t x431 = -1269;
	int32_t x432 = -1;
	int64_t t45 = 2012LL;

	t45 = ((x429*x430)%(x431<=x432));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x441 = 16013U;
	int8_t x443 = -1;
	static uint64_t t46 = 305381907524LLU;

	t46 = ((x441*x442)%(x443<=x444));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x449 = 47937639LLU;
	volatile int64_t x450 = 216LL;
	static int8_t x451 = INT8_MIN;
	static uint64_t t47 = 127880961004073LLU;

	t47 = ((x449*x450)%(x451<=x452));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x453 = 44U;
	uint8_t x456 = UINT8_MAX;
	int32_t t48 = 17048;

	t48 = ((x453*x454)%(x455<=x456));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x466 = INT16_MAX;
	volatile int8_t x467 = INT8_MIN;
	int32_t x468 = 1035;
	int32_t t49 = 0;

	t49 = ((x465*x466)%(x467<=x468));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x469 = UINT8_MAX;
	volatile int16_t x470 = INT16_MIN;
	int16_t x472 = INT16_MAX;
	static int32_t t50 = 14332843;

	t50 = ((x469*x470)%(x471<=x472));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x474 = UINT64_MAX;
	uint16_t x475 = UINT16_MAX;
	static uint64_t x476 = 47770574045134615LLU;

	t51 = ((x473*x474)%(x475<=x476));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x489 = 2U;
	int64_t x490 = 25352855517087955LL;
	int64_t x491 = -426LL;
	static uint32_t x492 = UINT32_MAX;
	volatile int64_t t52 = 97489815685LL;

	t52 = ((x489*x490)%(x491<=x492));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x493 = UINT32_MAX;
	volatile int8_t x494 = -20;
	int64_t x495 = -6636858573005LL;
	int32_t x496 = INT32_MAX;

	t53 = ((x493*x494)%(x495<=x496));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x497 = -8;
	int32_t x498 = 37;
	int16_t x499 = 0;
	volatile int32_t t54 = 65;

	t54 = ((x497*x498)%(x499<=x500));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x506 = UINT8_MAX;
	static int16_t x508 = INT16_MIN;
	uint32_t t55 = 8884U;

	t55 = ((x505*x506)%(x507<=x508));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x513 = -21;
	int64_t x515 = -1LL;
	int64_t x516 = -1LL;
	volatile int32_t t56 = -4;

	t56 = ((x513*x514)%(x515<=x516));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x521 = INT16_MIN;
	uint32_t x522 = UINT32_MAX;
	uint16_t x523 = 1252U;
	int16_t x524 = INT16_MAX;
	uint32_t t57 = 32855007U;

	t57 = ((x521*x522)%(x523<=x524));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x533 = 0U;
	int8_t x534 = 31;
	int16_t x536 = INT16_MAX;
	int32_t t58 = 0;

	t58 = ((x533*x534)%(x535<=x536));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x537 = 1U;
	int8_t x538 = INT8_MIN;
	uint32_t x539 = 171U;
	volatile int32_t x540 = -1;
	volatile int32_t t59 = -2;

	t59 = ((x537*x538)%(x539<=x540));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x545 = UINT64_MAX;
	static uint32_t x546 = 112U;
	int32_t x547 = INT32_MIN;
	uint32_t x548 = UINT32_MAX;
	volatile uint64_t t60 = 156718732193LLU;

	t60 = ((x545*x546)%(x547<=x548));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x549 = 1645618782LL;
	static uint8_t x551 = 50U;
	int32_t x552 = INT32_MAX;
	int64_t t61 = 3456LL;

	t61 = ((x549*x550)%(x551<=x552));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x553 = INT8_MIN;
	int16_t x554 = 0;
	int64_t x555 = -1LL;
	int32_t x556 = -1;

	t62 = ((x553*x554)%(x555<=x556));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x565 = -1;
	uint64_t x566 = UINT64_MAX;
	int64_t x567 = -130702125522115LL;
	int32_t x568 = INT32_MIN;
	static uint64_t t63 = 3820202224900LLU;

	t63 = ((x565*x566)%(x567<=x568));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x569 = 49244U;
	volatile int16_t x570 = INT16_MIN;
	uint64_t x571 = 20393252600LLU;
	int32_t x572 = -132304;
	uint32_t t64 = 3758U;

	t64 = ((x569*x570)%(x571<=x572));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x573 = INT8_MAX;
	volatile int64_t x575 = INT64_MIN;
	int8_t x576 = -1;
	volatile int32_t t65 = 10;

	t65 = ((x573*x574)%(x575<=x576));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x595 = 0;
	uint32_t t66 = 3435825U;

	t66 = ((x593*x594)%(x595<=x596));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x597 = -646;
	int16_t x598 = INT16_MAX;
	int32_t x599 = -1;
	volatile int8_t x600 = -1;
	int32_t t67 = 612;

	t67 = ((x597*x598)%(x599<=x600));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x625 = 1526;
	uint64_t x627 = 52624414410476462LLU;
	int64_t x628 = INT64_MIN;
	volatile int32_t t68 = 17;

	t68 = ((x625*x626)%(x627<=x628));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x629 = INT16_MAX;
	static int64_t x630 = -1LL;
	volatile int32_t x632 = 4410;

	t69 = ((x629*x630)%(x631<=x632));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x645 = 1;
	int8_t x646 = INT8_MIN;
	int8_t x647 = INT8_MIN;
	int8_t x648 = -51;
	volatile int32_t t70 = -1993;

	t70 = ((x645*x646)%(x647<=x648));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x665 = -150LL;
	static uint32_t x666 = 7463691U;
	uint32_t x667 = 1934381U;
	uint32_t x668 = 291588483U;
	int64_t t71 = 378266568693LL;

	t71 = ((x665*x666)%(x667<=x668));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x673 = -22;
	volatile int64_t x674 = -1LL;
	static volatile int8_t x675 = -1;
	int64_t x676 = INT64_MAX;
	volatile int64_t t72 = -2507369049LL;

	t72 = ((x673*x674)%(x675<=x676));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x682 = 450539445539LLU;
	int64_t x684 = INT64_MAX;
	volatile uint64_t t73 = 2LLU;

	t73 = ((x681*x682)%(x683<=x684));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x685 = UINT32_MAX;
	static uint64_t x687 = 208196958767825LLU;
	int32_t x688 = INT32_MIN;
	volatile uint32_t t74 = 11694U;

	t74 = ((x685*x686)%(x687<=x688));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x694 = INT16_MIN;
	int8_t x695 = INT8_MAX;
	static uint16_t x696 = UINT16_MAX;
	static volatile int32_t t75 = 91497680;

	t75 = ((x693*x694)%(x695<=x696));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x697 = UINT8_MAX;
	uint32_t x699 = 113U;
	volatile int32_t x700 = INT32_MAX;
	volatile int32_t t76 = 2921711;

	t76 = ((x697*x698)%(x699<=x700));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x702 = 21602618396236482LL;
	int64_t x703 = -1LL;
	int64_t x704 = -1LL;
	int64_t t77 = -413813LL;

	t77 = ((x701*x702)%(x703<=x704));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x715 = -1;
	int32_t x716 = -1;
	int32_t t78 = -1;

	t78 = ((x713*x714)%(x715<=x716));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x718 = 7589;
	static uint8_t x719 = 13U;
	uint32_t x720 = UINT32_MAX;
	int32_t t79 = -32276;

	t79 = ((x717*x718)%(x719<=x720));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x729 = -1;
	volatile int64_t x730 = -8071539LL;
	uint16_t x731 = 1U;
	static uint32_t x732 = 3191U;
	volatile int64_t t80 = 808669510273LL;

	t80 = ((x729*x730)%(x731<=x732));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x741 = -1;
	int64_t x742 = INT64_MAX;
	int64_t x743 = -1LL;
	static uint32_t x744 = UINT32_MAX;

	t81 = ((x741*x742)%(x743<=x744));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x745 = 13487LL;
	uint32_t x746 = 222903070U;
	uint8_t x747 = UINT8_MAX;
	int32_t x748 = INT32_MAX;
	volatile int64_t t82 = 24615696374767LL;

	t82 = ((x745*x746)%(x747<=x748));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x761 = INT16_MIN;
	static int64_t x762 = 64515871669LL;
	int8_t x763 = 1;
	uint64_t x764 = UINT64_MAX;
	volatile int64_t t83 = -28580LL;

	t83 = ((x761*x762)%(x763<=x764));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x789 = INT32_MAX;
	static uint32_t x790 = 292U;
	int64_t x791 = INT64_MIN;
	volatile int8_t x792 = 3;
	volatile uint32_t t84 = 1226824744U;

	t84 = ((x789*x790)%(x791<=x792));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x797 = 23U;
	int16_t x798 = INT16_MIN;
	int8_t x800 = INT8_MAX;

	t85 = ((x797*x798)%(x799<=x800));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x803 = INT32_MIN;
	uint8_t x804 = UINT8_MAX;
	uint32_t t86 = 1853793822U;

	t86 = ((x801*x802)%(x803<=x804));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x830 = INT16_MIN;
	int16_t x831 = -15158;
	uint16_t x832 = 12321U;
	volatile int32_t t87 = 145;

	t87 = ((x829*x830)%(x831<=x832));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x834 = 1;
	int16_t x835 = INT16_MIN;
	volatile int32_t t88 = 1100;

	t88 = ((x833*x834)%(x835<=x836));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x857 = INT16_MIN;
	static uint16_t x858 = UINT16_MAX;
	static int16_t x859 = INT16_MIN;
	int16_t x860 = 27;
	volatile int32_t t89 = 54357;

	t89 = ((x857*x858)%(x859<=x860));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x865 = -847381785168215LL;
	uint16_t x866 = 33U;
	int32_t x867 = -1;

	t90 = ((x865*x866)%(x867<=x868));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x873 = -14015659LL;
	volatile int8_t x874 = -1;
	int32_t x875 = INT32_MIN;

	t91 = ((x873*x874)%(x875<=x876));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x882 = INT16_MAX;
	uint64_t x884 = UINT64_MAX;
	volatile uint32_t t92 = 145U;

	t92 = ((x881*x882)%(x883<=x884));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x889 = 21LLU;
	int16_t x890 = INT16_MIN;
	int64_t x892 = -1LL;
	volatile uint64_t t93 = 554736680856395LLU;

	t93 = ((x889*x890)%(x891<=x892));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x902 = INT8_MAX;
	volatile uint16_t x903 = 102U;
	volatile uint8_t x904 = UINT8_MAX;
	volatile int32_t t94 = -1;

	t94 = ((x901*x902)%(x903<=x904));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x909 = UINT64_MAX;
	static uint32_t x910 = UINT32_MAX;
	static uint32_t x912 = UINT32_MAX;
	uint64_t t95 = 27866LLU;

	t95 = ((x909*x910)%(x911<=x912));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x913 = 0LLU;
	volatile uint16_t x914 = 6U;
	volatile uint16_t x915 = 13U;
	uint64_t t96 = 10LLU;

	t96 = ((x913*x914)%(x915<=x916));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x917 = 8231;
	int32_t x918 = -1;
	int8_t x919 = -1;
	volatile int32_t t97 = -26268796;

	t97 = ((x917*x918)%(x919<=x920));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x925 = -1;
	volatile uint16_t x926 = UINT16_MAX;
	int16_t x928 = INT16_MAX;
	volatile int32_t t98 = -476;

	t98 = ((x925*x926)%(x927<=x928));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x953 = -3;
	static int8_t x954 = INT8_MAX;
	volatile int8_t x955 = -1;
	int8_t x956 = -1;
	int32_t t99 = 11392;

	t99 = ((x953*x954)%(x955<=x956));

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

