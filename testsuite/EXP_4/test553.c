#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x22 = 0;
int32_t x23 = INT32_MIN;
static int32_t t1 = 253603836;
uint8_t x49 = 63U;
uint32_t x50 = 28714U;
int64_t x51 = INT64_MIN;
static volatile int32_t t2 = -200681;
uint64_t x206 = 22239LLU;
static volatile int32_t t4 = 2;
volatile int64_t x221 = INT64_MAX;
static volatile int64_t x231 = INT64_MAX;
int64_t x294 = -1LL;
int16_t x295 = INT16_MIN;
volatile uint32_t x307 = UINT32_MAX;
int8_t x308 = INT8_MAX;
int64_t t9 = INT64_MAX;
uint64_t x373 = 622494028LLU;
volatile int32_t t12 = -462;
int64_t x393 = INT64_MAX;
int8_t x402 = INT8_MAX;
int64_t x403 = INT64_MAX;
static int64_t x515 = 14191450686831LL;
static int64_t x516 = -1LL;
int16_t x534 = -31;
int32_t t18 = 752748725;
int32_t t20 = 791439961;
int16_t x738 = INT16_MIN;
int64_t x827 = INT64_MIN;
volatile int16_t x867 = INT16_MAX;
int64_t x963 = INT64_MAX;
uint64_t x982 = UINT64_MAX;
uint16_t x983 = UINT16_MAX;
static int8_t x984 = INT8_MIN;
int64_t x1005 = 2360170325319767069LL;
int8_t x1006 = 7;
int16_t x1032 = 29;
uint32_t t34 = 18968376U;
static int32_t x1043 = INT32_MIN;
int8_t x1044 = INT8_MIN;
static uint8_t x1100 = 12U;
uint32_t t38 = 17U;
int64_t x1103 = INT64_MAX;
int64_t t40 = INT64_MAX;
int8_t x1264 = 2;
int16_t x1326 = INT16_MIN;
volatile int64_t x1352 = -29196859170LL;
uint8_t x1410 = 2U;
volatile int32_t t46 = 13;
uint32_t x1481 = UINT32_MAX;
uint16_t x1482 = 0U;
static uint8_t x1484 = UINT8_MAX;
uint32_t x1501 = 861U;
static uint32_t x1541 = UINT32_MAX;
uint32_t x1543 = 180064U;
uint32_t x1544 = 75U;
int32_t x1579 = 174053912;
volatile int32_t t52 = 11;
int8_t x1663 = INT8_MAX;
uint64_t x1677 = 3368563447LLU;
int8_t x1678 = INT8_MAX;
uint64_t t54 = 2341946847848613LLU;
int8_t x1713 = 45;
int64_t x1715 = INT64_MIN;
static volatile int32_t t55 = -229086488;
uint32_t x1761 = 120969009U;
volatile uint32_t t56 = 472815U;
static uint16_t x1849 = UINT16_MAX;
int32_t t59 = -58;
uint64_t x1933 = 2678852941LLU;
int16_t x1989 = 68;
int64_t x1990 = 5584844LL;
volatile int8_t x1991 = -1;
int32_t t64 = 4899;
static volatile int8_t x2033 = INT8_MAX;
int64_t x2035 = INT64_MIN;
volatile uint32_t t67 = 869103U;
int16_t x2102 = -15524;
static int64_t x2184 = -1LL;
volatile int32_t t71 = -183;
uint8_t x2193 = 52U;
int32_t x2195 = INT32_MIN;
volatile int32_t t72 = 27;
uint16_t x2198 = 9U;
int64_t x2233 = INT64_MAX;
volatile int16_t x2239 = INT16_MIN;
static volatile int32_t t75 = -57894966;
volatile int16_t x2326 = 37;
volatile int32_t x2337 = INT32_MAX;
volatile int32_t t80 = INT32_MAX;
int8_t x2366 = -1;
uint64_t t81 = 66254444783860447LLU;
uint16_t x2408 = 39U;
volatile uint64_t t82 = UINT64_MAX;
uint16_t x2430 = 54U;
uint32_t x2473 = 10U;
static volatile uint64_t x2517 = UINT64_MAX;
uint64_t t85 = 508776655165266456LLU;
static volatile uint32_t x2603 = UINT32_MAX;
int32_t t89 = -7850025;
int32_t x2623 = INT32_MIN;
uint16_t x2765 = UINT16_MAX;
int8_t x2766 = INT8_MAX;
static int32_t x2767 = INT32_MIN;
int16_t x2775 = INT16_MAX;
int8_t x2776 = -1;
volatile int32_t t94 = -90268499;
int8_t x2786 = -35;
static uint16_t x2787 = UINT16_MAX;
int8_t x2788 = -1;
volatile uint16_t x2794 = 3U;
int32_t x2865 = INT32_MAX;


