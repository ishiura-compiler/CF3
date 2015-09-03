#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = INT16_MAX;
int16_t x100 = 0;
uint32_t x118 = UINT32_MAX;
volatile int64_t x119 = -1630LL;
volatile int16_t x133 = INT16_MAX;
int8_t x136 = 1;
uint8_t x211 = 4U;
uint32_t x223 = UINT32_MAX;
static int8_t x224 = 3;
int8_t x275 = INT8_MIN;
static int16_t x436 = 1;
volatile int64_t t9 = -132614613LL;
uint16_t x451 = UINT16_MAX;
int64_t x463 = -12159829LL;
static int16_t x593 = INT16_MAX;
static volatile uint8_t x754 = UINT8_MAX;
volatile int16_t x902 = 443;
int8_t x947 = -1;
static uint32_t t21 = 183941U;
static uint8_t x1233 = UINT8_MAX;
uint16_t x1234 = UINT16_MAX;
uint8_t x1236 = 0U;
uint8_t x1256 = 1U;
uint64_t t29 = 40044798827831861LLU;
uint32_t x1757 = UINT32_MAX;
static volatile int8_t x1760 = 2;
volatile int32_t t33 = 11413083;
static uint16_t x2017 = 1U;
int8_t x2177 = 0;
uint32_t x2178 = UINT32_MAX;
static uint64_t t37 = 355232LLU;
uint64_t x2210 = 2353200048814913LLU;
volatile int32_t t39 = -3;
volatile uint32_t x2245 = UINT32_MAX;
volatile uint32_t t40 = 149697352U;
static int8_t x2254 = INT8_MAX;
int32_t t41 = -9;
uint8_t x2315 = UINT8_MAX;
static uint64_t x2321 = 2035032966586LLU;
int16_t x2324 = 21;
uint32_t t44 = 329033U;
int64_t x2382 = -1LL;
int32_t x2573 = INT32_MAX;
int8_t x2574 = -1;
int16_t x2609 = INT16_MAX;
int8_t x2612 = 0;
volatile int32_t t47 = -205955303;
int16_t x2718 = INT16_MIN;
int32_t x2813 = INT32_MAX;
int8_t x2816 = 3;
int8_t x2837 = INT8_MAX;
int8_t x2839 = INT8_MIN;
static int64_t x2853 = 27298332526111LL;
int8_t x2856 = 13;
int64_t x2870 = -1LL;
volatile int32_t t54 = 0;
volatile int32_t t56 = -29;
uint32_t x3005 = UINT32_MAX;
static uint8_t x3006 = 28U;
volatile uint32_t x3008 = 1U;
volatile uint64_t t58 = 1LLU;
static uint8_t x3081 = 1U;
static volatile int32_t x3082 = -7339786;
uint64_t x3084 = 4LLU;
uint32_t x3208 = 16U;
int8_t x3322 = 1;
static uint16_t x3341 = UINT16_MAX;
int8_t x3343 = -1;
uint64_t x3344 = 4LLU;
volatile int8_t x3348 = 24;
static int32_t t67 = -455340;
volatile uint32_t x3406 = UINT32_MAX;
static volatile uint8_t x3408 = 3U;
uint64_t t68 = 968599163LLU;
int8_t x3413 = 0;
int32_t t69 = 67;
static int8_t x3495 = -1;
int32_t x3513 = 4;
static int8_t x3516 = 3;
volatile int32_t t71 = -1;
uint8_t x3707 = UINT8_MAX;
uint8_t x3761 = UINT8_MAX;
uint8_t x3764 = 3U;
int16_t x3790 = INT16_MAX;
volatile uint8_t x3792 = 17U;
int32_t t77 = 201501;
uint8_t x3843 = UINT8_MAX;
uint16_t x3868 = 0U;
uint64_t t79 = 593331354630670LLU;
static int64_t x3873 = INT64_MAX;
uint16_t x3874 = UINT16_MAX;
static uint16_t x3876 = 56U;
int16_t x3883 = -1;
uint32_t x4022 = UINT32_MAX;
volatile int64_t t82 = INT64_MAX;
volatile int64_t x4122 = -1LL;
int32_t x4124 = 1;
uint64_t x4237 = 90087099830517LLU;
volatile int16_t x4238 = INT16_MIN;
int16_t x4240 = 3;
int32_t x4286 = INT32_MIN;
int8_t x4288 = 1;
volatile uint64_t t86 = 1065LLU;
volatile uint64_t t87 = 527LLU;
volatile int16_t x4332 = 0;
volatile uint64_t x4520 = 0LLU;
volatile int64_t x4547 = INT64_MAX;
uint32_t x4548 = 4U;
uint16_t x4550 = 968U;
volatile int32_t t93 = 2992;
uint32_t x4556 = 27U;
int64_t x4578 = INT64_MIN;
int16_t x4605 = 0;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int16_t x2 = -338;
	uint8_t x4 = 1U;
	int64_t t0 = -665117579066668135LL;

	t0 = ((x1-(x2<=x3))>>x4);

	if (t0 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x97 = 816991964U;
	int32_t x98 = 26225;
	uint16_t x99 = UINT16_MAX;
	uint32_t t1 = 492U;

	t1 = ((x97-(x98<=x99))>>x100);

	if (t1 != 816991963U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x117 = 1;
	uint32_t x120 = 18U;
	volatile int32_t t2 = 74;

	t2 = ((x117-(x118<=x119))>>x120);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x134 = -69748160271780LL;
	volatile uint8_t x135 = 31U;
	static volatile int32_t t3 = -21036775;

	t3 = ((x133-(x134<=x135))>>x136);

	if (t3 != 16383) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x209 = 2U;
	uint32_t x210 = 187665494U;
	uint32_t x212 = 10U;
	volatile int32_t t4 = 658216;

	t4 = ((x209-(x210<=x211))>>x212);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x221 = 96U;
	uint8_t x222 = UINT8_MAX;
	int32_t t5 = 335519098;

	t5 = ((x221-(x222<=x223))>>x224);

	if (t5 != 11) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x225 = 10;
	int16_t x226 = INT16_MIN;
	int32_t x227 = -1;
	uint16_t x228 = 0U;
	volatile int32_t t6 = -22580;

	t6 = ((x225-(x226<=x227))>>x228);

	if (t6 != 9) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x273 = INT8_MAX;
	static uint64_t x274 = 717199201LLU;
	int8_t x276 = 1;
	static volatile int32_t t7 = 721;

	t7 = ((x273-(x274<=x275))>>x276);

	if (t7 != 63) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x405 = 2098480945LLU;
	uint16_t x406 = UINT16_MAX;
	uint64_t x407 = 3127699108105855968LLU;
	static uint8_t x408 = 28U;
	volatile uint64_t t8 = 277LLU;

	t8 = ((x405-(x406<=x407))>>x408);

	if (t8 != 7LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x433 = 1080560220597785LL;
	uint64_t x434 = UINT64_MAX;
	uint8_t x435 = 6U;

	t9 = ((x433-(x434<=x435))>>x436);

	if (t9 != 540280110298892LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x449 = UINT32_MAX;
	int16_t x450 = 18;
	int8_t x452 = 29;
	uint32_t t10 = 624U;

	t10 = ((x449-(x450<=x451))>>x452);

	if (t10 != 7U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x461 = UINT16_MAX;
	int16_t x462 = 7785;
	static uint16_t x464 = 1U;
	int32_t t11 = -20393724;

	t11 = ((x461-(x462<=x463))>>x464);

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x569 = UINT64_MAX;
	int32_t x570 = -7860938;
	volatile int8_t x571 = INT8_MIN;
	uint16_t x572 = 47U;
	uint64_t t12 = 30193LLU;

	t12 = ((x569-(x570<=x571))>>x572);

	if (t12 != 131071LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x594 = INT8_MIN;
	volatile int16_t x595 = INT16_MIN;
	static uint8_t x596 = 3U;
	static volatile int32_t t13 = -21056;

	t13 = ((x593-(x594<=x595))>>x596);

	if (t13 != 4095) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x673 = 892978470512591339LLU;
	volatile int16_t x674 = INT16_MIN;
	int64_t x675 = -1LL;
	volatile int8_t x676 = 0;
	static volatile uint64_t t14 = 17247448720964020LLU;

	t14 = ((x673-(x674<=x675))>>x676);

	if (t14 != 892978470512591338LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x753 = 503513800261LLU;
	int32_t x755 = INT32_MIN;
	static int16_t x756 = 1;
	uint64_t t15 = 319637LLU;

	t15 = ((x753-(x754<=x755))>>x756);

	if (t15 != 251756900130LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x789 = UINT64_MAX;
	int64_t x790 = -1LL;
	int16_t x791 = -103;
	uint8_t x792 = 0U;
	uint64_t t16 = UINT64_MAX;

	t16 = ((x789-(x790<=x791))>>x792);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x813 = 108U;
	static int8_t x814 = INT8_MAX;
	static int64_t x815 = -1LL;
	int32_t x816 = 0;
	int32_t t17 = -7056829;

	t17 = ((x813-(x814<=x815))>>x816);

	if (t17 != 108) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x821 = 124660379;
	volatile uint8_t x822 = UINT8_MAX;
	int8_t x823 = INT8_MIN;
	int16_t x824 = 9;
	int32_t t18 = 1302;

	t18 = ((x821-(x822<=x823))>>x824);

	if (t18 != 243477) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x901 = 9361529LLU;
	volatile int8_t x903 = 0;
	int16_t x904 = 1;
	uint64_t t19 = 7349623684LLU;

	t19 = ((x901-(x902<=x903))>>x904);

	if (t19 != 4680764LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x929 = 950278U;
	volatile int16_t x930 = INT16_MIN;
	static int64_t x931 = 84702LL;
	uint8_t x932 = 3U;
	volatile uint32_t t20 = 964767371U;

	t20 = ((x929-(x930<=x931))>>x932);

	if (t20 != 118784U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x945 = 3980625U;
	int32_t x946 = -1;
	uint32_t x948 = 7U;

	t21 = ((x945-(x946<=x947))>>x948);

	if (t21 != 31098U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x973 = 58U;
	int64_t x974 = INT64_MAX;
	static uint16_t x975 = 205U;
	volatile int8_t x976 = 1;
	volatile int32_t t22 = 2217;

	t22 = ((x973-(x974<=x975))>>x976);

	if (t22 != 29) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1001 = 661063258LLU;
	volatile uint8_t x1002 = 22U;
	uint16_t x1003 = UINT16_MAX;
	static int8_t x1004 = 43;
	volatile uint64_t t23 = 3436919970LLU;

	t23 = ((x1001-(x1002<=x1003))>>x1004);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1065 = 38;
	int32_t x1066 = -1;
	static int64_t x1067 = 7LL;
	uint8_t x1068 = 0U;
	int32_t t24 = -15;

	t24 = ((x1065-(x1066<=x1067))>>x1068);

	if (t24 != 37) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1235 = INT32_MAX;
	static volatile int32_t t25 = 7187116;

	t25 = ((x1233-(x1234<=x1235))>>x1236);

	if (t25 != 254) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1253 = 6512574U;
	int64_t x1254 = INT64_MIN;
	volatile int16_t x1255 = 218;
	uint32_t t26 = 8902U;

	t26 = ((x1253-(x1254<=x1255))>>x1256);

	if (t26 != 3256286U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1337 = 688192241681606582LLU;
	uint64_t x1338 = 0LLU;
	static int8_t x1339 = INT8_MIN;
	uint8_t x1340 = 14U;
	static uint64_t t27 = 46560502LLU;

	t27 = ((x1337-(x1338<=x1339))>>x1340);

	if (t27 != 42003921001074LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1393 = 1021;
	volatile int32_t x1394 = INT32_MIN;
	int32_t x1395 = INT32_MIN;
	int8_t x1396 = 10;
	int32_t t28 = 105300;

	t28 = ((x1393-(x1394<=x1395))>>x1396);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1709 = UINT64_MAX;
	static int64_t x1710 = INT64_MAX;
	static int64_t x1711 = 361769887329597LL;
	volatile int16_t x1712 = 1;

	t29 = ((x1709-(x1710<=x1711))>>x1712);

	if (t29 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x1758 = -506LL;
	int8_t x1759 = INT8_MAX;
	static uint32_t t30 = 109343921U;

	t30 = ((x1757-(x1758<=x1759))>>x1760);

	if (t30 != 1073741823U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1765 = UINT32_MAX;
	uint8_t x1766 = UINT8_MAX;
	int32_t x1767 = INT32_MAX;
	static uint8_t x1768 = 0U;
	uint32_t t31 = 133126917U;

	t31 = ((x1765-(x1766<=x1767))>>x1768);

	if (t31 != 4294967294U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x1889 = 491U;
	uint8_t x1890 = 1U;
	volatile int64_t x1891 = 88669LL;
	uint8_t x1892 = 5U;
	static int32_t t32 = 926;

	t32 = ((x1889-(x1890<=x1891))>>x1892);

	if (t32 != 15) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1981 = 21565U;
	int8_t x1982 = -5;
	static int32_t x1983 = INT32_MIN;
	uint8_t x1984 = 0U;

	t33 = ((x1981-(x1982<=x1983))>>x1984);

	if (t33 != 21565) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x2018 = 183379;
	volatile int32_t x2019 = 0;
	static uint64_t x2020 = 0LLU;
	volatile int32_t t34 = 11129;

	t34 = ((x2017-(x2018<=x2019))>>x2020);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x2137 = INT32_MAX;
	int32_t x2138 = 392857;
	int16_t x2139 = INT16_MIN;
	volatile int32_t x2140 = 1;
	static int32_t t35 = 293919;

	t35 = ((x2137-(x2138<=x2139))>>x2140);

	if (t35 != 1073741823) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2179 = 460501U;
	int8_t x2180 = 0;
	volatile int32_t t36 = 643;

	t36 = ((x2177-(x2178<=x2179))>>x2180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2205 = 122533655412458130LLU;
	int32_t x2206 = -831;
	static int64_t x2207 = INT64_MAX;
	uint16_t x2208 = 29U;

	t37 = ((x2205-(x2206<=x2207))>>x2208);

	if (t37 != 228236718LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x2209 = UINT16_MAX;
	uint32_t x2211 = UINT32_MAX;
	int8_t x2212 = 8;
	static volatile int32_t t38 = 238040767;

	t38 = ((x2209-(x2210<=x2211))>>x2212);

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2229 = INT32_MAX;
	static int32_t x2230 = -1;
	static uint8_t x2231 = UINT8_MAX;
	uint16_t x2232 = 6U;

	t39 = ((x2229-(x2230<=x2231))>>x2232);

	if (t39 != 33554431) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2246 = UINT8_MAX;
	int32_t x2247 = -1;
	volatile int16_t x2248 = 30;

	t40 = ((x2245-(x2246<=x2247))>>x2248);

	if (t40 != 3U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2253 = UINT8_MAX;
	volatile int8_t x2255 = INT8_MIN;
	volatile uint16_t x2256 = 3U;

	t41 = ((x2253-(x2254<=x2255))>>x2256);

	if (t41 != 31) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2313 = INT64_MAX;
	static uint8_t x2314 = 2U;
	volatile int16_t x2316 = 8;
	int64_t t42 = 807LL;

	t42 = ((x2313-(x2314<=x2315))>>x2316);

	if (t42 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2322 = INT16_MIN;
	uint8_t x2323 = 62U;
	volatile uint64_t t43 = 5594LLU;

	t43 = ((x2321-(x2322<=x2323))>>x2324);

	if (t43 != 970379LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2337 = 0U;
	int8_t x2338 = INT8_MAX;
	int8_t x2339 = -1;
	int8_t x2340 = 31;

	t44 = ((x2337-(x2338<=x2339))>>x2340);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x2381 = 463278LLU;
	uint8_t x2383 = UINT8_MAX;
	uint16_t x2384 = 6U;
	uint64_t t45 = 30252LLU;

	t45 = ((x2381-(x2382<=x2383))>>x2384);

	if (t45 != 7238LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x2575 = 71U;
	int8_t x2576 = 0;
	volatile int32_t t46 = -210834;

	t46 = ((x2573-(x2574<=x2575))>>x2576);

	if (t46 != 2147483646) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x2610 = -1LL;
	volatile uint8_t x2611 = UINT8_MAX;

	t47 = ((x2609-(x2610<=x2611))>>x2612);

	if (t47 != 32766) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x2665 = 918490340673851974LLU;
	uint64_t x2666 = 3923191674699932243LLU;
	volatile int8_t x2667 = 1;
	static int8_t x2668 = 0;
	volatile uint64_t t48 = 995172987739417750LLU;

	t48 = ((x2665-(x2666<=x2667))>>x2668);

	if (t48 != 918490340673851974LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x2717 = INT64_MAX;
	volatile int64_t x2719 = 529400066484899821LL;
	uint32_t x2720 = 1U;
	int64_t t49 = 775184473164590LL;

	t49 = ((x2717-(x2718<=x2719))>>x2720);

	if (t49 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2757 = 20;
	static volatile int32_t x2758 = INT32_MIN;
	uint32_t x2759 = 987641989U;
	volatile uint8_t x2760 = 3U;
	int32_t t50 = 134148200;

	t50 = ((x2757-(x2758<=x2759))>>x2760);

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2814 = INT32_MAX;
	int32_t x2815 = INT32_MIN;
	int32_t t51 = 2549;

	t51 = ((x2813-(x2814<=x2815))>>x2816);

	if (t51 != 268435455) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x2838 = UINT32_MAX;
	int16_t x2840 = 18;
	static volatile int32_t t52 = 12077423;

	t52 = ((x2837-(x2838<=x2839))>>x2840);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2854 = -6993576;
	volatile int64_t x2855 = -20322195848LL;
	volatile int64_t t53 = -46884144515207183LL;

	t53 = ((x2853-(x2854<=x2855))>>x2856);

	if (t53 != 3332315982LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2869 = INT16_MAX;
	static uint16_t x2871 = 51U;
	static int8_t x2872 = 1;

	t54 = ((x2869-(x2870<=x2871))>>x2872);

	if (t54 != 16383) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x2937 = INT32_MAX;
	volatile int32_t x2938 = INT32_MIN;
	volatile int64_t x2939 = INT64_MIN;
	uint32_t x2940 = 13U;
	volatile int32_t t55 = -415947;

	t55 = ((x2937-(x2938<=x2939))>>x2940);

	if (t55 != 262143) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2941 = INT8_MAX;
	uint16_t x2942 = UINT16_MAX;
	uint16_t x2943 = 1957U;
	static int8_t x2944 = 2;

	t56 = ((x2941-(x2942<=x2943))>>x2944);

	if (t56 != 31) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3007 = 28;
	uint32_t t57 = 2717U;

	t57 = ((x3005-(x3006<=x3007))>>x3008);

	if (t57 != 2147483647U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3013 = 2330443LLU;
	volatile int32_t x3014 = INT32_MIN;
	int16_t x3015 = INT16_MIN;
	volatile uint8_t x3016 = 1U;

	t58 = ((x3013-(x3014<=x3015))>>x3016);

	if (t58 != 1165221LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3083 = INT32_MIN;
	int32_t t59 = 10;

	t59 = ((x3081-(x3082<=x3083))>>x3084);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3117 = 3U;
	volatile int64_t x3118 = INT64_MIN;
	uint64_t x3119 = UINT64_MAX;
	int8_t x3120 = 1;
	static volatile int32_t t60 = 7422560;

	t60 = ((x3117-(x3118<=x3119))>>x3120);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x3165 = UINT16_MAX;
	volatile int32_t x3166 = 24172;
	uint8_t x3167 = UINT8_MAX;
	static int64_t x3168 = 0LL;
	int32_t t61 = 767507;

	t61 = ((x3165-(x3166<=x3167))>>x3168);

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3205 = 4U;
	uint32_t x3206 = 99029407U;
	uint64_t x3207 = 508104315LLU;
	static volatile uint32_t t62 = 28398U;

	t62 = ((x3205-(x3206<=x3207))>>x3208);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3285 = 1U;
	uint64_t x3286 = 46696617320599LLU;
	volatile int32_t x3287 = -1;
	static uint8_t x3288 = 10U;
	volatile int32_t t63 = -1;

	t63 = ((x3285-(x3286<=x3287))>>x3288);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3321 = UINT16_MAX;
	int16_t x3323 = 9782;
	int8_t x3324 = 1;
	volatile int32_t t64 = -47350268;

	t64 = ((x3321-(x3322<=x3323))>>x3324);

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3342 = INT8_MIN;
	volatile int32_t t65 = 317686;

	t65 = ((x3341-(x3342<=x3343))>>x3344);

	if (t65 != 4095) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3345 = 6888;
	volatile uint8_t x3346 = 50U;
	int32_t x3347 = INT32_MIN;
	int32_t t66 = -203381;

	t66 = ((x3345-(x3346<=x3347))>>x3348);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3381 = 0;
	int16_t x3382 = INT16_MIN;
	int32_t x3383 = INT32_MIN;
	uint16_t x3384 = 6U;

	t67 = ((x3381-(x3382<=x3383))>>x3384);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3405 = 421519953684634937LLU;
	int16_t x3407 = -1;

	t68 = ((x3405-(x3406<=x3407))>>x3408);

	if (t68 != 52689994210579367LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3414 = UINT64_MAX;
	int8_t x3415 = 1;
	static volatile int16_t x3416 = 12;

	t69 = ((x3413-(x3414<=x3415))>>x3416);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3493 = INT16_MAX;
	int8_t x3494 = -3;
	uint8_t x3496 = 0U;
	static volatile int32_t t70 = -55186131;

	t70 = ((x3493-(x3494<=x3495))>>x3496);

	if (t70 != 32766) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3514 = -1LL;
	int16_t x3515 = INT16_MAX;

	t71 = ((x3513-(x3514<=x3515))>>x3516);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x3561 = INT8_MAX;
	uint64_t x3562 = UINT64_MAX;
	volatile int16_t x3563 = INT16_MIN;
	volatile uint16_t x3564 = 0U;
	int32_t t72 = -23;

	t72 = ((x3561-(x3562<=x3563))>>x3564);

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3705 = 5957312;
	int32_t x3706 = -1;
	static int16_t x3708 = 25;
	static int32_t t73 = 38069318;

	t73 = ((x3705-(x3706<=x3707))>>x3708);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x3725 = 384U;
	int64_t x3726 = INT64_MAX;
	int16_t x3727 = INT16_MAX;
	int8_t x3728 = 14;
	uint32_t t74 = 807725U;

	t74 = ((x3725-(x3726<=x3727))>>x3728);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3762 = INT8_MIN;
	int64_t x3763 = 326468239551785LL;
	int32_t t75 = 283184;

	t75 = ((x3761-(x3762<=x3763))>>x3764);

	if (t75 != 31) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3789 = 14U;
	uint16_t x3791 = 5U;
	static uint32_t t76 = 299U;

	t76 = ((x3789-(x3790<=x3791))>>x3792);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3829 = UINT8_MAX;
	volatile int64_t x3830 = -1LL;
	int64_t x3831 = -272451234690068679LL;
	int8_t x3832 = 7;

	t77 = ((x3829-(x3830<=x3831))>>x3832);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3841 = 106U;
	int8_t x3842 = 28;
	int8_t x3844 = 0;
	static volatile uint32_t t78 = 2049220U;

	t78 = ((x3841-(x3842<=x3843))>>x3844);

	if (t78 != 105U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3865 = UINT64_MAX;
	int64_t x3866 = -7646225141LL;
	static volatile int64_t x3867 = -4719850LL;

	t79 = ((x3865-(x3866<=x3867))>>x3868);

	if (t79 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3875 = -1;
	int64_t t80 = 629887623LL;

	t80 = ((x3873-(x3874<=x3875))>>x3876);

	if (t80 != 127LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3881 = UINT8_MAX;
	static int8_t x3882 = INT8_MAX;
	int8_t x3884 = 23;
	volatile int32_t t81 = -7;

	t81 = ((x3881-(x3882<=x3883))>>x3884);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4021 = INT64_MAX;
	uint8_t x4023 = 0U;
	volatile int8_t x4024 = 0;

	t82 = ((x4021-(x4022<=x4023))>>x4024);

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x4037 = 3375;
	static int8_t x4038 = INT8_MIN;
	volatile uint8_t x4039 = 8U;
	uint8_t x4040 = 5U;
	static int32_t t83 = 419;

	t83 = ((x4037-(x4038<=x4039))>>x4040);

	if (t83 != 105) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4121 = INT8_MAX;
	static int8_t x4123 = 1;
	volatile int32_t t84 = 7119;

	t84 = ((x4121-(x4122<=x4123))>>x4124);

	if (t84 != 63) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4239 = -42;
	uint64_t t85 = 155782430011363638LLU;

	t85 = ((x4237-(x4238<=x4239))>>x4240);

	if (t85 != 11260887478814LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4285 = 4422436275973273840LLU;
	uint64_t x4287 = 382471721680395097LLU;

	t86 = ((x4285-(x4286<=x4287))>>x4288);

	if (t86 != 2211218137986636920LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4301 = UINT64_MAX;
	volatile int16_t x4302 = INT16_MIN;
	int8_t x4303 = -1;
	static uint32_t x4304 = 4U;

	t87 = ((x4301-(x4302<=x4303))>>x4304);

	if (t87 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4329 = 15U;
	static int64_t x4330 = 26602LL;
	uint16_t x4331 = 20U;
	volatile uint32_t t88 = 216U;

	t88 = ((x4329-(x4330<=x4331))>>x4332);

	if (t88 != 15U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4333 = INT8_MAX;
	static uint64_t x4334 = 14931401605176921LLU;
	static int8_t x4335 = INT8_MIN;
	int16_t x4336 = 5;
	int32_t t89 = 680174179;

	t89 = ((x4333-(x4334<=x4335))>>x4336);

	if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4517 = INT16_MAX;
	int32_t x4518 = -1;
	int16_t x4519 = -103;
	volatile int32_t t90 = 6;

	t90 = ((x4517-(x4518<=x4519))>>x4520);

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4533 = 7U;
	static int8_t x4534 = INT8_MIN;
	int64_t x4535 = 3631207302LL;
	uint8_t x4536 = 3U;
	int32_t t91 = 466957;

	t91 = ((x4533-(x4534<=x4535))>>x4536);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x4545 = 1;
	static volatile uint32_t x4546 = 91U;
	volatile int32_t t92 = 4747;

	t92 = ((x4545-(x4546<=x4547))>>x4548);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4549 = 0;
	int8_t x4551 = INT8_MAX;
	static uint32_t x4552 = 13U;

	t93 = ((x4549-(x4550<=x4551))>>x4552);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4553 = INT32_MAX;
	volatile uint32_t x4554 = UINT32_MAX;
	volatile int8_t x4555 = INT8_MAX;
	int32_t t94 = -9094;

	t94 = ((x4553-(x4554<=x4555))>>x4556);

	if (t94 != 15) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4577 = UINT8_MAX;
	int32_t x4579 = -1;
	int16_t x4580 = 0;
	static volatile int32_t t95 = -147977;

	t95 = ((x4577-(x4578<=x4579))>>x4580);

	if (t95 != 254) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4581 = UINT64_MAX;
	static int8_t x4582 = -1;
	int8_t x4583 = -1;
	uint8_t x4584 = 2U;
	uint64_t t96 = 7813416233894LLU;

	t96 = ((x4581-(x4582<=x4583))>>x4584);

	if (t96 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x4606 = 30356;
	int64_t x4607 = INT64_MIN;
	int8_t x4608 = 1;
	static int32_t t97 = 6884801;

	t97 = ((x4605-(x4606<=x4607))>>x4608);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x4625 = INT64_MAX;
	static int8_t x4626 = -1;
	int32_t x4627 = INT32_MAX;
	volatile uint8_t x4628 = 0U;
	int64_t t98 = 1066707936050424796LL;

	t98 = ((x4625-(x4626<=x4627))>>x4628);

	if (t98 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4653 = 42398253658904463LL;
	uint64_t x4654 = 1833483LLU;
	uint32_t x4655 = 1U;
	int16_t x4656 = 1;
	volatile int64_t t99 = 1560239LL;

	t99 = ((x4653-(x4654<=x4655))>>x4656);

	if (t99 != 21199126829452231LL) { NG(); } else { ; }
	
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

