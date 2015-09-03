#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x44 = 3U;
volatile int32_t t1 = 1;
uint32_t x314 = UINT32_MAX;
static uint16_t x315 = 46U;
int16_t x358 = -1;
int8_t x373 = INT8_MIN;
uint8_t x376 = 33U;
int64_t x567 = 5918LL;
int32_t x681 = -62225962;
uint8_t x682 = 1U;
volatile uint64_t x683 = UINT64_MAX;
volatile int8_t x709 = -1;
static volatile int16_t x821 = -3343;
static uint64_t x823 = 7410274007LLU;
static uint16_t x824 = 3U;
int32_t t9 = -945;
uint8_t x835 = 3U;
volatile uint16_t x836 = 1U;
static volatile int32_t t10 = 181935;
int16_t x942 = -5737;
int8_t x943 = 4;
static uint16_t x944 = 4U;
int32_t t12 = -6863;
static uint8_t x1119 = 11U;
int16_t x1201 = INT16_MIN;
uint8_t x1204 = 30U;
int32_t t17 = 652995067;
int16_t x1542 = INT16_MIN;
static int64_t x1803 = INT64_MAX;
uint16_t x1860 = 2U;
uint32_t x1944 = 0U;
uint32_t x2460 = 13U;
static int32_t t26 = -438761171;
volatile uint64_t x2467 = 279461334450439LLU;
int32_t t27 = 1677;
int64_t x2827 = INT64_MAX;
static uint64_t x2842 = 19482085LLU;
static uint8_t x2843 = 10U;
volatile int32_t t30 = 6153;
int32_t x3089 = INT32_MIN;
uint16_t x3090 = 1U;
int16_t x3091 = INT16_MAX;
static int8_t x3230 = -8;
uint32_t x3232 = 1U;
uint16_t x3238 = 162U;
int32_t x3239 = 7275;
volatile int32_t t35 = -259543257;
volatile uint32_t x3250 = UINT32_MAX;
static int32_t t37 = -12313;
int8_t x3983 = INT8_MAX;
uint16_t x3993 = 28U;
int16_t x4114 = INT16_MIN;
uint16_t x4122 = 2U;
static volatile int32_t t43 = 370;
uint32_t x4324 = 0U;
volatile int64_t x4442 = -1LL;
uint16_t x4444 = 7U;
volatile int32_t t45 = 123842422;
uint64_t x4659 = UINT64_MAX;
int8_t x4706 = INT8_MIN;
static uint8_t x4708 = 6U;
static int16_t x4757 = -1;
int32_t t48 = 31450225;
int16_t x4993 = INT16_MIN;
int8_t x4996 = 1;
int16_t x5265 = -848;
int32_t x5302 = INT32_MAX;
volatile int32_t t56 = -753787279;
static int16_t x5503 = INT16_MAX;
volatile int32_t t58 = -38404;
int8_t x5637 = 0;
uint64_t x6241 = 9LLU;
volatile int64_t x6242 = INT64_MAX;
static volatile int32_t t63 = -684258;
volatile int32_t t64 = -61944;
int8_t x6440 = 1;
int32_t t65 = 126867673;
int64_t x6522 = -1LL;
uint8_t x6523 = 12U;
volatile int32_t t66 = 996922;
static int8_t x6545 = 0;
volatile int64_t x6546 = INT64_MAX;
uint8_t x6548 = 13U;
int32_t t67 = 15635790;
static uint16_t x6749 = 20U;
volatile int32_t t70 = 1018600;
static int64_t x6806 = 180340816LL;
static int8_t x6808 = 1;
volatile int32_t t71 = 3;
uint8_t x6848 = 0U;
int64_t x7010 = -2LL;
volatile uint8_t x7059 = UINT8_MAX;
int8_t x7060 = 0;
int8_t x7433 = INT8_MIN;
uint8_t x7470 = 0U;
volatile uint8_t x7471 = 7U;
int8_t x7472 = 1;
int8_t x7493 = 2;
int16_t x7561 = INT16_MIN;
int16_t x7563 = INT16_MAX;
int32_t t85 = -419004;
volatile int32_t t86 = -100;
uint16_t x7754 = 3U;
uint32_t x7763 = 962306828U;
int16_t x7782 = 207;
static uint32_t x7855 = 56289596U;
volatile int8_t x8047 = 4;
volatile uint8_t x8048 = 1U;
uint16_t x8087 = 440U;
static uint8_t x8117 = 15U;
static uint32_t x8119 = 374050476U;
volatile uint16_t x8120 = 0U;
int8_t x8265 = -11;
uint64_t x8267 = 622054696365896LLU;


