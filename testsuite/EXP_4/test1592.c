#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x45 = INT16_MAX;
uint8_t x46 = 1U;
uint64_t x89 = 2596122075LLU;
static volatile int16_t x163 = -143;
uint16_t x202 = 2U;
int8_t x462 = 1;
static int32_t x463 = -1;
uint64_t x489 = 41850LLU;
int16_t x492 = INT16_MIN;
volatile int32_t t9 = -7797;
uint8_t x614 = 7U;
volatile int32_t x615 = -972;
int64_t x616 = -1LL;
uint32_t x821 = 981U;
static volatile int64_t x865 = 7541968676701LL;
volatile uint64_t x867 = UINT64_MAX;
volatile int16_t x932 = INT16_MIN;
static int16_t x1026 = 0;
int32_t t14 = 0;
uint16_t x1101 = 10496U;
int8_t x1361 = INT8_MAX;
volatile int32_t x1364 = -657793;
uint32_t x1365 = 1655668U;
int32_t x1366 = 18;
volatile int16_t x1376 = INT16_MIN;
int32_t x1384 = INT32_MIN;
volatile int64_t x1403 = 823LL;
int32_t t23 = -3;
int32_t x1485 = INT32_MAX;
uint32_t x1487 = 80U;
uint32_t x1488 = 2U;
volatile uint64_t t25 = 12800LLU;
static uint8_t x1634 = 0U;
int32_t x1636 = INT32_MIN;
static int16_t x1639 = 1932;
int16_t x1640 = 1934;
static volatile int32_t t27 = -1466039;
volatile int32_t t28 = -3933;
volatile int16_t x1896 = -1;
int32_t x1900 = INT32_MIN;
int64_t x1924 = INT64_MIN;
volatile uint16_t x2002 = 3U;
int32_t t33 = 58848459;
uint16_t x2042 = 1U;
uint8_t x2043 = 2U;
static int64_t x2089 = INT64_MAX;
int8_t x2090 = 0;
int8_t x2097 = 5;
uint16_t x2098 = 1U;
static volatile int8_t x2099 = -1;
static uint16_t x2113 = UINT16_MAX;
static volatile uint16_t x2115 = 3U;
int32_t t37 = 130;
static int8_t x2129 = 1;
static int8_t x2130 = 14;
uint16_t x2133 = 254U;
int8_t x2136 = 27;
uint64_t x2234 = 19LLU;
int8_t x2392 = INT8_MIN;
int16_t x2400 = INT16_MAX;
static volatile int8_t x2424 = -1;
uint8_t x2537 = 15U;
static int8_t x2539 = 27;
int16_t x2589 = 0;
int64_t x2622 = 11LL;
int8_t x2624 = 4;
volatile int16_t x2651 = -12864;
int8_t x2652 = 35;
int32_t x3110 = 9;
static uint32_t x3153 = UINT32_MAX;
volatile uint32_t t56 = 2492U;
uint16_t x3157 = 176U;
volatile int32_t t58 = -2;
static int8_t x3322 = 3;
int16_t x3374 = 11;
static volatile int8_t x3835 = 7;
uint64_t x3836 = UINT64_MAX;
static int32_t x3848 = INT32_MIN;
uint8_t x3882 = 3U;
int32_t x3906 = 2;
int32_t x3907 = INT32_MIN;
volatile uint32_t t68 = 777U;
uint64_t x3925 = 1948494215LLU;
volatile int8_t x3928 = 1;
static int32_t x4121 = 3;
int64_t x4123 = INT64_MIN;
volatile uint64_t x4124 = 15444856116LLU;
volatile int32_t t70 = 4608;
int8_t x4895 = 35;
static int8_t x4938 = 17;
int32_t t74 = 1;
int16_t x5009 = 0;
int8_t x5062 = 1;
volatile int32_t t82 = 55642;
static uint8_t x5873 = UINT8_MAX;
int32_t x5961 = 943636;
uint64_t x6242 = 1LLU;
uint32_t x6272 = 13U;
volatile int64_t x6288 = -11304548881224LL;
int32_t t92 = 2;
volatile uint16_t x6450 = 7U;
int8_t x6472 = INT8_MIN;
uint8_t x6485 = 11U;
uint32_t x6487 = 2736U;
static volatile int32_t t95 = 2709891;
volatile int32_t x6613 = 0;
volatile uint8_t x6614 = 16U;
uint64_t x6615 = UINT64_MAX;
static volatile int32_t t97 = -10299;
static uint16_t x6757 = 4288U;
int16_t x6817 = INT16_MAX;
static uint8_t x6820 = 44U;


