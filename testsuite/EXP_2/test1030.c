#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x53 = 781U;
uint16_t x91 = 7U;
int32_t t1 = 823902699;
uint64_t x301 = 48413475681LLU;
int32_t x365 = 1;
int16_t x581 = -82;
uint8_t x584 = 3U;
uint64_t x609 = 214LLU;
int8_t x843 = 0;
volatile int64_t x862 = 2708543LL;
static volatile int32_t x864 = 96686;
volatile int64_t t9 = -57212801367657LL;
uint32_t x969 = 3667U;
int16_t x972 = INT16_MIN;
int16_t x1097 = 1887;
uint16_t x1129 = 0U;
int8_t x1132 = -1;
uint16_t x1137 = 25079U;
volatile int16_t x1140 = INT16_MIN;
uint64_t x1172 = 128LLU;
static uint64_t t20 = 34155710751757LLU;
int16_t x1525 = INT16_MIN;
uint32_t x1678 = UINT32_MAX;
volatile uint32_t t22 = 3075211U;
volatile int32_t t23 = -79681;
uint32_t x1705 = UINT32_MAX;
volatile uint8_t x1706 = 54U;
static uint8_t x1843 = 8U;
uint32_t x1930 = UINT32_MAX;
int16_t x1932 = -1;
static volatile int64_t t30 = -1221443061906211987LL;
volatile int8_t x1974 = 2;
volatile int8_t x2017 = -20;
static int64_t t32 = 16047823945976691LL;
volatile uint32_t x2319 = 1U;
int16_t x2320 = 812;
volatile int32_t t37 = 2022;
uint8_t x2754 = 0U;
static volatile uint64_t t40 = 6LLU;
static uint16_t x2790 = 52U;
int16_t x2853 = -1219;
static volatile int8_t x2854 = 2;
uint32_t t43 = 41377700U;
volatile int64_t x2952 = -14LL;
int32_t x3049 = -1;
static uint8_t x3061 = UINT8_MAX;
int64_t t47 = -153557452931LL;
uint16_t x3174 = 9820U;
uint8_t x3175 = 5U;
int32_t x3176 = 2663200;
static int16_t x3340 = INT16_MIN;
int8_t x3422 = INT8_MAX;
int32_t t50 = -3443;
static int64_t x3580 = -143304652LL;
uint8_t x3643 = 7U;
static volatile uint64_t t53 = 232LLU;
int16_t x3649 = INT16_MAX;
int8_t x3736 = INT8_MIN;
int16_t x3853 = -1;
int64_t x3901 = INT64_MIN;
uint8_t x4003 = 1U;
volatile uint64_t x4105 = 1469161146278LLU;
int8_t x4108 = -1;
uint64_t x4142 = 230LLU;
static uint8_t x4143 = 4U;
uint8_t x4371 = 1U;
uint8_t x4649 = 11U;
uint64_t t66 = 212221310353709LLU;
int64_t x4765 = -1LL;
volatile uint8_t x4835 = 21U;
volatile uint8_t x4837 = UINT8_MAX;
volatile uint64_t t70 = 228378LLU;
uint32_t x4880 = 287U;
uint32_t t71 = 14754307U;
volatile uint64_t t72 = 203557261996746LLU;
int32_t x4974 = INT32_MAX;
int16_t x4976 = 25;
uint64_t x5053 = UINT64_MAX;
static uint64_t t74 = 22030736279325LLU;
int8_t x5339 = 31;
int8_t x5369 = INT8_MAX;
static volatile uint32_t x5372 = 57U;
uint32_t t77 = 2U;
volatile uint64_t t78 = 1LLU;
uint32_t x5594 = UINT32_MAX;
int8_t x5596 = -1;
int32_t x5666 = 5385;
uint8_t x5667 = 28U;
int8_t x5888 = INT8_MIN;
uint64_t x6076 = UINT64_MAX;
int32_t x6085 = INT32_MIN;
int64_t x6088 = INT64_MAX;
uint8_t x6294 = 0U;
uint8_t x6295 = 29U;
uint64_t x6296 = 14321174LLU;
static uint64_t t87 = 3393611504525LLU;
int8_t x6417 = INT8_MAX;
uint64_t x6453 = UINT64_MAX;
static uint32_t x6622 = 93U;
int16_t x6623 = 9;
int32_t x6645 = INT32_MIN;
uint64_t x7008 = UINT64_MAX;
volatile uint64_t t95 = 1732LLU;
static volatile int32_t x7302 = 196640119;
uint8_t x7303 = 8U;
uint64_t t99 = 88255LLU;


