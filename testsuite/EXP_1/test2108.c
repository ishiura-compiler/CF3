#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x9 = -1;
static int16_t x11 = 0;
static volatile int64_t x57 = INT64_MIN;
int64_t x58 = INT64_MIN;
volatile int64_t t2 = -13743946914840483LL;
uint8_t x78 = UINT8_MAX;
static int32_t x233 = -1315255;
volatile uint64_t t6 = 383025524LLU;
static volatile uint64_t t7 = 10242511418LLU;
uint8_t x379 = 14U;
static int64_t x380 = INT64_MAX;
static uint8_t x387 = 13U;
uint16_t x464 = UINT16_MAX;
static volatile uint64_t t10 = 6293LLU;
volatile int16_t x466 = -35;
uint32_t x497 = UINT32_MAX;
int8_t x498 = -1;
int16_t x499 = 0;
int64_t t15 = 6728LL;
uint8_t x639 = 2U;
static uint64_t t17 = 1608125849808540692LLU;
int32_t t18 = 11143;
int64_t x732 = -1042330482731800LL;
uint64_t x750 = UINT64_MAX;
int32_t x886 = -1;
volatile uint32_t x897 = 224400527U;
static volatile uint32_t t23 = 371U;
volatile uint32_t t28 = 2675071U;
volatile int8_t x1201 = -1;
int64_t x1202 = -84LL;
uint64_t x1214 = UINT64_MAX;
int16_t x1216 = INT16_MIN;
static volatile int8_t x1249 = INT8_MIN;
uint32_t x1250 = 4U;
int32_t x1251 = 2;
uint32_t x1252 = 20894U;
uint32_t t32 = 269U;
int16_t x1336 = -1;
volatile uint64_t t35 = 101LLU;
uint64_t x1493 = UINT64_MAX;
volatile uint32_t x1541 = UINT32_MAX;
volatile uint32_t t37 = 112U;
int32_t x1562 = 7;
uint8_t x1563 = 7U;
int8_t x1609 = -1;
uint8_t x1611 = 2U;
int64_t t40 = -1026581LL;
int32_t x1628 = INT32_MIN;
int16_t x1645 = 1;
uint32_t x1758 = UINT32_MAX;
int64_t x1777 = 38717629372100758LL;
volatile int8_t x1780 = 56;
uint8_t x1915 = 0U;
static volatile uint64_t t51 = 61321LLU;
uint64_t x2033 = 138420059533525085LLU;
uint64_t x2034 = UINT64_MAX;
uint8_t x2035 = 0U;
int16_t x2042 = -1;
uint8_t x2065 = 68U;
static int64_t x2068 = INT64_MAX;
volatile int32_t x2218 = -1;
volatile int8_t x2338 = -1;
uint64_t x2349 = 7628225323920LLU;
static volatile int16_t x2551 = 0;
int32_t x2592 = -1;
uint64_t t63 = 112319LLU;
static int16_t x2607 = 7;
int8_t x2608 = INT8_MIN;
static int16_t x2623 = 7;
int8_t x2650 = INT8_MIN;
volatile uint32_t x2713 = 12792U;
uint8_t x2715 = 5U;
int64_t t69 = 598337973020765268LL;
static uint8_t x2799 = 0U;
uint64_t t70 = 7737781157903721LLU;
volatile int8_t x2822 = -4;
uint64_t x2833 = 249LLU;
static volatile uint8_t x2836 = 2U;
volatile int64_t x3110 = -13863LL;
int32_t x3112 = INT32_MAX;
uint8_t x3160 = 6U;
static volatile uint64_t t78 = 3510255731062474681LLU;
volatile int8_t x3224 = 41;
int32_t t79 = -995;
uint16_t x3301 = 14U;
int64_t x3381 = INT64_MAX;
volatile int8_t x3384 = 7;
int64_t x3433 = INT64_MIN;
static int16_t x3434 = -1;
int16_t x3471 = 23;
uint64_t x3505 = 95119652475538LLU;
int16_t x3506 = -13240;
int64_t x3533 = INT64_MIN;
int8_t x3535 = 23;
int16_t x3536 = -429;
static int64_t t88 = 172089241777014569LL;
volatile int8_t x3578 = INT8_MIN;
int32_t x3580 = INT32_MAX;
static uint8_t x3675 = 15U;
static uint8_t x3719 = 2U;
int64_t x3746 = INT64_MAX;
int16_t x3755 = 14;
volatile uint32_t x3806 = 2406293U;
int8_t x3807 = 52;
static uint64_t t95 = 5371685701020245974LLU;
static volatile uint64_t t96 = 1910265077760962LLU;
int64_t x4030 = INT64_MAX;


