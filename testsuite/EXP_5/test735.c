#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = INT64_MIN;
int16_t x7 = -1;
int8_t x44 = INT8_MAX;
volatile uint8_t x54 = UINT8_MAX;
volatile int32_t t5 = -91;
uint8_t x67 = 7U;
static volatile int8_t x76 = INT8_MAX;
static uint64_t x82 = UINT64_MAX;
uint8_t x90 = 14U;
int64_t x106 = 20802955119891LL;
int64_t x107 = -1LL;
volatile uint64_t t10 = UINT64_MAX;
int64_t x149 = 4210133102542856LL;
volatile uint8_t x150 = 48U;
volatile int16_t x161 = INT16_MAX;
int32_t x162 = INT32_MAX;
static uint32_t x173 = 60U;
int16_t x175 = -22;
uint16_t x254 = UINT16_MAX;
volatile int8_t x255 = -6;
int8_t x264 = -1;
volatile int32_t x271 = -4911;
int64_t x294 = -6428543LL;
int64_t x296 = INT64_MIN;
static volatile int32_t t26 = 16;
static int8_t x465 = INT8_MAX;
int8_t x467 = INT8_MIN;
int8_t x507 = -30;
int8_t x510 = -1;
uint64_t x525 = UINT64_MAX;
volatile uint32_t x533 = 14U;
int8_t x571 = 12;
volatile int32_t x574 = INT32_MIN;
int8_t x578 = INT8_MIN;
volatile int32_t t40 = -3727;
uint32_t x593 = 11476275U;
uint32_t x596 = 1137U;
int32_t x632 = 3;
uint32_t t44 = 2030256U;
uint8_t x664 = 22U;
volatile int32_t t46 = 1;
uint8_t x674 = 1U;
uint16_t x676 = 230U;
uint32_t x705 = 8261U;
uint32_t x750 = 5U;
int64_t t53 = -1LL;
volatile int32_t x760 = -29;
static int64_t x818 = INT64_MAX;
uint8_t x819 = UINT8_MAX;
volatile uint64_t t57 = 4476339LLU;
volatile int64_t x869 = INT64_MAX;
volatile uint8_t x872 = 28U;
static int64_t t59 = -508010850476LL;
int64_t x898 = 3002520106460990LL;
uint8_t x900 = 1U;
static int64_t x920 = 15115678261LL;
uint64_t t64 = 1041433415591693956LLU;
int8_t x940 = 3;
int8_t x968 = INT8_MIN;
int16_t x977 = INT16_MAX;
int32_t x985 = 0;
int32_t x990 = -1;
uint64_t x992 = UINT64_MAX;
volatile int32_t t74 = -4824498;
uint32_t x1100 = 7606581U;
volatile uint32_t t76 = UINT32_MAX;
volatile int64_t x1127 = INT64_MIN;
static volatile int32_t t78 = -5024;
volatile uint8_t x1153 = UINT8_MAX;
int64_t x1155 = -1LL;
static volatile uint16_t x1184 = UINT16_MAX;
int32_t t81 = -66806786;
static int32_t x1185 = INT32_MAX;
static int8_t x1187 = -5;
int32_t t83 = -39;
uint64_t x1209 = UINT64_MAX;
int32_t x1212 = -1;
volatile uint64_t t84 = UINT64_MAX;
uint64_t t85 = 328703LLU;
static uint32_t x1233 = UINT32_MAX;
uint64_t x1249 = 4451509LLU;
uint64_t t87 = 6559194LLU;
static int64_t x1273 = 257295791LL;
int64_t t88 = -64638LL;
int64_t x1303 = INT64_MIN;
volatile uint16_t x1304 = UINT16_MAX;
static int32_t x1319 = INT32_MIN;
int64_t x1320 = INT64_MIN;
int16_t x1328 = INT16_MIN;
int32_t t92 = 783;
static uint8_t x1350 = 1U;
static int8_t x1351 = INT8_MIN;
int16_t x1352 = INT16_MAX;
int32_t t94 = INT32_MAX;
static int32_t t97 = 14591037;
int32_t x1480 = -1;
volatile int32_t t99 = -57430;


