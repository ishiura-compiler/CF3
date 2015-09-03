#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x13 = 172U;
static int16_t x14 = INT16_MIN;
int16_t x95 = 11;
int16_t x140 = -1;
uint8_t x157 = 18U;
static int32_t x158 = INT32_MAX;
static volatile int32_t t8 = -613;
uint64_t x540 = UINT64_MAX;
int16_t x549 = INT16_MIN;
volatile int32_t t12 = 1;
volatile int8_t x599 = 3;
int8_t x665 = 0;
volatile int32_t t15 = 82;
int16_t x722 = -1;
uint8_t x759 = 31U;
uint32_t x760 = 252280666U;
static uint16_t x787 = 12U;
static volatile uint64_t x819 = 49LLU;
static volatile uint64_t t21 = 74550892002LLU;
int16_t x855 = 1;
static volatile uint32_t t23 = 71114969U;
int32_t x895 = 0;
int32_t t24 = 894478;
int8_t x910 = -1;
int8_t x949 = -6;
static int8_t x950 = -1;
volatile int8_t x1283 = 1;
uint64_t x1294 = UINT64_MAX;
uint16_t x1395 = 6U;
int32_t x1570 = -1;
volatile int8_t x1571 = 18;
volatile int64_t x1654 = -244784337716LL;
volatile uint16_t x1655 = 1U;
int16_t x1656 = 1936;
volatile uint32_t x1670 = 0U;
int8_t x1671 = 1;
uint32_t t39 = 13213U;
volatile int32_t x1674 = -1;
volatile uint64_t t41 = 543720530985LLU;
uint32_t x1805 = UINT32_MAX;
int64_t x1829 = INT64_MAX;
int64_t x1832 = -1LL;
static int8_t x1903 = 0;
static int16_t x1904 = -2186;
int16_t x1909 = 791;
uint32_t t45 = 63U;
int32_t x2272 = INT32_MIN;
int64_t x2280 = 7414622LL;
uint64_t x2293 = 498980628529495511LLU;
static uint16_t x2295 = 4U;
int32_t x2409 = INT32_MIN;
int32_t x2411 = 0;
static int16_t x2518 = INT16_MIN;
uint8_t x2523 = 5U;
int64_t x2541 = -101LL;
volatile uint8_t x2555 = 0U;
int32_t t55 = 1962908;
static volatile int64_t x2588 = INT64_MAX;
volatile uint64_t t57 = 6871030851861LLU;
volatile int32_t x2617 = -1628;
int8_t x2618 = -1;
uint8_t x2620 = 1U;
int32_t t58 = 145;
uint8_t x2647 = 2U;
int16_t x2774 = -1;
volatile int32_t t60 = 203429;
int8_t x2998 = INT8_MIN;
int64_t x3000 = INT64_MIN;
int64_t x3041 = 36LL;
uint16_t x3043 = 33U;
uint64_t x3061 = 199280264LLU;
volatile uint64_t t65 = 470737LLU;
uint64_t x3239 = 23LLU;
int64_t x3317 = 1011751047319091228LL;
uint8_t x3318 = 0U;
int16_t x3342 = INT16_MIN;
int8_t x3379 = 0;
int64_t x3380 = 47917LL;
static int64_t x3484 = INT64_MIN;
int64_t x3610 = -8606191648491963LL;
int64_t t73 = -46207383LL;
uint64_t x3735 = 10LLU;
uint64_t t74 = 3LLU;
static uint32_t x3846 = 138284U;
static uint16_t x3847 = 0U;
int32_t t78 = -28;
uint32_t x3967 = 11U;
volatile int64_t x3968 = 736065071737688LL;
static volatile int8_t x3971 = 0;
int32_t x4090 = INT32_MIN;
uint8_t x4191 = 0U;
uint8_t x4210 = 61U;
volatile int16_t x4212 = INT16_MIN;
static int32_t t87 = -33;
int32_t x4281 = INT32_MIN;
volatile uint64_t x4312 = UINT64_MAX;
static int16_t x4338 = INT16_MIN;
int64_t t91 = 12LL;
int64_t x4482 = INT64_MAX;
uint16_t x4484 = UINT16_MAX;
int64_t t92 = -1027794352932839009LL;
int16_t x4502 = INT16_MAX;
uint64_t x4598 = UINT64_MAX;
volatile uint64_t t97 = 500663551535789LLU;


