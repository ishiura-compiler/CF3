#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x19 = UINT16_MAX;
static int32_t t0 = 432804108;
uint32_t x188 = 273741U;
int16_t x254 = -1;
static int32_t x256 = -1;
volatile uint32_t x279 = 681U;
int32_t x282 = 2;
int32_t x283 = -1;
int16_t x308 = 0;
int32_t t9 = 2973;
static volatile int64_t t10 = 0LL;
int32_t x351 = INT32_MIN;
int16_t x383 = -1;
int64_t x384 = INT64_MIN;
int8_t x420 = 31;
volatile uint16_t x468 = 538U;
int32_t x488 = INT32_MIN;
int8_t x581 = INT8_MAX;
static int16_t x637 = INT16_MAX;
uint8_t x712 = UINT8_MAX;
uint64_t t25 = 5382999354080898491LLU;
volatile int8_t x742 = INT8_MAX;
int8_t x744 = 6;
uint64_t x779 = UINT64_MAX;
int64_t x810 = -1LL;
int32_t x910 = INT32_MAX;
static volatile uint64_t x911 = 29142100359LLU;
int32_t x913 = 483;
volatile uint32_t x914 = UINT32_MAX;
int32_t t35 = -92472;
int8_t x984 = 0;
volatile int64_t t36 = 3273289LL;
static int8_t x1019 = 1;
int16_t x1083 = -3212;
int64_t x1084 = 167LL;
uint32_t t40 = 1047417U;
volatile int64_t x1116 = INT64_MIN;
volatile uint32_t t41 = 2623404U;
int32_t x1117 = INT32_MAX;
static volatile int32_t t42 = INT32_MAX;
uint32_t x1134 = 11440U;
static int32_t x1136 = INT32_MIN;
int32_t t46 = -11677537;
int8_t x1170 = INT8_MAX;
int32_t t49 = 270304105;
volatile uint32_t x1270 = 1036395641U;
volatile uint64_t x1309 = UINT64_MAX;
volatile uint64_t t53 = 124072489957495693LLU;
uint8_t x1313 = 5U;
static volatile uint16_t x1315 = 3U;
static volatile int32_t t54 = -5;
int64_t x1338 = -1LL;
uint8_t x1399 = UINT8_MAX;
uint32_t x1413 = 81U;
int8_t x1414 = INT8_MIN;
volatile uint32_t t58 = 765893592U;
int64_t x1417 = 6LL;
int32_t x1449 = INT32_MAX;
int16_t x1463 = INT16_MIN;
int32_t x1464 = -24;
volatile uint8_t x1494 = UINT8_MAX;
volatile int32_t t62 = 776364;
int8_t x1540 = -3;
volatile int32_t t65 = -23661;
int64_t x1586 = INT64_MAX;
int8_t x1587 = 34;
volatile int32_t t67 = 12133;
int8_t x1602 = INT8_MIN;
uint64_t t71 = UINT64_MAX;
uint8_t x1698 = 2U;
uint16_t x1740 = UINT16_MAX;
volatile int32_t t75 = -27618;
static volatile int16_t x1794 = -1;
uint64_t x1821 = UINT64_MAX;
uint8_t x1822 = 41U;
static int64_t x1827 = -1LL;
static uint8_t x1828 = 1U;
volatile int16_t x1833 = 1381;
volatile uint64_t x1871 = UINT64_MAX;
int32_t t84 = 0;
int8_t x2041 = INT8_MAX;
static int64_t t89 = 1466206252231019495LL;
volatile uint32_t t91 = 45U;
uint16_t x2165 = 123U;
static int16_t x2189 = INT16_MAX;
static uint64_t x2191 = 69196520170LLU;
static volatile int32_t t95 = -827683660;
uint64_t x2237 = 6467745936102324LLU;
uint8_t x2252 = 32U;
uint32_t x2265 = UINT32_MAX;


