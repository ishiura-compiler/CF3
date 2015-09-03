#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x41 = UINT64_MAX;
static volatile int64_t t2 = 13304678015457LL;
static int16_t x529 = 1;
int32_t t4 = 26168628;
int8_t x747 = -1;
static uint32_t x748 = UINT32_MAX;
volatile int8_t x774 = INT8_MIN;
static int64_t x776 = -1LL;
volatile int32_t x792 = 1;
int16_t x978 = INT16_MAX;
int32_t x979 = -5117;
int64_t x1166 = -437549LL;
volatile uint32_t x1167 = UINT32_MAX;
volatile uint32_t x1189 = UINT32_MAX;
uint32_t t10 = UINT32_MAX;
int32_t x1566 = INT32_MAX;
volatile uint32_t x1568 = UINT32_MAX;
volatile int32_t t15 = -26893558;
volatile int64_t t16 = INT64_MAX;
int16_t x1708 = -1;
uint16_t x2053 = 2U;
static volatile int8_t x2054 = INT8_MIN;
volatile uint16_t x2055 = 0U;
uint64_t x2085 = 63652574LLU;
int8_t x2136 = -1;
int32_t t23 = 44024204;
volatile int32_t t25 = 31734;
static volatile int32_t x2679 = -1;
uint8_t x2730 = 3U;
int32_t x2871 = 1185;
static int64_t x2885 = INT64_MAX;
uint8_t x2897 = UINT8_MAX;
int32_t x3085 = INT32_MAX;
static volatile uint8_t x3086 = 21U;
volatile uint8_t x3087 = 0U;
int8_t x3088 = -1;
uint8_t x3294 = UINT8_MAX;
int16_t x3295 = -4;
int8_t x3483 = INT8_MIN;
int64_t x3484 = -1LL;
static volatile int32_t t36 = -929554636;
uint8_t x3819 = 18U;
int16_t x4131 = -1;
uint64_t t42 = 91LLU;
int16_t x4199 = INT16_MIN;
static volatile uint32_t t44 = 168U;
static int32_t x4669 = 7893;
uint8_t x4670 = 16U;
static int32_t x4671 = -1;
static int8_t x4716 = -1;
int64_t x4797 = INT64_MAX;
volatile int64_t x4798 = -4263LL;
uint32_t x4969 = 98386U;
static volatile uint32_t t54 = 10U;
int16_t x5068 = -1;
int32_t t55 = 5;
int64_t x5280 = -1LL;
uint64_t x5343 = UINT64_MAX;
static int32_t x5344 = -1;
static int64_t x5514 = INT64_MAX;
volatile int32_t t60 = -3878;
volatile int32_t t61 = -56354;
static volatile int32_t t62 = INT32_MAX;
static int8_t x6124 = -1;
volatile int32_t t64 = 1;
int64_t x6169 = 13149072808949642LL;
volatile int8_t x6229 = INT8_MAX;
volatile int32_t x6240 = INT32_MAX;
uint64_t x6300 = UINT64_MAX;
int32_t x6566 = 34118313;
static int32_t x6567 = INT32_MAX;
static volatile int32_t t71 = 75;
volatile uint16_t x6685 = 1463U;
int32_t x6688 = -1;
static volatile int64_t x6826 = -1LL;
int32_t t73 = -1168682;
uint64_t x7189 = 22267106136722010LLU;
static int16_t x7190 = -1;
int32_t x7279 = INT32_MIN;
int32_t x7280 = INT32_MIN;
uint32_t x7645 = UINT32_MAX;
uint32_t x7699 = 8784U;
static int32_t x7729 = 840477336;
int16_t x7730 = INT16_MIN;
uint32_t x7886 = UINT32_MAX;
uint64_t x7938 = UINT64_MAX;
uint64_t t85 = 519132LLU;
static int16_t x8398 = -1;
int16_t x8399 = -685;
int32_t x8445 = INT32_MAX;
int32_t x8583 = -1;
int16_t x8632 = INT16_MAX;
int64_t t93 = -30659160006052LL;
volatile int32_t x8738 = -1;
uint16_t x8777 = 17614U;
volatile uint8_t x8779 = 87U;
int32_t t95 = 217243057;
int64_t x8818 = -1LL;
static int32_t t97 = 144841389;
int16_t x9073 = 888;
int8_t x9075 = INT8_MIN;
static uint16_t x9298 = UINT16_MAX;


