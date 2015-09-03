#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x11 = 0;
int16_t x45 = -1;
int64_t x62 = -6105660630LL;
volatile int8_t x64 = 34;
int32_t x113 = INT32_MIN;
uint32_t x115 = 61U;
uint32_t t3 = 15U;
volatile int16_t x127 = INT16_MIN;
uint64_t x254 = 258209873052715243LLU;
static int64_t x255 = 208961946LL;
static int16_t x289 = INT16_MIN;
uint64_t x290 = UINT64_MAX;
static int64_t x343 = 6613LL;
uint16_t x421 = UINT16_MAX;
volatile uint16_t x422 = UINT16_MAX;
int8_t x423 = INT8_MIN;
int32_t x450 = -1;
static volatile int8_t x500 = 0;
uint64_t t18 = 70LLU;
volatile uint16_t x670 = UINT16_MAX;
int64_t x671 = -1LL;
static int32_t x697 = INT32_MAX;
volatile uint32_t t21 = 429170U;
uint8_t x737 = 1U;
uint64_t x739 = UINT64_MAX;
int16_t x853 = INT16_MAX;
uint32_t x856 = 2U;
int32_t x901 = INT32_MIN;
uint64_t x939 = 14LLU;
volatile uint64_t t27 = 2105372981251LLU;
uint16_t x985 = UINT16_MAX;
int32_t x998 = INT32_MIN;
int64_t x999 = -1LL;
int64_t t30 = 5442594LL;
volatile uint64_t x1010 = 310308LLU;
int16_t x1011 = INT16_MIN;
int8_t x1109 = -1;
uint8_t x1111 = 4U;
static int16_t x1238 = INT16_MIN;
int8_t x1253 = INT8_MIN;
static volatile uint32_t x1254 = UINT32_MAX;
static int8_t x1378 = 12;
int8_t x1411 = 2;
uint64_t t40 = 50574854LLU;
uint32_t x1442 = 415864U;
static int32_t x1461 = INT32_MIN;
static int16_t x1463 = 25;
volatile int16_t x1467 = INT16_MIN;
uint16_t x1468 = 31U;
uint64_t x1493 = 304LLU;
uint64_t t45 = 1054133LLU;
uint16_t x1500 = 1U;
int64_t t46 = -6046LL;
int64_t x1523 = -1LL;
uint64_t x1561 = 274LLU;
int8_t x1584 = 0;
static int64_t x1763 = -1LL;
volatile uint16_t x1810 = 14765U;
uint8_t x1812 = 1U;
uint8_t x1923 = UINT8_MAX;
uint8_t x1935 = 112U;
uint16_t x1962 = 5U;
uint16_t x1979 = UINT16_MAX;
volatile int64_t x2022 = 105421641LL;
uint16_t x2023 = 13U;
uint64_t x2069 = 16674400LLU;
uint8_t x2121 = 58U;
int32_t t63 = -144690;
volatile uint32_t t64 = 1148388U;
static uint64_t x2247 = 663486355576LLU;
uint8_t x2248 = 0U;
volatile uint8_t x2270 = 53U;
uint32_t x2281 = UINT32_MAX;
int64_t x2283 = INT64_MAX;
uint8_t x2284 = 2U;
uint8_t x2334 = 1U;
int64_t x2335 = INT64_MIN;
volatile int32_t x2401 = -12379296;
static volatile int64_t t70 = -61085LL;
static volatile int16_t x2418 = -270;
int64_t x2562 = INT64_MAX;
int64_t x2566 = -1585552538LL;
int16_t x2639 = INT16_MIN;
uint64_t x2650 = 234879014727590868LLU;
int64_t x2651 = -1LL;
uint8_t x2709 = UINT8_MAX;
uint32_t x2807 = 4U;
static uint32_t t83 = 51U;
static volatile int32_t x2842 = 0;
volatile int64_t x2859 = INT64_MIN;
static uint16_t x2879 = 20U;
int16_t x2967 = INT16_MAX;
int8_t x2968 = 0;
uint16_t x3041 = UINT16_MAX;
uint8_t x3043 = UINT8_MAX;
uint16_t x3044 = 0U;
uint32_t t90 = 87669251U;
static int64_t t91 = 2LL;
uint16_t x3161 = 164U;
volatile int64_t t92 = 113LL;
static int64_t x3227 = -55132437894622LL;
volatile int32_t x3251 = 830;
static volatile int64_t x3252 = 5LL;
int8_t x3277 = INT8_MIN;
int16_t x3278 = -1;
static volatile uint8_t x3355 = 46U;
volatile int32_t t96 = -129;
int32_t x3403 = -1;


