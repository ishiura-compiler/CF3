#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x34 = INT32_MIN;
int8_t x35 = 57;
volatile uint16_t x414 = UINT16_MAX;
uint8_t x416 = 55U;
int16_t x754 = INT16_MIN;
uint16_t x756 = 59U;
uint16_t x944 = 0U;
volatile int64_t x979 = INT64_MAX;
volatile int64_t x1066 = -1LL;
uint16_t x1067 = UINT16_MAX;
volatile int32_t t22 = -5332;
volatile int16_t x1123 = -1;
volatile uint64_t t24 = 506970726199014LLU;
uint64_t x1307 = 2212540171920030LLU;
uint64_t t25 = 108628LLU;
static volatile uint64_t x1365 = UINT64_MAX;
int16_t x1421 = INT16_MAX;
int8_t x1515 = INT8_MIN;
uint32_t t29 = 18887U;
int16_t x1548 = 8;
uint16_t x1564 = 2U;
uint8_t x1685 = 1U;
uint8_t x1688 = 16U;
volatile int64_t x1697 = -1LL;
volatile int16_t x1700 = 3;
static uint64_t t35 = 573680590978LLU;
uint16_t x1737 = 0U;
static int16_t x1739 = INT16_MIN;
int16_t x1799 = INT16_MIN;
int8_t x1909 = INT8_MIN;
int32_t x1911 = INT32_MAX;
volatile int32_t t41 = -402;
uint32_t x1971 = 10768518U;
static int16_t x1987 = INT16_MAX;
int32_t x2027 = INT32_MAX;
static int32_t x2047 = 1;
uint16_t x2068 = 0U;
static volatile int64_t t46 = 818044LL;
static uint8_t x2126 = UINT8_MAX;
int8_t x2217 = 1;
int32_t x2218 = INT32_MIN;
uint32_t x2219 = 3U;
static int16_t x2232 = 28;
uint32_t x2370 = 50703U;
uint64_t x2414 = 125909521579455LLU;
uint64_t t55 = 442927278078173LLU;
int64_t x2430 = 19078370LL;
int32_t x2431 = -1;
static uint32_t x2519 = 47502970U;
int16_t x2649 = INT16_MIN;
int8_t x2651 = -1;
uint16_t x2735 = 2U;
int8_t x2736 = 1;
volatile int64_t x2738 = -1LL;
int32_t x2887 = INT32_MIN;
int16_t x2888 = 0;
volatile int32_t t65 = -36;
int8_t x2971 = -1;
uint32_t x2972 = 6U;
int32_t x3005 = INT32_MAX;
static uint64_t t68 = 22534889835032LLU;
volatile int16_t x3037 = INT16_MIN;
static volatile int16_t x3207 = INT16_MIN;
volatile uint64_t t71 = 100LLU;
volatile uint8_t x3447 = UINT8_MAX;
uint64_t t76 = 366896227019920861LLU;
int64_t x3481 = -1LL;
int8_t x3482 = -45;
uint8_t x3484 = 12U;
static int64_t x3499 = 0LL;
volatile int64_t t78 = -8753601167LL;
static uint64_t x3547 = UINT64_MAX;
static int64_t t80 = 263553110LL;
uint16_t x3571 = 271U;
int64_t x3603 = INT64_MIN;
uint32_t x3604 = 52U;
int8_t x3689 = -1;
volatile int64_t x3690 = INT64_MIN;
uint64_t x3855 = 27351403LLU;
uint32_t x3892 = 14U;
static uint64_t x3906 = 187287375272868LLU;
uint64_t x3908 = 57LLU;
volatile uint32_t t90 = 8626671U;
int64_t t91 = -28961105456307733LL;
int16_t x3941 = -1134;
static int32_t x3974 = INT32_MIN;
int64_t x3975 = 1LL;
uint32_t x3989 = 1208688U;
static int8_t x3995 = 0;
int8_t x4008 = 10;
static volatile int8_t x4093 = INT8_MIN;
static uint16_t x4114 = 12849U;
uint64_t x4117 = UINT64_MAX;


