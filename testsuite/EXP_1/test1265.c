#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x2 = 6046U;
volatile int16_t x4 = -1;
static int32_t x19 = 1;
int32_t t1 = 3;
static int8_t x55 = 2;
volatile uint16_t x180 = UINT16_MAX;
volatile int16_t x205 = -2;
volatile int8_t x207 = 28;
uint64_t t5 = 2100067388522006LLU;
volatile int32_t t6 = -389654005;
uint16_t x350 = 1U;
static uint16_t x357 = 31U;
int16_t x386 = INT16_MIN;
int64_t x424 = INT64_MIN;
int64_t t11 = -264LL;
volatile uint64_t t14 = 12593334LLU;
uint32_t x598 = 105482U;
volatile int8_t x630 = INT8_MAX;
int32_t t18 = 0;
int64_t x717 = 32723LL;
volatile int8_t x724 = INT8_MIN;
uint16_t x757 = 10U;
int8_t x863 = 3;
int32_t x880 = 10;
volatile int32_t t27 = -715122934;
int8_t x881 = INT8_MAX;
uint8_t x883 = 1U;
uint64_t x888 = 65529467548250LLU;
volatile uint64_t t29 = 114292LLU;
int64_t x890 = 10548115521LL;
static int32_t t30 = 228;
volatile int32_t t31 = -3;
static uint8_t x967 = 29U;
static uint8_t x1011 = 2U;
uint64_t x1016 = UINT64_MAX;
int8_t x1037 = -1;
int16_t x1174 = INT16_MIN;
int32_t x1197 = -1;
uint16_t x1250 = UINT16_MAX;
int8_t x1252 = -30;
static int64_t x1329 = 10446713181939LL;
static uint32_t x1330 = UINT32_MAX;
volatile int32_t t46 = 38067818;
uint64_t x1374 = 0LLU;
int32_t x1380 = INT32_MIN;
int8_t x1455 = 1;
static uint16_t x1484 = 552U;
uint64_t x1490 = UINT64_MAX;
int8_t x1492 = INT8_MIN;
int16_t x1559 = 18;
uint64_t x1560 = UINT64_MAX;
static volatile int32_t x1585 = 15852091;
uint8_t x1642 = 10U;
volatile uint16_t x1788 = UINT16_MAX;
uint16_t x1845 = UINT16_MAX;
static uint8_t x2071 = 2U;
int32_t x2074 = INT32_MAX;
int8_t x2153 = INT8_MIN;
static uint64_t x2156 = UINT64_MAX;
uint64_t t64 = 1LLU;
static int16_t x2197 = -5340;
int8_t x2251 = 27;
volatile int32_t t67 = -327;
static int16_t x2281 = INT16_MIN;
volatile uint64_t x2382 = 358465299640LLU;
int8_t x2407 = 3;
static uint8_t x2460 = 3U;
static volatile int32_t t75 = -460004;
volatile uint8_t x2511 = 9U;
int32_t t77 = 69651;
int64_t x2565 = -1LL;
int64_t t78 = -27LL;
volatile int32_t x2660 = 105629;
volatile int32_t t79 = -13;
int32_t t83 = 301298295;
uint8_t x2783 = 1U;
uint8_t x2784 = 28U;
static int64_t x2804 = INT64_MIN;
static int8_t x2857 = 11;
static uint32_t x2858 = UINT32_MAX;
int16_t x2870 = INT16_MAX;
uint32_t x2871 = 0U;
volatile uint32_t x2872 = 85U;
uint32_t x2958 = UINT32_MAX;
int64_t x2960 = 5LL;
int64_t t93 = 476414558337444614LL;
int16_t x3033 = 0;
static volatile uint32_t t96 = 0U;
int16_t x3193 = -8070;


