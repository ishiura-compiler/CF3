#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x21 = 5041U;
volatile int32_t t1 = 3285888;
volatile uint16_t x150 = 58U;
uint32_t t4 = 1691U;
uint64_t x189 = 80537118LLU;
uint64_t t5 = 865LLU;
static uint16_t x197 = 13U;
int32_t x242 = INT32_MIN;
uint8_t x249 = UINT8_MAX;
int64_t t8 = 32337411955611LL;
uint8_t x261 = 75U;
static uint16_t x262 = UINT16_MAX;
static volatile uint32_t x264 = 304735U;
int32_t t11 = 7294113;
int8_t x294 = 2;
int16_t x296 = INT16_MIN;
static volatile int32_t t14 = 2630;
uint16_t x371 = 63U;
static volatile uint32_t x409 = UINT32_MAX;
int16_t x411 = INT16_MAX;
int16_t x490 = 4;
int64_t x491 = INT64_MIN;
volatile int32_t t19 = 7323228;
int16_t x498 = 149;
int64_t x499 = -447LL;
int16_t x539 = INT16_MIN;
int16_t x685 = 412;
static int32_t x686 = -1;
uint64_t x731 = 267210819948219613LLU;
static int64_t x732 = INT64_MAX;
volatile int16_t x736 = -9882;
volatile int32_t t26 = 12881;
static int64_t x788 = -1LL;
uint64_t x813 = 1042480187LLU;
uint8_t x816 = 9U;
int32_t t30 = -30;
volatile int64_t x856 = 468451353602LL;
int64_t t32 = 1458216147403LL;
uint16_t x882 = 11U;
int32_t x883 = INT32_MAX;
volatile int16_t x914 = INT16_MAX;
static int32_t t36 = 1;
uint32_t x1009 = UINT32_MAX;
static uint32_t x1011 = 15U;
uint8_t x1016 = UINT8_MAX;
volatile int32_t t38 = -45;
uint32_t x1045 = 350051701U;
int16_t x1080 = INT16_MIN;
int32_t x1088 = -5;
static uint64_t x1097 = UINT64_MAX;
static uint64_t x1169 = 10766009768041881LLU;
volatile int8_t x1179 = INT8_MIN;
int64_t x1180 = -216596710112LL;
uint64_t x1185 = UINT64_MAX;
volatile int8_t x1186 = INT8_MAX;
volatile uint64_t t49 = 872715323956932986LLU;
uint32_t x1231 = 48441733U;
uint32_t x1266 = 0U;
static volatile uint16_t x1285 = 5U;
uint16_t x1295 = UINT16_MAX;
volatile int8_t x1309 = 0;
uint16_t x1311 = 82U;
int8_t x1348 = -1;
uint32_t t56 = 90967939U;
int64_t x1402 = INT64_MIN;
volatile int32_t t57 = -288540350;
volatile uint64_t t58 = 104062LLU;
uint16_t x1418 = 3821U;
int64_t x1419 = INT64_MIN;
static volatile int64_t x1449 = INT64_MAX;
int64_t x1451 = INT64_MIN;
volatile uint32_t x1473 = 112374U;
static volatile int32_t t62 = -91;
int32_t t63 = 20429465;
volatile int32_t x1611 = -1;
volatile uint64_t x1612 = 322593893LLU;
int8_t x1618 = INT8_MAX;
int16_t x1620 = INT16_MAX;
uint16_t x1641 = 14241U;
int16_t x1643 = INT16_MIN;
int16_t x1658 = INT16_MIN;
volatile int8_t x1660 = 5;
int8_t x1718 = INT8_MAX;
uint64_t t74 = 59789419629604152LLU;
static int8_t x1877 = 16;
static uint8_t x1878 = 25U;
int8_t x1879 = -1;
uint8_t x1909 = UINT8_MAX;
volatile int8_t x1911 = 0;
int32_t t78 = 1011604;
uint8_t x1914 = 3U;
volatile int32_t x1961 = 7;
int32_t x1963 = 618;
int16_t x1967 = INT16_MIN;
uint64_t t81 = 998919432LLU;
int32_t x1988 = INT32_MIN;
uint32_t x1992 = UINT32_MAX;
static uint8_t x1997 = 12U;
int16_t x2023 = INT16_MAX;
volatile uint16_t x2055 = 906U;
volatile int16_t x2118 = INT16_MAX;
uint8_t x2145 = UINT8_MAX;
volatile int64_t x2150 = 11868998533LL;
int16_t x2158 = 28;
uint8_t x2159 = UINT8_MAX;
int64_t x2160 = INT64_MAX;
uint8_t x2176 = 5U;
static int16_t x2178 = 4;
uint32_t x2179 = 153056679U;
int64_t x2184 = -1LL;
volatile uint64_t t96 = 1LLU;
uint16_t x2186 = 3U;
uint32_t x2191 = 13U;
static uint64_t t98 = 64LLU;


