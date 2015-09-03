#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x66 = 20LLU;
volatile int16_t x223 = -1;
volatile uint64_t x313 = UINT64_MAX;
uint64_t x514 = 24320414802767LLU;
uint16_t x515 = 0U;
int16_t x516 = 44;
uint64_t t5 = 63LLU;
uint32_t x843 = UINT32_MAX;
int8_t x964 = 14;
uint8_t x1028 = 1U;
uint64_t x1061 = UINT64_MAX;
static int16_t x1066 = INT16_MIN;
uint64_t x1070 = 9741161762731LLU;
uint16_t x1072 = 3U;
static uint64_t x1081 = 31719397772493LLU;
volatile uint32_t t16 = 177341878U;
volatile int8_t x1133 = 0;
uint32_t t18 = 329207U;
int16_t x1222 = INT16_MIN;
int64_t x1252 = 8LL;
uint16_t x1270 = UINT16_MAX;
volatile int64_t t23 = 0LL;
volatile uint64_t x1343 = UINT64_MAX;
uint64_t t24 = 88289LLU;
int8_t x1349 = -1;
int32_t x1350 = -1;
int32_t t25 = 10;
volatile int32_t t26 = -407532402;
int32_t x1494 = -108805735;
uint16_t x1496 = 5U;
static int64_t x1502 = INT64_MIN;
static uint64_t t29 = 3487425148658021LLU;
int32_t x1674 = INT32_MAX;
int16_t x1793 = -1;
volatile int64_t x1794 = INT64_MIN;
int16_t x1835 = INT16_MAX;
int32_t t34 = -4;
static uint32_t t36 = 3575659U;
volatile uint32_t x2066 = 1832U;
volatile int64_t x2067 = -1LL;
volatile int8_t x2068 = 31;
uint64_t t42 = 37LLU;
int64_t t45 = 280960LL;
uint8_t x2380 = 46U;
volatile uint64_t t46 = 7LLU;
static int16_t x2506 = INT16_MAX;
uint8_t x2508 = 26U;
int64_t x2562 = INT64_MAX;
volatile int16_t x2577 = INT16_MAX;
uint32_t x2579 = 187509U;
int64_t x2580 = 59LL;
volatile uint64_t x2658 = 369352124LLU;
static uint64_t x2741 = UINT64_MAX;
static volatile uint64_t x2742 = 1224477829340LLU;
int8_t x2744 = 1;
uint64_t t57 = 28296724435659LLU;
uint8_t x2914 = 23U;
int32_t x2940 = 36;
static int8_t x2976 = 7;
uint32_t x3046 = 10311U;
volatile int8_t x3135 = -1;
uint8_t x3152 = 15U;
volatile uint64_t t66 = 2504724LLU;
uint64_t x3470 = 739361136439230704LLU;
int64_t x3661 = -1LL;
int8_t x3662 = INT8_MIN;
int64_t t69 = 4059701223LL;
static volatile int8_t x3737 = -1;
uint8_t x3740 = 13U;
static volatile uint64_t t70 = 123769LLU;
static int32_t x3857 = INT32_MIN;
static uint64_t x3858 = UINT64_MAX;
uint32_t x3903 = 8U;
volatile uint32_t t74 = 406U;
int16_t x3909 = 1510;
uint32_t x4023 = 0U;
int16_t x4103 = INT16_MIN;
volatile int8_t x4133 = -1;
int16_t x4134 = INT16_MIN;
int8_t x4185 = -14;
int8_t x4188 = 2;
static uint64_t x4561 = UINT64_MAX;
volatile int64_t t88 = -7400593LL;
volatile int64_t x4765 = -1LL;
uint32_t x4801 = UINT32_MAX;
uint8_t x4892 = 1U;
static uint32_t x4933 = 41761U;
static uint64_t x4963 = UINT64_MAX;
uint8_t x4964 = 14U;
uint32_t x4997 = UINT32_MAX;
uint64_t x5057 = 12841229683LLU;
volatile uint16_t x5109 = 1U;
int32_t x5111 = INT32_MIN;