void f0(void) {
	uint32_t x1 = 6486752U;
	int32_t x3 = 14;
	int32_t t0 = 107807807;

	t0 = (((x1==x2)>>x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x17 = 12U;
	uint16_t x18 = 28604U;
	uint16_t x20 = 1934U;

	t1 = (((x17==x18)>>x19)/x20);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x53 = -1;
	int32_t x54 = -8209615;
	volatile uint32_t x56 = 1012115U;
	static uint32_t t2 = 1026U;

	t2 = (((x53==x54)>>x55)/x56);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x177 = -8;
	static volatile int16_t x178 = -1;
	int8_t x179 = 3;
	volatile int32_t t3 = 0;

	t3 = (((x177==x178)>>x179)/x180);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x206 = -1LL;
	uint8_t x208 = 4U;
	int32_t t4 = -28187;

	t4 = (((x205==x206)>>x207)/x208);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x233 = INT8_MIN;
	volatile int8_t x234 = 1;
	volatile uint8_t x235 = 9U;
	static uint64_t x236 = 52449611LLU;

	t5 = (((x233==x234)>>x235)/x236);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x245 = INT32_MAX;
	uint8_t x246 = 21U;
	uint32_t x247 = 2U;
	static int32_t x248 = INT32_MIN;

	t6 = (((x245==x246)>>x247)/x248);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x349 = 3;
	uint8_t x351 = 3U;
	int64_t x352 = INT64_MIN;
	int64_t t7 = -39078237985585812LL;

	t7 = (((x349==x350)>>x351)/x352);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x358 = INT16_MIN;
	uint32_t x359 = 14U;
	static uint16_t x360 = 2134U;
	volatile int32_t t8 = 268;

	t8 = (((x357==x358)>>x359)/x360);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x385 = INT8_MAX;
	uint8_t x387 = 1U;
	volatile int32_t x388 = -1;
	int32_t t9 = -484280;

	t9 = (((x385==x386)>>x387)/x388);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x393 = INT8_MIN;
	uint8_t x394 = 1U;
	uint16_t x395 = 5U;
	uint16_t x396 = UINT16_MAX;
	static int32_t t10 = 23227;

	t10 = (((x393==x394)>>x395)/x396);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x421 = 433408466528537799LLU;
	static int16_t x422 = INT16_MIN;
	volatile uint8_t x423 = 0U;

	t11 = (((x421==x422)>>x423)/x424);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x429 = 1;
	static int32_t x430 = INT32_MIN;
	volatile uint32_t x431 = 7U;
	volatile int16_t x432 = INT16_MAX;
	volatile int32_t t12 = 1;

	t12 = (((x429==x430)>>x431)/x432);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x517 = 1U;
	volatile int32_t x518 = 793;
	uint32_t x519 = 0U;
	int8_t x520 = INT8_MIN;
	int32_t t13 = 1500;

	t13 = (((x517==x518)>>x519)/x520);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x561 = 24U;
	static int32_t x562 = INT32_MIN;
	uint8_t x563 = 0U;
	static uint64_t x564 = 8668053797976889LLU;

	t14 = (((x561==x562)>>x563)/x564);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x573 = UINT8_MAX;
	int64_t x574 = 41542728936446LL;
	uint8_t x575 = 19U;
	int64_t x576 = -1LL;
	int64_t t15 = -7516LL;

	t15 = (((x573==x574)>>x575)/x576);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x593 = INT8_MIN;
	static volatile int16_t x594 = 39;
	int8_t x595 = 0;
	int64_t x596 = INT64_MAX;
	int64_t t16 = -8412730519105LL;

	t16 = (((x593==x594)>>x595)/x596);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x597 = UINT64_MAX;
	uint8_t x599 = 26U;
	static uint8_t x600 = 82U;
	volatile int32_t t17 = 2156;

	t17 = (((x597==x598)>>x599)/x600);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x629 = INT32_MAX;
	static uint16_t x631 = 0U;
	static volatile int32_t x632 = -2;

	t18 = (((x629==x630)>>x631)/x632);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x681 = 591599179U;
	int32_t x682 = -1;
	uint8_t x683 = 1U;
	static volatile int32_t x684 = -142286239;
	int32_t t19 = -61;

	t19 = (((x681==x682)>>x683)/x684);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x701 = -389829;
	uint64_t x702 = 13371533140809724LLU;
	int32_t x703 = 1;
	volatile int32_t x704 = INT32_MIN;
	static volatile int32_t t20 = -208;

	t20 = (((x701==x702)>>x703)/x704);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x705 = INT32_MAX;
	uint64_t x706 = UINT64_MAX;
	static uint16_t x707 = 3U;
	int8_t x708 = INT8_MAX;
	int32_t t21 = 2794;

	t21 = (((x705==x706)>>x707)/x708);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x718 = INT32_MIN;
	uint8_t x719 = 5U;
	static uint64_t x720 = 2135937502LLU;
	uint64_t t22 = 126LLU;

	t22 = (((x717==x718)>>x719)/x720);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x721 = INT8_MAX;
	static int32_t x722 = -1;
	uint8_t x723 = 6U;
	int32_t t23 = 20;

	t23 = (((x721==x722)>>x723)/x724);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x758 = 432394U;
	uint8_t x759 = 20U;
	volatile int8_t x760 = INT8_MIN;
	int32_t t24 = -3568;

	t24 = (((x757==x758)>>x759)/x760);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x833 = INT32_MIN;
	volatile int16_t x834 = -1;
	static uint8_t x835 = 1U;
	static int32_t x836 = INT32_MAX;
	int32_t t25 = -735;

	t25 = (((x833==x834)>>x835)/x836);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x861 = UINT64_MAX;
	volatile uint32_t x862 = 9411U;
	static int32_t x864 = INT32_MAX;
	static int32_t t26 = 0;

	t26 = (((x861==x862)>>x863)/x864);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x877 = INT32_MAX;
	int8_t x878 = -1;
	static int8_t x879 = 2;

	t27 = (((x877==x878)>>x879)/x880);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x882 = 1U;
	int8_t x884 = -1;
	int32_t t28 = -22;

	t28 = (((x881==x882)>>x883)/x884);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x885 = 418188774LL;
	int64_t x886 = INT64_MAX;
	static int8_t x887 = 0;

	t29 = (((x885==x886)>>x887)/x888);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x889 = 1004;
	uint8_t x891 = 21U;
	static int8_t x892 = -1;

	t30 = (((x889==x890)>>x891)/x892);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x897 = INT16_MAX;
	uint16_t x898 = 314U;
	volatile uint8_t x899 = 6U;
	int16_t x900 = 49;

	t31 = (((x897==x898)>>x899)/x900);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x917 = -1;
	int32_t x918 = INT32_MIN;
	volatile int16_t x919 = 1;
	int64_t x920 = -1LL;
	static int64_t t32 = 4157943930340842027LL;

	t32 = (((x917==x918)>>x919)/x920);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x965 = INT8_MAX;
	int32_t x966 = INT32_MIN;
	uint16_t x968 = UINT16_MAX;
	int32_t t33 = -13755;

	t33 = (((x965==x966)>>x967)/x968);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x989 = INT16_MAX;
	uint8_t x990 = UINT8_MAX;
	volatile uint16_t x991 = 7U;
	int16_t x992 = INT16_MAX;
	int32_t t34 = -1339316;

	t34 = (((x989==x990)>>x991)/x992);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1001 = -5;
	int64_t x1002 = -27LL;
	int16_t x1003 = 3;
	int16_t x1004 = INT16_MIN;
	volatile int32_t t35 = -19505;

	t35 = (((x1001==x1002)>>x1003)/x1004);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1009 = INT64_MIN;
	int64_t x1010 = INT64_MIN;
	static int32_t x1012 = INT32_MIN;
	int32_t t36 = 6;

	t36 = (((x1009==x1010)>>x1011)/x1012);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1013 = 1U;
	int8_t x1014 = 3;
	static int16_t x1015 = 0;
	uint64_t t37 = 2370657872871054273LLU;

	t37 = (((x1013==x1014)>>x1015)/x1016);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1038 = -1LL;
	volatile uint8_t x1039 = 1U;
	int32_t x1040 = -1;
	static int32_t t38 = 514566056;

	t38 = (((x1037==x1038)>>x1039)/x1040);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x1073 = -1;
	int8_t x1074 = INT8_MIN;
	uint8_t x1075 = 10U;
	static int8_t x1076 = -1;
	static int32_t t39 = 40;

	t39 = (((x1073==x1074)>>x1075)/x1076);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x1153 = INT64_MIN;
	static uint64_t x1154 = 1836214129LLU;
	volatile uint8_t x1155 = 0U;
	volatile uint32_t x1156 = 11255U;
	volatile uint32_t t40 = 1732608U;

	t40 = (((x1153==x1154)>>x1155)/x1156);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1173 = -27LL;
	uint16_t x1175 = 3U;
	volatile int16_t x1176 = INT16_MAX;
	static volatile int32_t t41 = -1017801878;

	t41 = (((x1173==x1174)>>x1175)/x1176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x1198 = -1;
	volatile uint64_t x1199 = 1LLU;
	static volatile uint8_t x1200 = 1U;
	volatile int32_t t42 = -3409;

	t42 = (((x1197==x1198)>>x1199)/x1200);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x1249 = UINT8_MAX;
	int8_t x1251 = 0;
	int32_t t43 = -35;

	t43 = (((x1249==x1250)>>x1251)/x1252);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1257 = INT16_MIN;
	int8_t x1258 = -1;
	volatile int8_t x1259 = 1;
	uint8_t x1260 = UINT8_MAX;
	int32_t t44 = -187;

	t44 = (((x1257==x1258)>>x1259)/x1260);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1277 = -1;
	int64_t x1278 = INT64_MAX;
	int16_t x1279 = 5;
	static volatile int16_t x1280 = 869;
	volatile int32_t t45 = 171952;

	t45 = (((x1277==x1278)>>x1279)/x1280);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x1331 = 15;
	volatile int16_t x1332 = -20;

	t46 = (((x1329==x1330)>>x1331)/x1332);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x1373 = INT16_MAX;
	uint8_t x1375 = 4U;
	int64_t x1376 = -1LL;
	static volatile int64_t t47 = -1LL;

	t47 = (((x1373==x1374)>>x1375)/x1376);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1377 = 0U;
	uint64_t x1378 = 4343398673608734LLU;
	uint16_t x1379 = 7U;
	int32_t t48 = -2244605;

	t48 = (((x1377==x1378)>>x1379)/x1380);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x1453 = INT64_MIN;
	int32_t x1454 = INT32_MIN;
	int32_t x1456 = 106613547;
	volatile int32_t t49 = 8;

	t49 = (((x1453==x1454)>>x1455)/x1456);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1481 = -54;
	int64_t x1482 = 7858002965LL;
	uint8_t x1483 = 0U;
	volatile int32_t t50 = 350;

	t50 = (((x1481==x1482)>>x1483)/x1484);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x1489 = -1LL;
	uint8_t x1491 = 0U;
	volatile int32_t t51 = 234;

	t51 = (((x1489==x1490)>>x1491)/x1492);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1557 = -1317717949051602215LL;
	int32_t x1558 = INT32_MAX;
	static volatile uint64_t t52 = 24783498LLU;

	t52 = (((x1557==x1558)>>x1559)/x1560);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1561 = 2011381254320LLU;
	static int32_t x1562 = INT32_MIN;
	volatile int32_t x1563 = 0;
	uint32_t x1564 = 957U;
	uint32_t t53 = 70878558U;

	t53 = (((x1561==x1562)>>x1563)/x1564);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x1586 = 3;
	int8_t x1587 = 23;
	int16_t x1588 = INT16_MIN;
	int32_t t54 = 909841;

	t54 = (((x1585==x1586)>>x1587)/x1588);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1593 = UINT32_MAX;
	volatile int32_t x1594 = INT32_MIN;
	static volatile uint8_t x1595 = 3U;
	static uint32_t x1596 = UINT32_MAX;
	uint32_t t55 = 20U;

	t55 = (((x1593==x1594)>>x1595)/x1596);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1641 = 83U;
	volatile uint16_t x1643 = 15U;
	uint64_t x1644 = UINT64_MAX;
	volatile uint64_t t56 = 194195532LLU;

	t56 = (((x1641==x1642)>>x1643)/x1644);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x1785 = 131293U;
	static volatile int8_t x1786 = INT8_MAX;
	uint16_t x1787 = 13U;
	static volatile int32_t t57 = -98718;

	t57 = (((x1785==x1786)>>x1787)/x1788);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1846 = 1U;
	uint8_t x1847 = 0U;
	int16_t x1848 = INT16_MIN;
	static volatile int32_t t58 = 25;

	t58 = (((x1845==x1846)>>x1847)/x1848);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1849 = INT16_MIN;
	int64_t x1850 = -1LL;
	static int8_t x1851 = 1;
	int8_t x1852 = -1;
	int32_t t59 = 163393;

	t59 = (((x1849==x1850)>>x1851)/x1852);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x1993 = 3U;
	int16_t x1994 = INT16_MIN;
	uint8_t x1995 = 9U;
	int16_t x1996 = INT16_MAX;
	static volatile int32_t t60 = -1;

	t60 = (((x1993==x1994)>>x1995)/x1996);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2069 = 2629LLU;
	int8_t x2070 = 0;
	volatile uint8_t x2072 = 60U;
	volatile int32_t t61 = -517310860;

	t61 = (((x2069==x2070)>>x2071)/x2072);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x2073 = INT64_MAX;
	int8_t x2075 = 1;
	volatile int16_t x2076 = INT16_MIN;
	int32_t t62 = 203635;

	t62 = (((x2073==x2074)>>x2075)/x2076);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2093 = INT16_MAX;
	static int32_t x2094 = INT32_MIN;
	int32_t x2095 = 2;
	static uint64_t x2096 = UINT64_MAX;
	static volatile uint64_t t63 = 30066LLU;

	t63 = (((x2093==x2094)>>x2095)/x2096);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2154 = UINT32_MAX;
	static uint16_t x2155 = 1U;

	t64 = (((x2153==x2154)>>x2155)/x2156);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2189 = -2;
	static uint64_t x2190 = 26137256452252330LLU;
	int8_t x2191 = 6;
	int32_t x2192 = INT32_MIN;
	static int32_t t65 = 1137504;

	t65 = (((x2189==x2190)>>x2191)/x2192);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2198 = UINT32_MAX;
	static volatile uint8_t x2199 = 5U;
	int64_t x2200 = INT64_MIN;
	static int64_t t66 = -1136027973LL;

	t66 = (((x2197==x2198)>>x2199)/x2200);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2249 = -1;
	int8_t x2250 = -1;
	volatile int32_t x2252 = -1;

	t67 = (((x2249==x2250)>>x2251)/x2252);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2282 = 16907420LLU;
	int16_t x2283 = 3;
	uint16_t x2284 = UINT16_MAX;
	static volatile int32_t t68 = -6;

	t68 = (((x2281==x2282)>>x2283)/x2284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x2301 = -1;
	static uint64_t x2302 = 122478691147LLU;
	static int16_t x2303 = 0;
	volatile int64_t x2304 = -20LL;
	volatile int64_t t69 = -13LL;

	t69 = (((x2301==x2302)>>x2303)/x2304);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2305 = INT16_MIN;
	uint16_t x2306 = UINT16_MAX;
	int8_t x2307 = 2;
	volatile int8_t x2308 = 8;
	static volatile int32_t t70 = -4946967;

	t70 = (((x2305==x2306)>>x2307)/x2308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x2333 = 237897567601LLU;
	int16_t x2334 = 2029;
	uint16_t x2335 = 20U;
	int8_t x2336 = INT8_MAX;
	volatile int32_t t71 = -117;

	t71 = (((x2333==x2334)>>x2335)/x2336);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x2381 = 13U;
	uint8_t x2383 = 2U;
	static uint32_t x2384 = 3U;
	uint32_t t72 = 75644U;

	t72 = (((x2381==x2382)>>x2383)/x2384);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2393 = -2;
	uint32_t x2394 = UINT32_MAX;
	uint8_t x2395 = 0U;
	volatile int8_t x2396 = 20;
	static volatile int32_t t73 = -634;

	t73 = (((x2393==x2394)>>x2395)/x2396);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2405 = -1LL;
	int16_t x2406 = INT16_MIN;
	int8_t x2408 = -20;
	int32_t t74 = -1538171;

	t74 = (((x2405==x2406)>>x2407)/x2408);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2457 = INT8_MAX;
	int64_t x2458 = INT64_MIN;
	int8_t x2459 = 1;

	t75 = (((x2457==x2458)>>x2459)/x2460);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2509 = INT32_MIN;
	static volatile int16_t x2510 = INT16_MAX;
	volatile int16_t x2512 = INT16_MAX;
	volatile int32_t t76 = -9;

	t76 = (((x2509==x2510)>>x2511)/x2512);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x2517 = 2720U;
	int16_t x2518 = INT16_MAX;
	uint32_t x2519 = 30U;
	volatile int32_t x2520 = -1;

	t77 = (((x2517==x2518)>>x2519)/x2520);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2566 = -37;
	uint8_t x2567 = 5U;
	static int64_t x2568 = INT64_MAX;

	t78 = (((x2565==x2566)>>x2567)/x2568);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2657 = -381647LL;
	static int64_t x2658 = -912450LL;
	int16_t x2659 = 27;

	t79 = (((x2657==x2658)>>x2659)/x2660);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x2661 = INT16_MIN;
	int32_t x2662 = INT32_MIN;
	static int16_t x2663 = 0;
	int16_t x2664 = -31;
	volatile int32_t t80 = 167;

	t80 = (((x2661==x2662)>>x2663)/x2664);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x2685 = UINT8_MAX;
	uint16_t x2686 = UINT16_MAX;
	int32_t x2687 = 1;
	int16_t x2688 = INT16_MAX;
	int32_t t81 = 1066714;

	t81 = (((x2685==x2686)>>x2687)/x2688);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x2697 = INT8_MIN;
	int32_t x2698 = -1;
	volatile uint8_t x2699 = 1U;
	volatile int16_t x2700 = INT16_MAX;
	static volatile int32_t t82 = 706118226;

	t82 = (((x2697==x2698)>>x2699)/x2700);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2741 = -124545192415752793LL;
	int32_t x2742 = INT32_MIN;
	uint8_t x2743 = 1U;
	int16_t x2744 = -1281;

	t83 = (((x2741==x2742)>>x2743)/x2744);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x2753 = -1;
	static volatile int16_t x2754 = -1;
	uint32_t x2755 = 1U;
	uint8_t x2756 = 3U;
	int32_t t84 = -9465;

	t84 = (((x2753==x2754)>>x2755)/x2756);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2781 = INT32_MAX;
	int16_t x2782 = INT16_MIN;
	volatile int32_t t85 = -135;

	t85 = (((x2781==x2782)>>x2783)/x2784);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x2801 = INT8_MIN;
	volatile int8_t x2802 = INT8_MAX;
	uint8_t x2803 = 9U;
	static int64_t t86 = 319535LL;

	t86 = (((x2801==x2802)>>x2803)/x2804);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x2859 = 26U;
	volatile int8_t x2860 = INT8_MIN;
	static volatile int32_t t87 = 30;

	t87 = (((x2857==x2858)>>x2859)/x2860);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2869 = INT16_MAX;
	uint32_t t88 = 44U;

	t88 = (((x2869==x2870)>>x2871)/x2872);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x2877 = INT32_MIN;
	int32_t x2878 = INT32_MIN;
	int8_t x2879 = 2;
	static int32_t x2880 = -24933;
	int32_t t89 = -29845;

	t89 = (((x2877==x2878)>>x2879)/x2880);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x2957 = -618994237;
	uint8_t x2959 = 2U;
	static int64_t t90 = 398813524368003591LL;

	t90 = (((x2957==x2958)>>x2959)/x2960);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2977 = INT16_MAX;
	volatile int32_t x2978 = INT32_MAX;
	volatile uint8_t x2979 = 12U;
	static volatile uint32_t x2980 = 9308U;
	uint32_t t91 = 16759337U;

	t91 = (((x2977==x2978)>>x2979)/x2980);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x2989 = INT8_MAX;
	volatile uint32_t x2990 = UINT32_MAX;
	uint8_t x2991 = 3U;
	uint64_t x2992 = 8388749763LLU;
	uint64_t t92 = 36660080LLU;

	t92 = (((x2989==x2990)>>x2991)/x2992);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3001 = 169;
	int32_t x3002 = INT32_MIN;
	uint16_t x3003 = 3U;
	int64_t x3004 = INT64_MAX;

	t93 = (((x3001==x3002)>>x3003)/x3004);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3005 = -1;
	volatile uint16_t x3006 = 6676U;
	uint8_t x3007 = 1U;
	volatile int64_t x3008 = -1LL;
	volatile int64_t t94 = 12852592808LL;

	t94 = (((x3005==x3006)>>x3007)/x3008);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3034 = 104401;
	static uint8_t x3035 = 3U;
	int32_t x3036 = INT32_MIN;
	volatile int32_t t95 = 12;

	t95 = (((x3033==x3034)>>x3035)/x3036);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x3053 = -22;
	uint8_t x3054 = 21U;
	static int8_t x3055 = 28;
	uint32_t x3056 = 21459898U;

	t96 = (((x3053==x3054)>>x3055)/x3056);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x3117 = INT8_MAX;
	int8_t x3118 = INT8_MIN;
	int8_t x3119 = 3;
	static int8_t x3120 = -1;
	volatile int32_t t97 = -24564;

	t97 = (((x3117==x3118)>>x3119)/x3120);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x3145 = INT64_MAX;
	int16_t x3146 = INT16_MIN;
	uint16_t x3147 = 12U;
	volatile int32_t x3148 = 41311;
	static volatile int32_t t98 = 324;

	t98 = (((x3145==x3146)>>x3147)/x3148);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x3194 = UINT64_MAX;
	uint64_t x3195 = 18LLU;
	static int8_t x3196 = INT8_MIN;
	volatile int32_t t99 = 3;

	t99 = (((x3193==x3194)>>x3195)/x3196);

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

