#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x66 = -1;
volatile int32_t t1 = 21984;
int32_t x89 = -3916;
uint16_t x107 = 18U;
static volatile int8_t x148 = INT8_MIN;
int16_t x201 = INT16_MIN;
volatile uint32_t x204 = 1U;
uint8_t x223 = 0U;
int32_t x330 = INT32_MIN;
volatile int32_t t13 = 90;
uint8_t x490 = 1U;
static volatile int32_t t14 = 427928;
uint16_t x518 = 144U;
static int16_t x538 = -1;
uint8_t x539 = 0U;
volatile int64_t t18 = 191734419LL;
uint32_t x631 = 1U;
uint16_t x635 = 0U;
volatile uint32_t x710 = 2112U;
volatile int32_t x730 = INT32_MAX;
int32_t x732 = INT32_MIN;
static uint8_t x778 = UINT8_MAX;
uint8_t x783 = 12U;
uint32_t t24 = 95636U;
volatile int32_t t27 = -2389691;
int32_t t28 = 894;
volatile uint16_t x1083 = 8U;
volatile int32_t x1170 = -75;
volatile uint8_t x1172 = UINT8_MAX;
int64_t x1185 = INT64_MIN;
uint32_t x1187 = 0U;
volatile uint8_t x1230 = 3U;
uint32_t x1231 = 3U;
int32_t t35 = 243;
uint8_t x1249 = 27U;
uint8_t x1250 = 88U;
int32_t t36 = 25565;
static uint8_t x1279 = 1U;
int16_t x1313 = -1;
int8_t x1315 = 0;
volatile int64_t x1322 = INT64_MAX;
int16_t x1361 = 3;
static uint64_t x1364 = 574189629LLU;
volatile int8_t x1506 = INT8_MIN;
int64_t x1520 = -11472268131163781LL;
int16_t x1526 = 13;
int64_t x1545 = INT64_MIN;
int8_t x1576 = 2;
volatile int32_t x1714 = -256840;
int32_t x1728 = -50455673;
int32_t x1749 = INT32_MIN;
volatile int8_t x1750 = 51;
static int16_t x1752 = -1;
static int32_t t49 = -43475409;
volatile uint32_t x1840 = UINT32_MAX;
int32_t x1876 = INT32_MIN;
int32_t t52 = INT32_MIN;
int32_t x1984 = INT32_MAX;
volatile int32_t t54 = INT32_MAX;
int16_t x1999 = 1;
volatile int32_t t55 = 3023;
static int16_t x2100 = INT16_MIN;
volatile int32_t t57 = 1;
uint64_t x2117 = 7014346098862LLU;
int8_t x2118 = 0;
int16_t x2215 = 29;
uint8_t x2231 = 12U;
volatile uint8_t x2266 = 77U;
uint8_t x2307 = 0U;
int16_t x2381 = INT16_MAX;
uint64_t x2393 = 818LLU;
static int16_t x2394 = INT16_MIN;
uint32_t x2395 = 1U;
static int32_t x2396 = INT32_MAX;
uint64_t x2406 = 48691180LLU;
int16_t x2417 = INT16_MAX;
volatile int8_t x2419 = 29;
int32_t x2428 = INT32_MIN;
volatile int32_t t71 = INT32_MIN;
uint8_t x2441 = UINT8_MAX;
volatile uint64_t t73 = UINT64_MAX;
int32_t x2518 = -1;
static int8_t x2519 = 30;
volatile uint8_t x2571 = 7U;
int32_t t76 = INT32_MIN;
static int8_t x2611 = 0;
volatile uint32_t x2639 = 4U;
int8_t x2649 = INT8_MAX;
int16_t x2652 = INT16_MIN;
uint32_t x2701 = 9U;
int32_t x2704 = -1;
static volatile int32_t t86 = -14;
volatile int32_t x2871 = 0;
int32_t x2873 = -1;
int32_t t88 = 1307641;
int8_t x2929 = INT8_MIN;
int16_t x2930 = 1;
int8_t x2931 = 10;
int16_t x2932 = INT16_MAX;
volatile int32_t t89 = 0;
static int16_t x2934 = -1;
static int16_t x2935 = 1;
uint16_t x2958 = 8U;
static volatile int32_t t92 = -201870;
volatile int16_t x2974 = -302;
int8_t x2975 = 2;
static uint16_t x3017 = 1423U;
uint32_t x3018 = 762U;
static volatile int32_t x3021 = -41;
static int64_t x3024 = INT64_MIN;
volatile int16_t x3050 = INT16_MIN;
uint8_t x3071 = 8U;
int32_t x3072 = -43907;


