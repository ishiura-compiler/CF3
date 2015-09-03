#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x155 = 0;
int32_t x259 = 7;
static uint16_t x339 = 0U;
volatile uint32_t x364 = 8696767U;
volatile uint32_t x661 = UINT32_MAX;
uint64_t t5 = 801664489LLU;
uint16_t x685 = 35U;
volatile uint32_t x686 = UINT32_MAX;
uint64_t x733 = 3979069525446357971LLU;
static volatile int8_t x797 = INT8_MIN;
volatile uint64_t t9 = 1353145322467028LLU;
static uint8_t x833 = 1U;
volatile uint8_t x835 = 7U;
static int32_t x836 = INT32_MAX;
static int16_t x865 = -1;
static uint8_t x867 = 1U;
int32_t t11 = 61;
static int16_t x888 = INT16_MAX;
int32_t t12 = 7282;
uint16_t x889 = 5451U;
volatile int32_t x890 = 2802;
uint8_t x1098 = 115U;
int16_t x1192 = INT16_MIN;
static uint16_t x1461 = UINT16_MAX;
uint32_t x1484 = 3203811U;
static volatile int16_t x1593 = INT16_MAX;
int8_t x1596 = INT8_MAX;
int32_t t23 = -23;
int16_t x1725 = INT16_MIN;
uint16_t x1727 = 55U;
int16_t x1844 = -1;
static uint64_t x1889 = 189090650419725LLU;
static uint64_t t26 = 471317LLU;
static uint16_t x2314 = 151U;
uint8_t x2602 = UINT8_MAX;
volatile int64_t t32 = 633166417000175LL;
uint32_t x2717 = 102985U;
uint32_t x2720 = UINT32_MAX;
uint16_t x3100 = 2U;
uint32_t x3103 = 0U;
int32_t x3104 = -1;
uint32_t x3232 = UINT32_MAX;
uint32_t t42 = 63912U;
int32_t x3289 = -1;
int8_t x3291 = 20;
int32_t x3292 = INT32_MIN;
volatile uint64_t t43 = 3912489629411LLU;
int64_t x3379 = 0LL;
uint64_t x3510 = UINT64_MAX;
volatile int8_t x3673 = INT8_MAX;
uint8_t x3674 = 119U;
volatile uint64_t x3733 = 31541153LLU;
uint16_t x3932 = UINT16_MAX;
static uint8_t x4050 = 1U;
uint16_t x4051 = 0U;
static int32_t t52 = 276170457;
uint64_t x4149 = UINT64_MAX;
volatile int8_t x4152 = -1;
volatile int64_t x4369 = 22007708223250LL;
int8_t x4416 = INT8_MAX;
int16_t x4554 = 546;
int16_t x4555 = 0;
uint16_t x4604 = UINT16_MAX;
int16_t x4613 = -10;
volatile int32_t t61 = -1;
int64_t t62 = 50824191242790129LL;
static uint8_t x4938 = UINT8_MAX;
int16_t x5157 = -6099;
uint32_t x5158 = 28782U;
int32_t x5273 = 24313;
uint64_t x5530 = 56175131856667LLU;
uint8_t x5601 = UINT8_MAX;
volatile uint8_t x5602 = 0U;
uint32_t x5641 = 406U;
static volatile uint64_t x5718 = UINT64_MAX;
uint64_t t71 = 274192174334LLU;
volatile uint64_t t73 = 8136438LLU;
static int16_t x5936 = INT16_MIN;
volatile int64_t x6209 = -1LL;
uint8_t x6211 = 31U;
uint64_t x6218 = 295LLU;
static int64_t x6220 = INT64_MAX;
int8_t x6253 = INT8_MAX;
int16_t x6256 = INT16_MAX;
uint64_t t78 = 22713LLU;
uint32_t x6375 = 13U;
uint8_t x6496 = UINT8_MAX;
uint8_t x6501 = 41U;
int64_t x6626 = 1LL;
volatile uint32_t t88 = 12420941U;
uint32_t x7009 = 16071482U;
uint8_t x7213 = 2U;
uint32_t x7258 = UINT32_MAX;
volatile uint32_t x7534 = UINT32_MAX;
uint8_t x7535 = 0U;
int8_t x7536 = INT8_MIN;
volatile int64_t x7605 = -999771160547540LL;
uint32_t x7661 = 385602992U;
volatile int64_t t96 = 21LL;
static uint16_t x7726 = 21U;
uint8_t x7743 = 14U;
static int32_t x7744 = -39081097;
uint8_t x7981 = 1U;


