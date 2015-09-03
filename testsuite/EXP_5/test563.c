#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = -1;
int16_t x11 = -1;
int8_t x12 = 2;
int64_t x57 = INT64_MIN;
uint32_t x59 = 4U;
int8_t x63 = INT8_MIN;
int64_t t2 = -9380LL;
volatile int32_t x101 = INT32_MIN;
volatile uint8_t x102 = UINT8_MAX;
int64_t x104 = -1458LL;
static int64_t t4 = 7LL;
static int8_t x113 = 12;
int64_t x116 = 1072786929LL;
volatile int64_t t6 = -25235463LL;
static int8_t x137 = INT8_MIN;
uint64_t x140 = 88444758076LLU;
uint64_t t7 = 948758440158955827LLU;
int64_t x153 = -106288670LL;
uint64_t x190 = 1501718595LLU;
volatile int64_t t13 = 1879680955021914LL;
int32_t x268 = -384023;
static volatile uint64_t x269 = UINT64_MAX;
int16_t x271 = -1;
static int16_t x290 = INT16_MIN;
static int32_t x292 = INT32_MIN;
volatile int8_t x310 = INT8_MAX;
int32_t x316 = -13038;
uint32_t x317 = 7U;
int32_t x350 = -1;
static uint8_t x358 = 11U;
volatile int16_t x362 = INT16_MIN;
int32_t x373 = 179697;
int8_t x375 = -1;
int64_t t30 = 170071909216597LL;
volatile int16_t x394 = 321;
volatile int32_t x400 = 19533;
uint64_t x440 = 2195003973472697389LLU;
uint64_t x460 = 3673275LLU;
int8_t x474 = -28;
int32_t x475 = -10;
int8_t x481 = INT8_MAX;
volatile int16_t x485 = INT16_MIN;
int16_t x491 = INT16_MAX;
int16_t x494 = -204;
volatile uint64_t t41 = 14884LLU;
int32_t x505 = 6599055;
int8_t x507 = 1;
volatile int64_t t45 = -1267708594LL;
volatile uint64_t x529 = 220725LLU;
volatile uint64_t t46 = 135534995271074LLU;
int8_t x547 = -1;
int32_t x550 = INT32_MAX;
int8_t x553 = INT8_MIN;
int8_t x575 = -2;
int64_t x576 = -83277889645LL;
int8_t x590 = -1;
int64_t x600 = INT64_MIN;
static volatile int8_t x603 = INT8_MIN;
volatile int64_t t54 = -138840LL;
volatile int32_t x608 = INT32_MIN;
int64_t x641 = -1LL;
int16_t x645 = -1;
uint16_t x646 = UINT16_MAX;
volatile int64_t x647 = -1LL;
volatile int32_t t59 = -45286;
uint8_t x686 = 3U;
int8_t x709 = INT8_MIN;
uint64_t t62 = 3070067LLU;
int32_t x716 = INT32_MIN;
uint16_t x727 = 34U;
uint8_t x729 = 1U;
int64_t x732 = INT64_MIN;
volatile uint64_t t65 = 9029427788240214827LLU;
volatile int16_t x744 = INT16_MAX;
int8_t x749 = -1;
volatile int16_t x754 = -1007;
int64_t t69 = 588LL;
uint32_t x762 = UINT32_MAX;
volatile int8_t x803 = INT8_MIN;
volatile uint64_t x808 = 307745749676LLU;
int8_t x811 = -8;
uint8_t x819 = 15U;
volatile int32_t t78 = -24291701;
volatile uint64_t t81 = 96562409329385814LLU;
int64_t x858 = INT64_MIN;
uint64_t x859 = 112646LLU;
volatile int32_t x860 = INT32_MIN;
static int64_t x862 = INT64_MAX;
static volatile int64_t t83 = -483975895335516LL;
int16_t x872 = -59;
int32_t t84 = -478931;
static int32_t x879 = -2;
static volatile uint16_t x881 = 4U;
uint16_t x882 = 246U;
volatile int64_t x883 = -1LL;
int64_t t87 = 36LL;
volatile uint32_t x888 = UINT32_MAX;
static int8_t x895 = -1;
volatile int64_t t89 = -9771LL;
int16_t x923 = 7895;
int64_t x962 = INT64_MIN;
int8_t x963 = INT8_MAX;
uint8_t x964 = UINT8_MAX;
volatile uint32_t x973 = 5381156U;
volatile int32_t t95 = 1742;
int32_t x992 = INT32_MAX;
volatile uint32_t t97 = 1U;
int32_t x1002 = -1;
int16_t x1004 = INT16_MAX;


