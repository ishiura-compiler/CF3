#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x16 = 1;
volatile uint32_t x25 = 49057133U;
int8_t x83 = INT8_MIN;
uint16_t x85 = UINT16_MAX;
volatile uint8_t x170 = 26U;
volatile uint16_t x229 = 20992U;
int8_t x230 = 5;
volatile int32_t t7 = -233070;
int8_t x318 = 24;
int64_t x419 = -6627245461LL;
uint32_t x420 = UINT32_MAX;
uint8_t x503 = 5U;
int32_t x504 = -19941151;
volatile int64_t x628 = INT64_MAX;
volatile int64_t t14 = INT64_MAX;
volatile int8_t x648 = -31;
int8_t x654 = 1;
int32_t t16 = 20552467;
int8_t x666 = 6;
int32_t x676 = -1;
static int16_t x806 = 3;
int16_t x807 = 44;
uint32_t x945 = 2U;
volatile uint8_t x998 = 0U;
uint32_t x1044 = UINT32_MAX;
volatile uint32_t t25 = 117U;
static uint16_t x1067 = 9U;
uint8_t x1118 = 9U;
uint64_t t27 = 1020417299998564183LLU;
volatile int32_t t28 = -117496122;
volatile int32_t x1208 = INT32_MIN;
static uint8_t x1237 = UINT8_MAX;
uint64_t x1264 = 1LLU;
static int32_t t33 = 180512743;
uint8_t x1355 = UINT8_MAX;
volatile int32_t x1454 = 2;
volatile uint8_t x1577 = 1U;
static int8_t x1595 = INT8_MAX;
volatile uint64_t t42 = 1611LLU;
volatile int16_t x1607 = 296;
volatile int32_t x1960 = INT32_MIN;
int64_t x2155 = -1LL;
volatile uint64_t x2159 = UINT64_MAX;
static uint8_t x2176 = 8U;
int32_t x2320 = -1;
uint64_t x2673 = 470019409511LLU;
uint16_t x3111 = UINT16_MAX;
volatile uint16_t x3189 = 15U;
int16_t x3191 = INT16_MIN;
uint8_t x3521 = 80U;
volatile uint8_t x3606 = 3U;
uint16_t x3704 = 1U;
static int16_t x3710 = 5;
volatile uint16_t x3756 = 5U;
static int32_t t71 = -191885155;
int16_t x3906 = 0;
int8_t x4200 = INT8_MIN;
int16_t x4340 = -1;
static int16_t x4591 = INT16_MIN;
static int16_t x4744 = -6289;
uint64_t t77 = 97830119LLU;
static volatile uint16_t x4762 = 0U;
static volatile uint8_t x4764 = 1U;
static int8_t x4780 = INT8_MIN;
volatile int8_t x4914 = 6;
int16_t x4916 = INT16_MIN;
int32_t t81 = 219371001;
uint8_t x5014 = 2U;
int16_t x5122 = 0;
static int16_t x5250 = 0;
int16_t x5431 = 4;
static uint64_t x5490 = 16LLU;
volatile int32_t t88 = -21426961;
uint32_t x5545 = 168311U;
static int8_t x5659 = INT8_MAX;
volatile int8_t x5682 = 2;
int16_t x5683 = -1;
uint16_t x5774 = 0U;
int32_t x5776 = INT32_MIN;
int32_t t92 = -6;
int8_t x5816 = INT8_MIN;
volatile uint64_t t95 = 193381485146374500LLU;
uint8_t x6049 = 2U;
volatile int32_t t97 = 558301163;
int8_t x6093 = 0;


