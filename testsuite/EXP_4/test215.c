#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = 9113860;
int32_t x15 = -1;
int64_t t1 = INT64_MAX;
uint8_t x29 = UINT8_MAX;
static uint64_t t7 = 54439075507LLU;
static int8_t x121 = 0;
int16_t x122 = INT16_MAX;
int16_t x123 = INT16_MIN;
static uint64_t x155 = UINT64_MAX;
int32_t t10 = 357;
int8_t x178 = 1;
static uint32_t x180 = UINT32_MAX;
uint32_t x217 = UINT32_MAX;
int8_t x219 = INT8_MIN;
int16_t x223 = -11;
volatile int32_t t16 = 647678255;
static volatile int64_t x239 = INT64_MIN;
volatile int32_t t19 = 64739767;
static uint32_t x245 = 62527050U;
int8_t x266 = -1;
int32_t x282 = -374271;
uint32_t t23 = 0U;
volatile int16_t x293 = 168;
static uint16_t x329 = 337U;
uint8_t x336 = 11U;
volatile int32_t t31 = 8089112;
int8_t x363 = -1;
volatile int32_t t32 = -228;
volatile int16_t x371 = INT16_MIN;
static volatile uint64_t t33 = UINT64_MAX;
uint16_t x396 = 1U;
volatile int32_t t34 = 49;
static volatile int8_t x420 = -60;
int16_t x434 = INT16_MAX;
int8_t x480 = -2;
volatile uint64_t t40 = 937832206874LLU;
int64_t x494 = -1LL;
static int8_t x496 = 1;
volatile int32_t t45 = 909537;
volatile uint32_t x527 = UINT32_MAX;
int32_t t46 = 87;
int16_t x529 = INT16_MAX;
int32_t x532 = -99054;
static volatile int64_t x534 = -1LL;
volatile uint64_t x535 = 77879870LLU;
uint16_t x538 = 6U;
volatile int16_t x540 = INT16_MIN;
volatile int32_t t49 = 1;
volatile int32_t x569 = INT32_MAX;
volatile int32_t x571 = -217052;
volatile int16_t x581 = 835;
volatile uint16_t x584 = UINT16_MAX;
uint32_t x588 = 526538241U;
int32_t t52 = -26;
uint16_t x621 = 7041U;
uint8_t x623 = 29U;
int32_t t54 = 3047278;
uint16_t x625 = 271U;
int64_t x650 = -1LL;
static volatile int8_t x651 = -1;
uint32_t t56 = UINT32_MAX;
volatile int8_t x661 = INT8_MAX;
volatile int32_t t57 = -1811;
volatile uint32_t x674 = 141U;
uint16_t x691 = 27U;
int32_t t59 = -10944652;
int64_t x757 = 31442LL;
uint64_t x758 = 5156281731LLU;
static int16_t x759 = -9;
static volatile int64_t t62 = 185LL;
volatile int64_t x783 = INT64_MIN;
uint64_t t65 = 599742311660627LLU;
uint16_t x795 = 5180U;
int16_t x802 = 0;
static int64_t x803 = INT64_MAX;
int32_t t69 = 486;
uint16_t x833 = 1871U;
volatile uint64_t x835 = 2724455566882496158LLU;
static uint32_t x847 = 451201940U;
uint32_t x848 = UINT32_MAX;
static uint8_t x852 = 4U;
volatile uint32_t t73 = 9017787U;
static int16_t x968 = INT16_MIN;
uint16_t x979 = UINT16_MAX;
static int8_t x982 = INT8_MIN;
int32_t x1001 = 450996;
uint32_t x1006 = 63491U;
volatile uint64_t t82 = 58780621124318LLU;
volatile int32_t x1035 = INT32_MAX;
static uint8_t x1036 = 3U;
uint16_t x1040 = UINT16_MAX;
static uint8_t x1080 = 68U;
volatile int32_t t88 = -7550653;
volatile uint16_t x1135 = UINT16_MAX;
static uint16_t x1137 = 2156U;
int8_t x1138 = -1;
int16_t x1179 = 11458;
volatile int16_t x1188 = 1672;
int8_t x1197 = 3;
int16_t x1203 = INT16_MIN;
int16_t x1205 = INT16_MAX;
int32_t x1208 = 14;


