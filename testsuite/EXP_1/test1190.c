#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -187;
static int32_t x53 = 355213687;
int16_t x54 = INT16_MAX;
int32_t t5 = 0;
static volatile int8_t x257 = INT8_MIN;
uint16_t x260 = 24U;
uint64_t x272 = 1LLU;
volatile int32_t t10 = 34;
static volatile int32_t t11 = 19783;
int16_t x445 = INT16_MIN;
volatile int32_t t12 = -52;
static volatile int64_t x457 = INT64_MIN;
uint16_t x506 = 936U;
volatile uint64_t x507 = 27314348252LLU;
uint64_t t14 = 1191LLU;
uint8_t x690 = UINT8_MAX;
uint16_t x691 = 11736U;
uint16_t x778 = 13U;
static volatile uint8_t x779 = UINT8_MAX;
volatile uint32_t x780 = 0U;
volatile int16_t x837 = 3;
int32_t x838 = INT32_MAX;
volatile uint64_t x839 = UINT64_MAX;
uint64_t t20 = UINT64_MAX;
uint16_t x910 = 4401U;
int32_t t22 = -5664627;
volatile uint32_t x1171 = 2U;
volatile int16_t x1172 = 0;
int32_t x1197 = INT32_MAX;
volatile int8_t x1238 = -1;
int64_t x1239 = 0LL;
int8_t x1240 = 0;
int8_t x1393 = INT8_MAX;
int64_t x1505 = -1LL;
volatile int64_t x1514 = INT64_MIN;
int16_t x1584 = 22;
uint8_t x1620 = 25U;
static uint64_t x1751 = UINT64_MAX;
static volatile uint64_t x1863 = UINT64_MAX;
int8_t x1892 = 29;
static uint64_t t40 = 1410920395916LLU;
static int64_t x1982 = INT64_MIN;
int16_t x2002 = INT16_MIN;
volatile int16_t x2003 = 417;
uint8_t x2004 = 15U;
int64_t t44 = 48934241LL;
int16_t x2153 = -1;
volatile uint32_t t45 = 2657U;
volatile uint32_t x2214 = 283U;
int64_t x2217 = 314204682695476LL;
static volatile int64_t x2218 = INT64_MIN;
static uint16_t x2220 = 15U;
uint16_t x2235 = 715U;
volatile int32_t t49 = -3004;
uint16_t x2241 = 1575U;
int32_t x2243 = INT32_MAX;
static int32_t t51 = 101693;
uint8_t x2392 = 1U;
uint16_t x2415 = 14662U;
volatile uint16_t x2693 = 3U;
int32_t t55 = 14584;
uint8_t x2718 = 0U;
volatile int32_t x2720 = 1;
int16_t x3262 = INT16_MIN;
volatile int32_t x3297 = INT32_MIN;
volatile uint16_t x3300 = 2U;
static volatile uint16_t x3330 = UINT16_MAX;
uint16_t x3332 = 19U;
int8_t x3373 = 1;
int32_t t64 = -4177966;
int32_t x3442 = 62;
uint64_t x3443 = UINT64_MAX;
uint16_t x3444 = 2U;
static uint8_t x3461 = 1U;
int32_t t67 = 0;
int32_t x3618 = INT32_MAX;
static int16_t x3741 = -17;
int32_t x3846 = 461085;
volatile int32_t t76 = 2836550;
int32_t x3915 = 0;
int32_t t78 = -46;
int8_t x4001 = INT8_MAX;
int32_t x4102 = 104505160;
int32_t x4103 = INT32_MAX;
volatile int16_t x4130 = -1;
volatile uint8_t x4344 = 39U;
volatile uint64_t t84 = 27658LLU;
volatile int64_t x4529 = INT64_MIN;
uint8_t x4532 = 29U;
int32_t t86 = 413142;
uint64_t x4571 = 26335793934567334LLU;
volatile int8_t x4687 = 2;
uint32_t x4699 = UINT32_MAX;
int64_t x4722 = -770267011823074030LL;
int32_t x4801 = INT32_MAX;
uint64_t x4802 = 52215585360271LLU;
int32_t x4824 = 0;
volatile int32_t t94 = -48;
static int8_t x4858 = INT8_MIN;
uint32_t x4859 = 10827U;
uint16_t x4929 = UINT16_MAX;
int32_t t96 = -64417239;
int8_t x5139 = INT8_MAX;
uint8_t x5140 = 10U;
static int32_t t99 = -116621672;


