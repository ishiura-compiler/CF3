#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -360886821;
uint64_t x28 = UINT64_MAX;
uint64_t x38 = 1052LLU;
int64_t x40 = -1LL;
static volatile int32_t x44 = -1;
int8_t x52 = -4;
uint16_t x55 = 49U;
int8_t x73 = 61;
int64_t x74 = 53LL;
static uint64_t x88 = 25341LLU;
uint8_t x90 = 0U;
volatile int8_t x99 = INT8_MAX;
int8_t x101 = INT8_MAX;
int32_t x106 = INT32_MAX;
int32_t x124 = INT32_MIN;
static volatile int32_t t12 = -1;
volatile int64_t x141 = 256048079979323LL;
int32_t x158 = -1;
int32_t x171 = -1;
int32_t t18 = 445006104;
volatile int8_t x188 = INT8_MIN;
volatile int32_t x218 = -1;
static volatile uint64_t x236 = 5844956LLU;
int8_t x241 = INT8_MAX;
int32_t x242 = -2;
int16_t x244 = INT16_MIN;
int32_t x254 = INT32_MAX;
volatile int32_t t28 = 54;
int8_t x286 = INT8_MIN;
uint16_t x303 = 19803U;
volatile int32_t t30 = 1;
int8_t x314 = 1;
volatile int16_t x315 = INT16_MIN;
volatile int16_t x331 = -1569;
volatile int32_t t34 = 4208790;
volatile int32_t t35 = -329;
static volatile int64_t x363 = INT64_MAX;
int32_t x386 = -1;
volatile uint32_t x388 = 6051162U;
uint32_t x389 = 212U;
int32_t t41 = -13;
uint16_t x432 = 1U;
int8_t x435 = 16;
static int32_t x436 = INT32_MIN;
int32_t t45 = 399;
volatile int32_t t46 = 307661726;
static volatile int64_t x466 = INT64_MAX;
volatile int32_t x468 = 584;
int32_t x476 = -4084760;
uint16_t x481 = 13621U;
static int32_t x482 = -1;
int32_t x484 = 54356;
static int32_t x485 = 1786137;
uint8_t x486 = UINT8_MAX;
uint8_t x488 = 1U;
int32_t t51 = -13030;
int64_t x494 = -7824511019459LL;
static uint8_t x525 = 15U;
volatile uint16_t x526 = 1833U;
volatile uint16_t x527 = UINT16_MAX;
static int32_t t58 = -90356;
int64_t x538 = INT64_MIN;
int32_t t61 = 2;
static int8_t x556 = 12;
volatile int32_t t62 = -1;
uint64_t x564 = 4275878594153468579LLU;
uint32_t x569 = 175U;
volatile int8_t x575 = INT8_MAX;
static int8_t x584 = -1;
int32_t x601 = INT32_MAX;
int16_t x604 = INT16_MAX;
uint64_t x608 = UINT64_MAX;
int16_t x643 = INT16_MIN;
uint16_t x649 = UINT16_MAX;
static volatile int16_t x652 = INT16_MIN;
static volatile int64_t x661 = 511286492378398LL;
int8_t x662 = -3;
int32_t x678 = -1;
uint32_t x681 = 0U;
uint8_t x683 = 8U;
volatile uint32_t x685 = 55251U;
uint16_t x693 = UINT16_MAX;
static uint32_t x695 = 23053U;
static volatile int32_t x701 = 1043974526;
static int64_t x702 = -1LL;
int16_t x704 = 1;
uint8_t x716 = 69U;
static int16_t x719 = INT16_MIN;
uint8_t x725 = 2U;
static int16_t x733 = 13;
int64_t x736 = INT64_MIN;
static uint8_t x741 = 2U;
uint16_t x756 = UINT16_MAX;
uint16_t x757 = 54U;
volatile uint16_t x763 = 2U;
static int32_t t90 = 73566758;
int64_t x783 = INT64_MIN;
volatile uint64_t x784 = 1354LLU;
static int32_t t91 = 12902;
uint16_t x789 = UINT16_MAX;
uint32_t x792 = UINT32_MAX;
int32_t t93 = -12699364;
int8_t x822 = INT8_MIN;
volatile int32_t x823 = -1;
static int16_t x830 = -1;
uint8_t x832 = UINT8_MAX;
volatile uint16_t x844 = 4621U;
int32_t x847 = -2334089;


