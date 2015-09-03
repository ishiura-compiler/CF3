#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x92 = -15463405LL;
volatile int32_t t1 = 127;
volatile uint32_t t2 = 7U;
volatile int64_t x323 = -1LL;
int32_t t3 = 15;
uint64_t x449 = 2269829180957620688LLU;
volatile int8_t x457 = INT8_MAX;
volatile uint32_t x458 = 1U;
static uint32_t x597 = 627604U;
int32_t x705 = 2828;
volatile int8_t x707 = -1;
static int64_t x779 = -1LL;
uint64_t t9 = 188793395187LLU;
int32_t x1036 = -1;
static int16_t x1227 = INT16_MIN;
static int64_t x1228 = INT64_MIN;
int8_t x1294 = 1;
int16_t x1311 = INT16_MIN;
uint32_t x1458 = UINT32_MAX;
int16_t x1459 = INT16_MIN;
int16_t x1660 = -3;
int64_t x1786 = -1LL;
uint64_t x1907 = UINT64_MAX;
static volatile uint16_t x1908 = UINT16_MAX;
volatile int64_t t21 = INT64_MAX;
static uint8_t x2006 = 31U;
static uint64_t x2461 = 0LLU;
volatile int16_t x2591 = INT16_MAX;
uint64_t x3009 = UINT64_MAX;
static int16_t x3011 = -187;
volatile int16_t x3063 = INT16_MIN;
volatile int32_t t33 = 161;
static uint16_t x3893 = 5297U;
int16_t x3896 = 11;
uint8_t x4104 = 73U;
int16_t x4223 = INT16_MIN;
uint32_t t40 = 0U;
int64_t x4476 = -1LL;
int32_t x4641 = INT32_MAX;
int16_t x4644 = INT16_MAX;
static int32_t t45 = -143202254;
int8_t x4722 = 1;
volatile uint16_t x4766 = 4U;
int16_t x4767 = 0;
static int16_t x4768 = INT16_MIN;
static int8_t x4982 = 36;
uint64_t x4984 = UINT64_MAX;
uint64_t t51 = 723193091440178041LLU;
int64_t x5455 = -1093675194290LL;
uint32_t x5741 = 1843U;
int16_t x6039 = -6;
uint64_t t60 = 833626427074LLU;
volatile int32_t x6103 = 3;
static uint16_t x6193 = 9U;
volatile int32_t x6196 = -1;
int8_t x6390 = 2;
int16_t x6407 = INT16_MIN;
static volatile int32_t t65 = 249;
int8_t x6515 = -1;
int32_t x6516 = 39;
int16_t x6540 = 1;
int32_t x6635 = INT32_MIN;
static volatile uint64_t t73 = 120LLU;
uint64_t x7065 = 4204456303275LLU;
volatile uint64_t x7068 = UINT64_MAX;
uint16_t x7098 = 5U;
volatile uint16_t x7099 = UINT16_MAX;
volatile int32_t t75 = 3;
static volatile int32_t t78 = -226;
volatile int8_t x7642 = 1;
static int64_t x7856 = INT64_MIN;
uint16_t x8108 = 23U;
uint32_t t82 = 198U;
uint8_t x8170 = 1U;
volatile uint64_t t85 = 1312352154577005904LLU;
volatile int8_t x8315 = -1;
uint16_t x8316 = 21U;
static int32_t x8389 = 10;
int32_t x8392 = INT32_MAX;
static int8_t x8411 = 0;
int32_t t88 = 45520;
uint8_t x8430 = 26U;
uint64_t x8432 = 46LLU;
int64_t x8503 = -1LL;
static int8_t x8597 = INT8_MAX;
volatile int8_t x8700 = INT8_MIN;
static volatile int32_t t93 = 21020;
volatile uint16_t x9069 = UINT16_MAX;
int16_t x9070 = 3;
uint64_t x9073 = 18127LLU;
int8_t x9492 = 7;
int8_t x9508 = 4;