void f0(void) {
	static volatile int16_t x13 = INT16_MAX;
	int8_t x14 = 11;
	static volatile int32_t x15 = INT32_MIN;
	volatile int32_t t0 = -3813862;

	t0 = (((x13<<x14)%x15)+x16);

	if (t0 != 67106817) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x26 = 0;
	volatile int32_t x27 = INT32_MAX;
	int8_t x28 = INT8_MIN;
	static uint32_t t1 = 2417057U;

	t1 = (((x25<<x26)%x27)+x28);

	if (t1 != 49057005U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x73 = 4;
	uint8_t x74 = 5U;
	int8_t x75 = INT8_MIN;
	int16_t x76 = -13;
	static volatile int32_t t2 = -8198;

	t2 = (((x73<<x74)%x75)+x76);

	if (t2 != -13) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x81 = INT64_MAX;
	int16_t x82 = 0;
	static int32_t x84 = 7811;
	int64_t t3 = -613425537051LL;

	t3 = (((x81<<x82)%x83)+x84);

	if (t3 != 7938LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x86 = 5U;
	static int16_t x87 = INT16_MAX;
	int16_t x88 = INT16_MAX;
	int32_t t4 = -2;

	t4 = (((x85<<x86)%x87)+x88);

	if (t4 != 32799) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x169 = 25058764707797837LLU;
	static int64_t x171 = -1LL;
	int64_t x172 = INT64_MIN;
	uint64_t t5 = 565204161LLU;

	t5 = (((x169<<x170)%x171)+x172);

	if (t5 != 13926164057783533568LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x197 = 1;
	volatile int16_t x198 = 17;
	int8_t x199 = INT8_MIN;
	int16_t x200 = INT16_MAX;
	volatile int32_t t6 = -11;

	t6 = (((x197<<x198)%x199)+x200);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x231 = -1;
	int16_t x232 = INT16_MAX;

	t7 = (((x229<<x230)%x231)+x232);

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x317 = 1;
	int8_t x319 = INT8_MIN;
	int64_t x320 = -1LL;
	static volatile int64_t t8 = 3165517650019LL;

	t8 = (((x317<<x318)%x319)+x320);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x333 = 21245419466385LL;
	static volatile int8_t x334 = 14;
	int32_t x335 = 25;
	static int64_t x336 = INT64_MIN;
	int64_t t9 = -782884434969LL;

	t9 = (((x333<<x334)%x335)+x336);

	if (t9 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x393 = 867973U;
	volatile uint16_t x394 = 4U;
	int16_t x395 = -1;
	volatile int32_t x396 = INT32_MIN;
	volatile uint32_t t10 = 181466U;

	t10 = (((x393<<x394)%x395)+x396);

	if (t10 != 2161371216U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x397 = UINT8_MAX;
	static uint64_t x398 = 16LLU;
	int8_t x399 = INT8_MIN;
	volatile int8_t x400 = -3;
	int32_t t11 = 27;

	t11 = (((x397<<x398)%x399)+x400);

	if (t11 != -3) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x417 = 21655U;
	uint8_t x418 = 13U;
	static volatile int64_t t12 = 184141716290435LL;

	t12 = (((x417<<x418)%x419)+x420);

	if (t12 != 4472365055LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x501 = 82U;
	static uint8_t x502 = 13U;
	int32_t t13 = -4581786;

	t13 = (((x501<<x502)%x503)+x504);

	if (t13 != -19941147) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x625 = INT64_MAX;
	int64_t x626 = 0LL;
	int16_t x627 = -1;

	t14 = (((x625<<x626)%x627)+x628);

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x645 = UINT8_MAX;
	int8_t x646 = 4;
	int8_t x647 = -1;
	int32_t t15 = 361982;

	t15 = (((x645<<x646)%x647)+x648);

	if (t15 != -31) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x653 = 6U;
	int16_t x655 = INT16_MAX;
	static uint8_t x656 = 27U;

	t16 = (((x653<<x654)%x655)+x656);

	if (t16 != 39) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x665 = 3U;
	int64_t x667 = 4678505442217LL;
	int8_t x668 = INT8_MIN;
	volatile int64_t t17 = 476239LL;

	t17 = (((x665<<x666)%x667)+x668);

	if (t17 != 64LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x673 = 112339LLU;
	static int32_t x674 = 1;
	uint16_t x675 = 56U;
	uint64_t t18 = 1323058614LLU;

	t18 = (((x673<<x674)%x675)+x676);

	if (t18 != 5LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x777 = 1498373330U;
	static int8_t x778 = 20;
	volatile int32_t x779 = INT32_MAX;
	int8_t x780 = INT8_MIN;
	volatile uint32_t t19 = 16760U;

	t19 = (((x777<<x778)%x779)+x780);

	if (t19 != 1293942657U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x805 = UINT32_MAX;
	uint8_t x808 = 14U;
	volatile uint32_t t20 = 987034U;

	t20 = (((x805<<x806)%x807)+x808);

	if (t20 != 54U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x913 = INT8_MAX;
	uint8_t x914 = 4U;
	static uint64_t x915 = 14162193820LLU;
	int16_t x916 = 0;
	uint64_t t21 = 74671729LLU;

	t21 = (((x913<<x914)%x915)+x916);

	if (t21 != 2032LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x946 = 1U;
	int64_t x947 = -30312LL;
	int16_t x948 = INT16_MAX;
	volatile int64_t t22 = -4334839LL;

	t22 = (((x945<<x946)%x947)+x948);

	if (t22 != 32771LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x973 = 3U;
	int32_t x974 = 0;
	static int32_t x975 = INT32_MAX;
	uint8_t x976 = 5U;
	volatile uint32_t t23 = 0U;

	t23 = (((x973<<x974)%x975)+x976);

	if (t23 != 8U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x997 = 8319U;
	int8_t x999 = 3;
	static uint32_t x1000 = 15U;
	uint32_t t24 = 995129U;

	t24 = (((x997<<x998)%x999)+x1000);

	if (t24 != 15U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x1041 = 1406620595U;
	int16_t x1042 = 3;
	static uint16_t x1043 = UINT16_MAX;

	t25 = (((x1041<<x1042)%x1043)+x1044);

	if (t25 != 15442U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1065 = 15U;
	int8_t x1066 = 23;
	uint16_t x1068 = UINT16_MAX;
	int32_t t26 = -87304;

	t26 = (((x1065<<x1066)%x1067)+x1068);

	if (t26 != 65538) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1117 = UINT8_MAX;
	uint64_t x1119 = UINT64_MAX;
	uint32_t x1120 = 879844149U;

	t27 = (((x1117<<x1118)%x1119)+x1120);

	if (t27 != 879974709LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x1121 = 5038U;
	uint8_t x1122 = 8U;
	uint8_t x1123 = 4U;
	uint16_t x1124 = 14831U;

	t28 = (((x1121<<x1122)%x1123)+x1124);

	if (t28 != 14831) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x1205 = 9;
	volatile uint16_t x1206 = 16U;
	int32_t x1207 = INT32_MIN;
	int32_t t29 = -60233863;

	t29 = (((x1205<<x1206)%x1207)+x1208);

	if (t29 != -2146893824) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1238 = 17;
	static int64_t x1239 = -1LL;
	volatile uint8_t x1240 = UINT8_MAX;
	int64_t t30 = 11714534LL;

	t30 = (((x1237<<x1238)%x1239)+x1240);

	if (t30 != 255LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1261 = 118250687U;
	volatile uint32_t x1262 = 0U;
	uint64_t x1263 = 8769559826445021490LLU;
	uint64_t t31 = 2043LLU;

	t31 = (((x1261<<x1262)%x1263)+x1264);

	if (t31 != 118250688LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x1281 = 31U;
	int32_t x1282 = 12;
	int64_t x1283 = INT64_MIN;
	static int16_t x1284 = -1;
	volatile int64_t t32 = -4165424899202858LL;

	t32 = (((x1281<<x1282)%x1283)+x1284);

	if (t32 != 126975LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1293 = INT8_MAX;
	uint8_t x1294 = 0U;
	int16_t x1295 = -1;
	static uint8_t x1296 = 0U;

	t33 = (((x1293<<x1294)%x1295)+x1296);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x1337 = 280;
	int16_t x1338 = 1;
	static int64_t x1339 = INT64_MIN;
	uint8_t x1340 = UINT8_MAX;
	volatile int64_t t34 = -178LL;

	t34 = (((x1337<<x1338)%x1339)+x1340);

	if (t34 != 815LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1349 = 1U;
	static int8_t x1350 = 7;
	uint32_t x1351 = UINT32_MAX;
	int16_t x1352 = INT16_MIN;
	volatile uint32_t t35 = 826442U;

	t35 = (((x1349<<x1350)%x1351)+x1352);

	if (t35 != 4294934656U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1353 = 20U;
	int64_t x1354 = 26LL;
	uint16_t x1356 = UINT16_MAX;
	static volatile int32_t t36 = -51;

	t36 = (((x1353<<x1354)%x1355)+x1356);

	if (t36 != 65615) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x1373 = UINT32_MAX;
	uint8_t x1374 = 1U;
	int16_t x1375 = INT16_MIN;
	volatile int64_t x1376 = -7791941LL;
	int64_t t37 = 225811938949503LL;

	t37 = (((x1373<<x1374)%x1375)+x1376);

	if (t37 != -7759175LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1453 = 672587488528LL;
	volatile int64_t x1455 = -1LL;
	static uint64_t x1456 = UINT64_MAX;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (((x1453<<x1454)%x1455)+x1456);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1545 = 22U;
	static int8_t x1546 = 16;
	int16_t x1547 = INT16_MAX;
	uint64_t x1548 = UINT64_MAX;
	uint64_t t39 = 752437LLU;

	t39 = (((x1545<<x1546)%x1547)+x1548);

	if (t39 != 43LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1557 = 0;
	volatile uint32_t x1558 = 7U;
	volatile int64_t x1559 = 26402LL;
	uint32_t x1560 = 5497588U;
	volatile int64_t t40 = -2LL;

	t40 = (((x1557<<x1558)%x1559)+x1560);

	if (t40 != 5497588LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x1578 = 0U;
	volatile int64_t x1579 = INT64_MAX;
	int16_t x1580 = -1;
	int64_t t41 = -1787752051LL;

	t41 = (((x1577<<x1578)%x1579)+x1580);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x1593 = 234720091;
	uint8_t x1594 = 0U;
	uint64_t x1596 = 948945780738LLU;

	t42 = (((x1593<<x1594)%x1595)+x1596);

	if (t42 != 948945780826LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x1605 = 9510959257149LLU;
	static uint8_t x1606 = 12U;
	int32_t x1608 = -1;
	uint64_t t43 = 35917247415268156LLU;

	t43 = (((x1605<<x1606)%x1607)+x1608);

	if (t43 != 143LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1737 = 677U;
	static uint64_t x1738 = 24LLU;
	static uint8_t x1739 = 7U;
	uint16_t x1740 = 11679U;
	static uint32_t t44 = 11U;

	t44 = (((x1737<<x1738)%x1739)+x1740);

	if (t44 != 11683U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x1957 = 1330LLU;
	int8_t x1958 = 32;
	uint64_t x1959 = 8578287983252LLU;
	uint64_t t45 = 50200939929LLU;

	t45 = (((x1957<<x1958)%x1959)+x1960);

	if (t45 != 5710159020032LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2085 = UINT32_MAX;
	static uint8_t x2086 = 6U;
	int32_t x2087 = -1;
	uint16_t x2088 = 9439U;
	uint32_t t46 = 3949U;

	t46 = (((x2085<<x2086)%x2087)+x2088);

	if (t46 != 9375U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x2153 = 2464;
	int8_t x2154 = 12;
	static int32_t x2156 = 5271;
	int64_t t47 = -1003611LL;

	t47 = (((x2153<<x2154)%x2155)+x2156);

	if (t47 != 5271LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2157 = 305817U;
	uint8_t x2158 = 2U;
	int64_t x2160 = INT64_MIN;
	uint64_t t48 = 3872055330124781160LLU;

	t48 = (((x2157<<x2158)%x2159)+x2160);

	if (t48 != 9223372036855999076LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2173 = 6761620684939LLU;
	int8_t x2174 = 1;
	uint16_t x2175 = UINT16_MAX;
	uint64_t t49 = 164852108419397522LLU;

	t49 = (((x2173<<x2174)%x2175)+x2176);

	if (t49 != 11626LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2237 = 10706U;
	volatile int8_t x2238 = 0;
	uint32_t x2239 = 46178944U;
	uint64_t x2240 = UINT64_MAX;
	uint64_t t50 = 882714079842071432LLU;

	t50 = (((x2237<<x2238)%x2239)+x2240);

	if (t50 != 10705LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2317 = 0;
	int8_t x2318 = 0;
	int16_t x2319 = -1;
	int32_t t51 = -140309751;

	t51 = (((x2317<<x2318)%x2319)+x2320);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x2453 = UINT16_MAX;
	static uint16_t x2454 = 13U;
	int16_t x2455 = INT16_MIN;
	int16_t x2456 = INT16_MIN;
	volatile int32_t t52 = 74;

	t52 = (((x2453<<x2454)%x2455)+x2456);

	if (t52 != -8192) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2561 = 1794859;
	static uint16_t x2562 = 0U;
	int32_t x2563 = INT32_MAX;
	int32_t x2564 = 1831;
	int32_t t53 = -150;

	t53 = (((x2561<<x2562)%x2563)+x2564);

	if (t53 != 1796690) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2674 = 27U;
	static int32_t x2675 = -1;
	uint16_t x2676 = 4777U;
	uint64_t t54 = 123LLU;

	t54 = (((x2673<<x2674)%x2675)+x2676);

	if (t54 != 7744705039339360937LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x2773 = UINT64_MAX;
	volatile int8_t x2774 = 10;
	int32_t x2775 = INT32_MIN;
	static int64_t x2776 = -1LL;
	volatile uint64_t t55 = 1542834508616977LLU;

	t55 = (((x2773<<x2774)%x2775)+x2776);

	if (t55 != 2147482623LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x2877 = 222U;
	uint16_t x2878 = 5U;
	int16_t x2879 = INT16_MIN;
	volatile int32_t x2880 = -94676508;
	uint32_t t56 = 7051U;

	t56 = (((x2877<<x2878)%x2879)+x2880);

	if (t56 != 4200297892U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2901 = 4U;
	static uint8_t x2902 = 3U;
	int32_t x2903 = INT32_MAX;
	int16_t x2904 = INT16_MIN;
	int32_t t57 = 53687813;

	t57 = (((x2901<<x2902)%x2903)+x2904);

	if (t57 != -32736) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3053 = INT8_MAX;
	volatile uint8_t x3054 = 1U;
	static int32_t x3055 = INT32_MIN;
	static uint32_t x3056 = 72206066U;
	uint32_t t58 = 683344748U;

	t58 = (((x3053<<x3054)%x3055)+x3056);

	if (t58 != 72206320U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3097 = INT8_MAX;
	static volatile uint8_t x3098 = 0U;
	static uint32_t x3099 = 92557829U;
	volatile int32_t x3100 = 22;
	uint32_t t59 = 1U;

	t59 = (((x3097<<x3098)%x3099)+x3100);

	if (t59 != 149U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3109 = UINT32_MAX;
	uint16_t x3110 = 2U;
	int32_t x3112 = INT32_MIN;
	static volatile uint32_t t60 = 6096725U;

	t60 = (((x3109<<x3110)%x3111)+x3112);

	if (t60 != 2147549180U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x3190 = 3;
	uint32_t x3192 = 8574U;
	static volatile uint32_t t61 = 15805U;

	t61 = (((x3189<<x3190)%x3191)+x3192);

	if (t61 != 8694U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3269 = 12U;
	int16_t x3270 = 0;
	uint8_t x3271 = 2U;
	volatile int8_t x3272 = INT8_MAX;
	volatile uint32_t t62 = 527572472U;

	t62 = (((x3269<<x3270)%x3271)+x3272);

	if (t62 != 127U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3305 = 10;
	uint16_t x3306 = 27U;
	volatile int32_t x3307 = -1;
	int8_t x3308 = INT8_MIN;
	int32_t t63 = -2041984;

	t63 = (((x3305<<x3306)%x3307)+x3308);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x3522 = 0U;
	uint32_t x3523 = 1113611U;
	uint16_t x3524 = 316U;
	uint32_t t64 = 0U;

	t64 = (((x3521<<x3522)%x3523)+x3524);

	if (t64 != 396U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x3605 = 8U;
	volatile int8_t x3607 = INT8_MAX;
	uint64_t x3608 = UINT64_MAX;
	volatile uint64_t t65 = 15418009906705077LLU;

	t65 = (((x3605<<x3606)%x3607)+x3608);

	if (t65 != 63LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3701 = UINT64_MAX;
	volatile uint8_t x3702 = 1U;
	uint64_t x3703 = UINT64_MAX;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (((x3701<<x3702)%x3703)+x3704);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x3709 = 248291927299610LL;
	int8_t x3711 = INT8_MIN;
	static int8_t x3712 = INT8_MIN;
	int64_t t67 = 69426296744864LL;

	t67 = (((x3709<<x3710)%x3711)+x3712);

	if (t67 != -64LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x3713 = 30U;
	volatile int8_t x3714 = 1;
	int16_t x3715 = INT16_MAX;
	int64_t x3716 = INT64_MIN;
	int64_t t68 = 34LL;

	t68 = (((x3713<<x3714)%x3715)+x3716);

	if (t68 != -9223372036854775748LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x3753 = 8U;
	uint16_t x3754 = 1U;
	static int64_t x3755 = -122459717722LL;
	static int64_t t69 = -689221502682780LL;

	t69 = (((x3753<<x3754)%x3755)+x3756);

	if (t69 != 21LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3785 = INT16_MAX;
	uint8_t x3786 = 3U;
	static int16_t x3787 = -1;
	uint8_t x3788 = 61U;
	int32_t t70 = 191523;

	t70 = (((x3785<<x3786)%x3787)+x3788);

	if (t70 != 61) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3841 = 12U;
	uint8_t x3842 = 10U;
	int32_t x3843 = INT32_MAX;
	int16_t x3844 = INT16_MIN;

	t71 = (((x3841<<x3842)%x3843)+x3844);

	if (t71 != -20480) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3905 = INT32_MAX;
	int16_t x3907 = INT16_MIN;
	int8_t x3908 = INT8_MAX;
	static int32_t t72 = 49;

	t72 = (((x3905<<x3906)%x3907)+x3908);

	if (t72 != 32894) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x4197 = 4LLU;
	int16_t x4198 = 13;
	volatile int32_t x4199 = INT32_MIN;
	volatile uint64_t t73 = 21980701010269LLU;

	t73 = (((x4197<<x4198)%x4199)+x4200);

	if (t73 != 32640LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4337 = 87726601LL;
	uint16_t x4338 = 1U;
	uint32_t x4339 = 122715U;
	volatile int64_t t74 = 18969822322LL;

	t74 = (((x4337<<x4338)%x4339)+x4340);

	if (t74 != 93466LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x4573 = 3398346163418LLU;
	int8_t x4574 = 2;
	static int16_t x4575 = 23;
	volatile int64_t x4576 = -29209290898190LL;
	volatile uint64_t t75 = 47256197208LLU;

	t75 = (((x4573<<x4574)%x4575)+x4576);

	if (t75 != 18446714864418653442LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4589 = UINT8_MAX;
	uint8_t x4590 = 5U;
	uint32_t x4592 = 2110U;
	static volatile uint32_t t76 = 2967U;

	t76 = (((x4589<<x4590)%x4591)+x4592);

	if (t76 != 10270U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x4741 = 2U;
	uint8_t x4742 = 1U;
	uint64_t x4743 = 216492392761575LLU;

	t77 = (((x4741<<x4742)%x4743)+x4744);

	if (t77 != 18446744073709545331LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4761 = INT16_MAX;
	int16_t x4763 = -1;
	int32_t t78 = -259734;

	t78 = (((x4761<<x4762)%x4763)+x4764);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4777 = UINT64_MAX;
	uint16_t x4778 = 2U;
	static volatile int32_t x4779 = INT32_MIN;
	uint64_t t79 = 34LLU;

	t79 = (((x4777<<x4778)%x4779)+x4780);

	if (t79 != 2147483516LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4913 = 6U;
	static int32_t x4915 = -1;
	int32_t t80 = 217359171;

	t80 = (((x4913<<x4914)%x4915)+x4916);

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x4965 = INT16_MAX;
	static int64_t x4966 = 11LL;
	uint8_t x4967 = 30U;
	int16_t x4968 = -1;

	t81 = (((x4965<<x4966)%x4967)+x4968);

	if (t81 != 25) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5013 = 3384710268LL;
	static int32_t x5015 = -2222450;
	uint32_t x5016 = 62190U;
	int64_t t82 = -8498610051LL;

	t82 = (((x5013<<x5014)%x5015)+x5016);

	if (t82 != 1960312LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x5029 = 11401761U;
	volatile uint8_t x5030 = 8U;
	int8_t x5031 = INT8_MAX;
	int8_t x5032 = INT8_MAX;
	static uint32_t t83 = 320U;

	t83 = (((x5029<<x5030)%x5031)+x5032);

	if (t83 != 164U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5121 = 0;
	int8_t x5123 = -1;
	int16_t x5124 = 11926;
	int32_t t84 = 3602826;

	t84 = (((x5121<<x5122)%x5123)+x5124);

	if (t84 != 11926) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x5125 = INT8_MAX;
	volatile int16_t x5126 = 0;
	static volatile int32_t x5127 = 108402573;
	int8_t x5128 = INT8_MIN;
	volatile int32_t t85 = -227;

	t85 = (((x5125<<x5126)%x5127)+x5128);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5249 = INT64_MAX;
	uint32_t x5251 = 1987383978U;
	int32_t x5252 = 27399;
	volatile int64_t t86 = 21361198LL;

	t86 = (((x5249<<x5250)%x5251)+x5252);

	if (t86 != 123798772LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x5429 = 4105U;
	int8_t x5430 = 0;
	int8_t x5432 = INT8_MIN;
	uint32_t t87 = 809705U;

	t87 = (((x5429<<x5430)%x5431)+x5432);

	if (t87 != 4294967169U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x5489 = 1U;
	uint16_t x5491 = UINT16_MAX;
	volatile int8_t x5492 = -18;

	t88 = (((x5489<<x5490)%x5491)+x5492);

	if (t88 != -17) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5546 = 3;
	volatile int64_t x5547 = INT64_MAX;
	uint64_t x5548 = 4358784LLU;
	uint64_t t89 = 51000160798LLU;

	t89 = (((x5545<<x5546)%x5547)+x5548);

	if (t89 != 5705272LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x5657 = 906U;
	int8_t x5658 = 1;
	int32_t x5660 = INT32_MIN;
	static volatile uint32_t t90 = 95916285U;

	t90 = (((x5657<<x5658)%x5659)+x5660);

	if (t90 != 2147483682U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5681 = UINT16_MAX;
	uint8_t x5684 = 0U;
	volatile int32_t t91 = 25;

	t91 = (((x5681<<x5682)%x5683)+x5684);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5773 = 8851;
	int16_t x5775 = -1110;

	t92 = (((x5773<<x5774)%x5775)+x5776);

	if (t92 != -2147482567) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x5801 = 4U;
	static uint32_t x5802 = 2U;
	static uint32_t x5803 = 226847U;
	static int64_t x5804 = INT64_MIN;
	static volatile int64_t t93 = -1262LL;

	t93 = (((x5801<<x5802)%x5803)+x5804);

	if (t93 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5813 = UINT32_MAX;
	int32_t x5814 = 15;
	static uint32_t x5815 = UINT32_MAX;
	uint32_t t94 = 1987923707U;

	t94 = (((x5813<<x5814)%x5815)+x5816);

	if (t94 != 4294934400U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x5869 = 6U;
	int32_t x5870 = 0;
	volatile int32_t x5871 = INT32_MAX;
	uint64_t x5872 = 164834LLU;

	t95 = (((x5869<<x5870)%x5871)+x5872);

	if (t95 != 164840LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x6041 = UINT32_MAX;
	uint16_t x6042 = 23U;
	int32_t x6043 = INT32_MAX;
	int64_t x6044 = 736LL;
	int64_t t96 = 12220LL;

	t96 = (((x6041<<x6042)%x6043)+x6044);

	if (t96 != 2139095777LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x6050 = 0U;
	volatile int16_t x6051 = 659;
	int8_t x6052 = INT8_MIN;

	t97 = (((x6049<<x6050)%x6051)+x6052);

	if (t97 != -126) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x6094 = 17;
	int32_t x6095 = INT32_MAX;
	uint32_t x6096 = 40586026U;
	uint32_t t98 = 1245501U;

	t98 = (((x6093<<x6094)%x6095)+x6096);

	if (t98 != 40586026U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6165 = INT16_MAX;
	int8_t x6166 = 3;
	int32_t x6167 = -1;
	int8_t x6168 = -50;
	static volatile int32_t t99 = 35;

	t99 = (((x6165<<x6166)%x6167)+x6168);

	if (t99 != -50) { NG(); } else { ; }
	
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

