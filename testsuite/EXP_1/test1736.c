#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x67 = INT32_MAX;
uint8_t x68 = 7U;
uint8_t x84 = 4U;
int32_t t1 = 4934;
int16_t x89 = 5;
uint8_t x92 = 7U;
volatile uint32_t x145 = 23629U;
int32_t t4 = -18;
int8_t x190 = INT8_MIN;
static int64_t t5 = -217668596868LL;
int32_t x235 = INT32_MIN;
int64_t t7 = 365844628802752700LL;
int64_t x301 = 59459281LL;
volatile int32_t x304 = 1;
uint8_t x317 = 7U;
uint32_t x319 = UINT32_MAX;
volatile uint32_t t9 = 6760880U;
volatile int64_t t10 = -50LL;
volatile int32_t x449 = INT32_MIN;
int8_t x450 = INT8_MAX;
static int64_t x451 = INT64_MIN;
int8_t x452 = 0;
uint8_t x509 = UINT8_MAX;
int8_t x560 = 0;
uint64_t x564 = 3LLU;
static int64_t t17 = 189LL;
static int16_t x643 = -14;
int8_t x644 = 1;
static int32_t x691 = -8411441;
uint32_t x695 = UINT32_MAX;
int16_t x696 = 29;
int32_t x727 = 2230;
int32_t x728 = 7;
int16_t x732 = 1;
int32_t t25 = 78;
uint8_t x859 = 25U;
uint32_t t28 = 14896906U;
volatile int64_t x882 = -24831353509180LL;
int32_t x906 = INT32_MAX;
int16_t x956 = 14;
uint64_t t33 = 241486975LLU;
int64_t x1042 = INT64_MIN;
static int16_t x1075 = INT16_MIN;
uint8_t x1157 = UINT8_MAX;
uint64_t x1179 = 381473366973LLU;
uint16_t x1180 = 6U;
int16_t x1184 = 3;
int16_t x1194 = INT16_MAX;
volatile int8_t x1238 = -6;
volatile int8_t x1239 = INT8_MAX;
volatile int64_t t42 = 253LL;
volatile int32_t t45 = -28;
int64_t x1401 = -1LL;
volatile uint64_t x1541 = UINT64_MAX;
uint64_t x1542 = 241035LLU;
uint8_t x1544 = 3U;
volatile uint64_t x1564 = 7LLU;
static uint8_t x1586 = UINT8_MAX;
int64_t x1610 = -1LL;
static int32_t x1621 = -65131;
int32_t t54 = -8456;
volatile uint64_t x1721 = UINT64_MAX;
int16_t x1765 = -1;
static uint16_t x1779 = 11199U;
static int64_t x1821 = INT64_MIN;
static uint64_t x1825 = 938168460105LLU;
static uint32_t x1829 = 1009U;
int64_t x1986 = -678668791LL;
uint8_t x2007 = UINT8_MAX;
uint8_t x2008 = 23U;
int16_t x2014 = 1;
volatile int64_t t65 = -43653366838664LL;
static volatile int8_t x2021 = -1;
uint8_t x2037 = UINT8_MAX;
volatile int64_t x2038 = -207148492704284LL;
static int16_t x2082 = 12907;
volatile uint8_t x2084 = 6U;
int32_t t68 = -373419131;
int8_t x2098 = -1;
static int16_t x2118 = INT16_MIN;
static uint8_t x2120 = 5U;
volatile uint16_t x2214 = 4U;
int64_t x2223 = INT64_MAX;
uint64_t t72 = 15LLU;
volatile int64_t x2425 = INT64_MIN;
uint8_t x2426 = UINT8_MAX;
uint16_t x2465 = 3934U;
volatile uint32_t t79 = 44U;
volatile int64_t x2502 = INT64_MIN;
int16_t x2504 = 0;
volatile int8_t x2597 = INT8_MAX;
int16_t x2600 = 2;
static volatile int64_t t86 = 8869196715684463LL;
int32_t x2609 = INT32_MIN;
volatile int64_t x2611 = -1790544396014090LL;
uint16_t x2614 = 3U;
static uint64_t x2685 = UINT64_MAX;
uint32_t t91 = 2407U;
uint8_t x2912 = 2U;
volatile int32_t x2986 = INT32_MAX;
int32_t x3152 = 11;
int16_t x3168 = 7;


