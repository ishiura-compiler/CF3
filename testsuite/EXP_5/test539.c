#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t t2 = UINT32_MAX;
int32_t x15 = INT32_MIN;
volatile uint32_t x26 = UINT32_MAX;
uint32_t x46 = 1868604776U;
int64_t x48 = INT64_MIN;
static volatile int16_t x61 = INT16_MAX;
int32_t x72 = -1;
uint64_t x114 = 759515132775978LLU;
int64_t x116 = 3820489968955082438LL;
uint16_t x126 = 24U;
uint32_t t11 = UINT32_MAX;
uint64_t x133 = UINT64_MAX;
static volatile int32_t t15 = INT32_MAX;
volatile uint64_t x214 = 164635LLU;
uint64_t x216 = UINT64_MAX;
volatile int64_t t18 = INT64_MAX;
uint32_t x221 = 163567U;
static int16_t x233 = 240;
int64_t x234 = -1LL;
int32_t t20 = 1;
int64_t x254 = -1LL;
static uint32_t x255 = 8932U;
int64_t x256 = -1LL;
uint32_t x269 = 241431U;
int32_t x347 = -993245;
volatile uint64_t t29 = UINT64_MAX;
uint8_t x371 = 2U;
uint32_t x380 = UINT32_MAX;
volatile int64_t t33 = -6067573699016049LL;
volatile int32_t x425 = 3;
int32_t t34 = -87714;
uint16_t x437 = UINT16_MAX;
int32_t t36 = -11270239;
int64_t x462 = -1LL;
volatile int16_t x469 = INT16_MAX;
uint32_t x471 = UINT32_MAX;
int16_t x472 = INT16_MAX;
uint64_t x476 = 8777127807887455LLU;
uint32_t x509 = 212U;
int8_t x514 = INT8_MAX;
int16_t x541 = INT16_MAX;
static volatile int16_t x554 = 0;
int16_t x555 = INT16_MIN;
uint8_t x590 = UINT8_MAX;
int16_t x659 = 1;
uint16_t x721 = 29U;
volatile uint32_t x724 = 91U;
static uint32_t x736 = 929980398U;
int32_t x749 = 62002977;
volatile int32_t x751 = INT32_MAX;
uint16_t x761 = 32706U;
static int64_t x763 = -42LL;
int16_t x778 = INT16_MIN;
static int64_t x780 = INT64_MIN;
static volatile uint32_t x782 = 22020167U;
int16_t x784 = INT16_MAX;
volatile int32_t t59 = 853037910;
volatile uint32_t t60 = UINT32_MAX;
int64_t x810 = 25LL;
volatile uint16_t x811 = UINT16_MAX;
volatile int32_t t61 = 1123304;
static volatile uint32_t x823 = 65970427U;
static int8_t x842 = -1;
uint64_t t64 = UINT64_MAX;
int32_t x865 = INT32_MAX;
uint32_t x874 = 36U;
int8_t x878 = 0;
int16_t x884 = -15;
int64_t x895 = INT64_MIN;
int32_t x896 = -1;
uint8_t x905 = UINT8_MAX;
uint32_t x921 = UINT32_MAX;
volatile int8_t x923 = INT8_MIN;
uint64_t x941 = 423488LLU;
int32_t x948 = -44;
int64_t t76 = INT64_MAX;
uint64_t x1022 = 311578320953295LLU;
uint8_t x1026 = 62U;
int64_t t80 = 1197833925836LL;
uint8_t x1050 = 1U;
uint64_t x1054 = UINT64_MAX;
uint64_t x1077 = UINT64_MAX;
int8_t x1078 = 0;
volatile int16_t x1079 = INT16_MIN;
int16_t x1115 = 11;
int32_t x1116 = -1;
int32_t x1133 = INT32_MAX;
uint16_t x1134 = UINT16_MAX;
static volatile int32_t x1147 = INT32_MIN;
int32_t x1150 = 0;
uint32_t x1151 = 124608U;
uint32_t t91 = 3781U;
uint8_t x1204 = UINT8_MAX;
volatile int32_t t92 = -1;
static uint16_t x1209 = 1U;
int32_t x1210 = 3805;
uint16_t x1211 = 5786U;
int32_t x1236 = 5670;
volatile int16_t x1242 = -1;
int16_t x1244 = INT16_MIN;
volatile int32_t t97 = 184;
uint8_t x1253 = 1U;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	int32_t x2 = -1;
	int16_t x3 = -23;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = INT64_MAX;

	t0 = (x1<<((x2/x3)*x4));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int16_t x6 = -1;
	uint16_t x7 = 27U;
	static int64_t x8 = INT64_MAX;
	static volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5<<((x6/x7)*x8));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint8_t x10 = 88U;
	int16_t x11 = INT16_MIN;
	volatile uint32_t x12 = UINT32_MAX;

	t2 = (x9<<((x10/x11)*x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int8_t x14 = INT8_MAX;
	volatile int16_t x16 = INT16_MIN;
	static uint64_t t3 = UINT64_MAX;

	t3 = (x13<<((x14/x15)*x16));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MAX;
	int64_t x27 = -3561809914270935117LL;
	uint64_t x28 = 21117LLU;
	volatile int32_t t4 = INT32_MAX;

	t4 = (x25<<((x26/x27)*x28));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x45 = INT8_MAX;
	static volatile int8_t x47 = INT8_MIN;
	int32_t t5 = 1;

	t5 = (x45<<((x46/x47)*x48));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x57 = 0;
	int8_t x58 = INT8_MIN;
	int64_t x59 = INT64_MIN;
	int32_t x60 = INT32_MIN;
	volatile int32_t t6 = 477192326;

	t6 = (x57<<((x58/x59)*x60));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x62 = -17;
	uint8_t x63 = UINT8_MAX;
	int8_t x64 = 13;
	int32_t t7 = 0;

	t7 = (x61<<((x62/x63)*x64));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x69 = UINT16_MAX;
	int32_t x70 = -1;
	volatile int64_t x71 = -178818829LL;
	volatile int32_t t8 = 47;

	t8 = (x69<<((x70/x71)*x72));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x89 = UINT32_MAX;
	static volatile int16_t x90 = -1;
	static uint8_t x91 = 3U;
	uint8_t x92 = 0U;
	static volatile uint32_t t9 = UINT32_MAX;

	t9 = (x89<<((x90/x91)*x92));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x113 = INT32_MAX;
	int8_t x115 = -1;
	volatile int32_t t10 = INT32_MAX;

	t10 = (x113<<((x114/x115)*x116));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x125 = UINT32_MAX;
	int64_t x127 = INT64_MAX;
	int32_t x128 = -26916;

	t11 = (x125<<((x126/x127)*x128));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x134 = 401U;
	uint32_t x135 = UINT32_MAX;
	int32_t x136 = 140;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x133<<((x134/x135)*x136));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x165 = INT32_MAX;
	static uint64_t x166 = 81358LLU;
	int64_t x167 = INT64_MIN;
	int64_t x168 = INT64_MIN;
	static volatile int32_t t13 = INT32_MAX;

	t13 = (x165<<((x166/x167)*x168));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x169 = UINT64_MAX;
	volatile int16_t x170 = -1;
	volatile int64_t x171 = INT64_MIN;
	int8_t x172 = -1;
	uint64_t t14 = UINT64_MAX;

	t14 = (x169<<((x170/x171)*x172));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x181 = INT32_MAX;
	uint8_t x182 = UINT8_MAX;
	int64_t x183 = INT64_MIN;
	uint16_t x184 = 22152U;

	t15 = (x181<<((x182/x183)*x184));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x189 = 1339629U;
	uint8_t x190 = 23U;
	int16_t x191 = INT16_MIN;
	static uint64_t x192 = 172449LLU;
	volatile uint32_t t16 = 13527U;

	t16 = (x189<<((x190/x191)*x192));

	if (t16 != 1339629U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x205 = UINT64_MAX;
	int8_t x206 = INT8_MIN;
	static volatile int64_t x207 = INT64_MAX;
	int8_t x208 = INT8_MIN;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x205<<((x206/x207)*x208));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x213 = INT64_MAX;
	int64_t x215 = INT64_MIN;

	t18 = (x213<<((x214/x215)*x216));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x222 = 184U;
	volatile uint16_t x223 = UINT16_MAX;
	uint16_t x224 = UINT16_MAX;
	uint32_t t19 = 63946U;

	t19 = (x221<<((x222/x223)*x224));

	if (t19 != 163567U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x235 = UINT8_MAX;
	volatile int64_t x236 = INT64_MIN;

	t20 = (x233<<((x234/x235)*x236));

	if (t20 != 240) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x245 = INT32_MAX;
	uint64_t x246 = 765978LLU;
	int8_t x247 = -1;
	uint16_t x248 = 26952U;
	int32_t t21 = INT32_MAX;

	t21 = (x245<<((x246/x247)*x248));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x253 = 1897897;
	volatile int32_t t22 = 286705;

	t22 = (x253<<((x254/x255)*x256));

	if (t22 != 1897897) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x257 = INT32_MAX;
	volatile int16_t x258 = -1;
	int64_t x259 = INT64_MAX;
	int8_t x260 = -1;
	static int32_t t23 = INT32_MAX;

	t23 = (x257<<((x258/x259)*x260));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x270 = INT8_MAX;
	int32_t x271 = INT32_MIN;
	volatile uint64_t x272 = 373LLU;
	uint32_t t24 = 32U;

	t24 = (x269<<((x270/x271)*x272));

	if (t24 != 241431U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x281 = INT32_MAX;
	uint32_t x282 = 5422U;
	int16_t x283 = -1;
	int32_t x284 = -1;
	static int32_t t25 = INT32_MAX;

	t25 = (x281<<((x282/x283)*x284));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x309 = 123U;
	int8_t x310 = -1;
	uint16_t x311 = 15026U;
	int64_t x312 = -1LL;
	volatile int32_t t26 = -3;

	t26 = (x309<<((x310/x311)*x312));

	if (t26 != 123) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x329 = 0;
	static uint16_t x330 = 1820U;
	int32_t x331 = INT32_MIN;
	uint16_t x332 = 39U;
	static volatile int32_t t27 = -19932;

	t27 = (x329<<((x330/x331)*x332));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x337 = UINT8_MAX;
	static uint8_t x338 = 0U;
	uint16_t x339 = 2U;
	static int64_t x340 = 4588571237723872LL;
	volatile int32_t t28 = 2002;

	t28 = (x337<<((x338/x339)*x340));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x345 = UINT64_MAX;
	int16_t x346 = -1;
	int64_t x348 = 20790061228LL;

	t29 = (x345<<((x346/x347)*x348));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x369 = INT32_MAX;
	static volatile int8_t x370 = -1;
	volatile int8_t x372 = INT8_MIN;
	static int32_t t30 = INT32_MAX;

	t30 = (x369<<((x370/x371)*x372));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x377 = INT16_MAX;
	uint32_t x378 = 147778U;
	volatile uint64_t x379 = 7372071283308LLU;
	static volatile int32_t t31 = 30781;

	t31 = (x377<<((x378/x379)*x380));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x405 = UINT32_MAX;
	static int32_t x406 = 1;
	static volatile int16_t x407 = 3483;
	int16_t x408 = -5;
	uint32_t t32 = UINT32_MAX;

	t32 = (x405<<((x406/x407)*x408));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x421 = 411005073239038LL;
	uint8_t x422 = 0U;
	uint32_t x423 = 14142138U;
	volatile uint64_t x424 = 166LLU;

	t33 = (x421<<((x422/x423)*x424));

	if (t33 != 411005073239038LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x426 = -1;
	int16_t x427 = INT16_MIN;
	int64_t x428 = 0LL;

	t34 = (x425<<((x426/x427)*x428));

	if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x429 = 77U;
	int16_t x430 = 33;
	uint8_t x431 = 49U;
	int64_t x432 = INT64_MIN;
	int32_t t35 = 0;

	t35 = (x429<<((x430/x431)*x432));

	if (t35 != 77) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x438 = 5;
	static int8_t x439 = INT8_MIN;
	int32_t x440 = INT32_MIN;

	t36 = (x437<<((x438/x439)*x440));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x461 = 61U;
	static int64_t x463 = INT64_MAX;
	uint32_t x464 = UINT32_MAX;
	volatile int32_t t37 = -436769;

	t37 = (x461<<((x462/x463)*x464));

	if (t37 != 61) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x470 = INT16_MIN;
	volatile int32_t t38 = 561508;

	t38 = (x469<<((x470/x471)*x472));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x473 = 16U;
	int8_t x474 = -1;
	int16_t x475 = 5;
	volatile int32_t t39 = -3533802;

	t39 = (x473<<((x474/x475)*x476));

	if (t39 != 16) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x481 = 96237LLU;
	static uint8_t x482 = 1U;
	static int16_t x483 = INT16_MIN;
	volatile uint8_t x484 = 3U;
	volatile uint64_t t40 = 52782342LLU;

	t40 = (x481<<((x482/x483)*x484));

	if (t40 != 96237LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x510 = -4;
	static int64_t x511 = 4511432167938057LL;
	uint8_t x512 = UINT8_MAX;
	uint32_t t41 = 2404855U;

	t41 = (x509<<((x510/x511)*x512));

	if (t41 != 212U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x513 = 44641567494914700LLU;
	int32_t x515 = INT32_MAX;
	static uint8_t x516 = UINT8_MAX;
	uint64_t t42 = 250983909729509LLU;

	t42 = (x513<<((x514/x515)*x516));

	if (t42 != 44641567494914700LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x517 = 61854116;
	int64_t x518 = -1LL;
	static int16_t x519 = INT16_MIN;
	static volatile int32_t x520 = -1;
	volatile int32_t t43 = 1468583;

	t43 = (x517<<((x518/x519)*x520));

	if (t43 != 61854116) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x542 = -1;
	int16_t x543 = INT16_MAX;
	uint16_t x544 = UINT16_MAX;
	int32_t t44 = -2965;

	t44 = (x541<<((x542/x543)*x544));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x553 = 128384283450LLU;
	volatile uint32_t x556 = UINT32_MAX;
	volatile uint64_t t45 = 759131045820804LLU;

	t45 = (x553<<((x554/x555)*x556));

	if (t45 != 128384283450LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x565 = 305660430;
	int64_t x566 = INT64_MAX;
	static int64_t x567 = INT64_MIN;
	uint32_t x568 = 398U;
	int32_t t46 = 61415250;

	t46 = (x565<<((x566/x567)*x568));

	if (t46 != 305660430) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x589 = 8U;
	int32_t x591 = -20287;
	uint64_t x592 = 13835028LLU;
	volatile int32_t t47 = 1885;

	t47 = (x589<<((x590/x591)*x592));

	if (t47 != 8) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x609 = INT32_MAX;
	uint32_t x610 = 33U;
	int16_t x611 = INT16_MAX;
	volatile int8_t x612 = -1;
	int32_t t48 = INT32_MAX;

	t48 = (x609<<((x610/x611)*x612));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x657 = UINT8_MAX;
	int16_t x658 = -10;
	static int32_t x660 = 0;
	static volatile int32_t t49 = -972985;

	t49 = (x657<<((x658/x659)*x660));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x697 = UINT32_MAX;
	uint64_t x698 = 587059288897795LLU;
	int8_t x699 = INT8_MIN;
	int8_t x700 = INT8_MIN;
	volatile uint32_t t50 = UINT32_MAX;

	t50 = (x697<<((x698/x699)*x700));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x713 = UINT32_MAX;
	volatile int64_t x714 = -607LL;
	static int64_t x715 = INT64_MIN;
	static uint32_t x716 = 16034198U;
	static uint32_t t51 = UINT32_MAX;

	t51 = (x713<<((x714/x715)*x716));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x722 = 11;
	static uint32_t x723 = 1759U;
	int32_t t52 = 1290768;

	t52 = (x721<<((x722/x723)*x724));

	if (t52 != 29) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x733 = 14692U;
	volatile int16_t x734 = INT16_MAX;
	uint64_t x735 = UINT64_MAX;
	static int32_t t53 = 1811740;

	t53 = (x733<<((x734/x735)*x736));

	if (t53 != 14692) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x737 = 33636676011094779LLU;
	static volatile int32_t x738 = INT32_MIN;
	static uint32_t x739 = UINT32_MAX;
	int32_t x740 = INT32_MIN;
	uint64_t t54 = 128486711877921235LLU;

	t54 = (x737<<((x738/x739)*x740));

	if (t54 != 33636676011094779LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x750 = INT8_MAX;
	volatile uint8_t x752 = 8U;
	volatile int32_t t55 = -97113261;

	t55 = (x749<<((x750/x751)*x752));

	if (t55 != 62002977) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x762 = 396419582500547862LLU;
	int64_t x764 = INT64_MIN;
	volatile int32_t t56 = 587599;

	t56 = (x761<<((x762/x763)*x764));

	if (t56 != 32706) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x777 = 6320U;
	static uint32_t x779 = UINT32_MAX;
	volatile uint32_t t57 = 9102828U;

	t57 = (x777<<((x778/x779)*x780));

	if (t57 != 6320U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x781 = UINT32_MAX;
	int32_t x783 = -12046236;
	uint32_t t58 = UINT32_MAX;

	t58 = (x781<<((x782/x783)*x784));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x785 = 0U;
	int32_t x786 = -1;
	static uint8_t x787 = 2U;
	static int8_t x788 = INT8_MIN;

	t59 = (x785<<((x786/x787)*x788));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x805 = UINT32_MAX;
	uint16_t x806 = UINT16_MAX;
	int64_t x807 = 2095471LL;
	int64_t x808 = INT64_MIN;

	t60 = (x805<<((x806/x807)*x808));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x809 = UINT16_MAX;
	uint64_t x812 = 8180235097710LLU;

	t61 = (x809<<((x810/x811)*x812));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x821 = 58U;
	static int8_t x822 = INT8_MAX;
	int32_t x824 = INT32_MAX;
	volatile int32_t t62 = 1227;

	t62 = (x821<<((x822/x823)*x824));

	if (t62 != 58) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x841 = 154924U;
	volatile uint16_t x843 = 205U;
	int16_t x844 = -1;
	uint32_t t63 = 8046U;

	t63 = (x841<<((x842/x843)*x844));

	if (t63 != 154924U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x853 = UINT64_MAX;
	uint64_t x854 = 8LLU;
	int64_t x855 = 66368LL;
	uint8_t x856 = 61U;

	t64 = (x853<<((x854/x855)*x856));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x866 = 0;
	uint16_t x867 = 24U;
	static uint8_t x868 = 6U;
	static volatile int32_t t65 = INT32_MAX;

	t65 = (x865<<((x866/x867)*x868));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x873 = 37061329103111LL;
	int8_t x875 = INT8_MAX;
	int64_t x876 = 3855976839945LL;
	int64_t t66 = 7071725036LL;

	t66 = (x873<<((x874/x875)*x876));

	if (t66 != 37061329103111LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x877 = UINT16_MAX;
	volatile uint32_t x879 = 138893U;
	int8_t x880 = INT8_MAX;
	int32_t t67 = -219203685;

	t67 = (x877<<((x878/x879)*x880));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x881 = 17U;
	uint64_t x882 = 0LLU;
	int64_t x883 = 97301654266LL;
	volatile uint32_t t68 = 0U;

	t68 = (x881<<((x882/x883)*x884));

	if (t68 != 17U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x885 = UINT32_MAX;
	int32_t x886 = -1;
	int8_t x887 = INT8_MAX;
	int64_t x888 = -46337LL;
	static volatile uint32_t t69 = UINT32_MAX;

	t69 = (x885<<((x886/x887)*x888));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x893 = 27U;
	int8_t x894 = INT8_MIN;
	int32_t t70 = 6215;

	t70 = (x893<<((x894/x895)*x896));

	if (t70 != 27) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x901 = UINT16_MAX;
	static uint8_t x902 = 20U;
	uint32_t x903 = 13772U;
	int32_t x904 = INT32_MIN;
	int32_t t71 = 791013;

	t71 = (x901<<((x902/x903)*x904));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x906 = 47U;
	static int64_t x907 = INT64_MIN;
	static int16_t x908 = 1;
	volatile int32_t t72 = 204652;

	t72 = (x905<<((x906/x907)*x908));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x917 = 0LLU;
	int32_t x918 = INT32_MIN;
	static int64_t x919 = INT64_MIN;
	uint8_t x920 = 13U;
	uint64_t t73 = 240880LLU;

	t73 = (x917<<((x918/x919)*x920));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x922 = 1361U;
	static int64_t x924 = -1LL;
	volatile uint32_t t74 = 16U;

	t74 = (x921<<((x922/x923)*x924));

	if (t74 != 4294966272U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x942 = 264392728264LLU;
	uint64_t x943 = 368629775097589LLU;
	int16_t x944 = INT16_MIN;
	volatile uint64_t t75 = 6319719173309719227LLU;

	t75 = (x941<<((x942/x943)*x944));

	if (t75 != 423488LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x945 = INT64_MAX;
	static int8_t x946 = INT8_MIN;
	int32_t x947 = 149079139;

	t76 = (x945<<((x946/x947)*x948));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x949 = 0U;
	int32_t x950 = 30;
	static int8_t x951 = INT8_MIN;
	int16_t x952 = INT16_MAX;
	volatile int32_t t77 = 165;

	t77 = (x949<<((x950/x951)*x952));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x993 = UINT8_MAX;
	volatile uint8_t x994 = 9U;
	int8_t x995 = INT8_MAX;
	int16_t x996 = INT16_MAX;
	volatile int32_t t78 = 1433280;

	t78 = (x993<<((x994/x995)*x996));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x1021 = 385140LL;
	int32_t x1023 = INT32_MAX;
	volatile uint8_t x1024 = 0U;
	int64_t t79 = -101821223105LL;

	t79 = (x1021<<((x1022/x1023)*x1024));

	if (t79 != 385140LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x1025 = 7043LL;
	int8_t x1027 = INT8_MIN;
	int8_t x1028 = 1;

	t80 = (x1025<<((x1026/x1027)*x1028));

	if (t80 != 7043LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x1049 = 690LL;
	int64_t x1051 = INT64_MIN;
	int8_t x1052 = INT8_MIN;
	static volatile int64_t t81 = -1LL;

	t81 = (x1049<<((x1050/x1051)*x1052));

	if (t81 != 690LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x1053 = 7882883072020978695LLU;
	static uint16_t x1055 = 125U;
	int8_t x1056 = 0;
	uint64_t t82 = 18156390690115598LLU;

	t82 = (x1053<<((x1054/x1055)*x1056));

	if (t82 != 7882883072020978695LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x1080 = 1U;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (x1077<<((x1078/x1079)*x1080));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1085 = INT8_MAX;
	uint8_t x1086 = UINT8_MAX;
	uint64_t x1087 = 221308003934LLU;
	static volatile int32_t x1088 = INT32_MIN;
	volatile int32_t t84 = 6;

	t84 = (x1085<<((x1086/x1087)*x1088));

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x1113 = INT16_MAX;
	volatile int8_t x1114 = INT8_MIN;
	static volatile int32_t t85 = 12375040;

	t85 = (x1113<<((x1114/x1115)*x1116));

	if (t85 != 67106816) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1117 = UINT32_MAX;
	int8_t x1118 = INT8_MIN;
	int8_t x1119 = INT8_MIN;
	static uint8_t x1120 = 0U;
	uint32_t t86 = UINT32_MAX;

	t86 = (x1117<<((x1118/x1119)*x1120));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x1135 = INT32_MIN;
	volatile int64_t x1136 = INT64_MIN;
	int32_t t87 = INT32_MAX;

	t87 = (x1133<<((x1134/x1135)*x1136));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x1145 = INT64_MAX;
	int8_t x1146 = -2;
	int8_t x1148 = -1;
	volatile int64_t t88 = INT64_MAX;

	t88 = (x1145<<((x1146/x1147)*x1148));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x1149 = UINT32_MAX;
	static int16_t x1152 = INT16_MIN;
	volatile uint32_t t89 = UINT32_MAX;

	t89 = (x1149<<((x1150/x1151)*x1152));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x1153 = 1;
	static int16_t x1154 = 5;
	int16_t x1155 = INT16_MIN;
	int32_t x1156 = 9211;
	int32_t t90 = 122;

	t90 = (x1153<<((x1154/x1155)*x1156));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x1165 = 530U;
	int32_t x1166 = -1;
	int32_t x1167 = 5878299;
	int16_t x1168 = INT16_MAX;

	t91 = (x1165<<((x1166/x1167)*x1168));

	if (t91 != 530U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x1201 = 15924;
	int8_t x1202 = -1;
	int8_t x1203 = INT8_MAX;

	t92 = (x1201<<((x1202/x1203)*x1204));

	if (t92 != 15924) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x1212 = UINT8_MAX;
	volatile int32_t t93 = -5;

	t93 = (x1209<<((x1210/x1211)*x1212));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1213 = 14;
	static int16_t x1214 = INT16_MAX;
	int64_t x1215 = INT64_MIN;
	uint16_t x1216 = 0U;
	int32_t t94 = -6189496;

	t94 = (x1213<<((x1214/x1215)*x1216));

	if (t94 != 14) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x1221 = 28223U;
	static uint8_t x1222 = 42U;
	int32_t x1223 = INT32_MIN;
	uint16_t x1224 = 12543U;
	int32_t t95 = -4077;

	t95 = (x1221<<((x1222/x1223)*x1224));

	if (t95 != 28223) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x1233 = UINT64_MAX;
	volatile uint8_t x1234 = 2U;
	int32_t x1235 = -91;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (x1233<<((x1234/x1235)*x1236));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x1241 = 49U;
	int32_t x1243 = INT32_MAX;

	t97 = (x1241<<((x1242/x1243)*x1244));

	if (t97 != 49) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1254 = INT8_MAX;
	int64_t x1255 = 1753LL;
	uint16_t x1256 = UINT16_MAX;
	volatile int32_t t98 = -65726;

	t98 = (x1253<<((x1254/x1255)*x1256));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x1257 = INT16_MAX;
	static int32_t x1258 = -1;
	int16_t x1259 = INT16_MIN;
	int8_t x1260 = -8;
	static volatile int32_t t99 = 58425;

	t99 = (x1257<<((x1258/x1259)*x1260));

	if (t99 != 32767) { NG(); } else { ; }
	
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