void f0(void) {
	int8_t x17 = INT8_MAX;
	volatile int64_t x18 = -1LL;
	uint32_t x19 = 50U;
	static uint8_t x20 = 3U;
	static volatile uint32_t t0 = 425644U;

	t0 = (((x17==x18)+x19)>>x20);

	if (t0 != 6U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x33 = -1;
	int32_t x34 = INT32_MIN;
	static int8_t x35 = 2;
	static uint8_t x36 = 0U;

	t1 = (((x33==x34)+x35)>>x36);

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x37 = -1;
	volatile uint16_t x38 = 3U;
	int64_t x39 = INT64_MAX;
	uint16_t x40 = 4U;
	int64_t t2 = -12251LL;

	t2 = (((x37==x38)+x39)>>x40);

	if (t2 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x55 = 48;
	static uint8_t x56 = 0U;
	int32_t t3 = 2061279;

	t3 = (((x53==x54)+x55)>>x56);

	if (t3 != 48) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x117 = INT64_MIN;
	int16_t x118 = INT16_MIN;
	static uint32_t x119 = 234U;
	uint8_t x120 = 1U;
	volatile uint32_t t4 = 32317U;

	t4 = (((x117==x118)+x119)>>x120);

	if (t4 != 117U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x125 = INT16_MIN;
	uint32_t x126 = UINT32_MAX;
	int8_t x127 = 0;
	volatile uint64_t x128 = 0LLU;

	t5 = (((x125==x126)+x127)>>x128);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x153 = INT32_MIN;
	uint32_t x154 = 1257U;
	uint32_t x155 = 28307713U;
	int16_t x156 = 6;
	uint32_t t6 = 802462314U;

	t6 = (((x153==x154)+x155)>>x156);

	if (t6 != 442308U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x177 = -240;
	uint32_t x178 = 300153617U;
	uint64_t x179 = 20331492382LLU;
	uint32_t x180 = 55U;
	static volatile uint64_t t7 = 6308504LLU;

	t7 = (((x177==x178)+x179)>>x180);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x258 = 0LLU;
	static uint8_t x259 = 23U;
	static int32_t t8 = -412717;

	t8 = (((x257==x258)+x259)>>x260);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x269 = -1;
	static uint64_t x270 = UINT64_MAX;
	int8_t x271 = 5;
	static int32_t t9 = -81537584;

	t9 = (((x269==x270)+x271)>>x272);

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x389 = UINT16_MAX;
	uint64_t x390 = 2039895544LLU;
	uint16_t x391 = 24U;
	uint8_t x392 = 2U;

	t10 = (((x389==x390)+x391)>>x392);

	if (t10 != 6) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x397 = INT16_MIN;
	static int32_t x398 = INT32_MIN;
	int32_t x399 = INT32_MAX;
	int8_t x400 = 29;

	t11 = (((x397==x398)+x399)>>x400);

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x446 = -1LL;
	int32_t x447 = 9283;
	volatile int8_t x448 = 3;

	t12 = (((x445==x446)+x447)>>x448);

	if (t12 != 1160) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x458 = 8543LL;
	static int64_t x459 = 194034300458694LL;
	uint16_t x460 = 0U;
	volatile int64_t t13 = -121281612596053LL;

	t13 = (((x457==x458)+x459)>>x460);

	if (t13 != 194034300458694LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x505 = 3;
	uint8_t x508 = 1U;

	t14 = (((x505==x506)+x507)>>x508);

	if (t14 != 13657174126LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x621 = 0LL;
	volatile int64_t x622 = -1LL;
	volatile uint8_t x623 = 5U;
	static int8_t x624 = 19;
	int32_t t15 = 0;

	t15 = (((x621==x622)+x623)>>x624);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x689 = INT32_MAX;
	volatile int8_t x692 = 0;
	int32_t t16 = 30948652;

	t16 = (((x689==x690)+x691)>>x692);

	if (t16 != 11736) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x729 = -3687;
	static int8_t x730 = INT8_MIN;
	static volatile int8_t x731 = INT8_MAX;
	int32_t x732 = 1;
	static volatile int32_t t17 = 779433;

	t17 = (((x729==x730)+x731)>>x732);

	if (t17 != 63) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x765 = INT16_MAX;
	static int64_t x766 = INT64_MAX;
	uint32_t x767 = 4U;
	static int16_t x768 = 3;
	volatile uint32_t t18 = 93U;

	t18 = (((x765==x766)+x767)>>x768);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x777 = INT16_MIN;
	static int32_t t19 = -610268;

	t19 = (((x777==x778)+x779)>>x780);

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x840 = 0;

	t20 = (((x837==x838)+x839)>>x840);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x909 = UINT64_MAX;
	uint64_t x911 = 270LLU;
	int64_t x912 = 2LL;
	volatile uint64_t t21 = 194085170254LLU;

	t21 = (((x909==x910)+x911)>>x912);

	if (t21 != 67LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x993 = 1124962U;
	volatile uint64_t x994 = 32449450LLU;
	volatile int16_t x995 = 14;
	int8_t x996 = 1;

	t22 = (((x993==x994)+x995)>>x996);

	if (t22 != 7) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x1057 = UINT8_MAX;
	volatile int8_t x1058 = -1;
	static int8_t x1059 = 0;
	static volatile uint8_t x1060 = 16U;
	volatile int32_t t23 = 22509496;

	t23 = (((x1057==x1058)+x1059)>>x1060);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1149 = INT32_MIN;
	int32_t x1150 = INT32_MAX;
	volatile uint8_t x1151 = 1U;
	int16_t x1152 = 3;
	volatile int32_t t24 = 2476;

	t24 = (((x1149==x1150)+x1151)>>x1152);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1169 = 118LLU;
	static int16_t x1170 = 1;
	uint32_t t25 = 29117U;

	t25 = (((x1169==x1170)+x1171)>>x1172);

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1198 = INT8_MAX;
	static int16_t x1199 = INT16_MAX;
	int16_t x1200 = 0;
	static volatile int32_t t26 = 8001;

	t26 = (((x1197==x1198)+x1199)>>x1200);

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1237 = 2574U;
	volatile int64_t t27 = -315784209911LL;

	t27 = (((x1237==x1238)+x1239)>>x1240);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1394 = 3694883853516LLU;
	volatile int8_t x1395 = 3;
	static uint16_t x1396 = 10U;
	volatile int32_t t28 = -14292;

	t28 = (((x1393==x1394)+x1395)>>x1396);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1429 = INT32_MIN;
	int64_t x1430 = INT64_MAX;
	int16_t x1431 = INT16_MAX;
	volatile uint64_t x1432 = 1LLU;
	volatile int32_t t29 = -459;

	t29 = (((x1429==x1430)+x1431)>>x1432);

	if (t29 != 16383) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1441 = INT8_MAX;
	static uint8_t x1442 = 124U;
	int8_t x1443 = INT8_MAX;
	static uint16_t x1444 = 2U;
	volatile int32_t t30 = 1018769416;

	t30 = (((x1441==x1442)+x1443)>>x1444);

	if (t30 != 31) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1506 = INT32_MAX;
	int32_t x1507 = INT32_MAX;
	uint8_t x1508 = 3U;
	volatile int32_t t31 = 6324;

	t31 = (((x1505==x1506)+x1507)>>x1508);

	if (t31 != 268435455) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1513 = 0;
	uint32_t x1515 = 156U;
	static int16_t x1516 = 1;
	uint32_t t32 = 56500208U;

	t32 = (((x1513==x1514)+x1515)>>x1516);

	if (t32 != 78U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1545 = -1;
	int32_t x1546 = INT32_MIN;
	volatile uint64_t x1547 = UINT64_MAX;
	int8_t x1548 = 0;
	uint64_t t33 = UINT64_MAX;

	t33 = (((x1545==x1546)+x1547)>>x1548);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1581 = 113U;
	int64_t x1582 = INT64_MAX;
	int64_t x1583 = 2693320LL;
	volatile int64_t t34 = 274316405982LL;

	t34 = (((x1581==x1582)+x1583)>>x1584);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1617 = -10;
	int8_t x1618 = 6;
	static uint16_t x1619 = 622U;
	volatile int32_t t35 = 0;

	t35 = (((x1617==x1618)+x1619)>>x1620);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x1681 = -1LL;
	int8_t x1682 = INT8_MIN;
	int32_t x1683 = INT32_MAX;
	volatile uint64_t x1684 = 26LLU;
	volatile int32_t t36 = 1;

	t36 = (((x1681==x1682)+x1683)>>x1684);

	if (t36 != 31) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x1749 = UINT16_MAX;
	uint32_t x1750 = 9292U;
	volatile uint8_t x1752 = 10U;
	uint64_t t37 = 0LLU;

	t37 = (((x1749==x1750)+x1751)>>x1752);

	if (t37 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x1861 = INT32_MIN;
	int8_t x1862 = INT8_MIN;
	static uint8_t x1864 = 12U;
	uint64_t t38 = 529728738824LLU;

	t38 = (((x1861==x1862)+x1863)>>x1864);

	if (t38 != 4503599627370495LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x1869 = 101U;
	uint8_t x1870 = 95U;
	int32_t x1871 = 247;
	uint32_t x1872 = 3U;
	volatile int32_t t39 = 405065;

	t39 = (((x1869==x1870)+x1871)>>x1872);

	if (t39 != 30) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1889 = -257;
	int8_t x1890 = -1;
	static uint64_t x1891 = 483511641555502525LLU;

	t40 = (((x1889==x1890)+x1891)>>x1892);

	if (t40 != 900610613LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1981 = UINT32_MAX;
	int32_t x1983 = 3;
	int32_t x1984 = 0;
	int32_t t41 = 0;

	t41 = (((x1981==x1982)+x1983)>>x1984);

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x2001 = -34696525410LL;
	int32_t t42 = -61417455;

	t42 = (((x2001==x2002)+x2003)>>x2004);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2025 = UINT16_MAX;
	uint32_t x2026 = 123198442U;
	volatile uint64_t x2027 = 5289LLU;
	uint16_t x2028 = 3U;
	volatile uint64_t t43 = 14LLU;

	t43 = (((x2025==x2026)+x2027)>>x2028);

	if (t43 != 661LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x2041 = 0;
	int16_t x2042 = 0;
	static int64_t x2043 = -1LL;
	uint16_t x2044 = 1U;

	t44 = (((x2041==x2042)+x2043)>>x2044);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2154 = -519801;
	uint32_t x2155 = UINT32_MAX;
	static uint8_t x2156 = 5U;

	t45 = (((x2153==x2154)+x2155)>>x2156);

	if (t45 != 134217727U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2213 = 3U;
	static int8_t x2215 = INT8_MAX;
	int16_t x2216 = 0;
	int32_t t46 = 12816;

	t46 = (((x2213==x2214)+x2215)>>x2216);

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2219 = INT32_MAX;
	volatile int32_t t47 = -69700;

	t47 = (((x2217==x2218)+x2219)>>x2220);

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2225 = INT32_MIN;
	uint8_t x2226 = 16U;
	volatile uint16_t x2227 = 431U;
	uint8_t x2228 = 2U;
	volatile int32_t t48 = -688156;

	t48 = (((x2225==x2226)+x2227)>>x2228);

	if (t48 != 107) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2233 = -25;
	int8_t x2234 = INT8_MIN;
	uint16_t x2236 = 24U;

	t49 = (((x2233==x2234)+x2235)>>x2236);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x2242 = -1;
	int16_t x2244 = 6;
	static int32_t t50 = -35;

	t50 = (((x2241==x2242)+x2243)>>x2244);

	if (t50 != 33554431) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x2381 = 0U;
	static uint64_t x2382 = 501813LLU;
	static uint16_t x2383 = 23431U;
	uint16_t x2384 = 1U;

	t51 = (((x2381==x2382)+x2383)>>x2384);

	if (t51 != 11715) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x2389 = -1;
	int8_t x2390 = INT8_MIN;
	uint32_t x2391 = 610549U;
	uint32_t t52 = 1027436214U;

	t52 = (((x2389==x2390)+x2391)>>x2392);

	if (t52 != 305274U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2413 = 168011430755781448LLU;
	int32_t x2414 = INT32_MAX;
	uint8_t x2416 = 4U;
	static volatile int32_t t53 = 90867;

	t53 = (((x2413==x2414)+x2415)>>x2416);

	if (t53 != 916) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x2694 = 248;
	volatile uint32_t x2695 = 508798U;
	uint8_t x2696 = 0U;
	uint32_t t54 = 3373748U;

	t54 = (((x2693==x2694)+x2695)>>x2696);

	if (t54 != 508798U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2713 = -1;
	volatile int32_t x2714 = INT32_MIN;
	uint8_t x2715 = 45U;
	uint8_t x2716 = 0U;

	t55 = (((x2713==x2714)+x2715)>>x2716);

	if (t55 != 45) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2717 = -1;
	volatile uint32_t x2719 = 1005104U;
	volatile uint32_t t56 = 475846U;

	t56 = (((x2717==x2718)+x2719)>>x2720);

	if (t56 != 502552U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x2729 = INT8_MIN;
	int64_t x2730 = -1LL;
	int32_t x2731 = INT32_MAX;
	int16_t x2732 = 2;
	volatile int32_t t57 = 5249458;

	t57 = (((x2729==x2730)+x2731)>>x2732);

	if (t57 != 536870911) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x3013 = UINT16_MAX;
	static int8_t x3014 = 16;
	int8_t x3015 = INT8_MAX;
	uint8_t x3016 = 5U;
	volatile int32_t t58 = 1635;

	t58 = (((x3013==x3014)+x3015)>>x3016);

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x3089 = 0U;
	int32_t x3090 = -864;
	volatile int32_t x3091 = INT32_MAX;
	static uint16_t x3092 = 3U;
	int32_t t59 = -7;

	t59 = (((x3089==x3090)+x3091)>>x3092);

	if (t59 != 268435455) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3181 = 6307U;
	int64_t x3182 = -1LL;
	volatile uint8_t x3183 = 84U;
	int16_t x3184 = 2;
	volatile int32_t t60 = 4;

	t60 = (((x3181==x3182)+x3183)>>x3184);

	if (t60 != 21) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3261 = INT32_MAX;
	volatile uint8_t x3263 = UINT8_MAX;
	uint8_t x3264 = 31U;
	int32_t t61 = -328;

	t61 = (((x3261==x3262)+x3263)>>x3264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3298 = INT16_MAX;
	static int32_t x3299 = INT32_MAX;
	int32_t t62 = -158304894;

	t62 = (((x3297==x3298)+x3299)>>x3300);

	if (t62 != 536870911) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3329 = -148716910;
	int8_t x3331 = INT8_MAX;
	volatile int32_t t63 = -234;

	t63 = (((x3329==x3330)+x3331)>>x3332);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3374 = 216937551876727LLU;
	int32_t x3375 = 1;
	volatile uint16_t x3376 = 11U;

	t64 = (((x3373==x3374)+x3375)>>x3376);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x3441 = 19385373U;
	volatile uint64_t t65 = 12590535645LLU;

	t65 = (((x3441==x3442)+x3443)>>x3444);

	if (t65 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x3462 = UINT64_MAX;
	static uint8_t x3463 = UINT8_MAX;
	volatile uint8_t x3464 = 30U;
	int32_t t66 = 122584690;

	t66 = (((x3461==x3462)+x3463)>>x3464);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3489 = -1;
	int16_t x3490 = INT16_MIN;
	int32_t x3491 = 7020057;
	static int8_t x3492 = 16;

	t67 = (((x3489==x3490)+x3491)>>x3492);

	if (t67 != 107) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x3493 = INT16_MIN;
	int32_t x3494 = 1228;
	uint64_t x3495 = 24018176755590LLU;
	uint8_t x3496 = 17U;
	uint64_t t68 = 12975521LLU;

	t68 = (((x3493==x3494)+x3495)>>x3496);

	if (t68 != 183244146LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x3565 = 3334792LLU;
	static uint16_t x3566 = 6580U;
	uint16_t x3567 = UINT16_MAX;
	static uint8_t x3568 = 1U;
	static int32_t t69 = 1747;

	t69 = (((x3565==x3566)+x3567)>>x3568);

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3605 = -1LL;
	static int32_t x3606 = -2523800;
	static int8_t x3607 = 0;
	uint16_t x3608 = 14U;
	static int32_t t70 = 7911377;

	t70 = (((x3605==x3606)+x3607)>>x3608);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x3617 = INT16_MIN;
	uint32_t x3619 = 49557U;
	int8_t x3620 = 1;
	uint32_t t71 = 2111418U;

	t71 = (((x3617==x3618)+x3619)>>x3620);

	if (t71 != 24778U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x3669 = UINT16_MAX;
	uint32_t x3670 = 62337U;
	int16_t x3671 = INT16_MAX;
	int64_t x3672 = 0LL;
	int32_t t72 = -988944113;

	t72 = (((x3669==x3670)+x3671)>>x3672);

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x3742 = 0;
	static int16_t x3743 = INT16_MAX;
	uint16_t x3744 = 1U;
	int32_t t73 = 14750;

	t73 = (((x3741==x3742)+x3743)>>x3744);

	if (t73 != 16383) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x3765 = 1U;
	uint32_t x3766 = 5168U;
	uint64_t x3767 = 331401811049LLU;
	uint8_t x3768 = 4U;
	static volatile uint64_t t74 = 7355012226029989541LLU;

	t74 = (((x3765==x3766)+x3767)>>x3768);

	if (t74 != 20712613190LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x3845 = -5;
	uint8_t x3847 = 33U;
	static uint32_t x3848 = 29U;
	static volatile int32_t t75 = 23649554;

	t75 = (((x3845==x3846)+x3847)>>x3848);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x3873 = 122139;
	int64_t x3874 = INT64_MAX;
	volatile uint16_t x3875 = 9079U;
	uint8_t x3876 = 7U;

	t76 = (((x3873==x3874)+x3875)>>x3876);

	if (t76 != 70) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3913 = 3635LLU;
	static int8_t x3914 = 0;
	volatile uint8_t x3916 = 2U;
	int32_t t77 = 58819;

	t77 = (((x3913==x3914)+x3915)>>x3916);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3993 = -12881216797186LL;
	uint16_t x3994 = 3443U;
	int8_t x3995 = 1;
	static volatile uint16_t x3996 = 7U;

	t78 = (((x3993==x3994)+x3995)>>x3996);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x4002 = -1;
	int32_t x4003 = 0;
	static int16_t x4004 = 1;
	int32_t t79 = -1022568;

	t79 = (((x4001==x4002)+x4003)>>x4004);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4101 = -1;
	uint8_t x4104 = 8U;
	volatile int32_t t80 = 13444709;

	t80 = (((x4101==x4102)+x4103)>>x4104);

	if (t80 != 8388607) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x4129 = -1;
	volatile uint64_t x4131 = UINT64_MAX;
	int16_t x4132 = 0;
	volatile uint64_t t81 = 46LLU;

	t81 = (((x4129==x4130)+x4131)>>x4132);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x4137 = 152164;
	int8_t x4138 = -44;
	int16_t x4139 = INT16_MAX;
	uint16_t x4140 = 0U;
	int32_t t82 = -2;

	t82 = (((x4137==x4138)+x4139)>>x4140);

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4333 = 7;
	volatile int64_t x4334 = INT64_MIN;
	uint8_t x4335 = 1U;
	int32_t x4336 = 0;
	static int32_t t83 = 23;

	t83 = (((x4333==x4334)+x4335)>>x4336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x4341 = INT16_MIN;
	int64_t x4342 = 7LL;
	uint64_t x4343 = 1243157732724914LLU;

	t84 = (((x4341==x4342)+x4343)>>x4344);

	if (t84 != 2261LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x4397 = 7726445986LLU;
	volatile int16_t x4398 = INT16_MIN;
	int64_t x4399 = 4534LL;
	static uint32_t x4400 = 27U;
	volatile int64_t t85 = 29457795153LL;

	t85 = (((x4397==x4398)+x4399)>>x4400);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4530 = INT64_MIN;
	int16_t x4531 = 1601;

	t86 = (((x4529==x4530)+x4531)>>x4532);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4569 = -644662338;
	int32_t x4570 = -1;
	int32_t x4572 = 1;
	volatile uint64_t t87 = 3175020283985375792LLU;

	t87 = (((x4569==x4570)+x4571)>>x4572);

	if (t87 != 13167896967283667LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4653 = 153913856325LLU;
	int64_t x4654 = INT64_MAX;
	static int32_t x4655 = 1;
	int8_t x4656 = 4;
	volatile int32_t t88 = -200;

	t88 = (((x4653==x4654)+x4655)>>x4656);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4685 = -4;
	uint16_t x4686 = UINT16_MAX;
	static uint8_t x4688 = 22U;
	static int32_t t89 = -7232;

	t89 = (((x4685==x4686)+x4687)>>x4688);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x4697 = 1;
	int64_t x4698 = 1LL;
	int8_t x4700 = 8;
	uint32_t t90 = 150510U;

	t90 = (((x4697==x4698)+x4699)>>x4700);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4709 = UINT16_MAX;
	static volatile uint64_t x4710 = 2109001029664289374LLU;
	static volatile uint32_t x4711 = 6997626U;
	uint8_t x4712 = 0U;
	static volatile uint32_t t91 = 26U;

	t91 = (((x4709==x4710)+x4711)>>x4712);

	if (t91 != 6997626U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x4721 = 22138422LLU;
	int32_t x4723 = INT32_MAX;
	static volatile int32_t x4724 = 2;
	int32_t t92 = 3863;

	t92 = (((x4721==x4722)+x4723)>>x4724);

	if (t92 != 536870911) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x4803 = 1;
	int16_t x4804 = 2;
	int32_t t93 = 235415;

	t93 = (((x4801==x4802)+x4803)>>x4804);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x4821 = 12630U;
	static int64_t x4822 = INT64_MAX;
	static volatile int16_t x4823 = 1;

	t94 = (((x4821==x4822)+x4823)>>x4824);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4857 = 2486U;
	uint16_t x4860 = 31U;
	uint32_t t95 = 82160U;

	t95 = (((x4857==x4858)+x4859)>>x4860);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4930 = 1;
	uint8_t x4931 = UINT8_MAX;
	int8_t x4932 = 27;

	t96 = (((x4929==x4930)+x4931)>>x4932);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x5017 = 5777640966641108118LLU;
	volatile uint16_t x5018 = UINT16_MAX;
	int32_t x5019 = 7996689;
	uint16_t x5020 = 0U;
	int32_t t97 = 918899526;

	t97 = (((x5017==x5018)+x5019)>>x5020);

	if (t97 != 7996689) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5033 = -1;
	static int8_t x5034 = INT8_MIN;
	int64_t x5035 = 36LL;
	uint8_t x5036 = 0U;
	volatile int64_t t98 = -8778828510936983LL;

	t98 = (((x5033==x5034)+x5035)>>x5036);

	if (t98 != 36LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5137 = 38086421376156LLU;
	int64_t x5138 = -72518LL;

	t99 = (((x5137==x5138)+x5139)>>x5140);

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

