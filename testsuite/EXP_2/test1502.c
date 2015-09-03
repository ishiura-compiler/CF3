#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x23 = 271926097178807LLU;
static uint32_t x24 = 11U;
int8_t x37 = 0;
int8_t x239 = -1;
uint64_t x293 = 10540LLU;
uint8_t x409 = UINT8_MAX;
int16_t x479 = 55;
volatile int32_t t10 = 218;
static uint16_t x491 = UINT16_MAX;
static int8_t x492 = 3;
static uint32_t x524 = 0U;
int64_t x581 = INT64_MAX;
int8_t x582 = -1;
int64_t x583 = INT64_MAX;
int8_t x665 = 12;
int8_t x667 = 9;
volatile uint32_t x685 = UINT32_MAX;
uint64_t x733 = 355542623992LLU;
uint64_t x736 = 18LLU;
uint8_t x853 = 3U;
uint64_t x893 = UINT64_MAX;
volatile uint32_t x902 = 12135480U;
int32_t x903 = INT32_MAX;
volatile int32_t t22 = -930;
volatile uint64_t x933 = 1LLU;
uint64_t x935 = UINT64_MAX;
int16_t x936 = 0;
volatile uint64_t t24 = 2380LLU;
static int64_t x945 = 11438157LL;
int64_t x947 = 41595LL;
uint64_t x948 = 0LLU;
static volatile int64_t t25 = 13112421LL;
uint8_t x997 = UINT8_MAX;
static int8_t x1000 = 0;
int8_t x1222 = INT8_MIN;
uint8_t x1281 = 45U;
int32_t t31 = -352273;
int8_t x1422 = -1;
static uint8_t x1436 = 57U;
volatile int64_t x1442 = 5854060LL;
uint32_t x1444 = 8U;
uint64_t x1534 = UINT64_MAX;
volatile int16_t x1548 = 0;
uint8_t x1581 = UINT8_MAX;
int32_t x1583 = INT32_MAX;
uint64_t x1695 = UINT64_MAX;
static uint16_t x1705 = UINT16_MAX;
uint8_t x1706 = 5U;
uint64_t x1711 = 848107LLU;
volatile int8_t x1719 = INT8_MIN;
volatile uint8_t x1758 = 9U;
volatile int32_t x1759 = -1;
int64_t x1762 = INT64_MAX;
uint64_t x1857 = 27512LLU;
static volatile uint64_t t49 = 1669460LLU;
int32_t x1881 = INT32_MAX;
volatile uint32_t x1999 = 4U;
int8_t x2052 = 2;
int16_t x2078 = -1;
volatile int8_t x2109 = 1;
uint8_t x2124 = 29U;
volatile int8_t x2177 = 1;
uint8_t x2180 = 24U;
int8_t x2193 = INT8_MAX;
uint64_t x2195 = 5LLU;
uint8_t x2196 = 8U;
static uint8_t x2200 = 15U;
int8_t x2235 = INT8_MAX;
int8_t x2300 = 0;
uint8_t x2329 = 5U;
int8_t x2332 = 9;
static volatile uint8_t x2365 = UINT8_MAX;
static volatile int32_t x2366 = 224;
uint32_t x2391 = 3656U;
int8_t x2392 = 1;
int64_t x2417 = 1LL;
static volatile int32_t x2418 = INT32_MAX;
static int16_t x2429 = INT16_MAX;
volatile int8_t x2630 = -1;
volatile int32_t t72 = -146352919;
static uint16_t x2709 = 38U;
uint8_t x2712 = 30U;
int16_t x2727 = INT16_MIN;
static uint8_t x2728 = 12U;
static volatile int64_t x2846 = INT64_MAX;
int8_t x2886 = INT8_MAX;
volatile uint8_t x2994 = 62U;
volatile int16_t x2995 = INT16_MAX;
static uint32_t x3000 = 12U;
static volatile int64_t x3074 = INT64_MAX;
uint64_t x3205 = UINT64_MAX;
int32_t t85 = -48690;
int8_t x3312 = 6;
uint32_t x3357 = 100092946U;
static int64_t x3359 = 8325824LL;
int32_t t89 = 59571;
volatile uint8_t x3468 = 7U;
volatile int16_t x3612 = 1;
int32_t x3643 = INT32_MIN;
int16_t x3783 = 1671;
volatile int32_t t96 = 12214270;
static int64_t x3817 = INT64_MAX;
static volatile int64_t x3820 = 3LL;


