#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x147 = 2LLU;
int16_t x173 = 4;
volatile int64_t x207 = INT64_MAX;
uint8_t x208 = 0U;
uint32_t x271 = UINT32_MAX;
int32_t x330 = INT32_MIN;
volatile uint32_t x414 = 1088145U;
int64_t x526 = INT64_MIN;
volatile int64_t x535 = INT64_MAX;
volatile int32_t t11 = 1;
uint16_t x661 = UINT16_MAX;
volatile uint64_t x664 = 2LLU;
int32_t t13 = -59504986;
int32_t t16 = -214735;
uint8_t x908 = 22U;
static volatile int32_t x1017 = -28079237;
int64_t x1134 = -182314816233422LL;
static volatile int32_t t26 = 5810825;
int8_t x1273 = INT8_MIN;
uint32_t x1275 = 181396534U;
uint64_t x1291 = 91085142LLU;
uint64_t x1297 = UINT64_MAX;
static int32_t t30 = -15366288;
int8_t x1418 = INT8_MIN;
static uint32_t x1420 = 25U;
volatile int32_t t33 = -7325;
volatile uint8_t x1544 = 31U;
int16_t x1546 = -14;
volatile int32_t t35 = -2;
int16_t x1549 = INT16_MAX;
volatile int32_t t37 = -1;
int16_t x1643 = 0;
int32_t t38 = -210439717;
uint8_t x1664 = 0U;
volatile uint8_t x1749 = 46U;
volatile int8_t x1816 = 11;
volatile int32_t x2033 = 26820424;
static int8_t x2074 = INT8_MIN;
static uint8_t x2075 = UINT8_MAX;
int16_t x2085 = INT16_MIN;
uint16_t x2092 = 51U;
volatile int32_t t45 = 1;
int64_t x2137 = 1515LL;
int8_t x2138 = 9;
int32_t t47 = -23;
volatile int32_t t48 = 561;
uint8_t x2302 = UINT8_MAX;
int16_t x2311 = INT16_MAX;
static volatile uint8_t x2377 = 3U;
int32_t x2378 = INT32_MIN;
uint8_t x2379 = 51U;
int32_t t51 = 7183;
int16_t x2381 = INT16_MIN;
uint16_t x2384 = 23U;
uint8_t x2404 = 0U;
uint64_t x2415 = 17709551230529LLU;
volatile int32_t t54 = -5;
volatile int16_t x2445 = INT16_MIN;
static int32_t x2448 = 1;
volatile uint16_t x2522 = UINT16_MAX;
int32_t x2524 = 1;
uint16_t x2542 = UINT16_MAX;
uint16_t x2588 = 26U;
int16_t x2635 = 245;
volatile int8_t x3093 = INT8_MIN;
volatile int32_t t65 = -52132;
volatile int8_t x3177 = INT8_MAX;
int32_t t69 = 2;
volatile uint8_t x3228 = 5U;
uint8_t x3237 = UINT8_MAX;
static volatile uint64_t x3373 = UINT64_MAX;
uint8_t x3375 = 57U;
static int32_t x3418 = INT32_MIN;
static uint32_t x3420 = 0U;
volatile int64_t x3565 = 0LL;
static int32_t t79 = -878365;
uint8_t x3808 = 21U;
int64_t x3855 = 1LL;
static int32_t t82 = 987622;
static volatile int32_t x3969 = 114;
uint16_t x3970 = 3982U;
int16_t x3971 = 0;
volatile int32_t t84 = -580223;
uint8_t x4244 = 20U;
volatile int16_t x4247 = 5293;
int32_t t87 = 57315;
uint8_t x4377 = 1U;
static int32_t x4455 = INT32_MAX;
volatile int32_t t89 = -245920225;
int8_t x4555 = 30;
int8_t x4591 = INT8_MAX;
int32_t x4673 = INT32_MAX;
int16_t x4676 = 4;
uint32_t x4859 = 184U;
int64_t x4860 = 19LL;
volatile int32_t t96 = 1446988;
static uint8_t x4914 = 0U;
volatile int32_t t97 = -815294;


