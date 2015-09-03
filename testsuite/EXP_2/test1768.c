#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
volatile int16_t x49 = INT16_MAX;
uint8_t x64 = UINT8_MAX;
uint8_t x118 = 0U;
uint16_t x131 = 1503U;
int64_t t5 = -1960718527450LL;
volatile uint8_t x181 = 3U;
volatile uint8_t x323 = 107U;
volatile uint8_t x324 = 0U;
uint8_t x334 = 56U;
int32_t x335 = INT32_MIN;
uint16_t x358 = 12U;
static volatile uint8_t x359 = 0U;
static int64_t x360 = -1364581500LL;
static uint32_t x397 = 3195605U;
volatile int16_t x398 = -154;
int8_t x400 = -1;
int16_t x428 = 1;
uint32_t x447 = 1U;
uint64_t x453 = 47321408688021936LLU;
int16_t x511 = INT16_MIN;
volatile int32_t x512 = INT32_MIN;
static uint8_t x522 = UINT8_MAX;
int64_t x561 = INT64_MAX;
int64_t t18 = -904621086LL;
uint32_t x592 = 54015232U;
int8_t x648 = INT8_MIN;
static volatile uint32_t t23 = 2U;
static uint8_t x699 = 0U;
int32_t t25 = -1506;
uint8_t x725 = UINT8_MAX;
static volatile int32_t t26 = -8385984;
uint8_t x777 = 21U;
static uint16_t x778 = UINT16_MAX;
uint16_t x837 = 1U;
int64_t t28 = -32727802LL;
int16_t x896 = INT16_MIN;
uint8_t x909 = UINT8_MAX;
int32_t x959 = INT32_MIN;
int16_t x1028 = INT16_MIN;
int16_t x1180 = 8;
uint16_t x1210 = 246U;
volatile int32_t x1212 = INT32_MIN;
uint64_t x1246 = 26LLU;
int8_t x1247 = INT8_MIN;
uint64_t x1253 = 228010505199541LLU;
static uint16_t x1286 = 232U;
int8_t x1331 = INT8_MAX;
volatile int8_t x1348 = INT8_MIN;
int32_t x1360 = 45362244;
volatile int32_t t50 = 5085694;
int8_t x1445 = INT8_MAX;
volatile uint32_t x1466 = 2U;
static uint8_t x1468 = 24U;
uint16_t x1502 = 7434U;
static int16_t x1522 = 0;
uint32_t x1524 = 2653U;
volatile int32_t t56 = -3;
volatile int64_t t59 = 323LL;
uint64_t x1618 = 2933118512942478175LLU;
uint8_t x1619 = 1U;
uint32_t x1673 = 4044633U;
int16_t x1674 = INT16_MAX;
uint32_t x1750 = 2661U;
uint32_t x1753 = 993U;
volatile uint64_t t67 = 27LLU;
int8_t x1770 = INT8_MIN;
int8_t x1778 = 12;
uint16_t x1780 = UINT16_MAX;
volatile uint32_t t69 = 805U;
uint8_t x1819 = 3U;
int8_t x1820 = -1;
static uint16_t x1827 = 1U;
int64_t x1871 = INT64_MIN;
uint16_t x1986 = UINT16_MAX;
static uint16_t x1989 = UINT16_MAX;
static uint16_t x1990 = 5U;
static uint16_t x2045 = 212U;
static int32_t t79 = -376158296;
uint8_t x2077 = 40U;
static int32_t t80 = 288;
uint8_t x2095 = 4U;
uint8_t x2111 = 1U;
uint16_t x2117 = 42U;
int64_t x2120 = -1LL;
uint32_t x2133 = 17443U;
int64_t x2134 = INT64_MAX;
static int64_t x2135 = INT64_MIN;
static uint64_t x2136 = 4727LLU;
int32_t x2153 = 13884;
int32_t x2225 = 479047;
static int16_t x2241 = 90;
uint64_t x2242 = 5894LLU;
static int8_t x2243 = INT8_MAX;
int8_t x2263 = INT8_MIN;
static volatile uint32_t t90 = 0U;
int64_t x2272 = 191LL;
int32_t x2315 = INT32_MIN;
int64_t t94 = 115959551500LL;
int8_t x2322 = 1;
volatile int64_t t96 = -346140796641LL;
static uint64_t x2358 = 57LLU;
volatile int64_t t97 = 185439656950179355LL;


