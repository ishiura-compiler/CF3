#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x29 = INT64_MAX;
uint16_t x31 = 13388U;
static uint64_t t2 = 246585197946LLU;
int32_t t5 = -31845142;
int16_t x258 = 1;
int32_t t11 = 796547844;
int32_t x451 = 13807639;
uint8_t x452 = 2U;
volatile int8_t x715 = INT8_MIN;
int8_t x804 = 14;
int8_t x819 = INT8_MIN;
uint8_t x936 = 3U;
uint32_t x946 = 550U;
static volatile uint32_t x1015 = UINT32_MAX;
uint64_t t24 = UINT64_MAX;
static int16_t x1042 = -1;
volatile uint16_t x1044 = 2U;
static uint8_t x1069 = UINT8_MAX;
volatile uint32_t x1071 = 92U;
int32_t t28 = -59;
uint32_t x1087 = UINT32_MAX;
volatile int8_t x1098 = INT8_MIN;
static int8_t x1129 = 0;
volatile int16_t x1132 = 1;
int32_t t34 = INT32_MIN;
volatile int8_t x1164 = 1;
volatile int32_t t36 = INT32_MIN;
uint8_t x1205 = 7U;
static int32_t t37 = 6;
int32_t x1214 = -458;
int32_t t39 = 0;
int32_t t41 = 30;
static int32_t x1451 = INT32_MAX;
uint16_t x1565 = UINT16_MAX;
uint64_t x1566 = 4223093628522654918LLU;
volatile int16_t x1570 = INT16_MAX;
int64_t x1571 = INT64_MIN;
uint8_t x1572 = 9U;
int32_t t47 = INT32_MIN;
int64_t x1602 = -132733937812LL;
static int64_t x1603 = INT64_MAX;
volatile uint32_t t50 = 394U;
int64_t x1687 = INT64_MIN;
uint8_t x1718 = 1U;
int8_t x1722 = INT8_MIN;
static uint32_t x1747 = UINT32_MAX;
int8_t x1793 = -1;
int64_t x1794 = 6020LL;
int16_t x1795 = INT16_MIN;
int8_t x1804 = 11;
int8_t x1814 = INT8_MIN;
uint16_t x1815 = 38U;
volatile int32_t t57 = -119;
int16_t x1835 = INT16_MAX;
volatile uint32_t x1838 = 0U;
uint16_t x1888 = 0U;
static volatile int64_t x1889 = INT64_MIN;
uint8_t x1900 = 1U;
volatile int32_t t62 = 1537;
static int64_t x1905 = -3164160LL;
volatile int8_t x1906 = INT8_MIN;
uint32_t x1907 = 1542195U;
static uint32_t x1908 = 0U;
volatile int64_t t63 = 301223984178259992LL;
int32_t x1926 = -4043752;
static uint8_t x1928 = 18U;
int32_t x1960 = 0;
volatile int32_t t66 = 60486;
static int64_t x1981 = INT64_MAX;
static int16_t x2047 = INT16_MIN;
static uint8_t x2276 = 5U;
volatile int32_t t71 = -2485;
uint64_t x2333 = UINT64_MAX;
int32_t x2405 = -152345;
volatile int8_t x2406 = -1;
static uint8_t x2408 = 21U;
int8_t x2417 = 1;
int64_t x2419 = INT64_MAX;
int32_t x2630 = INT32_MIN;
int32_t x2658 = -1;
volatile uint16_t x2659 = 2039U;
volatile int32_t t81 = INT32_MIN;
static int32_t t85 = -14069284;
static int16_t x2794 = -27;
volatile int8_t x2796 = 0;
int32_t t86 = 255;
volatile int32_t t87 = 7;
static uint32_t x2956 = 2U;
volatile int32_t t90 = -100078;
volatile uint8_t x2968 = 11U;
static int32_t x3025 = -8275663;
uint8_t x3028 = 0U;
volatile int32_t t92 = -828661;
volatile uint16_t x3103 = 1126U;
uint8_t x3125 = 6U;
int32_t x3126 = INT32_MIN;
int16_t x3141 = INT16_MIN;
int16_t x3142 = INT16_MAX;
uint32_t x3143 = 0U;
static uint64_t x3160 = 3LLU;
int64_t x3217 = -1LL;
uint8_t x3219 = UINT8_MAX;
int64_t t99 = 1566509093228097180LL;


