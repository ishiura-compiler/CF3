#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -2;
int16_t x65 = 23;
volatile int64_t x66 = -1LL;
static uint64_t x67 = 206368649312LLU;
int32_t x113 = INT32_MIN;
int16_t x129 = -65;
volatile int8_t x132 = 18;
int16_t x181 = -483;
volatile int32_t t6 = -61284;
int64_t x209 = -1LL;
static int8_t x211 = -12;
int32_t t7 = 1368;
uint64_t x223 = 8181423892LLU;
volatile int32_t t11 = -547;
uint64_t x307 = UINT64_MAX;
static volatile uint8_t x382 = 13U;
int16_t x383 = INT16_MIN;
volatile int16_t x465 = -6;
int32_t t16 = 392750089;
uint8_t x551 = UINT8_MAX;
uint8_t x636 = 30U;
uint8_t x644 = 0U;
int32_t t20 = -134462863;
uint8_t x681 = UINT8_MAX;
uint16_t x693 = 24U;
static volatile int32_t t23 = 26;
int32_t x793 = INT32_MAX;
static int64_t x928 = 0LL;
uint8_t x978 = UINT8_MAX;
int8_t x979 = -3;
uint8_t x1017 = 0U;
int32_t x1018 = INT32_MIN;
static int32_t x1030 = INT32_MAX;
uint8_t x1176 = 11U;
uint16_t x1281 = UINT16_MAX;
uint8_t x1284 = 0U;
int8_t x1337 = INT8_MAX;
int16_t x1340 = 0;
volatile uint16_t x1345 = 3U;
volatile int16_t x1346 = INT16_MIN;
uint8_t x1348 = 7U;
static volatile uint32_t x1449 = 20986U;
int32_t t43 = 220405474;
volatile uint8_t x1458 = UINT8_MAX;
volatile uint64_t x1485 = 2762110677LLU;
static uint16_t x1487 = 13U;
int64_t x1529 = INT64_MIN;
int64_t x1531 = INT64_MIN;
volatile int64_t x1575 = INT64_MAX;
static uint32_t x1638 = UINT32_MAX;
int32_t x1651 = -1;
volatile int16_t x1941 = -28;
static int8_t x1942 = 1;
int8_t x1976 = 19;
int16_t x1985 = INT16_MIN;
static volatile int32_t t57 = -4101;
int32_t t58 = -448413787;
static uint64_t x2067 = 4838754541145LLU;
volatile int32_t t60 = 72547246;
static uint16_t x2093 = 14840U;
int8_t x2169 = 1;
static int16_t x2258 = INT16_MIN;
static volatile int32_t t67 = 1561634;
static uint8_t x2288 = 0U;
volatile int64_t x2374 = 0LL;
int16_t x2375 = -8;
volatile int8_t x2390 = INT8_MIN;
uint64_t x2394 = UINT64_MAX;
static int32_t x2395 = INT32_MAX;
volatile int32_t t72 = 773536;
int8_t x2449 = INT8_MIN;
int8_t x2451 = INT8_MIN;
int64_t x2489 = -1LL;
int64_t x2533 = INT64_MIN;
uint8_t x2635 = 45U;
uint8_t x2636 = 15U;
static volatile int16_t x2641 = INT16_MIN;
int8_t x2646 = INT8_MAX;
int32_t t84 = -233790;
int8_t x2740 = 9;
int32_t x2741 = 39680500;
static int64_t x2932 = 1LL;
volatile uint64_t x2935 = UINT64_MAX;
uint8_t x2936 = 4U;
volatile int32_t x3037 = INT32_MAX;
uint8_t x3040 = 0U;
int32_t x3045 = INT32_MIN;
int64_t x3046 = 5306341LL;
volatile int32_t t95 = -189;
int32_t x3073 = INT32_MIN;
int32_t x3074 = INT32_MAX;
uint8_t x3076 = 5U;
uint32_t x3087 = 3013U;
volatile int32_t x3105 = -1;


