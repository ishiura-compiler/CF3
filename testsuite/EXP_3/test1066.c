#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = -1;
int16_t x15 = 11;
static volatile uint16_t x61 = UINT16_MAX;
int8_t x70 = -1;
int16_t x72 = 7;
uint16_t x204 = 9U;
static uint8_t x432 = 3U;
volatile uint32_t t8 = 3720600U;
int8_t x625 = INT8_MIN;
static uint32_t x651 = UINT32_MAX;
uint64_t t11 = 1097320715057665LLU;
uint64_t t12 = 68809LLU;
int8_t x830 = -7;
static volatile uint32_t t14 = 6422861U;
int8_t x885 = 0;
int16_t x887 = 1;
int32_t t15 = 0;
volatile int16_t x938 = INT16_MIN;
int64_t x998 = 18439LL;
static uint8_t x1000 = 2U;
volatile int8_t x1006 = INT8_MIN;
uint8_t x1007 = 0U;
int8_t x1148 = 5;
int8_t x1307 = 31;
uint32_t t23 = 573354U;
uint8_t x1409 = 22U;
int64_t x1410 = INT64_MIN;
uint64_t t24 = 2190LLU;
uint32_t x1465 = 16U;
volatile uint64_t t25 = 3498422306387904059LLU;
uint8_t x1667 = UINT8_MAX;
static int8_t x1708 = 1;
int16_t x1807 = INT16_MAX;
volatile uint16_t x1927 = UINT16_MAX;
static uint16_t x2059 = 7170U;
uint8_t x2135 = UINT8_MAX;
static volatile uint64_t t34 = 529157908929LLU;
uint16_t x2476 = 0U;
uint16_t x2498 = 4U;
int16_t x2499 = INT16_MAX;
volatile int16_t x2564 = 2;
int8_t x2802 = 63;
int64_t x2803 = 1989927646087LL;
static int32_t t41 = -1391;
volatile int32_t t44 = -3;
uint16_t x3069 = 2U;
int8_t x3071 = INT8_MAX;
int32_t t46 = -7;
static int16_t x3098 = -1;
int8_t x3104 = 22;
int16_t x3130 = INT16_MIN;
static int32_t x3202 = INT32_MIN;
int64_t x3241 = INT64_MAX;
int8_t x3244 = 0;
int64_t x3269 = 27222589324LL;
static int32_t t56 = -434;
int64_t x3377 = -27LL;
uint16_t x3407 = 29410U;
uint8_t x3432 = 1U;
static int32_t x3480 = 24;
uint16_t x3496 = 1U;
uint64_t t63 = 577LLU;
volatile uint32_t x3696 = 2U;
uint64_t x3824 = 0LLU;
int32_t x3895 = INT32_MAX;
int32_t t69 = 1;
static uint16_t x4013 = 577U;
int8_t x4014 = INT8_MIN;
volatile int64_t x4015 = INT64_MAX;
volatile int64_t t70 = -11563258983780LL;
static int64_t x4057 = -2150095544727102LL;
static int64_t t71 = 369584821191LL;
static volatile int64_t t73 = 210980041LL;
volatile int32_t x4358 = INT32_MIN;
volatile uint64_t t77 = 13464104LLU;
uint32_t x4653 = 1087U;
uint32_t x4711 = UINT32_MAX;
uint8_t x4742 = 1U;
uint16_t x4895 = 118U;
int32_t t81 = -1;
uint64_t x5234 = 1425436525LLU;
int16_t x5236 = 3;
int32_t x5294 = -7019;
int32_t x5453 = INT32_MAX;
int16_t x5454 = 7;
int8_t x5456 = 19;
uint32_t t87 = 5270506U;
volatile int64_t t88 = 1018817070871762004LL;
int64_t x5514 = -1LL;
uint32_t x5519 = 1902146635U;
uint16_t x5520 = 1U;
volatile int64_t t90 = 293LL;
volatile uint32_t x5637 = 724U;
int8_t x5640 = 1;
static volatile uint64_t x5731 = 44695478690723583LLU;
uint64_t t93 = 210464056489326LLU;
uint8_t x6033 = 56U;
volatile int16_t x6034 = INT16_MAX;
int32_t x6035 = INT32_MAX;
uint32_t x6052 = 2U;
uint16_t x6062 = UINT16_MAX;
uint64_t x6063 = UINT64_MAX;
uint32_t x6092 = 23U;