void f0(void) {
	uint8_t x17 = UINT8_MAX;
	int8_t x18 = INT8_MIN;
	int16_t x20 = 14;

	t0 = (x17>>((x18-x19)&x20));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x125 = INT8_MAX;
	int64_t x126 = INT64_MAX;
	volatile uint16_t x127 = UINT16_MAX;
	int16_t x128 = INT16_MAX;
	volatile int32_t t1 = 27985;

	t1 = (x125>>((x126-x127)&x128));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x137 = 64640U;
	static volatile int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 1367523237U;
	volatile uint32_t t2 = 3771U;

	t2 = (x137>>((x138-x139)&x140));

	if (t2 != 64640U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x185 = 803886397988LLU;
	uint16_t x186 = 12U;
	int8_t x187 = 1;
	static uint64_t t3 = 167836831LLU;

	t3 = (x185>>((x186-x187)&x188));

	if (t3 != 1570090621LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x193 = 148651;
	int16_t x194 = 0;
	uint64_t x195 = UINT64_MAX;
	static int32_t x196 = INT32_MIN;
	int32_t t4 = 162057;

	t4 = (x193>>((x194-x195)&x196));

	if (t4 != 148651) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x253 = 615632;
	int16_t x255 = -1;
	volatile int32_t t5 = -978;

	t5 = (x253>>((x254-x255)&x256));

	if (t5 != 615632) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x277 = 2427;
	int16_t x278 = INT16_MIN;
	volatile int16_t x280 = 25;
	int32_t t6 = -123029527;

	t6 = (x277>>((x278-x279)&x280));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x281 = INT16_MAX;
	uint16_t x284 = 37U;
	volatile int32_t t7 = 96720;

	t7 = (x281>>((x282-x283)&x284));

	if (t7 != 16383) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x289 = 7;
	int8_t x290 = -7;
	int16_t x291 = INT16_MIN;
	int32_t x292 = INT32_MIN;
	int32_t t8 = 1496858;

	t8 = (x289>>((x290-x291)&x292));

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x305 = INT8_MAX;
	int8_t x306 = INT8_MAX;
	uint8_t x307 = 96U;

	t9 = (x305>>((x306-x307)&x308));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x313 = INT64_MAX;
	int8_t x314 = -12;
	int32_t x315 = -1;
	volatile int8_t x316 = 1;

	t10 = (x313>>((x314-x315)&x316));

	if (t10 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x349 = 975069LL;
	int16_t x350 = -7;
	uint16_t x352 = 10U;
	static volatile int64_t t11 = 1034102LL;

	t11 = (x349>>((x350-x351)&x352));

	if (t11 != 3808LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x357 = 213590462;
	int16_t x358 = 2;
	int16_t x359 = INT16_MAX;
	int32_t x360 = 15981;
	static volatile int32_t t12 = -1;

	t12 = (x357>>((x358-x359)&x360));

	if (t12 != 106795231) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x365 = INT64_MAX;
	static int64_t x366 = -1LL;
	int64_t x367 = -1LL;
	int8_t x368 = INT8_MAX;
	int64_t t13 = INT64_MAX;

	t13 = (x365>>((x366-x367)&x368));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x381 = 418U;
	uint64_t x382 = 2639355999683799797LLU;
	volatile uint32_t t14 = 45549060U;

	t14 = (x381>>((x382-x383)&x384));

	if (t14 != 418U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x417 = INT64_MAX;
	int16_t x418 = INT16_MIN;
	uint16_t x419 = 5U;
	volatile int64_t t15 = -5489792395900LL;

	t15 = (x417>>((x418-x419)&x420));

	if (t15 != 68719476735LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x461 = 21U;
	uint32_t x462 = 1U;
	uint16_t x463 = UINT16_MAX;
	volatile uint8_t x464 = 2U;
	int32_t t16 = -7;

	t16 = (x461>>((x462-x463)&x464));

	if (t16 != 5) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x465 = 0;
	volatile int32_t x466 = -2404244;
	uint16_t x467 = 3U;
	volatile int32_t t17 = -189154;

	t17 = (x465>>((x466-x467)&x468));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x485 = INT64_MAX;
	volatile int16_t x486 = INT16_MIN;
	int16_t x487 = INT16_MIN;
	int64_t t18 = INT64_MAX;

	t18 = (x485>>((x486-x487)&x488));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x561 = 70U;
	static int32_t x562 = INT32_MIN;
	static int32_t x563 = INT32_MIN;
	uint16_t x564 = UINT16_MAX;
	static int32_t t19 = -7877260;

	t19 = (x561>>((x562-x563)&x564));

	if (t19 != 70) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x582 = INT64_MIN;
	static int32_t x583 = INT32_MIN;
	uint16_t x584 = 3368U;
	int32_t t20 = -55414762;

	t20 = (x581>>((x582-x583)&x584));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x617 = UINT32_MAX;
	uint16_t x618 = 481U;
	int16_t x619 = INT16_MIN;
	static int32_t x620 = INT32_MIN;
	static uint32_t t21 = UINT32_MAX;

	t21 = (x617>>((x618-x619)&x620));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x638 = 7U;
	volatile int32_t x639 = -1;
	int64_t x640 = INT64_MIN;
	int32_t t22 = 63171871;

	t22 = (x637>>((x638-x639)&x640));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x641 = 131U;
	int32_t x642 = 31;
	int8_t x643 = -5;
	int16_t x644 = INT16_MIN;
	static uint32_t t23 = 7801U;

	t23 = (x641>>((x642-x643)&x644));

	if (t23 != 131U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x697 = 1707U;
	int16_t x698 = INT16_MIN;
	static int64_t x699 = INT64_MIN;
	static uint32_t x700 = 6244U;
	uint32_t t24 = 119U;

	t24 = (x697>>((x698-x699)&x700));

	if (t24 != 1707U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x709 = 4LLU;
	uint16_t x710 = 12U;
	static int8_t x711 = -1;

	t25 = (x709>>((x710-x711)&x712));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x725 = UINT8_MAX;
	uint8_t x726 = UINT8_MAX;
	static int8_t x727 = INT8_MIN;
	int16_t x728 = INT16_MIN;
	int32_t t26 = -2;

	t26 = (x725>>((x726-x727)&x728));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x741 = 198;
	uint64_t x743 = 38263736192LLU;
	static volatile int32_t t27 = -3302;

	t27 = (x741>>((x742-x743)&x744));

	if (t27 != 3) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x777 = 28923227552928636LL;
	int16_t x778 = 1;
	volatile uint32_t x780 = UINT32_MAX;
	int64_t t28 = -584926467362935607LL;

	t28 = (x777>>((x778-x779)&x780));

	if (t28 != 7230806888232159LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x789 = 3U;
	int16_t x790 = INT16_MAX;
	int16_t x791 = 1;
	int64_t x792 = INT64_MIN;
	int32_t t29 = 52;

	t29 = (x789>>((x790-x791)&x792));

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x805 = INT32_MAX;
	int8_t x806 = INT8_MIN;
	int16_t x807 = INT16_MIN;
	volatile int64_t x808 = INT64_MIN;
	volatile int32_t t30 = INT32_MAX;

	t30 = (x805>>((x806-x807)&x808));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x809 = UINT32_MAX;
	int8_t x811 = INT8_MIN;
	volatile int64_t x812 = INT64_MIN;
	uint32_t t31 = UINT32_MAX;

	t31 = (x809>>((x810-x811)&x812));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x837 = 638578749LL;
	int16_t x838 = 41;
	int8_t x839 = -6;
	int16_t x840 = -1;
	static int64_t t32 = 550120168LL;

	t32 = (x837>>((x838-x839)&x840));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x865 = 16;
	int64_t x866 = INT64_MIN;
	int64_t x867 = INT64_MIN;
	uint8_t x868 = 0U;
	volatile int32_t t33 = -23;

	t33 = (x865>>((x866-x867)&x868));

	if (t33 != 16) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x909 = 4696036622424295LLU;
	uint16_t x912 = 12U;
	static volatile uint64_t t34 = 19849LLU;

	t34 = (x909>>((x910-x911)&x912));

	if (t34 != 18343893056344LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x915 = UINT8_MAX;
	int64_t x916 = INT64_MIN;

	t35 = (x913>>((x914-x915)&x916));

	if (t35 != 483) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x981 = 79054LL;
	int16_t x982 = INT16_MIN;
	uint8_t x983 = UINT8_MAX;

	t36 = (x981>>((x982-x983)&x984));

	if (t36 != 79054LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1017 = 4;
	int8_t x1018 = INT8_MIN;
	volatile uint8_t x1020 = 0U;
	int32_t t37 = -91395;

	t37 = (x1017>>((x1018-x1019)&x1020));

	if (t37 != 4) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1041 = 0U;
	int64_t x1042 = INT64_MAX;
	uint8_t x1043 = UINT8_MAX;
	uint16_t x1044 = 36U;
	volatile int32_t t38 = -889938;

	t38 = (x1041>>((x1042-x1043)&x1044));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x1049 = UINT32_MAX;
	uint16_t x1050 = UINT16_MAX;
	uint16_t x1051 = 5461U;
	int16_t x1052 = 25;
	uint32_t t39 = 2U;

	t39 = (x1049>>((x1050-x1051)&x1052));

	if (t39 != 16777215U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1081 = 200U;
	int8_t x1082 = INT8_MIN;

	t40 = (x1081>>((x1082-x1083)&x1084));

	if (t40 != 12U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1113 = 4402U;
	volatile uint32_t x1114 = 120U;
	volatile int16_t x1115 = 174;

	t41 = (x1113>>((x1114-x1115)&x1116));

	if (t41 != 4402U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1118 = 0;
	uint32_t x1119 = 26876291U;
	static int64_t x1120 = INT64_MIN;

	t42 = (x1117>>((x1118-x1119)&x1120));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x1121 = 48U;
	int32_t x1122 = 6;
	volatile uint8_t x1123 = 5U;
	uint64_t x1124 = 6481681LLU;
	volatile int32_t t43 = 284148398;

	t43 = (x1121>>((x1122-x1123)&x1124));

	if (t43 != 24) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x1133 = 52U;
	static uint8_t x1135 = UINT8_MAX;
	static uint32_t t44 = 3533315U;

	t44 = (x1133>>((x1134-x1135)&x1136));

	if (t44 != 52U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1141 = INT64_MAX;
	uint64_t x1142 = 3LLU;
	volatile int32_t x1143 = 1;
	volatile uint32_t x1144 = 1547673U;
	volatile int64_t t45 = INT64_MAX;

	t45 = (x1141>>((x1142-x1143)&x1144));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1165 = INT8_MAX;
	int64_t x1166 = INT64_MIN;
	volatile int8_t x1167 = -1;
	uint8_t x1168 = 0U;

	t46 = (x1165>>((x1166-x1167)&x1168));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1169 = 0;
	uint64_t x1171 = 37424519817111LLU;
	uint8_t x1172 = 27U;
	volatile int32_t t47 = -7289;

	t47 = (x1169>>((x1170-x1171)&x1172));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1181 = 414643273U;
	int8_t x1182 = 2;
	uint64_t x1183 = UINT64_MAX;
	volatile int16_t x1184 = 0;
	uint32_t t48 = 5U;

	t48 = (x1181>>((x1182-x1183)&x1184));

	if (t48 != 414643273U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x1185 = UINT16_MAX;
	static int64_t x1186 = -1LL;
	int8_t x1187 = -6;
	uint64_t x1188 = UINT64_MAX;

	t49 = (x1185>>((x1186-x1187)&x1188));

	if (t49 != 2047) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1189 = 13U;
	static uint8_t x1190 = UINT8_MAX;
	int64_t x1191 = 197LL;
	uint32_t x1192 = 64008209U;
	volatile int32_t t50 = 26976499;

	t50 = (x1189>>((x1190-x1191)&x1192));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1269 = 122LLU;
	static int16_t x1271 = 137;
	uint8_t x1272 = 28U;
	uint64_t t51 = 49LLU;

	t51 = (x1269>>((x1270-x1271)&x1272));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1289 = INT32_MAX;
	int8_t x1290 = 1;
	int64_t x1291 = -8122LL;
	static int16_t x1292 = INT16_MIN;
	int32_t t52 = INT32_MAX;

	t52 = (x1289>>((x1290-x1291)&x1292));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1310 = 8U;
	volatile int16_t x1311 = -6;
	static int16_t x1312 = INT16_MAX;

	t53 = (x1309>>((x1310-x1311)&x1312));

	if (t53 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1314 = 12197U;
	int64_t x1316 = INT64_MIN;

	t54 = (x1313>>((x1314-x1315)&x1316));

	if (t54 != 5) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x1325 = INT16_MAX;
	volatile int64_t x1326 = -1LL;
	int64_t x1327 = -1LL;
	uint32_t x1328 = 317336160U;
	int32_t t55 = -196719;

	t55 = (x1325>>((x1326-x1327)&x1328));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x1337 = 304U;
	int8_t x1339 = -1;
	int32_t x1340 = INT32_MIN;
	volatile int32_t t56 = 37056051;

	t56 = (x1337>>((x1338-x1339)&x1340));

	if (t56 != 304) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x1397 = 15U;
	uint8_t x1398 = UINT8_MAX;
	uint32_t x1400 = UINT32_MAX;
	int32_t t57 = 438824664;

	t57 = (x1397>>((x1398-x1399)&x1400));

	if (t57 != 15) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1415 = 293841U;
	volatile uint32_t x1416 = 3U;

	t58 = (x1413>>((x1414-x1415)&x1416));

	if (t58 != 10U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1418 = -1;
	static uint32_t x1419 = 609515U;
	static int64_t x1420 = INT64_MIN;
	static volatile int64_t t59 = -250844LL;

	t59 = (x1417>>((x1418-x1419)&x1420));

	if (t59 != 6LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1450 = 24;
	volatile uint8_t x1451 = 11U;
	static volatile int8_t x1452 = 13;
	int32_t t60 = -16;

	t60 = (x1449>>((x1450-x1451)&x1452));

	if (t60 != 262143) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x1461 = 106942U;
	static int16_t x1462 = INT16_MIN;
	static volatile uint32_t t61 = 6326U;

	t61 = (x1461>>((x1462-x1463)&x1464));

	if (t61 != 106942U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1493 = 9;
	uint16_t x1495 = 1800U;
	static uint16_t x1496 = 11U;

	t62 = (x1493>>((x1494-x1495)&x1496));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1501 = 0;
	int64_t x1502 = -1LL;
	volatile uint8_t x1503 = UINT8_MAX;
	uint8_t x1504 = 0U;
	volatile int32_t t63 = -155426;

	t63 = (x1501>>((x1502-x1503)&x1504));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x1537 = 21U;
	static volatile int16_t x1538 = INT16_MIN;
	int16_t x1539 = INT16_MIN;
	int32_t t64 = -18999;

	t64 = (x1537>>((x1538-x1539)&x1540));

	if (t64 != 21) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1573 = INT8_MAX;
	uint16_t x1574 = UINT16_MAX;
	int16_t x1575 = INT16_MAX;
	uint8_t x1576 = 2U;

	t65 = (x1573>>((x1574-x1575)&x1576));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x1577 = 681;
	volatile uint16_t x1578 = 6U;
	uint32_t x1579 = UINT32_MAX;
	volatile int8_t x1580 = INT8_MAX;
	volatile int32_t t66 = -538;

	t66 = (x1577>>((x1578-x1579)&x1580));

	if (t66 != 5) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x1585 = UINT8_MAX;
	int8_t x1588 = 20;

	t67 = (x1585>>((x1586-x1587)&x1588));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x1597 = UINT8_MAX;
	uint8_t x1598 = 3U;
	volatile int8_t x1599 = -1;
	static uint16_t x1600 = UINT16_MAX;
	int32_t t68 = 207116581;

	t68 = (x1597>>((x1598-x1599)&x1600));

	if (t68 != 15) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x1601 = 1445211645420LL;
	int8_t x1603 = 0;
	int8_t x1604 = INT8_MAX;
	int64_t t69 = 92933LL;

	t69 = (x1601>>((x1602-x1603)&x1604));

	if (t69 != 1445211645420LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1645 = INT16_MAX;
	volatile int16_t x1646 = INT16_MIN;
	uint8_t x1647 = 0U;
	uint16_t x1648 = 821U;
	volatile int32_t t70 = -1;

	t70 = (x1645>>((x1646-x1647)&x1648));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x1669 = UINT64_MAX;
	int16_t x1670 = INT16_MIN;
	static int16_t x1671 = INT16_MIN;
	static volatile uint16_t x1672 = 13991U;

	t71 = (x1669>>((x1670-x1671)&x1672));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x1697 = INT8_MAX;
	int32_t x1699 = -11474;
	int64_t x1700 = INT64_MIN;
	int32_t t72 = 49271471;

	t72 = (x1697>>((x1698-x1699)&x1700));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x1737 = 62U;
	volatile uint16_t x1738 = UINT16_MAX;
	volatile int64_t x1739 = INT64_MAX;
	int32_t t73 = 823;

	t73 = (x1737>>((x1738-x1739)&x1740));

	if (t73 != 62) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1753 = INT64_MAX;
	uint8_t x1754 = UINT8_MAX;
	int32_t x1755 = -245827;
	int64_t x1756 = INT64_MIN;
	int64_t t74 = INT64_MAX;

	t74 = (x1753>>((x1754-x1755)&x1756));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x1781 = 2669U;
	int16_t x1782 = INT16_MIN;
	volatile int16_t x1783 = -1;
	int16_t x1784 = INT16_MAX;

	t75 = (x1781>>((x1782-x1783)&x1784));

	if (t75 != 1334) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1793 = 3;
	uint64_t x1795 = UINT64_MAX;
	uint8_t x1796 = UINT8_MAX;
	static volatile int32_t t76 = -4135410;

	t76 = (x1793>>((x1794-x1795)&x1796));

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x1823 = -143;
	int16_t x1824 = INT16_MIN;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = (x1821>>((x1822-x1823)&x1824));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x1825 = 115U;
	int64_t x1826 = INT64_MIN;
	int32_t t78 = -124931624;

	t78 = (x1825>>((x1826-x1827)&x1828));

	if (t78 != 57) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x1834 = -1LL;
	int32_t x1835 = -9;
	static int16_t x1836 = 12;
	volatile int32_t t79 = 986949100;

	t79 = (x1833>>((x1834-x1835)&x1836));

	if (t79 != 5) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1837 = INT32_MAX;
	int32_t x1838 = INT32_MIN;
	uint32_t x1839 = 0U;
	volatile int8_t x1840 = INT8_MAX;
	static volatile int32_t t80 = INT32_MAX;

	t80 = (x1837>>((x1838-x1839)&x1840));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x1869 = UINT16_MAX;
	volatile uint8_t x1870 = 2U;
	uint32_t x1872 = 56U;
	volatile int32_t t81 = 161378;

	t81 = (x1869>>((x1870-x1871)&x1872));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x1889 = 1U;
	int8_t x1890 = 3;
	uint64_t x1891 = UINT64_MAX;
	int8_t x1892 = 0;
	volatile int32_t t82 = 408946;

	t82 = (x1889>>((x1890-x1891)&x1892));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x1965 = 26U;
	static uint64_t x1966 = 262LLU;
	static volatile int8_t x1967 = -30;
	uint16_t x1968 = 79U;
	int32_t t83 = 16205;

	t83 = (x1965>>((x1966-x1967)&x1968));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1985 = 1;
	static uint16_t x1986 = 0U;
	uint16_t x1987 = UINT16_MAX;
	uint32_t x1988 = 0U;

	t84 = (x1985>>((x1986-x1987)&x1988));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x1989 = 1U;
	int16_t x1990 = INT16_MIN;
	volatile int8_t x1991 = -3;
	uint16_t x1992 = 51U;
	volatile int32_t t85 = -990417328;

	t85 = (x1989>>((x1990-x1991)&x1992));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2005 = 12U;
	int32_t x2006 = INT32_MAX;
	uint32_t x2007 = 361U;
	static uint32_t x2008 = 8U;
	static volatile int32_t t86 = -2;

	t86 = (x2005>>((x2006-x2007)&x2008));

	if (t86 != 12) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x2033 = 3;
	int8_t x2034 = 19;
	volatile int64_t x2035 = INT64_MAX;
	volatile uint8_t x2036 = 55U;
	volatile int32_t t87 = -13623;

	t87 = (x2033>>((x2034-x2035)&x2036));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x2042 = INT32_MIN;
	int64_t x2043 = INT64_MIN;
	int64_t x2044 = INT64_MIN;
	volatile int32_t t88 = 340712;

	t88 = (x2041>>((x2042-x2043)&x2044));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x2057 = INT64_MAX;
	uint64_t x2058 = 30767145656551363LLU;
	uint16_t x2059 = UINT16_MAX;
	uint8_t x2060 = 29U;

	t89 = (x2057>>((x2058-x2059)&x2060));

	if (t89 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x2069 = 13727U;
	int64_t x2070 = INT64_MIN;
	static volatile int16_t x2071 = INT16_MIN;
	uint16_t x2072 = 5775U;
	volatile int32_t t90 = 289;

	t90 = (x2069>>((x2070-x2071)&x2072));

	if (t90 != 13727) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x2097 = 13181U;
	uint8_t x2098 = 5U;
	uint32_t x2099 = UINT32_MAX;
	uint16_t x2100 = 191U;

	t91 = (x2097>>((x2098-x2099)&x2100));

	if (t91 != 205U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x2166 = -1;
	volatile uint32_t x2167 = UINT32_MAX;
	uint8_t x2168 = UINT8_MAX;
	int32_t t92 = -1100262;

	t92 = (x2165>>((x2166-x2167)&x2168));

	if (t92 != 123) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2190 = -1;
	volatile uint8_t x2192 = 90U;
	int32_t t93 = -217824614;

	t93 = (x2189>>((x2190-x2191)&x2192));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2209 = INT8_MAX;
	volatile uint8_t x2210 = 3U;
	static int16_t x2211 = INT16_MIN;
	volatile int8_t x2212 = INT8_MAX;
	volatile int32_t t94 = 699149;

	t94 = (x2209>>((x2210-x2211)&x2212));

	if (t94 != 15) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x2217 = 11U;
	uint16_t x2218 = UINT16_MAX;
	int8_t x2219 = INT8_MIN;
	uint8_t x2220 = 11U;

	t95 = (x2217>>((x2218-x2219)&x2220));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x2238 = -1;
	static int16_t x2239 = -1;
	uint32_t x2240 = 6040U;
	volatile uint64_t t96 = 31908909685321604LLU;

	t96 = (x2237>>((x2238-x2239)&x2240));

	if (t96 != 6467745936102324LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x2249 = 40U;
	int64_t x2250 = INT64_MIN;
	int64_t x2251 = INT64_MIN;
	volatile int32_t t97 = 1443;

	t97 = (x2249>>((x2250-x2251)&x2252));

	if (t97 != 40) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x2261 = 8U;
	uint32_t x2262 = 87985108U;
	int64_t x2263 = -273210540235LL;
	static volatile int8_t x2264 = INT8_MAX;
	static volatile int32_t t98 = 0;

	t98 = (x2261>>((x2262-x2263)&x2264));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x2266 = INT8_MAX;
	uint16_t x2267 = 17U;
	int32_t x2268 = INT32_MIN;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = (x2265>>((x2266-x2267)&x2268));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

