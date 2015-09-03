#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = -2;
int64_t x4 = -31582774157LL;
uint64_t x33 = UINT64_MAX;
uint64_t x34 = 1016715301669632LLU;
uint8_t x61 = 45U;
static uint16_t x71 = 11U;
static uint16_t x83 = UINT16_MAX;
uint32_t x84 = UINT32_MAX;
volatile int64_t t10 = -524161154LL;
volatile int64_t x129 = INT64_MIN;
static uint16_t x141 = 3070U;
int64_t x143 = INT64_MAX;
volatile int8_t x149 = INT8_MAX;
volatile uint32_t x173 = 69U;
int64_t x200 = -1LL;
int64_t t21 = -62642LL;
int32_t t22 = -43884919;
int32_t x205 = INT32_MAX;
static int8_t x208 = 17;
volatile int64_t x209 = INT64_MIN;
volatile int8_t x210 = INT8_MIN;
uint64_t t25 = 970927924924LLU;
volatile int8_t x268 = INT8_MAX;
uint32_t x297 = 3U;
static int64_t x313 = 230482LL;
int16_t x324 = INT16_MAX;
uint32_t x382 = UINT32_MAX;
int16_t x384 = INT16_MAX;
static int32_t t33 = 1;
static int32_t x406 = INT32_MIN;
int8_t x452 = -1;
int64_t t38 = -25018924LL;
uint8_t x470 = 3U;
int64_t x474 = -35153527469LL;
static int32_t x495 = INT32_MAX;
static uint64_t t42 = 36454948172LLU;
volatile uint64_t x536 = UINT64_MAX;
uint32_t t46 = 42U;
static int8_t x553 = -1;
int32_t x569 = 0;
int8_t x570 = -57;
volatile uint8_t x572 = 7U;
int32_t x594 = INT32_MIN;
static volatile int16_t x617 = 1;
volatile uint8_t x631 = UINT8_MAX;
uint32_t x642 = UINT32_MAX;
int8_t x673 = -1;
volatile uint64_t t56 = 7275825LLU;
int32_t x726 = INT32_MIN;
int8_t x729 = INT8_MIN;
int8_t x732 = 1;
volatile int8_t x773 = -1;
uint64_t x774 = 4LLU;
int16_t x775 = INT16_MIN;
uint32_t x776 = 555711U;
volatile uint32_t t61 = 126967U;
int8_t x788 = 15;
int16_t x876 = INT16_MAX;
int32_t x900 = INT32_MAX;
uint16_t x903 = 486U;
int64_t x904 = INT64_MAX;
volatile uint8_t x905 = UINT8_MAX;
static int32_t t69 = 14671;
int32_t x912 = -1;
int32_t t71 = -6084280;
volatile uint8_t x924 = 13U;
static uint8_t x926 = UINT8_MAX;
int16_t x952 = -59;
static int32_t t74 = -30419;
volatile int32_t t78 = -15030;
int8_t x1113 = INT8_MAX;
static int32_t x1114 = -1;
static int16_t x1116 = -1;
int16_t x1127 = INT16_MIN;
static volatile int32_t t83 = -5;
uint32_t x1138 = UINT32_MAX;
uint16_t x1179 = 13708U;
volatile int16_t x1185 = -1;
int32_t x1187 = 12102;
int32_t x1198 = 1;
volatile uint64_t x1199 = 96069351573LLU;
int32_t t87 = 71245;
uint16_t x1211 = UINT16_MAX;
uint64_t x1250 = 79559462LLU;
int64_t x1251 = -5403LL;
volatile int32_t x1253 = INT32_MIN;
uint16_t x1255 = UINT16_MAX;
volatile int8_t x1292 = -5;
volatile int64_t t95 = -33LL;
static int8_t x1305 = INT8_MAX;
static int16_t x1319 = 3265;
volatile uint16_t x1398 = 515U;
uint16_t x1399 = UINT16_MAX;
uint8_t x1403 = 11U;


