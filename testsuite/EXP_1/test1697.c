#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = 1;
uint8_t x16 = 1U;
static uint64_t x49 = 290774379LLU;
static uint8_t x52 = 3U;
uint32_t x177 = UINT32_MAX;
static int32_t x222 = 3;
int32_t x234 = -8390;
int64_t x259 = -1LL;
uint32_t x260 = 0U;
uint64_t t7 = 3040215767LLU;
uint32_t x349 = 450736U;
uint32_t x393 = 4163U;
uint8_t x396 = 1U;
static uint64_t x470 = UINT64_MAX;
static uint16_t x472 = 51U;
int32_t x523 = -1;
uint8_t x540 = 14U;
int32_t x549 = 1;
uint16_t x552 = 19U;
volatile int32_t x572 = 1;
uint32_t t18 = 26322U;
uint64_t x606 = 149287462792LLU;
volatile uint16_t x608 = 18U;
volatile uint64_t t19 = 55LLU;
uint8_t x732 = 4U;
int16_t x822 = 151;
static int32_t x837 = -1;
static int16_t x897 = INT16_MIN;
volatile int32_t t25 = -3570;
int32_t x929 = INT32_MIN;
volatile uint64_t x990 = 1566LLU;
uint32_t x991 = 538172796U;
int32_t x1091 = -1;
uint8_t x1179 = 32U;
int32_t x1180 = 0;
int64_t x1185 = INT64_MIN;
static volatile int16_t x1202 = -1;
uint64_t x1234 = 11991LLU;
int8_t x1236 = 1;
uint64_t t34 = 106LLU;
uint64_t x1259 = UINT64_MAX;
volatile uint64_t t35 = 3928LLU;
volatile uint32_t x1266 = 176829U;
int32_t x1267 = -509269;
static int8_t x1289 = INT8_MIN;
volatile uint64_t t40 = 1198280584LLU;
static uint16_t x1513 = 0U;
volatile int32_t x1693 = -202;
int16_t x1694 = 892;
volatile int8_t x1695 = INT8_MAX;
static uint8_t x1710 = UINT8_MAX;
int16_t x1835 = INT16_MAX;
int32_t x1851 = INT32_MIN;
uint64_t x1894 = 291401536465LLU;
static volatile int32_t t50 = -169525;
int64_t x2134 = 43105416782955LL;
int64_t t52 = -472LL;
volatile uint32_t t53 = 508613377U;
uint8_t x2222 = UINT8_MAX;
int32_t t54 = 373;
int32_t x2243 = 293814;
int16_t x2481 = -1;
uint32_t x2482 = 81012383U;
int32_t x2484 = 5;
static int8_t x2963 = -3;
int32_t x3063 = INT32_MAX;
static int16_t x3064 = 1;
static uint64_t x3087 = 952661603LLU;
int32_t x3298 = -1;
int16_t x3300 = 1;
int32_t x3317 = INT32_MAX;
int64_t x3319 = 3713LL;
uint8_t x3344 = 2U;
int32_t x3346 = -4;
uint8_t x3348 = 18U;
uint64_t x3359 = UINT64_MAX;
uint64_t x3475 = UINT64_MAX;
volatile uint64_t t70 = 27699891713LLU;
uint32_t x3481 = 3406004U;
int64_t t71 = -17LL;
int16_t x3505 = INT16_MAX;
int8_t x3508 = 4;
int16_t x3555 = INT16_MAX;
uint8_t x3604 = 12U;
static int32_t t77 = 1764854;
int16_t x3841 = INT16_MIN;
int32_t x3844 = 0;
volatile int8_t x3857 = -1;
volatile uint32_t x3882 = 95U;
int16_t x3883 = INT16_MIN;
uint32_t t81 = UINT32_MAX;
int8_t x4016 = 14;
volatile uint16_t x4054 = 27867U;
uint8_t x4055 = UINT8_MAX;
volatile uint8_t x4056 = 49U;
int32_t x4070 = INT32_MIN;
int32_t x4325 = INT32_MIN;
uint64_t x4386 = 9099506140LLU;
volatile int16_t x4387 = INT16_MAX;
static volatile uint64_t t89 = 261148143532LLU;
int32_t t90 = 345040;
static int8_t x4482 = -1;
uint64_t t91 = 39018LLU;
uint32_t x4601 = 18743U;
volatile uint16_t x4604 = 8U;
static volatile uint32_t t94 = 2284U;
uint16_t x4676 = 1U;
static int8_t x4679 = 31;
int32_t x4680 = 0;
static volatile uint32_t t96 = 92204U;
uint64_t x4777 = 909617182LLU;
volatile uint8_t x4780 = 1U;


