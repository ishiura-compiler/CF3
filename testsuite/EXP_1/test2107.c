#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x25 = 7;
uint64_t x38 = 16794263LLU;
volatile int64_t x40 = -23736LL;
int64_t x232 = INT64_MIN;
int8_t x371 = 1;
uint64_t x560 = 7402400050593801LLU;
uint8_t x599 = 7U;
int16_t x639 = 3;
static volatile int8_t x705 = INT8_MAX;
int8_t x708 = INT8_MIN;
uint64_t x778 = 14892285720863872LLU;
int32_t t13 = -25280;
uint32_t t14 = 3101U;
int32_t x994 = -992;
int64_t x995 = 4LL;
volatile int16_t x1049 = INT16_MIN;
uint64_t x1051 = 2LLU;
uint32_t t17 = UINT32_MAX;
static volatile int64_t t19 = -14LL;
static uint64_t x1140 = UINT64_MAX;
volatile int32_t x1265 = -1113;
int64_t x1266 = -94718LL;
static int8_t x1293 = -1;
uint32_t x1295 = 11U;
int8_t x1296 = -1;
uint8_t x1321 = 6U;
volatile uint64_t t25 = 47772202LLU;
uint8_t x1398 = 3U;
uint8_t x1399 = 7U;
uint16_t x1431 = 0U;
uint16_t x1641 = 105U;
static uint64_t x1646 = 14972944530716LLU;
uint8_t x1679 = 0U;
int8_t x1717 = 14;
volatile int32_t t33 = 114;
int32_t x1738 = INT32_MIN;
int8_t x1739 = 0;
int64_t x1745 = INT64_MAX;
int8_t x1784 = 50;
int32_t x1809 = INT32_MIN;
volatile int64_t x1810 = INT64_MIN;
static uint32_t x1878 = UINT32_MAX;
int32_t x1950 = INT32_MIN;
static int64_t t42 = -23720124971950156LL;
uint64_t x1982 = 319844800743690LLU;
volatile uint64_t t43 = 26170LLU;
uint64_t x2069 = 9LLU;
volatile int32_t t45 = 8193;
int64_t t46 = -154446370LL;
uint64_t x2205 = 46562LLU;
static volatile int64_t t50 = 45976LL;
int8_t x2406 = -3;
volatile int64_t t53 = 125645595LL;
volatile int64_t x2419 = 0LL;
static int8_t x2479 = 1;
int64_t t59 = 608329178477317LL;
volatile uint32_t t60 = 3U;
uint8_t x2619 = 7U;
uint16_t x2620 = 14U;
static uint8_t x2707 = 1U;
uint64_t x2762 = 345491164157735LLU;
uint64_t t63 = 10659236LLU;
int8_t x2805 = INT8_MAX;
static volatile int32_t t64 = -17;
uint64_t t67 = 1119020611613LLU;
int8_t x2936 = -24;
volatile uint64_t x3010 = UINT64_MAX;
int16_t x3022 = INT16_MAX;
int32_t x3024 = INT32_MAX;
volatile int64_t x3040 = INT64_MIN;
static volatile int16_t x3113 = INT16_MAX;
volatile int64_t t72 = -99706351LL;
uint32_t x3142 = 1558840U;
int64_t t73 = 1LL;
static uint16_t x3210 = 2485U;
uint32_t x3371 = 12U;
static int32_t x3372 = -16;
volatile int8_t x3443 = 0;
int64_t x3469 = 0LL;
int8_t x3472 = INT8_MAX;
volatile int16_t x3518 = INT16_MIN;
volatile int64_t t80 = -391290352010658626LL;
int32_t x3536 = INT32_MAX;
uint64_t t81 = 722234331537800738LLU;
static int64_t x3638 = 35507665913683LL;
int16_t x3639 = 0;
uint8_t x3662 = UINT8_MAX;
int32_t x3679 = 28;
volatile int8_t x3865 = -2;
uint16_t x3867 = 0U;
volatile int64_t t89 = 49714755LL;
uint16_t x3926 = 1262U;
volatile uint8_t x3927 = 0U;
uint64_t x4102 = 263LLU;
uint8_t x4211 = 1U;
int32_t t93 = 6519817;
uint8_t x4242 = 107U;
int32_t x4243 = 1;
uint32_t x4259 = 1U;
uint32_t t95 = 3202U;
volatile uint32_t t96 = 1721272U;
int64_t x4330 = 251406256LL;
int32_t t98 = -127;