void f0(void) {
	int16_t x41 = -439;
	int8_t x42 = -1;
	int64_t x43 = 14064488362297LL;
	int32_t t0 = 843;

	t0 = ((x41*x42)<(x43>>x44));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x109 = -13872;
	int8_t x110 = INT8_MIN;
	uint32_t x111 = 8920U;
	volatile int32_t x112 = 0;

	t1 = ((x109*x110)<(x111>>x112));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x173 = -1;
	int64_t x174 = 1552628LL;
	uint8_t x175 = UINT8_MAX;
	volatile int8_t x176 = 1;
	volatile int32_t t2 = -1526;

	t2 = ((x173*x174)<(x175>>x176));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x313 = 0U;
	static uint16_t x316 = 4U;
	static volatile int32_t t3 = -227;

	t3 = ((x313*x314)<(x315>>x316));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x357 = 38U;
	int8_t x359 = INT8_MAX;
	uint32_t x360 = 20U;
	volatile int32_t t4 = -20589;

	t4 = ((x357*x358)<(x359>>x360));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x374 = INT8_MIN;
	uint64_t x375 = UINT64_MAX;
	volatile int32_t t5 = -723;

	t5 = ((x373*x374)<(x375>>x376));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x565 = -1;
	uint32_t x566 = 22620168U;
	uint8_t x568 = 7U;
	static int32_t t6 = 104;

	t6 = ((x565*x566)<(x567>>x568));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x684 = 31LL;
	volatile int32_t t7 = 50;

	t7 = ((x681*x682)<(x683>>x684));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x710 = 1U;
	int16_t x711 = 0;
	uint8_t x712 = 22U;
	volatile int32_t t8 = -1;

	t8 = ((x709*x710)<(x711>>x712));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x822 = -1;

	t9 = ((x821*x822)<(x823>>x824));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x833 = INT16_MIN;
	int64_t x834 = 1LL;

	t10 = ((x833*x834)<(x835>>x836));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x941 = 15U;
	static volatile int32_t t11 = 90853812;

	t11 = ((x941*x942)<(x943>>x944));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x1105 = 620;
	static uint64_t x1106 = 1661735LLU;
	static volatile int16_t x1107 = 10;
	uint8_t x1108 = 1U;

	t12 = ((x1105*x1106)<(x1107>>x1108));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x1117 = 28U;
	uint32_t x1118 = UINT32_MAX;
	int16_t x1120 = 2;
	int32_t t13 = -243534569;

	t13 = ((x1117*x1118)<(x1119>>x1120));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1137 = UINT64_MAX;
	static int32_t x1138 = 562;
	uint8_t x1139 = 15U;
	uint16_t x1140 = 0U;
	volatile int32_t t14 = 56139674;

	t14 = ((x1137*x1138)<(x1139>>x1140));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1202 = UINT64_MAX;
	uint32_t x1203 = 7U;
	int32_t t15 = 201541;

	t15 = ((x1201*x1202)<(x1203>>x1204));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1317 = 2;
	uint8_t x1318 = UINT8_MAX;
	uint32_t x1319 = UINT32_MAX;
	static int8_t x1320 = 2;
	int32_t t16 = -174983701;

	t16 = ((x1317*x1318)<(x1319>>x1320));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1333 = INT16_MIN;
	volatile uint64_t x1334 = 185227LLU;
	uint64_t x1335 = 456220951LLU;
	static uint8_t x1336 = 1U;

	t17 = ((x1333*x1334)<(x1335>>x1336));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x1521 = UINT32_MAX;
	int8_t x1522 = INT8_MIN;
	uint64_t x1523 = 0LLU;
	static int8_t x1524 = 1;
	volatile int32_t t18 = 1;

	t18 = ((x1521*x1522)<(x1523>>x1524));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1537 = -1;
	uint8_t x1538 = 2U;
	static volatile uint32_t x1539 = 46U;
	uint64_t x1540 = 2LLU;
	int32_t t19 = -31216117;

	t19 = ((x1537*x1538)<(x1539>>x1540));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1541 = INT8_MIN;
	uint32_t x1543 = 3U;
	static volatile uint16_t x1544 = 5U;
	int32_t t20 = -1097;

	t20 = ((x1541*x1542)<(x1543>>x1544));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x1653 = INT64_MIN;
	static volatile uint64_t x1654 = UINT64_MAX;
	int32_t x1655 = INT32_MAX;
	uint8_t x1656 = 9U;
	int32_t t21 = -592295;

	t21 = ((x1653*x1654)<(x1655>>x1656));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1801 = -1;
	int32_t x1802 = -1;
	int16_t x1804 = 11;
	volatile int32_t t22 = 266960611;

	t22 = ((x1801*x1802)<(x1803>>x1804));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1857 = -1;
	static int32_t x1858 = 1;
	uint16_t x1859 = 31U;
	volatile int32_t t23 = 196404;

	t23 = ((x1857*x1858)<(x1859>>x1860));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1941 = 2U;
	volatile int64_t x1942 = 8991561152LL;
	uint32_t x1943 = 26566U;
	volatile int32_t t24 = -2224;

	t24 = ((x1941*x1942)<(x1943>>x1944));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x2333 = 31U;
	int16_t x2334 = INT16_MIN;
	uint16_t x2335 = 733U;
	uint64_t x2336 = 2LLU;
	static int32_t t25 = -50;

	t25 = ((x2333*x2334)<(x2335>>x2336));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x2457 = UINT32_MAX;
	int16_t x2458 = INT16_MAX;
	int16_t x2459 = INT16_MAX;

	t26 = ((x2457*x2458)<(x2459>>x2460));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x2465 = -32030;
	int8_t x2466 = INT8_MIN;
	uint8_t x2468 = 3U;

	t27 = ((x2465*x2466)<(x2467>>x2468));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x2713 = INT8_MAX;
	int8_t x2714 = INT8_MAX;
	volatile uint64_t x2715 = UINT64_MAX;
	uint32_t x2716 = 30U;
	int32_t t28 = 295500979;

	t28 = ((x2713*x2714)<(x2715>>x2716));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x2825 = UINT8_MAX;
	int32_t x2826 = -4782604;
	uint32_t x2828 = 1U;
	int32_t t29 = 1;

	t29 = ((x2825*x2826)<(x2827>>x2828));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x2841 = UINT8_MAX;
	uint16_t x2844 = 1U;

	t30 = ((x2841*x2842)<(x2843>>x2844));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2849 = 14U;
	uint32_t x2850 = UINT32_MAX;
	volatile uint64_t x2851 = 2594141LLU;
	int8_t x2852 = 0;
	volatile int32_t t31 = -239570;

	t31 = ((x2849*x2850)<(x2851>>x2852));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x2925 = 21313U;
	static uint8_t x2926 = 10U;
	volatile uint16_t x2927 = 7U;
	static uint8_t x2928 = 2U;
	int32_t t32 = 51;

	t32 = ((x2925*x2926)<(x2927>>x2928));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x3092 = 5U;
	volatile int32_t t33 = -560446;

	t33 = ((x3089*x3090)<(x3091>>x3092));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x3229 = 229672067LLU;
	static uint16_t x3231 = 408U;
	volatile int32_t t34 = -7796463;

	t34 = ((x3229*x3230)<(x3231>>x3232));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x3237 = -1;
	int16_t x3240 = 1;

	t35 = ((x3237*x3238)<(x3239>>x3240));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x3249 = -1;
	int64_t x3251 = INT64_MAX;
	int8_t x3252 = 56;
	int32_t t36 = 0;

	t36 = ((x3249*x3250)<(x3251>>x3252));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x3289 = 86406488177023LLU;
	int8_t x3290 = -1;
	int32_t x3291 = INT32_MAX;
	uint16_t x3292 = 3U;

	t37 = ((x3289*x3290)<(x3291>>x3292));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x3565 = INT16_MAX;
	volatile uint8_t x3566 = 15U;
	int32_t x3567 = 54387;
	volatile uint16_t x3568 = 26U;
	int32_t t38 = -1;

	t38 = ((x3565*x3566)<(x3567>>x3568));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x3693 = INT8_MAX;
	volatile uint16_t x3694 = 5U;
	uint64_t x3695 = 213611190796014840LLU;
	uint8_t x3696 = 2U;
	volatile int32_t t39 = 12750;

	t39 = ((x3693*x3694)<(x3695>>x3696));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x3981 = 5U;
	static int8_t x3982 = INT8_MIN;
	uint32_t x3984 = 1U;
	volatile int32_t t40 = 344264797;

	t40 = ((x3981*x3982)<(x3983>>x3984));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x3994 = UINT64_MAX;
	static volatile int16_t x3995 = 24;
	uint16_t x3996 = 6U;
	volatile int32_t t41 = -1;

	t41 = ((x3993*x3994)<(x3995>>x3996));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x4113 = -1;
	int8_t x4115 = INT8_MAX;
	int16_t x4116 = 0;
	static int32_t t42 = 62834;

	t42 = ((x4113*x4114)<(x4115>>x4116));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x4121 = UINT32_MAX;
	int32_t x4123 = INT32_MAX;
	volatile uint8_t x4124 = 10U;

	t43 = ((x4121*x4122)<(x4123>>x4124));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x4321 = INT16_MIN;
	int8_t x4322 = -51;
	static int8_t x4323 = 1;
	static int32_t t44 = 0;

	t44 = ((x4321*x4322)<(x4323>>x4324));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x4441 = 98;
	static uint64_t x4443 = UINT64_MAX;

	t45 = ((x4441*x4442)<(x4443>>x4444));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x4657 = 26980LLU;
	int16_t x4658 = INT16_MAX;
	uint8_t x4660 = 0U;
	int32_t t46 = 885;

	t46 = ((x4657*x4658)<(x4659>>x4660));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x4705 = UINT64_MAX;
	uint8_t x4707 = 26U;
	static volatile int32_t t47 = 1244;

	t47 = ((x4705*x4706)<(x4707>>x4708));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x4758 = -2351;
	volatile int16_t x4759 = 93;
	uint8_t x4760 = 0U;

	t48 = ((x4757*x4758)<(x4759>>x4760));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x4781 = -217LL;
	int32_t x4782 = INT32_MIN;
	uint32_t x4783 = UINT32_MAX;
	int8_t x4784 = 1;
	volatile int32_t t49 = 81272;

	t49 = ((x4781*x4782)<(x4783>>x4784));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x4994 = -1;
	int64_t x4995 = 937036LL;
	volatile int32_t t50 = -1;

	t50 = ((x4993*x4994)<(x4995>>x4996));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x5113 = 0U;
	int8_t x5114 = INT8_MAX;
	uint64_t x5115 = 0LLU;
	uint8_t x5116 = 15U;
	volatile int32_t t51 = 365;

	t51 = ((x5113*x5114)<(x5115>>x5116));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x5266 = INT8_MAX;
	static uint16_t x5267 = 29916U;
	static uint16_t x5268 = 1U;
	int32_t t52 = 50147;

	t52 = ((x5265*x5266)<(x5267>>x5268));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x5289 = 0U;
	static volatile int8_t x5290 = INT8_MAX;
	uint64_t x5291 = 155344889416883240LLU;
	volatile uint16_t x5292 = 42U;
	volatile int32_t t53 = -1;

	t53 = ((x5289*x5290)<(x5291>>x5292));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x5301 = 8851146826171215LLU;
	uint64_t x5303 = 3985328205LLU;
	static uint16_t x5304 = 1U;
	static int32_t t54 = 0;

	t54 = ((x5301*x5302)<(x5303>>x5304));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x5353 = -1;
	volatile int8_t x5354 = INT8_MIN;
	uint32_t x5355 = UINT32_MAX;
	static uint16_t x5356 = 2U;
	volatile int32_t t55 = -74175875;

	t55 = ((x5353*x5354)<(x5355>>x5356));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x5441 = UINT64_MAX;
	volatile uint16_t x5442 = UINT16_MAX;
	int32_t x5443 = 437055956;
	static uint8_t x5444 = 2U;

	t56 = ((x5441*x5442)<(x5443>>x5444));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x5501 = 10U;
	int64_t x5502 = 83619931231199000LL;
	static uint8_t x5504 = 9U;
	int32_t t57 = 13376224;

	t57 = ((x5501*x5502)<(x5503>>x5504));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x5573 = 181624803;
	uint64_t x5574 = 187LLU;
	int64_t x5575 = 12LL;
	int8_t x5576 = 0;

	t58 = ((x5573*x5574)<(x5575>>x5576));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x5638 = 1871239U;
	uint16_t x5639 = 1U;
	static volatile uint16_t x5640 = 21U;
	int32_t t59 = -2235700;

	t59 = ((x5637*x5638)<(x5639>>x5640));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x5993 = -1;
	static uint64_t x5994 = UINT64_MAX;
	int16_t x5995 = 17;
	int8_t x5996 = 1;
	volatile int32_t t60 = 120982673;

	t60 = ((x5993*x5994)<(x5995>>x5996));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x6201 = -1;
	uint32_t x6202 = 1082978762U;
	int8_t x6203 = 3;
	int8_t x6204 = 3;
	volatile int32_t t61 = -122503;

	t61 = ((x6201*x6202)<(x6203>>x6204));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x6233 = UINT32_MAX;
	static int32_t x6234 = -468770;
	int8_t x6235 = INT8_MAX;
	uint8_t x6236 = 10U;
	volatile int32_t t62 = 1;

	t62 = ((x6233*x6234)<(x6235>>x6236));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x6243 = UINT32_MAX;
	uint8_t x6244 = 15U;

	t63 = ((x6241*x6242)<(x6243>>x6244));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x6341 = 3U;
	uint32_t x6342 = 918U;
	int64_t x6343 = 2149036824889LL;
	uint16_t x6344 = 0U;

	t64 = ((x6341*x6342)<(x6343>>x6344));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x6437 = -1;
	static uint32_t x6438 = 698659718U;
	static uint32_t x6439 = 642741U;

	t65 = ((x6437*x6438)<(x6439>>x6440));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x6521 = INT32_MIN;
	static int16_t x6524 = 6;

	t66 = ((x6521*x6522)<(x6523>>x6524));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x6547 = 261031425U;

	t67 = ((x6545*x6546)<(x6547>>x6548));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x6725 = INT16_MIN;
	static int8_t x6726 = INT8_MIN;
	static int32_t x6727 = 409;
	uint8_t x6728 = 2U;
	static volatile int32_t t68 = -1;

	t68 = ((x6725*x6726)<(x6727>>x6728));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x6750 = -1LL;
	static int64_t x6751 = 16167644LL;
	static uint32_t x6752 = 0U;
	volatile int32_t t69 = -33;

	t69 = ((x6749*x6750)<(x6751>>x6752));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x6801 = INT8_MIN;
	int64_t x6802 = 179134640960LL;
	uint16_t x6803 = UINT16_MAX;
	volatile uint16_t x6804 = 14U;

	t70 = ((x6801*x6802)<(x6803>>x6804));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x6805 = INT8_MIN;
	uint64_t x6807 = 136635963936097919LLU;

	t71 = ((x6805*x6806)<(x6807>>x6808));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x6809 = 0;
	uint8_t x6810 = UINT8_MAX;
	uint8_t x6811 = 2U;
	static uint8_t x6812 = 7U;
	volatile int32_t t72 = 18887322;

	t72 = ((x6809*x6810)<(x6811>>x6812));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x6845 = -1;
	uint32_t x6846 = 42U;
	volatile uint32_t x6847 = UINT32_MAX;
	int32_t t73 = -425;

	t73 = ((x6845*x6846)<(x6847>>x6848));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x6885 = -1;
	static volatile int32_t x6886 = 81358773;
	uint16_t x6887 = 223U;
	int16_t x6888 = 0;
	static int32_t t74 = 63539;

	t74 = ((x6885*x6886)<(x6887>>x6888));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x7009 = INT16_MIN;
	uint64_t x7011 = UINT64_MAX;
	uint16_t x7012 = 6U;
	volatile int32_t t75 = -28301299;

	t75 = ((x7009*x7010)<(x7011>>x7012));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x7057 = 0;
	int8_t x7058 = -3;
	volatile int32_t t76 = 30319;

	t76 = ((x7057*x7058)<(x7059>>x7060));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x7197 = 17;
	volatile int8_t x7198 = INT8_MIN;
	static uint64_t x7199 = 391772562822252LLU;
	uint8_t x7200 = 11U;
	int32_t t77 = 12578;

	t77 = ((x7197*x7198)<(x7199>>x7200));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x7321 = -1;
	int8_t x7322 = 0;
	uint64_t x7323 = UINT64_MAX;
	volatile int8_t x7324 = 0;
	static int32_t t78 = 18548;

	t78 = ((x7321*x7322)<(x7323>>x7324));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x7434 = INT16_MIN;
	static int64_t x7435 = INT64_MAX;
	int8_t x7436 = 0;
	volatile int32_t t79 = 378984125;

	t79 = ((x7433*x7434)<(x7435>>x7436));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x7469 = UINT8_MAX;
	volatile int32_t t80 = -506;

	t80 = ((x7469*x7470)<(x7471>>x7472));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x7494 = INT8_MAX;
	int8_t x7495 = 3;
	static uint16_t x7496 = 2U;
	volatile int32_t t81 = 36268487;

	t81 = ((x7493*x7494)<(x7495>>x7496));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x7545 = -205513876237LL;
	int64_t x7546 = -1LL;
	uint32_t x7547 = UINT32_MAX;
	volatile uint8_t x7548 = 1U;
	int32_t t82 = 194273464;

	t82 = ((x7545*x7546)<(x7547>>x7548));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x7562 = INT8_MIN;
	uint16_t x7564 = 2U;
	int32_t t83 = 289386;

	t83 = ((x7561*x7562)<(x7563>>x7564));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x7573 = -1;
	uint64_t x7574 = 1LLU;
	uint16_t x7575 = UINT16_MAX;
	int8_t x7576 = 0;
	int32_t t84 = -962289;

	t84 = ((x7573*x7574)<(x7575>>x7576));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x7641 = 14733U;
	static int16_t x7642 = INT16_MIN;
	int64_t x7643 = INT64_MAX;
	volatile uint16_t x7644 = 3U;

	t85 = ((x7641*x7642)<(x7643>>x7644));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x7745 = -1LL;
	int32_t x7746 = -1;
	uint16_t x7747 = 811U;
	uint32_t x7748 = 2U;

	t86 = ((x7745*x7746)<(x7747>>x7748));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x7753 = INT8_MIN;
	uint64_t x7755 = 666LLU;
	uint8_t x7756 = 1U;
	int32_t t87 = 2694133;

	t87 = ((x7753*x7754)<(x7755>>x7756));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x7761 = INT8_MAX;
	int64_t x7762 = -1LL;
	uint8_t x7764 = 13U;
	static volatile int32_t t88 = 0;

	t88 = ((x7761*x7762)<(x7763>>x7764));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x7773 = 218378LL;
	static int16_t x7774 = 3;
	static int32_t x7775 = INT32_MAX;
	int8_t x7776 = 27;
	int32_t t89 = 57826;

	t89 = ((x7773*x7774)<(x7775>>x7776));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x7781 = -1;
	int32_t x7783 = 3;
	uint16_t x7784 = 9U;
	volatile int32_t t90 = 13639;

	t90 = ((x7781*x7782)<(x7783>>x7784));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x7853 = -1;
	volatile int16_t x7854 = INT16_MIN;
	volatile int8_t x7856 = 1;
	volatile int32_t t91 = -61;

	t91 = ((x7853*x7854)<(x7855>>x7856));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x8001 = UINT8_MAX;
	int64_t x8002 = -1LL;
	uint16_t x8003 = UINT16_MAX;
	int8_t x8004 = 1;
	int32_t t92 = -803372;

	t92 = ((x8001*x8002)<(x8003>>x8004));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x8045 = 16522906280322LL;
	int16_t x8046 = INT16_MIN;
	volatile int32_t t93 = -662451967;

	t93 = ((x8045*x8046)<(x8047>>x8048));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x8073 = 14;
	uint16_t x8074 = UINT16_MAX;
	static volatile uint16_t x8075 = 51U;
	uint16_t x8076 = 23U;
	static int32_t t94 = -43739305;

	t94 = ((x8073*x8074)<(x8075>>x8076));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x8085 = UINT8_MAX;
	static int8_t x8086 = INT8_MAX;
	uint32_t x8088 = 3U;
	volatile int32_t t95 = -2;

	t95 = ((x8085*x8086)<(x8087>>x8088));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x8118 = -1;
	int32_t t96 = 8034863;

	t96 = ((x8117*x8118)<(x8119>>x8120));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x8249 = 0;
	static uint32_t x8250 = 32U;
	uint8_t x8251 = UINT8_MAX;
	int16_t x8252 = 1;
	volatile int32_t t97 = 0;

	t97 = ((x8249*x8250)<(x8251>>x8252));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x8266 = INT8_MIN;
	volatile uint8_t x8268 = 0U;
	int32_t t98 = 5086;

	t98 = ((x8265*x8266)<(x8267>>x8268));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x8269 = -4;
	uint32_t x8270 = 54529535U;
	int64_t x8271 = 265342413LL;
	int8_t x8272 = 1;
	int32_t t99 = -4094;

	t99 = ((x8269*x8270)<(x8271>>x8272));

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

