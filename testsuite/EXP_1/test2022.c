#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x102 = INT32_MIN;
uint32_t t2 = 504U;
uint16_t x156 = 11U;
int8_t x227 = 0;
volatile int32_t t4 = 3327138;
static volatile uint32_t x297 = UINT32_MAX;
uint32_t t5 = 58922206U;
volatile uint64_t x322 = UINT64_MAX;
int16_t x346 = 30;
uint32_t x348 = 29U;
volatile int32_t t7 = 6;
static int64_t x359 = -119316LL;
volatile uint64_t t8 = 0LLU;
int16_t x442 = INT16_MIN;
uint16_t x499 = 979U;
uint8_t x500 = 3U;
volatile int16_t x546 = INT16_MAX;
int32_t t12 = 0;
int32_t x587 = INT32_MIN;
int8_t x599 = INT8_MIN;
int32_t x626 = INT32_MIN;
uint64_t x629 = UINT64_MAX;
volatile int64_t x635 = 486456568157516LL;
uint32_t x653 = 4U;
uint16_t x737 = 5150U;
int32_t x791 = 6586754;
static uint8_t x853 = 1U;
static uint8_t x895 = UINT8_MAX;
int8_t x896 = 21;
static int64_t t27 = 2651243531000209LL;
int32_t x982 = INT32_MIN;
static uint32_t t30 = 28U;
static volatile int16_t x1022 = -29;
static int64_t x1038 = -29824427522LL;
int32_t x1057 = INT32_MAX;
volatile uint32_t t35 = 2859861U;
uint64_t x1074 = 20659LLU;
volatile uint16_t x1076 = 34U;
int32_t x1158 = -1;
int32_t t38 = -410023;
int32_t t39 = 32270613;
int64_t x1270 = -3094616525825LL;
uint8_t x1318 = 9U;
volatile uint8_t x1320 = 12U;
static int64_t x1373 = INT64_MAX;
static volatile uint64_t t43 = 2462269573257439LLU;
uint64_t x1490 = 999177LLU;
uint16_t x1506 = 0U;
uint8_t x1508 = 10U;
volatile int64_t x1535 = INT64_MIN;
static int64_t t50 = -4LL;
int64_t x1771 = INT64_MIN;
static uint8_t x1776 = 1U;
volatile uint32_t t53 = 596468317U;
int64_t x1862 = INT64_MIN;
uint8_t x2000 = 28U;
int64_t t57 = -15666210LL;
int32_t x2013 = INT32_MIN;
static int16_t x2118 = INT16_MIN;
int16_t x2142 = 1771;
int64_t x2194 = INT64_MAX;
uint64_t t64 = 119173LLU;
int64_t t65 = -15333303724253796LL;
static uint8_t x2388 = 2U;
uint8_t x2426 = 65U;
int16_t x2453 = INT16_MIN;
uint64_t t69 = 12796288171998606LLU;
int32_t x2458 = INT32_MIN;
int32_t t70 = -421625400;
int8_t x2487 = INT8_MIN;
uint64_t x2494 = 41562519LLU;
int16_t x2503 = INT16_MAX;
uint64_t x2638 = 30692773906599111LLU;
uint8_t x2640 = 3U;
uint64_t x2697 = UINT64_MAX;
int64_t x2698 = INT64_MIN;
static uint64_t t77 = 5LLU;
int16_t x2759 = 0;
int16_t x2789 = INT16_MIN;
uint64_t x2791 = UINT64_MAX;
uint16_t x2816 = 10U;
uint64_t x2926 = UINT64_MAX;
uint16_t x3077 = 2U;
volatile int64_t x3078 = INT64_MAX;
static int32_t x3261 = -1825;
volatile int64_t t84 = -60876410LL;
int64_t x3365 = INT64_MIN;
int16_t x3456 = 4;
static uint32_t x3521 = 16575U;
int32_t x3523 = 61010568;
volatile uint32_t t88 = 238U;
static int8_t x3544 = 50;
volatile uint32_t t90 = 87U;
static int8_t x3680 = 15;
int32_t t91 = 15385040;
int64_t x3683 = INT64_MIN;
static volatile int64_t t94 = 12636LL;
int64_t x3766 = INT64_MIN;
uint8_t x3796 = 21U;
volatile int16_t x3876 = 9;
uint8_t x3880 = 1U;
volatile int32_t t98 = 90;
volatile int8_t x3894 = INT8_MIN;


