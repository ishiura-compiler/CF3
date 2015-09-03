#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x89 = INT16_MIN;
int64_t x91 = -1LL;
int32_t t2 = 1000;
uint8_t x196 = 25U;
int16_t x230 = -5197;
int32_t x231 = 38;
uint8_t x232 = 15U;
uint8_t x268 = 2U;
volatile uint64_t x290 = 14745842961LLU;
int32_t t10 = 8079;
int8_t x333 = -1;
uint64_t t15 = 2061592633870004232LLU;
volatile uint8_t x519 = 1U;
static int8_t x560 = 1;
static int32_t t21 = INT32_MIN;
int16_t x609 = INT16_MIN;
uint16_t x612 = 12U;
int32_t t23 = 126;
static volatile int32_t t26 = -284263473;
int32_t x758 = INT32_MIN;
int32_t x759 = -1;
volatile int32_t t28 = -15873;
volatile uint32_t t29 = UINT32_MAX;
int32_t x878 = INT32_MIN;
static uint16_t x879 = 268U;
int16_t x977 = INT16_MAX;
int8_t x978 = INT8_MAX;
volatile int16_t x980 = 0;
int16_t x1007 = INT16_MIN;
volatile uint64_t t33 = 257473541139116630LLU;
static volatile int32_t t34 = INT32_MIN;
uint32_t x1041 = 12197440U;
int64_t x1042 = INT64_MAX;
int64_t x1044 = 1LL;
uint16_t x1052 = 3U;
int32_t x1067 = -1;
int64_t x1102 = INT64_MIN;
uint8_t x1127 = 1U;
volatile int64_t x1178 = INT64_MIN;
static uint32_t x1180 = 1U;
int32_t t40 = -133274009;
int64_t x1291 = 0LL;
volatile uint64_t x1328 = 1LLU;
int8_t x1382 = INT8_MIN;
static int8_t x1478 = INT8_MIN;
static int64_t t47 = INT64_MIN;
int16_t x1514 = INT16_MIN;
static uint32_t x1515 = 44828773U;
int32_t t50 = -11093975;
uint8_t x1676 = 7U;
uint32_t x1677 = 1597U;
uint32_t x1685 = 27U;
volatile int32_t x1698 = 46690;
int32_t x1700 = 2;
int8_t x1737 = 1;
int8_t x1739 = INT8_MAX;
int8_t x1740 = 27;
volatile uint64_t x1758 = UINT64_MAX;
int64_t x1798 = -31315LL;
volatile int32_t x1821 = -1;
volatile uint16_t x1824 = 6U;
static volatile int32_t t61 = 14872039;
int16_t x1851 = -1;
static int16_t x1861 = 26;
int32_t x1863 = 1709;
uint8_t x1864 = 17U;
int8_t x1893 = INT8_MIN;
static int32_t t66 = -286;
uint16_t x1899 = 7816U;
int64_t x1908 = 7LL;
static volatile int32_t t68 = 1975;
int32_t x1909 = -1;
int64_t x1910 = -1LL;
uint8_t x1970 = UINT8_MAX;
int64_t x1971 = 4LL;
int16_t x2001 = INT16_MIN;
int16_t x2077 = INT16_MIN;
volatile uint8_t x2078 = 66U;
uint64_t x2079 = 9086LLU;
volatile int32_t t79 = 415017;
int16_t x2420 = 1;
uint64_t x2453 = 208512440LLU;
int16_t x2454 = 37;
int64_t x2455 = INT64_MIN;
volatile uint64_t t83 = 233453278507LLU;
volatile int8_t x2486 = 19;
volatile int64_t x2487 = -41834040LL;
volatile int8_t x2529 = INT8_MAX;
static int32_t x2530 = 167433;
int32_t t86 = 32265;
uint8_t x2538 = 49U;
volatile int8_t x2597 = 7;
int16_t x2605 = INT16_MIN;
volatile uint32_t x2617 = 501588U;
int8_t x2786 = INT8_MAX;
volatile int64_t t93 = INT64_MAX;
static uint16_t x2796 = 1U;
uint32_t x2830 = UINT32_MAX;
int64_t t98 = 3172295612919823LL;
volatile uint32_t t99 = 31619U;