void f0(void) {
	uint64_t x1 = 162LLU;
	uint16_t x2 = UINT16_MAX;
	uint32_t x3 = 10U;
	volatile uint8_t x4 = 5U;
	uint64_t t0 = 0LLU;

	t0 = ((x1|(x2<x3))>>x4);

	if (t0 != 5LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x21 = 23804406U;
	volatile uint8_t x22 = 2U;
	uint32_t t1 = 4650U;

	t1 = ((x21|(x22<x23))>>x24);

	if (t1 != 11623U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x38 = -99255255;
	static int32_t x39 = INT32_MIN;
	volatile uint16_t x40 = 1U;
	volatile int32_t t2 = 2512;

	t2 = ((x37|(x38<x39))>>x40);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x109 = UINT16_MAX;
	int32_t x110 = INT32_MIN;
	int64_t x111 = INT64_MAX;
	volatile uint32_t x112 = 3U;
	static int32_t t3 = -49;

	t3 = ((x109|(x110<x111))>>x112);

	if (t3 != 8191) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x145 = INT16_MAX;
	int32_t x146 = INT32_MIN;
	int32_t x147 = -4447;
	uint32_t x148 = 10U;
	volatile int32_t t4 = -121776;

	t4 = ((x145|(x146<x147))>>x148);

	if (t4 != 31) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x237 = INT64_MAX;
	uint64_t x238 = UINT64_MAX;
	uint16_t x240 = 29U;
	int64_t t5 = -386430106734LL;

	t5 = ((x237|(x238<x239))>>x240);

	if (t5 != 17179869183LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x269 = 7469LL;
	static int32_t x270 = INT32_MIN;
	int32_t x271 = -1;
	static int16_t x272 = 56;
	static int64_t t6 = 660LL;

	t6 = ((x269|(x270<x271))>>x272);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x294 = INT8_MAX;
	static int16_t x295 = 26;
	uint8_t x296 = 18U;
	volatile uint64_t t7 = 13311622LLU;

	t7 = ((x293|(x294<x295))>>x296);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x345 = 1252;
	static int64_t x346 = INT64_MIN;
	int64_t x347 = INT64_MAX;
	static uint8_t x348 = 30U;
	int32_t t8 = 177639446;

	t8 = ((x345|(x346<x347))>>x348);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x410 = 159LL;
	int64_t x411 = 42908102566954LL;
	uint8_t x412 = 6U;
	int32_t t9 = 43376192;

	t9 = ((x409|(x410<x411))>>x412);

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x477 = 2U;
	int8_t x478 = 10;
	static uint8_t x480 = 1U;

	t10 = ((x477|(x478<x479))>>x480);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x489 = INT64_MAX;
	volatile int32_t x490 = 24;
	int64_t t11 = -124LL;

	t11 = ((x489|(x490<x491))>>x492);

	if (t11 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x497 = INT16_MAX;
	volatile uint64_t x498 = 48635374088587996LLU;
	int32_t x499 = INT32_MAX;
	volatile int16_t x500 = 15;
	volatile int32_t t12 = -1;

	t12 = ((x497|(x498<x499))>>x500);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x521 = UINT64_MAX;
	int16_t x522 = INT16_MAX;
	volatile int64_t x523 = INT64_MIN;
	uint64_t t13 = UINT64_MAX;

	t13 = ((x521|(x522<x523))>>x524);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x557 = 27512LL;
	volatile int16_t x558 = INT16_MAX;
	int32_t x559 = 573464309;
	uint8_t x560 = 6U;
	volatile int64_t t14 = -2471800009LL;

	t14 = ((x557|(x558<x559))>>x560);

	if (t14 != 429LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x584 = 36U;
	volatile int64_t t15 = 266929670926220LL;

	t15 = ((x581|(x582<x583))>>x584);

	if (t15 != 134217727LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x666 = UINT8_MAX;
	uint8_t x668 = 2U;
	volatile int32_t t16 = -597;

	t16 = ((x665|(x666<x667))>>x668);

	if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x686 = INT64_MIN;
	static volatile int64_t x687 = -1LL;
	int8_t x688 = 2;
	volatile uint32_t t17 = 1U;

	t17 = ((x685|(x686<x687))>>x688);

	if (t17 != 1073741823U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x734 = -1;
	int32_t x735 = INT32_MAX;
	uint64_t t18 = 2290023947206522612LLU;

	t18 = ((x733|(x734<x735))>>x736);

	if (t18 != 1356287LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x854 = 2U;
	static int8_t x855 = -58;
	uint32_t x856 = 21U;
	volatile int32_t t19 = 705;

	t19 = ((x853|(x854<x855))>>x856);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x857 = UINT16_MAX;
	volatile int16_t x858 = INT16_MIN;
	volatile int16_t x859 = INT16_MIN;
	int8_t x860 = 0;
	int32_t t20 = -1;

	t20 = ((x857|(x858<x859))>>x860);

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x894 = 30;
	static uint8_t x895 = UINT8_MAX;
	static uint32_t x896 = 6U;
	static uint64_t t21 = 61738588981LLU;

	t21 = ((x893|(x894<x895))>>x896);

	if (t21 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x901 = INT32_MAX;
	uint8_t x904 = 10U;

	t22 = ((x901|(x902<x903))>>x904);

	if (t22 != 2097151) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x917 = 2U;
	static int8_t x918 = INT8_MIN;
	volatile int32_t x919 = 1025852;
	int16_t x920 = 1;
	int32_t t23 = 66140663;

	t23 = ((x917|(x918<x919))>>x920);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x934 = 1U;

	t24 = ((x933|(x934<x935))>>x936);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x946 = INT64_MIN;

	t25 = ((x945|(x946<x947))>>x948);

	if (t25 != 11438157LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x969 = 247400U;
	volatile int32_t x970 = INT32_MAX;
	static volatile uint16_t x971 = 1972U;
	uint8_t x972 = 10U;
	volatile uint32_t t26 = 25U;

	t26 = ((x969|(x970<x971))>>x972);

	if (t26 != 241U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x998 = INT64_MIN;
	volatile int64_t x999 = INT64_MIN;
	static volatile int32_t t27 = -19476383;

	t27 = ((x997|(x998<x999))>>x1000);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x1197 = 379033073917802444LLU;
	uint32_t x1198 = UINT32_MAX;
	static int16_t x1199 = INT16_MIN;
	int8_t x1200 = 46;
	static uint64_t t28 = 200342LLU;

	t28 = ((x1197|(x1198<x1199))>>x1200);

	if (t28 != 5386LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x1221 = 28;
	uint16_t x1223 = 3984U;
	volatile uint16_t x1224 = 0U;
	int32_t t29 = 1020757;

	t29 = ((x1221|(x1222<x1223))>>x1224);

	if (t29 != 29) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x1257 = 1LL;
	uint64_t x1258 = 175948LLU;
	uint64_t x1259 = UINT64_MAX;
	volatile uint8_t x1260 = 18U;
	static volatile int64_t t30 = 2LL;

	t30 = ((x1257|(x1258<x1259))>>x1260);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1282 = UINT32_MAX;
	static uint8_t x1283 = 12U;
	int32_t x1284 = 0;

	t31 = ((x1281|(x1282<x1283))>>x1284);

	if (t31 != 45) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1389 = 212379734134818025LLU;
	volatile uint32_t x1390 = UINT32_MAX;
	uint8_t x1391 = 38U;
	uint16_t x1392 = 2U;
	static volatile uint64_t t32 = 1208849665LLU;

	t32 = ((x1389|(x1390<x1391))>>x1392);

	if (t32 != 53094933533704506LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1413 = 1;
	uint32_t x1414 = 671907U;
	int32_t x1415 = 3114984;
	uint16_t x1416 = 24U;
	volatile int32_t t33 = -424563;

	t33 = ((x1413|(x1414<x1415))>>x1416);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1421 = INT8_MAX;
	static volatile uint64_t x1423 = 418LLU;
	int16_t x1424 = 1;
	volatile int32_t t34 = 79;

	t34 = ((x1421|(x1422<x1423))>>x1424);

	if (t34 != 63) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1429 = 14U;
	uint32_t x1430 = 8047U;
	int64_t x1431 = INT64_MIN;
	static int8_t x1432 = 1;
	int32_t t35 = -15;

	t35 = ((x1429|(x1430<x1431))>>x1432);

	if (t35 != 7) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1433 = 4LLU;
	uint32_t x1434 = 86259075U;
	volatile int16_t x1435 = INT16_MIN;
	static volatile uint64_t t36 = 16446971LLU;

	t36 = ((x1433|(x1434<x1435))>>x1436);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1441 = INT64_MAX;
	int8_t x1443 = INT8_MIN;
	static volatile int64_t t37 = 3553742441748LL;

	t37 = ((x1441|(x1442<x1443))>>x1444);

	if (t37 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1481 = 1366;
	uint32_t x1482 = UINT32_MAX;
	uint32_t x1483 = 1701U;
	uint16_t x1484 = 15U;
	int32_t t38 = 9698;

	t38 = ((x1481|(x1482<x1483))>>x1484);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x1533 = 3890U;
	volatile int16_t x1535 = 61;
	uint8_t x1536 = 1U;
	volatile int32_t t39 = 3797;

	t39 = ((x1533|(x1534<x1535))>>x1536);

	if (t39 != 1945) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1545 = 19447836U;
	uint8_t x1546 = UINT8_MAX;
	int32_t x1547 = INT32_MIN;
	static volatile uint32_t t40 = 0U;

	t40 = ((x1545|(x1546<x1547))>>x1548);

	if (t40 != 19447836U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x1582 = INT8_MIN;
	uint8_t x1584 = 0U;
	volatile int32_t t41 = 6853174;

	t41 = ((x1581|(x1582<x1583))>>x1584);

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x1633 = UINT64_MAX;
	static volatile int32_t x1634 = -1;
	uint64_t x1635 = 41724115LLU;
	uint8_t x1636 = 6U;
	volatile uint64_t t42 = 118499003807390LLU;

	t42 = ((x1633|(x1634<x1635))>>x1636);

	if (t42 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1693 = 37;
	uint64_t x1694 = 91562799884404LLU;
	volatile int8_t x1696 = 12;
	static volatile int32_t t43 = -524932749;

	t43 = ((x1693|(x1694<x1695))>>x1696);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x1707 = 1U;
	volatile int64_t x1708 = 15LL;
	volatile int32_t t44 = 48;

	t44 = ((x1705|(x1706<x1707))>>x1708);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x1709 = 103U;
	uint64_t x1710 = 1303289150052994606LLU;
	int8_t x1712 = 29;
	volatile int32_t t45 = -67;

	t45 = ((x1709|(x1710<x1711))>>x1712);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1717 = UINT8_MAX;
	static uint32_t x1718 = 84U;
	volatile int16_t x1720 = 10;
	volatile int32_t t46 = -66862322;

	t46 = ((x1717|(x1718<x1719))>>x1720);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x1757 = 1122165867363189LL;
	uint8_t x1760 = 0U;
	static volatile int64_t t47 = -25309475LL;

	t47 = ((x1757|(x1758<x1759))>>x1760);

	if (t47 != 1122165867363189LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1761 = UINT32_MAX;
	int64_t x1763 = 64LL;
	uint8_t x1764 = 0U;
	static uint32_t t48 = UINT32_MAX;

	t48 = ((x1761|(x1762<x1763))>>x1764);

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1858 = INT32_MIN;
	static int64_t x1859 = -1LL;
	uint8_t x1860 = 0U;

	t49 = ((x1857|(x1858<x1859))>>x1860);

	if (t49 != 27513LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x1882 = 117U;
	int32_t x1883 = -3120;
	uint32_t x1884 = 0U;
	int32_t t50 = INT32_MAX;

	t50 = ((x1881|(x1882<x1883))>>x1884);

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1889 = INT16_MAX;
	static int64_t x1890 = INT64_MIN;
	volatile int8_t x1891 = 5;
	static int8_t x1892 = 27;
	volatile int32_t t51 = 74;

	t51 = ((x1889|(x1890<x1891))>>x1892);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x1893 = 238979578700745576LL;
	int16_t x1894 = INT16_MIN;
	uint32_t x1895 = UINT32_MAX;
	uint8_t x1896 = 1U;
	volatile int64_t t52 = 325664516LL;

	t52 = ((x1893|(x1894<x1895))>>x1896);

	if (t52 != 119489789350372788LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x1997 = 50U;
	volatile int8_t x1998 = -29;
	uint8_t x2000 = 0U;
	volatile int32_t t53 = 5203;

	t53 = ((x1997|(x1998<x1999))>>x2000);

	if (t53 != 50) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x2049 = UINT16_MAX;
	uint32_t x2050 = UINT32_MAX;
	uint8_t x2051 = 48U;
	volatile int32_t t54 = -265952430;

	t54 = ((x2049|(x2050<x2051))>>x2052);

	if (t54 != 16383) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2077 = 1441;
	volatile int64_t x2079 = INT64_MIN;
	uint16_t x2080 = 25U;
	volatile int32_t t55 = -814;

	t55 = ((x2077|(x2078<x2079))>>x2080);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2110 = INT32_MAX;
	int16_t x2111 = INT16_MIN;
	uint16_t x2112 = 1U;
	int32_t t56 = -43;

	t56 = ((x2109|(x2110<x2111))>>x2112);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2121 = 0U;
	volatile int32_t x2122 = 29244;
	volatile int64_t x2123 = INT64_MIN;
	int32_t t57 = -3116;

	t57 = ((x2121|(x2122<x2123))>>x2124);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2178 = INT8_MIN;
	uint16_t x2179 = 0U;
	volatile int32_t t58 = -43486;

	t58 = ((x2177|(x2178<x2179))>>x2180);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x2194 = INT32_MAX;
	int32_t t59 = 8109;

	t59 = ((x2193|(x2194<x2195))>>x2196);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2197 = UINT64_MAX;
	int16_t x2198 = INT16_MIN;
	uint64_t x2199 = 34770554754426991LLU;
	uint64_t t60 = 1898LLU;

	t60 = ((x2197|(x2198<x2199))>>x2200);

	if (t60 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2233 = UINT32_MAX;
	static int32_t x2234 = -1;
	uint8_t x2236 = 0U;
	uint32_t t61 = UINT32_MAX;

	t61 = ((x2233|(x2234<x2235))>>x2236);

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2245 = 3;
	volatile int32_t x2246 = INT32_MAX;
	int16_t x2247 = -1;
	int8_t x2248 = 31;
	volatile int32_t t62 = 1;

	t62 = ((x2245|(x2246<x2247))>>x2248);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x2261 = UINT32_MAX;
	uint16_t x2262 = 198U;
	static int8_t x2263 = -10;
	uint16_t x2264 = 10U;
	volatile uint32_t t63 = 97368U;

	t63 = ((x2261|(x2262<x2263))>>x2264);

	if (t63 != 4194303U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x2297 = INT8_MAX;
	int8_t x2298 = -1;
	static uint16_t x2299 = UINT16_MAX;
	volatile int32_t t64 = -386134;

	t64 = ((x2297|(x2298<x2299))>>x2300);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2330 = 87U;
	uint32_t x2331 = UINT32_MAX;
	int32_t t65 = 796935;

	t65 = ((x2329|(x2330<x2331))>>x2332);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x2361 = 1954U;
	int32_t x2362 = INT32_MIN;
	int64_t x2363 = INT64_MIN;
	volatile int8_t x2364 = 29;
	volatile uint32_t t66 = 916232250U;

	t66 = ((x2361|(x2362<x2363))>>x2364);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2367 = -523403888994271LL;
	uint16_t x2368 = 18U;
	volatile int32_t t67 = -102589;

	t67 = ((x2365|(x2366<x2367))>>x2368);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2389 = 21399153LL;
	static int16_t x2390 = INT16_MIN;
	volatile int64_t t68 = -208199919LL;

	t68 = ((x2389|(x2390<x2391))>>x2392);

	if (t68 != 10699576LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2419 = INT8_MAX;
	volatile int8_t x2420 = 1;
	int64_t t69 = 426LL;

	t69 = ((x2417|(x2418<x2419))>>x2420);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2430 = 65414;
	static volatile int32_t x2431 = INT32_MIN;
	static volatile uint16_t x2432 = 4U;
	static int32_t t70 = 10;

	t70 = ((x2429|(x2430<x2431))>>x2432);

	if (t70 != 2047) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x2629 = 14176006545LLU;
	int16_t x2631 = INT16_MIN;
	static volatile int16_t x2632 = 1;
	uint64_t t71 = 924263696403LLU;

	t71 = ((x2629|(x2630<x2631))>>x2632);

	if (t71 != 7088003272LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x2689 = 97;
	uint32_t x2690 = 2U;
	volatile int16_t x2691 = INT16_MIN;
	static int8_t x2692 = 3;

	t72 = ((x2689|(x2690<x2691))>>x2692);

	if (t72 != 12) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2710 = 1;
	static uint32_t x2711 = 1012138876U;
	volatile int32_t t73 = 27074;

	t73 = ((x2709|(x2710<x2711))>>x2712);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2725 = 22038U;
	uint16_t x2726 = UINT16_MAX;
	uint32_t t74 = 128U;

	t74 = ((x2725|(x2726<x2727))>>x2728);

	if (t74 != 5U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2801 = 2;
	int32_t x2802 = -3;
	int32_t x2803 = INT32_MIN;
	volatile uint8_t x2804 = 1U;
	volatile int32_t t75 = -23200598;

	t75 = ((x2801|(x2802<x2803))>>x2804);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x2845 = 207U;
	volatile int8_t x2847 = -1;
	uint64_t x2848 = 0LLU;
	int32_t t76 = 3;

	t76 = ((x2845|(x2846<x2847))>>x2848);

	if (t76 != 207) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2885 = INT32_MAX;
	int32_t x2887 = -200;
	uint8_t x2888 = 6U;
	int32_t t77 = -96103782;

	t77 = ((x2885|(x2886<x2887))>>x2888);

	if (t77 != 33554431) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x2993 = 6U;
	int8_t x2996 = 9;
	int32_t t78 = -7;

	t78 = ((x2993|(x2994<x2995))>>x2996);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2997 = INT16_MAX;
	int64_t x2998 = -1LL;
	static uint8_t x2999 = 23U;
	int32_t t79 = 4016;

	t79 = ((x2997|(x2998<x2999))>>x3000);

	if (t79 != 7) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x3073 = 0U;
	volatile int16_t x3075 = INT16_MAX;
	int32_t x3076 = 29;
	volatile uint32_t t80 = 7U;

	t80 = ((x3073|(x3074<x3075))>>x3076);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3137 = UINT32_MAX;
	static int8_t x3138 = INT8_MIN;
	uint32_t x3139 = UINT32_MAX;
	int32_t x3140 = 5;
	uint32_t t81 = 1034U;

	t81 = ((x3137|(x3138<x3139))>>x3140);

	if (t81 != 134217727U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3173 = 17U;
	volatile int64_t x3174 = -1LL;
	volatile uint16_t x3175 = UINT16_MAX;
	int8_t x3176 = 0;
	volatile uint32_t t82 = 8142321U;

	t82 = ((x3173|(x3174<x3175))>>x3176);

	if (t82 != 17U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x3206 = -1;
	uint32_t x3207 = 79U;
	volatile int16_t x3208 = 1;
	uint64_t t83 = 128720032945213LLU;

	t83 = ((x3205|(x3206<x3207))>>x3208);

	if (t83 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3245 = INT64_MAX;
	int32_t x3246 = INT32_MIN;
	int32_t x3247 = -1;
	volatile int8_t x3248 = 0;
	static int64_t t84 = INT64_MAX;

	t84 = ((x3245|(x3246<x3247))>>x3248);

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3253 = 58;
	volatile uint16_t x3254 = UINT16_MAX;
	volatile int16_t x3255 = INT16_MIN;
	volatile int8_t x3256 = 0;

	t85 = ((x3253|(x3254<x3255))>>x3256);

	if (t85 != 58) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3293 = 213;
	int64_t x3294 = INT64_MIN;
	int64_t x3295 = INT64_MAX;
	static int8_t x3296 = 23;
	volatile int32_t t86 = 285971104;

	t86 = ((x3293|(x3294<x3295))>>x3296);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3309 = 73182LLU;
	uint32_t x3310 = UINT32_MAX;
	volatile int32_t x3311 = 2;
	volatile uint64_t t87 = 567068636219184897LLU;

	t87 = ((x3309|(x3310<x3311))>>x3312);

	if (t87 != 1143LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x3358 = 23342U;
	uint16_t x3360 = 5U;
	static uint32_t t88 = 91118208U;

	t88 = ((x3357|(x3358<x3359))>>x3360);

	if (t88 != 3127904U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x3373 = UINT8_MAX;
	int8_t x3374 = INT8_MAX;
	static uint16_t x3375 = 8139U;
	static volatile int8_t x3376 = 7;

	t89 = ((x3373|(x3374<x3375))>>x3376);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x3465 = UINT16_MAX;
	uint64_t x3466 = 41596LLU;
	static int64_t x3467 = INT64_MAX;
	static int32_t t90 = -19;

	t90 = ((x3465|(x3466<x3467))>>x3468);

	if (t90 != 511) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x3513 = 528912866227604538LL;
	int16_t x3514 = -1;
	int16_t x3515 = INT16_MIN;
	uint8_t x3516 = 57U;
	int64_t t91 = -631747620278650175LL;

	t91 = ((x3513|(x3514<x3515))>>x3516);

	if (t91 != 3LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x3593 = INT32_MAX;
	int16_t x3594 = INT16_MIN;
	uint16_t x3595 = 5492U;
	volatile int8_t x3596 = 4;
	volatile int32_t t92 = 51826;

	t92 = ((x3593|(x3594<x3595))>>x3596);

	if (t92 != 134217727) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3609 = INT64_MAX;
	volatile int64_t x3610 = INT64_MIN;
	int8_t x3611 = INT8_MIN;
	int64_t t93 = -1065306398088556974LL;

	t93 = ((x3609|(x3610<x3611))>>x3612);

	if (t93 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x3641 = 23118U;
	static volatile int32_t x3642 = INT32_MAX;
	int8_t x3644 = 1;
	volatile int32_t t94 = -51;

	t94 = ((x3641|(x3642<x3643))>>x3644);

	if (t94 != 11559) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3781 = INT64_MAX;
	uint8_t x3782 = 31U;
	static uint8_t x3784 = 0U;
	int64_t t95 = INT64_MAX;

	t95 = ((x3781|(x3782<x3783))>>x3784);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x3797 = UINT16_MAX;
	int32_t x3798 = 9428510;
	int32_t x3799 = 5302;
	static int32_t x3800 = 27;

	t96 = ((x3797|(x3798<x3799))>>x3800);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x3818 = 272076609788467LLU;
	int8_t x3819 = -13;
	int64_t t97 = -34231676266LL;

	t97 = ((x3817|(x3818<x3819))>>x3820);

	if (t97 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3849 = 9359LL;
	volatile uint32_t x3850 = UINT32_MAX;
	volatile uint8_t x3851 = 2U;
	uint32_t x3852 = 4U;
	int64_t t98 = 29212846552855LL;

	t98 = ((x3849|(x3850<x3851))>>x3852);

	if (t98 != 584LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3997 = 1;
	int32_t x3998 = 22258409;
	static int32_t x3999 = INT32_MIN;
	uint16_t x4000 = 1U;
	int32_t t99 = 6;

	t99 = ((x3997|(x3998<x3999))>>x4000);

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

