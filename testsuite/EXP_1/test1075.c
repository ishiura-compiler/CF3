#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x82 = 10;
int16_t x83 = INT16_MIN;
int64_t x112 = INT64_MIN;
uint16_t x302 = 3U;
uint64_t x321 = 16767979LLU;
int32_t t5 = -1;
int8_t x394 = 1;
static int32_t x396 = -1;
int32_t t6 = -71296;
uint8_t x454 = 1U;
volatile int32_t t7 = 94031903;
int16_t x460 = INT16_MAX;
int8_t x1124 = INT8_MIN;
volatile int32_t t14 = 16;
static uint64_t x1237 = 6622648302LLU;
uint8_t x1238 = 39U;
static uint8_t x1275 = 3U;
int32_t x1295 = INT32_MIN;
static volatile int32_t t17 = -4389;
int32_t x1402 = 8;
uint8_t x1474 = 3U;
volatile int16_t x1475 = -1;
volatile int32_t t20 = 497298;
int32_t x1555 = INT32_MAX;
int16_t x1743 = INT16_MAX;
volatile int32_t t22 = -1424;
int16_t x1745 = INT16_MAX;
uint64_t x1817 = 136033386570090030LLU;
static int16_t x1819 = -1;
int16_t x1820 = INT16_MIN;
static uint16_t x1842 = 25U;
int64_t x1871 = INT64_MIN;
volatile int32_t x1905 = 33535844;
int32_t t29 = 65;
int32_t t30 = -91929909;
static int16_t x2031 = -7327;
static volatile int64_t x2113 = 61LL;
static int64_t x2116 = -1942LL;
int8_t x2157 = 3;
volatile uint8_t x2158 = 9U;
volatile int8_t x2256 = 14;
static volatile int8_t x2325 = INT8_MAX;
int8_t x2327 = INT8_MIN;
uint8_t x2385 = 12U;
int32_t x2387 = INT32_MIN;
int32_t x2388 = INT32_MIN;
uint16_t x2401 = 1U;
uint8_t x2459 = 2U;
int32_t x2714 = 11;
static uint16_t x2715 = 572U;
volatile int16_t x2716 = INT16_MIN;
static int32_t t44 = -1616;
int32_t x2881 = 671;
int32_t x2927 = -1;
static uint8_t x2963 = 15U;
int32_t t49 = -90334581;
uint32_t x3041 = UINT32_MAX;
static int8_t x3043 = INT8_MIN;
static volatile int32_t t51 = 2129337;
int8_t x3165 = 1;
uint32_t x3197 = 201735418U;
uint16_t x3334 = 1U;
int32_t x3374 = 2;
int32_t x3375 = INT32_MIN;
volatile int32_t t56 = -1489115;
int32_t t57 = 10;
volatile int16_t x3654 = 1;
int32_t x3705 = 0;
static int16_t x3824 = 740;
int32_t t60 = -7084;
int16_t x3858 = 3;
static int8_t x3918 = 0;
volatile uint32_t x4068 = 3U;
int8_t x4075 = INT8_MIN;
volatile uint8_t x4138 = 1U;
int32_t x4263 = -1;
volatile uint64_t x4305 = 11043095LLU;
uint64_t x4392 = 23031LLU;
volatile int16_t x4401 = 18;
static int16_t x4402 = 3;
int32_t x4445 = INT32_MAX;
int16_t x4448 = 4427;
volatile int32_t t72 = -232;
int32_t x4457 = INT32_MAX;
int32_t t73 = 82229;
uint32_t x4462 = 20U;
uint8_t x4822 = 9U;
volatile int32_t t78 = -1391;
int16_t x4968 = INT16_MIN;
static volatile uint16_t x5056 = 1458U;
volatile int8_t x5071 = INT8_MIN;
static int32_t t81 = 2425;
uint16_t x5092 = UINT16_MAX;
int32_t x5273 = INT32_MAX;
uint64_t x5275 = UINT64_MAX;
uint8_t x5276 = 3U;
int8_t x5312 = INT8_MAX;
static int32_t t86 = -2087254;
static volatile uint8_t x5606 = 6U;
uint64_t x5657 = 42013712LLU;
uint32_t x5838 = 8U;
int16_t x5878 = 11;
int16_t x5880 = INT16_MAX;
volatile int8_t x5896 = INT8_MIN;
volatile int64_t x5900 = INT64_MIN;
int32_t x5956 = -1;
int16_t x6021 = 5760;
uint8_t x6023 = 1U;
int32_t t95 = -128876197;
uint32_t x6037 = 1167U;
int16_t x6083 = -1;
int64_t x6084 = INT64_MIN;
int32_t x6171 = INT32_MIN;


