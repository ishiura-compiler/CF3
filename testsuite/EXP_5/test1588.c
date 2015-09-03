#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x82 = -2898373183497606474LL;
int16_t x83 = -26;
static uint8_t x103 = UINT8_MAX;
uint64_t x104 = 4LLU;
static int32_t x154 = INT32_MIN;
volatile int32_t t5 = 5313;
static int8_t x197 = 5;
uint8_t x224 = 27U;
uint32_t x247 = 8345900U;
static volatile int32_t t9 = -7625060;
int64_t x369 = -129772862529LL;
int16_t x370 = -1489;
static int64_t t10 = 15885176529LL;
static volatile uint8_t x396 = 2U;
static int16_t x414 = INT16_MIN;
int64_t x415 = INT64_MIN;
int32_t x418 = -1;
int8_t x419 = -1;
volatile int8_t x433 = -1;
volatile int16_t x435 = INT16_MAX;
static volatile int16_t x518 = INT16_MAX;
static volatile uint8_t x520 = 3U;
static int32_t t17 = 0;
int16_t x558 = INT16_MIN;
volatile int32_t t22 = 467;
int32_t x761 = -253236866;
uint8_t x762 = 31U;
uint64_t x764 = 29LLU;
int8_t x796 = 1;
volatile uint16_t x797 = UINT16_MAX;
volatile int32_t t26 = 0;
volatile uint64_t t27 = UINT64_MAX;
uint8_t x848 = 3U;
uint8_t x896 = 20U;
uint32_t t31 = UINT32_MAX;
int16_t x1174 = -1;
volatile uint8_t x1176 = 0U;
int32_t t34 = -25;
int64_t x1178 = INT64_MAX;
int32_t t35 = -23662382;
static uint32_t x1267 = UINT32_MAX;
int16_t x1398 = -447;
static volatile uint8_t x1445 = 2U;
int32_t x1447 = INT32_MIN;
static volatile uint8_t x1448 = 18U;
int8_t x1555 = INT8_MAX;
int64_t x1649 = 5752624365786587LL;
int64_t x1650 = INT64_MAX;
static uint16_t x1681 = UINT16_MAX;
uint64_t x1682 = 223763771733019681LLU;
uint8_t x1708 = 0U;
uint8_t x1807 = 113U;
int32_t t50 = INT32_MIN;
static volatile uint8_t x1813 = 92U;
volatile int32_t t51 = -393403913;
int64_t x1818 = INT64_MIN;
uint32_t x1968 = 3U;
int32_t x1996 = 20;
volatile int32_t x2018 = INT32_MIN;
volatile int64_t x2041 = -1LL;
int64_t x2042 = INT64_MAX;
int32_t t60 = 54;
uint64_t x2185 = 43318838625LLU;
uint8_t x2191 = 121U;
uint16_t x2266 = UINT16_MAX;
int32_t x2267 = INT32_MAX;
int8_t x2381 = 5;
uint64_t x2410 = 7929060376692648806LLU;
uint8_t x2423 = 27U;
volatile uint32_t t73 = 39U;
int32_t t74 = 533850859;
static int32_t x2453 = 7617952;
volatile uint8_t x2557 = UINT8_MAX;
volatile int32_t t77 = -57;
uint8_t x2579 = UINT8_MAX;
int8_t x2594 = INT8_MIN;
uint32_t x2621 = 3U;
uint8_t x2661 = UINT8_MAX;
uint32_t x2681 = 513575U;
int16_t x2725 = 0;
static uint8_t x2728 = 0U;
uint16_t x2750 = 10413U;
int32_t x2751 = INT32_MIN;
uint32_t t84 = 66276758U;
int32_t x2774 = -375;
int32_t t85 = 535;
uint8_t x2804 = 2U;
static volatile int32_t t86 = 121;
static int32_t x3062 = INT32_MAX;
static int16_t x3063 = -1;
static int16_t x3181 = 0;
uint16_t x3184 = 0U;
volatile int32_t t91 = -175249;
volatile int32_t t92 = -3928513;
int16_t x3229 = INT16_MIN;
int32_t x3266 = INT32_MIN;
volatile uint16_t x3267 = 191U;
uint16_t x3330 = 473U;
uint8_t x3332 = 3U;
int64_t x3351 = INT64_MIN;
static int32_t t99 = 434;