void f0(void) {
	int8_t x10 = INT8_MIN;
	volatile uint8_t x12 = 1U;
	static volatile int32_t t0 = 15529835;

	t0 = (((x9^x10)>>x11)-x12);

	if (t0 != 126) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x13 = 0;
	uint8_t x14 = 28U;
	volatile uint8_t x15 = 24U;
	static int8_t x16 = 10;
	volatile int32_t t1 = -139977;

	t1 = (((x13^x14)>>x15)-x16);

	if (t1 != -10) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x59 = 20U;
	uint32_t x60 = 43U;

	t2 = (((x57^x58)>>x59)-x60);

	if (t2 != -43LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x69 = UINT16_MAX;
	int64_t x70 = INT64_MAX;
	uint16_t x71 = 10U;
	int32_t x72 = INT32_MIN;
	volatile int64_t t3 = 3642155LL;

	t3 = (((x69^x70)>>x71)-x72);

	if (t3 != 9007201402224576LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x77 = INT16_MAX;
	uint8_t x79 = 3U;
	int32_t x80 = -1;
	volatile int32_t t4 = -6756044;

	t4 = (((x77^x78)>>x79)-x80);

	if (t4 != 4065) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x221 = UINT16_MAX;
	uint32_t x222 = 261792U;
	int8_t x223 = 1;
	uint64_t x224 = 6749537692LLU;
	volatile uint64_t t5 = 11208888653LLU;

	t5 = (((x221^x222)>>x223)-x224);

	if (t5 != 18446744066960112403LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x234 = 13008979465408LLU;
	volatile uint8_t x235 = 37U;
	int32_t x236 = INT32_MIN;

	t6 = (((x233^x234)>>x235)-x236);

	if (t6 != 2281701281LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x257 = UINT32_MAX;
	volatile uint64_t x258 = UINT64_MAX;
	static uint16_t x259 = 1U;
	volatile int32_t x260 = -1;

	t7 = (((x257^x258)>>x259)-x260);

	if (t7 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x377 = -1;
	static int64_t x378 = -1LL;
	volatile int64_t t8 = 1855666973181713LL;

	t8 = (((x377^x378)>>x379)-x380);

	if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x385 = -1LL;
	int64_t x386 = INT64_MIN;
	int16_t x388 = -98;
	volatile int64_t t9 = 3461929LL;

	t9 = (((x385^x386)>>x387)-x388);

	if (t9 != 1125899906842721LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x461 = 27210558LLU;
	volatile int8_t x462 = 3;
	static volatile int8_t x463 = 24;

	t10 = (((x461^x462)>>x463)-x464);

	if (t10 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x465 = -1;
	int8_t x467 = 9;
	static int64_t x468 = 9885133457434302LL;
	int64_t t11 = 580538779525250042LL;

	t11 = (((x465^x466)>>x467)-x468);

	if (t11 != -9885133457434302LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x500 = 14U;
	static volatile uint32_t t12 = 666338981U;

	t12 = (((x497^x498)>>x499)-x500);

	if (t12 != 4294967282U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x513 = INT32_MAX;
	int16_t x514 = 95;
	uint16_t x515 = 8U;
	uint64_t x516 = 160963679727LLU;
	uint64_t t13 = 71211728144784LLU;

	t13 = (((x513^x514)>>x515)-x516);

	if (t13 != 18446743912754260496LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x569 = -1;
	int32_t x570 = -400;
	uint8_t x571 = 7U;
	volatile int8_t x572 = 2;
	int32_t t14 = 1817379;

	t14 = (((x569^x570)>>x571)-x572);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x625 = 0U;
	volatile int64_t x626 = 6794LL;
	volatile uint32_t x627 = 0U;
	uint32_t x628 = 3173455U;

	t15 = (((x625^x626)>>x627)-x628);

	if (t15 != -3166661LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x637 = UINT64_MAX;
	uint64_t x638 = 83364209359LLU;
	int64_t x640 = 3528346921529LL;
	uint64_t t16 = 11200676LLU;

	t16 = (((x637^x638)>>x639)-x640);

	if (t16 != 4611682469239414035LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x649 = -1;
	int32_t x650 = -1;
	uint16_t x651 = 3U;
	uint64_t x652 = 58182067861437LLU;

	t17 = (((x649^x650)>>x651)-x652);

	if (t17 != 18446685891641690179LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x677 = -1;
	static int16_t x678 = INT16_MIN;
	int16_t x679 = 8;
	static int8_t x680 = -7;

	t18 = (((x677^x678)>>x679)-x680);

	if (t18 != 134) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x729 = UINT64_MAX;
	uint32_t x730 = 993986U;
	static volatile uint8_t x731 = 14U;
	uint64_t t19 = 6270091080329720LLU;

	t19 = (((x729^x730)>>x731)-x732);

	if (t19 != 2168230389574363LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x741 = -1;
	int8_t x742 = -1;
	uint8_t x743 = 15U;
	int64_t x744 = INT64_MAX;
	volatile int64_t t20 = 899763282134249319LL;

	t20 = (((x741^x742)>>x743)-x744);

	if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x749 = 90U;
	uint16_t x751 = 1U;
	int16_t x752 = INT16_MIN;
	uint64_t t21 = 5289LLU;

	t21 = (((x749^x750)>>x751)-x752);

	if (t21 != 9223372036854808530LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x885 = -260584592142934722LL;
	int16_t x887 = 7;
	int32_t x888 = 14558324;
	volatile int64_t t22 = 267990799009390LL;

	t22 = (((x885^x886)>>x887)-x888);

	if (t22 != 2035817111558353LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x898 = -1;
	volatile int8_t x899 = 2;
	int32_t x900 = -676322981;

	t23 = (((x897^x898)>>x899)-x900);

	if (t23 != 1693964673U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x949 = INT16_MIN;
	int32_t x950 = -1;
	uint32_t x951 = 1U;
	uint32_t x952 = 19938U;
	uint32_t t24 = 22U;

	t24 = (((x949^x950)>>x951)-x952);

	if (t24 != 4294963741U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1113 = UINT16_MAX;
	static int16_t x1114 = INT16_MAX;
	static uint8_t x1115 = 3U;
	int8_t x1116 = -1;
	volatile int32_t t25 = -896281;

	t25 = (((x1113^x1114)>>x1115)-x1116);

	if (t25 != 4097) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1129 = INT16_MIN;
	uint64_t x1130 = 58042LLU;
	uint8_t x1131 = 12U;
	static uint32_t x1132 = 97568U;
	volatile uint64_t t26 = 260776864789357LLU;

	t26 = (((x1129^x1130)>>x1131)-x1132);

	if (t26 != 4503599627272918LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1145 = 20U;
	static uint64_t x1146 = 899059767610249127LLU;
	int32_t x1147 = 21;
	int16_t x1148 = -107;
	volatile uint64_t t27 = 8366084481280915LLU;

	t27 = (((x1145^x1146)>>x1147)-x1148);

	if (t27 != 428705104749LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1169 = INT16_MAX;
	volatile uint32_t x1170 = 372999350U;
	int64_t x1171 = 9LL;
	uint16_t x1172 = UINT16_MAX;

	t28 = (((x1169^x1170)>>x1171)-x1172);

	if (t28 != 663038U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1189 = INT8_MAX;
	static volatile uint16_t x1190 = 367U;
	uint32_t x1191 = 29U;
	int16_t x1192 = INT16_MAX;
	volatile int32_t t29 = -36;

	t29 = (((x1189^x1190)>>x1191)-x1192);

	if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1203 = 22;
	int16_t x1204 = 1;
	static int64_t t30 = 468469303240233670LL;

	t30 = (((x1201^x1202)>>x1203)-x1204);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1213 = -334;
	uint64_t x1215 = 27LLU;
	static volatile uint64_t t31 = 31155198LLU;

	t31 = (((x1213^x1214)>>x1215)-x1216);

	if (t31 != 32768LLU) { NG(); } else { ; }
	
}

void f32(void) {


	t32 = (((x1249^x1250)>>x1251)-x1252);

	if (t32 != 1073720899U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1333 = -1LL;
	uint64_t x1334 = UINT64_MAX;
	static volatile uint32_t x1335 = 2U;
	uint64_t t33 = 4257288511980LLU;

	t33 = (((x1333^x1334)>>x1335)-x1336);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1377 = 6690894LL;
	uint16_t x1378 = UINT16_MAX;
	uint32_t x1379 = 3U;
	int16_t x1380 = INT16_MIN;
	volatile int64_t t34 = 137814740622LL;

	t34 = (((x1377^x1378)>>x1379)-x1380);

	if (t34 != 875766LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x1453 = UINT16_MAX;
	uint64_t x1454 = 101533LLU;
	int16_t x1455 = 6;
	int16_t x1456 = -1;

	t35 = (((x1453^x1454)>>x1455)-x1456);

	if (t35 != 1486LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1494 = 3U;
	uint32_t x1495 = 24U;
	int16_t x1496 = 8;
	uint64_t t36 = 57LLU;

	t36 = (((x1493^x1494)>>x1495)-x1496);

	if (t36 != 1099511627767LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1542 = -33;
	static uint8_t x1543 = 2U;
	int8_t x1544 = 0;

	t37 = (((x1541^x1542)>>x1543)-x1544);

	if (t37 != 8U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x1561 = INT64_MAX;
	volatile uint16_t x1564 = 232U;
	int64_t t38 = 9402466LL;

	t38 = (((x1561^x1562)>>x1563)-x1564);

	if (t38 != 72057594037927703LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x1569 = 628943U;
	int8_t x1570 = INT8_MIN;
	uint8_t x1571 = 6U;
	uint16_t x1572 = UINT16_MAX;
	uint32_t t39 = 195538U;

	t39 = (((x1569^x1570)>>x1571)-x1572);

	if (t39 != 67033502U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1610 = INT64_MIN;
	int64_t x1612 = -225595031LL;

	t40 = (((x1609^x1610)>>x1611)-x1612);

	if (t40 != 2305843009439288982LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1617 = 6U;
	uint8_t x1618 = UINT8_MAX;
	int8_t x1619 = 10;
	int8_t x1620 = -1;
	uint32_t t41 = 592U;

	t41 = (((x1617^x1618)>>x1619)-x1620);

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x1625 = 1608202543LLU;
	int32_t x1626 = INT32_MIN;
	uint32_t x1627 = 19U;
	volatile uint64_t t42 = 1975LLU;

	t42 = (((x1625^x1626)>>x1627)-x1628);

	if (t42 != 35186519571451LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1646 = 0U;
	volatile uint8_t x1647 = 27U;
	static int16_t x1648 = INT16_MIN;
	int32_t t43 = -255;

	t43 = (((x1645^x1646)>>x1647)-x1648);

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1657 = 0;
	uint64_t x1658 = 365LLU;
	uint8_t x1659 = 25U;
	int32_t x1660 = -35442415;
	static volatile uint64_t t44 = 15LLU;

	t44 = (((x1657^x1658)>>x1659)-x1660);

	if (t44 != 35442415LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1661 = 22667U;
	uint16_t x1662 = 8224U;
	uint64_t x1663 = 8LLU;
	int16_t x1664 = INT16_MAX;
	int32_t t45 = -41;

	t45 = (((x1661^x1662)>>x1663)-x1664);

	if (t45 != -32647) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x1737 = 11;
	uint64_t x1738 = 1526663LLU;
	int32_t x1739 = 5;
	uint16_t x1740 = 1U;
	uint64_t t46 = 60041035LLU;

	t46 = (((x1737^x1738)>>x1739)-x1740);

	if (t46 != 47707LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1757 = 1U;
	int8_t x1759 = 1;
	int8_t x1760 = INT8_MAX;
	uint32_t t47 = 937303U;

	t47 = (((x1757^x1758)>>x1759)-x1760);

	if (t47 != 2147483520U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1778 = INT16_MAX;
	uint8_t x1779 = 6U;
	static volatile int64_t t48 = 1790051903620756LL;

	t48 = (((x1777^x1778)>>x1779)-x1780);

	if (t48 != 604962958938629LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1857 = -7502;
	int64_t x1858 = INT64_MIN;
	static int32_t x1859 = 2;
	static int32_t x1860 = 3;
	volatile int64_t t49 = 1272LL;

	t49 = (((x1857^x1858)>>x1859)-x1860);

	if (t49 != 2305843009213692073LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1889 = 0;
	int8_t x1890 = INT8_MAX;
	int8_t x1891 = 0;
	int32_t x1892 = -1;
	int32_t t50 = 0;

	t50 = (((x1889^x1890)>>x1891)-x1892);

	if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1913 = INT8_MIN;
	volatile uint64_t x1914 = UINT64_MAX;
	static int8_t x1916 = 1;

	t51 = (((x1913^x1914)>>x1915)-x1916);

	if (t51 != 126LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2036 = 5U;
	static volatile uint64_t t52 = 115350455LLU;

	t52 = (((x2033^x2034)>>x2035)-x2036);

	if (t52 != 18308324014176026525LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x2041 = -6281148762733667LL;
	static uint64_t x2043 = 0LLU;
	int16_t x2044 = INT16_MIN;
	int64_t t53 = -378939092645478LL;

	t53 = (((x2041^x2042)>>x2043)-x2044);

	if (t53 != 6281148762766434LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2066 = 16147U;
	uint8_t x2067 = 25U;
	volatile int64_t t54 = 40LL;

	t54 = (((x2065^x2066)>>x2067)-x2068);

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2097 = 491LLU;
	int32_t x2098 = -1;
	static int8_t x2099 = 49;
	int16_t x2100 = INT16_MAX;
	uint64_t t55 = 903LLU;

	t55 = (((x2097^x2098)>>x2099)-x2100);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2217 = -3;
	uint64_t x2219 = 29LLU;
	uint32_t x2220 = 58214116U;
	volatile uint32_t t56 = 485U;

	t56 = (((x2217^x2218)>>x2219)-x2220);

	if (t56 != 4236753180U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x2337 = INT64_MIN;
	volatile int32_t x2339 = 3;
	int8_t x2340 = INT8_MIN;
	volatile int64_t t57 = -119202297217LL;

	t57 = (((x2337^x2338)>>x2339)-x2340);

	if (t57 != 1152921504606847103LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2350 = 94U;
	int8_t x2351 = 3;
	uint64_t x2352 = UINT64_MAX;
	uint64_t t58 = 1257329200LLU;

	t58 = (((x2349^x2350)>>x2351)-x2352);

	if (t58 != 953528165498LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2393 = 12;
	static int32_t x2394 = INT32_MAX;
	static uint16_t x2395 = 0U;
	volatile uint32_t x2396 = 274102279U;
	uint32_t t59 = 188U;

	t59 = (((x2393^x2394)>>x2395)-x2396);

	if (t59 != 1873381356U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2413 = 3011037304710LL;
	int16_t x2414 = INT16_MAX;
	int16_t x2415 = 29;
	static uint32_t x2416 = 1607924085U;
	volatile int64_t t60 = 31684559LL;

	t60 = (((x2413^x2414)>>x2415)-x2416);

	if (t60 != -1607918477LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2513 = INT16_MIN;
	int64_t x2514 = INT64_MIN;
	uint8_t x2515 = 4U;
	int64_t x2516 = -1LL;
	volatile int64_t t61 = 0LL;

	t61 = (((x2513^x2514)>>x2515)-x2516);

	if (t61 != 576460752303421441LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x2549 = INT32_MIN;
	int32_t x2550 = -1;
	int64_t x2552 = INT64_MAX;
	volatile int64_t t62 = -17544690170LL;

	t62 = (((x2549^x2550)>>x2551)-x2552);

	if (t62 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2589 = 15443;
	uint64_t x2590 = UINT64_MAX;
	uint32_t x2591 = 1U;

	t63 = (((x2589^x2590)>>x2591)-x2592);

	if (t63 != 9223372036854768087LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2605 = INT8_MIN;
	int8_t x2606 = -1;
	volatile int32_t t64 = 13041216;

	t64 = (((x2605^x2606)>>x2607)-x2608);

	if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x2613 = -1LL;
	int64_t x2614 = -1LL;
	uint32_t x2615 = 6U;
	int32_t x2616 = -4534;
	volatile int64_t t65 = 65479259LL;

	t65 = (((x2613^x2614)>>x2615)-x2616);

	if (t65 != 4534LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x2621 = INT32_MAX;
	static int16_t x2622 = INT16_MAX;
	int8_t x2624 = 3;
	int32_t t66 = -185007;

	t66 = (((x2621^x2622)>>x2623)-x2624);

	if (t66 != 16776957) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2649 = -1;
	uint16_t x2651 = 0U;
	volatile uint64_t x2652 = 327220410672LLU;
	volatile uint64_t t67 = 15607950LLU;

	t67 = (((x2649^x2650)>>x2651)-x2652);

	if (t67 != 18446743746489141071LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x2714 = INT32_MIN;
	int8_t x2716 = -1;
	static uint32_t t68 = 13U;

	t68 = (((x2713^x2714)>>x2715)-x2716);

	if (t68 != 67109264U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2745 = UINT16_MAX;
	int64_t x2746 = INT64_MAX;
	volatile uint8_t x2747 = 6U;
	int32_t x2748 = INT32_MIN;

	t69 = (((x2745^x2746)>>x2747)-x2748);

	if (t69 != 144115190223338496LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2797 = UINT64_MAX;
	int32_t x2798 = 1298466;
	int16_t x2800 = 410;

	t70 = (((x2797^x2798)>>x2799)-x2800);

	if (t70 != 18446744073708252739LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x2821 = INT64_MIN;
	volatile int8_t x2823 = 25;
	volatile int16_t x2824 = -1;
	volatile int64_t t71 = -27LL;

	t71 = (((x2821^x2822)>>x2823)-x2824);

	if (t71 != 274877906944LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x2834 = 0U;
	static uint8_t x2835 = 0U;
	uint64_t t72 = 535018401398LLU;

	t72 = (((x2833^x2834)>>x2835)-x2836);

	if (t72 != 247LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2865 = UINT64_MAX;
	uint8_t x2866 = 10U;
	uint16_t x2867 = 16U;
	uint64_t x2868 = 11241255410072LLU;
	volatile uint64_t t73 = 1482812LLU;

	t73 = (((x2865^x2866)>>x2867)-x2868);

	if (t73 != 270233721300583LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2901 = UINT16_MAX;
	static uint8_t x2902 = 69U;
	volatile uint8_t x2903 = 1U;
	static uint8_t x2904 = UINT8_MAX;
	volatile int32_t t74 = -1634765;

	t74 = (((x2901^x2902)>>x2903)-x2904);

	if (t74 != 32478) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3077 = UINT8_MAX;
	int16_t x3078 = 716;
	uint32_t x3079 = 3U;
	uint64_t x3080 = 925962615183053331LLU;
	uint64_t t75 = 422LLU;

	t75 = (((x3077^x3078)>>x3079)-x3080);

	if (t75 != 17520781458526498355LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x3109 = -1;
	int8_t x3111 = 2;
	int64_t t76 = -448424817496713218LL;

	t76 = (((x3109^x3110)>>x3111)-x3112);

	if (t76 != -2147480182LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3157 = -1;
	volatile uint32_t x3158 = UINT32_MAX;
	uint8_t x3159 = 3U;
	uint32_t t77 = 0U;

	t77 = (((x3157^x3158)>>x3159)-x3160);

	if (t77 != 4294967290U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x3169 = UINT64_MAX;
	int16_t x3170 = INT16_MAX;
	uint32_t x3171 = 13U;
	static volatile int16_t x3172 = -1;

	t78 = (((x3169^x3170)>>x3171)-x3172);

	if (t78 != 2251799813685245LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3221 = INT16_MAX;
	int16_t x3222 = INT16_MAX;
	uint8_t x3223 = 2U;

	t79 = (((x3221^x3222)>>x3223)-x3224);

	if (t79 != -41) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x3233 = 2;
	uint16_t x3234 = UINT16_MAX;
	static uint8_t x3235 = 25U;
	int16_t x3236 = 734;
	int32_t t80 = 3729;

	t80 = (((x3233^x3234)>>x3235)-x3236);

	if (t80 != -734) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x3289 = -1;
	uint64_t x3290 = 817815LLU;
	uint8_t x3291 = 9U;
	uint32_t x3292 = 629966610U;
	uint64_t t81 = 2278013207944LLU;

	t81 = (((x3289^x3290)>>x3291)-x3292);

	if (t81 != 36028796388995760LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3302 = INT16_MAX;
	uint8_t x3303 = 13U;
	volatile uint32_t x3304 = 935512U;
	volatile uint32_t t82 = 10485U;

	t82 = (((x3301^x3302)>>x3303)-x3304);

	if (t82 != 4294031787U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3373 = UINT8_MAX;
	int16_t x3374 = INT16_MAX;
	uint16_t x3375 = 0U;
	int8_t x3376 = INT8_MIN;
	volatile int32_t t83 = -164;

	t83 = (((x3373^x3374)>>x3375)-x3376);

	if (t83 != 32640) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x3382 = UINT32_MAX;
	uint8_t x3383 = 3U;
	volatile int64_t t84 = 24919LL;

	t84 = (((x3381^x3382)>>x3383)-x3384);

	if (t84 != 1152921504069976057LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3435 = 4U;
	volatile int64_t x3436 = 175LL;
	volatile int64_t t85 = 1LL;

	t85 = (((x3433^x3434)>>x3435)-x3436);

	if (t85 != 576460752303423312LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x3469 = 8312931LLU;
	volatile int8_t x3470 = -1;
	uint8_t x3472 = 1U;
	uint64_t t86 = 80338255LLU;

	t86 = (((x3469^x3470)>>x3471)-x3472);

	if (t86 != 2199023255550LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3507 = 53LL;
	volatile int16_t x3508 = INT16_MIN;
	uint64_t t87 = 6134097785521LLU;

	t87 = (((x3505^x3506)>>x3507)-x3508);

	if (t87 != 34815LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3534 = INT16_MIN;

	t88 = (((x3533^x3534)>>x3535)-x3536);

	if (t88 != 1099511628204LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3553 = INT64_MIN;
	static int8_t x3554 = -1;
	uint8_t x3555 = 19U;
	uint16_t x3556 = 5009U;
	volatile int64_t t89 = 231649071262LL;

	t89 = (((x3553^x3554)>>x3555)-x3556);

	if (t89 != 17592186039406LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3577 = INT64_MIN;
	static uint8_t x3579 = 1U;
	volatile int64_t t90 = 39LL;

	t90 = (((x3577^x3578)>>x3579)-x3580);

	if (t90 != 4611686016279904193LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3673 = 24U;
	int64_t x3674 = 41LL;
	uint8_t x3676 = 43U;
	volatile int64_t t91 = 3719978137792LL;

	t91 = (((x3673^x3674)>>x3675)-x3676);

	if (t91 != -43LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3717 = -1242;
	static int64_t x3718 = INT64_MIN;
	int64_t x3720 = -1LL;
	volatile int64_t t92 = -14394048636362LL;

	t92 = (((x3717^x3718)>>x3719)-x3720);

	if (t92 != 2305843009213693642LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x3745 = 4U;
	uint8_t x3747 = 1U;
	static uint32_t x3748 = 26986013U;
	int64_t t93 = 30524355LL;

	t93 = (((x3745^x3746)>>x3747)-x3748);

	if (t93 != 4611686018400401888LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3753 = INT8_MAX;
	uint8_t x3754 = 22U;
	uint8_t x3756 = 64U;
	int32_t t94 = -10268105;

	t94 = (((x3753^x3754)>>x3755)-x3756);

	if (t94 != -64) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x3805 = 52845657959253LLU;
	uint8_t x3808 = 68U;

	t95 = (((x3805^x3806)>>x3807)-x3808);

	if (t95 != 18446744073709551548LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3889 = -1;
	uint64_t x3890 = 4033564281833LLU;
	uint8_t x3891 = 2U;
	volatile int8_t x3892 = INT8_MAX;

	t96 = (((x3889^x3890)>>x3891)-x3892);

	if (t96 != 4611685010036317318LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3949 = 2150;
	volatile uint64_t x3950 = UINT64_MAX;
	int32_t x3951 = 40;
	static volatile uint32_t x3952 = UINT32_MAX;
	static uint64_t t97 = 27714801134772046LLU;

	t97 = (((x3949^x3950)>>x3951)-x3952);

	if (t97 != 18446744069431361536LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3985 = -1;
	uint64_t x3986 = 214863728696LLU;
	volatile uint16_t x3987 = 1U;
	uint8_t x3988 = 12U;
	uint64_t t98 = 122987517228832LLU;

	t98 = (((x3985^x3986)>>x3987)-x3988);

	if (t98 != 9223371929422911447LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x4029 = INT8_MAX;
	static uint8_t x4031 = 5U;
	int16_t x4032 = -1;
	int64_t t99 = -240258124LL;

	t99 = (((x4029^x4030)>>x4031)-x4032);

	if (t99 != 288230376151711741LL) { NG(); } else { ; }
	
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