void f0(void) {
	volatile uint8_t x45 = UINT8_MAX;
	volatile int8_t x46 = -1;
	uint32_t x47 = 28086U;
	uint8_t x48 = 7U;
	volatile uint32_t t0 = 250175U;

	t0 = ((x45*(x46+x47))>>x48);

	if (t0 != 55950U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x65 = 9;
	uint8_t x67 = 9U;
	uint8_t x68 = 0U;
	uint64_t t1 = 2732LLU;

	t1 = ((x65*(x66+x67))>>x68);

	if (t1 != 261LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x145 = INT16_MAX;
	static int8_t x146 = INT8_MIN;
	int16_t x147 = 2902;
	uint16_t x148 = 11U;
	static volatile int32_t t2 = -123903250;

	t2 = ((x145*(x146+x147))>>x148);

	if (t2 != 44382) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x221 = 933U;
	uint16_t x222 = 29040U;
	int8_t x224 = 0;
	volatile uint32_t t3 = 1U;

	t3 = ((x221*(x222+x223))>>x224);

	if (t3 != 27093387U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x314 = -1;
	int8_t x315 = INT8_MIN;
	uint32_t x316 = 2U;
	uint64_t t4 = 63536238377LLU;

	t4 = ((x313*(x314+x315))>>x316);

	if (t4 != 32LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x513 = INT32_MAX;

	t5 = ((x513*(x514+x515))>>x516);

	if (t5 != 281977LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x569 = INT8_MAX;
	uint32_t x570 = 17012093U;
	volatile int16_t x571 = -1;
	static volatile uint8_t x572 = 3U;
	uint32_t t6 = 21162U;

	t6 = ((x569*(x570+x571))>>x572);

	if (t6 != 270066960U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x725 = INT16_MAX;
	int64_t x726 = -1LL;
	static volatile uint8_t x727 = 97U;
	int8_t x728 = 0;
	volatile int64_t t7 = -710584055LL;

	t7 = ((x725*(x726+x727))>>x728);

	if (t7 != 3145632LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x841 = INT16_MIN;
	uint8_t x842 = 1U;
	static uint8_t x844 = 7U;
	uint32_t t8 = 5U;

	t8 = ((x841*(x842+x843))>>x844);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x961 = 5100823500LL;
	static volatile int8_t x962 = INT8_MIN;
	volatile uint64_t x963 = UINT64_MAX;
	volatile uint64_t t9 = 19LLU;

	t9 = ((x961*(x962+x963))>>x964);

	if (t9 != 1125899866681110LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x981 = -42;
	int64_t x982 = 231245LL;
	int64_t x983 = -428554052LL;
	int8_t x984 = 1;
	int64_t t10 = -38570180LL;

	t10 = ((x981*(x982+x983))>>x984);

	if (t10 != 8994778947LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x1025 = -1;
	uint8_t x1026 = UINT8_MAX;
	uint32_t x1027 = 1U;
	uint32_t t11 = 51U;

	t11 = ((x1025*(x1026+x1027))>>x1028);

	if (t11 != 2147483520U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x1062 = -1;
	int16_t x1063 = INT16_MIN;
	uint8_t x1064 = 3U;
	volatile uint64_t t12 = 348LLU;

	t12 = ((x1061*(x1062+x1063))>>x1064);

	if (t12 != 4096LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1065 = 2;
	uint64_t x1067 = 1073347931509911LLU;
	int8_t x1068 = 0;
	uint64_t t13 = 41553122621503LLU;

	t13 = ((x1065*(x1066+x1067))>>x1068);

	if (t13 != 2146695862954286LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1069 = 612739449311LL;
	int8_t x1071 = INT8_MIN;
	uint64_t t14 = 693836121461LLU;

	t14 = ((x1069*(x1070+x1071))>>x1072);

	if (t14 != 2250953085017078830LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1082 = 196737;
	int16_t x1083 = INT16_MIN;
	volatile uint16_t x1084 = 2U;
	uint64_t t15 = 44229596LLU;

	t15 = ((x1081*(x1082+x1083))>>x1084);

	if (t15 != 1300249483339476179LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1109 = -1;
	volatile uint16_t x1110 = 3U;
	uint32_t x1111 = UINT32_MAX;
	volatile uint8_t x1112 = 7U;

	t16 = ((x1109*(x1110+x1111))>>x1112);

	if (t16 != 33554431U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x1134 = UINT64_MAX;
	int32_t x1135 = INT32_MIN;
	uint16_t x1136 = 2U;
	volatile uint64_t t17 = 146197025LLU;

	t17 = ((x1133*(x1134+x1135))>>x1136);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1145 = INT32_MIN;
	uint32_t x1146 = 267439U;
	uint8_t x1147 = 2U;
	int8_t x1148 = 4;

	t18 = ((x1145*(x1146+x1147))>>x1148);

	if (t18 != 134217728U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1181 = 230U;
	volatile uint64_t x1182 = 8113980220LLU;
	uint8_t x1183 = 1U;
	int16_t x1184 = 1;
	static uint64_t t19 = 614LLU;

	t19 = ((x1181*(x1182+x1183))>>x1184);

	if (t19 != 933107725415LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1221 = INT8_MIN;
	static int16_t x1223 = INT16_MIN;
	int8_t x1224 = 22;
	volatile int32_t t20 = -106225524;

	t20 = ((x1221*(x1222+x1223))>>x1224);

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x1249 = 5;
	uint32_t x1250 = 477U;
	uint8_t x1251 = 0U;
	volatile uint32_t t21 = 0U;

	t21 = ((x1249*(x1250+x1251))>>x1252);

	if (t21 != 9U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1269 = 10U;
	static int64_t x1271 = 137202756594079949LL;
	uint8_t x1272 = 29U;
	int64_t t22 = 864840711078LL;

	t22 = ((x1269*(x1270+x1271))>>x1272);

	if (t22 != 2555600490LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1293 = INT16_MIN;
	int64_t x1294 = -1LL;
	uint8_t x1295 = 1U;
	static int32_t x1296 = 17;

	t23 = ((x1293*(x1294+x1295))>>x1296);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1341 = UINT64_MAX;
	static volatile uint64_t x1342 = 82836LLU;
	int16_t x1344 = 1;

	t24 = ((x1341*(x1342+x1343))>>x1344);

	if (t24 != 9223372036854734390LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1351 = INT8_MIN;
	int32_t x1352 = 2;

	t25 = ((x1349*(x1350+x1351))>>x1352);

	if (t25 != 32) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x1397 = -2;
	int8_t x1398 = INT8_MIN;
	volatile int16_t x1399 = INT16_MIN;
	static volatile uint16_t x1400 = 19U;

	t26 = ((x1397*(x1398+x1399))>>x1400);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x1493 = UINT64_MAX;
	int8_t x1495 = INT8_MIN;
	static volatile uint64_t t27 = 8767290256769918235LLU;

	t27 = ((x1493*(x1494+x1495))>>x1496);

	if (t27 != 3400183LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1501 = -1LL;
	static int16_t x1503 = 13;
	static int16_t x1504 = 0;
	volatile int64_t t28 = -3801LL;

	t28 = ((x1501*(x1502+x1503))>>x1504);

	if (t28 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x1553 = 18;
	uint64_t x1554 = UINT64_MAX;
	static int32_t x1555 = INT32_MIN;
	static uint32_t x1556 = 3U;

	t29 = ((x1553*(x1554+x1555))>>x1556);

	if (t29 != 2305843004381855741LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x1577 = INT64_MIN;
	static uint8_t x1578 = 15U;
	static volatile uint64_t x1579 = 32213142648290001LLU;
	uint8_t x1580 = 33U;
	uint64_t t30 = 9034LLU;

	t30 = ((x1577*(x1578+x1579))>>x1580);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1673 = 0LLU;
	uint64_t x1675 = 677492841171333LLU;
	int8_t x1676 = 59;
	volatile uint64_t t31 = 25796037965LLU;

	t31 = ((x1673*(x1674+x1675))>>x1676);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1785 = UINT8_MAX;
	volatile int32_t x1786 = 65581;
	volatile int8_t x1787 = INT8_MIN;
	static int16_t x1788 = 22;
	int32_t t32 = -1468060;

	t32 = ((x1785*(x1786+x1787))>>x1788);

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1795 = 3093U;
	int16_t x1796 = 0;
	static volatile int64_t t33 = 30015128385454819LL;

	t33 = ((x1793*(x1794+x1795))>>x1796);

	if (t33 != 9223372036854772715LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x1833 = 0U;
	static int16_t x1834 = INT16_MIN;
	static uint8_t x1836 = 6U;

	t34 = ((x1833*(x1834+x1835))>>x1836);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1857 = INT16_MIN;
	int8_t x1858 = INT8_MIN;
	int16_t x1859 = -1;
	int8_t x1860 = 0;
	volatile int32_t t35 = -6166938;

	t35 = ((x1857*(x1858+x1859))>>x1860);

	if (t35 != 4227072) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x1881 = 13392;
	uint32_t x1882 = 351800U;
	uint16_t x1883 = UINT16_MAX;
	static int16_t x1884 = 0;

	t36 = ((x1881*(x1882+x1883))>>x1884);

	if (t36 != 1293983024U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1905 = -1LL;
	int8_t x1906 = -1;
	int32_t x1907 = -1;
	uint8_t x1908 = 0U;
	volatile int64_t t37 = 3272748585325704235LL;

	t37 = ((x1905*(x1906+x1907))>>x1908);

	if (t37 != 2LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2029 = UINT16_MAX;
	int32_t x2030 = 13912955;
	static int64_t x2031 = -1LL;
	uint8_t x2032 = 14U;
	int64_t t38 = -785LL;

	t38 = ((x2029*(x2030+x2031))>>x2032);

	if (t38 != 55650966LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x2065 = 86U;
	int64_t t39 = 58LL;

	t39 = ((x2065*(x2066+x2067))>>x2068);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x2077 = -1;
	volatile uint64_t x2078 = 492150371LLU;
	static uint8_t x2079 = UINT8_MAX;
	volatile uint32_t x2080 = 22U;
	uint64_t t40 = 36620428LLU;

	t40 = ((x2077*(x2078+x2079))>>x2080);

	if (t40 != 4398046510986LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2173 = 3U;
	uint32_t x2174 = UINT32_MAX;
	static uint32_t x2175 = 138223674U;
	int8_t x2176 = 21;
	uint32_t t41 = 1U;

	t41 = ((x2173*(x2174+x2175))>>x2176);

	if (t41 != 197U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2221 = INT8_MAX;
	int8_t x2222 = INT8_MIN;
	volatile uint64_t x2223 = 6578000906316LLU;
	uint8_t x2224 = 2U;

	t42 = ((x2221*(x2222+x2223))>>x2224);

	if (t42 != 208851528771469LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2249 = 21842754707511468LLU;
	volatile uint8_t x2250 = 1U;
	uint32_t x2251 = 10808U;
	int64_t x2252 = 9LL;
	volatile uint64_t t43 = 5LLU;

	t43 = ((x2249*(x2250+x2251))>>x2252);

	if (t43 != 28783997556595387LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x2297 = 15239U;
	int8_t x2298 = -1;
	int8_t x2299 = INT8_MAX;
	uint8_t x2300 = 18U;
	int32_t t44 = 110302327;

	t44 = ((x2297*(x2298+x2299))>>x2300);

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2309 = 581966332U;
	int32_t x2310 = -1;
	int64_t x2311 = 166LL;
	static int8_t x2312 = 0;

	t45 = ((x2309*(x2310+x2311))>>x2312);

	if (t45 != 96024444780LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2377 = INT16_MIN;
	uint8_t x2378 = 7U;
	uint64_t x2379 = UINT64_MAX;

	t46 = ((x2377*(x2378+x2379))>>x2380);

	if (t46 != 262143LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x2421 = 42913LL;
	uint8_t x2422 = UINT8_MAX;
	int16_t x2423 = 1265;
	int16_t x2424 = 2;
	static int64_t t47 = 4022831425036017LL;

	t47 = ((x2421*(x2422+x2423))>>x2424);

	if (t47 != 16306940LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2433 = 1U;
	uint32_t x2434 = 7039374U;
	int8_t x2435 = INT8_MIN;
	int16_t x2436 = 10;
	uint32_t t48 = 1617876337U;

	t48 = ((x2433*(x2434+x2435))>>x2436);

	if (t48 != 6874U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x2457 = INT32_MIN;
	static int64_t x2458 = -1LL;
	uint64_t x2459 = 59344905598LLU;
	int16_t x2460 = 51;
	uint64_t t49 = 2363979770884309LLU;

	t49 = ((x2457*(x2458+x2459))>>x2460);

	if (t49 != 748LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x2461 = INT64_MAX;
	static int64_t x2462 = INT64_MIN;
	uint64_t x2463 = UINT64_MAX;
	int16_t x2464 = 0;
	volatile uint64_t t50 = 930575792571074935LLU;

	t50 = ((x2461*(x2462+x2463))>>x2464);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2505 = -469;
	uint32_t x2507 = 160919959U;
	volatile uint32_t t51 = 936641691U;

	t51 = ((x2505*(x2506+x2507))>>x2508);

	if (t51 != 27U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2561 = INT32_MIN;
	uint64_t x2563 = 377223557925754LLU;
	static int16_t x2564 = 0;
	static volatile uint64_t t52 = 101340562726753LLU;

	t52 = ((x2561*(x2562+x2563))>>x2564);

	if (t52 != 7343711019593629696LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2578 = -1LL;
	int64_t t53 = -223361477902094961LL;

	t53 = ((x2577*(x2578+x2579))>>x2580);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2605 = INT16_MIN;
	static volatile int8_t x2606 = -1;
	uint32_t x2607 = UINT32_MAX;
	uint16_t x2608 = 13U;
	uint32_t t54 = 111073043U;

	t54 = ((x2605*(x2606+x2607))>>x2608);

	if (t54 != 8U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2657 = 1;
	int64_t x2659 = INT64_MAX;
	static int8_t x2660 = 7;
	uint64_t t55 = 64375055LLU;

	t55 = ((x2657*(x2658+x2659))>>x2660);

	if (t55 != 72057594040813499LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2743 = 24772U;
	volatile uint64_t t56 = 992349716020067LLU;

	t56 = ((x2741*(x2742+x2743))>>x2744);

	if (t56 != 9223371424615848752LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x2765 = INT16_MAX;
	static volatile uint16_t x2766 = UINT16_MAX;
	static uint64_t x2767 = 533571805LLU;
	int8_t x2768 = 5;

	t57 = ((x2765*(x2766+x2767))>>x2768);

	if (t57 != 546427959993LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2777 = UINT8_MAX;
	int64_t x2778 = 704075989296LL;
	int8_t x2779 = -1;
	int16_t x2780 = 0;
	int64_t t58 = -43870LL;

	t58 = ((x2777*(x2778+x2779))>>x2780);

	if (t58 != 179539377270225LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x2913 = -3;
	uint64_t x2915 = 1048899619258LLU;
	int8_t x2916 = 60;
	static volatile uint64_t t59 = 3517659866279LLU;

	t59 = ((x2913*(x2914+x2915))>>x2916);

	if (t59 != 15LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2937 = UINT64_MAX;
	int32_t x2938 = INT32_MIN;
	uint64_t x2939 = 11134380807694LLU;
	uint64_t t60 = 27671242387257LLU;

	t60 = ((x2937*(x2938+x2939))>>x2940);

	if (t60 != 268435294LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2973 = INT64_MIN;
	static uint64_t x2974 = UINT64_MAX;
	volatile int64_t x2975 = -1LL;
	volatile uint64_t t61 = 201608708725846457LLU;

	t61 = ((x2973*(x2974+x2975))>>x2976);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x3009 = 3000036132LLU;
	int16_t x3010 = -7;
	volatile int8_t x3011 = 3;
	static volatile uint8_t x3012 = 29U;
	volatile uint64_t t62 = 82334432954LLU;

	t62 = ((x3009*(x3010+x3011))>>x3012);

	if (t62 != 34359738345LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3045 = 2U;
	static int16_t x3047 = INT16_MAX;
	int32_t x3048 = 0;
	static volatile uint32_t t63 = 7U;

	t63 = ((x3045*(x3046+x3047))>>x3048);

	if (t63 != 86156U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3053 = -1;
	int64_t x3054 = -1LL;
	volatile int8_t x3055 = INT8_MIN;
	uint32_t x3056 = 10U;
	int64_t t64 = -17759391975100LL;

	t64 = ((x3053*(x3054+x3055))>>x3056);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x3133 = -1;
	int16_t x3134 = INT16_MIN;
	int64_t x3136 = 3LL;
	static volatile int32_t t65 = 512688923;

	t65 = ((x3133*(x3134+x3135))>>x3136);

	if (t65 != 4096) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3149 = 0U;
	uint64_t x3150 = UINT64_MAX;
	int64_t x3151 = INT64_MIN;

	t66 = ((x3149*(x3150+x3151))>>x3152);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3153 = INT16_MIN;
	int16_t x3154 = -46;
	static int8_t x3155 = INT8_MIN;
	int16_t x3156 = 0;
	static int32_t t67 = -6323;

	t67 = ((x3153*(x3154+x3155))>>x3156);

	if (t67 != 5701632) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3469 = -656;
	int16_t x3471 = INT16_MIN;
	static uint16_t x3472 = 2U;
	uint64_t t68 = 0LLU;

	t68 = ((x3469*(x3470+x3471))>>x3472);

	if (t68 != 3260296121511011904LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3663 = -1;
	uint64_t x3664 = 8LLU;

	t69 = ((x3661*(x3662+x3663))>>x3664);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3738 = -121686;
	uint64_t x3739 = 1845486LLU;

	t70 = ((x3737*(x3738+x3739))>>x3740);

	if (t70 != 2251799813685037LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x3745 = 16;
	uint32_t x3746 = 21670639U;
	int16_t x3747 = INT16_MIN;
	uint16_t x3748 = 4U;
	volatile uint32_t t71 = 3U;

	t71 = ((x3745*(x3746+x3747))>>x3748);

	if (t71 != 21637871U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3859 = -57;
	static int16_t x3860 = 2;
	volatile uint64_t t72 = 1371519356167LLU;

	t72 = ((x3857*(x3858+x3859))>>x3860);

	if (t72 != 31138512896LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3877 = 6441178LL;
	uint32_t x3878 = 6146892U;
	int16_t x3879 = -1;
	uint16_t x3880 = 19U;
	int64_t t73 = 0LL;

	t73 = ((x3877*(x3878+x3879))>>x3880);

	if (t73 != 75518072LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3901 = -1;
	int8_t x3902 = -1;
	volatile uint8_t x3904 = 5U;

	t74 = ((x3901*(x3902+x3903))>>x3904);

	if (t74 != 134217727U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x3910 = 370463U;
	int8_t x3911 = -1;
	uint64_t x3912 = 0LLU;
	volatile uint32_t t75 = 190U;

	t75 = ((x3909*(x3910+x3911))>>x3912);

	if (t75 != 559397620U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x3917 = 0U;
	volatile int16_t x3918 = INT16_MIN;
	static volatile uint8_t x3919 = 84U;
	uint32_t x3920 = 0U;
	int32_t t76 = 191533;

	t76 = ((x3917*(x3918+x3919))>>x3920);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3925 = 1031242252171571LLU;
	volatile uint32_t x3926 = 7U;
	volatile uint32_t x3927 = 995223619U;
	volatile int8_t x3928 = 1;
	uint64_t t77 = 2616233809576LLU;

	t77 = ((x3925*(x3926+x3927))>>x3928);

	if (t77 != 6800102846325514335LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x4009 = -1LL;
	volatile uint8_t x4010 = 0U;
	int16_t x4011 = INT16_MIN;
	volatile uint8_t x4012 = 0U;
	static int64_t t78 = -40948886804LL;

	t78 = ((x4009*(x4010+x4011))>>x4012);

	if (t78 != 32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4021 = 719726LLU;
	uint64_t x4022 = 60473LLU;
	volatile uint32_t x4024 = 2U;
	static uint64_t t79 = 90666688884LLU;

	t79 = ((x4021*(x4022+x4023))>>x4024);

	if (t79 != 10880997599LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x4101 = INT8_MIN;
	volatile int16_t x4102 = INT16_MAX;
	volatile uint8_t x4104 = 1U;
	int32_t t80 = -12719;

	t80 = ((x4101*(x4102+x4103))>>x4104);

	if (t80 != 64) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4135 = 1;
	int8_t x4136 = 0;
	volatile int32_t t81 = -14;

	t81 = ((x4133*(x4134+x4135))>>x4136);

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4186 = 2967529418645844LLU;
	int8_t x4187 = -1;
	uint64_t t82 = 6436336027753813333LLU;

	t82 = ((x4185*(x4186+x4187))>>x4188);

	if (t82 != 4601299665462127453LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x4273 = 666505116;
	uint64_t x4274 = 27231148LLU;
	uint64_t x4275 = 34LLU;
	static volatile uint16_t x4276 = 0U;
	static uint64_t t83 = 655625916575906LLU;

	t83 = ((x4273*(x4274+x4275))>>x4276);

	if (t83 != 18149722117727112LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint8_t x4285 = 103U;
	int8_t x4286 = -1;
	uint16_t x4287 = 229U;
	uint8_t x4288 = 26U;
	int32_t t84 = -250088;

	t84 = ((x4285*(x4286+x4287))>>x4288);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x4441 = 64179LLU;
	volatile int8_t x4442 = INT8_MAX;
	static int16_t x4443 = 0;
	volatile uint8_t x4444 = 1U;
	volatile uint64_t t85 = 240144192780027142LLU;

	t85 = ((x4441*(x4442+x4443))>>x4444);

	if (t85 != 4075366LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4562 = UINT64_MAX;
	static int64_t x4563 = INT64_MIN;
	int16_t x4564 = 0;
	uint64_t t86 = 3231044402881043239LLU;

	t86 = ((x4561*(x4562+x4563))>>x4564);

	if (t86 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4569 = -1;
	static volatile uint32_t x4570 = UINT32_MAX;
	static int64_t x4571 = -52912372804777600LL;
	uint32_t x4572 = 0U;
	int64_t t87 = 151320135468278459LL;

	t87 = ((x4569*(x4570+x4571))>>x4572);

	if (t87 != 52912368509810305LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4673 = -2;
	int16_t x4674 = INT16_MIN;
	static int64_t x4675 = -326154LL;
	uint8_t x4676 = 58U;

	t88 = ((x4673*(x4674+x4675))>>x4676);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4766 = -84498190263344331LL;
	uint32_t x4767 = 770016U;
	static uint32_t x4768 = 0U;
	volatile int64_t t89 = -135966799613620562LL;

	t89 = ((x4765*(x4766+x4767))>>x4768);

	if (t89 != 84498190262574315LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4802 = 2;
	int8_t x4803 = INT8_MAX;
	static int8_t x4804 = 1;
	volatile uint32_t t90 = 241945065U;

	t90 = ((x4801*(x4802+x4803))>>x4804);

	if (t90 != 2147483583U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4865 = -1256686779307LL;
	int8_t x4866 = INT8_MIN;
	int16_t x4867 = INT16_MIN;
	uint32_t x4868 = 41U;
	volatile int64_t t91 = -53661214482351645LL;

	t91 = ((x4865*(x4866+x4867))>>x4868);

	if (t91 != 18799LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4889 = 1609131U;
	int8_t x4890 = -1;
	static uint32_t x4891 = 5154205U;
	volatile uint32_t t92 = 33320U;

	t92 = ((x4889*(x4890+x4891))>>x4892);

	if (t92 != 103794074U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4934 = 1965;
	int8_t x4935 = 0;
	uint16_t x4936 = 1U;
	uint32_t t93 = 133107881U;

	t93 = ((x4933*(x4934+x4935))>>x4936);

	if (t93 != 41030182U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4961 = INT8_MIN;
	uint8_t x4962 = UINT8_MAX;
	uint64_t t94 = 18LLU;

	t94 = ((x4961*(x4962+x4963))>>x4964);

	if (t94 != 1125899906842622LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4998 = 27U;
	uint32_t x4999 = 1052966062U;
	volatile uint16_t x5000 = 0U;
	uint32_t t95 = 14422729U;

	t95 = ((x4997*(x4998+x4999))>>x5000);

	if (t95 != 3242001207U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5058 = 27443LLU;
	uint8_t x5059 = UINT8_MAX;
	uint32_t x5060 = 60U;
	volatile uint64_t t96 = 767094237719LLU;

	t96 = ((x5057*(x5058+x5059))>>x5060);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5065 = -1LL;
	uint64_t x5066 = 892924926804947LLU;
	int64_t x5067 = -413378981149672341LL;
	uint8_t x5068 = 31U;
	static uint64_t t97 = 209952092918817LLU;

	t97 = ((x5065*(x5066+x5067))>>x5068);

	if (t97 != 192078787LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5110 = 6150546520438LLU;
	static int8_t x5112 = 28;
	uint64_t t98 = 3779905222324780LLU;

	t98 = ((x5109*(x5110+x5111))>>x5112);

	if (t98 != 22904LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5209 = 418220175446LLU;
	uint64_t x5210 = 29626037672LLU;
	uint32_t x5211 = 76U;
	uint8_t x5212 = 2U;
	uint64_t t99 = 38556602229LLU;

	t99 = ((x5209*(x5210+x5211))>>x5212);

	if (t99 != 3110357819817400318LLU) { NG(); } else { ; }
	
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