void f0(void) {
	uint64_t x42 = UINT64_MAX;
	volatile int16_t x43 = INT16_MIN;
	int16_t x44 = -1;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (x41>>((x42|x43)-x44));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x313 = 16;
	uint8_t x314 = UINT8_MAX;
	int32_t x315 = -1;
	volatile int16_t x316 = -1;
	volatile int32_t t1 = 0;

	t1 = (x313>>((x314|x315)-x316));

	if (t1 != 16) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x477 = 30950LL;
	int16_t x478 = 7;
	uint8_t x479 = 15U;
	volatile int32_t x480 = -1;

	t2 = (x477>>((x478|x479)-x480));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x530 = -6;
	uint8_t x531 = UINT8_MAX;
	int32_t x532 = -1;
	volatile int32_t t3 = 1;

	t3 = (x529>>((x530|x531)-x532));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x733 = 3143;
	int8_t x734 = INT8_MIN;
	int8_t x735 = -1;
	uint32_t x736 = UINT32_MAX;

	t4 = (x733>>((x734|x735)-x736));

	if (t4 != 3143) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x745 = 804;
	static uint8_t x746 = 106U;
	int32_t t5 = 545;

	t5 = (x745>>((x746|x747)-x748));

	if (t5 != 804) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x773 = INT16_MAX;
	int32_t x775 = -1;
	int32_t t6 = -116975453;

	t6 = (x773>>((x774|x775)-x776));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x789 = UINT64_MAX;
	uint16_t x790 = 1U;
	static uint8_t x791 = 14U;
	volatile uint64_t t7 = 476104169LLU;

	t7 = (x789>>((x790|x791)-x792));

	if (t7 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x977 = 201;
	int64_t x980 = -11LL;
	int32_t t8 = 2415075;

	t8 = (x977>>((x978|x979)-x980));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x1165 = INT64_MAX;
	static volatile int8_t x1168 = -1;
	volatile int64_t t9 = INT64_MAX;

	t9 = (x1165>>((x1166|x1167)-x1168));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x1190 = 7259U;
	int16_t x1191 = -4;
	volatile int8_t x1192 = -1;

	t10 = (x1189>>((x1190|x1191)-x1192));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x1265 = 3749U;
	volatile int16_t x1266 = INT16_MIN;
	int8_t x1267 = -1;
	uint32_t x1268 = UINT32_MAX;
	uint32_t t11 = 69U;

	t11 = (x1265>>((x1266|x1267)-x1268));

	if (t11 != 3749U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1405 = 666;
	static int16_t x1406 = INT16_MIN;
	int16_t x1407 = INT16_MAX;
	int64_t x1408 = -1LL;
	int32_t t12 = 465;

	t12 = (x1405>>((x1406|x1407)-x1408));

	if (t12 != 666) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1509 = UINT32_MAX;
	uint64_t x1510 = UINT64_MAX;
	static int16_t x1511 = INT16_MAX;
	int64_t x1512 = -1LL;
	uint32_t t13 = UINT32_MAX;

	t13 = (x1509>>((x1510|x1511)-x1512));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1565 = UINT64_MAX;
	int16_t x1567 = INT16_MIN;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x1565>>((x1566|x1567)-x1568));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x1609 = UINT16_MAX;
	volatile int8_t x1610 = -1;
	static int16_t x1611 = INT16_MIN;
	int8_t x1612 = -1;

	t15 = (x1609>>((x1610|x1611)-x1612));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x1673 = INT64_MAX;
	volatile int64_t x1674 = INT64_MIN;
	int16_t x1675 = -1;
	int16_t x1676 = -1;

	t16 = (x1673>>((x1674|x1675)-x1676));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x1705 = 475;
	static int16_t x1706 = INT16_MIN;
	int16_t x1707 = INT16_MAX;
	volatile int32_t t17 = 67869;

	t17 = (x1705>>((x1706|x1707)-x1708));

	if (t17 != 475) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1893 = 24;
	int64_t x1894 = INT64_MAX;
	uint8_t x1895 = 0U;
	volatile int64_t x1896 = INT64_MAX;
	volatile int32_t t18 = 1387105;

	t18 = (x1893>>((x1894|x1895)-x1896));

	if (t18 != 24) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x2056 = INT8_MIN;
	static volatile int32_t t19 = -12844;

	t19 = (x2053>>((x2054|x2055)-x2056));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x2086 = 25;
	volatile uint8_t x2087 = 0U;
	uint8_t x2088 = 0U;
	uint64_t t20 = 38830586097LLU;

	t20 = (x2085>>((x2086|x2087)-x2088));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x2133 = UINT16_MAX;
	int64_t x2134 = INT64_MAX;
	static int8_t x2135 = -1;
	static int32_t t21 = 2955141;

	t21 = (x2133>>((x2134|x2135)-x2136));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x2201 = 1455LLU;
	int16_t x2202 = INT16_MIN;
	int8_t x2203 = -1;
	volatile uint32_t x2204 = UINT32_MAX;
	volatile uint64_t t22 = 3610760LLU;

	t22 = (x2201>>((x2202|x2203)-x2204));

	if (t22 != 1455LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x2365 = 828547;
	int16_t x2366 = -1;
	static uint8_t x2367 = UINT8_MAX;
	int16_t x2368 = -15;

	t23 = (x2365>>((x2366|x2367)-x2368));

	if (t23 != 50) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x2517 = INT32_MAX;
	uint8_t x2518 = 16U;
	uint16_t x2519 = 0U;
	uint64_t x2520 = UINT64_MAX;
	int32_t t24 = -1313231;

	t24 = (x2517>>((x2518|x2519)-x2520));

	if (t24 != 16383) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x2657 = UINT8_MAX;
	static uint16_t x2658 = 25U;
	int8_t x2659 = 0;
	int64_t x2660 = -1LL;

	t25 = (x2657>>((x2658|x2659)-x2660));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x2677 = UINT64_MAX;
	int32_t x2678 = 2687;
	uint32_t x2680 = UINT32_MAX;
	static uint64_t t26 = UINT64_MAX;

	t26 = (x2677>>((x2678|x2679)-x2680));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x2729 = 18;
	static int32_t x2731 = -1;
	volatile uint32_t x2732 = UINT32_MAX;
	static volatile int32_t t27 = 26198656;

	t27 = (x2729>>((x2730|x2731)-x2732));

	if (t27 != 18) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2865 = INT64_MAX;
	int16_t x2866 = -1;
	int64_t x2867 = INT64_MAX;
	static int8_t x2868 = -3;
	volatile int64_t t28 = 78LL;

	t28 = (x2865>>((x2866|x2867)-x2868));

	if (t28 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x2869 = INT32_MAX;
	uint64_t x2870 = UINT64_MAX;
	int32_t x2872 = -1;
	volatile int32_t t29 = INT32_MAX;

	t29 = (x2869>>((x2870|x2871)-x2872));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x2886 = 2607255U;
	volatile int64_t x2887 = -1LL;
	volatile int32_t x2888 = -1;
	int64_t t30 = INT64_MAX;

	t30 = (x2885>>((x2886|x2887)-x2888));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x2898 = 1;
	int16_t x2899 = -1;
	int8_t x2900 = -1;
	static int32_t t31 = 237;

	t31 = (x2897>>((x2898|x2899)-x2900));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x3061 = INT32_MAX;
	int8_t x3062 = 10;
	static int16_t x3063 = -1;
	int8_t x3064 = -1;
	volatile int32_t t32 = INT32_MAX;

	t32 = (x3061>>((x3062|x3063)-x3064));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t t33 = -2117;

	t33 = (x3085>>((x3086|x3087)-x3088));

	if (t33 != 511) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x3137 = UINT8_MAX;
	static volatile int32_t x3138 = 0;
	static uint8_t x3139 = 1U;
	int32_t x3140 = 1;
	volatile int32_t t34 = -2643;

	t34 = (x3137>>((x3138|x3139)-x3140));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x3293 = 3393112;
	int16_t x3296 = -1;
	int32_t t35 = -4670860;

	t35 = (x3293>>((x3294|x3295)-x3296));

	if (t35 != 3393112) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x3481 = 1U;
	uint8_t x3482 = UINT8_MAX;

	t36 = (x3481>>((x3482|x3483)-x3484));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x3701 = INT8_MAX;
	volatile int32_t x3702 = -97309685;
	volatile int64_t x3703 = -1LL;
	uint64_t x3704 = UINT64_MAX;
	static int32_t t37 = -22;

	t37 = (x3701>>((x3702|x3703)-x3704));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x3761 = 63U;
	static uint16_t x3762 = UINT16_MAX;
	int16_t x3763 = INT16_MIN;
	int16_t x3764 = -1;
	static int32_t t38 = -356;

	t38 = (x3761>>((x3762|x3763)-x3764));

	if (t38 != 63) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x3817 = UINT16_MAX;
	int16_t x3818 = 3;
	int16_t x3820 = -1;
	volatile int32_t t39 = 987788898;

	t39 = (x3817>>((x3818|x3819)-x3820));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x3865 = 0;
	int8_t x3866 = INT8_MAX;
	volatile int8_t x3867 = INT8_MIN;
	int64_t x3868 = -1LL;
	volatile int32_t t40 = 3;

	t40 = (x3865>>((x3866|x3867)-x3868));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x3873 = 1U;
	int32_t x3874 = INT32_MIN;
	int64_t x3875 = INT64_MAX;
	int32_t x3876 = -1;
	int32_t t41 = -3578;

	t41 = (x3873>>((x3874|x3875)-x3876));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x4129 = 20982060375LLU;
	int64_t x4130 = INT64_MIN;
	int64_t x4132 = -1LL;

	t42 = (x4129>>((x4130|x4131)-x4132));

	if (t42 != 20982060375LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x4197 = INT16_MAX;
	int32_t x4198 = -1;
	int16_t x4200 = -1;
	volatile int32_t t43 = 8427;

	t43 = (x4197>>((x4198|x4199)-x4200));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x4205 = 612600778U;
	int64_t x4206 = -7995145LL;
	volatile int64_t x4207 = INT64_MAX;
	int16_t x4208 = -1;

	t44 = (x4205>>((x4206|x4207)-x4208));

	if (t44 != 612600778U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x4269 = UINT8_MAX;
	uint16_t x4270 = UINT16_MAX;
	int64_t x4271 = -1LL;
	static int32_t x4272 = -1;
	static volatile int32_t t45 = 6903719;

	t45 = (x4269>>((x4270|x4271)-x4272));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x4465 = INT16_MAX;
	volatile int8_t x4466 = INT8_MIN;
	int8_t x4467 = -1;
	int8_t x4468 = -1;
	int32_t t46 = 85968519;

	t46 = (x4465>>((x4466|x4467)-x4468));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x4521 = UINT8_MAX;
	int32_t x4522 = -1;
	int16_t x4523 = INT16_MAX;
	uint32_t x4524 = UINT32_MAX;
	volatile int32_t t47 = 438280308;

	t47 = (x4521>>((x4522|x4523)-x4524));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x4525 = 110669LLU;
	int16_t x4526 = -1;
	static int8_t x4527 = -1;
	uint32_t x4528 = UINT32_MAX;
	uint64_t t48 = 1580820927490159LLU;

	t48 = (x4525>>((x4526|x4527)-x4528));

	if (t48 != 110669LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x4649 = 4;
	volatile int16_t x4650 = INT16_MAX;
	int32_t x4651 = -1;
	int8_t x4652 = -1;
	static int32_t t49 = 120111285;

	t49 = (x4649>>((x4650|x4651)-x4652));

	if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x4672 = -1;
	int32_t t50 = 11896;

	t50 = (x4669>>((x4670|x4671)-x4672));

	if (t50 != 7893) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x4713 = 15938;
	uint32_t x4714 = 31419115U;
	volatile int16_t x4715 = -1;
	int32_t t51 = -344269;

	t51 = (x4713>>((x4714|x4715)-x4716));

	if (t51 != 15938) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x4799 = UINT32_MAX;
	static uint64_t x4800 = UINT64_MAX;
	static volatile int64_t t52 = INT64_MAX;

	t52 = (x4797>>((x4798|x4799)-x4800));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x4885 = INT64_MAX;
	uint16_t x4886 = 2750U;
	volatile int8_t x4887 = INT8_MIN;
	volatile int8_t x4888 = INT8_MIN;
	static volatile int64_t t53 = 7716LL;

	t53 = (x4885>>((x4886|x4887)-x4888));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x4970 = -1;
	uint64_t x4971 = UINT64_MAX;
	uint64_t x4972 = UINT64_MAX;

	t54 = (x4969>>((x4970|x4971)-x4972));

	if (t54 != 98386U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x5065 = 34;
	uint8_t x5066 = 56U;
	uint32_t x5067 = UINT32_MAX;

	t55 = (x5065>>((x5066|x5067)-x5068));

	if (t55 != 34) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x5277 = 4159399127769LL;
	volatile int64_t x5278 = INT64_MIN;
	int8_t x5279 = -1;
	int64_t t56 = -181LL;

	t56 = (x5277>>((x5278|x5279)-x5280));

	if (t56 != 4159399127769LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x5341 = 126U;
	uint64_t x5342 = 55669LLU;
	int32_t t57 = 4;

	t57 = (x5341>>((x5342|x5343)-x5344));

	if (t57 != 126) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x5369 = UINT16_MAX;
	uint64_t x5370 = 1044543LLU;
	volatile int8_t x5371 = -1;
	int8_t x5372 = -1;
	int32_t t58 = 131590076;

	t58 = (x5369>>((x5370|x5371)-x5372));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x5513 = UINT8_MAX;
	int16_t x5515 = INT16_MIN;
	int64_t x5516 = -1LL;
	volatile int32_t t59 = 193;

	t59 = (x5513>>((x5514|x5515)-x5516));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x5525 = INT16_MAX;
	int64_t x5526 = INT64_MIN;
	int32_t x5527 = INT32_MIN;
	int32_t x5528 = INT32_MIN;

	t60 = (x5525>>((x5526|x5527)-x5528));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x5701 = 2U;
	volatile int16_t x5702 = 25;
	uint8_t x5703 = UINT8_MAX;
	uint8_t x5704 = UINT8_MAX;

	t61 = (x5701>>((x5702|x5703)-x5704));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x5793 = INT32_MAX;
	volatile int16_t x5794 = INT16_MIN;
	volatile int16_t x5795 = -1;
	static volatile int8_t x5796 = -1;

	t62 = (x5793>>((x5794|x5795)-x5796));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x6045 = 53;
	uint8_t x6046 = UINT8_MAX;
	int64_t x6047 = -1LL;
	static int16_t x6048 = -1;
	static int32_t t63 = -1882711;

	t63 = (x6045>>((x6046|x6047)-x6048));

	if (t63 != 53) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x6121 = 20;
	int8_t x6122 = -1;
	static volatile int32_t x6123 = 122067;

	t64 = (x6121>>((x6122|x6123)-x6124));

	if (t64 != 20) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x6170 = -1LL;
	int16_t x6171 = INT16_MIN;
	static int8_t x6172 = -1;
	volatile int64_t t65 = -6948937712259LL;

	t65 = (x6169>>((x6170|x6171)-x6172));

	if (t65 != 13149072808949642LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x6230 = -1LL;
	static volatile uint32_t x6231 = 1937U;
	volatile int16_t x6232 = -1;
	int32_t t66 = 2263;

	t66 = (x6229>>((x6230|x6231)-x6232));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x6233 = 10858U;
	volatile int16_t x6234 = INT16_MIN;
	int16_t x6235 = -1;
	volatile int32_t x6236 = -1;
	uint32_t t67 = 13274U;

	t67 = (x6233>>((x6234|x6235)-x6236));

	if (t67 != 10858U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x6237 = UINT8_MAX;
	volatile uint16_t x6238 = 32U;
	int32_t x6239 = INT32_MAX;
	volatile int32_t t68 = -84085497;

	t68 = (x6237>>((x6238|x6239)-x6240));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x6297 = 1019LLU;
	int32_t x6298 = -4372;
	int32_t x6299 = INT32_MAX;
	volatile uint64_t t69 = 859820628231LLU;

	t69 = (x6297>>((x6298|x6299)-x6300));

	if (t69 != 1019LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x6449 = UINT32_MAX;
	int8_t x6450 = -1;
	uint64_t x6451 = 1LLU;
	int32_t x6452 = -1;
	uint32_t t70 = UINT32_MAX;

	t70 = (x6449>>((x6450|x6451)-x6452));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x6565 = 19U;
	volatile int32_t x6568 = INT32_MAX;

	t71 = (x6565>>((x6566|x6567)-x6568));

	if (t71 != 19) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x6686 = -1;
	int32_t x6687 = -612;
	int32_t t72 = -12;

	t72 = (x6685>>((x6686|x6687)-x6688));

	if (t72 != 1463) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x6825 = 0;
	int32_t x6827 = INT32_MIN;
	int32_t x6828 = -1;

	t73 = (x6825>>((x6826|x6827)-x6828));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x7113 = 3U;
	static int16_t x7114 = INT16_MIN;
	int64_t x7115 = INT64_MAX;
	uint64_t x7116 = UINT64_MAX;
	uint32_t t74 = 5U;

	t74 = (x7113>>((x7114|x7115)-x7116));

	if (t74 != 3U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x7121 = 783U;
	static uint64_t x7122 = UINT64_MAX;
	static uint32_t x7123 = 29887337U;
	int16_t x7124 = -1;
	uint32_t t75 = 13973695U;

	t75 = (x7121>>((x7122|x7123)-x7124));

	if (t75 != 783U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x7149 = UINT32_MAX;
	static uint64_t x7150 = UINT64_MAX;
	int32_t x7151 = INT32_MIN;
	int16_t x7152 = -1;
	uint32_t t76 = UINT32_MAX;

	t76 = (x7149>>((x7150|x7151)-x7152));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x7191 = INT8_MAX;
	static int8_t x7192 = -1;
	volatile uint64_t t77 = 29527681339510368LLU;

	t77 = (x7189>>((x7190|x7191)-x7192));

	if (t77 != 22267106136722010LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x7277 = INT8_MAX;
	static int32_t x7278 = INT32_MIN;
	static volatile int32_t t78 = 0;

	t78 = (x7277>>((x7278|x7279)-x7280));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x7646 = 5U;
	int16_t x7647 = -1;
	int64_t x7648 = -1LL;
	volatile uint32_t t79 = UINT32_MAX;

	t79 = (x7645>>((x7646|x7647)-x7648));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x7697 = 107755161399442LLU;
	int16_t x7698 = -1;
	int32_t x7700 = -1;
	static uint64_t t80 = 1125703096271507LLU;

	t80 = (x7697>>((x7698|x7699)-x7700));

	if (t80 != 107755161399442LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x7731 = -1;
	int8_t x7732 = -16;
	int32_t t81 = 1;

	t81 = (x7729>>((x7730|x7731)-x7732));

	if (t81 != 25649) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x7885 = UINT16_MAX;
	int32_t x7887 = -1;
	int8_t x7888 = -1;
	volatile int32_t t82 = -165;

	t82 = (x7885>>((x7886|x7887)-x7888));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x7893 = 3535917581LLU;
	int16_t x7894 = -1;
	uint32_t x7895 = 29U;
	int8_t x7896 = -3;
	uint64_t t83 = 877558LLU;

	t83 = (x7893>>((x7894|x7895)-x7896));

	if (t83 != 883979395LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x7921 = 243;
	volatile int64_t x7922 = -1LL;
	static int64_t x7923 = INT64_MIN;
	volatile int16_t x7924 = -1;
	int32_t t84 = -975;

	t84 = (x7921>>((x7922|x7923)-x7924));

	if (t84 != 243) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x7937 = 22284155431572042LLU;
	int64_t x7939 = INT64_MAX;
	int8_t x7940 = -1;

	t85 = (x7937>>((x7938|x7939)-x7940));

	if (t85 != 22284155431572042LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x8237 = 5;
	static int32_t x8238 = -1;
	int32_t x8239 = 14;
	uint64_t x8240 = UINT64_MAX;
	int32_t t86 = 0;

	t86 = (x8237>>((x8238|x8239)-x8240));

	if (t86 != 5) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x8293 = 1418;
	static int32_t x8294 = INT32_MIN;
	int32_t x8295 = -1;
	int32_t x8296 = -1;
	int32_t t87 = 12;

	t87 = (x8293>>((x8294|x8295)-x8296));

	if (t87 != 1418) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x8393 = 20682572U;
	uint8_t x8394 = UINT8_MAX;
	int8_t x8395 = -1;
	volatile int64_t x8396 = -1LL;
	volatile uint32_t t88 = 1339730U;

	t88 = (x8393>>((x8394|x8395)-x8396));

	if (t88 != 20682572U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x8397 = UINT32_MAX;
	volatile int16_t x8400 = -1;
	volatile uint32_t t89 = UINT32_MAX;

	t89 = (x8397>>((x8398|x8399)-x8400));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x8446 = UINT64_MAX;
	uint32_t x8447 = UINT32_MAX;
	int8_t x8448 = -1;
	volatile int32_t t90 = INT32_MAX;

	t90 = (x8445>>((x8446|x8447)-x8448));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x8581 = 2904064;
	int64_t x8582 = INT64_MAX;
	uint64_t x8584 = UINT64_MAX;
	static int32_t t91 = -1681074;

	t91 = (x8581>>((x8582|x8583)-x8584));

	if (t91 != 2904064) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x8601 = INT8_MAX;
	int8_t x8602 = 1;
	static uint8_t x8603 = 2U;
	uint64_t x8604 = UINT64_MAX;
	volatile int32_t t92 = 5979;

	t92 = (x8601>>((x8602|x8603)-x8604));

	if (t92 != 7) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x8629 = 2LL;
	int8_t x8630 = 8;
	volatile int16_t x8631 = INT16_MAX;

	t93 = (x8629>>((x8630|x8631)-x8632));

	if (t93 != 2LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x8737 = INT32_MAX;
	int16_t x8739 = INT16_MAX;
	static int8_t x8740 = -6;
	volatile int32_t t94 = 56074;

	t94 = (x8737>>((x8738|x8739)-x8740));

	if (t94 != 67108863) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x8778 = -1;
	volatile uint64_t x8780 = UINT64_MAX;

	t95 = (x8777>>((x8778|x8779)-x8780));

	if (t95 != 17614) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x8817 = 15U;
	uint8_t x8819 = 2U;
	int8_t x8820 = -23;
	volatile int32_t t96 = 955857;

	t96 = (x8817>>((x8818|x8819)-x8820));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x9021 = INT8_MAX;
	static int8_t x9022 = 22;
	int64_t x9023 = -1LL;
	int64_t x9024 = -1LL;

	t97 = (x9021>>((x9022|x9023)-x9024));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x9074 = -1;
	int8_t x9076 = -2;
	static volatile int32_t t98 = 7;

	t98 = (x9073>>((x9074|x9075)-x9076));

	if (t98 != 444) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x9297 = 17LL;
	int16_t x9299 = -56;
	volatile int16_t x9300 = -1;
	static volatile int64_t t99 = -9169LL;

	t99 = (x9297>>((x9298|x9299)-x9300));

	if (t99 != 17LL) { NG(); } else { ; }
	
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