void f0(void) {
	volatile uint64_t x81 = UINT64_MAX;
	static uint32_t x84 = UINT32_MAX;
	volatile int32_t t0 = -26206;

	t0 = (((x81>>x82)%x83)<x84);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x109 = 2;
	volatile int32_t x110 = 0;
	int64_t x111 = INT64_MIN;
	int32_t t1 = 6870418;

	t1 = (((x109>>x110)%x111)<x112);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x181 = 136402317U;
	static uint8_t x182 = 0U;
	static int32_t x183 = -53495770;
	static int16_t x184 = 2001;
	int32_t t2 = 122089326;

	t2 = (((x181>>x182)%x183)<x184);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x301 = INT32_MAX;
	int64_t x303 = -11LL;
	static volatile int32_t x304 = INT32_MAX;
	static volatile int32_t t3 = 3228;

	t3 = (((x301>>x302)%x303)<x304);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x322 = 1U;
	int32_t x323 = -1;
	uint16_t x324 = UINT16_MAX;
	static volatile int32_t t4 = 139270957;

	t4 = (((x321>>x322)%x323)<x324);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x333 = INT32_MAX;
	volatile int16_t x334 = 4;
	int16_t x335 = INT16_MAX;
	int8_t x336 = INT8_MIN;

	t5 = (((x333>>x334)%x335)<x336);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x393 = 350547462316779275LLU;
	uint8_t x395 = UINT8_MAX;

	t6 = (((x393>>x394)%x395)<x396);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x453 = 1U;
	volatile uint64_t x455 = UINT64_MAX;
	int32_t x456 = INT32_MIN;

	t7 = (((x453>>x454)%x455)<x456);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x457 = 4181980;
	uint8_t x458 = 11U;
	volatile int32_t x459 = -24;
	static volatile int32_t t8 = -50;

	t8 = (((x457>>x458)%x459)<x460);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x549 = 1222U;
	volatile uint8_t x550 = 1U;
	volatile int64_t x551 = -3119741LL;
	static int16_t x552 = INT16_MIN;
	int32_t t9 = 16164079;

	t9 = (((x549>>x550)%x551)<x552);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x657 = INT8_MAX;
	volatile uint8_t x658 = 1U;
	volatile uint16_t x659 = 2U;
	volatile int32_t x660 = -1;
	static volatile int32_t t10 = -1;

	t10 = (((x657>>x658)%x659)<x660);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x721 = 104;
	volatile int8_t x722 = 25;
	volatile int16_t x723 = INT16_MAX;
	volatile int32_t x724 = INT32_MIN;
	volatile int32_t t11 = -3464;

	t11 = (((x721>>x722)%x723)<x724);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x941 = UINT32_MAX;
	int8_t x942 = 1;
	uint32_t x943 = 649U;
	uint16_t x944 = 5U;
	static volatile int32_t t12 = 93;

	t12 = (((x941>>x942)%x943)<x944);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x973 = 3U;
	int8_t x974 = 6;
	uint8_t x975 = 5U;
	volatile int8_t x976 = -1;
	volatile int32_t t13 = 30188;

	t13 = (((x973>>x974)%x975)<x976);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x1121 = 850012920U;
	volatile uint8_t x1122 = 6U;
	static int32_t x1123 = INT32_MAX;

	t14 = (((x1121>>x1122)%x1123)<x1124);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1239 = 282429U;
	volatile int32_t x1240 = -1;
	int32_t t15 = -1;

	t15 = (((x1237>>x1238)%x1239)<x1240);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1273 = INT16_MAX;
	static uint16_t x1274 = 2U;
	int8_t x1276 = -40;
	volatile int32_t t16 = 14538;

	t16 = (((x1273>>x1274)%x1275)<x1276);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1293 = UINT64_MAX;
	static volatile uint16_t x1294 = 22U;
	uint64_t x1296 = UINT64_MAX;

	t17 = (((x1293>>x1294)%x1295)<x1296);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x1317 = INT64_MAX;
	int32_t x1318 = 0;
	uint64_t x1319 = UINT64_MAX;
	uint16_t x1320 = 3058U;
	int32_t t18 = -15499017;

	t18 = (((x1317>>x1318)%x1319)<x1320);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1401 = 34U;
	int32_t x1403 = INT32_MAX;
	uint16_t x1404 = 146U;
	int32_t t19 = -24;

	t19 = (((x1401>>x1402)%x1403)<x1404);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x1473 = 44757U;
	uint16_t x1476 = 20U;

	t20 = (((x1473>>x1474)%x1475)<x1476);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1553 = 51763LL;
	uint8_t x1554 = 0U;
	static int32_t x1556 = INT32_MIN;
	volatile int32_t t21 = -69521;

	t21 = (((x1553>>x1554)%x1555)<x1556);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1741 = 0;
	uint8_t x1742 = 27U;
	static volatile int16_t x1744 = -1;

	t22 = (((x1741>>x1742)%x1743)<x1744);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1746 = 6U;
	int8_t x1747 = -1;
	volatile uint8_t x1748 = 31U;
	int32_t t23 = 4;

	t23 = (((x1745>>x1746)%x1747)<x1748);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1818 = 2;
	static volatile int32_t t24 = -310805;

	t24 = (((x1817>>x1818)%x1819)<x1820);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1841 = INT8_MAX;
	int64_t x1843 = -559902594347325LL;
	int32_t x1844 = INT32_MIN;
	static int32_t t25 = -498931;

	t25 = (((x1841>>x1842)%x1843)<x1844);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1849 = UINT16_MAX;
	uint8_t x1850 = 6U;
	uint32_t x1851 = 6661342U;
	static int64_t x1852 = INT64_MIN;
	static volatile int32_t t26 = -3;

	t26 = (((x1849>>x1850)%x1851)<x1852);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1869 = 5951LLU;
	static int64_t x1870 = 4LL;
	volatile uint64_t x1872 = 10604865LLU;
	int32_t t27 = -2593423;

	t27 = (((x1869>>x1870)%x1871)<x1872);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x1885 = 3U;
	uint8_t x1886 = 2U;
	uint16_t x1887 = UINT16_MAX;
	uint8_t x1888 = 114U;
	int32_t t28 = 1;

	t28 = (((x1885>>x1886)%x1887)<x1888);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1906 = 2;
	int8_t x1907 = INT8_MIN;
	int64_t x1908 = 66993994432220LL;

	t29 = (((x1905>>x1906)%x1907)<x1908);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x1961 = 295653619LL;
	uint32_t x1962 = 1U;
	static int32_t x1963 = -1750;
	int16_t x1964 = INT16_MIN;

	t30 = (((x1961>>x1962)%x1963)<x1964);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x2009 = UINT16_MAX;
	static uint32_t x2010 = 1U;
	uint8_t x2011 = UINT8_MAX;
	uint32_t x2012 = 73122004U;
	int32_t t31 = 337;

	t31 = (((x2009>>x2010)%x2011)<x2012);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x2029 = INT64_MAX;
	volatile uint16_t x2030 = 1U;
	static int8_t x2032 = 1;
	int32_t t32 = -618859650;

	t32 = (((x2029>>x2030)%x2031)<x2032);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2114 = 2U;
	int64_t x2115 = INT64_MAX;
	int32_t t33 = 231175;

	t33 = (((x2113>>x2114)%x2115)<x2116);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x2159 = -1LL;
	int32_t x2160 = INT32_MIN;
	static int32_t t34 = -376601;

	t34 = (((x2157>>x2158)%x2159)<x2160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x2209 = 1654LL;
	uint8_t x2210 = 1U;
	uint32_t x2211 = 1078U;
	static volatile int32_t x2212 = -923527789;
	volatile int32_t t35 = -128988099;

	t35 = (((x2209>>x2210)%x2211)<x2212);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2253 = INT64_MAX;
	uint16_t x2254 = 1U;
	uint32_t x2255 = UINT32_MAX;
	int32_t t36 = -102;

	t36 = (((x2253>>x2254)%x2255)<x2256);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2326 = 0;
	static int32_t x2328 = INT32_MAX;
	int32_t t37 = 1294;

	t37 = (((x2325>>x2326)%x2327)<x2328);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2365 = 974485093759302344LL;
	static volatile uint8_t x2366 = 8U;
	uint64_t x2367 = 38587LLU;
	int32_t x2368 = INT32_MIN;
	volatile int32_t t38 = -10400;

	t38 = (((x2365>>x2366)%x2367)<x2368);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2386 = 1U;
	volatile int32_t t39 = 1193;

	t39 = (((x2385>>x2386)%x2387)<x2388);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2402 = 1LL;
	int32_t x2403 = -1;
	uint16_t x2404 = 5U;
	volatile int32_t t40 = -14;

	t40 = (((x2401>>x2402)%x2403)<x2404);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2457 = 0U;
	int8_t x2458 = 14;
	uint64_t x2460 = 8580530466942506414LLU;
	int32_t t41 = -14040;

	t41 = (((x2457>>x2458)%x2459)<x2460);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2565 = 17452374311777LL;
	uint16_t x2566 = 1U;
	int32_t x2567 = INT32_MAX;
	volatile int32_t x2568 = INT32_MIN;
	int32_t t42 = 12143758;

	t42 = (((x2565>>x2566)%x2567)<x2568);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2713 = 1U;
	int32_t t43 = 31697;

	t43 = (((x2713>>x2714)%x2715)<x2716);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2877 = INT32_MAX;
	uint16_t x2878 = 2U;
	int16_t x2879 = INT16_MAX;
	int16_t x2880 = -9264;

	t44 = (((x2877>>x2878)%x2879)<x2880);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x2882 = 4U;
	volatile int64_t x2883 = INT64_MAX;
	uint32_t x2884 = 31287947U;
	volatile int32_t t45 = 6;

	t45 = (((x2881>>x2882)%x2883)<x2884);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x2917 = UINT32_MAX;
	uint8_t x2918 = 1U;
	volatile int16_t x2919 = -60;
	static int8_t x2920 = -1;
	static volatile int32_t t46 = -9554979;

	t46 = (((x2917>>x2918)%x2919)<x2920);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2925 = 415379U;
	uint8_t x2926 = 1U;
	volatile int32_t x2928 = -1;
	volatile int32_t t47 = 12;

	t47 = (((x2925>>x2926)%x2927)<x2928);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x2961 = 28242317068LLU;
	static volatile uint8_t x2962 = 1U;
	static uint32_t x2964 = 198U;
	static int32_t t48 = 6839760;

	t48 = (((x2961>>x2962)%x2963)<x2964);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2989 = UINT8_MAX;
	uint16_t x2990 = 1U;
	uint16_t x2991 = 224U;
	int16_t x2992 = INT16_MAX;

	t49 = (((x2989>>x2990)%x2991)<x2992);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3042 = 2;
	volatile int8_t x3044 = -1;
	int32_t t50 = 3243676;

	t50 = (((x3041>>x3042)%x3043)<x3044);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3109 = INT64_MAX;
	int8_t x3110 = 9;
	volatile int16_t x3111 = INT16_MIN;
	int32_t x3112 = INT32_MIN;

	t51 = (((x3109>>x3110)%x3111)<x3112);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3149 = 1;
	static int32_t x3150 = 3;
	static int16_t x3151 = INT16_MIN;
	int32_t x3152 = INT32_MIN;
	volatile int32_t t52 = -81066;

	t52 = (((x3149>>x3150)%x3151)<x3152);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3166 = 14;
	int8_t x3167 = 1;
	volatile int16_t x3168 = -1;
	static volatile int32_t t53 = -87;

	t53 = (((x3165>>x3166)%x3167)<x3168);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3198 = 23;
	int32_t x3199 = -1;
	volatile int32_t x3200 = -75;
	volatile int32_t t54 = -110533;

	t54 = (((x3197>>x3198)%x3199)<x3200);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x3333 = 710932;
	uint64_t x3335 = 7844544329LLU;
	uint32_t x3336 = UINT32_MAX;
	int32_t t55 = 13855513;

	t55 = (((x3333>>x3334)%x3335)<x3336);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x3373 = UINT8_MAX;
	volatile int64_t x3376 = -1LL;

	t56 = (((x3373>>x3374)%x3375)<x3376);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3533 = 15U;
	int8_t x3534 = 1;
	int8_t x3535 = INT8_MIN;
	int64_t x3536 = -59544770LL;

	t57 = (((x3533>>x3534)%x3535)<x3536);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3653 = INT64_MAX;
	volatile uint32_t x3655 = 242U;
	static volatile uint8_t x3656 = UINT8_MAX;
	volatile int32_t t58 = 2;

	t58 = (((x3653>>x3654)%x3655)<x3656);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3706 = 2;
	uint16_t x3707 = 100U;
	int8_t x3708 = 0;
	static int32_t t59 = -1;

	t59 = (((x3705>>x3706)%x3707)<x3708);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3821 = 4;
	static int32_t x3822 = 3;
	uint64_t x3823 = UINT64_MAX;

	t60 = (((x3821>>x3822)%x3823)<x3824);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3857 = 520746896;
	static uint16_t x3859 = UINT16_MAX;
	volatile int16_t x3860 = INT16_MAX;
	volatile int32_t t61 = -284;

	t61 = (((x3857>>x3858)%x3859)<x3860);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3917 = UINT16_MAX;
	volatile uint16_t x3919 = UINT16_MAX;
	int8_t x3920 = INT8_MAX;
	volatile int32_t t62 = -7;

	t62 = (((x3917>>x3918)%x3919)<x3920);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3993 = 0;
	uint32_t x3994 = 0U;
	int8_t x3995 = INT8_MAX;
	int8_t x3996 = -1;
	volatile int32_t t63 = 54;

	t63 = (((x3993>>x3994)%x3995)<x3996);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4065 = 243473269173LLU;
	uint16_t x4066 = 4U;
	int8_t x4067 = -53;
	int32_t t64 = 1411494;

	t64 = (((x4065>>x4066)%x4067)<x4068);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x4073 = 1177LLU;
	static uint16_t x4074 = 0U;
	uint16_t x4076 = 1U;
	int32_t t65 = -183;

	t65 = (((x4073>>x4074)%x4075)<x4076);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4137 = INT8_MAX;
	int32_t x4139 = INT32_MIN;
	uint64_t x4140 = UINT64_MAX;
	int32_t t66 = -56;

	t66 = (((x4137>>x4138)%x4139)<x4140);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x4225 = UINT8_MAX;
	uint8_t x4226 = 12U;
	static uint64_t x4227 = 55796012LLU;
	uint8_t x4228 = 0U;
	int32_t t67 = 208012;

	t67 = (((x4225>>x4226)%x4227)<x4228);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x4261 = 33468379035971741LLU;
	uint8_t x4262 = 46U;
	uint16_t x4264 = UINT16_MAX;
	int32_t t68 = -559;

	t68 = (((x4261>>x4262)%x4263)<x4264);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4306 = 1;
	int32_t x4307 = INT32_MIN;
	int64_t x4308 = -363580LL;
	volatile int32_t t69 = 7;

	t69 = (((x4305>>x4306)%x4307)<x4308);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4389 = 55;
	static uint8_t x4390 = 1U;
	int16_t x4391 = 12;
	int32_t t70 = 2;

	t70 = (((x4389>>x4390)%x4391)<x4392);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4403 = -1060;
	volatile int64_t x4404 = INT64_MIN;
	int32_t t71 = -22;

	t71 = (((x4401>>x4402)%x4403)<x4404);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4446 = 1U;
	int32_t x4447 = INT32_MIN;

	t72 = (((x4445>>x4446)%x4447)<x4448);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4458 = 0;
	uint8_t x4459 = 55U;
	volatile int32_t x4460 = -4058041;

	t73 = (((x4457>>x4458)%x4459)<x4460);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4461 = INT8_MAX;
	uint8_t x4463 = UINT8_MAX;
	int32_t x4464 = -170384;
	int32_t t74 = -4449;

	t74 = (((x4461>>x4462)%x4463)<x4464);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4609 = 100U;
	uint64_t x4610 = 16LLU;
	static int16_t x4611 = -17;
	uint16_t x4612 = 24509U;
	volatile int32_t t75 = 1022064699;

	t75 = (((x4609>>x4610)%x4611)<x4612);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4749 = INT16_MAX;
	uint32_t x4750 = 1U;
	volatile int8_t x4751 = -1;
	int8_t x4752 = INT8_MIN;
	int32_t t76 = 1;

	t76 = (((x4749>>x4750)%x4751)<x4752);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4817 = 0;
	uint64_t x4818 = 0LLU;
	static volatile int32_t x4819 = -1;
	int16_t x4820 = -7;
	volatile int32_t t77 = -55334137;

	t77 = (((x4817>>x4818)%x4819)<x4820);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4821 = 10U;
	uint16_t x4823 = 39U;
	uint16_t x4824 = 1U;

	t78 = (((x4821>>x4822)%x4823)<x4824);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x4965 = 13411708U;
	int32_t x4966 = 0;
	int8_t x4967 = 2;
	static volatile int32_t t79 = 6660437;

	t79 = (((x4965>>x4966)%x4967)<x4968);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5053 = 6U;
	int8_t x5054 = 13;
	static int32_t x5055 = -1;
	volatile int32_t t80 = -1733043;

	t80 = (((x5053>>x5054)%x5055)<x5056);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x5069 = 5202168175525236LLU;
	uint32_t x5070 = 6U;
	static int8_t x5072 = 2;

	t81 = (((x5069>>x5070)%x5071)<x5072);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5089 = 179;
	uint8_t x5090 = 21U;
	int64_t x5091 = INT64_MIN;
	static volatile int32_t t82 = -4692524;

	t82 = (((x5089>>x5090)%x5091)<x5092);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x5193 = 15;
	volatile uint16_t x5194 = 9U;
	static int16_t x5195 = INT16_MIN;
	int64_t x5196 = INT64_MIN;
	int32_t t83 = -512742;

	t83 = (((x5193>>x5194)%x5195)<x5196);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5274 = 12U;
	volatile int32_t t84 = -9250582;

	t84 = (((x5273>>x5274)%x5275)<x5276);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5309 = UINT8_MAX;
	static int16_t x5310 = 0;
	volatile uint8_t x5311 = UINT8_MAX;
	volatile int32_t t85 = -130149292;

	t85 = (((x5309>>x5310)%x5311)<x5312);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5477 = 23109980373947268LL;
	uint8_t x5478 = 3U;
	int8_t x5479 = 16;
	int32_t x5480 = -12109536;

	t86 = (((x5477>>x5478)%x5479)<x5480);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5605 = INT8_MAX;
	int32_t x5607 = INT32_MIN;
	volatile int32_t x5608 = -1;
	int32_t t87 = -1213427;

	t87 = (((x5605>>x5606)%x5607)<x5608);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5658 = 0U;
	int8_t x5659 = INT8_MIN;
	uint16_t x5660 = 193U;
	volatile int32_t t88 = -1;

	t88 = (((x5657>>x5658)%x5659)<x5660);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5837 = 2810;
	int8_t x5839 = INT8_MIN;
	volatile int64_t x5840 = INT64_MIN;
	int32_t t89 = 6566722;

	t89 = (((x5837>>x5838)%x5839)<x5840);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5849 = 1U;
	int8_t x5850 = 14;
	static int32_t x5851 = 6;
	volatile int8_t x5852 = -1;
	int32_t t90 = -575014;

	t90 = (((x5849>>x5850)%x5851)<x5852);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5877 = UINT32_MAX;
	int16_t x5879 = INT16_MIN;
	volatile int32_t t91 = 142733;

	t91 = (((x5877>>x5878)%x5879)<x5880);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5893 = INT16_MAX;
	uint32_t x5894 = 12U;
	static int64_t x5895 = INT64_MAX;
	int32_t t92 = -2155965;

	t92 = (((x5893>>x5894)%x5895)<x5896);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5897 = INT32_MAX;
	uint8_t x5898 = 1U;
	volatile int32_t x5899 = INT32_MIN;
	int32_t t93 = 1;

	t93 = (((x5897>>x5898)%x5899)<x5900);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x5953 = 242329472929141555LLU;
	int16_t x5954 = 24;
	uint16_t x5955 = UINT16_MAX;
	static int32_t t94 = 2424;

	t94 = (((x5953>>x5954)%x5955)<x5956);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x6022 = 19U;
	volatile int8_t x6024 = 2;

	t95 = (((x6021>>x6022)%x6023)<x6024);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x6038 = 2LLU;
	int32_t x6039 = INT32_MIN;
	int64_t x6040 = INT64_MIN;
	int32_t t96 = -70987934;

	t96 = (((x6037>>x6038)%x6039)<x6040);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6081 = INT64_MAX;
	uint8_t x6082 = 8U;
	static volatile int32_t t97 = -91;

	t97 = (((x6081>>x6082)%x6083)<x6084);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x6089 = INT64_MAX;
	volatile uint16_t x6090 = 6U;
	volatile int16_t x6091 = -801;
	static int64_t x6092 = INT64_MAX;
	int32_t t98 = -1;

	t98 = (((x6089>>x6090)%x6091)<x6092);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x6169 = UINT16_MAX;
	volatile uint8_t x6170 = 0U;
	volatile int64_t x6172 = INT64_MIN;
	int32_t t99 = -13908031;

	t99 = (((x6169>>x6170)%x6171)<x6172);

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