void f0(void) {
	int16_t x1 = INT16_MAX;
	volatile int64_t x2 = INT64_MIN;
	int8_t x4 = -1;
	int32_t t0 = -18;

	t0 = (x1>>((x2%x3)%x4));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = 3;
	int16_t x6 = -615;
	static int32_t x8 = -1;
	int32_t t1 = -4059;

	t1 = (x5>>((x6%x7)%x8));

	if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x17 = 1U;
	int8_t x18 = INT8_MAX;
	int32_t x19 = -1;
	static volatile uint16_t x20 = UINT16_MAX;
	volatile int32_t t2 = -523742288;

	t2 = (x17>>((x18%x19)%x20));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x37 = 887098113LLU;
	volatile int8_t x38 = -1;
	volatile int32_t x39 = -1;
	int64_t x40 = -11505752LL;
	uint64_t t3 = 178LLU;

	t3 = (x37>>((x38%x39)%x40));

	if (t3 != 887098113LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x41 = 621U;
	uint32_t x42 = 109U;
	uint8_t x43 = 7U;
	volatile int32_t t4 = -560026;

	t4 = (x41>>((x42%x43)%x44));

	if (t4 != 38) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x53 = 7U;
	uint64_t x55 = UINT64_MAX;
	uint64_t x56 = 5LLU;

	t5 = (x53>>((x54%x55)%x56));

	if (t5 != 7) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x65 = 7484596U;
	uint8_t x66 = 60U;
	volatile int8_t x68 = 23;
	volatile uint32_t t6 = 9075U;

	t6 = (x65>>((x66%x67)%x68));

	if (t6 != 467787U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x73 = UINT32_MAX;
	volatile int8_t x74 = INT8_MAX;
	static int16_t x75 = INT16_MIN;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = (x73>>((x74%x75)%x76));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x81 = UINT64_MAX;
	int64_t x83 = INT64_MAX;
	volatile int16_t x84 = INT16_MIN;
	volatile uint64_t t8 = 0LLU;

	t8 = (x81>>((x82%x83)%x84));

	if (t8 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x89 = UINT16_MAX;
	static uint32_t x91 = UINT32_MAX;
	uint8_t x92 = UINT8_MAX;
	int32_t t9 = -303;

	t9 = (x89>>((x90%x91)%x92));

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x105 = UINT64_MAX;
	volatile uint64_t x108 = 719840754364LLU;

	t10 = (x105>>((x106%x107)%x108));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x121 = UINT8_MAX;
	uint16_t x122 = 85U;
	uint8_t x123 = UINT8_MAX;
	int8_t x124 = -1;
	volatile int32_t t11 = 480766316;

	t11 = (x121>>((x122%x123)%x124));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x151 = -1;
	volatile uint8_t x152 = 4U;
	int64_t t12 = 5978248LL;

	t12 = (x149>>((x150%x151)%x152));

	if (t12 != 4210133102542856LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x163 = -1;
	uint8_t x164 = 61U;
	int32_t t13 = -559196878;

	t13 = (x161>>((x162%x163)%x164));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x174 = -1;
	uint32_t x176 = 1U;
	uint32_t t14 = 244387354U;

	t14 = (x173>>((x174%x175)%x176));

	if (t14 != 60U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x181 = UINT16_MAX;
	volatile int16_t x182 = INT16_MAX;
	volatile uint32_t x183 = 111U;
	uint8_t x184 = 28U;
	static int32_t t15 = -226555;

	t15 = (x181>>((x182%x183)%x184));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x209 = INT64_MAX;
	int8_t x210 = 0;
	uint8_t x211 = 32U;
	static int8_t x212 = -40;
	static volatile int64_t t16 = INT64_MAX;

	t16 = (x209>>((x210%x211)%x212));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x233 = 1U;
	uint32_t x234 = 6836605U;
	static volatile uint8_t x235 = 31U;
	int64_t x236 = -1LL;
	volatile int32_t t17 = 7754;

	t17 = (x233>>((x234%x235)%x236));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x253 = UINT64_MAX;
	int64_t x256 = INT64_MIN;
	uint64_t t18 = 957707891638LLU;

	t18 = (x253>>((x254%x255)%x256));

	if (t18 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x261 = UINT16_MAX;
	static int8_t x262 = INT8_MAX;
	int8_t x263 = INT8_MIN;
	int32_t t19 = 29076345;

	t19 = (x261>>((x262%x263)%x264));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x265 = INT32_MAX;
	int8_t x266 = 2;
	int64_t x267 = INT64_MIN;
	uint32_t x268 = 5U;
	volatile int32_t t20 = -383;

	t20 = (x265>>((x266%x267)%x268));

	if (t20 != 536870911) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x269 = UINT16_MAX;
	int16_t x270 = INT16_MIN;
	static int64_t x272 = -1LL;
	static volatile int32_t t21 = -931;

	t21 = (x269>>((x270%x271)%x272));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x281 = UINT64_MAX;
	int16_t x282 = INT16_MIN;
	int16_t x283 = INT16_MIN;
	int32_t x284 = INT32_MIN;
	uint64_t t22 = UINT64_MAX;

	t22 = (x281>>((x282%x283)%x284));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x293 = 1;
	int64_t x295 = -1LL;
	volatile int32_t t23 = 1;

	t23 = (x293>>((x294%x295)%x296));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x349 = 526388031761526LLU;
	volatile int32_t x350 = INT32_MAX;
	volatile int16_t x351 = INT16_MAX;
	volatile int16_t x352 = INT16_MIN;
	uint64_t t24 = 24165040096LLU;

	t24 = (x349>>((x350%x351)%x352));

	if (t24 != 263194015880763LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x397 = 0;
	static int16_t x398 = INT16_MIN;
	uint16_t x399 = UINT16_MAX;
	volatile int16_t x400 = INT16_MIN;
	volatile int32_t t25 = -8777;

	t25 = (x397>>((x398%x399)%x400));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x405 = 266606097;
	static volatile int8_t x406 = INT8_MAX;
	int32_t x407 = INT32_MIN;
	int64_t x408 = 10LL;

	t26 = (x405>>((x406%x407)%x408));

	if (t26 != 2082860) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x413 = UINT32_MAX;
	int64_t x414 = 477822852747578466LL;
	uint8_t x415 = 7U;
	static int32_t x416 = INT32_MIN;
	uint32_t t27 = 268351723U;

	t27 = (x413>>((x414%x415)%x416));

	if (t27 != 1073741823U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x441 = 2U;
	uint8_t x442 = 0U;
	uint64_t x443 = UINT64_MAX;
	volatile int32_t x444 = INT32_MIN;
	int32_t t28 = 2134559;

	t28 = (x441>>((x442%x443)%x444));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x466 = 0;
	uint32_t x468 = 1181690301U;
	volatile int32_t t29 = -1;

	t29 = (x465>>((x466%x467)%x468));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x493 = 753U;
	static int32_t x494 = INT32_MAX;
	volatile uint64_t x495 = 932022332162686LLU;
	int16_t x496 = INT16_MAX;
	static volatile uint32_t t30 = 15601940U;

	t30 = (x493>>((x494%x495)%x496));

	if (t30 != 376U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x505 = UINT16_MAX;
	int64_t x506 = INT64_MAX;
	static int64_t x508 = INT64_MAX;
	int32_t t31 = 217217321;

	t31 = (x505>>((x506%x507)%x508));

	if (t31 != 511) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x509 = UINT16_MAX;
	static int16_t x511 = -1;
	volatile uint8_t x512 = UINT8_MAX;
	volatile int32_t t32 = -285;

	t32 = (x509>>((x510%x511)%x512));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x517 = INT64_MAX;
	static int32_t x518 = INT32_MAX;
	int16_t x519 = INT16_MIN;
	static int16_t x520 = -184;
	int64_t t33 = -2208664100318636286LL;

	t33 = (x517>>((x518%x519)%x520));

	if (t33 != 281474976710655LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x526 = UINT32_MAX;
	uint16_t x527 = UINT16_MAX;
	static int32_t x528 = -1;
	uint64_t t34 = UINT64_MAX;

	t34 = (x525>>((x526%x527)%x528));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x529 = INT16_MAX;
	volatile uint32_t x530 = 14U;
	uint32_t x531 = 17026990U;
	int8_t x532 = INT8_MAX;
	static int32_t t35 = 746214;

	t35 = (x529>>((x530%x531)%x532));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x534 = 51U;
	uint8_t x535 = 29U;
	int64_t x536 = INT64_MIN;
	uint32_t t36 = 20U;

	t36 = (x533>>((x534%x535)%x536));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x541 = 5526;
	int32_t x542 = -1;
	int32_t x543 = -1;
	int16_t x544 = -1;
	int32_t t37 = -253398821;

	t37 = (x541>>((x542%x543)%x544));

	if (t37 != 5526) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x569 = INT16_MAX;
	uint32_t x570 = UINT32_MAX;
	uint32_t x572 = 795391U;
	volatile int32_t t38 = 1;

	t38 = (x569>>((x570%x571)%x572));

	if (t38 != 4095) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x573 = UINT64_MAX;
	volatile int16_t x575 = -158;
	int32_t x576 = -1;
	uint64_t t39 = UINT64_MAX;

	t39 = (x573>>((x574%x575)%x576));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x577 = 20527U;
	int8_t x579 = 1;
	uint64_t x580 = 820151078581282644LLU;

	t40 = (x577>>((x578%x579)%x580));

	if (t40 != 20527) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x594 = INT32_MAX;
	volatile int32_t x595 = -22539839;
	volatile uint32_t t41 = 134U;

	t41 = (x593>>((x594%x595)%x596));

	if (t41 != 43U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x629 = 4U;
	static int32_t x630 = INT32_MAX;
	static int64_t x631 = INT64_MIN;
	static int32_t t42 = 13;

	t42 = (x629>>((x630%x631)%x632));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x649 = INT32_MAX;
	int32_t x650 = 8462;
	int8_t x651 = INT8_MIN;
	int32_t x652 = INT32_MIN;
	volatile int32_t t43 = -253393;

	t43 = (x649>>((x650%x651)%x652));

	if (t43 != 131071) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x653 = 7U;
	int32_t x654 = INT32_MIN;
	uint8_t x655 = 1U;
	int8_t x656 = 1;

	t44 = (x653>>((x654%x655)%x656));

	if (t44 != 7U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x661 = 27221192929LLU;
	uint8_t x662 = UINT8_MAX;
	int64_t x663 = -1LL;
	volatile uint64_t t45 = 1253LLU;

	t45 = (x661>>((x662%x663)%x664));

	if (t45 != 27221192929LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x665 = UINT16_MAX;
	uint64_t x666 = UINT64_MAX;
	uint32_t x667 = UINT32_MAX;
	int8_t x668 = INT8_MIN;

	t46 = (x665>>((x666%x667)%x668));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x673 = UINT8_MAX;
	static int64_t x675 = INT64_MIN;
	volatile int32_t t47 = 751294;

	t47 = (x673>>((x674%x675)%x676));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x706 = 62U;
	static uint16_t x707 = 914U;
	static uint8_t x708 = 58U;
	volatile uint32_t t48 = 140U;

	t48 = (x705>>((x706%x707)%x708));

	if (t48 != 516U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x717 = UINT64_MAX;
	int64_t x718 = INT64_MIN;
	static int8_t x719 = -1;
	volatile int8_t x720 = 3;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x717>>((x718%x719)%x720));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x721 = INT16_MAX;
	int16_t x722 = INT16_MIN;
	int16_t x723 = INT16_MIN;
	uint16_t x724 = 8U;
	static int32_t t50 = 458630;

	t50 = (x721>>((x722%x723)%x724));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x733 = UINT32_MAX;
	int8_t x734 = -1;
	static volatile int64_t x735 = -1LL;
	uint64_t x736 = 915163095391946LLU;
	uint32_t t51 = UINT32_MAX;

	t51 = (x733>>((x734%x735)%x736));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x749 = 485;
	uint64_t x751 = 1LLU;
	int64_t x752 = -387LL;
	volatile int32_t t52 = -6;

	t52 = (x749>>((x750%x751)%x752));

	if (t52 != 485) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x753 = 75LL;
	int8_t x754 = 1;
	uint16_t x755 = UINT16_MAX;
	int8_t x756 = -1;

	t53 = (x753>>((x754%x755)%x756));

	if (t53 != 75LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x757 = UINT16_MAX;
	int64_t x758 = 29205969056LL;
	int32_t x759 = 2;
	int32_t t54 = -33;

	t54 = (x757>>((x758%x759)%x760));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x789 = INT64_MAX;
	int16_t x790 = INT16_MIN;
	volatile int64_t x791 = -1LL;
	static int16_t x792 = -1;
	volatile int64_t t55 = INT64_MAX;

	t55 = (x789>>((x790%x791)%x792));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x817 = UINT32_MAX;
	int8_t x820 = -2;
	volatile uint32_t t56 = 55U;

	t56 = (x817>>((x818%x819)%x820));

	if (t56 != 2147483647U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x841 = 2045333747381326497LLU;
	int32_t x842 = INT32_MIN;
	uint8_t x843 = 9U;
	static int64_t x844 = -1LL;

	t57 = (x841>>((x842%x843)%x844));

	if (t57 != 2045333747381326497LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x861 = INT16_MAX;
	int16_t x862 = INT16_MIN;
	volatile int16_t x863 = -1;
	static uint64_t x864 = 58286983630LLU;
	volatile int32_t t58 = 216;

	t58 = (x861>>((x862%x863)%x864));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x870 = UINT8_MAX;
	uint32_t x871 = 52U;

	t59 = (x869>>((x870%x871)%x872));

	if (t59 != 17592186044415LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x873 = 517;
	int16_t x874 = 56;
	static volatile int16_t x875 = -1;
	volatile int32_t x876 = INT32_MIN;
	volatile int32_t t60 = -55376;

	t60 = (x873>>((x874%x875)%x876));

	if (t60 != 517) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x877 = UINT32_MAX;
	int32_t x878 = INT32_MAX;
	volatile int32_t x879 = -1;
	int32_t x880 = INT32_MAX;
	uint32_t t61 = UINT32_MAX;

	t61 = (x877>>((x878%x879)%x880));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x893 = 1051U;
	static int32_t x894 = INT32_MAX;
	static uint8_t x895 = 29U;
	volatile int8_t x896 = INT8_MAX;
	int32_t t62 = -97;

	t62 = (x893>>((x894%x895)%x896));

	if (t62 != 8) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x897 = INT32_MAX;
	static volatile int64_t x899 = -377067113364155LL;
	static volatile int32_t t63 = INT32_MAX;

	t63 = (x897>>((x898%x899)%x900));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x917 = 47783LLU;
	uint8_t x918 = 1U;
	int64_t x919 = 3616293433459LL;

	t64 = (x917>>((x918%x919)%x920));

	if (t64 != 23891LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x925 = 1U;
	int16_t x926 = 31;
	uint8_t x927 = UINT8_MAX;
	int8_t x928 = 7;
	int32_t t65 = 243669626;

	t65 = (x925>>((x926%x927)%x928));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x937 = 1608U;
	int8_t x938 = INT8_MIN;
	uint64_t x939 = 42663500585091LLU;
	volatile int32_t t66 = 77117;

	t66 = (x937>>((x938%x939)%x940));

	if (t66 != 402) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x945 = 1;
	volatile int32_t x946 = -6075;
	static uint8_t x947 = 3U;
	int16_t x948 = -1;
	int32_t t67 = -244889;

	t67 = (x945>>((x946%x947)%x948));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x965 = 945U;
	static int32_t x966 = INT32_MIN;
	int16_t x967 = INT16_MIN;
	int32_t t68 = 655695294;

	t68 = (x965>>((x966%x967)%x968));

	if (t68 != 945) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x978 = 726379178711514LLU;
	int64_t x979 = INT64_MIN;
	uint16_t x980 = 1U;
	volatile int32_t t69 = 0;

	t69 = (x977>>((x978%x979)%x980));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x986 = INT16_MIN;
	int16_t x987 = -1;
	volatile int16_t x988 = INT16_MIN;
	volatile int32_t t70 = 70352;

	t70 = (x985>>((x986%x987)%x988));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x989 = 76308873U;
	int64_t x991 = -1810937867492LL;
	uint32_t t71 = 8940092U;

	t71 = (x989>>((x990%x991)%x992));

	if (t71 != 76308873U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x1041 = 14272411LLU;
	volatile int16_t x1042 = INT16_MIN;
	int16_t x1043 = INT16_MIN;
	int16_t x1044 = INT16_MIN;
	volatile uint64_t t72 = 241766652474LLU;

	t72 = (x1041>>((x1042%x1043)%x1044));

	if (t72 != 14272411LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x1081 = 1749715U;
	int16_t x1082 = -1;
	uint8_t x1083 = 3U;
	uint64_t x1084 = UINT64_MAX;
	static volatile uint32_t t73 = 406U;

	t73 = (x1081>>((x1082%x1083)%x1084));

	if (t73 != 1749715U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x1085 = 17U;
	volatile int64_t x1086 = INT64_MAX;
	volatile int16_t x1087 = INT16_MIN;
	int8_t x1088 = -6;

	t74 = (x1085>>((x1086%x1087)%x1088));

	if (t74 != 8) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1097 = UINT64_MAX;
	int64_t x1098 = INT64_MAX;
	volatile uint32_t x1099 = 16U;
	uint64_t t75 = 440171LLU;

	t75 = (x1097>>((x1098%x1099)%x1100));

	if (t75 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x1121 = UINT32_MAX;
	int16_t x1122 = -1;
	uint64_t x1123 = UINT64_MAX;
	uint64_t x1124 = 222134457627124LLU;

	t76 = (x1121>>((x1122%x1123)%x1124));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x1125 = INT16_MAX;
	uint16_t x1126 = 14U;
	uint32_t x1128 = UINT32_MAX;
	int32_t t77 = -282088;

	t77 = (x1125>>((x1126%x1127)%x1128));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x1141 = 2U;
	volatile int64_t x1142 = -17909LL;
	int32_t x1143 = INT32_MIN;
	int64_t x1144 = -1LL;

	t78 = (x1141>>((x1142%x1143)%x1144));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x1145 = 112962273068822LL;
	int8_t x1146 = INT8_MIN;
	volatile int32_t x1147 = 3672585;
	static int16_t x1148 = -1;
	volatile int64_t t79 = 199906751228258LL;

	t79 = (x1145>>((x1146%x1147)%x1148));

	if (t79 != 112962273068822LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1154 = INT32_MAX;
	int64_t x1156 = -95384636329234LL;
	volatile int32_t t80 = -16706544;

	t80 = (x1153>>((x1154%x1155)%x1156));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x1181 = 22;
	uint8_t x1182 = 12U;
	int8_t x1183 = INT8_MIN;

	t81 = (x1181>>((x1182%x1183)%x1184));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x1186 = -1;
	int32_t x1188 = -1;
	int32_t t82 = INT32_MAX;

	t82 = (x1185>>((x1186%x1187)%x1188));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x1201 = 1043U;
	uint16_t x1202 = 1U;
	uint64_t x1203 = 3068731LLU;
	uint8_t x1204 = 1U;

	t83 = (x1201>>((x1202%x1203)%x1204));

	if (t83 != 1043) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1210 = INT32_MAX;
	volatile int64_t x1211 = -1LL;

	t84 = (x1209>>((x1210%x1211)%x1212));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1229 = 10573967664501LLU;
	static volatile int16_t x1230 = 2778;
	static volatile uint32_t x1231 = 47U;
	static int16_t x1232 = 1722;

	t85 = (x1229>>((x1230%x1231)%x1232));

	if (t85 != 330436489515LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x1234 = INT8_MIN;
	uint64_t x1235 = 30LLU;
	static volatile int16_t x1236 = -34;
	uint32_t t86 = 704444138U;

	t86 = (x1233>>((x1234%x1235)%x1236));

	if (t86 != 16777215U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x1250 = 0U;
	volatile int16_t x1251 = INT16_MAX;
	int16_t x1252 = INT16_MAX;

	t87 = (x1249>>((x1250%x1251)%x1252));

	if (t87 != 4451509LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x1274 = UINT16_MAX;
	int16_t x1275 = 1400;
	int8_t x1276 = -3;

	t88 = (x1273>>((x1274%x1275)%x1276));

	if (t88 != 128647895LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1293 = 1024649239LLU;
	static volatile uint32_t x1294 = UINT32_MAX;
	volatile int32_t x1295 = -1;
	static int32_t x1296 = INT32_MIN;
	uint64_t t89 = 2658222602LLU;

	t89 = (x1293>>((x1294%x1295)%x1296));

	if (t89 != 1024649239LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x1301 = 227U;
	volatile int8_t x1302 = 1;
	static volatile int32_t t90 = 62881;

	t90 = (x1301>>((x1302%x1303)%x1304));

	if (t90 != 113) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x1317 = UINT32_MAX;
	uint8_t x1318 = 0U;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (x1317>>((x1318%x1319)%x1320));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x1325 = 94604421;
	uint32_t x1326 = 186924U;
	uint8_t x1327 = UINT8_MAX;

	t92 = (x1325>>((x1326%x1327)%x1328));

	if (t92 != 184774) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x1349 = UINT16_MAX;
	volatile int32_t t93 = 2034;

	t93 = (x1349>>((x1350%x1351)%x1352));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1373 = INT32_MAX;
	static int32_t x1374 = INT32_MIN;
	uint32_t x1375 = UINT32_MAX;
	int64_t x1376 = -1LL;

	t94 = (x1373>>((x1374%x1375)%x1376));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x1393 = UINT8_MAX;
	uint32_t x1394 = 24536352U;
	uint8_t x1395 = UINT8_MAX;
	volatile int8_t x1396 = 1;
	int32_t t95 = 4;

	t95 = (x1393>>((x1394%x1395)%x1396));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x1401 = UINT16_MAX;
	int8_t x1402 = INT8_MIN;
	static int8_t x1403 = INT8_MIN;
	volatile int16_t x1404 = INT16_MAX;
	volatile int32_t t96 = -34;

	t96 = (x1401>>((x1402%x1403)%x1404));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x1433 = 19U;
	int64_t x1434 = INT64_MIN;
	volatile int32_t x1435 = INT32_MIN;
	int8_t x1436 = INT8_MAX;

	t97 = (x1433>>((x1434%x1435)%x1436));

	if (t97 != 19) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1465 = INT64_MAX;
	int8_t x1466 = INT8_MIN;
	uint32_t x1467 = UINT32_MAX;
	static volatile int64_t x1468 = -1LL;
	volatile int64_t t98 = INT64_MAX;

	t98 = (x1465>>((x1466%x1467)%x1468));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1477 = INT16_MAX;
	int8_t x1478 = -1;
	static int32_t x1479 = INT32_MIN;

	t99 = (x1477>>((x1478%x1479)%x1480));

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