void f0(void) {
	int16_t x6 = -5;
	uint64_t x7 = UINT64_MAX;
	static int16_t x8 = 57;
	static uint64_t t0 = 1877915LLU;

	t0 = ((x5/x6)^(x7>>x8));

	if (t0 != 127LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x13 = INT32_MIN;
	int64_t x14 = INT64_MIN;
	uint8_t x16 = 1U;
	int64_t t1 = 1324927276888938LL;

	t1 = ((x13/x14)^(x15>>x16));

	if (t1 != 5LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x62 = INT32_MIN;
	uint32_t x63 = UINT32_MAX;
	uint32_t x64 = 10U;
	volatile uint32_t t2 = 6013187U;

	t2 = ((x61/x62)^(x63>>x64));

	if (t2 != 4194303U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x69 = -1958525968376128LL;
	uint8_t x71 = 44U;
	static volatile int64_t t3 = 135574459727LL;

	t3 = ((x69/x70)^(x71>>x72));

	if (t3 != 1958525968376128LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x129 = 49U;
	int8_t x130 = -3;
	uint8_t x131 = 10U;
	uint16_t x132 = 4U;
	static volatile int32_t t4 = 202516446;

	t4 = ((x129/x130)^(x131>>x132));

	if (t4 != -16) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x201 = 0U;
	int16_t x202 = INT16_MIN;
	uint8_t x203 = UINT8_MAX;
	static int32_t t5 = -46;

	t5 = ((x201/x202)^(x203>>x204));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x321 = INT32_MIN;
	uint64_t x322 = 1588656503347430594LLU;
	uint32_t x323 = 32184U;
	uint8_t x324 = 1U;
	uint64_t t6 = 84750183509LLU;

	t6 = ((x321/x322)^(x323>>x324));

	if (t6 != 16087LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x429 = -307;
	int8_t x430 = -1;
	int16_t x431 = 916;
	volatile int32_t t7 = -1;

	t7 = ((x429/x430)^(x431>>x432));

	if (t7 != 321) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x485 = INT8_MIN;
	uint32_t x486 = 180057532U;
	int8_t x487 = INT8_MAX;
	uint8_t x488 = 0U;

	t8 = ((x485/x486)^(x487>>x488));

	if (t8 != 104U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x626 = -1;
	int64_t x627 = INT64_MAX;
	int8_t x628 = 1;
	int64_t t9 = 21LL;

	t9 = ((x625/x626)^(x627>>x628));

	if (t9 != 4611686018427387775LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x649 = UINT16_MAX;
	uint64_t x650 = UINT64_MAX;
	int16_t x652 = 10;
	static uint64_t t10 = 834374LLU;

	t10 = ((x649/x650)^(x651>>x652));

	if (t10 != 4194303LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x689 = 29931U;
	uint64_t x690 = 8169576323975LLU;
	volatile int8_t x691 = INT8_MAX;
	uint16_t x692 = 2U;

	t11 = ((x689/x690)^(x691>>x692));

	if (t11 != 31LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x757 = UINT64_MAX;
	static volatile uint64_t x758 = 79052LLU;
	uint64_t x759 = UINT64_MAX;
	int8_t x760 = 7;

	t12 = ((x757/x758)^(x759>>x760));

	if (t12 != 143881838583449486LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x829 = 1014316U;
	volatile int64_t x831 = INT64_MAX;
	uint32_t x832 = 59U;
	static int64_t t13 = -205200688259621085LL;

	t13 = ((x829/x830)^(x831>>x832));

	if (t13 != 15LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x877 = 7U;
	int32_t x878 = 1965;
	int32_t x879 = 346;
	uint8_t x880 = 2U;

	t14 = ((x877/x878)^(x879>>x880));

	if (t14 != 86U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x886 = INT32_MIN;
	volatile int8_t x888 = 8;

	t15 = ((x885/x886)^(x887>>x888));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x937 = INT32_MAX;
	volatile int32_t x939 = 57;
	static int8_t x940 = 12;
	volatile int32_t t16 = 54;

	t16 = ((x937/x938)^(x939>>x940));

	if (t16 != -65535) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x961 = -6;
	int16_t x962 = -1727;
	int16_t x963 = 12000;
	static uint8_t x964 = 2U;
	volatile int32_t t17 = -22470;

	t17 = ((x961/x962)^(x963>>x964));

	if (t17 != 3000) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x997 = -1;
	int32_t x999 = INT32_MAX;
	int64_t t18 = -531621972LL;

	t18 = ((x997/x998)^(x999>>x1000));

	if (t18 != 536870911LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x1005 = -4131964052053LL;
	uint32_t x1008 = 4U;
	int64_t t19 = 0LL;

	t19 = ((x1005/x1006)^(x1007>>x1008));

	if (t19 != 32280969156LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1089 = -4872;
	uint8_t x1090 = 5U;
	uint8_t x1091 = UINT8_MAX;
	static int16_t x1092 = 1;
	static volatile int32_t t20 = -301584232;

	t20 = ((x1089/x1090)^(x1091>>x1092));

	if (t20 != -947) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1105 = INT32_MIN;
	uint64_t x1106 = 17265816057307LLU;
	volatile uint32_t x1107 = 86583U;
	uint16_t x1108 = 12U;
	uint64_t t21 = 68578744LLU;

	t21 = ((x1105/x1106)^(x1107>>x1108));

	if (t21 != 1068409LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1145 = 10284LLU;
	static int64_t x1146 = -1LL;
	uint32_t x1147 = 18568U;
	volatile uint64_t t22 = 2629572424111782943LLU;

	t22 = ((x1145/x1146)^(x1147>>x1148));

	if (t22 != 580LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1305 = 1451U;
	static int32_t x1306 = INT32_MAX;
	int32_t x1308 = 1;

	t23 = ((x1305/x1306)^(x1307>>x1308));

	if (t23 != 15U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1411 = UINT64_MAX;
	int8_t x1412 = 51;

	t24 = ((x1409/x1410)^(x1411>>x1412));

	if (t24 != 8191LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1466 = -1;
	uint64_t x1467 = UINT64_MAX;
	uint32_t x1468 = 41U;

	t25 = ((x1465/x1466)^(x1467>>x1468));

	if (t25 != 8388607LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x1561 = 2877919096LLU;
	int32_t x1562 = INT32_MIN;
	static int32_t x1563 = INT32_MAX;
	uint32_t x1564 = 13U;
	volatile uint64_t t26 = 563567158LLU;

	t26 = ((x1561/x1562)^(x1563>>x1564));

	if (t26 != 262143LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x1665 = INT16_MAX;
	volatile int64_t x1666 = INT64_MAX;
	static int8_t x1668 = 0;
	static volatile int64_t t27 = 105121901806884127LL;

	t27 = ((x1665/x1666)^(x1667>>x1668));

	if (t27 != 255LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1705 = INT8_MAX;
	int16_t x1706 = INT16_MAX;
	int8_t x1707 = 20;
	volatile int32_t t28 = 715911;

	t28 = ((x1705/x1706)^(x1707>>x1708));

	if (t28 != 10) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x1757 = -3548432;
	int64_t x1758 = INT64_MAX;
	volatile uint64_t x1759 = UINT64_MAX;
	volatile uint8_t x1760 = 5U;
	static uint64_t t29 = 474LLU;

	t29 = ((x1757/x1758)^(x1759>>x1760));

	if (t29 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1805 = 1U;
	uint8_t x1806 = 2U;
	uint8_t x1808 = 0U;
	static int32_t t30 = -264665745;

	t30 = ((x1805/x1806)^(x1807>>x1808));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1925 = 50;
	int64_t x1926 = -1963386LL;
	volatile uint8_t x1928 = 11U;
	int64_t t31 = -26641337834034LL;

	t31 = ((x1925/x1926)^(x1927>>x1928));

	if (t31 != 31LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1957 = INT32_MAX;
	uint8_t x1958 = UINT8_MAX;
	int32_t x1959 = INT32_MAX;
	volatile uint8_t x1960 = 3U;
	static int32_t t32 = -256124899;

	t32 = ((x1957/x1958)^(x1959>>x1960));

	if (t32 != 260013951) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2057 = 263181125902LLU;
	volatile int32_t x2058 = -182033;
	uint64_t x2060 = 12LLU;
	volatile uint64_t t33 = 1586957LLU;

	t33 = ((x2057/x2058)^(x2059>>x2060));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2133 = 12393U;
	uint64_t x2134 = 141197526658290523LLU;
	static uint8_t x2136 = 8U;

	t34 = ((x2133/x2134)^(x2135>>x2136));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2461 = INT32_MAX;
	volatile int8_t x2462 = -1;
	static volatile uint64_t x2463 = 18012475LLU;
	volatile int8_t x2464 = 1;
	uint64_t t35 = 255481LLU;

	t35 = ((x2461/x2462)^(x2463>>x2464));

	if (t35 != 18446744071571074204LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x2473 = INT8_MIN;
	int64_t x2474 = INT64_MIN;
	int8_t x2475 = INT8_MAX;
	volatile int64_t t36 = -153LL;

	t36 = ((x2473/x2474)^(x2475>>x2476));

	if (t36 != 127LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x2497 = 15U;
	static uint8_t x2500 = 7U;
	volatile int32_t t37 = 6061709;

	t37 = ((x2497/x2498)^(x2499>>x2500));

	if (t37 != 252) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2561 = 46U;
	static int16_t x2562 = INT16_MIN;
	int16_t x2563 = 2123;
	static int32_t t38 = -53498756;

	t38 = ((x2561/x2562)^(x2563>>x2564));

	if (t38 != 530) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2593 = 1U;
	uint16_t x2594 = 28225U;
	int32_t x2595 = 22179;
	uint16_t x2596 = 15U;
	uint32_t t39 = 14198U;

	t39 = ((x2593/x2594)^(x2595>>x2596));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2801 = -1;
	uint8_t x2804 = 31U;
	volatile int64_t t40 = 1986249705LL;

	t40 = ((x2801/x2802)^(x2803>>x2804));

	if (t40 != 926LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2873 = INT16_MAX;
	uint16_t x2874 = 29U;
	int16_t x2875 = INT16_MAX;
	int8_t x2876 = 4;

	t41 = ((x2873/x2874)^(x2875>>x2876));

	if (t41 != 918) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x2901 = 49536U;
	static int64_t x2902 = -4147356626654945LL;
	int64_t x2903 = 764LL;
	uint8_t x2904 = 0U;
	static volatile int64_t t42 = -492286761LL;

	t42 = ((x2901/x2902)^(x2903>>x2904));

	if (t42 != 764LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2953 = 6;
	volatile int8_t x2954 = -1;
	int8_t x2955 = INT8_MAX;
	static volatile int16_t x2956 = 1;
	volatile int32_t t43 = -8287358;

	t43 = ((x2953/x2954)^(x2955>>x2956));

	if (t43 != -59) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x3005 = INT32_MIN;
	int8_t x3006 = INT8_MAX;
	int8_t x3007 = INT8_MAX;
	int16_t x3008 = 5;

	t44 = ((x3005/x3006)^(x3007>>x3008));

	if (t44 != -16909317) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x3057 = -665372214;
	int8_t x3058 = -2;
	static uint32_t x3059 = 1806U;
	static uint16_t x3060 = 13U;
	uint32_t t45 = 5846044U;

	t45 = ((x3057/x3058)^(x3059>>x3060));

	if (t45 != 332686107U) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x3070 = INT16_MIN;
	volatile uint64_t x3072 = 14LLU;

	t46 = ((x3069/x3070)^(x3071>>x3072));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x3097 = 17U;
	uint8_t x3099 = 79U;
	int16_t x3100 = 0;
	static volatile int32_t t47 = -15;

	t47 = ((x3097/x3098)^(x3099>>x3100));

	if (t47 != -96) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x3101 = -4277;
	int32_t x3102 = 1;
	static int8_t x3103 = 40;
	int32_t t48 = -159;

	t48 = ((x3101/x3102)^(x3103>>x3104));

	if (t48 != -4277) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3129 = -1;
	int16_t x3131 = 2;
	static int16_t x3132 = 0;
	volatile int32_t t49 = 3;

	t49 = ((x3129/x3130)^(x3131>>x3132));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3201 = 28U;
	static uint16_t x3203 = 0U;
	uint16_t x3204 = 1U;
	int32_t t50 = 26069;

	t50 = ((x3201/x3202)^(x3203>>x3204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x3242 = INT8_MIN;
	uint16_t x3243 = 18278U;
	volatile int64_t t51 = 283072772124LL;

	t51 = ((x3241/x3242)^(x3243>>x3244));

	if (t51 != -72057594037909657LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x3270 = INT16_MIN;
	uint8_t x3271 = 1U;
	volatile int64_t x3272 = 1LL;
	static volatile int64_t t52 = -1LL;

	t52 = ((x3269/x3270)^(x3271>>x3272));

	if (t52 != -830767LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3277 = 1322469575993961156LL;
	int64_t x3278 = INT64_MIN;
	static uint32_t x3279 = 25167931U;
	uint8_t x3280 = 17U;
	int64_t t53 = -528LL;

	t53 = ((x3277/x3278)^(x3279>>x3280));

	if (t53 != 192LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3285 = 24244678U;
	int8_t x3286 = INT8_MIN;
	volatile uint8_t x3287 = UINT8_MAX;
	static uint8_t x3288 = 4U;
	uint32_t t54 = 29U;

	t54 = ((x3285/x3286)^(x3287>>x3288));

	if (t54 != 15U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x3329 = 0U;
	static int32_t x3330 = INT32_MIN;
	volatile uint32_t x3331 = 625286901U;
	static volatile uint64_t x3332 = 2LLU;
	volatile uint32_t t55 = 17493U;

	t55 = ((x3329/x3330)^(x3331>>x3332));

	if (t55 != 156321725U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3345 = 1;
	int8_t x3346 = INT8_MAX;
	uint16_t x3347 = UINT16_MAX;
	uint8_t x3348 = 7U;

	t56 = ((x3345/x3346)^(x3347>>x3348));

	if (t56 != 511) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x3361 = -111737519LL;
	int64_t x3362 = INT64_MIN;
	uint16_t x3363 = 3116U;
	volatile uint64_t x3364 = 1LLU;
	int64_t t57 = 1987412365155LL;

	t57 = ((x3361/x3362)^(x3363>>x3364));

	if (t57 != 1558LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x3378 = UINT16_MAX;
	uint8_t x3379 = 93U;
	static uint8_t x3380 = 2U;
	int64_t t58 = -18LL;

	t58 = ((x3377/x3378)^(x3379>>x3380));

	if (t58 != 23LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3405 = UINT64_MAX;
	static volatile int32_t x3406 = INT32_MIN;
	int8_t x3408 = 24;
	uint64_t t59 = 56857293LLU;

	t59 = ((x3405/x3406)^(x3407>>x3408));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x3429 = -1145944592112287289LL;
	int64_t x3430 = INT64_MIN;
	volatile int32_t x3431 = 141509;
	static volatile int64_t t60 = 864136167146LL;

	t60 = ((x3429/x3430)^(x3431>>x3432));

	if (t60 != 70754LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3473 = 3U;
	int16_t x3474 = -1;
	uint8_t x3475 = 7U;
	int8_t x3476 = 9;
	volatile int32_t t61 = -1814;

	t61 = ((x3473/x3474)^(x3475>>x3476));

	if (t61 != -3) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3477 = 173938918U;
	static uint32_t x3478 = 32682U;
	uint64_t x3479 = 7022325911858950LLU;
	uint64_t t62 = 7867049604752LLU;

	t62 = ((x3477/x3478)^(x3479>>x3480));

	if (t62 != 418566243LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3493 = 89134320LLU;
	volatile int16_t x3494 = -1;
	int16_t x3495 = INT16_MAX;

	t63 = ((x3493/x3494)^(x3495>>x3496));

	if (t63 != 16383LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3693 = INT16_MAX;
	static uint32_t x3694 = 9U;
	static uint8_t x3695 = 0U;
	uint32_t t64 = 0U;

	t64 = ((x3693/x3694)^(x3695>>x3696));

	if (t64 != 3640U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3697 = INT64_MAX;
	int32_t x3698 = INT32_MIN;
	int8_t x3699 = INT8_MAX;
	uint64_t x3700 = 1LLU;
	static volatile int64_t t65 = 119038115958686534LL;

	t65 = ((x3697/x3698)^(x3699>>x3700));

	if (t65 != -4294967234LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3821 = INT8_MIN;
	uint16_t x3822 = 17856U;
	uint64_t x3823 = 538724048014571762LLU;
	volatile uint64_t t66 = 128086LLU;

	t66 = ((x3821/x3822)^(x3823>>x3824));

	if (t66 != 538724048014571762LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3841 = -1;
	int64_t x3842 = INT64_MIN;
	static int32_t x3843 = INT32_MAX;
	int8_t x3844 = 25;
	volatile int64_t t67 = 998313303942451LL;

	t67 = ((x3841/x3842)^(x3843>>x3844));

	if (t67 != 63LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3853 = INT16_MIN;
	static uint64_t x3854 = 26LLU;
	static volatile uint32_t x3855 = 7428U;
	uint8_t x3856 = 27U;
	volatile uint64_t t68 = 11814409LLU;

	t68 = ((x3853/x3854)^(x3855>>x3856));

	if (t68 != 709490156681135340LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x3893 = INT32_MIN;
	int8_t x3894 = 7;
	uint8_t x3896 = 12U;

	t69 = ((x3893/x3894)^(x3895>>x3896));

	if (t69 != -307157871) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4016 = 17U;

	t70 = ((x4013/x4014)^(x4015>>x4016));

	if (t70 != -70368744177661LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x4058 = -1LL;
	int16_t x4059 = INT16_MAX;
	uint8_t x4060 = 5U;

	t71 = ((x4057/x4058)^(x4059>>x4060));

	if (t71 != 2150095544726977LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x4181 = 79098457155839449LLU;
	uint32_t x4182 = 1090U;
	uint16_t x4183 = 4447U;
	static volatile int16_t x4184 = 22;
	uint64_t t72 = 401423176359610LLU;

	t72 = ((x4181/x4182)^(x4183>>x4184));

	if (t72 != 72567391886091LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x4281 = UINT32_MAX;
	static int32_t x4282 = INT32_MIN;
	int64_t x4283 = INT64_MAX;
	uint8_t x4284 = 14U;

	t73 = ((x4281/x4282)^(x4283>>x4284));

	if (t73 != 562949953421310LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4357 = 44U;
	uint8_t x4359 = 2U;
	volatile uint16_t x4360 = 7U;
	volatile int32_t t74 = 48;

	t74 = ((x4357/x4358)^(x4359>>x4360));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4553 = -114;
	static volatile uint8_t x4554 = 1U;
	uint64_t x4555 = 464820994LLU;
	uint64_t x4556 = 27LLU;
	uint64_t t75 = 27510510018LLU;

	t75 = ((x4553/x4554)^(x4555>>x4556));

	if (t75 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4585 = -154LL;
	int16_t x4586 = INT16_MIN;
	uint8_t x4587 = 5U;
	int8_t x4588 = 15;
	int64_t t76 = -628971074LL;

	t76 = ((x4585/x4586)^(x4587>>x4588));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4605 = UINT64_MAX;
	uint64_t x4606 = UINT64_MAX;
	int16_t x4607 = 1316;
	uint8_t x4608 = 3U;

	t77 = ((x4605/x4606)^(x4607>>x4608));

	if (t77 != 165LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4654 = 2006082928373486LL;
	int8_t x4655 = INT8_MAX;
	uint64_t x4656 = 0LLU;
	static volatile int64_t t78 = 795763LL;

	t78 = ((x4653/x4654)^(x4655>>x4656));

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4709 = -55;
	uint32_t x4710 = UINT32_MAX;
	int32_t x4712 = 3;
	volatile uint32_t t79 = 64202168U;

	t79 = ((x4709/x4710)^(x4711>>x4712));

	if (t79 != 536870911U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x4741 = -1;
	static uint32_t x4743 = 62301993U;
	volatile uint8_t x4744 = 15U;
	uint32_t t80 = 176756679U;

	t80 = ((x4741/x4742)^(x4743>>x4744));

	if (t80 != 4294965394U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x4893 = -543881;
	volatile int16_t x4894 = INT16_MIN;
	int8_t x4896 = 1;

	t81 = ((x4893/x4894)^(x4895>>x4896));

	if (t81 != 43) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5121 = 8939815203754551LLU;
	int32_t x5122 = -1;
	int64_t x5123 = INT64_MAX;
	static int32_t x5124 = 5;
	static uint64_t t82 = 100037058952610LLU;

	t82 = ((x5121/x5122)^(x5123>>x5124));

	if (t82 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5185 = 0U;
	int32_t x5186 = -1;
	uint64_t x5187 = 382484LLU;
	static uint8_t x5188 = 15U;
	uint64_t t83 = 132LLU;

	t83 = ((x5185/x5186)^(x5187>>x5188));

	if (t83 != 11LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5233 = INT32_MIN;
	uint16_t x5235 = UINT16_MAX;
	uint64_t t84 = 1010LLU;

	t84 = ((x5233/x5234)^(x5235>>x5236));

	if (t84 != 12941119713LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5293 = INT64_MIN;
	uint32_t x5295 = 175179247U;
	volatile uint64_t x5296 = 4LLU;
	volatile int64_t t85 = 74379664957110LL;

	t85 = ((x5293/x5294)^(x5295>>x5296));

	if (t85 != 1314057858926520LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x5365 = -1;
	int64_t x5366 = 31456020550066300LL;
	static uint8_t x5367 = 0U;
	int16_t x5368 = 15;
	int64_t t86 = 192787823255LL;

	t86 = ((x5365/x5366)^(x5367>>x5368));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5455 = 1U;

	t87 = ((x5453/x5454)^(x5455>>x5456));

	if (t87 != 306783378U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x5457 = 0LL;
	int8_t x5458 = 2;
	volatile uint8_t x5459 = 34U;
	uint16_t x5460 = 25U;

	t88 = ((x5457/x5458)^(x5459>>x5460));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5513 = 40;
	uint16_t x5515 = 67U;
	static int32_t x5516 = 3;
	volatile int64_t t89 = 338857532968LL;

	t89 = ((x5513/x5514)^(x5515>>x5516));

	if (t89 != -48LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5517 = INT32_MIN;
	int64_t x5518 = INT64_MAX;

	t90 = ((x5517/x5518)^(x5519>>x5520));

	if (t90 != 951073317LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x5617 = 349934050;
	static uint64_t x5618 = UINT64_MAX;
	volatile uint8_t x5619 = 0U;
	int32_t x5620 = 1;
	volatile uint64_t t91 = 1028759983667237LLU;

	t91 = ((x5617/x5618)^(x5619>>x5620));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5638 = INT32_MIN;
	int16_t x5639 = 0;
	volatile uint32_t t92 = 206290717U;

	t92 = ((x5637/x5638)^(x5639>>x5640));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x5729 = 57;
	int8_t x5730 = -1;
	uint8_t x5732 = 1U;

	t93 = ((x5729/x5730)^(x5731>>x5732));

	if (t93 != 18424396334364189880LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5841 = INT32_MIN;
	int8_t x5842 = INT8_MIN;
	int32_t x5843 = 2454;
	uint16_t x5844 = 24U;
	volatile int32_t t94 = 1501762;

	t94 = ((x5841/x5842)^(x5843>>x5844));

	if (t94 != 16777216) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x6036 = 16U;
	volatile int32_t t95 = 1;

	t95 = ((x6033/x6034)^(x6035>>x6036));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x6049 = 19878123833LLU;
	int16_t x6050 = INT16_MIN;
	int32_t x6051 = INT32_MAX;
	uint64_t t96 = 19LLU;

	t96 = ((x6049/x6050)^(x6051>>x6052));

	if (t96 != 536870911LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x6061 = 19U;
	uint8_t x6064 = 7U;
	uint64_t t97 = 18825LLU;

	t97 = ((x6061/x6062)^(x6063>>x6064));

	if (t97 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x6089 = 0;
	int32_t x6090 = -27;
	uint32_t x6091 = UINT32_MAX;
	volatile uint32_t t98 = 1014U;

	t98 = ((x6089/x6090)^(x6091>>x6092));

	if (t98 != 511U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6141 = -1;
	int16_t x6142 = INT16_MAX;
	int8_t x6143 = INT8_MAX;
	uint16_t x6144 = 3U;
	volatile int32_t t99 = 24;

	t99 = ((x6141/x6142)^(x6143>>x6144));

	if (t99 != 15) { NG(); } else { ; }
	
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

