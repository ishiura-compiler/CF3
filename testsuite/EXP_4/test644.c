#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = INT16_MAX;
int16_t x6 = INT16_MAX;
volatile uint8_t x13 = 4U;
int32_t t1 = 588898;
int64_t x48 = 1106197297647741LL;
volatile uint32_t t4 = UINT32_MAX;
uint8_t x61 = 11U;
int32_t x72 = 8015713;
int8_t x87 = INT8_MAX;
static int32_t t7 = -3;
uint8_t x108 = 45U;
int64_t x116 = -1LL;
static uint64_t t9 = 6510413LLU;
volatile int32_t x118 = 5114;
uint32_t x120 = 12199422U;
static uint32_t x123 = UINT32_MAX;
volatile uint64_t x126 = 897834LLU;
uint32_t x127 = 528U;
volatile uint64_t x167 = 2349359582180LLU;
int8_t x179 = 4;
volatile uint64_t t17 = UINT64_MAX;
int32_t x193 = INT32_MAX;
int32_t x196 = INT32_MIN;
volatile int64_t x237 = 698692733496399LL;
int16_t x266 = INT16_MAX;
volatile int64_t x267 = 0LL;
uint32_t x275 = 4127016U;
int64_t x284 = INT64_MAX;
int32_t x293 = 52;
int64_t x294 = -12957LL;
int32_t t28 = 1435112;
volatile int8_t x344 = -1;
uint16_t x377 = 0U;
volatile int32_t t33 = 45276;
uint32_t x391 = 12048U;
static volatile uint64_t x413 = 34668089LLU;
volatile uint32_t x414 = 53899729U;
uint64_t x416 = 7498112741618676463LLU;
uint64_t t35 = 6779263812LLU;
uint64_t x431 = 28628466350082LLU;
uint32_t x434 = 0U;
int32_t t37 = 6409;
int64_t x451 = -228751633123466LL;
int32_t x459 = INT32_MAX;
int8_t x461 = 2;
uint32_t x463 = UINT32_MAX;
static int16_t x465 = 221;
int32_t x466 = INT32_MIN;
static int64_t x468 = -2258357330310LL;
int32_t t41 = 14;
int32_t x491 = -1;
int64_t t42 = 2005LL;
uint8_t x513 = 2U;
uint16_t x514 = 65U;
volatile uint32_t t46 = UINT32_MAX;
volatile uint16_t x577 = UINT16_MAX;
int64_t x578 = -110821493912093LL;
static uint8_t x592 = UINT8_MAX;
volatile int8_t x622 = -4;
volatile uint64_t x646 = 25619LLU;
int32_t x658 = INT32_MIN;
int8_t x670 = -18;
uint32_t x673 = 5U;
static int32_t x675 = INT32_MAX;
int16_t x682 = INT16_MIN;
volatile int8_t x683 = INT8_MAX;
int32_t t61 = -258;
int32_t x706 = 92;
int64_t x710 = INT64_MAX;
int64_t t63 = 7990997402270272LL;
volatile uint16_t x713 = 19600U;
volatile int8_t x725 = INT8_MAX;
int8_t x726 = -1;
int8_t x755 = INT8_MIN;
int8_t x782 = 7;
int32_t x783 = INT32_MIN;
uint16_t x789 = 426U;
volatile int32_t t70 = -1;
volatile int64_t x800 = 8273139997401LL;
int64_t t71 = 394461LL;
int64_t x814 = INT64_MIN;
uint32_t x816 = 4844609U;
int32_t t72 = -9735;
uint8_t x822 = UINT8_MAX;
volatile int64_t x823 = 2368230LL;
volatile uint32_t t74 = 594359U;
int32_t x846 = -38;
int32_t x847 = 5;
static uint64_t x850 = 13260LLU;
uint32_t t79 = 165013324U;
int64_t x884 = -5756229LL;
volatile int8_t x887 = 1;
uint8_t x888 = 7U;
int32_t x925 = INT32_MAX;
int8_t x929 = 1;
volatile int64_t x930 = -1867268130355716LL;
int16_t x946 = 437;
int16_t x949 = 193;
int8_t x950 = -15;
int8_t x951 = -1;
int8_t x977 = INT8_MAX;
uint64_t x988 = 3818103136LLU;
int8_t x998 = INT8_MIN;
static int16_t x1023 = INT16_MAX;
int16_t x1046 = 15;
int32_t t96 = -28;
int64_t x1064 = INT64_MAX;
uint32_t x1073 = 959U;
volatile int8_t x1074 = INT8_MIN;


