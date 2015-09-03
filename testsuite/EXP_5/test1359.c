#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x62 = 43U;
static int32_t x109 = INT32_MAX;
uint32_t x112 = 2U;
int16_t x123 = INT16_MIN;
uint32_t x125 = UINT32_MAX;
static uint32_t x131 = UINT32_MAX;
int32_t x203 = -1;
volatile int16_t x217 = INT16_MAX;
volatile int8_t x219 = -23;
int64_t x220 = -1LL;
int8_t x249 = INT8_MAX;
int16_t x252 = 1;
int32_t x279 = -1;
int32_t t14 = -115749852;
int32_t x414 = -1;
static volatile uint64_t t20 = 314241LLU;
volatile uint64_t t24 = 844173074438914LLU;
static uint8_t x656 = 0U;
uint16_t x669 = 153U;
static int64_t x732 = -1LL;
volatile int8_t x750 = INT8_MIN;
int32_t t31 = 15;
int16_t x850 = INT16_MIN;
int8_t x852 = -1;
int8_t x853 = 3;
volatile int32_t t35 = 4077986;
int64_t x901 = INT64_MAX;
int16_t x1014 = INT16_MIN;
static uint8_t x1015 = 1U;
int64_t x1018 = -1LL;
int8_t x1020 = 0;
int64_t x1074 = -2951594119756267265LL;
volatile uint32_t t44 = 113U;
static volatile uint32_t t45 = 52119U;
volatile int64_t x1130 = 50452LL;
int32_t x1131 = -1;
uint8_t x1148 = 0U;
volatile int32_t t48 = -255322255;
int8_t x1182 = INT8_MIN;
volatile int32_t t49 = -9;
uint16_t x1317 = UINT16_MAX;
uint16_t x1318 = 15U;
volatile int32_t t50 = -6163024;
int8_t x1412 = -1;
int32_t t51 = 97727;
static uint32_t x1516 = 15U;
static uint64_t t52 = 10001911880LLU;
volatile int32_t t53 = -4598216;
uint32_t t54 = 14851032U;
int32_t x1639 = INT32_MAX;
static int32_t x1698 = INT32_MAX;
int16_t x1763 = -1;
int64_t x1798 = 1717832121437LL;
int8_t x1800 = 2;
uint64_t t61 = 44621LLU;
volatile uint64_t t63 = 276849870953901LLU;
static int32_t x1869 = INT32_MAX;
volatile int16_t x1878 = -1;
int8_t x1890 = -9;
uint16_t x1905 = 1672U;
int32_t x1986 = 6168399;
volatile uint64_t x1987 = 34010930813328426LLU;
volatile int32_t x2062 = -1;
int8_t x2128 = 2;
volatile int16_t x2175 = -4039;
uint32_t x2176 = UINT32_MAX;
volatile uint32_t t75 = UINT32_MAX;
volatile int32_t x2210 = 1588;
int64_t x2237 = INT64_MAX;
volatile uint8_t x2239 = 5U;
volatile int32_t x2256 = -1;
static uint64_t x2343 = 13989060523850LLU;
int8_t x2344 = 2;
volatile uint32_t x2434 = 376986U;
int16_t x2435 = INT16_MIN;
volatile int32_t t83 = 529;
uint32_t x2530 = 448961458U;
volatile int8_t x2531 = -1;
uint16_t x2575 = UINT16_MAX;
static volatile uint64_t x2628 = UINT64_MAX;
int32_t t88 = INT32_MAX;
uint16_t x2670 = UINT16_MAX;
volatile uint32_t t89 = 4U;
uint64_t x2682 = 91353288778379430LLU;
uint8_t x2802 = UINT8_MAX;
int64_t x2922 = -848992979318LL;
volatile uint8_t x2929 = 1U;
int16_t x2938 = INT16_MIN;
static volatile int8_t x2939 = INT8_MIN;
int32_t x2983 = INT32_MIN;
uint32_t x2984 = UINT32_MAX;
int8_t x2986 = INT8_MIN;
static int8_t x2991 = INT8_MIN;
int8_t x2992 = -1;
int32_t t98 = -17304521;
uint32_t t99 = UINT32_MAX;


