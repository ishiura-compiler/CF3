#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MAX;
static uint64_t x5 = UINT64_MAX;
volatile int8_t x8 = INT8_MIN;
volatile uint8_t x14 = 2U;
int32_t x40 = 133;
static volatile int32_t t4 = -2;
int32_t x48 = -2;
uint16_t x50 = UINT16_MAX;
volatile int32_t x57 = 385218135;
int32_t x73 = 10033;
volatile uint32_t x82 = 472U;
int8_t x85 = 7;
int32_t x86 = 494703;
uint8_t x93 = 6U;
static int8_t x95 = INT8_MIN;
uint64_t x97 = 65829182171LLU;
int32_t x102 = -1;
int32_t x103 = INT32_MIN;
uint8_t x104 = 59U;
uint16_t x150 = 3758U;
int32_t t16 = 63458;
int32_t t18 = 64129013;
int8_t x187 = -1;
volatile uint8_t x200 = 21U;
static volatile int32_t t20 = -13811;
uint64_t x270 = UINT64_MAX;
static int16_t x287 = INT16_MIN;
int16_t x320 = INT16_MIN;
static volatile int16_t x338 = 8483;
int64_t x339 = 548489773244LL;
int8_t x351 = -1;
int8_t x362 = INT8_MIN;
uint32_t x364 = 1519777721U;
static uint32_t t34 = 355U;
volatile int32_t x368 = 0;
uint16_t x373 = 453U;
uint8_t x376 = 0U;
int32_t t36 = 19219384;
uint8_t x413 = UINT8_MAX;
volatile uint64_t x415 = UINT64_MAX;
int32_t t38 = 51324626;
int16_t x423 = -1;
uint64_t t40 = 336LLU;
volatile int16_t x435 = INT16_MIN;
int32_t x436 = 1;
int64_t x451 = INT64_MIN;
uint32_t x465 = 2075961U;
volatile uint32_t t44 = 122363067U;
static uint32_t t45 = 1592384U;
int16_t x503 = 15391;
volatile uint32_t t47 = 4U;
int64_t x508 = -1550LL;
int16_t x516 = -1;
volatile uint16_t x524 = 2036U;
uint16_t x538 = 11U;
volatile int32_t t55 = -7951310;
uint64_t x556 = UINT64_MAX;
int16_t x558 = INT16_MIN;
uint16_t x566 = 25U;
static uint32_t x600 = UINT32_MAX;
uint64_t x619 = UINT64_MAX;
volatile int32_t x624 = -2086;
uint16_t x645 = 3779U;
static volatile int8_t x653 = INT8_MAX;
static volatile uint64_t x658 = 1983LLU;
uint16_t x663 = 2347U;
int32_t t69 = -3;
int32_t x666 = INT32_MIN;
uint8_t x668 = 57U;
static volatile int16_t x676 = INT16_MAX;
uint64_t x702 = 59252166LLU;
volatile int32_t x703 = -20487;
static uint32_t t72 = 1U;
volatile int32_t x726 = 553391746;
static volatile int64_t x727 = -1LL;
int64_t x748 = -1750704782063LL;
uint8_t x749 = UINT8_MAX;
int16_t x750 = INT16_MIN;
uint8_t x757 = 35U;
static int16_t x761 = INT16_MAX;
uint64_t x762 = UINT64_MAX;
int64_t x766 = 7LL;
static int32_t t81 = 0;
uint16_t x781 = 1U;
int32_t t83 = 9;
uint8_t x785 = 42U;
int64_t x795 = -1LL;
uint8_t x796 = UINT8_MAX;
int8_t x810 = -7;
static int64_t x820 = INT64_MAX;
int8_t x822 = 23;
uint64_t t89 = 64308943LLU;
uint32_t t91 = 4426U;
volatile uint16_t x877 = UINT16_MAX;
static volatile int64_t t92 = 9370433959527378LL;
int32_t x899 = INT32_MAX;
uint32_t x922 = UINT32_MAX;
int32_t t95 = -1713669;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int64_t x2 = INT64_MIN;
	uint8_t x4 = 3U;
	int64_t t0 = -269801LL;

	t0 = ((x1<<(x2==x3))-x4);

	if (t0 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 20543567728LLU;
	int8_t x7 = INT8_MAX;
	volatile uint64_t t1 = 37997394059661LLU;

	t1 = ((x5<<(x6==x7))-x8);

	if (t1 != 127LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	int16_t x15 = 39;
	volatile uint32_t x16 = UINT32_MAX;
	uint32_t t2 = 3387U;

	t2 = ((x13<<(x14==x15))-x16);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = 16929903721LL;
	static int32_t x26 = INT32_MIN;
	int32_t x27 = 1493;
	int64_t x28 = -1LL;
	int64_t t3 = -2038315237LL;

	t3 = ((x25<<(x26==x27))-x28);

	if (t3 != 16929903722LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x37 = 123741;
	uint64_t x38 = 721681LLU;
	static int8_t x39 = INT8_MAX;

	t4 = ((x37<<(x38==x39))-x40);

	if (t4 != 123608) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x45 = 18;
	static uint16_t x46 = UINT16_MAX;
	int64_t x47 = INT64_MAX;
	int32_t t5 = -383223047;

	t5 = ((x45<<(x46==x47))-x48);

	if (t5 != 20) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x49 = 38;
	uint32_t x51 = 7U;
	int8_t x52 = -1;
	volatile int32_t t6 = -9;

	t6 = ((x49<<(x50==x51))-x52);

	if (t6 != 39) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x58 = 83U;
	uint32_t x59 = 111U;
	int8_t x60 = -1;
	int32_t t7 = -641;

	t7 = ((x57<<(x58==x59))-x60);

	if (t7 != 385218136) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x74 = UINT64_MAX;
	int8_t x75 = INT8_MAX;
	volatile int64_t x76 = -1LL;
	int64_t t8 = 182110070738621580LL;

	t8 = ((x73<<(x74==x75))-x76);

	if (t8 != 10034LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x81 = 5;
	uint8_t x83 = 72U;
	int64_t x84 = INT64_MAX;
	int64_t t9 = -239476LL;

	t9 = ((x81<<(x82==x83))-x84);

	if (t9 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x87 = INT8_MIN;
	static volatile int16_t x88 = INT16_MAX;
	volatile int32_t t10 = -13;

	t10 = ((x85<<(x86==x87))-x88);

	if (t10 != -32760) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x94 = -1;
	int8_t x96 = 1;
	int32_t t11 = 169854;

	t11 = ((x93<<(x94==x95))-x96);

	if (t11 != 5) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x98 = -11;
	int16_t x99 = 5551;
	uint32_t x100 = 4899613U;
	uint64_t t12 = 839606LLU;

	t12 = ((x97<<(x98==x99))-x100);

	if (t12 != 65824282558LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x101 = UINT8_MAX;
	volatile int32_t t13 = 770504;

	t13 = ((x101<<(x102==x103))-x104);

	if (t13 != 196) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x121 = 25U;
	int32_t x122 = INT32_MAX;
	int64_t x123 = 24761963258LL;
	int64_t x124 = -11184124736LL;
	static int64_t t14 = -5702559LL;

	t14 = ((x121<<(x122==x123))-x124);

	if (t14 != 11184124761LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x145 = UINT8_MAX;
	int32_t x146 = -1;
	volatile uint16_t x147 = 45U;
	uint64_t x148 = 3264020LLU;
	static volatile uint64_t t15 = 541266LLU;

	t15 = ((x145<<(x146==x147))-x148);

	if (t15 != 18446744073706287851LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x149 = 23;
	int32_t x151 = 2995095;
	int8_t x152 = INT8_MAX;

	t16 = ((x149<<(x150==x151))-x152);

	if (t16 != -104) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x169 = 577863;
	int8_t x170 = INT8_MIN;
	int64_t x171 = -1LL;
	int16_t x172 = INT16_MIN;
	volatile int32_t t17 = -7102905;

	t17 = ((x169<<(x170==x171))-x172);

	if (t17 != 610631) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x177 = 1U;
	static volatile int32_t x178 = INT32_MAX;
	static volatile int8_t x179 = 0;
	int8_t x180 = INT8_MIN;

	t18 = ((x177<<(x178==x179))-x180);

	if (t18 != 129) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x185 = UINT32_MAX;
	static uint64_t x186 = 24457598630758LLU;
	volatile uint8_t x188 = 13U;
	static volatile uint32_t t19 = 1443828U;

	t19 = ((x185<<(x186==x187))-x188);

	if (t19 != 4294967282U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x197 = 6U;
	int64_t x198 = -1LL;
	static uint32_t x199 = 289073825U;

	t20 = ((x197<<(x198==x199))-x200);

	if (t20 != -15) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x229 = 158461909555735240LL;
	static int8_t x230 = -1;
	int32_t x231 = -430676612;
	int32_t x232 = 41684545;
	static int64_t t21 = -2730308405798876596LL;

	t21 = ((x229<<(x230==x231))-x232);

	if (t21 != 158461909514050695LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x233 = 104955470LLU;
	uint8_t x234 = UINT8_MAX;
	static uint64_t x235 = 10330340LLU;
	volatile int8_t x236 = INT8_MIN;
	volatile uint64_t t22 = 823104076625009363LLU;

	t22 = ((x233<<(x234==x235))-x236);

	if (t22 != 104955598LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x269 = UINT32_MAX;
	int8_t x271 = INT8_MIN;
	static volatile uint16_t x272 = UINT16_MAX;
	uint32_t t23 = 2U;

	t23 = ((x269<<(x270==x271))-x272);

	if (t23 != 4294901760U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x285 = 968;
	volatile int32_t x286 = -1;
	static volatile int64_t x288 = 1335769727062553LL;
	volatile int64_t t24 = 834023274LL;

	t24 = ((x285<<(x286==x287))-x288);

	if (t24 != -1335769727061585LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x297 = 0U;
	uint64_t x298 = 30473952034443781LLU;
	volatile int32_t x299 = -3;
	int16_t x300 = INT16_MIN;
	int32_t t25 = -652622002;

	t25 = ((x297<<(x298==x299))-x300);

	if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x317 = INT8_MAX;
	static int8_t x318 = INT8_MIN;
	int64_t x319 = INT64_MIN;
	volatile int32_t t26 = -1693169;

	t26 = ((x317<<(x318==x319))-x320);

	if (t26 != 32895) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x321 = INT32_MAX;
	volatile uint8_t x322 = UINT8_MAX;
	int8_t x323 = -35;
	int16_t x324 = 1;
	int32_t t27 = 1;

	t27 = ((x321<<(x322==x323))-x324);

	if (t27 != 2147483646) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x325 = 0U;
	int8_t x326 = INT8_MIN;
	int64_t x327 = INT64_MIN;
	int64_t x328 = -1LL;
	static volatile int64_t t28 = 177223712LL;

	t28 = ((x325<<(x326==x327))-x328);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x333 = UINT64_MAX;
	int8_t x334 = 7;
	uint16_t x335 = UINT16_MAX;
	int64_t x336 = INT64_MAX;
	static volatile uint64_t t29 = 44834LLU;

	t29 = ((x333<<(x334==x335))-x336);

	if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x337 = 950U;
	int16_t x340 = 1149;
	volatile int32_t t30 = -2844461;

	t30 = ((x337<<(x338==x339))-x340);

	if (t30 != -199) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x345 = UINT32_MAX;
	uint64_t x346 = UINT64_MAX;
	int8_t x347 = INT8_MIN;
	int16_t x348 = INT16_MIN;
	uint32_t t31 = 130732518U;

	t31 = ((x345<<(x346==x347))-x348);

	if (t31 != 32767U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x349 = 11U;
	uint8_t x350 = UINT8_MAX;
	int32_t x352 = -1;
	volatile int32_t t32 = -441;

	t32 = ((x349<<(x350==x351))-x352);

	if (t32 != 12) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x353 = 682674LLU;
	uint64_t x354 = 536402913468487961LLU;
	static uint16_t x355 = 0U;
	static int8_t x356 = INT8_MAX;
	uint64_t t33 = 25872942LLU;

	t33 = ((x353<<(x354==x355))-x356);

	if (t33 != 682547LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x361 = 939986U;
	uint8_t x363 = 79U;

	t34 = ((x361<<(x362==x363))-x364);

	if (t34 != 2776129561U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x365 = 68183476LL;
	volatile int8_t x366 = INT8_MIN;
	volatile int32_t x367 = INT32_MAX;
	static volatile int64_t t35 = 505830LL;

	t35 = ((x365<<(x366==x367))-x368);

	if (t35 != 68183476LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x374 = UINT16_MAX;
	volatile uint32_t x375 = 97776U;

	t36 = ((x373<<(x374==x375))-x376);

	if (t36 != 453) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x405 = 130156325877886LLU;
	int64_t x406 = INT64_MIN;
	volatile uint8_t x407 = UINT8_MAX;
	uint32_t x408 = 1430915U;
	uint64_t t37 = 34536533389345LLU;

	t37 = ((x405<<(x406==x407))-x408);

	if (t37 != 130156324446971LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x414 = -3;
	volatile uint16_t x416 = 28793U;

	t38 = ((x413<<(x414==x415))-x416);

	if (t38 != -28538) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x421 = 1LL;
	int64_t x422 = -1998377393195LL;
	uint32_t x424 = UINT32_MAX;
	int64_t t39 = -3LL;

	t39 = ((x421<<(x422==x423))-x424);

	if (t39 != -4294967294LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x425 = 2465087458LLU;
	int8_t x426 = INT8_MIN;
	volatile int16_t x427 = INT16_MAX;
	int32_t x428 = INT32_MAX;

	t40 = ((x425<<(x426==x427))-x428);

	if (t40 != 317603811LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x433 = 120U;
	uint32_t x434 = UINT32_MAX;
	static int32_t t41 = 64444332;

	t41 = ((x433<<(x434==x435))-x436);

	if (t41 != 119) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x449 = INT32_MAX;
	int32_t x450 = INT32_MIN;
	int8_t x452 = 1;
	static int32_t t42 = 14065;

	t42 = ((x449<<(x450==x451))-x452);

	if (t42 != 2147483646) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x453 = 18242U;
	int64_t x454 = INT64_MAX;
	uint16_t x455 = UINT16_MAX;
	uint16_t x456 = 19075U;
	int32_t t43 = 3033039;

	t43 = ((x453<<(x454==x455))-x456);

	if (t43 != -833) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x466 = INT8_MAX;
	int8_t x467 = INT8_MIN;
	int32_t x468 = INT32_MIN;

	t44 = ((x465<<(x466==x467))-x468);

	if (t44 != 2149559609U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x481 = 11U;
	static uint32_t x482 = 2593679U;
	volatile uint8_t x483 = 2U;
	static volatile uint32_t x484 = 23170U;

	t45 = ((x481<<(x482==x483))-x484);

	if (t45 != 4294944137U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x489 = INT16_MAX;
	volatile uint64_t x490 = 1145159LLU;
	int32_t x491 = INT32_MAX;
	int8_t x492 = -1;
	volatile int32_t t46 = -450;

	t46 = ((x489<<(x490==x491))-x492);

	if (t46 != 32768) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x501 = 65743U;
	int64_t x502 = -187493258LL;
	uint32_t x504 = 432089U;

	t47 = ((x501<<(x502==x503))-x504);

	if (t47 != 4294600950U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x505 = 8357612612654LLU;
	uint32_t x506 = UINT32_MAX;
	uint8_t x507 = 2U;
	uint64_t t48 = 15336LLU;

	t48 = ((x505<<(x506==x507))-x508);

	if (t48 != 8357612614204LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x509 = UINT64_MAX;
	uint64_t x510 = 299343437577682LLU;
	int8_t x511 = 0;
	uint16_t x512 = UINT16_MAX;
	volatile uint64_t t49 = 14900836376757LLU;

	t49 = ((x509<<(x510==x511))-x512);

	if (t49 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x513 = 7U;
	int16_t x514 = INT16_MIN;
	static int8_t x515 = -1;
	volatile int32_t t50 = 237;

	t50 = ((x513<<(x514==x515))-x516);

	if (t50 != 8) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x521 = INT8_MAX;
	int16_t x522 = INT16_MIN;
	int32_t x523 = INT32_MAX;
	int32_t t51 = 0;

	t51 = ((x521<<(x522==x523))-x524);

	if (t51 != -1909) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x525 = 64048918522LLU;
	volatile int32_t x526 = 21602;
	int32_t x527 = INT32_MAX;
	uint16_t x528 = 2U;
	volatile uint64_t t52 = 3LLU;

	t52 = ((x525<<(x526==x527))-x528);

	if (t52 != 64048918520LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x533 = INT64_MAX;
	volatile int16_t x534 = -1;
	volatile uint8_t x535 = UINT8_MAX;
	uint64_t x536 = 3525913583LLU;
	uint64_t t53 = 30142429LLU;

	t53 = ((x533<<(x534==x535))-x536);

	if (t53 != 9223372033328862224LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x537 = INT32_MAX;
	static uint64_t x539 = UINT64_MAX;
	static int16_t x540 = INT16_MAX;
	int32_t t54 = -11;

	t54 = ((x537<<(x538==x539))-x540);

	if (t54 != 2147450880) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x545 = INT32_MAX;
	uint32_t x546 = 1863U;
	volatile uint32_t x547 = 12788U;
	uint16_t x548 = 65U;

	t55 = ((x545<<(x546==x547))-x548);

	if (t55 != 2147483582) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x553 = 46451620509609434LLU;
	static int16_t x554 = INT16_MIN;
	static int16_t x555 = INT16_MIN;
	uint64_t t56 = 197247706134LLU;

	t56 = ((x553<<(x554==x555))-x556);

	if (t56 != 92903241019218869LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x557 = 362U;
	static volatile int16_t x559 = 13;
	volatile uint64_t x560 = UINT64_MAX;
	volatile uint64_t t57 = 815339308743LLU;

	t57 = ((x557<<(x558==x559))-x560);

	if (t57 != 363LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x565 = INT64_MAX;
	int64_t x567 = 1LL;
	uint8_t x568 = UINT8_MAX;
	volatile int64_t t58 = 55096LL;

	t58 = ((x565<<(x566==x567))-x568);

	if (t58 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x569 = 1U;
	uint8_t x570 = 0U;
	uint64_t x571 = 3419LLU;
	int8_t x572 = -1;
	int32_t t59 = -694412001;

	t59 = ((x569<<(x570==x571))-x572);

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x577 = 11U;
	volatile int16_t x578 = INT16_MIN;
	int32_t x579 = INT32_MIN;
	volatile int64_t x580 = -96240711703LL;
	static int64_t t60 = 224942963432LL;

	t60 = ((x577<<(x578==x579))-x580);

	if (t60 != 96240711714LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x585 = 3U;
	int16_t x586 = INT16_MIN;
	uint64_t x587 = UINT64_MAX;
	volatile int16_t x588 = -1;
	volatile int32_t t61 = 31285142;

	t61 = ((x585<<(x586==x587))-x588);

	if (t61 != 4) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x597 = UINT32_MAX;
	int16_t x598 = INT16_MIN;
	uint64_t x599 = 225838417LLU;
	uint32_t t62 = 7050U;

	t62 = ((x597<<(x598==x599))-x600);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x605 = INT8_MAX;
	int64_t x606 = INT64_MIN;
	volatile int8_t x607 = INT8_MAX;
	int8_t x608 = 27;
	int32_t t63 = 30;

	t63 = ((x605<<(x606==x607))-x608);

	if (t63 != 100) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x617 = INT16_MAX;
	volatile int8_t x618 = INT8_MIN;
	static int8_t x620 = -2;
	int32_t t64 = -356929;

	t64 = ((x617<<(x618==x619))-x620);

	if (t64 != 32769) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x621 = UINT16_MAX;
	uint64_t x622 = UINT64_MAX;
	int8_t x623 = INT8_MIN;
	volatile int32_t t65 = -221349;

	t65 = ((x621<<(x622==x623))-x624);

	if (t65 != 67621) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x646 = INT16_MIN;
	static int32_t x647 = -1;
	int16_t x648 = INT16_MAX;
	int32_t t66 = -47104;

	t66 = ((x645<<(x646==x647))-x648);

	if (t66 != -28988) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x654 = INT8_MIN;
	uint8_t x655 = 114U;
	uint16_t x656 = 6228U;
	volatile int32_t t67 = 1;

	t67 = ((x653<<(x654==x655))-x656);

	if (t67 != -6101) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x657 = 11U;
	volatile int16_t x659 = -1;
	static uint16_t x660 = UINT16_MAX;
	static volatile int32_t t68 = 764535;

	t68 = ((x657<<(x658==x659))-x660);

	if (t68 != -65524) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x661 = 5907U;
	int64_t x662 = INT64_MIN;
	uint8_t x664 = UINT8_MAX;

	t69 = ((x661<<(x662==x663))-x664);

	if (t69 != 5652) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x665 = 1060328795U;
	int8_t x667 = INT8_MIN;
	volatile uint32_t t70 = 10712U;

	t70 = ((x665<<(x666==x667))-x668);

	if (t70 != 1060328738U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x673 = 484U;
	int64_t x674 = INT64_MIN;
	int64_t x675 = INT64_MIN;
	static volatile uint32_t t71 = 957763899U;

	t71 = ((x673<<(x674==x675))-x676);

	if (t71 != 4294935497U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x701 = 230857U;
	static int8_t x704 = INT8_MAX;

	t72 = ((x701<<(x702==x703))-x704);

	if (t72 != 230730U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x713 = INT16_MAX;
	int8_t x714 = 15;
	volatile uint64_t x715 = 5144819207130LLU;
	volatile int8_t x716 = INT8_MAX;
	volatile int32_t t73 = -912;

	t73 = ((x713<<(x714==x715))-x716);

	if (t73 != 32640) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x721 = 2U;
	int16_t x722 = 672;
	int64_t x723 = INT64_MAX;
	int8_t x724 = INT8_MAX;
	volatile int32_t t74 = -11;

	t74 = ((x721<<(x722==x723))-x724);

	if (t74 != -125) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x725 = 0U;
	uint8_t x728 = UINT8_MAX;
	static int32_t t75 = 1809264;

	t75 = ((x725<<(x726==x727))-x728);

	if (t75 != -255) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x729 = 0;
	static uint32_t x730 = 41U;
	int16_t x731 = -1;
	int64_t x732 = -849170439954092LL;
	int64_t t76 = 26780804045LL;

	t76 = ((x729<<(x730==x731))-x732);

	if (t76 != 849170439954092LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x745 = INT16_MAX;
	int32_t x746 = 704179110;
	volatile uint8_t x747 = 4U;
	static int64_t t77 = -6770LL;

	t77 = ((x745<<(x746==x747))-x748);

	if (t77 != 1750704814830LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x751 = -718830486;
	uint32_t x752 = 1324573080U;
	uint32_t t78 = 37521720U;

	t78 = ((x749<<(x750==x751))-x752);

	if (t78 != 2970394471U) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x758 = -1;
	uint32_t x759 = 146U;
	uint8_t x760 = 6U;
	int32_t t79 = 1892359;

	t79 = ((x757<<(x758==x759))-x760);

	if (t79 != 29) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x763 = UINT64_MAX;
	uint32_t x764 = 3722619U;
	uint32_t t80 = 223396217U;

	t80 = ((x761<<(x762==x763))-x764);

	if (t80 != 4291310211U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x765 = INT8_MAX;
	int64_t x767 = INT64_MIN;
	int8_t x768 = INT8_MIN;

	t81 = ((x765<<(x766==x767))-x768);

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x773 = 1U;
	static int8_t x774 = -9;
	uint64_t x775 = 21398856190211LLU;
	int16_t x776 = 688;
	volatile uint32_t t82 = 94539835U;

	t82 = ((x773<<(x774==x775))-x776);

	if (t82 != 4294966609U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x782 = INT16_MAX;
	volatile uint64_t x783 = 207186LLU;
	int8_t x784 = 1;

	t83 = ((x781<<(x782==x783))-x784);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x786 = 225;
	uint8_t x787 = 0U;
	int8_t x788 = INT8_MAX;
	volatile int32_t t84 = -302586;

	t84 = ((x785<<(x786==x787))-x788);

	if (t84 != -85) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x793 = 1;
	static uint16_t x794 = 1U;
	volatile int32_t t85 = 64;

	t85 = ((x793<<(x794==x795))-x796);

	if (t85 != -254) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x801 = INT64_MAX;
	uint64_t x802 = 356LLU;
	uint8_t x803 = UINT8_MAX;
	volatile uint16_t x804 = UINT16_MAX;
	int64_t t86 = 450LL;

	t86 = ((x801<<(x802==x803))-x804);

	if (t86 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x809 = 1;
	int8_t x811 = INT8_MIN;
	uint64_t x812 = UINT64_MAX;
	uint64_t t87 = 7303284311245LLU;

	t87 = ((x809<<(x810==x811))-x812);

	if (t87 != 2LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x817 = 22685173419LLU;
	static int8_t x818 = INT8_MAX;
	uint8_t x819 = 15U;
	volatile uint64_t t88 = 35712LLU;

	t88 = ((x817<<(x818==x819))-x820);

	if (t88 != 9223372059539949228LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x821 = INT64_MAX;
	static volatile int32_t x823 = INT32_MIN;
	uint64_t x824 = 381853859237LLU;

	t89 = ((x821<<(x822==x823))-x824);

	if (t89 != 9223371655000916570LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x861 = 59U;
	int32_t x862 = -1;
	int16_t x863 = INT16_MAX;
	uint32_t x864 = UINT32_MAX;
	volatile uint32_t t90 = 1U;

	t90 = ((x861<<(x862==x863))-x864);

	if (t90 != 60U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x869 = 4665915;
	int16_t x870 = -1;
	static int8_t x871 = INT8_MIN;
	static uint32_t x872 = 227811741U;

	t91 = ((x869<<(x870==x871))-x872);

	if (t91 != 4071821470U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x878 = -1934626698LL;
	int64_t x879 = -9762523234LL;
	volatile int64_t x880 = -1LL;

	t92 = ((x877<<(x878==x879))-x880);

	if (t92 != 65536LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x897 = UINT64_MAX;
	static int8_t x898 = 58;
	int32_t x900 = INT32_MAX;
	volatile uint64_t t93 = 1LLU;

	t93 = ((x897<<(x898==x899))-x900);

	if (t93 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x905 = UINT64_MAX;
	volatile uint32_t x906 = 1873071343U;
	volatile uint64_t x907 = 22618646464LLU;
	volatile int64_t x908 = INT64_MAX;
	volatile uint64_t t94 = 77136873149346LLU;

	t94 = ((x905<<(x906==x907))-x908);

	if (t94 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x921 = UINT8_MAX;
	static volatile uint16_t x923 = UINT16_MAX;
	static int8_t x924 = 7;

	t95 = ((x921<<(x922==x923))-x924);

	if (t95 != 248) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x949 = 6023U;
	int8_t x950 = 2;
	uint8_t x951 = 7U;
	static int8_t x952 = -2;
	static int32_t t96 = 92226088;

	t96 = ((x949<<(x950==x951))-x952);

	if (t96 != 6025) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x953 = UINT32_MAX;
	int64_t x954 = INT64_MIN;
	uint16_t x955 = UINT16_MAX;
	static volatile uint16_t x956 = 6691U;
	uint32_t t97 = 1342U;

	t97 = ((x953<<(x954==x955))-x956);

	if (t97 != 4294960604U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x965 = 104U;
	uint16_t x966 = UINT16_MAX;
	int32_t x967 = -8971;
	int8_t x968 = INT8_MAX;
	static int32_t t98 = -5479;

	t98 = ((x965<<(x966==x967))-x968);

	if (t98 != -23) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x969 = UINT8_MAX;
	int16_t x970 = -1;
	int64_t x971 = INT64_MIN;
	uint16_t x972 = 97U;
	int32_t t99 = -36386708;

	t99 = ((x969<<(x970==x971))-x972);

	if (t99 != 158) { NG(); } else { ; }
	
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

