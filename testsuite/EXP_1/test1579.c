#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
int32_t x7 = -79643;
uint8_t x37 = UINT8_MAX;
int32_t x117 = 50;
uint8_t x141 = UINT8_MAX;
volatile int8_t x144 = 1;
volatile uint32_t t4 = 3U;
volatile int32_t x181 = 8667957;
static volatile int32_t t5 = -120994;
volatile uint16_t x187 = 1976U;
static int32_t t7 = -42057019;
static uint16_t x306 = 13258U;
volatile int64_t t13 = -18375826LL;
int32_t t14 = 1;
int8_t x423 = INT8_MAX;
int32_t t15 = -180293;
volatile int16_t x507 = INT16_MIN;
int32_t x546 = INT32_MIN;
int8_t x650 = INT8_MAX;
volatile int16_t x738 = -13865;
int16_t x776 = 0;
uint32_t x807 = UINT32_MAX;
uint8_t x840 = 0U;
volatile uint64_t t24 = 544LLU;
int32_t t25 = -4983072;
volatile int32_t t26 = 9023227;
uint8_t x977 = 47U;
volatile int32_t t28 = 2;
volatile uint16_t x1018 = 1U;
int8_t x1019 = INT8_MIN;
static int64_t x1035 = INT64_MAX;
static int16_t x1041 = 857;
uint32_t x1044 = 3U;
int8_t x1120 = 21;
uint8_t x1173 = 73U;
int32_t x1178 = -1;
int32_t x1387 = INT32_MAX;
uint8_t x1388 = 9U;
volatile int32_t t38 = 46;
static int64_t x1454 = -1LL;
int8_t x1456 = 0;
int32_t t41 = -1;
int64_t x1467 = 8382041240986876LL;
static volatile int64_t t42 = 19704237678080639LL;
uint64_t x1506 = UINT64_MAX;
int16_t x1507 = INT16_MIN;
volatile int16_t x1581 = INT16_MIN;
uint16_t x1582 = 21U;
static int32_t x1584 = 1;
int16_t x1589 = INT16_MAX;
volatile int32_t t47 = 6702;
int8_t x1680 = 6;
uint8_t x1708 = 2U;
volatile uint16_t x1773 = UINT16_MAX;
volatile int16_t x1785 = INT16_MIN;
static volatile int32_t t52 = 13788;
static uint32_t x1842 = 1U;
static uint8_t x1846 = UINT8_MAX;
int16_t x2052 = 18;
static volatile int32_t t57 = 152649;
volatile int64_t x2073 = INT64_MIN;
volatile int16_t x2115 = -399;
volatile int32_t x2131 = 1211;
uint16_t x2228 = 2U;
int64_t x2238 = 3207LL;
volatile uint8_t x2240 = 1U;
int8_t x2253 = INT8_MAX;
int64_t x2255 = -1LL;
int8_t x2259 = -15;
static int16_t x2283 = 11008;
volatile uint32_t x2333 = 37643U;
static volatile int32_t x2393 = 15300;
int32_t t74 = 0;
int64_t x2703 = -1LL;
uint8_t x2704 = 23U;
int32_t t76 = 27;
int8_t x2909 = INT8_MAX;
int16_t x2965 = INT16_MAX;
volatile int32_t t81 = 3763114;
volatile int32_t x2982 = -1006598;
int16_t x3010 = INT16_MIN;
uint32_t x3063 = 7881U;
uint64_t x3064 = 2LLU;
int32_t x3151 = 99;
uint8_t x3152 = 0U;
int16_t x3223 = -1;
int32_t t92 = 6;
static volatile int16_t x3267 = -5512;
static volatile int32_t t94 = -70;
volatile int16_t x3287 = INT16_MIN;
volatile int16_t x3288 = 12;
int16_t x3395 = INT16_MAX;
int32_t x3411 = INT32_MIN;
volatile uint8_t x3412 = 0U;
uint64_t x3427 = 239601584411182LLU;
volatile uint32_t x3429 = 38U;
volatile int32_t t99 = -244;