void f0(void) {
	volatile uint8_t x13 = UINT8_MAX;
	static int8_t x14 = -40;
	static uint32_t x15 = 6U;
	volatile uint16_t x16 = 10U;
	volatile int32_t t0 = 31;

	t0 = (x13-((x14<x15)>>x16));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x30 = -16;
	uint16_t x32 = 7U;
	static volatile int64_t t1 = INT64_MAX;

	t1 = (x29-((x30<x31)>>x32));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x65 = 12LLU;
	int64_t x66 = INT64_MIN;
	uint8_t x67 = 31U;
	static volatile int32_t x68 = 14;

	t2 = (x65-((x66<x67)>>x68));

	if (t2 != 12LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x177 = 16U;
	uint32_t x178 = 206903U;
	int8_t x179 = INT8_MIN;
	static volatile int8_t x180 = 0;
	int32_t t3 = 38344;

	t3 = (x177-((x178<x179)>>x180));

	if (t3 != 15) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x193 = 1U;
	uint16_t x194 = UINT16_MAX;
	static uint32_t x195 = 2U;
	uint16_t x196 = 1U;
	volatile int32_t t4 = 929309;

	t4 = (x193-((x194<x195)>>x196));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x209 = INT16_MAX;
	int16_t x210 = INT16_MIN;
	uint16_t x211 = 291U;
	uint32_t x212 = 1U;

	t5 = (x209-((x210<x211)>>x212));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x257 = UINT8_MAX;
	int64_t x259 = -12474LL;
	int16_t x260 = 0;
	int32_t t6 = -931928;

	t6 = (x257-((x258<x259)>>x260));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x265 = INT8_MIN;
	static int64_t x266 = INT64_MIN;
	uint8_t x267 = 20U;
	static uint16_t x268 = 10U;
	static volatile int32_t t7 = 6370;

	t7 = (x265-((x266<x267)>>x268));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x337 = -3;
	static int32_t x338 = INT32_MAX;
	int32_t x339 = INT32_MIN;
	uint8_t x340 = 2U;
	volatile int32_t t8 = 64763;

	t8 = (x337-((x338<x339)>>x340));

	if (t8 != -3) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x369 = -1;
	uint16_t x370 = UINT16_MAX;
	volatile int32_t x371 = INT32_MIN;
	uint16_t x372 = 2U;
	static int32_t t9 = 76931907;

	t9 = (x369-((x370<x371)>>x372));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x393 = INT16_MIN;
	uint16_t x394 = UINT16_MAX;
	static volatile uint8_t x395 = UINT8_MAX;
	int8_t x396 = 0;
	volatile int32_t t10 = -8482;

	t10 = (x393-((x394<x395)>>x396));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x421 = INT8_MIN;
	int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	int32_t x424 = 6;

	t11 = (x421-((x422<x423)>>x424));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x449 = INT32_MAX;
	uint32_t x450 = 14310067U;
	volatile int32_t t12 = INT32_MAX;

	t12 = (x449-((x450<x451)>>x452));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x569 = INT16_MAX;
	volatile int64_t x570 = INT64_MAX;
	static int16_t x571 = INT16_MIN;
	uint32_t x572 = 12U;
	volatile int32_t t13 = 15;

	t13 = (x569-((x570<x571)>>x572));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x593 = INT64_MIN;
	static volatile int16_t x594 = INT16_MAX;
	static int32_t x595 = INT32_MIN;
	int8_t x596 = 1;
	int64_t t14 = INT64_MIN;

	t14 = (x593-((x594<x595)>>x596));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x713 = INT32_MIN;
	int64_t x714 = INT64_MAX;
	static uint8_t x716 = 3U;
	int32_t t15 = INT32_MIN;

	t15 = (x713-((x714<x715)>>x716));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x753 = -1;
	uint32_t x754 = UINT32_MAX;
	int64_t x755 = -84820LL;
	static uint8_t x756 = 28U;
	static int32_t t16 = 2;

	t16 = (x753-((x754<x755)>>x756));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x801 = INT64_MIN;
	static uint32_t x802 = 204876575U;
	uint8_t x803 = 2U;
	volatile int64_t t17 = INT64_MIN;

	t17 = (x801-((x802<x803)>>x804));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x817 = INT64_MAX;
	volatile uint8_t x818 = 74U;
	static uint8_t x820 = 18U;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x817-((x818<x819)>>x820));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x849 = -1;
	int16_t x850 = 25;
	int16_t x851 = -5;
	uint32_t x852 = 0U;
	static volatile int32_t t19 = 7245572;

	t19 = (x849-((x850<x851)>>x852));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x877 = -1;
	int32_t x878 = INT32_MIN;
	int16_t x879 = INT16_MIN;
	int16_t x880 = 2;
	static int32_t t20 = 122;

	t20 = (x877-((x878<x879)>>x880));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x933 = INT64_MIN;
	volatile int8_t x934 = INT8_MIN;
	uint8_t x935 = 4U;
	volatile int64_t t21 = INT64_MIN;

	t21 = (x933-((x934<x935)>>x936));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x945 = INT8_MIN;
	static int64_t x947 = -6LL;
	volatile uint8_t x948 = 15U;
	volatile int32_t t22 = -123;

	t22 = (x945-((x946<x947)>>x948));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x1005 = 171U;
	int64_t x1006 = INT64_MIN;
	int16_t x1007 = 1259;
	int8_t x1008 = 7;
	static uint32_t t23 = 231057923U;

	t23 = (x1005-((x1006<x1007)>>x1008));

	if (t23 != 171U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1013 = UINT64_MAX;
	int16_t x1014 = -15;
	volatile uint64_t x1016 = 26LLU;

	t24 = (x1013-((x1014<x1015)>>x1016));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1017 = -4;
	uint64_t x1018 = 73150LLU;
	volatile int32_t x1019 = INT32_MAX;
	uint8_t x1020 = 7U;
	volatile int32_t t25 = 2022;

	t25 = (x1017-((x1018<x1019)>>x1020));

	if (t25 != -4) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x1037 = 6;
	uint16_t x1038 = UINT16_MAX;
	uint16_t x1039 = UINT16_MAX;
	int8_t x1040 = 0;
	volatile int32_t t26 = 7518320;

	t26 = (x1037-((x1038<x1039)>>x1040));

	if (t26 != 6) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1041 = INT16_MIN;
	int16_t x1043 = -1;
	int32_t t27 = -2808;

	t27 = (x1041-((x1042<x1043)>>x1044));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1070 = -223;
	int32_t x1072 = 8;

	t28 = (x1069-((x1070<x1071)>>x1072));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1085 = INT8_MAX;
	volatile int32_t x1086 = INT32_MAX;
	volatile uint8_t x1088 = 26U;
	static volatile int32_t t29 = -3912;

	t29 = (x1085-((x1086<x1087)>>x1088));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x1097 = INT8_MAX;
	uint8_t x1099 = UINT8_MAX;
	uint8_t x1100 = 4U;
	int32_t t30 = 167453;

	t30 = (x1097-((x1098<x1099)>>x1100));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1109 = UINT32_MAX;
	uint32_t x1110 = 147475066U;
	int64_t x1111 = INT64_MIN;
	uint8_t x1112 = 4U;
	uint32_t t31 = UINT32_MAX;

	t31 = (x1109-((x1110<x1111)>>x1112));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1125 = 255U;
	int32_t x1126 = -1;
	int64_t x1127 = INT64_MIN;
	uint32_t x1128 = 6U;
	volatile int32_t t32 = -1;

	t32 = (x1125-((x1126<x1127)>>x1128));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x1130 = -1;
	volatile int16_t x1131 = -63;
	volatile int32_t t33 = 1691633;

	t33 = (x1129-((x1130<x1131)>>x1132));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x1149 = INT32_MIN;
	static int64_t x1150 = INT64_MAX;
	uint32_t x1151 = 390321251U;
	volatile uint8_t x1152 = 0U;

	t34 = (x1149-((x1150<x1151)>>x1152));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1161 = 536U;
	uint64_t x1162 = UINT64_MAX;
	int8_t x1163 = 9;
	static int32_t t35 = 840476;

	t35 = (x1161-((x1162<x1163)>>x1164));

	if (t35 != 536) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1197 = INT32_MIN;
	static uint8_t x1198 = UINT8_MAX;
	int64_t x1199 = INT64_MAX;
	int16_t x1200 = 2;

	t36 = (x1197-((x1198<x1199)>>x1200));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1206 = 20313LL;
	volatile uint16_t x1207 = UINT16_MAX;
	volatile uint8_t x1208 = 1U;

	t37 = (x1205-((x1206<x1207)>>x1208));

	if (t37 != 7) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x1213 = 1131363725209349672LLU;
	int32_t x1215 = INT32_MAX;
	int8_t x1216 = 6;
	uint64_t t38 = 5007882LLU;

	t38 = (x1213-((x1214<x1215)>>x1216));

	if (t38 != 1131363725209349672LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1265 = 17954;
	int32_t x1266 = -1;
	uint32_t x1267 = 880311U;
	volatile int8_t x1268 = 0;

	t39 = (x1265-((x1266<x1267)>>x1268));

	if (t39 != 17954) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1337 = 73U;
	uint64_t x1338 = 463981LLU;
	static int32_t x1339 = 9968;
	static uint8_t x1340 = 2U;
	volatile int32_t t40 = 189;

	t40 = (x1337-((x1338<x1339)>>x1340));

	if (t40 != 73) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1349 = INT8_MIN;
	int32_t x1350 = INT32_MIN;
	static volatile uint16_t x1351 = 1896U;
	static uint8_t x1352 = 6U;

	t41 = (x1349-((x1350<x1351)>>x1352));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1449 = 74U;
	int16_t x1450 = INT16_MAX;
	uint16_t x1452 = 0U;
	volatile uint32_t t42 = 561U;

	t42 = (x1449-((x1450<x1451)>>x1452));

	if (t42 != 73U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1497 = INT8_MIN;
	uint64_t x1498 = UINT64_MAX;
	static int32_t x1499 = INT32_MIN;
	int64_t x1500 = 13LL;
	int32_t t43 = 3246256;

	t43 = (x1497-((x1498<x1499)>>x1500));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x1537 = -1;
	int8_t x1538 = -1;
	uint32_t x1539 = UINT32_MAX;
	volatile uint8_t x1540 = 2U;
	volatile int32_t t44 = -502;

	t44 = (x1537-((x1538<x1539)>>x1540));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1557 = INT64_MIN;
	static int64_t x1558 = INT64_MAX;
	static uint8_t x1559 = 0U;
	static volatile uint16_t x1560 = 3U;
	int64_t t45 = INT64_MIN;

	t45 = (x1557-((x1558<x1559)>>x1560));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x1567 = -1;
	static uint8_t x1568 = 0U;
	volatile int32_t t46 = 218;

	t46 = (x1565-((x1566<x1567)>>x1568));

	if (t46 != 65534) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x1569 = INT32_MIN;

	t47 = (x1569-((x1570<x1571)>>x1572));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1601 = 16615698844394LLU;
	uint8_t x1604 = 6U;
	volatile uint64_t t48 = 4050LLU;

	t48 = (x1601-((x1602<x1603)>>x1604));

	if (t48 != 16615698844394LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1617 = -1;
	volatile uint32_t x1618 = 29U;
	volatile int16_t x1619 = INT16_MIN;
	volatile int8_t x1620 = 2;
	int32_t t49 = -384;

	t49 = (x1617-((x1618<x1619)>>x1620));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1649 = 2093844U;
	uint32_t x1650 = 15799U;
	int16_t x1651 = INT16_MIN;
	uint8_t x1652 = 0U;

	t50 = (x1649-((x1650<x1651)>>x1652));

	if (t50 != 2093843U) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x1685 = INT64_MAX;
	static volatile int64_t x1686 = INT64_MIN;
	static uint16_t x1688 = 0U;
	volatile int64_t t51 = INT64_MAX;

	t51 = (x1685-((x1686<x1687)>>x1688));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1717 = INT8_MAX;
	int32_t x1719 = -39716811;
	volatile int8_t x1720 = 0;
	volatile int32_t t52 = 3473395;

	t52 = (x1717-((x1718<x1719)>>x1720));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1721 = 0U;
	uint8_t x1723 = 0U;
	uint32_t x1724 = 1U;
	volatile int32_t t53 = 1;

	t53 = (x1721-((x1722<x1723)>>x1724));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x1745 = INT32_MIN;
	volatile int64_t x1746 = INT64_MIN;
	int32_t x1748 = 26;
	volatile int32_t t54 = INT32_MIN;

	t54 = (x1745-((x1746<x1747)>>x1748));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1796 = 0;
	volatile int32_t t55 = -124337272;

	t55 = (x1793-((x1794<x1795)>>x1796));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x1801 = -1;
	int16_t x1802 = INT16_MIN;
	volatile uint16_t x1803 = 12U;
	int32_t t56 = -83196624;

	t56 = (x1801-((x1802<x1803)>>x1804));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1813 = INT8_MIN;
	uint8_t x1816 = 1U;

	t57 = (x1813-((x1814<x1815)>>x1816));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1833 = 4788404U;
	volatile uint16_t x1834 = UINT16_MAX;
	static uint32_t x1836 = 5U;
	volatile uint32_t t58 = 415U;

	t58 = (x1833-((x1834<x1835)>>x1836));

	if (t58 != 4788404U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1837 = INT32_MIN;
	int16_t x1839 = INT16_MIN;
	volatile int64_t x1840 = 13LL;
	volatile int32_t t59 = INT32_MIN;

	t59 = (x1837-((x1838<x1839)>>x1840));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x1885 = INT8_MIN;
	int64_t x1886 = -1LL;
	volatile int64_t x1887 = INT64_MAX;
	int32_t t60 = 10751847;

	t60 = (x1885-((x1886<x1887)>>x1888));

	if (t60 != -129) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x1890 = INT32_MIN;
	int16_t x1891 = INT16_MAX;
	static uint8_t x1892 = 26U;
	static volatile int64_t t61 = INT64_MIN;

	t61 = (x1889-((x1890<x1891)>>x1892));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1897 = 365;
	int8_t x1898 = -1;
	volatile uint64_t x1899 = 7LLU;

	t62 = (x1897-((x1898<x1899)>>x1900));

	if (t62 != 365) { NG(); } else { ; }
	
}

void f63(void) {


	t63 = (x1905-((x1906<x1907)>>x1908));

	if (t63 != -3164160LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1925 = -258227378191860LL;
	int64_t x1927 = INT64_MAX;
	volatile int64_t t64 = 172860646LL;

	t64 = (x1925-((x1926<x1927)>>x1928));

	if (t64 != -258227378191860LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x1949 = INT16_MIN;
	static int32_t x1950 = INT32_MIN;
	uint64_t x1951 = 21682736970799LLU;
	volatile int8_t x1952 = 22;
	volatile int32_t t65 = -58116;

	t65 = (x1949-((x1950<x1951)>>x1952));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x1957 = -139;
	uint8_t x1958 = 76U;
	uint32_t x1959 = UINT32_MAX;

	t66 = (x1957-((x1958<x1959)>>x1960));

	if (t66 != -140) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1982 = 499U;
	static int64_t x1983 = 1LL;
	volatile int8_t x1984 = 12;
	int64_t t67 = INT64_MAX;

	t67 = (x1981-((x1982<x1983)>>x1984));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2045 = INT32_MAX;
	volatile int8_t x2046 = -1;
	uint8_t x2048 = 29U;
	volatile int32_t t68 = INT32_MAX;

	t68 = (x2045-((x2046<x2047)>>x2048));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x2245 = 18;
	uint32_t x2246 = 27886U;
	int64_t x2247 = -1LL;
	volatile int8_t x2248 = 29;
	int32_t t69 = 1;

	t69 = (x2245-((x2246<x2247)>>x2248));

	if (t69 != 18) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2273 = INT32_MAX;
	volatile int16_t x2274 = 11;
	uint64_t x2275 = 6711772798007548LLU;
	int32_t t70 = INT32_MAX;

	t70 = (x2273-((x2274<x2275)>>x2276));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2297 = INT8_MAX;
	static int32_t x2298 = 2073;
	int32_t x2299 = INT32_MIN;
	uint8_t x2300 = 2U;

	t71 = (x2297-((x2298<x2299)>>x2300));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2334 = 7729416302999851LL;
	volatile int16_t x2335 = -1;
	uint16_t x2336 = 10U;
	uint64_t t72 = UINT64_MAX;

	t72 = (x2333-((x2334<x2335)>>x2336));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x2407 = 234955232992LL;
	static volatile int32_t t73 = -979072;

	t73 = (x2405-((x2406<x2407)>>x2408));

	if (t73 != -152345) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x2409 = -1LL;
	int16_t x2410 = -467;
	uint8_t x2411 = UINT8_MAX;
	uint32_t x2412 = 0U;
	volatile int64_t t74 = -97369828855112LL;

	t74 = (x2409-((x2410<x2411)>>x2412));

	if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2418 = 229;
	static uint8_t x2420 = 24U;
	int32_t t75 = 75362993;

	t75 = (x2417-((x2418<x2419)>>x2420));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2437 = -1LL;
	uint32_t x2438 = UINT32_MAX;
	int8_t x2439 = -1;
	uint8_t x2440 = 12U;
	static volatile int64_t t76 = 10292LL;

	t76 = (x2437-((x2438<x2439)>>x2440));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x2457 = INT32_MAX;
	int8_t x2458 = INT8_MIN;
	int32_t x2459 = INT32_MIN;
	uint16_t x2460 = 6U;
	int32_t t77 = INT32_MAX;

	t77 = (x2457-((x2458<x2459)>>x2460));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x2461 = INT16_MAX;
	int32_t x2462 = 1;
	volatile int8_t x2463 = INT8_MAX;
	int8_t x2464 = 11;
	static volatile int32_t t78 = 60;

	t78 = (x2461-((x2462<x2463)>>x2464));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2593 = 61;
	volatile int16_t x2594 = 2;
	volatile int8_t x2595 = -1;
	uint8_t x2596 = 2U;
	volatile int32_t t79 = 6048942;

	t79 = (x2593-((x2594<x2595)>>x2596));

	if (t79 != 61) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2629 = UINT16_MAX;
	int8_t x2631 = INT8_MIN;
	uint8_t x2632 = 4U;
	volatile int32_t t80 = 1;

	t80 = (x2629-((x2630<x2631)>>x2632));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2657 = INT32_MIN;
	volatile int16_t x2660 = 14;

	t81 = (x2657-((x2658<x2659)>>x2660));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2693 = 3U;
	int32_t x2694 = INT32_MIN;
	int64_t x2695 = -1LL;
	volatile uint8_t x2696 = 0U;
	volatile int32_t t82 = 306478801;

	t82 = (x2693-((x2694<x2695)>>x2696));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x2749 = 13904U;
	uint32_t x2750 = 15576905U;
	static int64_t x2751 = -1LL;
	uint8_t x2752 = 1U;
	int32_t t83 = -155196;

	t83 = (x2749-((x2750<x2751)>>x2752));

	if (t83 != 13904) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x2785 = 241U;
	static int32_t x2786 = -1;
	volatile int16_t x2787 = -1;
	volatile int64_t x2788 = 0LL;
	volatile int32_t t84 = -1;

	t84 = (x2785-((x2786<x2787)>>x2788));

	if (t84 != 241) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x2789 = -1;
	int8_t x2790 = -49;
	int16_t x2791 = INT16_MIN;
	int32_t x2792 = 16;

	t85 = (x2789-((x2790<x2791)>>x2792));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x2793 = INT8_MIN;
	volatile int8_t x2795 = INT8_MIN;

	t86 = (x2793-((x2794<x2795)>>x2796));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x2829 = -1;
	int16_t x2830 = INT16_MAX;
	static int8_t x2831 = -1;
	int8_t x2832 = 9;

	t87 = (x2829-((x2830<x2831)>>x2832));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2845 = UINT64_MAX;
	int16_t x2846 = 6672;
	static int32_t x2847 = INT32_MIN;
	static int64_t x2848 = 5LL;
	volatile uint64_t t88 = UINT64_MAX;

	t88 = (x2845-((x2846<x2847)>>x2848));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2937 = 495LLU;
	int8_t x2938 = -1;
	int32_t x2939 = INT32_MIN;
	int8_t x2940 = 0;
	volatile uint64_t t89 = 10168575305LLU;

	t89 = (x2937-((x2938<x2939)>>x2940));

	if (t89 != 495LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x2953 = INT8_MIN;
	int16_t x2954 = -1;
	volatile int64_t x2955 = INT64_MAX;

	t90 = (x2953-((x2954<x2955)>>x2956));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2965 = 29856341;
	static int32_t x2966 = -1;
	static uint64_t x2967 = 305LLU;
	int32_t t91 = -31;

	t91 = (x2965-((x2966<x2967)>>x2968));

	if (t91 != 29856341) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3026 = -1;
	static int32_t x3027 = 21;

	t92 = (x3025-((x3026<x3027)>>x3028));

	if (t92 != -8275664) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3101 = 58;
	int64_t x3102 = INT64_MAX;
	uint64_t x3104 = 7LLU;
	volatile int32_t t93 = -99;

	t93 = (x3101-((x3102<x3103)>>x3104));

	if (t93 != 58) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x3121 = 8;
	static volatile int8_t x3122 = INT8_MAX;
	static uint8_t x3123 = 2U;
	uint16_t x3124 = 11U;
	volatile int32_t t94 = 60925;

	t94 = (x3121-((x3122<x3123)>>x3124));

	if (t94 != 8) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x3127 = -1;
	int32_t x3128 = 0;
	volatile int32_t t95 = -158609;

	t95 = (x3125-((x3126<x3127)>>x3128));

	if (t95 != 5) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x3144 = 2;
	int32_t t96 = -68108265;

	t96 = (x3141-((x3142<x3143)>>x3144));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3157 = INT16_MIN;
	uint8_t x3158 = 55U;
	uint16_t x3159 = 1035U;
	int32_t t97 = 1866821;

	t97 = (x3157-((x3158<x3159)>>x3160));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3213 = -1;
	volatile uint8_t x3214 = 77U;
	volatile uint32_t x3215 = 805125598U;
	uint64_t x3216 = 1LLU;
	static volatile int32_t t98 = 3480;

	t98 = (x3213-((x3214<x3215)>>x3216));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3218 = INT16_MIN;
	int64_t x3220 = 1LL;

	t99 = (x3217-((x3218<x3219)>>x3220));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

