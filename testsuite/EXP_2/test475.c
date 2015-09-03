#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x101 = -1LL;
uint32_t x103 = UINT32_MAX;
volatile uint32_t x295 = 31U;
static uint32_t t3 = 2U;
uint64_t x418 = UINT64_MAX;
uint16_t x448 = 18U;
uint8_t x468 = 15U;
volatile int32_t t13 = 332;
volatile uint8_t x784 = 24U;
int8_t x797 = -1;
uint16_t x825 = UINT16_MAX;
int8_t x826 = -3;
uint8_t x828 = 8U;
static uint8_t x876 = 3U;
int16_t x899 = INT16_MAX;
int8_t x900 = 0;
static int64_t x939 = INT64_MIN;
volatile int64_t t20 = 264219172932916LL;
static uint8_t x944 = 17U;
static int8_t x1029 = INT8_MIN;
uint64_t t24 = 132402105539396LLU;
static uint16_t x1051 = 35U;
volatile uint16_t x1067 = 20029U;
volatile uint8_t x1068 = 3U;
volatile int32_t t26 = 391913008;
volatile int16_t x1103 = 6;
static volatile uint8_t x1113 = 29U;
static volatile uint64_t t29 = 7510491796426420613LLU;
static int32_t x1151 = -505891;
uint8_t x1158 = 0U;
static volatile int16_t x1226 = -427;
static uint8_t x1355 = 0U;
int16_t x1399 = INT16_MAX;
uint64_t t40 = 1780LLU;
int64_t x1455 = -438599600018LL;
int32_t x1485 = INT32_MAX;
static uint8_t x1503 = 9U;
int64_t t45 = -3LL;
int16_t x1546 = 1;
uint32_t x1563 = 1681244620U;
int8_t x1611 = -1;
static int32_t t50 = -1;
int16_t x1696 = 0;
volatile int32_t t51 = -219786156;
int8_t x1710 = INT8_MIN;
uint16_t x1711 = 606U;
int16_t x1712 = 3;
int32_t x1819 = -1;
static uint8_t x1820 = 10U;
uint16_t x1928 = 9U;
uint64_t t55 = 624632102LLU;
int16_t x1998 = INT16_MIN;
static volatile int32_t t56 = 245;
uint8_t x2065 = UINT8_MAX;
static int32_t x2342 = -555;
volatile uint64_t t61 = 312200537LLU;
static uint32_t x2619 = 12U;
uint32_t x2620 = 8U;
static uint32_t x2851 = UINT32_MAX;
volatile uint32_t t66 = 0U;
volatile uint64_t x2950 = 13687111948878LLU;
uint32_t t68 = 95U;
volatile uint32_t t69 = 11910U;
static int32_t x3186 = INT32_MIN;
static uint64_t x3277 = 213254039128442LLU;
volatile uint64_t x3278 = 215644713705603LLU;
uint32_t x3413 = 129894U;
int16_t x3471 = INT16_MIN;
static uint64_t t76 = 550628648360LLU;
uint16_t x3529 = 5081U;
uint8_t x3536 = 0U;
volatile uint32_t x3667 = UINT32_MAX;
volatile uint8_t x3668 = 8U;
volatile int16_t x3787 = INT16_MAX;
int8_t x3914 = -1;
volatile uint16_t x3916 = 24U;
uint32_t x3997 = 907974U;
volatile int64_t t86 = 33798475LL;
int64_t t87 = 447938215247LL;
int32_t x4137 = INT32_MAX;
uint16_t x4138 = 97U;
static volatile int8_t x4163 = INT8_MIN;
static uint64_t t91 = 1391203439744425LLU;
uint64_t x4254 = UINT64_MAX;
uint16_t x4256 = 0U;
volatile int32_t t97 = -405598035;