void f0(void) {
	uint32_t x26 = 400703U;
	uint8_t x27 = 1U;
	int32_t x28 = INT32_MIN;
	volatile uint32_t t0 = 3606U;

	t0 = (((x25^x26)>>x27)+x28);

	if (t0 != 2147683996U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x37 = 493571618478978531LLU;
	uint16_t x39 = 26U;
	uint64_t t1 = 681053LLU;

	t1 = (((x37^x38)>>x39)+x40);

	if (t1 != 7354766511LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x221 = -1;
	int8_t x222 = INT8_MIN;
	uint8_t x223 = 1U;
	int16_t x224 = 1318;
	static int32_t t2 = -1;

	t2 = (((x221^x222)>>x223)+x224);

	if (t2 != 1381) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x229 = 115645161202LLU;
	static int64_t x230 = INT64_MAX;
	volatile uint16_t x231 = 20U;
	volatile uint64_t t3 = 10158829357117LLU;

	t3 = (((x229^x230)>>x231)+x232);

	if (t3 != 9223380832947687728LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x305 = 25;
	int16_t x306 = INT16_MAX;
	int16_t x307 = 1;
	int64_t x308 = INT64_MIN;
	int64_t t4 = -28498416634772LL;

	t4 = (((x305^x306)>>x307)+x308);

	if (t4 != -9223372036854759437LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x369 = -2140;
	uint32_t x370 = UINT32_MAX;
	int32_t x372 = INT32_MIN;
	uint32_t t5 = 4945448U;

	t5 = (((x369^x370)>>x371)+x372);

	if (t5 != 2147484717U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x437 = 42U;
	uint64_t x438 = UINT64_MAX;
	static int8_t x439 = 0;
	int8_t x440 = -1;
	volatile uint64_t t6 = 23695552LLU;

	t6 = (((x437^x438)>>x439)+x440);

	if (t6 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x557 = UINT8_MAX;
	volatile uint32_t x558 = 7U;
	static uint64_t x559 = 1LLU;
	uint64_t t7 = 24014056LLU;

	t7 = (((x557^x558)>>x559)+x560);

	if (t7 != 7402400050593925LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x597 = 0U;
	static int64_t x598 = INT64_MAX;
	uint64_t x600 = UINT64_MAX;
	uint64_t t8 = 132969705812890LLU;

	t8 = (((x597^x598)>>x599)+x600);

	if (t8 != 72057594037927934LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x637 = -1;
	uint64_t x638 = 1839062LLU;
	static int16_t x640 = -1;
	volatile uint64_t t9 = 5LLU;

	t9 = (((x637^x638)>>x639)+x640);

	if (t9 != 2305843009213464068LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x693 = INT16_MAX;
	volatile int8_t x694 = INT8_MAX;
	uint8_t x695 = 15U;
	int64_t x696 = -516177341234401356LL;
	static volatile int64_t t10 = -151843LL;

	t10 = (((x693^x694)>>x695)+x696);

	if (t10 != -516177341234401356LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x706 = INT8_MAX;
	int16_t x707 = 4;
	volatile int32_t t11 = 510766208;

	t11 = (((x705^x706)>>x707)+x708);

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x777 = 0U;
	uint32_t x779 = 1U;
	static volatile uint32_t x780 = 0U;
	static uint64_t t12 = 132325547459936LLU;

	t12 = (((x777^x778)>>x779)+x780);

	if (t12 != 7446142860431936LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x845 = UINT16_MAX;
	volatile uint8_t x846 = UINT8_MAX;
	static int8_t x847 = 3;
	static int8_t x848 = INT8_MIN;

	t13 = (((x845^x846)>>x847)+x848);

	if (t13 != 8032) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x921 = 9;
	static uint32_t x922 = 15037773U;
	int64_t x923 = 0LL;
	static volatile int32_t x924 = 84;

	t14 = (((x921^x922)>>x923)+x924);

	if (t14 != 15037848U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x993 = -1;
	int64_t x996 = 1LL;
	volatile int64_t t15 = -10353333LL;

	t15 = (((x993^x994)>>x995)+x996);

	if (t15 != 62LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x997 = 1412553490U;
	volatile int32_t x998 = INT32_MIN;
	uint8_t x999 = 2U;
	volatile int8_t x1000 = INT8_MIN;
	uint32_t t16 = 3U;

	t16 = (((x997^x998)>>x999)+x1000);

	if (t16 != 890009156U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1050 = INT16_MIN;
	volatile uint32_t x1052 = UINT32_MAX;

	t17 = (((x1049^x1050)>>x1051)+x1052);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x1053 = 1308087034001248LLU;
	volatile uint32_t x1054 = 6650201U;
	int8_t x1055 = 30;
	static uint32_t x1056 = 1510372707U;
	static uint64_t t18 = 483876785161431LLU;

	t18 = (((x1053^x1054)>>x1055)+x1056);

	if (t18 != 1511590957LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x1085 = UINT8_MAX;
	static uint8_t x1086 = UINT8_MAX;
	static int16_t x1087 = 10;
	int64_t x1088 = -1LL;

	t19 = (((x1085^x1086)>>x1087)+x1088);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1137 = 258888156U;
	int16_t x1138 = -22;
	uint16_t x1139 = 0U;
	static uint64_t t20 = 565339459019LLU;

	t20 = (((x1137^x1138)>>x1139)+x1140);

	if (t20 != 4036079157LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1267 = 0U;
	int64_t x1268 = 358332LL;
	volatile int64_t t21 = 1685235649LL;

	t21 = (((x1265^x1266)>>x1267)+x1268);

	if (t21 != 453985LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1273 = 487U;
	static uint64_t x1274 = 409828914034LLU;
	volatile uint32_t x1275 = 50U;
	uint8_t x1276 = 2U;
	uint64_t t22 = 22656735LLU;

	t22 = (((x1273^x1274)>>x1275)+x1276);

	if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1294 = -1;
	volatile int32_t t23 = 1;

	t23 = (((x1293^x1294)>>x1295)+x1296);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x1297 = INT16_MIN;
	volatile int16_t x1298 = -1;
	int8_t x1299 = 0;
	static uint64_t x1300 = UINT64_MAX;
	volatile uint64_t t24 = 89LLU;

	t24 = (((x1297^x1298)>>x1299)+x1300);

	if (t24 != 32766LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1322 = INT32_MAX;
	volatile uint8_t x1323 = 2U;
	uint64_t x1324 = 1916156577990249036LLU;

	t25 = (((x1321^x1322)>>x1323)+x1324);

	if (t25 != 1916156578527119946LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x1397 = 32646296463036LLU;
	int16_t x1400 = -1;
	volatile uint64_t t26 = 231402641LLU;

	t26 = (((x1397^x1398)>>x1399)+x1400);

	if (t26 != 255049191116LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1429 = 77442U;
	int8_t x1430 = -1;
	uint8_t x1432 = UINT8_MAX;
	uint32_t t27 = 3381U;

	t27 = (((x1429^x1430)>>x1431)+x1432);

	if (t27 != 4294890108U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x1449 = INT16_MIN;
	int16_t x1450 = -1;
	int8_t x1451 = 0;
	int32_t x1452 = 711863;
	int32_t t28 = 10;

	t28 = (((x1449^x1450)>>x1451)+x1452);

	if (t28 != 744630) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1642 = 42;
	int8_t x1643 = 20;
	uint32_t x1644 = UINT32_MAX;
	uint32_t t29 = UINT32_MAX;

	t29 = (((x1641^x1642)>>x1643)+x1644);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1645 = -1;
	int8_t x1647 = 2;
	volatile int16_t x1648 = INT16_MIN;
	uint64_t t30 = 2395680101757906337LLU;

	t30 = (((x1645^x1646)>>x1647)+x1648);

	if (t30 != 4611682275191222456LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1657 = 260U;
	int8_t x1658 = -1;
	volatile uint8_t x1659 = 0U;
	int8_t x1660 = 0;
	static volatile uint32_t t31 = 0U;

	t31 = (((x1657^x1658)>>x1659)+x1660);

	if (t31 != 4294967035U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1677 = INT32_MIN;
	uint32_t x1678 = 2025U;
	volatile int8_t x1680 = 55;
	volatile uint32_t t32 = 16U;

	t32 = (((x1677^x1678)>>x1679)+x1680);

	if (t32 != 2147485728U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1718 = 13734U;
	static int16_t x1719 = 1;
	volatile int16_t x1720 = -1;

	t33 = (((x1717^x1718)>>x1719)+x1720);

	if (t33 != 6867) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x1737 = -2030;
	uint64_t x1740 = 119238413857LLU;
	uint64_t t34 = 170560LLU;

	t34 = (((x1737^x1738)>>x1739)+x1740);

	if (t34 != 121385895475LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1746 = 7042405U;
	int16_t x1747 = 9;
	int8_t x1748 = 1;
	volatile int64_t t35 = -1LL;

	t35 = (((x1745^x1746)>>x1747)+x1748);

	if (t35 != 18014398509468230LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1781 = UINT8_MAX;
	uint32_t x1782 = UINT32_MAX;
	uint8_t x1783 = 9U;
	static volatile uint32_t t36 = 213U;

	t36 = (((x1781^x1782)>>x1783)+x1784);

	if (t36 != 8388657U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x1797 = 130436480U;
	static uint64_t x1798 = UINT64_MAX;
	uint8_t x1799 = 33U;
	int8_t x1800 = INT8_MIN;
	volatile uint64_t t37 = 46221076222LLU;

	t37 = (((x1797^x1798)>>x1799)+x1800);

	if (t37 != 2147483519LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1811 = 1;
	uint64_t x1812 = UINT64_MAX;
	volatile uint64_t t38 = 243639389974587255LLU;

	t38 = (((x1809^x1810)>>x1811)+x1812);

	if (t38 != 4611686017353646079LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1877 = 723433152681LLU;
	int8_t x1879 = 6;
	volatile int8_t x1880 = INT8_MAX;
	volatile uint64_t t39 = 877613LLU;

	t39 = (((x1877^x1878)>>x1879)+x1880);

	if (t39 != 11312044284LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x1885 = INT8_MIN;
	static int16_t x1886 = INT16_MIN;
	static int8_t x1887 = 5;
	static int64_t x1888 = 184192956739300509LL;
	volatile int64_t t40 = -2282739775LL;

	t40 = (((x1885^x1886)>>x1887)+x1888);

	if (t40 != 184192956739301529LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x1909 = INT16_MIN;
	volatile int16_t x1910 = -127;
	static uint32_t x1911 = 6U;
	uint32_t x1912 = 7166U;
	volatile uint32_t t41 = 2U;

	t41 = (((x1909^x1910)>>x1911)+x1912);

	if (t41 != 7676U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1949 = -17929612701761LL;
	int8_t x1951 = 0;
	static volatile int8_t x1952 = -1;

	t42 = (((x1949^x1950)>>x1951)+x1952);

	if (t42 != 17931216736190LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x1981 = INT16_MAX;
	static uint16_t x1983 = 48U;
	int8_t x1984 = -1;

	t43 = (((x1981^x1982)>>x1983)+x1984);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x2070 = INT64_MIN;
	uint32_t x2071 = 1U;
	uint8_t x2072 = UINT8_MAX;
	uint64_t t44 = 3154112969LLU;

	t44 = (((x2069^x2070)>>x2071)+x2072);

	if (t44 != 4611686018427388163LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2113 = INT16_MIN;
	int8_t x2114 = -61;
	volatile uint64_t x2115 = 1LLU;
	int32_t x2116 = -1;

	t45 = (((x2113^x2114)>>x2115)+x2116);

	if (t45 != 16352) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2169 = INT16_MAX;
	volatile uint32_t x2170 = 1600029U;
	static uint8_t x2171 = 3U;
	static volatile int64_t x2172 = 53191104LL;

	t46 = (((x2169^x2170)>>x2171)+x2172);

	if (t46 != 53388412LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x2206 = 18474U;
	uint8_t x2207 = 1U;
	int64_t x2208 = INT64_MIN;
	volatile uint64_t t47 = 110580LLU;

	t47 = (((x2205^x2206)>>x2207)+x2208);

	if (t47 != 9223372036854808292LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x2213 = INT16_MIN;
	int16_t x2214 = INT16_MIN;
	uint16_t x2215 = 7U;
	int8_t x2216 = 21;
	int32_t t48 = -42919;

	t48 = (((x2213^x2214)>>x2215)+x2216);

	if (t48 != 21) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x2217 = 1796U;
	static volatile int16_t x2218 = 12;
	int8_t x2219 = 10;
	uint32_t x2220 = UINT32_MAX;
	static volatile uint32_t t49 = 52U;

	t49 = (((x2217^x2218)>>x2219)+x2220);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2249 = INT8_MIN;
	int32_t x2250 = -1;
	uint16_t x2251 = 1U;
	volatile int64_t x2252 = -2427604941298LL;

	t50 = (((x2249^x2250)>>x2251)+x2252);

	if (t50 != -2427604941235LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x2337 = 99U;
	static volatile uint32_t x2338 = 121311584U;
	volatile uint16_t x2339 = 22U;
	int8_t x2340 = -1;
	uint32_t t51 = 7U;

	t51 = (((x2337^x2338)>>x2339)+x2340);

	if (t51 != 27U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2357 = UINT16_MAX;
	int32_t x2358 = 378872;
	uint8_t x2359 = 17U;
	static volatile uint32_t x2360 = 91U;
	volatile uint32_t t52 = 233653U;

	t52 = (((x2357^x2358)>>x2359)+x2360);

	if (t52 != 93U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x2405 = -1LL;
	static int8_t x2407 = 0;
	volatile int64_t x2408 = INT64_MIN;

	t53 = (((x2405^x2406)>>x2407)+x2408);

	if (t53 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2417 = INT64_MIN;
	int64_t x2418 = INT64_MIN;
	int32_t x2420 = INT32_MIN;
	int64_t t54 = 1LL;

	t54 = (((x2417^x2418)>>x2419)+x2420);

	if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2437 = INT16_MAX;
	static int64_t x2438 = 238022LL;
	static uint16_t x2439 = 1U;
	int32_t x2440 = INT32_MIN;
	int64_t t55 = -1LL;

	t55 = (((x2437^x2438)>>x2439)+x2440);

	if (t55 != -2147356900LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2441 = INT64_MIN;
	volatile int64_t x2442 = -953507286930LL;
	int8_t x2443 = 20;
	int8_t x2444 = INT8_MIN;
	volatile int64_t t56 = -2577448119LL;

	t56 = (((x2441^x2442)>>x2443)+x2444);

	if (t56 != 8796092112744LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2477 = 8556109LLU;
	int64_t x2478 = -52LL;
	int8_t x2480 = 1;
	volatile uint64_t t57 = 971272555168LLU;

	t57 = (((x2477^x2478)>>x2479)+x2480);

	if (t57 != 9223372036850497729LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2481 = 2998U;
	uint8_t x2482 = UINT8_MAX;
	volatile uint16_t x2483 = 21U;
	int8_t x2484 = INT8_MAX;
	uint32_t t58 = 3217U;

	t58 = (((x2481^x2482)>>x2483)+x2484);

	if (t58 != 127U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2513 = -275830879;
	static int64_t x2514 = INT64_MIN;
	int16_t x2515 = 0;
	volatile int16_t x2516 = -90;

	t59 = (((x2513^x2514)>>x2515)+x2516);

	if (t59 != 9223372036578944839LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x2545 = 7U;
	int8_t x2546 = 4;
	uint16_t x2547 = 0U;
	int16_t x2548 = INT16_MIN;

	t60 = (((x2545^x2546)>>x2547)+x2548);

	if (t60 != 4294934531U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2617 = 2534107U;
	static int8_t x2618 = -27;
	uint32_t t61 = 1241U;

	t61 = (((x2617^x2618)>>x2619)+x2620);

	if (t61 != 33534648U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2705 = INT8_MIN;
	int8_t x2706 = -1;
	int16_t x2708 = -92;
	int32_t t62 = -2500;

	t62 = (((x2705^x2706)>>x2707)+x2708);

	if (t62 != -29) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2761 = 7024;
	int32_t x2763 = 33;
	uint32_t x2764 = 35U;

	t63 = (((x2761^x2762)>>x2763)+x2764);

	if (t63 != 40255LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2806 = INT8_MAX;
	volatile uint32_t x2807 = 1U;
	volatile int8_t x2808 = INT8_MIN;

	t64 = (((x2805^x2806)>>x2807)+x2808);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2829 = 485837505U;
	int8_t x2830 = 0;
	uint8_t x2831 = 15U;
	int16_t x2832 = 203;
	static volatile uint32_t t65 = 20619U;

	t65 = (((x2829^x2830)>>x2831)+x2832);

	if (t65 != 15029U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2873 = 1790U;
	int16_t x2874 = INT16_MIN;
	uint8_t x2875 = 1U;
	uint16_t x2876 = 424U;
	volatile uint32_t t66 = 246449U;

	t66 = (((x2873^x2874)>>x2875)+x2876);

	if (t66 != 2147468583U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2885 = 460570187050LLU;
	static int8_t x2886 = INT8_MIN;
	uint32_t x2887 = 0U;
	static int64_t x2888 = INT64_MAX;

	t67 = (((x2885^x2886)>>x2887)+x2888);

	if (t67 != 9223371576284588713LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2933 = -1LL;
	int64_t x2934 = -3729085375LL;
	uint8_t x2935 = 40U;
	int64_t t68 = 426928173115LL;

	t68 = (((x2933^x2934)>>x2935)+x2936);

	if (t68 != -24LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3009 = 32936033917290151LLU;
	uint32_t x3011 = 28U;
	volatile int16_t x3012 = 28;
	volatile uint64_t t69 = 4981975017665944LLU;

	t69 = (((x3009^x3010)>>x3011)+x3012);

	if (t69 != 68596780476LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x3021 = 1;
	static int8_t x3023 = 23;
	int32_t t70 = INT32_MAX;

	t70 = (((x3021^x3022)>>x3023)+x3024);

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x3037 = INT8_MIN;
	static volatile int8_t x3038 = INT8_MIN;
	uint8_t x3039 = 0U;
	volatile int64_t t71 = INT64_MIN;

	t71 = (((x3037^x3038)>>x3039)+x3040);

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3114 = 71LL;
	int8_t x3115 = 21;
	int8_t x3116 = -1;

	t72 = (((x3113^x3114)>>x3115)+x3116);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x3141 = 389753140;
	int8_t x3143 = 0;
	int64_t x3144 = -1LL;

	t73 = (((x3141^x3142)>>x3143)+x3144);

	if (t73 != 388816907LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3209 = INT64_MAX;
	int32_t x3211 = 1;
	int8_t x3212 = -1;
	volatile int64_t t74 = 41497LL;

	t74 = (((x3209^x3210)>>x3211)+x3212);

	if (t74 != 4611686018427386660LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3213 = INT64_MAX;
	uint32_t x3214 = 1994727500U;
	volatile uint8_t x3215 = 1U;
	uint64_t x3216 = 11LLU;
	volatile uint64_t t75 = 2366903406503LLU;

	t75 = (((x3213^x3214)>>x3215)+x3216);

	if (t75 != 4611686017430024164LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3337 = 153829091065748LLU;
	uint16_t x3338 = UINT16_MAX;
	volatile uint8_t x3339 = 0U;
	volatile int64_t x3340 = -1LL;
	volatile uint64_t t76 = 15LLU;

	t76 = (((x3337^x3338)>>x3339)+x3340);

	if (t76 != 153829091098730LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3369 = INT16_MAX;
	static uint8_t x3370 = 1U;
	int32_t t77 = -22515006;

	t77 = (((x3369^x3370)>>x3371)+x3372);

	if (t77 != -9) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3441 = UINT16_MAX;
	int32_t x3442 = 2267;
	int32_t x3444 = -577;
	int32_t t78 = 454396037;

	t78 = (((x3441^x3442)>>x3443)+x3444);

	if (t78 != 62691) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3470 = UINT64_MAX;
	volatile int8_t x3471 = 1;
	uint64_t t79 = 1LLU;

	t79 = (((x3469^x3470)>>x3471)+x3472);

	if (t79 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x3517 = INT64_MIN;
	int64_t x3519 = 18LL;
	volatile uint8_t x3520 = 4U;

	t80 = (((x3517^x3518)>>x3519)+x3520);

	if (t80 != 35184372088835LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3533 = UINT8_MAX;
	static uint64_t x3534 = UINT64_MAX;
	int8_t x3535 = 1;

	t81 = (((x3533^x3534)>>x3535)+x3536);

	if (t81 != 9223372039002259327LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3637 = UINT32_MAX;
	int8_t x3640 = -1;
	volatile int64_t t82 = -2939332593482LL;

	t82 = (((x3637^x3638)>>x3639)+x3640);

	if (t82 != 35509618325675LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x3649 = -30838;
	int16_t x3650 = INT16_MIN;
	int8_t x3651 = 3;
	static int16_t x3652 = INT16_MIN;
	int32_t t83 = -95246;

	t83 = (((x3649^x3650)>>x3651)+x3652);

	if (t83 != -32527) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x3661 = 17U;
	int8_t x3663 = 0;
	int16_t x3664 = -1;
	volatile int32_t t84 = -98869;

	t84 = (((x3661^x3662)>>x3663)+x3664);

	if (t84 != 237) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3677 = 53223LLU;
	static int8_t x3678 = -1;
	uint8_t x3680 = UINT8_MAX;
	uint64_t t85 = 14000070LLU;

	t85 = (((x3677^x3678)>>x3679)+x3680);

	if (t85 != 68719476990LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x3705 = 1188616531586741LLU;
	volatile int16_t x3706 = INT16_MIN;
	volatile int16_t x3707 = 14;
	volatile int64_t x3708 = 1LL;
	uint64_t t86 = 562758919LLU;

	t86 = (((x3705^x3706)>>x3707)+x3708);

	if (t86 != 1125827359446897LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3733 = INT64_MIN;
	int16_t x3734 = -1;
	uint8_t x3735 = 24U;
	uint32_t x3736 = 84299U;
	static volatile int64_t t87 = 1379LL;

	t87 = (((x3733^x3734)>>x3735)+x3736);

	if (t87 != 549755898186LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x3866 = UINT64_MAX;
	int32_t x3868 = 881;
	static uint64_t t88 = 174221238483549LLU;

	t88 = (((x3865^x3866)>>x3867)+x3868);

	if (t88 != 882LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3913 = INT64_MAX;
	volatile uint32_t x3914 = 1887U;
	uint16_t x3915 = 21U;
	int16_t x3916 = INT16_MIN;

	t89 = (((x3913^x3914)>>x3915)+x3916);

	if (t89 != 4398046478335LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x3925 = 5U;
	static uint32_t x3928 = 0U;
	volatile uint32_t t90 = 151392U;

	t90 = (((x3925^x3926)>>x3927)+x3928);

	if (t90 != 1259U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x3949 = INT32_MIN;
	int8_t x3950 = -1;
	uint16_t x3951 = 19U;
	uint8_t x3952 = UINT8_MAX;
	int32_t t91 = 409304;

	t91 = (((x3949^x3950)>>x3951)+x3952);

	if (t91 != 4350) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4101 = INT8_MIN;
	static uint8_t x4103 = 1U;
	int16_t x4104 = -1;
	volatile uint64_t t92 = 29658641290418516LLU;

	t92 = (((x4101^x4102)>>x4103)+x4104);

	if (t92 != 9223372036854775618LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4209 = -1;
	volatile int16_t x4210 = INT16_MIN;
	volatile int16_t x4212 = -1;

	t93 = (((x4209^x4210)>>x4211)+x4212);

	if (t93 != 16382) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x4241 = INT16_MAX;
	uint32_t x4244 = 0U;
	uint32_t t94 = 0U;

	t94 = (((x4241^x4242)>>x4243)+x4244);

	if (t94 != 16330U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4257 = 7398U;
	int8_t x4258 = -60;
	volatile int16_t x4260 = INT16_MIN;

	t95 = (((x4257^x4258)>>x4259)+x4260);

	if (t95 != 2147447185U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4277 = -3986;
	uint32_t x4278 = UINT32_MAX;
	uint8_t x4279 = 6U;
	int8_t x4280 = INT8_MAX;

	t96 = (((x4277^x4278)>>x4279)+x4280);

	if (t96 != 189U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x4329 = UINT64_MAX;
	uint8_t x4331 = 7U;
	volatile int16_t x4332 = INT16_MIN;
	volatile uint64_t t97 = 168LLU;

	t97 = (((x4329^x4330)>>x4331)+x4332);

	if (t97 != 144115188073858992LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x4361 = INT8_MIN;
	int16_t x4362 = -8053;
	uint32_t x4363 = 25U;
	int8_t x4364 = -8;

	t98 = (((x4361^x4362)>>x4363)+x4364);

	if (t98 != -8) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4381 = 7138622572219364738LLU;
	static int64_t x4382 = 2878LL;
	uint8_t x4383 = 2U;
	static uint64_t x4384 = 1698826719751LLU;
	volatile uint64_t t99 = 2196092312667868060LLU;

	t99 = (((x4381^x4382)>>x4383)+x4384);

	if (t99 != 1784657341881561526LLU) { NG(); } else { ; }
	
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

