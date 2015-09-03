#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x20 = -1LL;
int16_t x38 = INT16_MAX;
static int32_t x92 = INT32_MIN;
int32_t t7 = 1;
int8_t x113 = INT8_MAX;
uint32_t x116 = 7657335U;
int64_t x134 = INT64_MAX;
uint64_t x137 = UINT64_MAX;
uint64_t t12 = 869037389LLU;
uint32_t x142 = 204049U;
static volatile int64_t x157 = -1LL;
int64_t t14 = 231638306393464LL;
static int16_t x193 = 865;
uint32_t x196 = UINT32_MAX;
uint8_t x202 = 1U;
int32_t x203 = -1;
int8_t x209 = INT8_MIN;
uint64_t x211 = 889LLU;
static uint16_t x212 = 23232U;
static int64_t x228 = -9933681023LL;
static volatile int8_t x237 = INT8_MIN;
static volatile int32_t t23 = 14638;
volatile int16_t x248 = INT16_MIN;
uint8_t x270 = 29U;
volatile int64_t x272 = INT64_MAX;
uint32_t x274 = UINT32_MAX;
uint16_t x276 = UINT16_MAX;
int32_t x278 = 9462442;
static int64_t x280 = INT64_MIN;
int32_t t29 = -46654633;
int16_t x292 = INT16_MIN;
volatile uint64_t t32 = 684689240LLU;
int8_t x319 = -1;
volatile uint64_t t33 = 20780195691262901LLU;
volatile int16_t x398 = INT16_MAX;
uint32_t x399 = 562U;
volatile int64_t t37 = 4067924593511556339LL;
int8_t x477 = INT8_MIN;
uint8_t x485 = UINT8_MAX;
int8_t x505 = 4;
static uint32_t t40 = 122068U;
int8_t x509 = -1;
uint16_t x512 = 1317U;
volatile int32_t t41 = 171905723;
volatile int8_t x529 = INT8_MIN;
uint32_t x531 = UINT32_MAX;
static uint32_t x559 = UINT32_MAX;
int16_t x560 = INT16_MIN;
int8_t x595 = 1;
volatile int32_t t46 = 1836555;
uint16_t x611 = UINT16_MAX;
static int32_t t49 = 432344;
uint64_t x642 = 8171291416832853LLU;
static volatile uint8_t x643 = UINT8_MAX;
volatile uint64_t t51 = 15LLU;
volatile int64_t t52 = 20736262997556LL;
volatile int32_t t53 = 6598;
volatile uint64_t t54 = 229146680481LLU;
uint64_t x682 = 3LLU;
volatile uint64_t x684 = 812613LLU;
int64_t x692 = 138506248266LL;
volatile int64_t t56 = -290417909952512LL;
static uint8_t x709 = UINT8_MAX;
uint8_t x728 = 8U;
volatile int8_t x730 = INT8_MAX;
volatile uint32_t x739 = 15U;
int32_t t63 = -201785;
uint32_t x768 = 18098U;
int32_t t64 = 621924;
int8_t x811 = INT8_MIN;
int32_t x824 = INT32_MIN;
int32_t t71 = -1;
int16_t x850 = 2;
volatile int32_t t72 = -59016;
volatile int32_t x895 = INT32_MIN;
volatile uint64_t t76 = 2073696383207LLU;
uint16_t x918 = 4U;
static int64_t x919 = INT64_MAX;
volatile int64_t x920 = INT64_MIN;
int32_t x922 = INT32_MAX;
static uint32_t x923 = 22U;
static uint8_t x930 = UINT8_MAX;
volatile int32_t t80 = 2076;
int64_t x963 = 696839011LL;
static volatile int64_t x964 = INT64_MIN;
volatile uint32_t x965 = 231U;
uint8_t x968 = 58U;
volatile uint32_t t82 = 1275805U;
int64_t x1033 = INT64_MAX;
int8_t x1034 = INT8_MAX;
int16_t x1035 = INT16_MIN;
static int16_t x1046 = INT16_MAX;
static int32_t t86 = -41;
static uint64_t x1056 = UINT64_MAX;
uint64_t x1057 = 401635052162LLU;
static int32_t x1059 = -1;
int32_t x1060 = INT32_MIN;
uint32_t x1076 = 505037235U;
uint64_t x1150 = 3086860LLU;
volatile uint8_t x1197 = 21U;