void f0(void) {
	uint64_t x6 = UINT64_MAX;
	int8_t x8 = 15;
	volatile int32_t t0 = 5699;

	t0 = (((x5<=x6)%x7)<<x8);

	if (t0 != 32768) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x38 = -9;
	static int64_t x39 = -93LL;
	static uint16_t x40 = 5U;
	static volatile int64_t t1 = -169352674971LL;

	t1 = (((x37<=x38)%x39)<<x40);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x118 = INT8_MIN;
	int64_t x119 = INT64_MAX;
	static volatile uint16_t x120 = 0U;
	int64_t t2 = -17245646LL;

	t2 = (((x117<=x118)%x119)<<x120);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x142 = INT16_MAX;
	volatile uint8_t x143 = UINT8_MAX;
	volatile int32_t t3 = -17145918;

	t3 = (((x141<=x142)%x143)<<x144);

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x165 = 0U;
	volatile int16_t x166 = INT16_MAX;
	uint32_t x167 = 15U;
	static uint8_t x168 = 3U;

	t4 = (((x165<=x166)%x167)<<x168);

	if (t4 != 8U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x182 = INT64_MAX;
	int8_t x183 = INT8_MIN;
	int8_t x184 = 10;

	t5 = (((x181<=x182)%x183)<<x184);

	if (t5 != 1024) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x185 = INT16_MIN;
	uint32_t x186 = 42U;
	volatile int16_t x188 = 2;
	int32_t t6 = -13353296;

	t6 = (((x185<=x186)%x187)<<x188);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x217 = 27U;
	uint8_t x218 = 30U;
	int16_t x219 = -14201;
	static volatile uint8_t x220 = 4U;

	t7 = (((x217<=x218)%x219)<<x220);

	if (t7 != 16) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x221 = UINT64_MAX;
	static uint16_t x222 = UINT16_MAX;
	int8_t x223 = INT8_MIN;
	uint16_t x224 = 15U;
	static volatile int32_t t8 = -23650;

	t8 = (((x221<=x222)%x223)<<x224);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x261 = UINT8_MAX;
	uint8_t x262 = UINT8_MAX;
	int32_t x263 = INT32_MIN;
	volatile int8_t x264 = 5;
	volatile int32_t t9 = -19857;

	t9 = (((x261<=x262)%x263)<<x264);

	if (t9 != 32) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x293 = -1LL;
	volatile uint8_t x294 = UINT8_MAX;
	volatile int8_t x295 = -1;
	uint8_t x296 = 30U;
	volatile int32_t t10 = 92;

	t10 = (((x293<=x294)%x295)<<x296);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x305 = -1;
	int8_t x307 = INT8_MIN;
	uint8_t x308 = 3U;
	static int32_t t11 = 268;

	t11 = (((x305<=x306)%x307)<<x308);

	if (t11 != 8) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x341 = INT64_MIN;
	static uint16_t x342 = UINT16_MAX;
	int32_t x343 = 385234;
	uint64_t x344 = 3LLU;
	volatile int32_t t12 = -10695;

	t12 = (((x341<=x342)%x343)<<x344);

	if (t12 != 8) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x357 = INT8_MAX;
	int64_t x358 = INT64_MIN;
	int64_t x359 = INT64_MIN;
	volatile int16_t x360 = 21;

	t13 = (((x357<=x358)%x359)<<x360);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x389 = INT8_MAX;
	static int32_t x390 = INT32_MAX;
	volatile int32_t x391 = -1;
	static volatile uint32_t x392 = 26U;

	t14 = (((x389<=x390)%x391)<<x392);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x421 = -1;
	int32_t x422 = -1;
	uint8_t x424 = 3U;

	t15 = (((x421<=x422)%x423)<<x424);

	if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x505 = UINT64_MAX;
	int16_t x506 = 4583;
	static uint8_t x508 = 0U;
	volatile int32_t t16 = 0;

	t16 = (((x505<=x506)%x507)<<x508);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x545 = INT64_MAX;
	int8_t x547 = INT8_MIN;
	static int8_t x548 = 0;
	volatile int32_t t17 = -1169590;

	t17 = (((x545<=x546)%x547)<<x548);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x649 = INT16_MAX;
	int32_t x651 = INT32_MIN;
	uint16_t x652 = 25U;
	int32_t t18 = 2180;

	t18 = (((x649<=x650)%x651)<<x652);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x737 = -1;
	int8_t x739 = INT8_MIN;
	volatile int8_t x740 = 2;
	volatile int32_t t19 = 1;

	t19 = (((x737<=x738)%x739)<<x740);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x773 = -2;
	uint32_t x774 = 8739488U;
	int32_t x775 = -73;
	static int32_t t20 = 499;

	t20 = (((x773<=x774)%x775)<<x776);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x805 = INT64_MIN;
	uint64_t x806 = 27LLU;
	uint8_t x808 = 6U;
	volatile uint32_t t21 = 6151U;

	t21 = (((x805<=x806)%x807)<<x808);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x837 = -1;
	uint32_t x838 = 45515U;
	volatile int64_t x839 = INT64_MIN;
	static volatile int64_t t22 = 9697083426007LL;

	t22 = (((x837<=x838)%x839)<<x840);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x841 = UINT16_MAX;
	uint32_t x842 = 1633354U;
	static int32_t x843 = INT32_MAX;
	uint8_t x844 = 22U;
	volatile int32_t t23 = 3;

	t23 = (((x841<=x842)%x843)<<x844);

	if (t23 != 4194304) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x845 = 136U;
	int16_t x846 = INT16_MIN;
	static uint64_t x847 = 285897138179280937LLU;
	static uint16_t x848 = 23U;

	t24 = (((x845<=x846)%x847)<<x848);

	if (t24 != 8388608LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x853 = UINT32_MAX;
	uint16_t x854 = 56U;
	int8_t x855 = -1;
	uint8_t x856 = 0U;

	t25 = (((x853<=x854)%x855)<<x856);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x869 = INT8_MIN;
	int64_t x870 = 530089010649277LL;
	uint8_t x871 = 8U;
	uint8_t x872 = 1U;

	t26 = (((x869<=x870)%x871)<<x872);

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x949 = 2;
	int16_t x950 = 3;
	uint32_t x951 = 1478706730U;
	int32_t x952 = 5;
	volatile uint32_t t27 = 15194176U;

	t27 = (((x949<=x950)%x951)<<x952);

	if (t27 != 32U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x978 = UINT32_MAX;
	volatile int8_t x979 = INT8_MIN;
	int8_t x980 = 14;

	t28 = (((x977<=x978)%x979)<<x980);

	if (t28 != 16384) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1017 = -1;
	static int32_t x1020 = 26;
	int32_t t29 = 0;

	t29 = (((x1017<=x1018)%x1019)<<x1020);

	if (t29 != 67108864) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1033 = -667;
	int64_t x1034 = -1LL;
	int8_t x1036 = 20;
	int64_t t30 = 87318020LL;

	t30 = (((x1033<=x1034)%x1035)<<x1036);

	if (t30 != 1048576LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1042 = 2003437U;
	int8_t x1043 = INT8_MAX;
	volatile int32_t t31 = 1;

	t31 = (((x1041<=x1042)%x1043)<<x1044);

	if (t31 != 8) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1117 = INT8_MAX;
	int16_t x1118 = -1;
	static int32_t x1119 = INT32_MAX;
	static int32_t t32 = -63;

	t32 = (((x1117<=x1118)%x1119)<<x1120);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1141 = INT32_MIN;
	uint32_t x1142 = 2682231U;
	int8_t x1143 = INT8_MAX;
	uint16_t x1144 = 1U;
	int32_t t33 = 38486234;

	t33 = (((x1141<=x1142)%x1143)<<x1144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x1174 = 7U;
	int64_t x1175 = 6862690591LL;
	int8_t x1176 = 1;
	static volatile int64_t t34 = -14189LL;

	t34 = (((x1173<=x1174)%x1175)<<x1176);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1177 = -1;
	volatile uint16_t x1179 = 29U;
	static uint16_t x1180 = 2U;
	static int32_t t35 = 0;

	t35 = (((x1177<=x1178)%x1179)<<x1180);

	if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1241 = -39;
	static uint64_t x1242 = 0LLU;
	int64_t x1243 = 127126980LL;
	uint8_t x1244 = 0U;
	volatile int64_t t36 = 61LL;

	t36 = (((x1241<=x1242)%x1243)<<x1244);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1341 = INT8_MAX;
	volatile int16_t x1342 = -1;
	static int8_t x1343 = INT8_MIN;
	volatile uint8_t x1344 = 11U;
	volatile int32_t t37 = -15;

	t37 = (((x1341<=x1342)%x1343)<<x1344);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1385 = -395596LL;
	int8_t x1386 = 5;

	t38 = (((x1385<=x1386)%x1387)<<x1388);

	if (t38 != 512) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1421 = 32U;
	volatile int64_t x1422 = -1LL;
	static uint64_t x1423 = 21462210549LLU;
	uint8_t x1424 = 1U;
	static uint64_t t39 = 53LLU;

	t39 = (((x1421<=x1422)%x1423)<<x1424);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1437 = INT8_MIN;
	uint16_t x1438 = 2U;
	int64_t x1439 = INT64_MAX;
	uint8_t x1440 = 1U;
	int64_t t40 = -170716804LL;

	t40 = (((x1437<=x1438)%x1439)<<x1440);

	if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1453 = 7;
	volatile int32_t x1455 = 2480814;

	t41 = (((x1453<=x1454)%x1455)<<x1456);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1465 = UINT16_MAX;
	int32_t x1466 = -4011;
	static uint32_t x1468 = 0U;

	t42 = (((x1465<=x1466)%x1467)<<x1468);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1489 = INT64_MIN;
	volatile int64_t x1490 = -243502428033351LL;
	volatile int8_t x1491 = INT8_MAX;
	int64_t x1492 = 1LL;
	int32_t t43 = -157577;

	t43 = (((x1489<=x1490)%x1491)<<x1492);

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x1505 = INT64_MIN;
	volatile int8_t x1508 = 3;
	volatile int32_t t44 = -60552;

	t44 = (((x1505<=x1506)%x1507)<<x1508);

	if (t44 != 8) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1557 = 22LLU;
	volatile int64_t x1558 = -1LL;
	uint64_t x1559 = 45119897186287986LLU;
	uint8_t x1560 = 23U;
	volatile uint64_t t45 = 332298586LLU;

	t45 = (((x1557<=x1558)%x1559)<<x1560);

	if (t45 != 8388608LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1583 = INT8_MAX;
	static volatile int32_t t46 = -88;

	t46 = (((x1581<=x1582)%x1583)<<x1584);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1590 = 243LLU;
	uint16_t x1591 = UINT16_MAX;
	uint16_t x1592 = 2U;

	t47 = (((x1589<=x1590)%x1591)<<x1592);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1677 = INT8_MAX;
	uint32_t x1678 = 4082221U;
	uint16_t x1679 = 1U;
	static volatile int32_t t48 = -8831467;

	t48 = (((x1677<=x1678)%x1679)<<x1680);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1705 = 526174116U;
	volatile int8_t x1706 = -1;
	uint32_t x1707 = 58896U;
	uint32_t t49 = 3487444U;

	t49 = (((x1705<=x1706)%x1707)<<x1708);

	if (t49 != 4U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1749 = INT16_MAX;
	uint64_t x1750 = 8608001968154041LLU;
	int16_t x1751 = -1;
	int16_t x1752 = 5;
	int32_t t50 = -48;

	t50 = (((x1749<=x1750)%x1751)<<x1752);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x1774 = UINT32_MAX;
	int32_t x1775 = INT32_MIN;
	volatile uint16_t x1776 = 13U;
	static volatile int32_t t51 = -568;

	t51 = (((x1773<=x1774)%x1775)<<x1776);

	if (t51 != 8192) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x1786 = 112U;
	uint8_t x1787 = 1U;
	static uint32_t x1788 = 4U;

	t52 = (((x1785<=x1786)%x1787)<<x1788);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1841 = 2;
	static int32_t x1843 = -1;
	int8_t x1844 = 4;
	int32_t t53 = 0;

	t53 = (((x1841<=x1842)%x1843)<<x1844);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1845 = -18;
	int64_t x1847 = -27672554LL;
	uint32_t x1848 = 3U;
	int64_t t54 = -813760015545LL;

	t54 = (((x1845<=x1846)%x1847)<<x1848);

	if (t54 != 8LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x1977 = -1;
	static uint8_t x1978 = 0U;
	int16_t x1979 = 64;
	volatile int32_t x1980 = 0;
	static volatile int32_t t55 = -1129197;

	t55 = (((x1977<=x1978)%x1979)<<x1980);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x1985 = -1LL;
	int32_t x1986 = INT32_MIN;
	int32_t x1987 = INT32_MIN;
	static uint16_t x1988 = 15U;
	int32_t t56 = 24;

	t56 = (((x1985<=x1986)%x1987)<<x1988);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2049 = -1;
	int32_t x2050 = 396;
	uint8_t x2051 = 4U;

	t57 = (((x2049<=x2050)%x2051)<<x2052);

	if (t57 != 262144) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2074 = INT8_MIN;
	uint8_t x2075 = 56U;
	uint8_t x2076 = 15U;
	int32_t t58 = 161;

	t58 = (((x2073<=x2074)%x2075)<<x2076);

	if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2097 = INT16_MIN;
	static int8_t x2098 = INT8_MAX;
	int16_t x2099 = -4;
	volatile int8_t x2100 = 0;
	static int32_t t59 = 2921;

	t59 = (((x2097<=x2098)%x2099)<<x2100);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2113 = INT8_MIN;
	int16_t x2114 = -1;
	static uint16_t x2116 = 1U;
	static int32_t t60 = 18893;

	t60 = (((x2113<=x2114)%x2115)<<x2116);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2129 = 29U;
	int64_t x2130 = -1LL;
	uint8_t x2132 = 21U;
	int32_t t61 = 1936004;

	t61 = (((x2129<=x2130)%x2131)<<x2132);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2225 = UINT32_MAX;
	int64_t x2226 = -12515789LL;
	static volatile int32_t x2227 = -30960;
	volatile int32_t t62 = 4885;

	t62 = (((x2225<=x2226)%x2227)<<x2228);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2237 = INT32_MIN;
	int16_t x2239 = -455;
	static volatile int32_t t63 = 25;

	t63 = (((x2237<=x2238)%x2239)<<x2240);

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2254 = 178U;
	uint8_t x2256 = 5U;
	volatile int64_t t64 = 26260721LL;

	t64 = (((x2253<=x2254)%x2255)<<x2256);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2257 = 890036LL;
	int16_t x2258 = INT16_MAX;
	volatile int32_t x2260 = 1;
	volatile int32_t t65 = 1125;

	t65 = (((x2257<=x2258)%x2259)<<x2260);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x2281 = 2U;
	int32_t x2282 = INT32_MIN;
	uint64_t x2284 = 22LLU;
	volatile int32_t t66 = -919473;

	t66 = (((x2281<=x2282)%x2283)<<x2284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x2334 = INT64_MIN;
	int16_t x2335 = -1;
	uint16_t x2336 = 2U;
	static int32_t t67 = 10682;

	t67 = (((x2333<=x2334)%x2335)<<x2336);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2341 = INT32_MIN;
	static int16_t x2342 = 9;
	uint64_t x2343 = 5609271116033992LLU;
	static int8_t x2344 = 1;
	volatile uint64_t t68 = 43313930303LLU;

	t68 = (((x2341<=x2342)%x2343)<<x2344);

	if (t68 != 2LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2394 = INT8_MIN;
	volatile uint32_t x2395 = UINT32_MAX;
	uint8_t x2396 = 0U;
	uint32_t t69 = 18129U;

	t69 = (((x2393<=x2394)%x2395)<<x2396);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x2477 = UINT16_MAX;
	int32_t x2478 = INT32_MIN;
	volatile int64_t x2479 = -1LL;
	static int64_t x2480 = 24LL;
	int64_t t70 = 548778834929833566LL;

	t70 = (((x2477<=x2478)%x2479)<<x2480);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x2521 = UINT32_MAX;
	int64_t x2522 = 6538LL;
	int16_t x2523 = -787;
	uint16_t x2524 = 3U;
	volatile int32_t t71 = 39393481;

	t71 = (((x2521<=x2522)%x2523)<<x2524);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x2541 = INT8_MAX;
	uint32_t x2542 = UINT32_MAX;
	int16_t x2543 = INT16_MIN;
	static int8_t x2544 = 0;
	volatile int32_t t72 = -25194;

	t72 = (((x2541<=x2542)%x2543)<<x2544);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2613 = INT32_MIN;
	static volatile int64_t x2614 = INT64_MIN;
	uint8_t x2615 = 6U;
	uint8_t x2616 = 13U;
	int32_t t73 = 22153;

	t73 = (((x2613<=x2614)%x2615)<<x2616);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2637 = 165193853080360LLU;
	static uint8_t x2638 = UINT8_MAX;
	static volatile int8_t x2639 = INT8_MIN;
	uint32_t x2640 = 1U;

	t74 = (((x2637<=x2638)%x2639)<<x2640);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2701 = 10268U;
	int8_t x2702 = -27;
	volatile int64_t t75 = -2247959931982242LL;

	t75 = (((x2701<=x2702)%x2703)<<x2704);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x2741 = 32668U;
	uint8_t x2742 = 95U;
	int8_t x2743 = 16;
	volatile uint32_t x2744 = 3U;

	t76 = (((x2741<=x2742)%x2743)<<x2744);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2853 = INT8_MIN;
	uint16_t x2854 = UINT16_MAX;
	static int32_t x2855 = -1;
	volatile int64_t x2856 = 6LL;
	volatile int32_t t77 = -221129096;

	t77 = (((x2853<=x2854)%x2855)<<x2856);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x2869 = INT8_MIN;
	volatile int8_t x2870 = INT8_MAX;
	static int64_t x2871 = 17303404806996LL;
	int8_t x2872 = 4;
	int64_t t78 = 31684174387LL;

	t78 = (((x2869<=x2870)%x2871)<<x2872);

	if (t78 != 16LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2910 = -1;
	int32_t x2911 = INT32_MAX;
	int8_t x2912 = 1;
	int32_t t79 = 0;

	t79 = (((x2909<=x2910)%x2911)<<x2912);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x2929 = 54175016132018384LLU;
	volatile uint32_t x2930 = 226532U;
	uint64_t x2931 = 453007115703068401LLU;
	uint32_t x2932 = 1U;
	uint64_t t80 = 1183145435LLU;

	t80 = (((x2929<=x2930)%x2931)<<x2932);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x2966 = 6U;
	uint8_t x2967 = 125U;
	uint8_t x2968 = 0U;

	t81 = (((x2965<=x2966)%x2967)<<x2968);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2981 = INT32_MIN;
	uint64_t x2983 = 1037909597469320LLU;
	int16_t x2984 = 45;
	uint64_t t82 = 139213347446991LLU;

	t82 = (((x2981<=x2982)%x2983)<<x2984);

	if (t82 != 35184372088832LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3009 = 3829618603LLU;
	int64_t x3011 = INT64_MIN;
	volatile uint8_t x3012 = 1U;
	static volatile int64_t t83 = 40567773LL;

	t83 = (((x3009<=x3010)%x3011)<<x3012);

	if (t83 != 2LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x3041 = INT32_MAX;
	int64_t x3042 = INT64_MIN;
	static uint32_t x3043 = 69U;
	int8_t x3044 = 2;
	uint32_t t84 = 116285871U;

	t84 = (((x3041<=x3042)%x3043)<<x3044);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x3061 = -59508505956LL;
	int64_t x3062 = INT64_MIN;
	uint32_t t85 = 892829002U;

	t85 = (((x3061<=x3062)%x3063)<<x3064);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3093 = INT16_MIN;
	uint8_t x3094 = 14U;
	static uint16_t x3095 = 4477U;
	int16_t x3096 = 6;
	static volatile int32_t t86 = 17;

	t86 = (((x3093<=x3094)%x3095)<<x3096);

	if (t86 != 64) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x3101 = -1;
	volatile int64_t x3102 = INT64_MIN;
	int64_t x3103 = INT64_MIN;
	int8_t x3104 = 0;
	int64_t t87 = 116183LL;

	t87 = (((x3101<=x3102)%x3103)<<x3104);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x3149 = -47;
	volatile int64_t x3150 = -14LL;
	int32_t t88 = -15;

	t88 = (((x3149<=x3150)%x3151)<<x3152);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3153 = 34;
	int16_t x3154 = INT16_MIN;
	int16_t x3155 = INT16_MIN;
	volatile uint16_t x3156 = 30U;
	volatile int32_t t89 = -2518149;

	t89 = (((x3153<=x3154)%x3155)<<x3156);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3193 = 0;
	uint8_t x3194 = 1U;
	static int16_t x3195 = INT16_MAX;
	static int64_t x3196 = 3LL;
	int32_t t90 = -534127473;

	t90 = (((x3193<=x3194)%x3195)<<x3196);

	if (t90 != 8) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3201 = -1;
	uint64_t x3202 = 393176177912LLU;
	int64_t x3203 = -14686762676LL;
	uint64_t x3204 = 0LLU;
	static volatile int64_t t91 = -789581317338113454LL;

	t91 = (((x3201<=x3202)%x3203)<<x3204);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3221 = 59997;
	uint32_t x3222 = 40930510U;
	volatile uint8_t x3224 = 2U;

	t92 = (((x3221<=x3222)%x3223)<<x3224);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x3245 = 54;
	int16_t x3246 = -1;
	int16_t x3247 = 1;
	uint16_t x3248 = 12U;
	volatile int32_t t93 = -20130;

	t93 = (((x3245<=x3246)%x3247)<<x3248);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x3265 = 986746U;
	uint8_t x3266 = UINT8_MAX;
	uint8_t x3268 = 0U;

	t94 = (((x3265<=x3266)%x3267)<<x3268);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x3285 = INT32_MIN;
	uint64_t x3286 = UINT64_MAX;
	int32_t t95 = -33;

	t95 = (((x3285<=x3286)%x3287)<<x3288);

	if (t95 != 4096) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x3393 = -1;
	volatile uint32_t x3394 = 15483U;
	int16_t x3396 = 0;
	int32_t t96 = -6;

	t96 = (((x3393<=x3394)%x3395)<<x3396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3409 = UINT64_MAX;
	int64_t x3410 = INT64_MIN;
	volatile int32_t t97 = 0;

	t97 = (((x3409<=x3410)%x3411)<<x3412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3425 = INT16_MAX;
	uint16_t x3426 = 286U;
	int8_t x3428 = 1;
	uint64_t t98 = 55300562LLU;

	t98 = (((x3425<=x3426)%x3427)<<x3428);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x3430 = 4U;
	int32_t x3431 = INT32_MIN;
	static uint8_t x3432 = 31U;

	t99 = (((x3429<=x3430)%x3431)<<x3432);

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