void f0(void) {
	uint32_t x2 = 2U;
	int8_t x3 = 1;
	volatile int32_t x4 = INT32_MAX;
	static uint32_t t0 = 7U;

	t0 = ((x1<<(x2&x3))^x4);

	if (t0 != 2147483648U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x6 = INT16_MIN;
	int16_t x7 = 3;
	int64_t x8 = 510928025LL;
	static volatile int64_t t1 = 1804756791LL;

	t1 = ((x5<<(x6&x7))^x8);

	if (t1 != 510942054LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x50 = INT16_MIN;
	uint64_t x51 = 3925LLU;
	int64_t x52 = -1LL;
	int64_t t2 = 1462709192834406LL;

	t2 = ((x49<<(x50&x51))^x52);

	if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x61 = UINT32_MAX;
	int8_t x62 = 1;
	int64_t x63 = INT64_MIN;
	volatile uint32_t t3 = 114U;

	t3 = ((x61<<(x62&x63))^x64);

	if (t3 != 4294967040U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x117 = UINT16_MAX;
	volatile int16_t x119 = INT16_MAX;
	uint8_t x120 = 19U;
	int32_t t4 = 0;

	t4 = ((x117<<(x118&x119))^x120);

	if (t4 != 65516) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x129 = INT64_MAX;
	uint16_t x130 = 0U;
	static uint8_t x132 = 1U;

	t5 = ((x129<<(x130&x131))^x132);

	if (t5 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x182 = 402U;
	static int8_t x183 = INT8_MAX;
	int8_t x184 = -1;
	static volatile int32_t t6 = -1;

	t6 = ((x181<<(x182&x183))^x184);

	if (t6 != -786433) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x269 = 132LLU;
	int16_t x270 = 33;
	int64_t x271 = 283121935LL;
	int32_t x272 = -1;
	static uint64_t t7 = 537526LLU;

	t7 = ((x269<<(x270&x271))^x272);

	if (t7 != 18446744073709551351LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x321 = 37U;
	static int64_t x322 = INT64_MIN;
	uint32_t t8 = 970872U;

	t8 = ((x321<<(x322&x323))^x324);

	if (t8 != 37U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x333 = INT64_MAX;
	volatile int64_t x336 = -1LL;
	int64_t t9 = INT64_MIN;

	t9 = ((x333<<(x334&x335))^x336);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x357 = 28U;
	int64_t t10 = 1798240009897LL;

	t10 = ((x357<<(x358&x359))^x360);

	if (t10 != -1364581480LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x399 = 20U;
	uint32_t t11 = 36U;

	t11 = ((x397<<(x398&x399))^x400);

	if (t11 != 4243837615U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x425 = 4U;
	static volatile uint16_t x426 = 8704U;
	int8_t x427 = 15;
	int32_t t12 = -522914151;

	t12 = ((x425<<(x426&x427))^x428);

	if (t12 != 5) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x445 = 623U;
	int32_t x446 = -1;
	volatile uint64_t x448 = 47589725188626LLU;
	uint64_t t13 = 628573676708034LLU;

	t13 = ((x445<<(x446&x447))^x448);

	if (t13 != 47589725189836LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x454 = 0;
	volatile int32_t x455 = -1;
	uint32_t x456 = 1634U;
	uint64_t t14 = 55499746982LLU;

	t14 = ((x453<<(x454&x455))^x456);

	if (t14 != 47321408688023506LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x509 = INT64_MAX;
	uint16_t x510 = 1895U;
	int64_t t15 = -199LL;

	t15 = ((x509<<(x510&x511))^x512);

	if (t15 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x521 = UINT16_MAX;
	int64_t x523 = INT64_MIN;
	volatile int64_t x524 = -222684113136969LL;
	int64_t t16 = -391409064163LL;

	t16 = ((x521<<(x522&x523))^x524);

	if (t16 != -222684113081016LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x549 = 475687406;
	int32_t x550 = INT32_MIN;
	uint64_t x551 = 1283LLU;
	int64_t x552 = -276552862LL;
	int64_t t17 = -99651584LL;

	t17 = ((x549<<(x550&x551))^x552);

	if (t17 != -203535732LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x562 = INT16_MIN;
	volatile uint16_t x563 = 571U;
	int8_t x564 = INT8_MIN;

	t18 = ((x561<<(x562&x563))^x564);

	if (t18 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x589 = INT8_MAX;
	int64_t x590 = INT64_MIN;
	uint32_t x591 = UINT32_MAX;
	uint32_t t19 = 310U;

	t19 = ((x589<<(x590&x591))^x592);

	if (t19 != 54015359U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x617 = 8873U;
	int32_t x618 = INT32_MIN;
	static uint8_t x619 = 13U;
	static volatile int16_t x620 = INT16_MIN;
	volatile int32_t t20 = -6;

	t20 = ((x617<<(x618&x619))^x620);

	if (t20 != -23895) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x633 = 1U;
	int16_t x634 = 7;
	static int64_t x635 = INT64_MIN;
	uint16_t x636 = 32199U;
	volatile int32_t t21 = 1;

	t21 = ((x633<<(x634&x635))^x636);

	if (t21 != 32198) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x645 = 28U;
	volatile uint16_t x646 = UINT16_MAX;
	static int32_t x647 = INT32_MIN;
	int32_t t22 = -1270708;

	t22 = ((x645<<(x646&x647))^x648);

	if (t22 != -100) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x657 = UINT32_MAX;
	int32_t x658 = 0;
	int8_t x659 = INT8_MIN;
	volatile uint8_t x660 = UINT8_MAX;

	t23 = ((x657<<(x658&x659))^x660);

	if (t23 != 4294967040U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x697 = 2284U;
	int16_t x698 = -1;
	static int32_t x700 = INT32_MIN;
	volatile int32_t t24 = -229140317;

	t24 = ((x697<<(x698&x699))^x700);

	if (t24 != -2147481364) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x721 = INT8_MAX;
	uint8_t x722 = 3U;
	static int64_t x723 = -1LL;
	int32_t x724 = INT32_MAX;

	t25 = ((x721<<(x722&x723))^x724);

	if (t25 != 2147482631) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x726 = 57U;
	int16_t x727 = INT16_MIN;
	uint16_t x728 = 2U;

	t26 = ((x725<<(x726&x727))^x728);

	if (t26 != 253) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x779 = 0;
	static volatile int8_t x780 = INT8_MIN;
	int32_t t27 = 3512;

	t27 = ((x777<<(x778&x779))^x780);

	if (t27 != -107) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x838 = 1U;
	uint8_t x839 = 7U;
	static int64_t x840 = -1LL;

	t28 = ((x837<<(x838&x839))^x840);

	if (t28 != -3LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x853 = UINT8_MAX;
	uint8_t x854 = 24U;
	volatile uint32_t x855 = 10U;
	static uint32_t x856 = 44U;
	volatile uint32_t t29 = 14751U;

	t29 = ((x853<<(x854&x855))^x856);

	if (t29 != 65324U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x893 = UINT64_MAX;
	int8_t x894 = 53;
	int32_t x895 = 18286818;
	uint64_t t30 = 875282LLU;

	t30 = ((x893<<(x894&x895))^x896);

	if (t30 != 4294934528LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x897 = INT16_MAX;
	static int8_t x898 = INT8_MIN;
	int8_t x899 = 0;
	int32_t x900 = 844337496;
	volatile int32_t t31 = -1410287;

	t31 = ((x897<<(x898&x899))^x900);

	if (t31 != 844361383) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x910 = INT32_MIN;
	uint8_t x911 = 0U;
	int8_t x912 = -1;
	volatile int32_t t32 = -26;

	t32 = ((x909<<(x910&x911))^x912);

	if (t32 != -256) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x921 = UINT64_MAX;
	uint32_t x922 = UINT32_MAX;
	volatile int64_t x923 = INT64_MIN;
	uint64_t x924 = UINT64_MAX;
	volatile uint64_t t33 = 442LLU;

	t33 = ((x921<<(x922&x923))^x924);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x949 = INT16_MAX;
	static volatile uint8_t x950 = 93U;
	volatile uint16_t x951 = 3U;
	static volatile uint32_t x952 = 44366U;
	static uint32_t t34 = 31U;

	t34 = ((x949<<(x950&x951))^x952);

	if (t34 != 21168U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x953 = UINT16_MAX;
	int16_t x954 = INT16_MIN;
	int16_t x955 = 14;
	int32_t x956 = INT32_MAX;
	static volatile int32_t t35 = 12056523;

	t35 = ((x953<<(x954&x955))^x956);

	if (t35 != 2147418112) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x957 = 1024156726580197267LLU;
	int8_t x958 = 2;
	int8_t x960 = INT8_MAX;
	volatile uint64_t t36 = 39390LLU;

	t36 = ((x957<<(x958&x959))^x960);

	if (t36 != 1024156726580197356LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x961 = 11U;
	volatile uint32_t x962 = UINT32_MAX;
	volatile int8_t x963 = 1;
	volatile int32_t x964 = INT32_MIN;
	volatile int32_t t37 = 4319;

	t37 = ((x961<<(x962&x963))^x964);

	if (t37 != -2147483626) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1025 = 329U;
	volatile uint32_t x1026 = 0U;
	int64_t x1027 = INT64_MAX;
	volatile int32_t t38 = -98;

	t38 = ((x1025<<(x1026&x1027))^x1028);

	if (t38 != -32439) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x1057 = UINT16_MAX;
	uint64_t x1058 = 687LLU;
	int16_t x1059 = INT16_MIN;
	uint16_t x1060 = 50U;
	volatile int32_t t39 = 27194812;

	t39 = ((x1057<<(x1058&x1059))^x1060);

	if (t39 != 65485) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x1113 = 25583633706LLU;
	int16_t x1114 = INT16_MIN;
	int64_t x1115 = 5151LL;
	int32_t x1116 = INT32_MIN;
	volatile uint64_t t40 = 168LLU;

	t40 = ((x1113<<(x1114&x1115))^x1116);

	if (t40 != 18446744049901061418LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1177 = 159346473U;
	uint16_t x1178 = 6376U;
	int32_t x1179 = 42009;
	volatile uint32_t t41 = 121757U;

	t41 = ((x1177<<(x1178&x1179))^x1180);

	if (t41 != 2137991432U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x1209 = UINT32_MAX;
	uint64_t x1211 = 9LLU;
	static uint32_t t42 = 5704493U;

	t42 = ((x1209<<(x1210&x1211))^x1212);

	if (t42 != 2147483647U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1245 = 63845408136LLU;
	volatile int16_t x1248 = -1;
	static volatile uint64_t t43 = 779LLU;

	t43 = ((x1245<<(x1246&x1247))^x1248);

	if (t43 != 18446744009864143479LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1254 = 159858202LL;
	static uint8_t x1255 = 1U;
	int8_t x1256 = 60;
	volatile uint64_t t44 = 86LLU;

	t44 = ((x1253<<(x1254&x1255))^x1256);

	if (t44 != 228010505199497LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1285 = 1713LLU;
	int16_t x1287 = -706;
	uint8_t x1288 = 5U;
	uint64_t t45 = 132905869649LLU;

	t45 = ((x1285<<(x1286&x1287))^x1288);

	if (t45 != 1883463418380293LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x1329 = 2583404U;
	uint64_t x1330 = 6036084907904LLU;
	static uint16_t x1332 = UINT16_MAX;
	uint32_t t46 = 29526U;

	t46 = ((x1329<<(x1330&x1331))^x1332);

	if (t46 != 2593939U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1341 = 6837LLU;
	uint32_t x1342 = 1U;
	int16_t x1343 = 0;
	static int8_t x1344 = INT8_MIN;
	uint64_t t47 = 223264734266LLU;

	t47 = ((x1341<<(x1342&x1343))^x1344);

	if (t47 != 18446744073709544757LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1345 = INT8_MAX;
	volatile int16_t x1346 = INT16_MAX;
	static int32_t x1347 = INT32_MIN;
	int32_t t48 = 9599;

	t48 = ((x1345<<(x1346&x1347))^x1348);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x1349 = 9U;
	static uint8_t x1350 = 1U;
	static int64_t x1351 = INT64_MAX;
	static uint32_t x1352 = 13U;
	uint32_t t49 = 54U;

	t49 = ((x1349<<(x1350&x1351))^x1352);

	if (t49 != 31U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1357 = 2368U;
	static volatile int32_t x1358 = 2223929;
	uint32_t x1359 = 150U;

	t50 = ((x1357<<(x1358&x1359))^x1360);

	if (t50 != 200551492) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1385 = INT8_MAX;
	int8_t x1386 = INT8_MAX;
	volatile int8_t x1387 = INT8_MIN;
	volatile int64_t x1388 = -284828729782764LL;
	volatile int64_t t51 = -29529LL;

	t51 = ((x1385<<(x1386&x1387))^x1388);

	if (t51 != -284828729782677LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1446 = INT16_MIN;
	int16_t x1447 = INT16_MAX;
	int16_t x1448 = INT16_MIN;
	volatile int32_t t52 = 19184950;

	t52 = ((x1445<<(x1446&x1447))^x1448);

	if (t52 != -32641) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x1465 = 25U;
	uint64_t x1467 = 52LLU;
	int32_t t53 = 2488204;

	t53 = ((x1465<<(x1466&x1467))^x1468);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1501 = 125713;
	static int64_t x1503 = INT64_MIN;
	static uint32_t x1504 = 29U;
	volatile uint32_t t54 = 249U;

	t54 = ((x1501<<(x1502&x1503))^x1504);

	if (t54 != 125708U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x1521 = UINT8_MAX;
	int8_t x1523 = INT8_MAX;
	volatile uint32_t t55 = 10575U;

	t55 = ((x1521<<(x1522&x1523))^x1524);

	if (t55 != 2722U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1557 = 0U;
	uint8_t x1558 = UINT8_MAX;
	uint8_t x1559 = 5U;
	volatile int8_t x1560 = INT8_MAX;

	t56 = ((x1557<<(x1558&x1559))^x1560);

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1569 = 20U;
	int16_t x1570 = INT16_MAX;
	static int16_t x1571 = INT16_MIN;
	int32_t x1572 = -1;
	volatile int32_t t57 = -880;

	t57 = ((x1569<<(x1570&x1571))^x1572);

	if (t57 != -21) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1585 = UINT16_MAX;
	static int8_t x1586 = INT8_MIN;
	volatile int8_t x1587 = INT8_MAX;
	uint16_t x1588 = UINT16_MAX;
	volatile int32_t t58 = -920;

	t58 = ((x1585<<(x1586&x1587))^x1588);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1605 = INT32_MAX;
	int32_t x1606 = INT32_MIN;
	volatile uint8_t x1607 = UINT8_MAX;
	int64_t x1608 = INT64_MIN;

	t59 = ((x1605<<(x1606&x1607))^x1608);

	if (t59 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x1609 = 0;
	uint16_t x1610 = 6U;
	int64_t x1611 = -9089772095LL;
	static volatile uint32_t x1612 = 87U;
	volatile uint32_t t60 = 4784U;

	t60 = ((x1609<<(x1610&x1611))^x1612);

	if (t60 != 87U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1617 = 61U;
	int8_t x1620 = INT8_MAX;
	int32_t t61 = -15759542;

	t61 = ((x1617<<(x1618&x1619))^x1620);

	if (t61 != 5) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1675 = 0U;
	static uint64_t x1676 = 324LLU;
	volatile uint64_t t62 = 279017545306610LLU;

	t62 = ((x1673<<(x1674&x1675))^x1676);

	if (t62 != 4044317LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1677 = UINT64_MAX;
	volatile int16_t x1678 = INT16_MIN;
	uint16_t x1679 = 2U;
	static volatile int16_t x1680 = INT16_MAX;
	uint64_t t63 = 6962440055683797LLU;

	t63 = ((x1677<<(x1678&x1679))^x1680);

	if (t63 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x1709 = 255635916LLU;
	int8_t x1710 = INT8_MAX;
	uint64_t x1711 = 197784510LLU;
	volatile int8_t x1712 = INT8_MIN;
	volatile uint64_t t64 = 119LLU;

	t64 = ((x1709<<(x1710&x1711))^x1712);

	if (t64 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x1741 = 1089950233034957968LLU;
	int64_t x1742 = INT64_MIN;
	uint8_t x1743 = 24U;
	uint64_t x1744 = UINT64_MAX;
	static volatile uint64_t t65 = 14072LLU;

	t65 = ((x1741<<(x1742&x1743))^x1744);

	if (t65 != 17356793840674593647LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x1749 = 18U;
	int32_t x1751 = INT32_MIN;
	volatile int32_t x1752 = INT32_MIN;
	static int32_t t66 = 2037372;

	t66 = ((x1749<<(x1750&x1751))^x1752);

	if (t66 != -2147483630) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1754 = 1039U;
	volatile int32_t x1755 = INT32_MIN;
	uint64_t x1756 = 58LLU;

	t67 = ((x1753<<(x1754&x1755))^x1756);

	if (t67 != 987LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x1769 = 0U;
	uint8_t x1771 = 68U;
	static volatile int8_t x1772 = -1;
	volatile int32_t t68 = -16;

	t68 = ((x1769<<(x1770&x1771))^x1772);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x1777 = UINT32_MAX;
	static uint64_t x1779 = UINT64_MAX;

	t69 = ((x1777<<(x1778&x1779))^x1780);

	if (t69 != 4294905855U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x1789 = 118U;
	int32_t x1790 = INT32_MIN;
	static volatile uint8_t x1791 = 3U;
	volatile int16_t x1792 = -1;
	int32_t t70 = -2;

	t70 = ((x1789<<(x1790&x1791))^x1792);

	if (t70 != -119) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x1817 = 104143103;
	uint8_t x1818 = 109U;
	int32_t t71 = -836285;

	t71 = ((x1817<<(x1818&x1819))^x1820);

	if (t71 != -208286207) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x1825 = UINT32_MAX;
	int64_t x1826 = INT64_MAX;
	static volatile uint8_t x1828 = UINT8_MAX;
	volatile uint32_t t72 = 5176U;

	t72 = ((x1825<<(x1826&x1827))^x1828);

	if (t72 != 4294967041U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x1849 = UINT32_MAX;
	uint8_t x1850 = UINT8_MAX;
	volatile int16_t x1851 = INT16_MIN;
	int32_t x1852 = -3600;
	volatile uint32_t t73 = 280U;

	t73 = ((x1849<<(x1850&x1851))^x1852);

	if (t73 != 3599U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x1853 = 842286511;
	int64_t x1854 = INT64_MIN;
	int32_t x1855 = INT32_MAX;
	int32_t x1856 = INT32_MAX;
	static volatile int32_t t74 = -103278973;

	t74 = ((x1853<<(x1854&x1855))^x1856);

	if (t74 != 1305197136) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x1869 = INT32_MAX;
	int64_t x1870 = INT64_MAX;
	static uint16_t x1872 = 26U;
	static int32_t t75 = 58828;

	t75 = ((x1869<<(x1870&x1871))^x1872);

	if (t75 != 2147483621) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x1905 = 7U;
	int32_t x1906 = INT32_MIN;
	int16_t x1907 = 48;
	int8_t x1908 = INT8_MAX;
	int32_t t76 = 142536;

	t76 = ((x1905<<(x1906&x1907))^x1908);

	if (t76 != 120) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x1985 = 8;
	volatile int32_t x1987 = INT32_MIN;
	uint64_t x1988 = UINT64_MAX;
	volatile uint64_t t77 = 198702701786148778LLU;

	t77 = ((x1985<<(x1986&x1987))^x1988);

	if (t77 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x1991 = INT32_MIN;
	uint8_t x1992 = UINT8_MAX;
	volatile int32_t t78 = 9622;

	t78 = ((x1989<<(x1990&x1991))^x1992);

	if (t78 != 65280) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2046 = 12U;
	int64_t x2047 = INT64_MIN;
	int8_t x2048 = -10;

	t79 = ((x2045<<(x2046&x2047))^x2048);

	if (t79 != -222) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x2078 = 18;
	uint32_t x2079 = UINT32_MAX;
	volatile uint16_t x2080 = UINT16_MAX;

	t80 = ((x2077<<(x2078&x2079))^x2080);

	if (t80 != 10551295) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x2093 = UINT16_MAX;
	volatile int8_t x2094 = INT8_MIN;
	uint16_t x2096 = UINT16_MAX;
	int32_t t81 = -111;

	t81 = ((x2093<<(x2094&x2095))^x2096);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2109 = 11690U;
	volatile int16_t x2110 = 662;
	int8_t x2112 = 0;
	int32_t t82 = -30272;

	t82 = ((x2109<<(x2110&x2111))^x2112);

	if (t82 != 11690) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x2118 = 49U;
	uint64_t x2119 = 1163953784526503104LLU;
	volatile int64_t t83 = -20846LL;

	t83 = ((x2117<<(x2118&x2119))^x2120);

	if (t83 != -43LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t t84 = 5962356LLU;

	t84 = ((x2133<<(x2134&x2135))^x2136);

	if (t84 != 22100LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2154 = INT16_MIN;
	static uint8_t x2155 = 7U;
	static int32_t x2156 = 0;
	volatile int32_t t85 = -8738176;

	t85 = ((x2153<<(x2154&x2155))^x2156);

	if (t85 != 13884) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2193 = 4U;
	int8_t x2194 = 39;
	static int16_t x2195 = 20;
	int64_t x2196 = -1913144908071403312LL;
	volatile int64_t t86 = -6204938478667157LL;

	t86 = ((x2193<<(x2194&x2195))^x2196);

	if (t86 != -1913144908071403376LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2226 = INT32_MIN;
	uint64_t x2227 = 22LLU;
	int8_t x2228 = 30;
	volatile int32_t t87 = -9481;

	t87 = ((x2225<<(x2226&x2227))^x2228);

	if (t87 != 479065) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x2244 = 6242U;
	static uint32_t t88 = 15U;

	t88 = ((x2241<<(x2242&x2243))^x2244);

	if (t88 != 3810U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2245 = 37937972LLU;
	int32_t x2246 = 382267;
	int8_t x2247 = INT8_MAX;
	volatile uint64_t x2248 = UINT64_MAX;
	volatile uint64_t t89 = 6094LLU;

	t89 = ((x2245<<(x2246&x2247))^x2248);

	if (t89 != 6917529027641081855LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x2261 = 24U;
	uint16_t x2262 = 4U;
	uint16_t x2264 = 354U;

	t90 = ((x2261<<(x2262&x2263))^x2264);

	if (t90 != 378U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x2269 = UINT64_MAX;
	int8_t x2270 = -2;
	uint8_t x2271 = 55U;
	uint64_t t91 = 331610LLU;

	t91 = ((x2269<<(x2270&x2271))^x2272);

	if (t91 != 18428729675200069823LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x2305 = 8U;
	int32_t x2306 = -32755842;
	static int64_t x2307 = 6LL;
	int8_t x2308 = -1;
	static int32_t t92 = -651413014;

	t92 = ((x2305<<(x2306&x2307))^x2308);

	if (t92 != -513) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x2313 = 78U;
	int8_t x2314 = 1;
	int8_t x2316 = 12;
	int32_t t93 = 6;

	t93 = ((x2313<<(x2314&x2315))^x2316);

	if (t93 != 66) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x2317 = 881538218LL;
	uint8_t x2318 = 2U;
	uint32_t x2319 = UINT32_MAX;
	uint8_t x2320 = 59U;

	t94 = ((x2317<<(x2318&x2319))^x2320);

	if (t94 != 3526152851LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x2321 = 64U;
	uint8_t x2323 = 35U;
	volatile int64_t x2324 = -16440841362624LL;
	volatile int64_t t95 = -59408694003282LL;

	t95 = ((x2321<<(x2322&x2323))^x2324);

	if (t95 != -16440841362496LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2353 = 509133113946147LL;
	int32_t x2354 = 16;
	volatile uint8_t x2355 = 75U;
	int16_t x2356 = INT16_MAX;

	t96 = ((x2353<<(x2354&x2355))^x2356);

	if (t96 != 509133113921500LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x2357 = 55U;
	static volatile int32_t x2359 = INT32_MIN;
	int64_t x2360 = -3726240407552LL;

	t97 = ((x2357<<(x2358&x2359))^x2360);

	if (t97 != -3726240407497LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x2377 = 112U;
	static int8_t x2378 = -55;
	uint16_t x2379 = 8U;
	int32_t x2380 = INT32_MIN;
	volatile int32_t t98 = -239594780;

	t98 = ((x2377<<(x2378&x2379))^x2380);

	if (t98 != -2147454976) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x2389 = 360153LL;
	int8_t x2390 = INT8_MAX;
	int8_t x2391 = 18;
	uint32_t x2392 = 2U;
	int64_t t99 = 80503969411765536LL;

	t99 = ((x2389<<(x2390&x2391))^x2392);

	if (t99 != 94411948034LL) { NG(); } else { ; }
	
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