void f0(void) {
	int16_t x1 = 121;
	uint32_t x2 = 13563U;
	uint64_t x3 = 1928404591880LLU;
	volatile uint64_t t0 = 9296054341764LLU;

	t0 = (((x1&x2)+x3)>>x4);

	if (t0 != 964202296000LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MIN;
	volatile uint16_t x14 = UINT16_MAX;
	uint8_t x15 = 1U;
	static int32_t t1 = -78508;

	t1 = (((x13&x14)+x15)>>x16);

	if (t1 != 16384) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x50 = INT8_MIN;
	static uint32_t x51 = 78101U;
	uint64_t t2 = 1287426205358189LLU;

	t2 = (((x49&x50)+x51)>>x52);

	if (t2 != 36356546LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x178 = 3;
	int16_t x179 = 123;
	int8_t x180 = 6;
	uint32_t t3 = 2145554208U;

	t3 = (((x177&x178)+x179)>>x180);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x221 = 23958U;
	static uint8_t x223 = 4U;
	volatile uint8_t x224 = 1U;
	volatile int32_t t4 = -5;

	t4 = (((x221&x222)+x223)>>x224);

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x233 = 3072;
	uint16_t x235 = 1U;
	static volatile uint16_t x236 = 3U;
	int32_t t5 = -20;

	t5 = (((x233&x234)+x235)>>x236);

	if (t5 != 384) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x257 = 8155;
	int8_t x258 = INT8_MAX;
	int64_t t6 = 112746LL;

	t6 = (((x257&x258)+x259)>>x260);

	if (t6 != 90LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x273 = INT16_MIN;
	int32_t x274 = 128784;
	uint64_t x275 = 13LLU;
	int16_t x276 = 7;

	t7 = (((x273&x274)+x275)>>x276);

	if (t7 != 768LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x289 = INT64_MAX;
	static uint16_t x290 = 977U;
	volatile int8_t x291 = 1;
	uint32_t x292 = 30U;
	volatile int64_t t8 = -16644429LL;

	t8 = (((x289&x290)+x291)>>x292);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x329 = UINT32_MAX;
	static int64_t x330 = -1LL;
	int32_t x331 = 10976938;
	static int8_t x332 = 0;
	static volatile int64_t t9 = 227147854734LL;

	t9 = (((x329&x330)+x331)>>x332);

	if (t9 != 4305944233LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x350 = 45;
	uint16_t x351 = 641U;
	uint8_t x352 = 1U;
	static uint32_t t10 = 696511608U;

	t10 = (((x349&x350)+x351)>>x352);

	if (t10 != 336U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x394 = UINT32_MAX;
	int8_t x395 = -43;
	volatile uint32_t t11 = 399536U;

	t11 = (((x393&x394)+x395)>>x396);

	if (t11 != 2060U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x437 = 3310U;
	int64_t x438 = INT64_MIN;
	volatile int64_t x439 = 43314469LL;
	volatile int16_t x440 = 4;
	volatile int64_t t12 = 78268315789083831LL;

	t12 = (((x437&x438)+x439)>>x440);

	if (t12 != 2707154LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x469 = INT8_MAX;
	static volatile int32_t x471 = -332;
	volatile uint64_t t13 = 88867598417410795LLU;

	t13 = (((x469&x470)+x471)>>x472);

	if (t13 != 8191LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x505 = -1;
	int64_t x506 = -1LL;
	int16_t x507 = INT16_MAX;
	int8_t x508 = 29;
	static volatile int64_t t14 = 1536490245LL;

	t14 = (((x505&x506)+x507)>>x508);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x521 = 3228528118232LLU;
	uint8_t x522 = 9U;
	volatile int16_t x524 = 0;
	uint64_t t15 = 168201098830471LLU;

	t15 = (((x521&x522)+x523)>>x524);

	if (t15 != 7LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x537 = -143602430;
	static volatile uint32_t x538 = UINT32_MAX;
	int64_t x539 = 1732636239LL;
	static int64_t t16 = -15723855428LL;

	t16 = (((x537&x538)+x539)>>x540);

	if (t16 != 359130LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x550 = -1LL;
	uint8_t x551 = 7U;
	int64_t t17 = 824274LL;

	t17 = (((x549&x550)+x551)>>x552);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x569 = 1304969U;
	int8_t x570 = 1;
	static int16_t x571 = -1;

	t18 = (((x569&x570)+x571)>>x572);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x605 = UINT64_MAX;
	static uint8_t x607 = 0U;

	t19 = (((x605&x606)+x607)>>x608);

	if (t19 != 569486LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x729 = INT8_MIN;
	int16_t x730 = 459;
	uint8_t x731 = 121U;
	int32_t t20 = -1;

	t20 = (((x729&x730)+x731)>>x732);

	if (t20 != 31) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x753 = -4LL;
	static uint64_t x754 = 3LLU;
	uint64_t x755 = UINT64_MAX;
	uint8_t x756 = 29U;
	volatile uint64_t t21 = 8686964520286LLU;

	t21 = (((x753&x754)+x755)>>x756);

	if (t21 != 34359738367LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x761 = INT8_MIN;
	int16_t x762 = INT16_MIN;
	int64_t x763 = INT64_MAX;
	uint8_t x764 = 15U;
	int64_t t22 = -29238916645996336LL;

	t22 = (((x761&x762)+x763)>>x764);

	if (t22 != 281474976710654LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x821 = INT8_MAX;
	uint8_t x823 = 26U;
	volatile int8_t x824 = 1;
	volatile int32_t t23 = -24280362;

	t23 = (((x821&x822)+x823)>>x824);

	if (t23 != 24) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x838 = UINT64_MAX;
	int32_t x839 = INT32_MAX;
	uint8_t x840 = 52U;
	volatile uint64_t t24 = 377903790086878LLU;

	t24 = (((x837&x838)+x839)>>x840);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x898 = INT16_MIN;
	int32_t x899 = INT32_MAX;
	volatile uint16_t x900 = 7U;

	t25 = (((x897&x898)+x899)>>x900);

	if (t25 != 16776959) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x930 = INT8_MIN;
	int64_t x931 = INT64_MAX;
	uint8_t x932 = 1U;
	static int64_t t26 = 221LL;

	t26 = (((x929&x930)+x931)>>x932);

	if (t26 != 4611686017353646079LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x981 = INT8_MIN;
	int16_t x982 = -395;
	int64_t x983 = 1742223657742635LL;
	int16_t x984 = 11;
	volatile int64_t t27 = -1LL;

	t27 = (((x981&x982)+x983)>>x984);

	if (t27 != 850695145381LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x989 = -3;
	int16_t x992 = 13;
	uint64_t t28 = 2363669832LLU;

	t28 = (((x989&x990)+x991)>>x992);

	if (t28 != 65695LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x993 = INT32_MAX;
	uint16_t x994 = 107U;
	int16_t x995 = 181;
	int16_t x996 = 0;
	volatile int32_t t29 = -81641920;

	t29 = (((x993&x994)+x995)>>x996);

	if (t29 != 288) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1089 = -1;
	uint16_t x1090 = 4U;
	volatile int32_t x1092 = 1;
	volatile int32_t t30 = 1;

	t30 = (((x1089&x1090)+x1091)>>x1092);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1177 = 724563LL;
	uint8_t x1178 = UINT8_MAX;
	volatile int64_t t31 = 14550LL;

	t31 = (((x1177&x1178)+x1179)>>x1180);

	if (t31 != 115LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1186 = INT8_MAX;
	static uint16_t x1187 = 6353U;
	uint8_t x1188 = 8U;
	int64_t t32 = 123031134041LL;

	t32 = (((x1185&x1186)+x1187)>>x1188);

	if (t32 != 24LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1201 = -1LL;
	volatile uint8_t x1203 = 51U;
	uint8_t x1204 = 1U;
	volatile int64_t t33 = -28235989921LL;

	t33 = (((x1201&x1202)+x1203)>>x1204);

	if (t33 != 25LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1233 = 40;
	int64_t x1235 = 20LL;

	t34 = (((x1233&x1234)+x1235)>>x1236);

	if (t34 != 10LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1257 = 2958U;
	uint8_t x1258 = 3U;
	uint16_t x1260 = 1U;

	t35 = (((x1257&x1258)+x1259)>>x1260);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x1265 = 8U;
	volatile int8_t x1268 = 2;
	static uint32_t t36 = 34U;

	t36 = (((x1265&x1266)+x1267)>>x1268);

	if (t36 != 1073614508U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x1290 = INT16_MAX;
	uint32_t x1291 = UINT32_MAX;
	uint8_t x1292 = 1U;
	static uint32_t t37 = 31U;

	t37 = (((x1289&x1290)+x1291)>>x1292);

	if (t37 != 16319U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1297 = 9619U;
	volatile int8_t x1298 = -22;
	uint8_t x1299 = 122U;
	uint16_t x1300 = 10U;
	int32_t t38 = -65064;

	t38 = (((x1297&x1298)+x1299)>>x1300);

	if (t38 != 9) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1301 = -5;
	int64_t x1302 = INT64_MAX;
	volatile int32_t x1303 = INT32_MIN;
	static volatile uint32_t x1304 = 5U;
	int64_t t39 = -2113144LL;

	t39 = (((x1301&x1302)+x1303)>>x1304);

	if (t39 != 288230376084602879LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1445 = -1;
	int32_t x1446 = INT32_MIN;
	static uint64_t x1447 = 3836226163LLU;
	int64_t x1448 = 0LL;

	t40 = (((x1445&x1446)+x1447)>>x1448);

	if (t40 != 1688742515LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x1514 = 2144U;
	static uint64_t x1515 = 17074LLU;
	static uint16_t x1516 = 4U;
	static uint64_t t41 = 1659287065992813340LLU;

	t41 = (((x1513&x1514)+x1515)>>x1516);

	if (t41 != 1067LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1669 = INT16_MIN;
	static uint8_t x1670 = 82U;
	uint16_t x1671 = 15U;
	int8_t x1672 = 3;
	volatile int32_t t42 = -15489;

	t42 = (((x1669&x1670)+x1671)>>x1672);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x1696 = 24U;
	volatile int32_t t43 = -31907;

	t43 = (((x1693&x1694)+x1695)>>x1696);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1709 = -152;
	volatile uint8_t x1711 = 108U;
	int8_t x1712 = 1;
	volatile int32_t t44 = 3299;

	t44 = (((x1709&x1710)+x1711)>>x1712);

	if (t44 != 106) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1833 = UINT8_MAX;
	int16_t x1834 = INT16_MAX;
	static uint8_t x1836 = 2U;
	static volatile int32_t t45 = 2;

	t45 = (((x1833&x1834)+x1835)>>x1836);

	if (t45 != 8255) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1849 = -1;
	volatile uint32_t x1850 = UINT32_MAX;
	uint8_t x1852 = 4U;
	volatile uint32_t t46 = 19U;

	t46 = (((x1849&x1850)+x1851)>>x1852);

	if (t46 != 134217727U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x1893 = 1630188U;
	int64_t x1895 = INT64_MIN;
	static volatile uint64_t x1896 = 1LLU;
	uint64_t t47 = 12676796278LLU;

	t47 = (((x1893&x1894)+x1895)>>x1896);

	if (t47 != 4611686018427406816LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1989 = INT16_MIN;
	uint8_t x1990 = 2U;
	static uint32_t x1991 = UINT32_MAX;
	volatile uint32_t x1992 = 14U;
	static uint32_t t48 = 1024623U;

	t48 = (((x1989&x1990)+x1991)>>x1992);

	if (t48 != 262143U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x2029 = INT64_MAX;
	int8_t x2030 = -1;
	int64_t x2031 = -1LL;
	int8_t x2032 = 0;
	int64_t t49 = -6LL;

	t49 = (((x2029&x2030)+x2031)>>x2032);

	if (t49 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x2053 = 1U;
	int16_t x2054 = INT16_MIN;
	static volatile int16_t x2055 = 0;
	int8_t x2056 = 1;

	t50 = (((x2053&x2054)+x2055)>>x2056);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x2057 = 12U;
	volatile int16_t x2058 = INT16_MIN;
	uint64_t x2059 = 961389LLU;
	volatile int16_t x2060 = 2;
	static volatile uint64_t t51 = 0LLU;

	t51 = (((x2057&x2058)+x2059)>>x2060);

	if (t51 != 240347LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x2133 = -1LL;
	int16_t x2135 = -1;
	uint32_t x2136 = 31U;

	t52 = (((x2133&x2134)+x2135)>>x2136);

	if (t52 != 20072LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2173 = -1;
	int8_t x2174 = -1;
	uint32_t x2175 = 1700538864U;
	uint8_t x2176 = 1U;

	t53 = (((x2173&x2174)+x2175)>>x2176);

	if (t53 != 850269431U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x2221 = INT32_MAX;
	int16_t x2223 = -1;
	int8_t x2224 = 1;

	t54 = (((x2221&x2222)+x2223)>>x2224);

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x2241 = 33U;
	uint8_t x2242 = UINT8_MAX;
	uint8_t x2244 = 0U;
	volatile int32_t t55 = -3929;

	t55 = (((x2241&x2242)+x2243)>>x2244);

	if (t55 != 293847) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x2461 = UINT8_MAX;
	int8_t x2462 = INT8_MIN;
	int8_t x2463 = 25;
	int8_t x2464 = 1;
	volatile int32_t t56 = -5638346;

	t56 = (((x2461&x2462)+x2463)>>x2464);

	if (t56 != 76) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2483 = INT32_MIN;
	volatile uint32_t t57 = 769U;

	t57 = (((x2481&x2482)+x2483)>>x2484);

	if (t57 != 69640500U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2605 = -1;
	int16_t x2606 = 49;
	uint16_t x2607 = UINT16_MAX;
	int32_t x2608 = 31;
	int32_t t58 = 167;

	t58 = (((x2605&x2606)+x2607)>>x2608);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2881 = 1LL;
	int64_t x2882 = -8864LL;
	uint8_t x2883 = UINT8_MAX;
	volatile uint8_t x2884 = 11U;
	static volatile int64_t t59 = -23LL;

	t59 = (((x2881&x2882)+x2883)>>x2884);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2961 = INT32_MAX;
	static int32_t x2962 = -31735712;
	uint16_t x2964 = 0U;
	volatile int32_t t60 = 10494753;

	t60 = (((x2961&x2962)+x2963)>>x2964);

	if (t60 != 2115747933) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2965 = UINT32_MAX;
	volatile uint8_t x2966 = 112U;
	volatile int8_t x2967 = INT8_MIN;
	uint16_t x2968 = 0U;
	static uint32_t t61 = 296612726U;

	t61 = (((x2965&x2966)+x2967)>>x2968);

	if (t61 != 4294967280U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2977 = 207984273;
	volatile int16_t x2978 = -290;
	uint8_t x2979 = 1U;
	volatile uint16_t x2980 = 0U;
	static int32_t t62 = 1774;

	t62 = (((x2977&x2978)+x2979)>>x2980);

	if (t62 != 207984273) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3061 = -1LL;
	int8_t x3062 = INT8_MAX;
	volatile int64_t t63 = -336981701863523763LL;

	t63 = (((x3061&x3062)+x3063)>>x3064);

	if (t63 != 1073741887LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3085 = -1;
	int8_t x3086 = 3;
	static volatile uint16_t x3088 = 3U;
	uint64_t t64 = 49088822LLU;

	t64 = (((x3085&x3086)+x3087)>>x3088);

	if (t64 != 119082700LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x3297 = INT16_MAX;
	static uint8_t x3299 = UINT8_MAX;
	volatile int32_t t65 = -123368666;

	t65 = (((x3297&x3298)+x3299)>>x3300);

	if (t65 != 16511) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3318 = -1;
	int8_t x3320 = 60;
	volatile int64_t t66 = 1LL;

	t66 = (((x3317&x3318)+x3319)>>x3320);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x3341 = 112294U;
	static volatile uint8_t x3342 = UINT8_MAX;
	uint8_t x3343 = 2U;
	volatile uint32_t t67 = 23U;

	t67 = (((x3341&x3342)+x3343)>>x3344);

	if (t67 != 42U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x3345 = INT16_MAX;
	volatile int16_t x3347 = INT16_MAX;
	static int32_t t68 = -74026;

	t68 = (((x3345&x3346)+x3347)>>x3348);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x3357 = 318U;
	volatile int64_t x3358 = -1LL;
	volatile uint64_t x3360 = 1LLU;
	static volatile uint64_t t69 = 6176975849580LLU;

	t69 = (((x3357&x3358)+x3359)>>x3360);

	if (t69 != 158LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3473 = -1LL;
	int8_t x3474 = 40;
	static volatile int32_t x3476 = 13;

	t70 = (((x3473&x3474)+x3475)>>x3476);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x3482 = INT64_MIN;
	int16_t x3483 = 8;
	static int8_t x3484 = 0;

	t71 = (((x3481&x3482)+x3483)>>x3484);

	if (t71 != 8LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x3506 = -122750926LL;
	uint64_t x3507 = UINT64_MAX;
	volatile uint64_t t72 = 3527LLU;

	t72 = (((x3505&x3506)+x3507)>>x3508);

	if (t72 != 1923LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3553 = 706535979U;
	uint8_t x3554 = 6U;
	int16_t x3556 = 1;
	uint32_t t73 = 1281699U;

	t73 = (((x3553&x3554)+x3555)>>x3556);

	if (t73 != 16384U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3565 = 67U;
	uint16_t x3566 = UINT16_MAX;
	static int8_t x3567 = INT8_MAX;
	volatile uint32_t x3568 = 3U;
	static int32_t t74 = -766558;

	t74 = (((x3565&x3566)+x3567)>>x3568);

	if (t74 != 24) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x3601 = 1805U;
	uint8_t x3602 = UINT8_MAX;
	int32_t x3603 = INT32_MIN;
	static uint32_t t75 = 228U;

	t75 = (((x3601&x3602)+x3603)>>x3604);

	if (t75 != 524288U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3625 = INT64_MAX;
	uint8_t x3626 = 55U;
	uint32_t x3627 = 4139463U;
	uint8_t x3628 = 6U;
	volatile int64_t t76 = -5987745226198LL;

	t76 = (((x3625&x3626)+x3627)>>x3628);

	if (t76 != 64679LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3757 = 22U;
	uint8_t x3758 = 0U;
	int8_t x3759 = 5;
	int8_t x3760 = 3;

	t77 = (((x3757&x3758)+x3759)>>x3760);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3842 = 0U;
	uint64_t x3843 = UINT64_MAX;
	static uint64_t t78 = UINT64_MAX;

	t78 = (((x3841&x3842)+x3843)>>x3844);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3858 = 204237LLU;
	int8_t x3859 = 12;
	int16_t x3860 = 5;
	uint64_t t79 = 0LLU;

	t79 = (((x3857&x3858)+x3859)>>x3860);

	if (t79 != 6382LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3881 = INT16_MAX;
	uint16_t x3884 = 9U;
	uint32_t t80 = 184U;

	t80 = (((x3881&x3882)+x3883)>>x3884);

	if (t80 != 8388544U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x3889 = -1;
	volatile int8_t x3890 = -1;
	static uint32_t x3891 = 0U;
	static volatile int32_t x3892 = 0;

	t81 = (((x3889&x3890)+x3891)>>x3892);

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3901 = -1;
	uint32_t x3902 = 28519U;
	int16_t x3903 = 123;
	volatile uint8_t x3904 = 7U;
	volatile uint32_t t82 = 57790199U;

	t82 = (((x3901&x3902)+x3903)>>x3904);

	if (t82 != 223U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4013 = 15U;
	volatile int8_t x4014 = INT8_MIN;
	uint64_t x4015 = 4270210563898LLU;
	uint64_t t83 = 55273073LLU;

	t83 = (((x4013&x4014)+x4015)>>x4016);

	if (t83 != 260632968LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4053 = 108863614460665LLU;
	volatile uint64_t t84 = 14831LLU;

	t84 = (((x4053&x4054)+x4055)>>x4056);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x4069 = 2U;
	volatile int8_t x4071 = INT8_MAX;
	int16_t x4072 = 3;
	volatile int32_t t85 = 572197;

	t85 = (((x4069&x4070)+x4071)>>x4072);

	if (t85 != 15) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4153 = UINT32_MAX;
	uint32_t x4154 = 192U;
	int64_t x4155 = -1LL;
	int32_t x4156 = 0;
	volatile int64_t t86 = 58063718LL;

	t86 = (((x4153&x4154)+x4155)>>x4156);

	if (t86 != 191LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4326 = -1;
	uint32_t x4327 = UINT32_MAX;
	static uint8_t x4328 = 5U;
	volatile uint32_t t87 = 1709U;

	t87 = (((x4325&x4326)+x4327)>>x4328);

	if (t87 != 67108863U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x4381 = 503U;
	static int32_t x4382 = INT32_MIN;
	volatile uint32_t x4383 = UINT32_MAX;
	uint16_t x4384 = 4U;
	uint32_t t88 = 0U;

	t88 = (((x4381&x4382)+x4383)>>x4384);

	if (t88 != 268435455U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4385 = UINT64_MAX;
	uint8_t x4388 = 12U;

	t89 = (((x4385&x4386)+x4387)>>x4388);

	if (t89 != 2221567LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x4461 = 937;
	int8_t x4462 = -2;
	uint8_t x4463 = 36U;
	volatile uint16_t x4464 = 17U;

	t90 = (((x4461&x4462)+x4463)>>x4464);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x4481 = UINT64_MAX;
	int32_t x4483 = INT32_MIN;
	uint8_t x4484 = 23U;

	t91 = (((x4481&x4482)+x4483)>>x4484);

	if (t91 != 2199023255295LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x4485 = INT64_MIN;
	static volatile uint64_t x4486 = 427177LLU;
	static uint32_t x4487 = 0U;
	int16_t x4488 = 14;
	uint64_t t92 = 1001527398677052LLU;

	t92 = (((x4485&x4486)+x4487)>>x4488);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x4553 = -1LL;
	static uint16_t x4554 = 3U;
	uint8_t x4555 = UINT8_MAX;
	volatile uint8_t x4556 = 36U;
	int64_t t93 = 7274136LL;

	t93 = (((x4553&x4554)+x4555)>>x4556);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4602 = -2399;
	uint16_t x4603 = 13U;

	t94 = (((x4601&x4602)+x4603)>>x4604);

	if (t94 != 64U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x4673 = 126731055LLU;
	int16_t x4674 = -1;
	uint8_t x4675 = 6U;
	static uint64_t t95 = 2287315477LLU;

	t95 = (((x4673&x4674)+x4675)>>x4676);

	if (t95 != 63365530LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x4677 = 28;
	static uint32_t x4678 = 1935995U;

	t96 = (((x4677&x4678)+x4679)>>x4680);

	if (t96 != 55U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x4765 = -1LL;
	uint64_t x4766 = 12235420053LLU;
	static int16_t x4767 = INT16_MIN;
	int8_t x4768 = 16;
	volatile uint64_t t97 = 162575038LLU;

	t97 = (((x4765&x4766)+x4767)>>x4768);

	if (t97 != 186697LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x4778 = 345275891874618010LL;
	uint64_t x4779 = 351884477724173LLU;
	static volatile uint64_t t98 = 10480878620859424LLU;

	t98 = (((x4777&x4778)+x4779)>>x4780);

	if (t98 != 175942542458643LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x4817 = 22U;
	int16_t x4818 = 1215;
	static int64_t x4819 = -1LL;
	volatile uint8_t x4820 = 11U;
	int64_t t99 = -7019722999067758LL;

	t99 = (((x4817&x4818)+x4819)>>x4820);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