void f0(void) {
	volatile uint32_t x2 = UINT32_MAX;
	int32_t x3 = INT32_MIN;
	int16_t x4 = 3;
	int32_t t0 = 2488;

	t0 = ((x1<(x2%x3))>>x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x68 = 17U;
	static int32_t t1 = 0;

	t1 = ((x65<(x66%x67))>>x68);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x85 = -2;
	int16_t x86 = INT16_MIN;
	uint16_t x87 = 1580U;
	uint32_t x88 = 4U;
	volatile int32_t t2 = 12802;

	t2 = ((x85<(x86%x87))>>x88);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x114 = INT16_MIN;
	uint16_t x115 = 2793U;
	volatile uint8_t x116 = 0U;
	int32_t t3 = -3;

	t3 = ((x113<(x114%x115))>>x116);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x130 = 69343646269025LLU;
	uint8_t x131 = 1U;
	volatile int32_t t4 = -725771;

	t4 = ((x129<(x130%x131))>>x132);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x182 = INT32_MAX;
	uint8_t x183 = 114U;
	uint16_t x184 = 5U;
	static int32_t t5 = -481;

	t5 = ((x181<(x182%x183))>>x184);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x189 = 2U;
	uint16_t x190 = 1U;
	int8_t x191 = INT8_MIN;
	static uint8_t x192 = 5U;

	t6 = ((x189<(x190%x191))>>x192);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x210 = INT32_MIN;
	uint64_t x212 = 12LLU;

	t7 = ((x209<(x210%x211))>>x212);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x221 = 4069U;
	volatile int64_t x222 = -4LL;
	uint8_t x224 = 2U;
	volatile int32_t t8 = -8145363;

	t8 = ((x221<(x222%x223))>>x224);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x241 = 228950U;
	uint8_t x242 = 1U;
	volatile uint64_t x243 = 8489LLU;
	uint64_t x244 = 13LLU;
	int32_t t9 = -1;

	t9 = ((x241<(x242%x243))>>x244);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x249 = 0U;
	int64_t x250 = -1LL;
	uint8_t x251 = 40U;
	int16_t x252 = 10;
	volatile int32_t t10 = 103010625;

	t10 = ((x249<(x250%x251))>>x252);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x257 = 28;
	static int32_t x258 = INT32_MIN;
	int8_t x259 = INT8_MIN;
	static uint16_t x260 = 6U;

	t11 = ((x257<(x258%x259))>>x260);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x305 = 26U;
	int8_t x306 = INT8_MIN;
	volatile int8_t x308 = 1;
	int32_t t12 = -34230;

	t12 = ((x305<(x306%x307))>>x308);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x341 = -1;
	static int16_t x342 = 2;
	static volatile int64_t x343 = 3659LL;
	static uint8_t x344 = 23U;
	volatile int32_t t13 = 297522348;

	t13 = ((x341<(x342%x343))>>x344);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x381 = 92819255315599LLU;
	uint8_t x384 = 1U;
	int32_t t14 = 194;

	t14 = ((x381<(x382%x383))>>x384);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x466 = INT16_MIN;
	uint32_t x467 = UINT32_MAX;
	uint8_t x468 = 7U;
	int32_t t15 = -1;

	t15 = ((x465<(x466%x467))>>x468);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x537 = -1;
	uint32_t x538 = UINT32_MAX;
	static int32_t x539 = INT32_MAX;
	static uint8_t x540 = 0U;

	t16 = ((x537<(x538%x539))>>x540);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x549 = 19469U;
	int16_t x550 = INT16_MIN;
	uint8_t x552 = 1U;
	static volatile int32_t t17 = -267;

	t17 = ((x549<(x550%x551))>>x552);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x569 = 25152938672460502LLU;
	static int8_t x570 = INT8_MIN;
	int16_t x571 = INT16_MIN;
	uint8_t x572 = 14U;
	int32_t t18 = -445847;

	t18 = ((x569<(x570%x571))>>x572);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x633 = INT64_MIN;
	int64_t x634 = -117LL;
	int64_t x635 = -1LL;
	int32_t t19 = -258993;

	t19 = ((x633<(x634%x635))>>x636);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x641 = INT8_MIN;
	uint16_t x642 = 1923U;
	static uint64_t x643 = 3358202946LLU;

	t20 = ((x641<(x642%x643))>>x644);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x677 = -1;
	volatile int32_t x678 = 1;
	int8_t x679 = 30;
	volatile int8_t x680 = 5;
	int32_t t21 = 87421399;

	t21 = ((x677<(x678%x679))>>x680);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x682 = INT8_MIN;
	int32_t x683 = -1;
	int16_t x684 = 3;
	static volatile int32_t t22 = -59322;

	t22 = ((x681<(x682%x683))>>x684);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x694 = 1741122255LLU;
	uint8_t x695 = UINT8_MAX;
	int8_t x696 = 1;

	t23 = ((x693<(x694%x695))>>x696);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x794 = -1LL;
	volatile uint8_t x795 = UINT8_MAX;
	static volatile int8_t x796 = 1;
	volatile int32_t t24 = -10697;

	t24 = ((x793<(x794%x795))>>x796);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x841 = UINT16_MAX;
	int16_t x842 = INT16_MIN;
	static int64_t x843 = INT64_MIN;
	volatile uint8_t x844 = 0U;
	int32_t t25 = -17;

	t25 = ((x841<(x842%x843))>>x844);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x849 = INT16_MIN;
	int32_t x850 = -1;
	int16_t x851 = -145;
	int8_t x852 = 5;
	int32_t t26 = -18044;

	t26 = ((x849<(x850%x851))>>x852);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x925 = INT8_MAX;
	int16_t x926 = INT16_MIN;
	static int64_t x927 = INT64_MIN;
	volatile int32_t t27 = -1;

	t27 = ((x925<(x926%x927))>>x928);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x973 = INT16_MIN;
	volatile int16_t x974 = 650;
	int32_t x975 = INT32_MAX;
	uint8_t x976 = 7U;
	static volatile int32_t t28 = 23737450;

	t28 = ((x973<(x974%x975))>>x976);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x977 = -1;
	volatile int8_t x980 = 0;
	static int32_t t29 = -146;

	t29 = ((x977<(x978%x979))>>x980);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1009 = 348880U;
	uint64_t x1010 = UINT64_MAX;
	static volatile uint8_t x1011 = 2U;
	int16_t x1012 = 1;
	volatile int32_t t30 = -4943248;

	t30 = ((x1009<(x1010%x1011))>>x1012);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1019 = INT32_MIN;
	uint8_t x1020 = 0U;
	volatile int32_t t31 = -316;

	t31 = ((x1017<(x1018%x1019))>>x1020);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1029 = 3U;
	static int32_t x1031 = INT32_MIN;
	uint8_t x1032 = 1U;
	volatile int32_t t32 = 804;

	t32 = ((x1029<(x1030%x1031))>>x1032);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x1173 = INT64_MAX;
	uint64_t x1174 = UINT64_MAX;
	int64_t x1175 = INT64_MIN;
	static volatile int32_t t33 = 11354394;

	t33 = ((x1173<(x1174%x1175))>>x1176);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1177 = INT16_MIN;
	static uint64_t x1178 = UINT64_MAX;
	int16_t x1179 = -1;
	uint8_t x1180 = 5U;
	volatile int32_t t34 = 212981;

	t34 = ((x1177<(x1178%x1179))>>x1180);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1282 = -1;
	static int8_t x1283 = -18;
	int32_t t35 = -43090587;

	t35 = ((x1281<(x1282%x1283))>>x1284);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x1289 = -590795;
	uint16_t x1290 = UINT16_MAX;
	volatile int8_t x1291 = INT8_MIN;
	static uint8_t x1292 = 1U;
	int32_t t36 = -97;

	t36 = ((x1289<(x1290%x1291))>>x1292);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1338 = 84749581640557563LLU;
	static int16_t x1339 = INT16_MAX;
	volatile int32_t t37 = 11885676;

	t37 = ((x1337<(x1338%x1339))>>x1340);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x1347 = 1U;
	volatile int32_t t38 = -6;

	t38 = ((x1345<(x1346%x1347))>>x1348);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x1373 = 52026119859409313LLU;
	volatile int16_t x1374 = 994;
	volatile uint32_t x1375 = 5U;
	uint32_t x1376 = 0U;
	volatile int32_t t39 = 75467;

	t39 = ((x1373<(x1374%x1375))>>x1376);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x1377 = -1;
	static volatile int64_t x1378 = -1LL;
	static volatile int64_t x1379 = -1LL;
	uint8_t x1380 = 2U;
	int32_t t40 = 3471070;

	t40 = ((x1377<(x1378%x1379))>>x1380);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x1389 = INT16_MIN;
	static int64_t x1390 = -1LL;
	volatile int16_t x1391 = -2;
	uint8_t x1392 = 7U;
	volatile int32_t t41 = 552374919;

	t41 = ((x1389<(x1390%x1391))>>x1392);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x1413 = 20LLU;
	int32_t x1414 = INT32_MAX;
	uint64_t x1415 = 222256LLU;
	int64_t x1416 = 5LL;
	int32_t t42 = -1538;

	t42 = ((x1413<(x1414%x1415))>>x1416);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1450 = INT8_MIN;
	static uint8_t x1451 = 20U;
	volatile uint16_t x1452 = 5U;

	t43 = ((x1449<(x1450%x1451))>>x1452);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1457 = INT32_MAX;
	int16_t x1459 = INT16_MIN;
	volatile uint8_t x1460 = 20U;
	static int32_t t44 = -678;

	t44 = ((x1457<(x1458%x1459))>>x1460);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x1486 = INT16_MIN;
	uint16_t x1488 = 4U;
	static volatile int32_t t45 = 0;

	t45 = ((x1485<(x1486%x1487))>>x1488);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1530 = -1;
	uint8_t x1532 = 10U;
	int32_t t46 = -6558893;

	t46 = ((x1529<(x1530%x1531))>>x1532);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1565 = INT16_MIN;
	uint64_t x1566 = 4124235669LLU;
	int8_t x1567 = INT8_MIN;
	int8_t x1568 = 1;
	int32_t t47 = 14100;

	t47 = ((x1565<(x1566%x1567))>>x1568);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x1573 = INT64_MIN;
	volatile int8_t x1574 = -1;
	static int8_t x1576 = 0;
	volatile int32_t t48 = -2481;

	t48 = ((x1573<(x1574%x1575))>>x1576);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x1637 = 417U;
	uint32_t x1639 = 202U;
	uint32_t x1640 = 0U;
	volatile int32_t t49 = -258;

	t49 = ((x1637<(x1638%x1639))>>x1640);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1649 = INT32_MIN;
	int64_t x1650 = INT64_MIN;
	volatile uint8_t x1652 = 0U;
	static volatile int32_t t50 = -2;

	t50 = ((x1649<(x1650%x1651))>>x1652);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x1713 = INT16_MIN;
	volatile int16_t x1714 = INT16_MIN;
	uint8_t x1715 = 43U;
	volatile uint8_t x1716 = 2U;
	volatile int32_t t51 = 605;

	t51 = ((x1713<(x1714%x1715))>>x1716);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1893 = UINT64_MAX;
	int64_t x1894 = INT64_MAX;
	int64_t x1895 = 7LL;
	static int8_t x1896 = 30;
	volatile int32_t t52 = 13649579;

	t52 = ((x1893<(x1894%x1895))>>x1896);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x1917 = -1;
	volatile int32_t x1918 = 3830;
	volatile int64_t x1919 = -1LL;
	static uint16_t x1920 = 0U;
	int32_t t53 = 4;

	t53 = ((x1917<(x1918%x1919))>>x1920);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1943 = INT32_MIN;
	volatile int32_t x1944 = 4;
	int32_t t54 = -25740;

	t54 = ((x1941<(x1942%x1943))>>x1944);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1973 = INT32_MAX;
	int32_t x1974 = -1832;
	int8_t x1975 = INT8_MIN;
	int32_t t55 = -82;

	t55 = ((x1973<(x1974%x1975))>>x1976);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1986 = -1;
	int64_t x1987 = 3013LL;
	volatile int8_t x1988 = 0;
	volatile int32_t t56 = -103;

	t56 = ((x1985<(x1986%x1987))>>x1988);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x1997 = INT8_MIN;
	uint32_t x1998 = 64864876U;
	static int8_t x1999 = INT8_MIN;
	static volatile uint8_t x2000 = 25U;

	t57 = ((x1997<(x1998%x1999))>>x2000);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2029 = 7U;
	uint64_t x2030 = UINT64_MAX;
	static int64_t x2031 = INT64_MAX;
	uint8_t x2032 = 5U;

	t58 = ((x2029<(x2030%x2031))>>x2032);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x2065 = 5U;
	static uint32_t x2066 = 11094U;
	int32_t x2068 = 16;
	int32_t t59 = 1;

	t59 = ((x2065<(x2066%x2067))>>x2068);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2069 = 38;
	volatile uint64_t x2070 = 19LLU;
	static int16_t x2071 = INT16_MIN;
	int32_t x2072 = 1;

	t60 = ((x2069<(x2070%x2071))>>x2072);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x2094 = 3756535507979234LLU;
	int8_t x2095 = INT8_MIN;
	static int16_t x2096 = 6;
	static int32_t t61 = -28148;

	t61 = ((x2093<(x2094%x2095))>>x2096);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x2125 = INT64_MIN;
	int32_t x2126 = -88524;
	int8_t x2127 = INT8_MIN;
	uint16_t x2128 = 3U;
	int32_t t62 = -18351;

	t62 = ((x2125<(x2126%x2127))>>x2128);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2165 = 3718398LL;
	int32_t x2166 = -1;
	int8_t x2167 = -61;
	uint8_t x2168 = 11U;
	volatile int32_t t63 = -6071972;

	t63 = ((x2165<(x2166%x2167))>>x2168);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2170 = INT8_MIN;
	static int16_t x2171 = INT16_MIN;
	volatile uint32_t x2172 = 22U;
	volatile int32_t t64 = 168237;

	t64 = ((x2169<(x2170%x2171))>>x2172);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2213 = INT16_MIN;
	int8_t x2214 = INT8_MIN;
	uint16_t x2215 = 63U;
	uint16_t x2216 = 2U;
	volatile int32_t t65 = 36353288;

	t65 = ((x2213<(x2214%x2215))>>x2216);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2245 = INT16_MAX;
	uint64_t x2246 = UINT64_MAX;
	int32_t x2247 = 1;
	static volatile uint16_t x2248 = 5U;
	static volatile int32_t t66 = 13181009;

	t66 = ((x2245<(x2246%x2247))>>x2248);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x2257 = 3043108U;
	int64_t x2259 = -1LL;
	static uint8_t x2260 = 0U;

	t67 = ((x2257<(x2258%x2259))>>x2260);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x2285 = INT32_MIN;
	int16_t x2286 = 1239;
	volatile uint16_t x2287 = 28701U;
	int32_t t68 = 518038430;

	t68 = ((x2285<(x2286%x2287))>>x2288);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2305 = INT8_MIN;
	uint32_t x2306 = 125891346U;
	int32_t x2307 = 13331;
	int8_t x2308 = 5;
	int32_t t69 = 22821;

	t69 = ((x2305<(x2306%x2307))>>x2308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2373 = 816U;
	int8_t x2376 = 0;
	int32_t t70 = -862903164;

	t70 = ((x2373<(x2374%x2375))>>x2376);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2389 = -1544165091655LL;
	static uint8_t x2391 = 59U;
	int8_t x2392 = 3;
	int32_t t71 = -13;

	t71 = ((x2389<(x2390%x2391))>>x2392);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2393 = 4270583LL;
	volatile uint32_t x2396 = 10U;

	t72 = ((x2393<(x2394%x2395))>>x2396);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2413 = 140029884640009LLU;
	int16_t x2414 = INT16_MIN;
	uint8_t x2415 = UINT8_MAX;
	int16_t x2416 = 11;
	int32_t t73 = -12802408;

	t73 = ((x2413<(x2414%x2415))>>x2416);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2425 = 2U;
	int32_t x2426 = INT32_MIN;
	static uint16_t x2427 = UINT16_MAX;
	uint16_t x2428 = 15U;
	volatile int32_t t74 = -46;

	t74 = ((x2425<(x2426%x2427))>>x2428);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2450 = 22U;
	uint16_t x2452 = 20U;
	int32_t t75 = 161;

	t75 = ((x2449<(x2450%x2451))>>x2452);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x2461 = 20385U;
	uint64_t x2462 = 418941LLU;
	volatile int16_t x2463 = INT16_MAX;
	int8_t x2464 = 3;
	int32_t t76 = -31197847;

	t76 = ((x2461<(x2462%x2463))>>x2464);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2490 = 3125264LLU;
	int16_t x2491 = INT16_MIN;
	int16_t x2492 = 1;
	int32_t t77 = -1021;

	t77 = ((x2489<(x2490%x2491))>>x2492);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x2534 = UINT64_MAX;
	int32_t x2535 = INT32_MIN;
	int8_t x2536 = 1;
	int32_t t78 = 6737;

	t78 = ((x2533<(x2534%x2535))>>x2536);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2577 = 18009;
	static uint64_t x2578 = UINT64_MAX;
	volatile int32_t x2579 = INT32_MAX;
	uint8_t x2580 = 0U;
	int32_t t79 = 289095;

	t79 = ((x2577<(x2578%x2579))>>x2580);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2613 = -1;
	int16_t x2614 = INT16_MAX;
	int16_t x2615 = -1;
	static int16_t x2616 = 19;
	volatile int32_t t80 = -1044205;

	t80 = ((x2613<(x2614%x2615))>>x2616);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x2625 = -1;
	volatile int32_t x2626 = INT32_MAX;
	int8_t x2627 = -1;
	uint16_t x2628 = 11U;
	static volatile int32_t t81 = 917722;

	t81 = ((x2625<(x2626%x2627))>>x2628);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x2633 = 95846791U;
	int16_t x2634 = 261;
	int32_t t82 = -239;

	t82 = ((x2633<(x2634%x2635))>>x2636);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x2642 = 1;
	int64_t x2643 = -1LL;
	int8_t x2644 = 9;
	volatile int32_t t83 = -22;

	t83 = ((x2641<(x2642%x2643))>>x2644);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2645 = INT32_MIN;
	static uint16_t x2647 = UINT16_MAX;
	uint8_t x2648 = 2U;

	t84 = ((x2645<(x2646%x2647))>>x2648);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x2661 = -1;
	uint32_t x2662 = UINT32_MAX;
	int8_t x2663 = 20;
	uint8_t x2664 = 20U;
	static volatile int32_t t85 = 254;

	t85 = ((x2661<(x2662%x2663))>>x2664);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x2669 = -1;
	int8_t x2670 = INT8_MAX;
	volatile uint32_t x2671 = 1044295U;
	int16_t x2672 = 4;
	volatile int32_t t86 = 119923;

	t86 = ((x2669<(x2670%x2671))>>x2672);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x2737 = 7U;
	volatile uint64_t x2738 = 411577468290280583LLU;
	volatile int8_t x2739 = INT8_MIN;
	int32_t t87 = 250600605;

	t87 = ((x2737<(x2738%x2739))>>x2740);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2742 = -1;
	volatile uint16_t x2743 = 86U;
	int8_t x2744 = 2;
	int32_t t88 = -1346;

	t88 = ((x2741<(x2742%x2743))>>x2744);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x2773 = UINT32_MAX;
	uint8_t x2774 = 2U;
	static int8_t x2775 = INT8_MIN;
	static int8_t x2776 = 13;
	volatile int32_t t89 = 756468;

	t89 = ((x2773<(x2774%x2775))>>x2776);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2921 = INT8_MAX;
	int16_t x2922 = -5;
	int64_t x2923 = 169011856372444LL;
	int64_t x2924 = 1LL;
	int32_t t90 = 144;

	t90 = ((x2921<(x2922%x2923))>>x2924);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x2929 = INT16_MIN;
	int16_t x2930 = INT16_MIN;
	static int8_t x2931 = 9;
	int32_t t91 = -3613;

	t91 = ((x2929<(x2930%x2931))>>x2932);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x2933 = -119655569749LL;
	int16_t x2934 = -1;
	volatile int32_t t92 = 328942;

	t92 = ((x2933<(x2934%x2935))>>x2936);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x3038 = 15856U;
	int64_t x3039 = 11815472932LL;
	volatile int32_t t93 = -79716407;

	t93 = ((x3037<(x3038%x3039))>>x3040);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3041 = -1LL;
	int32_t x3042 = INT32_MAX;
	static int64_t x3043 = INT64_MAX;
	uint8_t x3044 = 10U;
	volatile int32_t t94 = -8;

	t94 = ((x3041<(x3042%x3043))>>x3044);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3047 = INT8_MIN;
	int32_t x3048 = 0;

	t95 = ((x3045<(x3046%x3047))>>x3048);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x3053 = 59711;
	uint16_t x3054 = UINT16_MAX;
	uint16_t x3055 = UINT16_MAX;
	static uint8_t x3056 = 26U;
	volatile int32_t t96 = -217;

	t96 = ((x3053<(x3054%x3055))>>x3056);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x3075 = -1;
	volatile int32_t t97 = 63319;

	t97 = ((x3073<(x3074%x3075))>>x3076);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x3085 = UINT8_MAX;
	static int8_t x3086 = -27;
	static volatile int32_t x3088 = 1;
	int32_t t98 = -272513687;

	t98 = ((x3085<(x3086%x3087))>>x3088);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3106 = UINT32_MAX;
	static int64_t x3107 = -1331954768LL;
	int8_t x3108 = 7;
	int32_t t99 = -167975;

	t99 = ((x3105<(x3106%x3107))>>x3108);

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