void f0(void) {
	static int16_t x21 = INT16_MIN;
	volatile int16_t x22 = -1;
	int64_t x23 = -1LL;
	uint8_t x24 = 7U;
	volatile int64_t t0 = -4388738542416621LL;

	t0 = ((x21*(x22^x23))>>x24);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x33 = UINT64_MAX;
	static uint64_t x36 = 41LLU;
	static volatile uint64_t t1 = 35185LLU;

	t1 = ((x33*(x34^x35))>>x36);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x61 = 1;
	uint64_t x62 = UINT64_MAX;
	uint64_t x63 = 3LLU;
	int8_t x64 = 35;
	uint64_t t2 = 51978651132100603LLU;

	t2 = ((x61*(x62^x63))>>x64);

	if (t2 != 536870911LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x85 = -6720;
	int8_t x86 = INT8_MAX;
	int64_t x87 = -1LL;
	static int16_t x88 = 1;
	volatile int64_t t3 = -24LL;

	t3 = ((x85*(x86^x87))>>x88);

	if (t3 != 430080LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x185 = UINT8_MAX;
	int8_t x186 = INT8_MAX;
	volatile uint16_t x187 = 14U;
	int8_t x188 = 0;
	static volatile int32_t t4 = 0;

	t4 = ((x185*(x186^x187))>>x188);

	if (t4 != 28815) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x281 = INT64_MIN;
	volatile int16_t x282 = -1;
	int64_t x283 = -1LL;
	static int8_t x284 = 1;
	int64_t t5 = -3916802300337LL;

	t5 = ((x281*(x282^x283))>>x284);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x325 = -4;
	int8_t x326 = INT8_MIN;
	uint16_t x327 = 27761U;
	uint8_t x328 = 3U;
	volatile int32_t t6 = -12;

	t6 = ((x325*(x326^x327))>>x328);

	if (t6 != 13831) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x345 = INT8_MIN;
	uint32_t x346 = 1098198008U;
	static int64_t x347 = -15903298305450942LL;
	static uint8_t x348 = 1U;
	int64_t t7 = 9893LL;

	t7 = ((x345*(x346^x347))>>x348);

	if (t7 != 1017811161295491456LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x413 = UINT64_MAX;
	int8_t x415 = INT8_MAX;
	volatile uint64_t t8 = 8564997637933LLU;

	t8 = ((x413*(x414^x415))>>x416);

	if (t8 != 511LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x477 = 1;
	uint8_t x478 = UINT8_MAX;
	int16_t x479 = 1;
	volatile uint8_t x480 = 7U;
	int32_t t9 = -5;

	t9 = ((x477*(x478^x479))>>x480);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x489 = 4143043512370392191LL;
	static uint64_t x490 = UINT64_MAX;
	uint32_t x491 = 954U;
	uint8_t x492 = 2U;
	static uint64_t t10 = 44184215385852LLU;

	t10 = ((x489*(x490^x491))>>x492);

	if (t10 != 2360855383457263758LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x509 = 780679108889LLU;
	volatile int32_t x510 = INT32_MAX;
	uint64_t x511 = 15885588825273683LLU;
	int8_t x512 = 38;
	uint64_t t11 = 451937788712790LLU;

	t11 = ((x509*(x510^x511))>>x512);

	if (t11 != 52684909LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x521 = -1;
	static uint32_t x522 = 114443U;
	static int16_t x523 = -1;
	int16_t x524 = 15;
	static volatile uint32_t t12 = 116U;

	t12 = ((x521*(x522^x523))>>x524);

	if (t12 != 3U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x589 = INT16_MIN;
	uint16_t x590 = 596U;
	uint64_t x591 = UINT64_MAX;
	static int8_t x592 = 32;
	static volatile uint64_t t13 = 15186195LLU;

	t13 = ((x589*(x590^x591))>>x592);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x753 = 91298221LLU;
	volatile int64_t x755 = 256331LL;
	uint64_t t14 = 0LLU;

	t14 = ((x753*(x754^x755))>>x756);

	if (t14 != 31LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x921 = 16U;
	volatile int8_t x922 = INT8_MIN;
	uint32_t x923 = UINT32_MAX;
	static volatile int16_t x924 = 2;
	uint32_t t15 = 51075312U;

	t15 = ((x921*(x922^x923))>>x924);

	if (t15 != 508U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x929 = 53U;
	int32_t x930 = -1;
	uint32_t x931 = 15U;
	int8_t x932 = 3;
	volatile uint32_t t16 = 563967265U;

	t16 = ((x929*(x930^x931))>>x932);

	if (t16 != 536870806U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x941 = INT8_MIN;
	uint64_t x942 = 168096972390819LLU;
	int64_t x943 = -35451319994911856LL;
	static uint64_t t17 = 8255439574730094907LLU;

	t17 = ((x941*(x942^x943))>>x944);

	if (t17 != 4518541731203311232LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x977 = UINT64_MAX;
	int64_t x978 = 15209LL;
	int32_t x980 = 16;
	volatile uint64_t t18 = 220954237308LLU;

	t18 = ((x977*(x978^x979))>>x980);

	if (t18 != 140737488355328LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1013 = 2981956831230787LLU;
	int64_t x1014 = INT64_MAX;
	static uint16_t x1015 = 1337U;
	uint16_t x1016 = 0U;
	uint64_t t19 = 78309424275LLU;

	t19 = ((x1013*(x1014^x1015))>>x1016);

	if (t19 != 5233513796667982802LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1041 = 161423U;
	static uint16_t x1042 = UINT16_MAX;
	uint32_t x1043 = UINT32_MAX;
	volatile int8_t x1044 = 9;
	uint32_t t20 = 1097U;

	t20 = ((x1041*(x1042^x1043))>>x1044);

	if (t20 != 4503680U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1065 = -103994057920LL;
	static int8_t x1068 = 1;
	static int64_t t21 = 11LL;

	t21 = ((x1065*(x1066^x1067))>>x1068);

	if (t21 != 3407677289922560LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1069 = INT16_MIN;
	uint8_t x1070 = 2U;
	volatile int8_t x1071 = -10;
	uint8_t x1072 = 8U;

	t22 = ((x1069*(x1070^x1071))>>x1072);

	if (t22 != 1536) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1121 = INT16_MIN;
	int64_t x1122 = 418493127184LL;
	uint8_t x1124 = 7U;
	volatile int64_t t23 = 30757676343189983LL;

	t23 = ((x1121*(x1122^x1123))>>x1124);

	if (t23 != 107134240559360LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1281 = -221;
	volatile uint8_t x1282 = 11U;
	static volatile uint64_t x1283 = UINT64_MAX;
	int16_t x1284 = 1;

	t24 = ((x1281*(x1282^x1283))>>x1284);

	if (t24 != 1326LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1305 = 158537110;
	uint16_t x1306 = 11253U;
	uint8_t x1308 = 1U;

	t25 = ((x1305*(x1306^x1307))>>x1308);

	if (t25 != 2443026247430219225LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1325 = 6;
	static int16_t x1326 = INT16_MIN;
	uint64_t x1327 = 341881700LLU;
	uint64_t x1328 = 3LLU;
	volatile uint64_t t26 = 8955670860289742LLU;

	t26 = ((x1325*(x1326^x1327))>>x1328);

	if (t26 != 2305843008957277835LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1366 = -21792LL;
	uint64_t x1367 = 16LLU;
	uint16_t x1368 = 3U;
	static volatile uint64_t t27 = 11867560366105LLU;

	t27 = ((x1365*(x1366^x1367))>>x1368);

	if (t27 != 2722LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x1422 = -1;
	uint64_t x1423 = 25LLU;
	static uint16_t x1424 = 3U;
	uint64_t t28 = 112451648889995LLU;

	t28 = ((x1421*(x1422^x1423))>>x1424);

	if (t28 != 2305843009213587459LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1513 = -1;
	volatile uint32_t x1514 = 7687U;
	static uint8_t x1516 = 1U;

	t29 = ((x1513*(x1514^x1515))>>x1516);

	if (t29 != 3900U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1537 = -10;
	volatile uint8_t x1538 = UINT8_MAX;
	uint32_t x1539 = 830478U;
	static int16_t x1540 = 11;
	static uint32_t t30 = 63249750U;

	t30 = ((x1537*(x1538^x1539))>>x1540);

	if (t30 != 2093095U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1545 = INT32_MAX;
	int8_t x1546 = INT8_MAX;
	static uint32_t x1547 = 190U;
	uint32_t t31 = 8279230U;

	t31 = ((x1545*(x1546^x1547))>>x1548);

	if (t31 != 8388607U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1561 = UINT16_MAX;
	int32_t x1562 = -1;
	uint64_t x1563 = 24436492196LLU;
	volatile uint64_t t32 = 6179987229LLU;

	t32 = ((x1561*(x1562^x1563))>>x1564);

	if (t32 != 4611285657048355305LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1661 = 175608LLU;
	volatile int8_t x1662 = INT8_MAX;
	int16_t x1663 = -1;
	int16_t x1664 = 0;
	volatile uint64_t t33 = 778926663106312LLU;

	t33 = ((x1661*(x1662^x1663))>>x1664);

	if (t33 != 18446744073687073792LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1686 = 1;
	uint32_t x1687 = 10064U;
	volatile uint32_t t34 = 57677384U;

	t34 = ((x1685*(x1686^x1687))>>x1688);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x1698 = INT32_MAX;
	uint64_t x1699 = 120841492521253LLU;

	t35 = ((x1697*(x1698^x1699))>>x1700);

	if (t35 != 2305827903868734500LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x1738 = 106505300U;
	static int8_t x1740 = 24;
	volatile uint32_t t36 = 8225612U;

	t36 = ((x1737*(x1738^x1739))>>x1740);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1797 = 45U;
	uint64_t x1798 = UINT64_MAX;
	int16_t x1800 = 5;
	volatile uint64_t t37 = 17194130189854948LLU;

	t37 = ((x1797*(x1798^x1799))>>x1800);

	if (t37 != 46078LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x1833 = 80620U;
	uint32_t x1834 = UINT32_MAX;
	int16_t x1835 = -1;
	int8_t x1836 = 18;
	volatile uint32_t t38 = 436909U;

	t38 = ((x1833*(x1834^x1835))>>x1836);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x1861 = 49U;
	uint64_t x1862 = 5927717632LLU;
	static volatile int32_t x1863 = -1;
	static volatile int8_t x1864 = 2;
	volatile uint64_t t39 = 50197633009LLU;

	t39 = ((x1861*(x1862^x1863))>>x1864);

	if (t39 != 4611685945812846899LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1881 = UINT32_MAX;
	static volatile uint16_t x1882 = 8189U;
	volatile uint8_t x1883 = 23U;
	int8_t x1884 = 5;
	uint32_t t40 = 31509202U;

	t40 = ((x1881*(x1882^x1883))>>x1884);

	if (t40 != 134217472U) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x1910 = INT32_MIN;
	int8_t x1912 = 1;

	t41 = ((x1909*(x1910^x1911))>>x1912);

	if (t41 != 64) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x1969 = INT32_MAX;
	static uint64_t x1970 = 1009629305LLU;
	int32_t x1972 = 1;
	volatile uint64_t t42 = 957376707LLU;

	t42 = ((x1969*(x1970^x1971))>>x1972);

	if (t42 != 1090568473491999616LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x1985 = INT16_MIN;
	uint32_t x1986 = UINT32_MAX;
	int8_t x1988 = 0;
	uint32_t t43 = 1629U;

	t43 = ((x1985*(x1986^x1987))>>x1988);

	if (t43 != 1073741824U) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x2025 = INT32_MIN;
	volatile uint32_t x2026 = 448U;
	static int8_t x2028 = 6;
	uint32_t t44 = 668751U;

	t44 = ((x2025*(x2026^x2027))>>x2028);

	if (t44 != 33554432U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x2045 = -159282LL;
	uint64_t x2046 = UINT64_MAX;
	int8_t x2048 = 7;
	volatile uint64_t t45 = 82605787782343LLU;

	t45 = ((x2045*(x2046^x2047))>>x2048);

	if (t45 != 2488LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2065 = 3153LL;
	uint16_t x2066 = UINT16_MAX;
	uint8_t x2067 = 7U;

	t46 = ((x2065*(x2066^x2067))>>x2068);

	if (t46 != 206609784LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2073 = INT16_MAX;
	uint64_t x2074 = UINT64_MAX;
	uint32_t x2075 = 168366894U;
	uint8_t x2076 = 14U;
	static volatile uint64_t t47 = 21LLU;

	t47 = ((x2073*(x2074^x2075))>>x2076);

	if (t47 != 1125899570119110LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x2125 = -1;
	int8_t x2127 = INT8_MIN;
	uint8_t x2128 = 0U;
	int32_t t48 = -1;

	t48 = ((x2125*(x2126^x2127))>>x2128);

	if (t48 != 129) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2205 = INT8_MAX;
	uint64_t x2206 = 108145963928LLU;
	static volatile uint64_t x2207 = 1923LLU;
	int16_t x2208 = 23;
	uint64_t t49 = 8075731932646243321LLU;

	t49 = ((x2205*(x2206^x2207))>>x2208);

	if (t49 != 1637284LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2213 = 0U;
	int8_t x2214 = -1;
	int64_t x2215 = -1LL;
	uint8_t x2216 = 2U;
	volatile int64_t t50 = 16313500725161245LL;

	t50 = ((x2213*(x2214^x2215))>>x2216);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x2220 = 11;
	static uint32_t t51 = 20479U;

	t51 = ((x2217*(x2218^x2219))>>x2220);

	if (t51 != 1048576U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2229 = INT8_MIN;
	static uint32_t x2230 = 315046721U;
	int32_t x2231 = -82635968;
	static uint32_t t52 = 9382788U;

	t52 = ((x2229*(x2230^x2231))>>x2232);

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x2305 = 44;
	uint64_t x2306 = 149146LLU;
	uint8_t x2307 = 1U;
	int8_t x2308 = 43;
	static uint64_t t53 = 110204974574287543LLU;

	t53 = ((x2305*(x2306^x2307))>>x2308);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x2369 = INT32_MIN;
	volatile int64_t x2371 = -157035LL;
	uint8_t x2372 = 37U;
	static int64_t t54 = -261250618651LL;

	t54 = ((x2369*(x2370^x2371))>>x2372);

	if (t54 != 2701LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2413 = INT32_MIN;
	uint32_t x2415 = 268590274U;
	int8_t x2416 = 17;

	t55 = ((x2413*(x2414^x2415))>>x2416);

	if (t55 != 32902798688256LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x2429 = -908;
	static uint32_t x2432 = 0U;
	volatile int64_t t56 = -185601164800596LL;

	t56 = ((x2429*(x2430^x2431))>>x2432);

	if (t56 != 17323160868LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x2517 = 44U;
	int8_t x2518 = INT8_MIN;
	uint8_t x2520 = 1U;
	volatile uint32_t t57 = 499U;

	t57 = ((x2517*(x2518^x2519))>>x2520);

	if (t57 != 1102420860U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2650 = -1;
	volatile uint16_t x2652 = 24U;
	volatile int32_t t58 = 23005;

	t58 = ((x2649*(x2650^x2651))>>x2652);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2677 = UINT64_MAX;
	int64_t x2678 = 121LL;
	volatile int8_t x2679 = 0;
	volatile int16_t x2680 = 2;
	volatile uint64_t t59 = 95512LLU;

	t59 = ((x2677*(x2678^x2679))>>x2680);

	if (t59 != 4611686018427387873LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2713 = 888;
	static int64_t x2714 = 377LL;
	uint16_t x2715 = UINT16_MAX;
	static int8_t x2716 = 1;
	int64_t t60 = 3032209LL;

	t60 = ((x2713*(x2714^x2715))>>x2716);

	if (t60 != 28930152LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2733 = 2361943U;
	volatile uint64_t x2734 = 16438924941006LLU;
	uint64_t t61 = 19LLU;

	t61 = ((x2733*(x2734^x2735))>>x2736);

	if (t61 != 967157772255353770LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2737 = UINT8_MAX;
	int64_t x2739 = -1718953348074503LL;
	int8_t x2740 = 29;
	volatile int64_t t62 = -458113215LL;

	t62 = ((x2737*(x2738^x2739))>>x2740);

	if (t62 != 816459029LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x2761 = INT16_MIN;
	int32_t x2762 = -1;
	uint16_t x2763 = 56U;
	static uint32_t x2764 = 1U;
	volatile int32_t t63 = -28;

	t63 = ((x2761*(x2762^x2763))>>x2764);

	if (t63 != 933888) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x2833 = UINT8_MAX;
	int16_t x2834 = INT16_MIN;
	uint32_t x2835 = 85993U;
	static int8_t x2836 = 1;
	uint32_t t64 = 29097845U;

	t64 = ((x2833*(x2834^x2835))>>x2836);

	if (t64 != 2137558155U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x2885 = -1;
	int32_t x2886 = 934;

	t65 = ((x2885*(x2886^x2887))>>x2888);

	if (t65 != 2147482714) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x2909 = INT32_MIN;
	volatile uint32_t x2910 = UINT32_MAX;
	static int32_t x2911 = -87604239;
	uint8_t x2912 = 5U;
	uint32_t t66 = 14U;

	t66 = ((x2909*(x2910^x2911))>>x2912);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x2969 = UINT8_MAX;
	volatile uint32_t x2970 = 5781U;
	uint32_t t67 = 36171404U;

	t67 = ((x2969*(x2970^x2971))>>x2972);

	if (t67 != 67085826U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3006 = 1732U;
	static uint64_t x3007 = 1358912807796LLU;
	uint8_t x3008 = 43U;

	t68 = ((x3005*(x3006^x3007))>>x3008);

	if (t68 != 415806LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x3038 = 23LLU;
	int64_t x3039 = -17445172454420933LL;
	uint8_t x3040 = 2U;
	uint64_t t69 = 652125952370LLU;

	t69 = ((x3037*(x3038^x3039))>>x3040);

	if (t69 != 4560272193794768896LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3161 = -7;
	static uint64_t x3162 = 11779164684562485LLU;
	volatile uint8_t x3163 = UINT8_MAX;
	uint8_t x3164 = 30U;
	uint64_t t70 = 88429242407392LLU;

	t70 = ((x3161*(x3162^x3163))>>x3164);

	if (t70 != 17103077770LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3205 = UINT64_MAX;
	static uint16_t x3206 = 30U;
	uint8_t x3208 = 0U;

	t71 = ((x3205*(x3206^x3207))>>x3208);

	if (t71 != 32738LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3221 = INT16_MIN;
	uint16_t x3222 = 28U;
	int16_t x3223 = -1;
	uint8_t x3224 = 7U;
	int32_t t72 = 3980866;

	t72 = ((x3221*(x3222^x3223))>>x3224);

	if (t72 != 7424) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3261 = INT32_MIN;
	int8_t x3262 = INT8_MIN;
	uint32_t x3263 = 338U;
	volatile uint16_t x3264 = 21U;
	uint32_t t73 = 385U;

	t73 = ((x3261*(x3262^x3263))>>x3264);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x3289 = -1;
	int32_t x3290 = INT32_MIN;
	volatile int32_t x3291 = INT32_MAX;
	uint8_t x3292 = 6U;
	int32_t t74 = 1;

	t74 = ((x3289*(x3290^x3291))>>x3292);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3361 = 156978198544515LL;
	int16_t x3362 = INT16_MAX;
	int8_t x3363 = INT8_MAX;
	static uint16_t x3364 = 11U;
	volatile int64_t t75 = 314566330388537LL;

	t75 = ((x3361*(x3362^x3363))>>x3364);

	if (t75 != 2501840039303207LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x3445 = 78595233248LLU;
	static int16_t x3446 = INT16_MIN;
	uint8_t x3448 = 12U;

	t76 = ((x3445*(x3446^x3447))>>x3448);

	if (t76 != 4502975758518300LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x3483 = 12844434113986LLU;
	volatile uint64_t t77 = 2003580231LLU;

	t77 = ((x3481*(x3482^x3483))>>x3484);

	if (t77 != 3135848172LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3497 = INT16_MIN;
	int16_t x3498 = INT16_MIN;
	uint8_t x3500 = 0U;

	t78 = ((x3497*(x3498^x3499))>>x3500);

	if (t78 != 1073741824LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3545 = -880;
	int32_t x3546 = -1;
	int16_t x3548 = 0;
	uint64_t t79 = 1053529997859993LLU;

	t79 = ((x3545*(x3546^x3547))>>x3548);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3561 = -15;
	volatile int64_t x3562 = -20LL;
	static volatile uint32_t x3563 = 63668271U;
	uint16_t x3564 = 9U;

	t80 = ((x3561*(x3562^x3563))>>x3564);

	if (t80 != 1865281LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x3569 = 14521165LLU;
	static int16_t x3570 = INT16_MAX;
	static uint8_t x3572 = 46U;
	volatile uint64_t t81 = 84471LLU;

	t81 = ((x3569*(x3570^x3571))>>x3572);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3601 = 33359344803222259LLU;
	static int16_t x3602 = 4519;
	static uint64_t t82 = 1106834419LLU;

	t82 = ((x3601*(x3602^x3603))>>x3604);

	if (t82 != 2753LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x3691 = 24U;
	volatile uint32_t x3692 = 1U;
	int64_t t83 = 498796110337LL;

	t83 = ((x3689*(x3690^x3691))>>x3692);

	if (t83 != 4611686018427387892LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3693 = -1;
	static int16_t x3694 = INT16_MAX;
	int64_t x3695 = -1242166208LL;
	int8_t x3696 = 1;
	int64_t t84 = -72729591110LL;

	t84 = ((x3693*(x3694^x3695))>>x3696);

	if (t84 != 621069856LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x3741 = 1;
	uint8_t x3742 = 0U;
	uint32_t x3743 = 632788344U;
	int32_t x3744 = 1;
	uint32_t t85 = 490790821U;

	t85 = ((x3741*(x3742^x3743))>>x3744);

	if (t85 != 316394172U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x3769 = 9064U;
	static int16_t x3770 = 60;
	static int8_t x3771 = INT8_MIN;
	int16_t x3772 = 5;
	volatile uint32_t t86 = 3113U;

	t86 = ((x3769*(x3770^x3771))>>x3772);

	if (t86 != 134198467U) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x3853 = -1LL;
	uint8_t x3854 = UINT8_MAX;
	uint8_t x3856 = 8U;
	volatile uint64_t t87 = 1891602597762LLU;

	t87 = ((x3853*(x3854^x3855))>>x3856);

	if (t87 != 72057594037821094LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3889 = INT32_MAX;
	static volatile uint32_t x3890 = 63677524U;
	uint8_t x3891 = 2U;
	volatile uint32_t t88 = 121747470U;

	t88 = ((x3889*(x3890^x3891))>>x3892);

	if (t88 != 258257U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x3905 = INT16_MIN;
	static int8_t x3907 = INT8_MIN;
	uint64_t t89 = 3894999LLU;

	t89 = ((x3905*(x3906^x3907))>>x3908);

	if (t89 != 42LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x3909 = 4;
	uint32_t x3910 = UINT32_MAX;
	static int16_t x3911 = -4326;
	uint16_t x3912 = 0U;

	t90 = ((x3909*(x3910^x3911))>>x3912);

	if (t90 != 17300U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3937 = -1;
	int64_t x3938 = INT64_MIN;
	int8_t x3939 = INT8_MAX;
	int8_t x3940 = 31;

	t91 = ((x3937*(x3938^x3939))>>x3940);

	if (t91 != 4294967295LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3942 = UINT32_MAX;
	uint64_t x3943 = UINT64_MAX;
	uint32_t x3944 = 0U;
	volatile uint64_t t92 = 14LLU;

	t92 = ((x3941*(x3942^x3943))>>x3944);

	if (t92 != 4870492913664LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x3973 = -1LL;
	int8_t x3976 = 22;
	volatile int64_t t93 = 230LL;

	t93 = ((x3973*(x3974^x3975))>>x3976);

	if (t93 != 511LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x3990 = UINT8_MAX;
	int32_t x3991 = -1;
	static volatile int16_t x3992 = 14;
	uint32_t t94 = 3U;

	t94 = ((x3989*(x3990^x3991))>>x3992);

	if (t94 != 243258U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x3993 = 0U;
	int8_t x3994 = INT8_MIN;
	int8_t x3996 = 0;
	volatile int32_t t95 = 0;

	t95 = ((x3993*(x3994^x3995))>>x3996);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4005 = 276628533838317872LLU;
	static int64_t x4006 = 177990590808110LL;
	int64_t x4007 = INT64_MIN;
	uint64_t t96 = 420992430LLU;

	t96 = ((x4005*(x4006^x4007))>>x4008);

	if (t96 != 15124374781347753LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4094 = -10;
	volatile uint8_t x4095 = 17U;
	static volatile uint16_t x4096 = 14U;
	int32_t t97 = 134251;

	t97 = ((x4093*(x4094^x4095))>>x4096);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x4113 = -1;
	int8_t x4115 = -1;
	uint8_t x4116 = 7U;
	static volatile int32_t t98 = 364;

	t98 = ((x4113*(x4114^x4115))>>x4116);

	if (t98 != 100) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4118 = 663306U;
	static int32_t x4119 = INT32_MIN;
	int8_t x4120 = 1;
	volatile uint64_t t99 = 19LLU;

	t99 = ((x4117*(x4118^x4119))>>x4120);

	if (t99 != 9223372035780702331LLU) { NG(); } else { ; }
	
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