void f0(void) {
	uint16_t x89 = 5U;
	volatile int16_t x90 = 1;
	uint16_t x91 = 1U;
	int32_t t0 = 1963174;

	t0 = (x89<<(x90-(x91%x92)));

	if (t0 != 5) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x105 = INT8_MAX;
	static uint64_t x106 = UINT64_MAX;
	int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MAX;

	t1 = (x105<<(x106-(x107%x108)));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x205 = 278U;
	int8_t x206 = -1;
	int8_t x207 = -1;
	volatile int8_t x208 = 7;

	t2 = (x205<<(x206-(x207%x208)));

	if (t2 != 278U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x321 = UINT16_MAX;
	int32_t x322 = -1;
	int8_t x324 = INT8_MAX;

	t3 = (x321<<(x322-(x323%x324)));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x450 = 37U;
	static uint64_t x451 = UINT64_MAX;
	static uint8_t x452 = 24U;
	uint64_t t4 = 106002265LLU;

	t4 = (x449<<(x450-(x451%x452)));

	if (t4 != 7443309846402695168LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x459 = INT64_MIN;
	uint8_t x460 = 13U;
	int32_t t5 = 156887173;

	t5 = (x457<<(x458-(x459%x460)));

	if (t5 != 65024) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x598 = 26;
	uint16_t x599 = 5U;
	static int16_t x600 = INT16_MAX;
	volatile uint32_t t6 = 810440U;

	t6 = (x597<<(x598-(x599%x600)));

	if (t6 != 1920991232U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x617 = 3709971156009LLU;
	uint8_t x618 = 4U;
	int64_t x619 = INT64_MIN;
	volatile int8_t x620 = INT8_MIN;
	uint64_t t7 = 119805288519127181LLU;

	t7 = (x617<<(x618-(x619%x620)));

	if (t7 != 59359538496144LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x706 = UINT64_MAX;
	volatile uint8_t x708 = UINT8_MAX;
	static int32_t t8 = 99;

	t8 = (x705<<(x706-(x707%x708)));

	if (t8 != 2828) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x777 = 4663LLU;
	static int64_t x778 = -1LL;
	int16_t x780 = INT16_MIN;

	t9 = (x777<<(x778-(x779%x780)));

	if (t9 != 4663LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x893 = 1LL;
	int16_t x894 = -1;
	int64_t x895 = INT64_MIN;
	int32_t x896 = INT32_MAX;
	volatile int64_t t10 = -60800185572LL;

	t10 = (x893<<(x894-(x895%x896)));

	if (t10 != 2LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x941 = 1279820021LLU;
	uint8_t x942 = 10U;
	volatile int8_t x943 = 40;
	static int16_t x944 = -1;
	static volatile uint64_t t11 = 278553LLU;

	t11 = (x941<<(x942-(x943%x944)));

	if (t11 != 1310535701504LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x1033 = INT16_MAX;
	volatile int8_t x1034 = 3;
	volatile uint64_t x1035 = UINT64_MAX;
	int32_t t12 = 505662721;

	t12 = (x1033<<(x1034-(x1035%x1036)));

	if (t12 != 262136) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1225 = 7LLU;
	static volatile int16_t x1226 = INT16_MIN;
	uint64_t t13 = 630994485879785231LLU;

	t13 = (x1225<<(x1226-(x1227%x1228)));

	if (t13 != 7LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1293 = 835LLU;
	static uint64_t x1295 = UINT64_MAX;
	int8_t x1296 = -1;
	uint64_t t14 = 21LLU;

	t14 = (x1293<<(x1294-(x1295%x1296)));

	if (t14 != 1670LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x1309 = 35LL;
	static uint32_t x1310 = UINT32_MAX;
	static uint8_t x1312 = 18U;
	volatile int64_t t15 = 65038891270732469LL;

	t15 = (x1309<<(x1310-(x1311%x1312)));

	if (t15 != 4480LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x1457 = UINT8_MAX;
	volatile int16_t x1460 = INT16_MAX;
	static volatile int32_t t16 = 3176635;

	t16 = (x1457<<(x1458-(x1459%x1460)));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1485 = 9790909U;
	uint16_t x1486 = 2U;
	int8_t x1487 = -1;
	uint8_t x1488 = UINT8_MAX;
	uint32_t t17 = 109U;

	t17 = (x1485<<(x1486-(x1487%x1488)));

	if (t17 != 78327272U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x1657 = 246368376474330971LLU;
	uint32_t x1658 = UINT32_MAX;
	int8_t x1659 = INT8_MIN;
	static uint64_t t18 = 81681069326118350LLU;

	t18 = (x1657<<(x1658-(x1659%x1660)));

	if (t18 != 492736752948661942LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1785 = UINT16_MAX;
	int64_t x1787 = -1LL;
	int32_t x1788 = INT32_MIN;
	volatile int32_t t19 = -111820;

	t19 = (x1785<<(x1786-(x1787%x1788)));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x1905 = 67248463214027516LLU;
	static uint32_t x1906 = 2U;
	uint64_t t20 = 7967LLU;

	t20 = (x1905<<(x1906-(x1907%x1908)));

	if (t20 != 268993852856110064LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x1997 = INT64_MAX;
	uint64_t x1998 = UINT64_MAX;
	int64_t x1999 = -1LL;
	int8_t x2000 = INT8_MAX;

	t21 = (x1997<<(x1998-(x1999%x2000)));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x2005 = 305792306U;
	volatile uint64_t x2007 = 20LLU;
	uint32_t x2008 = 177430U;
	uint32_t t22 = 922567029U;

	t22 = (x2005<<(x2006-(x2007%x2008)));

	if (t22 != 3492384768U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x2317 = 22600463396266LLU;
	int8_t x2318 = 3;
	int16_t x2319 = INT16_MIN;
	uint8_t x2320 = 65U;
	volatile uint64_t t23 = 634897665LLU;

	t23 = (x2317<<(x2318-(x2319%x2320)));

	if (t23 != 46285749035552768LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x2462 = 23U;
	int16_t x2463 = -6;
	int64_t x2464 = INT64_MIN;
	volatile uint64_t t24 = 10989857793731402LLU;

	t24 = (x2461<<(x2462-(x2463%x2464)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x2545 = 152819927LLU;
	int32_t x2546 = INT32_MIN;
	int32_t x2547 = INT32_MIN;
	volatile uint64_t x2548 = UINT64_MAX;
	static volatile uint64_t t25 = 45307LLU;

	t25 = (x2545<<(x2546-(x2547%x2548)));

	if (t25 != 152819927LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x2589 = 80729U;
	uint16_t x2590 = 1U;
	volatile int16_t x2592 = INT16_MAX;
	volatile uint32_t t26 = 1507335U;

	t26 = (x2589<<(x2590-(x2591%x2592)));

	if (t26 != 161458U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x2837 = 2883110917993LL;
	static int8_t x2838 = 2;
	uint32_t x2839 = UINT32_MAX;
	uint32_t x2840 = UINT32_MAX;
	static volatile int64_t t27 = -233049598662170LL;

	t27 = (x2837<<(x2838-(x2839%x2840)));

	if (t27 != 11532443671972LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x2841 = 22825166U;
	int16_t x2842 = 29;
	int64_t x2843 = 936865LL;
	static int16_t x2844 = -1;
	uint32_t t28 = 806316U;

	t28 = (x2841<<(x2842-(x2843%x2844)));

	if (t28 != 3221225472U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x3001 = UINT16_MAX;
	static int32_t x3002 = -1;
	static int16_t x3003 = -1;
	int32_t x3004 = -56;
	static volatile int32_t t29 = 28874628;

	t29 = (x3001<<(x3002-(x3003%x3004)));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x3010 = 3U;
	static int8_t x3012 = INT8_MIN;
	uint64_t t30 = 1023591199840861LLU;

	t30 = (x3009<<(x3010-(x3011%x3012)));

	if (t30 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x3061 = 110170962U;
	static int8_t x3062 = 3;
	int8_t x3064 = INT8_MIN;
	volatile uint32_t t31 = 11621U;

	t31 = (x3061<<(x3062-(x3063%x3064)));

	if (t31 != 881367696U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x3129 = 246U;
	static int32_t x3130 = 5;
	volatile uint8_t x3131 = 0U;
	volatile int64_t x3132 = INT64_MAX;
	volatile uint32_t t32 = 28U;

	t32 = (x3129<<(x3130-(x3131%x3132)));

	if (t32 != 7872U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x3293 = UINT8_MAX;
	int8_t x3294 = 3;
	uint64_t x3295 = UINT64_MAX;
	uint32_t x3296 = 2U;

	t33 = (x3293<<(x3294-(x3295%x3296)));

	if (t33 != 1020) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x3405 = 0;
	static int64_t x3406 = -1LL;
	int8_t x3407 = INT8_MIN;
	volatile int16_t x3408 = -5;
	int32_t t34 = 156295;

	t34 = (x3405<<(x3406-(x3407%x3408)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x3453 = UINT64_MAX;
	volatile uint32_t x3454 = UINT32_MAX;
	int8_t x3455 = -1;
	static int16_t x3456 = INT16_MIN;
	uint64_t t35 = UINT64_MAX;

	t35 = (x3453<<(x3454-(x3455%x3456)));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x3817 = 2;
	int8_t x3818 = 0;
	static uint16_t x3819 = UINT16_MAX;
	int16_t x3820 = -1;
	volatile int32_t t36 = 256;

	t36 = (x3817<<(x3818-(x3819%x3820)));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x3894 = -1;
	int8_t x3895 = -1;
	int32_t t37 = 66604;

	t37 = (x3893<<(x3894-(x3895%x3896)));

	if (t37 != 5297) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x4061 = UINT16_MAX;
	uint8_t x4062 = 0U;
	int8_t x4063 = -1;
	uint8_t x4064 = 9U;
	volatile int32_t t38 = -25964860;

	t38 = (x4061<<(x4062-(x4063%x4064)));

	if (t38 != 131070) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x4101 = UINT8_MAX;
	int32_t x4102 = 2;
	uint64_t x4103 = UINT64_MAX;
	int32_t t39 = -62211;

	t39 = (x4101<<(x4102-(x4103%x4104)));

	if (t39 != 510) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x4221 = UINT32_MAX;
	volatile int64_t x4222 = 1LL;
	volatile uint8_t x4224 = 7U;

	t40 = (x4221<<(x4222-(x4223%x4224)));

	if (t40 != 4294967292U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x4277 = 434162863;
	int8_t x4278 = -1;
	int8_t x4279 = -1;
	volatile uint16_t x4280 = 72U;
	volatile int32_t t41 = 13;

	t41 = (x4277<<(x4278-(x4279%x4280)));

	if (t41 != 434162863) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x4457 = UINT8_MAX;
	static volatile int8_t x4458 = -7;
	static int8_t x4459 = -14;
	volatile int32_t x4460 = INT32_MIN;
	int32_t t42 = -9;

	t42 = (x4457<<(x4458-(x4459%x4460)));

	if (t42 != 32640) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x4473 = 36LLU;
	int8_t x4474 = 1;
	static int8_t x4475 = 28;
	uint64_t t43 = 10441513546124LLU;

	t43 = (x4473<<(x4474-(x4475%x4476)));

	if (t43 != 72LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x4642 = -1;
	int32_t x4643 = -1;
	int32_t t44 = INT32_MAX;

	t44 = (x4641<<(x4642-(x4643%x4644)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x4701 = 18U;
	uint64_t x4702 = UINT64_MAX;
	int32_t x4703 = -1;
	uint16_t x4704 = UINT16_MAX;

	t45 = (x4701<<(x4702-(x4703%x4704)));

	if (t45 != 18) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x4721 = 13U;
	int8_t x4723 = -1;
	volatile int64_t x4724 = INT64_MIN;
	uint32_t t46 = 10527753U;

	t46 = (x4721<<(x4722-(x4723%x4724)));

	if (t46 != 52U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x4749 = 1664495175460868501LLU;
	static uint8_t x4750 = 7U;
	static uint64_t x4751 = UINT64_MAX;
	int64_t x4752 = INT64_MAX;
	uint64_t t47 = 418505971LLU;

	t47 = (x4749<<(x4750-(x4751%x4752)));

	if (t47 != 14293970860947825984LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x4765 = 2618U;
	volatile int32_t t48 = 27945;

	t48 = (x4765<<(x4766-(x4767%x4768)));

	if (t48 != 41888) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x4833 = 797U;
	uint32_t x4834 = 7U;
	volatile int32_t x4835 = 248473;
	uint64_t x4836 = 1LLU;
	volatile int32_t t49 = -47573048;

	t49 = (x4833<<(x4834-(x4835%x4836)));

	if (t49 != 102016) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x4873 = 2345U;
	uint8_t x4874 = 11U;
	volatile int64_t x4875 = -1LL;
	int32_t x4876 = INT32_MAX;
	int32_t t50 = -143729;

	t50 = (x4873<<(x4874-(x4875%x4876)));

	if (t50 != 9605120) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x4981 = UINT64_MAX;
	int64_t x4983 = -1LL;

	t51 = (x4981<<(x4982-(x4983%x4984)));

	if (t51 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x5185 = 34;
	volatile int16_t x5186 = 0;
	int32_t x5187 = INT32_MIN;
	volatile int8_t x5188 = 58;
	int32_t t52 = -52016;

	t52 = (x5185<<(x5186-(x5187%x5188)));

	if (t52 != 8704) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x5253 = 0;
	volatile uint8_t x5254 = 26U;
	int16_t x5255 = INT16_MIN;
	volatile uint16_t x5256 = 5U;
	volatile int32_t t53 = 339252;

	t53 = (x5253<<(x5254-(x5255%x5256)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x5281 = 0;
	volatile uint16_t x5282 = 30U;
	uint8_t x5283 = 1U;
	uint32_t x5284 = 2002731834U;
	volatile int32_t t54 = -1;

	t54 = (x5281<<(x5282-(x5283%x5284)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x5453 = 486534U;
	int32_t x5454 = 9;
	static int64_t x5456 = -1LL;
	static uint32_t t55 = 337U;

	t55 = (x5453<<(x5454-(x5455%x5456)));

	if (t55 != 249105408U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x5641 = 8U;
	static uint8_t x5642 = 0U;
	int64_t x5643 = -331973349410LL;
	static int32_t x5644 = -1;
	static volatile int32_t t56 = 7784864;

	t56 = (x5641<<(x5642-(x5643%x5644)));

	if (t56 != 8) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x5649 = UINT64_MAX;
	volatile int16_t x5650 = INT16_MAX;
	int16_t x5651 = INT16_MAX;
	uint16_t x5652 = UINT16_MAX;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (x5649<<(x5650-(x5651%x5652)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x5742 = 5U;
	volatile int8_t x5743 = -2;
	static uint16_t x5744 = 192U;
	uint32_t t58 = 111533897U;

	t58 = (x5741<<(x5742-(x5743%x5744)));

	if (t58 != 235904U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x5805 = 53U;
	uint32_t x5806 = 2U;
	int16_t x5807 = -418;
	int16_t x5808 = -1;
	int32_t t59 = 81755;

	t59 = (x5805<<(x5806-(x5807%x5808)));

	if (t59 != 212) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x6037 = 254311594593104135LLU;
	static int16_t x6038 = -3;
	int64_t x6040 = 32207LL;

	t60 = (x6037<<(x6038-(x6039%x6040)));

	if (t60 != 2034492756744833080LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x6101 = 401U;
	static int8_t x6102 = 1;
	int8_t x6104 = -1;
	int32_t t61 = -2;

	t61 = (x6101<<(x6102-(x6103%x6104)));

	if (t61 != 802) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x6194 = 25;
	int64_t x6195 = INT64_MAX;
	static volatile int32_t t62 = -62572802;

	t62 = (x6193<<(x6194-(x6195%x6196)));

	if (t62 != 301989888) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x6265 = 5LLU;
	volatile uint8_t x6266 = 1U;
	uint16_t x6267 = UINT16_MAX;
	uint8_t x6268 = UINT8_MAX;
	uint64_t t63 = 7177962623929319LLU;

	t63 = (x6265<<(x6266-(x6267%x6268)));

	if (t63 != 10LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x6389 = INT16_MAX;
	volatile int16_t x6391 = INT16_MIN;
	int8_t x6392 = INT8_MAX;
	volatile int32_t t64 = 500;

	t64 = (x6389<<(x6390-(x6391%x6392)));

	if (t64 != 524272) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x6405 = UINT16_MAX;
	static uint16_t x6406 = 4U;
	volatile int16_t x6408 = INT16_MIN;

	t65 = (x6405<<(x6406-(x6407%x6408)));

	if (t65 != 1048560) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x6477 = 0U;
	int32_t x6478 = 1;
	int32_t x6479 = -61455;
	int16_t x6480 = -5;
	volatile int32_t t66 = -7;

	t66 = (x6477<<(x6478-(x6479%x6480)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x6513 = UINT64_MAX;
	volatile uint16_t x6514 = 3U;
	static volatile uint64_t t67 = 707530317685LLU;

	t67 = (x6513<<(x6514-(x6515%x6516)));

	if (t67 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x6529 = 2U;
	volatile uint8_t x6530 = 1U;
	uint64_t x6531 = UINT64_MAX;
	volatile int8_t x6532 = -1;
	volatile int32_t t68 = 2249293;

	t68 = (x6529<<(x6530-(x6531%x6532)));

	if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x6537 = 4LLU;
	volatile int16_t x6538 = 0;
	static uint8_t x6539 = UINT8_MAX;
	uint64_t t69 = 47380211LLU;

	t69 = (x6537<<(x6538-(x6539%x6540)));

	if (t69 != 4LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x6633 = 670808U;
	volatile uint64_t x6634 = UINT64_MAX;
	static int16_t x6636 = INT16_MAX;
	volatile uint32_t t70 = 27793U;

	t70 = (x6633<<(x6634-(x6635%x6636)));

	if (t70 != 1341616U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x6689 = 150455U;
	volatile int16_t x6690 = INT16_MAX;
	uint32_t x6691 = UINT32_MAX;
	int16_t x6692 = INT16_MIN;
	volatile uint32_t t71 = 66998U;

	t71 = (x6689<<(x6690-(x6691%x6692)));

	if (t71 != 150455U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x6897 = 470825528LLU;
	uint8_t x6898 = 1U;
	int32_t x6899 = INT32_MIN;
	volatile int64_t x6900 = -1LL;
	volatile uint64_t t72 = 80LLU;

	t72 = (x6897<<(x6898-(x6899%x6900)));

	if (t72 != 941651056LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x7005 = 6825876433661LLU;
	volatile uint16_t x7006 = 1U;
	int16_t x7007 = INT16_MAX;
	static uint16_t x7008 = 3U;

	t73 = (x7005<<(x7006-(x7007%x7008)));

	if (t73 != 6825876433661LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x7066 = 0;
	int64_t x7067 = -1LL;
	volatile uint64_t t74 = 111768470555652LLU;

	t74 = (x7065<<(x7066-(x7067%x7068)));

	if (t74 != 4204456303275LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x7097 = 7187;
	int64_t x7100 = -1LL;

	t75 = (x7097<<(x7098-(x7099%x7100)));

	if (t75 != 229984) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x7309 = 169U;
	uint32_t x7310 = 10U;
	static int8_t x7311 = 0;
	static int16_t x7312 = INT16_MIN;
	volatile int32_t t76 = -8553;

	t76 = (x7309<<(x7310-(x7311%x7312)));

	if (t76 != 173056) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x7373 = 37U;
	uint16_t x7374 = 24U;
	volatile int8_t x7375 = -1;
	static volatile int64_t x7376 = -1LL;
	static int32_t t77 = -55903882;

	t77 = (x7373<<(x7374-(x7375%x7376)));

	if (t77 != 620756992) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x7521 = UINT8_MAX;
	uint8_t x7522 = 13U;
	volatile int8_t x7523 = -1;
	int64_t x7524 = INT64_MIN;

	t78 = (x7521<<(x7522-(x7523%x7524)));

	if (t78 != 4177920) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x7641 = UINT16_MAX;
	int32_t x7643 = INT32_MIN;
	volatile int64_t x7644 = -1LL;
	int32_t t79 = -282088946;

	t79 = (x7641<<(x7642-(x7643%x7644)));

	if (t79 != 131070) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x7813 = 229;
	volatile int16_t x7814 = -1;
	volatile int64_t x7815 = -1LL;
	static int16_t x7816 = INT16_MIN;
	int32_t t80 = -79192;

	t80 = (x7813<<(x7814-(x7815%x7816)));

	if (t80 != 229) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x7853 = INT64_MAX;
	static uint64_t x7854 = UINT64_MAX;
	int64_t x7855 = -1LL;
	volatile int64_t t81 = INT64_MAX;

	t81 = (x7853<<(x7854-(x7855%x7856)));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x8105 = 15222U;
	volatile uint32_t x8106 = 22U;
	volatile uint32_t x8107 = 30135U;

	t82 = (x8105<<(x8106-(x8107%x8108)));

	if (t82 != 1995177984U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x8169 = UINT64_MAX;
	int16_t x8171 = INT16_MIN;
	volatile int8_t x8172 = 3;
	uint64_t t83 = 5666LLU;

	t83 = (x8169<<(x8170-(x8171%x8172)));

	if (t83 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x8237 = UINT32_MAX;
	volatile uint32_t x8238 = 4U;
	static int16_t x8239 = -1;
	int64_t x8240 = -1LL;
	uint32_t t84 = 2U;

	t84 = (x8237<<(x8238-(x8239%x8240)));

	if (t84 != 4294967280U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x8285 = UINT64_MAX;
	static int8_t x8286 = 0;
	int16_t x8287 = -1;
	uint8_t x8288 = 3U;

	t85 = (x8285<<(x8286-(x8287%x8288)));

	if (t85 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x8313 = 9542U;
	int32_t x8314 = -1;
	static uint32_t t86 = 1741167646U;

	t86 = (x8313<<(x8314-(x8315%x8316)));

	if (t86 != 9542U) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x8390 = -1LL;
	static int8_t x8391 = -1;
	int32_t t87 = 662;

	t87 = (x8389<<(x8390-(x8391%x8392)));

	if (t87 != 10) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x8409 = INT8_MAX;
	uint16_t x8410 = 1U;
	uint64_t x8412 = 5085LLU;

	t88 = (x8409<<(x8410-(x8411%x8412)));

	if (t88 != 254) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x8429 = 11647798LL;
	static volatile int64_t x8431 = -1LL;
	static int64_t t89 = -19LL;

	t89 = (x8429<<(x8430-(x8431%x8432)));

	if (t89 != 24427202871296LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x8501 = UINT32_MAX;
	int16_t x8502 = -1;
	static int8_t x8504 = INT8_MAX;
	volatile uint32_t t90 = UINT32_MAX;

	t90 = (x8501<<(x8502-(x8503%x8504)));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x8598 = 61U;
	uint8_t x8599 = 55U;
	volatile uint64_t x8600 = 925LLU;
	volatile int32_t t91 = 455659385;

	t91 = (x8597<<(x8598-(x8599%x8600)));

	if (t91 != 8128) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x8685 = 11254U;
	int8_t x8686 = -1;
	static int16_t x8687 = -1;
	int16_t x8688 = INT16_MAX;
	uint32_t t92 = 6384U;

	t92 = (x8685<<(x8686-(x8687%x8688)));

	if (t92 != 11254U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x8697 = 5801U;
	volatile int8_t x8698 = INT8_MAX;
	uint32_t x8699 = UINT32_MAX;

	t93 = (x8697<<(x8698-(x8699%x8700)));

	if (t93 != 5801) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x9071 = -111898024;
	int64_t x9072 = -1LL;
	volatile int32_t t94 = -2;

	t94 = (x9069<<(x9070-(x9071%x9072)));

	if (t94 != 524280) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x9074 = 20U;
	volatile uint8_t x9075 = UINT8_MAX;
	int16_t x9076 = 2;
	uint64_t t95 = 5270755369736114410LLU;

	t95 = (x9073<<(x9074-(x9075%x9076)));

	if (t95 != 9503768576LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x9205 = 1U;
	int32_t x9206 = -1;
	volatile int16_t x9207 = -1;
	int16_t x9208 = INT16_MAX;
	volatile int32_t t96 = 729723480;

	t96 = (x9205<<(x9206-(x9207%x9208)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x9473 = 23U;
	int8_t x9474 = 0;
	int64_t x9475 = -1LL;
	uint8_t x9476 = UINT8_MAX;
	uint32_t t97 = 558U;

	t97 = (x9473<<(x9474-(x9475%x9476)));

	if (t97 != 46U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x9489 = 8LLU;
	int8_t x9490 = -1;
	volatile int64_t x9491 = INT64_MIN;
	uint64_t t98 = 521849734227793314LLU;

	t98 = (x9489<<(x9490-(x9491%x9492)));

	if (t98 != 8LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x9505 = 1U;
	int8_t x9506 = 0;
	int8_t x9507 = INT8_MIN;
	volatile uint32_t t99 = 1U;

	t99 = (x9505<<(x9506-(x9507%x9508)));

	if (t99 != 1U) { NG(); } else { ; }
	
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

