#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -27;
uint32_t x6 = 784068080U;
int64_t t0 = -3LL;
volatile int8_t x24 = 1;
static uint32_t t1 = 12330562U;
volatile int16_t x44 = INT16_MIN;
int16_t x46 = INT16_MIN;
volatile int64_t x47 = 1924956936530168LL;
int32_t x87 = -1;
volatile int64_t t5 = 69307239LL;
volatile int16_t x98 = 1;
static int64_t x99 = 237327630001LL;
int64_t t6 = 2043087357190988379LL;
static volatile int64_t t7 = -28080266LL;
int16_t x137 = INT16_MAX;
static volatile uint16_t x145 = 250U;
int8_t x147 = INT8_MIN;
volatile int32_t t12 = 5531609;
int16_t x166 = -1;
int32_t x167 = 3918;
int8_t x168 = INT8_MIN;
int32_t t14 = -26;
volatile uint16_t x169 = 5U;
uint32_t x182 = 620U;
int64_t x195 = -13674LL;
uint16_t x196 = 6616U;
volatile int16_t x199 = 1;
int32_t x201 = -5;
volatile int32_t x220 = INT32_MAX;
uint8_t x246 = 18U;
static int64_t x248 = -1LL;
volatile int64_t t23 = -1660340557955590997LL;
int32_t x255 = INT32_MAX;
uint32_t x258 = 261242U;
int64_t t26 = 5405LL;
int32_t x269 = -12146;
uint8_t x292 = 8U;
volatile int8_t x294 = 1;
static volatile int64_t t29 = 22892825506636244LL;
volatile uint16_t x303 = 703U;
int8_t x304 = INT8_MIN;
volatile int32_t x322 = -32495829;
static volatile uint32_t x372 = UINT32_MAX;
static int16_t x373 = INT16_MIN;
int16_t x376 = -87;
uint8_t x380 = 14U;
static int32_t x440 = INT32_MIN;
static volatile uint64_t t41 = 205372LLU;
int16_t x519 = INT16_MAX;
int64_t x549 = INT64_MAX;
volatile int64_t t49 = 4LL;
volatile uint8_t x574 = 1U;
uint8_t x582 = UINT8_MAX;
static int32_t x583 = -1;
int64_t x591 = INT64_MAX;
volatile uint32_t x610 = UINT32_MAX;
int64_t x626 = -1LL;
int32_t x627 = 46;
uint64_t x632 = 1426353460057LLU;
static volatile int64_t t57 = -802LL;
uint64_t t59 = 117LLU;
volatile int64_t x671 = -335LL;
int32_t x677 = -1;
int32_t x681 = INT32_MIN;
static uint64_t x682 = 0LLU;
uint64_t t66 = 455686757LLU;
int8_t x752 = INT8_MAX;
static int64_t x754 = 7242269LL;
volatile int16_t x773 = INT16_MIN;
uint32_t x776 = 38075U;
static volatile int32_t x778 = -1;
volatile uint16_t x783 = UINT16_MAX;
int16_t x821 = -1;
static int64_t x830 = -15264466625LL;
int64_t x831 = -1LL;
uint32_t x850 = 40962U;
int64_t x854 = INT64_MAX;
volatile int32_t x877 = 71819;
int8_t x894 = -1;
static uint64_t t82 = 58637LLU;
volatile int16_t x899 = -1;
volatile int8_t x900 = -1;
static volatile int32_t t84 = 5789;
int64_t x953 = -2404108871364519LL;
int32_t x962 = -1;
uint32_t x963 = 5508U;
uint32_t x970 = 1U;
int32_t x976 = INT32_MAX;
volatile uint16_t x978 = 498U;
uint64_t x991 = UINT64_MAX;
int8_t x992 = INT8_MIN;
volatile uint64_t t92 = 7420562LLU;
uint16_t x994 = 2019U;
int64_t x996 = -2LL;
uint32_t x1003 = UINT32_MAX;
volatile int32_t x1020 = INT32_MIN;
int8_t x1031 = INT8_MIN;
volatile int64_t t97 = 149723016013220LL;
int16_t x1033 = INT16_MAX;
int64_t t98 = 70040039299893LL;


