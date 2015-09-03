#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x6 = 5;
int32_t x7 = INT32_MAX;
uint8_t x8 = 0U;
volatile int32_t t2 = 529804;
static volatile uint32_t t4 = UINT32_MAX;
uint8_t x143 = 2U;
int16_t x149 = INT16_MAX;
volatile int32_t t7 = -392172;
static int16_t x181 = INT16_MAX;
static int8_t x182 = -1;
volatile int32_t t9 = -2;
int16_t x209 = INT16_MIN;
volatile int32_t t10 = -1587;
int32_t x233 = -2302590;
int64_t x313 = INT64_MIN;
uint8_t x315 = 88U;
static uint32_t x320 = 6U;
uint8_t x412 = 8U;
int8_t x468 = 0;
static int16_t x481 = INT16_MIN;
uint8_t x482 = 48U;
static int64_t x483 = 68647711LL;
static uint8_t x487 = UINT8_MAX;
volatile int32_t t19 = 3461031;
static int64_t x509 = INT64_MIN;
volatile int32_t x534 = INT32_MAX;
volatile int32_t t23 = -118108;
volatile int32_t x558 = INT32_MIN;
static volatile int32_t t24 = 38;
volatile int64_t x723 = INT64_MAX;
uint16_t x765 = 31U;
int16_t x766 = INT16_MIN;
int8_t x778 = INT8_MAX;
int8_t x780 = 15;
uint8_t x796 = 15U;
volatile int32_t t30 = 10402004;
volatile int32_t t32 = -20;
int32_t x896 = 0;
int16_t x913 = 0;
int16_t x957 = INT16_MIN;
volatile int32_t t35 = 666728;
int64_t x982 = 10604936976LL;
uint64_t x983 = UINT64_MAX;
static uint8_t x984 = 3U;
int32_t t39 = INT32_MAX;
uint16_t x1193 = UINT16_MAX;
static int8_t x1201 = -1;
int16_t x1250 = INT16_MIN;
uint64_t x1252 = 1LLU;
int32_t x1347 = -6724917;
static int32_t x1401 = -739;
int16_t x1404 = 3;
volatile int32_t x1536 = 3;
int64_t x1621 = INT64_MIN;
volatile int8_t x1660 = 6;
static volatile int32_t x1726 = -1;
volatile int64_t t53 = -55579599564047506LL;
static uint16_t x1748 = 19U;
static volatile int64_t x1806 = 6172418LL;
volatile int8_t x1939 = 3;
static uint8_t x1940 = 21U;
int8_t x1949 = 0;
int64_t x1977 = INT64_MAX;
uint64_t x1982 = 261464728LLU;
int32_t x1983 = INT32_MIN;
uint16_t x1990 = UINT16_MAX;
volatile uint16_t x2019 = 54U;
int8_t x2020 = 23;
int16_t x2021 = INT16_MIN;
volatile int64_t x2022 = -330593440622LL;
int32_t x2062 = INT32_MAX;
volatile int32_t x2069 = INT32_MIN;
int32_t x2071 = INT32_MAX;
int16_t x2077 = -1;
int16_t x2180 = 17;
uint64_t x2229 = 250765781722068LLU;
static uint32_t x2230 = 6779071U;
int16_t x2290 = INT16_MIN;
volatile int16_t x2301 = INT16_MAX;
static int32_t x2352 = 14;
volatile int32_t t74 = 1032405;
int32_t x2365 = 100664;
static int32_t x2397 = -111989630;
int64_t x2398 = 174163LL;
static int64_t x2546 = INT64_MIN;
uint16_t x2548 = 0U;
static uint64_t t77 = 37637192137274318LLU;
uint8_t x2565 = 1U;
int32_t t79 = -51;
int64_t x2625 = INT64_MAX;
uint64_t x2626 = UINT64_MAX;
uint8_t x2675 = 5U;
int32_t x2727 = -94;
int32_t t85 = -31921447;
volatile uint32_t x2787 = 1U;
int32_t t86 = 1678;
int64_t t87 = 99928563LL;
static uint64_t x2818 = UINT64_MAX;
int64_t x2985 = 126740LL;
int64_t x3086 = INT64_MIN;
int8_t x3093 = -1;
static volatile int32_t x3095 = -1;
static int64_t x3122 = INT64_MAX;
static int32_t x3145 = -1;
int32_t t96 = -513384;
int8_t x3171 = INT8_MAX;
int32_t t97 = 118;