void f0(void) {
	uint8_t x21 = 0U;
	uint32_t x22 = UINT32_MAX;
	volatile uint16_t x23 = 0U;
	int32_t x24 = INT32_MAX;
	static uint32_t t0 = 26U;

	t0 = ((x21+(x22<<x23))*x24);

	if (t0 != 2147483649U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x153 = -1;
	static uint8_t x154 = 84U;
	volatile uint32_t x156 = UINT32_MAX;
	uint32_t t1 = 13003142U;

	t1 = ((x153+(x154<<x155))*x156);

	if (t1 != 4294967213U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x257 = UINT16_MAX;
	uint64_t x258 = UINT64_MAX;
	volatile int16_t x260 = -13;
	uint64_t t2 = 13825LLU;

	t2 = ((x257+(x258<<x259))*x260);

	if (t2 != 18446744073708701325LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x337 = 7292637;
	uint64_t x338 = 2145601295LLU;
	static uint32_t x340 = UINT32_MAX;
	uint64_t t3 = 389864236LLU;

	t3 = ((x337+(x338<<x339))*x340);

	if (t3 != 9246609027543953940LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x361 = INT32_MIN;
	static uint8_t x362 = 12U;
	int8_t x363 = 1;
	volatile uint32_t t4 = 17U;

	t4 = ((x361+(x362<<x363))*x364);

	if (t4 != 2356206056U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x662 = UINT64_MAX;
	int16_t x663 = 27;
	volatile int16_t x664 = INT16_MIN;

	t5 = ((x661+(x662<<x663))*x664);

	if (t5 != 18446607734267740160LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x687 = 1U;
	int8_t x688 = INT8_MIN;
	static volatile uint32_t t6 = 1633665U;

	t6 = ((x685+(x686<<x687))*x688);

	if (t6 != 4294963072U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x734 = 709099LL;
	static uint8_t x735 = 7U;
	volatile uint64_t x736 = 20947710874LLU;
	volatile uint64_t t7 = 13157190480709893LLU;

	t7 = ((x733+(x734<<x735))*x736);

	if (t7 != 17819291582254114030LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x798 = INT8_MAX;
	uint8_t x799 = 2U;
	int8_t x800 = -1;
	volatile int32_t t8 = 6523;

	t8 = ((x797+(x798<<x799))*x800);

	if (t8 != -380) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x809 = 13U;
	uint32_t x810 = UINT32_MAX;
	static int16_t x811 = 8;
	uint64_t x812 = 60326035853675222LLU;

	t9 = ((x809+(x810<<x811))*x812);

	if (t9 != 17749814020261131998LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x834 = 1812U;
	volatile uint32_t t10 = 1129U;

	t10 = ((x833+(x834<<x835))*x836);

	if (t10 != 2147251711U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x866 = INT16_MAX;
	static int16_t x868 = INT16_MIN;

	t11 = ((x865+(x866<<x867))*x868);

	if (t11 != -2147385344) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x885 = 1425U;
	static volatile uint8_t x886 = UINT8_MAX;
	volatile uint8_t x887 = 2U;

	t12 = ((x885+(x886<<x887))*x888);

	if (t12 != 80115315) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x891 = 8U;
	static volatile int64_t x892 = -1LL;
	volatile int64_t t13 = 8LL;

	t13 = ((x889+(x890<<x891))*x892);

	if (t13 != -722763LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x989 = INT8_MIN;
	uint8_t x990 = 13U;
	volatile uint8_t x991 = 19U;
	uint8_t x992 = UINT8_MAX;
	volatile int32_t t14 = 7;

	t14 = ((x989+(x990<<x991))*x992);

	if (t14 != 1737982080) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x1097 = INT16_MIN;
	int32_t x1099 = 6;
	int64_t x1100 = 12977581801062LL;
	int64_t t15 = 50702606478LL;

	t15 = ((x1097+(x1098<<x1099))*x1100);

	if (t15 != -329734398401383296LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1189 = -1;
	uint32_t x1190 = 5U;
	uint32_t x1191 = 15U;
	uint32_t t16 = 11973U;

	t16 = ((x1189+(x1190<<x1191))*x1192);

	if (t16 != 3221258240U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x1209 = 882LLU;
	uint32_t x1210 = 13594U;
	uint32_t x1211 = 1U;
	static volatile int32_t x1212 = -2;
	volatile uint64_t t17 = 116LLU;

	t17 = ((x1209+(x1210<<x1211))*x1212);

	if (t17 != 18446744073709495476LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x1221 = -1;
	uint8_t x1222 = UINT8_MAX;
	static uint16_t x1223 = 7U;
	uint16_t x1224 = 19396U;
	int32_t t18 = -51424;

	t18 = ((x1221+(x1222<<x1223))*x1224);

	if (t18 != 633066044) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1389 = UINT16_MAX;
	uint32_t x1390 = 212552742U;
	int16_t x1391 = 1;
	uint32_t x1392 = 7U;
	uint32_t t19 = 132551U;

	t19 = ((x1389+(x1390<<x1391))*x1392);

	if (t19 != 2976197133U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1462 = 277623U;
	int8_t x1463 = 1;
	uint32_t x1464 = UINT32_MAX;
	uint32_t t20 = 3781036U;

	t20 = ((x1461+(x1462<<x1463))*x1464);

	if (t20 != 4294346515U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1481 = 108;
	volatile uint64_t x1482 = 3LLU;
	uint16_t x1483 = 1U;
	volatile uint64_t t21 = 3051440203499137699LLU;

	t21 = ((x1481+(x1482<<x1483))*x1484);

	if (t21 != 365234454LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x1537 = -1;
	static uint64_t x1538 = 454605347LLU;
	uint8_t x1539 = 9U;
	int64_t x1540 = 160823453481LL;
	volatile uint64_t t22 = 1908575038042LLU;

	t22 = ((x1537+(x1538<<x1539))*x1540);

	if (t22 != 4491634522298126039LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1594 = 59;
	uint16_t x1595 = 1U;

	t23 = ((x1593+(x1594<<x1595))*x1596);

	if (t23 != 4176395) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x1726 = UINT64_MAX;
	int16_t x1728 = -1132;
	uint64_t t24 = 4953372LLU;

	t24 = ((x1725+(x1726<<x1727))*x1728);

	if (t24 != 3891110078085201920LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1841 = 3811391502LLU;
	volatile int64_t x1842 = 2379772681150LL;
	uint32_t x1843 = 6U;
	static volatile uint64_t t25 = 619655711086144980LLU;

	t25 = ((x1841+(x1842<<x1843))*x1844);

	if (t25 != 18446591764446566514LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x1890 = 1U;
	volatile int16_t x1891 = 0;
	static uint8_t x1892 = 31U;

	t26 = ((x1889+(x1890<<x1891))*x1892);

	if (t26 != 5861810163011506LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x2193 = UINT32_MAX;
	int8_t x2194 = INT8_MAX;
	uint16_t x2195 = 1U;
	volatile int32_t x2196 = 88288797;
	volatile uint32_t t27 = 2520U;

	t27 = ((x2193+(x2194<<x2195))*x2196);

	if (t27 != 862229161U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x2297 = UINT32_MAX;
	static uint16_t x2298 = UINT16_MAX;
	static volatile int8_t x2299 = 1;
	int8_t x2300 = INT8_MAX;
	uint32_t t28 = 1560737327U;

	t28 = ((x2297+(x2298<<x2299))*x2300);

	if (t28 != 16645763U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2313 = INT16_MAX;
	uint16_t x2315 = 6U;
	static volatile uint32_t x2316 = UINT32_MAX;
	volatile uint32_t t29 = 461U;

	t29 = ((x2313+(x2314<<x2315))*x2316);

	if (t29 != 4294924865U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x2349 = UINT32_MAX;
	static uint32_t x2350 = 35368U;
	uint64_t x2351 = 7LLU;
	uint8_t x2352 = 66U;
	uint32_t t30 = 1716972U;

	t30 = ((x2349+(x2350<<x2351))*x2352);

	if (t30 != 298788798U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x2601 = UINT16_MAX;
	volatile int32_t x2603 = 1;
	int8_t x2604 = -9;
	int32_t t31 = -51078;

	t31 = ((x2601+(x2602<<x2603))*x2604);

	if (t31 != -594405) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x2681 = -1816911014150LL;
	static int16_t x2682 = 14;
	uint8_t x2683 = 7U;
	int16_t x2684 = 3;

	t32 = ((x2681+(x2682<<x2683))*x2684);

	if (t32 != -5450733037074LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2718 = 16942007675420198LLU;
	uint8_t x2719 = 63U;
	volatile uint64_t t33 = 41784LLU;

	t33 = ((x2717+(x2718<<x2719))*x2720);

	if (t33 != 442317206875575LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2801 = INT64_MIN;
	volatile uint64_t x2802 = UINT64_MAX;
	uint32_t x2803 = 1U;
	int32_t x2804 = INT32_MIN;
	volatile uint64_t t34 = 23LLU;

	t34 = ((x2801+(x2802<<x2803))*x2804);

	if (t34 != 4294967296LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2861 = 20329465180LLU;
	static int16_t x2862 = 107;
	int8_t x2863 = 0;
	int8_t x2864 = 0;
	volatile uint64_t t35 = 81758529107LLU;

	t35 = ((x2861+(x2862<<x2863))*x2864);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x2869 = 31U;
	uint32_t x2870 = 1U;
	int16_t x2871 = 25;
	uint8_t x2872 = 20U;
	uint32_t t36 = 6305003U;

	t36 = ((x2869+(x2870<<x2871))*x2872);

	if (t36 != 671089260U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2873 = -1LL;
	uint32_t x2874 = UINT32_MAX;
	volatile uint64_t x2875 = 6LLU;
	volatile int32_t x2876 = 1;
	volatile int64_t t37 = -50292996536432LL;

	t37 = ((x2873+(x2874<<x2875))*x2876);

	if (t37 != 4294967231LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2933 = INT8_MAX;
	uint8_t x2934 = 4U;
	uint8_t x2935 = 10U;
	int16_t x2936 = -1;
	int32_t t38 = -1826193;

	t38 = ((x2933+(x2934<<x2935))*x2936);

	if (t38 != -4223) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x3097 = INT8_MAX;
	int16_t x3098 = INT16_MAX;
	static volatile int8_t x3099 = 13;
	int32_t t39 = -1;

	t39 = ((x3097+(x3098<<x3099))*x3100);

	if (t39 != 536854782) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x3101 = 38953476635954576LLU;
	uint16_t x3102 = UINT16_MAX;
	static volatile uint64_t t40 = 95103843266LLU;

	t40 = ((x3101+(x3102<<x3103))*x3104);

	if (t40 != 18407790597073531505LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x3149 = INT64_MIN;
	static volatile int8_t x3150 = INT8_MAX;
	volatile uint16_t x3151 = 1U;
	static uint64_t x3152 = 0LLU;
	static uint64_t t41 = 294206610081271330LLU;

	t41 = ((x3149+(x3150<<x3151))*x3152);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x3229 = 18081891U;
	uint16_t x3230 = 31618U;
	uint8_t x3231 = 8U;

	t42 = ((x3229+(x3230<<x3231))*x3232);

	if (t42 != 4268791197U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x3290 = 15LLU;

	t43 = ((x3289+(x3290<<x3291))*x3292);

	if (t43 != 18412967078651756544LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x3377 = INT8_MIN;
	uint64_t x3378 = UINT64_MAX;
	int64_t x3380 = 2879243785404114LL;
	uint64_t t44 = 5407988993316LLU;

	t44 = ((x3377+(x3378<<x3379))*x3380);

	if (t44 != 18075321625392420910LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x3509 = 1428;
	static uint8_t x3511 = 10U;
	int64_t x3512 = INT64_MAX;
	uint64_t t45 = 7976862852095755318LLU;

	t45 = ((x3509+(x3510<<x3511))*x3512);

	if (t45 != 18446744073709551212LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3675 = 0;
	int16_t x3676 = INT16_MAX;
	int32_t t46 = 12;

	t46 = ((x3673+(x3674<<x3675))*x3676);

	if (t46 != 8060682) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3734 = UINT64_MAX;
	volatile uint8_t x3735 = 4U;
	uint32_t x3736 = UINT32_MAX;
	uint64_t t47 = 31994260464988LLU;

	t47 = ((x3733+(x3734<<x3735))*x3736);

	if (t47 != 135468151862114415LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3785 = 0;
	volatile uint32_t x3786 = 62U;
	uint64_t x3787 = 13LLU;
	int8_t x3788 = -1;
	static uint32_t t48 = 1594576398U;

	t48 = ((x3785+(x3786<<x3787))*x3788);

	if (t48 != 4294459392U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3809 = INT32_MAX;
	uint64_t x3810 = 2229937306550035087LLU;
	static int8_t x3811 = 3;
	static int16_t x3812 = -3020;
	static uint64_t t49 = 7638815LLU;

	t49 = ((x3809+(x3810<<x3811))*x3812);

	if (t49 != 7654106571351954476LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3929 = INT16_MIN;
	uint64_t x3930 = UINT64_MAX;
	uint32_t x3931 = 37U;
	volatile uint64_t t50 = 3300548371LLU;

	t50 = ((x3929+(x3930<<x3931))*x3932);

	if (t50 != 18437737009746313216LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x4029 = INT8_MIN;
	int32_t x4030 = 59769;
	static uint8_t x4031 = 0U;
	uint64_t x4032 = 101726013389297194LLU;
	volatile uint64_t t51 = 14700LLU;

	t51 = ((x4029+(x4030<<x4031))*x4032);

	if (t51 != 16509108374341017306LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x4049 = INT8_MAX;
	int8_t x4052 = -1;

	t52 = ((x4049+(x4050<<x4051))*x4052);

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x4150 = UINT32_MAX;
	static int8_t x4151 = 2;
	volatile uint64_t t53 = 1806107624176454864LLU;

	t53 = ((x4149+(x4150<<x4151))*x4152);

	if (t53 != 18446744069414584325LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x4177 = INT32_MIN;
	uint64_t x4178 = 1LLU;
	volatile uint32_t x4179 = 13U;
	uint8_t x4180 = 5U;
	uint64_t t54 = 79678451931517471LLU;

	t54 = ((x4177+(x4178<<x4179))*x4180);

	if (t54 != 18446744062972174336LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x4233 = -1;
	volatile uint16_t x4234 = UINT16_MAX;
	static int8_t x4235 = 0;
	static uint16_t x4236 = 145U;
	volatile int32_t t55 = -1016951;

	t55 = ((x4233+(x4234<<x4235))*x4236);

	if (t55 != 9502430) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x4329 = 3U;
	uint64_t x4330 = 3660LLU;
	static int8_t x4331 = 0;
	uint64_t x4332 = 1049937921649LLU;
	uint64_t t56 = 7224LLU;

	t56 = ((x4329+(x4330<<x4331))*x4332);

	if (t56 != 3845922607000287LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x4370 = 1U;
	int64_t x4371 = 1LL;
	static int16_t x4372 = -6;
	static int64_t t57 = 19318LL;

	t57 = ((x4369+(x4370<<x4371))*x4372);

	if (t57 != -132046249339512LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x4413 = INT32_MAX;
	uint64_t x4414 = 64568113642LLU;
	static int8_t x4415 = 15;
	uint64_t t58 = 21034576829493LLU;

	t58 = ((x4413+(x4414<<x4415))*x4416);

	if (t58 != 268702802103697281LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x4553 = -38;
	int16_t x4556 = 14319;
	int32_t t59 = 0;

	t59 = ((x4553+(x4554<<x4555))*x4556);

	if (t59 != 7274052) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x4601 = INT32_MAX;
	uint64_t x4602 = 11215039LLU;
	int8_t x4603 = 0;
	volatile uint64_t t60 = 2LLU;

	t60 = ((x4601+(x4602<<x4603))*x4604);

	if (t60 != 141470318387010LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x4614 = 5U;
	uint16_t x4615 = 27U;
	int16_t x4616 = -3;

	t61 = ((x4613+(x4614<<x4615))*x4616);

	if (t61 != -2013265890) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x4793 = -194885LL;
	int8_t x4794 = 1;
	volatile uint16_t x4795 = 3U;
	int32_t x4796 = -1;

	t62 = ((x4793+(x4794<<x4795))*x4796);

	if (t62 != 194877LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4937 = UINT32_MAX;
	uint8_t x4939 = 2U;
	uint16_t x4940 = 0U;
	volatile uint32_t t63 = 174667996U;

	t63 = ((x4937+(x4938<<x4939))*x4940);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x5159 = 13LLU;
	int8_t x5160 = 34;
	uint32_t t64 = 6U;

	t64 = ((x5157+(x5158<<x5159))*x5160);

	if (t64 != 3721418234U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x5274 = 400LLU;
	static uint64_t x5275 = 28LLU;
	static uint32_t x5276 = UINT32_MAX;
	static uint64_t t65 = 1LLU;

	t65 = ((x5273+(x5274<<x5275))*x5276);

	if (t65 != 104316165660935LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x5529 = UINT16_MAX;
	int8_t x5531 = 1;
	static uint8_t x5532 = 119U;
	uint64_t t66 = 66667711558233811LLU;

	t66 = ((x5529+(x5530<<x5531))*x5532);

	if (t66 != 13369681389685411LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x5541 = 1LL;
	uint8_t x5542 = UINT8_MAX;
	uint8_t x5543 = 21U;
	uint8_t x5544 = 2U;
	int64_t t67 = 88143485241573LL;

	t67 = ((x5541+(x5542<<x5543))*x5544);

	if (t67 != 1069547522LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x5577 = 477611279LL;
	static int16_t x5578 = 0;
	static uint16_t x5579 = 12U;
	int16_t x5580 = 2;
	int64_t t68 = 116327237348LL;

	t68 = ((x5577+(x5578<<x5579))*x5580);

	if (t68 != 955222558LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x5603 = 27U;
	volatile int32_t x5604 = -8;
	volatile int32_t t69 = 5;

	t69 = ((x5601+(x5602<<x5603))*x5604);

	if (t69 != -2040) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x5642 = 129926602U;
	static uint8_t x5643 = 9U;
	uint32_t x5644 = 5811U;
	volatile uint32_t t70 = 6488U;

	t70 = ((x5641+(x5642<<x5643))*x5644);

	if (t70 != 1844739042U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x5717 = -1;
	uint16_t x5719 = 26U;
	int8_t x5720 = -14;

	t71 = ((x5717+(x5718<<x5719))*x5720);

	if (t71 != 939524110LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x5769 = -1;
	static uint8_t x5770 = 88U;
	int16_t x5771 = 0;
	int64_t x5772 = -1LL;
	int64_t t72 = 141158904LL;

	t72 = ((x5769+(x5770<<x5771))*x5772);

	if (t72 != -87LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x5917 = UINT16_MAX;
	volatile uint64_t x5918 = 2509382272913801LLU;
	volatile int8_t x5919 = 4;
	int16_t x5920 = 40;

	t73 = ((x5917+(x5918<<x5919))*x5920);

	if (t73 != 1606004654667454040LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x5933 = 11303U;
	int8_t x5934 = 14;
	int8_t x5935 = 3;
	int32_t t74 = -810;

	t74 = ((x5933+(x5934<<x5935))*x5936);

	if (t74 != -374046720) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x6210 = UINT64_MAX;
	static int8_t x6212 = INT8_MIN;
	uint64_t t75 = 9168988518LLU;

	t75 = ((x6209+(x6210<<x6211))*x6212);

	if (t75 != 274877907072LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x6217 = UINT8_MAX;
	uint8_t x6219 = 44U;
	uint64_t t76 = 31642LLU;

	t76 = ((x6217+(x6218<<x6219))*x6220);

	if (t76 != 9218182341971672833LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x6254 = 0U;
	uint8_t x6255 = 8U;
	int32_t t77 = 3599;

	t77 = ((x6253+(x6254<<x6255))*x6256);

	if (t77 != 4161409) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x6345 = -1;
	volatile uint64_t x6346 = 123LLU;
	uint8_t x6347 = 1U;
	int32_t x6348 = INT32_MAX;

	t78 = ((x6345+(x6346<<x6347))*x6348);

	if (t78 != 526133493515LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x6373 = -1;
	uint64_t x6374 = 61499422988LLU;
	int32_t x6376 = -1;
	uint64_t t79 = 46825325595364343LLU;

	t79 = ((x6373+(x6374<<x6375))*x6376);

	if (t79 != 18446240270436433921LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x6417 = -77997339269LL;
	volatile uint16_t x6418 = 2U;
	static int8_t x6419 = 29;
	int64_t x6420 = -1LL;
	volatile int64_t t80 = 248886LL;

	t80 = ((x6417+(x6418<<x6419))*x6420);

	if (t80 != 76923597445LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x6441 = 0;
	static volatile int8_t x6442 = 1;
	int16_t x6443 = 0;
	uint16_t x6444 = UINT16_MAX;
	static volatile int32_t t81 = 0;

	t81 = ((x6441+(x6442<<x6443))*x6444);

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x6485 = INT16_MAX;
	static uint64_t x6486 = UINT64_MAX;
	static uint8_t x6487 = 1U;
	static volatile uint16_t x6488 = 5U;
	volatile uint64_t t82 = 14446133423089LLU;

	t82 = ((x6485+(x6486<<x6487))*x6488);

	if (t82 != 163825LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x6493 = UINT32_MAX;
	volatile uint8_t x6494 = 29U;
	volatile int16_t x6495 = 0;
	volatile uint32_t t83 = 197609U;

	t83 = ((x6493+(x6494<<x6495))*x6496);

	if (t83 != 7140U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x6502 = 12U;
	static uint8_t x6503 = 5U;
	int32_t x6504 = -33;
	int32_t t84 = -33120500;

	t84 = ((x6501+(x6502<<x6503))*x6504);

	if (t84 != -14025) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x6625 = INT8_MIN;
	static int8_t x6627 = 30;
	int32_t x6628 = INT32_MAX;
	int64_t t85 = 86670LL;

	t85 = ((x6625+(x6626<<x6627))*x6628);

	if (t85 != 2305842733262045312LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x6737 = INT8_MIN;
	uint8_t x6738 = 99U;
	uint16_t x6739 = 21U;
	static int32_t x6740 = -1;
	static int32_t t86 = 3941270;

	t86 = ((x6737+(x6738<<x6739))*x6740);

	if (t86 != -207617920) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x6785 = UINT64_MAX;
	volatile uint64_t x6786 = UINT64_MAX;
	static uint16_t x6787 = 1U;
	uint8_t x6788 = UINT8_MAX;
	static volatile uint64_t t87 = 1402644703LLU;

	t87 = ((x6785+(x6786<<x6787))*x6788);

	if (t87 != 18446744073709550851LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x6965 = INT32_MAX;
	uint32_t x6966 = UINT32_MAX;
	int16_t x6967 = 2;
	int16_t x6968 = -1;

	t88 = ((x6965+(x6966<<x6967))*x6968);

	if (t88 != 2147483653U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x7010 = 5576261;
	uint16_t x7011 = 0U;
	static int32_t x7012 = INT32_MAX;
	static volatile uint32_t t89 = 0U;

	t89 = ((x7009+(x7010<<x7011))*x7012);

	if (t89 != 2125835905U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x7029 = INT32_MIN;
	volatile uint16_t x7030 = 0U;
	static int8_t x7031 = 1;
	uint64_t x7032 = 3689630370319026660LLU;
	uint64_t t90 = 235848199039489LLU;

	t90 = ((x7029+(x7030<<x7031))*x7032);

	if (t90 != 311341071185477632LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x7214 = 5165605841239519209LLU;
	uint64_t x7215 = 3LLU;
	int64_t x7216 = INT64_MIN;
	volatile uint64_t t91 = 2356155LLU;

	t91 = ((x7213+(x7214<<x7215))*x7216);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x7257 = INT16_MIN;
	volatile uint8_t x7259 = 2U;
	volatile uint64_t x7260 = UINT64_MAX;
	uint64_t t92 = 43159911LLU;

	t92 = ((x7257+(x7258<<x7259))*x7260);

	if (t92 != 18446744069414617092LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x7533 = 628U;
	uint32_t t93 = 184041U;

	t93 = ((x7533+(x7534<<x7535))*x7536);

	if (t93 != 4294887040U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x7537 = 17860U;
	uint64_t x7538 = UINT64_MAX;
	int16_t x7539 = 1;
	static int8_t x7540 = -2;
	static volatile uint64_t t94 = 333938LLU;

	t94 = ((x7537+(x7538<<x7539))*x7540);

	if (t94 != 18446744073709515900LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x7606 = UINT64_MAX;
	uint32_t x7607 = 1U;
	int16_t x7608 = INT16_MAX;
	static volatile uint64_t t95 = 111984335602797352LLU;

	t95 = ((x7605+(x7606<<x7607))*x7608);

	if (t95 != 4133986529757794518LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x7662 = 0LL;
	uint32_t x7663 = 6U;
	int16_t x7664 = INT16_MIN;

	t96 = ((x7661+(x7662<<x7663))*x7664);

	if (t96 != -12635438841856LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x7725 = 370U;
	static int8_t x7727 = 1;
	static int32_t x7728 = -1;
	volatile int32_t t97 = -56017830;

	t97 = ((x7725+(x7726<<x7727))*x7728);

	if (t97 != -412) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x7741 = 203208473984558LLU;
	uint16_t x7742 = 834U;
	uint64_t t98 = 500LLU;

	t98 = ((x7741+(x7742<<x7743))*x7744);

	if (t98 != 8936078742214877538LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x7982 = 0;
	int32_t x7983 = 8;
	int16_t x7984 = -5601;
	volatile int32_t t99 = 5377;

	t99 = ((x7981+(x7982<<x7983))*x7984);

	if (t99 != -5601) { NG(); } else { ; }
	
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