void f0(void) {
	uint8_t x57 = 8U;
	uint8_t x58 = UINT8_MAX;
	uint32_t x59 = UINT32_MAX;
	static int8_t x60 = -1;
	volatile int32_t t0 = -684;

	t0 = (x57>>((x58<x59)+x60));

	if (t0 != 8) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x61 = 31LLU;
	int8_t x63 = INT8_MIN;
	volatile int16_t x64 = 0;
	volatile uint64_t t1 = 10340362409LLU;

	t1 = (x61>>((x62<x63)+x64));

	if (t1 != 15LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x85 = 2U;
	uint8_t x86 = 4U;
	volatile uint16_t x87 = 94U;
	static uint32_t x88 = 1U;
	volatile uint32_t t2 = 1233U;

	t2 = (x85>>((x86<x87)+x88));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x110 = 1;
	int32_t x111 = INT32_MIN;
	int32_t t3 = -5884870;

	t3 = (x109>>((x110<x111)+x112));

	if (t3 != 536870911) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x121 = 8322756262602LL;
	volatile uint64_t x122 = 3121302906484675736LLU;
	volatile int64_t x124 = -1LL;
	volatile int64_t t4 = -89410LL;

	t4 = (x121>>((x122<x123)+x124));

	if (t4 != 8322756262602LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x126 = -28;
	int8_t x127 = -1;
	int8_t x128 = 29;
	volatile uint32_t t5 = 1440274443U;

	t5 = (x125>>((x126<x127)+x128));

	if (t5 != 3U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x129 = 1U;
	int8_t x130 = -6;
	uint8_t x132 = 29U;
	volatile int32_t t6 = 10;

	t6 = (x129>>((x130<x131)+x132));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x133 = 2U;
	volatile uint64_t x134 = 510268406LLU;
	int64_t x135 = INT64_MIN;
	static int16_t x136 = -1;
	static volatile int32_t t7 = -439364;

	t7 = (x133>>((x134<x135)+x136));

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x201 = INT8_MAX;
	static uint32_t x202 = 5754U;
	static int16_t x204 = -1;
	volatile int32_t t8 = -119253799;

	t8 = (x201>>((x202<x203)+x204));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x213 = INT8_MAX;
	uint16_t x214 = UINT16_MAX;
	int64_t x215 = -1LL;
	int16_t x216 = 4;
	int32_t t9 = 323965824;

	t9 = (x213>>((x214<x215)+x216));

	if (t9 != 7) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x218 = INT16_MIN;
	volatile int32_t t10 = 466500935;

	t10 = (x217>>((x218<x219)+x220));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x229 = 14U;
	int64_t x230 = 1636996606LL;
	volatile uint32_t x231 = 0U;
	int8_t x232 = 2;
	static volatile int32_t t11 = -53;

	t11 = (x229>>((x230<x231)+x232));

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x245 = UINT32_MAX;
	uint16_t x246 = 5U;
	uint64_t x247 = 137774781944947LLU;
	static volatile int64_t x248 = -1LL;
	volatile uint32_t t12 = UINT32_MAX;

	t12 = (x245>>((x246<x247)+x248));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x250 = INT64_MIN;
	int16_t x251 = -1;
	static int32_t t13 = 80092;

	t13 = (x249>>((x250<x251)+x252));

	if (t13 != 31) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x277 = 110U;
	volatile int32_t x278 = INT32_MIN;
	int32_t x280 = -1;

	t14 = (x277>>((x278<x279)+x280));

	if (t14 != 110) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x313 = 0U;
	int8_t x314 = -1;
	volatile int8_t x315 = -1;
	static uint8_t x316 = 2U;
	int32_t t15 = -2290163;

	t15 = (x313>>((x314<x315)+x316));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x361 = 222U;
	int16_t x362 = -1;
	int16_t x363 = 4;
	uint8_t x364 = 11U;
	volatile int32_t t16 = 2271;

	t16 = (x361>>((x362<x363)+x364));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x385 = INT8_MAX;
	int32_t x386 = INT32_MAX;
	int16_t x387 = 1;
	uint16_t x388 = 18U;
	int32_t t17 = -1328313;

	t17 = (x385>>((x386<x387)+x388));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x397 = UINT8_MAX;
	static uint8_t x398 = 29U;
	int16_t x399 = 505;
	int8_t x400 = -1;
	int32_t t18 = 4;

	t18 = (x397>>((x398<x399)+x400));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x413 = 14098;
	uint64_t x415 = UINT64_MAX;
	uint8_t x416 = 15U;
	static int32_t t19 = -1791;

	t19 = (x413>>((x414<x415)+x416));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x445 = 184505218338351867LLU;
	static volatile int64_t x446 = -1LL;
	static uint8_t x447 = UINT8_MAX;
	static volatile int16_t x448 = -1;

	t20 = (x445>>((x446<x447)+x448));

	if (t20 != 184505218338351867LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x453 = INT64_MAX;
	int64_t x454 = -8236375LL;
	int8_t x455 = -1;
	uint8_t x456 = 0U;
	int64_t t21 = 3543794494745LL;

	t21 = (x453>>((x454<x455)+x456));

	if (t21 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x461 = UINT8_MAX;
	static int16_t x462 = INT16_MIN;
	static int32_t x463 = -1;
	uint8_t x464 = 0U;
	int32_t t22 = -1001512;

	t22 = (x461>>((x462<x463)+x464));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x473 = 239U;
	int32_t x474 = INT32_MIN;
	int32_t x475 = 38537305;
	static int8_t x476 = -1;
	volatile int32_t t23 = 101;

	t23 = (x473>>((x474<x475)+x476));

	if (t23 != 239) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x525 = 123862879853280LLU;
	int32_t x526 = INT32_MIN;
	static int32_t x527 = -41749285;
	static int8_t x528 = -1;

	t24 = (x525>>((x526<x527)+x528));

	if (t24 != 123862879853280LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x597 = UINT16_MAX;
	volatile uint8_t x598 = 1U;
	uint64_t x599 = UINT64_MAX;
	uint32_t x600 = UINT32_MAX;
	volatile int32_t t25 = -219;

	t25 = (x597>>((x598<x599)+x600));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x617 = 5501458599519883LL;
	int8_t x618 = INT8_MIN;
	static int64_t x619 = -1455251855LL;
	static int8_t x620 = 0;
	volatile int64_t t26 = -6447249LL;

	t26 = (x617>>((x618<x619)+x620));

	if (t26 != 5501458599519883LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x629 = 449;
	uint64_t x630 = 1593338672260287829LLU;
	int8_t x631 = -3;
	int64_t x632 = -1LL;
	volatile int32_t t27 = 5562409;

	t27 = (x629>>((x630<x631)+x632));

	if (t27 != 449) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x653 = UINT64_MAX;
	static uint32_t x654 = 1831195868U;
	int8_t x655 = INT8_MIN;
	static uint64_t t28 = 28876459894LLU;

	t28 = (x653>>((x654<x655)+x656));

	if (t28 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x670 = UINT16_MAX;
	int16_t x671 = INT16_MIN;
	int8_t x672 = 5;
	int32_t t29 = -1032067883;

	t29 = (x669>>((x670<x671)+x672));

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x729 = UINT8_MAX;
	uint64_t x730 = 25LLU;
	uint16_t x731 = 1011U;
	int32_t t30 = 1913533;

	t30 = (x729>>((x730<x731)+x732));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x749 = 0U;
	volatile uint32_t x751 = 15177U;
	static uint8_t x752 = 20U;

	t31 = (x749>>((x750<x751)+x752));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x805 = UINT64_MAX;
	int8_t x806 = 4;
	static int64_t x807 = 109819LL;
	volatile uint8_t x808 = 2U;
	volatile uint64_t t32 = 107LLU;

	t32 = (x805>>((x806<x807)+x808));

	if (t32 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x821 = 4429410351945283845LLU;
	static int64_t x822 = -1LL;
	uint32_t x823 = 550U;
	volatile int8_t x824 = -1;
	volatile uint64_t t33 = 2LLU;

	t33 = (x821>>((x822<x823)+x824));

	if (t33 != 4429410351945283845LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x849 = 42592U;
	uint8_t x851 = 2U;
	volatile uint32_t t34 = 0U;

	t34 = (x849>>((x850<x851)+x852));

	if (t34 != 42592U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x854 = 15U;
	int64_t x855 = INT64_MAX;
	int32_t x856 = -1;

	t35 = (x853>>((x854<x855)+x856));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x881 = 23379LL;
	int16_t x882 = INT16_MIN;
	static int64_t x883 = INT64_MIN;
	int8_t x884 = 12;
	static volatile int64_t t36 = -25277529161LL;

	t36 = (x881>>((x882<x883)+x884));

	if (t36 != 5LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x885 = 8348074U;
	volatile int32_t x886 = INT32_MAX;
	static volatile uint64_t x887 = 1562LLU;
	uint32_t x888 = 21U;
	uint32_t t37 = 908U;

	t37 = (x885>>((x886<x887)+x888));

	if (t37 != 3U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x902 = UINT64_MAX;
	uint64_t x903 = UINT64_MAX;
	uint8_t x904 = 3U;
	int64_t t38 = -25142751LL;

	t38 = (x901>>((x902<x903)+x904));

	if (t38 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x913 = UINT8_MAX;
	int8_t x914 = 3;
	int64_t x915 = INT64_MIN;
	volatile uint16_t x916 = 8U;
	volatile int32_t t39 = 561895;

	t39 = (x913>>((x914<x915)+x916));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x973 = UINT64_MAX;
	int32_t x974 = -537723;
	int64_t x975 = INT64_MAX;
	int8_t x976 = 0;
	uint64_t t40 = 34338449539LLU;

	t40 = (x973>>((x974<x975)+x976));

	if (t40 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x989 = 10;
	volatile int64_t x990 = -550439999262797591LL;
	int32_t x991 = INT32_MAX;
	int32_t x992 = -1;
	int32_t t41 = -11501;

	t41 = (x989>>((x990<x991)+x992));

	if (t41 != 10) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x1013 = UINT32_MAX;
	volatile int8_t x1016 = -1;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = (x1013>>((x1014<x1015)+x1016));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x1017 = INT32_MAX;
	uint8_t x1019 = 1U;
	static int32_t t43 = -7355490;

	t43 = (x1017>>((x1018<x1019)+x1020));

	if (t43 != 1073741823) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x1073 = UINT32_MAX;
	uint8_t x1075 = 7U;
	volatile int8_t x1076 = 0;

	t44 = (x1073>>((x1074<x1075)+x1076));

	if (t44 != 2147483647U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1101 = UINT32_MAX;
	volatile uint32_t x1102 = 451174U;
	int8_t x1103 = -3;
	uint8_t x1104 = 6U;

	t45 = (x1101>>((x1102<x1103)+x1104));

	if (t45 != 33554431U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1129 = INT32_MAX;
	int8_t x1132 = 5;
	volatile int32_t t46 = -979394816;

	t46 = (x1129>>((x1130<x1131)+x1132));

	if (t46 != 67108863) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x1145 = INT32_MAX;
	static int64_t x1146 = INT64_MAX;
	volatile uint32_t x1147 = UINT32_MAX;
	int32_t t47 = INT32_MAX;

	t47 = (x1145>>((x1146<x1147)+x1148));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1173 = 32123U;
	uint8_t x1174 = UINT8_MAX;
	uint64_t x1175 = UINT64_MAX;
	static uint64_t x1176 = UINT64_MAX;

	t48 = (x1173>>((x1174<x1175)+x1176));

	if (t48 != 32123) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1181 = 5;
	int16_t x1183 = INT16_MAX;
	int16_t x1184 = -1;

	t49 = (x1181>>((x1182<x1183)+x1184));

	if (t49 != 5) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1319 = -1;
	int8_t x1320 = 13;

	t50 = (x1317>>((x1318<x1319)+x1320));

	if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1409 = UINT8_MAX;
	int64_t x1410 = INT64_MIN;
	int64_t x1411 = -622942610685791235LL;

	t51 = (x1409>>((x1410<x1411)+x1412));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x1513 = 8115834748LLU;
	uint16_t x1514 = 31U;
	int32_t x1515 = INT32_MAX;

	t52 = (x1513>>((x1514<x1515)+x1516));

	if (t52 != 123837LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x1573 = UINT16_MAX;
	static volatile uint64_t x1574 = 797574965LLU;
	volatile int32_t x1575 = -1;
	volatile int8_t x1576 = -1;

	t53 = (x1573>>((x1574<x1575)+x1576));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1617 = 262319775U;
	volatile int8_t x1618 = INT8_MIN;
	uint16_t x1619 = UINT16_MAX;
	volatile uint16_t x1620 = 2U;

	t54 = (x1617>>((x1618<x1619)+x1620));

	if (t54 != 32789971U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1633 = INT32_MAX;
	volatile uint32_t x1634 = UINT32_MAX;
	int64_t x1635 = INT64_MIN;
	uint32_t x1636 = 30U;
	volatile int32_t t55 = 101397;

	t55 = (x1633>>((x1634<x1635)+x1636));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1637 = 46U;
	volatile int32_t x1638 = INT32_MIN;
	static uint8_t x1640 = 7U;
	int32_t t56 = 6534;

	t56 = (x1637>>((x1638<x1639)+x1640));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1641 = UINT64_MAX;
	uint16_t x1642 = 17U;
	int16_t x1643 = INT16_MIN;
	static uint32_t x1644 = 15U;
	uint64_t t57 = 128941187431572235LLU;

	t57 = (x1641>>((x1642<x1643)+x1644));

	if (t57 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x1697 = INT16_MAX;
	int8_t x1699 = INT8_MIN;
	int16_t x1700 = 0;
	int32_t t58 = -1;

	t58 = (x1697>>((x1698<x1699)+x1700));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x1725 = 776U;
	volatile uint64_t x1726 = UINT64_MAX;
	static int8_t x1727 = 1;
	uint64_t x1728 = 20LLU;
	volatile int32_t t59 = -79436;

	t59 = (x1725>>((x1726<x1727)+x1728));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1761 = 20113U;
	int64_t x1762 = INT64_MAX;
	static int8_t x1764 = 10;
	int32_t t60 = 3;

	t60 = (x1761>>((x1762<x1763)+x1764));

	if (t60 != 19) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1797 = 11LLU;
	volatile int32_t x1799 = 1853820;

	t61 = (x1797>>((x1798<x1799)+x1800));

	if (t61 != 2LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1853 = 847327991904LL;
	int16_t x1854 = 1;
	static uint64_t x1855 = 155LLU;
	uint64_t x1856 = UINT64_MAX;
	int64_t t62 = 31296950892490285LL;

	t62 = (x1853>>((x1854<x1855)+x1856));

	if (t62 != 847327991904LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x1865 = UINT64_MAX;
	uint64_t x1866 = UINT64_MAX;
	uint32_t x1867 = 464765612U;
	static uint8_t x1868 = 3U;

	t63 = (x1865>>((x1866<x1867)+x1868));

	if (t63 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x1870 = UINT64_MAX;
	int64_t x1871 = INT64_MIN;
	uint16_t x1872 = 27U;
	volatile int32_t t64 = 0;

	t64 = (x1869>>((x1870<x1871)+x1872));

	if (t64 != 15) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1877 = INT64_MAX;
	int16_t x1879 = INT16_MAX;
	int8_t x1880 = 6;
	int64_t t65 = 4041636540340LL;

	t65 = (x1877>>((x1878<x1879)+x1880));

	if (t65 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1889 = 4548;
	int16_t x1891 = 3;
	int16_t x1892 = -1;
	int32_t t66 = 15817;

	t66 = (x1889>>((x1890<x1891)+x1892));

	if (t66 != 4548) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1906 = -7241133358LL;
	static int64_t x1907 = -1LL;
	volatile int32_t x1908 = -1;
	volatile int32_t t67 = -75782620;

	t67 = (x1905>>((x1906<x1907)+x1908));

	if (t67 != 1672) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1973 = UINT64_MAX;
	volatile int64_t x1974 = -516834256516LL;
	volatile int64_t x1975 = -1LL;
	static volatile uint8_t x1976 = 10U;
	volatile uint64_t t68 = 111807262771546342LLU;

	t68 = (x1973>>((x1974<x1975)+x1976));

	if (t68 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x1977 = INT32_MAX;
	uint8_t x1978 = 60U;
	uint8_t x1979 = UINT8_MAX;
	uint64_t x1980 = UINT64_MAX;
	int32_t t69 = INT32_MAX;

	t69 = (x1977>>((x1978<x1979)+x1980));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x1981 = INT32_MAX;
	int8_t x1982 = -1;
	int32_t x1983 = -1;
	uint16_t x1984 = 7U;
	static int32_t t70 = -874440;

	t70 = (x1981>>((x1982<x1983)+x1984));

	if (t70 != 16777215) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x1985 = UINT16_MAX;
	volatile uint64_t x1988 = 3LLU;
	volatile int32_t t71 = 1;

	t71 = (x1985>>((x1986<x1987)+x1988));

	if (t71 != 4095) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x2061 = UINT8_MAX;
	uint32_t x2063 = 179449453U;
	uint16_t x2064 = 8U;
	int32_t t72 = 1;

	t72 = (x2061>>((x2062<x2063)+x2064));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2125 = UINT32_MAX;
	static int64_t x2126 = INT64_MIN;
	static uint64_t x2127 = UINT64_MAX;
	uint32_t t73 = 7355U;

	t73 = (x2125>>((x2126<x2127)+x2128));

	if (t73 != 536870911U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2173 = 10U;
	static volatile uint32_t x2174 = 7523286U;
	int32_t t74 = 86;

	t74 = (x2173>>((x2174<x2175)+x2176));

	if (t74 != 10) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2205 = UINT32_MAX;
	static volatile uint8_t x2206 = 1U;
	int8_t x2207 = -1;
	uint16_t x2208 = 0U;

	t75 = (x2205>>((x2206<x2207)+x2208));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x2209 = 1548901U;
	uint16_t x2211 = UINT16_MAX;
	uint8_t x2212 = 4U;
	volatile uint32_t t76 = 1195751134U;

	t76 = (x2209>>((x2210<x2211)+x2212));

	if (t76 != 48403U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2229 = UINT8_MAX;
	volatile int16_t x2230 = INT16_MIN;
	uint64_t x2231 = UINT64_MAX;
	static uint8_t x2232 = 0U;
	int32_t t77 = -25;

	t77 = (x2229>>((x2230<x2231)+x2232));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x2238 = -4678;
	static uint8_t x2240 = 58U;
	int64_t t78 = -169502222LL;

	t78 = (x2237>>((x2238<x2239)+x2240));

	if (t78 != 15LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x2253 = 16809140LLU;
	int8_t x2254 = -14;
	uint8_t x2255 = 50U;
	uint64_t t79 = 66928017LLU;

	t79 = (x2253>>((x2254<x2255)+x2256));

	if (t79 != 16809140LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2265 = 1;
	volatile int64_t x2266 = INT64_MIN;
	static volatile uint8_t x2267 = 1U;
	int32_t x2268 = -1;
	int32_t t80 = 162161;

	t80 = (x2265>>((x2266<x2267)+x2268));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x2341 = 1525832300LLU;
	static volatile uint8_t x2342 = 3U;
	uint64_t t81 = 1551743LLU;

	t81 = (x2341>>((x2342<x2343)+x2344));

	if (t81 != 190729037LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x2425 = UINT32_MAX;
	volatile int16_t x2426 = INT16_MIN;
	int64_t x2427 = INT64_MIN;
	uint16_t x2428 = 10U;
	uint32_t t82 = 4965U;

	t82 = (x2425>>((x2426<x2427)+x2428));

	if (t82 != 4194303U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2433 = 1;
	int8_t x2436 = -1;

	t83 = (x2433>>((x2434<x2435)+x2436));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2525 = INT8_MAX;
	int32_t x2526 = -2227;
	static int8_t x2527 = -1;
	volatile uint64_t x2528 = UINT64_MAX;
	volatile int32_t t84 = 13;

	t84 = (x2525>>((x2526<x2527)+x2528));

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x2529 = 35594U;
	uint8_t x2532 = 1U;
	volatile uint32_t t85 = 61349976U;

	t85 = (x2529>>((x2530<x2531)+x2532));

	if (t85 != 8898U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2573 = 788U;
	int16_t x2574 = -866;
	int32_t x2576 = -1;
	int32_t t86 = 1;

	t86 = (x2573>>((x2574<x2575)+x2576));

	if (t86 != 788) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x2577 = 803LLU;
	int64_t x2578 = 7LL;
	int16_t x2579 = INT16_MIN;
	int8_t x2580 = 28;
	uint64_t t87 = 253LLU;

	t87 = (x2577>>((x2578<x2579)+x2580));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x2625 = INT32_MAX;
	volatile int8_t x2626 = INT8_MAX;
	volatile int64_t x2627 = 1817LL;

	t88 = (x2625>>((x2626<x2627)+x2628));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x2669 = 53858U;
	uint64_t x2671 = UINT64_MAX;
	int32_t x2672 = -1;

	t89 = (x2669>>((x2670<x2671)+x2672));

	if (t89 != 53858U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2681 = 271952U;
	int32_t x2683 = INT32_MIN;
	uint8_t x2684 = 22U;
	uint32_t t90 = 37389634U;

	t90 = (x2681>>((x2682<x2683)+x2684));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2801 = INT16_MAX;
	static uint16_t x2803 = 4752U;
	uint8_t x2804 = 25U;
	volatile int32_t t91 = 337;

	t91 = (x2801>>((x2802<x2803)+x2804));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x2873 = UINT16_MAX;
	int64_t x2874 = INT64_MIN;
	uint16_t x2875 = UINT16_MAX;
	uint8_t x2876 = 0U;
	volatile int32_t t92 = 228498;

	t92 = (x2873>>((x2874<x2875)+x2876));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2921 = UINT64_MAX;
	static int64_t x2923 = INT64_MIN;
	static int8_t x2924 = 1;
	volatile uint64_t t93 = 7613052757920660LLU;

	t93 = (x2921>>((x2922<x2923)+x2924));

	if (t93 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x2930 = UINT32_MAX;
	int32_t x2931 = -1;
	uint8_t x2932 = 0U;
	static volatile int32_t t94 = -3075793;

	t94 = (x2929>>((x2930<x2931)+x2932));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x2937 = UINT64_MAX;
	static int8_t x2940 = -1;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (x2937>>((x2938<x2939)+x2940));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x2981 = INT32_MAX;
	uint32_t x2982 = 213496289U;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x2981>>((x2982<x2983)+x2984));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2985 = 60;
	static int32_t x2987 = INT32_MAX;
	int64_t x2988 = -1LL;
	volatile int32_t t97 = -8;

	t97 = (x2985>>((x2986<x2987)+x2988));

	if (t97 != 60) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x2989 = 9U;
	static volatile uint64_t x2990 = 3LLU;

	t98 = (x2989>>((x2990<x2991)+x2992));

	if (t98 != 9) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x2997 = UINT32_MAX;
	int8_t x2998 = INT8_MIN;
	int8_t x2999 = 23;
	static uint32_t x3000 = UINT32_MAX;

	t99 = (x2997>>((x2998<x2999)+x3000));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