void f0(void) {
	volatile int64_t x33 = INT64_MAX;
	static int32_t x34 = -1;
	uint8_t x35 = UINT8_MAX;
	int32_t x36 = 1;
	volatile int64_t t0 = INT64_MAX;

	t0 = (x33+((x34<x35)>>x36));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x37 = INT8_MIN;
	static uint16_t x38 = UINT16_MAX;
	int8_t x39 = INT8_MIN;
	uint8_t x40 = 0U;
	int32_t t1 = -4079142;

	t1 = (x37+((x38<x39)>>x40));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x90 = INT32_MIN;
	int16_t x92 = 3;

	t2 = (x89+((x90<x91)>>x92));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x181 = 161U;
	static int32_t x182 = -1;
	uint8_t x183 = 0U;
	int16_t x184 = 0;
	int32_t t3 = -3;

	t3 = (x181+((x182<x183)>>x184));

	if (t3 != 162) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x193 = INT8_MIN;
	uint16_t x194 = 26U;
	uint32_t x195 = UINT32_MAX;
	volatile int32_t t4 = -4768;

	t4 = (x193+((x194<x195)>>x196));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x217 = 237469130U;
	uint16_t x218 = 3U;
	int32_t x219 = -13506;
	uint8_t x220 = 0U;
	uint32_t t5 = 99045484U;

	t5 = (x217+((x218<x219)>>x220));

	if (t5 != 237469130U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x229 = -1;
	int32_t t6 = 152;

	t6 = (x229+((x230<x231)>>x232));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x265 = INT8_MIN;
	int16_t x266 = 1351;
	uint16_t x267 = 13545U;
	static volatile int32_t t7 = -282275;

	t7 = (x265+((x266<x267)>>x268));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x289 = INT16_MAX;
	int8_t x291 = 1;
	int64_t x292 = 1LL;
	int32_t t8 = 350736478;

	t8 = (x289+((x290<x291)>>x292));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x297 = INT64_MAX;
	int64_t x298 = -1LL;
	int32_t x299 = INT32_MAX;
	int8_t x300 = 1;
	int64_t t9 = INT64_MAX;

	t9 = (x297+((x298<x299)>>x300));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x317 = UINT8_MAX;
	int32_t x318 = -1;
	int64_t x319 = INT64_MIN;
	uint64_t x320 = 15LLU;

	t10 = (x317+((x318<x319)>>x320));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x334 = 9U;
	int64_t x335 = -13728311824LL;
	volatile int16_t x336 = 1;
	volatile int32_t t11 = 4022;

	t11 = (x333+((x334<x335)>>x336));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x401 = 990U;
	int32_t x402 = -1;
	uint8_t x403 = 1U;
	volatile int32_t x404 = 29;
	volatile int32_t t12 = 405597569;

	t12 = (x401+((x402<x403)>>x404));

	if (t12 != 990) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x409 = INT16_MIN;
	int64_t x410 = INT64_MAX;
	uint16_t x411 = 2964U;
	uint8_t x412 = 8U;
	static int32_t t13 = 5;

	t13 = (x409+((x410<x411)>>x412));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x433 = INT32_MIN;
	uint32_t x434 = 3257861U;
	int32_t x435 = -163404;
	int16_t x436 = 1;
	static int32_t t14 = INT32_MIN;

	t14 = (x433+((x434<x435)>>x436));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x489 = 74LLU;
	volatile uint8_t x490 = 2U;
	int16_t x491 = INT16_MIN;
	int16_t x492 = 30;

	t15 = (x489+((x490<x491)>>x492));

	if (t15 != 74LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x517 = 60U;
	int16_t x518 = 2;
	uint8_t x520 = 18U;
	int32_t t16 = 1934;

	t16 = (x517+((x518<x519)>>x520));

	if (t16 != 60) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x529 = UINT8_MAX;
	int16_t x530 = 1;
	static int64_t x531 = INT64_MAX;
	static int8_t x532 = 0;
	volatile int32_t t17 = -211117;

	t17 = (x529+((x530<x531)>>x532));

	if (t17 != 256) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x533 = UINT32_MAX;
	uint64_t x534 = 252406383LLU;
	int64_t x535 = -3LL;
	int16_t x536 = 1;
	static uint32_t t18 = UINT32_MAX;

	t18 = (x533+((x534<x535)>>x536));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x545 = 62U;
	volatile uint16_t x546 = 0U;
	int8_t x547 = INT8_MIN;
	int8_t x548 = 5;
	int32_t t19 = -22667120;

	t19 = (x545+((x546<x547)>>x548));

	if (t19 != 62) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x557 = INT64_MIN;
	uint64_t x558 = UINT64_MAX;
	uint64_t x559 = UINT64_MAX;
	volatile int64_t t20 = INT64_MIN;

	t20 = (x557+((x558<x559)>>x560));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x585 = INT32_MIN;
	int64_t x586 = -7485425335216179LL;
	uint64_t x587 = 833LLU;
	uint32_t x588 = 0U;

	t21 = (x585+((x586<x587)>>x588));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x610 = -1;
	uint8_t x611 = UINT8_MAX;
	int32_t t22 = -1966;

	t22 = (x609+((x610<x611)>>x612));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x613 = INT16_MIN;
	int64_t x614 = INT64_MIN;
	int8_t x615 = -1;
	uint8_t x616 = 1U;

	t23 = (x613+((x614<x615)>>x616));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x713 = 847LLU;
	int16_t x714 = INT16_MAX;
	int8_t x715 = INT8_MIN;
	int8_t x716 = 1;
	volatile uint64_t t24 = 1515258173223LLU;

	t24 = (x713+((x714<x715)>>x716));

	if (t24 != 847LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x717 = INT8_MIN;
	int8_t x718 = -4;
	volatile int16_t x719 = -1;
	uint8_t x720 = 12U;
	static int32_t t25 = 3804;

	t25 = (x717+((x718<x719)>>x720));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x725 = 217U;
	uint16_t x726 = UINT16_MAX;
	int64_t x727 = -1LL;
	int8_t x728 = 0;

	t26 = (x725+((x726<x727)>>x728));

	if (t26 != 217) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x753 = 47U;
	static int64_t x754 = -1LL;
	int64_t x755 = -1LL;
	volatile int8_t x756 = 12;
	static volatile int32_t t27 = -25178;

	t27 = (x753+((x754<x755)>>x756));

	if (t27 != 47) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x757 = UINT8_MAX;
	volatile uint8_t x760 = 3U;

	t28 = (x757+((x758<x759)>>x760));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x789 = UINT32_MAX;
	int16_t x790 = 2;
	uint64_t x791 = UINT64_MAX;
	uint16_t x792 = 31U;

	t29 = (x789+((x790<x791)>>x792));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x821 = UINT8_MAX;
	int16_t x822 = -1;
	int64_t x823 = INT64_MIN;
	uint32_t x824 = 0U;
	volatile int32_t t30 = 523599164;

	t30 = (x821+((x822<x823)>>x824));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x877 = 1586465545U;
	int8_t x880 = 29;
	volatile uint32_t t31 = 327860U;

	t31 = (x877+((x878<x879)>>x880));

	if (t31 != 1586465545U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x979 = -13882710405453023LL;
	volatile int32_t t32 = 6;

	t32 = (x977+((x978<x979)>>x980));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1005 = 15LLU;
	int64_t x1006 = INT64_MAX;
	static uint8_t x1008 = 1U;

	t33 = (x1005+((x1006<x1007)>>x1008));

	if (t33 != 15LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1013 = INT32_MIN;
	volatile int8_t x1014 = INT8_MIN;
	static int64_t x1015 = INT64_MIN;
	uint16_t x1016 = 2U;

	t34 = (x1013+((x1014<x1015)>>x1016));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1043 = 120749333U;
	uint32_t t35 = 1005518U;

	t35 = (x1041+((x1042<x1043)>>x1044));

	if (t35 != 12197440U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x1049 = 43U;
	int32_t x1050 = INT32_MIN;
	uint32_t x1051 = 196710214U;
	static volatile int32_t t36 = 644188338;

	t36 = (x1049+((x1050<x1051)>>x1052));

	if (t36 != 43) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1065 = INT8_MAX;
	static int16_t x1066 = -719;
	uint64_t x1068 = 25LLU;
	int32_t t37 = -12642;

	t37 = (x1065+((x1066<x1067)>>x1068));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1101 = -1;
	volatile int64_t x1103 = -1LL;
	uint64_t x1104 = 0LLU;
	int32_t t38 = -11279;

	t38 = (x1101+((x1102<x1103)>>x1104));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1125 = 28U;
	int32_t x1126 = INT32_MIN;
	uint64_t x1128 = 11LLU;
	volatile int32_t t39 = -22;

	t39 = (x1125+((x1126<x1127)>>x1128));

	if (t39 != 28) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1177 = -163;
	volatile int8_t x1179 = -15;

	t40 = (x1177+((x1178<x1179)>>x1180));

	if (t40 != -163) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1209 = 9U;
	volatile int8_t x1210 = INT8_MAX;
	int64_t x1211 = -1LL;
	static int16_t x1212 = 0;
	volatile int32_t t41 = -524;

	t41 = (x1209+((x1210<x1211)>>x1212));

	if (t41 != 9) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1289 = INT64_MIN;
	int32_t x1290 = 12;
	int32_t x1292 = 0;
	volatile int64_t t42 = INT64_MIN;

	t42 = (x1289+((x1290<x1291)>>x1292));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x1321 = UINT16_MAX;
	uint16_t x1322 = UINT16_MAX;
	int32_t x1323 = -13930;
	uint16_t x1324 = 0U;
	int32_t t43 = -2622;

	t43 = (x1321+((x1322<x1323)>>x1324));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x1325 = INT64_MIN;
	int64_t x1326 = INT64_MIN;
	static int16_t x1327 = 1;
	int64_t t44 = INT64_MIN;

	t44 = (x1325+((x1326<x1327)>>x1328));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x1381 = INT8_MIN;
	uint64_t x1383 = UINT64_MAX;
	int8_t x1384 = 1;
	int32_t t45 = 297605;

	t45 = (x1381+((x1382<x1383)>>x1384));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1449 = 27U;
	static int32_t x1450 = INT32_MIN;
	int32_t x1451 = INT32_MIN;
	static uint16_t x1452 = 0U;
	int32_t t46 = -55100;

	t46 = (x1449+((x1450<x1451)>>x1452));

	if (t46 != 27) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1477 = INT64_MIN;
	static uint64_t x1479 = 470688043452941997LLU;
	volatile int8_t x1480 = 0;

	t47 = (x1477+((x1478<x1479)>>x1480));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1513 = 37LL;
	volatile uint8_t x1516 = 11U;
	volatile int64_t t48 = 8497289LL;

	t48 = (x1513+((x1514<x1515)>>x1516));

	if (t48 != 37LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1525 = INT8_MIN;
	static volatile int8_t x1526 = 6;
	uint16_t x1527 = 2500U;
	int32_t x1528 = 3;
	volatile int32_t t49 = -18;

	t49 = (x1525+((x1526<x1527)>>x1528));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x1657 = 3;
	int16_t x1658 = INT16_MIN;
	volatile int32_t x1659 = -1;
	uint8_t x1660 = 2U;

	t50 = (x1657+((x1658<x1659)>>x1660));

	if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1665 = 6600;
	int16_t x1666 = -352;
	int64_t x1667 = 246542853LL;
	int8_t x1668 = 0;
	volatile int32_t t51 = 12;

	t51 = (x1665+((x1666<x1667)>>x1668));

	if (t51 != 6601) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1673 = -1;
	int64_t x1674 = INT64_MIN;
	uint16_t x1675 = 4U;
	volatile int32_t t52 = -2128;

	t52 = (x1673+((x1674<x1675)>>x1676));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1678 = 13U;
	uint64_t x1679 = 42141900277929LLU;
	uint8_t x1680 = 1U;
	uint32_t t53 = 15U;

	t53 = (x1677+((x1678<x1679)>>x1680));

	if (t53 != 1597U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x1686 = INT16_MIN;
	volatile int16_t x1687 = -1;
	uint32_t x1688 = 23U;
	volatile uint32_t t54 = 219200U;

	t54 = (x1685+((x1686<x1687)>>x1688));

	if (t54 != 27U) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x1697 = -1;
	int16_t x1699 = 1115;
	int32_t t55 = 230;

	t55 = (x1697+((x1698<x1699)>>x1700));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1738 = -1;
	volatile int32_t t56 = -3299;

	t56 = (x1737+((x1738<x1739)>>x1740));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x1757 = 0;
	int64_t x1759 = INT64_MIN;
	uint8_t x1760 = 0U;
	static int32_t t57 = -1;

	t57 = (x1757+((x1758<x1759)>>x1760));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x1797 = INT16_MIN;
	static int32_t x1799 = 31681;
	volatile uint32_t x1800 = 9U;
	int32_t t58 = 5;

	t58 = (x1797+((x1798<x1799)>>x1800));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x1801 = -10;
	static volatile int32_t x1802 = -71;
	uint32_t x1803 = UINT32_MAX;
	int8_t x1804 = 1;
	volatile int32_t t59 = 10343;

	t59 = (x1801+((x1802<x1803)>>x1804));

	if (t59 != -10) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x1822 = 1811U;
	static volatile int64_t x1823 = INT64_MIN;
	int32_t t60 = -300442846;

	t60 = (x1821+((x1822<x1823)>>x1824));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x1837 = UINT16_MAX;
	uint32_t x1838 = UINT32_MAX;
	static int32_t x1839 = INT32_MAX;
	static volatile uint32_t x1840 = 11U;

	t61 = (x1837+((x1838<x1839)>>x1840));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x1841 = 439662741893665LLU;
	uint64_t x1842 = 2473473823629LLU;
	int32_t x1843 = INT32_MAX;
	static uint16_t x1844 = 16U;
	volatile uint64_t t62 = 224380LLU;

	t62 = (x1841+((x1842<x1843)>>x1844));

	if (t62 != 439662741893665LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x1849 = INT64_MAX;
	int8_t x1850 = -6;
	static volatile uint16_t x1852 = 1U;
	volatile int64_t t63 = INT64_MAX;

	t63 = (x1849+((x1850<x1851)>>x1852));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x1853 = -1;
	volatile int8_t x1854 = -1;
	uint64_t x1855 = 545LLU;
	int16_t x1856 = 20;
	int32_t t64 = -90;

	t64 = (x1853+((x1854<x1855)>>x1856));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x1862 = INT8_MIN;
	volatile int32_t t65 = 4260;

	t65 = (x1861+((x1862<x1863)>>x1864));

	if (t65 != 26) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x1894 = 52U;
	uint32_t x1895 = UINT32_MAX;
	int8_t x1896 = 6;

	t66 = (x1893+((x1894<x1895)>>x1896));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1897 = 29;
	static int16_t x1898 = -28;
	int64_t x1900 = 6LL;
	volatile int32_t t67 = 0;

	t67 = (x1897+((x1898<x1899)>>x1900));

	if (t67 != 29) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1905 = INT8_MIN;
	uint64_t x1906 = 7557157726LLU;
	int64_t x1907 = -1LL;

	t68 = (x1905+((x1906<x1907)>>x1908));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x1911 = -1;
	uint8_t x1912 = 0U;
	volatile int32_t t69 = -2900879;

	t69 = (x1909+((x1910<x1911)>>x1912));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x1921 = 679635240;
	static int8_t x1922 = 7;
	int8_t x1923 = INT8_MIN;
	static int8_t x1924 = 0;
	int32_t t70 = -523019;

	t70 = (x1921+((x1922<x1923)>>x1924));

	if (t70 != 679635240) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1933 = -1;
	int32_t x1934 = INT32_MIN;
	volatile int32_t x1935 = -1;
	uint8_t x1936 = 1U;
	int32_t t71 = -1;

	t71 = (x1933+((x1934<x1935)>>x1936));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1969 = UINT32_MAX;
	uint16_t x1972 = 5U;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (x1969+((x1970<x1971)>>x1972));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2002 = UINT32_MAX;
	int64_t x2003 = INT64_MIN;
	uint16_t x2004 = 27U;
	volatile int32_t t73 = -45;

	t73 = (x2001+((x2002<x2003)>>x2004));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x2049 = 33;
	static volatile int32_t x2050 = -85798313;
	uint8_t x2051 = UINT8_MAX;
	uint8_t x2052 = 1U;
	volatile int32_t t74 = 2762;

	t74 = (x2049+((x2050<x2051)>>x2052));

	if (t74 != 33) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x2080 = 21U;
	int32_t t75 = -19;

	t75 = (x2077+((x2078<x2079)>>x2080));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2145 = INT8_MIN;
	uint32_t x2146 = 955319U;
	int16_t x2147 = 2;
	uint8_t x2148 = 0U;
	int32_t t76 = 454897752;

	t76 = (x2145+((x2146<x2147)>>x2148));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2225 = 2022099767U;
	int16_t x2226 = -1;
	volatile uint8_t x2227 = 1U;
	static int8_t x2228 = 11;
	volatile uint32_t t77 = 6825069U;

	t77 = (x2225+((x2226<x2227)>>x2228));

	if (t77 != 2022099767U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x2289 = INT8_MIN;
	uint64_t x2290 = 250061011LLU;
	static int8_t x2291 = INT8_MIN;
	uint16_t x2292 = 0U;
	static int32_t t78 = 790618;

	t78 = (x2289+((x2290<x2291)>>x2292));

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x2313 = -1;
	volatile int32_t x2314 = -70;
	static int32_t x2315 = INT32_MIN;
	volatile uint8_t x2316 = 1U;

	t79 = (x2313+((x2314<x2315)>>x2316));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x2413 = 7;
	uint16_t x2414 = 783U;
	int16_t x2415 = INT16_MIN;
	volatile uint32_t x2416 = 3U;
	volatile int32_t t80 = 1;

	t80 = (x2413+((x2414<x2415)>>x2416));

	if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x2417 = UINT8_MAX;
	int16_t x2418 = INT16_MAX;
	volatile int64_t x2419 = -1LL;
	static volatile int32_t t81 = -1046590;

	t81 = (x2417+((x2418<x2419)>>x2420));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x2421 = INT64_MAX;
	uint32_t x2422 = 80896U;
	uint8_t x2423 = UINT8_MAX;
	uint32_t x2424 = 14U;
	volatile int64_t t82 = INT64_MAX;

	t82 = (x2421+((x2422<x2423)>>x2424));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x2456 = 13;

	t83 = (x2453+((x2454<x2455)>>x2456));

	if (t83 != 208512440LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2485 = -11789;
	uint64_t x2488 = 1LLU;
	int32_t t84 = 175051624;

	t84 = (x2485+((x2486<x2487)>>x2488));

	if (t84 != -11789) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2509 = INT64_MAX;
	uint64_t x2510 = 469967446263LLU;
	int8_t x2511 = 5;
	int32_t x2512 = 4;
	volatile int64_t t85 = INT64_MAX;

	t85 = (x2509+((x2510<x2511)>>x2512));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2531 = UINT16_MAX;
	static int8_t x2532 = 22;

	t86 = (x2529+((x2530<x2531)>>x2532));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2537 = INT32_MAX;
	int16_t x2539 = INT16_MIN;
	uint8_t x2540 = 7U;
	int32_t t87 = INT32_MAX;

	t87 = (x2537+((x2538<x2539)>>x2540));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x2598 = INT32_MIN;
	uint32_t x2599 = 99U;
	int8_t x2600 = 6;
	int32_t t88 = 246256845;

	t88 = (x2597+((x2598<x2599)>>x2600));

	if (t88 != 7) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x2606 = 520526248834LLU;
	int8_t x2607 = 62;
	volatile int32_t x2608 = 7;
	int32_t t89 = 35;

	t89 = (x2605+((x2606<x2607)>>x2608));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2618 = -1;
	int8_t x2619 = -2;
	static volatile uint64_t x2620 = 19LLU;
	volatile uint32_t t90 = 526710179U;

	t90 = (x2617+((x2618<x2619)>>x2620));

	if (t90 != 501588U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2705 = -1;
	int8_t x2706 = -1;
	uint32_t x2707 = UINT32_MAX;
	uint16_t x2708 = 26U;
	int32_t t91 = -12114;

	t91 = (x2705+((x2706<x2707)>>x2708));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2781 = INT32_MIN;
	static int64_t x2782 = INT64_MIN;
	static int64_t x2783 = INT64_MIN;
	uint32_t x2784 = 2U;
	int32_t t92 = INT32_MIN;

	t92 = (x2781+((x2782<x2783)>>x2784));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2785 = INT64_MAX;
	uint8_t x2787 = 38U;
	volatile uint8_t x2788 = 6U;

	t93 = (x2785+((x2786<x2787)>>x2788));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x2793 = INT16_MIN;
	uint32_t x2794 = 40185U;
	int16_t x2795 = INT16_MAX;
	volatile int32_t t94 = 203000199;

	t94 = (x2793+((x2794<x2795)>>x2796));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x2797 = INT8_MIN;
	volatile int8_t x2798 = INT8_MIN;
	volatile uint32_t x2799 = 603U;
	int64_t x2800 = 1LL;
	int32_t t95 = 8;

	t95 = (x2797+((x2798<x2799)>>x2800));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2829 = INT64_MAX;
	volatile int32_t x2831 = INT32_MIN;
	uint16_t x2832 = 0U;
	static int64_t t96 = INT64_MAX;

	t96 = (x2829+((x2830<x2831)>>x2832));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x2837 = UINT16_MAX;
	int32_t x2838 = INT32_MIN;
	uint64_t x2839 = 302811LLU;
	int32_t x2840 = 0;
	volatile int32_t t97 = 9058728;

	t97 = (x2837+((x2838<x2839)>>x2840));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x2845 = -1LL;
	int16_t x2846 = 0;
	static uint8_t x2847 = 5U;
	volatile uint32_t x2848 = 0U;

	t98 = (x2845+((x2846<x2847)>>x2848));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x2865 = 72532124U;
	int16_t x2866 = INT16_MAX;
	volatile int64_t x2867 = INT64_MIN;
	static uint8_t x2868 = 2U;

	t99 = (x2865+((x2866<x2867)>>x2868));

	if (t99 != 72532124U) { NG(); } else { ; }
	
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

