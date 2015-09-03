#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x182 = 0U;
static volatile int64_t t1 = 1114543177516LL;
uint64_t x269 = 1757599153LLU;
volatile int32_t t4 = -1;
uint8_t x685 = 9U;
volatile uint16_t x686 = 111U;
uint8_t x687 = 7U;
volatile int32_t t7 = -108761091;
uint64_t x837 = 60154LLU;
uint64_t x838 = 0LLU;
static int32_t x1143 = INT32_MIN;
static volatile int8_t x1185 = 1;
static int32_t t12 = 1034063385;
int8_t x1554 = INT8_MAX;
int32_t t14 = 7577547;
static int64_t x1936 = -1LL;
static uint32_t x2158 = 31U;
uint32_t t17 = 2161004U;
int16_t x2406 = 1;
static volatile uint32_t t19 = 1U;
static uint16_t x2778 = UINT16_MAX;
uint8_t x2786 = 2U;
int16_t x2845 = 12;
int8_t x2950 = 4;
int32_t x2951 = 73606612;
static volatile int32_t t24 = -56522;
uint16_t x3075 = 29U;
int8_t x3143 = INT8_MAX;
volatile uint32_t t27 = UINT32_MAX;
int32_t x3311 = INT32_MIN;
uint16_t x3478 = 1525U;
static int64_t t33 = -41906424LL;
volatile int8_t x3740 = 31;
volatile uint64_t t35 = UINT64_MAX;
static uint8_t x3750 = UINT8_MAX;
uint32_t x3890 = 19U;
static uint8_t x4005 = 5U;
volatile int64_t t40 = INT64_MAX;
static volatile int8_t x4206 = INT8_MAX;
volatile uint64_t t43 = UINT64_MAX;
volatile uint16_t x4525 = 1682U;
int32_t x4567 = INT32_MIN;
int16_t x4568 = -1;
int8_t x4615 = INT8_MAX;
uint16_t x4786 = 21826U;
uint64_t x4870 = 13LLU;
uint8_t x4910 = 22U;
uint8_t x5033 = 43U;
int8_t x5126 = 0;
int64_t x5128 = -1LL;
int8_t x5270 = 11;
int64_t x5271 = INT64_MIN;
static volatile uint16_t x5467 = 0U;
static int8_t x5502 = 3;
volatile uint64_t x5629 = UINT64_MAX;
static uint32_t x5630 = 3U;
volatile int64_t x5631 = INT64_MIN;
static uint16_t x5639 = UINT16_MAX;
volatile uint64_t t59 = 4118314390LLU;
volatile int16_t x5670 = 1;
uint32_t x5957 = 3875596U;
int8_t x6227 = 31;
volatile int8_t x6265 = INT8_MAX;
uint8_t x6548 = 20U;
int8_t x6719 = -12;
int8_t x6720 = -1;
uint32_t t69 = 93340U;
static int64_t x6781 = 1617356LL;
int16_t x6783 = 7;
uint8_t x6970 = 1U;
uint16_t x7201 = 0U;
uint32_t x7202 = 0U;
int64_t x7203 = INT64_MAX;
int8_t x7270 = 0;
uint64_t x7272 = UINT64_MAX;
uint8_t x7816 = 4U;
int8_t x8216 = 1;
static uint8_t x8275 = 6U;
int16_t x8309 = 2;
int8_t x8502 = 8;
volatile uint32_t x8960 = 377U;
volatile uint32_t x8992 = UINT32_MAX;
uint64_t t89 = 3698327LLU;
int64_t x9085 = 1219917403130829482LL;
uint16_t x9087 = 17U;
int64_t x9168 = INT64_MAX;
int32_t t91 = -421115468;
int8_t x9290 = 60;
uint16_t x9292 = UINT16_MAX;
int32_t x9468 = INT32_MIN;
int16_t x9645 = 10;
int8_t x9930 = INT8_MAX;