void f0(void) {
	int16_t x1 = 85;
	uint8_t x2 = 88U;
	int8_t x3 = 0;
	int32_t x4 = 0;
	int32_t t0 = -302;

	t0 = ((x1==x2)==(x3>>x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x145 = -1;
	int8_t x146 = 41;
	uint8_t x148 = 22U;
	int32_t t1 = -5405;

	t1 = ((x145==x146)==(x147>>x148));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x169 = -1;
	volatile int32_t x170 = INT32_MIN;
	uint8_t x171 = 2U;
	volatile uint8_t x172 = 25U;
	static int32_t t2 = -6000897;

	t2 = ((x169==x170)==(x171>>x172));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x174 = 1U;
	static volatile int64_t x175 = 2937417334868LL;
	uint16_t x176 = 15U;
	static volatile int32_t t3 = -573665968;

	t3 = ((x173==x174)==(x175>>x176));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x205 = INT8_MIN;
	int64_t x206 = INT64_MIN;
	volatile int32_t t4 = 8923306;

	t4 = ((x205==x206)==(x207>>x208));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x229 = 30U;
	uint16_t x230 = 5U;
	static int64_t x231 = 510430LL;
	uint8_t x232 = 5U;
	static int32_t t5 = -1589;

	t5 = ((x229==x230)==(x231>>x232));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x269 = 561934480913446259LLU;
	volatile uint8_t x270 = 3U;
	volatile uint8_t x272 = 1U;
	static int32_t t6 = -19;

	t6 = ((x269==x270)==(x271>>x272));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x317 = INT64_MIN;
	int64_t x318 = INT64_MIN;
	int8_t x319 = 32;
	int64_t x320 = 5LL;
	volatile int32_t t7 = -37;

	t7 = ((x317==x318)==(x319>>x320));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x329 = -1;
	uint64_t x331 = UINT64_MAX;
	static uint64_t x332 = 0LLU;
	static int32_t t8 = -377730450;

	t8 = ((x329==x330)==(x331>>x332));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x413 = INT8_MIN;
	static int64_t x415 = 99243286946871075LL;
	volatile int8_t x416 = 1;
	volatile int32_t t9 = 90983;

	t9 = ((x413==x414)==(x415>>x416));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x525 = INT32_MIN;
	volatile uint8_t x527 = 23U;
	volatile uint64_t x528 = 2LLU;
	int32_t t10 = -500;

	t10 = ((x525==x526)==(x527>>x528));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x533 = INT16_MAX;
	int64_t x534 = -962093241561818LL;
	static uint16_t x536 = 44U;

	t11 = ((x533==x534)==(x535>>x536));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x662 = INT32_MAX;
	uint16_t x663 = 8034U;
	int32_t t12 = 10538;

	t12 = ((x661==x662)==(x663>>x664));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x689 = UINT32_MAX;
	uint32_t x690 = 2648229U;
	static int16_t x691 = 9956;
	uint8_t x692 = 0U;

	t13 = ((x689==x690)==(x691>>x692));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x709 = -22873137433LL;
	int64_t x710 = INT64_MIN;
	uint8_t x711 = 1U;
	int8_t x712 = 0;
	static int32_t t14 = 1462;

	t14 = ((x709==x710)==(x711>>x712));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x725 = 1633718051330LL;
	int16_t x726 = -1;
	int64_t x727 = 6273LL;
	uint8_t x728 = 7U;
	volatile int32_t t15 = 633903459;

	t15 = ((x725==x726)==(x727>>x728));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x793 = 23U;
	int16_t x794 = -4661;
	volatile uint8_t x795 = UINT8_MAX;
	volatile uint16_t x796 = 15U;

	t16 = ((x793==x794)==(x795>>x796));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x901 = INT8_MIN;
	volatile int8_t x902 = -1;
	uint32_t x903 = 68593448U;
	int8_t x904 = 1;
	static int32_t t17 = 112416;

	t17 = ((x901==x902)==(x903>>x904));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x905 = 1U;
	int64_t x906 = INT64_MIN;
	uint16_t x907 = 1657U;
	static volatile int32_t t18 = 150986196;

	t18 = ((x905==x906)==(x907>>x908));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x969 = UINT16_MAX;
	volatile int8_t x970 = -18;
	volatile int32_t x971 = INT32_MAX;
	volatile uint16_t x972 = 1U;
	int32_t t19 = -15;

	t19 = ((x969==x970)==(x971>>x972));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x989 = INT64_MIN;
	static int32_t x990 = INT32_MIN;
	uint64_t x991 = 78525187026455774LLU;
	uint16_t x992 = 27U;
	volatile int32_t t20 = 3316669;

	t20 = ((x989==x990)==(x991>>x992));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x993 = -5830;
	static int64_t x994 = INT64_MAX;
	uint8_t x995 = 0U;
	uint8_t x996 = 7U;
	volatile int32_t t21 = -262108;

	t21 = ((x993==x994)==(x995>>x996));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1018 = 704;
	uint8_t x1019 = 0U;
	int16_t x1020 = 0;
	static int32_t t22 = -24;

	t22 = ((x1017==x1018)==(x1019>>x1020));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1029 = -1;
	int8_t x1030 = INT8_MIN;
	int32_t x1031 = 8837756;
	uint64_t x1032 = 13LLU;
	volatile int32_t t23 = -325052055;

	t23 = ((x1029==x1030)==(x1031>>x1032));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1129 = INT64_MIN;
	uint16_t x1130 = 230U;
	uint64_t x1131 = UINT64_MAX;
	uint8_t x1132 = 1U;
	volatile int32_t t24 = -675;

	t24 = ((x1129==x1130)==(x1131>>x1132));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1133 = INT8_MIN;
	uint64_t x1135 = UINT64_MAX;
	static int16_t x1136 = 2;
	volatile int32_t t25 = 7672662;

	t25 = ((x1133==x1134)==(x1135>>x1136));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1185 = -613LL;
	uint32_t x1186 = UINT32_MAX;
	volatile int16_t x1187 = INT16_MAX;
	static uint8_t x1188 = 0U;

	t26 = ((x1185==x1186)==(x1187>>x1188));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1205 = -199338LL;
	int32_t x1206 = -1;
	int64_t x1207 = INT64_MAX;
	int16_t x1208 = 53;
	int32_t t27 = -11;

	t27 = ((x1205==x1206)==(x1207>>x1208));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1274 = -49;
	int8_t x1276 = 9;
	int32_t t28 = -1277;

	t28 = ((x1273==x1274)==(x1275>>x1276));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1289 = UINT32_MAX;
	volatile int8_t x1290 = 1;
	static uint16_t x1292 = 2U;
	static volatile int32_t t29 = -7172207;

	t29 = ((x1289==x1290)==(x1291>>x1292));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1298 = INT64_MIN;
	uint16_t x1299 = 23U;
	int8_t x1300 = 1;

	t30 = ((x1297==x1298)==(x1299>>x1300));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1417 = 15845U;
	static volatile uint64_t x1419 = 2LLU;
	int32_t t31 = -56034;

	t31 = ((x1417==x1418)==(x1419>>x1420));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1425 = INT16_MIN;
	static uint8_t x1426 = UINT8_MAX;
	volatile int64_t x1427 = 1374LL;
	uint8_t x1428 = 12U;
	static int32_t t32 = -297;

	t32 = ((x1425==x1426)==(x1427>>x1428));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1485 = 0;
	int16_t x1486 = -1;
	uint16_t x1487 = 31957U;
	int16_t x1488 = 0;

	t33 = ((x1485==x1486)==(x1487>>x1488));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1541 = 1U;
	static volatile uint8_t x1542 = UINT8_MAX;
	uint32_t x1543 = 1367U;
	volatile int32_t t34 = -1685;

	t34 = ((x1541==x1542)==(x1543>>x1544));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x1545 = 1495946U;
	int16_t x1547 = INT16_MAX;
	int64_t x1548 = 11LL;

	t35 = ((x1545==x1546)==(x1547>>x1548));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x1550 = UINT32_MAX;
	int16_t x1551 = INT16_MAX;
	int8_t x1552 = 13;
	int32_t t36 = -1001084;

	t36 = ((x1549==x1550)==(x1551>>x1552));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1581 = INT64_MIN;
	int32_t x1582 = 582;
	int64_t x1583 = INT64_MAX;
	uint16_t x1584 = 2U;

	t37 = ((x1581==x1582)==(x1583>>x1584));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1641 = UINT8_MAX;
	uint32_t x1642 = 7214972U;
	static uint8_t x1644 = 2U;

	t38 = ((x1641==x1642)==(x1643>>x1644));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1661 = 1LL;
	int32_t x1662 = INT32_MIN;
	volatile uint32_t x1663 = UINT32_MAX;
	int32_t t39 = 152;

	t39 = ((x1661==x1662)==(x1663>>x1664));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1750 = -1;
	uint8_t x1751 = UINT8_MAX;
	int8_t x1752 = 3;
	volatile int32_t t40 = -5;

	t40 = ((x1749==x1750)==(x1751>>x1752));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x1813 = INT8_MAX;
	int16_t x1814 = INT16_MAX;
	static uint64_t x1815 = UINT64_MAX;
	int32_t t41 = 6560;

	t41 = ((x1813==x1814)==(x1815>>x1816));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2034 = INT8_MAX;
	int16_t x2035 = INT16_MAX;
	uint8_t x2036 = 3U;
	volatile int32_t t42 = 629835;

	t42 = ((x2033==x2034)==(x2035>>x2036));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2073 = -5LL;
	int8_t x2076 = 3;
	int32_t t43 = 0;

	t43 = ((x2073==x2074)==(x2075>>x2076));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2086 = INT32_MAX;
	uint16_t x2087 = 1U;
	static volatile uint8_t x2088 = 1U;
	int32_t t44 = 718595777;

	t44 = ((x2085==x2086)==(x2087>>x2088));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2089 = INT8_MAX;
	static int8_t x2090 = 1;
	int64_t x2091 = INT64_MAX;

	t45 = ((x2089==x2090)==(x2091>>x2092));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x2129 = 2;
	int64_t x2130 = -1LL;
	static uint8_t x2131 = UINT8_MAX;
	uint64_t x2132 = 2LLU;
	volatile int32_t t46 = 59;

	t46 = ((x2129==x2130)==(x2131>>x2132));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2139 = UINT8_MAX;
	int16_t x2140 = 27;

	t47 = ((x2137==x2138)==(x2139>>x2140));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2169 = INT16_MIN;
	int8_t x2170 = -1;
	int64_t x2171 = INT64_MAX;
	static int16_t x2172 = 50;

	t48 = ((x2169==x2170)==(x2171>>x2172));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2301 = 1;
	volatile int64_t x2303 = 1984LL;
	int8_t x2304 = 25;
	volatile int32_t t49 = 1;

	t49 = ((x2301==x2302)==(x2303>>x2304));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x2309 = -54316432417990473LL;
	int64_t x2310 = 4280329124188358LL;
	int16_t x2312 = 15;
	volatile int32_t t50 = 324278324;

	t50 = ((x2309==x2310)==(x2311>>x2312));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2380 = 10LL;

	t51 = ((x2377==x2378)==(x2379>>x2380));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2382 = 7652264442337967LLU;
	volatile uint32_t x2383 = 10522U;
	volatile int32_t t52 = -3167;

	t52 = ((x2381==x2382)==(x2383>>x2384));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2401 = 0;
	uint8_t x2402 = UINT8_MAX;
	uint32_t x2403 = UINT32_MAX;
	volatile int32_t t53 = -197610880;

	t53 = ((x2401==x2402)==(x2403>>x2404));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x2413 = -1;
	volatile int64_t x2414 = -7544826LL;
	volatile int64_t x2416 = 17LL;

	t54 = ((x2413==x2414)==(x2415>>x2416));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2446 = INT16_MIN;
	volatile uint32_t x2447 = 4818219U;
	int32_t t55 = 0;

	t55 = ((x2445==x2446)==(x2447>>x2448));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x2521 = UINT64_MAX;
	static int64_t x2523 = INT64_MAX;
	volatile int32_t t56 = 4;

	t56 = ((x2521==x2522)==(x2523>>x2524));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2541 = 67413962081LLU;
	int32_t x2543 = 121045282;
	int8_t x2544 = 1;
	volatile int32_t t57 = -860504226;

	t57 = ((x2541==x2542)==(x2543>>x2544));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x2585 = -191;
	int64_t x2586 = INT64_MIN;
	volatile uint8_t x2587 = 30U;
	volatile int32_t t58 = -12952;

	t58 = ((x2585==x2586)==(x2587>>x2588));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x2633 = INT8_MAX;
	volatile int8_t x2634 = 1;
	volatile uint64_t x2636 = 0LLU;
	int32_t t59 = 308371873;

	t59 = ((x2633==x2634)==(x2635>>x2636));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x2657 = UINT8_MAX;
	int32_t x2658 = -1;
	int16_t x2659 = 1;
	uint8_t x2660 = 9U;
	static int32_t t60 = -7;

	t60 = ((x2657==x2658)==(x2659>>x2660));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x2673 = 7U;
	int64_t x2674 = -1LL;
	volatile uint8_t x2675 = 0U;
	uint32_t x2676 = 7U;
	static volatile int32_t t61 = 2196339;

	t61 = ((x2673==x2674)==(x2675>>x2676));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x2789 = INT64_MIN;
	int16_t x2790 = -1;
	int16_t x2791 = INT16_MAX;
	int32_t x2792 = 2;
	static int32_t t62 = -1;

	t62 = ((x2789==x2790)==(x2791>>x2792));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2837 = INT64_MAX;
	static int64_t x2838 = 495304LL;
	uint64_t x2839 = 4LLU;
	volatile uint32_t x2840 = 9U;
	int32_t t63 = -252936;

	t63 = ((x2837==x2838)==(x2839>>x2840));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x3037 = INT8_MIN;
	volatile int64_t x3038 = -1LL;
	uint64_t x3039 = UINT64_MAX;
	uint32_t x3040 = 0U;
	int32_t t64 = -10;

	t64 = ((x3037==x3038)==(x3039>>x3040));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3094 = UINT8_MAX;
	static volatile uint16_t x3095 = UINT16_MAX;
	static volatile uint8_t x3096 = 5U;

	t65 = ((x3093==x3094)==(x3095>>x3096));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x3125 = UINT16_MAX;
	uint8_t x3126 = 109U;
	int32_t x3127 = 5825289;
	uint8_t x3128 = 6U;
	int32_t t66 = 0;

	t66 = ((x3125==x3126)==(x3127>>x3128));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3173 = -3815;
	static uint16_t x3174 = UINT16_MAX;
	uint64_t x3175 = 2205181194033315LLU;
	static int8_t x3176 = 1;
	volatile int32_t t67 = -53830;

	t67 = ((x3173==x3174)==(x3175>>x3176));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3178 = 421U;
	volatile uint16_t x3179 = 4U;
	static int32_t x3180 = 0;
	volatile int32_t t68 = -142;

	t68 = ((x3177==x3178)==(x3179>>x3180));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x3205 = UINT64_MAX;
	uint32_t x3206 = 489307658U;
	int64_t x3207 = INT64_MAX;
	uint32_t x3208 = 7U;

	t69 = ((x3205==x3206)==(x3207>>x3208));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3225 = 6091LLU;
	uint16_t x3226 = 4U;
	uint8_t x3227 = 16U;
	volatile int32_t t70 = -193197;

	t70 = ((x3225==x3226)==(x3227>>x3228));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3238 = -1;
	int16_t x3239 = 2968;
	int16_t x3240 = 1;
	volatile int32_t t71 = -313639187;

	t71 = ((x3237==x3238)==(x3239>>x3240));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3357 = 7;
	int64_t x3358 = INT64_MIN;
	static uint64_t x3359 = UINT64_MAX;
	static uint32_t x3360 = 14U;
	volatile int32_t t72 = -1949;

	t72 = ((x3357==x3358)==(x3359>>x3360));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3374 = 69U;
	int64_t x3376 = 0LL;
	int32_t t73 = -28257704;

	t73 = ((x3373==x3374)==(x3375>>x3376));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x3417 = -132596943;
	int8_t x3419 = INT8_MAX;
	volatile int32_t t74 = 77653224;

	t74 = ((x3417==x3418)==(x3419>>x3420));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3425 = INT64_MAX;
	int16_t x3426 = 0;
	int16_t x3427 = 12;
	int32_t x3428 = 3;
	static int32_t t75 = 9;

	t75 = ((x3425==x3426)==(x3427>>x3428));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3509 = UINT16_MAX;
	int16_t x3510 = 11555;
	int64_t x3511 = 90712974078226LL;
	static uint8_t x3512 = 17U;
	volatile int32_t t76 = -216;

	t76 = ((x3509==x3510)==(x3511>>x3512));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3566 = INT64_MAX;
	uint64_t x3567 = 264505807934231LLU;
	uint16_t x3568 = 6U;
	volatile int32_t t77 = -219991;

	t77 = ((x3565==x3566)==(x3567>>x3568));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3637 = UINT16_MAX;
	int32_t x3638 = -687740486;
	uint32_t x3639 = UINT32_MAX;
	static int32_t x3640 = 1;
	int32_t t78 = 108878908;

	t78 = ((x3637==x3638)==(x3639>>x3640));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3645 = UINT16_MAX;
	static uint8_t x3646 = UINT8_MAX;
	int16_t x3647 = 6;
	uint16_t x3648 = 14U;

	t79 = ((x3645==x3646)==(x3647>>x3648));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x3805 = -1LL;
	static int16_t x3806 = INT16_MAX;
	int64_t x3807 = 315508467763548LL;
	int32_t t80 = -10152819;

	t80 = ((x3805==x3806)==(x3807>>x3808));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3845 = 828U;
	int64_t x3846 = -1LL;
	volatile uint32_t x3847 = 193643218U;
	static uint8_t x3848 = 31U;
	int32_t t81 = -205125;

	t81 = ((x3845==x3846)==(x3847>>x3848));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x3853 = 17557U;
	volatile int8_t x3854 = INT8_MIN;
	static uint8_t x3856 = 1U;

	t82 = ((x3853==x3854)==(x3855>>x3856));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x3972 = 3;
	int32_t t83 = 69238;

	t83 = ((x3969==x3970)==(x3971>>x3972));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x4033 = UINT16_MAX;
	volatile int8_t x4034 = -3;
	int8_t x4035 = 0;
	static int8_t x4036 = 1;

	t84 = ((x4033==x4034)==(x4035>>x4036));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4121 = 4U;
	volatile uint64_t x4122 = 2LLU;
	uint8_t x4123 = 4U;
	int32_t x4124 = 4;
	int32_t t85 = 26;

	t85 = ((x4121==x4122)==(x4123>>x4124));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4241 = INT32_MAX;
	static uint8_t x4242 = 6U;
	volatile uint32_t x4243 = UINT32_MAX;
	int32_t t86 = 7415;

	t86 = ((x4241==x4242)==(x4243>>x4244));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x4245 = INT16_MAX;
	int64_t x4246 = INT64_MAX;
	int32_t x4248 = 7;

	t87 = ((x4245==x4246)==(x4247>>x4248));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4378 = 2U;
	static int32_t x4379 = 429;
	static volatile uint64_t x4380 = 0LLU;
	volatile int32_t t88 = 1;

	t88 = ((x4377==x4378)==(x4379>>x4380));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x4453 = 11251U;
	volatile int32_t x4454 = -10066642;
	static volatile uint8_t x4456 = 0U;

	t89 = ((x4453==x4454)==(x4455>>x4456));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4465 = 11;
	volatile int32_t x4466 = INT32_MIN;
	volatile uint16_t x4467 = 16U;
	uint8_t x4468 = 23U;
	int32_t t90 = 6132;

	t90 = ((x4465==x4466)==(x4467>>x4468));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4553 = 1120391;
	static int32_t x4554 = -48;
	int32_t x4556 = 7;
	volatile int32_t t91 = 6666588;

	t91 = ((x4553==x4554)==(x4555>>x4556));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4589 = -881;
	volatile int64_t x4590 = INT64_MAX;
	uint8_t x4592 = 29U;
	int32_t t92 = 1721470;

	t92 = ((x4589==x4590)==(x4591>>x4592));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x4674 = -1;
	int8_t x4675 = 2;
	static int32_t t93 = -18;

	t93 = ((x4673==x4674)==(x4675>>x4676));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4705 = UINT64_MAX;
	int8_t x4706 = -1;
	static uint32_t x4707 = UINT32_MAX;
	volatile uint8_t x4708 = 0U;
	volatile int32_t t94 = 48608;

	t94 = ((x4705==x4706)==(x4707>>x4708));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x4797 = 6553LLU;
	static uint16_t x4798 = 69U;
	volatile uint8_t x4799 = 5U;
	uint16_t x4800 = 1U;
	int32_t t95 = -22613785;

	t95 = ((x4797==x4798)==(x4799>>x4800));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4857 = -19;
	int64_t x4858 = INT64_MIN;

	t96 = ((x4857==x4858)==(x4859>>x4860));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x4913 = INT64_MAX;
	int16_t x4915 = 111;
	static uint8_t x4916 = 21U;

	t97 = ((x4913==x4914)==(x4915>>x4916));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x4917 = 2677513LLU;
	uint64_t x4918 = 1025736269440LLU;
	int8_t x4919 = 55;
	static uint16_t x4920 = 0U;
	static int32_t t98 = 192496453;

	t98 = ((x4917==x4918)==(x4919>>x4920));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x4949 = INT64_MIN;
	int8_t x4950 = INT8_MIN;
	static volatile uint8_t x4951 = 13U;
	uint8_t x4952 = 3U;
	static volatile int32_t t99 = -2827317;

	t99 = ((x4949==x4950)==(x4951>>x4952));

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