void f0(void) {
	static uint32_t x21 = 5901U;
	uint8_t x22 = 1U;
	uint16_t x23 = 63U;
	int8_t x24 = INT8_MIN;

	t0 = ((x21<<(x22<x23))<=x24);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x25 = 10989;
	static uint32_t x26 = 74650942U;
	static uint8_t x27 = 94U;
	int32_t t1 = 0;

	t1 = ((x25<<(x26<x27))<=x28);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x37 = UINT16_MAX;
	volatile int8_t x39 = INT8_MIN;
	static int32_t t2 = -196570;

	t2 = ((x37<<(x38<x39))<=x40);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x41 = INT8_MAX;
	static int16_t x42 = -1;
	static volatile int32_t x43 = INT32_MIN;
	int32_t t3 = 48452748;

	t3 = ((x41<<(x42<x43))<=x44);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x49 = 33;
	volatile uint64_t x50 = 8251729245451035005LLU;
	static int32_t x51 = INT32_MAX;
	int32_t t4 = 0;

	t4 = ((x49<<(x50<x51))<=x52);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x53 = INT16_MAX;
	volatile uint16_t x54 = 1U;
	volatile int64_t x56 = INT64_MIN;
	volatile int32_t t5 = -31;

	t5 = ((x53<<(x54<x55))<=x56);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x75 = -1;
	static int64_t x76 = 4815LL;
	int32_t t6 = 27037371;

	t6 = ((x73<<(x74<x75))<=x76);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x85 = INT8_MAX;
	int64_t x86 = INT64_MAX;
	int8_t x87 = INT8_MAX;
	int32_t t7 = 51;

	t7 = ((x85<<(x86<x87))<=x88);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x89 = 12;
	static uint16_t x91 = UINT16_MAX;
	int32_t x92 = INT32_MAX;
	int32_t t8 = 97;

	t8 = ((x89<<(x90<x91))<=x92);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x97 = UINT16_MAX;
	static int8_t x98 = 0;
	volatile int16_t x100 = -8310;
	volatile int32_t t9 = -356177;

	t9 = ((x97<<(x98<x99))<=x100);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x102 = 43741;
	int8_t x103 = -5;
	int32_t x104 = -10554;
	static int32_t t10 = 11983529;

	t10 = ((x101<<(x102<x103))<=x104);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x105 = INT8_MAX;
	uint32_t x107 = 875886767U;
	volatile int32_t x108 = -1;
	static int32_t t11 = 4;

	t11 = ((x105<<(x106<x107))<=x108);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x121 = UINT8_MAX;
	static int16_t x122 = INT16_MAX;
	int8_t x123 = -1;

	t12 = ((x121<<(x122<x123))<=x124);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x133 = INT64_MAX;
	int64_t x134 = -552749LL;
	int64_t x135 = -35160010330540364LL;
	uint32_t x136 = UINT32_MAX;
	int32_t t13 = -287389;

	t13 = ((x133<<(x134<x135))<=x136);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x142 = INT16_MIN;
	int8_t x143 = -8;
	uint64_t x144 = UINT64_MAX;
	int32_t t14 = 485904997;

	t14 = ((x141<<(x142<x143))<=x144);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x157 = 9537051468142LL;
	int32_t x159 = INT32_MIN;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t15 = 1;

	t15 = ((x157<<(x158<x159))<=x160);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x165 = UINT32_MAX;
	int32_t x166 = 3841;
	int16_t x167 = INT16_MIN;
	int32_t x168 = INT32_MAX;
	int32_t t16 = -61845;

	t16 = ((x165<<(x166<x167))<=x168);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x169 = UINT8_MAX;
	uint32_t x170 = 1185324U;
	volatile uint16_t x172 = 5688U;
	int32_t t17 = 54999851;

	t17 = ((x169<<(x170<x171))<=x172);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x173 = 38745134LLU;
	static volatile uint16_t x174 = UINT16_MAX;
	uint16_t x175 = 170U;
	int64_t x176 = 65600478077918LL;

	t18 = ((x173<<(x174<x175))<=x176);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x185 = 28614649104LLU;
	static uint32_t x186 = 547835648U;
	int64_t x187 = 4022031551LL;
	volatile int32_t t19 = 8257;

	t19 = ((x185<<(x186<x187))<=x188);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x197 = INT16_MAX;
	uint64_t x198 = 22446898LLU;
	volatile uint8_t x199 = 96U;
	int32_t x200 = -1;
	static int32_t t20 = -372908458;

	t20 = ((x197<<(x198<x199))<=x200);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x201 = 3641U;
	static int32_t x202 = 8951260;
	int16_t x203 = 5889;
	static int32_t x204 = INT32_MIN;
	int32_t t21 = 58;

	t21 = ((x201<<(x202<x203))<=x204);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x205 = UINT8_MAX;
	uint64_t x206 = 3LLU;
	int8_t x207 = -3;
	static int16_t x208 = -101;
	int32_t t22 = 1;

	t22 = ((x205<<(x206<x207))<=x208);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x217 = 10U;
	uint8_t x219 = UINT8_MAX;
	int32_t x220 = 28;
	int32_t t23 = 30500;

	t23 = ((x217<<(x218<x219))<=x220);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x233 = 131801187LLU;
	int32_t x234 = 17;
	static int8_t x235 = INT8_MAX;
	int32_t t24 = 166874708;

	t24 = ((x233<<(x234<x235))<=x236);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x243 = UINT32_MAX;
	volatile int32_t t25 = 3638;

	t25 = ((x241<<(x242<x243))<=x244);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x245 = 1;
	int8_t x246 = -19;
	volatile int16_t x247 = -1;
	uint8_t x248 = 11U;
	volatile int32_t t26 = -21;

	t26 = ((x245<<(x246<x247))<=x248);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x253 = UINT8_MAX;
	int64_t x255 = INT64_MAX;
	static int64_t x256 = -1LL;
	int32_t t27 = -112;

	t27 = ((x253<<(x254<x255))<=x256);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x281 = UINT8_MAX;
	volatile uint8_t x282 = 53U;
	int16_t x283 = 180;
	uint64_t x284 = UINT64_MAX;

	t28 = ((x281<<(x282<x283))<=x284);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x285 = 63U;
	static int8_t x287 = 0;
	volatile int16_t x288 = INT16_MIN;
	int32_t t29 = 1657;

	t29 = ((x285<<(x286<x287))<=x288);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x301 = UINT8_MAX;
	int8_t x302 = 7;
	int16_t x304 = 2;

	t30 = ((x301<<(x302<x303))<=x304);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x309 = 59284801233932002LLU;
	static uint16_t x310 = UINT16_MAX;
	volatile int64_t x311 = -1LL;
	static int32_t x312 = -59595;
	volatile int32_t t31 = 141805;

	t31 = ((x309<<(x310<x311))<=x312);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x313 = INT64_MAX;
	int8_t x316 = -14;
	static volatile int32_t t32 = -1523561;

	t32 = ((x313<<(x314<x315))<=x316);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x329 = 127LL;
	int16_t x330 = INT16_MAX;
	uint64_t x332 = UINT64_MAX;
	int32_t t33 = 713816;

	t33 = ((x329<<(x330<x331))<=x332);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x333 = 831035095LLU;
	static int16_t x334 = -1857;
	int16_t x335 = 12266;
	int8_t x336 = 0;

	t34 = ((x333<<(x334<x335))<=x336);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x337 = 80202973U;
	int8_t x338 = INT8_MIN;
	int16_t x339 = -1;
	int64_t x340 = -29409210444556LL;

	t35 = ((x337<<(x338<x339))<=x340);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x357 = 17209924LLU;
	int32_t x358 = -547167;
	int32_t x359 = -22428;
	uint8_t x360 = 4U;
	volatile int32_t t36 = 1;

	t36 = ((x357<<(x358<x359))<=x360);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x361 = 13LL;
	static volatile uint8_t x362 = UINT8_MAX;
	static int64_t x364 = INT64_MIN;
	static volatile int32_t t37 = -13087;

	t37 = ((x361<<(x362<x363))<=x364);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x373 = 59U;
	static int8_t x374 = INT8_MAX;
	int8_t x375 = INT8_MIN;
	volatile int64_t x376 = INT64_MIN;
	volatile int32_t t38 = 295694825;

	t38 = ((x373<<(x374<x375))<=x376);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x385 = 73722053370LLU;
	int32_t x387 = -1;
	volatile int32_t t39 = -1;

	t39 = ((x385<<(x386<x387))<=x388);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x390 = -1;
	static uint64_t x391 = UINT64_MAX;
	int32_t x392 = INT32_MIN;
	int32_t t40 = -9096;

	t40 = ((x389<<(x390<x391))<=x392);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x397 = UINT8_MAX;
	int8_t x398 = INT8_MIN;
	static volatile int32_t x399 = -1;
	int32_t x400 = INT32_MIN;

	t41 = ((x397<<(x398<x399))<=x400);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x401 = UINT8_MAX;
	uint32_t x402 = 53850U;
	int8_t x403 = INT8_MAX;
	volatile int32_t x404 = 193;
	int32_t t42 = -37853;

	t42 = ((x401<<(x402<x403))<=x404);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x413 = INT64_MAX;
	int32_t x414 = INT32_MAX;
	volatile uint16_t x415 = 2290U;
	uint32_t x416 = 0U;
	int32_t t43 = -168319343;

	t43 = ((x413<<(x414<x415))<=x416);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x429 = 1U;
	int64_t x430 = INT64_MAX;
	int64_t x431 = -2392790589LL;
	int32_t t44 = -515456498;

	t44 = ((x429<<(x430<x431))<=x432);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x433 = 7U;
	volatile int8_t x434 = 0;

	t45 = ((x433<<(x434<x435))<=x436);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x437 = INT8_MAX;
	static int8_t x438 = -1;
	static uint64_t x439 = 50LLU;
	uint16_t x440 = 4U;

	t46 = ((x437<<(x438<x439))<=x440);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x445 = INT16_MAX;
	int8_t x446 = 0;
	uint64_t x447 = 778084546759988452LLU;
	static uint64_t x448 = UINT64_MAX;
	volatile int32_t t47 = -8;

	t47 = ((x445<<(x446<x447))<=x448);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x465 = 0U;
	volatile uint16_t x467 = UINT16_MAX;
	volatile int32_t t48 = -249;

	t48 = ((x465<<(x466<x467))<=x468);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x473 = 3085LLU;
	volatile int16_t x474 = INT16_MIN;
	static int32_t x475 = INT32_MIN;
	static int32_t t49 = 237640606;

	t49 = ((x473<<(x474<x475))<=x476);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x483 = -1;
	int32_t t50 = -103524897;

	t50 = ((x481<<(x482<x483))<=x484);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x487 = -1;

	t51 = ((x485<<(x486<x487))<=x488);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x493 = INT8_MAX;
	int8_t x495 = INT8_MIN;
	int64_t x496 = INT64_MIN;
	volatile int32_t t52 = 19202757;

	t52 = ((x493<<(x494<x495))<=x496);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x497 = INT64_MAX;
	uint32_t x498 = UINT32_MAX;
	int64_t x499 = INT64_MIN;
	int32_t x500 = 169;
	volatile int32_t t53 = 13143;

	t53 = ((x497<<(x498<x499))<=x500);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x501 = INT8_MAX;
	int64_t x502 = INT64_MAX;
	static volatile int64_t x503 = 1012960LL;
	static int64_t x504 = -4634648861567165LL;
	volatile int32_t t54 = -14043758;

	t54 = ((x501<<(x502<x503))<=x504);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x509 = INT8_MAX;
	static uint16_t x510 = 991U;
	volatile int64_t x511 = -1LL;
	volatile int32_t x512 = -43479196;
	volatile int32_t t55 = 983;

	t55 = ((x509<<(x510<x511))<=x512);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x517 = UINT8_MAX;
	volatile uint16_t x518 = UINT16_MAX;
	int32_t x519 = 13;
	uint32_t x520 = 210U;
	static volatile int32_t t56 = -732215390;

	t56 = ((x517<<(x518<x519))<=x520);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x521 = 413734288LLU;
	int16_t x522 = 1;
	static int32_t x523 = -366726032;
	int32_t x524 = -1;
	int32_t t57 = -1;

	t57 = ((x521<<(x522<x523))<=x524);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x528 = UINT64_MAX;

	t58 = ((x525<<(x526<x527))<=x528);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x537 = 98;
	int16_t x539 = 4985;
	volatile int16_t x540 = INT16_MIN;
	volatile int32_t t59 = -13702;

	t59 = ((x537<<(x538<x539))<=x540);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x541 = 5U;
	volatile uint16_t x542 = 1370U;
	uint8_t x543 = 47U;
	int32_t x544 = 8236908;
	int32_t t60 = 13493;

	t60 = ((x541<<(x542<x543))<=x544);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x549 = 2;
	int64_t x550 = INT64_MIN;
	static int32_t x551 = INT32_MAX;
	int16_t x552 = 1;

	t61 = ((x549<<(x550<x551))<=x552);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x553 = INT16_MAX;
	int16_t x554 = -1;
	int8_t x555 = -1;

	t62 = ((x553<<(x554<x555))<=x556);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x557 = 83U;
	volatile uint64_t x558 = 61LLU;
	int8_t x559 = INT8_MAX;
	int32_t x560 = INT32_MIN;
	int32_t t63 = 15933905;

	t63 = ((x557<<(x558<x559))<=x560);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x561 = 10;
	volatile uint8_t x562 = 0U;
	volatile uint16_t x563 = 3516U;
	int32_t t64 = -5233467;

	t64 = ((x561<<(x562<x563))<=x564);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x570 = INT32_MAX;
	static int64_t x571 = -479LL;
	int64_t x572 = INT64_MAX;
	static int32_t t65 = -6975;

	t65 = ((x569<<(x570<x571))<=x572);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x573 = 3;
	uint8_t x574 = 26U;
	uint64_t x576 = 940786987261877LLU;
	static int32_t t66 = 37732093;

	t66 = ((x573<<(x574<x575))<=x576);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x581 = UINT8_MAX;
	uint16_t x582 = 1094U;
	int32_t x583 = -1;
	volatile int32_t t67 = -137668569;

	t67 = ((x581<<(x582<x583))<=x584);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x602 = -1LL;
	int8_t x603 = INT8_MIN;
	volatile int32_t t68 = -9;

	t68 = ((x601<<(x602<x603))<=x604);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x605 = INT64_MAX;
	int16_t x606 = INT16_MAX;
	int8_t x607 = INT8_MIN;
	volatile int32_t t69 = -3030;

	t69 = ((x605<<(x606<x607))<=x608);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x641 = 235LL;
	static volatile int64_t x642 = INT64_MIN;
	int64_t x644 = 272405279265LL;
	static int32_t t70 = -31995;

	t70 = ((x641<<(x642<x643))<=x644);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x650 = UINT8_MAX;
	uint8_t x651 = 3U;
	static volatile int32_t t71 = -13;

	t71 = ((x649<<(x650<x651))<=x652);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x657 = 2380U;
	int32_t x658 = -1;
	int64_t x659 = -76997109LL;
	static volatile int16_t x660 = INT16_MAX;
	int32_t t72 = 91324;

	t72 = ((x657<<(x658<x659))<=x660);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x663 = -395;
	uint64_t x664 = 111805LLU;
	volatile int32_t t73 = 306;

	t73 = ((x661<<(x662<x663))<=x664);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x669 = UINT16_MAX;
	int64_t x670 = 141286LL;
	uint32_t x671 = 1639U;
	int8_t x672 = 1;
	int32_t t74 = 8;

	t74 = ((x669<<(x670<x671))<=x672);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x673 = 1U;
	int32_t x674 = INT32_MAX;
	volatile uint16_t x675 = 15153U;
	int64_t x676 = -7367157LL;
	volatile int32_t t75 = -780431326;

	t75 = ((x673<<(x674<x675))<=x676);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x677 = 15U;
	static uint16_t x679 = 29U;
	static int32_t x680 = 1;
	volatile int32_t t76 = 68;

	t76 = ((x677<<(x678<x679))<=x680);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x682 = INT16_MIN;
	int8_t x684 = INT8_MIN;
	volatile int32_t t77 = 0;

	t77 = ((x681<<(x682<x683))<=x684);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x686 = -1;
	int64_t x687 = INT64_MIN;
	uint32_t x688 = UINT32_MAX;
	int32_t t78 = 7189;

	t78 = ((x685<<(x686<x687))<=x688);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x694 = 19;
	int16_t x696 = -4;
	int32_t t79 = -64273;

	t79 = ((x693<<(x694<x695))<=x696);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x697 = UINT64_MAX;
	int8_t x698 = -1;
	static volatile uint16_t x699 = UINT16_MAX;
	volatile uint8_t x700 = UINT8_MAX;
	int32_t t80 = -58578;

	t80 = ((x697<<(x698<x699))<=x700);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x703 = INT8_MAX;
	volatile int32_t t81 = -61;

	t81 = ((x701<<(x702<x703))<=x704);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x713 = UINT32_MAX;
	int32_t x714 = -244763;
	static int64_t x715 = 267965218LL;
	int32_t t82 = -911;

	t82 = ((x713<<(x714<x715))<=x716);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x717 = 14U;
	static int16_t x718 = INT16_MIN;
	int16_t x720 = 430;
	static int32_t t83 = -1707;

	t83 = ((x717<<(x718<x719))<=x720);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x726 = 113173;
	int16_t x727 = 6514;
	static int32_t x728 = -782154;
	int32_t t84 = 363085768;

	t84 = ((x725<<(x726<x727))<=x728);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x734 = 0;
	static volatile int32_t x735 = INT32_MAX;
	volatile int32_t t85 = -39578;

	t85 = ((x733<<(x734<x735))<=x736);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x742 = 83U;
	uint32_t x743 = UINT32_MAX;
	uint32_t x744 = 5757U;
	int32_t t86 = -205207322;

	t86 = ((x741<<(x742<x743))<=x744);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x753 = 279U;
	uint8_t x754 = 27U;
	static uint8_t x755 = UINT8_MAX;
	volatile int32_t t87 = 1128;

	t87 = ((x753<<(x754<x755))<=x756);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x758 = UINT64_MAX;
	volatile uint32_t x759 = 6920074U;
	int32_t x760 = INT32_MIN;
	static int32_t t88 = 60;

	t88 = ((x757<<(x758<x759))<=x760);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x761 = 29U;
	int8_t x762 = INT8_MIN;
	int8_t x764 = INT8_MIN;
	volatile int32_t t89 = 5;

	t89 = ((x761<<(x762<x763))<=x764);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x769 = UINT8_MAX;
	uint8_t x770 = 7U;
	int8_t x771 = INT8_MIN;
	uint64_t x772 = 24987000690032LLU;

	t90 = ((x769<<(x770<x771))<=x772);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x781 = 206329U;
	int32_t x782 = INT32_MIN;

	t91 = ((x781<<(x782<x783))<=x784);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x790 = 122U;
	static int16_t x791 = INT16_MIN;
	volatile int32_t t92 = 1;

	t92 = ((x789<<(x790<x791))<=x792);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x801 = 1;
	static volatile int64_t x802 = 1051057LL;
	static int16_t x803 = INT16_MIN;
	uint64_t x804 = 36119969LLU;

	t93 = ((x801<<(x802<x803))<=x804);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x817 = 1U;
	static int64_t x818 = -1LL;
	static volatile int8_t x819 = 3;
	int64_t x820 = INT64_MIN;
	int32_t t94 = -28195941;

	t94 = ((x817<<(x818<x819))<=x820);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x821 = 21U;
	int32_t x824 = 96526397;
	volatile int32_t t95 = -4595322;

	t95 = ((x821<<(x822<x823))<=x824);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x825 = 3162U;
	int8_t x826 = INT8_MAX;
	int64_t x827 = 2778026246746534345LL;
	uint16_t x828 = UINT16_MAX;
	int32_t t96 = -1;

	t96 = ((x825<<(x826<x827))<=x828);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x829 = UINT32_MAX;
	uint8_t x831 = UINT8_MAX;
	int32_t t97 = 84;

	t97 = ((x829<<(x830<x831))<=x832);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x841 = INT8_MAX;
	volatile uint32_t x842 = UINT32_MAX;
	int32_t x843 = INT32_MIN;
	static volatile int32_t t98 = -3394;

	t98 = ((x841<<(x842<x843))<=x844);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x845 = 6U;
	uint8_t x846 = 3U;
	int8_t x848 = INT8_MIN;
	volatile int32_t t99 = 767530260;

	t99 = ((x845<<(x846<x847))<=x848);

	if (t99 != 1) { NG(); } else { ; }
	
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

