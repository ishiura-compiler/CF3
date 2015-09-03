#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 46802;
volatile int32_t x14 = 49;
uint8_t x17 = 6U;
volatile uint64_t x18 = 107241595LLU;
int16_t x20 = 0;
volatile int32_t t2 = 10162;
uint8_t x23 = UINT8_MAX;
static uint16_t x24 = 1U;
uint8_t x28 = 28U;
int64_t x61 = -1LL;
volatile int32_t x127 = INT32_MIN;
uint64_t x233 = 152700LLU;
int32_t t8 = -1391793;
int16_t x237 = -9723;
uint64_t x286 = 31770196LLU;
int16_t x325 = -1;
int32_t t12 = -234453;
int32_t t14 = 780741;
int32_t x483 = INT32_MAX;
static volatile int64_t x489 = INT64_MIN;
uint64_t x563 = 146143615256732LLU;
uint16_t x582 = UINT16_MAX;
volatile int64_t x583 = INT64_MIN;
int8_t x645 = -16;
static volatile int64_t x698 = -236LL;
static uint16_t x699 = 760U;
static volatile int16_t x737 = INT16_MIN;
int32_t t23 = 1437960;
int8_t x779 = -1;
volatile int32_t t27 = 162084927;
volatile int32_t t30 = -978864;
uint16_t x886 = 1812U;
uint8_t x904 = 4U;
static int32_t t32 = 2;
int8_t x917 = 2;
int64_t x919 = INT64_MAX;
uint8_t x1044 = 1U;
uint8_t x1064 = 9U;
static uint8_t x1112 = 4U;
int8_t x1117 = -17;
volatile int32_t t40 = -2;
uint32_t x1140 = 7U;
static int8_t x1257 = INT8_MIN;
int16_t x1305 = INT16_MAX;
int32_t t47 = -332791456;
int64_t x1367 = 3011183645LL;
int64_t x1387 = 6078053LL;
int32_t t52 = 15488246;
volatile int8_t x1395 = -15;
int64_t x1607 = INT64_MAX;
static uint8_t x1608 = 11U;
int32_t x1715 = -1;
uint8_t x1724 = 3U;
uint16_t x1741 = UINT16_MAX;
static int8_t x1789 = -1;
static int8_t x1791 = 2;
volatile int16_t x1795 = INT16_MAX;
volatile uint16_t x1796 = 9U;
int32_t t64 = -62;
int8_t x1844 = 0;
int32_t t67 = -211394321;
static int32_t x1904 = 3;
int16_t x1917 = INT16_MIN;
int64_t x1933 = -185760423140LL;
static int64_t x1943 = -116927LL;
int64_t x1946 = -1LL;
int64_t x1947 = -1LL;
static int16_t x1948 = 1;
volatile int32_t t72 = 765439570;
static volatile int32_t x1982 = 196889;
int16_t x1996 = 27;
uint8_t x2121 = 7U;
uint8_t x2123 = 2U;
int64_t x2158 = -1LL;
int8_t x2159 = -51;
uint8_t x2160 = 0U;
int64_t x2198 = 6546582LL;
static int32_t t80 = -1;
int8_t x2234 = INT8_MIN;
int32_t t82 = -215179;
static int32_t x2326 = INT32_MIN;
uint16_t x2328 = 6U;
volatile uint32_t x2332 = 5U;
int8_t x2395 = -9;
static volatile int32_t t89 = 616323321;
int64_t x2491 = INT64_MIN;
int8_t x2492 = 1;
volatile int16_t x2533 = 1;
uint16_t x2547 = 14U;
int16_t x2556 = 6;
uint32_t x2565 = UINT32_MAX;
int16_t x2714 = INT16_MAX;
static int8_t x2717 = 6;
volatile int64_t x2741 = -1LL;
int16_t x2743 = 83;
uint8_t x2764 = 0U;