void f0(void) {
	volatile int64_t x7 = 1LL;
	int16_t x8 = 489;
	int32_t t0 = 74271;

	t0 = (x5>>(x6&(x7/x8)));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x14 = -113492LL;
	int8_t x15 = INT8_MAX;
	static int32_t x16 = 37022;

	t1 = (x13>>(x14&(x15/x16)));

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x21 = UINT32_MAX;
	int16_t x22 = INT16_MIN;
	static int32_t x23 = 1;
	int64_t x24 = INT64_MAX;
	volatile uint32_t t2 = UINT32_MAX;

	t2 = (x21>>(x22&(x23/x24)));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x45 = INT16_MAX;
	int16_t x46 = 2894;
	uint64_t x47 = 375418249100846LLU;
	volatile int32_t t3 = -4157452;

	t3 = (x45>>(x46&(x47/x48)));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x53 = UINT32_MAX;
	volatile uint64_t x54 = UINT64_MAX;
	static uint64_t x55 = 15592079LLU;
	int8_t x56 = -1;

	t4 = (x53>>(x54&(x55/x56)));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x62 = 16U;
	int8_t x63 = 2;
	int16_t x64 = -569;
	volatile int32_t t5 = -157;

	t5 = (x61>>(x62&(x63/x64)));

	if (t5 != 11) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x69 = INT8_MAX;
	volatile int32_t x70 = -1;
	uint16_t x71 = 1266U;
	int32_t t6 = -20751;

	t6 = (x69>>(x70&(x71/x72)));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x85 = INT16_MAX;
	int32_t x86 = INT32_MIN;
	int8_t x88 = INT8_MAX;

	t7 = (x85>>(x86&(x87/x88)));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x105 = UINT16_MAX;
	volatile uint8_t x106 = UINT8_MAX;
	int8_t x107 = INT8_MAX;
	volatile int32_t t8 = 1269600;

	t8 = (x105>>(x106&(x107/x108)));

	if (t8 != 16383) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x113 = 105363233LLU;
	uint8_t x114 = 1U;
	volatile uint8_t x115 = 21U;

	t9 = (x113>>(x114&(x115/x116)));

	if (t9 != 52681616LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x117 = 0;
	uint16_t x119 = 7U;
	volatile int32_t t10 = 2010;

	t10 = (x117>>(x118&(x119/x120)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x121 = UINT16_MAX;
	int32_t x122 = -8217385;
	volatile int64_t x124 = INT64_MIN;
	volatile int32_t t11 = -6239379;

	t11 = (x121>>(x122&(x123/x124)));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x125 = 15527U;
	int32_t x128 = INT32_MIN;
	int32_t t12 = 34;

	t12 = (x125>>(x126&(x127/x128)));

	if (t12 != 15527) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x137 = 9419LL;
	static uint16_t x138 = 2402U;
	int16_t x139 = INT16_MAX;
	uint64_t x140 = 59986646149LLU;
	int64_t t13 = -332251863798813LL;

	t13 = (x137>>(x138&(x139/x140)));

	if (t13 != 9419LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x145 = 32581243547LLU;
	uint8_t x146 = 9U;
	int64_t x147 = -40668LL;
	uint8_t x148 = 32U;
	static uint64_t t14 = 24LLU;

	t14 = (x145>>(x146&(x147/x148)));

	if (t14 != 127270482LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x165 = INT8_MAX;
	static int16_t x166 = 25;
	volatile uint16_t x168 = 1U;
	int32_t t15 = 12741094;

	t15 = (x165>>(x166&(x167/x168)));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x177 = 454U;
	int16_t x178 = -1;
	uint32_t x180 = UINT32_MAX;
	static volatile int32_t t16 = -11;

	t16 = (x177>>(x178&(x179/x180)));

	if (t16 != 454) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x185 = UINT64_MAX;
	int16_t x186 = INT16_MIN;
	uint8_t x187 = 2U;
	int16_t x188 = 8;

	t17 = (x185>>(x186&(x187/x188)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x194 = 48U;
	int8_t x195 = 1;
	static int32_t t18 = INT32_MAX;

	t18 = (x193>>(x194&(x195/x196)));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x201 = INT8_MAX;
	int8_t x202 = INT8_MIN;
	uint64_t x203 = UINT64_MAX;
	int8_t x204 = -1;
	volatile int32_t t19 = -4099;

	t19 = (x201>>(x202&(x203/x204)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x205 = INT32_MAX;
	uint32_t x206 = 195349U;
	int16_t x207 = -1;
	int8_t x208 = INT8_MIN;
	static int32_t t20 = INT32_MAX;

	t20 = (x205>>(x206&(x207/x208)));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x238 = 1U;
	static volatile uint64_t x239 = 6569678676LLU;
	uint32_t x240 = 5202610U;
	volatile int64_t t21 = -23LL;

	t21 = (x237>>(x238&(x239/x240)));

	if (t21 != 698692733496399LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x265 = INT32_MAX;
	static int16_t x268 = -10208;
	volatile int32_t t22 = INT32_MAX;

	t22 = (x265>>(x266&(x267/x268)));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x273 = INT64_MAX;
	uint16_t x274 = UINT16_MAX;
	int32_t x276 = -1;
	static int64_t t23 = INT64_MAX;

	t23 = (x273>>(x274&(x275/x276)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x277 = INT8_MAX;
	volatile int16_t x278 = INT16_MIN;
	volatile uint32_t x279 = 675U;
	int16_t x280 = INT16_MAX;
	static volatile int32_t t24 = 111;

	t24 = (x277>>(x278&(x279/x280)));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x281 = UINT8_MAX;
	uint8_t x282 = 32U;
	int16_t x283 = INT16_MAX;
	int32_t t25 = 61;

	t25 = (x281>>(x282&(x283/x284)));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x295 = -1;
	int8_t x296 = INT8_MIN;
	static volatile int32_t t26 = 26;

	t26 = (x293>>(x294&(x295/x296)));

	if (t26 != 52) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x305 = UINT8_MAX;
	static int32_t x306 = INT32_MIN;
	volatile uint8_t x307 = 108U;
	int16_t x308 = INT16_MAX;
	volatile int32_t t27 = -1;

	t27 = (x305>>(x306&(x307/x308)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x325 = INT16_MAX;
	uint8_t x326 = 2U;
	uint8_t x327 = UINT8_MAX;
	volatile int8_t x328 = INT8_MAX;

	t28 = (x325>>(x326&(x327/x328)));

	if (t28 != 8191) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x341 = 12;
	uint32_t x342 = 0U;
	uint16_t x343 = 172U;
	volatile int32_t t29 = -658164;

	t29 = (x341>>(x342&(x343/x344)));

	if (t29 != 12) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x361 = UINT8_MAX;
	uint8_t x362 = 1U;
	int64_t x363 = -1099033992853500667LL;
	volatile int16_t x364 = INT16_MIN;
	static int32_t t30 = 6952;

	t30 = (x361>>(x362&(x363/x364)));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x365 = UINT16_MAX;
	static uint64_t x366 = UINT64_MAX;
	int64_t x367 = 2LL;
	static int32_t x368 = INT32_MIN;
	int32_t t31 = 0;

	t31 = (x365>>(x366&(x367/x368)));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x373 = UINT16_MAX;
	int8_t x374 = 0;
	int64_t x375 = 52593LL;
	int8_t x376 = 52;
	volatile int32_t t32 = -2030068;

	t32 = (x373>>(x374&(x375/x376)));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MAX;
	uint64_t x380 = 2LLU;

	t33 = (x377>>(x378&(x379/x380)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x389 = UINT32_MAX;
	uint64_t x390 = 4293862405140804700LLU;
	static uint32_t x392 = 128618U;
	volatile uint32_t t34 = UINT32_MAX;

	t34 = (x389>>(x390&(x391/x392)));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x415 = INT16_MAX;

	t35 = (x413>>(x414&(x415/x416)));

	if (t35 != 34668089LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x429 = 111U;
	int16_t x430 = -1;
	static int64_t x432 = INT64_MIN;
	static int32_t t36 = 486;

	t36 = (x429>>(x430&(x431/x432)));

	if (t36 != 111) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x433 = 123U;
	int32_t x435 = 59793257;
	static int64_t x436 = INT64_MIN;

	t37 = (x433>>(x434&(x435/x436)));

	if (t37 != 123) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x449 = INT16_MAX;
	uint16_t x450 = 1U;
	volatile int8_t x452 = -2;
	int32_t t38 = -977;

	t38 = (x449>>(x450&(x451/x452)));

	if (t38 != 16383) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x457 = INT8_MAX;
	uint32_t x458 = 847U;
	int8_t x460 = INT8_MIN;
	volatile int32_t t39 = -49280;

	t39 = (x457>>(x458&(x459/x460)));

	if (t39 != 63) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x462 = INT16_MIN;
	int32_t x464 = INT32_MAX;
	int32_t t40 = 28820384;

	t40 = (x461>>(x462&(x463/x464)));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x467 = UINT64_MAX;

	t41 = (x465>>(x466&(x467/x468)));

	if (t41 != 221) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x489 = 325LL;
	volatile uint8_t x490 = 7U;
	uint16_t x492 = UINT16_MAX;

	t42 = (x489>>(x490&(x491/x492)));

	if (t42 != 325LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x501 = 33738LL;
	volatile uint64_t x502 = UINT64_MAX;
	int16_t x503 = INT16_MAX;
	uint16_t x504 = UINT16_MAX;
	int64_t t43 = -303103LL;

	t43 = (x501>>(x502&(x503/x504)));

	if (t43 != 33738LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x515 = 1U;
	int16_t x516 = INT16_MIN;
	volatile int32_t t44 = 427276;

	t44 = (x513>>(x514&(x515/x516)));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x517 = 0;
	int8_t x518 = 11;
	int16_t x519 = INT16_MIN;
	static uint32_t x520 = 10120690U;
	volatile int32_t t45 = 20391821;

	t45 = (x517>>(x518&(x519/x520)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x573 = UINT32_MAX;
	int16_t x574 = INT16_MIN;
	volatile int8_t x575 = 1;
	int64_t x576 = -116386LL;

	t46 = (x573>>(x574&(x575/x576)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x579 = INT8_MAX;
	int32_t x580 = INT32_MIN;
	int32_t t47 = 2;

	t47 = (x577>>(x578&(x579/x580)));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x581 = INT64_MAX;
	int8_t x582 = 2;
	int16_t x583 = INT16_MIN;
	static int16_t x584 = 3625;
	int64_t t48 = 535675484LL;

	t48 = (x581>>(x582&(x583/x584)));

	if (t48 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x585 = INT32_MAX;
	static uint16_t x586 = 19834U;
	int16_t x587 = -15;
	static int64_t x588 = 135501808LL;
	volatile int32_t t49 = INT32_MAX;

	t49 = (x585>>(x586&(x587/x588)));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x589 = UINT64_MAX;
	static int64_t x590 = 1LL;
	static volatile int16_t x591 = -1;
	uint64_t t50 = UINT64_MAX;

	t50 = (x589>>(x590&(x591/x592)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x605 = UINT16_MAX;
	int32_t x606 = -3578559;
	volatile uint64_t x607 = 1523817350829LLU;
	int32_t x608 = INT32_MIN;
	static int32_t t51 = 452228;

	t51 = (x605>>(x606&(x607/x608)));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x621 = INT64_MAX;
	static int16_t x623 = -1;
	int64_t x624 = 183318LL;
	int64_t t52 = INT64_MAX;

	t52 = (x621>>(x622&(x623/x624)));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x641 = 2674;
	int8_t x642 = INT8_MIN;
	int16_t x643 = INT16_MIN;
	volatile int32_t x644 = INT32_MAX;
	int32_t t53 = 142299;

	t53 = (x641>>(x642&(x643/x644)));

	if (t53 != 2674) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x645 = 3953;
	static int32_t x647 = -1;
	int8_t x648 = INT8_MIN;
	static int32_t t54 = 10784;

	t54 = (x645>>(x646&(x647/x648)));

	if (t54 != 3953) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x657 = 1467819U;
	int8_t x659 = INT8_MIN;
	uint32_t x660 = 568U;
	static volatile uint32_t t55 = 10094U;

	t55 = (x657>>(x658&(x659/x660)));

	if (t55 != 1467819U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x669 = 84691152698LLU;
	uint8_t x671 = UINT8_MAX;
	uint8_t x672 = UINT8_MAX;
	uint64_t t56 = 103663LLU;

	t56 = (x669>>(x670&(x671/x672)));

	if (t56 != 84691152698LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x674 = 1LLU;
	uint8_t x676 = UINT8_MAX;
	static volatile uint32_t t57 = 79U;

	t57 = (x673>>(x674&(x675/x676)));

	if (t57 != 5U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x681 = 79045705699LL;
	int64_t x684 = INT64_MIN;
	int64_t t58 = 49913629LL;

	t58 = (x681>>(x682&(x683/x684)));

	if (t58 != 79045705699LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x689 = 0LLU;
	static volatile int16_t x690 = -30;
	int32_t x691 = INT32_MAX;
	int64_t x692 = INT64_MAX;
	volatile uint64_t t59 = 643441LLU;

	t59 = (x689>>(x690&(x691/x692)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x693 = 1630381288U;
	int64_t x694 = INT64_MIN;
	static uint64_t x695 = 5779646LLU;
	int16_t x696 = -250;
	uint32_t t60 = 127272648U;

	t60 = (x693>>(x694&(x695/x696)));

	if (t60 != 1630381288U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x701 = UINT8_MAX;
	int8_t x702 = INT8_MAX;
	volatile uint8_t x703 = UINT8_MAX;
	volatile uint64_t x704 = UINT64_MAX;

	t61 = (x701>>(x702&(x703/x704)));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x705 = UINT16_MAX;
	int32_t x707 = INT32_MIN;
	static uint32_t x708 = UINT32_MAX;
	volatile int32_t t62 = -5473153;

	t62 = (x705>>(x706&(x707/x708)));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x709 = 302780516458703300LL;
	int8_t x711 = 37;
	int64_t x712 = INT64_MAX;

	t63 = (x709>>(x710&(x711/x712)));

	if (t63 != 302780516458703300LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x714 = INT16_MAX;
	static int32_t x715 = -1;
	int32_t x716 = INT32_MAX;
	static volatile int32_t t64 = -8;

	t64 = (x713>>(x714&(x715/x716)));

	if (t64 != 19600) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x727 = 27U;
	volatile uint16_t x728 = 9838U;
	volatile int32_t t65 = 0;

	t65 = (x725>>(x726&(x727/x728)));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x749 = 232703798828514LL;
	uint8_t x750 = 9U;
	int32_t x751 = 5;
	uint32_t x752 = 2U;
	int64_t t66 = 3197992973101LL;

	t66 = (x749>>(x750&(x751/x752)));

	if (t66 != 232703798828514LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x753 = 977956251;
	static int8_t x754 = 7;
	int32_t x756 = INT32_MAX;
	volatile int32_t t67 = 214242;

	t67 = (x753>>(x754&(x755/x756)));

	if (t67 != 977956251) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x777 = UINT64_MAX;
	volatile int8_t x778 = -1;
	static uint32_t x779 = 5U;
	int8_t x780 = INT8_MIN;
	uint64_t t68 = UINT64_MAX;

	t68 = (x777>>(x778&(x779/x780)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x781 = INT64_MAX;
	static int8_t x784 = -25;
	volatile int64_t t69 = -208592558374946LL;

	t69 = (x781>>(x782&(x783/x784)));

	if (t69 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x790 = 0U;
	int64_t x791 = INT64_MIN;
	volatile int64_t x792 = INT64_MIN;

	t70 = (x789>>(x790&(x791/x792)));

	if (t70 != 426) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x797 = 8328805701LL;
	int16_t x798 = INT16_MIN;
	static volatile int16_t x799 = INT16_MIN;

	t71 = (x797>>(x798&(x799/x800)));

	if (t71 != 8328805701LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x813 = 32U;
	uint32_t x815 = UINT32_MAX;

	t72 = (x813>>(x814&(x815/x816)));

	if (t72 != 32) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x821 = 15U;
	uint32_t x824 = 1295984480U;
	static int32_t t73 = -273;

	t73 = (x821>>(x822&(x823/x824)));

	if (t73 != 15) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x825 = 397U;
	int8_t x826 = -1;
	static volatile int16_t x827 = -1;
	int8_t x828 = -1;

	t74 = (x825>>(x826&(x827/x828)));

	if (t74 != 198U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x837 = INT16_MAX;
	static int32_t x838 = 33508760;
	uint64_t x839 = UINT64_MAX;
	static int64_t x840 = INT64_MIN;
	int32_t t75 = 10848;

	t75 = (x837>>(x838&(x839/x840)));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x845 = UINT64_MAX;
	uint16_t x848 = 7U;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x845>>(x846&(x847/x848)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x849 = UINT64_MAX;
	static int16_t x851 = INT16_MIN;
	int32_t x852 = -183150;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = (x849>>(x850&(x851/x852)));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x853 = 11792632U;
	int8_t x854 = 1;
	static uint8_t x855 = UINT8_MAX;
	int8_t x856 = INT8_MIN;
	volatile uint32_t t78 = 1698U;

	t78 = (x853>>(x854&(x855/x856)));

	if (t78 != 5896316U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x861 = 87U;
	int32_t x862 = 20759967;
	static int16_t x863 = 5666;
	static uint32_t x864 = 87305308U;

	t79 = (x861>>(x862&(x863/x864)));

	if (t79 != 87U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x881 = 1U;
	int16_t x882 = INT16_MAX;
	int16_t x883 = -1;
	static volatile int32_t t80 = -13650;

	t80 = (x881>>(x882&(x883/x884)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x885 = 2967U;
	int64_t x886 = 531568161504LL;
	uint32_t t81 = 9017U;

	t81 = (x885>>(x886&(x887/x888)));

	if (t81 != 2967U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x889 = UINT16_MAX;
	static int64_t x890 = -6965892561523LL;
	int16_t x891 = 2641;
	int64_t x892 = INT64_MIN;
	int32_t t82 = -23322987;

	t82 = (x889>>(x890&(x891/x892)));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x926 = INT8_MAX;
	static uint64_t x927 = UINT64_MAX;
	uint32_t x928 = UINT32_MAX;
	int32_t t83 = -121243;

	t83 = (x925>>(x926&(x927/x928)));

	if (t83 != 1073741823) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x931 = 0U;
	static int8_t x932 = INT8_MAX;
	int32_t t84 = -1406;

	t84 = (x929>>(x930&(x931/x932)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x945 = 1056;
	int16_t x947 = INT16_MAX;
	static uint16_t x948 = 13585U;
	int32_t t85 = -345;

	t85 = (x945>>(x946&(x947/x948)));

	if (t85 != 1056) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x952 = -318298066;
	int32_t t86 = -384473;

	t86 = (x949>>(x950&(x951/x952)));

	if (t86 != 193) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x953 = 15148U;
	uint32_t x954 = 3U;
	int64_t x955 = -1LL;
	int32_t x956 = INT32_MAX;
	volatile int32_t t87 = 253892860;

	t87 = (x953>>(x954&(x955/x956)));

	if (t87 != 15148) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x969 = UINT64_MAX;
	static int16_t x970 = INT16_MAX;
	int8_t x971 = -1;
	volatile int64_t x972 = -1LL;
	volatile uint64_t t88 = 518407417LLU;

	t88 = (x969>>(x970&(x971/x972)));

	if (t88 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x978 = INT8_MIN;
	int8_t x979 = 1;
	int16_t x980 = INT16_MIN;
	int32_t t89 = 501;

	t89 = (x977>>(x978&(x979/x980)));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x981 = INT16_MAX;
	volatile int8_t x982 = 2;
	uint64_t x983 = UINT64_MAX;
	uint64_t x984 = 741406356LLU;
	volatile int32_t t90 = -371384;

	t90 = (x981>>(x982&(x983/x984)));

	if (t90 != 8191) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x985 = 18966166245267LLU;
	volatile int32_t x986 = -205091472;
	int8_t x987 = INT8_MAX;
	volatile uint64_t t91 = 43090412878176LLU;

	t91 = (x985>>(x986&(x987/x988)));

	if (t91 != 18966166245267LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x997 = 22;
	uint8_t x999 = 5U;
	int64_t x1000 = INT64_MAX;
	volatile int32_t t92 = 0;

	t92 = (x997>>(x998&(x999/x1000)));

	if (t92 != 22) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1009 = 28237905469426LL;
	volatile int64_t x1010 = INT64_MIN;
	int16_t x1011 = -3;
	int64_t x1012 = -227520LL;
	int64_t t93 = 254LL;

	t93 = (x1009>>(x1010&(x1011/x1012)));

	if (t93 != 28237905469426LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x1021 = 530677904LL;
	uint64_t x1022 = 1002841LLU;
	int16_t x1024 = INT16_MAX;
	int64_t t94 = 4414501271LL;

	t94 = (x1021>>(x1022&(x1023/x1024)));

	if (t94 != 265338952LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x1025 = 26LL;
	static int32_t x1026 = 36;
	uint32_t x1027 = 49603U;
	uint32_t x1028 = 8U;
	int64_t t95 = -669143811629450LL;

	t95 = (x1025>>(x1026&(x1027/x1028)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1045 = INT8_MAX;
	uint32_t x1047 = 100U;
	static int8_t x1048 = INT8_MAX;

	t96 = (x1045>>(x1046&(x1047/x1048)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x1061 = 1;
	static uint64_t x1062 = UINT64_MAX;
	static uint32_t x1063 = 1U;
	volatile int32_t t97 = 7;

	t97 = (x1061>>(x1062&(x1063/x1064)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x1069 = 6821974LLU;
	int16_t x1070 = 373;
	static int32_t x1071 = 413;
	int32_t x1072 = 10906743;
	uint64_t t98 = 37179058877LLU;

	t98 = (x1069>>(x1070&(x1071/x1072)));

	if (t98 != 6821974LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x1075 = 24LL;
	int8_t x1076 = INT8_MAX;
	uint32_t t99 = 1192689453U;

	t99 = (x1073>>(x1074&(x1075/x1076)));

	if (t99 != 959U) { NG(); } else { ; }
	
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

