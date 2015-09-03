#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x16 = UINT32_MAX;
volatile int16_t x25 = 15;
uint16_t x141 = 14859U;
int32_t x143 = INT32_MAX;
uint64_t x189 = 73222688LLU;
uint32_t x190 = 0U;
volatile int32_t x191 = -24;
int32_t x221 = 234441;
int16_t x222 = 1;
int16_t x239 = INT16_MIN;
uint32_t x341 = 4118255U;
volatile uint16_t x342 = 0U;
int64_t x343 = INT64_MIN;
int8_t x430 = 0;
static uint32_t x609 = 3865U;
volatile int64_t x611 = INT64_MAX;
uint8_t x1049 = 0U;
uint32_t t17 = 4U;
uint32_t x1105 = 3U;
int32_t x1268 = INT32_MAX;
static int64_t x1403 = -1LL;
static int32_t x1404 = -1;
static volatile int16_t x1612 = -1;
uint32_t x1827 = UINT32_MAX;
static int8_t x1926 = 0;
int16_t x1963 = INT16_MIN;
volatile uint16_t x2005 = 25171U;
uint64_t x2008 = 378893487LLU;
uint32_t t33 = 172U;
volatile int8_t x2146 = 2;
int64_t x2200 = -101142LL;
uint8_t x2257 = 77U;
uint64_t x2260 = UINT64_MAX;
uint8_t x2402 = 29U;
int64_t x2404 = -18390683624LL;
uint64_t x2515 = 1851575LLU;
volatile uint8_t x2525 = UINT8_MAX;
uint8_t x2526 = 31U;
int32_t t43 = 224028057;
int16_t x2638 = 15;
uint32_t x2640 = 1708552003U;
uint8_t x3038 = 0U;
int16_t x3173 = INT16_MAX;
static volatile uint64_t t51 = 3458874734LLU;
int8_t x3205 = 47;
int16_t x3206 = 14;
int32_t t52 = 1;
static uint16_t x3209 = 1698U;
uint8_t x3210 = 1U;
volatile int32_t t53 = -9406;
uint16_t x3285 = 1962U;
static int16_t x3306 = 4;
uint32_t t56 = 244344U;
int16_t x3743 = INT16_MAX;
uint64_t x3857 = 1487180404055262768LLU;
uint64_t x3910 = 0LLU;
int32_t x3911 = 38;
int64_t t63 = 166407964149LL;
uint8_t x4041 = UINT8_MAX;
int8_t x4042 = 13;
volatile uint32_t t64 = 18U;
volatile uint32_t x4106 = 4U;
uint8_t x4108 = 127U;
int64_t t66 = 751956373167LL;
static uint8_t x4170 = 4U;
uint32_t x4186 = 25U;
int16_t x4187 = -755;
static int64_t t69 = 976338LL;
static int16_t x4271 = -1;
uint16_t x4391 = UINT16_MAX;
int8_t x4392 = INT8_MIN;
uint8_t x4494 = 21U;
static volatile int64_t x4530 = 0LL;
volatile int64_t x4531 = INT64_MIN;
int64_t x4741 = 40118LL;
int64_t x4750 = 0LL;
int64_t t77 = 317272279785LL;
uint16_t x5119 = 336U;
int64_t t80 = 64115552543032LL;
uint8_t x5217 = 7U;
static int64_t x5220 = 23220910452703LL;
int32_t x5243 = -1;
int16_t x5298 = 0;
volatile int64_t x5300 = -195984475165LL;
volatile int64_t t84 = 2219289206456447LL;
static uint8_t x5410 = 0U;
int8_t x5564 = INT8_MAX;
uint64_t x5609 = 32751LLU;
uint16_t x5641 = 1U;
uint8_t x5642 = 0U;
uint8_t x5644 = 15U;
volatile uint64_t x5685 = UINT64_MAX;
int32_t x5687 = -1;
int32_t x5700 = -1;
int8_t x5718 = 0;
uint16_t x5763 = UINT16_MAX;
uint8_t x5789 = 25U;
static volatile uint16_t x5810 = 8U;
int16_t x5811 = 115;
int8_t x5910 = 17;
uint64_t t98 = 1589344LLU;
static uint64_t x5974 = 12LLU;