void f0(void) {
	uint16_t x9 = UINT16_MAX;
	volatile int64_t x10 = INT64_MIN;
	int16_t x11 = INT16_MIN;
	volatile uint16_t x12 = 1U;

	t0 = ((x9==(x10|x11))>>x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = -1LL;
	uint8_t x15 = 20U;
	uint32_t x16 = 1U;
	int32_t t1 = -167;

	t1 = ((x13==(x14|x15))>>x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x19 = UINT16_MAX;

	t2 = ((x17==(x18|x19))>>x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x21 = UINT32_MAX;
	int64_t x22 = INT64_MAX;
	int32_t t3 = 586683094;

	t3 = ((x21==(x22|x23))>>x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = 1511;
	static uint32_t x26 = 0U;
	int8_t x27 = INT8_MIN;
	int32_t t4 = -661;

	t4 = ((x25==(x26|x27))>>x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x62 = INT8_MIN;
	volatile int32_t x63 = -594;
	uint64_t x64 = 0LLU;
	static volatile int32_t t5 = -170;

	t5 = ((x61==(x62|x63))>>x64);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x125 = -55;
	int16_t x126 = 13965;
	uint8_t x128 = 22U;
	volatile int32_t t6 = -7240;

	t6 = ((x125==(x126|x127))>>x128);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MIN;
	static int8_t x175 = -1;
	volatile uint8_t x176 = 10U;
	volatile int32_t t7 = -21718;

	t7 = ((x173==(x174|x175))>>x176);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x234 = 7843565570523774LL;
	int8_t x235 = -1;
	uint16_t x236 = 11U;

	t8 = ((x233==(x234|x235))>>x236);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x238 = 14U;
	int16_t x239 = INT16_MIN;
	volatile uint8_t x240 = 0U;
	volatile int32_t t9 = -11;

	t9 = ((x237==(x238|x239))>>x240);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x285 = 686868065LL;
	uint32_t x287 = UINT32_MAX;
	static uint32_t x288 = 0U;
	int32_t t10 = -110;

	t10 = ((x285==(x286|x287))>>x288);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x321 = 1069298060U;
	volatile uint32_t x322 = 41743809U;
	static volatile int32_t x323 = -1;
	uint8_t x324 = 0U;
	volatile int32_t t11 = 734217;

	t11 = ((x321==(x322|x323))>>x324);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x326 = INT8_MIN;
	uint16_t x327 = 3U;
	uint64_t x328 = 0LLU;

	t12 = ((x325==(x326|x327))>>x328);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x429 = -27;
	int16_t x430 = INT16_MIN;
	int32_t x431 = -394;
	volatile uint8_t x432 = 6U;
	volatile int32_t t13 = 15;

	t13 = ((x429==(x430|x431))>>x432);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x461 = INT32_MIN;
	int32_t x462 = INT32_MIN;
	static uint16_t x463 = UINT16_MAX;
	volatile uint16_t x464 = 3U;

	t14 = ((x461==(x462|x463))>>x464);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x481 = 933U;
	int64_t x482 = -1LL;
	int16_t x484 = 7;
	static volatile int32_t t15 = 8756;

	t15 = ((x481==(x482|x483))>>x484);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x490 = -1LL;
	static int32_t x491 = INT32_MAX;
	uint64_t x492 = 30LLU;
	volatile int32_t t16 = 0;

	t16 = ((x489==(x490|x491))>>x492);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x525 = -57;
	int64_t x526 = -169281352LL;
	uint16_t x527 = 459U;
	int8_t x528 = 0;
	int32_t t17 = -3;

	t17 = ((x525==(x526|x527))>>x528);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x561 = -1;
	uint64_t x562 = UINT64_MAX;
	uint8_t x564 = 0U;
	int32_t t18 = -20;

	t18 = ((x561==(x562|x563))>>x564);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x581 = INT64_MAX;
	volatile int8_t x584 = 7;
	volatile int32_t t19 = -1;

	t19 = ((x581==(x582|x583))>>x584);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x646 = -1;
	static int16_t x647 = INT16_MAX;
	volatile int16_t x648 = 0;
	volatile int32_t t20 = 2663;

	t20 = ((x645==(x646|x647))>>x648);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x673 = INT32_MIN;
	uint16_t x674 = 44U;
	volatile int64_t x675 = -1LL;
	static int8_t x676 = 0;
	volatile int32_t t21 = 7887;

	t21 = ((x673==(x674|x675))>>x676);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x697 = -1;
	volatile uint8_t x700 = 7U;
	int32_t t22 = -57004;

	t22 = ((x697==(x698|x699))>>x700);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x738 = 34;
	int64_t x739 = INT64_MIN;
	static uint8_t x740 = 7U;

	t23 = ((x737==(x738|x739))>>x740);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x749 = 1;
	int16_t x750 = -15;
	int16_t x751 = INT16_MIN;
	int8_t x752 = 1;
	volatile int32_t t24 = 105723;

	t24 = ((x749==(x750|x751))>>x752);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x773 = 4622011U;
	int8_t x774 = INT8_MIN;
	int16_t x775 = -4658;
	int8_t x776 = 3;
	int32_t t25 = 6878;

	t25 = ((x773==(x774|x775))>>x776);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x777 = 13U;
	int8_t x778 = INT8_MIN;
	uint8_t x780 = 15U;
	int32_t t26 = 2205;

	t26 = ((x777==(x778|x779))>>x780);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x793 = 6109300LLU;
	uint32_t x794 = 3480U;
	uint16_t x795 = UINT16_MAX;
	static uint16_t x796 = 15U;

	t27 = ((x793==(x794|x795))>>x796);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x841 = UINT32_MAX;
	int8_t x842 = INT8_MAX;
	uint16_t x843 = UINT16_MAX;
	uint32_t x844 = 1U;
	int32_t t28 = -17211;

	t28 = ((x841==(x842|x843))>>x844);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x869 = INT64_MIN;
	int32_t x870 = INT32_MIN;
	int16_t x871 = INT16_MIN;
	uint8_t x872 = 12U;
	volatile int32_t t29 = -5983863;

	t29 = ((x869==(x870|x871))>>x872);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x881 = 112U;
	static volatile int8_t x882 = INT8_MIN;
	int16_t x883 = INT16_MIN;
	int8_t x884 = 9;

	t30 = ((x881==(x882|x883))>>x884);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x885 = INT64_MAX;
	static int8_t x887 = INT8_MAX;
	uint8_t x888 = 10U;
	int32_t t31 = 4879;

	t31 = ((x885==(x886|x887))>>x888);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x901 = INT64_MIN;
	int32_t x902 = INT32_MIN;
	volatile uint32_t x903 = 17U;

	t32 = ((x901==(x902|x903))>>x904);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x918 = 0;
	int16_t x920 = 3;
	volatile int32_t t33 = -4377724;

	t33 = ((x917==(x918|x919))>>x920);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1041 = 206151193028LLU;
	int16_t x1042 = INT16_MIN;
	volatile int8_t x1043 = -1;
	int32_t t34 = 2466502;

	t34 = ((x1041==(x1042|x1043))>>x1044);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1053 = INT8_MIN;
	int8_t x1054 = INT8_MIN;
	int64_t x1055 = INT64_MIN;
	volatile int16_t x1056 = 1;
	static volatile int32_t t35 = 907;

	t35 = ((x1053==(x1054|x1055))>>x1056);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x1061 = 3U;
	uint16_t x1062 = 3U;
	static uint16_t x1063 = 0U;
	static int32_t t36 = 26050;

	t36 = ((x1061==(x1062|x1063))>>x1064);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x1081 = -1;
	static volatile int16_t x1082 = INT16_MIN;
	uint64_t x1083 = UINT64_MAX;
	volatile int8_t x1084 = 0;
	static int32_t t37 = -2;

	t37 = ((x1081==(x1082|x1083))>>x1084);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x1101 = INT64_MIN;
	static int64_t x1102 = INT64_MIN;
	uint16_t x1103 = UINT16_MAX;
	volatile uint8_t x1104 = 0U;
	volatile int32_t t38 = -25;

	t38 = ((x1101==(x1102|x1103))>>x1104);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1109 = 452024558969318143LLU;
	uint64_t x1110 = 14205693474LLU;
	uint32_t x1111 = 159U;
	volatile int32_t t39 = -285295050;

	t39 = ((x1109==(x1110|x1111))>>x1112);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1118 = INT64_MIN;
	static int64_t x1119 = -1076LL;
	int16_t x1120 = 1;

	t40 = ((x1117==(x1118|x1119))>>x1120);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1137 = UINT64_MAX;
	int64_t x1138 = -1LL;
	static int64_t x1139 = -1LL;
	int32_t t41 = -31577;

	t41 = ((x1137==(x1138|x1139))>>x1140);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1189 = 477U;
	int8_t x1190 = INT8_MIN;
	uint16_t x1191 = 1927U;
	uint8_t x1192 = 29U;
	int32_t t42 = 2808597;

	t42 = ((x1189==(x1190|x1191))>>x1192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1258 = 30;
	uint32_t x1259 = 199U;
	int8_t x1260 = 4;
	int32_t t43 = 1;

	t43 = ((x1257==(x1258|x1259))>>x1260);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1265 = INT16_MIN;
	uint16_t x1266 = 24U;
	int8_t x1267 = INT8_MIN;
	int64_t x1268 = 0LL;
	volatile int32_t t44 = -109730367;

	t44 = ((x1265==(x1266|x1267))>>x1268);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1289 = UINT16_MAX;
	int16_t x1290 = INT16_MIN;
	uint16_t x1291 = 3U;
	uint8_t x1292 = 2U;
	volatile int32_t t45 = 216746378;

	t45 = ((x1289==(x1290|x1291))>>x1292);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x1297 = -1;
	static volatile int8_t x1298 = 0;
	uint64_t x1299 = 16474158LLU;
	uint64_t x1300 = 14LLU;
	int32_t t46 = 130056;

	t46 = ((x1297==(x1298|x1299))>>x1300);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1306 = -1LL;
	uint8_t x1307 = UINT8_MAX;
	int16_t x1308 = 2;

	t47 = ((x1305==(x1306|x1307))>>x1308);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x1329 = 1U;
	int64_t x1330 = 66930151LL;
	uint16_t x1331 = 1814U;
	uint32_t x1332 = 2U;
	static int32_t t48 = -121418;

	t48 = ((x1329==(x1330|x1331))>>x1332);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1345 = 2U;
	volatile int32_t x1346 = 2738921;
	volatile int16_t x1347 = INT16_MIN;
	static uint16_t x1348 = 0U;
	static int32_t t49 = -86344;

	t49 = ((x1345==(x1346|x1347))>>x1348);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1361 = -5788152333441LL;
	int16_t x1362 = 1;
	uint32_t x1363 = 7233625U;
	uint8_t x1364 = 2U;
	int32_t t50 = 19;

	t50 = ((x1361==(x1362|x1363))>>x1364);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x1365 = 5165507U;
	int64_t x1366 = -3817969818570LL;
	int8_t x1368 = 1;
	volatile int32_t t51 = 9;

	t51 = ((x1365==(x1366|x1367))>>x1368);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x1385 = 334169124332661376LLU;
	static uint16_t x1386 = 4U;
	uint8_t x1388 = 0U;

	t52 = ((x1385==(x1386|x1387))>>x1388);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1393 = 16607823291300LLU;
	int64_t x1394 = INT64_MIN;
	static int8_t x1396 = 0;
	int32_t t53 = 974;

	t53 = ((x1393==(x1394|x1395))>>x1396);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x1509 = -1;
	int8_t x1510 = -1;
	static volatile int16_t x1511 = INT16_MIN;
	int16_t x1512 = 1;
	volatile int32_t t54 = -347;

	t54 = ((x1509==(x1510|x1511))>>x1512);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x1605 = 4402LLU;
	volatile uint8_t x1606 = 6U;
	volatile int32_t t55 = 44682;

	t55 = ((x1605==(x1606|x1607))>>x1608);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1689 = INT64_MIN;
	uint32_t x1690 = 76U;
	volatile int64_t x1691 = 30828LL;
	static int32_t x1692 = 2;
	int32_t t56 = -82539500;

	t56 = ((x1689==(x1690|x1691))>>x1692);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1713 = 4360255879LLU;
	int8_t x1714 = INT8_MAX;
	int16_t x1716 = 0;
	static int32_t t57 = -167;

	t57 = ((x1713==(x1714|x1715))>>x1716);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1721 = INT32_MAX;
	volatile int16_t x1722 = -7026;
	int32_t x1723 = 2813621;
	static int32_t t58 = -9397282;

	t58 = ((x1721==(x1722|x1723))>>x1724);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1742 = UINT64_MAX;
	static int16_t x1743 = INT16_MAX;
	static uint8_t x1744 = 4U;
	int32_t t59 = -6;

	t59 = ((x1741==(x1742|x1743))>>x1744);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x1769 = 42727523LLU;
	uint8_t x1770 = 0U;
	static int8_t x1771 = 0;
	uint16_t x1772 = 11U;
	int32_t t60 = -18425979;

	t60 = ((x1769==(x1770|x1771))>>x1772);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1777 = INT64_MIN;
	volatile int8_t x1778 = INT8_MAX;
	int8_t x1779 = INT8_MIN;
	uint16_t x1780 = 1U;
	int32_t t61 = -51;

	t61 = ((x1777==(x1778|x1779))>>x1780);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x1790 = UINT32_MAX;
	static int8_t x1792 = 3;
	volatile int32_t t62 = 460274;

	t62 = ((x1789==(x1790|x1791))>>x1792);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1793 = -1;
	static volatile uint16_t x1794 = 25683U;
	int32_t t63 = 8750691;

	t63 = ((x1793==(x1794|x1795))>>x1796);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x1837 = 19146364LLU;
	uint16_t x1838 = 13850U;
	volatile int16_t x1839 = -11;
	static int8_t x1840 = 3;

	t64 = ((x1837==(x1838|x1839))>>x1840);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x1841 = INT64_MIN;
	int8_t x1842 = -1;
	int16_t x1843 = -812;
	int32_t t65 = 303;

	t65 = ((x1841==(x1842|x1843))>>x1844);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1853 = -24947157;
	uint8_t x1854 = UINT8_MAX;
	static int64_t x1855 = INT64_MIN;
	uint16_t x1856 = 1U;
	static volatile int32_t t66 = -3141;

	t66 = ((x1853==(x1854|x1855))>>x1856);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1897 = 25;
	uint8_t x1898 = UINT8_MAX;
	static int16_t x1899 = INT16_MIN;
	uint16_t x1900 = 0U;

	t67 = ((x1897==(x1898|x1899))>>x1900);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1901 = INT16_MIN;
	uint32_t x1902 = 121U;
	uint8_t x1903 = UINT8_MAX;
	static int32_t t68 = 463634;

	t68 = ((x1901==(x1902|x1903))>>x1904);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x1918 = -1LL;
	int16_t x1919 = INT16_MIN;
	int8_t x1920 = 1;
	int32_t t69 = 25531;

	t69 = ((x1917==(x1918|x1919))>>x1920);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x1934 = INT16_MIN;
	uint64_t x1935 = 53642LLU;
	int32_t x1936 = 1;
	volatile int32_t t70 = -1847;

	t70 = ((x1933==(x1934|x1935))>>x1936);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x1941 = 311681U;
	volatile int8_t x1942 = -4;
	uint8_t x1944 = 0U;
	int32_t t71 = 3492244;

	t71 = ((x1941==(x1942|x1943))>>x1944);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x1945 = UINT64_MAX;

	t72 = ((x1945==(x1946|x1947))>>x1948);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x1981 = -1;
	int64_t x1983 = INT64_MIN;
	uint8_t x1984 = 9U;
	volatile int32_t t73 = 9909;

	t73 = ((x1981==(x1982|x1983))>>x1984);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x1993 = -1;
	static volatile int32_t x1994 = INT32_MIN;
	int32_t x1995 = INT32_MIN;
	static volatile int32_t t74 = -1;

	t74 = ((x1993==(x1994|x1995))>>x1996);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x2009 = 65U;
	int32_t x2010 = 1;
	int16_t x2011 = INT16_MAX;
	uint16_t x2012 = 7U;
	int32_t t75 = 6;

	t75 = ((x2009==(x2010|x2011))>>x2012);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x2122 = INT8_MAX;
	static uint32_t x2124 = 0U;
	int32_t t76 = -17352;

	t76 = ((x2121==(x2122|x2123))>>x2124);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x2157 = -8690;
	int32_t t77 = 3;

	t77 = ((x2157==(x2158|x2159))>>x2160);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2173 = 522004207779449LL;
	int16_t x2174 = INT16_MAX;
	int32_t x2175 = INT32_MAX;
	static volatile uint64_t x2176 = 2LLU;
	int32_t t78 = 63069430;

	t78 = ((x2173==(x2174|x2175))>>x2176);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x2197 = 2497;
	int32_t x2199 = INT32_MIN;
	int32_t x2200 = 1;
	volatile int32_t t79 = 79358;

	t79 = ((x2197==(x2198|x2199))>>x2200);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2221 = 786899U;
	static volatile int32_t x2222 = -1;
	uint32_t x2223 = 702080U;
	volatile uint8_t x2224 = 0U;

	t80 = ((x2221==(x2222|x2223))>>x2224);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2233 = -1;
	int64_t x2235 = INT64_MIN;
	static uint8_t x2236 = 15U;
	int32_t t81 = -2;

	t81 = ((x2233==(x2234|x2235))>>x2236);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x2253 = -1;
	uint16_t x2254 = 58U;
	int32_t x2255 = 217;
	int64_t x2256 = 0LL;

	t82 = ((x2253==(x2254|x2255))>>x2256);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2265 = 350693852580266548LL;
	int8_t x2266 = -1;
	volatile int8_t x2267 = INT8_MIN;
	volatile uint64_t x2268 = 16LLU;
	static int32_t t83 = 10722;

	t83 = ((x2265==(x2266|x2267))>>x2268);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2309 = 3214209098470LL;
	static uint16_t x2310 = UINT16_MAX;
	int16_t x2311 = -1;
	int16_t x2312 = 0;
	int32_t t84 = -251953084;

	t84 = ((x2309==(x2310|x2311))>>x2312);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x2321 = -1;
	int8_t x2322 = INT8_MIN;
	int8_t x2323 = INT8_MAX;
	uint32_t x2324 = 20U;
	int32_t t85 = -1;

	t85 = ((x2321==(x2322|x2323))>>x2324);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2325 = 56;
	int16_t x2327 = INT16_MIN;
	int32_t t86 = 11010;

	t86 = ((x2325==(x2326|x2327))>>x2328);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x2329 = 13U;
	uint32_t x2330 = 1631678U;
	int64_t x2331 = INT64_MAX;
	volatile int32_t t87 = 9;

	t87 = ((x2329==(x2330|x2331))>>x2332);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x2393 = UINT8_MAX;
	static int64_t x2394 = INT64_MAX;
	static int8_t x2396 = 29;
	int32_t t88 = 1202;

	t88 = ((x2393==(x2394|x2395))>>x2396);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x2473 = -1;
	uint8_t x2474 = 37U;
	static volatile uint16_t x2475 = 3260U;
	volatile int8_t x2476 = 0;

	t89 = ((x2473==(x2474|x2475))>>x2476);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x2489 = -1LL;
	int64_t x2490 = -6057LL;
	static volatile int32_t t90 = -2009677;

	t90 = ((x2489==(x2490|x2491))>>x2492);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2534 = 42715407;
	int32_t x2535 = -1;
	uint8_t x2536 = 7U;
	int32_t t91 = 18715;

	t91 = ((x2533==(x2534|x2535))>>x2536);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x2545 = 1556698281U;
	uint64_t x2546 = 5238LLU;
	uint64_t x2548 = 9LLU;
	int32_t t92 = -1184;

	t92 = ((x2545==(x2546|x2547))>>x2548);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x2553 = UINT32_MAX;
	int16_t x2554 = INT16_MAX;
	uint32_t x2555 = UINT32_MAX;
	volatile int32_t t93 = -22979;

	t93 = ((x2553==(x2554|x2555))>>x2556);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2566 = -3;
	int64_t x2567 = 84517015446654LL;
	int8_t x2568 = 0;
	static volatile int32_t t94 = -5;

	t94 = ((x2565==(x2566|x2567))>>x2568);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x2713 = 60U;
	static uint16_t x2715 = UINT16_MAX;
	uint8_t x2716 = 6U;
	volatile int32_t t95 = -49059;

	t95 = ((x2713==(x2714|x2715))>>x2716);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x2718 = 0U;
	static int8_t x2719 = -1;
	uint8_t x2720 = 7U;
	volatile int32_t t96 = 62412;

	t96 = ((x2717==(x2718|x2719))>>x2720);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x2742 = 46U;
	uint16_t x2744 = 2U;
	volatile int32_t t97 = 6;

	t97 = ((x2741==(x2742|x2743))>>x2744);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x2757 = INT64_MIN;
	int64_t x2758 = 220790158145973LL;
	int64_t x2759 = -1LL;
	uint32_t x2760 = 14U;
	int32_t t98 = -2250;

	t98 = ((x2757==(x2758|x2759))>>x2760);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x2761 = 768452501U;
	volatile int8_t x2762 = -1;
	int64_t x2763 = INT64_MIN;
	int32_t t99 = -142115;

	t99 = ((x2761==(x2762|x2763))>>x2764);

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

