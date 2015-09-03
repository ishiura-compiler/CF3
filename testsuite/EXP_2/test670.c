#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x114 = -1;
int64_t t2 = 38690LL;
int64_t x222 = 22869508932101LL;
int8_t x224 = 12;
static volatile int8_t x228 = 0;
uint64_t t5 = 241476986LLU;
int16_t x280 = 3;
uint8_t x484 = 2U;
uint64_t x547 = UINT64_MAX;
uint16_t x553 = UINT16_MAX;
int8_t x555 = INT8_MIN;
uint64_t x654 = 5LLU;
uint64_t t10 = 8642189413LLU;
volatile int8_t x660 = 13;
uint16_t x780 = 26U;
static uint32_t x816 = 42U;
uint32_t x885 = 2553435U;
static int32_t x921 = INT32_MIN;
volatile int64_t x923 = 330LL;
int32_t t19 = -30;
int8_t x993 = INT8_MIN;
uint32_t t20 = 21U;
uint8_t x1088 = 1U;
uint8_t x1097 = 42U;
uint8_t x1098 = UINT8_MAX;
int16_t x1247 = INT16_MIN;
volatile uint64_t t24 = 623683046307LLU;
uint16_t x1293 = UINT16_MAX;
uint8_t x1301 = 33U;
static uint16_t x1302 = 12U;
volatile uint64_t t27 = 276221559LLU;
uint32_t x1445 = 6U;
static volatile uint32_t t30 = UINT32_MAX;
volatile int8_t x1490 = INT8_MAX;
int8_t x1562 = INT8_MIN;
uint16_t x1586 = 4452U;
uint32_t x1587 = 8189U;
volatile uint32_t t34 = 11U;
int32_t x1631 = 3271;
int64_t x1632 = 0LL;
int32_t x1765 = -1;
static volatile uint64_t t36 = 18942535694192LLU;
volatile int16_t x1807 = INT16_MIN;
int8_t x1955 = INT8_MAX;
volatile int32_t t38 = 36;
uint32_t x1983 = 303758428U;
static uint64_t x1984 = 10LLU;
volatile uint64_t t39 = 11475404471LLU;
static uint64_t x2142 = 8047148LLU;
static volatile uint64_t t44 = UINT64_MAX;
int8_t x2154 = INT8_MIN;
static uint32_t t46 = 312713U;
int8_t x2270 = INT8_MIN;
uint16_t x2272 = 1U;
uint64_t x2345 = 111902LLU;
int64_t x2487 = INT64_MIN;
uint64_t t51 = 1079LLU;
volatile int8_t x2596 = 0;
int16_t x2620 = 1;
volatile int64_t x2649 = INT64_MIN;
int8_t x2651 = 2;
uint64_t x2813 = 61086444840893203LLU;
uint64_t x2814 = 3022172257LLU;
volatile int64_t x2815 = INT64_MIN;
static uint8_t x2816 = 16U;
uint8_t x2916 = 17U;
int32_t x2945 = INT32_MIN;
volatile int64_t x2946 = INT64_MAX;
int32_t x2965 = -1;
static volatile uint8_t x2968 = 1U;
static volatile int64_t x3182 = 1653LL;
int16_t x3204 = 1;
int64_t x3287 = INT64_MAX;
int8_t x3288 = 1;
static uint8_t x3292 = 1U;
static int8_t x3388 = 0;
int32_t x3443 = 6843765;
volatile uint64_t t71 = 0LLU;
static uint8_t x3528 = 33U;
int16_t x3557 = -446;
volatile uint32_t x3559 = UINT32_MAX;
uint8_t x3560 = 15U;
uint64_t x3571 = 366403421LLU;
int16_t x3613 = INT16_MAX;
int32_t x3631 = INT32_MAX;
uint8_t x3709 = UINT8_MAX;
int64_t x3710 = 3517LL;
uint16_t x3764 = 8U;
int64_t x3811 = -1LL;
uint32_t x3841 = UINT32_MAX;
int32_t x3844 = 0;
volatile int64_t t82 = 507353LL;
static uint64_t x3902 = UINT64_MAX;
uint8_t x3904 = 3U;
volatile uint64_t t84 = 164513215868013LLU;
static int64_t x4017 = INT64_MIN;
int64_t x4067 = -1LL;
int8_t x4101 = INT8_MAX;
uint32_t t88 = 746341005U;
uint32_t x4227 = 413002131U;
uint64_t x4228 = 3LLU;
int32_t t91 = -857183643;
uint64_t x4280 = 7LLU;
uint16_t x4336 = 13U;
int32_t x4431 = INT32_MAX;
volatile int8_t x4432 = 1;
uint64_t x4522 = 10025176860113165LLU;
int32_t x4525 = INT32_MAX;
uint8_t x4529 = UINT8_MAX;
uint32_t x4531 = 1278928U;
int64_t t99 = -940978LL;