void f0(void) {
	volatile int16_t x13 = 0;
	static uint8_t x14 = 3U;
	static int32_t x15 = -1;
	volatile uint32_t t0 = 69056U;

	t0 = (((x13>>x14)&x15)*x16);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x26 = 13U;
	static volatile uint16_t x27 = 2U;
	uint32_t x28 = 56U;
	static uint32_t t1 = 111U;

	t1 = (((x25>>x26)&x27)*x28);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x105 = 870LLU;
	volatile uint8_t x106 = 1U;
	int16_t x107 = 14363;
	volatile int8_t x108 = -3;
	volatile uint64_t t2 = 720554137792743230LLU;

	t2 = (((x105>>x106)&x107)*x108);

	if (t2 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x142 = 1U;
	uint16_t x144 = UINT16_MAX;
	int32_t t3 = -5190284;

	t3 = (((x141>>x142)&x143)*x144);

	if (t3 != 486859515) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x192 = UINT32_MAX;
	volatile uint64_t t4 = 6LLU;

	t4 = (((x189>>x190)&x191)*x192);

	if (t4 != 314489050211988960LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x223 = INT64_MIN;
	uint64_t x224 = 86LLU;
	volatile uint64_t t5 = 4119481026412361LLU;

	t5 = (((x221>>x222)&x223)*x224);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x237 = UINT16_MAX;
	static uint8_t x238 = 15U;
	int32_t x240 = INT32_MIN;
	int32_t t6 = 1783;

	t6 = (((x237>>x238)&x239)*x240);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x329 = 48257LLU;
	static uint32_t x330 = 3U;
	volatile int64_t x331 = -1LL;
	static int8_t x332 = INT8_MAX;
	volatile uint64_t t7 = 7LLU;

	t7 = (((x329>>x330)&x331)*x332);

	if (t7 != 766064LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x344 = INT32_MAX;
	static int64_t t8 = -1407325417413094730LL;

	t8 = (((x341>>x342)&x343)*x344);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x385 = UINT32_MAX;
	uint8_t x386 = 1U;
	int32_t x387 = INT32_MAX;
	int8_t x388 = -18;
	uint32_t t9 = 7788201U;

	t9 = (((x385>>x386)&x387)*x388);

	if (t9 != 18U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x417 = UINT64_MAX;
	uint8_t x418 = 1U;
	int8_t x419 = INT8_MIN;
	static int16_t x420 = INT16_MAX;
	uint64_t t10 = 193577914LLU;

	t10 = (((x417>>x418)&x419)*x420);

	if (t10 != 9223372036850581632LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x429 = 1776U;
	int64_t x431 = INT64_MAX;
	int64_t x432 = -1LL;
	volatile int64_t t11 = -1052464283554866LL;

	t11 = (((x429>>x430)&x431)*x432);

	if (t11 != -1776LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x433 = INT16_MAX;
	uint8_t x434 = 2U;
	int16_t x435 = INT16_MIN;
	uint16_t x436 = 29291U;
	int32_t t12 = -2783566;

	t12 = (((x433>>x434)&x435)*x436);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x610 = 0;
	int16_t x612 = -1;
	int64_t t13 = 91153433609945LL;

	t13 = (((x609>>x610)&x611)*x612);

	if (t13 != -3865LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x909 = UINT8_MAX;
	int32_t x910 = 1;
	uint64_t x911 = 3LLU;
	static volatile int64_t x912 = INT64_MIN;
	uint64_t t14 = 3629370LLU;

	t14 = (((x909>>x910)&x911)*x912);

	if (t14 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x977 = 153;
	static uint8_t x978 = 0U;
	static volatile uint32_t x979 = UINT32_MAX;
	int8_t x980 = 11;
	volatile uint32_t t15 = 4732U;

	t15 = (((x977>>x978)&x979)*x980);

	if (t15 != 1683U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1050 = 1;
	int64_t x1051 = -1LL;
	volatile int32_t x1052 = 298603;
	static volatile int64_t t16 = 895875067641048LL;

	t16 = (((x1049>>x1050)&x1051)*x1052);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x1089 = 4U;
	uint16_t x1090 = 28U;
	int16_t x1091 = INT16_MAX;
	uint32_t x1092 = UINT32_MAX;

	t17 = (((x1089>>x1090)&x1091)*x1092);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1106 = 1;
	int64_t x1107 = 3LL;
	int16_t x1108 = -1;
	int64_t t18 = -1429367752587518LL;

	t18 = (((x1105>>x1106)&x1107)*x1108);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1161 = 14U;
	uint16_t x1162 = 0U;
	static int8_t x1163 = INT8_MAX;
	int8_t x1164 = INT8_MIN;
	int32_t t19 = -170568506;

	t19 = (((x1161>>x1162)&x1163)*x1164);

	if (t19 != -1792) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1265 = 1;
	uint8_t x1266 = 1U;
	static int64_t x1267 = 49814431LL;
	volatile int64_t t20 = -66726LL;

	t20 = (((x1265>>x1266)&x1267)*x1268);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1401 = UINT16_MAX;
	volatile int8_t x1402 = 29;
	int64_t t21 = -269582925768LL;

	t21 = (((x1401>>x1402)&x1403)*x1404);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1601 = 14844695460807611LLU;
	uint16_t x1602 = 7U;
	uint64_t x1603 = 8050LLU;
	static int8_t x1604 = INT8_MAX;
	uint64_t t22 = 31LLU;

	t22 = (((x1601>>x1602)&x1603)*x1604);

	if (t22 != 878078LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x1609 = 754730112546085939LLU;
	volatile uint8_t x1610 = 19U;
	int32_t x1611 = -1;
	uint64_t t23 = 757482LLU;

	t23 = (((x1609>>x1610)&x1611)*x1612);

	if (t23 != 18446742634176103309LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1689 = 1;
	uint32_t x1690 = 1U;
	int32_t x1691 = -1;
	uint64_t x1692 = 0LLU;
	static volatile uint64_t t24 = 667999819353LLU;

	t24 = (((x1689>>x1690)&x1691)*x1692);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1705 = 1;
	int8_t x1706 = 8;
	int16_t x1707 = -162;
	int32_t x1708 = -4;
	volatile int32_t t25 = -3923462;

	t25 = (((x1705>>x1706)&x1707)*x1708);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1713 = 1;
	int16_t x1714 = 0;
	uint16_t x1715 = 2902U;
	int16_t x1716 = -1;
	static int32_t t26 = -5345613;

	t26 = (((x1713>>x1714)&x1715)*x1716);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x1825 = 5594108487551747LLU;
	int16_t x1826 = 53;
	volatile int8_t x1828 = 59;
	static volatile uint64_t t27 = 14LLU;

	t27 = (((x1825>>x1826)&x1827)*x1828);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x1925 = 3LL;
	static int64_t x1927 = INT64_MIN;
	int8_t x1928 = -1;
	volatile int64_t t28 = -172841806736LL;

	t28 = (((x1925>>x1926)&x1927)*x1928);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x1961 = INT32_MAX;
	uint8_t x1962 = 13U;
	int64_t x1964 = 331LL;
	volatile int64_t t29 = -949820LL;

	t29 = (((x1961>>x1962)&x1963)*x1964);

	if (t29 != 75923456LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x2006 = 7U;
	int16_t x2007 = -1;
	volatile uint64_t t30 = 87LLU;

	t30 = (((x2005>>x2006)&x2007)*x2008);

	if (t30 != 74263123452LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x2073 = 3217LLU;
	int32_t x2074 = 0;
	static int64_t x2075 = 55LL;
	int16_t x2076 = INT16_MIN;
	volatile uint64_t t31 = 100656LLU;

	t31 = (((x2073>>x2074)&x2075)*x2076);

	if (t31 != 18446744073708994560LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2101 = 75749U;
	int64_t x2102 = 5LL;
	volatile int64_t x2103 = 653636LL;
	uint64_t x2104 = 170835569LLU;
	volatile uint64_t t32 = 8238487780628725LLU;

	t32 = (((x2101>>x2102)&x2103)*x2104);

	if (t32 != 394288493252LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2125 = 2045295U;
	uint8_t x2126 = 0U;
	static uint8_t x2127 = 0U;
	static int32_t x2128 = 3754193;

	t33 = (((x2125>>x2126)&x2127)*x2128);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x2145 = 62U;
	volatile int8_t x2147 = INT8_MIN;
	volatile uint64_t x2148 = UINT64_MAX;
	volatile uint64_t t34 = 235LLU;

	t34 = (((x2145>>x2146)&x2147)*x2148);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2197 = UINT8_MAX;
	static int8_t x2198 = 5;
	uint16_t x2199 = 1729U;
	int64_t t35 = 0LL;

	t35 = (((x2197>>x2198)&x2199)*x2200);

	if (t35 != -101142LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2253 = INT8_MAX;
	volatile uint16_t x2254 = 1U;
	uint32_t x2255 = 608920U;
	static volatile int16_t x2256 = INT16_MIN;
	static volatile uint32_t t36 = 3197U;

	t36 = (((x2253>>x2254)&x2255)*x2256);

	if (t36 != 4294180864U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2258 = 9U;
	volatile int32_t x2259 = INT32_MIN;
	uint64_t t37 = 42598430LLU;

	t37 = (((x2257>>x2258)&x2259)*x2260);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x2285 = INT32_MAX;
	int8_t x2286 = 5;
	int64_t x2287 = INT64_MAX;
	int16_t x2288 = INT16_MIN;
	int64_t t38 = -1186898LL;

	t38 = (((x2285>>x2286)&x2287)*x2288);

	if (t38 != -2199023222784LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x2361 = 0;
	static uint32_t x2362 = 0U;
	int64_t x2363 = 3LL;
	int64_t x2364 = INT64_MAX;
	volatile int64_t t39 = -3743796926997727LL;

	t39 = (((x2361>>x2362)&x2363)*x2364);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x2401 = 89U;
	static int32_t x2403 = INT32_MIN;
	static volatile int64_t t40 = 5443LL;

	t40 = (((x2401>>x2402)&x2403)*x2404);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x2513 = UINT16_MAX;
	static volatile int8_t x2514 = 0;
	int64_t x2516 = INT64_MIN;
	volatile uint64_t t41 = 40LLU;

	t41 = (((x2513>>x2514)&x2515)*x2516);

	if (t41 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2527 = INT8_MIN;
	int32_t x2528 = -1;
	int32_t t42 = -96400961;

	t42 = (((x2525>>x2526)&x2527)*x2528);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x2561 = 3542;
	uint16_t x2562 = 0U;
	int32_t x2563 = -1;
	int16_t x2564 = 1;

	t43 = (((x2561>>x2562)&x2563)*x2564);

	if (t43 != 3542) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2637 = INT64_MAX;
	static int64_t x2639 = INT64_MIN;
	volatile int64_t t44 = 807628550586363LL;

	t44 = (((x2637>>x2638)&x2639)*x2640);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x2685 = INT16_MAX;
	int8_t x2686 = 1;
	int64_t x2687 = -1LL;
	int8_t x2688 = -13;
	volatile int64_t t45 = 3227624155796697LL;

	t45 = (((x2685>>x2686)&x2687)*x2688);

	if (t45 != -212979LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x2785 = 191LLU;
	uint16_t x2786 = 13U;
	volatile int64_t x2787 = INT64_MIN;
	int64_t x2788 = INT64_MIN;
	uint64_t t46 = 82129216LLU;

	t46 = (((x2785>>x2786)&x2787)*x2788);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2869 = UINT8_MAX;
	int32_t x2870 = 1;
	int64_t x2871 = INT64_MIN;
	int32_t x2872 = INT32_MIN;
	int64_t t47 = 51613LL;

	t47 = (((x2869>>x2870)&x2871)*x2872);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2989 = 3844U;
	int16_t x2990 = 0;
	int8_t x2991 = -1;
	int32_t x2992 = -8;
	static volatile int32_t t48 = -15836;

	t48 = (((x2989>>x2990)&x2991)*x2992);

	if (t48 != -30752) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3037 = INT16_MAX;
	int64_t x3039 = 25157171316241LL;
	volatile uint32_t x3040 = UINT32_MAX;
	volatile int64_t t49 = -37LL;

	t49 = (((x3037>>x3038)&x3039)*x3040);

	if (t49 != 6670084209135LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3174 = 15;
	static int64_t x3175 = -1LL;
	int64_t x3176 = INT64_MAX;
	static int64_t t50 = 1LL;

	t50 = (((x3173>>x3174)&x3175)*x3176);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3189 = INT32_MAX;
	static int8_t x3190 = 0;
	int8_t x3191 = -1;
	static uint64_t x3192 = 1635829LLU;

	t51 = (((x3189>>x3190)&x3191)*x3192);

	if (t51 != 3512916026788363LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x3207 = 59U;
	int8_t x3208 = INT8_MAX;

	t52 = (((x3205>>x3206)&x3207)*x3208);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x3211 = INT32_MAX;
	int16_t x3212 = -1;

	t53 = (((x3209>>x3210)&x3211)*x3212);

	if (t53 != -849) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x3269 = UINT16_MAX;
	static uint8_t x3270 = 4U;
	uint8_t x3271 = 1U;
	static int32_t x3272 = -1;
	static volatile int32_t t54 = 171428088;

	t54 = (((x3269>>x3270)&x3271)*x3272);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x3286 = 30LLU;
	int8_t x3287 = INT8_MIN;
	int16_t x3288 = -15948;
	volatile int32_t t55 = -786789;

	t55 = (((x3285>>x3286)&x3287)*x3288);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3305 = 31651U;
	uint32_t x3307 = UINT32_MAX;
	uint8_t x3308 = 13U;

	t56 = (((x3305>>x3306)&x3307)*x3308);

	if (t56 != 25714U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3493 = 177276922U;
	uint8_t x3494 = 25U;
	uint16_t x3495 = 65U;
	int8_t x3496 = INT8_MIN;
	volatile uint32_t t57 = 325777046U;

	t57 = (((x3493>>x3494)&x3495)*x3496);

	if (t57 != 4294967168U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3741 = 1LL;
	int8_t x3742 = 0;
	static int32_t x3744 = INT32_MIN;
	int64_t t58 = -279557043LL;

	t58 = (((x3741>>x3742)&x3743)*x3744);

	if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x3849 = UINT8_MAX;
	int16_t x3850 = 1;
	int8_t x3851 = 0;
	static int32_t x3852 = -1;
	volatile int32_t t59 = 1130;

	t59 = (((x3849>>x3850)&x3851)*x3852);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3853 = 441U;
	int32_t x3854 = 5;
	static volatile uint8_t x3855 = 1U;
	uint8_t x3856 = 92U;
	volatile uint32_t t60 = 892707012U;

	t60 = (((x3853>>x3854)&x3855)*x3856);

	if (t60 != 92U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3858 = 5LLU;
	uint8_t x3859 = 123U;
	volatile int32_t x3860 = 4204;
	volatile uint64_t t61 = 149131LLU;

	t61 = (((x3857>>x3858)&x3859)*x3860);

	if (t61 != 205996LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3909 = UINT64_MAX;
	static volatile uint16_t x3912 = 16U;
	uint64_t t62 = 773448869620LLU;

	t62 = (((x3909>>x3910)&x3911)*x3912);

	if (t62 != 608LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x4001 = INT16_MAX;
	int16_t x4002 = 0;
	int64_t x4003 = INT64_MIN;
	volatile int8_t x4004 = INT8_MIN;

	t63 = (((x4001>>x4002)&x4003)*x4004);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x4043 = 17986U;
	volatile int16_t x4044 = INT16_MIN;

	t64 = (((x4041>>x4042)&x4043)*x4044);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x4105 = 374377811602491898LL;
	static uint64_t x4107 = 13073LLU;
	uint64_t t65 = 17LLU;

	t65 = (((x4105>>x4106)&x4107)*x4108);

	if (t65 != 1042543LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4165 = INT8_MAX;
	volatile int32_t x4166 = 7;
	int32_t x4167 = INT32_MIN;
	int64_t x4168 = INT64_MIN;

	t66 = (((x4165>>x4166)&x4167)*x4168);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4169 = 46213052728529561LL;
	static int16_t x4171 = INT16_MIN;
	int8_t x4172 = -1;
	volatile int64_t t67 = -4LL;

	t67 = (((x4169>>x4170)&x4171)*x4172);

	if (t67 != -2888315795505152LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4185 = UINT64_MAX;
	int16_t x4188 = INT16_MIN;
	uint64_t t68 = 4612073565202446280LLU;

	t68 = (((x4185>>x4186)&x4187)*x4188);

	if (t68 != 18428729675224809472LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x4209 = 2U;
	int8_t x4210 = 14;
	int8_t x4211 = -1;
	static int64_t x4212 = INT64_MIN;

	t69 = (((x4209>>x4210)&x4211)*x4212);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4269 = 2451U;
	int16_t x4270 = 2;
	uint16_t x4272 = 1227U;
	volatile int32_t t70 = 989;

	t70 = (((x4269>>x4270)&x4271)*x4272);

	if (t70 != 750924) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4389 = 1LLU;
	static uint8_t x4390 = 31U;
	uint64_t t71 = 4135450851LLU;

	t71 = (((x4389>>x4390)&x4391)*x4392);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x4493 = 0U;
	int64_t x4495 = -6333724802413459LL;
	int64_t x4496 = 238703518115217LL;
	volatile int64_t t72 = 3384LL;

	t72 = (((x4493>>x4494)&x4495)*x4496);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4529 = UINT64_MAX;
	uint64_t x4532 = UINT64_MAX;
	uint64_t t73 = 12673086970LLU;

	t73 = (((x4529>>x4530)&x4531)*x4532);

	if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x4609 = 6684LL;
	volatile int8_t x4610 = 0;
	uint64_t x4611 = 75061702445656191LLU;
	int16_t x4612 = -579;
	uint64_t t74 = 97605LLU;

	t74 = (((x4609>>x4610)&x4611)*x4612);

	if (t74 != 18446744073708349612LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x4742 = 18;
	int8_t x4743 = INT8_MAX;
	static int64_t x4744 = INT64_MIN;
	static volatile int64_t t75 = -823LL;

	t75 = (((x4741>>x4742)&x4743)*x4744);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x4749 = UINT16_MAX;
	uint64_t x4751 = UINT64_MAX;
	uint64_t x4752 = UINT64_MAX;
	volatile uint64_t t76 = 64762790704371LLU;

	t76 = (((x4749>>x4750)&x4751)*x4752);

	if (t76 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4933 = INT64_MAX;
	static uint8_t x4934 = 18U;
	int16_t x4935 = 0;
	uint8_t x4936 = 26U;

	t77 = (((x4933>>x4934)&x4935)*x4936);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x4961 = 0U;
	uint16_t x4962 = 6U;
	int32_t x4963 = INT32_MAX;
	uint64_t x4964 = UINT64_MAX;
	uint64_t t78 = 727407LLU;

	t78 = (((x4961>>x4962)&x4963)*x4964);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x5041 = 8709800;
	static uint8_t x5042 = 3U;
	static int8_t x5043 = INT8_MIN;
	int32_t x5044 = -1;
	int32_t t79 = -7;

	t79 = (((x5041>>x5042)&x5043)*x5044);

	if (t79 != -1088640) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5117 = UINT8_MAX;
	volatile int32_t x5118 = 30;
	volatile int64_t x5120 = INT64_MAX;

	t80 = (((x5117>>x5118)&x5119)*x5120);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5218 = 19;
	int16_t x5219 = -1;
	volatile int64_t t81 = 550136LL;

	t81 = (((x5217>>x5218)&x5219)*x5220);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x5241 = 1;
	uint64_t x5242 = 9LLU;
	static uint64_t x5244 = 8041530172497573LLU;
	volatile uint64_t t82 = 7550980930515201LLU;

	t82 = (((x5241>>x5242)&x5243)*x5244);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5297 = UINT64_MAX;
	int32_t x5299 = INT32_MIN;
	static volatile uint64_t t83 = 5852854498LLU;

	t83 = (((x5297>>x5298)&x5299)*x5300);

	if (t83 != 15045086057089466368LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5301 = UINT16_MAX;
	uint8_t x5302 = 1U;
	volatile int16_t x5303 = INT16_MAX;
	int64_t x5304 = -4444487433677LL;

	t84 = (((x5301>>x5302)&x5303)*x5304);

	if (t84 != -145632519739294259LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x5345 = UINT8_MAX;
	int8_t x5346 = 11;
	uint32_t x5347 = 178037U;
	uint32_t x5348 = 84387U;
	volatile uint32_t t85 = 249365U;

	t85 = (((x5345>>x5346)&x5347)*x5348);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5405 = 98U;
	volatile uint16_t x5406 = 1U;
	uint32_t x5407 = 2421U;
	int16_t x5408 = -136;
	uint32_t t86 = 48187U;

	t86 = (((x5405>>x5406)&x5407)*x5408);

	if (t86 != 4294960632U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x5409 = 36U;
	uint8_t x5411 = 8U;
	int32_t x5412 = 168;
	static volatile uint32_t t87 = 70U;

	t87 = (((x5409>>x5410)&x5411)*x5412);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5561 = 121U;
	int16_t x5562 = 0;
	static int64_t x5563 = 31550LL;
	volatile int64_t t88 = -49LL;

	t88 = (((x5561>>x5562)&x5563)*x5564);

	if (t88 != 7112LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5605 = UINT64_MAX;
	static int8_t x5606 = 63;
	uint16_t x5607 = UINT16_MAX;
	int8_t x5608 = -15;
	static volatile uint64_t t89 = 1LLU;

	t89 = (((x5605>>x5606)&x5607)*x5608);

	if (t89 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x5610 = 5LL;
	int16_t x5611 = -1;
	static int8_t x5612 = -1;
	volatile uint64_t t90 = 278522047816520971LLU;

	t90 = (((x5609>>x5610)&x5611)*x5612);

	if (t90 != 18446744073709550593LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x5643 = 2871917;
	volatile int32_t t91 = 1184526;

	t91 = (((x5641>>x5642)&x5643)*x5644);

	if (t91 != 15) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5686 = 5U;
	int8_t x5688 = INT8_MAX;
	uint64_t t92 = 6217742829LLU;

	t92 = (((x5685>>x5686)&x5687)*x5688);

	if (t92 != 17870283321406128001LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5697 = 10102U;
	static uint16_t x5698 = 1U;
	static uint64_t x5699 = 187345LLU;
	static uint64_t t93 = 493141LLU;

	t93 = (((x5697>>x5698)&x5699)*x5700);

	if (t93 != 18446744073709546607LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5717 = 42U;
	volatile uint8_t x5719 = 44U;
	uint64_t x5720 = 762776612312292303LLU;
	volatile uint64_t t94 = 66735114LLU;

	t94 = (((x5717>>x5718)&x5719)*x5720);

	if (t94 != 12064320418782140504LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x5761 = 20U;
	int16_t x5762 = 4;
	volatile int8_t x5764 = -6;
	static int32_t t95 = -47;

	t95 = (((x5761>>x5762)&x5763)*x5764);

	if (t95 != -6) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x5790 = 15;
	int16_t x5791 = INT16_MIN;
	uint64_t x5792 = 49998050825925LLU;
	volatile uint64_t t96 = 3332768LLU;

	t96 = (((x5789>>x5790)&x5791)*x5792);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5809 = 1U;
	static int8_t x5812 = INT8_MIN;
	static volatile uint32_t t97 = 473U;

	t97 = (((x5809>>x5810)&x5811)*x5812);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x5909 = UINT64_MAX;
	int32_t x5911 = INT32_MIN;
	int32_t x5912 = -553568573;

	t98 = (((x5909>>x5910)&x5911)*x5912);

	if (t98 != 12385150344672313344LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5973 = 23313U;
	uint32_t x5975 = 147170373U;
	static uint16_t x5976 = UINT16_MAX;
	uint32_t t99 = 1432170801U;

	t99 = (((x5973>>x5974)&x5975)*x5976);

	if (t99 != 327675U) { NG(); } else { ; }
	
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