void f0(void) {
	static int16_t x17 = INT16_MIN;
	uint32_t x18 = UINT32_MAX;
	int16_t x19 = -1;
	volatile uint32_t t0 = 2692407U;

	t0 = (x17/(x18>>(x19/x20)));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x37 = -16936LL;
	static volatile int8_t x39 = -1;
	int8_t x40 = -1;
	volatile int64_t t1 = 4162406779599131LL;

	t1 = (x37/(x38>>(x39/x40)));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x65 = 15;
	uint32_t x66 = UINT32_MAX;
	int16_t x67 = -1;
	static int32_t x68 = -237039940;
	volatile uint32_t t2 = 1577464U;

	t2 = (x65/(x66>>(x67/x68)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x69 = INT32_MIN;
	int32_t x70 = INT32_MAX;
	int32_t x71 = 33832;
	uint32_t x72 = 48052U;
	volatile int32_t t3 = -153088;

	t3 = (x69/(x70>>(x71/x72)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x77 = 73U;
	int64_t x78 = INT64_MAX;
	uint32_t x79 = 17941558U;
	static int16_t x80 = -1;
	int64_t t4 = -2272722LL;

	t4 = (x77/(x78>>(x79/x80)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x85 = 7286468U;
	uint64_t x86 = 1448815019416LLU;
	uint64_t x87 = UINT64_MAX;
	static int8_t x88 = -7;
	static volatile uint64_t t5 = 808LLU;

	t5 = (x85/(x86>>(x87/x88)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x89 = 878U;
	static volatile int32_t x90 = INT32_MAX;
	uint64_t x91 = 29832779LLU;
	int32_t t6 = 917700;

	t6 = (x89/(x90>>(x91/x92)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x97 = 4006884;
	int8_t x98 = INT8_MAX;
	uint32_t x99 = 124629U;
	static uint32_t x100 = 127593383U;

	t7 = (x97/(x98>>(x99/x100)));

	if (t7 != 31550) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x114 = 2405U;
	uint16_t x115 = 1U;
	volatile uint32_t t8 = 1801U;

	t8 = (x113/(x114>>(x115/x116)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x121 = 16U;
	uint8_t x122 = UINT8_MAX;
	int8_t x123 = 7;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t9 = -1154677;

	t9 = (x121/(x122>>(x123/x124)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x125 = 6254238;
	uint32_t x126 = UINT32_MAX;
	int16_t x127 = 1;
	int64_t x128 = INT64_MIN;
	uint32_t t10 = 340U;

	t10 = (x125/(x126>>(x127/x128)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x133 = INT8_MIN;
	static uint16_t x135 = 55U;
	uint64_t x136 = 13430707477416LLU;
	int64_t t11 = 512221782LL;

	t11 = (x133/(x134>>(x135/x136)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x138 = UINT32_MAX;
	static int64_t x139 = 4LL;
	int8_t x140 = INT8_MAX;

	t12 = (x137/(x138>>(x139/x140)));

	if (t12 != 4294967297LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x141 = INT8_MAX;
	static uint8_t x143 = UINT8_MAX;
	uint64_t x144 = 134869LLU;
	volatile uint32_t t13 = 5252U;

	t13 = (x141/(x142>>(x143/x144)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x158 = 2890432U;
	static volatile uint32_t x159 = 355U;
	volatile uint16_t x160 = 5856U;

	t14 = (x157/(x158>>(x159/x160)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x169 = INT8_MAX;
	uint32_t x170 = UINT32_MAX;
	uint8_t x171 = 23U;
	volatile int16_t x172 = INT16_MIN;
	volatile uint32_t t15 = 1825503U;

	t15 = (x169/(x170>>(x171/x172)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x173 = -1;
	int32_t x174 = 855591;
	static int8_t x175 = -1;
	static uint8_t x176 = 6U;
	int32_t t16 = -1;

	t16 = (x173/(x174>>(x175/x176)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x189 = -271;
	static volatile uint64_t x190 = UINT64_MAX;
	int16_t x191 = INT16_MIN;
	int32_t x192 = INT32_MAX;
	volatile uint64_t t17 = 333623340476267558LLU;

	t17 = (x189/(x190>>(x191/x192)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x194 = 2315780599LLU;
	int16_t x195 = -7921;
	uint64_t t18 = 728821020746836LLU;

	t18 = (x193/(x194>>(x195/x196)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x201 = 627842928016616167LLU;
	volatile int16_t x204 = INT16_MIN;
	static uint64_t t19 = 20LLU;

	t19 = (x201/(x202>>(x203/x204)));

	if (t19 != 627842928016616167LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x210 = 1LL;
	volatile int64_t t20 = 3641644248317086695LL;

	t20 = (x209/(x210>>(x211/x212)));

	if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x225 = 7U;
	int8_t x226 = INT8_MAX;
	int32_t x227 = INT32_MIN;
	volatile int32_t t21 = 719978;

	t21 = (x225/(x226>>(x227/x228)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x229 = 4105;
	volatile uint8_t x230 = 75U;
	int8_t x231 = INT8_MIN;
	int32_t x232 = INT32_MIN;
	static volatile int32_t t22 = 1;

	t22 = (x229/(x230>>(x231/x232)));

	if (t22 != 54) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x238 = UINT8_MAX;
	int32_t x239 = 370198324;
	int32_t x240 = INT32_MIN;

	t23 = (x237/(x238>>(x239/x240)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x245 = 64;
	uint8_t x246 = 6U;
	int8_t x247 = -1;
	static volatile int32_t t24 = -6;

	t24 = (x245/(x246>>(x247/x248)));

	if (t24 != 10) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x257 = INT64_MAX;
	uint64_t x258 = UINT64_MAX;
	int8_t x259 = INT8_MAX;
	uint64_t x260 = 261782476133LLU;
	volatile uint64_t t25 = 439317732301LLU;

	t25 = (x257/(x258>>(x259/x260)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x265 = 0;
	uint16_t x266 = 82U;
	int8_t x267 = -1;
	volatile int16_t x268 = INT16_MIN;
	int32_t t26 = -1926672;

	t26 = (x265/(x266>>(x267/x268)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x269 = UINT32_MAX;
	int16_t x271 = 16;
	static uint32_t t27 = 116U;

	t27 = (x269/(x270>>(x271/x272)));

	if (t27 != 148102320U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x273 = 11190U;
	uint16_t x275 = UINT16_MAX;
	uint32_t t28 = 75620U;

	t28 = (x273/(x274>>(x275/x276)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x277 = -32;
	static volatile uint16_t x279 = UINT16_MAX;

	t29 = (x277/(x278>>(x279/x280)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x285 = 0U;
	int8_t x286 = INT8_MAX;
	uint32_t x287 = 12U;
	uint8_t x288 = UINT8_MAX;
	int32_t t30 = -29463975;

	t30 = (x285/(x286>>(x287/x288)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x289 = INT32_MAX;
	int16_t x290 = INT16_MAX;
	uint8_t x291 = UINT8_MAX;
	static volatile int32_t t31 = -3;

	t31 = (x289/(x290>>(x291/x292)));

	if (t31 != 65538) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x313 = 272587717126640344LLU;
	uint64_t x314 = 1420613219LLU;
	volatile int64_t x315 = -5729LL;
	int16_t x316 = INT16_MAX;

	t32 = (x313/(x314>>(x315/x316)));

	if (t32 != 191880318LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x317 = UINT64_MAX;
	uint64_t x318 = 621517LLU;
	volatile uint8_t x320 = 34U;

	t33 = (x317/(x318>>(x319/x320)));

	if (t33 != 29680192293548LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x381 = UINT16_MAX;
	int64_t x382 = INT64_MAX;
	int16_t x383 = 0;
	uint64_t x384 = 4687515267LLU;
	volatile int64_t t34 = -1841666LL;

	t34 = (x381/(x382>>(x383/x384)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x397 = 10U;
	volatile uint16_t x400 = UINT16_MAX;
	int32_t t35 = 401215613;

	t35 = (x397/(x398>>(x399/x400)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x441 = -1;
	static uint16_t x442 = 2520U;
	int8_t x443 = INT8_MAX;
	int64_t x444 = -7597845LL;
	volatile int32_t t36 = 218757769;

	t36 = (x441/(x442>>(x443/x444)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x445 = -1LL;
	int16_t x446 = INT16_MAX;
	volatile uint32_t x447 = 13226U;
	volatile uint64_t x448 = UINT64_MAX;

	t37 = (x445/(x446>>(x447/x448)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x478 = 230574977U;
	uint16_t x479 = 2U;
	int16_t x480 = -11;
	uint32_t t38 = 867872U;

	t38 = (x477/(x478>>(x479/x480)));

	if (t38 != 18U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x486 = 4U;
	uint32_t x487 = 744328150U;
	int8_t x488 = -1;
	int32_t t39 = 10;

	t39 = (x485/(x486>>(x487/x488)));

	if (t39 != 63) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x506 = UINT32_MAX;
	uint8_t x507 = 3U;
	uint64_t x508 = 74LLU;

	t40 = (x505/(x506>>(x507/x508)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x510 = 14U;
	volatile uint32_t x511 = 4279U;

	t41 = (x509/(x510>>(x511/x512)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x530 = UINT16_MAX;
	int32_t x532 = -64;
	int32_t t42 = 1;

	t42 = (x529/(x530>>(x531/x532)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x537 = INT8_MIN;
	uint32_t x538 = 54U;
	uint16_t x539 = 1U;
	static int16_t x540 = 12;
	volatile uint32_t t43 = 11U;

	t43 = (x537/(x538>>(x539/x540)));

	if (t43 != 79536429U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x557 = -1;
	static int64_t x558 = INT64_MAX;
	int64_t t44 = -467LL;

	t44 = (x557/(x558>>(x559/x560)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x565 = -1731;
	int64_t x566 = INT64_MAX;
	uint64_t x567 = UINT64_MAX;
	static volatile int64_t x568 = INT64_MIN;
	static int64_t t45 = -1233430419981053347LL;

	t45 = (x565/(x566>>(x567/x568)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x593 = INT16_MAX;
	int16_t x594 = 2;
	uint64_t x596 = 2981750LLU;

	t46 = (x593/(x594>>(x595/x596)));

	if (t46 != 16383) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x605 = -14;
	volatile uint8_t x606 = UINT8_MAX;
	int16_t x607 = INT16_MAX;
	volatile int32_t x608 = INT32_MIN;
	volatile int32_t t47 = 182152418;

	t47 = (x605/(x606>>(x607/x608)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x609 = 80113U;
	volatile uint16_t x610 = 21737U;
	int16_t x612 = 8462;
	uint32_t t48 = 0U;

	t48 = (x609/(x610>>(x611/x612)));

	if (t48 != 474U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x617 = INT16_MIN;
	uint16_t x618 = UINT16_MAX;
	volatile int32_t x619 = 5444940;
	int64_t x620 = 1011956765033214932LL;

	t49 = (x617/(x618>>(x619/x620)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x621 = 5;
	int8_t x622 = 1;
	uint64_t x623 = 742312420059263814LLU;
	int32_t x624 = -105;
	int32_t t50 = 15914;

	t50 = (x621/(x622>>(x623/x624)));

	if (t50 != 5) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x641 = INT8_MIN;
	int32_t x644 = -313652;

	t51 = (x641/(x642>>(x643/x644)));

	if (t51 != 2257LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x653 = 15U;
	int64_t x654 = INT64_MAX;
	static int64_t x655 = -1LL;
	uint8_t x656 = 3U;

	t52 = (x653/(x654>>(x655/x656)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x661 = INT16_MIN;
	uint16_t x662 = 1628U;
	static volatile int16_t x663 = INT16_MIN;
	static int64_t x664 = 43487116LL;

	t53 = (x661/(x662>>(x663/x664)));

	if (t53 != -20) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x677 = INT32_MAX;
	uint64_t x678 = 108LLU;
	uint16_t x679 = 17774U;
	static int16_t x680 = INT16_MIN;

	t54 = (x677/(x678>>(x679/x680)));

	if (t54 != 19884107LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x681 = UINT64_MAX;
	uint16_t x683 = 30514U;
	uint64_t t55 = 6691300LLU;

	t55 = (x681/(x682>>(x683/x684)));

	if (t55 != 6148914691236517205LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x689 = -1LL;
	int64_t x690 = INT64_MAX;
	int16_t x691 = INT16_MAX;

	t56 = (x689/(x690>>(x691/x692)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x697 = INT32_MIN;
	uint64_t x698 = 34012545986911LLU;
	uint16_t x699 = 1573U;
	uint8_t x700 = UINT8_MAX;
	static volatile uint64_t t57 = 28514249086013LLU;

	t57 = (x697/(x698>>(x699/x700)));

	if (t57 != 34710474LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x710 = 236844526519277947LLU;
	static uint16_t x711 = 1U;
	uint32_t x712 = UINT32_MAX;
	static uint64_t t58 = 928682LLU;

	t58 = (x709/(x710>>(x711/x712)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x721 = -4;
	uint32_t x722 = 14U;
	int8_t x723 = 0;
	static volatile uint32_t x724 = 50074438U;
	uint32_t t59 = 14213U;

	t59 = (x721/(x722>>(x723/x724)));

	if (t59 != 306783378U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x725 = -1LL;
	uint8_t x726 = 14U;
	uint8_t x727 = 0U;
	volatile int64_t t60 = -13287LL;

	t60 = (x725/(x726>>(x727/x728)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x729 = -1LL;
	uint64_t x731 = 2837LLU;
	static volatile int64_t x732 = INT64_MIN;
	volatile int64_t t61 = -83192371751773LL;

	t61 = (x729/(x730>>(x731/x732)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x733 = INT16_MAX;
	int8_t x734 = INT8_MAX;
	uint64_t x735 = 204LLU;
	static volatile int32_t x736 = -1;
	volatile int32_t t62 = 227336;

	t62 = (x733/(x734>>(x735/x736)));

	if (t62 != 258) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x737 = INT16_MAX;
	static volatile uint8_t x738 = 10U;
	static uint8_t x740 = UINT8_MAX;

	t63 = (x737/(x738>>(x739/x740)));

	if (t63 != 3276) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x765 = 202U;
	uint8_t x766 = UINT8_MAX;
	uint8_t x767 = 1U;

	t64 = (x765/(x766>>(x767/x768)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x777 = -1;
	int16_t x778 = 2;
	uint32_t x779 = 820U;
	int32_t x780 = INT32_MIN;
	volatile int32_t t65 = -1;

	t65 = (x777/(x778>>(x779/x780)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x797 = 449830560541367780LLU;
	uint64_t x798 = 2124663839631364LLU;
	static volatile int8_t x799 = INT8_MAX;
	volatile uint64_t x800 = UINT64_MAX;
	static uint64_t t66 = 205LLU;

	t66 = (x797/(x798>>(x799/x800)));

	if (t66 != 211LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x805 = -1;
	volatile uint32_t x806 = 5U;
	int32_t x807 = INT32_MAX;
	int64_t x808 = INT64_MIN;
	volatile uint32_t t67 = 1407446900U;

	t67 = (x805/(x806>>(x807/x808)));

	if (t67 != 858993459U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x809 = 0U;
	uint8_t x810 = 11U;
	uint8_t x812 = UINT8_MAX;
	volatile int32_t t68 = 1;

	t68 = (x809/(x810>>(x811/x812)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x821 = INT16_MIN;
	int8_t x822 = 39;
	int32_t x823 = -1;
	volatile int32_t t69 = -1621;

	t69 = (x821/(x822>>(x823/x824)));

	if (t69 != -840) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x825 = UINT64_MAX;
	static uint32_t x826 = 144688U;
	volatile int16_t x827 = INT16_MAX;
	volatile int64_t x828 = INT64_MIN;
	static uint64_t t70 = 47118963188LLU;

	t70 = (x825/(x826>>(x827/x828)));

	if (t70 != 127493254960394LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x829 = 5;
	int32_t x830 = 716306517;
	uint8_t x831 = UINT8_MAX;
	uint64_t x832 = 20110180658753351LLU;

	t71 = (x829/(x830>>(x831/x832)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x849 = 5631U;
	uint8_t x851 = 6U;
	volatile uint16_t x852 = 7143U;

	t72 = (x849/(x850>>(x851/x852)));

	if (t72 != 2815) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x865 = 12818U;
	volatile uint32_t x866 = UINT32_MAX;
	static int64_t x867 = -1LL;
	int64_t x868 = 2863330LL;
	static volatile uint32_t t73 = 517132U;

	t73 = (x865/(x866>>(x867/x868)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x893 = 7LL;
	static volatile uint8_t x894 = UINT8_MAX;
	int64_t x896 = 1201924528536693LL;
	static int64_t t74 = -60137715532327LL;

	t74 = (x893/(x894>>(x895/x896)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x897 = INT8_MIN;
	uint16_t x898 = 14578U;
	volatile int8_t x899 = -1;
	int8_t x900 = -1;
	int32_t t75 = 12348;

	t75 = (x897/(x898>>(x899/x900)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x901 = -1;
	uint64_t x902 = 21454LLU;
	static uint8_t x903 = UINT8_MAX;
	uint32_t x904 = UINT32_MAX;

	t76 = (x901/(x902>>(x903/x904)));

	if (t76 != 859827727869374LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x905 = INT16_MAX;
	static int16_t x906 = 4296;
	uint32_t x907 = 5174U;
	int64_t x908 = INT64_MAX;
	int32_t t77 = -25494;

	t77 = (x905/(x906>>(x907/x908)));

	if (t77 != 7) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x917 = 3U;
	volatile int32_t t78 = 281821139;

	t78 = (x917/(x918>>(x919/x920)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x921 = INT8_MAX;
	int16_t x924 = -1;
	volatile int32_t t79 = -177886;

	t79 = (x921/(x922>>(x923/x924)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x929 = INT8_MIN;
	uint32_t x931 = 40U;
	uint8_t x932 = UINT8_MAX;

	t80 = (x929/(x930>>(x931/x932)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x961 = 17U;
	uint8_t x962 = 2U;
	static int32_t t81 = -94;

	t81 = (x961/(x962>>(x963/x964)));

	if (t81 != 8) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x966 = 661U;
	uint16_t x967 = 30U;

	t82 = (x965/(x966>>(x967/x968)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x969 = INT8_MAX;
	int32_t x970 = 144;
	uint16_t x971 = 13215U;
	uint32_t x972 = 2617140U;
	int32_t t83 = -445;

	t83 = (x969/(x970>>(x971/x972)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x997 = INT8_MIN;
	int32_t x998 = 7;
	static volatile uint16_t x999 = 767U;
	uint64_t x1000 = UINT64_MAX;
	volatile int32_t t84 = -125075;

	t84 = (x997/(x998>>(x999/x1000)));

	if (t84 != -18) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x1036 = 334014139400LL;
	int64_t t85 = 8840402067030130LL;

	t85 = (x1033/(x1034>>(x1035/x1036)));

	if (t85 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1045 = -16024;
	static int32_t x1047 = INT32_MIN;
	uint64_t x1048 = UINT64_MAX;

	t86 = (x1045/(x1046>>(x1047/x1048)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x1049 = INT64_MIN;
	static int32_t x1050 = INT32_MAX;
	int32_t x1051 = INT32_MIN;
	static uint32_t x1052 = UINT32_MAX;
	volatile int64_t t87 = -225614772LL;

	t87 = (x1049/(x1050>>(x1051/x1052)));

	if (t87 != -4294967298LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x1053 = UINT64_MAX;
	int32_t x1054 = 720;
	uint64_t x1055 = UINT64_MAX;
	uint64_t t88 = 0LLU;

	t88 = (x1053/(x1054>>(x1055/x1056)));

	if (t88 != 51240955760304310LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x1058 = 5U;
	uint64_t t89 = 8119068560LLU;

	t89 = (x1057/(x1058>>(x1059/x1060)));

	if (t89 != 80327010432LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1061 = INT16_MIN;
	volatile int32_t x1062 = 81334;
	uint16_t x1063 = 0U;
	int8_t x1064 = INT8_MIN;
	volatile int32_t t90 = -44219;

	t90 = (x1061/(x1062>>(x1063/x1064)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x1073 = 239218U;
	uint64_t x1074 = 6246LLU;
	volatile uint8_t x1075 = UINT8_MAX;
	static uint64_t t91 = 14626795804LLU;

	t91 = (x1073/(x1074>>(x1075/x1076)));

	if (t91 != 38LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x1089 = 423U;
	int32_t x1090 = 6472000;
	volatile int16_t x1091 = -25;
	volatile int8_t x1092 = INT8_MAX;
	volatile int32_t t92 = 5573549;

	t92 = (x1089/(x1090>>(x1091/x1092)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x1129 = INT64_MAX;
	volatile int64_t x1130 = INT64_MAX;
	static volatile int64_t x1131 = -6LL;
	uint32_t x1132 = UINT32_MAX;
	int64_t t93 = 208922LL;

	t93 = (x1129/(x1130>>(x1131/x1132)));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x1149 = 2;
	static int16_t x1151 = -114;
	int32_t x1152 = -17461;
	volatile uint64_t t94 = 1555565324515752498LLU;

	t94 = (x1149/(x1150>>(x1151/x1152)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x1153 = INT16_MIN;
	static volatile uint32_t x1154 = UINT32_MAX;
	int32_t x1155 = -794;
	uint16_t x1156 = UINT16_MAX;
	uint32_t t95 = 83345894U;

	t95 = (x1153/(x1154>>(x1155/x1156)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x1198 = UINT8_MAX;
	volatile uint8_t x1199 = 0U;
	volatile int32_t x1200 = -124122250;
	volatile int32_t t96 = 3764;

	t96 = (x1197/(x1198>>(x1199/x1200)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x1213 = -1;
	int16_t x1214 = INT16_MAX;
	uint32_t x1215 = 363603861U;
	static int8_t x1216 = -1;
	volatile int32_t t97 = -185;

	t97 = (x1213/(x1214>>(x1215/x1216)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x1225 = 1U;
	uint8_t x1226 = 50U;
	uint32_t x1227 = UINT32_MAX;
	int64_t x1228 = INT64_MIN;
	volatile int32_t t98 = 3931;

	t98 = (x1225/(x1226>>(x1227/x1228)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1257 = INT16_MIN;
	uint64_t x1258 = 418218625LLU;
	int8_t x1259 = 0;
	volatile int8_t x1260 = 7;
	static uint64_t t99 = 233239LLU;

	t99 = (x1257/(x1258>>(x1259/x1260)));

	if (t99 != 44107897092LLU) { NG(); } else { ; }
	
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