void f0(void) {
	volatile int32_t x54 = 0;
	int8_t x55 = 0;
	uint64_t x56 = 1046377353237625630LLU;
	uint64_t t0 = 26133315LLU;

	t0 = ((x53-(x54>>x55))*x56);

	if (t0 != 5563973635365345926LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x89 = -1;
	static int8_t x90 = 10;
	static int8_t x92 = INT8_MIN;

	t1 = ((x89-(x90>>x91))*x92);

	if (t1 != 128) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x265 = 7U;
	static uint32_t x266 = UINT32_MAX;
	uint8_t x267 = 0U;
	int8_t x268 = INT8_MIN;
	uint32_t t2 = 204U;

	t2 = ((x265-(x266>>x267))*x268);

	if (t2 != 4294966272U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x302 = 5422LLU;
	int16_t x303 = 1;
	int64_t x304 = INT64_MAX;
	volatile uint64_t t3 = 21661LLU;

	t3 = ((x301-(x302>>x303))*x304);

	if (t3 != 18446744025296078646LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x366 = 152234109230LLU;
	static int8_t x367 = 40;
	static volatile int8_t x368 = INT8_MIN;
	volatile uint64_t t4 = 188954LLU;

	t4 = ((x365-(x366>>x367))*x368);

	if (t4 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x582 = INT64_MAX;
	uint8_t x583 = 3U;
	int64_t t5 = 129202397108LL;

	t5 = ((x581-(x582>>x583))*x584);

	if (t5 != -3458764513820541171LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x610 = UINT64_MAX;
	uint64_t x611 = 13LLU;
	static volatile int16_t x612 = -51;
	volatile uint64_t t6 = 36101LLU;

	t6 = ((x609-(x610>>x611))*x612);

	if (t6 != 114841790497936683LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x681 = 74275U;
	volatile int32_t x682 = 8620532;
	static volatile uint32_t x683 = 0U;
	static int8_t x684 = -5;
	volatile uint32_t t7 = 414528U;

	t7 = ((x681-(x682>>x683))*x684);

	if (t7 != 42731285U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x841 = -1;
	volatile uint64_t x842 = 47950833LLU;
	uint16_t x844 = 493U;
	volatile uint64_t t8 = 134797534081459234LLU;

	t8 = ((x841-(x842>>x843))*x844);

	if (t8 != 18446744050069790454LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x861 = -8;
	static volatile uint8_t x863 = 13U;

	t9 = ((x861-(x862>>x863))*x864);

	if (t9 != -32679868LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x970 = 16139602LLU;
	int16_t x971 = 12;
	uint64_t t10 = 10037016401881020LLU;

	t10 = ((x969-(x970>>x971))*x972);

	if (t10 != 8945664LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x1098 = UINT8_MAX;
	static int8_t x1099 = 0;
	static volatile uint16_t x1100 = 10U;
	int32_t t11 = 33494;

	t11 = ((x1097-(x1098>>x1099))*x1100);

	if (t11 != 16320) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1125 = -1;
	int16_t x1126 = 12;
	volatile int16_t x1127 = 31;
	uint32_t x1128 = UINT32_MAX;
	volatile uint32_t t12 = 1024073935U;

	t12 = ((x1125-(x1126>>x1127))*x1128);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1130 = 6921238322683LLU;
	static uint16_t x1131 = 31U;
	uint64_t t13 = 70039637050170255LLU;

	t13 = ((x1129-(x1130>>x1131))*x1132);

	if (t13 != 3222LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1138 = UINT16_MAX;
	int64_t x1139 = 7LL;
	volatile int32_t t14 = 239943941;

	t14 = ((x1137-(x1138>>x1139))*x1140);

	if (t14 != -805044224) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1169 = 31U;
	int8_t x1170 = 6;
	int64_t x1171 = 6LL;
	uint64_t t15 = 4067780704LLU;

	t15 = ((x1169-(x1170>>x1171))*x1172);

	if (t15 != 3968LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1245 = 1;
	static uint32_t x1246 = 922993U;
	static uint8_t x1247 = 1U;
	volatile uint8_t x1248 = UINT8_MAX;
	volatile uint32_t t16 = 2179095U;

	t16 = ((x1245-(x1246>>x1247))*x1248);

	if (t16 != 4177286071U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1257 = INT32_MIN;
	uint64_t x1258 = 62066929837LLU;
	uint8_t x1259 = 20U;
	volatile uint16_t x1260 = 966U;
	uint64_t t17 = 735LLU;

	t17 = ((x1257-(x1258>>x1259))*x1260);

	if (t17 != 18446741999183169142LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x1321 = INT16_MIN;
	volatile uint32_t x1322 = 7U;
	static int8_t x1323 = 3;
	int8_t x1324 = INT8_MIN;
	uint32_t t18 = 54256948U;

	t18 = ((x1321-(x1322>>x1323))*x1324);

	if (t18 != 4194304U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x1345 = 1;
	uint64_t x1346 = UINT64_MAX;
	static int16_t x1347 = 1;
	uint64_t x1348 = UINT64_MAX;
	uint64_t t19 = 243191276LLU;

	t19 = ((x1345-(x1346>>x1347))*x1348);

	if (t19 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1461 = 26LLU;
	uint64_t x1462 = UINT64_MAX;
	uint16_t x1463 = 53U;
	uint16_t x1464 = UINT16_MAX;

	t20 = ((x1461-(x1462>>x1463))*x1464);

	if (t20 != 18446744073577105381LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1526 = 209LLU;
	volatile uint8_t x1527 = 9U;
	uint16_t x1528 = UINT16_MAX;
	uint64_t t21 = 11651896405488052LLU;

	t21 = ((x1525-(x1526>>x1527))*x1528);

	if (t21 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x1677 = 1U;
	uint16_t x1679 = 3U;
	int32_t x1680 = INT32_MIN;

	t22 = ((x1677-(x1678>>x1679))*x1680);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1681 = -1;
	uint8_t x1682 = UINT8_MAX;
	int8_t x1683 = 1;
	uint8_t x1684 = 1U;

	t23 = ((x1681-(x1682>>x1683))*x1684);

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1707 = 6LLU;
	int32_t x1708 = -1;
	static volatile uint32_t t24 = 6311649U;

	t24 = ((x1705-(x1706>>x1707))*x1708);

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1841 = -3110;
	uint64_t x1842 = 191618651529301LLU;
	static int64_t x1844 = INT64_MIN;
	volatile uint64_t t25 = 24663LLU;

	t25 = ((x1841-(x1842>>x1843))*x1844);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1881 = 2U;
	volatile uint64_t x1882 = 13091545064119LLU;
	static volatile uint8_t x1883 = 0U;
	static volatile uint32_t x1884 = 115688691U;
	volatile uint64_t t26 = 29479LLU;

	t26 = ((x1881-(x1882>>x1883))*x1884);

	if (t26 != 16536046482685983281LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x1885 = 22265385;
	int8_t x1886 = INT8_MAX;
	uint8_t x1887 = 2U;
	int16_t x1888 = -17;
	int32_t t27 = -445;

	t27 = ((x1885-(x1886>>x1887))*x1888);

	if (t27 != -378511018) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1905 = 33102687908272LLU;
	uint64_t x1906 = UINT64_MAX;
	uint8_t x1907 = 5U;
	int32_t x1908 = INT32_MAX;
	uint64_t t28 = 3LLU;

	t28 = ((x1905-(x1906>>x1907))*x1908);

	if (t28 != 12752499510304558671LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x1929 = 856624411350LL;
	uint16_t x1931 = 25U;
	volatile int64_t t29 = -14LL;

	t29 = ((x1929-(x1930>>x1931))*x1932);

	if (t29 != -856624411223LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1969 = 6;
	static volatile int64_t x1970 = 18710881613278LL;
	volatile uint8_t x1971 = 4U;
	uint16_t x1972 = 714U;

	t30 = ((x1969-(x1970>>x1971))*x1972);

	if (t30 != -834973091987622LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1973 = INT16_MAX;
	volatile int8_t x1975 = 1;
	volatile uint32_t x1976 = UINT32_MAX;
	uint32_t t31 = 3U;

	t31 = ((x1973-(x1974>>x1975))*x1976);

	if (t31 != 4294934530U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2018 = 254;
	static uint16_t x2019 = 21U;
	int64_t x2020 = -1LL;

	t32 = ((x2017-(x2018>>x2019))*x2020);

	if (t32 != 20LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2317 = INT16_MIN;
	uint8_t x2318 = 8U;
	volatile int32_t t33 = -22394206;

	t33 = ((x2317-(x2318>>x2319))*x2320);

	if (t33 != -26610864) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2437 = 271732933031407119LLU;
	int8_t x2438 = 0;
	static uint32_t x2439 = 2U;
	uint16_t x2440 = 13U;
	volatile uint64_t t34 = 178347217552029393LLU;

	t34 = ((x2437-(x2438>>x2439))*x2440);

	if (t34 != 3532528129408292547LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2545 = -18;
	volatile uint64_t x2546 = UINT64_MAX;
	int16_t x2547 = 8;
	int64_t x2548 = INT64_MAX;
	volatile uint64_t t35 = 411132375073008319LLU;

	t35 = ((x2545-(x2546>>x2547))*x2548);

	if (t35 != 9295429630892703761LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2665 = INT8_MIN;
	static uint64_t x2666 = UINT64_MAX;
	uint32_t x2667 = 5U;
	static int32_t x2668 = -1;
	uint64_t t36 = 466148152353901572LLU;

	t36 = ((x2665-(x2666>>x2667))*x2668);

	if (t36 != 576460752303423615LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2681 = INT16_MIN;
	int16_t x2682 = 3;
	static uint8_t x2683 = 1U;
	int16_t x2684 = 3;

	t37 = ((x2681-(x2682>>x2683))*x2684);

	if (t37 != -98307) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2737 = 90LLU;
	volatile int8_t x2738 = INT8_MAX;
	uint8_t x2739 = 25U;
	static volatile uint16_t x2740 = 19U;
	volatile uint64_t t38 = 350091964LLU;

	t38 = ((x2737-(x2738>>x2739))*x2740);

	if (t38 != 1710LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2745 = INT16_MAX;
	static uint8_t x2746 = UINT8_MAX;
	uint64_t x2747 = 20LLU;
	int16_t x2748 = INT16_MAX;
	volatile int32_t t39 = 21588756;

	t39 = ((x2745-(x2746>>x2747))*x2748);

	if (t39 != 1073676289) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x2753 = 24699548322LLU;
	uint8_t x2755 = 7U;
	static uint8_t x2756 = 50U;

	t40 = ((x2753-(x2754>>x2755))*x2756);

	if (t40 != 1234977416100LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x2773 = 3941U;
	uint64_t x2774 = 76586869659138LLU;
	int8_t x2775 = 2;
	int16_t x2776 = 13;
	uint64_t t41 = 698LLU;

	t41 = ((x2773-(x2774>>x2775))*x2776);

	if (t41 != 18446495166383210657LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2789 = -1;
	uint32_t x2791 = 11U;
	int64_t x2792 = 419908487126LL;
	volatile int64_t t42 = -26695293098825LL;

	t42 = ((x2789-(x2790>>x2791))*x2792);

	if (t42 != -419908487126LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2855 = 0;
	static uint32_t x2856 = 13169563U;

	t43 = ((x2853-(x2854>>x2855))*x2856);

	if (t43 != 1099832761U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x2949 = -992;
	uint32_t x2950 = 94463400U;
	uint16_t x2951 = 4U;
	volatile int64_t t44 = -11848428253LL;

	t44 = ((x2949-(x2950>>x2951))*x2952);

	if (t44 != -60046872788LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x3050 = 193;
	static volatile int8_t x3051 = 1;
	int16_t x3052 = -10;
	static volatile int32_t t45 = 1;

	t45 = ((x3049-(x3050>>x3051))*x3052);

	if (t45 != 970) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint16_t x3062 = UINT16_MAX;
	uint64_t x3063 = 1LLU;
	int32_t x3064 = -1;
	int32_t t46 = -3502312;

	t46 = ((x3061-(x3062>>x3063))*x3064);

	if (t46 != 32512) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x3161 = 349441LL;
	int16_t x3162 = INT16_MAX;
	volatile int8_t x3163 = 5;
	int32_t x3164 = -33592889;

	t47 = ((x3161-(x3162>>x3163))*x3164);

	if (t47 != -11704367199602LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x3173 = 31;
	static int32_t t48 = 17;

	t48 = ((x3173-(x3174>>x3175))*x3176);

	if (t48 != -732380000) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x3337 = 879614U;
	uint8_t x3338 = 6U;
	uint8_t x3339 = 3U;
	uint32_t t49 = 3463527U;

	t49 = ((x3337-(x3338>>x3339))*x3340);

	if (t49 != 1241579520U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3421 = UINT8_MAX;
	uint8_t x3423 = 2U;
	volatile int32_t x3424 = -1;

	t50 = ((x3421-(x3422>>x3423))*x3424);

	if (t50 != -224) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3469 = UINT64_MAX;
	uint64_t x3470 = UINT64_MAX;
	int8_t x3471 = 0;
	int64_t x3472 = INT64_MAX;
	uint64_t t51 = 745LLU;

	t51 = ((x3469-(x3470>>x3471))*x3472);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3577 = INT8_MAX;
	uint8_t x3578 = 120U;
	static uint16_t x3579 = 1U;
	static volatile int64_t t52 = 1946365959LL;

	t52 = ((x3577-(x3578>>x3579))*x3580);

	if (t52 != -9601411684LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x3641 = 108U;
	volatile uint64_t x3642 = UINT64_MAX;
	static volatile int8_t x3644 = -1;

	t53 = ((x3641-(x3642>>x3643))*x3644);

	if (t53 != 144115188075855763LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x3650 = INT32_MAX;
	uint16_t x3651 = 2U;
	volatile uint32_t x3652 = 121U;
	uint32_t t54 = 435U;

	t54 = ((x3649-(x3650>>x3651))*x3652);

	if (t54 != 3762061312U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3733 = -1;
	int8_t x3734 = 1;
	uint32_t x3735 = 2U;
	int32_t t55 = 92206;

	t55 = ((x3733-(x3734>>x3735))*x3736);

	if (t55 != 128) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3854 = 123;
	int8_t x3855 = 29;
	int32_t x3856 = -23;
	volatile int32_t t56 = 65724185;

	t56 = ((x3853-(x3854>>x3855))*x3856);

	if (t56 != 23) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3902 = 50LLU;
	uint64_t x3903 = 2LLU;
	int64_t x3904 = INT64_MAX;
	static uint64_t t57 = 55124467052219LLU;

	t57 = ((x3901-(x3902>>x3903))*x3904);

	if (t57 != 9223372036854775820LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x4001 = INT8_MIN;
	static uint32_t x4002 = 1968036133U;
	static uint64_t x4004 = UINT64_MAX;
	uint64_t t58 = 3LLU;

	t58 = ((x4001-(x4002>>x4003))*x4004);

	if (t58 != 18446744070398602514LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x4106 = INT16_MAX;
	int8_t x4107 = 6;
	uint64_t t59 = 25LLU;

	t59 = ((x4105-(x4106>>x4107))*x4108);

	if (t59 != 18446742604548405849LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x4125 = 28;
	int8_t x4126 = 1;
	int8_t x4127 = 3;
	uint64_t x4128 = 63558091351LLU;
	volatile uint64_t t60 = 8605802LLU;

	t60 = ((x4125-(x4126>>x4127))*x4128);

	if (t60 != 1779626557828LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4141 = INT8_MAX;
	static uint8_t x4144 = UINT8_MAX;
	volatile uint64_t t61 = 63962224386793LLU;

	t61 = ((x4141-(x4142>>x4143))*x4144);

	if (t61 != 28815LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x4173 = UINT64_MAX;
	int8_t x4174 = INT8_MAX;
	static uint8_t x4175 = 7U;
	static int32_t x4176 = INT32_MAX;
	uint64_t t62 = 1LLU;

	t62 = ((x4173-(x4174>>x4175))*x4176);

	if (t62 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x4369 = 16U;
	int8_t x4370 = 28;
	int8_t x4372 = -1;
	int32_t t63 = -1463;

	t63 = ((x4369-(x4370>>x4371))*x4372);

	if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x4650 = 2U;
	uint8_t x4651 = 27U;
	uint32_t x4652 = 2U;
	uint32_t t64 = 51031U;

	t64 = ((x4649-(x4650>>x4651))*x4652);

	if (t64 != 22U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4681 = -13510;
	int64_t x4682 = INT64_MAX;
	uint8_t x4683 = 3U;
	int16_t x4684 = -1;
	volatile int64_t t65 = -16277187915976LL;

	t65 = ((x4681-(x4682>>x4683))*x4684);

	if (t65 != 1152921504606860485LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x4745 = -1;
	static uint64_t x4746 = UINT64_MAX;
	static uint8_t x4747 = 22U;
	int64_t x4748 = -213009385847025567LL;

	t66 = ((x4745-(x4746>>x4747))*x4748);

	if (t66 != 17419496748157501440LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x4761 = -1LL;
	uint64_t x4762 = UINT64_MAX;
	uint8_t x4763 = 1U;
	static uint32_t x4764 = UINT32_MAX;
	static volatile uint64_t t67 = 4686968929021669710LLU;

	t67 = ((x4761-(x4762>>x4763))*x4764);

	if (t67 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x4766 = INT16_MAX;
	uint64_t x4767 = 2LLU;
	uint64_t x4768 = UINT64_MAX;
	uint64_t t68 = 1248360LLU;

	t68 = ((x4765-(x4766>>x4767))*x4768);

	if (t68 != 8192LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4833 = INT8_MAX;
	int16_t x4834 = 42;
	static uint64_t x4836 = 80496LLU;
	volatile uint64_t t69 = 467601424LLU;

	t69 = ((x4833-(x4834>>x4835))*x4836);

	if (t69 != 10222992LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4838 = UINT64_MAX;
	static volatile int32_t x4839 = 0;
	int16_t x4840 = INT16_MIN;

	t70 = ((x4837-(x4838>>x4839))*x4840);

	if (t70 != 18446744073701163008LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x4877 = 10540238U;
	uint16_t x4878 = UINT16_MAX;
	volatile uint8_t x4879 = 7U;

	t71 = ((x4877-(x4878>>x4879))*x4880);

	if (t71 != 3024901649U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x4913 = INT64_MAX;
	uint64_t x4914 = UINT64_MAX;
	uint16_t x4915 = 35U;
	static int32_t x4916 = -11;

	t72 = ((x4913-(x4914>>x4915))*x4916);

	if (t72 != 9223372042760355840LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4973 = INT8_MIN;
	uint16_t x4975 = 6U;
	static volatile int32_t t73 = -14485;

	t73 = ((x4973-(x4974>>x4975))*x4976);

	if (t73 != -838863975) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x5054 = INT32_MAX;
	volatile int8_t x5055 = 8;
	volatile uint16_t x5056 = UINT16_MAX;

	t74 = ((x5053-(x5054>>x5055))*x5056);

	if (t74 != 18446743523962126336LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x5273 = 5015U;
	int8_t x5274 = 0;
	volatile int8_t x5275 = 0;
	int16_t x5276 = 6739;
	volatile int32_t t75 = 30765;

	t75 = ((x5273-(x5274>>x5275))*x5276);

	if (t75 != 33796085) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x5337 = 0U;
	uint64_t x5338 = UINT64_MAX;
	int32_t x5340 = INT32_MIN;
	uint64_t t76 = 14580961233LLU;

	t76 = ((x5337-(x5338>>x5339))*x5340);

	if (t76 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x5370 = UINT8_MAX;
	int8_t x5371 = 6;

	t77 = ((x5369-(x5370>>x5371))*x5372);

	if (t77 != 7068U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x5589 = 53494590LLU;
	static int32_t x5590 = INT32_MAX;
	uint8_t x5591 = 28U;
	int8_t x5592 = 50;

	t78 = ((x5589-(x5590>>x5591))*x5592);

	if (t78 != 2674729150LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x5593 = UINT64_MAX;
	uint8_t x5595 = 2U;
	static uint64_t t79 = 440210090LLU;

	t79 = ((x5593-(x5594>>x5595))*x5596);

	if (t79 != 1073741824LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5665 = 6U;
	static int64_t x5668 = -238495489LL;
	int64_t t80 = 13LL;

	t80 = ((x5665-(x5666>>x5667))*x5668);

	if (t80 != -1430972934LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x5693 = 0U;
	int8_t x5694 = INT8_MAX;
	volatile uint16_t x5695 = 2U;
	int16_t x5696 = INT16_MAX;
	int32_t t81 = 5;

	t81 = ((x5693-(x5694>>x5695))*x5696);

	if (t81 != -1015777) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x5885 = 36;
	uint32_t x5886 = 56268986U;
	int8_t x5887 = 9;
	volatile uint32_t t82 = 4U;

	t82 = ((x5885-(x5886>>x5887))*x5888);

	if (t82 != 14062592U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x6001 = 74633770056098492LLU;
	volatile int16_t x6002 = INT16_MAX;
	int16_t x6003 = 14;
	volatile int32_t x6004 = -246645;
	volatile uint64_t t83 = 635104LLU;

	t83 = ((x6001-(x6002>>x6003))*x6004);

	if (t83 != 1804370075720200073LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x6073 = INT64_MAX;
	int32_t x6074 = 997496;
	uint16_t x6075 = 14U;
	static uint64_t t84 = 6560705876617237LLU;

	t84 = ((x6073-(x6074>>x6075))*x6076);

	if (t84 != 9223372036854775869LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x6086 = 214843947944LLU;
	static uint8_t x6087 = 11U;
	static volatile uint64_t t85 = 2LLU;

	t85 = ((x6085-(x6086>>x6087))*x6088);

	if (t85 != 9223372039107163727LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x6189 = 4497656736136096LLU;
	uint32_t x6190 = 0U;
	int8_t x6191 = 2;
	uint8_t x6192 = UINT8_MAX;
	volatile uint64_t t86 = 200742165189774981LLU;

	t86 = ((x6189-(x6190>>x6191))*x6192);

	if (t86 != 1146902467714704480LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x6293 = 3U;

	t87 = ((x6293-(x6294>>x6295))*x6296);

	if (t87 != 42963522LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x6418 = 0U;
	volatile int64_t x6419 = 0LL;
	int16_t x6420 = -1;
	volatile int32_t t88 = 14964474;

	t88 = ((x6417-(x6418>>x6419))*x6420);

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x6454 = INT16_MAX;
	volatile uint64_t x6455 = 0LLU;
	static uint32_t x6456 = 338931233U;
	uint64_t t89 = 5287572459LLU;

	t89 = ((x6453-(x6454>>x6455))*x6456);

	if (t89 != 18446732967610908672LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x6593 = 29U;
	uint64_t x6594 = 228733979844208275LLU;
	static int32_t x6595 = 35;
	int8_t x6596 = -1;
	volatile uint64_t t90 = 13039048483200LLU;

	t90 = ((x6593-(x6594>>x6595))*x6596);

	if (t90 != 6657005LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x6621 = INT8_MAX;
	volatile int32_t x6624 = 6907918;
	static volatile uint32_t t91 = 96259994U;

	t91 = ((x6621-(x6622>>x6623))*x6624);

	if (t91 != 877305586U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x6646 = UINT32_MAX;
	static int8_t x6647 = 2;
	int32_t x6648 = INT32_MAX;
	volatile uint32_t t92 = 14U;

	t92 = ((x6645-(x6646>>x6647))*x6648);

	if (t92 != 1073741823U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6717 = -1;
	static uint16_t x6718 = 6654U;
	static volatile uint32_t x6719 = 2U;
	uint8_t x6720 = 2U;
	int32_t t93 = 58307;

	t93 = ((x6717-(x6718>>x6719))*x6720);

	if (t93 != -3328) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x7005 = 1878LL;
	uint32_t x7006 = 19904U;
	int16_t x7007 = 0;
	uint64_t t94 = 28933166776370657LLU;

	t94 = ((x7005-(x7006>>x7007))*x7008);

	if (t94 != 18026LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x7021 = INT64_MAX;
	uint64_t x7022 = 51748LLU;
	int8_t x7023 = 29;
	int32_t x7024 = -192188;

	t95 = ((x7021-(x7022>>x7023))*x7024);

	if (t95 != 192188LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x7225 = INT8_MIN;
	static int64_t x7226 = INT64_MAX;
	uint8_t x7227 = 1U;
	static volatile uint64_t x7228 = UINT64_MAX;
	uint64_t t96 = 7047LLU;

	t96 = ((x7225-(x7226>>x7227))*x7228);

	if (t96 != 4611686018427388031LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x7245 = INT16_MAX;
	static int32_t x7246 = INT32_MAX;
	static int8_t x7247 = 0;
	int8_t x7248 = -1;
	volatile int32_t t97 = -18;

	t97 = ((x7245-(x7246>>x7247))*x7248);

	if (t97 != 2147450880) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x7281 = UINT16_MAX;
	uint64_t x7282 = 18134956286129LLU;
	static int8_t x7283 = 3;
	static volatile uint8_t x7284 = UINT8_MAX;
	uint64_t t98 = 0LLU;

	t98 = ((x7281-(x7282>>x7283))*x7284);

	if (t98 != 18446166021994642711LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x7301 = 16935612881257535LLU;
	int64_t x7304 = INT64_MIN;

	t99 = ((x7301-(x7302>>x7303))*x7304);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