void f0(void) {
	int32_t x7 = -12979;
	int64_t x8 = -199LL;

	t0 = ((x5-x6)%(x7/x8));

	if (t0 != 44LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x21 = -16;
	volatile uint32_t x22 = 14850U;
	int32_t x23 = INT32_MAX;

	t1 = ((x21-x22)%(x23/x24));

	if (t1 != 2147468783U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x41 = -1;
	int32_t x42 = INT32_MAX;
	static uint32_t x43 = UINT32_MAX;
	volatile uint32_t t2 = 7059U;

	t2 = ((x41-x42)%(x43/x44));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x45 = 8U;
	int32_t x48 = INT32_MIN;
	volatile int64_t t3 = 1701178633991LL;

	t3 = ((x45-x46)%(x47/x48));

	if (t3 != 32776LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x73 = INT16_MIN;
	int64_t x74 = -60552643756875542LL;
	static uint64_t x75 = UINT64_MAX;
	int8_t x76 = INT8_MAX;
	volatile uint64_t t4 = 4459722249687LLU;

	t4 = ((x73-x74)%(x75/x76));

	if (t4 != 60552643756842774LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x85 = 9U;
	int16_t x86 = -8;
	int64_t x88 = -1LL;

	t5 = ((x85-x86)%(x87/x88));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x97 = 16413348731LL;
	int32_t x100 = -1;

	t6 = ((x97-x98)%(x99/x100));

	if (t6 != 16413348730LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x117 = INT16_MAX;
	static int64_t x118 = 54LL;
	int64_t x119 = INT64_MIN;
	int16_t x120 = 86;

	t7 = ((x117-x118)%(x119/x120));

	if (t7 != 32713LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x121 = -1626;
	int32_t x122 = -1;
	int32_t x123 = INT32_MIN;
	static int64_t x124 = 268249688LL;
	int64_t t8 = -15957LL;

	t8 = ((x121-x122)%(x123/x124));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x138 = INT8_MIN;
	int32_t x139 = INT32_MAX;
	int16_t x140 = INT16_MIN;
	int32_t t9 = -133000337;

	t9 = ((x137-x138)%(x139/x140));

	if (t9 != 32895) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x146 = -10;
	uint32_t x148 = 1160112U;
	static uint32_t t10 = 32546895U;

	t10 = ((x145-x146)%(x147/x148));

	if (t10 != 260U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x153 = UINT64_MAX;
	int32_t x154 = INT32_MIN;
	uint64_t x155 = 56744435883LLU;
	uint8_t x156 = UINT8_MAX;
	volatile uint64_t t11 = 61928016LLU;

	t11 = ((x153-x154)%(x155/x156));

	if (t11 != 144738856LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x157 = -1;
	int8_t x158 = 2;
	volatile uint16_t x159 = UINT16_MAX;
	uint16_t x160 = 63U;

	t12 = ((x157-x158)%(x159/x160));

	if (t12 != -3) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x161 = INT8_MIN;
	int8_t x162 = INT8_MAX;
	int16_t x163 = INT16_MAX;
	int8_t x164 = -5;
	int32_t t13 = 298745;

	t13 = ((x161-x162)%(x163/x164));

	if (t13 != -255) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x165 = INT16_MIN;

	t14 = ((x165-x166)%(x167/x168));

	if (t14 != -7) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x170 = INT16_MIN;
	static uint64_t x171 = UINT64_MAX;
	static int16_t x172 = -1358;
	volatile uint64_t t15 = 3070622LLU;

	t15 = ((x169-x170)%(x171/x172));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x181 = INT8_MIN;
	uint64_t x183 = 4228789215LLU;
	int32_t x184 = INT32_MAX;
	static uint64_t t16 = 6576523LLU;

	t16 = ((x181-x182)%(x183/x184));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x193 = 2U;
	int8_t x194 = 25;
	volatile int64_t t17 = 5360415613744027LL;

	t17 = ((x193-x194)%(x195/x196));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x197 = -1;
	static int64_t x198 = INT64_MAX;
	int64_t x200 = -1LL;
	volatile int64_t t18 = 103LL;

	t18 = ((x197-x198)%(x199/x200));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x202 = INT16_MAX;
	static volatile int8_t x203 = -1;
	uint32_t x204 = 39313232U;
	uint32_t t19 = 100344804U;

	t19 = ((x201-x202)%(x203/x204));

	if (t19 != 3U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x213 = INT64_MIN;
	volatile int16_t x214 = -1;
	int32_t x215 = INT32_MIN;
	volatile uint32_t x216 = 529277095U;
	volatile int64_t t20 = 33242815086779LL;

	t20 = ((x213-x214)%(x215/x216));

	if (t20 != -3LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x217 = 465981053;
	static uint32_t x218 = UINT32_MAX;
	int64_t x219 = INT64_MIN;
	volatile int64_t t21 = -28432LL;

	t21 = ((x217-x218)%(x219/x220));

	if (t21 != 465981054LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x221 = 1386294LL;
	uint64_t x222 = UINT64_MAX;
	static int8_t x223 = INT8_MIN;
	static uint16_t x224 = 2U;
	uint64_t t22 = 1570LLU;

	t22 = ((x221-x222)%(x223/x224));

	if (t22 != 1386295LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x245 = INT8_MIN;
	volatile uint16_t x247 = UINT16_MAX;

	t23 = ((x245-x246)%(x247/x248));

	if (t23 != -146LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x249 = UINT8_MAX;
	uint64_t x250 = UINT64_MAX;
	int32_t x251 = 229575656;
	int16_t x252 = INT16_MIN;
	volatile uint64_t t24 = 271441660805097763LLU;

	t24 = ((x249-x250)%(x251/x252));

	if (t24 != 256LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x253 = INT32_MIN;
	int8_t x254 = -53;
	volatile uint8_t x256 = UINT8_MAX;
	int32_t t25 = -3226;

	t25 = ((x253-x254)%(x255/x256));

	if (t25 != -75) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x257 = 946;
	volatile int64_t x259 = INT64_MAX;
	int8_t x260 = -1;

	t26 = ((x257-x258)%(x259/x260));

	if (t26 != 4294707000LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x270 = INT32_MIN;
	int16_t x271 = INT16_MIN;
	int8_t x272 = 4;
	static volatile int32_t t27 = -945307;

	t27 = ((x269-x270)%(x271/x272));

	if (t27 != 4238) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x289 = 1U;
	int64_t x290 = -65898LL;
	volatile uint16_t x291 = 1104U;
	int64_t t28 = -212993LL;

	t28 = ((x289-x290)%(x291/x292));

	if (t28 != 73LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x293 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	int64_t x296 = -1LL;

	t29 = ((x293-x294)%(x295/x296));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x301 = 0U;
	int32_t x302 = INT32_MAX;
	volatile int32_t t30 = -750358;

	t30 = ((x301-x302)%(x303/x304));

	if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x309 = INT16_MIN;
	int16_t x310 = INT16_MIN;
	int8_t x311 = INT8_MIN;
	static volatile uint8_t x312 = 52U;
	volatile int32_t t31 = -4522;

	t31 = ((x309-x310)%(x311/x312));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x313 = -1;
	static uint32_t x314 = UINT32_MAX;
	int64_t x315 = INT64_MIN;
	int16_t x316 = 23;
	int64_t t32 = -862LL;

	t32 = ((x313-x314)%(x315/x316));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x321 = 13615;
	int32_t x323 = INT32_MAX;
	int8_t x324 = INT8_MIN;
	volatile int32_t t33 = 57;

	t33 = ((x321-x322)%(x323/x324));

	if (t33 != 15732229) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x345 = UINT16_MAX;
	uint64_t x346 = 37604002951613LLU;
	int8_t x347 = -12;
	uint32_t x348 = 1220U;
	volatile uint64_t t34 = 263958129030067LLU;

	t34 = ((x345-x346)%(x347/x348));

	if (t34 != 270386LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x357 = 634U;
	volatile uint16_t x358 = 2783U;
	static int64_t x359 = 55004190762LL;
	static int32_t x360 = INT32_MIN;
	volatile int64_t t35 = 3355452165LL;

	t35 = ((x357-x358)%(x359/x360));

	if (t35 != -24LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x369 = 85340U;
	int8_t x370 = INT8_MAX;
	static uint64_t x371 = UINT64_MAX;
	static uint64_t t36 = 109556738597389LLU;

	t36 = ((x369-x370)%(x371/x372));

	if (t36 != 85213LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x374 = UINT32_MAX;
	int64_t x375 = INT64_MAX;
	volatile int64_t t37 = -13017618664687026LL;

	t37 = ((x373-x374)%(x375/x376));

	if (t37 != 4294934529LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x377 = 126LLU;
	int16_t x378 = 1664;
	static uint16_t x379 = 5705U;
	volatile uint64_t t38 = 42482347950377LLU;

	t38 = ((x377-x378)%(x379/x380));

	if (t38 != 139LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x425 = 749U;
	int16_t x426 = -178;
	volatile int32_t x427 = INT32_MAX;
	int8_t x428 = -1;
	volatile int32_t t39 = 12;

	t39 = ((x425-x426)%(x427/x428));

	if (t39 != 927) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x437 = 29LLU;
	int32_t x438 = INT32_MIN;
	int64_t x439 = INT64_MAX;
	static uint64_t t40 = 57184225LLU;

	t40 = ((x437-x438)%(x439/x440));

	if (t40 != 2147483677LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x465 = 1013187443LLU;
	int8_t x466 = -1;
	static int16_t x467 = -1;
	uint32_t x468 = 128U;

	t41 = ((x465-x466)%(x467/x468));

	if (t41 != 6554514LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x469 = 3801;
	int16_t x470 = -1;
	int64_t x471 = INT64_MIN;
	int32_t x472 = 4350;
	volatile int64_t t42 = 41660482957LL;

	t42 = ((x469-x470)%(x471/x472));

	if (t42 != 3802LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x485 = INT8_MIN;
	volatile int8_t x486 = INT8_MIN;
	uint32_t x487 = 2483155U;
	uint8_t x488 = 60U;
	static uint32_t t43 = 63523U;

	t43 = ((x485-x486)%(x487/x488));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x501 = INT8_MAX;
	uint32_t x502 = UINT32_MAX;
	int8_t x503 = INT8_MIN;
	uint32_t x504 = 1U;
	static volatile uint32_t t44 = 423663U;

	t44 = ((x501-x502)%(x503/x504));

	if (t44 != 128U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x517 = 5U;
	int16_t x518 = INT16_MIN;
	int64_t x520 = -1LL;
	int64_t t45 = 12135968188226689LL;

	t45 = ((x517-x518)%(x519/x520));

	if (t45 != 6LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x533 = INT64_MIN;
	static volatile int8_t x534 = INT8_MIN;
	volatile uint64_t x535 = UINT64_MAX;
	int8_t x536 = -9;
	volatile uint64_t t46 = 1381124627756530LLU;

	t46 = ((x533-x534)%(x535/x536));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x537 = 7;
	int32_t x538 = INT32_MAX;
	int32_t x539 = INT32_MAX;
	static int32_t x540 = -111993723;
	volatile int32_t t47 = -14;

	t47 = ((x537-x538)%(x539/x540));

	if (t47 != -14) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x550 = INT64_MAX;
	uint32_t x551 = 830996367U;
	uint8_t x552 = 2U;
	int64_t t48 = -3677808846337LL;

	t48 = ((x549-x550)%(x551/x552));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x561 = 5810U;
	static int32_t x562 = -59;
	static volatile int64_t x563 = INT64_MIN;
	static volatile int64_t x564 = 1207LL;

	t49 = ((x561-x562)%(x563/x564));

	if (t49 != 5869LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x573 = -1;
	int16_t x575 = INT16_MIN;
	int16_t x576 = 11603;
	int32_t t50 = -54223;

	t50 = ((x573-x574)%(x575/x576));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x581 = -35;
	volatile uint64_t x584 = 1282281295740LLU;
	static volatile uint64_t t51 = 58878592210377863LLU;

	t51 = ((x581-x582)%(x583/x584));

	if (t51 != 13736903LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x589 = UINT32_MAX;
	int64_t x590 = INT64_MAX;
	uint32_t x592 = 6U;
	volatile int64_t t52 = -1LL;

	t52 = ((x589-x590)%(x591/x592));

	if (t52 != -1537228668514162007LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x609 = 243543U;
	static int16_t x611 = INT16_MIN;
	volatile uint16_t x612 = 9U;
	volatile uint32_t t53 = 185344U;

	t53 = ((x609-x610)%(x611/x612));

	if (t53 != 243544U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x613 = -1;
	volatile int32_t x614 = INT32_MAX;
	uint32_t x615 = UINT32_MAX;
	int32_t x616 = -349875553;
	uint32_t t54 = 87320327U;

	t54 = ((x613-x614)%(x615/x616));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x625 = UINT64_MAX;
	volatile int64_t x628 = -20LL;
	volatile uint64_t t55 = 237043132706LLU;

	t55 = ((x625-x626)%(x627/x628));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x629 = 54717225LL;
	volatile int16_t x630 = INT16_MIN;
	int64_t x631 = INT64_MIN;
	uint64_t t56 = 72598828LLU;

	t56 = ((x629-x630)%(x631/x632));

	if (t56 != 3018793LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x633 = -1;
	int64_t x634 = INT64_MIN;
	uint32_t x635 = 11U;
	static int64_t x636 = -1LL;

	t57 = ((x633-x634)%(x635/x636));

	if (t57 != 7LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x657 = 12289;
	static uint32_t x658 = 64015637U;
	uint8_t x659 = UINT8_MAX;
	int8_t x660 = INT8_MAX;
	volatile uint32_t t58 = 3588078U;

	t58 = ((x657-x658)%(x659/x660));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x665 = 1U;
	uint32_t x666 = 563U;
	static volatile uint64_t x667 = 1829797447LLU;
	uint16_t x668 = UINT16_MAX;

	t59 = ((x665-x666)%(x667/x668));

	if (t59 != 5214LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x669 = 0;
	volatile uint8_t x670 = 3U;
	uint16_t x672 = 10U;
	int64_t t60 = 246164785566052LL;

	t60 = ((x669-x670)%(x671/x672));

	if (t60 != -3LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x673 = UINT64_MAX;
	static int32_t x674 = 2000;
	int64_t x675 = INT64_MAX;
	volatile uint8_t x676 = UINT8_MAX;
	uint64_t t61 = 815827263367509LLU;

	t61 = ((x673-x674)%(x675/x676));

	if (t61 != 36170086419036591LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x678 = 0U;
	static int64_t x679 = INT64_MIN;
	int8_t x680 = INT8_MAX;
	static int64_t t62 = -146215679545400LL;

	t62 = ((x677-x678)%(x679/x680));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x683 = 930680U;
	int64_t x684 = 2LL;
	volatile uint64_t t63 = 2534642120602012LLU;

	t63 = ((x681-x682)%(x683/x684));

	if (t63 != 112248LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x685 = -1;
	volatile uint16_t x686 = 4916U;
	int8_t x687 = -1;
	uint32_t x688 = UINT32_MAX;
	volatile uint32_t t64 = 431658U;

	t64 = ((x685-x686)%(x687/x688));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x717 = INT16_MIN;
	static int16_t x718 = INT16_MIN;
	int32_t x719 = INT32_MAX;
	uint8_t x720 = 9U;
	volatile int32_t t65 = 86619548;

	t65 = ((x717-x718)%(x719/x720));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x721 = INT8_MIN;
	static uint64_t x722 = 49821228263032651LLU;
	uint16_t x723 = UINT16_MAX;
	static volatile int16_t x724 = INT16_MIN;

	t66 = ((x721-x722)%(x723/x724));

	if (t66 != 18396922845446518837LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x733 = -1;
	static int32_t x734 = -20108;
	volatile uint32_t x735 = UINT32_MAX;
	uint8_t x736 = 91U;
	volatile uint32_t t67 = 50U;

	t67 = ((x733-x734)%(x735/x736));

	if (t67 != 20107U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x737 = -5;
	uint64_t x738 = 10103019LLU;
	uint32_t x739 = UINT32_MAX;
	int16_t x740 = INT16_MAX;
	static uint64_t t68 = 0LLU;

	t68 = ((x737-x738)%(x739/x740));

	if (t68 != 120920LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x749 = 21U;
	uint8_t x750 = 2U;
	int32_t x751 = INT32_MIN;
	volatile int32_t t69 = -2739;

	t69 = ((x749-x750)%(x751/x752));

	if (t69 != 19) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x753 = 493U;
	uint32_t x755 = 826898U;
	static uint32_t x756 = 4U;
	volatile int64_t t70 = -77129617137461LL;

	t70 = ((x753-x754)%(x755/x756));

	if (t70 != -6436LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x774 = UINT32_MAX;
	volatile uint16_t x775 = UINT16_MAX;
	uint32_t t71 = 808U;

	t71 = ((x773-x774)%(x775/x776));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x777 = -1;
	static uint64_t x779 = 169004504863443425LLU;
	int16_t x780 = 473;
	uint64_t t72 = 388086849825LLU;

	t72 = ((x777-x778)%(x779/x780));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x781 = INT32_MIN;
	volatile int8_t x782 = INT8_MIN;
	int8_t x784 = -1;
	int32_t t73 = 762453726;

	t73 = ((x781-x782)%(x783/x784));

	if (t73 != -32640) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x822 = 705;
	static uint8_t x823 = UINT8_MAX;
	int16_t x824 = -73;
	volatile int32_t t74 = 6;

	t74 = ((x821-x822)%(x823/x824));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x829 = -1;
	static volatile int16_t x832 = -1;
	int64_t t75 = -34509925061552LL;

	t75 = ((x829-x830)%(x831/x832));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x833 = INT32_MIN;
	static uint32_t x834 = 491U;
	int32_t x835 = -1;
	static uint64_t x836 = 14869420331716LLU;
	static uint64_t t76 = 2531411128LLU;

	t76 = ((x833-x834)%(x835/x836));

	if (t76 != 35715LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x845 = 178504U;
	int8_t x846 = 0;
	uint32_t x847 = 653851U;
	uint16_t x848 = 6U;
	uint32_t t77 = 1U;

	t77 = ((x845-x846)%(x847/x848));

	if (t77 != 69529U) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x849 = INT8_MAX;
	volatile int32_t x851 = INT32_MAX;
	static int8_t x852 = -1;
	uint32_t t78 = 1140405339U;

	t78 = ((x849-x850)%(x851/x852));

	if (t78 != 2147442812U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x853 = 1;
	int64_t x855 = INT64_MIN;
	uint64_t x856 = 3LLU;
	uint64_t t79 = 5010789382436811365LLU;

	t79 = ((x853-x854)%(x855/x856));

	if (t79 != 4LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x865 = -1;
	volatile int8_t x866 = INT8_MIN;
	static uint32_t x867 = UINT32_MAX;
	int8_t x868 = -1;
	volatile uint32_t t80 = 3554048U;

	t80 = ((x865-x866)%(x867/x868));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x878 = -1LL;
	static int16_t x879 = -6824;
	int16_t x880 = 1;
	volatile int64_t t81 = 695924134776LL;

	t81 = ((x877-x878)%(x879/x880));

	if (t81 != 3580LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x893 = 346LLU;
	int64_t x895 = 3939856441918LL;
	int32_t x896 = -1;

	t82 = ((x893-x894)%(x895/x896));

	if (t82 != 347LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x897 = 465507LLU;
	volatile int64_t x898 = -760077232LL;
	volatile uint64_t t83 = 6053463LLU;

	t83 = ((x897-x898)%(x899/x900));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x901 = 481U;
	int16_t x902 = INT16_MAX;
	int16_t x903 = INT16_MAX;
	volatile uint8_t x904 = 3U;

	t84 = ((x901-x902)%(x903/x904));

	if (t84 != -10442) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x925 = -1;
	static int16_t x926 = INT16_MIN;
	int64_t x927 = 144370775455645531LL;
	int16_t x928 = INT16_MAX;
	int64_t t85 = 21378279677LL;

	t85 = ((x925-x926)%(x927/x928));

	if (t85 != 32767LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x954 = 590;
	uint64_t x955 = 146LLU;
	static uint8_t x956 = 6U;
	volatile uint64_t t86 = 56776463491LLU;

	t86 = ((x953-x954)%(x955/x956));

	if (t86 != 11LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x961 = UINT32_MAX;
	uint16_t x964 = 199U;
	volatile uint32_t t87 = 7652966U;

	t87 = ((x961-x962)%(x963/x964));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x965 = 689861827904LL;
	int64_t x966 = -1LL;
	static int32_t x967 = INT32_MIN;
	static uint8_t x968 = 49U;
	volatile int64_t t88 = 4596647LL;

	t88 = ((x965-x966)%(x967/x968));

	if (t88 != 37502865LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x969 = 44U;
	uint32_t x971 = UINT32_MAX;
	int8_t x972 = -1;
	uint32_t t89 = 1U;

	t89 = ((x969-x970)%(x971/x972));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x973 = 18786U;
	volatile uint64_t x974 = 50687198053704LLU;
	uint64_t x975 = 706489656361LLU;
	uint64_t t90 = 1867167056849988865LLU;

	t90 = ((x973-x974)%(x975/x976));

	if (t90 != 226LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x977 = 1718605426LLU;
	static int32_t x979 = INT32_MAX;
	uint8_t x980 = 28U;
	static uint64_t t91 = 485220109LLU;

	t91 = ((x977-x978)%(x979/x980));

	if (t91 != 31296360LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x989 = -52;
	volatile uint16_t x990 = 13U;

	t92 = ((x989-x990)%(x991/x992));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x993 = 102LLU;
	volatile uint8_t x995 = 4U;
	volatile uint64_t t93 = 1912LLU;

	t93 = ((x993-x994)%(x995/x996));

	if (t93 != 18446744073709549699LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x1001 = INT16_MAX;
	int32_t x1002 = -6398035;
	uint64_t x1004 = 3686707LLU;
	uint64_t t94 = 49LLU;

	t94 = ((x1001-x1002)%(x1003/x1004));

	if (t94 != 866LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1017 = -12031972LL;
	uint16_t x1018 = 74U;
	int32_t x1019 = INT32_MIN;
	int64_t t95 = -864539434863014LL;

	t95 = ((x1017-x1018)%(x1019/x1020));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x1021 = INT64_MIN;
	uint32_t x1022 = 0U;
	static int16_t x1023 = -12070;
	static uint64_t x1024 = 1028279839217420LLU;
	volatile uint64_t t96 = 374821LLU;

	t96 = ((x1021-x1022)%(x1023/x1024));

	if (t96 != 10905LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x1029 = -1;
	uint16_t x1030 = 0U;
	int64_t x1032 = -13LL;

	t97 = ((x1029-x1030)%(x1031/x1032));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x1034 = 1431U;
	int32_t x1035 = INT32_MIN;
	int64_t x1036 = -1LL;

	t98 = ((x1033-x1034)%(x1035/x1036));

	if (t98 != 31336LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x1037 = -1;
	uint16_t x1038 = 16U;
	uint16_t x1039 = 6U;
	int32_t x1040 = -1;
	static int32_t t99 = -7171426;

	t99 = ((x1037-x1038)%(x1039/x1040));

	if (t99 != -5) { NG(); } else { ; }
	
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