void f0(void) {
	int32_t x65 = -1;
	static int64_t x66 = INT64_MAX;
	static int64_t t0 = 1196LL;

	t0 = (((x65&x66)/x67)>>x68);

	if (t0 != 33554432LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x81 = INT16_MIN;
	volatile uint16_t x82 = 5787U;
	int32_t x83 = INT32_MIN;

	t1 = (((x81&x82)/x83)>>x84);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x90 = INT64_MIN;
	uint8_t x91 = 7U;
	int64_t t2 = -11LL;

	t2 = (((x89&x90)/x91)>>x92);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x146 = -1LL;
	int32_t x147 = INT32_MIN;
	static uint32_t x148 = 1U;
	volatile int64_t t3 = -954653LL;

	t3 = (((x145&x146)/x147)>>x148);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x177 = -1;
	int8_t x178 = INT8_MIN;
	volatile uint16_t x179 = UINT16_MAX;
	static uint16_t x180 = 1U;

	t4 = (((x177&x178)/x179)>>x180);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x189 = -345256400065LL;
	int64_t x191 = INT64_MIN;
	uint16_t x192 = 53U;

	t5 = (((x189&x190)/x191)>>x192);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x233 = -74;
	int8_t x234 = -1;
	static int16_t x236 = 1;
	int32_t t6 = -47060;

	t6 = (((x233&x234)/x235)>>x236);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x257 = 58;
	volatile int64_t x258 = -230465600857331LL;
	static int16_t x259 = INT16_MIN;
	volatile int32_t x260 = 1;

	t7 = (((x257&x258)/x259)>>x260);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x302 = INT64_MIN;
	int8_t x303 = INT8_MIN;
	int64_t t8 = -162LL;

	t8 = (((x301&x302)/x303)>>x304);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x318 = INT32_MAX;
	uint16_t x320 = 0U;

	t9 = (((x317&x318)/x319)>>x320);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x393 = INT32_MIN;
	volatile int8_t x394 = INT8_MIN;
	int64_t x395 = -1LL;
	uint32_t x396 = 1U;

	t10 = (((x393&x394)/x395)>>x396);

	if (t10 != 1073741824LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x397 = UINT64_MAX;
	volatile uint8_t x398 = 38U;
	int16_t x399 = INT16_MIN;
	int8_t x400 = 22;
	volatile uint64_t t11 = 229436575439611LLU;

	t11 = (((x397&x398)/x399)>>x400);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x425 = -1;
	static volatile uint64_t x426 = 49713833011LLU;
	volatile int64_t x427 = INT64_MAX;
	uint8_t x428 = 1U;
	static volatile uint64_t t12 = 9414651784LLU;

	t12 = (((x425&x426)/x427)>>x428);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t t13 = 4293513573LL;

	t13 = (((x449&x450)/x451)>>x452);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x510 = UINT16_MAX;
	uint32_t x511 = UINT32_MAX;
	volatile int8_t x512 = 0;
	static uint32_t t14 = 200040U;

	t14 = (((x509&x510)/x511)>>x512);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x533 = 752554LLU;
	static volatile int64_t x534 = -1LL;
	static uint16_t x535 = 7U;
	volatile int8_t x536 = 55;
	uint64_t t15 = 165500LLU;

	t15 = (((x533&x534)/x535)>>x536);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x557 = -580;
	int8_t x558 = INT8_MIN;
	int16_t x559 = INT16_MIN;
	volatile int32_t t16 = -14389010;

	t16 = (((x557&x558)/x559)>>x560);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x561 = INT8_MAX;
	int64_t x562 = INT64_MIN;
	uint8_t x563 = 3U;

	t17 = (((x561&x562)/x563)>>x564);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x641 = INT64_MIN;
	int16_t x642 = INT16_MAX;
	int64_t t18 = -15051746234LL;

	t18 = (((x641&x642)/x643)>>x644);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x689 = UINT32_MAX;
	int16_t x690 = -6048;
	uint32_t x692 = 27U;
	uint32_t t19 = 34U;

	t19 = (((x689&x690)/x691)>>x692);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x693 = 108761866LLU;
	static volatile int16_t x694 = INT16_MIN;
	volatile uint64_t t20 = 15457LLU;

	t20 = (((x693&x694)/x695)>>x696);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x717 = INT64_MIN;
	uint64_t x718 = 1900LLU;
	volatile int8_t x719 = 6;
	uint8_t x720 = 13U;
	static volatile uint64_t t21 = 4517871240147722954LLU;

	t21 = (((x717&x718)/x719)>>x720);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x725 = UINT64_MAX;
	volatile int16_t x726 = INT16_MIN;
	volatile uint64_t t22 = 478546365379LLU;

	t22 = (((x725&x726)/x727)>>x728);

	if (t22 != 64625644877065LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x729 = INT32_MIN;
	volatile int8_t x730 = 9;
	uint32_t x731 = UINT32_MAX;
	uint32_t t23 = 68164U;

	t23 = (((x729&x730)/x731)>>x732);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x733 = 1928;
	int64_t x734 = -9271015LL;
	static uint64_t x735 = 195685LLU;
	static uint64_t x736 = 4LLU;
	uint64_t t24 = 49538131166749132LLU;

	t24 = (((x733&x734)/x735)>>x736);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x737 = INT16_MIN;
	int16_t x738 = INT16_MAX;
	int32_t x739 = INT32_MAX;
	uint16_t x740 = 5U;

	t25 = (((x737&x738)/x739)>>x740);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x753 = -1;
	uint64_t x754 = 103LLU;
	static int16_t x755 = -1;
	uint8_t x756 = 1U;
	static volatile uint64_t t26 = 56LLU;

	t26 = (((x753&x754)/x755)>>x756);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x805 = UINT32_MAX;
	int8_t x806 = -1;
	volatile uint32_t x807 = 60423U;
	volatile uint16_t x808 = 18U;
	uint32_t t27 = 503005U;

	t27 = (((x805&x806)/x807)>>x808);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x857 = 8U;
	static uint32_t x858 = 179323198U;
	uint8_t x860 = 5U;

	t28 = (((x857&x858)/x859)>>x860);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x881 = -1;
	int64_t x883 = INT64_MIN;
	uint8_t x884 = 1U;
	volatile int64_t t29 = -38156987LL;

	t29 = (((x881&x882)/x883)>>x884);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x905 = INT8_MAX;
	volatile int64_t x907 = INT64_MAX;
	static int32_t x908 = 9;
	volatile int64_t t30 = -55LL;

	t30 = (((x905&x906)/x907)>>x908);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x953 = UINT16_MAX;
	volatile int32_t x954 = 54309268;
	int64_t x955 = 476123929806746LL;
	int64_t t31 = 79939720344LL;

	t31 = (((x953&x954)/x955)>>x956);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x961 = INT16_MIN;
	int32_t x962 = 656550938;
	static int64_t x963 = INT64_MIN;
	int8_t x964 = 1;
	volatile int64_t t32 = -152778864292935LL;

	t32 = (((x961&x962)/x963)>>x964);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x977 = 2231;
	int32_t x978 = INT32_MIN;
	uint64_t x979 = 10383475488LLU;
	int16_t x980 = 10;

	t33 = (((x977&x978)/x979)>>x980);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x1041 = INT32_MIN;
	static int32_t x1043 = -290391;
	static volatile uint8_t x1044 = 36U;
	static volatile int64_t t34 = 0LL;

	t34 = (((x1041&x1042)/x1043)>>x1044);

	if (t34 != 462LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1073 = UINT8_MAX;
	int64_t x1074 = INT64_MIN;
	volatile uint16_t x1076 = 1U;
	int64_t t35 = -197416LL;

	t35 = (((x1073&x1074)/x1075)>>x1076);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1158 = INT8_MIN;
	volatile uint32_t x1159 = 104311U;
	int16_t x1160 = 1;
	static volatile uint32_t t36 = 2U;

	t36 = (((x1157&x1158)/x1159)>>x1160);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1177 = INT32_MIN;
	int64_t x1178 = 0LL;
	volatile uint64_t t37 = 256197194822LLU;

	t37 = (((x1177&x1178)/x1179)>>x1180);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1181 = -168862810408067240LL;
	volatile uint32_t x1182 = 13U;
	uint32_t x1183 = 1U;
	int64_t t38 = 3318685543233051LL;

	t38 = (((x1181&x1182)/x1183)>>x1184);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1193 = 5272;
	static uint64_t x1195 = 2342988LLU;
	uint8_t x1196 = 39U;
	volatile uint64_t t39 = 1642950754475LLU;

	t39 = (((x1193&x1194)/x1195)>>x1196);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x1237 = -1;
	int8_t x1240 = 7;
	int32_t t40 = -5350562;

	t40 = (((x1237&x1238)/x1239)>>x1240);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1289 = -206;
	volatile int64_t x1290 = INT64_MAX;
	uint32_t x1291 = 9274U;
	int8_t x1292 = 13;
	int64_t t41 = 1026696LL;

	t41 = (((x1289&x1290)/x1291)>>x1292);

	if (t41 != 121403914906LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1337 = INT64_MAX;
	int16_t x1338 = 3726;
	uint16_t x1339 = 1068U;
	uint8_t x1340 = 18U;

	t42 = (((x1337&x1338)/x1339)>>x1340);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x1361 = -454;
	uint64_t x1362 = UINT64_MAX;
	uint32_t x1363 = 21407323U;
	static uint32_t x1364 = 1U;
	static volatile uint64_t t43 = 561345077959LLU;

	t43 = (((x1361&x1362)/x1363)>>x1364);

	if (t43 != 430851257621LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x1381 = INT64_MAX;
	uint32_t x1382 = 547157896U;
	volatile uint32_t x1383 = 7410307U;
	static int32_t x1384 = 3;
	volatile int64_t t44 = -4183242344LL;

	t44 = (((x1381&x1382)/x1383)>>x1384);

	if (t44 != 9LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1393 = INT32_MAX;
	static int8_t x1394 = 0;
	static int16_t x1395 = -4089;
	int64_t x1396 = 1LL;

	t45 = (((x1393&x1394)/x1395)>>x1396);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1397 = -1;
	uint32_t x1398 = 987289U;
	int8_t x1399 = INT8_MIN;
	uint8_t x1400 = 7U;
	static volatile uint32_t t46 = 1521634U;

	t46 = (((x1397&x1398)/x1399)>>x1400);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1402 = -1;
	static int64_t x1403 = -11LL;
	uint8_t x1404 = 1U;
	volatile int64_t t47 = 95744LL;

	t47 = (((x1401&x1402)/x1403)>>x1404);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1543 = INT8_MIN;
	uint64_t t48 = 111753975570258LLU;

	t48 = (((x1541&x1542)/x1543)>>x1544);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1561 = UINT64_MAX;
	uint16_t x1562 = 3U;
	int8_t x1563 = INT8_MIN;
	volatile uint64_t t49 = 6LLU;

	t49 = (((x1561&x1562)/x1563)>>x1564);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x1585 = 3U;
	int32_t x1587 = 400216;
	uint16_t x1588 = 0U;
	volatile int32_t t50 = 53;

	t50 = (((x1585&x1586)/x1587)>>x1588);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x1609 = 0U;
	volatile uint16_t x1611 = 30U;
	static uint8_t x1612 = 0U;
	int64_t t51 = -5127026LL;

	t51 = (((x1609&x1610)/x1611)>>x1612);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x1617 = INT8_MIN;
	int32_t x1618 = INT32_MIN;
	int32_t x1619 = INT32_MIN;
	static int8_t x1620 = 10;
	int32_t t52 = -10375684;

	t52 = (((x1617&x1618)/x1619)>>x1620);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1622 = UINT8_MAX;
	static int32_t x1623 = INT32_MAX;
	int16_t x1624 = 7;
	volatile int32_t t53 = -19;

	t53 = (((x1621&x1622)/x1623)>>x1624);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1685 = 0;
	volatile int16_t x1686 = INT16_MAX;
	int8_t x1687 = INT8_MIN;
	uint16_t x1688 = 12U;

	t54 = (((x1685&x1686)/x1687)>>x1688);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1722 = INT64_MIN;
	uint16_t x1723 = 7U;
	volatile int8_t x1724 = 0;
	uint64_t t55 = 1947281285960391214LLU;

	t55 = (((x1721&x1722)/x1723)>>x1724);

	if (t55 != 1317624576693539401LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x1766 = 5650U;
	int8_t x1767 = -1;
	uint16_t x1768 = 0U;
	uint32_t t56 = 527801513U;

	t56 = (((x1765&x1766)/x1767)>>x1768);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1777 = -12323146049LL;
	int32_t x1778 = INT32_MAX;
	uint64_t x1780 = 0LLU;
	volatile int64_t t57 = -35LL;

	t57 = (((x1777&x1778)/x1779)>>x1780);

	if (t57 != 50161LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x1785 = INT32_MIN;
	volatile int16_t x1786 = -1;
	uint64_t x1787 = 31LLU;
	uint32_t x1788 = 31U;
	uint64_t t58 = 2669LLU;

	t58 = (((x1785&x1786)/x1787)>>x1788);

	if (t58 != 277094664LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1822 = INT8_MAX;
	volatile uint64_t x1823 = UINT64_MAX;
	uint16_t x1824 = 38U;
	volatile uint64_t t59 = 1LLU;

	t59 = (((x1821&x1822)/x1823)>>x1824);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x1826 = 0U;
	static volatile uint32_t x1827 = 54209U;
	uint16_t x1828 = 1U;
	uint64_t t60 = 786212311528153LLU;

	t60 = (((x1825&x1826)/x1827)>>x1828);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1830 = INT32_MIN;
	uint32_t x1831 = 5412U;
	int16_t x1832 = 2;
	uint32_t t61 = 1500569U;

	t61 = (((x1829&x1830)/x1831)>>x1832);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x1881 = INT16_MAX;
	uint64_t x1882 = 980170622LLU;
	int8_t x1883 = -1;
	static int32_t x1884 = 1;
	uint64_t t62 = 4237504762752499LLU;

	t62 = (((x1881&x1882)/x1883)>>x1884);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x1985 = 4129186857499205491LLU;
	uint32_t x1987 = 4U;
	volatile uint64_t x1988 = 2LLU;
	uint64_t t63 = 702661317LLU;

	t63 = (((x1985&x1986)/x1987)>>x1988);

	if (t63 != 258074178584838496LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2005 = -1LL;
	int8_t x2006 = -1;
	static int64_t t64 = -30373424906LL;

	t64 = (((x2005&x2006)/x2007)>>x2008);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2013 = INT64_MIN;
	static int16_t x2015 = -2;
	uint32_t x2016 = 27U;

	t65 = (((x2013&x2014)/x2015)>>x2016);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x2022 = 17U;
	static uint32_t x2023 = 19677817U;
	uint16_t x2024 = 2U;
	volatile uint32_t t66 = 82464U;

	t66 = (((x2021&x2022)/x2023)>>x2024);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2039 = INT32_MIN;
	uint8_t x2040 = 0U;
	int64_t t67 = -3439916261LL;

	t67 = (((x2037&x2038)/x2039)>>x2040);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2081 = 3;
	uint8_t x2083 = 15U;

	t68 = (((x2081&x2082)/x2083)>>x2084);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2097 = INT64_MIN;
	static uint64_t x2099 = UINT64_MAX;
	volatile uint16_t x2100 = 7U;
	uint64_t t69 = 572832969135LLU;

	t69 = (((x2097&x2098)/x2099)>>x2100);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2117 = INT32_MAX;
	int8_t x2119 = INT8_MAX;
	volatile int32_t t70 = -3;

	t70 = (((x2117&x2118)/x2119)>>x2120);

	if (t70 != 528408) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2213 = 248249908LLU;
	static int16_t x2215 = 126;
	int32_t x2216 = 9;
	uint64_t t71 = 684344433055LLU;

	t71 = (((x2213&x2214)/x2215)>>x2216);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2221 = UINT64_MAX;
	volatile uint64_t x2222 = UINT64_MAX;
	uint8_t x2224 = 50U;

	t72 = (((x2221&x2222)/x2223)>>x2224);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2293 = 1;
	int64_t x2294 = -1LL;
	uint8_t x2295 = 123U;
	volatile int8_t x2296 = 0;
	static int64_t t73 = -6790258466LL;

	t73 = (((x2293&x2294)/x2295)>>x2296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2337 = UINT64_MAX;
	volatile int32_t x2338 = INT32_MAX;
	static int16_t x2339 = 61;
	int16_t x2340 = 10;
	uint64_t t74 = 821967941243512136LLU;

	t74 = (((x2337&x2338)/x2339)>>x2340);

	if (t74 != 34379LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2357 = 351913311394LLU;
	int16_t x2358 = INT16_MAX;
	static uint64_t x2359 = 735187LLU;
	static uint8_t x2360 = 4U;
	volatile uint64_t t75 = 29404725586LLU;

	t75 = (((x2357&x2358)/x2359)>>x2360);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2381 = INT8_MIN;
	int16_t x2382 = 7360;
	uint8_t x2383 = UINT8_MAX;
	int16_t x2384 = 5;
	static volatile int32_t t76 = 112;

	t76 = (((x2381&x2382)/x2383)>>x2384);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2397 = 69;
	uint64_t x2398 = 468945537912LLU;
	int64_t x2399 = -1LL;
	static uint8_t x2400 = 0U;
	static volatile uint64_t t77 = 14252795063914573LLU;

	t77 = (((x2397&x2398)/x2399)>>x2400);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2427 = 1U;
	uint16_t x2428 = 5U;
	int64_t t78 = -227LL;

	t78 = (((x2425&x2426)/x2427)>>x2428);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x2466 = UINT8_MAX;
	static uint32_t x2467 = UINT32_MAX;
	uint16_t x2468 = 2U;

	t79 = (((x2465&x2466)/x2467)>>x2468);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x2473 = -990;
	int64_t x2474 = INT64_MAX;
	uint8_t x2475 = 18U;
	uint8_t x2476 = 10U;
	volatile int64_t t80 = -11176994160LL;

	t80 = (((x2473&x2474)/x2475)>>x2476);

	if (t80 != 500399958596721LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2481 = 0;
	uint32_t x2482 = UINT32_MAX;
	volatile int16_t x2483 = -1;
	uint16_t x2484 = 6U;
	volatile uint32_t t81 = 356U;

	t81 = (((x2481&x2482)/x2483)>>x2484);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x2485 = 15U;
	static volatile uint32_t x2486 = UINT32_MAX;
	int64_t x2487 = 1LL;
	uint8_t x2488 = 22U;
	int64_t t82 = 973818168648262LL;

	t82 = (((x2485&x2486)/x2487)>>x2488);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2501 = 537792451401LLU;
	static uint16_t x2503 = UINT16_MAX;
	uint64_t t83 = 132331996923989LLU;

	t83 = (((x2501&x2502)/x2503)>>x2504);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2517 = INT8_MIN;
	uint32_t x2518 = UINT32_MAX;
	int32_t x2519 = -1;
	int16_t x2520 = 5;
	volatile uint32_t t84 = 603U;

	t84 = (((x2517&x2518)/x2519)>>x2520);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x2549 = INT16_MIN;
	static int32_t x2550 = INT32_MAX;
	int64_t x2551 = 1176883LL;
	uint16_t x2552 = 0U;
	volatile int64_t t85 = -1853961LL;

	t85 = (((x2549&x2550)/x2551)>>x2552);

	if (t85 != 1824LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2598 = INT64_MIN;
	int32_t x2599 = INT32_MIN;

	t86 = (((x2597&x2598)/x2599)>>x2600);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2610 = 3975906LLU;
	int16_t x2612 = 42;
	uint64_t t87 = 463LLU;

	t87 = (((x2609&x2610)/x2611)>>x2612);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x2613 = UINT16_MAX;
	int8_t x2615 = -7;
	volatile int8_t x2616 = 1;
	int32_t t88 = -2680;

	t88 = (((x2613&x2614)/x2615)>>x2616);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x2686 = 24845U;
	int64_t x2687 = 757480695281132928LL;
	uint16_t x2688 = 16U;
	uint64_t t89 = 19251LLU;

	t89 = (((x2685&x2686)/x2687)>>x2688);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x2741 = 1;
	volatile int32_t x2742 = INT32_MIN;
	static int32_t x2743 = INT32_MAX;
	int64_t x2744 = 5LL;
	volatile int32_t t90 = 1;

	t90 = (((x2741&x2742)/x2743)>>x2744);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x2773 = -626060899;
	volatile uint32_t x2774 = UINT32_MAX;
	volatile uint8_t x2775 = UINT8_MAX;
	static volatile uint8_t x2776 = 20U;

	t91 = (((x2773&x2774)/x2775)>>x2776);

	if (t91 != 13U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x2809 = 1U;
	static uint16_t x2810 = 317U;
	static int64_t x2811 = INT64_MAX;
	static uint16_t x2812 = 3U;
	volatile int64_t t92 = -196656751713LL;

	t92 = (((x2809&x2810)/x2811)>>x2812);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2909 = INT64_MAX;
	volatile int16_t x2910 = -1;
	int32_t x2911 = 247522;
	int64_t t93 = 2416LL;

	t93 = (((x2909&x2910)/x2911)>>x2912);

	if (t93 != 9315709347911LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x2969 = INT32_MIN;
	uint32_t x2970 = UINT32_MAX;
	int8_t x2971 = INT8_MIN;
	static volatile uint8_t x2972 = 14U;
	volatile uint32_t t94 = 2208568U;

	t94 = (((x2969&x2970)/x2971)>>x2972);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2985 = INT16_MIN;
	uint64_t x2987 = UINT64_MAX;
	volatile uint16_t x2988 = 29U;
	uint64_t t95 = 95LLU;

	t95 = (((x2985&x2986)/x2987)>>x2988);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3041 = -1;
	int32_t x3042 = 136;
	int64_t x3043 = INT64_MIN;
	int8_t x3044 = 2;
	volatile int64_t t96 = 13433424284LL;

	t96 = (((x3041&x3042)/x3043)>>x3044);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3149 = INT64_MAX;
	uint32_t x3150 = 43350U;
	int64_t x3151 = INT64_MIN;
	int64_t t97 = 2158322LL;

	t97 = (((x3149&x3150)/x3151)>>x3152);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3157 = 0;
	volatile uint64_t x3158 = 13558828LLU;
	volatile int64_t x3159 = -1LL;
	int32_t x3160 = 14;
	volatile uint64_t t98 = 3402619169586272595LLU;

	t98 = (((x3157&x3158)/x3159)>>x3160);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x3165 = 13U;
	int64_t x3166 = INT64_MIN;
	int8_t x3167 = INT8_MIN;
	int64_t t99 = -24913869965LL;

	t99 = (((x3165&x3166)/x3167)>>x3168);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

