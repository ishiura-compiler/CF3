#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x61 = INT64_MAX;
static int8_t x63 = INT8_MAX;
uint8_t x64 = 14U;
int64_t t0 = -1126820529999LL;
uint64_t x77 = UINT64_MAX;
volatile int8_t x80 = 5;
static int8_t x97 = INT8_MIN;
volatile uint32_t x160 = 1U;
volatile int32_t t7 = -98496500;
static int64_t x374 = 841LL;
int16_t x385 = 57;
int32_t x476 = 9;
uint64_t t11 = 5844977180LLU;
int16_t x489 = -1;
static uint8_t x490 = UINT8_MAX;
uint16_t x492 = 11U;
int16_t x537 = INT16_MAX;
volatile uint16_t x539 = 110U;
uint32_t x590 = UINT32_MAX;
volatile int8_t x637 = 51;
uint32_t t16 = 2U;
uint8_t x743 = UINT8_MAX;
uint32_t t19 = 106195U;
static volatile int32_t x866 = -30;
uint64_t t22 = 207310553293689941LLU;
int32_t x918 = -1;
static int16_t x920 = 1;
uint64_t x970 = 15273LLU;
volatile uint64_t t25 = 979396605759087996LLU;
int16_t x1074 = INT16_MIN;
uint64_t t26 = 11923706614LLU;
int8_t x1085 = INT8_MAX;
int64_t x1086 = -1LL;
int8_t x1088 = 23;
volatile int64_t t27 = 0LL;
static uint64_t x1117 = 82594LLU;
static uint16_t x1242 = 3U;
int16_t x1244 = 26;
uint64_t x1282 = 202LLU;
static int8_t x1284 = 22;
volatile uint64_t t30 = 1LLU;
static int16_t x1392 = 0;
uint32_t x1424 = 19U;
static int16_t x1460 = 1;
uint8_t x1484 = 1U;
uint64_t x1497 = UINT64_MAX;
uint64_t x1500 = 50LLU;
uint8_t x1544 = 16U;
uint64_t t40 = 820704244837296LLU;
uint16_t x1775 = 48U;
static int8_t x1922 = -2;
uint8_t x1969 = 123U;
volatile uint64_t t45 = 1LLU;
int64_t t46 = -10080LL;
static volatile int8_t x2054 = INT8_MIN;
int64_t x2059 = INT64_MIN;
int16_t x2101 = -1;
uint32_t x2103 = UINT32_MAX;
int32_t x2198 = INT32_MIN;
volatile uint32_t t52 = 24102033U;
int64_t x2358 = -1LL;
static int64_t x2359 = -1LL;
static uint64_t t53 = 121106LLU;
uint32_t x2409 = UINT32_MAX;
static int64_t t55 = -173820244LL;
static uint32_t x2722 = 3U;
int16_t x2726 = -1;
static volatile uint32_t t60 = 6265U;
uint32_t x2767 = 191689861U;
static int16_t x2967 = INT16_MAX;
static volatile int16_t x3087 = -1;
int32_t x3176 = 0;
uint32_t x3202 = 392091827U;
int8_t x3212 = 0;
int16_t x3249 = INT16_MIN;
uint64_t x3251 = UINT64_MAX;
uint8_t x3252 = 1U;
uint64_t t68 = 255447100225590LLU;
int32_t x3481 = INT32_MIN;
int16_t x3482 = -674;
static int8_t x3484 = 0;
uint8_t x3537 = 1U;
static int8_t x3539 = 1;
int8_t x3540 = 1;
static volatile int32_t x3683 = INT32_MAX;
uint64_t x3734 = UINT64_MAX;
volatile int16_t x3750 = INT16_MAX;
uint32_t x3882 = UINT32_MAX;
volatile int64_t t79 = -37558LL;
uint16_t x3889 = 12431U;
volatile int8_t x3891 = -1;
volatile uint32_t x3947 = 502385U;
int8_t x4093 = 3;
int64_t x4094 = -1LL;
static uint32_t x4096 = 0U;
static volatile int64_t t83 = 191482724071022LL;
static volatile int64_t t84 = 721677537284548311LL;
int64_t x4165 = INT64_MIN;
uint64_t x4421 = UINT64_MAX;
volatile uint64_t t88 = 8339535LLU;
uint64_t x4549 = 93621313064570780LLU;
volatile int32_t x4550 = INT32_MAX;
uint16_t x4552 = 1U;
int16_t x4555 = INT16_MIN;
int64_t t91 = 994104780082LL;
uint8_t x4580 = 8U;
volatile uint64_t t92 = 409478669LLU;
uint64_t x4586 = 5089293927362227LLU;
uint16_t x4587 = 172U;
volatile uint64_t t93 = 1405886879556739044LLU;
volatile uint32_t x4618 = 617203U;
int64_t x4626 = -707310717316245689LL;
uint64_t x4648 = 2LLU;
uint64_t x4766 = UINT64_MAX;