void f0(void) {
	uint64_t x5 = UINT64_MAX;
	uint64_t t0 = 6926810583473887789LLU;

	t0 = (x5+((x6<=x7)<<x8));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x13 = 6;
	uint8_t x14 = 3U;
	int16_t x15 = -1;
	static uint8_t x16 = 0U;
	volatile int32_t t1 = -83;

	t1 = (x13+((x14<=x15)<<x16));

	if (t1 != 6) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = 711;
	uint32_t x22 = UINT32_MAX;
	int64_t x23 = INT64_MIN;
	volatile uint8_t x24 = 0U;

	t2 = (x21+((x22<=x23)<<x24));

	if (t2 != 711) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x89 = INT64_MAX;
	volatile int64_t x90 = 7677354221LL;
	uint8_t x91 = 61U;
	int8_t x92 = 1;
	int64_t t3 = INT64_MAX;

	t3 = (x89+((x90<=x91)<<x92));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x137 = UINT32_MAX;
	volatile int8_t x138 = INT8_MAX;
	static uint8_t x139 = 2U;
	uint16_t x140 = 2U;

	t4 = (x137+((x138<=x139)<<x140));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x141 = -2;
	static volatile int32_t x142 = INT32_MAX;
	int16_t x144 = 8;
	volatile int32_t t5 = 2398;

	t5 = (x141+((x142<=x143)<<x144));

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x150 = UINT32_MAX;
	int64_t x151 = -1LL;
	uint32_t x152 = 6U;
	int32_t t6 = 1178825;

	t6 = (x149+((x150<=x151)<<x152));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x169 = INT16_MIN;
	volatile int64_t x170 = INT64_MAX;
	int32_t x171 = -81946233;
	int8_t x172 = 1;

	t7 = (x169+((x170<=x171)<<x172));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x183 = -6567;
	static uint8_t x184 = 5U;
	int32_t t8 = -39;

	t8 = (x181+((x182<=x183)<<x184));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x201 = -2895;
	int64_t x202 = -1LL;
	int8_t x203 = INT8_MIN;
	static int8_t x204 = 30;

	t9 = (x201+((x202<=x203)<<x204));

	if (t9 != -2895) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x210 = UINT16_MAX;
	int8_t x211 = INT8_MAX;
	uint8_t x212 = 0U;

	t10 = (x209+((x210<=x211)<<x212));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x234 = 3U;
	static int32_t x235 = INT32_MIN;
	uint8_t x236 = 0U;
	volatile int32_t t11 = -64292378;

	t11 = (x233+((x234<=x235)<<x236));

	if (t11 != -2302590) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x249 = INT16_MIN;
	volatile int32_t x250 = -1;
	static int16_t x251 = 4;
	volatile int32_t x252 = 1;
	volatile int32_t t12 = -15235;

	t12 = (x249+((x250<=x251)<<x252));

	if (t12 != -32766) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x293 = INT64_MIN;
	uint32_t x294 = UINT32_MAX;
	int64_t x295 = 7724260653LL;
	int16_t x296 = 0;
	volatile int64_t t13 = -7108422540665579LL;

	t13 = (x293+((x294<=x295)<<x296));

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x314 = INT8_MAX;
	uint32_t x316 = 6U;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x313+((x314<=x315)<<x316));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x317 = 2U;
	static int16_t x318 = 0;
	volatile int64_t x319 = INT64_MAX;
	volatile int32_t t15 = 94;

	t15 = (x317+((x318<=x319)<<x320));

	if (t15 != 66) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x409 = -10;
	int32_t x410 = -32;
	volatile int8_t x411 = INT8_MAX;
	volatile int32_t t16 = -132003433;

	t16 = (x409+((x410<=x411)<<x412));

	if (t16 != 246) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x465 = 21U;
	int16_t x466 = -1;
	static uint32_t x467 = 104902U;
	volatile int32_t t17 = 36081233;

	t17 = (x465+((x466<=x467)<<x468));

	if (t17 != 21) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x484 = 1;
	int32_t t18 = 3787;

	t18 = (x481+((x482<=x483)<<x484));

	if (t18 != -32766) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x485 = 115620;
	int8_t x486 = 1;
	uint8_t x488 = 1U;

	t19 = (x485+((x486<=x487)<<x488));

	if (t19 != 115622) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x510 = -1;
	static uint8_t x511 = UINT8_MAX;
	uint8_t x512 = 0U;
	volatile int64_t t20 = -864125505553LL;

	t20 = (x509+((x510<=x511)<<x512));

	if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x521 = 10213267905972LLU;
	static int16_t x522 = -1;
	int32_t x523 = -15;
	static volatile uint16_t x524 = 0U;
	static uint64_t t21 = 66366866LLU;

	t21 = (x521+((x522<=x523)<<x524));

	if (t21 != 10213267905972LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x533 = -1;
	uint32_t x535 = 5U;
	volatile uint8_t x536 = 5U;
	int32_t t22 = 0;

	t22 = (x533+((x534<=x535)<<x536));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x541 = -3;
	volatile int64_t x542 = INT64_MIN;
	int32_t x543 = INT32_MAX;
	uint8_t x544 = 20U;

	t23 = (x541+((x542<=x543)<<x544));

	if (t23 != 1048573) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x557 = INT16_MAX;
	volatile uint16_t x559 = 4039U;
	static uint8_t x560 = 1U;

	t24 = (x557+((x558<=x559)<<x560));

	if (t24 != 32769) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x561 = INT8_MIN;
	int8_t x562 = -1;
	volatile int32_t x563 = -1;
	int32_t x564 = 14;
	volatile int32_t t25 = -17;

	t25 = (x561+((x562<=x563)<<x564));

	if (t25 != 16256) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x721 = -1;
	uint32_t x722 = 1U;
	static volatile uint16_t x724 = 1U;
	volatile int32_t t26 = 313;

	t26 = (x721+((x722<=x723)<<x724));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x767 = -1;
	int16_t x768 = 1;
	int32_t t27 = -28;

	t27 = (x765+((x766<=x767)<<x768));

	if (t27 != 33) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x777 = UINT32_MAX;
	int8_t x779 = INT8_MIN;
	static uint32_t t28 = UINT32_MAX;

	t28 = (x777+((x778<=x779)<<x780));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x793 = 468522;
	volatile int32_t x794 = INT32_MAX;
	int64_t x795 = -62812509525282849LL;
	int32_t t29 = 649259;

	t29 = (x793+((x794<=x795)<<x796));

	if (t29 != 468522) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x801 = UINT8_MAX;
	int8_t x802 = -15;
	uint64_t x803 = 28438683715LLU;
	int8_t x804 = 0;

	t30 = (x801+((x802<=x803)<<x804));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x821 = INT8_MAX;
	uint64_t x822 = 186LLU;
	int16_t x823 = INT16_MAX;
	uint8_t x824 = 0U;
	volatile int32_t t31 = -7319262;

	t31 = (x821+((x822<=x823)<<x824));

	if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x885 = INT16_MIN;
	static uint32_t x886 = 12648489U;
	int32_t x887 = 2;
	int16_t x888 = 1;

	t32 = (x885+((x886<=x887)<<x888));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x893 = INT64_MAX;
	static int32_t x894 = 162;
	volatile int16_t x895 = -49;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x893+((x894<=x895)<<x896));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x914 = 3473006217545637355LLU;
	volatile int64_t x915 = INT64_MIN;
	int8_t x916 = 1;
	static int32_t t34 = 746543;

	t34 = (x913+((x914<=x915)<<x916));

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x958 = INT8_MIN;
	int32_t x959 = INT32_MIN;
	int16_t x960 = 0;

	t35 = (x957+((x958<=x959)<<x960));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x981 = 2U;
	volatile int32_t t36 = -1006;

	t36 = (x981+((x982<=x983)<<x984));

	if (t36 != 10) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x985 = INT8_MAX;
	int8_t x986 = INT8_MAX;
	int8_t x987 = INT8_MIN;
	int16_t x988 = 25;
	int32_t t37 = 2071387;

	t37 = (x985+((x986<=x987)<<x988));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x989 = INT16_MAX;
	int64_t x990 = INT64_MIN;
	int64_t x991 = -1LL;
	volatile int8_t x992 = 0;
	volatile int32_t t38 = 7;

	t38 = (x989+((x990<=x991)<<x992));

	if (t38 != 32768) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1005 = INT32_MAX;
	int64_t x1006 = -1LL;
	int8_t x1007 = INT8_MIN;
	static uint8_t x1008 = 0U;

	t39 = (x1005+((x1006<=x1007)<<x1008));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1113 = UINT64_MAX;
	volatile int16_t x1114 = 3;
	uint32_t x1115 = UINT32_MAX;
	int16_t x1116 = 0;
	uint64_t t40 = 4104534165688LLU;

	t40 = (x1113+((x1114<=x1115)<<x1116));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1194 = INT64_MIN;
	static int16_t x1195 = INT16_MIN;
	uint8_t x1196 = 28U;
	static int32_t t41 = 2994861;

	t41 = (x1193+((x1194<=x1195)<<x1196));

	if (t41 != 268500991) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1202 = INT64_MIN;
	volatile uint8_t x1203 = UINT8_MAX;
	uint16_t x1204 = 30U;
	volatile int32_t t42 = 6806950;

	t42 = (x1201+((x1202<=x1203)<<x1204));

	if (t42 != 1073741823) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1217 = UINT8_MAX;
	int64_t x1218 = INT64_MIN;
	volatile uint16_t x1219 = 0U;
	static volatile uint8_t x1220 = 25U;
	int32_t t43 = -1;

	t43 = (x1217+((x1218<=x1219)<<x1220));

	if (t43 != 33554687) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x1249 = UINT32_MAX;
	volatile uint8_t x1251 = UINT8_MAX;
	static uint32_t t44 = 6669400U;

	t44 = (x1249+((x1250<=x1251)<<x1252));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x1265 = INT8_MAX;
	int64_t x1266 = INT64_MAX;
	volatile int8_t x1267 = INT8_MIN;
	volatile int64_t x1268 = 0LL;
	int32_t t45 = 8742233;

	t45 = (x1265+((x1266<=x1267)<<x1268));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x1345 = 1U;
	uint8_t x1346 = 3U;
	int16_t x1348 = 0;
	int32_t t46 = 1374465;

	t46 = (x1345+((x1346<=x1347)<<x1348));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1349 = INT32_MIN;
	int32_t x1350 = INT32_MIN;
	int64_t x1351 = INT64_MIN;
	volatile uint16_t x1352 = 1U;
	volatile int32_t t47 = INT32_MIN;

	t47 = (x1349+((x1350<=x1351)<<x1352));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1402 = INT8_MIN;
	uint32_t x1403 = 660U;
	int32_t t48 = 47417;

	t48 = (x1401+((x1402<=x1403)<<x1404));

	if (t48 != -739) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1533 = 190;
	int16_t x1534 = -1;
	int16_t x1535 = -1;
	int32_t t49 = 16657;

	t49 = (x1533+((x1534<=x1535)<<x1536));

	if (t49 != 198) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1573 = 426871LL;
	uint16_t x1574 = 4469U;
	volatile uint8_t x1575 = 16U;
	static int8_t x1576 = 22;
	volatile int64_t t50 = 3704061534502519803LL;

	t50 = (x1573+((x1574<=x1575)<<x1576));

	if (t50 != 426871LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1622 = 21806U;
	int32_t x1623 = -1;
	uint16_t x1624 = 3U;
	static int64_t t51 = INT64_MIN;

	t51 = (x1621+((x1622<=x1623)<<x1624));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1657 = 65LL;
	volatile int32_t x1658 = -1;
	volatile int8_t x1659 = INT8_MIN;
	int64_t t52 = -2586701553049LL;

	t52 = (x1657+((x1658<=x1659)<<x1660));

	if (t52 != 65LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1725 = -1LL;
	uint8_t x1727 = 35U;
	uint16_t x1728 = 0U;

	t53 = (x1725+((x1726<=x1727)<<x1728));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x1745 = -1;
	int64_t x1746 = 363769553692664LL;
	volatile int16_t x1747 = INT16_MIN;
	int32_t t54 = 7688;

	t54 = (x1745+((x1746<=x1747)<<x1748));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x1805 = UINT16_MAX;
	volatile int8_t x1807 = -1;
	int8_t x1808 = 3;
	volatile int32_t t55 = -158909;

	t55 = (x1805+((x1806<=x1807)<<x1808));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1937 = INT32_MIN;
	int64_t x1938 = -555077133732025952LL;
	volatile int32_t t56 = 0;

	t56 = (x1937+((x1938<=x1939)<<x1940));

	if (t56 != -2145386496) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1950 = UINT8_MAX;
	uint8_t x1951 = 1U;
	static int16_t x1952 = 30;
	volatile int32_t t57 = 37524941;

	t57 = (x1949+((x1950<=x1951)<<x1952));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1978 = -1;
	int16_t x1979 = INT16_MIN;
	uint16_t x1980 = 4U;
	volatile int64_t t58 = INT64_MAX;

	t58 = (x1977+((x1978<=x1979)<<x1980));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x1981 = 23744LLU;
	volatile int32_t x1984 = 1;
	volatile uint64_t t59 = 34002889LLU;

	t59 = (x1981+((x1982<=x1983)<<x1984));

	if (t59 != 23746LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x1989 = -3;
	static uint8_t x1991 = 0U;
	static uint8_t x1992 = 2U;
	int32_t t60 = 46713824;

	t60 = (x1989+((x1990<=x1991)<<x1992));

	if (t60 != -3) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2017 = -24;
	uint32_t x2018 = 2341414U;
	int32_t t61 = -2;

	t61 = (x2017+((x2018<=x2019)<<x2020));

	if (t61 != -24) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2023 = UINT32_MAX;
	uint64_t x2024 = 0LLU;
	volatile int32_t t62 = -788328;

	t62 = (x2021+((x2022<=x2023)<<x2024));

	if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x2033 = INT16_MIN;
	static int8_t x2034 = INT8_MIN;
	int16_t x2035 = INT16_MIN;
	volatile int16_t x2036 = 15;
	int32_t t63 = -728329503;

	t63 = (x2033+((x2034<=x2035)<<x2036));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2061 = INT8_MAX;
	static int8_t x2063 = INT8_MAX;
	uint8_t x2064 = 9U;
	volatile int32_t t64 = -1;

	t64 = (x2061+((x2062<=x2063)<<x2064));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x2070 = INT8_MIN;
	volatile uint32_t x2072 = 18U;
	int32_t t65 = 532572;

	t65 = (x2069+((x2070<=x2071)<<x2072));

	if (t65 != -2147221504) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x2078 = 18U;
	int8_t x2079 = INT8_MIN;
	static uint8_t x2080 = 27U;
	volatile int32_t t66 = 561;

	t66 = (x2077+((x2078<=x2079)<<x2080));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2177 = 353628168LL;
	int64_t x2178 = 3702LL;
	int64_t x2179 = -11722874LL;
	static int64_t t67 = 344011894504439LL;

	t67 = (x2177+((x2178<=x2179)<<x2180));

	if (t67 != 353628168LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x2185 = 2U;
	uint16_t x2186 = 5192U;
	volatile uint64_t x2187 = UINT64_MAX;
	uint8_t x2188 = 5U;
	volatile int32_t t68 = -3305;

	t68 = (x2185+((x2186<=x2187)<<x2188));

	if (t68 != 34) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x2231 = INT32_MIN;
	static int64_t x2232 = 1LL;
	uint64_t t69 = 5913LLU;

	t69 = (x2229+((x2230<=x2231)<<x2232));

	if (t69 != 250765781722070LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2289 = -1LL;
	int32_t x2291 = -1;
	int32_t x2292 = 4;
	int64_t t70 = -1976LL;

	t70 = (x2289+((x2290<=x2291)<<x2292));

	if (t70 != 15LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2302 = -1;
	static uint64_t x2303 = 6286796LLU;
	int16_t x2304 = 2;
	volatile int32_t t71 = -24593255;

	t71 = (x2301+((x2302<=x2303)<<x2304));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x2333 = INT32_MIN;
	int8_t x2334 = -1;
	int32_t x2335 = INT32_MAX;
	int16_t x2336 = 0;
	int32_t t72 = -34;

	t72 = (x2333+((x2334<=x2335)<<x2336));

	if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2345 = -19;
	int64_t x2346 = 242791026532443LL;
	static int16_t x2347 = INT16_MIN;
	uint32_t x2348 = 1U;
	int32_t t73 = -4528;

	t73 = (x2345+((x2346<=x2347)<<x2348));

	if (t73 != -19) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2349 = INT8_MIN;
	int32_t x2350 = -2434368;
	uint32_t x2351 = UINT32_MAX;

	t74 = (x2349+((x2350<=x2351)<<x2352));

	if (t74 != 16256) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2366 = -1;
	volatile uint64_t x2367 = UINT64_MAX;
	int8_t x2368 = 1;
	int32_t t75 = 30036;

	t75 = (x2365+((x2366<=x2367)<<x2368));

	if (t75 != 100666) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2399 = 90869;
	int8_t x2400 = 16;
	int32_t t76 = -62;

	t76 = (x2397+((x2398<=x2399)<<x2400));

	if (t76 != -111989630) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2545 = 192LLU;
	uint8_t x2547 = UINT8_MAX;

	t77 = (x2545+((x2546<=x2547)<<x2548));

	if (t77 != 193LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x2566 = 226;
	uint32_t x2567 = 1U;
	uint8_t x2568 = 6U;
	int32_t t78 = -210480;

	t78 = (x2565+((x2566<=x2567)<<x2568));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2585 = -1;
	int16_t x2586 = -369;
	uint32_t x2587 = UINT32_MAX;
	uint16_t x2588 = 0U;

	t79 = (x2585+((x2586<=x2587)<<x2588));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2609 = INT8_MIN;
	uint16_t x2610 = 30682U;
	int32_t x2611 = INT32_MIN;
	int8_t x2612 = 0;
	volatile int32_t t80 = -80191252;

	t80 = (x2609+((x2610<=x2611)<<x2612));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x2613 = -1;
	int32_t x2614 = INT32_MIN;
	volatile int8_t x2615 = INT8_MIN;
	int8_t x2616 = 1;
	volatile int32_t t81 = 4508589;

	t81 = (x2613+((x2614<=x2615)<<x2616));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x2627 = INT8_MAX;
	static int8_t x2628 = 1;
	int64_t t82 = INT64_MAX;

	t82 = (x2625+((x2626<=x2627)<<x2628));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x2673 = 531U;
	static int64_t x2674 = 19LL;
	static volatile uint8_t x2676 = 29U;
	int32_t t83 = -1;

	t83 = (x2673+((x2674<=x2675)<<x2676));

	if (t83 != 531) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2709 = -1049684344LL;
	int32_t x2710 = INT32_MIN;
	volatile uint64_t x2711 = 3913LLU;
	int16_t x2712 = 31;
	volatile int64_t t84 = -1LL;

	t84 = (x2709+((x2710<=x2711)<<x2712));

	if (t84 != -1049684344LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2725 = 0U;
	int32_t x2726 = -1;
	static uint16_t x2728 = 0U;

	t85 = (x2725+((x2726<=x2727)<<x2728));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2785 = 151398957;
	static uint32_t x2786 = 0U;
	uint8_t x2788 = 0U;

	t86 = (x2785+((x2786<=x2787)<<x2788));

	if (t86 != 151398958) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x2805 = -68442103LL;
	uint16_t x2806 = 4U;
	int64_t x2807 = 59580035223063LL;
	static int8_t x2808 = 1;

	t87 = (x2805+((x2806<=x2807)<<x2808));

	if (t87 != -68442101LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2817 = INT64_MIN;
	int8_t x2819 = -2;
	static volatile int64_t x2820 = 1LL;
	volatile int64_t t88 = INT64_MIN;

	t88 = (x2817+((x2818<=x2819)<<x2820));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x2905 = INT32_MIN;
	int16_t x2906 = INT16_MIN;
	int64_t x2907 = -1LL;
	uint8_t x2908 = 0U;
	int32_t t89 = -1060333;

	t89 = (x2905+((x2906<=x2907)<<x2908));

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2986 = INT32_MIN;
	int16_t x2987 = -1;
	static volatile uint8_t x2988 = 3U;
	volatile int64_t t90 = 39452LL;

	t90 = (x2985+((x2986<=x2987)<<x2988));

	if (t90 != 126748LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3085 = 4U;
	volatile uint8_t x3087 = 12U;
	uint32_t x3088 = 18U;
	static uint32_t t91 = 898601706U;

	t91 = (x3085+((x3086<=x3087)<<x3088));

	if (t91 != 262148U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3094 = INT32_MIN;
	volatile int16_t x3096 = 8;
	volatile int32_t t92 = 132;

	t92 = (x3093+((x3094<=x3095)<<x3096));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3121 = 0;
	volatile uint64_t x3123 = UINT64_MAX;
	static int32_t x3124 = 0;
	volatile int32_t t93 = -431;

	t93 = (x3121+((x3122<=x3123)<<x3124));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x3141 = 56LLU;
	uint16_t x3142 = UINT16_MAX;
	volatile int32_t x3143 = INT32_MIN;
	int8_t x3144 = 0;
	volatile uint64_t t94 = 322513638807504538LLU;

	t94 = (x3141+((x3142<=x3143)<<x3144));

	if (t94 != 56LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3146 = INT16_MIN;
	volatile int32_t x3147 = -139039017;
	int16_t x3148 = 1;
	int32_t t95 = -1;

	t95 = (x3145+((x3146<=x3147)<<x3148));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3149 = UINT16_MAX;
	uint64_t x3150 = UINT64_MAX;
	int64_t x3151 = -1LL;
	static uint32_t x3152 = 1U;

	t96 = (x3149+((x3150<=x3151)<<x3152));

	if (t96 != 65537) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3169 = -1;
	int16_t x3170 = 199;
	static int8_t x3172 = 1;

	t97 = (x3169+((x3170<=x3171)<<x3172));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x3233 = UINT32_MAX;
	volatile int64_t x3234 = 7276470676404LL;
	int16_t x3235 = INT16_MIN;
	int32_t x3236 = 7;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (x3233+((x3234<=x3235)<<x3236));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x3273 = -16;
	static int64_t x3274 = -7659921361120438LL;
	static volatile int8_t x3275 = INT8_MIN;
	int8_t x3276 = 2;
	volatile int32_t t99 = 336727;

	t99 = (x3273+((x3274<=x3275)<<x3276));

	if (t99 != -12) { NG(); } else { ; }
	
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

