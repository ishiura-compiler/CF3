#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -1;
volatile uint64_t x12 = 419199799LLU;
volatile uint8_t x19 = UINT8_MAX;
volatile uint16_t x20 = UINT16_MAX;
volatile int32_t x23 = INT32_MIN;
static uint64_t x24 = UINT64_MAX;
int64_t x31 = INT64_MIN;
volatile int64_t x32 = 2137741051LL;
int8_t x53 = 7;
static volatile int32_t x55 = INT32_MIN;
uint8_t x96 = 1U;
static uint64_t x115 = 168125065LLU;
static volatile int32_t x123 = -8848;
int64_t t14 = 3287LL;
int64_t t15 = -499384231813306LL;
int8_t x138 = INT8_MIN;
volatile int64_t t18 = -39254293994459959LL;
int16_t x170 = INT16_MIN;
static int64_t x172 = 1451900528LL;
int16_t x182 = INT16_MAX;
uint32_t x185 = UINT32_MAX;
uint32_t t22 = 209U;
static int16_t x201 = INT16_MIN;
static int64_t x211 = INT64_MIN;
int64_t x235 = INT64_MIN;
volatile int64_t t27 = -52282LL;
int64_t x240 = INT64_MAX;
static int64_t x241 = INT64_MIN;
int32_t x242 = INT32_MIN;
volatile int16_t x243 = -1516;
int32_t x265 = INT32_MIN;
static volatile uint8_t x282 = UINT8_MAX;
int8_t x296 = INT8_MAX;
volatile int16_t x298 = INT16_MAX;
static volatile int64_t x299 = -1LL;
int8_t x304 = -25;
volatile uint64_t x310 = UINT64_MAX;
static int32_t t37 = 107774209;
uint32_t t38 = 15440U;
int16_t x334 = INT16_MIN;
volatile int32_t t41 = 84798;
uint32_t x368 = 8209412U;
int8_t x377 = INT8_MAX;
volatile uint8_t x380 = 12U;
int16_t x409 = -34;
uint32_t x412 = UINT32_MAX;
uint32_t x414 = 7951766U;
static volatile int16_t x415 = 10100;
int8_t x417 = INT8_MIN;
int16_t x459 = -1;
int64_t x477 = 29LL;
int64_t x497 = INT64_MIN;
uint8_t x498 = 12U;
int32_t x506 = INT32_MIN;
int64_t x508 = 233214LL;
uint64_t x520 = 808078762201LLU;
static uint8_t x546 = 122U;
uint16_t x548 = 941U;
uint16_t x571 = UINT16_MAX;
volatile int32_t t63 = 0;
static int64_t x581 = INT64_MAX;
volatile int16_t x582 = INT16_MAX;
uint8_t x585 = 2U;
int64_t x588 = 2658791LL;
int16_t x607 = INT16_MIN;
int16_t x624 = 324;
int8_t x651 = INT8_MIN;
int16_t x653 = INT16_MIN;
volatile uint64_t x655 = 361LLU;
static int64_t x656 = INT64_MIN;
volatile int64_t t70 = -767682LL;
static uint32_t x671 = UINT32_MAX;
static int16_t x686 = INT16_MAX;
uint32_t x703 = 7958U;
volatile int8_t x704 = INT8_MIN;
volatile int64_t t75 = 1052725784927504898LL;
int16_t x705 = INT16_MAX;
static int64_t x715 = INT64_MIN;
int32_t t77 = 10;
static volatile uint16_t x730 = 34U;
int32_t x755 = -1;
static int16_t x756 = INT16_MAX;
uint16_t x762 = UINT16_MAX;
int32_t x801 = 58602067;
uint16_t x804 = 3U;
static uint32_t x807 = 30U;
int16_t x808 = INT16_MAX;
static volatile int32_t x844 = -42;
static int64_t x846 = INT64_MIN;
int16_t x847 = INT16_MIN;
int32_t x850 = -761700710;
volatile int32_t t89 = 840450;
int16_t x896 = -1;
static int64_t t92 = -970LL;
int64_t x901 = INT64_MIN;
int64_t x929 = INT64_MIN;
static int16_t x957 = INT16_MIN;
int8_t x960 = INT8_MIN;
volatile int32_t t99 = -130088285;