void f0(void) {
	uint32_t x9 = 7607936U;
	volatile uint8_t x10 = UINT8_MAX;
	uint8_t x12 = 0U;
	volatile uint32_t t0 = 2U;

	t0 = (((x9^x10)&x11)<<x12);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x46 = 152540LLU;
	uint64_t x47 = UINT64_MAX;
	uint8_t x48 = 16U;
	uint64_t t1 = 4008017LLU;

	t1 = (((x45^x46)&x47)<<x48);

	if (t1 != 18446744063712624640LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x61 = 13U;
	static int64_t x63 = 12LL;
	int64_t t2 = -729993LL;

	t2 = (((x61^x62)&x63)<<x64);

	if (t2 != 68719476736LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x114 = 0U;
	uint8_t x116 = 21U;

	t3 = (((x113^x114)&x115)<<x116);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x121 = -8;
	volatile uint64_t x122 = UINT64_MAX;
	uint16_t x123 = 168U;
	int32_t x124 = 1;
	volatile uint64_t t4 = 1967919501682LLU;

	t4 = (((x121^x122)&x123)<<x124);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x125 = 10281965U;
	static uint64_t x126 = UINT64_MAX;
	static volatile uint64_t x128 = 7LLU;
	volatile uint64_t t5 = 1672LLU;

	t5 = (((x125^x126)&x127)<<x128);

	if (t5 != 18446744072392540160LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x137 = 3443U;
	uint64_t x138 = 8819340999439LLU;
	int64_t x139 = INT64_MIN;
	uint8_t x140 = 29U;
	static uint64_t t6 = 61786248514LLU;

	t6 = (((x137^x138)&x139)<<x140);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x253 = 2962U;
	volatile uint16_t x256 = 1U;
	uint64_t t7 = 208014627827654352LLU;

	t7 = (((x253^x254)&x255)<<x256);

	if (t7 != 8913456LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x291 = INT8_MIN;
	volatile int32_t x292 = 3;
	uint64_t t8 = 1614LLU;

	t8 = (((x289^x290)&x291)<<x292);

	if (t8 != 261120LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x329 = UINT64_MAX;
	uint16_t x330 = 461U;
	volatile int64_t x331 = -1LL;
	uint32_t x332 = 48U;
	volatile uint64_t t9 = 198202LLU;

	t9 = (((x329^x330)&x331)<<x332);

	if (t9 != 18316702634469228544LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x333 = -1LL;
	int16_t x334 = -1;
	uint64_t x335 = 893151591LLU;
	static volatile uint8_t x336 = 1U;
	uint64_t t10 = 123814765029113748LLU;

	t10 = (((x333^x334)&x335)<<x336);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x341 = INT16_MIN;
	int8_t x342 = INT8_MAX;
	static volatile uint8_t x344 = 19U;
	static int64_t t11 = 123709430LL;

	t11 = (((x341^x342)&x343)<<x344);

	if (t11 != 44564480LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x424 = 0U;
	int32_t t12 = 3;

	t12 = (((x421^x422)&x423)<<x424);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x445 = 6024U;
	int64_t x446 = INT64_MAX;
	uint8_t x447 = 65U;
	uint16_t x448 = 39U;
	volatile int64_t t13 = -21747LL;

	t13 = (((x445^x446)&x447)<<x448);

	if (t13 != 35734127902720LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x449 = INT8_MIN;
	uint8_t x451 = 29U;
	int8_t x452 = 0;
	int32_t t14 = -6254528;

	t14 = (((x449^x450)&x451)<<x452);

	if (t14 != 29) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x465 = 1476U;
	int64_t x466 = 187034LL;
	uint8_t x467 = 0U;
	static volatile int32_t x468 = 1;
	volatile int64_t t15 = 725191620LL;

	t15 = (((x465^x466)&x467)<<x468);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x489 = INT8_MIN;
	volatile int8_t x490 = INT8_MIN;
	static uint16_t x491 = 1434U;
	volatile uint8_t x492 = 0U;
	volatile int32_t t16 = -7165;

	t16 = (((x489^x490)&x491)<<x492);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x497 = -1;
	uint32_t x498 = 4191656U;
	int16_t x499 = -1;
	volatile uint32_t t17 = 37U;

	t17 = (((x497^x498)&x499)<<x500);

	if (t17 != 4290775639U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x517 = INT16_MIN;
	uint64_t x518 = UINT64_MAX;
	uint64_t x519 = 897958932165LLU;
	int32_t x520 = 2;

	t18 = (((x517^x518)&x519)<<x520);

	if (t18 != 113428LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x533 = 0U;
	int8_t x534 = -1;
	int8_t x535 = 0;
	volatile uint8_t x536 = 1U;
	static volatile int32_t t19 = 1331735;

	t19 = (((x533^x534)&x535)<<x536);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x669 = 3U;
	volatile int32_t x672 = 39;
	int64_t t20 = -1355410058668129LL;

	t20 = (((x669^x670)&x671)<<x672);

	if (t20 != 36026597995708416LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x698 = INT32_MIN;
	uint32_t x699 = UINT32_MAX;
	uint8_t x700 = 10U;

	t21 = (((x697^x698)&x699)<<x700);

	if (t21 != 4294966272U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x713 = -1;
	uint32_t x714 = 1U;
	uint8_t x715 = 84U;
	uint8_t x716 = 0U;
	static volatile uint32_t t22 = 11U;

	t22 = (((x713^x714)&x715)<<x716);

	if (t22 != 84U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x738 = 3;
	uint32_t x740 = 1U;
	static uint64_t t23 = 425LLU;

	t23 = (((x737^x738)&x739)<<x740);

	if (t23 != 4LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x854 = INT32_MIN;
	int64_t x855 = 2294594813723487LL;
	int64_t t24 = -1439LL;

	t24 = (((x853^x854)&x855)<<x856);

	if (t24 != 9178370881359228LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x869 = 2448;
	static int64_t x870 = INT64_MIN;
	volatile int32_t x871 = INT32_MAX;
	int8_t x872 = 1;
	int64_t t25 = -1LL;

	t25 = (((x869^x870)&x871)<<x872);

	if (t25 != 4896LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x902 = UINT32_MAX;
	int64_t x903 = 792714556161369728LL;
	uint16_t x904 = 1U;
	static int64_t t26 = -23345170465615LL;

	t26 = (((x901^x902)&x903)<<x904);

	if (t26 != 2962181376LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x937 = INT16_MAX;
	static int16_t x938 = INT16_MIN;
	uint32_t x940 = 24U;

	t27 = (((x937^x938)&x939)<<x940);

	if (t27 != 234881024LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x941 = 7840U;
	int8_t x942 = INT8_MAX;
	static int64_t x943 = -1LL;
	volatile int32_t x944 = 3;
	int64_t t28 = 1101LL;

	t28 = (((x941^x942)&x943)<<x944);

	if (t28 != 63224LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x986 = INT32_MAX;
	static volatile int8_t x987 = INT8_MAX;
	int8_t x988 = 0;
	volatile int32_t t29 = 21528;

	t29 = (((x985^x986)&x987)<<x988);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x997 = INT32_MIN;
	volatile int32_t x1000 = 4;

	t30 = (((x997^x998)&x999)<<x1000);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1001 = UINT16_MAX;
	uint16_t x1002 = UINT16_MAX;
	uint8_t x1003 = 0U;
	volatile int32_t x1004 = 1;
	int32_t t31 = 784939;

	t31 = (((x1001^x1002)&x1003)<<x1004);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1009 = INT32_MIN;
	uint8_t x1012 = 17U;
	volatile uint64_t t32 = 29435267492482270LLU;

	t32 = (((x1009^x1010)&x1011)<<x1012);

	if (t32 != 18446462637387546624LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1077 = INT8_MAX;
	static volatile uint32_t x1078 = 8U;
	int8_t x1079 = INT8_MIN;
	static uint8_t x1080 = 13U;
	uint32_t t33 = 659U;

	t33 = (((x1077^x1078)&x1079)<<x1080);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x1110 = UINT8_MAX;
	int8_t x1112 = 3;
	static volatile int32_t t34 = -3434942;

	t34 = (((x1109^x1110)&x1111)<<x1112);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x1157 = 11949725548LL;
	uint8_t x1158 = 20U;
	uint64_t x1159 = 1180567988LLU;
	volatile int16_t x1160 = 1;
	static volatile uint64_t t35 = 29982LLU;

	t35 = (((x1157^x1158)&x1159)<<x1160);

	if (t35 != 2156135008LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1237 = 1U;
	uint64_t x1239 = 5083LLU;
	volatile uint32_t x1240 = 14U;
	volatile uint64_t t36 = 42LLU;

	t36 = (((x1237^x1238)&x1239)<<x1240);

	if (t36 != 16384LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1255 = 49;
	int8_t x1256 = 1;
	volatile uint32_t t37 = 0U;

	t37 = (((x1253^x1254)&x1255)<<x1256);

	if (t37 != 98U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1333 = 380U;
	int8_t x1334 = INT8_MIN;
	volatile int16_t x1335 = INT16_MIN;
	volatile uint16_t x1336 = 1U;
	uint32_t t38 = 1U;

	t38 = (((x1333^x1334)&x1335)<<x1336);

	if (t38 != 4294901760U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1377 = UINT8_MAX;
	uint32_t x1379 = UINT32_MAX;
	uint8_t x1380 = 10U;
	static volatile uint32_t t39 = 6915885U;

	t39 = (((x1377^x1378)&x1379)<<x1380);

	if (t39 != 248832U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1409 = UINT64_MAX;
	int16_t x1410 = INT16_MIN;
	uint16_t x1412 = 62U;

	t40 = (((x1409^x1410)&x1411)<<x1412);

	if (t40 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1425 = 333390137819935249LL;
	uint32_t x1426 = UINT32_MAX;
	volatile uint64_t x1427 = UINT64_MAX;
	uint8_t x1428 = 1U;
	volatile uint64_t t41 = 1675800253965043LLU;

	t41 = (((x1425^x1426)&x1427)<<x1428);

	if (t41 != 666780277762137052LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x1441 = 37U;
	int16_t x1443 = INT16_MIN;
	int8_t x1444 = 0;
	uint32_t t42 = 71296377U;

	t42 = (((x1441^x1442)&x1443)<<x1444);

	if (t42 != 393216U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1462 = -1;
	volatile uint16_t x1464 = 15U;
	volatile int32_t t43 = -11026;

	t43 = (((x1461^x1462)&x1463)<<x1464);

	if (t43 != 819200) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1465 = INT8_MAX;
	uint16_t x1466 = 209U;
	volatile int32_t t44 = 2480;

	t44 = (((x1465^x1466)&x1467)<<x1468);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1494 = INT32_MIN;
	int32_t x1495 = -6129273;
	static int16_t x1496 = 15;

	t45 = (((x1493^x1494)&x1495)<<x1496);

	if (t45 != 18446673704973762560LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1497 = INT64_MIN;
	volatile int64_t x1498 = INT64_MIN;
	int64_t x1499 = -17988333720261163LL;

	t46 = (((x1497^x1498)&x1499)<<x1500);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x1521 = INT64_MAX;
	uint8_t x1522 = 109U;
	static volatile uint16_t x1524 = 0U;
	static volatile int64_t t47 = 668268791LL;

	t47 = (((x1521^x1522)&x1523)<<x1524);

	if (t47 != 9223372036854775698LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1562 = 1U;
	int16_t x1563 = -1;
	uint8_t x1564 = 17U;
	uint64_t t48 = 121494LLU;

	t48 = (((x1561^x1562)&x1563)<<x1564);

	if (t48 != 36044800LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1581 = -13;
	int16_t x1582 = -309;
	int32_t x1583 = INT32_MAX;
	int32_t t49 = -5985;

	t49 = (((x1581^x1582)&x1583)<<x1584);

	if (t49 != 312) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1761 = 10191469570LLU;
	volatile uint16_t x1762 = 157U;
	uint32_t x1764 = 10U;
	static volatile uint64_t t50 = 16LLU;

	t50 = (((x1761^x1762)&x1763)<<x1764);

	if (t50 != 10436065000448LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x1793 = -197LL;
	static int32_t x1794 = 224631;
	uint16_t x1795 = 8692U;
	static uint8_t x1796 = 31U;
	int64_t t51 = -2083470493754LL;

	t51 = (((x1793^x1794)&x1795)<<x1796);

	if (t51 != 146028888064LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1809 = 41U;
	uint8_t x1811 = UINT8_MAX;
	static volatile int32_t t52 = -57;

	t52 = (((x1809^x1810)&x1811)<<x1812);

	if (t52 != 264) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1821 = UINT32_MAX;
	int8_t x1822 = -1;
	uint64_t x1823 = 440263970161893LLU;
	int16_t x1824 = 46;
	uint64_t t53 = 173560899829535LLU;

	t53 = (((x1821^x1822)&x1823)<<x1824);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1921 = UINT16_MAX;
	static int64_t x1922 = 305670LL;
	uint8_t x1924 = 1U;
	int64_t t54 = 264194LL;

	t54 = (((x1921^x1922)&x1923)<<x1924);

	if (t54 != 498LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1933 = INT8_MIN;
	int64_t x1934 = 1591809204LL;
	uint32_t x1936 = 16U;
	static int64_t t55 = -436187842LL;

	t55 = (((x1933^x1934)&x1935)<<x1936);

	if (t55 != 3145728LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x1949 = 1U;
	int32_t x1950 = INT32_MAX;
	int16_t x1951 = INT16_MAX;
	uint8_t x1952 = 16U;
	int32_t t56 = -390057863;

	t56 = (((x1949^x1950)&x1951)<<x1952);

	if (t56 != 2147352576) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1961 = 29U;
	volatile int64_t x1963 = INT64_MIN;
	uint32_t x1964 = 6U;
	volatile int64_t t57 = -4107587068512LL;

	t57 = (((x1961^x1962)&x1963)<<x1964);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1977 = -1LL;
	int8_t x1978 = INT8_MIN;
	static uint8_t x1980 = 1U;
	volatile int64_t t58 = -906LL;

	t58 = (((x1977^x1978)&x1979)<<x1980);

	if (t58 != 254LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2021 = INT16_MIN;
	static int16_t x2024 = 45;
	int64_t t59 = -33755565442512LL;

	t59 = (((x2021^x2022)&x2023)<<x2024);

	if (t59 != 316659348799488LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2049 = 27;
	uint32_t x2050 = UINT32_MAX;
	volatile int32_t x2051 = INT32_MIN;
	uint8_t x2052 = 4U;
	volatile uint32_t t60 = 88553308U;

	t60 = (((x2049^x2050)&x2051)<<x2052);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2070 = INT16_MIN;
	uint64_t x2071 = 112956209131001LLU;
	volatile int16_t x2072 = 13;
	volatile uint64_t t61 = 1481128031686LLU;

	t61 = (((x2069^x2070)&x2071)<<x2072);

	if (t61 != 925337166413561856LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2073 = 58U;
	static uint32_t x2074 = 407654934U;
	int8_t x2075 = 7;
	uint16_t x2076 = 1U;
	volatile uint32_t t62 = 255154U;

	t62 = (((x2073^x2074)&x2075)<<x2076);

	if (t62 != 8U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x2122 = 10U;
	int16_t x2123 = -20;
	static int64_t x2124 = 0LL;

	t63 = (((x2121^x2122)&x2123)<<x2124);

	if (t63 != 32) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x2213 = INT32_MIN;
	static uint32_t x2214 = 5674681U;
	int8_t x2215 = INT8_MIN;
	uint8_t x2216 = 4U;

	t64 = (((x2213^x2214)&x2215)<<x2216);

	if (t64 != 90793984U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2245 = INT16_MIN;
	int32_t x2246 = -1;
	static uint64_t t65 = 506517LLU;

	t65 = (((x2245^x2246)&x2247)<<x2248);

	if (t65 != 22648LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2269 = INT8_MIN;
	static volatile int16_t x2271 = 1425;
	int16_t x2272 = 17;
	static int32_t t66 = 0;

	t66 = (((x2269^x2270)&x2271)<<x2272);

	if (t66 != 186777600) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2282 = INT16_MIN;
	static volatile int64_t t67 = 0LL;

	t67 = (((x2281^x2282)&x2283)<<x2284);

	if (t67 != 131068LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x2333 = 116U;
	static volatile uint64_t x2336 = 24LLU;
	static volatile int64_t t68 = -15871560909771110LL;

	t68 = (((x2333^x2334)&x2335)<<x2336);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2357 = 1319LLU;
	uint8_t x2358 = 5U;
	volatile uint64_t x2359 = 16156822856038296LLU;
	static volatile int64_t x2360 = 1LL;
	uint64_t t69 = 56793140467LLU;

	t69 = (((x2357^x2358)&x2359)<<x2360);

	if (t69 != 2560LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2402 = INT64_MIN;
	volatile uint32_t x2403 = 65U;
	int8_t x2404 = 20;

	t70 = (((x2401^x2402)&x2403)<<x2404);

	if (t70 != 67108864LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2417 = INT16_MIN;
	int8_t x2419 = -1;
	int64_t x2420 = 4LL;
	int32_t t71 = -5;

	t71 = (((x2417^x2418)&x2419)<<x2420);

	if (t71 != 519968) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2425 = -1LL;
	volatile int16_t x2426 = 1;
	uint64_t x2427 = UINT64_MAX;
	uint16_t x2428 = 1U;
	volatile uint64_t t72 = 283034982LLU;

	t72 = (((x2425^x2426)&x2427)<<x2428);

	if (t72 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2561 = UINT64_MAX;
	int32_t x2563 = INT32_MIN;
	int16_t x2564 = 0;
	static volatile uint64_t t73 = 5LLU;

	t73 = (((x2561^x2562)&x2563)<<x2564);

	if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2565 = UINT16_MAX;
	volatile int8_t x2567 = 12;
	uint16_t x2568 = 7U;
	volatile int64_t t74 = 70LL;

	t74 = (((x2565^x2566)&x2567)<<x2568);

	if (t74 != 1024LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2581 = UINT64_MAX;
	uint8_t x2582 = 5U;
	int8_t x2583 = INT8_MAX;
	uint8_t x2584 = 20U;
	uint64_t t75 = 205742LLU;

	t75 = (((x2581^x2582)&x2583)<<x2584);

	if (t75 != 127926272LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x2609 = UINT8_MAX;
	static int16_t x2610 = INT16_MAX;
	int16_t x2611 = -1;
	int8_t x2612 = 1;
	volatile int32_t t76 = -21417;

	t76 = (((x2609^x2610)&x2611)<<x2612);

	if (t76 != 65024) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x2637 = INT32_MIN;
	static uint32_t x2638 = 262679268U;
	volatile uint8_t x2640 = 7U;
	volatile uint32_t t77 = 1784U;

	t77 = (((x2637^x2638)&x2639)<<x2640);

	if (t77 != 3556769792U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2649 = 0LLU;
	static volatile int8_t x2652 = 1;
	volatile uint64_t t78 = 90LLU;

	t78 = (((x2649^x2650)&x2651)<<x2652);

	if (t78 != 469758029455181736LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2677 = 38U;
	static uint32_t x2678 = 124576351U;
	int16_t x2679 = -537;
	uint8_t x2680 = 21U;
	uint32_t t79 = 4620049U;

	t79 = (((x2677^x2678)&x2679)<<x2680);

	if (t79 != 203423744U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x2689 = UINT64_MAX;
	int64_t x2690 = -15261169166LL;
	volatile uint8_t x2691 = UINT8_MAX;
	uint32_t x2692 = 0U;
	static uint64_t t80 = 4LLU;

	t80 = (((x2689^x2690)&x2691)<<x2692);

	if (t80 != 13LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2710 = INT32_MIN;
	volatile int16_t x2711 = 3135;
	int32_t x2712 = 0;
	static int32_t t81 = 2694;

	t81 = (((x2709^x2710)&x2711)<<x2712);

	if (t81 != 63) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2785 = -8653;
	uint8_t x2786 = 6U;
	static int16_t x2787 = INT16_MAX;
	volatile uint64_t x2788 = 9LLU;
	int32_t t82 = -3;

	t82 = (((x2785^x2786)&x2787)<<x2788);

	if (t82 != 12347904) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x2805 = 1U;
	int16_t x2806 = -1;
	volatile int32_t x2808 = 2;

	t83 = (((x2805^x2806)&x2807)<<x2808);

	if (t83 != 16U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2841 = INT32_MAX;
	static int64_t x2843 = -1LL;
	uint16_t x2844 = 1U;
	static int64_t t84 = 734246316621312LL;

	t84 = (((x2841^x2842)&x2843)<<x2844);

	if (t84 != 4294967294LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x2857 = 29584691;
	uint16_t x2858 = UINT16_MAX;
	uint8_t x2860 = 6U;
	int64_t t85 = -231551270287LL;

	t85 = (((x2857^x2858)&x2859)<<x2860);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2877 = 487U;
	volatile int8_t x2878 = INT8_MAX;
	uint8_t x2880 = 2U;
	volatile uint32_t t86 = 2722036U;

	t86 = (((x2877^x2878)&x2879)<<x2880);

	if (t86 != 64U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2897 = INT64_MIN;
	int16_t x2898 = INT16_MIN;
	int64_t x2899 = INT64_MIN;
	static int32_t x2900 = 3;
	int64_t t87 = 4LL;

	t87 = (((x2897^x2898)&x2899)<<x2900);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x2965 = -1LL;
	static uint64_t x2966 = 13612765872LLU;
	static uint64_t t88 = 24399586LLU;

	t88 = (((x2965^x2966)&x2967)<<x2968);

	if (t88 != 11599LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x2981 = 0U;
	static volatile int32_t x2982 = INT32_MIN;
	static int32_t x2983 = 108;
	int8_t x2984 = 0;
	static uint32_t t89 = 57400U;

	t89 = (((x2981^x2982)&x2983)<<x2984);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x3042 = 11797U;

	t90 = (((x3041^x3042)&x3043)<<x3044);

	if (t90 != 234U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3117 = INT8_MIN;
	static int16_t x3118 = -420;
	int64_t x3119 = 15849LL;
	static uint16_t x3120 = 22U;

	t91 = (((x3117^x3118)&x3119)<<x3120);

	if (t91 != 1912602624LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x3162 = UINT16_MAX;
	int64_t x3163 = -212975LL;
	uint8_t x3164 = 0U;

	t92 = (((x3161^x3162)&x3163)<<x3164);

	if (t92 != 49169LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x3225 = INT8_MIN;
	int64_t x3226 = -1530750066025977439LL;
	int16_t x3228 = 1;
	int64_t t93 = -87981545679LL;

	t93 = (((x3225^x3226)&x3227)<<x3228);

	if (t93 != 3061464947499467840LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3249 = -2;
	int32_t x3250 = 351805732;
	static volatile int32_t t94 = 15;

	t94 = (((x3249^x3250)&x3251)<<x3252);

	if (t94 != 17216) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3279 = INT8_MIN;
	uint8_t x3280 = 1U;
	static volatile int32_t t95 = -4;

	t95 = (((x3277^x3278)&x3279)<<x3280);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3353 = UINT16_MAX;
	static volatile int8_t x3354 = INT8_MIN;
	uint32_t x3356 = 3U;

	t96 = (((x3353^x3354)&x3355)<<x3356);

	if (t96 != 368) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3401 = UINT64_MAX;
	uint64_t x3402 = 545013115606610LLU;
	uint8_t x3404 = 2U;
	uint64_t t97 = 545571270LLU;

	t97 = (((x3401^x3402)&x3403)<<x3404);

	if (t97 != 18444564021247125172LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3473 = INT64_MIN;
	int64_t x3474 = INT64_MIN;
	int16_t x3475 = -1;
	int8_t x3476 = 0;
	int64_t t98 = 1269513590LL;

	t98 = (((x3473^x3474)&x3475)<<x3476);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3525 = INT32_MIN;
	int32_t x3526 = -23634;
	volatile int64_t x3527 = -521045LL;
	int8_t x3528 = 1;
	int64_t t99 = -62LL;

	t99 = (((x3525^x3526)&x3527)<<x3528);

	if (t99 != 4293919060LL) { NG(); } else { ; }
	
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