void f0(void) {
	uint8_t x85 = UINT8_MAX;
	int32_t x86 = 15;
	int64_t x87 = INT64_MAX;
	uint16_t x88 = 6U;
	int32_t t0 = -984;

	t0 = (x85<<(x86>>(x87%x88)));

	if (t0 != 32640) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x181 = 19354364LL;
	static volatile int16_t x183 = INT16_MIN;
	int16_t x184 = 1;

	t1 = (x181<<(x182>>(x183%x184)));

	if (t1 != 19354364LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x197 = 233123074U;
	uint16_t x198 = UINT16_MAX;
	uint32_t x199 = 20047U;
	static uint8_t x200 = 36U;
	static volatile uint32_t t2 = 5U;

	t2 = (x197<<(x198>>(x199%x200)));

	if (t2 != 233123074U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x270 = 0U;
	int8_t x271 = INT8_MAX;
	int16_t x272 = -1;
	volatile uint64_t t3 = 818321755012LLU;

	t3 = (x269<<(x270>>(x271%x272)));

	if (t3 != 1757599153LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x369 = 2U;
	uint16_t x370 = 8U;
	volatile uint16_t x371 = UINT16_MAX;
	int16_t x372 = 17;

	t4 = (x369<<(x370>>(x371%x372)));

	if (t4 != 512) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x617 = INT8_MAX;
	int16_t x618 = 3;
	static uint32_t x619 = UINT32_MAX;
	volatile int32_t x620 = INT32_MAX;
	int32_t t5 = 22613;

	t5 = (x617<<(x618>>(x619%x620)));

	if (t5 != 254) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x688 = INT16_MIN;
	volatile int32_t t6 = -186;

	t6 = (x685<<(x686>>(x687%x688)));

	if (t6 != 9) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x813 = UINT16_MAX;
	static uint8_t x814 = 2U;
	volatile int32_t x815 = 13;
	static int16_t x816 = INT16_MAX;

	t7 = (x813<<(x814>>(x815%x816)));

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x839 = UINT32_MAX;
	uint8_t x840 = UINT8_MAX;
	volatile uint64_t t8 = 0LLU;

	t8 = (x837<<(x838>>(x839%x840)));

	if (t8 != 60154LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x985 = 299654350595LLU;
	volatile uint8_t x986 = 27U;
	volatile uint8_t x987 = 13U;
	int32_t x988 = -48;
	volatile uint64_t t9 = 2150365238009566263LLU;

	t9 = (x985<<(x986>>(x987%x988)));

	if (t9 != 299654350595LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x1033 = INT8_MAX;
	int8_t x1034 = 35;
	volatile int8_t x1035 = 1;
	uint64_t x1036 = 148LLU;
	int32_t t10 = 393742776;

	t10 = (x1033<<(x1034>>(x1035%x1036)));

	if (t10 != 16646144) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x1141 = 135308299589LLU;
	static uint8_t x1142 = 8U;
	int16_t x1144 = -1;
	uint64_t t11 = 14LLU;

	t11 = (x1141<<(x1142>>(x1143%x1144)));

	if (t11 != 34638924694784LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x1186 = 3U;
	static uint8_t x1187 = 6U;
	int16_t x1188 = -18;

	t12 = (x1185<<(x1186>>(x1187%x1188)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1553 = 5290U;
	uint16_t x1555 = UINT16_MAX;
	int8_t x1556 = INT8_MAX;
	uint32_t t13 = 120445U;

	t13 = (x1553<<(x1554>>(x1555%x1556)));

	if (t13 != 173342720U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x1741 = 1;
	uint16_t x1742 = 1U;
	uint16_t x1743 = 6824U;
	int16_t x1744 = -1;

	t14 = (x1741<<(x1742>>(x1743%x1744)));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x1793 = 0;
	static volatile uint16_t x1794 = UINT16_MAX;
	uint8_t x1795 = 11U;
	uint64_t x1796 = UINT64_MAX;
	volatile int32_t t15 = 73706;

	t15 = (x1793<<(x1794>>(x1795%x1796)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1933 = 25U;
	volatile uint64_t x1934 = 1LLU;
	uint32_t x1935 = UINT32_MAX;
	volatile int32_t t16 = 1;

	t16 = (x1933<<(x1934>>(x1935%x1936)));

	if (t16 != 50) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x2157 = 610181248U;
	int16_t x2159 = -1;
	static uint32_t x2160 = UINT32_MAX;

	t17 = (x2157<<(x2158>>(x2159%x2160)));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x2313 = INT64_MAX;
	int8_t x2314 = 0;
	int16_t x2315 = 15;
	static volatile int32_t x2316 = INT32_MAX;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x2313<<(x2314>>(x2315%x2316)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x2405 = 117796U;
	static int8_t x2407 = INT8_MAX;
	volatile int64_t x2408 = 35LL;

	t19 = (x2405<<(x2406>>(x2407%x2408)));

	if (t19 != 117796U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x2777 = INT8_MAX;
	volatile uint8_t x2779 = 28U;
	static uint64_t x2780 = 541LLU;
	int32_t t20 = 15938;

	t20 = (x2777<<(x2778>>(x2779%x2780)));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x2785 = UINT16_MAX;
	int64_t x2787 = INT64_MIN;
	static uint64_t x2788 = 102LLU;
	volatile int32_t t21 = 63;

	t21 = (x2785<<(x2786>>(x2787%x2788)));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x2813 = INT16_MAX;
	int8_t x2814 = INT8_MAX;
	uint8_t x2815 = 19U;
	int64_t x2816 = INT64_MIN;
	int32_t t22 = -1803099;

	t22 = (x2813<<(x2814>>(x2815%x2816)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x2846 = 22U;
	volatile uint8_t x2847 = 2U;
	int64_t x2848 = INT64_MIN;
	volatile int32_t t23 = -110;

	t23 = (x2845<<(x2846>>(x2847%x2848)));

	if (t23 != 384) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x2949 = INT16_MAX;
	int8_t x2952 = -17;

	t24 = (x2949<<(x2950>>(x2951%x2952)));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x3073 = UINT16_MAX;
	volatile int32_t x3074 = 2240401;
	static int32_t x3076 = INT32_MAX;
	volatile int32_t t25 = 20;

	t25 = (x3073<<(x3074>>(x3075%x3076)));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x3101 = 376U;
	static int32_t x3102 = 1;
	volatile int16_t x3103 = INT16_MIN;
	static int8_t x3104 = INT8_MIN;
	volatile int32_t t26 = -3395055;

	t26 = (x3101<<(x3102>>(x3103%x3104)));

	if (t26 != 752) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x3141 = UINT32_MAX;
	uint32_t x3142 = 3U;
	int8_t x3144 = -15;

	t27 = (x3141<<(x3142>>(x3143%x3144)));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x3301 = INT64_MAX;
	volatile int8_t x3302 = 0;
	static int64_t x3303 = INT64_MAX;
	static uint8_t x3304 = 1U;
	int64_t t28 = INT64_MAX;

	t28 = (x3301<<(x3302>>(x3303%x3304)));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x3309 = 0U;
	uint8_t x3310 = 15U;
	volatile int16_t x3312 = -1;
	int32_t t29 = 27031186;

	t29 = (x3309<<(x3310>>(x3311%x3312)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x3417 = INT32_MAX;
	int8_t x3418 = 1;
	uint16_t x3419 = 9239U;
	volatile uint32_t x3420 = 2U;
	int32_t t30 = INT32_MAX;

	t30 = (x3417<<(x3418>>(x3419%x3420)));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x3449 = 13;
	volatile int8_t x3450 = 0;
	int64_t x3451 = INT64_MIN;
	static int32_t x3452 = -1;
	int32_t t31 = -3;

	t31 = (x3449<<(x3450>>(x3451%x3452)));

	if (t31 != 13) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x3477 = UINT64_MAX;
	static uint8_t x3479 = 17U;
	uint32_t x3480 = 121U;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (x3477<<(x3478>>(x3479%x3480)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x3593 = 15LL;
	static uint32_t x3594 = 1U;
	int32_t x3595 = INT32_MIN;
	int8_t x3596 = INT8_MIN;

	t33 = (x3593<<(x3594>>(x3595%x3596)));

	if (t33 != 30LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x3733 = 763314332;
	uint16_t x3734 = UINT16_MAX;
	static volatile uint64_t x3735 = UINT64_MAX;
	int16_t x3736 = INT16_MAX;
	volatile int32_t t34 = -2;

	t34 = (x3733<<(x3734>>(x3735%x3736)));

	if (t34 != 1526628664) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x3737 = UINT64_MAX;
	static int16_t x3738 = 0;
	uint64_t x3739 = 7800648761LLU;

	t35 = (x3737<<(x3738>>(x3739%x3740)));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x3749 = UINT32_MAX;
	uint8_t x3751 = 18U;
	volatile int64_t x3752 = INT64_MIN;
	uint32_t t36 = UINT32_MAX;

	t36 = (x3749<<(x3750>>(x3751%x3752)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x3889 = 101;
	int32_t x3891 = 3;
	static int16_t x3892 = 8;
	volatile int32_t t37 = 2480;

	t37 = (x3889<<(x3890>>(x3891%x3892)));

	if (t37 != 404) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x4006 = 7LL;
	uint16_t x4007 = 39U;
	int64_t x4008 = -1LL;
	volatile int32_t t38 = 1422;

	t38 = (x4005<<(x4006>>(x4007%x4008)));

	if (t38 != 640) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x4053 = 1;
	int8_t x4054 = 21;
	int64_t x4055 = INT64_MAX;
	int16_t x4056 = -1;
	int32_t t39 = 3;

	t39 = (x4053<<(x4054>>(x4055%x4056)));

	if (t39 != 2097152) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x4081 = INT64_MAX;
	static int16_t x4082 = 26;
	uint16_t x4083 = 15U;
	int16_t x4084 = INT16_MAX;

	t40 = (x4081<<(x4082>>(x4083%x4084)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x4145 = 1940U;
	int8_t x4146 = 5;
	uint32_t x4147 = 0U;
	int32_t x4148 = INT32_MIN;
	volatile int32_t t41 = 58243;

	t41 = (x4145<<(x4146>>(x4147%x4148)));

	if (t41 != 62080) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x4205 = 103U;
	uint8_t x4207 = 3U;
	uint8_t x4208 = UINT8_MAX;
	volatile int32_t t42 = 0;

	t42 = (x4205<<(x4206>>(x4207%x4208)));

	if (t42 != 3375104) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x4217 = UINT64_MAX;
	volatile uint8_t x4218 = 0U;
	uint32_t x4219 = 0U;
	uint32_t x4220 = UINT32_MAX;

	t43 = (x4217<<(x4218>>(x4219%x4220)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x4513 = 8U;
	uint32_t x4514 = 92U;
	int64_t x4515 = INT64_MAX;
	int16_t x4516 = -4;
	int32_t t44 = -44675752;

	t44 = (x4513<<(x4514>>(x4515%x4516)));

	if (t44 != 16384) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x4526 = 3U;
	volatile uint8_t x4527 = 16U;
	uint8_t x4528 = UINT8_MAX;
	static int32_t t45 = -286854;

	t45 = (x4525<<(x4526>>(x4527%x4528)));

	if (t45 != 1682) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x4565 = 1;
	uint8_t x4566 = 0U;
	static volatile int32_t t46 = 32490;

	t46 = (x4565<<(x4566>>(x4567%x4568)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x4613 = INT64_MAX;
	volatile uint8_t x4614 = 1U;
	int64_t x4616 = -36LL;
	volatile int64_t t47 = INT64_MAX;

	t47 = (x4613<<(x4614>>(x4615%x4616)));

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x4785 = INT64_MAX;
	volatile uint64_t x4787 = UINT64_MAX;
	static volatile int32_t x4788 = -25;
	int64_t t48 = INT64_MAX;

	t48 = (x4785<<(x4786>>(x4787%x4788)));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x4869 = 1017172647393897LLU;
	int16_t x4871 = 4;
	uint8_t x4872 = 6U;
	uint64_t t49 = 4347296028403457606LLU;

	t49 = (x4869<<(x4870>>(x4871%x4872)));

	if (t49 != 1017172647393897LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x4909 = 15;
	volatile int32_t x4911 = INT32_MIN;
	static uint64_t x4912 = 1LLU;
	int32_t t50 = 1132;

	t50 = (x4909<<(x4910>>(x4911%x4912)));

	if (t50 != 62914560) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x5034 = 8U;
	int32_t x5035 = INT32_MAX;
	static int64_t x5036 = -7LL;
	volatile int32_t t51 = -161;

	t51 = (x5033<<(x5034>>(x5035%x5036)));

	if (t51 != 688) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x5045 = INT8_MAX;
	int8_t x5046 = 16;
	static int64_t x5047 = 296290331LL;
	static volatile int16_t x5048 = 42;
	int32_t t52 = 280;

	t52 = (x5045<<(x5046>>(x5047%x5048)));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x5125 = 1064595550U;
	int64_t x5127 = INT64_MIN;
	uint32_t t53 = 211746992U;

	t53 = (x5125<<(x5126>>(x5127%x5128)));

	if (t53 != 1064595550U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x5269 = 441;
	int64_t x5272 = INT64_MIN;
	static int32_t t54 = 491521;

	t54 = (x5269<<(x5270>>(x5271%x5272)));

	if (t54 != 903168) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x5329 = 273262768040663821LLU;
	uint8_t x5330 = 2U;
	uint16_t x5331 = 904U;
	volatile uint16_t x5332 = 19U;
	uint64_t t55 = 2540244519828LLU;

	t55 = (x5329<<(x5330>>(x5331%x5332)));

	if (t55 != 273262768040663821LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x5465 = 6U;
	uint8_t x5466 = 2U;
	uint8_t x5468 = UINT8_MAX;
	volatile int32_t t56 = -1757;

	t56 = (x5465<<(x5466>>(x5467%x5468)));

	if (t56 != 24) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x5501 = 0;
	volatile int32_t x5503 = INT32_MIN;
	static volatile int8_t x5504 = INT8_MIN;
	int32_t t57 = 633;

	t57 = (x5501<<(x5502>>(x5503%x5504)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x5632 = INT8_MIN;
	static uint64_t t58 = 8911639LLU;

	t58 = (x5629<<(x5630>>(x5631%x5632)));

	if (t58 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x5637 = UINT64_MAX;
	int16_t x5638 = 1;
	int32_t x5640 = -1;

	t59 = (x5637<<(x5638>>(x5639%x5640)));

	if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x5669 = UINT64_MAX;
	uint32_t x5671 = UINT32_MAX;
	int8_t x5672 = 12;
	static uint64_t t60 = UINT64_MAX;

	t60 = (x5669<<(x5670>>(x5671%x5672)));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x5958 = 5;
	int8_t x5959 = -1;
	int32_t x5960 = -1;
	volatile uint32_t t61 = 10202986U;

	t61 = (x5957<<(x5958>>(x5959%x5960)));

	if (t61 != 124019072U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x6089 = 23;
	int8_t x6090 = 3;
	static uint8_t x6091 = 1U;
	int64_t x6092 = INT64_MIN;
	int32_t t62 = -16769628;

	t62 = (x6089<<(x6090>>(x6091%x6092)));

	if (t62 != 46) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x6133 = 24103LL;
	int16_t x6134 = INT16_MAX;
	uint64_t x6135 = 14LLU;
	volatile int64_t x6136 = INT64_MIN;
	int64_t t63 = -372284140LL;

	t63 = (x6133<<(x6134>>(x6135%x6136)));

	if (t63 != 48206LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x6193 = INT16_MAX;
	uint16_t x6194 = UINT16_MAX;
	static int8_t x6195 = 12;
	int16_t x6196 = INT16_MIN;
	volatile int32_t t64 = -118088;

	t64 = (x6193<<(x6194>>(x6195%x6196)));

	if (t64 != 1073709056) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x6225 = 1078246;
	volatile uint8_t x6226 = UINT8_MAX;
	int64_t x6228 = INT64_MIN;
	static volatile int32_t t65 = 3150866;

	t65 = (x6225<<(x6226>>(x6227%x6228)));

	if (t65 != 1078246) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x6266 = 42;
	int32_t x6267 = 1;
	static volatile int8_t x6268 = 50;
	static volatile int32_t t66 = 974;

	t66 = (x6265<<(x6266>>(x6267%x6268)));

	if (t66 != 266338304) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x6437 = 14;
	volatile int16_t x6438 = INT16_MAX;
	uint64_t x6439 = 11LLU;
	int16_t x6440 = INT16_MIN;
	int32_t t67 = -421595196;

	t67 = (x6437<<(x6438>>(x6439%x6440)));

	if (t67 != 458752) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x6545 = 52777U;
	static int8_t x6546 = 2;
	static volatile int64_t x6547 = 475912533495680357LL;
	volatile uint32_t t68 = 5059034U;

	t68 = (x6545<<(x6546>>(x6547%x6548)));

	if (t68 != 52777U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x6717 = 4915U;
	uint8_t x6718 = 23U;

	t69 = (x6717<<(x6718>>(x6719%x6720)));

	if (t69 != 2575302656U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x6782 = 55U;
	int64_t x6784 = INT64_MIN;
	int64_t t70 = -2196706389LL;

	t70 = (x6781<<(x6782>>(x6783%x6784)));

	if (t70 != 1617356LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x6969 = 497160LLU;
	int8_t x6971 = INT8_MAX;
	int8_t x6972 = -1;
	volatile uint64_t t71 = 236835115882408478LLU;

	t71 = (x6969<<(x6970>>(x6971%x6972)));

	if (t71 != 994320LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x7204 = INT64_MAX;
	int32_t t72 = 0;

	t72 = (x7201<<(x7202>>(x7203%x7204)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x7269 = 0U;
	uint16_t x7271 = 1U;
	volatile int32_t t73 = 7;

	t73 = (x7269<<(x7270>>(x7271%x7272)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x7305 = UINT16_MAX;
	static int8_t x7306 = 1;
	uint8_t x7307 = 0U;
	static uint16_t x7308 = UINT16_MAX;
	static volatile int32_t t74 = 442;

	t74 = (x7305<<(x7306>>(x7307%x7308)));

	if (t74 != 131070) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x7401 = 21923553837458890LL;
	uint8_t x7402 = 0U;
	uint8_t x7403 = 3U;
	int32_t x7404 = -3681889;
	volatile int64_t t75 = -263827302069388353LL;

	t75 = (x7401<<(x7402>>(x7403%x7404)));

	if (t75 != 21923553837458890LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x7557 = UINT8_MAX;
	volatile uint8_t x7558 = 0U;
	int32_t x7559 = INT32_MIN;
	static int8_t x7560 = -1;
	static volatile int32_t t76 = -2159965;

	t76 = (x7557<<(x7558>>(x7559%x7560)));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x7813 = UINT32_MAX;
	int8_t x7814 = 0;
	int16_t x7815 = INT16_MAX;
	uint32_t t77 = UINT32_MAX;

	t77 = (x7813<<(x7814>>(x7815%x7816)));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x8201 = 188480853;
	int8_t x8202 = 1;
	int8_t x8203 = -1;
	int16_t x8204 = -1;
	int32_t t78 = -343562;

	t78 = (x8201<<(x8202>>(x8203%x8204)));

	if (t78 != 376961706) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x8213 = UINT64_MAX;
	uint64_t x8214 = 61LLU;
	uint16_t x8215 = UINT16_MAX;
	volatile uint64_t t79 = 44577LLU;

	t79 = (x8213<<(x8214>>(x8215%x8216)));

	if (t79 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x8257 = 82677LLU;
	int8_t x8258 = INT8_MAX;
	uint16_t x8259 = UINT16_MAX;
	int32_t x8260 = 7;
	uint64_t t80 = 18479164LLU;

	t80 = (x8257<<(x8258>>(x8259%x8260)));

	if (t80 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x8273 = 5LL;
	static volatile int8_t x8274 = INT8_MAX;
	static int16_t x8276 = INT16_MAX;
	volatile int64_t t81 = -11543486LL;

	t81 = (x8273<<(x8274>>(x8275%x8276)));

	if (t81 != 10LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x8297 = 3LLU;
	int16_t x8298 = 5707;
	int32_t x8299 = 22;
	static int32_t x8300 = INT32_MAX;
	uint64_t t82 = 770092173LLU;

	t82 = (x8297<<(x8298>>(x8299%x8300)));

	if (t82 != 3LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x8310 = 22U;
	int16_t x8311 = INT16_MIN;
	int8_t x8312 = -1;
	int32_t t83 = -4229;

	t83 = (x8309<<(x8310>>(x8311%x8312)));

	if (t83 != 8388608) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x8501 = UINT64_MAX;
	uint8_t x8503 = 0U;
	uint64_t x8504 = 207413167239036216LLU;
	volatile uint64_t t84 = 199532LLU;

	t84 = (x8501<<(x8502>>(x8503%x8504)));

	if (t84 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x8521 = 1293835749892689322LLU;
	int8_t x8522 = INT8_MAX;
	static int8_t x8523 = 2;
	int16_t x8524 = INT16_MAX;
	volatile uint64_t t85 = 446145LLU;

	t85 = (x8521<<(x8522>>(x8523%x8524)));

	if (t85 != 3965145508820811776LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x8577 = 8U;
	int64_t x8578 = 19LL;
	static int8_t x8579 = 1;
	uint8_t x8580 = 2U;
	volatile uint32_t t86 = 1290413U;

	t86 = (x8577<<(x8578>>(x8579%x8580)));

	if (t86 != 4096U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x8709 = 34;
	int64_t x8710 = 1LL;
	int16_t x8711 = -3000;
	int32_t x8712 = -1;
	volatile int32_t t87 = -11;

	t87 = (x8709<<(x8710>>(x8711%x8712)));

	if (t87 != 68) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x8957 = 14;
	volatile int8_t x8958 = 0;
	volatile uint8_t x8959 = 0U;
	volatile int32_t t88 = -118;

	t88 = (x8957<<(x8958>>(x8959%x8960)));

	if (t88 != 14) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x8989 = 1LLU;
	int64_t x8990 = 34LL;
	uint16_t x8991 = 12U;

	t89 = (x8989<<(x8990>>(x8991%x8992)));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x9086 = 13U;
	int64_t x9088 = INT64_MIN;
	static int64_t t90 = 375LL;

	t90 = (x9085<<(x9086>>(x9087%x9088)));

	if (t90 != 1219917403130829482LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x9165 = 33;
	uint8_t x9166 = 8U;
	uint16_t x9167 = 16U;

	t91 = (x9165<<(x9166>>(x9167%x9168)));

	if (t91 != 33) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x9209 = 1;
	volatile uint16_t x9210 = 7U;
	volatile int16_t x9211 = INT16_MIN;
	volatile uint32_t x9212 = 20U;
	int32_t t92 = 0;

	t92 = (x9209<<(x9210>>(x9211%x9212)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x9289 = UINT8_MAX;
	static int8_t x9291 = 5;
	volatile int32_t t93 = -5;

	t93 = (x9289<<(x9290>>(x9291%x9292)));

	if (t93 != 510) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x9465 = 1;
	int8_t x9466 = 0;
	uint8_t x9467 = 16U;
	int32_t t94 = 735322085;

	t94 = (x9465<<(x9466>>(x9467%x9468)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x9646 = 13U;
	volatile int16_t x9647 = INT16_MIN;
	static int16_t x9648 = INT16_MIN;
	int32_t t95 = -1;

	t95 = (x9645<<(x9646>>(x9647%x9648)));

	if (t95 != 81920) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x9733 = UINT32_MAX;
	static uint16_t x9734 = 2203U;
	volatile int16_t x9735 = INT16_MAX;
	volatile int8_t x9736 = -39;
	volatile uint32_t t96 = 3363U;

	t96 = (x9733<<(x9734>>(x9735%x9736)));

	if (t96 != 4294836224U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x9865 = 57;
	volatile int8_t x9866 = 12;
	int64_t x9867 = INT64_MIN;
	static volatile int16_t x9868 = INT16_MIN;
	int32_t t97 = 2;

	t97 = (x9865<<(x9866>>(x9867%x9868)));

	if (t97 != 233472) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x9929 = INT16_MAX;
	uint8_t x9931 = 22U;
	uint32_t x9932 = 5606409U;
	int32_t t98 = -55002;

	t98 = (x9929<<(x9930>>(x9931%x9932)));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x10081 = INT16_MAX;
	uint64_t x10082 = 5LLU;
	uint8_t x10083 = UINT8_MAX;
	static int32_t x10084 = 10;
	volatile int32_t t99 = 37;

	t99 = (x10081<<(x10082>>(x10083%x10084)));

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