void f0(void) {
	uint8_t x15 = 1U;
	volatile int64_t x16 = -1LL;
	int64_t t0 = 25102890096677076LL;

	t0 = (((x13^x14)>>x15)/x16);

	if (t0 != -2147467350LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x25 = 1;
	volatile uint8_t x26 = 1U;
	uint16_t x27 = 23U;
	volatile int32_t x28 = 2552743;
	int32_t t1 = 157661234;

	t1 = (((x25^x26)>>x27)/x28);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x33 = 3LLU;
	volatile int64_t x34 = INT64_MIN;
	uint8_t x35 = 4U;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t2 = 859LLU;

	t2 = (((x33^x34)>>x35)/x36);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x37 = INT8_MAX;
	int32_t x38 = INT32_MAX;
	volatile int16_t x39 = 30;
	int16_t x40 = 9592;
	volatile int32_t t3 = 153728662;

	t3 = (((x37^x38)>>x39)/x40);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x93 = -22014011LL;
	static volatile int64_t x94 = INT64_MIN;
	volatile int16_t x96 = INT16_MIN;
	volatile int64_t t4 = -108866380047146380LL;

	t4 = (((x93^x94)>>x95)/x96);

	if (t4 != -137438953471LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x137 = UINT8_MAX;
	int8_t x138 = 4;
	uint32_t x139 = 2U;
	static volatile int32_t t5 = 32;

	t5 = (((x137^x138)>>x139)/x140);

	if (t5 != -62) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x159 = 25;
	int16_t x160 = INT16_MIN;
	volatile int32_t t6 = 2;

	t6 = (((x157^x158)>>x159)/x160);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x233 = UINT64_MAX;
	int64_t x234 = INT64_MAX;
	int32_t x235 = 29;
	static int32_t x236 = -1;
	static volatile uint64_t t7 = 204960976LLU;

	t7 = (((x233^x234)>>x235)/x236);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x277 = -1;
	int16_t x278 = INT16_MIN;
	static uint16_t x279 = 1U;
	static volatile int8_t x280 = -1;

	t8 = (((x277^x278)>>x279)/x280);

	if (t8 != -16383) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x473 = INT64_MIN;
	int8_t x474 = -1;
	uint16_t x475 = 24U;
	static uint32_t x476 = 114412032U;
	int64_t t9 = 3LL;

	t9 = (((x473^x474)>>x475)/x476);

	if (t9 != 4805LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x529 = INT64_MIN;
	uint64_t x530 = 494LLU;
	volatile uint16_t x531 = 3U;
	int32_t x532 = INT32_MAX;
	uint64_t t10 = 45766433471LLU;

	t10 = (((x529^x530)>>x531)/x532);

	if (t10 != 536870912LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x537 = INT64_MAX;
	volatile uint8_t x538 = 0U;
	volatile uint8_t x539 = 54U;
	volatile uint64_t t11 = 46LLU;

	t11 = (((x537^x538)>>x539)/x540);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x550 = INT32_MIN;
	uint8_t x551 = 1U;
	int16_t x552 = INT16_MIN;

	t12 = (((x549^x550)>>x551)/x552);

	if (t12 != -32767) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x597 = -490;
	uint64_t x598 = UINT64_MAX;
	volatile uint8_t x600 = UINT8_MAX;
	volatile uint64_t t13 = 190LLU;

	t13 = (((x597^x598)>>x599)/x600);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x653 = UINT16_MAX;
	int64_t x654 = INT64_MAX;
	volatile uint8_t x655 = 53U;
	int32_t x656 = INT32_MIN;
	int64_t t14 = 67280190625315LL;

	t14 = (((x653^x654)>>x655)/x656);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x666 = 63070;
	volatile uint16_t x667 = 3U;
	int32_t x668 = INT32_MAX;

	t15 = (((x665^x666)>>x667)/x668);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x721 = -1;
	uint64_t x723 = 0LLU;
	static int32_t x724 = 2064122;
	static int32_t t16 = 7833102;

	t16 = (((x721^x722)>>x723)/x724);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x757 = UINT64_MAX;
	volatile int32_t x758 = -1;
	uint64_t t17 = 66062044908LLU;

	t17 = (((x757^x758)>>x759)/x760);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x765 = 1423977U;
	int8_t x766 = INT8_MIN;
	uint8_t x767 = 21U;
	uint16_t x768 = 143U;
	uint32_t t18 = 324U;

	t18 = (((x765^x766)>>x767)/x768);

	if (t18 != 14U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x785 = -2312904;
	uint64_t x786 = 43684998297983578LLU;
	static int64_t x788 = -50519626863857808LL;
	volatile uint64_t t19 = 483830654423710169LLU;

	t19 = (((x785^x786)>>x787)/x788);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x817 = INT32_MIN;
	static volatile int64_t x818 = -1LL;
	static uint64_t x820 = UINT64_MAX;
	volatile uint64_t t20 = 25674700800215727LLU;

	t20 = (((x817^x818)>>x819)/x820);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x841 = 165344909923802572LLU;
	int32_t x842 = INT32_MAX;
	uint8_t x843 = 18U;
	int16_t x844 = -1420;

	t21 = (((x841^x842)>>x843)/x844);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x853 = -1;
	int8_t x854 = INT8_MIN;
	int32_t x856 = -1;
	int32_t t22 = -8211694;

	t22 = (((x853^x854)>>x855)/x856);

	if (t22 != -63) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x889 = 622673544U;
	int8_t x890 = 19;
	volatile uint32_t x891 = 2U;
	int8_t x892 = INT8_MIN;

	t23 = (((x889^x890)>>x891)/x892);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x893 = 1;
	uint8_t x894 = 0U;
	int32_t x896 = INT32_MAX;

	t24 = (((x893^x894)>>x895)/x896);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x909 = 258043LLU;
	volatile uint16_t x911 = 56U;
	uint16_t x912 = 1710U;
	uint64_t t25 = 2949LLU;

	t25 = (((x909^x910)>>x911)/x912);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x937 = 1944U;
	static int16_t x938 = 13951;
	static volatile uint8_t x939 = 0U;
	int8_t x940 = 6;
	uint32_t t26 = 22308261U;

	t26 = (((x937^x938)>>x939)/x940);

	if (t26 != 2129U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x951 = 13;
	static volatile int16_t x952 = -31;
	volatile int32_t t27 = -934;

	t27 = (((x949^x950)>>x951)/x952);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1109 = 51929153LLU;
	int32_t x1110 = INT32_MIN;
	static uint8_t x1111 = 12U;
	volatile int32_t x1112 = INT32_MIN;
	volatile uint64_t t28 = 2167875770029277448LLU;

	t28 = (((x1109^x1110)>>x1111)/x1112);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1281 = -675574LL;
	volatile uint64_t x1282 = 2541LLU;
	static int64_t x1284 = INT64_MAX;
	volatile uint64_t t29 = 15349292LLU;

	t29 = (((x1281^x1282)>>x1283)/x1284);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1293 = INT16_MIN;
	uint64_t x1295 = 30LLU;
	int16_t x1296 = INT16_MIN;
	uint64_t t30 = 1796940038183LLU;

	t30 = (((x1293^x1294)>>x1295)/x1296);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1309 = -844057950118535LL;
	static uint64_t x1310 = 43978LLU;
	volatile int16_t x1311 = 2;
	int64_t x1312 = INT64_MIN;
	uint64_t t31 = 5277244881LLU;

	t31 = (((x1309^x1310)>>x1311)/x1312);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1393 = 3760452792588827047LLU;
	uint8_t x1394 = 18U;
	int32_t x1396 = -1;
	volatile uint64_t t32 = 30935315806247617LLU;

	t32 = (((x1393^x1394)>>x1395)/x1396);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x1461 = -1;
	volatile uint64_t x1462 = 3538731LLU;
	uint8_t x1463 = 3U;
	int32_t x1464 = 100582664;
	volatile uint64_t t33 = 68515133540LLU;

	t33 = (((x1461^x1462)>>x1463)/x1464);

	if (t33 != 22924855213LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1489 = 45;
	volatile uint8_t x1490 = 0U;
	int16_t x1491 = 12;
	uint8_t x1492 = UINT8_MAX;
	int32_t t34 = -189847269;

	t34 = (((x1489^x1490)>>x1491)/x1492);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1569 = UINT64_MAX;
	int32_t x1572 = -489;
	volatile uint64_t t35 = 400823161LLU;

	t35 = (((x1569^x1570)>>x1571)/x1572);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1577 = -24;
	volatile int32_t x1578 = -32791353;
	uint32_t x1579 = 1U;
	uint8_t x1580 = UINT8_MAX;
	volatile int32_t t36 = -1;

	t36 = (((x1577^x1578)>>x1579)/x1580);

	if (t36 != 64296) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1633 = -17;
	volatile int8_t x1634 = INT8_MIN;
	int16_t x1635 = 11;
	static int8_t x1636 = -4;
	int32_t t37 = 1348756;

	t37 = (((x1633^x1634)>>x1635)/x1636);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1653 = INT32_MIN;
	static volatile int64_t t38 = 2693775LL;

	t38 = (((x1653^x1654)>>x1655)/x1656);

	if (t38 != 62679351LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x1669 = -20;
	int16_t x1672 = INT16_MIN;

	t39 = (((x1669^x1670)>>x1671)/x1672);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1673 = -116167765;
	static uint16_t x1675 = 20U;
	uint64_t x1676 = UINT64_MAX;
	static volatile uint64_t t40 = 1599488051429786LLU;

	t40 = (((x1673^x1674)>>x1675)/x1676);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1741 = 160LLU;
	static int16_t x1742 = -844;
	uint32_t x1743 = 1U;
	uint8_t x1744 = 3U;

	t41 = (((x1741^x1742)>>x1743)/x1744);

	if (t41 != 3074457345618258435LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1806 = 3968U;
	uint8_t x1807 = 2U;
	volatile int32_t x1808 = INT32_MIN;
	uint32_t t42 = 12206121U;

	t42 = (((x1805^x1806)>>x1807)/x1808);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1830 = 43U;
	static uint8_t x1831 = 34U;
	static int64_t t43 = -2938727LL;

	t43 = (((x1829^x1830)>>x1831)/x1832);

	if (t43 != -536870911LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1901 = 2023627630386LLU;
	static int32_t x1902 = INT32_MIN;
	volatile uint64_t t44 = 1284634LLU;

	t44 = (((x1901^x1902)>>x1903)/x1904);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1910 = 0U;
	volatile int8_t x1911 = 6;
	int32_t x1912 = 1;

	t45 = (((x1909^x1910)>>x1911)/x1912);

	if (t45 != 12U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2181 = INT32_MAX;
	uint16_t x2182 = UINT16_MAX;
	uint16_t x2183 = 3U;
	int64_t x2184 = INT64_MIN;
	volatile int64_t t46 = 135226606LL;

	t46 = (((x2181^x2182)>>x2183)/x2184);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2269 = UINT64_MAX;
	volatile uint8_t x2270 = 37U;
	volatile int8_t x2271 = 55;
	uint64_t t47 = 2425171LLU;

	t47 = (((x2269^x2270)>>x2271)/x2272);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x2277 = UINT32_MAX;
	int32_t x2278 = -1;
	uint8_t x2279 = 30U;
	static volatile int64_t t48 = -7222529216LL;

	t48 = (((x2277^x2278)>>x2279)/x2280);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2294 = INT8_MAX;
	int64_t x2296 = -1LL;
	volatile uint64_t t49 = 1LLU;

	t49 = (((x2293^x2294)>>x2295)/x2296);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2305 = 283U;
	static volatile int64_t x2306 = 0LL;
	uint16_t x2307 = 1U;
	int8_t x2308 = INT8_MIN;
	int64_t t50 = 24296786727610345LL;

	t50 = (((x2305^x2306)>>x2307)/x2308);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2410 = -1;
	int16_t x2412 = INT16_MIN;
	static int32_t t51 = -762;

	t51 = (((x2409^x2410)>>x2411)/x2412);

	if (t51 != -65535) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2517 = 25623050881687LLU;
	int16_t x2519 = 10;
	uint16_t x2520 = 247U;
	uint64_t t52 = 67658322LLU;

	t52 = (((x2517^x2518)>>x2519)/x2520);

	if (t52 != 72932686182070LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2521 = UINT16_MAX;
	int32_t x2522 = 790919958;
	static int64_t x2524 = 1LL;
	int64_t t53 = 788445897378669LL;

	t53 = (((x2521^x2522)>>x2523)/x2524);

	if (t53 != 24716327LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2542 = INT64_MIN;
	volatile uint8_t x2543 = 3U;
	int32_t x2544 = INT32_MAX;
	static volatile int64_t t54 = -2782344273588LL;

	t54 = (((x2541^x2542)>>x2543)/x2544);

	if (t54 != 536870912LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2553 = 14749U;
	static uint16_t x2554 = 4866U;
	volatile int32_t x2556 = 2;

	t55 = (((x2553^x2554)>>x2555)/x2556);

	if (t55 != 5455) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x2585 = -1LL;
	int32_t x2586 = -781;
	int32_t x2587 = 16;
	volatile int64_t t56 = -561LL;

	t56 = (((x2585^x2586)>>x2587)/x2588);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2605 = INT16_MIN;
	volatile uint64_t x2606 = 185326994399940LLU;
	int8_t x2607 = 1;
	static uint64_t x2608 = 24761481LLU;

	t57 = (((x2605^x2606)>>x2607)/x2608);

	if (t57 != 372484964585LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x2619 = 0;

	t58 = (((x2617^x2618)>>x2619)/x2620);

	if (t58 != 1627) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x2645 = INT32_MIN;
	int16_t x2646 = -1;
	int8_t x2648 = -6;
	int32_t t59 = -35859581;

	t59 = (((x2645^x2646)>>x2647)/x2648);

	if (t59 != -89478485) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2773 = -1;
	uint16_t x2775 = 0U;
	volatile int32_t x2776 = -1;

	t60 = (((x2773^x2774)>>x2775)/x2776);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2905 = 2017540305821LLU;
	int8_t x2906 = -1;
	uint16_t x2907 = 9U;
	uint32_t x2908 = UINT32_MAX;
	uint64_t t61 = 230899086783409LLU;

	t61 = (((x2905^x2906)>>x2907)/x2908);

	if (t61 != 8388607LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2997 = -451200252586033069LL;
	uint32_t x2999 = 47U;
	volatile int64_t t62 = 16662786426772648LL;

	t62 = (((x2997^x2998)>>x2999)/x3000);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3005 = 19612U;
	uint8_t x3006 = UINT8_MAX;
	int8_t x3007 = 1;
	volatile int16_t x3008 = INT16_MAX;
	static volatile uint32_t t63 = 4807720U;

	t63 = (((x3005^x3006)>>x3007)/x3008);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x3042 = 1953276U;
	int16_t x3044 = INT16_MIN;
	static volatile int64_t t64 = -707288461230LL;

	t64 = (((x3041^x3042)>>x3043)/x3044);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3062 = -1LL;
	static uint64_t x3063 = 1LLU;
	volatile int64_t x3064 = 143382717LL;

	t65 = (((x3061^x3062)>>x3063)/x3064);

	if (t65 != 64326944207LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x3237 = 2075984LLU;
	int8_t x3238 = INT8_MIN;
	uint32_t x3240 = 12869559U;
	uint64_t t66 = 7542450776006LLU;

	t66 = (((x3237^x3238)>>x3239)/x3240);

	if (t66 != 170870LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3253 = -1;
	int8_t x3254 = -1;
	uint32_t x3255 = 0U;
	volatile uint64_t x3256 = UINT64_MAX;
	uint64_t t67 = 4732751727773706975LLU;

	t67 = (((x3253^x3254)>>x3255)/x3256);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x3319 = 0;
	int16_t x3320 = -1;
	static volatile int64_t t68 = 364497LL;

	t68 = (((x3317^x3318)>>x3319)/x3320);

	if (t68 != -1011751047319091228LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3341 = 0U;
	uint32_t x3343 = 2U;
	static int8_t x3344 = -1;
	static volatile uint32_t t69 = 35110848U;

	t69 = (((x3341^x3342)>>x3343)/x3344);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3377 = UINT16_MAX;
	uint32_t x3378 = 16217U;
	int64_t t70 = 853LL;

	t70 = (((x3377^x3378)>>x3379)/x3380);

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3481 = -53;
	int32_t x3482 = INT32_MIN;
	uint32_t x3483 = 7U;
	int64_t t71 = -6812LL;

	t71 = (((x3481^x3482)>>x3483)/x3484);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3593 = -91244101958LL;
	volatile int64_t x3594 = INT64_MIN;
	int16_t x3595 = 14;
	uint64_t x3596 = 30632266183LLU;
	volatile uint64_t t72 = 3516949672LLU;

	t72 = (((x3593^x3594)>>x3595)/x3596);

	if (t72 != 18377LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3609 = INT8_MIN;
	int16_t x3611 = 2;
	int64_t x3612 = -1LL;

	t73 = (((x3609^x3610)>>x3611)/x3612);

	if (t73 != -2151547912122993LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3733 = INT32_MAX;
	uint64_t x3734 = 1621622LLU;
	uint16_t x3736 = 818U;

	t74 = (((x3733^x3734)>>x3735)/x3736);

	if (t74 != 2561LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3781 = -1;
	int64_t x3782 = -41036900363193LL;
	volatile uint8_t x3783 = 3U;
	uint16_t x3784 = UINT16_MAX;
	volatile int64_t t75 = -1543727158352829LL;

	t75 = (((x3781^x3782)>>x3783)/x3784);

	if (t75 != 78272870LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x3837 = INT64_MIN;
	int16_t x3838 = -5234;
	uint8_t x3839 = 29U;
	uint16_t x3840 = 226U;
	volatile int64_t t76 = -2093309LL;

	t76 = (((x3837^x3838)>>x3839)/x3840);

	if (t76 != 76017120LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3845 = 6LLU;
	uint64_t x3848 = 76710973348383LLU;
	uint64_t t77 = 4453316277977520575LLU;

	t77 = (((x3845^x3846)>>x3847)/x3848);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x3905 = INT8_MAX;
	int32_t x3906 = INT32_MAX;
	uint32_t x3907 = 4U;
	static int32_t x3908 = -1;

	t78 = (((x3905^x3906)>>x3907)/x3908);

	if (t78 != -134217720) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3937 = -1;
	int8_t x3938 = INT8_MIN;
	uint8_t x3939 = 0U;
	int16_t x3940 = INT16_MIN;
	volatile int32_t t79 = -14951;

	t79 = (((x3937^x3938)>>x3939)/x3940);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x3965 = INT16_MIN;
	int32_t x3966 = -1;
	volatile int64_t t80 = -867849764LL;

	t80 = (((x3965^x3966)>>x3967)/x3968);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x3969 = -7974LL;
	volatile int16_t x3970 = INT16_MIN;
	static volatile int8_t x3972 = -1;
	int64_t t81 = 120325285LL;

	t81 = (((x3969^x3970)>>x3971)/x3972);

	if (t81 != -24794LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x4061 = UINT8_MAX;
	static volatile uint64_t x4062 = 29883121LLU;
	static uint8_t x4063 = 11U;
	static int32_t x4064 = INT32_MIN;
	uint64_t t82 = 396849074LLU;

	t82 = (((x4061^x4062)>>x4063)/x4064);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4073 = INT32_MIN;
	uint32_t x4074 = UINT32_MAX;
	static uint32_t x4075 = 7U;
	static int32_t x4076 = INT32_MAX;
	volatile uint32_t t83 = 818774377U;

	t83 = (((x4073^x4074)>>x4075)/x4076);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4089 = 13U;
	static volatile uint32_t x4091 = 2U;
	uint64_t x4092 = UINT64_MAX;
	uint64_t t84 = 16538533186845LLU;

	t84 = (((x4089^x4090)>>x4091)/x4092);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4165 = 1;
	int32_t x4166 = 903939;
	int8_t x4167 = 0;
	static uint32_t x4168 = 464670U;
	volatile uint32_t t85 = 22U;

	t85 = (((x4165^x4166)>>x4167)/x4168);

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4189 = INT8_MAX;
	uint32_t x4190 = 17U;
	uint8_t x4192 = UINT8_MAX;
	uint32_t t86 = 339931270U;

	t86 = (((x4189^x4190)>>x4191)/x4192);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4209 = INT32_MAX;
	int8_t x4211 = 3;

	t87 = (((x4209^x4210)>>x4211)/x4212);

	if (t87 != -8191) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4282 = -1394;
	uint8_t x4283 = 28U;
	static int16_t x4284 = -99;
	volatile int32_t t88 = 1;

	t88 = (((x4281^x4282)>>x4283)/x4284);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4305 = UINT64_MAX;
	uint16_t x4306 = UINT16_MAX;
	uint32_t x4307 = 3U;
	int8_t x4308 = INT8_MIN;
	static uint64_t t89 = 4244LLU;

	t89 = (((x4305^x4306)>>x4307)/x4308);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4309 = -1LL;
	int64_t x4310 = -1LL;
	static int8_t x4311 = 20;
	static uint64_t t90 = 5889216573851LLU;

	t90 = (((x4309^x4310)>>x4311)/x4312);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4337 = INT16_MIN;
	uint64_t x4339 = 4LLU;
	int64_t x4340 = 1LL;

	t91 = (((x4337^x4338)>>x4339)/x4340);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x4481 = 7U;
	uint32_t x4483 = 15U;

	t92 = (((x4481^x4482)>>x4483)/x4484);

	if (t92 != 4295032833LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x4501 = INT32_MAX;
	uint8_t x4503 = 1U;
	static volatile uint8_t x4504 = UINT8_MAX;
	int32_t t93 = 82;

	t93 = (((x4501^x4502)>>x4503)/x4504);

	if (t93 != 4210688) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x4517 = INT8_MAX;
	uint64_t x4518 = 136503833LLU;
	uint8_t x4519 = 17U;
	static int64_t x4520 = -133LL;
	static uint64_t t94 = 1511078513LLU;

	t94 = (((x4517^x4518)>>x4519)/x4520);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4525 = INT64_MAX;
	uint16_t x4526 = UINT16_MAX;
	uint16_t x4527 = 22U;
	static int64_t x4528 = INT64_MIN;
	int64_t t95 = -3329027299834LL;

	t95 = (((x4525^x4526)>>x4527)/x4528);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4537 = UINT64_MAX;
	volatile int8_t x4538 = INT8_MIN;
	int8_t x4539 = 1;
	int64_t x4540 = 1507507558LL;
	static volatile uint64_t t96 = 14378783633326LLU;

	t96 = (((x4537^x4538)>>x4539)/x4540);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x4597 = -22675993950LL;
	uint16_t x4599 = 1U;
	uint64_t x4600 = UINT64_MAX;

	t97 = (((x4597^x4598)>>x4599)/x4600);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x4713 = INT16_MAX;
	static uint32_t x4714 = UINT32_MAX;
	int8_t x4715 = 6;
	int16_t x4716 = INT16_MAX;
	volatile uint32_t t98 = 8U;

	t98 = (((x4713^x4714)>>x4715)/x4716);

	if (t98 != 2048U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4781 = UINT32_MAX;
	int64_t x4782 = INT64_MAX;
	static volatile int64_t x4783 = 0LL;
	volatile int64_t x4784 = INT64_MIN;
	int64_t t99 = -2696LL;

	t99 = (((x4781^x4782)>>x4783)/x4784);

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