void f0(void) {
	int16_t x9 = INT16_MAX;
	int32_t t0 = -1308;

	t0 = (x9/((x10/x11)%x12));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x58 = INT64_MAX;
	volatile uint64_t x60 = 3422568318839LLU;
	uint64_t t1 = 3504935LLU;

	t1 = (x57/((x58/x59)%x60));

	if (t1 != 16795710LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x61 = UINT32_MAX;
	int64_t x62 = INT64_MIN;
	static int64_t x64 = INT64_MIN;

	t2 = (x61/((x62/x63)%x64));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x89 = INT16_MIN;
	int32_t x90 = INT32_MIN;
	int32_t x91 = 49898;
	static uint8_t x92 = 10U;
	int32_t t3 = -3;

	t3 = (x89/((x90/x91)%x92));

	if (t3 != 4681) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x103 = 19U;

	t4 = (x101/((x102/x103)%x104));

	if (t4 != -165191049LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x105 = INT32_MIN;
	uint32_t x106 = 10994248U;
	int32_t x107 = 62;
	static int64_t x108 = 149559165496514645LL;
	volatile int64_t t5 = -13109453665686LL;

	t5 = (x105/((x106/x107)%x108));

	if (t5 != -12110LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x114 = -1;
	int64_t x115 = -1LL;

	t6 = (x113/((x114/x115)%x116));

	if (t6 != 12LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x138 = INT16_MAX;
	int8_t x139 = INT8_MIN;

	t7 = (x137/((x138/x139)%x140));

	if (t7 != 260260162LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x154 = UINT64_MAX;
	static int16_t x155 = 6;
	static uint8_t x156 = UINT8_MAX;
	uint64_t t8 = 144299070LLU;

	t8 = (x153/((x154/x155)%x156));

	if (t8 != 87012943743411617LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x157 = -1;
	int16_t x158 = -1822;
	volatile int64_t x159 = -1LL;
	uint8_t x160 = 11U;
	static volatile int64_t t9 = -86241LL;

	t9 = (x157/((x158/x159)%x160));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x177 = 21U;
	int32_t x178 = INT32_MIN;
	uint8_t x179 = 1U;
	int32_t x180 = 110201;
	int32_t t10 = 240158;

	t10 = (x177/((x178/x179)%x180));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x189 = INT8_MIN;
	int8_t x191 = INT8_MAX;
	volatile uint64_t x192 = UINT64_MAX;
	volatile uint64_t t11 = 16237432918380LLU;

	t11 = (x189/((x190/x191)%x192));

	if (t11 != 1560037064710LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x193 = -1;
	static uint64_t x194 = 8122339479LLU;
	uint16_t x195 = 8015U;
	int16_t x196 = INT16_MAX;
	uint64_t t12 = 89LLU;

	t12 = (x193/((x194/x195)%x196));

	if (t12 != 607160294704415LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x197 = -6535324;
	static int64_t x198 = 982LL;
	volatile uint16_t x199 = 463U;
	int8_t x200 = INT8_MIN;

	t13 = (x197/((x198/x199)%x200));

	if (t13 != -3267662LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x225 = 58656608LL;
	volatile uint32_t x226 = 172768372U;
	int16_t x227 = INT16_MAX;
	uint64_t x228 = 79915457185LLU;
	volatile uint64_t t14 = 1087LLU;

	t14 = (x225/((x226/x227)%x228));

	if (t14 != 11126LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x265 = INT8_MIN;
	static volatile int64_t x266 = INT64_MAX;
	int64_t x267 = INT64_MAX;
	int64_t t15 = 6279665LL;

	t15 = (x265/((x266/x267)%x268));

	if (t15 != -128LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x270 = -1;
	uint8_t x272 = UINT8_MAX;
	uint64_t t16 = UINT64_MAX;

	t16 = (x269/((x270/x271)%x272));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x273 = INT16_MIN;
	int32_t x274 = INT32_MIN;
	static volatile int64_t x275 = -46680LL;
	int32_t x276 = INT32_MIN;
	static volatile int64_t t17 = -130LL;

	t17 = (x273/((x274/x275)%x276));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x289 = INT64_MIN;
	volatile uint16_t x291 = 6713U;
	int64_t t18 = 10432836805180928LL;

	t18 = (x289/((x290/x291)%x292));

	if (t18 != 2305843009213693952LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x305 = 49262399U;
	int32_t x306 = INT32_MIN;
	volatile uint8_t x307 = 5U;
	static int16_t x308 = -15845;
	volatile uint32_t t19 = 62633735U;

	t19 = (x305/((x306/x307)%x308));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x309 = -1;
	int16_t x311 = -1;
	int8_t x312 = INT8_MIN;
	volatile int32_t t20 = 1;

	t20 = (x309/((x310/x311)%x312));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MIN;
	int32_t x315 = INT32_MAX;
	int32_t t21 = 483;

	t21 = (x313/((x314/x315)%x316));

	if (t21 != 128) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x318 = 3882LL;
	uint8_t x319 = 2U;
	int8_t x320 = 29;
	static int64_t t22 = 30LL;

	t22 = (x317/((x318/x319)%x320));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x321 = INT64_MIN;
	int64_t x322 = INT64_MAX;
	volatile int16_t x323 = -2191;
	int32_t x324 = 3990961;
	volatile int64_t t23 = -2964501295474LL;

	t23 = (x321/((x322/x323)%x324));

	if (t23 != 2363664749053LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x341 = INT32_MIN;
	static uint32_t x342 = 9995U;
	uint16_t x343 = 386U;
	volatile uint64_t x344 = 2028069934901607LLU;
	uint64_t t24 = 1LLU;

	t24 = (x341/((x342/x343)%x344));

	if (t24 != 737869762862482718LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x345 = INT8_MAX;
	volatile uint32_t x346 = UINT32_MAX;
	int16_t x347 = INT16_MAX;
	int64_t x348 = 5904899LL;
	int64_t t25 = 28934525557055LL;

	t25 = (x345/((x346/x347)%x348));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x349 = INT16_MIN;
	uint64_t x351 = UINT64_MAX;
	uint16_t x352 = 5452U;
	static volatile uint64_t t26 = 544571729652256LLU;

	t26 = (x349/((x350/x351)%x352));

	if (t26 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x357 = 1;
	int8_t x359 = -1;
	int32_t x360 = INT32_MIN;
	static volatile int32_t t27 = 187;

	t27 = (x357/((x358/x359)%x360));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x361 = INT64_MIN;
	int8_t x363 = 14;
	static volatile uint16_t x364 = 10103U;
	static volatile int64_t t28 = 1074744277998673791LL;

	t28 = (x361/((x362/x363)%x364));

	if (t28 != 3941611981561870LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x369 = INT16_MAX;
	int8_t x370 = INT8_MAX;
	static uint16_t x371 = 3U;
	int64_t x372 = INT64_MAX;
	static int64_t t29 = 33LL;

	t29 = (x369/((x370/x371)%x372));

	if (t29 != 780LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x374 = -509;
	int64_t x376 = INT64_MAX;

	t30 = (x373/((x374/x375)%x376));

	if (t30 != 353LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x381 = INT32_MAX;
	int16_t x382 = -668;
	int16_t x383 = -102;
	uint16_t x384 = UINT16_MAX;
	static volatile int32_t t31 = 56;

	t31 = (x381/((x382/x383)%x384));

	if (t31 != 357913941) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x393 = INT8_MAX;
	int8_t x395 = INT8_MAX;
	int32_t x396 = -748945;
	volatile int32_t t32 = -493;

	t32 = (x393/((x394/x395)%x396));

	if (t32 != 63) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x397 = INT8_MAX;
	static uint64_t x398 = UINT64_MAX;
	int16_t x399 = -1;
	uint64_t t33 = 1652565057LLU;

	t33 = (x397/((x398/x399)%x400));

	if (t33 != 127LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x413 = INT8_MIN;
	int64_t x414 = -1LL;
	volatile uint64_t x415 = UINT64_MAX;
	volatile int8_t x416 = INT8_MIN;
	uint64_t t34 = 68LLU;

	t34 = (x413/((x414/x415)%x416));

	if (t34 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x437 = UINT32_MAX;
	uint16_t x438 = 55U;
	static int32_t x439 = -11;
	uint64_t t35 = 231836354212809685LLU;

	t35 = (x437/((x438/x439)%x440));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x457 = 18;
	volatile int16_t x458 = INT16_MIN;
	uint32_t x459 = 1U;
	uint64_t t36 = 25217728904LLU;

	t36 = (x457/((x458/x459)%x460));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x473 = -1LL;
	uint64_t x476 = 665934LLU;
	volatile uint64_t t37 = 2128870344LLU;

	t37 = (x473/((x474/x475)%x476));

	if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x482 = INT64_MIN;
	int64_t x483 = INT64_MAX;
	volatile uint32_t x484 = 127264U;
	static int64_t t38 = 26819893520986LL;

	t38 = (x481/((x482/x483)%x484));

	if (t38 != -127LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x486 = UINT64_MAX;
	int16_t x487 = INT16_MIN;
	static int64_t x488 = 105020LL;
	uint64_t t39 = 72826392854LLU;

	t39 = (x485/((x486/x487)%x488));

	if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x489 = 15U;
	uint64_t x490 = UINT64_MAX;
	int64_t x492 = 2086106000689072502LL;
	uint64_t t40 = 2848481698LLU;

	t40 = (x489/((x490/x491)%x492));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x493 = UINT64_MAX;
	int32_t x495 = -1;
	volatile int8_t x496 = -28;

	t41 = (x493/((x494/x495)%x496));

	if (t41 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x501 = 1662;
	int64_t x502 = INT64_MAX;
	int16_t x503 = INT16_MIN;
	int32_t x504 = -10094407;
	int64_t t42 = -584470LL;

	t42 = (x501/((x502/x503)%x504));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x506 = -19918LL;
	int32_t x508 = INT32_MAX;
	volatile int64_t t43 = 942670LL;

	t43 = (x505/((x506/x507)%x508));

	if (t43 != -331LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x517 = 372135LLU;
	static int32_t x518 = INT32_MIN;
	uint16_t x519 = UINT16_MAX;
	static volatile int32_t x520 = INT32_MIN;
	uint64_t t44 = 967044LLU;

	t44 = (x517/((x518/x519)%x520));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x525 = INT32_MIN;
	int8_t x526 = INT8_MIN;
	int64_t x527 = -1LL;
	int16_t x528 = 171;

	t45 = (x525/((x526/x527)%x528));

	if (t45 != -16777216LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x530 = INT64_MIN;
	uint64_t x531 = 1327287409666507036LLU;
	volatile int8_t x532 = 61;

	t46 = (x529/((x530/x531)%x532));

	if (t46 != 36787LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x545 = INT16_MAX;
	int64_t x546 = -1LL;
	volatile int32_t x548 = 547;
	volatile int64_t t47 = -12796695235LL;

	t47 = (x545/((x546/x547)%x548));

	if (t47 != 32767LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x549 = 125U;
	int32_t x551 = 550256499;
	uint8_t x552 = 81U;
	volatile int32_t t48 = 6841;

	t48 = (x549/((x550/x551)%x552));

	if (t48 != 41) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x554 = -707958589848LL;
	uint64_t x555 = 318728297272LLU;
	int16_t x556 = 15;
	static uint64_t t49 = 111LLU;

	t49 = (x553/((x554/x555)%x556));

	if (t49 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x565 = INT32_MIN;
	uint64_t x566 = 3LLU;
	uint16_t x567 = 1U;
	uint16_t x568 = 349U;
	uint64_t t50 = 9201721117653842796LLU;

	t50 = (x565/((x566/x567)%x568));

	if (t50 != 6148914690520689322LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x573 = INT16_MIN;
	static int16_t x574 = -625;
	static volatile int64_t t51 = 30094886LL;

	t51 = (x573/((x574/x575)%x576));

	if (t51 != -105LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x589 = -1;
	int8_t x591 = -1;
	int16_t x592 = -342;
	volatile int32_t t52 = 70;

	t52 = (x589/((x590/x591)%x592));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x597 = INT64_MIN;
	static volatile int8_t x598 = -1;
	int16_t x599 = -1;
	volatile int64_t t53 = INT64_MIN;

	t53 = (x597/((x598/x599)%x600));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x601 = -1;
	volatile int64_t x602 = -7227504341000054LL;
	int64_t x604 = INT64_MAX;

	t54 = (x601/((x602/x603)%x604));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x605 = INT32_MAX;
	uint16_t x606 = UINT16_MAX;
	int8_t x607 = -21;
	volatile int32_t t55 = 7;

	t55 = (x605/((x606/x607)%x608));

	if (t55 != -688296) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x642 = INT8_MIN;
	uint64_t x643 = 1426497757LLU;
	static uint8_t x644 = 88U;
	volatile uint64_t t56 = 2046LLU;

	t56 = (x641/((x642/x643)%x644));

	if (t56 != 318047311615681924LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x648 = INT16_MAX;
	volatile int64_t t57 = 10958582LL;

	t57 = (x645/((x646/x647)%x648));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x669 = 418461548967LL;
	int32_t x670 = -490597;
	int8_t x671 = INT8_MAX;
	uint32_t x672 = 622390U;
	int64_t t58 = -2LL;

	t58 = (x669/((x670/x671)%x672));

	if (t58 != 885756LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x673 = 13;
	static uint8_t x674 = UINT8_MAX;
	int8_t x675 = INT8_MAX;
	int16_t x676 = 3;

	t59 = (x673/((x674/x675)%x676));

	if (t59 != 6) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x685 = INT8_MIN;
	int16_t x687 = 1;
	int16_t x688 = -46;
	volatile int32_t t60 = 344876;

	t60 = (x685/((x686/x687)%x688));

	if (t60 != -42) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x693 = INT8_MIN;
	volatile int8_t x694 = INT8_MIN;
	static int8_t x695 = INT8_MIN;
	uint8_t x696 = 11U;
	static volatile int32_t t61 = -857252379;

	t61 = (x693/((x694/x695)%x696));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x710 = 147089LLU;
	uint32_t x711 = 5330U;
	static int64_t x712 = INT64_MAX;

	t62 = (x709/((x710/x711)%x712));

	if (t62 != 683212743470724129LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x713 = -16686058502682LL;
	int8_t x714 = -1;
	uint32_t x715 = UINT32_MAX;
	static int64_t t63 = -5093LL;

	t63 = (x713/((x714/x715)%x716));

	if (t63 != -16686058502682LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x725 = 166;
	static uint16_t x726 = 345U;
	uint32_t x728 = 6U;
	uint32_t t64 = 706U;

	t64 = (x725/((x726/x727)%x728));

	if (t64 != 41U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x730 = UINT64_MAX;
	static int32_t x731 = INT32_MIN;

	t65 = (x729/((x730/x731)%x732));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x741 = INT8_MAX;
	int64_t x742 = INT64_MIN;
	int32_t x743 = INT32_MAX;
	volatile int64_t t66 = 7371757LL;

	t66 = (x741/((x742/x743)%x744));

	if (t66 != -21LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x745 = UINT16_MAX;
	uint16_t x746 = 90U;
	int32_t x747 = -1;
	volatile uint16_t x748 = UINT16_MAX;
	volatile int32_t t67 = 127976388;

	t67 = (x745/((x746/x747)%x748));

	if (t67 != -728) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x750 = INT64_MIN;
	static uint64_t x751 = 29963LLU;
	int16_t x752 = -1;
	uint64_t t68 = 159152LLU;

	t68 = (x749/((x750/x751)%x752));

	if (t68 != 59926LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x753 = INT64_MAX;
	static int8_t x755 = -1;
	volatile int16_t x756 = INT16_MAX;

	t69 = (x753/((x754/x755)%x756));

	if (t69 != 9159257236201366LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x761 = INT32_MAX;
	int8_t x763 = -14;
	static uint32_t x764 = 2U;
	volatile uint32_t t70 = 96826464U;

	t70 = (x761/((x762/x763)%x764));

	if (t70 != 2147483647U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x769 = -1LL;
	static volatile uint64_t x770 = UINT64_MAX;
	volatile int8_t x771 = INT8_MAX;
	uint64_t x772 = UINT64_MAX;
	uint64_t t71 = 53185837705153LLU;

	t71 = (x769/((x770/x771)%x772));

	if (t71 != 127LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x777 = 2;
	int8_t x778 = INT8_MIN;
	uint16_t x779 = 10U;
	static int16_t x780 = INT16_MAX;
	volatile int32_t t72 = -26;

	t72 = (x777/((x778/x779)%x780));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x789 = 38079LLU;
	int32_t x790 = INT32_MIN;
	int64_t x791 = -1LL;
	static uint32_t x792 = 717U;
	static uint64_t t73 = 634806LLU;

	t73 = (x789/((x790/x791)%x792));

	if (t73 != 71LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x801 = 4U;
	static int32_t x802 = INT32_MIN;
	int64_t x804 = INT64_MIN;
	int64_t t74 = -50681684991314LL;

	t74 = (x801/((x802/x803)%x804));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x805 = 1U;
	int32_t x806 = INT32_MIN;
	int8_t x807 = INT8_MIN;
	uint64_t t75 = 534769668726409LLU;

	t75 = (x805/((x806/x807)%x808));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x809 = INT32_MIN;
	uint16_t x810 = 8030U;
	int64_t x812 = 16LL;
	volatile int64_t t76 = 65121051619LL;

	t76 = (x809/((x810/x811)%x812));

	if (t76 != 195225786LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x813 = UINT32_MAX;
	uint64_t x814 = 49175096192LLU;
	volatile int32_t x815 = 78;
	uint64_t x816 = UINT64_MAX;
	static volatile uint64_t t77 = 7098547637LLU;

	t77 = (x813/((x814/x815)%x816));

	if (t77 != 6LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x817 = -1;
	static int16_t x818 = -227;
	static int8_t x820 = INT8_MIN;

	t78 = (x817/((x818/x819)%x820));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x829 = INT8_MAX;
	int8_t x830 = INT8_MIN;
	uint32_t x831 = 538628U;
	static int16_t x832 = -1;
	volatile uint32_t t79 = 56U;

	t79 = (x829/((x830/x831)%x832));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x849 = INT16_MIN;
	int64_t x850 = INT64_MIN;
	uint16_t x851 = 1893U;
	int16_t x852 = INT16_MAX;
	volatile int64_t t80 = 537508201221981LL;

	t80 = (x849/((x850/x851)%x852));

	if (t80 != 2LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x853 = -6;
	int16_t x854 = INT16_MAX;
	uint32_t x855 = 6292U;
	uint64_t x856 = 13384363849126138LLU;

	t81 = (x853/((x854/x855)%x856));

	if (t81 != 3689348814741910322LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x857 = INT16_MAX;
	static uint64_t t82 = 137120792197089182LLU;

	t82 = (x857/((x858/x859)%x860));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x861 = INT16_MIN;
	int32_t x863 = INT32_MAX;
	static int64_t x864 = 119658LL;

	t83 = (x861/((x862/x863)%x864));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x869 = -1;
	int32_t x870 = -59718;
	static int8_t x871 = INT8_MAX;

	t84 = (x869/((x870/x871)%x872));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x873 = INT32_MAX;
	int64_t x874 = 177139LL;
	static int16_t x875 = INT16_MAX;
	int16_t x876 = INT16_MIN;
	int64_t t85 = -402951LL;

	t85 = (x873/((x874/x875)%x876));

	if (t85 != 429496729LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x877 = -329444904655984LL;
	static int16_t x878 = INT16_MIN;
	static uint32_t x880 = 1335496655U;
	int64_t t86 = 164508200549355037LL;

	t86 = (x877/((x878/x879)%x880));

	if (t86 != -20107721231LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x884 = INT8_MAX;

	t87 = (x881/((x882/x883)%x884));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x885 = INT32_MIN;
	volatile int64_t x886 = INT64_MAX;
	static int64_t x887 = 841408LL;
	volatile int64_t t88 = 21872447417956706LL;

	t88 = (x885/((x886/x887)%x888));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x893 = INT64_MAX;
	int8_t x894 = INT8_MIN;
	uint32_t x896 = 37562839U;

	t89 = (x893/((x894/x895)%x896));

	if (t89 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x921 = INT16_MIN;
	int16_t x922 = INT16_MIN;
	uint8_t x924 = 6U;
	volatile int32_t t90 = 1;

	t90 = (x921/((x922/x923)%x924));

	if (t90 != 8192) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x937 = 1569327563U;
	static int16_t x938 = -1;
	int8_t x939 = -1;
	int64_t x940 = -998474LL;
	int64_t t91 = -196LL;

	t91 = (x937/((x938/x939)%x940));

	if (t91 != 1569327563LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x961 = -347;
	int64_t t92 = -533478214412761787LL;

	t92 = (x961/((x962/x963)%x964));

	if (t92 != 347LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x974 = -1;
	int64_t x975 = -1LL;
	volatile int32_t x976 = INT32_MAX;
	int64_t t93 = -887106LL;

	t93 = (x973/((x974/x975)%x976));

	if (t93 != 5381156LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x977 = 2965666495LLU;
	volatile int64_t x978 = INT64_MIN;
	uint64_t x979 = 814712934LLU;
	uint8_t x980 = 11U;
	uint64_t t94 = 1117LLU;

	t94 = (x977/((x978/x979)%x980));

	if (t94 != 988555498LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x981 = 23808U;
	static int8_t x982 = INT8_MIN;
	int32_t x983 = -1;
	int32_t x984 = 856;

	t95 = (x981/((x982/x983)%x984));

	if (t95 != 186) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x989 = UINT8_MAX;
	uint16_t x990 = 190U;
	int8_t x991 = INT8_MIN;
	volatile int32_t t96 = 37554;

	t96 = (x989/((x990/x991)%x992));

	if (t96 != -255) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x997 = UINT32_MAX;
	volatile uint32_t x998 = UINT32_MAX;
	uint8_t x999 = 14U;
	int32_t x1000 = INT32_MIN;

	t97 = (x997/((x998/x999)%x1000));

	if (t97 != 14U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x1001 = 46145594LLU;
	volatile uint64_t x1003 = 76448717058LLU;
	volatile uint64_t t98 = 1730494334369423LLU;

	t98 = (x1001/((x1002/x1003)%x1004));

	if (t98 != 1431LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x1013 = UINT32_MAX;
	int64_t x1014 = 1174154126LL;
	static volatile uint8_t x1015 = 2U;
	int8_t x1016 = 49;
	static volatile int64_t t99 = 10036927039683LL;

	t99 = (x1013/((x1014/x1015)%x1016));

	if (t99 != 159072862LL) { NG(); } else { ; }
	
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

