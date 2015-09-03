#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MAX;
int8_t x25 = INT8_MAX;
int64_t x30 = -7369371498LL;
int16_t x31 = INT16_MAX;
static uint16_t x94 = 53U;
volatile int8_t x95 = -1;
int8_t x96 = 49;
int64_t x101 = 321381LL;
int16_t x163 = INT16_MAX;
volatile int32_t x164 = 3973365;
volatile uint64_t t10 = UINT64_MAX;
static volatile int32_t x169 = 29;
int32_t x171 = -2439611;
uint64_t x172 = UINT64_MAX;
static volatile uint32_t x214 = UINT32_MAX;
volatile int64_t x236 = 151484090LL;
volatile uint64_t t18 = 18809349LLU;
int64_t x265 = 111454025LL;
uint32_t x266 = UINT32_MAX;
static uint8_t x267 = 80U;
int16_t x280 = 5;
int32_t t21 = INT32_MAX;
volatile int16_t x283 = 23;
static volatile uint16_t x288 = 16242U;
int32_t t23 = -4;
uint8_t x298 = 1U;
int32_t x299 = INT32_MAX;
volatile int32_t x309 = INT32_MAX;
static uint16_t x312 = UINT16_MAX;
volatile uint32_t x325 = UINT32_MAX;
int16_t x339 = INT16_MIN;
volatile int32_t t28 = -1;
uint32_t x342 = 163U;
static volatile uint16_t x345 = 6U;
uint16_t x348 = UINT16_MAX;
static int64_t x365 = INT64_MAX;
volatile int64_t x367 = INT64_MIN;
int32_t t33 = INT32_MAX;
static volatile int32_t t35 = 17410607;
volatile int64_t x420 = -1LL;
int64_t x449 = 7209396616LL;
uint64_t x452 = 3393866500489861959LLU;
static int8_t x471 = 7;
uint64_t x473 = 428843635LLU;
uint16_t x518 = UINT16_MAX;
uint8_t x523 = 81U;
static int32_t t45 = 93337;
uint64_t t46 = 692666993LLU;
uint8_t x544 = 51U;
static int32_t t48 = -2922851;
uint64_t x548 = UINT64_MAX;
int64_t x562 = INT64_MIN;
int8_t x569 = 1;
uint64_t x605 = 0LLU;
volatile uint64_t t56 = 14LLU;
uint8_t x621 = 0U;
int16_t x622 = 1;
int64_t x624 = 15469026688LL;
uint16_t x640 = 948U;
static volatile int32_t t61 = 113;
int64_t x675 = INT64_MIN;
static volatile int16_t x685 = INT16_MAX;
uint16_t x688 = UINT16_MAX;
int8_t x697 = INT8_MAX;
volatile uint16_t x699 = 17057U;
int32_t x700 = -1630;
static int32_t x716 = INT32_MIN;
volatile uint32_t x733 = UINT32_MAX;
int32_t x735 = INT32_MAX;
static volatile uint32_t x785 = 4818790U;
volatile uint32_t t72 = 9U;
uint64_t x789 = 85876734LLU;
volatile uint64_t t73 = 11766766877614LLU;
volatile uint32_t x797 = 8092U;
uint32_t x803 = 15993895U;
int16_t x815 = INT16_MAX;
int32_t x831 = 120090316;
int64_t x832 = INT64_MIN;
uint64_t x837 = 8LLU;
uint64_t x846 = 2551LLU;
int8_t x850 = -1;
int16_t x887 = INT16_MAX;
uint64_t t85 = 437317644555LLU;
volatile int16_t x931 = -1;
int32_t x932 = INT32_MIN;
volatile int64_t x1012 = -1916271192791879LL;
uint32_t x1017 = UINT32_MAX;
volatile int64_t x1018 = -54681198681627173LL;
int16_t x1026 = INT16_MAX;
static volatile uint8_t x1027 = UINT8_MAX;
volatile int16_t x1042 = -1;
int8_t x1043 = INT8_MIN;
int64_t x1044 = INT64_MAX;
volatile int32_t t95 = 4384;
int16_t x1074 = INT16_MIN;
volatile uint8_t x1075 = 44U;
uint8_t x1083 = UINT8_MAX;
static uint32_t x1091 = 0U;
volatile uint8_t x1093 = 0U;
volatile int16_t x1095 = 14622;
uint32_t x1096 = 30720849U;