void f0(void) {
	static int64_t x9 = 28779601694417LL;
	static int16_t x10 = -152;
	uint8_t x11 = UINT8_MAX;
	static volatile int16_t x12 = -2;
	static int64_t t0 = -38LL;

	t0 = (x9>>(x10/(x11/x12)));

	if (t0 != 14389800847208LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x21 = 2;
	int8_t x24 = -2;

	t1 = (x21>>(x22/(x23/x24)));

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x52 = 218192U;

	t2 = (x49>>(x50/(x51/x52)));

	if (t2 != 63) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x201 = 1637U;
	static int8_t x202 = 30;
	static uint64_t x203 = UINT64_MAX;
	int16_t x204 = -60;
	int32_t t3 = -2363949;

	t3 = (x201>>(x202/(x203/x204)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x205 = 88U;
	int64_t x207 = INT64_MIN;
	volatile int32_t x208 = INT32_MIN;

	t4 = (x205>>(x206/(x207/x208)));

	if (t4 != 88) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x222 = 1130LL;
	int64_t x223 = INT64_MAX;
	int16_t x224 = INT16_MIN;
	volatile int64_t t5 = INT64_MAX;

	t5 = (x221>>(x222/(x223/x224)));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x229 = 588155U;
	int16_t x230 = INT16_MIN;
	int8_t x232 = INT8_MIN;
	volatile uint32_t t6 = 11U;

	t6 = (x229>>(x230/(x231/x232)));

	if (t6 != 588155U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x233 = 243;
	int8_t x234 = -49;
	uint64_t x235 = 4048651475055718471LLU;
	volatile uint32_t x236 = 1U;
	int32_t t7 = -832954167;

	t7 = (x233>>(x234/(x235/x236)));

	if (t7 != 15) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x293 = 228948U;
	volatile int16_t x296 = INT16_MAX;
	uint32_t t8 = 294457237U;

	t8 = (x293>>(x294/(x295/x296)));

	if (t8 != 114474U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x305 = INT64_MAX;
	int64_t x306 = -1LL;

	t9 = (x305>>(x306/(x307/x308)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x374 = 0;
	static uint64_t x375 = 8579143LLU;
	static uint8_t x376 = 6U;
	uint64_t t10 = 130008028359LLU;

	t10 = (x373>>(x374/(x375/x376)));

	if (t10 != 622494028LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x377 = 5U;
	int8_t x378 = INT8_MIN;
	int32_t x379 = INT32_MIN;
	static int8_t x380 = INT8_MIN;
	volatile uint32_t t11 = 41868U;

	t11 = (x377>>(x378/(x379/x380)));

	if (t11 != 5U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x389 = UINT16_MAX;
	static int64_t x390 = -1LL;
	static int64_t x391 = INT64_MIN;
	int64_t x392 = INT64_MAX;

	t12 = (x389>>(x390/(x391/x392)));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x394 = INT32_MAX;
	int64_t x395 = INT64_MAX;
	int8_t x396 = INT8_MIN;
	volatile int64_t t13 = INT64_MAX;

	t13 = (x393>>(x394/(x395/x396)));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x401 = 237089835857LLU;
	uint32_t x404 = 576U;
	volatile uint64_t t14 = 2350151LLU;

	t14 = (x401>>(x402/(x403/x404)));

	if (t14 != 237089835857LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x493 = 1U;
	int8_t x494 = 0;
	static int32_t x495 = INT32_MIN;
	uint16_t x496 = 9506U;
	static volatile int32_t t15 = 5420088;

	t15 = (x493>>(x494/(x495/x496)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x509 = UINT8_MAX;
	uint16_t x510 = 51U;
	int64_t x511 = INT64_MIN;
	uint16_t x512 = 7U;
	volatile int32_t t16 = -448605;

	t16 = (x509>>(x510/(x511/x512)));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x513 = 4060132;
	static volatile uint16_t x514 = UINT16_MAX;
	int32_t t17 = -13138864;

	t17 = (x513>>(x514/(x515/x516)));

	if (t17 != 4060132) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x533 = UINT16_MAX;
	int16_t x535 = INT16_MIN;
	int8_t x536 = INT8_MIN;

	t18 = (x533>>(x534/(x535/x536)));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x573 = UINT32_MAX;
	int64_t x574 = 3592LL;
	int64_t x575 = INT64_MIN;
	uint8_t x576 = UINT8_MAX;
	uint32_t t19 = UINT32_MAX;

	t19 = (x573>>(x574/(x575/x576)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x665 = UINT8_MAX;
	int16_t x666 = -1;
	int64_t x667 = INT64_MIN;
	int64_t x668 = INT64_MAX;

	t20 = (x665>>(x666/(x667/x668)));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x681 = 1;
	uint16_t x682 = 2U;
	uint8_t x683 = UINT8_MAX;
	int16_t x684 = 97;
	int32_t t21 = 710634;

	t21 = (x681>>(x682/(x683/x684)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x709 = INT8_MAX;
	volatile int8_t x710 = INT8_MIN;
	uint8_t x711 = 114U;
	volatile int32_t x712 = -1;
	volatile int32_t t22 = -10689;

	t22 = (x709>>(x710/(x711/x712)));

	if (t22 != 63) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x737 = INT64_MAX;
	int64_t x739 = INT64_MIN;
	int8_t x740 = INT8_MIN;
	volatile int64_t t23 = INT64_MAX;

	t23 = (x737>>(x738/(x739/x740)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x825 = INT8_MAX;
	int8_t x826 = INT8_MAX;
	static int32_t x828 = -11;
	volatile int32_t t24 = 10364;

	t24 = (x825>>(x826/(x827/x828)));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x865 = INT64_MAX;
	uint32_t x866 = 1U;
	uint8_t x868 = 6U;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x865>>(x866/(x867/x868)));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x889 = 7995U;
	int64_t x890 = -1LL;
	int64_t x891 = INT64_MAX;
	volatile uint32_t x892 = 509469U;
	uint32_t t26 = 23315U;

	t26 = (x889>>(x890/(x891/x892)));

	if (t26 != 7995U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x905 = UINT8_MAX;
	volatile uint16_t x906 = 920U;
	int64_t x907 = INT64_MIN;
	int32_t x908 = INT32_MIN;
	static volatile int32_t t27 = 44;

	t27 = (x905>>(x906/(x907/x908)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x917 = UINT16_MAX;
	uint64_t x918 = UINT64_MAX;
	int16_t x919 = INT16_MIN;
	int8_t x920 = 1;
	int32_t t28 = 7573;

	t28 = (x917>>(x918/(x919/x920)));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x929 = 123574U;
	uint8_t x930 = 0U;
	int8_t x931 = INT8_MIN;
	int8_t x932 = INT8_MIN;
	uint32_t t29 = 1557818223U;

	t29 = (x929>>(x930/(x931/x932)));

	if (t29 != 123574U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x961 = UINT16_MAX;
	int32_t x962 = 8;
	static int8_t x964 = INT8_MAX;
	volatile int32_t t30 = 77320;

	t30 = (x961>>(x962/(x963/x964)));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x965 = UINT8_MAX;
	int32_t x966 = 2561761;
	int32_t x967 = INT32_MIN;
	int64_t x968 = -1LL;
	volatile int32_t t31 = -21;

	t31 = (x965>>(x966/(x967/x968)));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x981 = UINT16_MAX;
	int32_t t32 = -12218;

	t32 = (x981>>(x982/(x983/x984)));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1007 = UINT64_MAX;
	uint16_t x1008 = 3U;
	int64_t t33 = 0LL;

	t33 = (x1005>>(x1006/(x1007/x1008)));

	if (t33 != 2360170325319767069LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1029 = 32727U;
	int8_t x1030 = INT8_MIN;
	int32_t x1031 = INT32_MAX;

	t34 = (x1029>>(x1030/(x1031/x1032)));

	if (t34 != 32727U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x1041 = 3630U;
	int16_t x1042 = INT16_MIN;
	static int32_t t35 = -473536851;

	t35 = (x1041>>(x1042/(x1043/x1044)));

	if (t35 != 3630) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1061 = 4;
	uint32_t x1062 = 1532U;
	int16_t x1063 = INT16_MIN;
	uint16_t x1064 = 2217U;
	static int32_t t36 = -266497742;

	t36 = (x1061>>(x1062/(x1063/x1064)));

	if (t36 != 4) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x1069 = UINT32_MAX;
	static int64_t x1070 = -1LL;
	static int64_t x1071 = INT64_MAX;
	static volatile int16_t x1072 = INT16_MIN;
	uint32_t t37 = UINT32_MAX;

	t37 = (x1069>>(x1070/(x1071/x1072)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x1097 = UINT32_MAX;
	int16_t x1098 = INT16_MIN;
	int16_t x1099 = INT16_MIN;

	t38 = (x1097>>(x1098/(x1099/x1100)));

	if (t38 != 1048575U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x1101 = 7915;
	int32_t x1102 = -294915;
	static int16_t x1104 = 756;
	volatile int32_t t39 = 114536;

	t39 = (x1101>>(x1102/(x1103/x1104)));

	if (t39 != 7915) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1113 = INT64_MAX;
	int16_t x1114 = INT16_MAX;
	static int64_t x1115 = -49014064007LL;
	int16_t x1116 = 374;

	t40 = (x1113>>(x1114/(x1115/x1116)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1261 = INT16_MAX;
	volatile int32_t x1262 = -212;
	int8_t x1263 = INT8_MIN;
	int32_t t41 = 12134450;

	t41 = (x1261>>(x1262/(x1263/x1264)));

	if (t41 != 4095) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1273 = 0;
	static uint32_t x1274 = 516804006U;
	static volatile int32_t x1275 = INT32_MIN;
	uint8_t x1276 = UINT8_MAX;
	static int32_t t42 = 3586;

	t42 = (x1273>>(x1274/(x1275/x1276)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1325 = INT16_MAX;
	int32_t x1327 = INT32_MAX;
	int64_t x1328 = -1LL;
	int32_t t43 = 82;

	t43 = (x1325>>(x1326/(x1327/x1328)));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1349 = 63U;
	int8_t x1350 = INT8_MIN;
	int64_t x1351 = 1322615082266LL;
	int32_t t44 = 1;

	t44 = (x1349>>(x1350/(x1351/x1352)));

	if (t44 != 15) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1393 = 8178;
	int32_t x1394 = 3992945;
	int64_t x1395 = INT64_MIN;
	uint16_t x1396 = UINT16_MAX;
	static volatile int32_t t45 = 42560;

	t45 = (x1393>>(x1394/(x1395/x1396)));

	if (t45 != 8178) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1409 = UINT16_MAX;
	int8_t x1411 = INT8_MIN;
	volatile uint32_t x1412 = 7U;

	t46 = (x1409>>(x1410/(x1411/x1412)));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1413 = 42349362733144LLU;
	int8_t x1414 = 3;
	static int64_t x1415 = INT64_MAX;
	int8_t x1416 = -1;
	static volatile uint64_t t47 = 33179408943LLU;

	t47 = (x1413>>(x1414/(x1415/x1416)));

	if (t47 != 42349362733144LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x1441 = UINT8_MAX;
	int32_t x1442 = 0;
	int32_t x1443 = INT32_MAX;
	int16_t x1444 = INT16_MIN;
	int32_t t48 = 26894;

	t48 = (x1441>>(x1442/(x1443/x1444)));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1483 = 492U;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = (x1481>>(x1482/(x1483/x1484)));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1502 = -97316081;
	int64_t x1503 = 18054291066LL;
	int8_t x1504 = INT8_MAX;
	uint32_t t50 = 101U;

	t50 = (x1501>>(x1502/(x1503/x1504)));

	if (t50 != 861U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1542 = INT8_MAX;
	uint32_t t51 = UINT32_MAX;

	t51 = (x1541>>(x1542/(x1543/x1544)));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1577 = 0;
	volatile uint8_t x1578 = 33U;
	int32_t x1580 = -122809;

	t52 = (x1577>>(x1578/(x1579/x1580)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1661 = INT32_MAX;
	static int8_t x1662 = INT8_MAX;
	int16_t x1664 = 1;
	int32_t t53 = 1;

	t53 = (x1661>>(x1662/(x1663/x1664)));

	if (t53 != 1073741823) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1679 = INT64_MAX;
	volatile uint8_t x1680 = 13U;

	t54 = (x1677>>(x1678/(x1679/x1680)));

	if (t54 != 3368563447LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1714 = UINT16_MAX;
	int32_t x1716 = INT32_MIN;

	t55 = (x1713>>(x1714/(x1715/x1716)));

	if (t55 != 45) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x1762 = 13U;
	int8_t x1763 = -1;
	int8_t x1764 = -1;

	t56 = (x1761>>(x1762/(x1763/x1764)));

	if (t56 != 14766U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1801 = UINT64_MAX;
	int16_t x1802 = -1574;
	int64_t x1803 = -1849377791890306538LL;
	int32_t x1804 = INT32_MAX;
	uint64_t t57 = UINT64_MAX;

	t57 = (x1801>>(x1802/(x1803/x1804)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1850 = UINT8_MAX;
	int64_t x1851 = INT64_MIN;
	volatile uint8_t x1852 = 35U;
	volatile int32_t t58 = 6;

	t58 = (x1849>>(x1850/(x1851/x1852)));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x1885 = 2U;
	uint64_t x1886 = 5019620161717075LLU;
	static volatile int32_t x1887 = INT32_MAX;
	static int64_t x1888 = -1LL;

	t59 = (x1885>>(x1886/(x1887/x1888)));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1889 = 109U;
	volatile uint8_t x1890 = 46U;
	int32_t x1891 = INT32_MAX;
	int64_t x1892 = -1LL;
	int32_t t60 = 2902846;

	t60 = (x1889>>(x1890/(x1891/x1892)));

	if (t60 != 109) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x1909 = 15LLU;
	int32_t x1910 = -1;
	volatile int32_t x1911 = INT32_MIN;
	uint16_t x1912 = 116U;
	static uint64_t t61 = 4106198LLU;

	t61 = (x1909>>(x1910/(x1911/x1912)));

	if (t61 != 15LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x1934 = 466U;
	int64_t x1935 = INT64_MIN;
	static int64_t x1936 = 1LL;
	uint64_t t62 = 7110751418755202857LLU;

	t62 = (x1933>>(x1934/(x1935/x1936)));

	if (t62 != 2678852941LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1985 = 18031592739901LLU;
	uint8_t x1986 = 0U;
	int64_t x1987 = INT64_MAX;
	int16_t x1988 = INT16_MIN;
	volatile uint64_t t63 = 11897036670675LLU;

	t63 = (x1985>>(x1986/(x1987/x1988)));

	if (t63 != 18031592739901LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1992 = 3907963798LLU;

	t64 = (x1989>>(x1990/(x1991/x1992)));

	if (t64 != 68) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x2034 = UINT8_MAX;
	static uint64_t x2036 = 23135898LLU;
	int32_t t65 = -116;

	t65 = (x2033>>(x2034/(x2035/x2036)));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x2053 = 115U;
	int32_t x2054 = 547463;
	int64_t x2055 = INT64_MAX;
	static int16_t x2056 = 1;
	volatile int32_t t66 = 25400402;

	t66 = (x2053>>(x2054/(x2055/x2056)));

	if (t66 != 115) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x2097 = 1955124U;
	uint16_t x2098 = UINT16_MAX;
	static uint64_t x2099 = UINT64_MAX;
	uint8_t x2100 = 14U;

	t67 = (x2097>>(x2098/(x2099/x2100)));

	if (t67 != 1955124U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2101 = 105U;
	volatile int64_t x2103 = INT64_MIN;
	int32_t x2104 = INT32_MIN;
	volatile int32_t t68 = 3681604;

	t68 = (x2101>>(x2102/(x2103/x2104)));

	if (t68 != 105) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2129 = 10;
	int32_t x2130 = INT32_MIN;
	int64_t x2131 = INT64_MIN;
	uint32_t x2132 = 9U;
	static int32_t t69 = 224996;

	t69 = (x2129>>(x2130/(x2131/x2132)));

	if (t69 != 10) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2145 = UINT64_MAX;
	int8_t x2146 = 0;
	uint16_t x2147 = UINT16_MAX;
	uint8_t x2148 = 1U;
	uint64_t t70 = UINT64_MAX;

	t70 = (x2145>>(x2146/(x2147/x2148)));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x2181 = 28U;
	int16_t x2182 = -2;
	int16_t x2183 = INT16_MIN;

	t71 = (x2181>>(x2182/(x2183/x2184)));

	if (t71 != 28) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x2194 = 3595U;
	static int16_t x2196 = INT16_MIN;

	t72 = (x2193>>(x2194/(x2195/x2196)));

	if (t72 != 52) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2197 = UINT64_MAX;
	static int16_t x2199 = INT16_MIN;
	volatile uint8_t x2200 = 2U;
	uint64_t t73 = UINT64_MAX;

	t73 = (x2197>>(x2198/(x2199/x2200)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x2234 = INT8_MIN;
	int32_t x2235 = INT32_MIN;
	int8_t x2236 = INT8_MIN;
	static volatile int64_t t74 = INT64_MAX;

	t74 = (x2233>>(x2234/(x2235/x2236)));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2237 = 5;
	volatile int16_t x2238 = -1;
	int8_t x2240 = INT8_MIN;

	t75 = (x2237>>(x2238/(x2239/x2240)));

	if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2269 = 737743LLU;
	int32_t x2270 = INT32_MAX;
	int64_t x2271 = -3378070273LL;
	int32_t x2272 = -1;
	static uint64_t t76 = 946541539LLU;

	t76 = (x2269>>(x2270/(x2271/x2272)));

	if (t76 != 737743LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x2297 = INT32_MAX;
	int32_t x2298 = -9;
	volatile int64_t x2299 = 14716675657280LL;
	int8_t x2300 = -29;
	int32_t t77 = INT32_MAX;

	t77 = (x2297>>(x2298/(x2299/x2300)));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x2325 = 100U;
	uint16_t x2327 = UINT16_MAX;
	int16_t x2328 = 7;
	int32_t t78 = 5;

	t78 = (x2325>>(x2326/(x2327/x2328)));

	if (t78 != 100) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2333 = 5U;
	volatile int32_t x2334 = INT32_MAX;
	uint64_t x2335 = 923066508787345LLU;
	uint32_t x2336 = 12U;
	volatile int32_t t79 = -3565;

	t79 = (x2333>>(x2334/(x2335/x2336)));

	if (t79 != 5) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2338 = 2033877U;
	volatile uint16_t x2339 = 1020U;
	volatile int8_t x2340 = -1;

	t80 = (x2337>>(x2338/(x2339/x2340)));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2365 = 16119812LLU;
	static int16_t x2367 = INT16_MIN;
	volatile uint8_t x2368 = UINT8_MAX;

	t81 = (x2365>>(x2366/(x2367/x2368)));

	if (t81 != 16119812LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x2405 = UINT64_MAX;
	volatile int16_t x2406 = 157;
	int64_t x2407 = 457356624923LL;

	t82 = (x2405>>(x2406/(x2407/x2408)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2429 = 1095758180492495281LLU;
	uint16_t x2431 = UINT16_MAX;
	static int32_t x2432 = 2571;
	uint64_t t83 = 57695299496329LLU;

	t83 = (x2429>>(x2430/(x2431/x2432)));

	if (t83 != 273939545123123820LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x2474 = INT16_MAX;
	static int64_t x2475 = INT64_MIN;
	int64_t x2476 = -156230LL;
	uint32_t t84 = 0U;

	t84 = (x2473>>(x2474/(x2475/x2476)));

	if (t84 != 10U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x2518 = 2U;
	int16_t x2519 = INT16_MIN;
	volatile int16_t x2520 = INT16_MIN;

	t85 = (x2517>>(x2518/(x2519/x2520)));

	if (t85 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2557 = 1867827;
	int16_t x2558 = 1231;
	volatile int32_t x2559 = INT32_MIN;
	int32_t x2560 = -12;
	int32_t t86 = -724;

	t86 = (x2557>>(x2558/(x2559/x2560)));

	if (t86 != 1867827) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x2561 = INT16_MAX;
	int16_t x2562 = 0;
	volatile int32_t x2563 = -782274;
	int16_t x2564 = INT16_MAX;
	volatile int32_t t87 = 6139;

	t87 = (x2561>>(x2562/(x2563/x2564)));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x2593 = 0U;
	int8_t x2594 = -1;
	int16_t x2595 = INT16_MIN;
	int8_t x2596 = INT8_MIN;
	volatile int32_t t88 = 12186300;

	t88 = (x2593>>(x2594/(x2595/x2596)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2601 = 90257;
	volatile uint16_t x2602 = UINT16_MAX;
	int32_t x2604 = 2172;

	t89 = (x2601>>(x2602/(x2603/x2604)));

	if (t89 != 90257) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2621 = 760U;
	int16_t x2622 = -1;
	static int8_t x2624 = INT8_MAX;
	volatile uint32_t t90 = 54U;

	t90 = (x2621>>(x2622/(x2623/x2624)));

	if (t90 != 760U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x2625 = UINT8_MAX;
	int16_t x2626 = -1;
	int16_t x2627 = INT16_MIN;
	int32_t x2628 = -1;
	int32_t t91 = -16;

	t91 = (x2625>>(x2626/(x2627/x2628)));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2677 = INT32_MAX;
	volatile uint16_t x2678 = 4U;
	int64_t x2679 = 1548808187LL;
	static int16_t x2680 = 2;
	volatile int32_t t92 = INT32_MAX;

	t92 = (x2677>>(x2678/(x2679/x2680)));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x2768 = 71U;
	volatile int32_t t93 = -92362;

	t93 = (x2765>>(x2766/(x2767/x2768)));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x2773 = UINT16_MAX;
	int8_t x2774 = -1;

	t94 = (x2773>>(x2774/(x2775/x2776)));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x2785 = INT8_MAX;
	static volatile int32_t t95 = -10;

	t95 = (x2785>>(x2786/(x2787/x2788)));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x2793 = 242140679LLU;
	int32_t x2795 = INT32_MIN;
	volatile uint32_t x2796 = 4876813U;
	volatile uint64_t t96 = 152924521163LLU;

	t96 = (x2793>>(x2794/(x2795/x2796)));

	if (t96 != 242140679LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x2801 = UINT32_MAX;
	int16_t x2802 = -8;
	int16_t x2803 = 1735;
	int8_t x2804 = INT8_MAX;
	volatile uint32_t t97 = UINT32_MAX;

	t97 = (x2801>>(x2802/(x2803/x2804)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x2866 = 161115560LLU;
	static int32_t x2867 = INT32_MIN;
	int32_t x2868 = INT32_MAX;
	static volatile int32_t t98 = INT32_MAX;

	t98 = (x2865>>(x2866/(x2867/x2868)));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x2929 = 3;
	int16_t x2930 = -1;
	int64_t x2931 = -135996206820108LL;
	int16_t x2932 = INT16_MAX;
	static int32_t t99 = -706;

	t99 = (x2929>>(x2930/(x2931/x2932)));

	if (t99 != 3) { NG(); } else { ; }
	
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

