
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = INT64_MIN;
int64_t x88 = 120156777421587230LL;
uint64_t x101 = UINT64_MAX;
int16_t x102 = 4;
int32_t x128 = INT32_MIN;
volatile int8_t x182 = 31;
volatile int16_t x183 = -1;
static volatile int64_t x285 = INT64_MAX;
volatile int8_t x286 = 1;
uint16_t x288 = 21U;
static volatile int8_t x345 = 1;
int16_t x398 = 15;
int32_t t9 = 78709;
volatile int64_t x493 = 1196799184575392LL;
int16_t x494 = 3;
static uint32_t x496 = UINT32_MAX;
uint16_t x537 = 18U;
uint8_t x722 = 0U;
static uint8_t x723 = 2U;
int16_t x724 = -1;
volatile uint16_t x794 = 1U;
int16_t x801 = INT16_MAX;
int32_t x849 = INT32_MAX;
uint8_t x850 = 3U;
uint16_t x940 = UINT16_MAX;
uint32_t t17 = 329356573U;
uint64_t x957 = 80320571LLU;
static uint64_t t19 = 50807538920LLU;
uint32_t x1033 = 135U;
uint64_t x1176 = 46752294LLU;
int16_t x1345 = 19;
int32_t t23 = -253;
uint16_t x1366 = 46U;
volatile int32_t t27 = 6989;
static volatile int32_t x1661 = 496722522;
int8_t x1669 = 3;
uint8_t x1670 = 3U;
volatile uint32_t t30 = 741U;
uint64_t x1744 = 27413021LLU;
static volatile uint64_t t32 = 9660230522LLU;
volatile int32_t x1876 = INT32_MIN;
volatile int64_t t34 = -145151979727921558LL;
static uint64_t x1909 = UINT64_MAX;
static int64_t x1969 = 1632432LL;
int16_t x1971 = INT16_MIN;
int64_t x1983 = -1LL;
volatile int16_t x1984 = INT16_MIN;
volatile int64_t t37 = 83966LL;
uint8_t x2011 = 2U;
static int32_t x2107 = 1;
volatile uint8_t x2270 = 2U;
int8_t x2286 = 19;
volatile int8_t x2287 = -1;
uint32_t x2326 = 1U;
uint32_t x2389 = 0U;
volatile uint64_t x2390 = 14LLU;
static int64_t t47 = 41460698313992222LL;
int16_t x3057 = 2;
volatile int32_t x3060 = INT32_MIN;
int32_t t48 = INT32_MIN;
uint16_t x3064 = UINT16_MAX;
int64_t t50 = -16935391166808LL;
volatile int16_t x3073 = 990;
int32_t t51 = 0;
int32_t x3203 = INT32_MIN;
static uint8_t x3217 = UINT8_MAX;
static volatile int32_t t54 = -45;
int16_t x3858 = 0;
int16_t x3860 = 5447;
int16_t x3888 = INT16_MIN;
uint8_t x3930 = 13U;
static int32_t t62 = 3551;
uint64_t x4405 = 6122692292059189322LLU;
uint32_t t67 = 0U;
static uint64_t x4443 = 1608016919813LLU;
volatile uint64_t t68 = 3137372707LLU;
static uint8_t x4461 = UINT8_MAX;
int32_t t70 = 90;
static int16_t x4603 = 1830;
uint32_t t73 = 3250401U;
int8_t x4748 = INT8_MAX;
static volatile int32_t t75 = -1003;
int16_t x4793 = INT16_MAX;
uint64_t x4802 = 2LLU;
uint8_t x4829 = UINT8_MAX;
uint64_t x4991 = UINT64_MAX;
uint64_t t82 = 1614117LLU;
int32_t x5101 = 1;
static uint32_t x5102 = 0U;
volatile int32_t t83 = 6;
static int64_t x5333 = 582LL;
uint8_t x5334 = 9U;
int8_t x5356 = INT8_MAX;
static uint64_t x5377 = UINT64_MAX;
int32_t x5380 = INT32_MAX;
static uint32_t x5390 = 10U;
int16_t x5462 = 26;
int16_t x5625 = INT16_MAX;
int32_t x5638 = 19;
uint16_t x5639 = 5366U;
int64_t x5653 = 1849547068LL;
int16_t x5707 = -1;
uint64_t t96 = 16829374642LLU;
int64_t x5909 = 524LL;
uint8_t x5911 = 82U;
uint16_t x5918 = 0U;
static uint64_t x5921 = UINT64_MAX;
volatile uint64_t t101 = 1109045532524LLU;
volatile uint32_t t102 = 12679U;
static int32_t x6073 = 465;
static uint64_t x6074 = 30LLU;
int16_t x6076 = -1;
volatile uint64_t t104 = 913852757910864LLU;
int8_t x6310 = 0;
uint16_t x6311 = 174U;
uint8_t x6412 = 12U;
int16_t x6438 = 0;
volatile uint32_t t110 = 21531U;
static uint8_t x6455 = UINT8_MAX;
volatile uint16_t x6456 = 1U;
static int16_t x6639 = INT16_MAX;
static volatile uint64_t t115 = 1017LLU;
static uint16_t x6669 = 178U;
static volatile uint64_t t117 = 10465633256108LLU;
volatile int16_t x6771 = INT16_MAX;
uint8_t x7030 = 2U;
static int8_t x7053 = 1;
uint8_t x7054 = 3U;
static int32_t x7170 = 1;
int64_t x7171 = INT64_MAX;
volatile int32_t x7187 = 11575;
int8_t x7290 = 16;
uint64_t t130 = 26065887064635479LLU;
static uint64_t x7293 = 1806342LLU;
int16_t x7418 = 31;
int16_t x7420 = INT16_MIN;
int32_t x7451 = -218866606;
int64_t t135 = 45934025512LL;
int16_t x7510 = 15;
volatile int64_t x7512 = 9186095665639462LL;
volatile int64_t x7524 = 897580LL;
volatile int64_t t137 = 98867457515595LL;
volatile uint64_t x7537 = 4422105757806386LLU;
static int16_t x7538 = 10;
static volatile uint32_t x7641 = UINT32_MAX;
static uint64_t x7644 = 16091LLU;
uint8_t x7717 = 1U;
int64_t x7755 = INT64_MIN;
uint64_t x7756 = 2699117331188LLU;
uint32_t x7881 = 1159403597U;
uint8_t x7884 = 52U;
int8_t x7946 = 9;
volatile int32_t t147 = -1387;
static volatile uint16_t x8006 = 7U;
volatile uint32_t x8082 = 1U;
static uint16_t x8110 = 1U;
uint8_t x8200 = UINT8_MAX;
int32_t t152 = -1;
int8_t x8220 = INT8_MIN;
int8_t x8489 = INT8_MAX;
int8_t x8495 = INT8_MIN;
volatile int64_t t159 = -43918873LL;
uint64_t x8517 = 2100248465236LLU;
uint8_t x8518 = 22U;
uint8_t x8533 = 6U;
uint32_t x8547 = UINT32_MAX;
uint64_t x8827 = UINT64_MAX;
static volatile int32_t t164 = -159;
int32_t t165 = -22;
uint32_t x9052 = 283812U;
uint32_t t168 = 1U;
uint64_t x9298 = 0LLU;
static int64_t x9299 = -1LL;
volatile int16_t x9300 = 1827;
int64_t x9339 = -724663123LL;
volatile int8_t x9396 = INT8_MAX;
volatile int64_t t171 = 13804165743088018LL;
volatile int32_t t176 = 29893;
static int32_t x9675 = -1;
int64_t t179 = -34319166252290188LL;
int16_t x9747 = INT16_MIN;
static int32_t t181 = -45270549;
int64_t x9855 = -1613223427LL;
volatile uint8_t x10006 = 0U;
volatile uint8_t x10232 = 24U;
int16_t x10240 = 1453;
int32_t t190 = 27;
uint16_t x10300 = UINT16_MAX;
static uint8_t x10306 = 4U;
int16_t x10308 = -1;
uint16_t x10402 = 42U;
volatile uint32_t x10445 = 11U;
static volatile int16_t x10447 = INT16_MIN;
int16_t x10540 = INT16_MIN;
static int32_t t198 = 21131;