void f0(void) {
	static uint64_t x21 = 500LLU;
	static int8_t x22 = 1;
	int8_t x23 = 30;
	int8_t x24 = 0;
	volatile uint64_t t0 = 87395505972024744LLU;

	t0 = (x21-((x22<=x23)<<x24));

	if (t0 != 499LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x25 = INT32_MIN;
	volatile uint8_t x26 = UINT8_MAX;
	int64_t x27 = -1LL;
	static uint8_t x28 = 1U;
	volatile int32_t t1 = INT32_MIN;

	t1 = (x25-((x26<=x27)<<x28));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x65 = INT64_MIN;
	static uint16_t x66 = UINT16_MAX;
	static int64_t x67 = -1LL;
	volatile uint8_t x68 = 1U;
	int64_t t2 = INT64_MIN;

	t2 = (x65-((x66<=x67)<<x68));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x81 = 88U;
	int16_t x84 = 0;
	int32_t t3 = -834758;

	t3 = (x81-((x82<=x83)<<x84));

	if (t3 != 87) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x101 = -850637530004602932LL;
	uint32_t x102 = 419419U;
	volatile int64_t t4 = 974210342709495LL;

	t4 = (x101-((x102<=x103)<<x104));

	if (t4 != -850637530004602932LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x153 = -74;
	static int32_t x155 = INT32_MIN;
	uint8_t x156 = 13U;

	t5 = (x153-((x154<=x155)<<x156));

	if (t5 != -8266) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x198 = 45;
	uint64_t x199 = UINT64_MAX;
	uint64_t x200 = 3LLU;
	int32_t t6 = -217916583;

	t6 = (x197-((x198<=x199)<<x200));

	if (t6 != -3) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x221 = INT64_MAX;
	int16_t x222 = 3654;
	int8_t x223 = 1;
	int64_t t7 = INT64_MAX;

	t7 = (x221-((x222<=x223)<<x224));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x241 = -1;
	int64_t x242 = -3786385188247268787LL;
	volatile uint32_t x243 = 18201U;
	uint16_t x244 = 13U;
	volatile int32_t t8 = 7;

	t8 = (x241-((x242<=x243)<<x244));

	if (t8 != -8193) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x245 = INT16_MIN;
	static int16_t x246 = INT16_MIN;
	uint8_t x248 = 0U;

	t9 = (x245-((x246<=x247)<<x248));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x371 = INT8_MIN;
	int8_t x372 = 1;

	t10 = (x369-((x370<=x371)<<x372));

	if (t10 != -129772862531LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x377 = -1;
	int16_t x378 = INT16_MAX;
	uint64_t x379 = UINT64_MAX;
	int8_t x380 = 11;
	volatile int32_t t11 = 28469915;

	t11 = (x377-((x378<=x379)<<x380));

	if (t11 != -2049) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x393 = 91444U;
	uint32_t x394 = UINT32_MAX;
	int32_t x395 = INT32_MAX;
	uint32_t t12 = 0U;

	t12 = (x393-((x394<=x395)<<x396));

	if (t12 != 91444U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x413 = 70U;
	uint16_t x416 = 0U;
	static volatile int32_t t13 = 917839533;

	t13 = (x413-((x414<=x415)<<x416));

	if (t13 != 70) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x417 = 56;
	uint8_t x420 = 3U;
	static volatile int32_t t14 = 1;

	t14 = (x417-((x418<=x419)<<x420));

	if (t14 != 48) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x421 = -1;
	volatile int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MAX;
	uint8_t x424 = 5U;
	int32_t t15 = 186;

	t15 = (x421-((x422<=x423)<<x424));

	if (t15 != -33) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x434 = UINT64_MAX;
	volatile int8_t x436 = 14;
	volatile int32_t t16 = 1959;

	t16 = (x433-((x434<=x435)<<x436));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x517 = 5;
	uint16_t x519 = UINT16_MAX;

	t17 = (x517-((x518<=x519)<<x520));

	if (t17 != -3) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x521 = -17765608677988LL;
	int8_t x522 = INT8_MAX;
	int32_t x523 = INT32_MIN;
	uint64_t x524 = 1LLU;
	int64_t t18 = 54LL;

	t18 = (x521-((x522<=x523)<<x524));

	if (t18 != -17765608677988LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x545 = 3;
	int16_t x546 = 0;
	volatile uint8_t x547 = 28U;
	volatile int16_t x548 = 0;
	static int32_t t19 = 476;

	t19 = (x545-((x546<=x547)<<x548));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x553 = INT64_MIN;
	int32_t x554 = INT32_MAX;
	int16_t x555 = INT16_MAX;
	static volatile uint32_t x556 = 10U;
	volatile int64_t t20 = INT64_MIN;

	t20 = (x553-((x554<=x555)<<x556));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x557 = INT64_MAX;
	static int8_t x559 = INT8_MIN;
	uint8_t x560 = 15U;
	int64_t t21 = 2403507523668083539LL;

	t21 = (x557-((x558<=x559)<<x560));

	if (t21 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x661 = INT8_MIN;
	volatile int8_t x662 = INT8_MIN;
	uint8_t x663 = 63U;
	static uint16_t x664 = 19U;

	t22 = (x661-((x662<=x663)<<x664));

	if (t22 != -524416) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x741 = -92561791536LL;
	volatile int64_t x742 = -1LL;
	int8_t x743 = INT8_MAX;
	static uint64_t x744 = 0LLU;
	volatile int64_t t23 = -13688807263975507LL;

	t23 = (x741-((x742<=x743)<<x744));

	if (t23 != -92561791537LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x763 = 707U;
	static int32_t t24 = 25;

	t24 = (x761-((x762<=x763)<<x764));

	if (t24 != -790107778) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x793 = 341;
	int32_t x794 = -1;
	static int32_t x795 = INT32_MAX;
	volatile int32_t t25 = -245042;

	t25 = (x793-((x794<=x795)<<x796));

	if (t25 != 339) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x798 = -1;
	volatile int16_t x799 = -3;
	static uint8_t x800 = 1U;

	t26 = (x797-((x798<=x799)<<x800));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x813 = UINT64_MAX;
	static int16_t x814 = INT16_MIN;
	static int32_t x815 = INT32_MIN;
	uint8_t x816 = 29U;

	t27 = (x813-((x814<=x815)<<x816));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x845 = 424173697228477506LL;
	uint32_t x846 = 869821U;
	volatile int16_t x847 = -1;
	static volatile int64_t t28 = -10579328LL;

	t28 = (x845-((x846<=x847)<<x848));

	if (t28 != 424173697228477498LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x889 = UINT64_MAX;
	int32_t x890 = INT32_MIN;
	volatile int8_t x891 = -1;
	volatile uint64_t x892 = 13LLU;
	uint64_t t29 = 1169666172862904392LLU;

	t29 = (x889-((x890<=x891)<<x892));

	if (t29 != 18446744073709543423LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x893 = INT8_MIN;
	volatile int32_t x894 = 126875;
	int32_t x895 = INT32_MIN;
	int32_t t30 = -491309107;

	t30 = (x893-((x894<=x895)<<x896));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x941 = UINT32_MAX;
	int32_t x942 = 0;
	volatile int32_t x943 = -1;
	int32_t x944 = 3;

	t31 = (x941-((x942<=x943)<<x944));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1001 = -1;
	uint8_t x1002 = UINT8_MAX;
	volatile int8_t x1003 = -34;
	static uint8_t x1004 = 11U;
	volatile int32_t t32 = -53857;

	t32 = (x1001-((x1002<=x1003)<<x1004));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1053 = -7353;
	int8_t x1054 = INT8_MIN;
	volatile int8_t x1055 = INT8_MIN;
	volatile int16_t x1056 = 28;
	static volatile int32_t t33 = 797223;

	t33 = (x1053-((x1054<=x1055)<<x1056));

	if (t33 != -268442809) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1173 = 1;
	uint32_t x1175 = 15062440U;

	t34 = (x1173-((x1174<=x1175)<<x1176));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x1177 = INT8_MAX;
	int32_t x1179 = -35487872;
	uint8_t x1180 = 1U;

	t35 = (x1177-((x1178<=x1179)<<x1180));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1265 = 1U;
	int64_t x1266 = -95180373116412763LL;
	static uint8_t x1268 = 6U;
	static uint32_t t36 = 89U;

	t36 = (x1265-((x1266<=x1267)<<x1268));

	if (t36 != 4294967233U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1269 = -9;
	int32_t x1270 = INT32_MAX;
	volatile int16_t x1271 = INT16_MAX;
	int16_t x1272 = 12;
	static volatile int32_t t37 = -354;

	t37 = (x1269-((x1270<=x1271)<<x1272));

	if (t37 != -9) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x1365 = UINT32_MAX;
	int32_t x1366 = -1;
	static uint64_t x1367 = 3LLU;
	uint16_t x1368 = 1U;
	static uint32_t t38 = UINT32_MAX;

	t38 = (x1365-((x1366<=x1367)<<x1368));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1397 = INT8_MAX;
	int8_t x1399 = -1;
	volatile uint8_t x1400 = 24U;
	int32_t t39 = -1568;

	t39 = (x1397-((x1398<=x1399)<<x1400));

	if (t39 != -16777089) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x1405 = 22838859U;
	volatile int16_t x1406 = 1947;
	int16_t x1407 = -15;
	uint8_t x1408 = 1U;
	uint32_t t40 = 246844U;

	t40 = (x1405-((x1406<=x1407)<<x1408));

	if (t40 != 22838859U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1446 = UINT64_MAX;
	int32_t t41 = 2355;

	t41 = (x1445-((x1446<=x1447)<<x1448));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x1513 = -4074931015724LL;
	uint8_t x1514 = 29U;
	static uint32_t x1515 = 52371U;
	uint16_t x1516 = 22U;
	int64_t t42 = -7115276250840136LL;

	t42 = (x1513-((x1514<=x1515)<<x1516));

	if (t42 != -4074935210028LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1553 = UINT8_MAX;
	static uint32_t x1554 = UINT32_MAX;
	int16_t x1556 = 0;
	volatile int32_t t43 = 6779686;

	t43 = (x1553-((x1554<=x1555)<<x1556));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1637 = -7306556245656677LL;
	static uint16_t x1638 = UINT16_MAX;
	static int32_t x1639 = -1;
	int8_t x1640 = 0;
	int64_t t44 = -151125044LL;

	t44 = (x1637-((x1638<=x1639)<<x1640));

	if (t44 != -7306556245656677LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x1651 = -1;
	uint8_t x1652 = 7U;
	static int64_t t45 = -8LL;

	t45 = (x1649-((x1650<=x1651)<<x1652));

	if (t45 != 5752624365786587LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1683 = UINT16_MAX;
	static uint8_t x1684 = 1U;
	int32_t t46 = -559825260;

	t46 = (x1681-((x1682<=x1683)<<x1684));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1705 = -18;
	static volatile int16_t x1706 = INT16_MIN;
	uint32_t x1707 = 7261708U;
	int32_t t47 = 7798425;

	t47 = (x1705-((x1706<=x1707)<<x1708));

	if (t47 != -18) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x1729 = -1;
	volatile int64_t x1730 = -111452LL;
	int16_t x1731 = INT16_MIN;
	static int16_t x1732 = 1;
	volatile int32_t t48 = 75580;

	t48 = (x1729-((x1730<=x1731)<<x1732));

	if (t48 != -3) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1805 = UINT64_MAX;
	int16_t x1806 = 3;
	uint8_t x1808 = 15U;
	uint64_t t49 = 31313104241141431LLU;

	t49 = (x1805-((x1806<=x1807)<<x1808));

	if (t49 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x1809 = INT32_MIN;
	uint32_t x1810 = 445570U;
	int8_t x1811 = 1;
	int8_t x1812 = 1;

	t50 = (x1809-((x1810<=x1811)<<x1812));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1814 = 511;
	uint32_t x1815 = 1U;
	int16_t x1816 = 7;

	t51 = (x1813-((x1814<=x1815)<<x1816));

	if (t51 != 92) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1817 = -3;
	volatile uint64_t x1819 = 1146LLU;
	uint8_t x1820 = 9U;
	volatile int32_t t52 = -390;

	t52 = (x1817-((x1818<=x1819)<<x1820));

	if (t52 != -3) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1965 = 7U;
	int32_t x1966 = INT32_MAX;
	static int32_t x1967 = 24591034;
	volatile int32_t t53 = -3414575;

	t53 = (x1965-((x1966<=x1967)<<x1968));

	if (t53 != 7) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1993 = INT8_MIN;
	int8_t x1994 = INT8_MIN;
	int16_t x1995 = INT16_MIN;
	int32_t t54 = -790722064;

	t54 = (x1993-((x1994<=x1995)<<x1996));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x1997 = INT32_MAX;
	static uint64_t x1998 = 853856LLU;
	int64_t x1999 = INT64_MIN;
	uint16_t x2000 = 2U;
	volatile int32_t t55 = 3629;

	t55 = (x1997-((x1998<=x1999)<<x2000));

	if (t55 != 2147483643) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2017 = -28374667LL;
	volatile uint16_t x2019 = 4U;
	int16_t x2020 = 2;
	volatile int64_t t56 = 0LL;

	t56 = (x2017-((x2018<=x2019)<<x2020));

	if (t56 != -28374671LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x2043 = 2;
	int8_t x2044 = 0;
	int64_t t57 = 455930747283437LL;

	t57 = (x2041-((x2042<=x2043)<<x2044));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2053 = INT32_MIN;
	static int8_t x2054 = INT8_MAX;
	uint16_t x2055 = 1U;
	uint8_t x2056 = 0U;
	volatile int32_t t58 = INT32_MIN;

	t58 = (x2053-((x2054<=x2055)<<x2056));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x2081 = INT16_MAX;
	int8_t x2082 = -1;
	volatile int16_t x2083 = INT16_MAX;
	int8_t x2084 = 14;
	int32_t t59 = -3571;

	t59 = (x2081-((x2082<=x2083)<<x2084));

	if (t59 != 16383) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2093 = INT8_MIN;
	volatile int8_t x2094 = 46;
	static int64_t x2095 = INT64_MIN;
	volatile int16_t x2096 = 4;

	t60 = (x2093-((x2094<=x2095)<<x2096));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x2161 = 10U;
	static uint16_t x2162 = 679U;
	uint64_t x2163 = UINT64_MAX;
	static volatile uint8_t x2164 = 3U;
	static int32_t t61 = -494296;

	t61 = (x2161-((x2162<=x2163)<<x2164));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x2186 = -1;
	int8_t x2187 = -4;
	uint8_t x2188 = 3U;
	uint64_t t62 = 1550400365638LLU;

	t62 = (x2185-((x2186<=x2187)<<x2188));

	if (t62 != 43318838625LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x2189 = 5U;
	static volatile int8_t x2190 = INT8_MIN;
	static uint8_t x2192 = 2U;
	volatile int32_t t63 = 1005007;

	t63 = (x2189-((x2190<=x2191)<<x2192));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2209 = -21205465110LL;
	static uint16_t x2210 = UINT16_MAX;
	uint8_t x2211 = 7U;
	volatile int16_t x2212 = 1;
	static volatile int64_t t64 = -417429LL;

	t64 = (x2209-((x2210<=x2211)<<x2212));

	if (t64 != -21205465110LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2213 = 68;
	int8_t x2214 = 6;
	int16_t x2215 = INT16_MIN;
	int8_t x2216 = 0;
	int32_t t65 = -74436471;

	t65 = (x2213-((x2214<=x2215)<<x2216));

	if (t65 != 68) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x2253 = INT8_MIN;
	int64_t x2254 = INT64_MIN;
	int16_t x2255 = -1;
	uint16_t x2256 = 2U;
	volatile int32_t t66 = 28;

	t66 = (x2253-((x2254<=x2255)<<x2256));

	if (t66 != -132) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x2265 = -1;
	int8_t x2268 = 0;
	volatile int32_t t67 = 358655621;

	t67 = (x2265-((x2266<=x2267)<<x2268));

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2309 = 501;
	volatile uint8_t x2310 = 1U;
	volatile uint8_t x2311 = UINT8_MAX;
	uint32_t x2312 = 0U;
	int32_t t68 = 244;

	t68 = (x2309-((x2310<=x2311)<<x2312));

	if (t68 != 500) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2361 = -1676LL;
	int16_t x2362 = INT16_MIN;
	int8_t x2363 = INT8_MAX;
	volatile int8_t x2364 = 23;
	int64_t t69 = 936158257331LL;

	t69 = (x2361-((x2362<=x2363)<<x2364));

	if (t69 != -8390284LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2373 = INT16_MIN;
	int16_t x2374 = -8;
	int32_t x2375 = INT32_MIN;
	int16_t x2376 = 1;
	int32_t t70 = -8037536;

	t70 = (x2373-((x2374<=x2375)<<x2376));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x2382 = INT8_MAX;
	uint16_t x2383 = UINT16_MAX;
	uint32_t x2384 = 12U;
	volatile int32_t t71 = -9532;

	t71 = (x2381-((x2382<=x2383)<<x2384));

	if (t71 != -4091) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2409 = INT32_MAX;
	uint8_t x2411 = 11U;
	uint32_t x2412 = 19U;
	static volatile int32_t t72 = INT32_MAX;

	t72 = (x2409-((x2410<=x2411)<<x2412));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2421 = 89U;
	volatile int32_t x2422 = -1;
	volatile uint16_t x2424 = 0U;

	t73 = (x2421-((x2422<=x2423)<<x2424));

	if (t73 != 88U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2425 = -1;
	volatile int16_t x2426 = -1;
	int16_t x2427 = INT16_MIN;
	int8_t x2428 = 0;

	t74 = (x2425-((x2426<=x2427)<<x2428));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x2454 = INT32_MAX;
	int64_t x2455 = -1LL;
	uint16_t x2456 = 1U;
	volatile int32_t t75 = -131100333;

	t75 = (x2453-((x2454<=x2455)<<x2456));

	if (t75 != 7617952) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2549 = UINT64_MAX;
	static volatile uint64_t x2550 = 6LLU;
	uint64_t x2551 = UINT64_MAX;
	int32_t x2552 = 1;
	static volatile uint64_t t76 = 7225LLU;

	t76 = (x2549-((x2550<=x2551)<<x2552));

	if (t76 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2558 = INT16_MIN;
	uint32_t x2559 = 142284U;
	int16_t x2560 = 15;

	t77 = (x2557-((x2558<=x2559)<<x2560));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2577 = INT32_MIN;
	static uint16_t x2578 = UINT16_MAX;
	static uint32_t x2580 = 6U;
	volatile int32_t t78 = INT32_MIN;

	t78 = (x2577-((x2578<=x2579)<<x2580));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2593 = 5U;
	uint32_t x2595 = UINT32_MAX;
	volatile int8_t x2596 = 0;
	int32_t t79 = 6059;

	t79 = (x2593-((x2594<=x2595)<<x2596));

	if (t79 != 4) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2622 = INT8_MIN;
	static int64_t x2623 = INT64_MAX;
	uint8_t x2624 = 5U;
	volatile uint32_t t80 = 39779U;

	t80 = (x2621-((x2622<=x2623)<<x2624));

	if (t80 != 4294967267U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2662 = 1589497472LL;
	volatile int16_t x2663 = -6;
	volatile int8_t x2664 = 4;
	volatile int32_t t81 = -248518;

	t81 = (x2661-((x2662<=x2663)<<x2664));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2682 = INT64_MIN;
	int64_t x2683 = INT64_MIN;
	uint32_t x2684 = 13U;
	uint32_t t82 = 3602422U;

	t82 = (x2681-((x2682<=x2683)<<x2684));

	if (t82 != 505383U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x2726 = 211U;
	int64_t x2727 = -1LL;
	volatile int32_t t83 = 14461;

	t83 = (x2725-((x2726<=x2727)<<x2728));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x2749 = 955538U;
	volatile uint16_t x2752 = 2U;

	t84 = (x2749-((x2750<=x2751)<<x2752));

	if (t84 != 955538U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x2773 = -3;
	uint64_t x2775 = 351326290416908LLU;
	int8_t x2776 = 18;

	t85 = (x2773-((x2774<=x2775)<<x2776));

	if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2801 = UINT16_MAX;
	volatile int8_t x2802 = -1;
	static int32_t x2803 = INT32_MIN;

	t86 = (x2801-((x2802<=x2803)<<x2804));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2869 = INT64_MIN;
	int8_t x2870 = INT8_MAX;
	uint16_t x2871 = 77U;
	volatile uint16_t x2872 = 15U;
	volatile int64_t t87 = INT64_MIN;

	t87 = (x2869-((x2870<=x2871)<<x2872));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x2921 = 108;
	int16_t x2922 = INT16_MAX;
	volatile int8_t x2923 = INT8_MAX;
	uint8_t x2924 = 28U;
	volatile int32_t t88 = -10725609;

	t88 = (x2921-((x2922<=x2923)<<x2924));

	if (t88 != 108) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3061 = 24658U;
	int16_t x3064 = 11;
	volatile int32_t t89 = 7;

	t89 = (x3061-((x3062<=x3063)<<x3064));

	if (t89 != 24658) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x3169 = UINT32_MAX;
	int32_t x3170 = INT32_MIN;
	int64_t x3171 = INT64_MIN;
	uint8_t x3172 = 1U;
	volatile uint32_t t90 = UINT32_MAX;

	t90 = (x3169-((x3170<=x3171)<<x3172));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3182 = INT64_MAX;
	uint16_t x3183 = 23422U;

	t91 = (x3181-((x3182<=x3183)<<x3184));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3209 = -5;
	volatile int8_t x3210 = INT8_MIN;
	volatile uint64_t x3211 = UINT64_MAX;
	int16_t x3212 = 17;

	t92 = (x3209-((x3210<=x3211)<<x3212));

	if (t92 != -131077) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3230 = -1LL;
	int8_t x3231 = -1;
	int8_t x3232 = 4;
	volatile int32_t t93 = -60;

	t93 = (x3229-((x3230<=x3231)<<x3232));

	if (t93 != -32784) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x3233 = 1731LLU;
	static int32_t x3234 = INT32_MIN;
	volatile uint32_t x3235 = 0U;
	uint32_t x3236 = 0U;
	static volatile uint64_t t94 = 2LLU;

	t94 = (x3233-((x3234<=x3235)<<x3236));

	if (t94 != 1731LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x3265 = INT8_MAX;
	static uint8_t x3268 = 0U;
	volatile int32_t t95 = -1983;

	t95 = (x3265-((x3266<=x3267)<<x3268));

	if (t95 != 126) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3325 = INT8_MAX;
	int8_t x3326 = -1;
	volatile int16_t x3327 = 4148;
	uint32_t x3328 = 28U;
	int32_t t96 = 5568328;

	t96 = (x3325-((x3326<=x3327)<<x3328));

	if (t96 != -268435329) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x3329 = INT16_MIN;
	int32_t x3331 = INT32_MAX;
	volatile int32_t t97 = 258886;

	t97 = (x3329-((x3330<=x3331)<<x3332));

	if (t97 != -32776) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x3349 = 46622059;
	int8_t x3350 = INT8_MAX;
	int16_t x3352 = 1;
	int32_t t98 = 15;

	t98 = (x3349-((x3350<=x3351)<<x3352));

	if (t98 != 46622059) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3381 = INT16_MIN;
	static volatile int32_t x3382 = INT32_MIN;
	int32_t x3383 = INT32_MIN;
	static int8_t x3384 = 2;

	t99 = (x3381-((x3382<=x3383)<<x3384));

	if (t99 != -32772) { NG(); } else { ; }
	
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

