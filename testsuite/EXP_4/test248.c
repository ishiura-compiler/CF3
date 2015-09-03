#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x121 = INT8_MIN;
uint8_t x122 = 3U;
uint8_t x123 = 7U;
volatile int32_t x133 = -3;
uint64_t x134 = UINT64_MAX;
int32_t x202 = 453331;
static uint64_t t2 = 62394584842029LLU;
volatile int16_t x381 = -1;
int16_t x382 = INT16_MAX;
int32_t x544 = -1;
uint16_t x563 = 22U;
uint8_t x742 = 0U;
uint64_t x744 = UINT64_MAX;
uint64_t x1012 = UINT64_MAX;
volatile int32_t t8 = 949976006;
uint32_t x1029 = 925353U;
static volatile int16_t x1031 = -1;
uint32_t x1065 = 4933163U;
static uint32_t x1153 = UINT32_MAX;
volatile int32_t x1154 = 3;
int8_t x1155 = 0;
int32_t x1203 = -1;
static volatile int32_t t13 = -15;
static volatile uint8_t x1285 = UINT8_MAX;
int16_t x1401 = INT16_MAX;
int32_t t15 = 111;
static uint64_t t16 = 22050737LLU;
volatile int32_t t17 = -521066;
int32_t x1858 = 123;
volatile int64_t t19 = -7172246512042711LL;
volatile uint16_t x1957 = 1U;
int8_t x2010 = INT8_MAX;
volatile int8_t x2356 = INT8_MIN;
uint8_t x2609 = UINT8_MAX;
static int8_t x2611 = 1;
int16_t x2697 = -1;
int16_t x2699 = INT16_MIN;
volatile int64_t x2756 = -1LL;
static int64_t t34 = -3457340228LL;
int16_t x2819 = -1;
uint8_t x2887 = 0U;
int8_t x2888 = -1;
static int32_t x2943 = 3;
uint64_t x3181 = 61776445LLU;
uint64_t x3182 = 561LLU;
int32_t t40 = -1;
static int32_t x3401 = -420;
uint64_t t43 = 4692LLU;
static int32_t x3601 = 1430;
int64_t t44 = -17673LL;
uint32_t t45 = 188504617U;
static volatile uint64_t x3774 = 2659587778062988547LLU;
uint64_t x3775 = UINT64_MAX;
volatile uint64_t t46 = 2007625702179626968LLU;
volatile int32_t x3880 = -1;
uint8_t x3900 = 3U;
static volatile int32_t x3901 = INT32_MIN;
int64_t x3979 = -1LL;
int32_t t51 = 30;
volatile int64_t t53 = -749528448788448484LL;
uint16_t x4199 = 27U;
volatile int32_t t54 = 3;
int16_t x4775 = INT16_MAX;
static volatile int64_t t58 = -139620552718482LL;
volatile uint64_t t59 = 103828666251213LLU;
uint32_t x4958 = 102857U;
int16_t x4959 = 0;
volatile uint32_t x4960 = UINT32_MAX;
int32_t t61 = INT32_MAX;
uint32_t x5478 = 2U;
uint32_t x5823 = 15U;
int8_t x5824 = -1;
static int64_t x5836 = -1LL;
uint64_t x5941 = 4048170025818LLU;
uint64_t t70 = 1587LLU;
uint32_t x6168 = UINT32_MAX;
volatile uint32_t t72 = 590U;
volatile uint64_t x6486 = UINT64_MAX;
uint8_t x6487 = 42U;
int64_t x6575 = INT64_MIN;
uint32_t t75 = 14819033U;
int8_t x6603 = -1;
int16_t x6604 = -1;
int8_t x6803 = 1;
int32_t x6808 = INT32_MIN;
int64_t x6955 = INT64_MAX;
int16_t x7196 = INT16_MIN;
volatile int32_t t82 = -1;
int16_t x7378 = INT16_MAX;
static int8_t x7420 = -1;
uint32_t x7450 = UINT32_MAX;
int16_t x7451 = -1;
uint32_t t86 = 9945U;
volatile int16_t x7500 = -1;
volatile int16_t x7712 = -1;
volatile int32_t t88 = -104833;
int16_t x7882 = 8;
uint8_t x7883 = 25U;
static uint16_t x7970 = 27067U;
volatile int16_t x8027 = -1;
volatile int16_t x8057 = -1;
uint32_t x8059 = 29U;
volatile int16_t x8065 = INT16_MIN;
int32_t t93 = -23;
static volatile int16_t x8125 = INT16_MIN;
static uint64_t t95 = 327300898594LLU;
volatile int64_t t96 = 829872569481LL;
int8_t x8267 = -1;
int64_t x8355 = INT64_MIN;
static volatile int32_t t99 = -231;


