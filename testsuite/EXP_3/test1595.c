#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x119 = INT64_MIN;
int32_t x216 = 131100019;
volatile int32_t t5 = -11444593;
static int8_t x341 = INT8_MAX;
int16_t x344 = INT16_MAX;
static int64_t x552 = INT64_MIN;
static uint32_t x600 = UINT32_MAX;
uint8_t x709 = UINT8_MAX;
int16_t x752 = 1170;
int32_t x758 = 1;
int32_t t11 = 262;
volatile uint16_t x801 = 4U;
uint64_t x804 = 68196693222592LLU;
volatile uint16_t x999 = 6U;
int8_t x1031 = -1;
static uint64_t x1033 = 64541264LLU;
static int8_t x1035 = -1;
uint16_t x1036 = UINT16_MAX;
volatile int8_t x1042 = 7;
volatile uint8_t x1210 = 3U;
int8_t x1211 = INT8_MIN;
volatile int8_t x1212 = 1;
int32_t t20 = 10818;
static uint16_t x1219 = 121U;
static uint8_t x1220 = 9U;
static volatile uint8_t x1226 = 0U;
static volatile int16_t x1228 = 22;
int32_t t22 = 968;
volatile int32_t x1277 = 0;
uint32_t x1280 = 145193947U;
volatile int32_t t24 = -4759;
volatile int32_t t25 = -326;
uint8_t x1358 = 3U;
int16_t x1369 = 200;
uint16_t x1434 = 18U;
volatile int32_t t29 = 30;
volatile int32_t t30 = -1518447;
volatile int16_t x1815 = -1;
int16_t x2005 = INT16_MAX;
static int8_t x2007 = INT8_MAX;
int32_t t34 = 28979112;
volatile int32_t x2402 = 3;
int8_t x2403 = 3;
uint32_t x2505 = UINT32_MAX;
static volatile int8_t x2506 = 10;
static int16_t x2565 = INT16_MAX;
int8_t x2566 = 1;
uint8_t x2586 = 7U;
int8_t x2587 = INT8_MIN;
uint32_t x2588 = 2020647399U;
static uint32_t x2683 = 0U;
uint8_t x2898 = 1U;
int32_t t41 = 188;
volatile int32_t x2951 = 714991;
int16_t x2952 = INT16_MIN;
int32_t x3010 = 1;
static int32_t x3108 = INT32_MIN;
volatile int32_t x3125 = 19371851;
int32_t t46 = 1475;
int32_t t47 = -113;
volatile uint32_t x3306 = 0U;
uint16_t x3530 = 25U;
int64_t x3618 = 1LL;
static int8_t x3620 = 1;
static int32_t x3789 = INT32_MAX;
volatile int32_t t56 = -1126;
int64_t x3891 = -519859581785198LL;
static volatile int64_t x3963 = INT64_MAX;
int64_t x3996 = 11963481597LL;
uint8_t x4021 = 1U;
int16_t x4024 = INT16_MIN;
static uint64_t x4176 = 114369084141100LLU;
uint32_t x4178 = 21U;
static uint8_t x4421 = 10U;
static uint16_t x4423 = 18127U;
uint32_t x4431 = 2170301U;
int8_t x4469 = INT8_MAX;
static int16_t x4477 = 194;
static int32_t x4659 = INT32_MIN;
volatile uint64_t x4681 = 2072313929438243790LLU;
uint32_t x4796 = UINT32_MAX;
static uint32_t x4816 = UINT32_MAX;
uint32_t x4876 = 823647U;
int64_t x4967 = INT64_MAX;
uint64_t x5225 = 369139679750LLU;
static int8_t x5227 = INT8_MIN;
volatile uint64_t x5289 = 24401240815LLU;
static volatile int8_t x5498 = 1;
int64_t x5632 = -97578889222968259LL;
int32_t t84 = -67432693;
volatile uint64_t x5906 = 17LLU;
int32_t t86 = -12;
uint8_t x5942 = 1U;
volatile int16_t x5988 = -151;
uint64_t x6079 = 0LLU;
volatile int8_t x6080 = 0;
static volatile uint8_t x6206 = 10U;
int32_t x6314 = 1;
volatile uint64_t x6469 = 91858862955LLU;
int8_t x6470 = 52;
int64_t x6471 = INT64_MIN;
uint8_t x6513 = 2U;
uint32_t x6585 = 543350U;