void f0(void) {
	volatile uint32_t x97 = 787695594U;
	uint64_t x98 = 163150996999LLU;
	uint8_t x99 = 23U;
	uint32_t x100 = 23U;
	volatile uint64_t t0 = 1013062291907LLU;

	t0 = ((x97^(x98/x99))>>x100);

	if (t0 != 784LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x113 = UINT8_MAX;
	static uint8_t x115 = 92U;
	uint16_t x116 = 0U;
	int32_t t1 = -3;

	t1 = ((x113^(x114/x115))>>x116);

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x121 = INT64_MIN;
	int16_t x122 = INT16_MIN;
	volatile int16_t x123 = INT16_MAX;
	uint64_t x124 = 4LLU;

	t2 = ((x121^(x122/x123))>>x124);

	if (t2 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x193 = 1U;
	uint64_t x194 = UINT64_MAX;
	volatile int16_t x195 = -1;
	uint8_t x196 = 2U;
	volatile uint64_t t3 = 3287914544700121172LLU;

	t3 = ((x193^(x194/x195))>>x196);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x221 = -1;
	static volatile int8_t x223 = -13;
	volatile int64_t t4 = 266266110304662242LL;

	t4 = ((x221^(x222/x223))>>x224);

	if (t4 != 429490477LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x225 = UINT32_MAX;
	int16_t x226 = -1;
	uint64_t x227 = UINT64_MAX;

	t5 = ((x225^(x226/x227))>>x228);

	if (t5 != 4294967294LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x277 = -1;
	uint64_t x278 = 21349LLU;
	uint16_t x279 = 4367U;
	static uint64_t t6 = 73044819LLU;

	t6 = ((x277^(x278/x279))>>x280);

	if (t6 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x481 = UINT16_MAX;
	int8_t x482 = -1;
	static int64_t x483 = -1053904769226708687LL;
	static volatile int64_t t7 = 91LL;

	t7 = ((x481^(x482/x483))>>x484);

	if (t7 != 16383LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x545 = 632LLU;
	int8_t x546 = INT8_MIN;
	int8_t x548 = 36;
	volatile uint64_t t8 = 117LLU;

	t8 = ((x545^(x546/x547))>>x548);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x554 = 0;
	volatile int16_t x556 = 1;
	int32_t t9 = 774343193;

	t9 = ((x553^(x554/x555))>>x556);

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x653 = -1LL;
	uint64_t x655 = UINT64_MAX;
	uint8_t x656 = 1U;

	t10 = ((x653^(x654/x655))>>x656);

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x657 = 7117U;
	int32_t x658 = INT32_MAX;
	int8_t x659 = 3;
	volatile uint32_t t11 = 535U;

	t11 = ((x657^(x658/x659))>>x660);

	if (t11 != 87381U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x725 = INT32_MIN;
	uint8_t x726 = UINT8_MAX;
	int8_t x727 = INT8_MIN;
	static volatile uint16_t x728 = 3U;
	volatile int32_t t12 = -75;

	t12 = ((x725^(x726/x727))>>x728);

	if (t12 != 268435455) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x777 = INT8_MIN;
	volatile int16_t x778 = -1129;
	uint32_t x779 = 490868037U;
	volatile uint32_t t13 = 3695U;

	t13 = ((x777^(x778/x779))>>x780);

	if (t13 != 63U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x813 = INT32_MIN;
	uint16_t x814 = 4U;
	uint64_t x815 = 1302LLU;
	uint64_t t14 = 326074466LLU;

	t14 = ((x813^(x814/x815))>>x816);

	if (t14 != 4194303LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x825 = INT64_MAX;
	uint64_t x826 = UINT64_MAX;
	static int32_t x827 = -1;
	uint8_t x828 = 49U;
	uint64_t t15 = 380950998948691026LLU;

	t15 = ((x825^(x826/x827))>>x828);

	if (t15 != 16383LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x841 = -1;
	int16_t x842 = INT16_MIN;
	volatile uint8_t x843 = 100U;
	uint32_t x844 = 15U;
	static volatile int32_t t16 = -783;

	t16 = ((x841^(x842/x843))>>x844);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x886 = 7U;
	static int32_t x887 = INT32_MAX;
	int8_t x888 = 1;
	static volatile uint32_t t17 = 297947721U;

	t17 = ((x885^(x886/x887))>>x888);

	if (t17 != 1276717U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x922 = 272566LLU;
	static int8_t x924 = 2;
	volatile uint64_t t18 = 17163668LLU;

	t18 = ((x921^(x922/x923))>>x924);

	if (t18 != 4611686017890517198LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x965 = INT8_MAX;
	volatile int8_t x966 = -17;
	volatile int32_t x967 = INT32_MIN;
	volatile uint16_t x968 = 15U;

	t19 = ((x965^(x966/x967))>>x968);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x994 = UINT32_MAX;
	volatile int32_t x995 = 126;
	uint32_t x996 = 3U;

	t20 = ((x993^(x994/x995))>>x996);

	if (t20 != 532610016U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x997 = 1;
	uint32_t x998 = 201488034U;
	int8_t x999 = -6;
	uint16_t x1000 = 0U;
	volatile uint32_t t21 = 6714478U;

	t21 = ((x997^(x998/x999))>>x1000);

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1085 = 15;
	int16_t x1086 = INT16_MIN;
	static uint32_t x1087 = 10U;
	volatile uint32_t t22 = 2221930U;

	t22 = ((x1085^(x1086/x1087))>>x1088);

	if (t22 != 214746721U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x1099 = 1604U;
	int64_t x1100 = 12LL;
	static volatile int32_t t23 = 7;

	t23 = ((x1097^(x1098/x1099))>>x1100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x1245 = INT8_MIN;
	uint64_t x1246 = 1294126507LLU;
	uint8_t x1248 = 8U;

	t24 = ((x1245^(x1246/x1247))>>x1248);

	if (t24 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1294 = 5738127U;
	static int16_t x1295 = 1;
	static uint64_t x1296 = 0LLU;
	static uint32_t t25 = 26U;

	t25 = ((x1293^(x1294/x1295))>>x1296);

	if (t25 != 5730672U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1297 = INT8_MAX;
	volatile uint32_t x1298 = 230778U;
	int64_t x1299 = INT64_MIN;
	int8_t x1300 = 10;
	static volatile int64_t t26 = 3543179475867249LL;

	t26 = ((x1297^(x1298/x1299))>>x1300);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1303 = 6499974701541479851LLU;
	int8_t x1304 = 3;

	t27 = ((x1301^(x1302/x1303))>>x1304);

	if (t27 != 4LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1305 = 211212LLU;
	uint16_t x1306 = 14U;
	int16_t x1307 = INT16_MAX;
	volatile int8_t x1308 = 2;
	volatile uint64_t t28 = 1473LLU;

	t28 = ((x1305^(x1306/x1307))>>x1308);

	if (t28 != 52803LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x1446 = -1;
	static volatile int64_t x1447 = INT64_MIN;
	uint32_t x1448 = 27U;
	int64_t t29 = 10773LL;

	t29 = ((x1445^(x1446/x1447))>>x1448);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1449 = -1;
	uint32_t x1450 = 7885U;
	int8_t x1451 = -1;
	int8_t x1452 = 0;

	t30 = ((x1449^(x1450/x1451))>>x1452);

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1489 = 26U;
	static volatile int64_t x1491 = INT64_MAX;
	int16_t x1492 = 1;
	int64_t t31 = 507418527LL;

	t31 = ((x1489^(x1490/x1491))>>x1492);

	if (t31 != 13LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1541 = INT32_MAX;
	static uint8_t x1542 = 49U;
	uint32_t x1543 = 8149U;
	static int32_t x1544 = 1;
	uint32_t t32 = 2U;

	t32 = ((x1541^(x1542/x1543))>>x1544);

	if (t32 != 1073741823U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1561 = 759LLU;
	int8_t x1563 = INT8_MIN;
	volatile uint8_t x1564 = 15U;
	uint64_t t33 = 6LLU;

	t33 = ((x1561^(x1562/x1563))>>x1564);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x1585 = 4853U;
	int8_t x1588 = 3;

	t34 = ((x1585^(x1586/x1587))>>x1588);

	if (t34 != 606U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1629 = 254U;
	int32_t x1630 = INT32_MIN;
	static uint32_t t35 = 12765154U;

	t35 = ((x1629^(x1630/x1631))>>x1632);

	if (t35 != 4294310792U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1766 = UINT16_MAX;
	uint64_t x1767 = UINT64_MAX;
	int8_t x1768 = 1;

	t36 = ((x1765^(x1766/x1767))>>x1768);

	if (t36 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1805 = 280LL;
	int64_t x1806 = -1LL;
	uint32_t x1808 = 15U;
	int64_t t37 = -25367015795304860LL;

	t37 = ((x1805^(x1806/x1807))>>x1808);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x1953 = 0U;
	volatile int32_t x1954 = 0;
	uint16_t x1956 = 3U;

	t38 = ((x1953^(x1954/x1955))>>x1956);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1981 = 35746324LLU;
	static int16_t x1982 = 0;

	t39 = ((x1981^(x1982/x1983))>>x1984);

	if (t39 != 34908LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1993 = INT32_MAX;
	uint8_t x1994 = 0U;
	uint64_t x1995 = 35006362609695413LLU;
	uint16_t x1996 = 0U;
	static uint64_t t40 = 36LLU;

	t40 = ((x1993^(x1994/x1995))>>x1996);

	if (t40 != 2147483647LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2033 = INT32_MAX;
	uint64_t x2034 = 190LLU;
	int64_t x2035 = 29966LL;
	int8_t x2036 = 14;
	static uint64_t t41 = 374859546LLU;

	t41 = ((x2033^(x2034/x2035))>>x2036);

	if (t41 != 131071LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x2077 = -1;
	volatile int8_t x2078 = INT8_MIN;
	static volatile uint16_t x2079 = 4U;
	uint8_t x2080 = 21U;
	int32_t t42 = 1244;

	t42 = ((x2077^(x2078/x2079))>>x2080);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2081 = INT8_MAX;
	int8_t x2082 = INT8_MIN;
	int16_t x2083 = -1;
	int16_t x2084 = 0;
	int32_t t43 = 853045;

	t43 = ((x2081^(x2082/x2083))>>x2084);

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2141 = -1;
	int32_t x2143 = -1;
	int8_t x2144 = 0;

	t44 = ((x2141^(x2142/x2143))>>x2144);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2149 = 9U;
	int64_t x2150 = -1426583LL;
	int8_t x2151 = INT8_MIN;
	int8_t x2152 = 5;
	int64_t t45 = 10076296954LL;

	t45 = ((x2149^(x2150/x2151))>>x2152);

	if (t45 != 348LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2153 = 438494U;
	int8_t x2155 = -1;
	static volatile uint16_t x2156 = 11U;

	t46 = ((x2153^(x2154/x2155))>>x2156);

	if (t46 != 214U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x2269 = 4U;
	int16_t x2271 = -1;
	volatile uint32_t t47 = 10663U;

	t47 = ((x2269^(x2270/x2271))>>x2272);

	if (t47 != 66U) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x2281 = INT64_MIN;
	int16_t x2282 = INT16_MIN;
	static int16_t x2283 = 81;
	volatile int8_t x2284 = 61;
	int64_t t48 = 1216464846741LL;

	t48 = ((x2281^(x2282/x2283))>>x2284);

	if (t48 != 3LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2346 = 29U;
	int8_t x2347 = INT8_MAX;
	uint16_t x2348 = 7U;
	volatile uint64_t t49 = 538318348324266LLU;

	t49 = ((x2345^(x2346/x2347))>>x2348);

	if (t49 != 874LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x2357 = UINT8_MAX;
	uint32_t x2358 = UINT32_MAX;
	volatile int16_t x2359 = INT16_MAX;
	volatile uint8_t x2360 = 13U;
	volatile uint32_t t50 = 129591634U;

	t50 = ((x2357^(x2358/x2359))>>x2360);

	if (t50 != 16U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2485 = UINT32_MAX;
	static uint64_t x2486 = 6875858570689336LLU;
	static volatile uint64_t x2488 = 0LLU;

	t51 = ((x2485^(x2486/x2487))>>x2488);

	if (t51 != 4294967295LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2517 = 163967626U;
	static uint8_t x2518 = 3U;
	static int16_t x2519 = INT16_MIN;
	static volatile uint16_t x2520 = 7U;
	volatile uint32_t t52 = 13U;

	t52 = ((x2517^(x2518/x2519))>>x2520);

	if (t52 != 1280997U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2593 = -1;
	volatile uint32_t x2594 = 3U;
	int16_t x2595 = 52;
	volatile uint32_t t53 = UINT32_MAX;

	t53 = ((x2593^(x2594/x2595))>>x2596);

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x2617 = 14LLU;
	volatile int32_t x2618 = INT32_MAX;
	int8_t x2619 = -1;
	uint64_t t54 = 34461072369980403LLU;

	t54 = ((x2617^(x2618/x2619))>>x2620);

	if (t54 != 9223372035781033991LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2650 = -3;
	uint64_t x2652 = 24LLU;
	volatile int64_t t55 = 144463524LL;

	t55 = ((x2649^(x2650/x2651))>>x2652);

	if (t55 != 549755813887LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2809 = INT16_MAX;
	static volatile uint8_t x2810 = UINT8_MAX;
	volatile int64_t x2811 = INT64_MIN;
	int8_t x2812 = 0;
	volatile int64_t t56 = -11779138676919841LL;

	t56 = ((x2809^(x2810/x2811))>>x2812);

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t t57 = 12LLU;

	t57 = ((x2813^(x2814/x2815))>>x2816);

	if (t57 != 932105176405LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x2885 = UINT32_MAX;
	int8_t x2886 = 8;
	volatile int16_t x2887 = INT16_MIN;
	int8_t x2888 = 1;
	volatile uint32_t t58 = 106U;

	t58 = ((x2885^(x2886/x2887))>>x2888);

	if (t58 != 2147483647U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2913 = INT8_MAX;
	uint32_t x2914 = 2U;
	volatile int64_t x2915 = -18366636LL;
	int64_t t59 = -3536220124083199082LL;

	t59 = ((x2913^(x2914/x2915))>>x2916);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x2947 = INT16_MIN;
	static uint64_t x2948 = 30LLU;
	int64_t t60 = 1125109371LL;

	t60 = ((x2945^(x2946/x2947))>>x2948);

	if (t60 != 262142LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2966 = 239303921LLU;
	int64_t x2967 = INT64_MIN;
	static volatile uint64_t t61 = 16214004LLU;

	t61 = ((x2965^(x2966/x2967))>>x2968);

	if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x3109 = 13367542958057LLU;
	int64_t x3110 = INT64_MIN;
	volatile int16_t x3111 = INT16_MIN;
	volatile int16_t x3112 = 40;
	volatile uint64_t t62 = 39404323737894LLU;

	t62 = ((x3109^(x3110/x3111))>>x3112);

	if (t62 != 268LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3181 = INT8_MAX;
	int32_t x3183 = INT32_MIN;
	uint8_t x3184 = 5U;
	static volatile int64_t t63 = -213LL;

	t63 = ((x3181^(x3182/x3183))>>x3184);

	if (t63 != 3LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x3201 = 6U;
	int8_t x3202 = -1;
	static volatile int32_t x3203 = INT32_MIN;
	static volatile int32_t t64 = -1104;

	t64 = ((x3201^(x3202/x3203))>>x3204);

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3229 = 40U;
	uint32_t x3230 = UINT32_MAX;
	volatile int64_t x3231 = INT64_MIN;
	int32_t x3232 = 0;
	int64_t t65 = 87753660940423LL;

	t65 = ((x3229^(x3230/x3231))>>x3232);

	if (t65 != 40LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x3285 = INT16_MAX;
	int16_t x3286 = -27;
	static int64_t t66 = 13LL;

	t66 = ((x3285^(x3286/x3287))>>x3288);

	if (t66 != 16383LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3289 = 6540006LLU;
	int32_t x3290 = 2599;
	static int16_t x3291 = INT16_MIN;
	static uint64_t t67 = 219LLU;

	t67 = ((x3289^(x3290/x3291))>>x3292);

	if (t67 != 3270003LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x3385 = INT32_MAX;
	static int8_t x3386 = 11;
	int32_t x3387 = INT32_MIN;
	volatile int32_t t68 = INT32_MAX;

	t68 = ((x3385^(x3386/x3387))>>x3388);

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3429 = 42U;
	int8_t x3430 = INT8_MIN;
	int32_t x3431 = -1;
	static volatile uint8_t x3432 = 6U;
	static volatile int32_t t69 = -146;

	t69 = ((x3429^(x3430/x3431))>>x3432);

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3441 = 61U;
	int16_t x3442 = INT16_MIN;
	volatile int16_t x3444 = 0;
	volatile int32_t t70 = 525387904;

	t70 = ((x3441^(x3442/x3443))>>x3444);

	if (t70 != 61) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3473 = 3U;
	uint8_t x3474 = UINT8_MAX;
	uint64_t x3475 = 987723LLU;
	static uint8_t x3476 = 3U;

	t71 = ((x3473^(x3474/x3475))>>x3476);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3481 = -1439;
	int32_t x3482 = INT32_MIN;
	uint32_t x3483 = UINT32_MAX;
	static int8_t x3484 = 6;
	volatile uint32_t t72 = 325938574U;

	t72 = ((x3481^(x3482/x3483))>>x3484);

	if (t72 != 67108841U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3525 = 200431296LLU;
	uint32_t x3526 = UINT32_MAX;
	int16_t x3527 = INT16_MIN;
	static uint64_t t73 = 1LLU;

	t73 = ((x3525^(x3526/x3527))>>x3528);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3558 = 4U;
	uint32_t t74 = 4620U;

	t74 = ((x3557^(x3558/x3559))>>x3560);

	if (t74 != 131071U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x3569 = 8U;
	volatile int64_t x3570 = INT64_MIN;
	uint32_t x3572 = 6U;
	static uint64_t t75 = 77538103536481830LLU;

	t75 = ((x3569^(x3570/x3571))>>x3572);

	if (t75 != 393323805LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3614 = -167;
	int8_t x3615 = INT8_MIN;
	volatile int8_t x3616 = 5;
	static int32_t t76 = -321;

	t76 = ((x3613^(x3614/x3615))>>x3616);

	if (t76 != 1023) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x3629 = INT32_MAX;
	uint32_t x3630 = 113202U;
	uint16_t x3632 = 2U;
	uint32_t t77 = 221146U;

	t77 = ((x3629^(x3630/x3631))>>x3632);

	if (t77 != 536870911U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x3711 = INT32_MIN;
	int32_t x3712 = 1;
	static volatile int64_t t78 = -69545LL;

	t78 = ((x3709^(x3710/x3711))>>x3712);

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x3761 = 6U;
	int8_t x3762 = -20;
	int32_t x3763 = -60;
	static int32_t t79 = -624007517;

	t79 = ((x3761^(x3762/x3763))>>x3764);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3809 = -1;
	int16_t x3810 = 11;
	volatile int16_t x3812 = 35;
	int64_t t80 = -1013881048054020543LL;

	t80 = ((x3809^(x3810/x3811))>>x3812);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x3837 = INT8_MIN;
	int64_t x3838 = INT64_MIN;
	uint32_t x3839 = UINT32_MAX;
	int16_t x3840 = 15;
	int64_t t81 = -357009082055LL;

	t81 = ((x3837^(x3838/x3839))>>x3840);

	if (t81 != 65535LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3842 = -1926;
	volatile int64_t x3843 = INT64_MIN;

	t82 = ((x3841^(x3842/x3843))>>x3844);

	if (t82 != 4294967295LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x3849 = UINT64_MAX;
	static uint64_t x3850 = 521980958LLU;
	volatile int64_t x3851 = -2009059484919LL;
	int8_t x3852 = 1;
	uint64_t t83 = 55036154716949LLU;

	t83 = ((x3849^(x3850/x3851))>>x3852);

	if (t83 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3901 = 1LL;
	int64_t x3903 = INT64_MAX;

	t84 = ((x3901^(x3902/x3903))>>x3904);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x3917 = 1U;
	int16_t x3918 = INT16_MIN;
	int32_t x3919 = -6;
	uint8_t x3920 = 31U;
	int32_t t85 = -25;

	t85 = ((x3917^(x3918/x3919))>>x3920);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x4018 = -1536;
	uint8_t x4019 = UINT8_MAX;
	static uint8_t x4020 = 7U;
	int64_t t86 = 169275119130LL;

	t86 = ((x4017^(x4018/x4019))>>x4020);

	if (t86 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4065 = 34302571580LL;
	int32_t x4066 = -1;
	volatile int8_t x4068 = 9;
	volatile int64_t t87 = -14547470635197LL;

	t87 = ((x4065^(x4066/x4067))>>x4068);

	if (t87 != 66997210LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4102 = UINT32_MAX;
	uint8_t x4103 = 1U;
	uint16_t x4104 = 3U;

	t88 = ((x4101^(x4102/x4103))>>x4104);

	if (t88 != 536870896U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x4109 = UINT64_MAX;
	static uint32_t x4110 = 5650047U;
	int16_t x4111 = INT16_MIN;
	uint8_t x4112 = 6U;
	volatile uint64_t t89 = 27377049150245LLU;

	t89 = ((x4109^(x4110/x4111))>>x4112);

	if (t89 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4225 = -22;
	uint16_t x4226 = 87U;
	volatile uint32_t t90 = 4736835U;

	t90 = ((x4225^(x4226/x4227))>>x4228);

	if (t90 != 536870909U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x4245 = INT32_MAX;
	uint16_t x4246 = UINT16_MAX;
	static int32_t x4247 = INT32_MIN;
	uint64_t x4248 = 30LLU;

	t91 = ((x4245^(x4246/x4247))>>x4248);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4265 = 1143345U;
	int32_t x4266 = INT32_MAX;
	int8_t x4267 = INT8_MIN;
	uint16_t x4268 = 23U;
	static uint32_t t92 = 353U;

	t92 = ((x4265^(x4266/x4267))>>x4268);

	if (t92 != 510U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x4277 = -1LL;
	uint16_t x4278 = 0U;
	uint64_t x4279 = 55845009472142996LLU;
	static uint64_t t93 = 8496818984LLU;

	t93 = ((x4277^(x4278/x4279))>>x4280);

	if (t93 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4333 = UINT8_MAX;
	uint64_t x4334 = 90LLU;
	int64_t x4335 = INT64_MAX;
	uint64_t t94 = 63554724LLU;

	t94 = ((x4333^(x4334/x4335))>>x4336);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4429 = 62U;
	int8_t x4430 = 14;
	int32_t t95 = 13891;

	t95 = ((x4429^(x4430/x4431))>>x4432);

	if (t95 != 31) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x4521 = INT16_MIN;
	int16_t x4523 = 56;
	uint8_t x4524 = 14U;
	volatile uint64_t t96 = 22567LLU;

	t96 = ((x4521^(x4522/x4523))>>x4524);

	if (t96 != 1125888980266978LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x4526 = -1;
	static uint64_t x4527 = UINT64_MAX;
	static uint16_t x4528 = 6U;
	volatile uint64_t t97 = 26689507962133438LLU;

	t97 = ((x4525^(x4526/x4527))>>x4528);

	if (t97 != 33554431LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x4530 = 147530U;
	uint32_t x4532 = 1U;
	uint32_t t98 = 4121U;

	t98 = ((x4529^(x4530/x4531))>>x4532);

	if (t98 != 127U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4541 = INT64_MAX;
	int16_t x4542 = INT16_MIN;
	int64_t x4543 = INT64_MAX;
	static volatile uint8_t x4544 = 5U;

	t99 = ((x4541^(x4542/x4543))>>x4544);

	if (t99 != 288230376151711743LL) { NG(); } else { ; }
	
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