void f0(void) {
	uint32_t x124 = UINT32_MAX;
	volatile int32_t t0 = 10868461;

	t0 = (x121+(x122>>(x123-x124)));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x135 = INT32_MIN;
	int32_t x136 = INT32_MIN;
	uint64_t t1 = 1796760299LLU;

	t1 = (x133+(x134>>(x135-x136)));

	if (t1 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x201 = UINT64_MAX;
	static uint16_t x203 = 14U;
	static volatile int64_t x204 = -1LL;

	t2 = (x201+(x202>>(x203-x204)));

	if (t2 != 12LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x361 = -7;
	volatile int64_t x362 = INT64_MAX;
	int32_t x363 = INT32_MIN;
	static int32_t x364 = INT32_MIN;
	int64_t t3 = -1LL;

	t3 = (x361+(x362>>(x363-x364)));

	if (t3 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x383 = -1;
	int8_t x384 = -18;
	static volatile int32_t t4 = 419155558;

	t4 = (x381+(x382>>(x383-x384)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x541 = INT8_MAX;
	uint8_t x542 = UINT8_MAX;
	int8_t x543 = 2;
	volatile int32_t t5 = -3717;

	t5 = (x541+(x542>>(x543-x544)));

	if (t5 != 158) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x561 = INT32_MIN;
	int32_t x562 = INT32_MAX;
	uint8_t x564 = 1U;
	int32_t t6 = -1948;

	t6 = (x561+(x562>>(x563-x564)));

	if (t6 != -2147482625) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x741 = INT16_MAX;
	volatile uint8_t x743 = 3U;
	static int32_t t7 = -51128871;

	t7 = (x741+(x742>>(x743-x744)));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x1009 = INT16_MAX;
	static uint16_t x1010 = 11572U;
	int8_t x1011 = -1;

	t8 = (x1009+(x1010>>(x1011-x1012)));

	if (t8 != 44339) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x1030 = 1030742U;
	int8_t x1032 = -11;
	static uint32_t t9 = 3293U;

	t9 = (x1029+(x1030>>(x1031-x1032)));

	if (t9 != 926359U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x1066 = 1120;
	int8_t x1067 = 19;
	static int32_t x1068 = -3;
	uint32_t t10 = 27562U;

	t10 = (x1065+(x1066>>(x1067-x1068)));

	if (t10 != 4933163U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x1156 = -1;
	static uint32_t t11 = 3U;

	t11 = (x1153+(x1154>>(x1155-x1156)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x1201 = -3;
	int32_t x1202 = 218289724;
	int32_t x1204 = -1;
	static int32_t t12 = 14;

	t12 = (x1201+(x1202>>(x1203-x1204)));

	if (t12 != 218289721) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x1229 = -14;
	uint16_t x1230 = 3673U;
	int8_t x1231 = 0;
	static uint32_t x1232 = UINT32_MAX;

	t13 = (x1229+(x1230>>(x1231-x1232)));

	if (t13 != 1822) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x1286 = UINT64_MAX;
	static int32_t x1287 = INT32_MIN;
	int32_t x1288 = INT32_MIN;
	uint64_t t14 = 1969133929LLU;

	t14 = (x1285+(x1286>>(x1287-x1288)));

	if (t14 != 254LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1402 = 4;
	uint8_t x1403 = 1U;
	int64_t x1404 = -1LL;

	t15 = (x1401+(x1402>>(x1403-x1404)));

	if (t15 != 32768) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1653 = INT64_MIN;
	uint64_t x1654 = 868329261919457411LLU;
	int32_t x1655 = INT32_MIN;
	static int32_t x1656 = INT32_MIN;

	t16 = (x1653+(x1654>>(x1655-x1656)));

	if (t16 != 10091701298774233219LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1681 = -6;
	uint16_t x1682 = UINT16_MAX;
	static volatile int64_t x1683 = INT64_MIN;
	volatile int64_t x1684 = INT64_MIN;

	t17 = (x1681+(x1682>>(x1683-x1684)));

	if (t17 != 65529) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1857 = 9U;
	int32_t x1859 = -1;
	int8_t x1860 = -1;
	int32_t t18 = -3915303;

	t18 = (x1857+(x1858>>(x1859-x1860)));

	if (t18 != 132) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1893 = INT8_MIN;
	int64_t x1894 = INT64_MAX;
	static int64_t x1895 = INT64_MIN;
	static int64_t x1896 = INT64_MIN;

	t19 = (x1893+(x1894>>(x1895-x1896)));

	if (t19 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1941 = 121U;
	uint64_t x1942 = 66093946LLU;
	int16_t x1943 = INT16_MIN;
	int16_t x1944 = INT16_MIN;
	uint64_t t20 = 1439LLU;

	t20 = (x1941+(x1942>>(x1943-x1944)));

	if (t20 != 66094067LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x1958 = 14998U;
	int32_t x1959 = 14;
	static uint8_t x1960 = 4U;
	volatile int32_t t21 = -10;

	t21 = (x1957+(x1958>>(x1959-x1960)));

	if (t21 != 15) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x2009 = INT16_MAX;
	int64_t x2011 = INT64_MIN;
	int64_t x2012 = INT64_MIN;
	volatile int32_t t22 = 846;

	t22 = (x2009+(x2010>>(x2011-x2012)));

	if (t22 != 32894) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x2013 = 161;
	int8_t x2014 = 40;
	uint32_t x2015 = UINT32_MAX;
	int16_t x2016 = -1;
	int32_t t23 = 28218520;

	t23 = (x2013+(x2014>>(x2015-x2016)));

	if (t23 != 201) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x2049 = 3U;
	uint16_t x2050 = 54U;
	uint32_t x2051 = UINT32_MAX;
	static volatile int8_t x2052 = -23;
	int32_t t24 = -1;

	t24 = (x2049+(x2050>>(x2051-x2052)));

	if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x2177 = UINT16_MAX;
	int32_t x2178 = 1882681;
	int32_t x2179 = -1;
	static int32_t x2180 = -1;
	static int32_t t25 = 13085194;

	t25 = (x2177+(x2178>>(x2179-x2180)));

	if (t25 != 1948216) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x2229 = INT32_MIN;
	uint32_t x2230 = UINT32_MAX;
	int32_t x2231 = -1;
	int32_t x2232 = -1;
	volatile uint32_t t26 = 99806U;

	t26 = (x2229+(x2230>>(x2231-x2232)));

	if (t26 != 2147483647U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x2305 = -1581424020LL;
	volatile uint8_t x2306 = UINT8_MAX;
	int32_t x2307 = -1;
	int64_t x2308 = -1LL;
	static volatile int64_t t27 = 751LL;

	t27 = (x2305+(x2306>>(x2307-x2308)));

	if (t27 != -1581423765LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x2353 = -3249;
	int16_t x2354 = INT16_MAX;
	int8_t x2355 = INT8_MIN;
	int32_t t28 = 7539526;

	t28 = (x2353+(x2354>>(x2355-x2356)));

	if (t28 != 29518) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x2585 = -5LL;
	volatile int32_t x2586 = INT32_MAX;
	int32_t x2587 = INT32_MIN;
	int32_t x2588 = INT32_MIN;
	int64_t t29 = -2273159938269LL;

	t29 = (x2585+(x2586>>(x2587-x2588)));

	if (t29 != 2147483642LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2610 = INT64_MAX;
	uint32_t x2612 = UINT32_MAX;
	volatile int64_t t30 = -4551352109206LL;

	t30 = (x2609+(x2610>>(x2611-x2612)));

	if (t30 != 2305843009213694206LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2645 = -11;
	uint64_t x2646 = 731LLU;
	int8_t x2647 = -1;
	int16_t x2648 = -1;
	volatile uint64_t t31 = 1978941100333376309LLU;

	t31 = (x2645+(x2646>>(x2647-x2648)));

	if (t31 != 720LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x2677 = INT16_MAX;
	uint64_t x2678 = 13628939798LLU;
	int16_t x2679 = INT16_MIN;
	int16_t x2680 = INT16_MIN;
	volatile uint64_t t32 = 1146659398194372015LLU;

	t32 = (x2677+(x2678>>(x2679-x2680)));

	if (t32 != 13628972565LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2698 = 136U;
	volatile int16_t x2700 = INT16_MIN;
	int32_t t33 = 97831728;

	t33 = (x2697+(x2698>>(x2699-x2700)));

	if (t33 != 135) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2753 = 1LL;
	volatile int8_t x2754 = 0;
	volatile uint16_t x2755 = 0U;

	t34 = (x2753+(x2754>>(x2755-x2756)));

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x2797 = -1;
	volatile uint8_t x2798 = UINT8_MAX;
	uint8_t x2799 = 5U;
	static int32_t x2800 = -1;
	volatile int32_t t35 = -63962710;

	t35 = (x2797+(x2798>>(x2799-x2800)));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2817 = 2269;
	volatile uint32_t x2818 = 13623U;
	uint32_t x2820 = UINT32_MAX;
	uint32_t t36 = 12U;

	t36 = (x2817+(x2818>>(x2819-x2820)));

	if (t36 != 15892U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x2885 = 1U;
	int8_t x2886 = 26;
	volatile int32_t t37 = -1;

	t37 = (x2885+(x2886>>(x2887-x2888)));

	if (t37 != 14) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2941 = UINT64_MAX;
	uint64_t x2942 = 192304908365LLU;
	static volatile uint8_t x2944 = 1U;
	uint64_t t38 = 36699080LLU;

	t38 = (x2941+(x2942>>(x2943-x2944)));

	if (t38 != 48076227090LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x3183 = 0;
	int32_t x3184 = -1;
	uint64_t t39 = 4LLU;

	t39 = (x3181+(x3182>>(x3183-x3184)));

	if (t39 != 61776725LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x3189 = 12U;
	int32_t x3190 = 0;
	int16_t x3191 = INT16_MAX;
	int16_t x3192 = INT16_MAX;

	t40 = (x3189+(x3190>>(x3191-x3192)));

	if (t40 != 12) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x3385 = 0;
	uint16_t x3386 = UINT16_MAX;
	int64_t x3387 = INT64_MIN;
	int64_t x3388 = INT64_MIN;
	volatile int32_t t41 = 58056317;

	t41 = (x3385+(x3386>>(x3387-x3388)));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x3402 = INT16_MAX;
	uint8_t x3403 = 1U;
	int64_t x3404 = -1LL;
	int32_t t42 = -459765;

	t42 = (x3401+(x3402>>(x3403-x3404)));

	if (t42 != 7771) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x3421 = -2;
	static uint64_t x3422 = UINT64_MAX;
	int64_t x3423 = 10LL;
	static int8_t x3424 = -1;

	t43 = (x3421+(x3422>>(x3423-x3424)));

	if (t43 != 9007199254740989LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x3602 = 4LL;
	static uint8_t x3603 = 1U;
	int16_t x3604 = -1;

	t44 = (x3601+(x3602>>(x3603-x3604)));

	if (t44 != 1431LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3625 = -1;
	static uint32_t x3626 = 121971U;
	uint8_t x3627 = 0U;
	static int16_t x3628 = -15;

	t45 = (x3625+(x3626>>(x3627-x3628)));

	if (t45 != 2U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x3773 = 52U;
	int8_t x3776 = -8;

	t46 = (x3773+(x3774>>(x3775-x3776)));

	if (t46 != 20778029516117150LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x3877 = INT64_MIN;
	uint32_t x3878 = 2U;
	static volatile uint32_t x3879 = UINT32_MAX;
	int64_t t47 = 71485588356720762LL;

	t47 = (x3877+(x3878>>(x3879-x3880)));

	if (t47 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x3897 = 17U;
	int8_t x3898 = INT8_MAX;
	int8_t x3899 = 22;
	int32_t t48 = 1;

	t48 = (x3897+(x3898>>(x3899-x3900)));

	if (t48 != 17) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x3902 = 1791897U;
	uint32_t x3903 = 7U;
	volatile int8_t x3904 = -2;
	uint32_t t49 = 111897U;

	t49 = (x3901+(x3902>>(x3903-x3904)));

	if (t49 != 2147487147U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x3977 = 818U;
	int16_t x3978 = INT16_MAX;
	int8_t x3980 = -20;
	volatile uint32_t t50 = 79242U;

	t50 = (x3977+(x3978>>(x3979-x3980)));

	if (t50 != 818U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x4097 = 187U;
	static uint16_t x4098 = 44U;
	uint16_t x4099 = 2U;
	int8_t x4100 = -6;

	t51 = (x4097+(x4098>>(x4099-x4100)));

	if (t51 != 187) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x4157 = 21U;
	uint32_t x4158 = 6262U;
	int16_t x4159 = 1;
	static int64_t x4160 = -1LL;
	volatile uint32_t t52 = 82U;

	t52 = (x4157+(x4158>>(x4159-x4160)));

	if (t52 != 1586U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x4181 = INT64_MIN;
	uint32_t x4182 = 497922431U;
	volatile uint16_t x4183 = UINT16_MAX;
	uint16_t x4184 = UINT16_MAX;

	t53 = (x4181+(x4182>>(x4183-x4184)));

	if (t53 != -9223372036356853377LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x4197 = -1;
	int16_t x4198 = INT16_MAX;
	int8_t x4200 = -1;

	t54 = (x4197+(x4198>>(x4199-x4200)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x4417 = -1;
	static volatile int8_t x4418 = 2;
	int8_t x4419 = INT8_MIN;
	volatile int8_t x4420 = INT8_MIN;
	volatile int32_t t55 = 6;

	t55 = (x4417+(x4418>>(x4419-x4420)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x4617 = -1;
	uint32_t x4618 = UINT32_MAX;
	int64_t x4619 = -1LL;
	static int32_t x4620 = -1;
	static uint32_t t56 = 128846U;

	t56 = (x4617+(x4618>>(x4619-x4620)));

	if (t56 != 4294967294U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x4621 = UINT16_MAX;
	static volatile uint16_t x4622 = 56U;
	int16_t x4623 = 2;
	static uint32_t x4624 = UINT32_MAX;
	volatile int32_t t57 = -2;

	t57 = (x4621+(x4622>>(x4623-x4624)));

	if (t57 != 65542) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x4773 = INT32_MIN;
	int64_t x4774 = INT64_MAX;
	int16_t x4776 = INT16_MAX;

	t58 = (x4773+(x4774>>(x4775-x4776)));

	if (t58 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x4881 = 998883463836466LLU;
	volatile int32_t x4882 = 7005712;
	static int8_t x4883 = 13;
	int8_t x4884 = -8;

	t59 = (x4881+(x4882>>(x4883-x4884)));

	if (t59 != 998883463836469LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x4957 = 15U;
	static uint32_t t60 = 5555038U;

	t60 = (x4957+(x4958>>(x4959-x4960)));

	if (t60 != 51443U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x5069 = INT32_MAX;
	uint16_t x5070 = 0U;
	uint8_t x5071 = UINT8_MAX;
	uint8_t x5072 = UINT8_MAX;

	t61 = (x5069+(x5070>>(x5071-x5072)));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x5097 = -21;
	uint32_t x5098 = 3006302U;
	volatile int8_t x5099 = -1;
	int16_t x5100 = -1;
	uint32_t t62 = 1202334759U;

	t62 = (x5097+(x5098>>(x5099-x5100)));

	if (t62 != 3006281U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x5285 = 1279U;
	uint8_t x5286 = 0U;
	uint16_t x5287 = 10U;
	int8_t x5288 = 2;
	int32_t t63 = -328262636;

	t63 = (x5285+(x5286>>(x5287-x5288)));

	if (t63 != 1279) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x5373 = 445022LL;
	int8_t x5374 = 7;
	int8_t x5375 = -1;
	int32_t x5376 = -1;
	int64_t t64 = -49239271204256488LL;

	t64 = (x5373+(x5374>>(x5375-x5376)));

	if (t64 != 445029LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x5477 = -1;
	uint8_t x5479 = 9U;
	volatile int8_t x5480 = -21;
	uint32_t t65 = UINT32_MAX;

	t65 = (x5477+(x5478>>(x5479-x5480)));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x5501 = -5;
	int8_t x5502 = 1;
	int8_t x5503 = 12;
	int64_t x5504 = -13LL;
	int32_t t66 = 655;

	t66 = (x5501+(x5502>>(x5503-x5504)));

	if (t66 != -5) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x5621 = 1U;
	int8_t x5622 = INT8_MAX;
	static uint8_t x5623 = 1U;
	uint32_t x5624 = UINT32_MAX;
	int32_t t67 = 6111451;

	t67 = (x5621+(x5622>>(x5623-x5624)));

	if (t67 != 32) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x5821 = 0U;
	uint64_t x5822 = 6693LLU;
	volatile uint64_t t68 = 83406LLU;

	t68 = (x5821+(x5822>>(x5823-x5824)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x5833 = 1U;
	int64_t x5834 = 15826998545655467LL;
	int8_t x5835 = 0;
	volatile int64_t t69 = -3672LL;

	t69 = (x5833+(x5834>>(x5835-x5836)));

	if (t69 != 7913499272827734LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x5942 = UINT32_MAX;
	int64_t x5943 = 21LL;
	int64_t x5944 = -1LL;

	t70 = (x5941+(x5942>>(x5943-x5944)));

	if (t70 != 4048170026841LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x6021 = UINT16_MAX;
	uint8_t x6022 = UINT8_MAX;
	int16_t x6023 = INT16_MAX;
	int16_t x6024 = INT16_MAX;
	volatile int32_t t71 = 31892;

	t71 = (x6021+(x6022>>(x6023-x6024)));

	if (t71 != 65790) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x6165 = 7499U;
	int8_t x6166 = INT8_MAX;
	volatile int16_t x6167 = -1;

	t72 = (x6165+(x6166>>(x6167-x6168)));

	if (t72 != 7626U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x6197 = UINT16_MAX;
	uint8_t x6198 = UINT8_MAX;
	uint8_t x6199 = 2U;
	uint32_t x6200 = UINT32_MAX;
	int32_t t73 = -64215;

	t73 = (x6197+(x6198>>(x6199-x6200)));

	if (t73 != 65566) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x6485 = UINT32_MAX;
	int16_t x6488 = -1;
	static uint64_t t74 = 795318888821532LLU;

	t74 = (x6485+(x6486>>(x6487-x6488)));

	if (t74 != 4297064446LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x6573 = INT8_MIN;
	static uint32_t x6574 = UINT32_MAX;
	static int64_t x6576 = INT64_MIN;

	t75 = (x6573+(x6574>>(x6575-x6576)));

	if (t75 != 4294967167U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x6601 = 45784LLU;
	int16_t x6602 = INT16_MAX;
	static volatile uint64_t t76 = 3707960082652LLU;

	t76 = (x6601+(x6602>>(x6603-x6604)));

	if (t76 != 78551LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x6801 = -1;
	static int64_t x6802 = INT64_MAX;
	uint16_t x6804 = 1U;
	int64_t t77 = 3879617888247975831LL;

	t77 = (x6801+(x6802>>(x6803-x6804)));

	if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x6805 = -39809116;
	int8_t x6806 = INT8_MAX;
	int32_t x6807 = INT32_MIN;
	int32_t t78 = 42328934;

	t78 = (x6805+(x6806>>(x6807-x6808)));

	if (t78 != -39808989) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x6813 = 5LLU;
	volatile int64_t x6814 = 213892332LL;
	int16_t x6815 = 6;
	uint32_t x6816 = UINT32_MAX;
	volatile uint64_t t79 = 1748588096899LLU;

	t79 = (x6813+(x6814>>(x6815-x6816)));

	if (t79 != 1671038LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x6889 = INT16_MAX;
	static volatile int32_t x6890 = INT32_MAX;
	static uint8_t x6891 = 1U;
	int8_t x6892 = -5;
	int32_t t80 = -409;

	t80 = (x6889+(x6890>>(x6891-x6892)));

	if (t80 != 33587198) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x6953 = 249U;
	volatile int32_t x6954 = INT32_MAX;
	int64_t x6956 = INT64_MAX;
	volatile uint32_t t81 = 362678346U;

	t81 = (x6953+(x6954>>(x6955-x6956)));

	if (t81 != 2147483896U) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x7193 = INT8_MIN;
	volatile int32_t x7194 = 2506;
	int16_t x7195 = INT16_MIN;

	t82 = (x7193+(x7194>>(x7195-x7196)));

	if (t82 != 2378) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x7377 = -1;
	static uint16_t x7379 = 0U;
	static int64_t x7380 = -1LL;
	volatile int32_t t83 = 5;

	t83 = (x7377+(x7378>>(x7379-x7380)));

	if (t83 != 16382) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x7417 = INT8_MIN;
	int16_t x7418 = INT16_MAX;
	int32_t x7419 = -1;
	volatile int32_t t84 = 799;

	t84 = (x7417+(x7418>>(x7419-x7420)));

	if (t84 != 32639) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x7433 = 0;
	int16_t x7434 = 2606;
	int8_t x7435 = 2;
	int8_t x7436 = 0;
	int32_t t85 = 281;

	t85 = (x7433+(x7434>>(x7435-x7436)));

	if (t85 != 651) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x7449 = -1;
	int32_t x7452 = -1;

	t86 = (x7449+(x7450>>(x7451-x7452)));

	if (t86 != 4294967294U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x7497 = UINT16_MAX;
	uint32_t x7498 = UINT32_MAX;
	static int16_t x7499 = -1;
	volatile uint32_t t87 = 15531826U;

	t87 = (x7497+(x7498>>(x7499-x7500)));

	if (t87 != 65534U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x7709 = -1;
	int8_t x7710 = 1;
	volatile int8_t x7711 = 1;

	t88 = (x7709+(x7710>>(x7711-x7712)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x7881 = INT8_MAX;
	int8_t x7884 = 1;
	int32_t t89 = 693528286;

	t89 = (x7881+(x7882>>(x7883-x7884)));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x7969 = 214361693939LLU;
	volatile uint16_t x7971 = 44U;
	static int8_t x7972 = 40;
	volatile uint64_t t90 = 497346938848983593LLU;

	t90 = (x7969+(x7970>>(x7971-x7972)));

	if (t90 != 214361695630LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x8025 = UINT16_MAX;
	uint16_t x8026 = 1007U;
	static int8_t x8028 = -1;
	volatile int32_t t91 = -864;

	t91 = (x8025+(x8026>>(x8027-x8028)));

	if (t91 != 66542) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x8058 = 6841U;
	uint8_t x8060 = 4U;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = (x8057+(x8058>>(x8059-x8060)));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x8066 = INT8_MAX;
	uint32_t x8067 = 1U;
	uint32_t x8068 = UINT32_MAX;

	t93 = (x8065+(x8066>>(x8067-x8068)));

	if (t93 != -32737) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x8126 = 1539890LL;
	int16_t x8127 = -1;
	volatile int16_t x8128 = -1;
	volatile int64_t t94 = 182440LL;

	t94 = (x8125+(x8126>>(x8127-x8128)));

	if (t94 != 1507122LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x8129 = UINT32_MAX;
	uint64_t x8130 = 8327704269883583633LLU;
	int16_t x8131 = INT16_MIN;
	int16_t x8132 = INT16_MIN;

	t95 = (x8129+(x8130>>(x8131-x8132)));

	if (t95 != 8327704274178550928LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x8221 = INT16_MIN;
	int64_t x8222 = 207LL;
	uint16_t x8223 = 6U;
	static volatile uint64_t x8224 = UINT64_MAX;

	t96 = (x8221+(x8222>>(x8223-x8224)));

	if (t96 != -32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x8237 = 7U;
	volatile uint8_t x8238 = 33U;
	volatile int32_t x8239 = INT32_MIN;
	int32_t x8240 = INT32_MIN;
	volatile int32_t t97 = -2;

	t97 = (x8237+(x8238>>(x8239-x8240)));

	if (t97 != 40) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x8265 = 1LLU;
	uint32_t x8266 = 21U;
	uint32_t x8268 = UINT32_MAX;
	uint64_t t98 = 351967750689LLU;

	t98 = (x8265+(x8266>>(x8267-x8268)));

	if (t98 != 22LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x8353 = UINT16_MAX;
	volatile uint8_t x8354 = UINT8_MAX;
	volatile int64_t x8356 = INT64_MIN;

	t99 = (x8353+(x8354>>(x8355-x8356)));

	if (t99 != 65790) { NG(); } else { ; }
	
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

