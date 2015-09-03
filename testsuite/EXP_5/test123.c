#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MAX;
volatile int32_t x28 = 25295077;
static volatile int64_t x32 = 634939679274LL;
volatile int32_t t3 = 0;
int16_t x54 = INT16_MAX;
volatile int32_t x66 = -1;
uint8_t x70 = UINT8_MAX;
static uint8_t x82 = 5U;
volatile int32_t t9 = -13824;
uint64_t x91 = UINT64_MAX;
uint16_t x101 = 11U;
uint32_t x112 = UINT32_MAX;
int32_t x117 = 12946;
uint8_t x133 = 0U;
int8_t x135 = -1;
int16_t x153 = 106;
uint64_t x154 = 1596LLU;
uint64_t x156 = 16051308156LLU;
static int64_t t19 = INT64_MAX;
int16_t x164 = INT16_MIN;
uint16_t x185 = 14U;
int8_t x202 = -2;
int8_t x216 = INT8_MIN;
int32_t t26 = -46280;
volatile uint16_t x232 = UINT16_MAX;
uint64_t x249 = 995000175151464294LLU;
int16_t x252 = INT16_MIN;
uint64_t t30 = 2848999409502086LLU;
int16_t x283 = -1;
static volatile uint32_t t33 = 213628U;
int16_t x292 = INT16_MIN;
int32_t t35 = -400570259;
volatile int32_t x310 = 198833010;
static int32_t x312 = -17621;
static uint32_t x322 = 0U;
int8_t x333 = INT8_MAX;
int8_t x334 = -1;
int32_t x336 = -7779617;
volatile int32_t t40 = 15632808;
int32_t x395 = -1;
int32_t x419 = 0;
int64_t x436 = INT64_MIN;
static volatile int8_t x462 = -1;
static uint8_t x467 = 60U;
volatile int16_t x486 = 969;
volatile int64_t x488 = -15758951LL;
int32_t t57 = -1;
uint16_t x515 = 3U;
static volatile int32_t t58 = 3543;
int8_t x528 = -1;
volatile uint32_t x530 = 917U;
volatile uint16_t x533 = 1015U;
int32_t x538 = 47;
static int32_t x545 = INT32_MAX;
int16_t x560 = -1;
static volatile int16_t x562 = INT16_MAX;
int8_t x572 = INT8_MAX;
uint32_t t68 = 47U;
int8_t x577 = INT8_MAX;
static volatile uint64_t x590 = UINT64_MAX;
static int32_t x608 = 143898;
volatile int32_t x615 = 33269;
volatile uint64_t t75 = 7656075591203LLU;
static uint8_t x625 = UINT8_MAX;
static int8_t x647 = 1;
static int32_t x654 = -1;
static uint64_t x677 = 1017316063LLU;
uint64_t x686 = 1779053343539006LLU;
volatile int32_t x687 = 1512731;
volatile uint32_t x691 = 324202U;
int16_t x693 = 0;
int16_t x695 = 12;
uint32_t x696 = 0U;
int32_t x698 = -1;
static uint64_t x699 = UINT64_MAX;
static volatile uint16_t x709 = UINT16_MAX;
int8_t x711 = INT8_MAX;
uint16_t x713 = 1767U;
int32_t t89 = 703442;
static uint8_t x737 = 26U;
int64_t x757 = 42149LL;
static uint64_t x765 = 46LLU;
int8_t x772 = INT8_MAX;
int16_t x776 = 1;
uint8_t x780 = 1U;