void f0(void) {
	int8_t x9 = INT8_MAX;
	int8_t x10 = INT8_MAX;
	volatile int64_t x11 = 479439504045338349LL;
	static int8_t x12 = INT8_MIN;

	t0 = (x9>>(x10/(x11-x12)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = INT64_MAX;
	int8_t x14 = 0;
	static uint32_t x16 = 3193U;

	t1 = (x13>>(x14/(x15-x16)));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x21 = UINT64_MAX;
	int32_t x22 = 0;
	int8_t x23 = 0;
	uint16_t x24 = 1013U;
	uint64_t t2 = UINT64_MAX;

	t2 = (x21>>(x22/(x23-x24)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x30 = 766400137U;
	int64_t x31 = INT64_MIN;
	static int8_t x32 = INT8_MIN;
	static int32_t t3 = 45;

	t3 = (x29>>(x30/(x31-x32)));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x33 = UINT64_MAX;
	int8_t x34 = INT8_MIN;
	volatile int64_t x35 = INT64_MAX;
	uint8_t x36 = 13U;
	uint64_t t4 = UINT64_MAX;

	t4 = (x33>>(x34/(x35-x36)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x57 = 1894U;
	uint8_t x58 = UINT8_MAX;
	int32_t x59 = 15;
	int32_t x60 = 351058377;
	static volatile int32_t t5 = -7;

	t5 = (x57>>(x58/(x59-x60)));

	if (t5 != 1894) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x73 = 15922U;
	static volatile int8_t x74 = INT8_MAX;
	uint16_t x75 = 2U;
	int64_t x76 = 2414970711790LL;
	volatile int32_t t6 = -14;

	t6 = (x73>>(x74/(x75-x76)));

	if (t6 != 15922) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x97 = 49398088079709LLU;
	int8_t x98 = -1;
	static uint64_t x99 = 3829752LLU;
	int64_t x100 = INT64_MAX;

	t7 = (x97>>(x98/(x99-x100)));

	if (t7 != 24699044039854LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x101 = INT32_MAX;
	uint16_t x102 = 314U;
	int32_t x103 = 57;
	int16_t x104 = INT16_MIN;
	volatile int32_t t8 = INT32_MAX;

	t8 = (x101>>(x102/(x103-x104)));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x124 = UINT32_MAX;
	volatile int32_t t9 = 3525826;

	t9 = (x121>>(x122/(x123-x124)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x153 = INT8_MAX;
	uint64_t x154 = UINT64_MAX;
	volatile int32_t x156 = INT32_MAX;

	t10 = (x153>>(x154/(x155-x156)));

	if (t10 != 63) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x165 = 61;
	int64_t x166 = -1LL;
	int16_t x167 = INT16_MIN;
	uint32_t x168 = 788U;
	volatile int32_t t11 = -857822905;

	t11 = (x165>>(x166/(x167-x168)));

	if (t11 != 61) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x173 = 61089922634LLU;
	int32_t x174 = -1;
	int32_t x175 = INT32_MIN;
	int64_t x176 = INT64_MIN;
	static volatile uint64_t t12 = 6371557260504308LLU;

	t12 = (x173>>(x174/(x175-x176)));

	if (t12 != 61089922634LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x177 = 0U;
	uint8_t x179 = 5U;
	int32_t t13 = -4037204;

	t13 = (x177>>(x178/(x179-x180)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x189 = 5925475U;
	uint32_t x190 = 662U;
	static int16_t x191 = -1;
	int32_t x192 = INT32_MIN;
	uint32_t t14 = 65531U;

	t14 = (x189>>(x190/(x191-x192)));

	if (t14 != 5925475U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x218 = -2;
	int32_t x220 = 2048783;
	uint32_t t15 = UINT32_MAX;

	t15 = (x217>>(x218/(x219-x220)));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x221 = 59U;
	int8_t x222 = INT8_MIN;
	uint8_t x224 = 15U;

	t16 = (x221>>(x222/(x223-x224)));

	if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x229 = UINT16_MAX;
	uint8_t x230 = UINT8_MAX;
	static int64_t x231 = -72664519723591418LL;
	uint8_t x232 = 12U;
	int32_t t17 = -296;

	t17 = (x229>>(x230/(x231-x232)));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x233 = 23826611;
	uint16_t x234 = 9U;
	int64_t x235 = INT64_MIN;
	int8_t x236 = -27;
	volatile int32_t t18 = 210994240;

	t18 = (x233>>(x234/(x235-x236)));

	if (t18 != 23826611) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x237 = 9U;
	uint32_t x238 = UINT32_MAX;
	uint64_t x240 = 2051182LLU;

	t19 = (x237>>(x238/(x239-x240)));

	if (t19 != 9) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x246 = INT32_MAX;
	uint64_t x247 = UINT64_MAX;
	uint32_t x248 = 184837U;
	uint32_t t20 = 13781832U;

	t20 = (x245>>(x246/(x247-x248)));

	if (t20 != 62527050U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x265 = 381041837U;
	static uint32_t x267 = UINT32_MAX;
	int64_t x268 = 30522389LL;
	static uint32_t t21 = 7868U;

	t21 = (x265>>(x266/(x267-x268)));

	if (t21 != 381041837U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x277 = UINT32_MAX;
	volatile uint8_t x278 = UINT8_MAX;
	uint32_t x279 = 311872U;
	int64_t x280 = 1059100214873849078LL;
	volatile uint32_t t22 = UINT32_MAX;

	t22 = (x277>>(x278/(x279-x280)));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x281 = 1172388442U;
	volatile int8_t x283 = INT8_MAX;
	volatile int16_t x284 = INT16_MAX;

	t23 = (x281>>(x282/(x283-x284)));

	if (t23 != 572455U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x285 = 161LLU;
	static uint16_t x286 = 262U;
	uint16_t x287 = UINT16_MAX;
	int16_t x288 = -2;
	static uint64_t t24 = 4024031553793800132LLU;

	t24 = (x285>>(x286/(x287-x288)));

	if (t24 != 161LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x289 = 63LLU;
	volatile uint64_t x290 = UINT64_MAX;
	static int16_t x291 = INT16_MIN;
	uint16_t x292 = 1U;
	static volatile uint64_t t25 = 589763027950818986LLU;

	t25 = (x289>>(x290/(x291-x292)));

	if (t25 != 31LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x294 = INT8_MIN;
	int16_t x295 = 63;
	uint8_t x296 = UINT8_MAX;
	static volatile int32_t t26 = -28;

	t26 = (x293>>(x294/(x295-x296)));

	if (t26 != 168) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x297 = INT32_MAX;
	int64_t x298 = INT64_MIN;
	static int64_t x299 = INT64_MIN;
	static int8_t x300 = -1;
	volatile int32_t t27 = 30134884;

	t27 = (x297>>(x298/(x299-x300)));

	if (t27 != 1073741823) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x309 = UINT16_MAX;
	int16_t x310 = 380;
	int16_t x311 = INT16_MAX;
	static int16_t x312 = INT16_MIN;
	volatile int32_t t28 = -1;

	t28 = (x309>>(x310/(x311-x312)));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x325 = 13;
	int8_t x326 = -1;
	uint32_t x327 = 119U;
	volatile int32_t x328 = -989827568;
	static volatile int32_t t29 = -404;

	t29 = (x325>>(x326/(x327-x328)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x330 = INT8_MIN;
	int16_t x331 = INT16_MIN;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t30 = -2742050;

	t30 = (x329>>(x330/(x331-x332)));

	if (t30 != 337) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x333 = UINT8_MAX;
	static volatile uint32_t x334 = 20U;
	int8_t x335 = 0;

	t31 = (x333>>(x334/(x335-x336)));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x361 = UINT8_MAX;
	int16_t x362 = INT16_MIN;
	int64_t x364 = INT64_MIN;

	t32 = (x361>>(x362/(x363-x364)));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x369 = UINT64_MAX;
	int64_t x370 = -1LL;
	static int32_t x372 = INT32_MIN;

	t33 = (x369>>(x370/(x371-x372)));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x393 = 0U;
	static volatile uint32_t x394 = 15U;
	volatile int16_t x395 = INT16_MIN;

	t34 = (x393>>(x394/(x395-x396)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x417 = 109653;
	volatile int16_t x418 = 7;
	int64_t x419 = 2LL;
	volatile int32_t t35 = -43029798;

	t35 = (x417>>(x418/(x419-x420)));

	if (t35 != 109653) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x425 = 1LLU;
	int16_t x426 = 3118;
	int32_t x427 = 7771;
	volatile int32_t x428 = 952880537;
	volatile uint64_t t36 = 9839403443LLU;

	t36 = (x425>>(x426/(x427-x428)));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x429 = 116;
	static int64_t x430 = 53655LL;
	static int64_t x431 = -199206936305LL;
	volatile int32_t x432 = INT32_MIN;
	static int32_t t37 = -626;

	t37 = (x429>>(x430/(x431-x432)));

	if (t37 != 116) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x433 = 63U;
	int16_t x435 = -25;
	static int32_t x436 = INT32_MIN;
	int32_t t38 = -31607922;

	t38 = (x433>>(x434/(x435-x436)));

	if (t38 != 63) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x477 = INT32_MAX;
	static uint8_t x478 = 3U;
	uint32_t x479 = 11521U;
	int32_t t39 = INT32_MAX;

	t39 = (x477>>(x478/(x479-x480)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x485 = 14LLU;
	volatile uint32_t x486 = 5U;
	uint32_t x487 = 1325U;
	volatile uint8_t x488 = 3U;

	t40 = (x485>>(x486/(x487-x488)));

	if (t40 != 14LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x489 = 12U;
	int64_t x490 = 11409LL;
	static int16_t x491 = INT16_MIN;
	static int16_t x492 = 9;
	int32_t t41 = -6970;

	t41 = (x489>>(x490/(x491-x492)));

	if (t41 != 12) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x493 = 3U;
	uint16_t x495 = 364U;
	volatile int32_t t42 = -523846;

	t42 = (x493>>(x494/(x495-x496)));

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x501 = 4;
	static uint8_t x502 = 10U;
	uint16_t x503 = 30795U;
	int64_t x504 = -370LL;
	volatile int32_t t43 = -70758587;

	t43 = (x501>>(x502/(x503-x504)));

	if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x509 = UINT16_MAX;
	static int64_t x510 = -1LL;
	int8_t x511 = INT8_MIN;
	int32_t x512 = INT32_MIN;
	int32_t t44 = 0;

	t44 = (x509>>(x510/(x511-x512)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x517 = INT16_MAX;
	int8_t x518 = INT8_MIN;
	volatile int8_t x519 = INT8_MIN;
	static int64_t x520 = INT64_MIN;

	t45 = (x517>>(x518/(x519-x520)));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x525 = 0U;
	int16_t x526 = INT16_MIN;
	uint8_t x528 = UINT8_MAX;

	t46 = (x525>>(x526/(x527-x528)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x530 = 0U;
	uint8_t x531 = UINT8_MAX;
	int32_t t47 = -68233957;

	t47 = (x529>>(x530/(x531-x532)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x533 = 7757;
	static uint32_t x536 = 327322602U;
	static volatile int32_t t48 = 4673;

	t48 = (x533>>(x534/(x535-x536)));

	if (t48 != 3878) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x537 = UINT16_MAX;
	int8_t x539 = INT8_MAX;

	t49 = (x537>>(x538/(x539-x540)));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x570 = INT8_MIN;
	static int16_t x572 = -1;
	volatile int32_t t50 = INT32_MAX;

	t50 = (x569>>(x570/(x571-x572)));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x582 = 0U;
	int8_t x583 = INT8_MIN;
	volatile int32_t t51 = 1;

	t51 = (x581>>(x582/(x583-x584)));

	if (t51 != 835) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x585 = INT8_MAX;
	uint16_t x586 = UINT16_MAX;
	int8_t x587 = -1;

	t52 = (x585>>(x586/(x587-x588)));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x589 = 30;
	int8_t x590 = -1;
	static uint64_t x591 = 1243521920417102443LLU;
	static int16_t x592 = INT16_MAX;
	int32_t t53 = -43;

	t53 = (x589>>(x590/(x591-x592)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x622 = -1;
	int32_t x624 = 218206;

	t54 = (x621>>(x622/(x623-x624)));

	if (t54 != 7041) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x626 = 4U;
	static int32_t x627 = -60765742;
	static int8_t x628 = -1;
	static volatile int32_t t55 = 13416084;

	t55 = (x625>>(x626/(x627-x628)));

	if (t55 != 271) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x649 = UINT32_MAX;
	volatile int16_t x652 = 1462;

	t56 = (x649>>(x650/(x651-x652)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x662 = 42320U;
	int8_t x663 = -3;
	uint32_t x664 = 25233U;

	t57 = (x661>>(x662/(x663-x664)));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x673 = UINT8_MAX;
	uint8_t x675 = UINT8_MAX;
	volatile uint16_t x676 = UINT16_MAX;
	volatile int32_t t58 = 4155785;

	t58 = (x673>>(x674/(x675-x676)));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x689 = 262731181;
	int16_t x690 = 46;
	static int8_t x692 = INT8_MIN;

	t59 = (x689>>(x690/(x691-x692)));

	if (t59 != 262731181) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x701 = 10;
	int8_t x702 = INT8_MIN;
	int16_t x703 = -10633;
	uint8_t x704 = 0U;
	volatile int32_t t60 = 68;

	t60 = (x701>>(x702/(x703-x704)));

	if (t60 != 10) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x725 = INT32_MAX;
	static uint32_t x726 = 393U;
	volatile int32_t x727 = INT32_MIN;
	int8_t x728 = -2;
	volatile int32_t t61 = INT32_MAX;

	t61 = (x725>>(x726/(x727-x728)));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x760 = UINT8_MAX;

	t62 = (x757>>(x758/(x759-x760)));

	if (t62 != 31442LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x773 = INT64_MAX;
	int8_t x774 = INT8_MAX;
	static uint8_t x775 = 39U;
	volatile int32_t x776 = INT32_MAX;
	int64_t t63 = INT64_MAX;

	t63 = (x773>>(x774/(x775-x776)));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x781 = 15LLU;
	int32_t x782 = INT32_MAX;
	int16_t x784 = -1;
	uint64_t t64 = 1607833561LLU;

	t64 = (x781>>(x782/(x783-x784)));

	if (t64 != 15LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x785 = 8088864972814990184LLU;
	static volatile int32_t x786 = INT32_MIN;
	int16_t x787 = -897;
	static uint32_t x788 = 186315U;

	t65 = (x785>>(x786/(x787-x788)));

	if (t65 != 8088864972814990184LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x793 = INT8_MAX;
	int64_t x794 = -1LL;
	int16_t x796 = -1932;
	volatile int32_t t66 = -12;

	t66 = (x793>>(x794/(x795-x796)));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x801 = 4659421335LLU;
	uint32_t x804 = 27440U;
	static uint64_t t67 = 45666160103199992LLU;

	t67 = (x801>>(x802/(x803-x804)));

	if (t67 != 4659421335LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x809 = 3;
	static int32_t x810 = -1;
	volatile int8_t x811 = -1;
	int32_t x812 = -10087991;
	volatile int32_t t68 = -565754;

	t68 = (x809>>(x810/(x811-x812)));

	if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x817 = 6297;
	uint64_t x818 = UINT64_MAX;
	volatile uint64_t x819 = UINT64_MAX;
	uint8_t x820 = UINT8_MAX;

	t69 = (x817>>(x818/(x819-x820)));

	if (t69 != 3148) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x834 = UINT8_MAX;
	uint32_t x836 = UINT32_MAX;
	int32_t t70 = 52449;

	t70 = (x833>>(x834/(x835-x836)));

	if (t70 != 1871) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x845 = 37U;
	int8_t x846 = 18;
	volatile int32_t t71 = -60253;

	t71 = (x845>>(x846/(x847-x848)));

	if (t71 != 37) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x849 = UINT32_MAX;
	static int64_t x850 = -1LL;
	static volatile int32_t x851 = INT32_MAX;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (x849>>(x850/(x851-x852)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x857 = 4628533U;
	static uint32_t x858 = 3U;
	int64_t x859 = INT64_MIN;
	int16_t x860 = -1;

	t73 = (x857>>(x858/(x859-x860)));

	if (t73 != 4628533U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x881 = 1;
	int8_t x882 = INT8_MIN;
	volatile int8_t x883 = INT8_MIN;
	uint16_t x884 = 457U;
	volatile int32_t t74 = 61785;

	t74 = (x881>>(x882/(x883-x884)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x901 = 75U;
	int16_t x902 = -1;
	volatile int16_t x903 = 1406;
	static int64_t x904 = -6LL;
	static int32_t t75 = -1;

	t75 = (x901>>(x902/(x903-x904)));

	if (t75 != 75) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x925 = 1U;
	uint8_t x926 = UINT8_MAX;
	static uint64_t x927 = 1724901678LLU;
	static int64_t x928 = INT64_MIN;
	int32_t t76 = -7;

	t76 = (x925>>(x926/(x927-x928)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x965 = 8204576;
	volatile int32_t x966 = -1;
	int8_t x967 = INT8_MAX;
	int32_t t77 = -3724;

	t77 = (x965>>(x966/(x967-x968)));

	if (t77 != 8204576) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x969 = 12;
	static volatile int16_t x970 = -61;
	int64_t x971 = INT64_MIN;
	int16_t x972 = -1;
	int32_t t78 = -96;

	t78 = (x969>>(x970/(x971-x972)));

	if (t78 != 12) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x977 = 14953U;
	int64_t x978 = 226968LL;
	static int32_t x980 = -1;
	volatile uint32_t t79 = 40U;

	t79 = (x977>>(x978/(x979-x980)));

	if (t79 != 1869U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x981 = 1U;
	int16_t x983 = INT16_MIN;
	uint32_t x984 = UINT32_MAX;
	int32_t t80 = 24202005;

	t80 = (x981>>(x982/(x983-x984)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1002 = 1U;
	volatile int16_t x1003 = -1;
	uint16_t x1004 = 16U;
	static volatile int32_t t81 = 486;

	t81 = (x1001>>(x1002/(x1003-x1004)));

	if (t81 != 450996) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1005 = 1531LLU;
	static volatile uint32_t x1007 = UINT32_MAX;
	int16_t x1008 = INT16_MIN;

	t82 = (x1005>>(x1006/(x1007-x1008)));

	if (t82 != 765LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x1033 = 0U;
	static int32_t x1034 = 16;
	volatile int32_t t83 = -26;

	t83 = (x1033>>(x1034/(x1035-x1036)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x1037 = UINT16_MAX;
	int16_t x1038 = -2;
	volatile int8_t x1039 = INT8_MIN;
	volatile int32_t t84 = -248054963;

	t84 = (x1037>>(x1038/(x1039-x1040)));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1041 = 4517500083719240531LLU;
	static int16_t x1042 = INT16_MIN;
	static volatile int64_t x1043 = INT64_MIN;
	int32_t x1044 = -1;
	uint64_t t85 = 4LLU;

	t85 = (x1041>>(x1042/(x1043-x1044)));

	if (t85 != 4517500083719240531LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x1069 = 2310U;
	uint16_t x1070 = 1U;
	int64_t x1071 = -4383629LL;
	uint16_t x1072 = 7U;
	volatile int32_t t86 = 55;

	t86 = (x1069>>(x1070/(x1071-x1072)));

	if (t86 != 2310) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x1077 = 669138745U;
	uint64_t x1078 = 3524398512930LLU;
	volatile int64_t x1079 = INT64_MAX;
	volatile uint32_t t87 = 414649U;

	t87 = (x1077>>(x1078/(x1079-x1080)));

	if (t87 != 669138745U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x1093 = 8U;
	static int8_t x1094 = INT8_MAX;
	volatile int32_t x1095 = INT32_MAX;
	static int64_t x1096 = -135256837891198243LL;

	t88 = (x1093>>(x1094/(x1095-x1096)));

	if (t88 != 8) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x1117 = 6U;
	int16_t x1118 = 14;
	uint64_t x1119 = 1LLU;
	int8_t x1120 = 30;
	static volatile int32_t t89 = -308118;

	t89 = (x1117>>(x1118/(x1119-x1120)));

	if (t89 != 6) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x1133 = UINT16_MAX;
	volatile uint8_t x1134 = 8U;
	int32_t x1136 = 1894861;
	static volatile int32_t t90 = -294;

	t90 = (x1133>>(x1134/(x1135-x1136)));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1139 = -1;
	static uint32_t x1140 = 38U;
	volatile int32_t t91 = 29258783;

	t91 = (x1137>>(x1138/(x1139-x1140)));

	if (t91 != 1078) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x1157 = INT64_MAX;
	int8_t x1158 = 0;
	static volatile uint16_t x1159 = UINT16_MAX;
	int32_t x1160 = 124790456;
	int64_t t92 = INT64_MAX;

	t92 = (x1157>>(x1158/(x1159-x1160)));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x1177 = 613;
	static int16_t x1178 = 1;
	volatile uint32_t x1180 = 4501U;
	volatile int32_t t93 = 59;

	t93 = (x1177>>(x1178/(x1179-x1180)));

	if (t93 != 613) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x1181 = INT16_MAX;
	uint32_t x1182 = 1656U;
	int8_t x1183 = -19;
	int32_t x1184 = INT32_MIN;
	volatile int32_t t94 = 232113;

	t94 = (x1181>>(x1182/(x1183-x1184)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1185 = INT8_MAX;
	int64_t x1186 = 48248LL;
	int64_t x1187 = INT64_MAX;
	int32_t t95 = -3;

	t95 = (x1185>>(x1186/(x1187-x1188)));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x1193 = 18U;
	static int8_t x1194 = 0;
	int8_t x1195 = -51;
	volatile int64_t x1196 = -500LL;
	static volatile int32_t t96 = 58561395;

	t96 = (x1193>>(x1194/(x1195-x1196)));

	if (t96 != 18) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1198 = 315U;
	static uint64_t x1199 = 231375109LLU;
	int16_t x1200 = -1121;
	int32_t t97 = 99638;

	t97 = (x1197>>(x1198/(x1199-x1200)));

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1201 = INT32_MAX;
	int8_t x1202 = -37;
	int32_t x1204 = -41516478;
	int32_t t98 = INT32_MAX;

	t98 = (x1201>>(x1202/(x1203-x1204)));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x1206 = -39;
	int8_t x1207 = INT8_MAX;
	int32_t t99 = 4;

	t99 = (x1205>>(x1206/(x1207-x1208)));

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