void f0(void) {
	uint32_t x1 = 4469U;
	volatile int32_t x3 = 220093;
	volatile int64_t t0 = 167806984584LL;

	t0 = (x1%((x2<=x3)&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x25 = INT64_MIN;
	int8_t x26 = -1;
	volatile uint32_t x27 = UINT32_MAX;
	int16_t x28 = -1591;
	int64_t t1 = 31655363981LL;

	t1 = (x25%((x26<=x27)&x28));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x35 = -1LL;
	int16_t x36 = -1;
	static uint64_t t2 = 9725196982524334LLU;

	t2 = (x33%((x34<=x35)&x36));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x37 = UINT32_MAX;
	uint64_t x38 = 52538LLU;
	int64_t x39 = INT64_MAX;
	uint8_t x40 = UINT8_MAX;
	static uint32_t t3 = 201158U;

	t3 = (x37%((x38<=x39)&x40));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x62 = 1LLU;
	int32_t x63 = 10;
	int64_t x64 = -8325680207LL;
	volatile int64_t t4 = 184LL;

	t4 = (x61%((x62<=x63)&x64));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x69 = INT32_MAX;
	int8_t x70 = INT8_MIN;
	int16_t x72 = INT16_MAX;
	int32_t t5 = 4;

	t5 = (x69%((x70<=x71)&x72));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x73 = -959819;
	int16_t x74 = INT16_MIN;
	int16_t x75 = INT16_MAX;
	volatile uint32_t x76 = UINT32_MAX;
	volatile uint32_t t6 = 749U;

	t6 = (x73%((x74<=x75)&x76));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x77 = INT32_MAX;
	int16_t x78 = -1;
	int16_t x79 = INT16_MAX;
	static int64_t x80 = -49093819LL;
	volatile int64_t t7 = 580997001731LL;

	t7 = (x77%((x78<=x79)&x80));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x81 = INT8_MIN;
	static int8_t x82 = INT8_MAX;
	volatile uint32_t t8 = 15223659U;

	t8 = (x81%((x82<=x83)&x84));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x89 = -11407479LL;
	uint64_t x90 = 109822612974592LLU;
	static int32_t x91 = -679822;
	volatile uint32_t x92 = UINT32_MAX;
	volatile int64_t t9 = 301523957LL;

	t9 = (x89%((x90<=x91)&x92));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x93 = INT64_MIN;
	uint16_t x94 = 356U;
	volatile uint16_t x95 = UINT16_MAX;
	int16_t x96 = -917;

	t10 = (x93%((x94<=x95)&x96));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x97 = 5U;
	int8_t x98 = INT8_MIN;
	static volatile int16_t x99 = INT16_MAX;
	uint8_t x100 = 1U;
	volatile int32_t t11 = -172945965;

	t11 = (x97%((x98<=x99)&x100));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x101 = 145825709093894LLU;
	uint8_t x102 = 5U;
	uint32_t x103 = 46052207U;
	volatile uint8_t x104 = UINT8_MAX;
	static uint64_t t12 = 655272LLU;

	t12 = (x101%((x102<=x103)&x104));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x109 = INT32_MIN;
	uint8_t x110 = UINT8_MAX;
	uint64_t x111 = 4937383LLU;
	uint32_t x112 = 222031U;
	volatile uint32_t t13 = 105U;

	t13 = (x109%((x110<=x111)&x112));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x117 = -1;
	int8_t x118 = -14;
	static volatile uint8_t x119 = 28U;
	static int16_t x120 = INT16_MAX;
	int32_t t14 = -154662;

	t14 = (x117%((x118<=x119)&x120));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x125 = INT8_MIN;
	volatile uint8_t x126 = UINT8_MAX;
	uint16_t x127 = UINT16_MAX;
	uint32_t x128 = UINT32_MAX;
	volatile uint32_t t15 = 14390U;

	t15 = (x125%((x126<=x127)&x128));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x130 = -144959;
	uint8_t x131 = 10U;
	int8_t x132 = INT8_MAX;
	static int64_t t16 = -239266483LL;

	t16 = (x129%((x130<=x131)&x132));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x142 = INT32_MIN;
	int16_t x144 = -1;
	volatile int32_t t17 = -349213591;

	t17 = (x141%((x142<=x143)&x144));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x150 = INT16_MIN;
	int64_t x151 = -1LL;
	int16_t x152 = -1;
	static volatile int32_t t18 = -159;

	t18 = (x149%((x150<=x151)&x152));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x157 = INT8_MIN;
	volatile uint16_t x158 = 1U;
	uint16_t x159 = 1772U;
	volatile uint8_t x160 = UINT8_MAX;
	int32_t t19 = 0;

	t19 = (x157%((x158<=x159)&x160));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x174 = INT64_MIN;
	int16_t x175 = 2639;
	int32_t x176 = INT32_MAX;
	static volatile uint32_t t20 = 39110906U;

	t20 = (x173%((x174<=x175)&x176));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x197 = -3;
	uint16_t x198 = UINT16_MAX;
	int64_t x199 = INT64_MAX;

	t21 = (x197%((x198<=x199)&x200));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x201 = INT8_MAX;
	int8_t x202 = 1;
	int8_t x203 = INT8_MAX;
	int16_t x204 = -1;

	t22 = (x201%((x202<=x203)&x204));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x206 = -13364383723LL;
	volatile int8_t x207 = INT8_MIN;
	static int32_t t23 = -536;

	t23 = (x205%((x206<=x207)&x208));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x211 = 9U;
	int16_t x212 = INT16_MAX;
	volatile int64_t t24 = -11429437LL;

	t24 = (x209%((x210<=x211)&x212));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x217 = 3137199541LLU;
	static int8_t x218 = INT8_MIN;
	volatile int64_t x219 = 2305096744221LL;
	int64_t x220 = INT64_MAX;

	t25 = (x217%((x218<=x219)&x220));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x249 = -1;
	uint32_t x250 = 70995172U;
	volatile int16_t x251 = -1;
	int16_t x252 = -1023;
	volatile int32_t t26 = 4103266;

	t26 = (x249%((x250<=x251)&x252));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x265 = INT8_MIN;
	int32_t x266 = -1;
	int64_t x267 = INT64_MAX;
	int32_t t27 = 1043;

	t27 = (x265%((x266<=x267)&x268));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x285 = INT8_MAX;
	static int64_t x286 = INT64_MAX;
	volatile int64_t x287 = INT64_MAX;
	int16_t x288 = -1;
	static volatile int32_t t28 = -374371;

	t28 = (x285%((x286<=x287)&x288));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x298 = INT32_MIN;
	volatile uint16_t x299 = 13779U;
	volatile int32_t x300 = -62191;
	uint32_t t29 = 0U;

	t29 = (x297%((x298<=x299)&x300));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x314 = 0;
	uint64_t x315 = 14248672869LLU;
	int32_t x316 = -1;
	volatile int64_t t30 = -904022112855LL;

	t30 = (x313%((x314<=x315)&x316));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x321 = INT16_MIN;
	static volatile uint8_t x322 = 115U;
	int64_t x323 = INT64_MAX;
	int32_t t31 = 913260;

	t31 = (x321%((x322<=x323)&x324));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x381 = 82U;
	int32_t x383 = -1;
	uint32_t t32 = 16956092U;

	t32 = (x381%((x382<=x383)&x384));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x397 = -3;
	uint8_t x398 = 0U;
	volatile uint32_t x399 = UINT32_MAX;
	static volatile int32_t x400 = -1;

	t33 = (x397%((x398<=x399)&x400));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x405 = 212U;
	int16_t x407 = 26;
	int8_t x408 = -1;
	static volatile int32_t t34 = -1;

	t34 = (x405%((x406<=x407)&x408));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x413 = UINT64_MAX;
	uint32_t x414 = 1147034U;
	int32_t x415 = -2041504;
	int64_t x416 = 3143065944827207LL;
	static volatile uint64_t t35 = 1708LLU;

	t35 = (x413%((x414<=x415)&x416));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x421 = INT16_MIN;
	volatile int8_t x422 = -1;
	uint8_t x423 = 121U;
	int16_t x424 = -1;
	int32_t t36 = -226067;

	t36 = (x421%((x422<=x423)&x424));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x449 = INT64_MIN;
	int64_t x450 = INT64_MIN;
	static int8_t x451 = INT8_MIN;
	volatile int64_t t37 = 14018LL;

	t37 = (x449%((x450<=x451)&x452));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x465 = 916227964859692670LL;
	int16_t x466 = -1;
	uint8_t x467 = UINT8_MAX;
	static int64_t x468 = -15LL;

	t38 = (x465%((x466<=x467)&x468));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x469 = 63U;
	uint8_t x471 = 3U;
	int16_t x472 = INT16_MAX;
	static int32_t t39 = 14127;

	t39 = (x469%((x470<=x471)&x472));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x473 = -109;
	int16_t x475 = INT16_MIN;
	volatile int32_t x476 = -35709235;
	int32_t t40 = 12953;

	t40 = (x473%((x474<=x475)&x476));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x493 = 1382LL;
	static int16_t x494 = INT16_MIN;
	int64_t x496 = 13199791145731LL;
	static int64_t t41 = -7LL;

	t41 = (x493%((x494<=x495)&x496));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x501 = INT64_MAX;
	volatile uint16_t x502 = 15136U;
	volatile uint32_t x503 = 4972806U;
	uint64_t x504 = 249LLU;

	t42 = (x501%((x502<=x503)&x504));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x529 = INT32_MAX;
	static int64_t x530 = -104793932507LL;
	uint64_t x531 = UINT64_MAX;
	volatile int16_t x532 = INT16_MAX;
	volatile int32_t t43 = 117046009;

	t43 = (x529%((x530<=x531)&x532));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x533 = -1;
	uint8_t x534 = 15U;
	volatile uint32_t x535 = UINT32_MAX;
	volatile uint64_t t44 = 4420517261083010LLU;

	t44 = (x533%((x534<=x535)&x536));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x537 = UINT16_MAX;
	int16_t x538 = -1;
	static uint8_t x539 = 9U;
	int8_t x540 = -1;
	volatile int32_t t45 = -109568;

	t45 = (x537%((x538<=x539)&x540));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x549 = 965046039U;
	static volatile uint32_t x550 = 311U;
	int64_t x551 = INT64_MAX;
	int16_t x552 = 19;

	t46 = (x549%((x550<=x551)&x552));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x554 = INT32_MIN;
	int64_t x555 = INT64_MAX;
	volatile int64_t x556 = -1LL;
	volatile int64_t t47 = 57407LL;

	t47 = (x553%((x554<=x555)&x556));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x571 = 41U;
	int32_t t48 = 10433598;

	t48 = (x569%((x570<=x571)&x572));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x581 = -1;
	static volatile int64_t x582 = 390LL;
	int32_t x583 = INT32_MAX;
	static int16_t x584 = -1435;
	int32_t t49 = -2428216;

	t49 = (x581%((x582<=x583)&x584));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x593 = INT32_MAX;
	uint64_t x595 = UINT64_MAX;
	static int8_t x596 = -1;
	volatile int32_t t50 = 27449242;

	t50 = (x593%((x594<=x595)&x596));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x609 = -5;
	int64_t x610 = INT64_MIN;
	uint16_t x611 = 9U;
	int32_t x612 = INT32_MAX;
	int32_t t51 = -1500511;

	t51 = (x609%((x610<=x611)&x612));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x618 = 0;
	int16_t x619 = INT16_MAX;
	int16_t x620 = 335;
	static volatile int32_t t52 = 2;

	t52 = (x617%((x618<=x619)&x620));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x629 = INT8_MAX;
	uint8_t x630 = UINT8_MAX;
	int32_t x632 = INT32_MAX;
	static int32_t t53 = -3370;

	t53 = (x629%((x630<=x631)&x632));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x641 = -1;
	static volatile int16_t x643 = -1;
	volatile int8_t x644 = INT8_MAX;
	static volatile int32_t t54 = 1;

	t54 = (x641%((x642<=x643)&x644));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x653 = UINT32_MAX;
	static int8_t x654 = -1;
	static int32_t x655 = -1;
	static int16_t x656 = INT16_MAX;
	uint32_t t55 = 1619152U;

	t55 = (x653%((x654<=x655)&x656));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x674 = 80376U;
	int8_t x675 = -1;
	static uint64_t x676 = UINT64_MAX;

	t56 = (x673%((x674<=x675)&x676));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x701 = 1U;
	int16_t x702 = INT16_MIN;
	static int32_t x703 = -512;
	static volatile int64_t x704 = -1LL;
	int64_t t57 = -1163749LL;

	t57 = (x701%((x702<=x703)&x704));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x725 = 13U;
	static uint8_t x727 = 0U;
	int32_t x728 = INT32_MAX;
	static volatile int32_t t58 = -7352;

	t58 = (x725%((x726<=x727)&x728));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x730 = -1LL;
	uint32_t x731 = 359631531U;
	volatile int32_t t59 = 1104210;

	t59 = (x729%((x730<=x731)&x732));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x733 = -60;
	int16_t x734 = -1;
	int32_t x735 = INT32_MAX;
	int32_t x736 = INT32_MAX;
	volatile int32_t t60 = 645985076;

	t60 = (x733%((x734<=x735)&x736));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {


	t61 = (x773%((x774<=x775)&x776));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x785 = 29888;
	static int32_t x786 = -10205793;
	static volatile int8_t x787 = INT8_MAX;
	int32_t t62 = 55330;

	t62 = (x785%((x786<=x787)&x788));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x813 = -1;
	int8_t x814 = -1;
	uint64_t x815 = UINT64_MAX;
	int16_t x816 = -223;
	volatile int32_t t63 = 36;

	t63 = (x813%((x814<=x815)&x816));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x825 = INT64_MIN;
	volatile int64_t x826 = INT64_MIN;
	static uint8_t x827 = 1U;
	uint64_t x828 = UINT64_MAX;
	volatile uint64_t t64 = 1436051LLU;

	t64 = (x825%((x826<=x827)&x828));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x865 = UINT32_MAX;
	static int16_t x866 = INT16_MIN;
	volatile uint8_t x867 = 53U;
	int16_t x868 = -17;
	volatile uint32_t t65 = 1329507238U;

	t65 = (x865%((x866<=x867)&x868));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x873 = -1;
	int64_t x874 = INT64_MAX;
	static int64_t x875 = INT64_MAX;
	volatile int32_t t66 = 3140697;

	t66 = (x873%((x874<=x875)&x876));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x897 = 13LLU;
	static int32_t x898 = INT32_MIN;
	int32_t x899 = 95903988;
	uint64_t t67 = 86555074313079LLU;

	t67 = (x897%((x898<=x899)&x900));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x901 = 2064734U;
	int32_t x902 = INT32_MIN;
	int64_t t68 = -198930560715230LL;

	t68 = (x901%((x902<=x903)&x904));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x906 = INT8_MAX;
	static int64_t x907 = INT64_MAX;
	static int8_t x908 = -1;

	t69 = (x905%((x906<=x907)&x908));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x909 = 1;
	uint8_t x910 = 33U;
	int16_t x911 = 892;
	static int32_t t70 = 69;

	t70 = (x909%((x910<=x911)&x912));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x913 = 727U;
	volatile int16_t x914 = INT16_MIN;
	uint16_t x915 = 30861U;
	static int8_t x916 = INT8_MAX;

	t71 = (x913%((x914<=x915)&x916));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x921 = INT32_MIN;
	int8_t x922 = INT8_MIN;
	volatile int64_t x923 = INT64_MAX;
	volatile int32_t t72 = -1039232880;

	t72 = (x921%((x922<=x923)&x924));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x925 = INT8_MIN;
	int32_t x927 = INT32_MAX;
	static int16_t x928 = -941;
	int32_t t73 = -2444470;

	t73 = (x925%((x926<=x927)&x928));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x949 = INT8_MIN;
	volatile int32_t x950 = -80;
	int32_t x951 = INT32_MAX;

	t74 = (x949%((x950<=x951)&x952));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x953 = 318391U;
	int16_t x954 = INT16_MIN;
	int64_t x955 = -1LL;
	int64_t x956 = 13LL;
	static volatile int64_t t75 = 730138247320LL;

	t75 = (x953%((x954<=x955)&x956));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1005 = -240;
	uint8_t x1006 = 34U;
	static uint16_t x1007 = 76U;
	int16_t x1008 = -1;
	volatile int32_t t76 = 267025712;

	t76 = (x1005%((x1006<=x1007)&x1008));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x1021 = -36;
	static int16_t x1022 = INT16_MIN;
	uint32_t x1023 = UINT32_MAX;
	uint32_t x1024 = UINT32_MAX;
	static uint32_t t77 = 50988U;

	t77 = (x1021%((x1022<=x1023)&x1024));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x1037 = INT8_MAX;
	uint16_t x1038 = UINT16_MAX;
	uint16_t x1039 = UINT16_MAX;
	int8_t x1040 = -1;

	t78 = (x1037%((x1038<=x1039)&x1040));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x1061 = 25017236029517LL;
	int64_t x1062 = INT64_MIN;
	uint16_t x1063 = UINT16_MAX;
	uint32_t x1064 = 206055911U;
	static int64_t t79 = -220124190251671LL;

	t79 = (x1061%((x1062<=x1063)&x1064));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x1073 = 81U;
	uint8_t x1074 = 0U;
	int64_t x1075 = 5367922751672071LL;
	int32_t x1076 = -1;
	uint32_t t80 = 17276U;

	t80 = (x1073%((x1074<=x1075)&x1076));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x1115 = -1LL;
	volatile int32_t t81 = 444863;

	t81 = (x1113%((x1114<=x1115)&x1116));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x1125 = -1;
	uint64_t x1126 = 7272LLU;
	static int8_t x1128 = INT8_MAX;
	int32_t t82 = 0;

	t82 = (x1125%((x1126<=x1127)&x1128));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x1133 = INT32_MAX;
	int16_t x1134 = INT16_MIN;
	static int8_t x1135 = INT8_MIN;
	static int8_t x1136 = INT8_MAX;

	t83 = (x1133%((x1134<=x1135)&x1136));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1137 = -54;
	static volatile int64_t x1139 = INT64_MAX;
	uint16_t x1140 = UINT16_MAX;
	int32_t t84 = 1553838;

	t84 = (x1137%((x1138<=x1139)&x1140));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x1177 = INT8_MIN;
	int64_t x1178 = -14764029796495LL;
	int64_t x1180 = -1LL;
	volatile int64_t t85 = 2LL;

	t85 = (x1177%((x1178<=x1179)&x1180));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1186 = -1;
	uint64_t x1188 = 1245LLU;
	static uint64_t t86 = 1LLU;

	t86 = (x1185%((x1186<=x1187)&x1188));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1197 = INT16_MAX;
	uint8_t x1200 = 1U;

	t87 = (x1197%((x1198<=x1199)&x1200));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1209 = UINT32_MAX;
	uint32_t x1210 = 84U;
	static int32_t x1212 = -1;
	uint32_t t88 = 6U;

	t88 = (x1209%((x1210<=x1211)&x1212));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x1237 = INT8_MIN;
	int64_t x1238 = -2952561246592167945LL;
	int16_t x1239 = INT16_MIN;
	uint32_t x1240 = UINT32_MAX;
	uint32_t t89 = 85943U;

	t89 = (x1237%((x1238<=x1239)&x1240));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x1241 = -1;
	int32_t x1242 = 11629;
	uint64_t x1243 = UINT64_MAX;
	uint32_t x1244 = UINT32_MAX;
	static uint32_t t90 = 838094228U;

	t90 = (x1241%((x1242<=x1243)&x1244));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x1249 = -37;
	uint16_t x1252 = UINT16_MAX;
	static int32_t t91 = -1;

	t91 = (x1249%((x1250<=x1251)&x1252));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x1254 = 1U;
	static int16_t x1256 = -1;
	volatile int32_t t92 = -107;

	t92 = (x1253%((x1254<=x1255)&x1256));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1261 = -31;
	int8_t x1262 = 0;
	uint16_t x1263 = 9U;
	uint16_t x1264 = 11961U;
	static int32_t t93 = -49591122;

	t93 = (x1261%((x1262<=x1263)&x1264));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x1265 = INT8_MIN;
	volatile uint8_t x1266 = 99U;
	volatile uint64_t x1267 = UINT64_MAX;
	uint64_t x1268 = UINT64_MAX;
	volatile uint64_t t94 = 702LLU;

	t94 = (x1265%((x1266<=x1267)&x1268));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x1289 = INT64_MIN;
	uint16_t x1290 = 754U;
	static int64_t x1291 = INT64_MAX;

	t95 = (x1289%((x1290<=x1291)&x1292));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x1306 = 13411859U;
	int64_t x1307 = 39562931LL;
	static int16_t x1308 = -109;
	volatile int32_t t96 = -430227;

	t96 = (x1305%((x1306<=x1307)&x1308));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x1317 = INT16_MIN;
	int8_t x1318 = INT8_MAX;
	int8_t x1320 = -1;
	volatile int32_t t97 = 3723321;

	t97 = (x1317%((x1318<=x1319)&x1320));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x1397 = 31U;
	volatile int16_t x1400 = -1;
	static volatile int32_t t98 = 106;

	t98 = (x1397%((x1398<=x1399)&x1400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x1401 = 0U;
	int32_t x1402 = -1;
	static uint64_t x1404 = UINT64_MAX;
	uint64_t t99 = 10LLU;

	t99 = (x1401%((x1402<=x1403)&x1404));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