void f0(void) {
	static int32_t x1 = 50;
	static int32_t x2 = INT32_MAX;
	volatile int8_t x3 = 0;
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = 2039;

	t0 = (x1<<((x2+x3)<=x4));

	if (t0 != 50) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = INT16_MIN;
	uint16_t x11 = UINT16_MAX;
	int64_t x12 = 136268LL;
	int32_t t1 = -518725472;

	t1 = (x9<<((x10+x11)<=x12));

	if (t1 != 254) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x25 = UINT16_MAX;
	int32_t x26 = INT32_MAX;
	static uint64_t x27 = UINT64_MAX;
	volatile int32_t t2 = -12310181;

	t2 = (x25<<((x26+x27)<=x28));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x29 = 4U;
	static volatile int8_t x30 = 0;
	int8_t x31 = INT8_MIN;

	t3 = (x29<<((x30+x31)<=x32));

	if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x33 = 5830;
	volatile int64_t x34 = -275459589281124187LL;
	int16_t x35 = -127;
	volatile int64_t x36 = INT64_MAX;
	static int32_t t4 = 1;

	t4 = (x33<<((x34+x35)<=x36));

	if (t4 != 11660) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x53 = 6447437LLU;
	static int64_t x55 = -3312962682416LL;
	uint32_t x56 = 1699U;
	uint64_t t5 = 35162012036578LLU;

	t5 = (x53<<((x54+x55)<=x56));

	if (t5 != 12894874LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x65 = UINT8_MAX;
	uint8_t x67 = 3U;
	uint8_t x68 = 3U;
	int32_t t6 = 95587;

	t6 = (x65<<((x66+x67)<=x68));

	if (t6 != 510) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x69 = UINT16_MAX;
	static int16_t x71 = 6499;
	static int64_t x72 = INT64_MIN;
	volatile int32_t t7 = 132;

	t7 = (x69<<((x70+x71)<=x72));

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x77 = 48775U;
	static volatile int32_t x78 = INT32_MIN;
	volatile uint8_t x79 = UINT8_MAX;
	static int8_t x80 = 1;
	volatile uint32_t t8 = 1619U;

	t8 = (x77<<((x78+x79)<=x80));

	if (t8 != 97550U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x81 = 2U;
	int16_t x83 = INT16_MAX;
	static uint8_t x84 = 4U;

	t9 = (x81<<((x82+x83)<=x84));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x85 = 3U;
	uint64_t x86 = 4095257766LLU;
	volatile int8_t x87 = INT8_MAX;
	int32_t x88 = INT32_MIN;
	volatile int32_t t10 = 456965472;

	t10 = (x85<<((x86+x87)<=x88));

	if (t10 != 6) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x89 = INT64_MAX;
	static int8_t x90 = INT8_MIN;
	int32_t x92 = INT32_MIN;
	int64_t t11 = INT64_MAX;

	t11 = (x89<<((x90+x91)<=x92));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x93 = UINT16_MAX;
	uint64_t x94 = UINT64_MAX;
	int32_t x95 = INT32_MIN;
	uint32_t x96 = UINT32_MAX;
	static int32_t t12 = -19240;

	t12 = (x93<<((x94+x95)<=x96));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x102 = UINT64_MAX;
	static volatile int64_t x103 = INT64_MIN;
	int8_t x104 = -1;
	volatile int32_t t13 = 1389;

	t13 = (x101<<((x102+x103)<=x104));

	if (t13 != 22) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x109 = 872576U;
	int16_t x110 = INT16_MIN;
	volatile uint32_t x111 = 1888U;
	static volatile uint32_t t14 = 69448U;

	t14 = (x109<<((x110+x111)<=x112));

	if (t14 != 1745152U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x118 = UINT8_MAX;
	int16_t x119 = -1;
	static int16_t x120 = 1;
	int32_t t15 = 1;

	t15 = (x117<<((x118+x119)<=x120));

	if (t15 != 12946) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x134 = INT8_MIN;
	static int32_t x136 = INT32_MIN;
	int32_t t16 = -142766;

	t16 = (x133<<((x134+x135)<=x136));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x141 = 1513LL;
	uint32_t x142 = 120437813U;
	static uint16_t x143 = UINT16_MAX;
	volatile uint8_t x144 = 5U;
	volatile int64_t t17 = 5910210845283277LL;

	t17 = (x141<<((x142+x143)<=x144));

	if (t17 != 1513LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x155 = 16;
	volatile int32_t t18 = 29041639;

	t18 = (x153<<((x154+x155)<=x156));

	if (t18 != 212) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x157 = INT64_MAX;
	static uint16_t x158 = UINT16_MAX;
	static int16_t x159 = 59;
	int16_t x160 = INT16_MIN;

	t19 = (x157<<((x158+x159)<=x160));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x161 = UINT16_MAX;
	int64_t x162 = INT64_MIN;
	static int8_t x163 = INT8_MAX;
	int32_t t20 = 3;

	t20 = (x161<<((x162+x163)<=x164));

	if (t20 != 131070) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x177 = 19569U;
	uint32_t x178 = 12611U;
	int32_t x179 = -2;
	uint8_t x180 = 7U;
	int32_t t21 = 24366;

	t21 = (x177<<((x178+x179)<=x180));

	if (t21 != 19569) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x186 = 4164925;
	static volatile int8_t x187 = -1;
	int64_t x188 = INT64_MAX;
	int32_t t22 = -42922354;

	t22 = (x185<<((x186+x187)<=x188));

	if (t22 != 28) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x197 = 14527097888191913LLU;
	volatile int8_t x198 = -18;
	volatile uint32_t x199 = 3381U;
	uint16_t x200 = UINT16_MAX;
	volatile uint64_t t23 = 24LLU;

	t23 = (x197<<((x198+x199)<=x200));

	if (t23 != 29054195776383826LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x201 = 841964724617736124LL;
	static int32_t x203 = INT32_MAX;
	int64_t x204 = -1LL;
	int64_t t24 = -129970470963LL;

	t24 = (x201<<((x202+x203)<=x204));

	if (t24 != 841964724617736124LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x209 = UINT32_MAX;
	static int64_t x210 = -1LL;
	int64_t x211 = INT64_MAX;
	uint16_t x212 = 1U;
	static volatile uint32_t t25 = UINT32_MAX;

	t25 = (x209<<((x210+x211)<=x212));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x213 = UINT8_MAX;
	static int8_t x214 = INT8_MAX;
	int32_t x215 = -18477841;

	t26 = (x213<<((x214+x215)<=x216));

	if (t26 != 510) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x225 = 240957972U;
	int16_t x226 = INT16_MIN;
	uint16_t x227 = 5609U;
	int64_t x228 = INT64_MIN;
	static uint32_t t27 = 209812886U;

	t27 = (x225<<((x226+x227)<=x228));

	if (t27 != 240957972U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x229 = UINT16_MAX;
	volatile uint16_t x230 = UINT16_MAX;
	volatile int64_t x231 = INT64_MIN;
	int32_t t28 = -448086744;

	t28 = (x229<<((x230+x231)<=x232));

	if (t28 != 131070) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x241 = 601U;
	volatile uint16_t x242 = 1586U;
	static int64_t x243 = -1LL;
	uint64_t x244 = 54806336853485461LLU;
	volatile int32_t t29 = -1;

	t29 = (x241<<((x242+x243)<=x244));

	if (t29 != 1202) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x250 = -1LL;
	int16_t x251 = INT16_MIN;

	t30 = (x249<<((x250+x251)<=x252));

	if (t30 != 1990000350302928588LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x269 = 0;
	int16_t x270 = INT16_MIN;
	uint8_t x271 = 11U;
	uint64_t x272 = 1722619LLU;
	static volatile int32_t t31 = -439648774;

	t31 = (x269<<((x270+x271)<=x272));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x281 = 1;
	int16_t x282 = 1;
	volatile int32_t x284 = INT32_MIN;
	int32_t t32 = 89643362;

	t32 = (x281<<((x282+x283)<=x284));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x285 = UINT32_MAX;
	uint16_t x286 = UINT16_MAX;
	int16_t x287 = -1;
	uint64_t x288 = UINT64_MAX;

	t33 = (x285<<((x286+x287)<=x288));

	if (t33 != 4294967294U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x289 = INT8_MAX;
	int16_t x290 = INT16_MAX;
	int64_t x291 = -23426LL;
	int32_t t34 = -219;

	t34 = (x289<<((x290+x291)<=x292));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x293 = 5U;
	int16_t x294 = INT16_MIN;
	static int8_t x295 = -13;
	volatile uint16_t x296 = 12U;

	t35 = (x293<<((x294+x295)<=x296));

	if (t35 != 10) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x309 = 109570U;
	uint32_t x311 = UINT32_MAX;
	volatile uint32_t t36 = 512423770U;

	t36 = (x309<<((x310+x311)<=x312));

	if (t36 != 219140U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x321 = UINT16_MAX;
	int64_t x323 = INT64_MAX;
	volatile int8_t x324 = INT8_MAX;
	int32_t t37 = 53342779;

	t37 = (x321<<((x322+x323)<=x324));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x325 = 1992U;
	int64_t x326 = 55690393019LL;
	static int32_t x327 = INT32_MIN;
	int16_t x328 = INT16_MIN;
	int32_t t38 = 288215451;

	t38 = (x325<<((x326+x327)<=x328));

	if (t38 != 1992) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x329 = 5025919U;
	uint16_t x330 = 12397U;
	uint16_t x331 = 24423U;
	static int64_t x332 = INT64_MAX;
	uint32_t t39 = 5U;

	t39 = (x329<<((x330+x331)<=x332));

	if (t39 != 10051838U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x335 = 33236101050151303LLU;

	t40 = (x333<<((x334+x335)<=x336));

	if (t40 != 254) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x337 = 2661310LLU;
	uint16_t x338 = 10812U;
	static uint64_t x339 = 186096530535LLU;
	volatile int64_t x340 = INT64_MAX;
	volatile uint64_t t41 = 5803022041417921062LLU;

	t41 = (x337<<((x338+x339)<=x340));

	if (t41 != 5322620LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x345 = 3176LL;
	volatile uint32_t x346 = 931984U;
	uint8_t x347 = 0U;
	int8_t x348 = INT8_MIN;
	volatile int64_t t42 = -238094525LL;

	t42 = (x345<<((x346+x347)<=x348));

	if (t42 != 6352LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x361 = INT8_MAX;
	int32_t x362 = -1;
	uint8_t x363 = 0U;
	int16_t x364 = INT16_MAX;
	static volatile int32_t t43 = 9;

	t43 = (x361<<((x362+x363)<=x364));

	if (t43 != 254) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x365 = 1U;
	uint32_t x366 = 25192765U;
	volatile uint16_t x367 = UINT16_MAX;
	int64_t x368 = -1LL;
	volatile int32_t t44 = -147357035;

	t44 = (x365<<((x366+x367)<=x368));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x369 = 0;
	static int64_t x370 = -38383878110476464LL;
	volatile int8_t x371 = 0;
	int16_t x372 = INT16_MAX;
	volatile int32_t t45 = -3;

	t45 = (x369<<((x370+x371)<=x372));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x373 = UINT64_MAX;
	static volatile int32_t x374 = 5771572;
	int32_t x375 = -1;
	uint32_t x376 = 9546U;
	uint64_t t46 = UINT64_MAX;

	t46 = (x373<<((x374+x375)<=x376));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x381 = 24049U;
	uint64_t x382 = UINT64_MAX;
	static int64_t x383 = INT64_MAX;
	volatile uint16_t x384 = 117U;
	volatile int32_t t47 = -41;

	t47 = (x381<<((x382+x383)<=x384));

	if (t47 != 24049) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x393 = INT8_MAX;
	volatile int8_t x394 = -1;
	int8_t x396 = -1;
	int32_t t48 = -2067244;

	t48 = (x393<<((x394+x395)<=x396));

	if (t48 != 254) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x417 = 35445458503992LLU;
	uint64_t x418 = 447669LLU;
	int32_t x420 = -426857461;
	uint64_t t49 = 326046543277LLU;

	t49 = (x417<<((x418+x419)<=x420));

	if (t49 != 70890917007984LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x429 = 58U;
	volatile int16_t x430 = -12;
	int16_t x431 = INT16_MAX;
	volatile int64_t x432 = INT64_MIN;
	static int32_t t50 = -621;

	t50 = (x429<<((x430+x431)<=x432));

	if (t50 != 58) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x433 = UINT64_MAX;
	int16_t x434 = INT16_MIN;
	static uint16_t x435 = 1U;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (x433<<((x434+x435)<=x436));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x461 = INT8_MAX;
	static uint32_t x463 = UINT32_MAX;
	int8_t x464 = INT8_MIN;
	volatile int32_t t52 = 458;

	t52 = (x461<<((x462+x463)<=x464));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x465 = UINT64_MAX;
	int64_t x466 = -439483460133847LL;
	int64_t x468 = 1939735915444LL;
	uint64_t t53 = 1086983957758135LLU;

	t53 = (x465<<((x466+x467)<=x468));

	if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x473 = 6;
	static uint64_t x474 = 168LLU;
	static uint64_t x475 = 1787282151LLU;
	uint16_t x476 = 29445U;
	volatile int32_t t54 = 68806;

	t54 = (x473<<((x474+x475)<=x476));

	if (t54 != 6) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x485 = 15U;
	uint8_t x487 = 11U;
	int32_t t55 = 4971;

	t55 = (x485<<((x486+x487)<=x488));

	if (t55 != 15) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x493 = 27882305LL;
	uint16_t x494 = 288U;
	uint16_t x495 = 0U;
	int8_t x496 = -1;
	static int64_t t56 = -135300849605LL;

	t56 = (x493<<((x494+x495)<=x496));

	if (t56 != 27882305LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x505 = 11908656;
	uint16_t x506 = 4U;
	int8_t x507 = -1;
	int16_t x508 = INT16_MAX;

	t57 = (x505<<((x506+x507)<=x508));

	if (t57 != 23817312) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x513 = 3U;
	uint8_t x514 = 0U;
	uint16_t x516 = UINT16_MAX;

	t58 = (x513<<((x514+x515)<=x516));

	if (t58 != 6) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x517 = INT8_MAX;
	volatile int8_t x518 = -4;
	int8_t x519 = 0;
	static volatile int8_t x520 = INT8_MIN;
	int32_t t59 = 80;

	t59 = (x517<<((x518+x519)<=x520));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x525 = 2U;
	int64_t x526 = INT64_MAX;
	int32_t x527 = INT32_MIN;
	int32_t t60 = -946776;

	t60 = (x525<<((x526+x527)<=x528));

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x529 = 3707;
	static volatile uint8_t x531 = 94U;
	int16_t x532 = INT16_MIN;
	volatile int32_t t61 = -16984238;

	t61 = (x529<<((x530+x531)<=x532));

	if (t61 != 7414) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x534 = -8525;
	int16_t x535 = INT16_MIN;
	volatile int16_t x536 = -1;
	int32_t t62 = -478;

	t62 = (x533<<((x534+x535)<=x536));

	if (t62 != 2030) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x537 = UINT8_MAX;
	volatile uint32_t x539 = 1786U;
	uint32_t x540 = UINT32_MAX;
	static volatile int32_t t63 = -33;

	t63 = (x537<<((x538+x539)<=x540));

	if (t63 != 510) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x546 = -1;
	volatile uint16_t x547 = UINT16_MAX;
	volatile int16_t x548 = 8;
	volatile int32_t t64 = INT32_MAX;

	t64 = (x545<<((x546+x547)<=x548));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x549 = UINT64_MAX;
	volatile uint32_t x550 = 21395U;
	uint32_t x551 = 238U;
	int16_t x552 = INT16_MAX;
	static volatile uint64_t t65 = 0LLU;

	t65 = (x549<<((x550+x551)<=x552));

	if (t65 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x557 = 4652;
	int64_t x558 = INT64_MIN;
	volatile int16_t x559 = INT16_MAX;
	volatile int32_t t66 = 94896193;

	t66 = (x557<<((x558+x559)<=x560));

	if (t66 != 9304) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x561 = INT32_MAX;
	int64_t x563 = 358511352326884478LL;
	uint8_t x564 = 12U;
	volatile int32_t t67 = INT32_MAX;

	t67 = (x561<<((x562+x563)<=x564));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x569 = 1440524089U;
	int32_t x570 = -63;
	volatile int8_t x571 = INT8_MIN;

	t68 = (x569<<((x570+x571)<=x572));

	if (t68 != 2881048178U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x578 = 425U;
	int64_t x579 = -1LL;
	uint8_t x580 = UINT8_MAX;
	volatile int32_t t69 = -766;

	t69 = (x577<<((x578+x579)<=x580));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x589 = 55160997502718440LLU;
	static int16_t x591 = INT16_MIN;
	int8_t x592 = 0;
	volatile uint64_t t70 = 1159LLU;

	t70 = (x589<<((x590+x591)<=x592));

	if (t70 != 55160997502718440LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x593 = 2034303316166376024LLU;
	static int8_t x594 = -3;
	volatile uint16_t x595 = 2668U;
	int32_t x596 = -1;
	uint64_t t71 = 237215LLU;

	t71 = (x593<<((x594+x595)<=x596));

	if (t71 != 2034303316166376024LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x597 = 332U;
	static volatile int32_t x598 = INT32_MIN;
	int16_t x599 = 7215;
	int16_t x600 = -1;
	static uint32_t t72 = 57U;

	t72 = (x597<<((x598+x599)<=x600));

	if (t72 != 664U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x605 = 53U;
	static uint64_t x606 = UINT64_MAX;
	static uint64_t x607 = UINT64_MAX;
	uint32_t t73 = 6983U;

	t73 = (x605<<((x606+x607)<=x608));

	if (t73 != 53U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x609 = UINT32_MAX;
	volatile uint32_t x610 = 201U;
	int8_t x611 = INT8_MIN;
	static int8_t x612 = INT8_MAX;
	uint32_t t74 = 1U;

	t74 = (x609<<((x610+x611)<=x612));

	if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x613 = 2821768670LLU;
	int8_t x614 = -2;
	uint16_t x616 = UINT16_MAX;

	t75 = (x613<<((x614+x615)<=x616));

	if (t75 != 5643537340LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x626 = INT32_MAX;
	uint64_t x627 = UINT64_MAX;
	int8_t x628 = -5;
	static int32_t t76 = 327331413;

	t76 = (x625<<((x626+x627)<=x628));

	if (t76 != 510) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x633 = INT16_MAX;
	int8_t x634 = -5;
	static uint64_t x635 = UINT64_MAX;
	volatile int32_t x636 = -2;
	volatile int32_t t77 = 27583340;

	t77 = (x633<<((x634+x635)<=x636));

	if (t77 != 65534) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x645 = UINT8_MAX;
	static uint8_t x646 = UINT8_MAX;
	volatile int8_t x648 = -3;
	int32_t t78 = 22719628;

	t78 = (x645<<((x646+x647)<=x648));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x653 = 17U;
	uint64_t x655 = 163934019846990LLU;
	static int64_t x656 = INT64_MIN;
	int32_t t79 = 0;

	t79 = (x653<<((x654+x655)<=x656));

	if (t79 != 34) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x669 = UINT32_MAX;
	int8_t x670 = 0;
	uint64_t x671 = 521162292983310395LLU;
	int16_t x672 = -1;
	volatile uint32_t t80 = 14248U;

	t80 = (x669<<((x670+x671)<=x672));

	if (t80 != 4294967294U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x678 = -1;
	volatile int64_t x679 = 303033LL;
	int64_t x680 = INT64_MAX;
	volatile uint64_t t81 = 28970903097962977LLU;

	t81 = (x677<<((x678+x679)<=x680));

	if (t81 != 2034632126LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x685 = INT16_MAX;
	int8_t x688 = -1;
	int32_t t82 = 5007968;

	t82 = (x685<<((x686+x687)<=x688));

	if (t82 != 65534) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x689 = 96073U;
	uint16_t x690 = 18U;
	int32_t x692 = INT32_MIN;
	uint32_t t83 = 20859684U;

	t83 = (x689<<((x690+x691)<=x692));

	if (t83 != 192146U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x694 = 1U;
	int32_t t84 = -5;

	t84 = (x693<<((x694+x695)<=x696));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x697 = INT8_MAX;
	static volatile int16_t x700 = -1;
	int32_t t85 = 2;

	t85 = (x697<<((x698+x699)<=x700));

	if (t85 != 254) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x701 = 71314;
	static int32_t x702 = 5534;
	uint8_t x703 = 73U;
	int16_t x704 = INT16_MIN;
	static volatile int32_t t86 = 30;

	t86 = (x701<<((x702+x703)<=x704));

	if (t86 != 71314) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x710 = 428068135076250LLU;
	static int32_t x712 = 100638744;
	static volatile int32_t t87 = 5;

	t87 = (x709<<((x710+x711)<=x712));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x714 = 43U;
	volatile int16_t x715 = -1;
	uint16_t x716 = 15314U;
	static int32_t t88 = -763227;

	t88 = (x713<<((x714+x715)<=x716));

	if (t88 != 3534) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x729 = 922U;
	int16_t x730 = INT16_MAX;
	static uint8_t x731 = UINT8_MAX;
	int8_t x732 = 4;

	t89 = (x729<<((x730+x731)<=x732));

	if (t89 != 922) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x738 = -90833553139521LL;
	volatile int32_t x739 = -1;
	static volatile int32_t x740 = INT32_MIN;
	volatile int32_t t90 = -2412749;

	t90 = (x737<<((x738+x739)<=x740));

	if (t90 != 52) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x745 = INT32_MAX;
	volatile uint16_t x746 = 18U;
	static int16_t x747 = INT16_MAX;
	static volatile int8_t x748 = INT8_MIN;
	static volatile int32_t t91 = INT32_MAX;

	t91 = (x745<<((x746+x747)<=x748));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x749 = UINT64_MAX;
	static uint16_t x750 = UINT16_MAX;
	static int16_t x751 = -1;
	uint8_t x752 = UINT8_MAX;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = (x749<<((x750+x751)<=x752));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x753 = 13LLU;
	static int32_t x754 = 11546798;
	static uint32_t x755 = UINT32_MAX;
	int16_t x756 = INT16_MAX;
	volatile uint64_t t93 = 1LLU;

	t93 = (x753<<((x754+x755)<=x756));

	if (t93 != 13LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x758 = 412;
	int64_t x759 = -157170002175LL;
	static int64_t x760 = -1LL;
	volatile int64_t t94 = -1LL;

	t94 = (x757<<((x758+x759)<=x760));

	if (t94 != 84298LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x761 = UINT32_MAX;
	int8_t x762 = INT8_MIN;
	int16_t x763 = 7;
	int64_t x764 = INT64_MIN;
	static volatile uint32_t t95 = UINT32_MAX;

	t95 = (x761<<((x762+x763)<=x764));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x766 = UINT8_MAX;
	int16_t x767 = INT16_MIN;
	int32_t x768 = -1;
	uint64_t t96 = 608722766041LLU;

	t96 = (x765<<((x766+x767)<=x768));

	if (t96 != 92LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x769 = UINT64_MAX;
	int64_t x770 = 1499898LL;
	int32_t x771 = -1;
	uint64_t t97 = UINT64_MAX;

	t97 = (x769<<((x770+x771)<=x772));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x773 = 5536078189380376LLU;
	int16_t x774 = -1;
	volatile int16_t x775 = INT16_MIN;
	uint64_t t98 = 6112916185LLU;

	t98 = (x773<<((x774+x775)<=x776));

	if (t98 != 11072156378760752LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x777 = INT64_MAX;
	int64_t x778 = -1LL;
	uint8_t x779 = 4U;
	static int64_t t99 = INT64_MAX;

	t99 = (x777<<((x778+x779)<=x780));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

