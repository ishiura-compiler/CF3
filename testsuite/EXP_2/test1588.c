#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x28 = INT32_MAX;
int32_t t0 = -905;
int16_t x29 = INT16_MAX;
static int8_t x40 = INT8_MAX;
volatile uint8_t x56 = 2U;
static int16_t x92 = -1;
volatile int8_t x98 = INT8_MIN;
volatile int32_t t8 = 1;
static uint8_t x122 = UINT8_MAX;
int32_t x131 = INT32_MAX;
int32_t t12 = 3584474;
int32_t x138 = INT32_MIN;
volatile int32_t t13 = 7400499;
int8_t x165 = INT8_MAX;
uint8_t x177 = 1U;
int32_t x180 = -1;
volatile int32_t t17 = 488437772;
static int64_t x187 = INT64_MIN;
static int16_t x188 = INT16_MIN;
uint16_t x199 = UINT16_MAX;
static volatile int64_t x251 = 124LL;
int32_t x252 = INT32_MAX;
int64_t x262 = INT64_MAX;
volatile int32_t t23 = -15;
volatile int32_t t24 = -120916519;
int64_t x286 = INT64_MIN;
int16_t x292 = INT16_MIN;
uint64_t x323 = 1131986LLU;
uint64_t t29 = 4934123070LLU;
uint16_t x348 = 0U;
volatile int8_t x353 = 1;
int16_t x354 = INT16_MIN;
volatile int16_t x356 = -10542;
volatile uint8_t x361 = 11U;
int32_t x373 = 8900;
static volatile int32_t t35 = -526116969;
int64_t x394 = -1LL;
volatile int32_t t39 = 0;
uint8_t x455 = 9U;
int8_t x456 = INT8_MIN;
volatile int32_t t40 = -425;
static uint64_t t41 = 39LLU;
int8_t x466 = 1;
volatile uint32_t x477 = 121677472U;
static volatile int8_t x480 = 2;
static uint32_t t43 = 20U;
int8_t x492 = -1;
int32_t x495 = 809476;
int32_t x507 = INT32_MIN;
static int8_t x508 = INT8_MIN;
int16_t x514 = INT16_MIN;
int16_t x526 = -1;
int32_t t49 = 2;
volatile uint64_t x535 = 62176129073239LLU;
volatile uint16_t x536 = 117U;
int32_t t51 = 0;
static int64_t x560 = -1LL;
volatile uint32_t x568 = UINT32_MAX;
uint16_t x574 = 1566U;
uint8_t x588 = UINT8_MAX;
int64_t x592 = -1LL;
static int64_t x602 = -1LL;
uint16_t x603 = 715U;
uint16_t x611 = UINT16_MAX;
int8_t x612 = -1;
uint16_t x613 = 30U;
int64_t x616 = 694954098648518LL;
volatile uint32_t t62 = 2U;
volatile uint8_t x635 = 10U;
int64_t x649 = INT64_MAX;
static uint64_t x650 = 354844960285084LLU;
int64_t x652 = 16LL;
volatile int64_t t66 = -127556936388LL;
int16_t x670 = 3;
volatile uint64_t x671 = 4553290702540482272LLU;
uint64_t x686 = UINT64_MAX;
volatile int8_t x688 = INT8_MAX;
int64_t x698 = INT64_MIN;
static int32_t x700 = INT32_MIN;
uint32_t t71 = 1248440U;
uint16_t x713 = UINT16_MAX;
volatile int64_t x730 = -4396986876436888511LL;
static int8_t x732 = INT8_MIN;
int16_t x758 = 256;
static int32_t x764 = -1;
int32_t x785 = INT32_MAX;
int64_t x787 = INT64_MIN;
volatile uint32_t t79 = 1U;
int32_t x789 = 129;
int16_t x794 = -799;
int16_t x796 = -618;
int32_t t81 = -17552184;
uint64_t x805 = 40LLU;
int16_t x856 = INT16_MAX;
uint32_t x861 = 59336U;
uint64_t t86 = 497213914692943LLU;
volatile uint32_t x870 = 259847070U;
int32_t x871 = INT32_MIN;
int16_t x877 = INT16_MAX;
uint32_t x878 = UINT32_MAX;
volatile int8_t x880 = -1;
uint32_t t89 = 7361064U;
int8_t x894 = -1;
uint8_t x899 = 7U;
int16_t x903 = INT16_MIN;
static uint64_t x910 = 22462648406445740LLU;
volatile int32_t t94 = 103045067;
uint64_t x950 = 101LLU;
uint16_t x952 = UINT16_MAX;
volatile int16_t x955 = INT16_MAX;
uint32_t x963 = 4684U;