void f0(void) {
	static uint16_t x62 = UINT16_MAX;

	t0 = ((x61^(x62+x63))>>x64);

	if (t0 != 562949953421307LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x73 = INT8_MIN;
	static uint16_t x74 = 11U;
	volatile int32_t x75 = INT32_MIN;
	volatile uint8_t x76 = 12U;
	volatile int32_t t1 = -97986000;

	t1 = ((x73^(x74+x75))>>x76);

	if (t1 != 524287) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x78 = INT32_MIN;
	volatile int64_t x79 = -38192633977873719LL;
	uint64_t t2 = 93233LLU;

	t2 = ((x77^(x78+x79))>>x80);

	if (t2 != 1193519878917417LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x98 = INT16_MIN;
	static int16_t x99 = INT16_MIN;
	volatile uint64_t x100 = 6LLU;
	static volatile int32_t t3 = -45;

	t3 = ((x97^(x98+x99))>>x100);

	if (t3 != 1022) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x157 = INT32_MIN;
	static int8_t x158 = 0;
	volatile int16_t x159 = INT16_MIN;
	volatile int32_t t4 = 1;

	t4 = ((x157^(x158+x159))>>x160);

	if (t4 != 1073725440) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x185 = INT16_MIN;
	volatile int8_t x186 = 31;
	uint32_t x187 = 826497396U;
	volatile uint16_t x188 = 17U;
	static volatile uint32_t t5 = 33359450U;

	t5 = ((x185^(x186+x187))>>x188);

	if (t5 != 26462U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x245 = -1LL;
	int16_t x246 = -5262;
	int8_t x247 = INT8_MIN;
	int64_t x248 = 4LL;
	volatile int64_t t6 = -8910931346LL;

	t6 = ((x245^(x246+x247))>>x248);

	if (t6 != 336LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x361 = -1;
	int16_t x362 = INT16_MIN;
	uint8_t x363 = UINT8_MAX;
	int16_t x364 = 3;

	t7 = ((x361^(x362+x363))>>x364);

	if (t7 != 4064) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x373 = -1;
	volatile int64_t x375 = INT64_MIN;
	static uint16_t x376 = 14U;
	int64_t t8 = -604LL;

	t8 = ((x373^(x374+x375))>>x376);

	if (t8 != 562949953421311LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x386 = 9;
	volatile int8_t x387 = -9;
	uint16_t x388 = 10U;
	volatile int32_t t9 = 755;

	t9 = ((x385^(x386+x387))>>x388);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x425 = INT8_MIN;
	int32_t x426 = INT32_MIN;
	static uint8_t x427 = UINT8_MAX;
	uint64_t x428 = 20LLU;
	volatile int32_t t10 = -63515539;

	t10 = ((x425^(x426+x427))>>x428);

	if (t10 != 2047) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x473 = -3;
	int32_t x474 = -5135;
	uint64_t x475 = UINT64_MAX;

	t11 = ((x473^(x474+x475))>>x476);

	if (t11 != 10LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x491 = INT64_MIN;
	int64_t t12 = 32437126811411629LL;

	t12 = ((x489^(x490+x491))>>x492);

	if (t12 != 4503599627370495LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x538 = 6542595;
	uint64_t x540 = 1LLU;
	volatile int32_t t13 = -15;

	t13 = ((x537^(x538+x539))>>x540);

	if (t13 != 3265863) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x589 = -26;
	static volatile uint8_t x591 = UINT8_MAX;
	volatile uint8_t x592 = 8U;
	uint32_t t14 = 7U;

	t14 = ((x589^(x590+x591))>>x592);

	if (t14 != 16777215U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x597 = UINT8_MAX;
	int8_t x598 = -57;
	int64_t x599 = 23200LL;
	uint8_t x600 = 2U;
	static int64_t t15 = -190522112933LL;

	t15 = ((x597^(x598+x599))>>x600);

	if (t15 != 5798LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x638 = UINT32_MAX;
	int32_t x639 = 2;
	uint8_t x640 = 3U;

	t16 = ((x637^(x638+x639))>>x640);

	if (t16 != 6U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x697 = -1;
	uint64_t x698 = UINT64_MAX;
	uint64_t x699 = UINT64_MAX;
	uint32_t x700 = 1U;
	uint64_t t17 = 0LLU;

	t17 = ((x697^(x698+x699))>>x700);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x741 = -90;
	static uint32_t x742 = 50996251U;
	uint16_t x744 = 3U;
	volatile uint32_t t18 = 71U;

	t18 = ((x741^(x742+x743))>>x744);

	if (t18 != 530496343U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x833 = -6;
	uint32_t x834 = 477818317U;
	static volatile int32_t x835 = 61044771;
	int8_t x836 = 3;

	t19 = ((x833^(x834+x835))>>x836);

	if (t19 != 469513025U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x853 = UINT32_MAX;
	volatile int16_t x854 = INT16_MIN;
	volatile uint32_t x855 = 1U;
	uint64_t x856 = 13LLU;
	uint32_t t20 = 43104U;

	t20 = ((x853^(x854+x855))>>x856);

	if (t20 != 3U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x865 = UINT32_MAX;
	int32_t x867 = 144483279;
	int16_t x868 = 11;
	volatile uint32_t t21 = 20U;

	t21 = ((x865^(x866+x867))>>x868);

	if (t21 != 2026603U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x893 = 119;
	int8_t x894 = -1;
	uint64_t x895 = 467051986175000943LLU;
	uint64_t x896 = 52LLU;

	t22 = ((x893^(x894+x895))>>x896);

	if (t22 != 103LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x917 = INT8_MAX;
	int64_t x919 = INT64_MAX;
	int64_t t23 = -47886220608329666LL;

	t23 = ((x917^(x918+x919))>>x920);

	if (t23 != 4611686018427387840LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x969 = INT32_MIN;
	int64_t x971 = INT64_MIN;
	uint8_t x972 = 29U;
	uint64_t t24 = 213135193313656139LLU;

	t24 = ((x969^(x970+x971))>>x972);

	if (t24 != 17179869180LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x977 = INT32_MIN;
	int64_t x978 = -1LL;
	uint64_t x979 = 597649951080353236LLU;
	int32_t x980 = 6;

	t25 = ((x977^(x978+x979))>>x980);

	if (t25 != 278892095671415351LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1073 = 1212763317560LLU;
	static volatile uint16_t x1075 = 10U;
	uint8_t x1076 = 0U;

	t26 = ((x1073^(x1074+x1075))>>x1076);

	if (t26 != 18446742860946220338LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1087 = INT32_MAX;

	t27 = ((x1085^(x1086+x1087))>>x1088);

	if (t27 != 255LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1118 = 216482496335LL;
	int32_t x1119 = INT32_MAX;
	uint64_t x1120 = 2LLU;
	uint64_t t28 = 139808660LLU;

	t28 = ((x1117^(x1118+x1119))>>x1120);

	if (t28 != 54657515387LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1241 = INT16_MAX;
	uint8_t x1243 = UINT8_MAX;
	volatile int32_t t29 = -2;

	t29 = ((x1241^(x1242+x1243))>>x1244);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1281 = INT16_MIN;
	uint64_t x1283 = 342134677010775LLU;

	t30 = ((x1281^(x1282+x1283))>>x1284);

	if (t30 != 4397964939840LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1381 = 2U;
	int64_t x1382 = 1607324LL;
	static uint8_t x1383 = 77U;
	volatile int16_t x1384 = 5;
	int64_t t31 = 0LL;

	t31 = ((x1381^(x1382+x1383))>>x1384);

	if (t31 != 50231LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1389 = 39U;
	uint32_t x1390 = 1771158U;
	static volatile int8_t x1391 = INT8_MIN;
	static volatile uint32_t t32 = 149494U;

	t32 = ((x1389^(x1390+x1391))>>x1392);

	if (t32 != 1771057U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x1421 = INT8_MIN;
	uint16_t x1422 = 0U;
	int32_t x1423 = INT32_MIN;
	int32_t t33 = 2679798;

	t33 = ((x1421^(x1422+x1423))>>x1424);

	if (t33 != 4095) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1457 = 28U;
	volatile int8_t x1458 = INT8_MIN;
	volatile uint16_t x1459 = UINT16_MAX;
	volatile int32_t t34 = -1716;

	t34 = ((x1457^(x1458+x1459))>>x1460);

	if (t34 != 32689) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x1481 = INT32_MIN;
	uint8_t x1482 = UINT8_MAX;
	uint64_t x1483 = UINT64_MAX;
	uint64_t t35 = 153803245321LLU;

	t35 = ((x1481^(x1482+x1483))>>x1484);

	if (t35 != 9223372035781034111LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1489 = UINT32_MAX;
	static volatile int64_t x1490 = 512LL;
	uint8_t x1491 = UINT8_MAX;
	uint16_t x1492 = 1U;
	int64_t t36 = 702938929770262LL;

	t36 = ((x1489^(x1490+x1491))>>x1492);

	if (t36 != 2147483264LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1498 = UINT32_MAX;
	int32_t x1499 = INT32_MIN;
	uint64_t t37 = 2392LLU;

	t37 = ((x1497^(x1498+x1499))>>x1500);

	if (t37 != 16383LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x1541 = UINT32_MAX;
	int8_t x1542 = -1;
	int8_t x1543 = 2;
	static volatile uint32_t t38 = 509230U;

	t38 = ((x1541^(x1542+x1543))>>x1544);

	if (t38 != 65535U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1721 = INT16_MAX;
	volatile uint32_t x1722 = UINT32_MAX;
	int16_t x1723 = INT16_MIN;
	static uint16_t x1724 = 31U;
	volatile uint32_t t39 = 376587U;

	t39 = ((x1721^(x1722+x1723))>>x1724);

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x1741 = UINT32_MAX;
	static uint32_t x1742 = 248139102U;
	uint64_t x1743 = 30254027740119LLU;
	static uint64_t x1744 = 14LLU;

	t40 = ((x1741^(x1742+x1743))>>x1744);

	if (t40 != 1846772360LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1773 = 4;
	uint16_t x1774 = 1809U;
	uint8_t x1776 = 6U;
	volatile int32_t t41 = -327797;

	t41 = ((x1773^(x1774+x1775))>>x1776);

	if (t41 != 29) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x1829 = 3465852103637LLU;
	static int16_t x1830 = -1;
	uint64_t x1831 = 21849294495148442LLU;
	uint8_t x1832 = 0U;
	static uint64_t t42 = 38LLU;

	t42 = ((x1829^(x1830+x1831))>>x1832);

	if (t42 != 21846160966402636LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x1921 = UINT64_MAX;
	int32_t x1923 = INT32_MAX;
	int16_t x1924 = 12;
	volatile uint64_t t43 = 250947442LLU;

	t43 = ((x1921^(x1922+x1923))>>x1924);

	if (t43 != 4503599626846208LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1929 = 5;
	volatile uint8_t x1930 = UINT8_MAX;
	uint16_t x1931 = 7425U;
	volatile uint64_t x1932 = 3LLU;
	int32_t t44 = 3893;

	t44 = ((x1929^(x1930+x1931))>>x1932);

	if (t44 != 960) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x1970 = 210690192581222466LLU;
	volatile int64_t x1971 = -1LL;
	int16_t x1972 = 1;

	t45 = ((x1969^(x1970+x1971))>>x1972);

	if (t45 != 105345096290611229LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2013 = -1;
	static int64_t x2014 = INT64_MIN;
	uint8_t x2015 = 40U;
	uint32_t x2016 = 3U;

	t46 = ((x2013^(x2014+x2015))>>x2016);

	if (t46 != 1152921504606846970LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x2053 = 6LL;
	uint32_t x2055 = 42U;
	static uint16_t x2056 = 2U;
	volatile int64_t t47 = -27636169LL;

	t47 = ((x2053^(x2054+x2055))>>x2056);

	if (t47 != 1073741803LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2057 = -9578LL;
	uint32_t x2058 = UINT32_MAX;
	static uint16_t x2060 = 35U;
	static volatile int64_t t48 = 26LL;

	t48 = ((x2057^(x2058+x2059))>>x2060);

	if (t48 != 268435455LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2069 = 1U;
	uint32_t x2070 = UINT32_MAX;
	static volatile uint64_t x2071 = UINT64_MAX;
	int16_t x2072 = 8;
	uint64_t t49 = 7258428626LLU;

	t49 = ((x2069^(x2070+x2071))>>x2072);

	if (t49 != 16777215LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x2102 = INT32_MIN;
	static uint8_t x2104 = 0U;
	volatile uint32_t t50 = 943072525U;

	t50 = ((x2101^(x2102+x2103))>>x2104);

	if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2197 = -4;
	uint64_t x2199 = UINT64_MAX;
	static volatile int8_t x2200 = 0;
	volatile uint64_t t51 = 6484LLU;

	t51 = ((x2197^(x2198+x2199))>>x2200);

	if (t51 != 2147483651LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x2329 = INT16_MIN;
	int32_t x2330 = -1;
	uint32_t x2331 = 118144693U;
	int8_t x2332 = 1;

	t52 = ((x2329^(x2330+x2331))>>x2332);

	if (t52 != 2088410970U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2357 = 242217299750504LLU;
	uint32_t x2360 = 28U;

	t53 = ((x2357^(x2358+x2359))>>x2360);

	if (t53 != 68718574406LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2410 = 413920137U;
	uint32_t x2411 = UINT32_MAX;
	volatile int16_t x2412 = 1;
	uint32_t t54 = 6U;

	t54 = ((x2409^(x2410+x2411))>>x2412);

	if (t54 != 1940523579U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x2505 = 7;
	int32_t x2506 = INT32_MIN;
	volatile int64_t x2507 = INT64_MAX;
	volatile int8_t x2508 = 1;

	t55 = ((x2505^(x2506+x2507))>>x2508);

	if (t55 != 4611686017353646076LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2545 = -1;
	int32_t x2546 = INT32_MIN;
	int64_t x2547 = -1LL;
	static uint32_t x2548 = 27U;
	int64_t t56 = -1LL;

	t56 = ((x2545^(x2546+x2547))>>x2548);

	if (t56 != 16LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2549 = INT64_MIN;
	static int16_t x2550 = -1;
	int32_t x2551 = -1;
	uint16_t x2552 = 26U;
	volatile int64_t t57 = 183658848157LL;

	t57 = ((x2549^(x2550+x2551))>>x2552);

	if (t57 != 137438953471LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2641 = -59;
	int16_t x2642 = -1;
	static volatile int16_t x2643 = INT16_MIN;
	int8_t x2644 = 1;
	volatile int32_t t58 = 998384588;

	t58 = ((x2641^(x2642+x2643))>>x2644);

	if (t58 != 16413) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x2721 = 98497645U;
	int32_t x2723 = INT32_MIN;
	static volatile uint16_t x2724 = 3U;
	static volatile uint32_t t59 = 973453U;

	t59 = ((x2721^(x2722+x2723))>>x2724);

	if (t59 != 280747661U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x2725 = UINT32_MAX;
	int8_t x2727 = 6;
	uint8_t x2728 = 19U;

	t60 = ((x2725^(x2726+x2727))>>x2728);

	if (t60 != 8191U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x2765 = INT32_MIN;
	int32_t x2766 = 170522;
	uint8_t x2768 = 1U;
	uint32_t t61 = 7U;

	t61 = ((x2765^(x2766+x2767))>>x2768);

	if (t61 != 1169672015U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2897 = UINT64_MAX;
	volatile int32_t x2898 = INT32_MIN;
	int16_t x2899 = 19;
	uint16_t x2900 = 1U;
	uint64_t t62 = 6498715890LLU;

	t62 = ((x2897^(x2898+x2899))>>x2900);

	if (t62 != 1073741814LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2965 = 101766U;
	uint16_t x2966 = 281U;
	uint16_t x2968 = 1U;
	uint32_t t63 = 3198U;

	t63 = ((x2965^(x2966+x2967))>>x2968);

	if (t63 != 34383U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x3085 = -851163947;
	static int8_t x3086 = INT8_MIN;
	static uint8_t x3088 = 0U;
	int32_t t64 = -347385;

	t64 = ((x3085^(x3086+x3087))>>x3088);

	if (t64 != 851164074) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3173 = -241777366LL;
	int16_t x3174 = INT16_MAX;
	static volatile uint64_t x3175 = 47929170339LLU;
	volatile uint64_t t65 = 1LLU;

	t65 = ((x3173^(x3174+x3175))>>x3176);

	if (t65 != 18446744025816587400LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3201 = UINT16_MAX;
	static int16_t x3203 = INT16_MIN;
	volatile uint16_t x3204 = 2U;
	volatile uint32_t t66 = 3U;

	t66 = ((x3201^(x3202+x3203))>>x3204);

	if (t66 != 98019795U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3209 = 107513541853761LLU;
	int64_t x3210 = -1LL;
	uint64_t x3211 = UINT64_MAX;
	uint64_t t67 = 77552937023712LLU;

	t67 = ((x3209^(x3210+x3211))>>x3212);

	if (t67 != 18446636560167697855LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3250 = UINT64_MAX;

	t68 = ((x3249^(x3250+x3251))>>x3252);

	if (t68 != 16383LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3483 = 19;
	int32_t t69 = 125789692;

	t69 = ((x3481^(x3482+x3483))>>x3484);

	if (t69 != 2147482993) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x3489 = INT32_MAX;
	uint64_t x3490 = 2205979838206155680LLU;
	int8_t x3491 = 6;
	int8_t x3492 = 34;
	volatile uint64_t t70 = 2LLU;

	t70 = ((x3489^(x3490+x3491))>>x3492);

	if (t70 != 128404926LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3538 = UINT32_MAX;
	uint32_t t71 = 8323U;

	t71 = ((x3537^(x3538+x3539))>>x3540);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3545 = -47243;
	int16_t x3546 = INT16_MIN;
	static uint8_t x3547 = 42U;
	volatile uint32_t x3548 = 15U;
	volatile int32_t t72 = -234943;

	t72 = ((x3545^(x3546+x3547))>>x3548);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3593 = UINT32_MAX;
	int8_t x3594 = INT8_MAX;
	static int8_t x3595 = INT8_MIN;
	int16_t x3596 = 1;
	static volatile uint32_t t73 = 23U;

	t73 = ((x3593^(x3594+x3595))>>x3596);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3681 = UINT64_MAX;
	static volatile int64_t x3682 = INT64_MIN;
	static uint8_t x3684 = 28U;
	volatile uint64_t t74 = 17762071LLU;

	t74 = ((x3681^(x3682+x3683))>>x3684);

	if (t74 != 34359738360LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3701 = INT16_MIN;
	static int64_t x3702 = -7692654LL;
	uint64_t x3703 = UINT64_MAX;
	static uint16_t x3704 = 46U;
	volatile uint64_t t75 = 1256554830LLU;

	t75 = ((x3701^(x3702+x3703))>>x3704);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x3705 = 6350111U;
	int64_t x3706 = INT64_MIN;
	uint64_t x3707 = 46832274LLU;
	int16_t x3708 = 22;
	volatile uint64_t t76 = 339187LLU;

	t76 = ((x3705^(x3706+x3707))>>x3708);

	if (t76 != 2199023255562LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x3733 = 1723830185115LLU;
	volatile uint64_t x3735 = UINT64_MAX;
	uint8_t x3736 = 2U;
	volatile uint64_t t77 = 3258029558847230066LLU;

	t77 = ((x3733^(x3734+x3735))>>x3736);

	if (t77 != 4611685587469841625LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x3749 = 70129431737LL;
	int8_t x3751 = INT8_MIN;
	static int8_t x3752 = 6;
	volatile int64_t t78 = 6383694752379LL;

	t78 = ((x3749^(x3750+x3751))>>x3752);

	if (t78 != 1095772463LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3881 = -1;
	volatile int64_t x3883 = INT64_MIN;
	static uint8_t x3884 = 6U;

	t79 = ((x3881^(x3882+x3883))>>x3884);

	if (t79 != 144115188008747008LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x3890 = UINT8_MAX;
	int16_t x3892 = 17;
	int32_t t80 = -10721399;

	t80 = ((x3889^(x3890+x3891))>>x3892);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3893 = -1LL;
	int16_t x3894 = INT16_MIN;
	uint64_t x3895 = 13080480679992463LLU;
	int8_t x3896 = 2;
	volatile uint64_t t81 = 6LLU;

	t81 = ((x3893^(x3894+x3895))>>x3896);

	if (t81 != 4608415898257397980LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x3945 = 164843607U;
	static int8_t x3946 = 15;
	volatile uint16_t x3948 = 26U;
	volatile uint32_t t82 = 1U;

	t82 = ((x3945^(x3946+x3947))>>x3948);

	if (t82 != 2U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x4095 = 3752U;

	t83 = ((x4093^(x4094+x4095))>>x4096);

	if (t83 != 3748LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4125 = INT64_MIN;
	static volatile int32_t x4126 = INT32_MIN;
	volatile int32_t x4127 = 48861572;
	int64_t x4128 = 0LL;

	t84 = ((x4125^(x4126+x4127))>>x4128);

	if (t84 != 9223372034756153732LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x4166 = INT32_MIN;
	volatile uint8_t x4167 = UINT8_MAX;
	int16_t x4168 = 15;
	int64_t t85 = 2049447411LL;

	t85 = ((x4165^(x4166+x4167))>>x4168);

	if (t85 != 281474976645120LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x4185 = -1LL;
	int16_t x4186 = INT16_MIN;
	volatile int16_t x4187 = -1;
	static int8_t x4188 = 1;
	volatile int64_t t86 = 26LL;

	t86 = ((x4185^(x4186+x4187))>>x4188);

	if (t86 != 16384LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4341 = -1LL;
	uint16_t x4342 = 373U;
	int64_t x4343 = INT64_MIN;
	volatile uint16_t x4344 = 6U;
	volatile int64_t t87 = -1LL;

	t87 = ((x4341^(x4342+x4343))>>x4344);

	if (t87 != 144115188075855866LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4422 = INT16_MIN;
	int64_t x4423 = 8845747413863LL;
	volatile uint8_t x4424 = 13U;

	t88 = ((x4421^(x4422+x4423))>>x4424);

	if (t88 != 2251798733882100LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x4529 = UINT32_MAX;
	int16_t x4530 = -7;
	uint32_t x4531 = 15548291U;
	static uint16_t x4532 = 5U;
	volatile uint32_t t89 = 1U;

	t89 = ((x4529^(x4530+x4531))>>x4532);

	if (t89 != 133731844U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x4551 = 8429237064083444LLU;
	volatile uint64_t t90 = 59795836765686314LLU;

	t90 = ((x4549^(x4550+x4551))>>x4552);

	if (t90 != 47489177745888311LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4553 = -1LL;
	volatile int64_t x4554 = -432384392718LL;
	uint8_t x4556 = 2U;

	t91 = ((x4553^(x4554+x4555))>>x4556);

	if (t91 != 108096106371LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4577 = -1;
	volatile int64_t x4578 = -1LL;
	uint64_t x4579 = 175169929819316LLU;

	t92 = ((x4577^(x4578+x4579))>>x4580);

	if (t92 != 72056909780389579LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x4585 = -11467518698147LL;
	uint16_t x4588 = 7U;

	t93 = ((x4585^(x4586+x4587))>>x4588);

	if (t93 != 144075341435788132LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4617 = 7U;
	uint8_t x4619 = 0U;
	uint16_t x4620 = 0U;
	uint32_t t94 = 20U;

	t94 = ((x4617^(x4618+x4619))>>x4620);

	if (t94 != 617204U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4625 = -1LL;
	uint8_t x4627 = 15U;
	int8_t x4628 = 11;
	int64_t t95 = -5897LL;

	t95 = ((x4625^(x4626+x4627))>>x4628);

	if (t95 != 345366561189573LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x4645 = UINT64_MAX;
	static uint8_t x4646 = 1U;
	static volatile int16_t x4647 = 0;
	static volatile uint64_t t96 = 64787101327080LLU;

	t96 = ((x4645^(x4646+x4647))>>x4648);

	if (t96 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x4697 = 44;
	int64_t x4698 = INT64_MIN;
	uint64_t x4699 = 1013LLU;
	static int8_t x4700 = 0;
	uint64_t t97 = 1844LLU;

	t97 = ((x4697^(x4698+x4699))>>x4700);

	if (t97 != 9223372036854776793LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x4709 = 1009527639515LL;
	int64_t x4710 = INT64_MIN;
	uint64_t x4711 = 2368LLU;
	int8_t x4712 = 0;
	static volatile uint64_t t98 = 5040972856LLU;

	t98 = ((x4709^(x4710+x4711))>>x4712);

	if (t98 != 9223373046382412955LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x4765 = -1;
	int64_t x4767 = -42LL;
	int16_t x4768 = 0;
	volatile uint64_t t99 = 1467301LLU;

	t99 = ((x4765^(x4766+x4767))>>x4768);

	if (t99 != 42LLU) { NG(); } else { ; }
	
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