void f0(void) {
	static volatile uint64_t x1 = UINT64_MAX;
	int8_t x2 = 1;
	int16_t x3 = INT16_MIN;
	int32_t x4 = INT32_MAX;
	static volatile uint64_t t0 = 1638748185887LLU;

	t0 = ((x1<<(x2&x3))-x4);

	if (t0 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x22 = -1LL;
	static volatile uint16_t x23 = 3U;
	volatile uint8_t x24 = UINT8_MAX;

	t1 = ((x21<<(x22&x23))-x24);

	if (t1 != 40073) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x93 = 7LLU;
	uint8_t x94 = 2U;
	int8_t x95 = 31;
	uint16_t x96 = 0U;
	uint64_t t2 = 134438266703020905LLU;

	t2 = ((x93<<(x94&x95))-x96);

	if (t2 != 28LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x97 = 1962;
	uint16_t x98 = 1U;
	int64_t x99 = INT64_MAX;
	volatile uint64_t x100 = 5930359229LLU;
	volatile uint64_t t3 = 86242730790LLU;

	t3 = ((x97<<(x98&x99))-x100);

	if (t3 != 18446744067779196311LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x149 = 3U;
	int64_t x151 = 1005307702723LL;
	uint8_t x152 = UINT8_MAX;

	t4 = ((x149<<(x150&x151))-x152);

	if (t4 != 4294967053U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x190 = 0U;
	int8_t x191 = -2;
	int8_t x192 = 0;

	t5 = ((x189<<(x190&x191))-x192);

	if (t5 != 80537118LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x198 = UINT32_MAX;
	static uint8_t x199 = 9U;
	static volatile uint16_t x200 = UINT16_MAX;
	volatile int32_t t6 = 70;

	t6 = ((x197<<(x198&x199))-x200);

	if (t6 != -58879) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x241 = 58U;
	int16_t x243 = 61;
	volatile int16_t x244 = -1;
	int32_t t7 = 272;

	t7 = ((x241<<(x242&x243))-x244);

	if (t7 != 59) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x250 = 0U;
	volatile uint16_t x251 = 173U;
	volatile int64_t x252 = -3649359627878042286LL;

	t8 = ((x249<<(x250&x251))-x252);

	if (t8 != 3649359627878042541LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x257 = 114U;
	int16_t x258 = 1;
	static int64_t x259 = INT64_MIN;
	int16_t x260 = INT16_MIN;
	int32_t t9 = 0;

	t9 = ((x257<<(x258&x259))-x260);

	if (t9 != 32882) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x263 = INT64_MIN;
	uint32_t t10 = 6921U;

	t10 = ((x261<<(x262&x263))-x264);

	if (t10 != 4294662636U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x265 = 4692U;
	uint32_t x266 = 8194430U;
	int8_t x267 = 15;
	int8_t x268 = INT8_MIN;

	t11 = ((x265<<(x266&x267))-x268);

	if (t11 != 76873856) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x293 = 0;
	uint32_t x295 = 1709723836U;
	volatile int32_t t12 = -22470;

	t12 = ((x293<<(x294&x295))-x296);

	if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x341 = 50;
	uint16_t x342 = 8U;
	int16_t x343 = -1;
	int64_t x344 = 33900612783783LL;
	int64_t t13 = -15826338671644LL;

	t13 = ((x341<<(x342&x343))-x344);

	if (t13 != -33900612770983LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x349 = 21;
	int16_t x350 = 3;
	static uint64_t x351 = 381LLU;
	int32_t x352 = -4780;

	t14 = ((x349<<(x350&x351))-x352);

	if (t14 != 4822) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x369 = 163494;
	static int64_t x370 = INT64_MIN;
	int8_t x372 = -1;
	int32_t t15 = 231637;

	t15 = ((x369<<(x370&x371))-x372);

	if (t15 != 163495) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x385 = UINT16_MAX;
	int8_t x386 = 15;
	int16_t x387 = 503;
	static int16_t x388 = 3;
	int32_t t16 = -63867610;

	t16 = ((x385<<(x386&x387))-x388);

	if (t16 != 8388477) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x410 = INT32_MIN;
	uint32_t x412 = 5U;
	volatile uint32_t t17 = 212985915U;

	t17 = ((x409<<(x410&x411))-x412);

	if (t17 != 4294967290U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x425 = 192661;
	int16_t x426 = INT16_MAX;
	volatile uint8_t x427 = 9U;
	int16_t x428 = -1;
	int32_t t18 = 442540;

	t18 = ((x425<<(x426&x427))-x428);

	if (t18 != 98642433) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x489 = INT32_MAX;
	static uint16_t x492 = UINT16_MAX;

	t19 = ((x489<<(x490&x491))-x492);

	if (t19 != 2147418112) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x493 = UINT32_MAX;
	volatile int8_t x494 = INT8_MIN;
	volatile uint8_t x495 = 4U;
	uint16_t x496 = 371U;
	uint32_t t20 = 16455763U;

	t20 = ((x493<<(x494&x495))-x496);

	if (t20 != 4294966924U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x497 = 563526254;
	int16_t x500 = -15188;
	volatile int32_t t21 = -1;

	t21 = ((x497<<(x498&x499))-x500);

	if (t21 != 1127067696) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x537 = 750;
	int32_t x538 = 21134;
	volatile int64_t x540 = -159LL;
	static int64_t t22 = 3LL;

	t22 = ((x537<<(x538&x539))-x540);

	if (t22 != 909LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x665 = UINT16_MAX;
	int32_t x666 = INT32_MIN;
	static volatile int64_t x667 = 294105LL;
	static uint32_t x668 = 1U;
	uint32_t t23 = 0U;

	t23 = ((x665<<(x666&x667))-x668);

	if (t23 != 65534U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x687 = 1U;
	volatile int16_t x688 = INT16_MAX;
	int32_t t24 = -8799;

	t24 = ((x685<<(x686&x687))-x688);

	if (t24 != -31943) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x729 = 1844582553757394330LLU;
	int64_t x730 = INT64_MIN;
	uint64_t t25 = 119078660LLU;

	t25 = ((x729<<(x730&x731))-x732);

	if (t25 != 11067954590612170139LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x733 = INT16_MAX;
	int64_t x734 = INT64_MIN;
	static int32_t x735 = INT32_MAX;

	t26 = ((x733<<(x734&x735))-x736);

	if (t26 != 42649) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x785 = 19339U;
	int32_t x786 = INT32_MIN;
	static int64_t x787 = 380927LL;
	volatile int64_t t27 = -2062150LL;

	t27 = ((x785<<(x786&x787))-x788);

	if (t27 != 19340LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x789 = UINT64_MAX;
	static int16_t x790 = INT16_MAX;
	volatile int16_t x791 = INT16_MIN;
	volatile int16_t x792 = -1;
	static uint64_t t28 = 4256576443222LLU;

	t28 = ((x789<<(x790&x791))-x792);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x814 = 4U;
	static uint8_t x815 = 71U;
	uint64_t t29 = 4311LLU;

	t29 = ((x813<<(x814&x815))-x816);

	if (t29 != 16679682983LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x837 = 1;
	uint8_t x838 = 8U;
	int32_t x839 = 61751817;
	uint8_t x840 = UINT8_MAX;

	t30 = ((x837<<(x838&x839))-x840);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x845 = 5066982;
	int32_t x846 = 0;
	int64_t x847 = INT64_MIN;
	int8_t x848 = -1;
	int32_t t31 = -5968;

	t31 = ((x845<<(x846&x847))-x848);

	if (t31 != 5066983) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x853 = 16062403U;
	volatile int16_t x854 = INT16_MIN;
	static volatile int8_t x855 = INT8_MAX;

	t32 = ((x853<<(x854&x855))-x856);

	if (t32 != -468435291199LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x881 = UINT64_MAX;
	uint32_t x884 = 3U;
	volatile uint64_t t33 = 932322674285202LLU;

	t33 = ((x881<<(x882&x883))-x884);

	if (t33 != 18446744073709549565LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x905 = INT8_MAX;
	static uint8_t x906 = 1U;
	int8_t x907 = INT8_MIN;
	int16_t x908 = INT16_MIN;
	int32_t t34 = -38;

	t34 = ((x905<<(x906&x907))-x908);

	if (t34 != 32895) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x913 = 5211272U;
	int16_t x915 = INT16_MIN;
	uint16_t x916 = 1U;
	static volatile uint32_t t35 = 405915U;

	t35 = ((x913<<(x914&x915))-x916);

	if (t35 != 5211271U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x917 = 4U;
	static int8_t x918 = 0;
	int8_t x919 = 13;
	int8_t x920 = INT8_MIN;

	t36 = ((x917<<(x918&x919))-x920);

	if (t36 != 132) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1010 = -139246;
	volatile int8_t x1012 = -1;
	volatile uint32_t t37 = 5355537U;

	t37 = ((x1009<<(x1010&x1011))-x1012);

	if (t37 != 4294967293U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1013 = 0U;
	uint8_t x1014 = 63U;
	volatile uint8_t x1015 = 7U;

	t38 = ((x1013<<(x1014&x1015))-x1016);

	if (t38 != -255) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1033 = 24U;
	static volatile int32_t x1034 = 0;
	uint32_t x1035 = 1017332U;
	static int16_t x1036 = 0;
	int32_t t39 = -8173505;

	t39 = ((x1033<<(x1034&x1035))-x1036);

	if (t39 != 24) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x1046 = INT64_MIN;
	static int32_t x1047 = INT32_MAX;
	int16_t x1048 = -2469;
	uint32_t t40 = 213397110U;

	t40 = ((x1045<<(x1046&x1047))-x1048);

	if (t40 != 350054170U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1057 = 2112458017465752LLU;
	uint32_t x1058 = 718U;
	volatile uint32_t x1059 = 6U;
	int32_t x1060 = -32636479;
	uint64_t t41 = 10134910594450LLU;

	t41 = ((x1057<<(x1058&x1059))-x1060);

	if (t41 != 135197313150444607LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x1061 = 290LLU;
	uint16_t x1062 = 1094U;
	uint16_t x1063 = 315U;
	int32_t x1064 = INT32_MIN;
	volatile uint64_t t42 = 173178054098859702LLU;

	t42 = ((x1061<<(x1062&x1063))-x1064);

	if (t42 != 2147484808LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1077 = UINT32_MAX;
	int32_t x1078 = 719540;
	int64_t x1079 = INT64_MIN;
	static volatile uint32_t t43 = 25933U;

	t43 = ((x1077<<(x1078&x1079))-x1080);

	if (t43 != 32767U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1085 = UINT64_MAX;
	int64_t x1086 = INT64_MIN;
	static uint16_t x1087 = UINT16_MAX;
	volatile uint64_t t44 = 21639309976680LLU;

	t44 = ((x1085<<(x1086&x1087))-x1088);

	if (t44 != 4LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x1098 = UINT8_MAX;
	uint8_t x1099 = 4U;
	uint8_t x1100 = 11U;
	uint64_t t45 = 57LLU;

	t45 = ((x1097<<(x1098&x1099))-x1100);

	if (t45 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1121 = UINT16_MAX;
	int8_t x1122 = 5;
	int16_t x1123 = INT16_MAX;
	int64_t x1124 = -1LL;
	static int64_t t46 = -132692822428946LL;

	t46 = ((x1121<<(x1122&x1123))-x1124);

	if (t46 != 2097121LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x1170 = INT16_MIN;
	volatile int16_t x1171 = INT16_MAX;
	int32_t x1172 = 293478;
	volatile uint64_t t47 = 22378232044093LLU;

	t47 = ((x1169<<(x1170&x1171))-x1172);

	if (t47 != 10766009767748403LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1177 = INT32_MAX;
	volatile int8_t x1178 = INT8_MAX;
	volatile int64_t t48 = 246399755675LL;

	t48 = ((x1177<<(x1178&x1179))-x1180);

	if (t48 != 218744193759LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x1187 = 243220870LLU;
	int16_t x1188 = INT16_MIN;

	t49 = ((x1185<<(x1186&x1187))-x1188);

	if (t49 != 32704LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x1229 = UINT64_MAX;
	int8_t x1230 = 63;
	uint32_t x1232 = UINT32_MAX;
	static volatile uint64_t t50 = 360736306932LLU;

	t50 = ((x1229<<(x1230&x1231))-x1232);

	if (t50 != 18446744069414584289LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1265 = 21;
	int16_t x1267 = -1;
	int8_t x1268 = INT8_MAX;
	int32_t t51 = -11485799;

	t51 = ((x1265<<(x1266&x1267))-x1268);

	if (t51 != -106) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x1286 = INT64_MIN;
	int32_t x1287 = INT32_MAX;
	uint8_t x1288 = 0U;
	volatile int32_t t52 = 1;

	t52 = ((x1285<<(x1286&x1287))-x1288);

	if (t52 != 5) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x1293 = 224LL;
	static int64_t x1294 = 32LL;
	static int16_t x1296 = -7;
	int64_t t53 = 4013LL;

	t53 = ((x1293<<(x1294&x1295))-x1296);

	if (t53 != 962072674311LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x1310 = INT32_MIN;
	volatile int64_t x1312 = INT64_MAX;
	int64_t t54 = 32033LL;

	t54 = ((x1309<<(x1310&x1311))-x1312);

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1345 = UINT8_MAX;
	uint8_t x1346 = 0U;
	static int8_t x1347 = -13;
	volatile int32_t t55 = 7136;

	t55 = ((x1345<<(x1346&x1347))-x1348);

	if (t55 != 256) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x1397 = UINT32_MAX;
	uint8_t x1398 = 5U;
	int8_t x1399 = -18;
	volatile int32_t x1400 = INT32_MAX;

	t56 = ((x1397<<(x1398&x1399))-x1400);

	if (t56 != 2147483633U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1401 = INT8_MAX;
	volatile int16_t x1403 = INT16_MAX;
	volatile int32_t x1404 = 9291;

	t57 = ((x1401<<(x1402&x1403))-x1404);

	if (t57 != -9164) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x1409 = UINT64_MAX;
	int8_t x1410 = 61;
	uint64_t x1411 = UINT64_MAX;
	static int8_t x1412 = INT8_MIN;

	t58 = ((x1409<<(x1410&x1411))-x1412);

	if (t58 != 16140901064495857792LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x1417 = UINT8_MAX;
	volatile int16_t x1420 = INT16_MIN;
	int32_t t59 = 720417;

	t59 = ((x1417<<(x1418&x1419))-x1420);

	if (t59 != 33023) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x1450 = UINT32_MAX;
	static uint8_t x1452 = 0U;
	volatile int64_t t60 = INT64_MAX;

	t60 = ((x1449<<(x1450&x1451))-x1452);

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1474 = INT32_MIN;
	static uint8_t x1475 = 57U;
	int16_t x1476 = 1526;
	volatile uint32_t t61 = 1U;

	t61 = ((x1473<<(x1474&x1475))-x1476);

	if (t61 != 110848U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1489 = 41;
	uint8_t x1490 = 1U;
	uint16_t x1491 = 20278U;
	static uint8_t x1492 = UINT8_MAX;

	t62 = ((x1489<<(x1490&x1491))-x1492);

	if (t62 != -214) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1565 = INT16_MAX;
	int16_t x1566 = 0;
	volatile int16_t x1567 = INT16_MAX;
	int8_t x1568 = INT8_MIN;

	t63 = ((x1565<<(x1566&x1567))-x1568);

	if (t63 != 32895) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x1577 = UINT32_MAX;
	int64_t x1578 = INT64_MIN;
	uint64_t x1579 = 6245LLU;
	uint32_t x1580 = 5758200U;
	volatile uint32_t t64 = 22028U;

	t64 = ((x1577<<(x1578&x1579))-x1580);

	if (t64 != 4289209095U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x1609 = 16U;
	uint16_t x1610 = 8U;
	uint64_t t65 = 5548LLU;

	t65 = ((x1609<<(x1610&x1611))-x1612);

	if (t65 != 18446744073386961819LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x1617 = INT8_MAX;
	volatile int64_t x1619 = INT64_MIN;
	int32_t t66 = 971479;

	t66 = ((x1617<<(x1618&x1619))-x1620);

	if (t66 != -32640) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1642 = 6LL;
	int8_t x1644 = INT8_MIN;
	int32_t t67 = 47;

	t67 = ((x1641<<(x1642&x1643))-x1644);

	if (t67 != 14369) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x1657 = UINT16_MAX;
	static int16_t x1659 = INT16_MAX;
	int32_t t68 = -129;

	t68 = ((x1657<<(x1658&x1659))-x1660);

	if (t68 != 65530) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x1665 = 515U;
	static int8_t x1666 = -19;
	uint32_t x1667 = 24U;
	uint32_t x1668 = UINT32_MAX;
	uint32_t t69 = 5340192U;

	t69 = ((x1665<<(x1666&x1667))-x1668);

	if (t69 != 131841U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x1669 = 3515;
	int64_t x1670 = INT64_MIN;
	int16_t x1671 = INT16_MAX;
	int16_t x1672 = INT16_MIN;
	int32_t t70 = 550;

	t70 = ((x1669<<(x1670&x1671))-x1672);

	if (t70 != 36283) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1677 = 31;
	static volatile int8_t x1678 = -1;
	int8_t x1679 = 1;
	volatile uint16_t x1680 = 234U;
	volatile int32_t t71 = 178;

	t71 = ((x1677<<(x1678&x1679))-x1680);

	if (t71 != -172) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x1705 = UINT8_MAX;
	volatile int32_t x1706 = INT32_MIN;
	volatile uint16_t x1707 = UINT16_MAX;
	int16_t x1708 = 0;
	volatile int32_t t72 = -14886;

	t72 = ((x1705<<(x1706&x1707))-x1708);

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1717 = 36U;
	int16_t x1719 = INT16_MIN;
	uint16_t x1720 = 3U;
	int32_t t73 = -914689849;

	t73 = ((x1717<<(x1718&x1719))-x1720);

	if (t73 != 33) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x1721 = 2276521185223226LLU;
	volatile uint32_t x1722 = 452647249U;
	uint8_t x1723 = 1U;
	int8_t x1724 = 1;

	t74 = ((x1721<<(x1722&x1723))-x1724);

	if (t74 != 4553042370446451LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x1765 = UINT64_MAX;
	int32_t x1766 = INT32_MIN;
	uint8_t x1767 = UINT8_MAX;
	int64_t x1768 = -1LL;
	uint64_t t75 = 148017304LLU;

	t75 = ((x1765<<(x1766&x1767))-x1768);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x1861 = 130767146865801LLU;
	uint64_t x1862 = UINT64_MAX;
	int8_t x1863 = 4;
	int8_t x1864 = INT8_MAX;
	static uint64_t t76 = 347306321166LLU;

	t76 = ((x1861<<(x1862&x1863))-x1864);

	if (t76 != 2092274349852689LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x1880 = INT64_MAX;
	static volatile int64_t t77 = 1093229927LL;

	t77 = ((x1877<<(x1878&x1879))-x1880);

	if (t77 != -9223372036317904895LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x1910 = INT64_MIN;
	static int16_t x1912 = -1;

	t78 = ((x1909<<(x1910&x1911))-x1912);

	if (t78 != 256) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1913 = INT16_MAX;
	int32_t x1915 = 1404;
	static int32_t x1916 = 17615;
	volatile int32_t t79 = 17;

	t79 = ((x1913<<(x1914&x1915))-x1916);

	if (t79 != 15152) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x1962 = 0U;
	static int16_t x1964 = -1;
	int32_t t80 = -1;

	t80 = ((x1961<<(x1962&x1963))-x1964);

	if (t80 != 8) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x1965 = INT16_MAX;
	static uint16_t x1966 = 8U;
	static uint64_t x1968 = 6LLU;

	t81 = ((x1965<<(x1966&x1967))-x1968);

	if (t81 != 32761LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x1985 = 68890670813939LL;
	uint16_t x1986 = 2692U;
	static uint16_t x1987 = 30U;
	int64_t t82 = 3224913662234LL;

	t82 = ((x1985<<(x1986&x1987))-x1988);

	if (t82 != 1102252880506672LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x1989 = 15U;
	int8_t x1990 = INT8_MAX;
	static int8_t x1991 = INT8_MIN;
	volatile uint32_t t83 = 8271U;

	t83 = ((x1989<<(x1990&x1991))-x1992);

	if (t83 != 16U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1993 = INT32_MAX;
	uint8_t x1994 = 1U;
	volatile uint16_t x1995 = 42U;
	volatile int32_t x1996 = INT32_MAX;
	int32_t t84 = 207;

	t84 = ((x1993<<(x1994&x1995))-x1996);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x1998 = 5640;
	uint8_t x1999 = UINT8_MAX;
	static uint16_t x2000 = 43U;
	int32_t t85 = 4025340;

	t85 = ((x1997<<(x1998&x1999))-x2000);

	if (t85 != 3029) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x2021 = 3016384;
	int32_t x2022 = INT32_MIN;
	uint8_t x2024 = 1U;
	static int32_t t86 = -4;

	t86 = ((x2021<<(x2022&x2023))-x2024);

	if (t86 != 3016383) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x2053 = UINT8_MAX;
	int64_t x2054 = INT64_MIN;
	int32_t x2056 = -1;
	volatile int32_t t87 = 72963538;

	t87 = ((x2053<<(x2054&x2055))-x2056);

	if (t87 != 256) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x2093 = 6;
	static volatile int64_t x2094 = INT64_MIN;
	int32_t x2095 = 184876;
	volatile uint8_t x2096 = UINT8_MAX;
	int32_t t88 = 77173;

	t88 = ((x2093<<(x2094&x2095))-x2096);

	if (t88 != -249) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x2117 = 1LL;
	int32_t x2119 = INT32_MIN;
	int64_t x2120 = INT64_MAX;
	int64_t t89 = -4184599255LL;

	t89 = ((x2117<<(x2118&x2119))-x2120);

	if (t89 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x2133 = 29721U;
	int16_t x2134 = 0;
	volatile uint64_t x2135 = 3462310193586LLU;
	static int64_t x2136 = INT64_MAX;
	int64_t t90 = -912LL;

	t90 = ((x2133<<(x2134&x2135))-x2136);

	if (t90 != -9223372036854746086LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2146 = 1;
	static int64_t x2147 = INT64_MAX;
	int32_t x2148 = -3;
	volatile int32_t t91 = 5;

	t91 = ((x2145<<(x2146&x2147))-x2148);

	if (t91 != 513) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x2149 = INT8_MAX;
	int16_t x2151 = 5123;
	static uint8_t x2152 = 1U;
	int32_t t92 = 6;

	t92 = ((x2149<<(x2150&x2151))-x2152);

	if (t92 != 253) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x2157 = UINT64_MAX;
	volatile uint64_t t93 = 675646733242LLU;

	t93 = ((x2157<<(x2158&x2159))-x2160);

	if (t93 != 9223372036586340353LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x2173 = 4U;
	int8_t x2174 = 4;
	int8_t x2175 = -1;
	static volatile int32_t t94 = -41;

	t94 = ((x2173<<(x2174&x2175))-x2176);

	if (t94 != 59) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x2177 = UINT64_MAX;
	int32_t x2180 = 401;
	volatile uint64_t t95 = 253466144730732954LLU;

	t95 = ((x2177<<(x2178&x2179))-x2180);

	if (t95 != 18446744073709551199LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x2181 = 17477LLU;
	uint32_t x2182 = 7U;
	static int8_t x2183 = INT8_MIN;

	t96 = ((x2181<<(x2182&x2183))-x2184);

	if (t96 != 17478LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x2185 = 5560580U;
	uint64_t x2187 = UINT64_MAX;
	static uint64_t x2188 = UINT64_MAX;
	uint64_t t97 = 8439646953646206LLU;

	t97 = ((x2185<<(x2186&x2187))-x2188);

	if (t97 != 44484641LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x2189 = 5947347395441180LLU;
	int64_t x2190 = -170204175635487LL;
	volatile uint64_t x2192 = UINT64_MAX;

	t98 = ((x2189<<(x2190&x2191))-x2192);

	if (t98 != 11894694790882361LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x2197 = 397167U;
	uint32_t x2198 = 25242U;
	uint32_t x2199 = 85U;
	uint64_t x2200 = 1607933190295LLU;
	volatile uint64_t t99 = 271833LLU;

	t99 = ((x2197<<(x2198&x2199))-x2200);

	if (t99 != 18446742466035294057LLU) { NG(); } else { ; }
	
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