void f0(void) {
	uint8_t x25 = 1U;
	int64_t x26 = -529727512394047LL;
	int8_t x27 = 2;

	t0 = ((x25<<(x26<=x27))-x28);

	if (t0 != -2147483645) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x30 = UINT16_MAX;
	static int16_t x31 = INT16_MIN;
	int64_t x32 = 6906506LL;
	int64_t t1 = -652290751LL;

	t1 = ((x29<<(x30<=x31))-x32);

	if (t1 != -6873739LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x33 = UINT32_MAX;
	int64_t x34 = INT64_MIN;
	volatile int8_t x35 = INT8_MIN;
	static uint32_t x36 = 27U;
	static uint32_t t2 = 10798U;

	t2 = ((x33<<(x34<=x35))-x36);

	if (t2 != 4294967267U) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x37 = INT16_MAX;
	int16_t x38 = 3;
	static volatile uint8_t x39 = 101U;
	volatile int32_t t3 = 40;

	t3 = ((x37<<(x38<=x39))-x40);

	if (t3 != 65407) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x41 = 138853608662164LL;
	volatile uint16_t x42 = UINT16_MAX;
	static volatile uint64_t x43 = UINT64_MAX;
	volatile int8_t x44 = INT8_MAX;
	int64_t t4 = 107LL;

	t4 = ((x41<<(x42<=x43))-x44);

	if (t4 != 277707217324201LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x53 = INT8_MAX;
	int16_t x54 = -1;
	int32_t x55 = INT32_MIN;
	int32_t t5 = 3;

	t5 = ((x53<<(x54<=x55))-x56);

	if (t5 != 125) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x69 = 172957633;
	uint64_t x70 = 178LLU;
	int16_t x71 = INT16_MIN;
	volatile int16_t x72 = INT16_MIN;
	int32_t t6 = 56;

	t6 = ((x69<<(x70<=x71))-x72);

	if (t6 != 345948034) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x89 = 5U;
	int32_t x90 = INT32_MIN;
	int16_t x91 = INT16_MIN;
	static int32_t t7 = -60;

	t7 = ((x89<<(x90<=x91))-x92);

	if (t7 != 11) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x97 = 1U;
	int32_t x99 = INT32_MAX;
	uint8_t x100 = 7U;

	t8 = ((x97<<(x98<=x99))-x100);

	if (t8 != -5) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x105 = UINT64_MAX;
	uint16_t x106 = 71U;
	uint16_t x107 = 335U;
	int8_t x108 = INT8_MAX;
	volatile uint64_t t9 = 910277152775541876LLU;

	t9 = ((x105<<(x106<=x107))-x108);

	if (t9 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x109 = 800U;
	static int64_t x110 = -1LL;
	static int16_t x111 = -2;
	int64_t x112 = 539437071948101511LL;
	int64_t t10 = 15877224156603367LL;

	t10 = ((x109<<(x110<=x111))-x112);

	if (t10 != -539437071948100711LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x121 = UINT16_MAX;
	uint8_t x123 = UINT8_MAX;
	int64_t x124 = 29164342883237LL;
	volatile int64_t t11 = 640990019585LL;

	t11 = ((x121<<(x122<=x123))-x124);

	if (t11 != -29164342752167LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x129 = 84U;
	uint16_t x130 = 3U;
	volatile int16_t x132 = INT16_MAX;

	t12 = ((x129<<(x130<=x131))-x132);

	if (t12 != -32599) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x137 = 1832U;
	uint64_t x139 = UINT64_MAX;
	int8_t x140 = INT8_MAX;

	t13 = ((x137<<(x138<=x139))-x140);

	if (t13 != 3537) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x149 = 55327U;
	uint64_t x150 = 0LLU;
	int8_t x151 = INT8_MIN;
	uint32_t x152 = UINT32_MAX;
	volatile uint32_t t14 = 9062359U;

	t14 = ((x149<<(x150<=x151))-x152);

	if (t14 != 110655U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x161 = INT16_MAX;
	static int16_t x162 = -1;
	int8_t x163 = -1;
	int64_t x164 = -1026277380995776LL;
	volatile int64_t t15 = 107090509LL;

	t15 = ((x161<<(x162<=x163))-x164);

	if (t15 != 1026277381061310LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x166 = 3741950222LLU;
	uint16_t x167 = 113U;
	static int8_t x168 = -1;
	int32_t t16 = 890348892;

	t16 = ((x165<<(x166<=x167))-x168);

	if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x178 = INT64_MAX;
	static int8_t x179 = INT8_MAX;

	t17 = ((x177<<(x178<=x179))-x180);

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x185 = 15;
	int8_t x186 = INT8_MAX;
	static volatile int32_t t18 = 3049608;

	t18 = ((x185<<(x186<=x187))-x188);

	if (t18 != 32783) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x197 = 4005473630571501438LL;
	volatile int16_t x198 = -1;
	uint16_t x200 = 502U;
	int64_t t19 = -3823741624LL;

	t19 = ((x197<<(x198<=x199))-x200);

	if (t19 != 8010947261143002374LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x213 = 4858LLU;
	volatile int8_t x214 = INT8_MIN;
	int8_t x215 = INT8_MIN;
	int8_t x216 = INT8_MIN;
	volatile uint64_t t20 = 1224385LLU;

	t20 = ((x213<<(x214<=x215))-x216);

	if (t20 != 9844LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x229 = UINT64_MAX;
	static volatile int32_t x230 = -293464;
	uint8_t x231 = UINT8_MAX;
	static uint32_t x232 = 1952749748U;
	volatile uint64_t t21 = 22LLU;

	t21 = ((x229<<(x230<=x231))-x232);

	if (t21 != 18446744071756801866LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x249 = 12;
	uint8_t x250 = 1U;
	int32_t t22 = 47;

	t22 = ((x249<<(x250<=x251))-x252);

	if (t22 != -2147483623) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x261 = 0;
	volatile uint32_t x263 = 255505388U;
	int8_t x264 = 2;

	t23 = ((x261<<(x262<=x263))-x264);

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x281 = UINT16_MAX;
	int16_t x282 = -1;
	volatile int8_t x283 = INT8_MIN;
	int8_t x284 = INT8_MIN;

	t24 = ((x281<<(x282<=x283))-x284);

	if (t24 != 65663) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x285 = 1U;
	volatile int8_t x287 = 0;
	int32_t x288 = INT32_MAX;
	volatile int32_t t25 = -31386908;

	t25 = ((x285<<(x286<=x287))-x288);

	if (t25 != -2147483645) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x289 = 1;
	int16_t x290 = -1;
	int32_t x291 = INT32_MIN;
	int32_t t26 = -36786548;

	t26 = ((x289<<(x290<=x291))-x292);

	if (t26 != 32769) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x305 = 1U;
	uint8_t x306 = UINT8_MAX;
	int32_t x307 = INT32_MAX;
	uint16_t x308 = 24800U;
	volatile int32_t t27 = -23;

	t27 = ((x305<<(x306<=x307))-x308);

	if (t27 != -24798) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x321 = 3438707;
	volatile uint64_t x322 = 4LLU;
	static uint32_t x324 = UINT32_MAX;
	volatile uint32_t t28 = 41906U;

	t28 = ((x321<<(x322<=x323))-x324);

	if (t28 != 6877415U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x325 = 9829038U;
	int8_t x326 = -1;
	volatile uint16_t x327 = 20U;
	uint64_t x328 = 789LLU;

	t29 = ((x325<<(x326<=x327))-x328);

	if (t29 != 19657287LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x341 = UINT16_MAX;
	volatile uint16_t x342 = UINT16_MAX;
	static volatile int8_t x343 = INT8_MAX;
	static uint8_t x344 = 0U;
	int32_t t30 = 64543070;

	t30 = ((x341<<(x342<=x343))-x344);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x345 = 404U;
	int64_t x346 = 1026055LL;
	int32_t x347 = INT32_MAX;
	uint32_t t31 = 127345009U;

	t31 = ((x345<<(x346<=x347))-x348);

	if (t31 != 808U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x355 = 5U;
	int32_t t32 = -545031025;

	t32 = ((x353<<(x354<=x355))-x356);

	if (t32 != 10544) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x362 = 2701;
	int32_t x363 = -1;
	int16_t x364 = INT16_MIN;
	volatile int32_t t33 = 132106;

	t33 = ((x361<<(x362<=x363))-x364);

	if (t33 != 32779) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x369 = 1U;
	volatile uint32_t x370 = 155815U;
	uint64_t x371 = 2078772LLU;
	volatile uint64_t x372 = 35783142807975LLU;
	uint64_t t34 = 405439897598116188LLU;

	t34 = ((x369<<(x370<=x371))-x372);

	if (t34 != 18446708290566743643LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x374 = INT16_MIN;
	static int32_t x375 = INT32_MIN;
	int16_t x376 = 13899;

	t35 = ((x373<<(x374<=x375))-x376);

	if (t35 != -4999) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x381 = 8U;
	int16_t x382 = -2;
	int64_t x383 = -1LL;
	static int16_t x384 = INT16_MIN;
	int32_t t36 = 121;

	t36 = ((x381<<(x382<=x383))-x384);

	if (t36 != 32784) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x385 = 0U;
	int32_t x386 = INT32_MIN;
	int64_t x387 = 31LL;
	int8_t x388 = INT8_MIN;
	volatile int32_t t37 = 1395028;

	t37 = ((x385<<(x386<=x387))-x388);

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x393 = 331574776U;
	volatile int8_t x395 = -1;
	volatile int16_t x396 = INT16_MIN;
	volatile uint32_t t38 = 184942U;

	t38 = ((x393<<(x394<=x395))-x396);

	if (t38 != 663182320U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x449 = 2U;
	int32_t x450 = INT32_MAX;
	int16_t x451 = INT16_MIN;
	int16_t x452 = -63;

	t39 = ((x449<<(x450<=x451))-x452);

	if (t39 != 65) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x453 = INT16_MAX;
	uint8_t x454 = 119U;

	t40 = ((x453<<(x454<=x455))-x456);

	if (t40 != 32895) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x457 = UINT32_MAX;
	volatile int8_t x458 = -1;
	volatile int64_t x459 = INT64_MIN;
	volatile uint64_t x460 = 550469924517479915LLU;

	t41 = ((x457<<(x458<=x459))-x460);

	if (t41 != 17896274153487038996LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x465 = UINT8_MAX;
	int8_t x467 = -1;
	volatile uint64_t x468 = 117LLU;
	volatile uint64_t t42 = 543919LLU;

	t42 = ((x465<<(x466<=x467))-x468);

	if (t42 != 138LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x478 = 287U;
	int16_t x479 = INT16_MIN;

	t43 = ((x477<<(x478<=x479))-x480);

	if (t43 != 243354942U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x489 = 85U;
	uint64_t x490 = 4250847LLU;
	volatile uint64_t x491 = 1206287LLU;
	uint32_t t44 = 11U;

	t44 = ((x489<<(x490<=x491))-x492);

	if (t44 != 86U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x493 = UINT16_MAX;
	uint8_t x494 = 5U;
	uint16_t x496 = 35U;
	int32_t t45 = 18677702;

	t45 = ((x493<<(x494<=x495))-x496);

	if (t45 != 131035) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x505 = 37U;
	int16_t x506 = INT16_MAX;
	volatile int32_t t46 = -36;

	t46 = ((x505<<(x506<=x507))-x508);

	if (t46 != 165) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x513 = 7656U;
	static int32_t x515 = 62;
	static int8_t x516 = -14;
	static int32_t t47 = 10763;

	t47 = ((x513<<(x514<=x515))-x516);

	if (t47 != 15326) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x517 = 11U;
	uint16_t x518 = 1163U;
	volatile int8_t x519 = INT8_MAX;
	static int32_t x520 = 2724;
	int32_t t48 = 1;

	t48 = ((x517<<(x518<=x519))-x520);

	if (t48 != -2713) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x525 = INT8_MAX;
	uint32_t x527 = 18U;
	int16_t x528 = INT16_MIN;

	t49 = ((x525<<(x526<=x527))-x528);

	if (t49 != 32895) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x533 = 122207308U;
	volatile uint8_t x534 = UINT8_MAX;
	uint32_t t50 = 211219U;

	t50 = ((x533<<(x534<=x535))-x536);

	if (t50 != 244414499U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x541 = UINT16_MAX;
	int64_t x542 = INT64_MAX;
	int8_t x543 = INT8_MIN;
	int16_t x544 = -1;

	t51 = ((x541<<(x542<=x543))-x544);

	if (t51 != 65536) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x557 = UINT32_MAX;
	uint16_t x558 = UINT16_MAX;
	volatile int8_t x559 = INT8_MAX;
	static volatile int64_t t52 = 1469775451LL;

	t52 = ((x557<<(x558<=x559))-x560);

	if (t52 != 4294967296LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x565 = 1842U;
	volatile uint64_t x566 = 1614451LLU;
	volatile uint16_t x567 = 1U;
	static uint32_t t53 = 11027U;

	t53 = ((x565<<(x566<=x567))-x568);

	if (t53 != 1843U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x573 = 1913U;
	int64_t x575 = INT64_MAX;
	int64_t x576 = INT64_MAX;
	volatile int64_t t54 = 25039474325620LL;

	t54 = ((x573<<(x574<=x575))-x576);

	if (t54 != -9223372036854771981LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x577 = 5942804U;
	int8_t x578 = INT8_MIN;
	static int32_t x579 = INT32_MIN;
	uint8_t x580 = UINT8_MAX;
	uint32_t t55 = 2057367215U;

	t55 = ((x577<<(x578<=x579))-x580);

	if (t55 != 5942549U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x585 = INT8_MAX;
	int8_t x586 = 1;
	int16_t x587 = INT16_MAX;
	static volatile int32_t t56 = 4321;

	t56 = ((x585<<(x586<=x587))-x588);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x589 = 422444526030259LLU;
	uint16_t x590 = UINT16_MAX;
	uint64_t x591 = 371LLU;
	uint64_t t57 = 56427766719373LLU;

	t57 = ((x589<<(x590<=x591))-x592);

	if (t57 != 422444526030260LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x597 = 27;
	uint32_t x598 = 1916461145U;
	volatile int64_t x599 = INT64_MIN;
	int32_t x600 = -2;
	static int32_t t58 = -108302;

	t58 = ((x597<<(x598<=x599))-x600);

	if (t58 != 29) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x601 = 5;
	volatile int16_t x604 = -1;
	volatile int32_t t59 = 81341658;

	t59 = ((x601<<(x602<=x603))-x604);

	if (t59 != 11) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x609 = 14122;
	volatile int8_t x610 = 0;
	volatile int32_t t60 = -1;

	t60 = ((x609<<(x610<=x611))-x612);

	if (t60 != 28245) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x614 = -1;
	volatile int8_t x615 = -1;
	static int64_t t61 = -72520388231LL;

	t61 = ((x613<<(x614<=x615))-x616);

	if (t61 != -694954098648458LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x629 = 75U;
	volatile int64_t x630 = INT64_MIN;
	uint64_t x631 = UINT64_MAX;
	int16_t x632 = -1;

	t62 = ((x629<<(x630<=x631))-x632);

	if (t62 != 151U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x633 = 50U;
	volatile uint32_t x634 = UINT32_MAX;
	uint8_t x636 = UINT8_MAX;
	int32_t t63 = -3;

	t63 = ((x633<<(x634<=x635))-x636);

	if (t63 != -205) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x637 = 1;
	int64_t x638 = INT64_MAX;
	uint32_t x639 = UINT32_MAX;
	uint8_t x640 = 90U;
	int32_t t64 = 1;

	t64 = ((x637<<(x638<=x639))-x640);

	if (t64 != -89) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x645 = 0;
	uint16_t x646 = UINT16_MAX;
	uint8_t x647 = 12U;
	int8_t x648 = 14;
	static int32_t t65 = -11;

	t65 = ((x645<<(x646<=x647))-x648);

	if (t65 != -14) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x651 = 162U;

	t66 = ((x649<<(x650<=x651))-x652);

	if (t66 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x661 = 123334;
	uint32_t x662 = UINT32_MAX;
	static int8_t x663 = -21;
	static uint32_t x664 = UINT32_MAX;
	volatile uint32_t t67 = 783927714U;

	t67 = ((x661<<(x662<=x663))-x664);

	if (t67 != 123335U) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x669 = 956063352156LL;
	int32_t x672 = INT32_MIN;
	volatile int64_t t68 = -1915232707918LL;

	t68 = ((x669<<(x670<=x671))-x672);

	if (t68 != 1914274187960LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x677 = UINT16_MAX;
	volatile uint32_t x678 = 0U;
	static int16_t x679 = -1;
	uint16_t x680 = 189U;
	int32_t t69 = 171278498;

	t69 = ((x677<<(x678<=x679))-x680);

	if (t69 != 130881) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x685 = 31323981107940LLU;
	uint64_t x687 = UINT64_MAX;
	volatile uint64_t t70 = 474LLU;

	t70 = ((x685<<(x686<=x687))-x688);

	if (t70 != 62647962215753LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x697 = UINT32_MAX;
	int64_t x699 = INT64_MIN;

	t71 = ((x697<<(x698<=x699))-x700);

	if (t71 != 2147483646U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x714 = INT16_MIN;
	uint64_t x715 = 23598009LLU;
	int8_t x716 = INT8_MAX;
	static volatile int32_t t72 = 253;

	t72 = ((x713<<(x714<=x715))-x716);

	if (t72 != 65408) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x717 = INT8_MAX;
	int16_t x718 = INT16_MIN;
	static uint64_t x719 = 10187LLU;
	int8_t x720 = 27;
	static volatile int32_t t73 = -1;

	t73 = ((x717<<(x718<=x719))-x720);

	if (t73 != 100) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x729 = 18U;
	static uint16_t x731 = UINT16_MAX;
	static int32_t t74 = -181216;

	t74 = ((x729<<(x730<=x731))-x732);

	if (t74 != 164) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x737 = UINT16_MAX;
	uint8_t x738 = 10U;
	int16_t x739 = -22;
	volatile int32_t x740 = -1;
	volatile int32_t t75 = -147;

	t75 = ((x737<<(x738<=x739))-x740);

	if (t75 != 65536) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x753 = 5769717828719LLU;
	uint8_t x754 = 7U;
	static int8_t x755 = 5;
	static uint32_t x756 = 151U;
	uint64_t t76 = 6293524LLU;

	t76 = ((x753<<(x754<=x755))-x756);

	if (t76 != 5769717828568LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x757 = 0U;
	int32_t x759 = INT32_MAX;
	volatile uint8_t x760 = 21U;
	volatile int32_t t77 = 6495362;

	t77 = ((x757<<(x758<=x759))-x760);

	if (t77 != -21) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x761 = UINT8_MAX;
	static volatile int8_t x762 = INT8_MAX;
	volatile int8_t x763 = INT8_MAX;
	int32_t t78 = -13219028;

	t78 = ((x761<<(x762<=x763))-x764);

	if (t78 != 511) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x786 = 963U;
	static uint32_t x788 = 27425U;

	t79 = ((x785<<(x786<=x787))-x788);

	if (t79 != 2147456222U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x790 = -1;
	uint16_t x791 = 14U;
	int32_t x792 = -1;
	volatile int32_t t80 = -133700522;

	t80 = ((x789<<(x790<=x791))-x792);

	if (t80 != 259) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x793 = INT8_MAX;
	int32_t x795 = -282946;

	t81 = ((x793<<(x794<=x795))-x796);

	if (t81 != 745) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x806 = -1;
	static int16_t x807 = INT16_MIN;
	static uint32_t x808 = 3563U;
	uint64_t t82 = 15263295367772650LLU;

	t82 = ((x805<<(x806<=x807))-x808);

	if (t82 != 18446744073709548093LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x825 = INT16_MAX;
	uint16_t x826 = UINT16_MAX;
	uint32_t x827 = 91373897U;
	int16_t x828 = INT16_MIN;
	int32_t t83 = -952514900;

	t83 = ((x825<<(x826<=x827))-x828);

	if (t83 != 98302) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x853 = UINT16_MAX;
	int64_t x854 = INT64_MIN;
	uint8_t x855 = UINT8_MAX;
	int32_t t84 = -1095;

	t84 = ((x853<<(x854<=x855))-x856);

	if (t84 != 98303) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x862 = INT64_MIN;
	static uint32_t x863 = 10U;
	static volatile uint8_t x864 = 2U;
	static volatile uint32_t t85 = 6551U;

	t85 = ((x861<<(x862<=x863))-x864);

	if (t85 != 118670U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x865 = UINT64_MAX;
	volatile uint32_t x866 = 8054U;
	static uint8_t x867 = UINT8_MAX;
	static volatile int8_t x868 = INT8_MIN;

	t86 = ((x865<<(x866<=x867))-x868);

	if (t86 != 127LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x869 = 1006U;
	int64_t x872 = INT64_MAX;
	int64_t t87 = 6293LL;

	t87 = ((x869<<(x870<=x871))-x872);

	if (t87 != -9223372036854773795LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x879 = -698907;
	int32_t t88 = -120948994;

	t88 = ((x877<<(x878<=x879))-x880);

	if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x881 = UINT8_MAX;
	volatile int32_t x882 = INT32_MAX;
	volatile int8_t x883 = 9;
	volatile uint32_t x884 = 106U;

	t89 = ((x881<<(x882<=x883))-x884);

	if (t89 != 149U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x893 = 165;
	volatile int8_t x895 = INT8_MIN;
	volatile int16_t x896 = 13;
	int32_t t90 = 461558;

	t90 = ((x893<<(x894<=x895))-x896);

	if (t90 != 152) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x897 = 71U;
	uint8_t x898 = UINT8_MAX;
	uint32_t x900 = UINT32_MAX;
	volatile uint32_t t91 = 1467889594U;

	t91 = ((x897<<(x898<=x899))-x900);

	if (t91 != 72U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x901 = INT16_MAX;
	int64_t x902 = -25286195309LL;
	int16_t x904 = -1;
	int32_t t92 = -648661;

	t92 = ((x901<<(x902<=x903))-x904);

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x909 = 187;
	volatile uint64_t x911 = 1472LLU;
	int16_t x912 = -1;
	volatile int32_t t93 = 1024923378;

	t93 = ((x909<<(x910<=x911))-x912);

	if (t93 != 188) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x929 = 3U;
	static uint8_t x930 = 29U;
	volatile int16_t x931 = INT16_MAX;
	volatile int8_t x932 = INT8_MIN;

	t94 = ((x929<<(x930<=x931))-x932);

	if (t94 != 134) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x937 = INT32_MAX;
	uint8_t x938 = 0U;
	volatile int8_t x939 = -7;
	uint16_t x940 = 16U;
	volatile int32_t t95 = 29;

	t95 = ((x937<<(x938<=x939))-x940);

	if (t95 != 2147483631) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x941 = UINT32_MAX;
	static uint64_t x942 = 16LLU;
	uint32_t x943 = 3138U;
	int8_t x944 = -60;
	static volatile uint32_t t96 = 421U;

	t96 = ((x941<<(x942<=x943))-x944);

	if (t96 != 58U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x949 = 64113069LLU;
	int8_t x951 = INT8_MIN;
	uint64_t t97 = 136714558LLU;

	t97 = ((x949<<(x950<=x951))-x952);

	if (t97 != 128160603LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x953 = 0U;
	volatile int16_t x954 = -6;
	volatile int8_t x956 = -1;
	volatile int32_t t98 = -29560537;

	t98 = ((x953<<(x954<=x955))-x956);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x961 = 1U;
	int32_t x962 = 48869352;
	volatile int32_t x964 = INT32_MIN;
	volatile uint32_t t99 = 136010U;

	t99 = ((x961<<(x962<=x963))-x964);

	if (t99 != 2147483649U) { NG(); } else { ; }
	
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