void f0(void) {
	int8_t x33 = 2;
	int32_t x34 = INT32_MIN;
	int32_t x35 = INT32_MIN;
	volatile int16_t x36 = 12;
	volatile int32_t t0 = 16;

	t0 = (((x33|x34)^x35)>>x36);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x101 = 14916;
	static int8_t x103 = -1;
	volatile uint16_t x104 = 0U;
	volatile int32_t t1 = 869850804;

	t1 = (((x101|x102)^x103)>>x104);

	if (t1 != 2147468731) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x129 = 614202U;
	static uint8_t x130 = 21U;
	uint8_t x131 = 1U;
	uint8_t x132 = 4U;

	t2 = (((x129|x130)^x131)>>x132);

	if (t2 != 38387U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x153 = -1;
	volatile int32_t x154 = -1;
	static int64_t x155 = -1LL;
	volatile int64_t t3 = 127839876544LL;

	t3 = (((x153|x154)^x155)>>x156);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x225 = INT8_MAX;
	int32_t x226 = 60;
	int8_t x228 = 0;

	t4 = (((x225|x226)^x227)>>x228);

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x298 = 86;
	uint8_t x299 = UINT8_MAX;
	volatile uint8_t x300 = 0U;

	t5 = (((x297|x298)^x299)>>x300);

	if (t5 != 4294967040U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x321 = -323390;
	int64_t x323 = INT64_MAX;
	uint8_t x324 = 0U;
	volatile uint64_t t6 = 992LLU;

	t6 = (((x321|x322)^x323)>>x324);

	if (t6 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x345 = -1;
	static volatile int16_t x347 = INT16_MIN;

	t7 = (((x345|x346)^x347)>>x348);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x357 = 3LLU;
	int8_t x358 = -11;
	volatile uint16_t x360 = 0U;

	t8 = (((x357|x358)^x359)>>x360);

	if (t8 != 119323LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x441 = 62U;
	int8_t x443 = INT8_MAX;
	uint8_t x444 = 0U;
	volatile uint32_t t9 = 13370U;

	t9 = (((x441|x442)^x443)>>x444);

	if (t9 != 4294934593U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x497 = INT64_MIN;
	static uint64_t x498 = UINT64_MAX;
	static volatile uint64_t t10 = 112893LLU;

	t10 = (((x497|x498)^x499)>>x500);

	if (t10 != 2305843009213693829LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x529 = INT32_MIN;
	uint64_t x530 = 4883738835052626049LLU;
	int8_t x531 = -1;
	uint8_t x532 = 4U;
	static volatile uint64_t t11 = 5903366243LLU;

	t11 = (((x529|x530)^x531)>>x532);

	if (t11 != 26118135LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x545 = UINT16_MAX;
	volatile int32_t x547 = 226;
	static volatile uint8_t x548 = 12U;

	t12 = (((x545|x546)^x547)>>x548);

	if (t12 != 15) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x569 = INT16_MIN;
	int8_t x570 = INT8_MIN;
	uint64_t x571 = 12564328185704753LLU;
	static int8_t x572 = 4;
	uint64_t t13 = 511901LLU;

	t13 = (((x569|x570)^x571)>>x572);

	if (t13 != 1152136234095240427LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x585 = -3;
	uint16_t x586 = 360U;
	static volatile int16_t x588 = 0;
	int32_t t14 = -29;

	t14 = (((x585|x586)^x587)>>x588);

	if (t14 != 2147483645) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x597 = INT64_MIN;
	uint64_t x598 = 8284LLU;
	int16_t x600 = 30;
	volatile uint64_t t15 = 3LLU;

	t15 = (((x597|x598)^x599)>>x600);

	if (t15 != 8589934591LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x625 = INT64_MIN;
	static volatile uint64_t x627 = 732834148684750698LLU;
	int8_t x628 = 1;
	volatile uint64_t t16 = 57LLU;

	t16 = (((x625|x626)^x627)>>x628);

	if (t16 != 8856954961566674869LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x630 = INT8_MAX;
	static uint64_t x631 = 2002124448665LLU;
	uint16_t x632 = 1U;
	volatile uint64_t t17 = 49709111262786LLU;

	t17 = (((x629|x630)^x631)>>x632);

	if (t17 != 9223371035792551475LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x633 = 307U;
	static uint16_t x634 = UINT16_MAX;
	uint8_t x636 = 14U;
	static volatile int64_t t18 = -4474610911717528278LL;

	t18 = (((x633|x634)^x635)>>x636);

	if (t18 != 29690952645LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x654 = INT8_MIN;
	uint8_t x655 = 4U;
	int32_t x656 = 5;
	volatile uint32_t t19 = 6103U;

	t19 = (((x653|x654)^x655)>>x656);

	if (t19 != 134217724U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x677 = INT8_MIN;
	uint8_t x678 = UINT8_MAX;
	int32_t x679 = INT32_MIN;
	volatile uint8_t x680 = 1U;
	static int32_t t20 = -13;

	t20 = (((x677|x678)^x679)>>x680);

	if (t20 != 1073741823) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x738 = 1009653LL;
	int16_t x739 = 6;
	uint8_t x740 = 0U;
	int64_t t21 = -1923935491LL;

	t21 = (((x737|x738)^x739)>>x740);

	if (t21 != 1013753LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x753 = INT16_MIN;
	int8_t x754 = -1;
	int16_t x755 = -1929;
	volatile uint8_t x756 = 14U;
	int32_t t22 = -191;

	t22 = (((x753|x754)^x755)>>x756);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x789 = 9U;
	uint64_t x790 = 9777LLU;
	int8_t x792 = 48;
	uint64_t t23 = 8822LLU;

	t23 = (((x789|x790)^x791)>>x792);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x805 = INT8_MAX;
	uint64_t x806 = 0LLU;
	int8_t x807 = INT8_MAX;
	uint8_t x808 = 30U;
	uint64_t t24 = 30LLU;

	t24 = (((x805|x806)^x807)>>x808);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x854 = 0U;
	uint16_t x855 = 1U;
	volatile int16_t x856 = 2;
	static volatile int32_t t25 = 744712;

	t25 = (((x853|x854)^x855)>>x856);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x893 = 1U;
	int32_t x894 = 20712;
	volatile uint32_t t26 = 9U;

	t26 = (((x893|x894)^x895)>>x896);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x909 = UINT32_MAX;
	int64_t x910 = INT64_MIN;
	int32_t x911 = INT32_MIN;
	volatile int16_t x912 = 19;

	t27 = (((x909|x910)^x911)>>x912);

	if (t27 != 17592186040319LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x969 = INT16_MAX;
	uint64_t x970 = 7LLU;
	static int16_t x971 = -1;
	int16_t x972 = 1;
	volatile uint64_t t28 = 81720LLU;

	t28 = (((x969|x970)^x971)>>x972);

	if (t28 != 9223372036854759424LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x981 = UINT8_MAX;
	uint64_t x983 = UINT64_MAX;
	int8_t x984 = 0;
	volatile uint64_t t29 = 256105LLU;

	t29 = (((x981|x982)^x983)>>x984);

	if (t29 != 2147483392LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x985 = UINT32_MAX;
	int16_t x986 = INT16_MIN;
	static int16_t x987 = INT16_MIN;
	uint8_t x988 = 1U;

	t30 = (((x985|x986)^x987)>>x988);

	if (t30 != 16383U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x993 = UINT16_MAX;
	int64_t x994 = 835598724620LL;
	int16_t x995 = INT16_MAX;
	int8_t x996 = 0;
	int64_t t31 = 1631LL;

	t31 = (((x993|x994)^x995)>>x996);

	if (t31 != 835598712832LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1021 = INT32_MIN;
	int64_t x1023 = INT64_MIN;
	int8_t x1024 = 1;
	int64_t t32 = -457LL;

	t32 = (((x1021|x1022)^x1023)>>x1024);

	if (t32 != 4611686018427387889LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1037 = 70097840U;
	uint64_t x1039 = 850982250LLU;
	static volatile uint16_t x1040 = 4U;
	uint64_t t33 = 279885804LLU;

	t33 = (((x1037|x1038)^x1039)>>x1040);

	if (t33 != 1152921502791529193LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1041 = INT32_MIN;
	uint16_t x1042 = UINT16_MAX;
	int8_t x1043 = INT8_MIN;
	uint64_t x1044 = 2LLU;
	static volatile int32_t t34 = 10;

	t34 = (((x1041|x1042)^x1043)>>x1044);

	if (t34 != 536854559) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1058 = UINT32_MAX;
	static int16_t x1059 = 1337;
	static uint32_t x1060 = 9U;

	t35 = (((x1057|x1058)^x1059)>>x1060);

	if (t35 != 8388605U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1073 = INT8_MIN;
	static volatile int32_t x1075 = -47807;
	uint64_t t36 = 57395435LLU;

	t36 = (((x1073|x1074)^x1075)>>x1076);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1157 = UINT16_MAX;
	int64_t x1159 = INT64_MIN;
	static int32_t x1160 = 0;
	volatile int64_t t37 = INT64_MAX;

	t37 = (((x1157|x1158)^x1159)>>x1160);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1181 = 36;
	int16_t x1182 = 849;
	static int16_t x1183 = 0;
	uint64_t x1184 = 10LLU;

	t38 = (((x1181|x1182)^x1183)>>x1184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1225 = UINT8_MAX;
	static int32_t x1226 = INT32_MAX;
	int32_t x1227 = 170224988;
	static uint16_t x1228 = 6U;

	t39 = (((x1225|x1226)^x1227)>>x1228);

	if (t39 != 30894666) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x1269 = INT8_MIN;
	int32_t x1271 = INT32_MIN;
	uint8_t x1272 = 2U;
	static volatile int64_t t40 = 33566LL;

	t40 = (((x1269|x1270)^x1271)>>x1272);

	if (t40 != 536870911LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1317 = -1;
	static int64_t x1319 = -1LL;
	int64_t t41 = 38807787LL;

	t41 = (((x1317|x1318)^x1319)>>x1320);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1374 = INT16_MIN;
	uint64_t x1375 = UINT64_MAX;
	uint32_t x1376 = 2U;
	uint64_t t42 = 32523LLU;

	t42 = (((x1373|x1374)^x1375)>>x1376);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1413 = -1;
	static volatile uint64_t x1414 = 267231581624687290LLU;
	uint8_t x1415 = UINT8_MAX;
	int32_t x1416 = 0;

	t43 = (((x1413|x1414)^x1415)>>x1416);

	if (t43 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1477 = -1LL;
	static volatile int16_t x1478 = -1;
	int64_t x1479 = INT64_MIN;
	int8_t x1480 = 0;
	int64_t t44 = INT64_MAX;

	t44 = (((x1477|x1478)^x1479)>>x1480);

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x1489 = 914214;
	int64_t x1491 = INT64_MIN;
	uint8_t x1492 = 3U;
	volatile uint64_t t45 = 127543350679181129LLU;

	t45 = (((x1489|x1490)^x1491)>>x1492);

	if (t45 != 1152921504606978021LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1505 = UINT32_MAX;
	uint16_t x1507 = 22994U;
	volatile uint32_t t46 = 14679U;

	t46 = (((x1505|x1506)^x1507)>>x1508);

	if (t46 != 4194281U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1521 = INT32_MAX;
	int8_t x1522 = 3;
	uint8_t x1523 = UINT8_MAX;
	volatile int64_t x1524 = 13LL;
	volatile int32_t t47 = -634396;

	t47 = (((x1521|x1522)^x1523)>>x1524);

	if (t47 != 262143) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x1533 = INT32_MIN;
	volatile uint8_t x1534 = 15U;
	uint16_t x1536 = 5U;
	int64_t t48 = -211486LL;

	t48 = (((x1533|x1534)^x1535)>>x1536);

	if (t48 != 288230376084602880LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1565 = 1U;
	int8_t x1566 = 25;
	int8_t x1567 = 18;
	uint16_t x1568 = 7U;
	int32_t t49 = -31717335;

	t49 = (((x1565|x1566)^x1567)>>x1568);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1577 = -1LL;
	uint8_t x1578 = 10U;
	int32_t x1579 = -1;
	uint8_t x1580 = 30U;

	t50 = (((x1577|x1578)^x1579)>>x1580);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x1761 = 1U;
	int64_t x1762 = 49350359LL;
	uint32_t x1763 = 63447456U;
	volatile int8_t x1764 = 58;
	volatile int64_t t51 = 18511549LL;

	t51 = (((x1761|x1762)^x1763)>>x1764);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x1769 = -1LL;
	int16_t x1770 = -1;
	int8_t x1772 = 9;
	volatile int64_t t52 = -346073860912437072LL;

	t52 = (((x1769|x1770)^x1771)>>x1772);

	if (t52 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x1773 = -1;
	uint32_t x1774 = 0U;
	volatile int16_t x1775 = 10864;

	t53 = (((x1773|x1774)^x1775)>>x1776);

	if (t53 != 2147478215U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1781 = -34702223661LL;
	uint64_t x1782 = 22531LLU;
	uint16_t x1783 = UINT16_MAX;
	volatile uint8_t x1784 = 0U;
	uint64_t t54 = 878476752954319357LLU;

	t54 = (((x1781|x1782)^x1783)>>x1784);

	if (t54 != 18446744039007363372LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1789 = 60U;
	uint16_t x1790 = 3844U;
	int32_t x1791 = -1;
	int8_t x1792 = 2;
	volatile uint32_t t55 = 184U;

	t55 = (((x1789|x1790)^x1791)>>x1792);

	if (t55 != 1073740848U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x1861 = INT32_MIN;
	int64_t x1863 = -1LL;
	static uint32_t x1864 = 13U;
	int64_t t56 = 44555964617LL;

	t56 = (((x1861|x1862)^x1863)>>x1864);

	if (t56 != 262143LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1997 = -4;
	int64_t x1998 = -936LL;
	int64_t x1999 = -1LL;

	t57 = (((x1997|x1998)^x1999)>>x2000);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x2014 = -1;
	uint32_t x2015 = UINT32_MAX;
	uint8_t x2016 = 0U;
	volatile uint32_t t58 = 1U;

	t58 = (((x2013|x2014)^x2015)>>x2016);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2117 = INT64_MAX;
	int8_t x2119 = INT8_MIN;
	static volatile int64_t x2120 = 4LL;
	int64_t t59 = 4LL;

	t59 = (((x2117|x2118)^x2119)>>x2120);

	if (t59 != 7LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x2141 = 2U;
	uint64_t x2143 = 4020LLU;
	volatile int16_t x2144 = 0;
	uint64_t t60 = 62661LLU;

	t60 = (((x2141|x2142)^x2143)>>x2144);

	if (t60 != 2399LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2173 = UINT16_MAX;
	uint8_t x2174 = UINT8_MAX;
	static uint64_t x2175 = 17715192093925287LLU;
	volatile int8_t x2176 = 0;
	static volatile uint64_t t61 = 592LLU;

	t61 = (((x2173|x2174)^x2175)>>x2176);

	if (t61 != 17715192093876312LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2193 = INT16_MAX;
	uint16_t x2195 = UINT16_MAX;
	uint64_t x2196 = 24LLU;
	int64_t t62 = -86715768457LL;

	t62 = (((x2193|x2194)^x2195)>>x2196);

	if (t62 != 549755813887LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2245 = -57264;
	static int8_t x2246 = -1;
	static int16_t x2247 = -2839;
	uint8_t x2248 = 0U;
	static volatile int32_t t63 = 14286;

	t63 = (((x2245|x2246)^x2247)>>x2248);

	if (t63 != 2838) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x2257 = INT8_MIN;
	volatile uint64_t x2258 = 34109LLU;
	int8_t x2259 = INT8_MIN;
	uint8_t x2260 = 43U;

	t64 = (((x2257|x2258)^x2259)>>x2260);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2317 = 18U;
	int64_t x2318 = INT64_MIN;
	int32_t x2319 = -1;
	static int8_t x2320 = 0;

	t65 = (((x2317|x2318)^x2319)>>x2320);

	if (t65 != 9223372036854775789LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2385 = INT64_MIN;
	uint64_t x2386 = UINT64_MAX;
	static int8_t x2387 = -1;
	volatile uint64_t t66 = 31LLU;

	t66 = (((x2385|x2386)^x2387)>>x2388);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x2425 = UINT64_MAX;
	int8_t x2427 = INT8_MIN;
	static uint8_t x2428 = 4U;
	uint64_t t67 = 13LLU;

	t67 = (((x2425|x2426)^x2427)>>x2428);

	if (t67 != 7LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2429 = UINT32_MAX;
	uint8_t x2430 = 97U;
	int64_t x2431 = 47159LL;
	int16_t x2432 = 50;
	int64_t t68 = -626LL;

	t68 = (((x2429|x2430)^x2431)>>x2432);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x2454 = 251LLU;
	int32_t x2455 = 60984;
	int8_t x2456 = 4;

	t69 = (((x2453|x2454)^x2455)>>x2456);

	if (t69 != 1152921504606844652LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x2457 = 2U;
	int16_t x2459 = -1;
	uint16_t x2460 = 5U;

	t70 = (((x2457|x2458)^x2459)>>x2460);

	if (t70 != 67108863) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x2485 = 29298625348753LLU;
	int16_t x2486 = 59;
	int8_t x2488 = 45;
	uint64_t t71 = 667010705336188LLU;

	t71 = (((x2485|x2486)^x2487)>>x2488);

	if (t71 != 524287LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2493 = INT8_MIN;
	static volatile int16_t x2495 = -1;
	static volatile uint8_t x2496 = 1U;
	volatile uint64_t t72 = 3193449151703232LLU;

	t72 = (((x2493|x2494)^x2495)>>x2496);

	if (t72 != 52LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x2501 = 24U;
	int16_t x2502 = INT16_MAX;
	int8_t x2504 = 14;
	volatile int32_t t73 = 5253;

	t73 = (((x2501|x2502)^x2503)>>x2504);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2549 = 46LL;
	int32_t x2550 = INT32_MAX;
	int8_t x2551 = 0;
	static volatile uint16_t x2552 = 15U;
	static int64_t t74 = 51023724415265LL;

	t74 = (((x2549|x2550)^x2551)>>x2552);

	if (t74 != 65535LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2613 = 430278591239408213LLU;
	static volatile int8_t x2614 = -6;
	uint16_t x2615 = 15U;
	volatile int64_t x2616 = 0LL;
	static volatile uint64_t t75 = 16760603767LLU;

	t75 = (((x2613|x2614)^x2615)>>x2616);

	if (t75 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x2637 = 26U;
	int64_t x2639 = INT64_MIN;
	uint64_t t76 = 348464317LLU;

	t76 = (((x2637|x2638)^x2639)>>x2640);

	if (t76 != 1156758101345171867LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2699 = -6983981034919663LL;
	volatile uint8_t x2700 = 9U;

	t77 = (((x2697|x2698)^x2699)>>x2700);

	if (t77 != 13640587958827LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x2757 = INT32_MAX;
	static volatile uint8_t x2758 = UINT8_MAX;
	uint16_t x2760 = 0U;
	static volatile int32_t t78 = INT32_MAX;

	t78 = (((x2757|x2758)^x2759)>>x2760);

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x2790 = INT16_MIN;
	int8_t x2792 = 10;
	static uint64_t t79 = 16937903LLU;

	t79 = (((x2789|x2790)^x2791)>>x2792);

	if (t79 != 31LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2813 = 677U;
	int64_t x2814 = -1LL;
	static int8_t x2815 = -9;
	volatile int64_t t80 = -230412429LL;

	t80 = (((x2813|x2814)^x2815)>>x2816);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x2857 = 144756400U;
	volatile uint64_t x2858 = UINT64_MAX;
	int8_t x2859 = INT8_MIN;
	uint16_t x2860 = 59U;
	volatile uint64_t t81 = 23768187109658LLU;

	t81 = (((x2857|x2858)^x2859)>>x2860);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2925 = 2U;
	int32_t x2927 = -489;
	static int32_t x2928 = 3;
	volatile uint64_t t82 = 53264867466LLU;

	t82 = (((x2925|x2926)^x2927)>>x2928);

	if (t82 != 61LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3079 = UINT32_MAX;
	uint8_t x3080 = 6U;
	volatile int64_t t83 = -15304907031422LL;

	t83 = (((x3077|x3078)^x3079)>>x3080);

	if (t83 != 144115188008747008LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x3262 = INT64_MAX;
	int16_t x3263 = INT16_MIN;
	int16_t x3264 = 1;

	t84 = (((x3261|x3262)^x3263)>>x3264);

	if (t84 != 16383LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3325 = 14U;
	volatile int64_t x3326 = INT64_MIN;
	volatile int8_t x3327 = INT8_MIN;
	static volatile uint32_t x3328 = 4U;
	static volatile int64_t t85 = 549LL;

	t85 = (((x3325|x3326)^x3327)>>x3328);

	if (t85 != 576460752303423480LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x3366 = UINT64_MAX;
	int32_t x3367 = -29124;
	uint16_t x3368 = 39U;
	uint64_t t86 = 1749836877LLU;

	t86 = (((x3365|x3366)^x3367)>>x3368);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x3453 = 2;
	static int64_t x3454 = INT64_MIN;
	int16_t x3455 = -1;
	int64_t t87 = -3017587LL;

	t87 = (((x3453|x3454)^x3455)>>x3456);

	if (t87 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3522 = UINT32_MAX;
	int8_t x3524 = 27;

	t88 = (((x3521|x3522)^x3523)>>x3524);

	if (t88 != 31U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x3541 = 156U;
	volatile uint8_t x3542 = UINT8_MAX;
	volatile uint64_t x3543 = 542975606375614LLU;
	uint64_t t89 = 675404506572LLU;

	t89 = (((x3541|x3542)^x3543)>>x3544);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x3621 = 0U;
	uint32_t x3622 = 582647568U;
	int32_t x3623 = -1;
	uint8_t x3624 = 21U;

	t90 = (((x3621|x3622)^x3623)>>x3624);

	if (t90 != 1770U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3677 = 46258320;
	volatile int8_t x3678 = -1;
	int32_t x3679 = -1;

	t91 = (((x3677|x3678)^x3679)>>x3680);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3681 = -1;
	volatile uint16_t x3682 = UINT16_MAX;
	int8_t x3684 = 2;
	volatile int64_t t92 = 537393721992942LL;

	t92 = (((x3681|x3682)^x3683)>>x3684);

	if (t92 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x3717 = UINT8_MAX;
	volatile int16_t x3718 = INT16_MAX;
	volatile uint8_t x3719 = UINT8_MAX;
	static int8_t x3720 = 1;
	int32_t t93 = 5281748;

	t93 = (((x3717|x3718)^x3719)>>x3720);

	if (t93 != 16256) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3741 = 258U;
	int64_t x3742 = -1LL;
	int32_t x3743 = -1;
	volatile uint16_t x3744 = 19U;

	t94 = (((x3741|x3742)^x3743)>>x3744);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3765 = INT16_MIN;
	int8_t x3767 = -1;
	int32_t x3768 = 53;
	int64_t t95 = 173931252LL;

	t95 = (((x3765|x3766)^x3767)>>x3768);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3793 = 0;
	int8_t x3794 = 1;
	volatile uint64_t x3795 = 9296824978LLU;
	uint64_t t96 = 22364786LLU;

	t96 = (((x3793|x3794)^x3795)>>x3796);

	if (t96 != 4433LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3873 = -1;
	uint64_t x3874 = 12LLU;
	int32_t x3875 = INT32_MIN;
	uint64_t t97 = 2409415024930651034LLU;

	t97 = (((x3873|x3874)^x3875)>>x3876);

	if (t97 != 4194303LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3877 = INT32_MIN;
	uint16_t x3878 = UINT16_MAX;
	int8_t x3879 = INT8_MIN;

	t98 = (((x3877|x3878)^x3879)>>x3880);

	if (t98 != 1073709119) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x3893 = 180LLU;
	uint8_t x3895 = UINT8_MAX;
	int8_t x3896 = 5;
	uint64_t t99 = 502563692285LLU;

	t99 = (((x3893|x3894)^x3895)>>x3896);

	if (t99 != 576460752303423482LLU) { NG(); } else { ; }
	
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