void f0(void) {
	int8_t x47 = INT8_MIN;
	int16_t x48 = INT16_MIN;
	volatile int32_t t0 = -1780768;

	t0 = (x45<<(x46<<(x47<=x48)));

	if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x90 = 1;
	static volatile uint8_t x91 = 2U;
	volatile uint16_t x92 = 3U;
	uint64_t t1 = 31362273100948LLU;

	t1 = (x89<<(x90<<(x91<=x92)));

	if (t1 != 10384488300LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x161 = 0;
	static uint8_t x162 = 0U;
	int32_t x164 = 20;
	int32_t t2 = 51894;

	t2 = (x161<<(x162<<(x163<=x164)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x201 = UINT32_MAX;
	uint32_t x203 = 368442U;
	int16_t x204 = INT16_MIN;
	volatile uint32_t t3 = 73U;

	t3 = (x201<<(x202<<(x203<=x204)));

	if (t3 != 4294967280U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x225 = 1;
	uint16_t x226 = 2U;
	volatile int16_t x227 = -5586;
	static int64_t x228 = INT64_MIN;
	volatile int32_t t4 = -307219487;

	t4 = (x225<<(x226<<(x227<=x228)));

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x253 = 0U;
	volatile uint8_t x254 = 0U;
	static int64_t x255 = 27487590344LL;
	uint8_t x256 = UINT8_MAX;
	int32_t t5 = -29361;

	t5 = (x253<<(x254<<(x255<=x256)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x421 = UINT32_MAX;
	static volatile int8_t x422 = 13;
	int64_t x423 = INT64_MIN;
	static int8_t x424 = -1;
	uint32_t t6 = 269505840U;

	t6 = (x421<<(x422<<(x423<=x424)));

	if (t6 != 4227858432U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x461 = 126385766620274LLU;
	int64_t x464 = INT64_MAX;
	uint64_t t7 = 86947359LLU;

	t7 = (x461<<(x462<<(x463<=x464)));

	if (t7 != 505543066481096LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x490 = 0U;
	int16_t x491 = INT16_MIN;
	volatile uint64_t t8 = 2037LLU;

	t8 = (x489<<(x490<<(x491<=x492)));

	if (t8 != 41850LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x589 = UINT8_MAX;
	volatile int32_t x590 = 3;
	static uint16_t x591 = UINT16_MAX;
	int32_t x592 = 7333;

	t9 = (x589<<(x590<<(x591<=x592)));

	if (t9 != 2040) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x613 = 66020544122228274LLU;
	uint64_t t10 = 29581293LLU;

	t10 = (x613<<(x614<<(x615<=x616)));

	if (t10 != 11769438623434047488LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x822 = 6;
	uint64_t x823 = UINT64_MAX;
	volatile int16_t x824 = INT16_MIN;
	volatile uint32_t t11 = 127250164U;

	t11 = (x821<<(x822<<(x823<=x824)));

	if (t11 != 62784U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x866 = 9;
	int64_t x868 = INT64_MIN;
	static volatile int64_t t12 = 3LL;

	t12 = (x865<<(x866<<(x867<=x868)));

	if (t12 != 3861487962470912LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x929 = INT16_MAX;
	static volatile uint8_t x930 = 2U;
	int64_t x931 = 2LL;
	static int32_t t13 = -106;

	t13 = (x929<<(x930<<(x931<=x932)));

	if (t13 != 131068) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x1025 = 265;
	int16_t x1027 = INT16_MAX;
	uint8_t x1028 = 41U;

	t14 = (x1025<<(x1026<<(x1027<=x1028)));

	if (t14 != 265) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1102 = 0;
	uint8_t x1103 = 48U;
	volatile uint64_t x1104 = 413604928LLU;
	volatile int32_t t15 = -1877;

	t15 = (x1101<<(x1102<<(x1103<=x1104)));

	if (t15 != 10496) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x1177 = 31286U;
	uint32_t x1178 = 4U;
	uint32_t x1179 = 788541U;
	int32_t x1180 = -1;
	int32_t t16 = -5594588;

	t16 = (x1177<<(x1178<<(x1179<=x1180)));

	if (t16 != 8009216) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1201 = 129041;
	volatile uint16_t x1202 = 0U;
	int8_t x1203 = INT8_MIN;
	int16_t x1204 = INT16_MIN;
	static volatile int32_t t17 = -1784;

	t17 = (x1201<<(x1202<<(x1203<=x1204)));

	if (t17 != 129041) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1362 = 3;
	int32_t x1363 = INT32_MIN;
	static volatile int32_t t18 = -1;

	t18 = (x1361<<(x1362<<(x1363<=x1364)));

	if (t18 != 8128) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x1367 = UINT32_MAX;
	static uint8_t x1368 = 10U;
	volatile uint32_t t19 = 1U;

	t19 = (x1365<<(x1366<<(x1367<=x1368)));

	if (t19 != 231735296U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x1373 = 1;
	uint8_t x1374 = 1U;
	int32_t x1375 = INT32_MIN;
	int32_t t20 = -3748;

	t20 = (x1373<<(x1374<<(x1375<=x1376)));

	if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1381 = 676;
	static uint8_t x1382 = 0U;
	int8_t x1383 = INT8_MIN;
	int32_t t21 = 12972;

	t21 = (x1381<<(x1382<<(x1383<=x1384)));

	if (t21 != 676) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1401 = 0U;
	int8_t x1402 = 3;
	static uint64_t x1404 = 209LLU;
	volatile int32_t t22 = 19;

	t22 = (x1401<<(x1402<<(x1403<=x1404)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1461 = 39U;
	static volatile int16_t x1462 = 0;
	int16_t x1463 = INT16_MIN;
	int64_t x1464 = INT64_MIN;

	t23 = (x1461<<(x1462<<(x1463<=x1464)));

	if (t23 != 39) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1486 = 0U;
	int32_t t24 = INT32_MAX;

	t24 = (x1485<<(x1486<<(x1487<=x1488)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x1509 = 12917083055457092LLU;
	int16_t x1510 = 1;
	uint16_t x1511 = 7U;
	int32_t x1512 = -1;

	t25 = (x1509<<(x1510<<(x1511<=x1512)));

	if (t25 != 25834166110914184LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1633 = INT16_MAX;
	int64_t x1635 = INT64_MAX;
	int32_t t26 = 1559520;

	t26 = (x1633<<(x1634<<(x1635<=x1636)));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1637 = 27;
	uint16_t x1638 = 2U;

	t27 = (x1637<<(x1638<<(x1639<=x1640)));

	if (t27 != 432) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1881 = 1;
	int32_t x1882 = 0;
	static uint64_t x1883 = UINT64_MAX;
	static uint16_t x1884 = 25U;

	t28 = (x1881<<(x1882<<(x1883<=x1884)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1893 = 1309U;
	volatile int32_t x1894 = 0;
	int16_t x1895 = INT16_MIN;
	static int32_t t29 = 2;

	t29 = (x1893<<(x1894<<(x1895<=x1896)));

	if (t29 != 1309) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1897 = UINT32_MAX;
	volatile uint8_t x1898 = 8U;
	uint64_t x1899 = 4643925LLU;
	uint32_t t30 = 14609043U;

	t30 = (x1897<<(x1898<<(x1899<=x1900)));

	if (t30 != 4294901760U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1921 = 18U;
	static int8_t x1922 = 0;
	uint64_t x1923 = 654049279941371LLU;
	volatile int32_t t31 = 22204676;

	t31 = (x1921<<(x1922<<(x1923<=x1924)));

	if (t31 != 18) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x2001 = UINT8_MAX;
	uint8_t x2003 = UINT8_MAX;
	uint8_t x2004 = 104U;
	int32_t t32 = 206789;

	t32 = (x2001<<(x2002<<(x2003<=x2004)));

	if (t32 != 2040) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x2005 = INT16_MAX;
	int8_t x2006 = 0;
	int32_t x2007 = INT32_MIN;
	volatile int16_t x2008 = -26;

	t33 = (x2005<<(x2006<<(x2007<=x2008)));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x2041 = UINT16_MAX;
	static volatile uint16_t x2044 = UINT16_MAX;
	volatile int32_t t34 = -148;

	t34 = (x2041<<(x2042<<(x2043<=x2044)));

	if (t34 != 262140) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x2091 = INT8_MIN;
	static uint32_t x2092 = 36974561U;
	int64_t t35 = INT64_MAX;

	t35 = (x2089<<(x2090<<(x2091<=x2092)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2100 = INT64_MAX;
	static volatile int32_t t36 = -322531197;

	t36 = (x2097<<(x2098<<(x2099<=x2100)));

	if (t36 != 20) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2114 = 9;
	volatile int64_t x2116 = -1LL;

	t37 = (x2113<<(x2114<<(x2115<=x2116)));

	if (t37 != 33553920) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x2131 = INT32_MIN;
	static uint64_t x2132 = UINT64_MAX;
	static volatile int32_t t38 = 877953;

	t38 = (x2129<<(x2130<<(x2131<=x2132)));

	if (t38 != 268435456) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x2134 = 0U;
	uint16_t x2135 = 5U;
	static volatile int32_t t39 = 10;

	t39 = (x2133<<(x2134<<(x2135<=x2136)));

	if (t39 != 254) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x2233 = INT8_MAX;
	static int64_t x2235 = 649800403076LL;
	uint16_t x2236 = UINT16_MAX;
	int32_t t40 = 1;

	t40 = (x2233<<(x2234<<(x2235<=x2236)));

	if (t40 != 66584576) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x2349 = INT16_MAX;
	uint8_t x2350 = 1U;
	int16_t x2351 = 1514;
	int32_t x2352 = INT32_MIN;
	volatile int32_t t41 = -660769;

	t41 = (x2349<<(x2350<<(x2351<=x2352)));

	if (t41 != 65534) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2365 = UINT64_MAX;
	static volatile uint8_t x2366 = 1U;
	int16_t x2367 = -293;
	uint16_t x2368 = 931U;
	volatile uint64_t t42 = 1501482294LLU;

	t42 = (x2365<<(x2366<<(x2367<=x2368)));

	if (t42 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2389 = 5281256382412LL;
	int16_t x2390 = 6;
	uint32_t x2391 = 1652328U;
	static int64_t t43 = -3462909248088141197LL;

	t43 = (x2389<<(x2390<<(x2391<=x2392)));

	if (t43 != 21632026142359552LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2397 = UINT16_MAX;
	int64_t x2398 = 0LL;
	static int8_t x2399 = INT8_MIN;
	int32_t t44 = -206;

	t44 = (x2397<<(x2398<<(x2399<=x2400)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2421 = 190U;
	int32_t x2422 = 3;
	int64_t x2423 = INT64_MIN;
	volatile int32_t t45 = -377669;

	t45 = (x2421<<(x2422<<(x2423<=x2424)));

	if (t45 != 12160) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2538 = 1U;
	int16_t x2540 = INT16_MIN;
	int32_t t46 = -381;

	t46 = (x2537<<(x2538<<(x2539<=x2540)));

	if (t46 != 30) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2561 = INT8_MAX;
	static int64_t x2562 = 1LL;
	volatile uint8_t x2563 = UINT8_MAX;
	uint32_t x2564 = 1064238691U;
	int32_t t47 = 7;

	t47 = (x2561<<(x2562<<(x2563<=x2564)));

	if (t47 != 508) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2590 = 24U;
	int64_t x2591 = INT64_MAX;
	uint32_t x2592 = UINT32_MAX;
	int32_t t48 = -872461254;

	t48 = (x2589<<(x2590<<(x2591<=x2592)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2621 = INT8_MAX;
	static int64_t x2623 = 750390283LL;
	static int32_t t49 = 24765859;

	t49 = (x2621<<(x2622<<(x2623<=x2624)));

	if (t49 != 260096) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2649 = 10759LLU;
	uint32_t x2650 = 4U;
	uint64_t t50 = 54450832177LLU;

	t50 = (x2649<<(x2650<<(x2651<=x2652)));

	if (t50 != 2754304LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2893 = 0;
	uint16_t x2894 = 0U;
	volatile uint64_t x2895 = 317LLU;
	int64_t x2896 = -1LL;
	int32_t t51 = 66564042;

	t51 = (x2893<<(x2894<<(x2895<=x2896)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2905 = 107U;
	volatile uint32_t x2906 = 0U;
	uint32_t x2907 = 944U;
	int32_t x2908 = -1752033;
	int32_t t52 = -1;

	t52 = (x2905<<(x2906<<(x2907<=x2908)));

	if (t52 != 107) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2945 = 46;
	int8_t x2946 = 6;
	int16_t x2947 = -1;
	static int16_t x2948 = 10;
	int32_t t53 = -20913207;

	t53 = (x2945<<(x2946<<(x2947<=x2948)));

	if (t53 != 188416) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x3037 = UINT16_MAX;
	int8_t x3038 = 0;
	static int8_t x3039 = -1;
	int16_t x3040 = -8107;
	volatile int32_t t54 = 28181;

	t54 = (x3037<<(x3038<<(x3039<=x3040)));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3109 = 3983084U;
	int32_t x3111 = INT32_MIN;
	uint32_t x3112 = UINT32_MAX;
	uint32_t t55 = 302U;

	t55 = (x3109<<(x3110<<(x3111<=x3112)));

	if (t55 != 464519168U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3154 = 1U;
	volatile int8_t x3155 = -16;
	static int64_t x3156 = INT64_MIN;

	t56 = (x3153<<(x3154<<(x3155<=x3156)));

	if (t56 != 4294967294U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3158 = 1;
	int16_t x3159 = 3;
	static int32_t x3160 = INT32_MIN;
	int32_t t57 = 508;

	t57 = (x3157<<(x3158<<(x3159<=x3160)));

	if (t57 != 352) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3305 = 23;
	static int16_t x3306 = 26;
	static uint64_t x3307 = UINT64_MAX;
	int16_t x3308 = INT16_MAX;

	t58 = (x3305<<(x3306<<(x3307<=x3308)));

	if (t58 != 1543503872) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x3321 = INT8_MAX;
	uint8_t x3323 = 5U;
	static int8_t x3324 = 1;
	volatile int32_t t59 = -473;

	t59 = (x3321<<(x3322<<(x3323<=x3324)));

	if (t59 != 1016) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x3337 = 39U;
	uint8_t x3338 = 3U;
	int32_t x3339 = INT32_MIN;
	static int16_t x3340 = INT16_MIN;
	int32_t t60 = -1249727;

	t60 = (x3337<<(x3338<<(x3339<=x3340)));

	if (t60 != 2496) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3373 = 43U;
	uint16_t x3375 = UINT16_MAX;
	volatile int64_t x3376 = -1517862911LL;
	volatile int32_t t61 = 0;

	t61 = (x3373<<(x3374<<(x3375<=x3376)));

	if (t61 != 88064) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3469 = 0;
	uint16_t x3470 = 28U;
	int8_t x3471 = INT8_MIN;
	int16_t x3472 = INT16_MIN;
	int32_t t62 = 12;

	t62 = (x3469<<(x3470<<(x3471<=x3472)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3497 = 311;
	volatile int16_t x3498 = 1;
	static uint16_t x3499 = 89U;
	int64_t x3500 = INT64_MIN;
	int32_t t63 = 820361;

	t63 = (x3497<<(x3498<<(x3499<=x3500)));

	if (t63 != 622) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x3833 = 6;
	static int8_t x3834 = 1;
	int32_t t64 = 1;

	t64 = (x3833<<(x3834<<(x3835<=x3836)));

	if (t64 != 24) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3845 = UINT16_MAX;
	uint16_t x3846 = 0U;
	static volatile uint32_t x3847 = 23994575U;
	static int32_t t65 = 1;

	t65 = (x3845<<(x3846<<(x3847<=x3848)));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x3849 = INT8_MAX;
	static uint8_t x3850 = 2U;
	static volatile int32_t x3851 = -12618612;
	uint32_t x3852 = 36158087U;
	int32_t t66 = -1;

	t66 = (x3849<<(x3850<<(x3851<=x3852)));

	if (t66 != 508) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3881 = 1922LL;
	volatile int32_t x3883 = 1554;
	uint8_t x3884 = UINT8_MAX;
	int64_t t67 = -2699258939LL;

	t67 = (x3881<<(x3882<<(x3883<=x3884)));

	if (t67 != 15376LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3905 = 52784U;
	int64_t x3908 = 832729874584528LL;

	t68 = (x3905<<(x3906<<(x3907<=x3908)));

	if (t68 != 844544U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3926 = 1;
	int8_t x3927 = -1;
	uint64_t t69 = 366150LLU;

	t69 = (x3925<<(x3926<<(x3927<=x3928)));

	if (t69 != 7793976860LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x4122 = 1LLU;

	t70 = (x4121<<(x4122<<(x4123<=x4124)));

	if (t70 != 6) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4481 = 3U;
	static volatile int8_t x4482 = 9;
	static int64_t x4483 = -1898598098LL;
	int8_t x4484 = INT8_MIN;
	volatile int32_t t71 = -61303369;

	t71 = (x4481<<(x4482<<(x4483<=x4484)));

	if (t71 != 786432) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x4865 = 5U;
	int16_t x4866 = 0;
	uint8_t x4867 = 72U;
	int8_t x4868 = INT8_MAX;
	static int32_t t72 = 988239;

	t72 = (x4865<<(x4866<<(x4867<=x4868)));

	if (t72 != 5) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4893 = 0LL;
	uint16_t x4894 = 14U;
	int64_t x4896 = INT64_MIN;
	volatile int64_t t73 = 1791403LL;

	t73 = (x4893<<(x4894<<(x4895<=x4896)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4937 = 296U;
	volatile uint16_t x4939 = 0U;
	int32_t x4940 = INT32_MIN;

	t74 = (x4937<<(x4938<<(x4939<=x4940)));

	if (t74 != 38797312) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x5010 = 0U;
	uint16_t x5011 = 56U;
	static int16_t x5012 = -1;
	volatile int32_t t75 = -677986;

	t75 = (x5009<<(x5010<<(x5011<=x5012)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x5017 = 1U;
	volatile uint8_t x5018 = 4U;
	int16_t x5019 = INT16_MIN;
	volatile int16_t x5020 = INT16_MIN;
	static int32_t t76 = -431;

	t76 = (x5017<<(x5018<<(x5019<=x5020)));

	if (t76 != 256) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x5061 = 48U;
	int16_t x5063 = INT16_MAX;
	int32_t x5064 = INT32_MIN;
	static volatile int32_t t77 = -42171;

	t77 = (x5061<<(x5062<<(x5063<=x5064)));

	if (t77 != 96) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x5153 = 2;
	uint16_t x5154 = 12U;
	static int16_t x5155 = INT16_MIN;
	static int64_t x5156 = -6870825082593LL;
	static int32_t t78 = -145723250;

	t78 = (x5153<<(x5154<<(x5155<=x5156)));

	if (t78 != 8192) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x5209 = INT16_MAX;
	volatile uint8_t x5210 = 0U;
	static int16_t x5211 = INT16_MIN;
	volatile int16_t x5212 = INT16_MIN;
	volatile int32_t t79 = 3998;

	t79 = (x5209<<(x5210<<(x5211<=x5212)));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5405 = 219092146LLU;
	uint32_t x5406 = 22U;
	int64_t x5407 = -1LL;
	int64_t x5408 = -1LL;
	uint64_t t80 = 176LLU;

	t80 = (x5405<<(x5406<<(x5407<=x5408)));

	if (t80 != 17387025970766020608LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x5465 = 3;
	uint8_t x5466 = 1U;
	volatile int16_t x5467 = INT16_MIN;
	int16_t x5468 = 1;
	volatile int32_t t81 = -424;

	t81 = (x5465<<(x5466<<(x5467<=x5468)));

	if (t81 != 12) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5477 = 2;
	uint8_t x5478 = 1U;
	static int64_t x5479 = INT64_MIN;
	int32_t x5480 = INT32_MAX;

	t82 = (x5477<<(x5478<<(x5479<=x5480)));

	if (t82 != 8) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x5561 = INT8_MAX;
	uint8_t x5562 = 0U;
	int64_t x5563 = -9795239576729LL;
	int64_t x5564 = INT64_MIN;
	int32_t t83 = 11;

	t83 = (x5561<<(x5562<<(x5563<=x5564)));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5874 = 1U;
	int32_t x5875 = INT32_MIN;
	int8_t x5876 = 56;
	int32_t t84 = 1747234;

	t84 = (x5873<<(x5874<<(x5875<=x5876)));

	if (t84 != 1020) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5962 = 1U;
	uint32_t x5963 = UINT32_MAX;
	static int16_t x5964 = -120;
	static volatile int32_t t85 = 658671228;

	t85 = (x5961<<(x5962<<(x5963<=x5964)));

	if (t85 != 1887272) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x6161 = 130U;
	int16_t x6162 = 0;
	volatile uint32_t x6163 = 237U;
	static volatile int16_t x6164 = INT16_MIN;
	int32_t t86 = 77785;

	t86 = (x6161<<(x6162<<(x6163<=x6164)));

	if (t86 != 130) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x6177 = 45LLU;
	volatile uint8_t x6178 = 6U;
	static int8_t x6179 = 26;
	int64_t x6180 = INT64_MIN;
	uint64_t t87 = 2041486688LLU;

	t87 = (x6177<<(x6178<<(x6179<=x6180)));

	if (t87 != 2880LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x6233 = INT8_MAX;
	uint8_t x6234 = 0U;
	static int16_t x6235 = -1;
	static volatile uint8_t x6236 = 2U;
	volatile int32_t t88 = 2;

	t88 = (x6233<<(x6234<<(x6235<=x6236)));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x6241 = 0;
	uint64_t x6243 = 234437322LLU;
	int32_t x6244 = INT32_MIN;
	static int32_t t89 = 1;

	t89 = (x6241<<(x6242<<(x6243<=x6244)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x6269 = 4U;
	static uint16_t x6270 = 14U;
	int16_t x6271 = 0;
	int32_t t90 = -750638366;

	t90 = (x6269<<(x6270<<(x6271<=x6272)));

	if (t90 != 1073741824) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x6285 = 23U;
	static volatile int16_t x6286 = 0;
	int16_t x6287 = INT16_MIN;
	static volatile int32_t t91 = 56974221;

	t91 = (x6285<<(x6286<<(x6287<=x6288)));

	if (t91 != 23) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x6297 = 0U;
	int32_t x6298 = 2;
	static uint64_t x6299 = UINT64_MAX;
	volatile int16_t x6300 = -3;

	t92 = (x6297<<(x6298<<(x6299<=x6300)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x6449 = INT16_MAX;
	uint8_t x6451 = UINT8_MAX;
	volatile int16_t x6452 = INT16_MIN;
	static volatile int32_t t93 = -7;

	t93 = (x6449<<(x6450<<(x6451<=x6452)));

	if (t93 != 4194176) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6469 = 630U;
	uint8_t x6470 = 6U;
	int64_t x6471 = -1965LL;
	volatile int32_t t94 = 24;

	t94 = (x6469<<(x6470<<(x6471<=x6472)));

	if (t94 != 2580480) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6486 = 1U;
	uint64_t x6488 = 253943540912094LLU;

	t95 = (x6485<<(x6486<<(x6487<=x6488)));

	if (t95 != 44) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x6616 = 0U;
	static int32_t t96 = 1;

	t96 = (x6613<<(x6614<<(x6615<=x6616)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x6753 = UINT16_MAX;
	int8_t x6754 = 1;
	static int64_t x6755 = INT64_MIN;
	static uint8_t x6756 = 87U;

	t97 = (x6753<<(x6754<<(x6755<=x6756)));

	if (t97 != 262140) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x6758 = 0;
	int16_t x6759 = 0;
	int32_t x6760 = INT32_MAX;
	static int32_t t98 = -3268;

	t98 = (x6757<<(x6758<<(x6759<=x6760)));

	if (t98 != 4288) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x6818 = 0;
	int32_t x6819 = INT32_MAX;
	int32_t t99 = 1932196;

	t99 = (x6817<<(x6818<<(x6819<=x6820)));

	if (t99 != 32767) { NG(); } else { ; }
	
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