void f0(void) {
	static uint64_t x33 = UINT64_MAX;
	uint8_t x34 = 3U;
	int64_t x35 = -1LL;
	uint64_t x36 = 884542791567854LLU;
	int32_t t0 = -166514;

	t0 = ((x33<<x34)<(x35<=x36));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x117 = INT8_MAX;
	int8_t x118 = 1;
	static int16_t x120 = INT16_MAX;
	volatile int32_t t1 = -124;

	t1 = ((x117<<x118)<(x119<=x120));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x145 = 16992;
	int64_t x146 = 8LL;
	int8_t x147 = -14;
	static volatile uint16_t x148 = 1536U;
	static volatile int32_t t2 = -55958;

	t2 = ((x145<<x146)<(x147<=x148));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x213 = 11;
	uint32_t x214 = 0U;
	static int32_t x215 = -1;
	static int32_t t3 = -1599;

	t3 = ((x213<<x214)<(x215<=x216));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x245 = 47888U;
	uint16_t x246 = 1U;
	uint64_t x247 = UINT64_MAX;
	int8_t x248 = INT8_MAX;
	int32_t t4 = 42194705;

	t4 = ((x245<<x246)<(x247<=x248));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x285 = 19047230972808LLU;
	int8_t x286 = 2;
	uint32_t x287 = UINT32_MAX;
	volatile int16_t x288 = INT16_MAX;

	t5 = ((x285<<x286)<(x287<=x288));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x342 = 0;
	uint32_t x343 = UINT32_MAX;
	volatile int32_t t6 = -115;

	t6 = ((x341<<x342)<(x343<=x344));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x549 = UINT16_MAX;
	int8_t x550 = 9;
	uint32_t x551 = 24695961U;
	int32_t t7 = -13050898;

	t7 = ((x549<<x550)<(x551<=x552));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x597 = 22827503822224545LLU;
	uint16_t x598 = 1U;
	int16_t x599 = -1;
	static volatile int32_t t8 = -90574;

	t8 = ((x597<<x598)<(x599<=x600));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x710 = 4U;
	int8_t x711 = 3;
	static uint8_t x712 = 2U;
	int32_t t9 = 13;

	t9 = ((x709<<x710)<(x711<=x712));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x749 = 25U;
	uint32_t x750 = 0U;
	static int8_t x751 = INT8_MIN;
	static volatile int32_t t10 = -94643191;

	t10 = ((x749<<x750)<(x751<=x752));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x757 = INT8_MAX;
	int8_t x759 = INT8_MAX;
	volatile int16_t x760 = INT16_MIN;

	t11 = ((x757<<x758)<(x759<=x760));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x802 = 9U;
	int64_t x803 = -1LL;
	int32_t t12 = 916;

	t12 = ((x801<<x802)<(x803<=x804));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x889 = 12U;
	uint32_t x890 = 1U;
	int16_t x891 = -1;
	static int32_t x892 = INT32_MIN;
	volatile int32_t t13 = 15;

	t13 = ((x889<<x890)<(x891<=x892));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x997 = INT16_MAX;
	int8_t x998 = 0;
	static int8_t x1000 = -1;
	int32_t t14 = 25;

	t14 = ((x997<<x998)<(x999<=x1000));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1029 = 190647953LL;
	volatile int8_t x1030 = 9;
	int8_t x1032 = INT8_MIN;
	static volatile int32_t t15 = 1042386423;

	t15 = ((x1029<<x1030)<(x1031<=x1032));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1034 = 0U;
	volatile int32_t t16 = 1561;

	t16 = ((x1033<<x1034)<(x1035<=x1036));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x1041 = INT16_MAX;
	int8_t x1043 = INT8_MIN;
	volatile uint16_t x1044 = UINT16_MAX;
	static int32_t t17 = 787227;

	t17 = ((x1041<<x1042)<(x1043<=x1044));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1069 = 1;
	uint8_t x1070 = 30U;
	volatile int16_t x1071 = INT16_MIN;
	int64_t x1072 = -1LL;
	int32_t t18 = 6;

	t18 = ((x1069<<x1070)<(x1071<=x1072));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1077 = 8700340LLU;
	int8_t x1078 = 1;
	uint32_t x1079 = 147742U;
	static uint8_t x1080 = UINT8_MAX;
	static int32_t t19 = 32882288;

	t19 = ((x1077<<x1078)<(x1079<=x1080));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x1209 = 35;

	t20 = ((x1209<<x1210)<(x1211<=x1212));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1217 = 733665635LL;
	int16_t x1218 = 0;
	static volatile int32_t t21 = -14;

	t21 = ((x1217<<x1218)<(x1219<=x1220));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x1225 = 3025255LLU;
	uint32_t x1227 = 1U;

	t22 = ((x1225<<x1226)<(x1227<=x1228));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1278 = 0;
	int8_t x1279 = -7;
	int32_t t23 = -42052006;

	t23 = ((x1277<<x1278)<(x1279<=x1280));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1333 = UINT8_MAX;
	int8_t x1334 = 0;
	uint32_t x1335 = 1U;
	int64_t x1336 = INT64_MAX;

	t24 = ((x1333<<x1334)<(x1335<=x1336));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1337 = 53U;
	int16_t x1338 = 1;
	int16_t x1339 = -1;
	int32_t x1340 = 110;

	t25 = ((x1337<<x1338)<(x1339<=x1340));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1357 = 1U;
	uint16_t x1359 = 1U;
	volatile uint64_t x1360 = UINT64_MAX;
	int32_t t26 = 0;

	t26 = ((x1357<<x1358)<(x1359<=x1360));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1370 = 14U;
	static uint64_t x1371 = 3627046441503LLU;
	int8_t x1372 = -1;
	volatile int32_t t27 = -47144499;

	t27 = ((x1369<<x1370)<(x1371<=x1372));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1409 = 3982252293861LLU;
	static uint16_t x1410 = 1U;
	uint32_t x1411 = UINT32_MAX;
	int64_t x1412 = INT64_MIN;
	static int32_t t28 = -1;

	t28 = ((x1409<<x1410)<(x1411<=x1412));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1433 = 20;
	static int64_t x1435 = INT64_MIN;
	uint16_t x1436 = 4115U;

	t29 = ((x1433<<x1434)<(x1435<=x1436));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x1569 = 0U;
	volatile uint64_t x1570 = 2LLU;
	int64_t x1571 = INT64_MAX;
	static uint64_t x1572 = 11LLU;

	t30 = ((x1569<<x1570)<(x1571<=x1572));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x1813 = INT16_MAX;
	static volatile uint8_t x1814 = 1U;
	static int8_t x1816 = 38;
	int32_t t31 = -50;

	t31 = ((x1813<<x1814)<(x1815<=x1816));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x2006 = 0U;
	int16_t x2008 = -3;
	int32_t t32 = 424;

	t32 = ((x2005<<x2006)<(x2007<=x2008));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x2129 = INT16_MAX;
	volatile uint32_t x2130 = 3U;
	int32_t x2131 = -1;
	uint32_t x2132 = UINT32_MAX;
	volatile int32_t t33 = 23;

	t33 = ((x2129<<x2130)<(x2131<=x2132));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2241 = 53U;
	uint16_t x2242 = 0U;
	int64_t x2243 = 39320465246LL;
	int64_t x2244 = -1LL;

	t34 = ((x2241<<x2242)<(x2243<=x2244));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2337 = UINT32_MAX;
	static volatile int16_t x2338 = 1;
	int64_t x2339 = INT64_MIN;
	static int8_t x2340 = INT8_MIN;
	int32_t t35 = 526528710;

	t35 = ((x2337<<x2338)<(x2339<=x2340));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2401 = UINT16_MAX;
	int64_t x2404 = INT64_MIN;
	volatile int32_t t36 = -421736426;

	t36 = ((x2401<<x2402)<(x2403<=x2404));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2507 = INT16_MAX;
	int32_t x2508 = INT32_MIN;
	int32_t t37 = 256788;

	t37 = ((x2505<<x2506)<(x2507<=x2508));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x2567 = 71582842U;
	uint8_t x2568 = 24U;
	int32_t t38 = -8802;

	t38 = ((x2565<<x2566)<(x2567<=x2568));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2585 = 13U;
	int32_t t39 = 76;

	t39 = ((x2585<<x2586)<(x2587<=x2588));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2681 = 0;
	int16_t x2682 = 0;
	static int64_t x2684 = -1LL;
	volatile int32_t t40 = 16230;

	t40 = ((x2681<<x2682)<(x2683<=x2684));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2897 = 27664551U;
	int8_t x2899 = 0;
	volatile int32_t x2900 = INT32_MIN;

	t41 = ((x2897<<x2898)<(x2899<=x2900));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2949 = 17;
	static int16_t x2950 = 1;
	int32_t t42 = 0;

	t42 = ((x2949<<x2950)<(x2951<=x2952));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x3005 = 0;
	static uint8_t x3006 = 15U;
	int64_t x3007 = -2LL;
	static int32_t x3008 = 8843232;
	volatile int32_t t43 = -37;

	t43 = ((x3005<<x3006)<(x3007<=x3008));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x3009 = 202998146120677879LLU;
	int16_t x3011 = -1;
	uint32_t x3012 = 84503567U;
	int32_t t44 = 29795;

	t44 = ((x3009<<x3010)<(x3011<=x3012));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3105 = 0;
	int8_t x3106 = 1;
	int32_t x3107 = INT32_MIN;
	int32_t t45 = 6129097;

	t45 = ((x3105<<x3106)<(x3107<=x3108));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3126 = 1U;
	uint64_t x3127 = UINT64_MAX;
	static volatile int64_t x3128 = INT64_MIN;

	t46 = ((x3125<<x3126)<(x3127<=x3128));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3157 = 8181466360729670583LLU;
	uint8_t x3158 = 1U;
	int16_t x3159 = INT16_MIN;
	int16_t x3160 = INT16_MAX;

	t47 = ((x3157<<x3158)<(x3159<=x3160));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x3285 = UINT16_MAX;
	int32_t x3286 = 4;
	int64_t x3287 = 13LL;
	static volatile int64_t x3288 = INT64_MIN;
	volatile int32_t t48 = 26405;

	t48 = ((x3285<<x3286)<(x3287<=x3288));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3305 = 1906LL;
	volatile int32_t x3307 = INT32_MAX;
	int32_t x3308 = INT32_MIN;
	int32_t t49 = 0;

	t49 = ((x3305<<x3306)<(x3307<=x3308));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x3529 = 1U;
	static uint32_t x3531 = 10U;
	int32_t x3532 = -2650481;
	volatile int32_t t50 = 79473;

	t50 = ((x3529<<x3530)<(x3531<=x3532));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x3617 = 21;
	int32_t x3619 = 25610;
	volatile int32_t t51 = -1700954;

	t51 = ((x3617<<x3618)<(x3619<=x3620));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3701 = 609;
	int8_t x3702 = 7;
	int8_t x3703 = INT8_MIN;
	uint16_t x3704 = 1801U;
	volatile int32_t t52 = 14954;

	t52 = ((x3701<<x3702)<(x3703<=x3704));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3757 = UINT8_MAX;
	int16_t x3758 = 11;
	static int64_t x3759 = -1LL;
	volatile int8_t x3760 = -2;
	volatile int32_t t53 = -834;

	t53 = ((x3757<<x3758)<(x3759<=x3760));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x3769 = INT8_MAX;
	static uint16_t x3770 = 1U;
	volatile int8_t x3771 = INT8_MIN;
	uint16_t x3772 = 225U;
	int32_t t54 = -63268865;

	t54 = ((x3769<<x3770)<(x3771<=x3772));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3781 = UINT16_MAX;
	uint64_t x3782 = 12LLU;
	int16_t x3783 = 109;
	int64_t x3784 = -1LL;
	volatile int32_t t55 = -1019;

	t55 = ((x3781<<x3782)<(x3783<=x3784));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3790 = 0U;
	uint8_t x3791 = UINT8_MAX;
	uint32_t x3792 = 65U;

	t56 = ((x3789<<x3790)<(x3791<=x3792));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x3889 = UINT8_MAX;
	volatile uint32_t x3890 = 1U;
	volatile int64_t x3892 = INT64_MAX;
	int32_t t57 = 265088797;

	t57 = ((x3889<<x3890)<(x3891<=x3892));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3961 = UINT32_MAX;
	static volatile int16_t x3962 = 0;
	int8_t x3964 = -1;
	int32_t t58 = 3;

	t58 = ((x3961<<x3962)<(x3963<=x3964));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3993 = 1848010039205713LL;
	int8_t x3994 = 1;
	int64_t x3995 = INT64_MIN;
	volatile int32_t t59 = 553296;

	t59 = ((x3993<<x3994)<(x3995<=x3996));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x4022 = 0U;
	int32_t x4023 = -75;
	volatile int32_t t60 = -1454;

	t60 = ((x4021<<x4022)<(x4023<=x4024));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x4169 = 27U;
	static int8_t x4170 = 0;
	uint8_t x4171 = 31U;
	static int16_t x4172 = INT16_MIN;
	int32_t t61 = 16;

	t61 = ((x4169<<x4170)<(x4171<=x4172));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x4173 = 58LL;
	volatile uint16_t x4174 = 0U;
	uint8_t x4175 = 73U;
	int32_t t62 = 391658;

	t62 = ((x4173<<x4174)<(x4175<=x4176));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4177 = 6U;
	int16_t x4179 = -1;
	static int16_t x4180 = 33;
	volatile int32_t t63 = 59320115;

	t63 = ((x4177<<x4178)<(x4179<=x4180));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4313 = 74U;
	static int32_t x4314 = 0;
	volatile uint32_t x4315 = 7U;
	volatile int64_t x4316 = INT64_MIN;
	volatile int32_t t64 = -58255;

	t64 = ((x4313<<x4314)<(x4315<=x4316));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x4422 = 25U;
	static int64_t x4424 = INT64_MIN;
	volatile int32_t t65 = -354970929;

	t65 = ((x4421<<x4422)<(x4423<=x4424));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x4429 = 628LLU;
	uint16_t x4430 = 2U;
	uint32_t x4432 = 1302U;
	static volatile int32_t t66 = 1394455;

	t66 = ((x4429<<x4430)<(x4431<=x4432));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x4445 = UINT8_MAX;
	static uint16_t x4446 = 12U;
	int16_t x4447 = INT16_MIN;
	static int8_t x4448 = -1;
	volatile int32_t t67 = -126322;

	t67 = ((x4445<<x4446)<(x4447<=x4448));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x4470 = 0U;
	uint32_t x4471 = 3760274U;
	int8_t x4472 = -1;
	volatile int32_t t68 = 193815823;

	t68 = ((x4469<<x4470)<(x4471<=x4472));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4478 = 13U;
	volatile uint8_t x4479 = 3U;
	volatile int32_t x4480 = -68753;
	volatile int32_t t69 = 10;

	t69 = ((x4477<<x4478)<(x4479<=x4480));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4657 = 7LLU;
	volatile uint16_t x4658 = 3U;
	uint64_t x4660 = UINT64_MAX;
	volatile int32_t t70 = -9736;

	t70 = ((x4657<<x4658)<(x4659<=x4660));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4682 = 0;
	int8_t x4683 = 15;
	int64_t x4684 = INT64_MIN;
	volatile int32_t t71 = -629782086;

	t71 = ((x4681<<x4682)<(x4683<=x4684));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4793 = 299;
	uint16_t x4794 = 2U;
	static uint8_t x4795 = 4U;
	volatile int32_t t72 = -4;

	t72 = ((x4793<<x4794)<(x4795<=x4796));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x4813 = 1871U;
	static uint8_t x4814 = 10U;
	int16_t x4815 = INT16_MIN;
	volatile int32_t t73 = 1895200;

	t73 = ((x4813<<x4814)<(x4815<=x4816));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x4873 = 62;
	uint32_t x4874 = 5U;
	static int8_t x4875 = INT8_MIN;
	volatile int32_t t74 = -4605;

	t74 = ((x4873<<x4874)<(x4875<=x4876));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x4965 = 2604U;
	int8_t x4966 = 1;
	int64_t x4968 = INT64_MIN;
	int32_t t75 = 5018743;

	t75 = ((x4965<<x4966)<(x4967<=x4968));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x5049 = 74514U;
	volatile uint32_t x5050 = 0U;
	static volatile uint16_t x5051 = 25805U;
	int64_t x5052 = 67844LL;
	volatile int32_t t76 = 7409;

	t76 = ((x5049<<x5050)<(x5051<=x5052));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x5069 = 313753U;
	static int8_t x5070 = 0;
	int64_t x5071 = -1750LL;
	uint32_t x5072 = 28566895U;
	static int32_t t77 = -7;

	t77 = ((x5069<<x5070)<(x5071<=x5072));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5226 = 2;
	uint64_t x5228 = 1233017890LLU;
	volatile int32_t t78 = 520210;

	t78 = ((x5225<<x5226)<(x5227<=x5228));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x5290 = 1;
	static int8_t x5291 = INT8_MIN;
	uint8_t x5292 = 0U;
	volatile int32_t t79 = -398133715;

	t79 = ((x5289<<x5290)<(x5291<=x5292));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5369 = UINT32_MAX;
	int16_t x5370 = 22;
	int16_t x5371 = INT16_MAX;
	int32_t x5372 = 0;
	static int32_t t80 = -1091554;

	t80 = ((x5369<<x5370)<(x5371<=x5372));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x5497 = 0U;
	uint32_t x5499 = 139U;
	int64_t x5500 = INT64_MIN;
	int32_t t81 = -162683;

	t81 = ((x5497<<x5498)<(x5499<=x5500));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5629 = UINT64_MAX;
	static int8_t x5630 = 1;
	int16_t x5631 = -101;
	static volatile int32_t t82 = 457609;

	t82 = ((x5629<<x5630)<(x5631<=x5632));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x5789 = UINT16_MAX;
	uint16_t x5790 = 0U;
	int16_t x5791 = INT16_MAX;
	uint16_t x5792 = UINT16_MAX;
	int32_t t83 = 947049892;

	t83 = ((x5789<<x5790)<(x5791<=x5792));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5841 = 1U;
	static uint8_t x5842 = 9U;
	int16_t x5843 = 150;
	int32_t x5844 = INT32_MAX;

	t84 = ((x5841<<x5842)<(x5843<=x5844));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5889 = 425335U;
	int16_t x5890 = 0;
	int16_t x5891 = INT16_MIN;
	int8_t x5892 = INT8_MIN;
	static int32_t t85 = -3714;

	t85 = ((x5889<<x5890)<(x5891<=x5892));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x5905 = 2195529854LLU;
	volatile int16_t x5907 = 0;
	int16_t x5908 = INT16_MIN;

	t86 = ((x5905<<x5906)<(x5907<=x5908));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5941 = 892U;
	int8_t x5943 = INT8_MIN;
	volatile uint32_t x5944 = 1917910534U;
	int32_t t87 = 3509;

	t87 = ((x5941<<x5942)<(x5943<=x5944));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5985 = 3U;
	int32_t x5986 = 3;
	int16_t x5987 = 17;
	volatile int32_t t88 = -1;

	t88 = ((x5985<<x5986)<(x5987<=x5988));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x5997 = UINT64_MAX;
	uint32_t x5998 = 2U;
	uint32_t x5999 = UINT32_MAX;
	uint8_t x6000 = 5U;
	volatile int32_t t89 = 2959807;

	t89 = ((x5997<<x5998)<(x5999<=x6000));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x6077 = 998;
	int32_t x6078 = 2;
	static volatile int32_t t90 = 3765;

	t90 = ((x6077<<x6078)<(x6079<=x6080));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x6205 = 764646529U;
	int8_t x6207 = -1;
	static int8_t x6208 = INT8_MIN;
	int32_t t91 = -6680242;

	t91 = ((x6205<<x6206)<(x6207<=x6208));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x6229 = 69860225207293564LLU;
	uint32_t x6230 = 5U;
	volatile int8_t x6231 = 1;
	uint32_t x6232 = UINT32_MAX;
	volatile int32_t t92 = -1;

	t92 = ((x6229<<x6230)<(x6231<=x6232));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x6273 = UINT32_MAX;
	volatile int64_t x6274 = 7LL;
	int8_t x6275 = -1;
	static int8_t x6276 = INT8_MIN;
	volatile int32_t t93 = -7700;

	t93 = ((x6273<<x6274)<(x6275<=x6276));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x6313 = UINT64_MAX;
	static volatile int16_t x6315 = INT16_MIN;
	int32_t x6316 = 9;
	int32_t t94 = 18630;

	t94 = ((x6313<<x6314)<(x6315<=x6316));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x6329 = UINT32_MAX;
	uint64_t x6330 = 1LLU;
	int8_t x6331 = 16;
	volatile int32_t x6332 = INT32_MIN;
	int32_t t95 = 29;

	t95 = ((x6329<<x6330)<(x6331<=x6332));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x6472 = UINT16_MAX;
	volatile int32_t t96 = 5593;

	t96 = ((x6469<<x6470)<(x6471<=x6472));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x6514 = 2;
	int32_t x6515 = 7123894;
	static uint16_t x6516 = 1U;
	static int32_t t97 = 407176;

	t97 = ((x6513<<x6514)<(x6515<=x6516));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x6545 = 1U;
	static int8_t x6546 = 1;
	uint8_t x6547 = UINT8_MAX;
	static int8_t x6548 = -21;
	int32_t t98 = 1;

	t98 = ((x6545<<x6546)<(x6547<=x6548));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x6586 = 12U;
	volatile int64_t x6587 = INT64_MAX;
	int8_t x6588 = INT8_MIN;
	static volatile int32_t t99 = 2772;

	t99 = ((x6585<<x6586)<(x6587<=x6588));

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