void f0(void) {
    	int64_t x1 = 6271929276LL;
	static uint8_t x2 = 10U;
	static volatile int64_t x3 = -1LL;
	int16_t x4 = INT16_MIN;
	int64_t t0 = 163LL;

    t0 = (((x1>>x2)%x3)^x4);

    if (t0 != -32768LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x37 = 307;
	uint8_t x38 = 0U;
	volatile int64_t x39 = -1LL;
	int64_t x40 = INT64_MIN;

    t1 = (((x37>>x38)%x39)^x40);

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x85 = UINT16_MAX;
	int8_t x86 = 2;
	int8_t x87 = 6;
	int64_t t2 = -67710760074LL;

    t2 = (((x85>>x86)%x87)^x88);

    if (t2 != 120156777421587229LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x103 = 10U;
	int8_t x104 = INT8_MAX;
	static uint64_t t3 = 89023LLU;

    t3 = (((x101>>x102)%x103)^x104);

    if (t3 != 122LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x125 = UINT64_MAX;
	uint8_t x126 = 14U;
	uint8_t x127 = UINT8_MAX;
	static uint64_t t4 = 1187488689LLU;

    t4 = (((x125>>x126)%x127)^x128);

    if (t4 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x181 = 10688U;
	uint16_t x184 = 183U;
	static volatile uint32_t t5 = 910U;

    t5 = (((x181>>x182)%x183)^x184);

    if (t5 != 183U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x287 = 30LLU;
	static volatile uint64_t t6 = 367590418LLU;

    t6 = (((x285>>x286)%x287)^x288);

    if (t6 != 22LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x346 = 0;
	static uint32_t x347 = 224097U;
	uint32_t x348 = 0U;
	volatile uint32_t t7 = 7269U;

    t7 = (((x345>>x346)%x347)^x348);

    if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x397 = INT8_MAX;
	int32_t x399 = -261419990;
	volatile int16_t x400 = INT16_MIN;
	volatile int32_t t8 = -5;

    t8 = (((x397>>x398)%x399)^x400);

    if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x425 = 1661078;
	uint8_t x426 = 3U;
	int32_t x427 = -34574947;
	static uint16_t x428 = 54U;

    t9 = (((x425>>x426)%x427)^x428);

    if (t9 != 207652) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x495 = -1;
	int64_t t10 = 1025858LL;

    t10 = (((x493>>x494)%x495)^x496);

    if (t10 != 4294967295LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x538 = 27;
	uint16_t x539 = 29U;
	uint8_t x540 = 51U;
	volatile int32_t t11 = 571686735;

    t11 = (((x537>>x538)%x539)^x540);

    if (t11 != 51) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x721 = 1;
	static volatile int32_t t12 = -1966;

    t12 = (((x721>>x722)%x723)^x724);

    if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x793 = 10U;
	uint8_t x795 = UINT8_MAX;
	uint64_t x796 = 2549247658LLU;
	volatile uint64_t t13 = 789477LLU;

    t13 = (((x793>>x794)%x795)^x796);

    if (t13 != 2549247663LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x802 = 0U;
	volatile uint16_t x803 = UINT16_MAX;
	uint16_t x804 = 211U;
	int32_t t14 = 335;

    t14 = (((x801>>x802)%x803)^x804);

    if (t14 != 32556) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x851 = -1;
	int16_t x852 = INT16_MAX;
	int32_t t15 = 509337;

    t15 = (((x849>>x850)%x851)^x852);

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x913 = 2386U;
	static uint8_t x914 = 7U;
	int32_t x915 = -280098686;
	int8_t x916 = -1;
	static volatile int32_t t16 = -65551;

    t16 = (((x913>>x914)%x915)^x916);

    if (t16 != -19) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x937 = 2731591U;
	uint8_t x938 = 25U;
	volatile int32_t x939 = INT32_MIN;

    t17 = (((x937>>x938)%x939)^x940);

    if (t17 != 65535U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x941 = 96LL;
	uint8_t x942 = 0U;
	volatile int16_t x943 = INT16_MIN;
	int8_t x944 = INT8_MIN;
	static int64_t t18 = 42683435LL;

    t18 = (((x941>>x942)%x943)^x944);

    if (t18 != -32LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x958 = 1;
	static volatile int16_t x959 = 9;
	static uint8_t x960 = UINT8_MAX;

    t19 = (((x957>>x958)%x959)^x960);

    if (t19 != 247LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x1034 = 0U;
	int8_t x1035 = INT8_MIN;
	int64_t x1036 = 6LL;
	volatile int64_t t20 = -18LL;

    t20 = (((x1033>>x1034)%x1035)^x1036);

    if (t20 != 129LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x1065 = 20U;
	int8_t x1066 = 22;
	int8_t x1067 = -1;
	uint64_t x1068 = 177LLU;
	volatile uint64_t t21 = 575297785682214257LLU;

    t21 = (((x1065>>x1066)%x1067)^x1068);

    if (t21 != 177LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x1173 = INT16_MAX;
	static uint16_t x1174 = 7U;
	int16_t x1175 = INT16_MIN;
	uint64_t t22 = 255659426491388LLU;

    t22 = (((x1173>>x1174)%x1175)^x1176);

    if (t22 != 46752473LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x1346 = 13;
	int8_t x1347 = -1;
	int16_t x1348 = -3;

    t23 = (((x1345>>x1346)%x1347)^x1348);

    if (t23 != -3) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x1365 = INT64_MAX;
	volatile int8_t x1367 = INT8_MIN;
	int32_t x1368 = INT32_MIN;
	static int64_t t24 = 117128532862239617LL;

    t24 = (((x1365>>x1366)%x1367)^x1368);

    if (t24 != -2147483521LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x1377 = 14646;
	int64_t x1378 = 23LL;
	int8_t x1379 = INT8_MAX;
	int32_t x1380 = INT32_MIN;
	volatile int32_t t25 = INT32_MIN;

    t25 = (((x1377>>x1378)%x1379)^x1380);

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x1489 = 1;
	static uint8_t x1490 = 3U;
	int64_t x1491 = -59038LL;
	volatile int8_t x1492 = 1;
	volatile int64_t t26 = 63142581879022LL;

    t26 = (((x1489>>x1490)%x1491)^x1492);

    if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1565 = 30U;
	static int8_t x1566 = 2;
	volatile int16_t x1567 = INT16_MIN;
	uint8_t x1568 = 0U;

    t27 = (((x1565>>x1566)%x1567)^x1568);

    if (t27 != 7) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x1662 = 1LL;
	volatile uint32_t x1663 = UINT32_MAX;
	uint16_t x1664 = UINT16_MAX;
	uint32_t t28 = 62U;

    t28 = (((x1661>>x1662)%x1663)^x1664);

    if (t28 != 248336082U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1671 = -141489946181063509LL;
	uint8_t x1672 = UINT8_MAX;
	int64_t t29 = 0LL;

    t29 = (((x1669>>x1670)%x1671)^x1672);

    if (t29 != 255LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x1685 = 22U;
	int8_t x1686 = 0;
	int32_t x1687 = -109;
	volatile int8_t x1688 = INT8_MAX;

    t30 = (((x1685>>x1686)%x1687)^x1688);

    if (t30 != 105U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x1737 = 48U;
	int8_t x1738 = 1;
	static uint16_t x1739 = UINT16_MAX;
	int32_t x1740 = -387;
	static int32_t t31 = -1;

    t31 = (((x1737>>x1738)%x1739)^x1740);

    if (t31 != -411) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1741 = 952U;
	volatile int8_t x1742 = 1;
	volatile int32_t x1743 = -1;

    t32 = (((x1741>>x1742)%x1743)^x1744);

    if (t32 != 27413021LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x1873 = INT64_MAX;
	static uint8_t x1874 = 51U;
	int32_t x1875 = INT32_MAX;
	static volatile int64_t t33 = -698LL;

    t33 = (((x1873>>x1874)%x1875)^x1876);

    if (t33 != -2147479553LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x1889 = UINT32_MAX;
	uint8_t x1890 = 0U;
	int64_t x1891 = 8133678013711LL;
	int64_t x1892 = INT64_MIN;

    t34 = (((x1889>>x1890)%x1891)^x1892);

    if (t34 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint8_t x1910 = 0U;
	int64_t x1911 = INT64_MIN;
	int32_t x1912 = 3047057;
	uint64_t t35 = 374LLU;

    t35 = (((x1909>>x1910)%x1911)^x1912);

    if (t35 != 9223372036851728750LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x1970 = 7;
	int64_t x1972 = INT64_MIN;
	static int64_t t36 = 6209836725LL;

    t36 = (((x1969>>x1970)%x1971)^x1972);

    if (t36 != -9223372036854763055LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint32_t x1981 = 696U;
	int8_t x1982 = 0;

    t37 = (((x1981>>x1982)%x1983)^x1984);

    if (t37 != -32768LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x2009 = 1091244949164490919LLU;
	int8_t x2010 = 3;
	static volatile int8_t x2012 = INT8_MIN;
	volatile uint64_t t38 = 2091667420LLU;

    t38 = (((x2009>>x2010)%x2011)^x2012);

    if (t38 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x2105 = 0LLU;
	int8_t x2106 = 63;
	uint16_t x2108 = 1154U;
	static volatile uint64_t t39 = 53LLU;

    t39 = (((x2105>>x2106)%x2107)^x2108);

    if (t39 != 1154LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x2217 = 11U;
	uint8_t x2218 = 3U;
	static uint64_t x2219 = 70677LLU;
	static int32_t x2220 = INT32_MAX;
	uint64_t t40 = 590942LLU;

    t40 = (((x2217>>x2218)%x2219)^x2220);

    if (t40 != 2147483646LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x2269 = INT64_MAX;
	int16_t x2271 = -3;
	static int8_t x2272 = INT8_MIN;
	int64_t t41 = -400LL;

    t41 = (((x2269>>x2270)%x2271)^x2272);

    if (t41 != -127LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x2285 = 1U;
	static uint32_t x2288 = UINT32_MAX;
	volatile uint32_t t42 = UINT32_MAX;

    t42 = (((x2285>>x2286)%x2287)^x2288);

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x2325 = 845LL;
	int16_t x2327 = -1;
	int16_t x2328 = INT16_MIN;
	volatile int64_t t43 = -115100717LL;

    t43 = (((x2325>>x2326)%x2327)^x2328);

    if (t43 != -32768LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x2391 = 1054526U;
	volatile int8_t x2392 = INT8_MIN;
	static volatile uint32_t t44 = 1887135829U;

    t44 = (((x2389>>x2390)%x2391)^x2392);

    if (t44 != 4294967168U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x2401 = INT8_MAX;
	uint8_t x2402 = 3U;
	static volatile int8_t x2403 = INT8_MIN;
	uint32_t x2404 = UINT32_MAX;
	static uint32_t t45 = 0U;

    t45 = (((x2401>>x2402)%x2403)^x2404);

    if (t45 != 4294967280U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x2625 = UINT8_MAX;
	int16_t x2626 = 0;
	int32_t x2627 = INT32_MAX;
	uint32_t x2628 = 26U;
	static uint32_t t46 = 189803U;

    t46 = (((x2625>>x2626)%x2627)^x2628);

    if (t46 != 229U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x2689 = UINT16_MAX;
	uint8_t x2690 = 1U;
	int64_t x2691 = INT64_MAX;
	volatile uint32_t x2692 = 43U;

    t47 = (((x2689>>x2690)%x2691)^x2692);

    if (t47 != 32724LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x3058 = 6U;
	int8_t x3059 = -1;

    t48 = (((x3057>>x3058)%x3059)^x3060);

    if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x3061 = 5952U;
	volatile int8_t x3062 = 3;
	int32_t x3063 = 846;
	volatile int32_t t49 = 132;

    t49 = (((x3061>>x3062)%x3063)^x3064);

    if (t49 != 64791) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x3069 = 353564LL;
	static uint8_t x3070 = 1U;
	int16_t x3071 = INT16_MAX;
	static int8_t x3072 = -1;

    t50 = (((x3069>>x3070)%x3071)^x3072);

    if (t50 != -12948LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x3074 = 0U;
	static uint8_t x3075 = 23U;
	uint8_t x3076 = 2U;

    t51 = (((x3073>>x3074)%x3075)^x3076);

    if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x3201 = 202591501004LLU;
	int8_t x3202 = 12;
	static int16_t x3204 = INT16_MIN;
	volatile uint64_t t52 = 5794LLU;

    t52 = (((x3201>>x3202)%x3203)^x3204);

    if (t52 != 18446744073660085839LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x3205 = INT32_MAX;
	int32_t x3206 = 1;
	static int16_t x3207 = -1;
	int64_t x3208 = 931LL;
	static volatile int64_t t53 = 55436045583LL;

    t53 = (((x3205>>x3206)%x3207)^x3208);

    if (t53 != 931LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x3218 = 7;
	int32_t x3219 = -529;
	int16_t x3220 = INT16_MAX;

    t54 = (((x3217>>x3218)%x3219)^x3220);

    if (t54 != 32766) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x3369 = 1177;
	int16_t x3370 = 25;
	static int32_t x3371 = -1;
	volatile uint8_t x3372 = 3U;
	int32_t t55 = -88454332;

    t55 = (((x3369>>x3370)%x3371)^x3372);

    if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x3661 = UINT32_MAX;
	uint8_t x3662 = 1U;
	int32_t x3663 = INT32_MIN;
	int8_t x3664 = 1;
	volatile uint32_t t56 = 13046482U;

    t56 = (((x3661>>x3662)%x3663)^x3664);

    if (t56 != 2147483646U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x3665 = 364U;
	static int8_t x3666 = 0;
	int8_t x3667 = 2;
	static int16_t x3668 = -1;
	static int32_t t57 = 19124;

    t57 = (((x3665>>x3666)%x3667)^x3668);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x3857 = UINT64_MAX;
	uint64_t x3859 = UINT64_MAX;
	uint64_t t58 = 4LLU;

    t58 = (((x3857>>x3858)%x3859)^x3860);

    if (t58 != 5447LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x3885 = INT64_MAX;
	uint8_t x3886 = 1U;
	uint16_t x3887 = 22844U;
	int64_t t59 = -1064103LL;

    t59 = (((x3885>>x3886)%x3887)^x3888);

    if (t59 != -15845LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x3929 = UINT32_MAX;
	volatile uint32_t x3931 = UINT32_MAX;
	static volatile int32_t x3932 = -1;
	uint32_t t60 = 16172228U;

    t60 = (((x3929>>x3930)%x3931)^x3932);

    if (t60 != 4294443008U) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x3969 = INT16_MAX;
	uint8_t x3970 = 1U;
	uint64_t x3971 = 2LLU;
	uint32_t x3972 = UINT32_MAX;
	uint64_t t61 = 80446LLU;

    t61 = (((x3969>>x3970)%x3971)^x3972);

    if (t61 != 4294967294LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x4049 = 0;
	int8_t x4050 = 2;
	int32_t x4051 = INT32_MIN;
	static int16_t x4052 = 0;

    t62 = (((x4049>>x4050)%x4051)^x4052);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x4093 = 696;
	static uint16_t x4094 = 1U;
	static volatile uint8_t x4095 = 7U;
	volatile int16_t x4096 = -1;
	volatile int32_t t63 = -6871409;

    t63 = (((x4093>>x4094)%x4095)^x4096);

    if (t63 != -6) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x4133 = 1U;
	int8_t x4134 = 18;
	uint32_t x4135 = 30028U;
	static uint16_t x4136 = 12217U;
	uint32_t t64 = 530329313U;

    t64 = (((x4133>>x4134)%x4135)^x4136);

    if (t64 != 12217U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x4406 = 26U;
	static uint16_t x4407 = 7U;
	static int16_t x4408 = -7743;
	volatile uint64_t t65 = 612469672144927887LLU;

    t65 = (((x4405>>x4406)%x4407)^x4408);

    if (t65 != 18446744073709543877LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int32_t x4417 = INT32_MAX;
	static uint16_t x4418 = 1U;
	static int16_t x4419 = -1;
	int64_t x4420 = -1430919453676752823LL;
	int64_t t66 = 28035054LL;

    t66 = (((x4417>>x4418)%x4419)^x4420);

    if (t66 != -1430919453676752823LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x4437 = 1U;
	int64_t x4438 = 3LL;
	int8_t x4439 = -1;
	int16_t x4440 = INT16_MIN;

    t67 = (((x4437>>x4438)%x4439)^x4440);

    if (t67 != 4294934528U) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x4441 = UINT8_MAX;
	uint64_t x4442 = 3LLU;
	int16_t x4444 = -1;

    t68 = (((x4441>>x4442)%x4443)^x4444);

    if (t68 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x4462 = 6U;
	int64_t x4463 = INT64_MIN;
	static uint64_t x4464 = 46251342LLU;
	static volatile uint64_t t69 = 25LLU;

    t69 = (((x4461>>x4462)%x4463)^x4464);

    if (t69 != 46251341LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x4497 = 7U;
	static uint8_t x4498 = 1U;
	volatile int8_t x4499 = INT8_MAX;
	int16_t x4500 = -8939;

    t70 = (((x4497>>x4498)%x4499)^x4500);

    if (t70 != -8938) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x4585 = 88004103U;
	int8_t x4586 = 7;
	int32_t x4587 = -31;
	int64_t x4588 = INT64_MIN;
	static volatile int64_t t71 = -1095755346212LL;

    t71 = (((x4585>>x4586)%x4587)^x4588);

    if (t71 != -9223372036854088276LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x4601 = 23U;
	volatile uint64_t x4602 = 1LLU;
	static uint32_t x4604 = 35U;
	static volatile uint32_t t72 = 6968U;

    t72 = (((x4601>>x4602)%x4603)^x4604);

    if (t72 != 40U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x4641 = 71U;
	uint32_t x4642 = 6U;
	volatile int16_t x4643 = INT16_MIN;
	int8_t x4644 = 3;

    t73 = (((x4641>>x4642)%x4643)^x4644);

    if (t73 != 2U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x4745 = 12;
	static uint8_t x4746 = 11U;
	static int32_t x4747 = 13;
	static int32_t t74 = -3263;

    t74 = (((x4745>>x4746)%x4747)^x4748);

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int8_t x4769 = INT8_MAX;
	static uint16_t x4770 = 2U;
	int16_t x4771 = -875;
	int32_t x4772 = -1;

    t75 = (((x4769>>x4770)%x4771)^x4772);

    if (t75 != -32) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x4794 = 0U;
	int16_t x4795 = -4176;
	volatile int8_t x4796 = -25;
	volatile int32_t t76 = -2;

    t76 = (((x4793>>x4794)%x4795)^x4796);

    if (t76 != -3544) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x4801 = 5U;
	int16_t x4803 = INT16_MIN;
	static int16_t x4804 = INT16_MAX;
	int32_t t77 = -1618203;

    t77 = (((x4801>>x4802)%x4803)^x4804);

    if (t77 != 32766) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x4830 = 0;
	volatile int8_t x4831 = -13;
	volatile int16_t x4832 = INT16_MIN;
	int32_t t78 = 0;

    t78 = (((x4829>>x4830)%x4831)^x4832);

    if (t78 != -32760) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x4857 = INT16_MAX;
	int32_t x4858 = 5;
	uint16_t x4859 = 114U;
	uint32_t x4860 = UINT32_MAX;
	uint32_t t79 = 140337U;

    t79 = (((x4857>>x4858)%x4859)^x4860);

    if (t79 != 4294967184U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x4933 = 1218;
	uint8_t x4934 = 15U;
	int8_t x4935 = INT8_MIN;
	static int32_t x4936 = INT32_MIN;
	static volatile int32_t t80 = INT32_MIN;

    t80 = (((x4933>>x4934)%x4935)^x4936);

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x4961 = 2671824;
	uint64_t x4962 = 2LLU;
	uint16_t x4963 = 23614U;
	static int16_t x4964 = -3;
	int32_t t81 = -100;

    t81 = (((x4961>>x4962)%x4963)^x4964);

    if (t81 != -6767) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x4989 = 32206;
	uint8_t x4990 = 0U;
	int8_t x4992 = -5;

    t82 = (((x4989>>x4990)%x4991)^x4992);

    if (t82 != 18446744073709519413LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x5103 = UINT8_MAX;
	int8_t x5104 = 0;

    t83 = (((x5101>>x5102)%x5103)^x5104);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x5335 = -1;
	int16_t x5336 = INT16_MIN;
	volatile int64_t t84 = 59262LL;

    t84 = (((x5333>>x5334)%x5335)^x5336);

    if (t84 != -32768LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x5353 = 4U;
	volatile uint8_t x5354 = 1U;
	volatile uint16_t x5355 = 24120U;
	int32_t t85 = -1457160;

    t85 = (((x5353>>x5354)%x5355)^x5356);

    if (t85 != 125) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x5378 = 4U;
	int64_t x5379 = 63271404021LL;
	volatile uint64_t t86 = 7975505758497387109LLU;

    t86 = (((x5377>>x5378)%x5379)^x5380);

    if (t86 != 38767470661LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x5381 = 21522171799529348LLU;
	int16_t x5382 = 47;
	volatile int16_t x5383 = INT16_MIN;
	volatile int64_t x5384 = INT64_MAX;
	static uint64_t t87 = 6953312417173LLU;

    t87 = (((x5381>>x5382)%x5383)^x5384);

    if (t87 != 9223372036854775655LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x5389 = UINT16_MAX;
	static int32_t x5391 = -1;
	static int32_t x5392 = INT32_MAX;
	static int32_t t88 = INT32_MAX;

    t88 = (((x5389>>x5390)%x5391)^x5392);

    if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x5441 = 54U;
	uint32_t x5442 = 1U;
	uint16_t x5443 = 3021U;
	int64_t x5444 = -34265568137954LL;
	static int64_t t89 = 0LL;

    t89 = (((x5441>>x5442)%x5443)^x5444);

    if (t89 != -34265568137979LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x5461 = UINT16_MAX;
	uint32_t x5463 = 230794U;
	int16_t x5464 = INT16_MAX;
	volatile uint32_t t90 = 345304047U;

    t90 = (((x5461>>x5462)%x5463)^x5464);

    if (t90 != 32767U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x5609 = 113613549U;
	volatile int32_t x5610 = 15;
	static uint16_t x5611 = 2U;
	int64_t x5612 = INT64_MIN;
	static int64_t t91 = -241424921LL;

    t91 = (((x5609>>x5610)%x5611)^x5612);

    if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x5626 = 0;
	volatile int32_t x5627 = -80;
	static int8_t x5628 = -1;
	volatile int32_t t92 = 0;

    t92 = (((x5625>>x5626)%x5627)^x5628);

    if (t92 != -48) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x5637 = 80U;
	int16_t x5640 = INT16_MIN;
	volatile uint32_t t93 = 470195U;

    t93 = (((x5637>>x5638)%x5639)^x5640);

    if (t93 != 4294934528U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x5654 = 0U;
	int8_t x5655 = -12;
	uint32_t x5656 = 183679070U;
	static volatile int64_t t94 = 527741843706LL;

    t94 = (((x5653>>x5654)%x5655)^x5656);

    if (t94 != 183679066LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x5665 = 1162U;
	volatile uint16_t x5666 = 7U;
	uint8_t x5667 = 29U;
	int64_t x5668 = INT64_MAX;
	int64_t t95 = -259LL;

    t95 = (((x5665>>x5666)%x5667)^x5668);

    if (t95 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x5705 = UINT16_MAX;
	volatile uint16_t x5706 = 1U;
	static volatile uint64_t x5708 = 1535150329248462LLU;

    t96 = (((x5705>>x5706)%x5707)^x5708);

    if (t96 != 1535150329248462LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x5709 = UINT32_MAX;
	uint32_t x5710 = 2U;
	static int64_t x5711 = INT64_MIN;
	int64_t x5712 = 2706748914310123720LL;
	volatile int64_t t97 = -1612LL;

    t97 = (((x5709>>x5710)%x5711)^x5712);

    if (t97 != 2706748913852804919LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x5797 = 4534LL;
	volatile int8_t x5798 = 10;
	uint32_t x5799 = 4055142U;
	int64_t x5800 = -52LL;
	static volatile int64_t t98 = -107061767LL;

    t98 = (((x5797>>x5798)%x5799)^x5800);

    if (t98 != -56LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x5910 = 10U;
	volatile int16_t x5912 = INT16_MIN;
	volatile int64_t t99 = 102874802395466840LL;

    t99 = (((x5909>>x5910)%x5911)^x5912);

    if (t99 != -32768LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x5917 = 0;
	static int32_t x5919 = -35321748;
	static int64_t x5920 = INT64_MIN;
	volatile int64_t t100 = INT64_MIN;

    t100 = (((x5917>>x5918)%x5919)^x5920);

    if (t100 != INT64_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x5922 = 3U;
	int8_t x5923 = INT8_MAX;
	int16_t x5924 = INT16_MAX;

    t101 = (((x5921>>x5922)%x5923)^x5924);

    if (t101 != 32736LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x6001 = 821U;
	uint8_t x6002 = 10U;
	uint32_t x6003 = 516U;
	int8_t x6004 = INT8_MAX;

    t102 = (((x6001>>x6002)%x6003)^x6004);

    if (t102 != 127U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x6075 = UINT32_MAX;
	static uint32_t t103 = UINT32_MAX;

    t103 = (((x6073>>x6074)%x6075)^x6076);

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x6153 = UINT64_MAX;
	uint8_t x6154 = 3U;
	volatile int32_t x6155 = -1;
	static int16_t x6156 = INT16_MIN;

    t104 = (((x6153>>x6154)%x6155)^x6156);

    if (t104 != 16140901064495890431LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x6177 = UINT16_MAX;
	volatile int16_t x6178 = 0;
	static int32_t x6179 = INT32_MAX;
	int8_t x6180 = -1;
	volatile int32_t t105 = 7182925;

    t105 = (((x6177>>x6178)%x6179)^x6180);

    if (t105 != -65536) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x6193 = INT16_MAX;
	int8_t x6194 = 1;
	int32_t x6195 = -1;
	volatile uint8_t x6196 = 10U;
	volatile int32_t t106 = -9382;

    t106 = (((x6193>>x6194)%x6195)^x6196);

    if (t106 != 10) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x6309 = UINT8_MAX;
	uint8_t x6312 = 0U;
	volatile int32_t t107 = 216294140;

    t107 = (((x6309>>x6310)%x6311)^x6312);

    if (t107 != 81) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x6409 = 28U;
	int8_t x6410 = 1;
	uint32_t x6411 = 3848U;
	uint32_t t108 = 5U;

    t108 = (((x6409>>x6410)%x6411)^x6412);

    if (t108 != 2U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x6437 = INT8_MAX;
	uint32_t x6439 = UINT32_MAX;
	uint8_t x6440 = 2U;
	volatile uint32_t t109 = 1418U;

    t109 = (((x6437>>x6438)%x6439)^x6440);

    if (t109 != 125U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x6441 = UINT32_MAX;
	uint32_t x6442 = 0U;
	uint8_t x6443 = 2U;
	volatile int32_t x6444 = INT32_MIN;

    t110 = (((x6441>>x6442)%x6443)^x6444);

    if (t110 != 2147483649U) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x6449 = INT32_MAX;
	int8_t x6450 = 0;
	uint64_t x6451 = UINT64_MAX;
	int16_t x6452 = 96;
	static volatile uint64_t t111 = 136380445611LLU;

    t111 = (((x6449>>x6450)%x6451)^x6452);

    if (t111 != 2147483551LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x6453 = 2480668;
	static uint8_t x6454 = 7U;
	volatile int32_t t112 = 234502328;

    t112 = (((x6453>>x6454)%x6455)^x6456);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x6605 = UINT8_MAX;
	uint8_t x6606 = 3U;
	volatile int16_t x6607 = INT16_MAX;
	int8_t x6608 = INT8_MAX;
	int32_t t113 = 37723;

    t113 = (((x6605>>x6606)%x6607)^x6608);

    if (t113 != 96) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x6637 = 10;
	static int8_t x6638 = 28;
	static int8_t x6640 = -1;
	volatile int32_t t114 = -4761156;

    t114 = (((x6637>>x6638)%x6639)^x6640);

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x6657 = 819077306817800LLU;
	uint32_t x6658 = 0U;
	volatile uint64_t x6659 = 7347343386LLU;
	int8_t x6660 = -1;

    t115 = (((x6657>>x6658)%x6659)^x6660);

    if (t115 != 18446744070896061709LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x6670 = 0U;
	volatile uint16_t x6671 = 2U;
	uint16_t x6672 = UINT16_MAX;
	static int32_t t116 = 0;

    t116 = (((x6669>>x6670)%x6671)^x6672);

    if (t116 != 65535) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x6697 = UINT16_MAX;
	volatile int16_t x6698 = 1;
	volatile uint32_t x6699 = 1768521U;
	volatile uint64_t x6700 = UINT64_MAX;

    t117 = (((x6697>>x6698)%x6699)^x6700);

    if (t117 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x6729 = INT8_MAX;
	int8_t x6730 = 0;
	int64_t x6731 = -1LL;
	uint16_t x6732 = 1097U;
	volatile int64_t t118 = -87LL;

    t118 = (((x6729>>x6730)%x6731)^x6732);

    if (t118 != 1097LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x6769 = 2;
	static uint8_t x6770 = 9U;
	int8_t x6772 = -1;
	static volatile int32_t t119 = -223;

    t119 = (((x6769>>x6770)%x6771)^x6772);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x6877 = 1;
	int32_t x6878 = 0;
	uint64_t x6879 = UINT64_MAX;
	uint32_t x6880 = UINT32_MAX;
	volatile uint64_t t120 = 721675009LLU;

    t120 = (((x6877>>x6878)%x6879)^x6880);

    if (t120 != 4294967294LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x6885 = 377U;
	uint16_t x6886 = 2U;
	static volatile int8_t x6887 = -31;
	uint16_t x6888 = 13407U;
	uint32_t t121 = 1437U;

    t121 = (((x6885>>x6886)%x6887)^x6888);

    if (t121 != 13313U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x6969 = 285;
	uint8_t x6970 = 2U;
	int32_t x6971 = -46517613;
	uint32_t x6972 = 8U;
	static uint32_t t122 = 1618647U;

    t122 = (((x6969>>x6970)%x6971)^x6972);

    if (t122 != 79U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x6973 = 56U;
	uint8_t x6974 = 7U;
	uint8_t x6975 = UINT8_MAX;
	static int32_t x6976 = -1743880;
	int32_t t123 = 1;

    t123 = (((x6973>>x6974)%x6975)^x6976);

    if (t123 != -1743880) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x7029 = 1;
	int32_t x7031 = 1842361;
	volatile int32_t x7032 = INT32_MIN;
	int32_t t124 = INT32_MIN;

    t124 = (((x7029>>x7030)%x7031)^x7032);

    if (t124 != INT32_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x7055 = UINT16_MAX;
	int32_t x7056 = 234678;
	volatile int32_t t125 = -25;

    t125 = (((x7053>>x7054)%x7055)^x7056);

    if (t125 != 234678) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x7121 = INT8_MAX;
	static volatile uint16_t x7122 = 10U;
	uint32_t x7123 = 4115080U;
	uint8_t x7124 = UINT8_MAX;
	static volatile uint32_t t126 = 3855441U;

    t126 = (((x7121>>x7122)%x7123)^x7124);

    if (t126 != 255U) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x7145 = 1489LLU;
	uint32_t x7146 = 3U;
	int32_t x7147 = INT32_MIN;
	int64_t x7148 = -8374050051LL;
	uint64_t t127 = 3452640490LLU;

    t127 = (((x7145>>x7146)%x7147)^x7148);

    if (t127 != 18446744065335501383LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x7169 = 16175108U;
	int16_t x7172 = 10;
	static int64_t t128 = 9007033403320LL;

    t128 = (((x7169>>x7170)%x7171)^x7172);

    if (t128 != 8087560LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x7185 = 332U;
	volatile uint8_t x7186 = 1U;
	int32_t x7188 = -1;
	static int32_t t129 = 10987538;

    t129 = (((x7185>>x7186)%x7187)^x7188);

    if (t129 != -167) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x7289 = 2899165522768199LLU;
	static uint16_t x7291 = 2U;
	volatile int16_t x7292 = 1;

    t130 = (((x7289>>x7290)%x7291)^x7292);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x7294 = 1U;
	int32_t x7295 = INT32_MIN;
	static uint32_t x7296 = 190755236U;
	uint64_t t131 = 2713825471LLU;

    t131 = (((x7293>>x7294)%x7295)^x7296);

    if (t131 != 190020007LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x7365 = 5428U;
	int16_t x7366 = 13;
	int8_t x7367 = -1;
	int8_t x7368 = 5;
	volatile int32_t t132 = -9;

    t132 = (((x7365>>x7366)%x7367)^x7368);

    if (t132 != 5) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x7417 = 550195LLU;
	int64_t x7419 = INT64_MIN;
	volatile uint64_t t133 = 6940750973454989548LLU;

    t133 = (((x7417>>x7418)%x7419)^x7420);

    if (t133 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x7449 = 114711U;
	int32_t x7450 = 1;
	static uint16_t x7452 = 13U;
	uint32_t t134 = 82375U;

    t134 = (((x7449>>x7450)%x7451)^x7452);

    if (t134 != 57350U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x7497 = 32U;
	static uint8_t x7498 = 1U;
	static int64_t x7499 = 160LL;
	int8_t x7500 = 31;

    t135 = (((x7497>>x7498)%x7499)^x7500);

    if (t135 != 15LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x7509 = 2862929284113695LL;
	volatile uint64_t x7511 = 31057840801411640LLU;
	volatile uint64_t t136 = 166LLU;

    t136 = (((x7509>>x7510)%x7511)^x7512);

    if (t136 != 9186010666018264LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x7521 = 13778U;
	volatile uint8_t x7522 = 2U;
	int64_t x7523 = -22150544177176LL;

    t137 = (((x7521>>x7522)%x7523)^x7524);

    if (t137 != 900952LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x7539 = INT8_MIN;
	int16_t x7540 = -1;
	uint64_t t138 = 2218LLU;

    t138 = (((x7537>>x7538)%x7539)^x7540);

    if (t138 != 18446739755246897508LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x7569 = UINT8_MAX;
	static int8_t x7570 = 1;
	static volatile int64_t x7571 = INT64_MAX;
	int64_t x7572 = INT64_MIN;
	volatile int64_t t139 = -164LL;

    t139 = (((x7569>>x7570)%x7571)^x7572);

    if (t139 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x7581 = 30685560712LLU;
	int32_t x7582 = 0;
	int64_t x7583 = INT64_MIN;
	int32_t x7584 = INT32_MIN;
	uint64_t t140 = 44896769732674816LLU;

    t140 = (((x7581>>x7582)%x7583)^x7584);

    if (t140 != 18446744042118086536LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x7633 = 2U;
	static int16_t x7634 = 14;
	uint16_t x7635 = UINT16_MAX;
	volatile int64_t x7636 = INT64_MIN;
	volatile int64_t t141 = INT64_MIN;

    t141 = (((x7633>>x7634)%x7635)^x7636);

    if (t141 != INT64_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x7642 = 13U;
	static volatile int64_t x7643 = INT64_MAX;
	volatile uint64_t t142 = 47727LLU;

    t142 = (((x7641>>x7642)%x7643)^x7644);

    if (t142 != 508196LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x7718 = 0;
	static uint32_t x7719 = 469U;
	int16_t x7720 = INT16_MIN;
	volatile uint32_t t143 = 14U;

    t143 = (((x7717>>x7718)%x7719)^x7720);

    if (t143 != 4294934529U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x7753 = 1313LL;
	volatile uint8_t x7754 = 5U;
	volatile uint64_t t144 = 1LLU;

    t144 = (((x7753>>x7754)%x7755)^x7756);

    if (t144 != 2699117331165LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x7882 = 15U;
	volatile uint16_t x7883 = UINT16_MAX;
	uint32_t t145 = 1669U;

    t145 = (((x7881>>x7882)%x7883)^x7884);

    if (t145 != 35330U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x7945 = 9628;
	int16_t x7947 = 1;
	uint64_t x7948 = 145449LLU;
	volatile uint64_t t146 = 2877LLU;

    t146 = (((x7945>>x7946)%x7947)^x7948);

    if (t146 != 145449LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x7965 = 691357;
	int64_t x7966 = 1LL;
	uint8_t x7967 = 85U;
	int8_t x7968 = INT8_MIN;

    t147 = (((x7965>>x7966)%x7967)^x7968);

    if (t147 != -60) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x8005 = 73U;
	volatile int8_t x8007 = -19;
	uint32_t x8008 = 131023U;
	volatile uint32_t t148 = 245378U;

    t148 = (((x8005>>x8006)%x8007)^x8008);

    if (t148 != 131023U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x8013 = 0U;
	uint16_t x8014 = 7U;
	int8_t x8015 = 24;
	int8_t x8016 = 0;
	volatile int32_t t149 = 6;

    t149 = (((x8013>>x8014)%x8015)^x8016);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x8081 = UINT32_MAX;
	int8_t x8083 = 3;
	uint64_t x8084 = 27492209898624LLU;
	uint64_t t150 = 37580513065190LLU;

    t150 = (((x8081>>x8082)%x8083)^x8084);

    if (t150 != 27492209898625LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x8109 = 1;
	uint16_t x8111 = 1602U;
	volatile uint32_t x8112 = 1404126U;
	static volatile uint32_t t151 = 310U;

    t151 = (((x8109>>x8110)%x8111)^x8112);

    if (t151 != 1404126U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x8197 = UINT8_MAX;
	static uint16_t x8198 = 11U;
	int8_t x8199 = INT8_MIN;

    t152 = (((x8197>>x8198)%x8199)^x8200);

    if (t152 != 255) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x8217 = UINT16_MAX;
	uint32_t x8218 = 2U;
	int64_t x8219 = INT64_MIN;
	volatile int64_t t153 = -37659828LL;

    t153 = (((x8217>>x8218)%x8219)^x8220);

    if (t153 != -16257LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x8249 = INT16_MAX;
	static uint32_t x8250 = 15U;
	volatile int16_t x8251 = -1;
	int16_t x8252 = INT16_MAX;
	static int32_t t154 = -1;

    t154 = (((x8249>>x8250)%x8251)^x8252);

    if (t154 != 32767) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x8297 = 1U;
	volatile uint8_t x8298 = 10U;
	uint32_t x8299 = 15U;
	uint64_t x8300 = 694LLU;
	volatile uint64_t t155 = 19978LLU;

    t155 = (((x8297>>x8298)%x8299)^x8300);

    if (t155 != 694LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x8373 = 58U;
	uint8_t x8374 = 24U;
	int32_t x8375 = -1;
	static int32_t x8376 = -1;
	int32_t t156 = 655854115;

    t156 = (((x8373>>x8374)%x8375)^x8376);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x8461 = 192577LLU;
	int8_t x8462 = 16;
	int64_t x8463 = 1900LL;
	int16_t x8464 = -1;
	volatile uint64_t t157 = 1636185485052LLU;

    t157 = (((x8461>>x8462)%x8463)^x8464);

    if (t157 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x8490 = 1;
	uint32_t x8491 = 17823669U;
	int8_t x8492 = -1;
	uint32_t t158 = 179614324U;

    t158 = (((x8489>>x8490)%x8491)^x8492);

    if (t158 != 4294967232U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x8493 = INT64_MAX;
	int64_t x8494 = 3LL;
	static int16_t x8496 = -1;

    t159 = (((x8493>>x8494)%x8495)^x8496);

    if (t159 != -128LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x8519 = 3;
	int32_t x8520 = -3;
	volatile uint64_t t160 = UINT64_MAX;

    t160 = (((x8517>>x8518)%x8519)^x8520);

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x8534 = 27U;
	uint64_t x8535 = 1880LLU;
	int8_t x8536 = -23;
	uint64_t t161 = 849949LLU;

    t161 = (((x8533>>x8534)%x8535)^x8536);

    if (t161 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x8545 = 0;
	volatile int8_t x8546 = 1;
	uint64_t x8548 = UINT64_MAX;
	uint64_t t162 = UINT64_MAX;

    t162 = (((x8545>>x8546)%x8547)^x8548);

    if (t162 != UINT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x8825 = 63U;
	int16_t x8826 = 13;
	uint32_t x8828 = 475760U;
	uint64_t t163 = 204471LLU;

    t163 = (((x8825>>x8826)%x8827)^x8828);

    if (t163 != 475760LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x8849 = 73U;
	uint32_t x8850 = 1U;
	static int32_t x8851 = -3746458;
	int16_t x8852 = -236;

    t164 = (((x8849>>x8850)%x8851)^x8852);

    if (t164 != -208) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x8973 = 32449U;
	int8_t x8974 = 2;
	int16_t x8975 = 1;
	uint16_t x8976 = UINT16_MAX;

    t165 = (((x8973>>x8974)%x8975)^x8976);

    if (t165 != 65535) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x9049 = 1181244;
	int8_t x9050 = 2;
	int32_t x9051 = -1;
	static uint32_t t166 = 51400244U;

    t166 = (((x9049>>x9050)%x9051)^x9052);

    if (t166 != 283812U) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x9197 = 207264752974620LLU;
	uint8_t x9198 = 1U;
	static int16_t x9199 = INT16_MIN;
	volatile int32_t x9200 = -10132;
	static volatile uint64_t t167 = 1188840726LLU;

    t167 = (((x9197>>x9198)%x9199)^x9200);

    if (t167 != 18446640441333056994LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x9209 = 863012U;
	static uint8_t x9210 = 13U;
	volatile int8_t x9211 = INT8_MAX;
	static volatile int8_t x9212 = INT8_MAX;

    t168 = (((x9209>>x9210)%x9211)^x9212);

    if (t168 != 22U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x9297 = 5U;
	int64_t t169 = 3358733435169995LL;

    t169 = (((x9297>>x9298)%x9299)^x9300);

    if (t169 != 1827LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x9337 = 302083741U;
	int8_t x9338 = 1;
	volatile int64_t x9340 = INT64_MIN;
	volatile int64_t t170 = -922693046585LL;

    t170 = (((x9337>>x9338)%x9339)^x9340);

    if (t170 != -9223372036703733938LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x9393 = 2845U;
	uint8_t x9394 = 19U;
	int64_t x9395 = INT64_MIN;

    t171 = (((x9393>>x9394)%x9395)^x9396);

    if (t171 != 127LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x9441 = UINT8_MAX;
	int16_t x9442 = 1;
	int32_t x9443 = -7839;
	int64_t x9444 = 37773731905129107LL;
	volatile int64_t t172 = 192294828392LL;

    t172 = (((x9441>>x9442)%x9443)^x9444);

    if (t172 != 37773731905129196LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x9453 = INT32_MAX;
	int8_t x9454 = 23;
	static int32_t x9455 = INT32_MIN;
	int32_t x9456 = -829;
	volatile int32_t t173 = 327;

    t173 = (((x9453>>x9454)%x9455)^x9456);

    if (t173 != -964) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x9473 = 20642500U;
	volatile int8_t x9474 = 1;
	volatile uint8_t x9475 = 13U;
	int16_t x9476 = INT16_MAX;
	static uint32_t t174 = 263U;

    t174 = (((x9473>>x9474)%x9475)^x9476);

    if (t174 != 32763U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x9501 = 492U;
	uint8_t x9502 = 0U;
	volatile uint64_t x9503 = 139717479LLU;
	static uint64_t x9504 = UINT64_MAX;
	volatile uint64_t t175 = 1734440918184576LLU;

    t175 = (((x9501>>x9502)%x9503)^x9504);

    if (t175 != 18446744073709551123LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int8_t x9545 = INT8_MAX;
	static int32_t x9546 = 2;
	int32_t x9547 = INT32_MAX;
	int16_t x9548 = INT16_MIN;

    t176 = (((x9545>>x9546)%x9547)^x9548);

    if (t176 != -32737) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x9573 = 9;
	int8_t x9574 = 4;
	uint32_t x9575 = 703781021U;
	int32_t x9576 = -908236446;
	volatile uint32_t t177 = 1428259U;

    t177 = (((x9573>>x9574)%x9575)^x9576);

    if (t177 != 3386730850U) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x9617 = 99530331190784LL;
	uint8_t x9618 = 58U;
	int64_t x9619 = INT64_MIN;
	int8_t x9620 = INT8_MAX;
	volatile int64_t t178 = -61078856138393LL;

    t178 = (((x9617>>x9618)%x9619)^x9620);

    if (t178 != 127LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x9673 = INT64_MAX;
	int32_t x9674 = 0;
	int64_t x9676 = 1626166772980873843LL;

    t179 = (((x9673>>x9674)%x9675)^x9676);

    if (t179 != 1626166772980873843LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x9745 = 7732LLU;
	uint16_t x9746 = 2U;
	int16_t x9748 = -6563;
	uint64_t t180 = 117239044408134LLU;

    t180 = (((x9745>>x9746)%x9747)^x9748);

    if (t180 != 18446744073709543888LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x9749 = INT16_MAX;
	static uint16_t x9750 = 3U;
	int16_t x9751 = -1;
	int32_t x9752 = 0;

    t181 = (((x9749>>x9750)%x9751)^x9752);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x9853 = UINT16_MAX;
	static volatile int8_t x9854 = 0;
	uint32_t x9856 = UINT32_MAX;
	volatile int64_t t182 = 222228645200676LL;

    t182 = (((x9853>>x9854)%x9855)^x9856);

    if (t182 != 4294901760LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x10005 = 355LL;
	uint64_t x10007 = 846025140216375LLU;
	int16_t x10008 = 20;
	volatile uint64_t t183 = 1329243619753825207LLU;

    t183 = (((x10005>>x10006)%x10007)^x10008);

    if (t183 != 375LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x10021 = INT64_MAX;
	volatile uint16_t x10022 = 46U;
	int16_t x10023 = INT16_MAX;
	int8_t x10024 = -3;
	static volatile int64_t t184 = -1004LL;

    t184 = (((x10021>>x10022)%x10023)^x10024);

    if (t184 != -2LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x10037 = 4;
	volatile uint8_t x10038 = 5U;
	uint64_t x10039 = 4080540169304546284LLU;
	uint8_t x10040 = UINT8_MAX;
	static uint64_t t185 = 1LLU;

    t185 = (((x10037>>x10038)%x10039)^x10040);

    if (t185 != 255LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x10057 = UINT8_MAX;
	uint32_t x10058 = 1U;
	int64_t x10059 = INT64_MIN;
	static int32_t x10060 = INT32_MIN;
	int64_t t186 = 1539LL;

    t186 = (((x10057>>x10058)%x10059)^x10060);

    if (t186 != -2147483521LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x10197 = 43491095211794417LL;
	uint16_t x10198 = 1U;
	static uint8_t x10199 = 10U;
	uint16_t x10200 = UINT16_MAX;
	volatile int64_t t187 = -30375414495297LL;

    t187 = (((x10197>>x10198)%x10199)^x10200);

    if (t187 != 65527LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x10229 = 213932810707LL;
	volatile int16_t x10230 = 9;
	int8_t x10231 = INT8_MIN;
	int64_t t188 = -10939707290LL;

    t188 = (((x10229>>x10230)%x10231)^x10232);

    if (t188 != 72LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x10237 = 1546U;
	int8_t x10238 = 0;
	int16_t x10239 = INT16_MIN;
	volatile uint32_t t189 = 70U;

    t189 = (((x10237>>x10238)%x10239)^x10240);

    if (t189 != 935U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x10257 = 14U;
	static uint32_t x10258 = 8U;
	static int16_t x10259 = INT16_MIN;
	int32_t x10260 = -31;

    t190 = (((x10257>>x10258)%x10259)^x10260);

    if (t190 != -31) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x10297 = 1380251LLU;
	volatile uint8_t x10298 = 38U;
	int8_t x10299 = INT8_MAX;
	uint64_t t191 = 1LLU;

    t191 = (((x10297>>x10298)%x10299)^x10300);

    if (t191 != 65535LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x10305 = 0LLU;
	static uint16_t x10307 = UINT16_MAX;
	uint64_t t192 = UINT64_MAX;

    t192 = (((x10305>>x10306)%x10307)^x10308);

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x10337 = 13212;
	int8_t x10338 = 0;
	static volatile int16_t x10339 = -1;
	static int32_t x10340 = -1;
	volatile int32_t t193 = 373360;

    t193 = (((x10337>>x10338)%x10339)^x10340);

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x10401 = 503285370904162LL;
	int32_t x10403 = 904638213;
	uint16_t x10404 = 28527U;
	static int64_t t194 = 40680646LL;

    t194 = (((x10401>>x10402)%x10403)^x10404);

    if (t194 != 28445LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x10446 = 0LL;
	static int32_t x10448 = INT32_MIN;
	uint32_t t195 = 30894759U;

    t195 = (((x10445>>x10446)%x10447)^x10448);

    if (t195 != 2147483659U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x10481 = INT64_MAX;
	static volatile uint32_t x10482 = 17U;
	volatile int64_t x10483 = 17LL;
	int16_t x10484 = INT16_MIN;
	int64_t t196 = 1481839238681297453LL;

    t196 = (((x10481>>x10482)%x10483)^x10484);

    if (t196 != -32756LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x10537 = 57U;
	int16_t x10538 = 11;
	static int16_t x10539 = INT16_MAX;
	volatile int32_t t197 = 0;

    t197 = (((x10537>>x10538)%x10539)^x10540);

    if (t197 != -32768) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x10697 = 13;
	uint8_t x10698 = 3U;
	int32_t x10699 = INT32_MIN;
	volatile int8_t x10700 = -1;

    t198 = (((x10697>>x10698)%x10699)^x10700);

    if (t198 != -2) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x10721 = 470496;
	static uint8_t x10722 = 0U;
	static int8_t x10723 = INT8_MAX;
	int64_t x10724 = 484348480317LL;
	static volatile int64_t t199 = -13616LL;

    t199 = (((x10721>>x10722)%x10723)^x10724);

    if (t199 != 484348480357LL) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