void f0(void) {
	static int16_t x6 = 3;
	volatile uint64_t x7 = 5828753437829LLU;
	int32_t x8 = INT32_MIN;
	int32_t t0 = 994340455;

	t0 = ((x5^x6)%(x7<x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = UINT32_MAX;
	uint32_t x10 = 28094393U;
	uint32_t x11 = 104963295U;
	uint32_t t1 = 513142U;

	t1 = ((x9^x10)%(x11<x12));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x17 = 368729516U;
	int16_t x18 = 767;
	uint32_t t2 = 267322381U;

	t2 = ((x17^x18)%(x19<x20));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MIN;
	int8_t x22 = INT8_MAX;
	int32_t t3 = -11;

	t3 = ((x21^x22)%(x23<x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x29 = UINT32_MAX;
	int16_t x30 = -1;
	uint32_t t4 = 190081U;

	t4 = ((x29^x30)%(x31<x32));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x41 = -1;
	volatile int8_t x42 = INT8_MIN;
	volatile int16_t x43 = -598;
	int32_t x44 = -1;
	static int32_t t5 = -12627385;

	t5 = ((x41^x42)%(x43<x44));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x54 = INT16_MIN;
	uint16_t x56 = 24057U;
	int32_t t6 = 1009;

	t6 = ((x53^x54)%(x55<x56));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x57 = 1342550;
	int8_t x58 = INT8_MAX;
	uint32_t x59 = 1U;
	static volatile uint16_t x60 = UINT16_MAX;
	int32_t t7 = 256212750;

	t7 = ((x57^x58)%(x59<x60));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x65 = INT8_MIN;
	static int32_t x66 = -925498;
	int64_t x67 = -1LL;
	uint16_t x68 = 917U;
	volatile int32_t t8 = -22003;

	t8 = ((x65^x66)%(x67<x68));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x81 = INT32_MIN;
	uint16_t x82 = 2001U;
	static int32_t x83 = INT32_MIN;
	int16_t x84 = -1649;
	int32_t t9 = 2715205;

	t9 = ((x81^x82)%(x83<x84));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x93 = -680;
	int32_t x94 = INT32_MIN;
	int32_t x95 = INT32_MIN;
	volatile int32_t t10 = 1612087;

	t10 = ((x93^x94)%(x95<x96));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x109 = INT64_MIN;
	static int32_t x110 = INT32_MIN;
	int64_t x111 = 12LL;
	uint8_t x112 = 31U;
	static int64_t t11 = 230444995686LL;

	t11 = ((x109^x110)%(x111<x112));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x113 = 7231U;
	int8_t x114 = INT8_MAX;
	uint32_t x116 = UINT32_MAX;
	volatile int32_t t12 = -127;

	t12 = ((x113^x114)%(x115<x116));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x121 = UINT16_MAX;
	volatile int16_t x122 = INT16_MAX;
	uint16_t x124 = 26U;
	int32_t t13 = -18683533;

	t13 = ((x121^x122)%(x123<x124));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x125 = -1LL;
	static volatile int16_t x126 = INT16_MAX;
	volatile int16_t x127 = INT16_MIN;
	int8_t x128 = -1;

	t14 = ((x125^x126)%(x127<x128));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x133 = INT8_MIN;
	int64_t x134 = 492LL;
	volatile uint16_t x135 = 4U;
	uint16_t x136 = UINT16_MAX;

	t15 = ((x133^x134)%(x135<x136));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x137 = -1;
	int64_t x139 = INT64_MIN;
	volatile uint16_t x140 = UINT16_MAX;
	int32_t t16 = 54136;

	t16 = ((x137^x138)%(x139<x140));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x157 = 2624533606723625LLU;
	uint32_t x158 = 138521538U;
	int8_t x159 = INT8_MIN;
	int16_t x160 = 618;
	uint64_t t17 = 2408987557LLU;

	t17 = ((x157^x158)%(x159<x160));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x161 = -195987LL;
	volatile int8_t x162 = 47;
	int64_t x163 = -1LL;
	uint8_t x164 = 3U;

	t18 = ((x161^x162)%(x163<x164));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x165 = INT32_MAX;
	int16_t x166 = INT16_MAX;
	int16_t x167 = -186;
	static volatile int8_t x168 = -6;
	volatile int32_t t19 = 14279;

	t19 = ((x165^x166)%(x167<x168));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x169 = INT16_MAX;
	volatile uint16_t x171 = 296U;
	static volatile int32_t t20 = -1;

	t20 = ((x169^x170)%(x171<x172));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x181 = -1;
	int32_t x183 = -182274;
	static int32_t x184 = 1911;
	static volatile int32_t t21 = -2594961;

	t21 = ((x181^x182)%(x183<x184));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x186 = INT32_MIN;
	int16_t x187 = -1;
	uint16_t x188 = 2283U;

	t22 = ((x185^x186)%(x187<x188));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x202 = -2180679753938LL;
	uint64_t x203 = 24548467826428964LLU;
	int64_t x204 = INT64_MIN;
	volatile int64_t t23 = -8932372996059978LL;

	t23 = ((x201^x202)%(x203<x204));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x209 = -1LL;
	int16_t x210 = INT16_MIN;
	static int8_t x212 = -1;
	int64_t t24 = 2267126501233402970LL;

	t24 = ((x209^x210)%(x211<x212));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x217 = 61492199;
	int32_t x218 = INT32_MAX;
	static int32_t x219 = 0;
	uint16_t x220 = UINT16_MAX;
	int32_t t25 = 0;

	t25 = ((x217^x218)%(x219<x220));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x221 = 4057516;
	volatile uint16_t x222 = 1836U;
	static volatile int64_t x223 = INT64_MIN;
	static volatile uint64_t x224 = UINT64_MAX;
	volatile int32_t t26 = 3751;

	t26 = ((x221^x222)%(x223<x224));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x233 = INT64_MIN;
	int32_t x234 = -1;
	int32_t x236 = -343289542;

	t27 = ((x233^x234)%(x235<x236));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x237 = UINT64_MAX;
	volatile int64_t x238 = -11590404LL;
	int8_t x239 = INT8_MIN;
	uint64_t t28 = 58LLU;

	t28 = ((x237^x238)%(x239<x240));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x244 = INT8_MIN;
	int64_t t29 = 21LL;

	t29 = ((x241^x242)%(x243<x244));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x266 = 2U;
	int64_t x267 = -1LL;
	int16_t x268 = INT16_MAX;
	int32_t t30 = 504;

	t30 = ((x265^x266)%(x267<x268));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x269 = INT8_MIN;
	volatile int8_t x270 = -1;
	int16_t x271 = INT16_MIN;
	uint8_t x272 = 1U;
	volatile int32_t t31 = 4;

	t31 = ((x269^x270)%(x271<x272));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x281 = 1174LLU;
	int8_t x283 = 1;
	volatile uint64_t x284 = 189219LLU;
	uint64_t t32 = 1078783057697611975LLU;

	t32 = ((x281^x282)%(x283<x284));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x293 = -1LL;
	static int16_t x294 = INT16_MIN;
	volatile int16_t x295 = -1;
	int64_t t33 = -379433742704LL;

	t33 = ((x293^x294)%(x295<x296));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x297 = INT8_MAX;
	int32_t x300 = INT32_MAX;
	volatile int32_t t34 = -667087;

	t34 = ((x297^x298)%(x299<x300));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x301 = -552576LL;
	volatile uint64_t x302 = 26056504381936LLU;
	int32_t x303 = INT32_MIN;
	volatile uint64_t t35 = 10770LLU;

	t35 = ((x301^x302)%(x303<x304));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x309 = INT16_MIN;
	uint64_t x311 = 0LLU;
	int32_t x312 = INT32_MIN;
	uint64_t t36 = 34341687378206717LLU;

	t36 = ((x309^x310)%(x311<x312));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x313 = UINT8_MAX;
	static int32_t x314 = INT32_MIN;
	int64_t x315 = -3146564780901922349LL;
	int16_t x316 = INT16_MIN;

	t37 = ((x313^x314)%(x315<x316));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x317 = INT16_MIN;
	uint32_t x318 = UINT32_MAX;
	int32_t x319 = INT32_MIN;
	int8_t x320 = INT8_MIN;

	t38 = ((x317^x318)%(x319<x320));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x321 = UINT16_MAX;
	volatile int32_t x322 = 6740;
	volatile int16_t x323 = INT16_MIN;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t39 = -1670692;

	t39 = ((x321^x322)%(x323<x324));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x333 = -1LL;
	static uint8_t x335 = UINT8_MAX;
	uint32_t x336 = UINT32_MAX;
	volatile int64_t t40 = -142978022711LL;

	t40 = ((x333^x334)%(x335<x336));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x357 = -1;
	uint16_t x358 = 2157U;
	int16_t x359 = INT16_MIN;
	int64_t x360 = 0LL;

	t41 = ((x357^x358)%(x359<x360));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x365 = -7344;
	static volatile int64_t x366 = INT64_MIN;
	uint32_t x367 = 87575U;
	int64_t t42 = -8511954LL;

	t42 = ((x365^x366)%(x367<x368));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x378 = UINT64_MAX;
	static int8_t x379 = INT8_MIN;
	uint64_t t43 = 15178373LLU;

	t43 = ((x377^x378)%(x379<x380));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x401 = -1;
	volatile int8_t x402 = INT8_MAX;
	volatile int8_t x403 = 56;
	int32_t x404 = INT32_MAX;
	int32_t t44 = 381;

	t44 = ((x401^x402)%(x403<x404));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x410 = 607019508U;
	volatile uint8_t x411 = 2U;
	uint32_t t45 = 230367U;

	t45 = ((x409^x410)%(x411<x412));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x413 = INT64_MIN;
	uint16_t x416 = 16722U;
	volatile int64_t t46 = 27LL;

	t46 = ((x413^x414)%(x415<x416));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x418 = INT32_MAX;
	uint8_t x419 = 3U;
	int32_t x420 = 11;
	static volatile int32_t t47 = -8818;

	t47 = ((x417^x418)%(x419<x420));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x457 = INT64_MIN;
	static int8_t x458 = INT8_MIN;
	volatile uint8_t x460 = UINT8_MAX;
	int64_t t48 = -100LL;

	t48 = ((x457^x458)%(x459<x460));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x469 = UINT16_MAX;
	int8_t x470 = -3;
	int32_t x471 = -1;
	int16_t x472 = INT16_MAX;
	static int32_t t49 = 5;

	t49 = ((x469^x470)%(x471<x472));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x473 = -751683058LL;
	uint16_t x474 = 51U;
	int16_t x475 = INT16_MIN;
	static int64_t x476 = 18017LL;
	int64_t t50 = -5240684564LL;

	t50 = ((x473^x474)%(x475<x476));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x478 = INT64_MAX;
	volatile int32_t x479 = INT32_MIN;
	int32_t x480 = 7605;
	static int64_t t51 = 12822191048730LL;

	t51 = ((x477^x478)%(x479<x480));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x493 = INT32_MIN;
	static int16_t x494 = -13041;
	int64_t x495 = INT64_MIN;
	static int16_t x496 = INT16_MIN;
	volatile int32_t t52 = 100;

	t52 = ((x493^x494)%(x495<x496));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x499 = 0;
	uint32_t x500 = 52828778U;
	int64_t t53 = 38330372004LL;

	t53 = ((x497^x498)%(x499<x500));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x501 = 7;
	uint32_t x502 = 11166U;
	int32_t x503 = INT32_MIN;
	int16_t x504 = -1;
	volatile uint32_t t54 = 16U;

	t54 = ((x501^x502)%(x503<x504));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x505 = -1;
	int16_t x507 = INT16_MIN;
	volatile int32_t t55 = 5200354;

	t55 = ((x505^x506)%(x507<x508));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x509 = INT32_MIN;
	int32_t x510 = 583;
	static int32_t x511 = INT32_MIN;
	int64_t x512 = -1LL;
	volatile int32_t t56 = -15;

	t56 = ((x509^x510)%(x511<x512));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x517 = INT64_MIN;
	int32_t x518 = INT32_MAX;
	int64_t x519 = 448144LL;
	int64_t t57 = 177LL;

	t57 = ((x517^x518)%(x519<x520));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x533 = -59556894;
	int16_t x534 = -1;
	volatile int8_t x535 = INT8_MAX;
	static uint64_t x536 = 16128800169LLU;
	volatile int32_t t58 = -1282;

	t58 = ((x533^x534)%(x535<x536));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x545 = INT64_MAX;
	int64_t x547 = INT64_MIN;
	static int64_t t59 = -330342186226LL;

	t59 = ((x545^x546)%(x547<x548));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x557 = INT32_MAX;
	volatile int64_t x558 = INT64_MIN;
	int64_t x559 = -1LL;
	uint8_t x560 = 2U;
	volatile int64_t t60 = -482804155LL;

	t60 = ((x557^x558)%(x559<x560));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x565 = -1;
	int32_t x566 = 167464;
	int64_t x567 = -160093LL;
	volatile int16_t x568 = 16147;
	volatile int32_t t61 = -4;

	t61 = ((x565^x566)%(x567<x568));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x569 = INT8_MIN;
	static uint16_t x570 = UINT16_MAX;
	volatile uint32_t x572 = UINT32_MAX;
	volatile int32_t t62 = 39282787;

	t62 = ((x569^x570)%(x571<x572));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x577 = 0U;
	uint16_t x578 = UINT16_MAX;
	static int8_t x579 = -2;
	uint64_t x580 = UINT64_MAX;

	t63 = ((x577^x578)%(x579<x580));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x583 = 17012120982LLU;
	uint64_t x584 = 4721317592793115LLU;
	int64_t t64 = -1LL;

	t64 = ((x581^x582)%(x583<x584));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x586 = 0U;
	int32_t x587 = INT32_MIN;
	int32_t t65 = 39;

	t65 = ((x585^x586)%(x587<x588));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x605 = INT32_MAX;
	uint32_t x606 = UINT32_MAX;
	volatile int16_t x608 = INT16_MAX;
	volatile uint32_t t66 = 282858656U;

	t66 = ((x605^x606)%(x607<x608));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x621 = INT32_MIN;
	int32_t x622 = INT32_MAX;
	int32_t x623 = 14;
	int32_t t67 = -131;

	t67 = ((x621^x622)%(x623<x624));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x629 = UINT8_MAX;
	int64_t x630 = -323LL;
	int8_t x631 = INT8_MIN;
	uint8_t x632 = 9U;
	static volatile int64_t t68 = -614314409LL;

	t68 = ((x629^x630)%(x631<x632));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x649 = 1560389647932LL;
	uint32_t x650 = 3U;
	int8_t x652 = 2;
	volatile int64_t t69 = -440376059LL;

	t69 = ((x649^x650)%(x651<x652));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x654 = INT64_MIN;

	t70 = ((x653^x654)%(x655<x656));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x669 = INT8_MIN;
	int16_t x670 = 101;
	static uint64_t x672 = UINT64_MAX;
	volatile int32_t t71 = -5;

	t71 = ((x669^x670)%(x671<x672));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x685 = 0U;
	int8_t x687 = -1;
	volatile int32_t x688 = 835989;
	volatile int32_t t72 = 1568;

	t72 = ((x685^x686)%(x687<x688));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x689 = INT16_MIN;
	int64_t x690 = 477641LL;
	volatile uint8_t x691 = 86U;
	int64_t x692 = 2216578344621432LL;
	int64_t t73 = 404063970LL;

	t73 = ((x689^x690)%(x691<x692));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x693 = -14203484898982384LL;
	int16_t x694 = INT16_MIN;
	uint32_t x695 = 554788767U;
	int32_t x696 = INT32_MIN;
	static int64_t t74 = 210246718LL;

	t74 = ((x693^x694)%(x695<x696));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x701 = -14;
	int64_t x702 = INT64_MAX;

	t75 = ((x701^x702)%(x703<x704));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x706 = INT8_MIN;
	uint64_t x707 = 51LLU;
	int16_t x708 = INT16_MAX;
	int32_t t76 = 8185;

	t76 = ((x705^x706)%(x707<x708));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x713 = UINT8_MAX;
	volatile int8_t x714 = -9;
	int8_t x716 = 1;

	t77 = ((x713^x714)%(x715<x716));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x729 = INT64_MAX;
	int16_t x731 = 11341;
	static int32_t x732 = INT32_MAX;
	volatile int64_t t78 = -28935482825735449LL;

	t78 = ((x729^x730)%(x731<x732));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x733 = UINT32_MAX;
	volatile int16_t x734 = INT16_MIN;
	int64_t x735 = INT64_MIN;
	int32_t x736 = 0;
	static uint32_t t79 = 4317U;

	t79 = ((x733^x734)%(x735<x736));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x745 = 7U;
	volatile uint16_t x746 = 432U;
	int64_t x747 = INT64_MIN;
	int64_t x748 = -1LL;
	static volatile uint32_t t80 = 2U;

	t80 = ((x745^x746)%(x747<x748));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x753 = 564;
	int64_t x754 = INT64_MAX;
	volatile int64_t t81 = 4374436158081LL;

	t81 = ((x753^x754)%(x755<x756));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x761 = INT64_MIN;
	static int64_t x763 = -2004830356241479508LL;
	uint16_t x764 = 0U;
	volatile int64_t t82 = 281545LL;

	t82 = ((x761^x762)%(x763<x764));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x789 = -275770LL;
	volatile uint8_t x790 = UINT8_MAX;
	volatile int16_t x791 = -1;
	int8_t x792 = INT8_MAX;
	int64_t t83 = 68LL;

	t83 = ((x789^x790)%(x791<x792));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x802 = 31U;
	int32_t x803 = -790;
	volatile int32_t t84 = -26;

	t84 = ((x801^x802)%(x803<x804));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x805 = 108U;
	static int64_t x806 = INT64_MIN;
	static int64_t t85 = -12852LL;

	t85 = ((x805^x806)%(x807<x808));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x837 = -1LL;
	uint64_t x838 = 157788104221360181LLU;
	int32_t x839 = 134385;
	static volatile int64_t x840 = INT64_MAX;
	uint64_t t86 = 70186153049120LLU;

	t86 = ((x837^x838)%(x839<x840));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x841 = INT64_MIN;
	int8_t x842 = INT8_MIN;
	int64_t x843 = -4039LL;
	int64_t t87 = 52LL;

	t87 = ((x841^x842)%(x843<x844));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x845 = 146U;
	int16_t x848 = INT16_MAX;
	volatile int64_t t88 = 2467021840848764719LL;

	t88 = ((x845^x846)%(x847<x848));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x849 = 0;
	uint32_t x851 = 682554020U;
	int8_t x852 = -13;

	t89 = ((x849^x850)%(x851<x852));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x853 = 3859802U;
	static int64_t x854 = 5785LL;
	static int8_t x855 = INT8_MIN;
	uint64_t x856 = UINT64_MAX;
	volatile int64_t t90 = 51835106130901LL;

	t90 = ((x853^x854)%(x855<x856));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x865 = 0U;
	int32_t x866 = INT32_MAX;
	static uint16_t x867 = UINT16_MAX;
	static uint64_t x868 = 20216184320LLU;
	volatile int32_t t91 = 46;

	t91 = ((x865^x866)%(x867<x868));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x893 = 1424910LL;
	int32_t x894 = -8173;
	int16_t x895 = INT16_MIN;

	t92 = ((x893^x894)%(x895<x896));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x902 = INT8_MIN;
	uint16_t x903 = 1U;
	uint8_t x904 = UINT8_MAX;
	int64_t t93 = 34951567LL;

	t93 = ((x901^x902)%(x903<x904));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x913 = -1690;
	int32_t x914 = -1725;
	int8_t x915 = 3;
	uint32_t x916 = 928U;
	static volatile int32_t t94 = 33430095;

	t94 = ((x913^x914)%(x915<x916));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x917 = INT64_MIN;
	uint8_t x918 = UINT8_MAX;
	int16_t x919 = INT16_MIN;
	int16_t x920 = -5;
	volatile int64_t t95 = -163320265740LL;

	t95 = ((x917^x918)%(x919<x920));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x925 = UINT64_MAX;
	uint16_t x926 = UINT16_MAX;
	int32_t x927 = INT32_MIN;
	int8_t x928 = INT8_MIN;
	static volatile uint64_t t96 = 2474775524709460LLU;

	t96 = ((x925^x926)%(x927<x928));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x930 = 17U;
	int32_t x931 = 81;
	uint32_t x932 = UINT32_MAX;
	volatile int64_t t97 = -192795872062741807LL;

	t97 = ((x929^x930)%(x931<x932));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x933 = INT16_MIN;
	uint8_t x934 = UINT8_MAX;
	int8_t x935 = INT8_MIN;
	static volatile int64_t x936 = 2096181LL;
	int32_t t98 = -5;

	t98 = ((x933^x934)%(x935<x936));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x958 = UINT16_MAX;
	volatile uint64_t x959 = 8147LLU;

	t99 = ((x957^x958)%(x959<x960));

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