void f0(void) {
	int16_t x102 = INT16_MIN;
	static int32_t x104 = 2;
	volatile int64_t t0 = -100149686176646163LL;

	t0 = ((x101&(x102*x103))>>x104);

	if (t0 != 8192LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x121 = 37130955U;
	uint64_t x122 = UINT64_MAX;
	uint64_t x123 = 131335672979833LLU;
	volatile uint16_t x124 = 3U;
	static uint64_t t1 = 4004315153669LLU;

	t1 = ((x121&(x122*x123))>>x124);

	if (t1 != 4362832LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x161 = 8U;
	uint8_t x162 = 14U;
	static volatile int8_t x163 = -49;
	int16_t x164 = 0;
	static volatile int32_t t2 = 7;

	t2 = ((x161&(x162*x163))>>x164);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x293 = 6U;
	int32_t x294 = INT32_MIN;
	int32_t x296 = 3;

	t3 = ((x293&(x294*x295))>>x296);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x337 = -22265054;
	uint8_t x338 = 13U;
	uint8_t x339 = 0U;
	volatile int8_t x340 = 4;
	static volatile int32_t t4 = -4789;

	t4 = ((x337&(x338*x339))>>x340);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x341 = INT64_MIN;
	uint8_t x342 = 1U;
	int8_t x343 = 0;
	uint16_t x344 = 8U;
	int64_t t5 = -87516LL;

	t5 = ((x341&(x342*x343))>>x344);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x377 = 1U;
	uint16_t x378 = 992U;
	int8_t x379 = INT8_MIN;
	uint8_t x380 = 1U;
	static int32_t t6 = 246690;

	t6 = ((x377&(x378*x379))>>x380);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x417 = INT16_MAX;
	static uint32_t x419 = 157U;
	uint8_t x420 = 60U;
	uint64_t t7 = 237196500087LLU;

	t7 = ((x417&(x418*x419))>>x420);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x445 = INT16_MAX;
	uint32_t x446 = UINT32_MAX;
	int8_t x447 = 17;
	static uint32_t t8 = 13669231U;

	t8 = ((x445&(x446*x447))>>x448);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x465 = -1LL;
	volatile uint32_t x466 = 0U;
	uint8_t x467 = 38U;
	int64_t t9 = 1423289LL;

	t9 = ((x465&(x466*x467))>>x468);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x581 = -1LL;
	static int8_t x582 = INT8_MIN;
	int8_t x583 = INT8_MIN;
	volatile int8_t x584 = 1;
	volatile int64_t t10 = 267358027682LL;

	t10 = ((x581&(x582*x583))>>x584);

	if (t10 != 8192LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x665 = INT64_MIN;
	static uint16_t x666 = 2U;
	uint8_t x667 = 55U;
	uint8_t x668 = 7U;
	volatile int64_t t11 = -26174LL;

	t11 = ((x665&(x666*x667))>>x668);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x725 = 0U;
	int32_t x726 = -1;
	static volatile uint8_t x727 = 90U;
	static uint8_t x728 = 2U;
	uint32_t t12 = 69U;

	t12 = ((x725&(x726*x727))>>x728);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x761 = INT16_MAX;
	volatile int8_t x762 = INT8_MAX;
	int16_t x763 = INT16_MIN;
	volatile uint16_t x764 = 1U;

	t13 = ((x761&(x762*x763))>>x764);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x781 = INT8_MIN;
	uint8_t x782 = 6U;
	int16_t x783 = INT16_MAX;
	int32_t t14 = 16259;

	t14 = ((x781&(x782*x783))>>x784);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x798 = 124U;
	static uint64_t x799 = 48LLU;
	uint16_t x800 = 9U;
	uint64_t t15 = 3827LLU;

	t15 = ((x797&(x798*x799))>>x800);

	if (t15 != 11LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x827 = 1;
	int32_t t16 = -2844103;

	t16 = ((x825&(x826*x827))>>x828);

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x873 = 5U;
	int16_t x874 = -7242;
	int64_t x875 = -1LL;
	int64_t t17 = 8869928438423677LL;

	t17 = ((x873&(x874*x875))>>x876);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x889 = INT16_MAX;
	uint32_t x890 = 3U;
	static uint64_t x891 = 3915243LLU;
	uint8_t x892 = 0U;
	uint64_t t18 = 407914900453963582LLU;

	t18 = ((x889&(x890*x891))>>x892);

	if (t18 != 14785LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x897 = 210459438U;
	int8_t x898 = INT8_MIN;
	uint32_t t19 = 1722U;

	t19 = ((x897&(x898*x899))>>x900);

	if (t19 != 209715200U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x937 = 30936142U;
	uint8_t x938 = 1U;
	uint8_t x940 = 30U;

	t20 = ((x937&(x938*x939))>>x940);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x941 = 3U;
	volatile int64_t x942 = INT64_MAX;
	int8_t x943 = -1;
	int64_t t21 = -27699LL;

	t21 = ((x941&(x942*x943))>>x944);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x989 = 8731U;
	uint64_t x990 = 3229591551LLU;
	int16_t x991 = 42;
	uint8_t x992 = 15U;
	static volatile uint64_t t22 = 105855LLU;

	t22 = ((x989&(x990*x991))>>x992);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1025 = INT16_MIN;
	uint16_t x1026 = 2U;
	volatile uint8_t x1027 = 12U;
	volatile int8_t x1028 = 0;
	volatile int32_t t23 = 8477;

	t23 = ((x1025&(x1026*x1027))>>x1028);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1030 = INT32_MIN;
	uint64_t x1031 = UINT64_MAX;
	uint32_t x1032 = 2U;

	t24 = ((x1029&(x1030*x1031))>>x1032);

	if (t24 != 536870912LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x1049 = 1U;
	int64_t x1050 = 57LL;
	volatile uint16_t x1052 = 8U;
	int64_t t25 = -13449474295915LL;

	t25 = ((x1049&(x1050*x1051))>>x1052);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1065 = -1;
	uint16_t x1066 = UINT16_MAX;

	t26 = ((x1065&(x1066*x1067))>>x1068);

	if (t26 != 164075064) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1101 = -105;
	uint8_t x1102 = 2U;
	static int32_t x1104 = 7;
	volatile int32_t t27 = -123714;

	t27 = ((x1101&(x1102*x1103))>>x1104);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1105 = 4U;
	int8_t x1106 = INT8_MIN;
	int64_t x1107 = -68978071815546LL;
	uint8_t x1108 = 7U;
	volatile int64_t t28 = 114176780LL;

	t28 = ((x1105&(x1106*x1107))>>x1108);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x1114 = UINT64_MAX;
	uint32_t x1115 = 146967755U;
	int8_t x1116 = 4;

	t29 = ((x1113&(x1114*x1115))>>x1116);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x1149 = 120U;
	volatile int8_t x1150 = 0;
	uint16_t x1152 = 1U;
	volatile int32_t t30 = -547373805;

	t30 = ((x1149&(x1150*x1151))>>x1152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1157 = INT8_MIN;
	int16_t x1159 = -1;
	uint32_t x1160 = 20U;
	volatile int32_t t31 = 0;

	t31 = ((x1157&(x1158*x1159))>>x1160);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1185 = -1LL;
	volatile int16_t x1186 = INT16_MIN;
	int16_t x1187 = INT16_MIN;
	int8_t x1188 = 58;
	volatile int64_t t32 = -3079LL;

	t32 = ((x1185&(x1186*x1187))>>x1188);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1189 = 945803750U;
	int8_t x1190 = INT8_MIN;
	uint16_t x1191 = 6U;
	int8_t x1192 = 1;
	volatile uint32_t t33 = 471057090U;

	t33 = ((x1189&(x1190*x1191))>>x1192);

	if (t33 != 472901760U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1225 = -1;
	int16_t x1227 = INT16_MIN;
	uint16_t x1228 = 3U;
	volatile int32_t t34 = 19;

	t34 = ((x1225&(x1226*x1227))>>x1228);

	if (t34 != 1748992) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1257 = 1;
	int32_t x1258 = 3380;
	int16_t x1259 = INT16_MAX;
	volatile uint32_t x1260 = 5U;
	volatile int32_t t35 = -148622;

	t35 = ((x1257&(x1258*x1259))>>x1260);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x1353 = -61;
	int8_t x1354 = INT8_MIN;
	uint8_t x1356 = 2U;
	volatile int32_t t36 = -80257186;

	t36 = ((x1353&(x1354*x1355))>>x1356);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1397 = -1;
	static uint16_t x1398 = UINT16_MAX;
	uint32_t x1400 = 3U;
	volatile int32_t t37 = -45009272;

	t37 = ((x1397&(x1398*x1399))>>x1400);

	if (t37 != 268423168) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x1405 = 80908104058LLU;
	int32_t x1406 = INT32_MIN;
	static int64_t x1407 = -1LL;
	uint8_t x1408 = 44U;
	volatile uint64_t t38 = 147LLU;

	t38 = ((x1405&(x1406*x1407))>>x1408);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1425 = INT32_MAX;
	int8_t x1426 = INT8_MIN;
	uint64_t x1427 = 1338939274LLU;
	int16_t x1428 = 0;
	static volatile uint64_t t39 = 643864387LLU;

	t39 = ((x1425&(x1426*x1427))>>x1428);

	if (t39 != 414464768LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x1429 = 1857U;
	uint64_t x1430 = 175LLU;
	int8_t x1431 = 15;
	uint8_t x1432 = 1U;

	t40 = ((x1429&(x1430*x1431))>>x1432);

	if (t40 != 288LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1453 = 57;
	int16_t x1454 = INT16_MAX;
	uint8_t x1456 = 3U;
	static volatile int64_t t41 = 24330245LL;

	t41 = ((x1453&(x1454*x1455))>>x1456);

	if (t41 != 2LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x1465 = UINT16_MAX;
	static uint64_t x1466 = UINT64_MAX;
	uint16_t x1467 = 4088U;
	static int8_t x1468 = 19;
	volatile uint64_t t42 = 12843756LLU;

	t42 = ((x1465&(x1466*x1467))>>x1468);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x1486 = 793653770353192LL;
	volatile int64_t x1487 = -1LL;
	int16_t x1488 = 1;
	volatile int64_t t43 = 5893270LL;

	t43 = ((x1485&(x1486*x1487))>>x1488);

	if (t43 != 175686380LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1493 = INT32_MIN;
	int32_t x1494 = -1;
	int64_t x1495 = -986699LL;
	uint16_t x1496 = 10U;
	int64_t t44 = -522368912376683213LL;

	t44 = ((x1493&(x1494*x1495))>>x1496);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x1501 = INT64_MIN;
	uint8_t x1502 = 21U;
	uint8_t x1504 = 3U;

	t45 = ((x1501&(x1502*x1503))>>x1504);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1545 = INT64_MAX;
	uint32_t x1547 = UINT32_MAX;
	uint16_t x1548 = 1U;
	int64_t t46 = 24975677902902289LL;

	t46 = ((x1545&(x1546*x1547))>>x1548);

	if (t46 != 2147483647LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1549 = 15;
	int32_t x1550 = -1;
	uint64_t x1551 = UINT64_MAX;
	int32_t x1552 = 37;
	volatile uint64_t t47 = 1352LLU;

	t47 = ((x1549&(x1550*x1551))>>x1552);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1561 = 149963LL;
	int64_t x1562 = 15595LL;
	uint32_t x1564 = 15U;
	static volatile int64_t t48 = 2LL;

	t48 = ((x1561&(x1562*x1563))>>x1564);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1573 = -1;
	volatile int8_t x1574 = 47;
	int16_t x1575 = 46;
	volatile uint32_t x1576 = 11U;
	static int32_t t49 = 104737130;

	t49 = ((x1573&(x1574*x1575))>>x1576);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x1609 = 0U;
	uint8_t x1610 = 3U;
	int8_t x1612 = 17;

	t50 = ((x1609&(x1610*x1611))>>x1612);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x1693 = 7;
	static uint8_t x1694 = UINT8_MAX;
	static volatile int32_t x1695 = 145;

	t51 = ((x1693&(x1694*x1695))>>x1696);

	if (t51 != 7) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x1709 = UINT64_MAX;
	volatile uint64_t t52 = 1LLU;

	t52 = ((x1709&(x1710*x1711))>>x1712);

	if (t52 != 2305843009213684256LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1817 = 750;
	int16_t x1818 = -1;
	int32_t t53 = 0;

	t53 = ((x1817&(x1818*x1819))>>x1820);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1925 = 7;
	int8_t x1926 = -1;
	int32_t x1927 = 293802;
	volatile int32_t t54 = -1849;

	t54 = ((x1925&(x1926*x1927))>>x1928);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1929 = 5U;
	volatile uint64_t x1930 = 150160979841616169LLU;
	static int32_t x1931 = INT32_MIN;
	static volatile uint16_t x1932 = 2U;

	t55 = ((x1929&(x1930*x1931))>>x1932);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x1997 = 13;
	static volatile int8_t x1999 = INT8_MIN;
	int32_t x2000 = 6;

	t56 = ((x1997&(x1998*x1999))>>x2000);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2066 = INT8_MIN;
	volatile int64_t x2067 = 169797877LL;
	static int8_t x2068 = 0;
	int64_t t57 = 1899037347318247LL;

	t57 = ((x2065&(x2066*x2067))>>x2068);

	if (t57 != 128LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2081 = -1;
	int32_t x2082 = -131571143;
	int8_t x2083 = -1;
	uint8_t x2084 = 25U;
	int32_t t58 = 28317026;

	t58 = ((x2081&(x2082*x2083))>>x2084);

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2273 = 13775LL;
	int8_t x2274 = -8;
	uint8_t x2275 = 78U;
	uint8_t x2276 = 1U;
	int64_t t59 = 31178935866398629LL;

	t59 = ((x2273&(x2274*x2275))>>x2276);

	if (t59 != 6848LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2341 = 0U;
	int64_t x2343 = -6125LL;
	int32_t x2344 = 3;
	volatile int64_t t60 = 21LL;

	t60 = ((x2341&(x2342*x2343))>>x2344);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x2377 = 36U;
	uint16_t x2378 = 3U;
	uint64_t x2379 = UINT64_MAX;
	static uint32_t x2380 = 3U;

	t61 = ((x2377&(x2378*x2379))>>x2380);

	if (t61 != 4LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2473 = 16599151U;
	int8_t x2474 = -5;
	int32_t x2475 = -1;
	volatile uint8_t x2476 = 0U;
	uint32_t t62 = 4893U;

	t62 = ((x2473&(x2474*x2475))>>x2476);

	if (t62 != 5U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2617 = 61771;
	uint16_t x2618 = 2U;
	volatile uint32_t t63 = 163U;

	t63 = ((x2617&(x2618*x2619))>>x2620);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2829 = UINT32_MAX;
	static uint32_t x2830 = 320U;
	uint16_t x2831 = 3U;
	volatile int8_t x2832 = 2;
	uint32_t t64 = 698962U;

	t64 = ((x2829&(x2830*x2831))>>x2832);

	if (t64 != 240U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2841 = -694;
	int16_t x2842 = -456;
	static int32_t x2843 = -1;
	volatile uint16_t x2844 = 0U;
	volatile int32_t t65 = -4529;

	t65 = ((x2841&(x2842*x2843))>>x2844);

	if (t65 != 328) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2849 = INT16_MIN;
	int8_t x2850 = INT8_MIN;
	uint8_t x2852 = 1U;

	t66 = ((x2849&(x2850*x2851))>>x2852);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2949 = 125U;
	uint16_t x2951 = 12U;
	static int8_t x2952 = 7;
	uint64_t t67 = 850341424370698LLU;

	t67 = ((x2949&(x2950*x2951))>>x2952);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3129 = UINT16_MAX;
	uint32_t x3130 = 57236297U;
	uint8_t x3131 = 2U;
	uint16_t x3132 = 7U;

	t68 = ((x3129&(x3130*x3131))>>x3132);

	if (t68 != 365U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3169 = INT32_MAX;
	static uint32_t x3170 = 50170015U;
	uint16_t x3171 = 2U;
	int8_t x3172 = 2;

	t69 = ((x3169&(x3170*x3171))>>x3172);

	if (t69 != 25085007U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3173 = 1876LLU;
	uint64_t x3174 = 1177817LLU;
	int8_t x3175 = INT8_MAX;
	int8_t x3176 = 1;
	volatile uint64_t t70 = 33994991271240686LLU;

	t70 = ((x3173&(x3174*x3175))>>x3176);

	if (t70 != 386LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3185 = INT8_MIN;
	uint32_t x3187 = 11U;
	uint16_t x3188 = 4U;
	volatile uint32_t t71 = 6781243U;

	t71 = ((x3185&(x3186*x3187))>>x3188);

	if (t71 != 134217728U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x3279 = 254117346088LLU;
	uint8_t x3280 = 1U;
	uint64_t t72 = 126349465LLU;

	t72 = ((x3277&(x3278*x3279))>>x3280);

	if (t72 != 70746711048380LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3414 = 1;
	static int32_t x3415 = 339652;
	static int32_t x3416 = 1;
	static volatile uint32_t t73 = 142038U;

	t73 = ((x3413&(x3414*x3415))>>x3416);

	if (t73 != 38178U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3469 = INT8_MAX;
	volatile uint8_t x3470 = 51U;
	uint8_t x3472 = 9U;
	int32_t t74 = -942124571;

	t74 = ((x3469&(x3470*x3471))>>x3472);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x3485 = 290LL;
	static uint16_t x3486 = 1962U;
	uint64_t x3487 = UINT64_MAX;
	static volatile uint8_t x3488 = 8U;
	static volatile uint64_t t75 = 62802549093LLU;

	t75 = ((x3485&(x3486*x3487))>>x3488);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3489 = INT64_MIN;
	uint64_t x3490 = 1116571223594312LLU;
	uint8_t x3491 = UINT8_MAX;
	int8_t x3492 = 50;

	t76 = ((x3489&(x3490*x3491))>>x3492);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x3509 = INT64_MIN;
	int64_t x3510 = -30289738389LL;
	int16_t x3511 = -12438;
	uint8_t x3512 = 2U;
	int64_t t77 = -518LL;

	t77 = ((x3509&(x3510*x3511))>>x3512);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3530 = 0U;
	int8_t x3531 = 0;
	uint8_t x3532 = 2U;
	int32_t t78 = 3;

	t78 = ((x3529&(x3530*x3531))>>x3532);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x3533 = 5643;
	int8_t x3534 = INT8_MIN;
	int16_t x3535 = INT16_MIN;
	volatile int32_t t79 = -3;

	t79 = ((x3533&(x3534*x3535))>>x3536);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x3665 = 31U;
	int32_t x3666 = 4;
	uint32_t t80 = 310581156U;

	t80 = ((x3665&(x3666*x3667))>>x3668);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x3725 = INT16_MIN;
	int32_t x3726 = 1000070;
	int8_t x3727 = INT8_MAX;
	uint8_t x3728 = 28U;
	volatile int32_t t81 = -3711947;

	t81 = ((x3725&(x3726*x3727))>>x3728);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3785 = 5169;
	int16_t x3786 = INT16_MAX;
	int8_t x3788 = 1;
	int32_t t82 = -7;

	t82 = ((x3785&(x3786*x3787))>>x3788);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x3913 = UINT8_MAX;
	int16_t x3915 = -1441;
	volatile int32_t t83 = -5;

	t83 = ((x3913&(x3914*x3915))>>x3916);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3973 = INT8_MIN;
	uint32_t x3974 = UINT32_MAX;
	uint16_t x3975 = 1137U;
	uint8_t x3976 = 11U;
	uint32_t t84 = 1891857U;

	t84 = ((x3973&(x3974*x3975))>>x3976);

	if (t84 != 2097151U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x3998 = 1LL;
	volatile int32_t x3999 = INT32_MIN;
	int32_t x4000 = 61;
	int64_t t85 = 8299439067065681LL;

	t85 = ((x3997&(x3998*x3999))>>x4000);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4009 = 517405791020629LL;
	int16_t x4010 = -1;
	int64_t x4011 = -1LL;
	volatile uint64_t x4012 = 2LLU;

	t86 = ((x4009&(x4010*x4011))>>x4012);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4025 = INT64_MAX;
	int64_t x4026 = -1LL;
	static volatile uint16_t x4027 = 12071U;
	static int8_t x4028 = 1;

	t87 = ((x4025&(x4026*x4027))>>x4028);

	if (t87 != 4611686018427381868LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4033 = 15329U;
	int64_t x4034 = -39LL;
	static int64_t x4035 = 5928LL;
	uint8_t x4036 = 27U;
	static volatile int64_t t88 = -8LL;

	t88 = ((x4033&(x4034*x4035))>>x4036);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x4133 = INT16_MIN;
	int64_t x4134 = -6923754LL;
	int32_t x4135 = INT32_MIN;
	uint8_t x4136 = 1U;
	volatile int64_t t89 = -2065541208380LL;

	t89 = ((x4133&(x4134*x4135))>>x4136);

	if (t89 != 7434324248887296LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x4139 = -2153LL;
	uint16_t x4140 = 11U;
	volatile int64_t t90 = -160270186383LL;

	t90 = ((x4137&(x4138*x4139))>>x4140);

	if (t90 != 1048474LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x4161 = UINT16_MAX;
	volatile uint64_t x4162 = 1413425LLU;
	static int32_t x4164 = 3;

	t91 = ((x4161&(x4162*x4163))>>x4164);

	if (t91 != 3312LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x4213 = 1;
	int16_t x4214 = INT16_MIN;
	volatile uint32_t x4215 = 21510495U;
	uint64_t x4216 = 3LLU;
	static uint32_t t92 = 333321U;

	t92 = ((x4213&(x4214*x4215))>>x4216);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x4249 = INT8_MAX;
	int8_t x4250 = -6;
	int16_t x4251 = 18;
	volatile uint8_t x4252 = 1U;
	static int32_t t93 = 224;

	t93 = ((x4249&(x4250*x4251))>>x4252);

	if (t93 != 10) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4253 = 33;
	volatile uint32_t x4255 = UINT32_MAX;
	volatile uint64_t t94 = 1940522754849806615LLU;

	t94 = ((x4253&(x4254*x4255))>>x4256);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4277 = UINT32_MAX;
	int8_t x4278 = 4;
	uint64_t x4279 = 73LLU;
	static int16_t x4280 = 4;
	volatile uint64_t t95 = 16545494LLU;

	t95 = ((x4277&(x4278*x4279))>>x4280);

	if (t95 != 18LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4329 = INT16_MIN;
	uint8_t x4330 = 0U;
	uint8_t x4331 = 22U;
	static uint16_t x4332 = 0U;
	volatile int32_t t96 = 294565;

	t96 = ((x4329&(x4330*x4331))>>x4332);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x4389 = INT32_MAX;
	int8_t x4390 = INT8_MIN;
	int16_t x4391 = 0;
	int16_t x4392 = 7;

	t97 = ((x4389&(x4390*x4391))>>x4392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x4513 = 2U;
	static uint8_t x4514 = 1U;
	int32_t x4515 = 1;
	uint8_t x4516 = 3U;
	uint32_t t98 = 445473U;

	t98 = ((x4513&(x4514*x4515))>>x4516);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x4585 = 25935226601LLU;
	uint8_t x4586 = 105U;
	uint64_t x4587 = 242210LLU;
	static volatile int16_t x4588 = 2;
	volatile uint64_t t99 = 5670283LLU;

	t99 = ((x4585&(x4586*x4587))>>x4588);

	if (t99 != 6357432LLU) { NG(); } else { ; }
	
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