void f0(void) {
	int16_t x41 = 16;
	int32_t x42 = INT32_MAX;
	static uint8_t x43 = 7U;
	int64_t x44 = INT64_MIN;
	int64_t t0 = INT64_MIN;

	t0 = (((x41<=x42)>>x43)|x44);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x65 = 1595;
	int32_t x67 = 31;
	static volatile int8_t x68 = 18;

	t1 = (((x65<=x66)>>x67)|x68);

	if (t1 != 18) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x90 = 199994LLU;
	uint64_t x91 = 0LLU;
	int8_t x92 = -1;
	int32_t t2 = -33338263;

	t2 = (((x89<=x90)>>x91)|x92);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x105 = -750609462LL;
	int32_t x106 = -1;
	int64_t x108 = 130842080624LL;
	static int64_t t3 = 4154681028634120LL;

	t3 = (((x105<=x106)>>x107)|x108);

	if (t3 != 130842080624LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x145 = 7U;
	uint16_t x146 = UINT16_MAX;
	volatile uint8_t x147 = 15U;
	int32_t t4 = -9;

	t4 = (((x145<=x146)>>x147)|x148);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x202 = 6143531022LLU;
	int8_t x203 = 0;
	static uint32_t t5 = 318018U;

	t5 = (((x201<=x202)>>x203)|x204);

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x221 = 332565207LLU;
	static int16_t x222 = -1;
	int16_t x224 = -1;
	volatile int32_t t6 = 0;

	t6 = (((x221<=x222)>>x223)|x224);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x237 = INT64_MIN;
	volatile uint64_t x238 = 26511089527116LLU;
	uint32_t x239 = 25U;
	int8_t x240 = 4;
	static volatile int32_t t7 = 4;

	t7 = (((x237<=x238)>>x239)|x240);

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x245 = INT16_MAX;
	static int32_t x246 = INT32_MAX;
	int8_t x247 = 3;
	int8_t x248 = INT8_MIN;
	int32_t t8 = -15692;

	t8 = (((x245<=x246)>>x247)|x248);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x329 = INT32_MAX;
	uint16_t x331 = 7U;
	volatile uint64_t x332 = 955494223849LLU;
	uint64_t t9 = 3343010324872LLU;

	t9 = (((x329<=x330)>>x331)|x332);

	if (t9 != 955494223849LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x353 = INT16_MIN;
	int64_t x354 = -1LL;
	int8_t x355 = 0;
	volatile int64_t x356 = -996569609388742LL;
	int64_t t10 = -87718400LL;

	t10 = (((x353<=x354)>>x355)|x356);

	if (t10 != -996569609388741LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x433 = INT64_MIN;
	int32_t x434 = INT32_MAX;
	static uint8_t x435 = 1U;
	int32_t x436 = INT32_MAX;
	int32_t t11 = INT32_MAX;

	t11 = (((x433<=x434)>>x435)|x436);

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x449 = 0;
	uint32_t x450 = 6625608U;
	volatile uint16_t x451 = 3U;
	volatile int32_t x452 = 347298798;
	int32_t t12 = -8;

	t12 = (((x449<=x450)>>x451)|x452);

	if (t12 != 347298798) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x457 = -1;
	int8_t x458 = 30;
	uint8_t x459 = 3U;
	int32_t x460 = -1;

	t13 = (((x457<=x458)>>x459)|x460);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x489 = 1U;
	uint8_t x491 = 1U;
	uint16_t x492 = UINT16_MAX;

	t14 = (((x489<=x490)>>x491)|x492);

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x517 = -1LL;
	int8_t x519 = 6;
	uint8_t x520 = 8U;
	int32_t t15 = 11;

	t15 = (((x517<=x518)>>x519)|x520);

	if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x533 = 5188U;
	int32_t x534 = 101254340;
	uint8_t x535 = 12U;
	int64_t x536 = 304223749LL;
	volatile int64_t t16 = -7962546005LL;

	t16 = (((x533<=x534)>>x535)|x536);

	if (t16 != 304223749LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x537 = 25;
	static int8_t x540 = -1;
	int32_t t17 = -142586151;

	t17 = (((x537<=x538)>>x539)|x540);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x545 = UINT64_MAX;
	volatile int32_t x546 = INT32_MIN;
	volatile uint8_t x547 = 5U;
	int64_t x548 = -2070320088723427LL;

	t18 = (((x545<=x546)>>x547)|x548);

	if (t18 != -2070320088723427LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x629 = 15847555LLU;
	int32_t x630 = 292105;
	uint16_t x632 = UINT16_MAX;
	volatile int32_t t19 = -12505194;

	t19 = (((x629<=x630)>>x631)|x632);

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x633 = -21928;
	static int64_t x634 = INT64_MIN;
	volatile int8_t x636 = -1;
	int32_t t20 = 661;

	t20 = (((x633<=x634)>>x635)|x636);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x709 = UINT16_MAX;
	uint8_t x711 = 16U;
	static uint64_t x712 = UINT64_MAX;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = (((x709<=x710)>>x711)|x712);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x729 = 0LLU;
	uint16_t x731 = 3U;
	volatile int32_t t22 = INT32_MIN;

	t22 = (((x729<=x730)>>x731)|x732);

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x777 = INT32_MIN;
	static uint64_t x779 = 2LLU;
	int8_t x780 = INT8_MAX;
	static int32_t t23 = 5437076;

	t23 = (((x777<=x778)>>x779)|x780);

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x781 = -34;
	int64_t x782 = INT64_MIN;
	uint32_t x784 = 1900024104U;

	t24 = (((x781<=x782)>>x783)|x784);

	if (t24 != 1900024104U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x833 = 5983U;
	uint64_t x834 = 730795593998667LLU;
	int16_t x835 = 0;
	uint32_t x836 = UINT32_MAX;
	static uint32_t t25 = UINT32_MAX;

	t25 = (((x833<=x834)>>x835)|x836);

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x869 = -19544;
	uint16_t x870 = 45U;
	int8_t x871 = 0;
	volatile uint16_t x872 = UINT16_MAX;
	static volatile int32_t t26 = 1;

	t26 = (((x869<=x870)>>x871)|x872);

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x905 = 101643874464194842LL;
	volatile int64_t x906 = INT64_MAX;
	int32_t x907 = 1;
	int32_t x908 = -1;

	t27 = (((x905<=x906)>>x907)|x908);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x949 = UINT64_MAX;
	volatile uint64_t x950 = UINT64_MAX;
	static uint16_t x951 = 31U;
	static int8_t x952 = -32;

	t28 = (((x949<=x950)>>x951)|x952);

	if (t28 != -32) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1061 = UINT16_MAX;
	uint8_t x1062 = 5U;
	uint16_t x1063 = 9U;
	uint32_t x1064 = 15798U;
	static uint32_t t29 = 25U;

	t29 = (((x1061<=x1062)>>x1063)|x1064);

	if (t29 != 15798U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1065 = UINT64_MAX;
	uint32_t x1066 = 46532078U;
	static int32_t x1067 = 1;
	volatile int8_t x1068 = 0;
	int32_t t30 = -114056867;

	t30 = (((x1065<=x1066)>>x1067)|x1068);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1073 = 1U;
	volatile uint32_t x1074 = 96U;
	volatile uint8_t x1075 = 16U;
	int8_t x1076 = INT8_MIN;
	volatile int32_t t31 = -6807;

	t31 = (((x1073<=x1074)>>x1075)|x1076);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x1081 = 3412U;
	int64_t x1082 = INT64_MIN;
	uint32_t x1084 = UINT32_MAX;
	static uint32_t t32 = UINT32_MAX;

	t32 = (((x1081<=x1082)>>x1083)|x1084);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1169 = INT8_MAX;
	int8_t x1171 = 0;
	static int32_t t33 = -78;

	t33 = (((x1169<=x1170)>>x1171)|x1172);

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1186 = 1002U;
	int64_t x1188 = INT64_MIN;
	volatile int64_t t34 = 3071478LL;

	t34 = (((x1185<=x1186)>>x1187)|x1188);

	if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1229 = INT64_MIN;
	int16_t x1232 = INT16_MIN;

	t35 = (((x1229<=x1230)>>x1231)|x1232);

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x1251 = 27U;
	static int32_t x1252 = -6;

	t36 = (((x1249<=x1250)>>x1251)|x1252);

	if (t36 != -6) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x1277 = -715187541LL;
	int8_t x1278 = -7;
	uint64_t x1280 = UINT64_MAX;
	uint64_t t37 = UINT64_MAX;

	t37 = (((x1277<=x1278)>>x1279)|x1280);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x1314 = 2179538843827087637LL;
	volatile int64_t x1316 = -2629581294216010945LL;
	int64_t t38 = 7386132LL;

	t38 = (((x1313<=x1314)>>x1315)|x1316);

	if (t38 != -2629581294216010945LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x1321 = INT8_MIN;
	uint8_t x1323 = 4U;
	static volatile uint64_t x1324 = 1LLU;
	uint64_t t39 = 6761510784LLU;

	t39 = (((x1321<=x1322)>>x1323)|x1324);

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1362 = 11561LLU;
	volatile int8_t x1363 = 0;
	uint64_t t40 = 4377983004821266829LLU;

	t40 = (((x1361<=x1362)>>x1363)|x1364);

	if (t40 != 574189629LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1493 = INT64_MIN;
	uint32_t x1494 = 6527U;
	int8_t x1495 = 2;
	uint8_t x1496 = 47U;
	int32_t t41 = 995764763;

	t41 = (((x1493<=x1494)>>x1495)|x1496);

	if (t41 != 47) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1505 = -42197344905097967LL;
	uint16_t x1507 = 1U;
	static uint16_t x1508 = UINT16_MAX;
	int32_t t42 = -9109;

	t42 = (((x1505<=x1506)>>x1507)|x1508);

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1517 = 1192371U;
	volatile uint8_t x1518 = 1U;
	static int8_t x1519 = 0;
	static volatile int64_t t43 = -45547597821LL;

	t43 = (((x1517<=x1518)>>x1519)|x1520);

	if (t43 != -11472268131163781LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x1525 = -1;
	static uint8_t x1527 = 0U;
	uint16_t x1528 = 6757U;
	volatile int32_t t44 = -8332308;

	t44 = (((x1525<=x1526)>>x1527)|x1528);

	if (t44 != 6757) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x1546 = -26557159LL;
	uint32_t x1547 = 1U;
	int8_t x1548 = 0;
	static volatile int32_t t45 = 53;

	t45 = (((x1545<=x1546)>>x1547)|x1548);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1573 = 32446U;
	uint8_t x1574 = UINT8_MAX;
	static uint32_t x1575 = 20U;
	volatile int32_t t46 = -161950339;

	t46 = (((x1573<=x1574)>>x1575)|x1576);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x1713 = -1LL;
	int8_t x1715 = 11;
	int32_t x1716 = 2;
	int32_t t47 = 2403;

	t47 = (((x1713<=x1714)>>x1715)|x1716);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1725 = -1;
	int8_t x1726 = INT8_MIN;
	static volatile uint8_t x1727 = 1U;
	volatile int32_t t48 = -166840;

	t48 = (((x1725<=x1726)>>x1727)|x1728);

	if (t48 != -50455673) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1751 = 1;

	t49 = (((x1749<=x1750)>>x1751)|x1752);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1837 = 1536U;
	static int8_t x1838 = INT8_MIN;
	uint16_t x1839 = 3U;
	static uint32_t t50 = UINT32_MAX;

	t50 = (((x1837<=x1838)>>x1839)|x1840);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1849 = 205891655;
	uint64_t x1850 = UINT64_MAX;
	uint8_t x1851 = 0U;
	int32_t x1852 = -1;
	int32_t t51 = 7953;

	t51 = (((x1849<=x1850)>>x1851)|x1852);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1873 = -60LL;
	volatile int16_t x1874 = 191;
	volatile int32_t x1875 = 1;

	t52 = (((x1873<=x1874)>>x1875)|x1876);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x1937 = INT8_MIN;
	int16_t x1938 = -421;
	volatile int8_t x1939 = 1;
	uint16_t x1940 = 381U;
	volatile int32_t t53 = -110;

	t53 = (((x1937<=x1938)>>x1939)|x1940);

	if (t53 != 381) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1981 = INT64_MAX;
	static int16_t x1982 = -1;
	uint16_t x1983 = 11U;

	t54 = (((x1981<=x1982)>>x1983)|x1984);

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x1997 = 4U;
	volatile uint16_t x1998 = 4040U;
	static int8_t x2000 = -1;

	t55 = (((x1997<=x1998)>>x1999)|x2000);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2029 = INT64_MIN;
	int64_t x2030 = INT64_MIN;
	int64_t x2031 = 1LL;
	static int64_t x2032 = -1LL;
	volatile int64_t t56 = -2377588427073LL;

	t56 = (((x2029<=x2030)>>x2031)|x2032);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x2097 = 0U;
	int32_t x2098 = -1;
	int8_t x2099 = 0;

	t57 = (((x2097<=x2098)>>x2099)|x2100);

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2119 = 1U;
	int64_t x2120 = INT64_MAX;
	volatile int64_t t58 = INT64_MAX;

	t58 = (((x2117<=x2118)>>x2119)|x2120);

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x2121 = INT64_MIN;
	int8_t x2122 = -5;
	int32_t x2123 = 0;
	volatile int16_t x2124 = INT16_MAX;
	int32_t t59 = -12648;

	t59 = (((x2121<=x2122)>>x2123)|x2124);

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x2181 = 29865408U;
	volatile int16_t x2182 = 2674;
	static int16_t x2183 = 0;
	static int8_t x2184 = -3;
	volatile int32_t t60 = 810076;

	t60 = (((x2181<=x2182)>>x2183)|x2184);

	if (t60 != -3) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2213 = 0;
	int64_t x2214 = INT64_MAX;
	int16_t x2216 = INT16_MIN;
	int32_t t61 = 13;

	t61 = (((x2213<=x2214)>>x2215)|x2216);

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2229 = INT8_MIN;
	volatile int64_t x2230 = -1LL;
	static int8_t x2232 = -1;
	static volatile int32_t t62 = 4190;

	t62 = (((x2229<=x2230)>>x2231)|x2232);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x2237 = INT64_MIN;
	uint16_t x2238 = 18U;
	int32_t x2239 = 1;
	static volatile int32_t x2240 = 23830;
	int32_t t63 = -21887;

	t63 = (((x2237<=x2238)>>x2239)|x2240);

	if (t63 != 23830) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x2261 = INT64_MIN;
	uint16_t x2262 = 2904U;
	static int8_t x2263 = 8;
	volatile int64_t x2264 = 24050LL;
	int64_t t64 = 1LL;

	t64 = (((x2261<=x2262)>>x2263)|x2264);

	if (t64 != 24050LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2265 = -1;
	int32_t x2267 = 31;
	static int32_t x2268 = -1;
	volatile int32_t t65 = -1739;

	t65 = (((x2265<=x2266)>>x2267)|x2268);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x2305 = 13849LL;
	int16_t x2306 = -1;
	volatile int8_t x2308 = 10;
	int32_t t66 = 0;

	t66 = (((x2305<=x2306)>>x2307)|x2308);

	if (t66 != 10) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x2382 = 525567836;
	uint32_t x2383 = 29U;
	int8_t x2384 = -4;
	volatile int32_t t67 = 181;

	t67 = (((x2381<=x2382)>>x2383)|x2384);

	if (t67 != -4) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t t68 = INT32_MAX;

	t68 = (((x2393<=x2394)>>x2395)|x2396);

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2405 = INT64_MIN;
	static uint8_t x2407 = 14U;
	int32_t x2408 = INT32_MIN;
	int32_t t69 = INT32_MIN;

	t69 = (((x2405<=x2406)>>x2407)|x2408);

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2418 = INT64_MAX;
	int32_t x2420 = INT32_MIN;
	volatile int32_t t70 = INT32_MIN;

	t70 = (((x2417<=x2418)>>x2419)|x2420);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2425 = -126;
	int16_t x2426 = 8794;
	uint16_t x2427 = 2U;

	t71 = (((x2425<=x2426)>>x2427)|x2428);

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2442 = 13;
	uint8_t x2443 = 7U;
	int64_t x2444 = -7055380306792LL;
	volatile int64_t t72 = -11617923423377LL;

	t72 = (((x2441<=x2442)>>x2443)|x2444);

	if (t72 != -7055380306792LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x2457 = UINT32_MAX;
	volatile uint16_t x2458 = 1385U;
	int8_t x2459 = 12;
	static volatile uint64_t x2460 = UINT64_MAX;

	t73 = (((x2457<=x2458)>>x2459)|x2460);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x2469 = UINT32_MAX;
	static volatile int16_t x2470 = INT16_MIN;
	uint16_t x2471 = 14U;
	static int8_t x2472 = INT8_MAX;
	int32_t t74 = 1301;

	t74 = (((x2469<=x2470)>>x2471)|x2472);

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2517 = -6;
	static volatile int32_t x2520 = -1;
	volatile int32_t t75 = 46532;

	t75 = (((x2517<=x2518)>>x2519)|x2520);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2569 = -1;
	int16_t x2570 = -1;
	static int32_t x2572 = INT32_MIN;

	t76 = (((x2569<=x2570)>>x2571)|x2572);

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2573 = -1;
	int8_t x2574 = INT8_MAX;
	uint8_t x2575 = 4U;
	int8_t x2576 = INT8_MAX;
	volatile int32_t t77 = -38;

	t77 = (((x2573<=x2574)>>x2575)|x2576);

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2609 = 472LL;
	uint64_t x2610 = 3429LLU;
	int64_t x2612 = INT64_MIN;
	int64_t t78 = -4002905383740LL;

	t78 = (((x2609<=x2610)>>x2611)|x2612);

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2637 = 17557171972736LLU;
	volatile int8_t x2638 = -1;
	static int8_t x2640 = INT8_MIN;
	volatile int32_t t79 = -5025;

	t79 = (((x2637<=x2638)>>x2639)|x2640);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x2650 = INT32_MIN;
	volatile uint8_t x2651 = 28U;
	static volatile int32_t t80 = 2;

	t80 = (((x2649<=x2650)>>x2651)|x2652);

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x2677 = 38U;
	uint16_t x2678 = 28U;
	uint8_t x2679 = 29U;
	static int8_t x2680 = INT8_MAX;
	int32_t t81 = -3007128;

	t81 = (((x2677<=x2678)>>x2679)|x2680);

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2702 = 11758U;
	uint8_t x2703 = 2U;
	volatile int32_t t82 = -88657;

	t82 = (((x2701<=x2702)>>x2703)|x2704);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x2729 = 1011538905LL;
	volatile int64_t x2730 = 7590LL;
	static uint16_t x2731 = 9U;
	uint16_t x2732 = 1U;
	volatile int32_t t83 = -1;

	t83 = (((x2729<=x2730)>>x2731)|x2732);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x2741 = UINT16_MAX;
	int16_t x2742 = INT16_MIN;
	uint8_t x2743 = 0U;
	static volatile int32_t x2744 = INT32_MIN;
	volatile int32_t t84 = INT32_MIN;

	t84 = (((x2741<=x2742)>>x2743)|x2744);

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x2765 = -1716;
	int32_t x2766 = -3748255;
	uint16_t x2767 = 2U;
	int64_t x2768 = -1LL;
	int64_t t85 = -1LL;

	t85 = (((x2765<=x2766)>>x2767)|x2768);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x2769 = INT32_MIN;
	static int32_t x2770 = INT32_MIN;
	volatile int16_t x2771 = 4;
	int8_t x2772 = INT8_MIN;

	t86 = (((x2769<=x2770)>>x2771)|x2772);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2869 = UINT64_MAX;
	uint16_t x2870 = UINT16_MAX;
	int32_t x2872 = INT32_MIN;
	static volatile int32_t t87 = INT32_MIN;

	t87 = (((x2869<=x2870)>>x2871)|x2872);

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x2874 = 971U;
	uint8_t x2875 = 5U;
	uint8_t x2876 = 2U;

	t88 = (((x2873<=x2874)>>x2875)|x2876);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {


	t89 = (((x2929<=x2930)>>x2931)|x2932);

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x2933 = 17U;
	uint32_t x2936 = UINT32_MAX;
	volatile uint32_t t90 = UINT32_MAX;

	t90 = (((x2933<=x2934)>>x2935)|x2936);

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x2945 = 557119713317868LLU;
	uint32_t x2946 = 5U;
	uint32_t x2947 = 1U;
	int16_t x2948 = INT16_MIN;
	static int32_t t91 = -295882;

	t91 = (((x2945<=x2946)>>x2947)|x2948);

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x2957 = UINT8_MAX;
	uint16_t x2959 = 0U;
	static int16_t x2960 = INT16_MIN;

	t92 = (((x2957<=x2958)>>x2959)|x2960);

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x2973 = 195707157U;
	uint32_t x2976 = 10271U;
	static uint32_t t93 = 46717U;

	t93 = (((x2973<=x2974)>>x2975)|x2976);

	if (t93 != 10271U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x3019 = 0;
	int16_t x3020 = INT16_MIN;
	int32_t t94 = -311627;

	t94 = (((x3017<=x3018)>>x3019)|x3020);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3022 = 484391722;
	uint8_t x3023 = 0U;
	volatile int64_t t95 = 1137LL;

	t95 = (((x3021<=x3022)>>x3023)|x3024);

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x3045 = 17U;
	int64_t x3046 = INT64_MIN;
	static int64_t x3047 = 1LL;
	uint32_t x3048 = UINT32_MAX;
	volatile uint32_t t96 = UINT32_MAX;

	t96 = (((x3045<=x3046)>>x3047)|x3048);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3049 = INT8_MIN;
	volatile uint8_t x3051 = 4U;
	int32_t x3052 = 3;
	int32_t t97 = 533784243;

	t97 = (((x3049<=x3050)>>x3051)|x3052);

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x3053 = 57U;
	int32_t x3054 = INT32_MIN;
	static int8_t x3055 = 0;
	uint16_t x3056 = 2U;
	int32_t t98 = -725;

	t98 = (((x3053<=x3054)>>x3055)|x3056);

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3069 = UINT16_MAX;
	static int16_t x3070 = -2909;
	volatile int32_t t99 = 3230;

	t99 = (((x3069<=x3070)>>x3071)|x3072);

	if (t99 != -43907) { NG(); } else { ; }
	
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