void f0(void) {
	int8_t x5 = 12;
	volatile uint16_t x6 = UINT16_MAX;
	static uint8_t x7 = 24U;
	uint64_t x8 = 3435208636362LLU;
	int32_t t0 = 81371351;

	t0 = (x5<<((x6&x7)/x8));

	if (t0 != 12) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x10 = 6U;
	static int64_t x11 = INT64_MIN;
	static int8_t x12 = INT8_MAX;
	volatile int32_t t1 = -703279390;

	t1 = (x9<<((x10&x11)/x12));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x26 = 12;
	int8_t x27 = INT8_MIN;
	static int32_t x28 = -13807968;
	int32_t t2 = -201984;

	t2 = (x25<<((x26&x27)/x28));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x29 = 45;
	uint16_t x32 = UINT16_MAX;
	static int32_t t3 = 487469299;

	t3 = (x29<<((x30&x31)/x32));

	if (t3 != 45) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = INT8_MAX;
	uint16_t x34 = 182U;
	uint16_t x35 = 6U;
	uint32_t x36 = 64188557U;
	int32_t t4 = -27294;

	t4 = (x33<<((x34&x35)/x36));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x53 = UINT32_MAX;
	volatile int64_t x54 = 0LL;
	int64_t x55 = 229241LL;
	int32_t x56 = INT32_MIN;
	uint32_t t5 = UINT32_MAX;

	t5 = (x53<<((x54&x55)/x56));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x81 = 24U;
	uint64_t x82 = 14719LLU;
	uint64_t x83 = 3174064911773LLU;
	uint64_t x84 = 264951397519LLU;
	volatile int32_t t6 = 3;

	t6 = (x81<<((x82&x83)/x84));

	if (t6 != 24) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x93 = 19633U;
	int32_t t7 = 1919;

	t7 = (x93<<((x94&x95)/x96));

	if (t7 != 39266) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x102 = -29;
	int64_t x103 = -1LL;
	uint16_t x104 = UINT16_MAX;
	static volatile int64_t t8 = 799389394078095LL;

	t8 = (x101<<((x102&x103)/x104));

	if (t8 != 321381LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x121 = 0;
	uint8_t x122 = 1U;
	int8_t x123 = -1;
	volatile int8_t x124 = -8;
	int32_t t9 = 7110;

	t9 = (x121<<((x122&x123)/x124));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x161 = UINT64_MAX;
	uint32_t x162 = 554U;

	t10 = (x161<<((x162&x163)/x164));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x170 = -1LL;
	volatile int32_t t11 = -148819;

	t11 = (x169<<((x170&x171)/x172));

	if (t11 != 29) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x193 = UINT64_MAX;
	static volatile int8_t x194 = -1;
	int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MAX;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x193<<((x194&x195)/x196));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x201 = INT8_MAX;
	static int32_t x202 = -1;
	uint16_t x203 = UINT16_MAX;
	int64_t x204 = INT64_MIN;
	int32_t t13 = 440;

	t13 = (x201<<((x202&x203)/x204));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x213 = 1LL;
	volatile uint16_t x215 = 30278U;
	static volatile int16_t x216 = -9154;
	volatile int64_t t14 = 9268509LL;

	t14 = (x213<<((x214&x215)/x216));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x233 = INT64_MAX;
	volatile uint16_t x234 = 3390U;
	static int64_t x235 = INT64_MAX;
	volatile int64_t t15 = INT64_MAX;

	t15 = (x233<<((x234&x235)/x236));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x237 = 17048197223093LLU;
	static uint32_t x238 = 8315U;
	int16_t x239 = 62;
	static int64_t x240 = INT64_MIN;
	uint64_t t16 = 7232256LLU;

	t16 = (x237<<((x238&x239)/x240));

	if (t16 != 17048197223093LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x241 = 3586382LLU;
	int64_t x242 = 408134LL;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = UINT16_MAX;
	volatile uint64_t t17 = 822LLU;

	t17 = (x241<<((x242&x243)/x244));

	if (t17 != 229528448LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x245 = 398097220032748265LLU;
	uint32_t x246 = 2595196U;
	int32_t x247 = -213197890;
	int32_t x248 = -33433989;

	t18 = (x245<<((x246&x247)/x248));

	if (t18 != 398097220032748265LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x268 = 3U;
	static volatile int64_t t19 = 16623317970760513LL;

	t19 = (x265<<((x266&x267)/x268));

	if (t19 != 7479553005977600LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x269 = 2U;
	int16_t x270 = -11606;
	volatile int8_t x271 = -1;
	int16_t x272 = INT16_MIN;
	static volatile int32_t t20 = 1;

	t20 = (x269<<((x270&x271)/x272));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x277 = INT32_MAX;
	int8_t x278 = 6;
	uint8_t x279 = 56U;

	t21 = (x277<<((x278&x279)/x280));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x281 = 20U;
	int32_t x282 = INT32_MAX;
	uint32_t x284 = UINT32_MAX;
	int32_t t22 = 149133489;

	t22 = (x281<<((x282&x283)/x284));

	if (t22 != 20) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x285 = 540900;
	int16_t x286 = -27;
	static volatile int8_t x287 = INT8_MIN;

	t23 = (x285<<((x286&x287)/x288));

	if (t23 != 540900) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x289 = 40U;
	int32_t x290 = INT32_MIN;
	volatile uint32_t x291 = 3827078U;
	uint16_t x292 = 13U;
	volatile int32_t t24 = -80052;

	t24 = (x289<<((x290&x291)/x292));

	if (t24 != 40) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x297 = INT16_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t25 = 86;

	t25 = (x297<<((x298&x299)/x300));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x310 = 15U;
	uint64_t x311 = 76004547LLU;
	volatile int32_t t26 = INT32_MAX;

	t26 = (x309<<((x310&x311)/x312));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x326 = 101;
	static uint8_t x327 = 2U;
	uint32_t x328 = 15381U;
	static volatile uint32_t t27 = UINT32_MAX;

	t27 = (x325<<((x326&x327)/x328));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x337 = 8361405;
	uint64_t x338 = 3831LLU;
	uint8_t x340 = UINT8_MAX;

	t28 = (x337<<((x338&x339)/x340));

	if (t28 != 8361405) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x341 = 6;
	int64_t x343 = INT64_MIN;
	int64_t x344 = INT64_MIN;
	volatile int32_t t29 = -9142292;

	t29 = (x341<<((x342&x343)/x344));

	if (t29 != 6) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x346 = 0U;
	int8_t x347 = INT8_MIN;
	volatile int32_t t30 = -7930533;

	t30 = (x345<<((x346&x347)/x348));

	if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x366 = INT8_MAX;
	volatile int64_t x368 = INT64_MIN;
	int64_t t31 = INT64_MAX;

	t31 = (x365<<((x366&x367)/x368));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x381 = UINT16_MAX;
	volatile int8_t x382 = -2;
	static int64_t x383 = -1LL;
	int16_t x384 = -59;
	static volatile int32_t t32 = -4;

	t32 = (x381<<((x382&x383)/x384));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x393 = INT32_MAX;
	int8_t x394 = 0;
	int16_t x395 = 1646;
	volatile int32_t x396 = 3254;

	t33 = (x393<<((x394&x395)/x396));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x397 = 0;
	volatile int32_t x398 = 1;
	uint8_t x399 = 1U;
	volatile int8_t x400 = -11;
	volatile int32_t t34 = 486674760;

	t34 = (x397<<((x398&x399)/x400));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x413 = 41;
	volatile int64_t x414 = INT64_MIN;
	uint64_t x415 = 2250967824LLU;
	int8_t x416 = -1;

	t35 = (x413<<((x414&x415)/x416));

	if (t35 != 41) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x417 = UINT64_MAX;
	int32_t x418 = INT32_MIN;
	volatile int32_t x419 = 250;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (x417<<((x418&x419)/x420));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x421 = UINT32_MAX;
	int64_t x422 = INT64_MIN;
	uint8_t x423 = UINT8_MAX;
	int16_t x424 = INT16_MIN;
	uint32_t t37 = UINT32_MAX;

	t37 = (x421<<((x422&x423)/x424));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x450 = 328435669313LLU;
	static int32_t x451 = 0;
	volatile int64_t t38 = 1775884154266018868LL;

	t38 = (x449<<((x450&x451)/x452));

	if (t38 != 7209396616LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x457 = 1U;
	uint64_t x458 = UINT64_MAX;
	uint8_t x459 = 26U;
	static volatile int64_t x460 = -15608523190892778LL;
	static volatile int32_t t39 = -3324518;

	t39 = (x457<<((x458&x459)/x460));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x469 = UINT16_MAX;
	static uint64_t x470 = 90614746440537LLU;
	static int16_t x472 = INT16_MIN;
	int32_t t40 = -9695;

	t40 = (x469<<((x470&x471)/x472));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x474 = UINT64_MAX;
	static uint64_t x475 = 226423032804933LLU;
	static int32_t x476 = -1;
	volatile uint64_t t41 = 962LLU;

	t41 = (x473<<((x474&x475)/x476));

	if (t41 != 428843635LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x485 = 255409;
	int8_t x486 = 0;
	int8_t x487 = INT8_MAX;
	int32_t x488 = INT32_MAX;
	int32_t t42 = 0;

	t42 = (x485<<((x486&x487)/x488));

	if (t42 != 255409) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x493 = UINT16_MAX;
	static int8_t x494 = -1;
	int64_t x495 = -1LL;
	static int32_t x496 = INT32_MIN;
	volatile int32_t t43 = -14;

	t43 = (x493<<((x494&x495)/x496));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x517 = 999LLU;
	uint64_t x519 = UINT64_MAX;
	int32_t x520 = -19726;
	static uint64_t t44 = 68837541050176LLU;

	t44 = (x517<<((x518&x519)/x520));

	if (t44 != 999LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x521 = 0U;
	static volatile uint8_t x522 = UINT8_MAX;
	int8_t x524 = INT8_MIN;

	t45 = (x521<<((x522&x523)/x524));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x533 = 3216042477078924LLU;
	uint32_t x534 = UINT32_MAX;
	volatile uint16_t x535 = 4U;
	static int32_t x536 = INT32_MIN;

	t46 = (x533<<((x534&x535)/x536));

	if (t46 != 3216042477078924LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x537 = INT32_MAX;
	int32_t x538 = -1;
	volatile int32_t x539 = -43;
	volatile int16_t x540 = INT16_MIN;
	volatile int32_t t47 = INT32_MAX;

	t47 = (x537<<((x538&x539)/x540));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x541 = 584U;
	int64_t x542 = 707524628LL;
	uint8_t x543 = UINT8_MAX;

	t48 = (x541<<((x542&x543)/x544));

	if (t48 != 584) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x545 = 48;
	int64_t x546 = -2826034127584019380LL;
	volatile int64_t x547 = INT64_MIN;
	volatile int32_t t49 = 2;

	t49 = (x545<<((x546&x547)/x548));

	if (t49 != 48) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x553 = 108U;
	uint8_t x554 = 2U;
	volatile int32_t x555 = INT32_MIN;
	int32_t x556 = 930;
	int32_t t50 = -516881093;

	t50 = (x553<<((x554&x555)/x556));

	if (t50 != 108) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x561 = UINT8_MAX;
	static int8_t x563 = INT8_MAX;
	uint8_t x564 = 6U;
	int32_t t51 = -91596;

	t51 = (x561<<((x562&x563)/x564));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x565 = INT16_MAX;
	uint8_t x566 = UINT8_MAX;
	uint32_t x567 = UINT32_MAX;
	uint8_t x568 = UINT8_MAX;
	volatile int32_t t52 = 161;

	t52 = (x565<<((x566&x567)/x568));

	if (t52 != 65534) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x570 = 6U;
	uint32_t x571 = 2881U;
	uint8_t x572 = 23U;
	int32_t t53 = 152604310;

	t53 = (x569<<((x570&x571)/x572));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x573 = UINT64_MAX;
	static uint16_t x574 = UINT16_MAX;
	uint16_t x575 = UINT16_MAX;
	static volatile uint16_t x576 = UINT16_MAX;
	volatile uint64_t t54 = 95470199407999348LLU;

	t54 = (x573<<((x574&x575)/x576));

	if (t54 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x577 = INT64_MAX;
	uint64_t x578 = 594418LLU;
	uint16_t x579 = 7487U;
	static uint16_t x580 = UINT16_MAX;
	static int64_t t55 = INT64_MAX;

	t55 = (x577<<((x578&x579)/x580));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x606 = 6;
	volatile int8_t x607 = INT8_MIN;
	uint32_t x608 = 50U;

	t56 = (x605<<((x606&x607)/x608));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x609 = 7415674566863LL;
	static int32_t x610 = INT32_MIN;
	int32_t x611 = INT32_MAX;
	volatile uint64_t x612 = 1688301006230LLU;
	int64_t t57 = 229853404801LL;

	t57 = (x609<<((x610&x611)/x612));

	if (t57 != 7415674566863LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x617 = 15U;
	uint8_t x618 = 40U;
	volatile uint32_t x619 = UINT32_MAX;
	static volatile uint64_t x620 = 325797491274689LLU;
	static volatile int32_t t58 = 2904;

	t58 = (x617<<((x618&x619)/x620));

	if (t58 != 15) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x623 = INT8_MAX;
	volatile int32_t t59 = -5;

	t59 = (x621<<((x622&x623)/x624));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x629 = UINT8_MAX;
	volatile int64_t x630 = INT64_MIN;
	int64_t x631 = INT64_MAX;
	volatile int64_t x632 = INT64_MAX;
	volatile int32_t t60 = -1175;

	t60 = (x629<<((x630&x631)/x632));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x637 = 14;
	uint8_t x638 = 3U;
	uint64_t x639 = 2323787313997837658LLU;

	t61 = (x637<<((x638&x639)/x640));

	if (t61 != 14) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x669 = 4172804;
	uint32_t x670 = 243U;
	static volatile int8_t x671 = INT8_MIN;
	int8_t x672 = INT8_MAX;
	volatile int32_t t62 = -72;

	t62 = (x669<<((x670&x671)/x672));

	if (t62 != 8345608) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x673 = 12U;
	int16_t x674 = 28;
	int8_t x676 = INT8_MIN;
	int32_t t63 = -2817926;

	t63 = (x673<<((x674&x675)/x676));

	if (t63 != 12) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x686 = 69890U;
	int8_t x687 = INT8_MIN;
	volatile int32_t t64 = 233122;

	t64 = (x685<<((x686&x687)/x688));

	if (t64 != 65534) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x689 = 1396336553919381190LLU;
	volatile int8_t x690 = 5;
	int16_t x691 = 11;
	int8_t x692 = INT8_MAX;
	volatile uint64_t t65 = 6504933020LLU;

	t65 = (x689<<((x690&x691)/x692));

	if (t65 != 1396336553919381190LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x693 = 1;
	uint16_t x694 = UINT16_MAX;
	int32_t x695 = 899196;
	volatile uint32_t x696 = 18759926U;
	volatile int32_t t66 = 2;

	t66 = (x693<<((x694&x695)/x696));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x698 = INT64_MIN;
	int32_t t67 = 229240370;

	t67 = (x697<<((x698&x699)/x700));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x705 = UINT8_MAX;
	volatile int32_t x706 = INT32_MIN;
	static int8_t x707 = INT8_MAX;
	int16_t x708 = INT16_MAX;
	static volatile int32_t t68 = 44;

	t68 = (x705<<((x706&x707)/x708));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x709 = INT8_MAX;
	int32_t x710 = INT32_MAX;
	volatile int8_t x711 = INT8_MAX;
	uint32_t x712 = 672290075U;
	volatile int32_t t69 = 1653;

	t69 = (x709<<((x710&x711)/x712));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x713 = 0U;
	static uint64_t x714 = UINT64_MAX;
	int32_t x715 = INT32_MIN;
	static int32_t t70 = -945000927;

	t70 = (x713<<((x714&x715)/x716));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x734 = 0U;
	static uint64_t x736 = 1978555LLU;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = (x733<<((x734&x735)/x736));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x786 = 839U;
	int16_t x787 = INT16_MIN;
	int16_t x788 = -1;

	t72 = (x785<<((x786&x787)/x788));

	if (t72 != 4818790U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x790 = -1;
	int16_t x791 = -1;
	int32_t x792 = 873381793;

	t73 = (x789<<((x790&x791)/x792));

	if (t73 != 85876734LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x798 = 13172;
	uint8_t x799 = UINT8_MAX;
	int64_t x800 = INT64_MAX;
	volatile uint32_t t74 = 21506U;

	t74 = (x797<<((x798&x799)/x800));

	if (t74 != 8092U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x801 = 1394U;
	static int8_t x802 = -1;
	int8_t x804 = -1;
	volatile int32_t t75 = 224;

	t75 = (x801<<((x802&x803)/x804));

	if (t75 != 1394) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x809 = 29U;
	static int16_t x810 = INT16_MIN;
	int16_t x811 = INT16_MIN;
	int64_t x812 = 98750926LL;
	int32_t t76 = -26967214;

	t76 = (x809<<((x810&x811)/x812));

	if (t76 != 29) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x813 = 1157U;
	volatile uint64_t x814 = 2670404486208148254LLU;
	int16_t x816 = -18;
	static volatile int32_t t77 = -114;

	t77 = (x813<<((x814&x815)/x816));

	if (t77 != 1157) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x829 = 2173725332219LLU;
	uint64_t x830 = 2LLU;
	static uint64_t t78 = 1237768LLU;

	t78 = (x829<<((x830&x831)/x832));

	if (t78 != 2173725332219LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x838 = INT64_MIN;
	uint32_t x839 = UINT32_MAX;
	uint64_t x840 = 64820955LLU;
	uint64_t t79 = 0LLU;

	t79 = (x837<<((x838&x839)/x840));

	if (t79 != 8LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x845 = UINT16_MAX;
	uint8_t x847 = UINT8_MAX;
	uint64_t x848 = 9292999467LLU;
	volatile int32_t t80 = 1;

	t80 = (x845<<((x846&x847)/x848));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x849 = UINT16_MAX;
	volatile uint8_t x851 = 41U;
	static volatile int32_t x852 = 22520;
	volatile int32_t t81 = 59967916;

	t81 = (x849<<((x850&x851)/x852));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x861 = UINT8_MAX;
	int32_t x862 = -1;
	volatile int16_t x863 = 0;
	int16_t x864 = INT16_MIN;
	volatile int32_t t82 = -119332;

	t82 = (x861<<((x862&x863)/x864));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x865 = 18658140007449561LLU;
	int8_t x866 = 14;
	uint64_t x867 = 650LLU;
	static int32_t x868 = 149;
	volatile uint64_t t83 = 7905831658158974LLU;

	t83 = (x865<<((x866&x867)/x868));

	if (t83 != 18658140007449561LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x885 = UINT64_MAX;
	int16_t x886 = INT16_MIN;
	uint64_t x888 = UINT64_MAX;
	uint64_t t84 = UINT64_MAX;

	t84 = (x885<<((x886&x887)/x888));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x917 = 150432LLU;
	volatile int32_t x918 = 144888751;
	uint32_t x919 = UINT32_MAX;
	int8_t x920 = -1;

	t85 = (x917<<((x918&x919)/x920));

	if (t85 != 150432LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x925 = UINT16_MAX;
	int8_t x926 = INT8_MIN;
	static int8_t x927 = -1;
	int16_t x928 = INT16_MAX;
	static int32_t t86 = 1230891;

	t86 = (x925<<((x926&x927)/x928));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x929 = UINT64_MAX;
	uint8_t x930 = UINT8_MAX;
	uint64_t t87 = UINT64_MAX;

	t87 = (x929<<((x930&x931)/x932));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x949 = 4626LLU;
	static uint16_t x950 = 245U;
	uint64_t x951 = UINT64_MAX;
	static uint8_t x952 = UINT8_MAX;
	volatile uint64_t t88 = 24963143363630LLU;

	t88 = (x949<<((x950&x951)/x952));

	if (t88 != 4626LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x993 = 150730LLU;
	static int32_t x994 = INT32_MIN;
	int8_t x995 = -1;
	static int32_t x996 = -363966538;
	volatile uint64_t t89 = 1LLU;

	t89 = (x993<<((x994&x995)/x996));

	if (t89 != 4823360LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x1009 = UINT64_MAX;
	volatile int64_t x1010 = INT64_MIN;
	volatile int64_t x1011 = INT64_MAX;
	static uint64_t t90 = UINT64_MAX;

	t90 = (x1009<<((x1010&x1011)/x1012));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1019 = INT16_MIN;
	int64_t x1020 = INT64_MIN;
	uint32_t t91 = UINT32_MAX;

	t91 = (x1017<<((x1018&x1019)/x1020));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x1025 = INT8_MAX;
	static int32_t x1028 = 2362;
	volatile int32_t t92 = 2951078;

	t92 = (x1025<<((x1026&x1027)/x1028));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x1037 = INT32_MAX;
	static uint32_t x1038 = 1078996U;
	volatile int16_t x1039 = -612;
	volatile int32_t x1040 = INT32_MAX;
	volatile int32_t t93 = INT32_MAX;

	t93 = (x1037<<((x1038&x1039)/x1040));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1041 = 6;
	int32_t t94 = -2;

	t94 = (x1041<<((x1042&x1043)/x1044));

	if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x1069 = 109;
	volatile uint64_t x1070 = UINT64_MAX;
	static int32_t x1071 = -1;
	int16_t x1072 = -1406;

	t95 = (x1069<<((x1070&x1071)/x1072));

	if (t95 != 218) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x1073 = 2U;
	static int32_t x1076 = 180761;
	volatile int32_t t96 = -352911;

	t96 = (x1073<<((x1074&x1075)/x1076));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x1081 = INT32_MAX;
	static uint8_t x1082 = 2U;
	int64_t x1084 = INT64_MIN;
	int32_t t97 = INT32_MAX;

	t97 = (x1081<<((x1082&x1083)/x1084));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x1089 = 1;
	static uint16_t x1090 = 0U;
	uint64_t x1092 = UINT64_MAX;
	int32_t t98 = 16239558;

	t98 = (x1089<<((x1090&x1091)/x1092));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x1094 = -1;
	int32_t t99 = -73220041;

	t99 = (x1093<<((x1094&x1095)/x1096));

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

