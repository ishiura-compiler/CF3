#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x7 = 9U;
volatile uint8_t x85 = 5U;
static int8_t x101 = INT8_MAX;
int16_t x103 = 0;
volatile int16_t x184 = INT16_MAX;
volatile int32_t t4 = 555798786;
static int8_t x229 = 12;
int8_t x231 = 10;
volatile uint16_t x252 = UINT16_MAX;
volatile uint64_t t7 = UINT64_MAX;
uint64_t t8 = 222923477970025LLU;
int16_t x610 = 20;
static uint8_t x762 = 1U;
uint16_t x763 = 23U;
volatile int64_t t10 = 22154LL;
int8_t x804 = INT8_MAX;
volatile int32_t x910 = 5;
uint16_t x1138 = 19U;
uint8_t x1257 = 6U;
int16_t x1259 = INT16_MIN;
uint32_t x1317 = 44U;
int32_t x1320 = INT32_MIN;
volatile int64_t t19 = 0LL;
static int32_t t20 = -1017;
static uint16_t x1461 = 4009U;
int8_t x1562 = 6;
static uint64_t x1590 = 3LLU;
static uint16_t x1661 = UINT16_MAX;
uint16_t x1664 = UINT16_MAX;
static int16_t x1718 = 1;
volatile int64_t t25 = -190345713LL;
int64_t x1897 = 5985159LL;
static uint32_t x2002 = 0U;
volatile int32_t x2017 = 160;
uint8_t x2162 = 7U;
int8_t x2164 = INT8_MIN;
uint32_t t31 = 1U;
uint32_t x2318 = 4U;
int8_t x2403 = INT8_MIN;
int16_t x2404 = -2;
int16_t x2633 = INT16_MAX;
int8_t x2634 = 11;
volatile uint32_t x2669 = UINT32_MAX;
uint32_t x2693 = UINT32_MAX;
volatile int64_t t39 = -3934968LL;
int32_t x2980 = INT32_MAX;
uint64_t t40 = 2024319955124627044LLU;
uint16_t x3116 = UINT16_MAX;
uint32_t x3120 = 46870U;
uint32_t t43 = 26U;
uint16_t x3367 = 1U;
volatile uint64_t t44 = 5506157246994883LLU;
int8_t x3408 = 5;
int64_t t46 = 33703045505118LL;
int8_t x3415 = INT8_MIN;
uint8_t x3502 = 2U;
int64_t t50 = -1227361LL;
int16_t x3607 = -1;
static volatile uint64_t t51 = 786167244463830LLU;
uint32_t x3740 = UINT32_MAX;
static uint64_t t54 = 515160590175LLU;
uint32_t x3933 = 39U;
static int32_t x3936 = INT32_MAX;
int8_t x4158 = 20;
int8_t x4159 = -1;
volatile uint64_t x4629 = UINT64_MAX;
static volatile uint64_t t67 = 5006302LLU;
int32_t x4748 = -4622;
volatile uint64_t x4953 = UINT64_MAX;
int32_t x4955 = -1;
static uint64_t t70 = 257638015LLU;
static int64_t x5012 = 460578LL;
uint8_t x5133 = UINT8_MAX;
static int16_t x5134 = 13;
uint16_t x5136 = 706U;
uint8_t x5336 = 41U;
int64_t x5363 = -7248929671798919LL;
int32_t x5364 = INT32_MIN;
uint64_t t79 = 189333081LLU;
static uint64_t x5733 = 1880809961LLU;
volatile uint32_t x5777 = 1527174532U;
static volatile int64_t x5780 = INT64_MIN;
uint8_t x5871 = 10U;
uint8_t x6138 = 3U;
volatile int32_t t84 = -608;
volatile int64_t x6175 = 244LL;
volatile int64_t t85 = 42LL;
static volatile uint64_t x6189 = 6638170669084432755LLU;
uint8_t x6190 = 35U;
volatile uint64_t x6191 = 60906003968LLU;
volatile int64_t x6193 = INT64_MAX;
uint16_t x6196 = UINT16_MAX;
static uint8_t x6361 = 1U;
static uint32_t x6364 = 970U;
static int16_t x6404 = 0;
int8_t x6564 = INT8_MIN;
volatile int64_t x6687 = -129657LL;
uint8_t x6718 = 2U;
static volatile uint16_t x6719 = 2U;
uint32_t x6934 = 0U;
int32_t x6935 = -52298944;
static int8_t x6940 = -43;
uint8_t x6942 = 5U;


void f0(void) {
	uint64_t x5 = 13994269LLU;
	uint16_t x6 = 26U;
	int32_t x8 = -12320243;
	volatile uint64_t t0 = 10428LLU;

	t0 = (((x5<<x6)^x7)+x8);

	if (t0 != 939139482780182LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x86 = 2U;
	int16_t x87 = -1716;
	uint16_t x88 = UINT16_MAX;
	int32_t t1 = -25364621;

	t1 = (((x85<<x86)^x87)+x88);

	if (t1 != 63831) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x102 = 11;
	int8_t x104 = -1;
	volatile int32_t t2 = 1;

	t2 = (((x101<<x102)^x103)+x104);

	if (t2 != 260095) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x133 = 613U;
	uint32_t x134 = 10U;
	int32_t x135 = 0;
	int64_t x136 = -10861LL;
	int64_t t3 = -3337LL;

	t3 = (((x133<<x134)^x135)+x136);

	if (t3 != 616851LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x181 = UINT8_MAX;
	uint32_t x182 = 2U;
	volatile int32_t x183 = -15214419;

	t4 = (((x181<<x182)^x183)+x184);

	if (t4 != -15180976) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x230 = 0;
	int8_t x232 = INT8_MAX;
	int32_t t5 = -808;

	t5 = (((x229<<x230)^x231)+x232);

	if (t5 != 133) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x249 = 135781LLU;
	uint16_t x250 = 3U;
	volatile int64_t x251 = -1LL;
	uint64_t t6 = 4086742747LLU;

	t6 = (((x249<<x250)^x251)+x252);

	if (t6 != 18446744073708530902LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x409 = 0;
	int32_t x410 = 5;
	uint64_t x411 = UINT64_MAX;
	uint8_t x412 = 0U;

	t7 = (((x409<<x410)^x411)+x412);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x509 = 619;
	uint32_t x510 = 3U;
	static int16_t x511 = 3646;
	static uint64_t x512 = 8847335785055307LLU;

	t8 = (((x509<<x510)^x511)+x512);

	if (t8 != 8847335785062833LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x609 = 1688U;
	volatile uint8_t x611 = UINT8_MAX;
	uint8_t x612 = 4U;
	int32_t t9 = 1;

	t9 = (((x609<<x610)^x611)+x612);

	if (t9 != 1769996547) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x761 = INT16_MAX;
	int64_t x764 = -1LL;

	t10 = (((x761<<x762)^x763)+x764);

	if (t10 != 65512LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x801 = 3470707U;
	int8_t x802 = 3;
	int64_t x803 = -68693717298LL;
	static int64_t t11 = 23614LL;

	t11 = (((x801<<x802)^x803)+x804);

	if (t11 != -68716419627LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x881 = UINT32_MAX;
	uint32_t x882 = 12U;
	int64_t x883 = INT64_MAX;
	uint16_t x884 = 0U;
	int64_t t12 = 31010828735717938LL;

	t12 = (((x881<<x882)^x883)+x884);

	if (t12 != 9223372032559812607LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x909 = 11950470106LLU;
	int64_t x911 = -1LL;
	int8_t x912 = INT8_MIN;
	volatile uint64_t t13 = 71529LLU;

	t13 = (((x909<<x910)^x911)+x912);

	if (t13 != 18446743691294508095LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x1109 = 174489;
	uint16_t x1110 = 1U;
	int8_t x1111 = -1;
	int8_t x1112 = -1;
	static int32_t t14 = 60127536;

	t14 = (((x1109<<x1110)^x1111)+x1112);

	if (t14 != -348980) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1137 = 29465LL;
	volatile int64_t x1139 = INT64_MIN;
	uint32_t x1140 = UINT32_MAX;
	volatile int64_t t15 = 107875321LL;

	t15 = (((x1137<<x1138)^x1139)+x1140);

	if (t15 != -9223372017111662593LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1253 = UINT16_MAX;
	int8_t x1254 = 0;
	uint16_t x1255 = 18U;
	int64_t x1256 = INT64_MIN;
	static volatile int64_t t16 = 87364001106LL;

	t16 = (((x1253<<x1254)^x1255)+x1256);

	if (t16 != -9223372036854710291LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1258 = 3LLU;
	int64_t x1260 = -1LL;
	int64_t t17 = -2796036341396LL;

	t17 = (((x1257<<x1258)^x1259)+x1260);

	if (t17 != -32721LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1318 = 1U;
	uint16_t x1319 = 123U;
	volatile uint32_t t18 = 97U;

	t18 = (((x1317<<x1318)^x1319)+x1320);

	if (t18 != 2147483683U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x1333 = 589U;
	uint8_t x1334 = 1U;
	int64_t x1335 = INT64_MAX;
	static int8_t x1336 = INT8_MAX;

	t19 = (((x1333<<x1334)^x1335)+x1336);

	if (t19 != 9223372036854774756LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x1433 = 3U;
	static uint16_t x1434 = 7U;
	int16_t x1435 = 123;
	volatile int8_t x1436 = INT8_MIN;

	t20 = (((x1433<<x1434)^x1435)+x1436);

	if (t20 != 379) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1462 = 3;
	uint32_t x1463 = 9044318U;
	int8_t x1464 = INT8_MAX;
	uint32_t t21 = 58U;

	t21 = (((x1461<<x1462)^x1463)+x1464);

	if (t21 != 9075861U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1561 = UINT8_MAX;
	static int8_t x1563 = INT8_MIN;
	volatile int8_t x1564 = -1;
	volatile int32_t t22 = -13602;

	t22 = (((x1561<<x1562)^x1563)+x1564);

	if (t22 != -16321) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x1589 = 1442326LL;
	int8_t x1591 = -1;
	uint8_t x1592 = 2U;
	int64_t t23 = -43557605LL;

	t23 = (((x1589<<x1590)^x1591)+x1592);

	if (t23 != -11538607LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1662 = 15LLU;
	int32_t x1663 = INT32_MAX;
	volatile int32_t t24 = -129;

	t24 = (((x1661<<x1662)^x1663)+x1664);

	if (t24 != 98302) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1717 = UINT8_MAX;
	int64_t x1719 = INT64_MIN;
	int8_t x1720 = 1;

	t25 = (((x1717<<x1718)^x1719)+x1720);

	if (t25 != -9223372036854775297LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1898 = 2U;
	int32_t x1899 = INT32_MIN;
	int32_t x1900 = 6694;
	volatile int64_t t26 = -97272815895033009LL;

	t26 = (((x1897<<x1898)^x1899)+x1900);

	if (t26 != -2123536318LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1949 = INT32_MAX;
	static uint16_t x1950 = 0U;
	uint64_t x1951 = 1862803LLU;
	int64_t x1952 = INT64_MIN;
	static volatile uint64_t t27 = 3098519350LLU;

	t27 = (((x1949<<x1950)^x1951)+x1952);

	if (t27 != 9223372039000396652LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x2001 = INT16_MAX;
	int16_t x2003 = -1;
	int8_t x2004 = -1;
	int32_t t28 = 7;

	t28 = (((x2001<<x2002)^x2003)+x2004);

	if (t28 != -32769) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x2018 = 2LL;
	static int16_t x2019 = INT16_MAX;
	int8_t x2020 = INT8_MIN;
	int32_t t29 = 285;

	t29 = (((x2017<<x2018)^x2019)+x2020);

	if (t29 != 31999) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x2161 = UINT8_MAX;
	uint8_t x2163 = UINT8_MAX;
	volatile int32_t t30 = -15477;

	t30 = (((x2161<<x2162)^x2163)+x2164);

	if (t30 != 32511) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2165 = 668426714U;
	volatile int8_t x2166 = 2;
	int8_t x2167 = -1;
	uint32_t x2168 = 1U;

	t31 = (((x2165<<x2166)^x2167)+x2168);

	if (t31 != 1621260440U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x2317 = INT16_MAX;
	int16_t x2319 = 7;
	int64_t x2320 = INT64_MIN;
	int64_t t32 = 15LL;

	t32 = (((x2317<<x2318)^x2319)+x2320);

	if (t32 != -9223372036854251529LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x2321 = 42303U;
	uint8_t x2322 = 8U;
	volatile int64_t x2323 = -1LL;
	uint16_t x2324 = UINT16_MAX;
	volatile int64_t t33 = 134LL;

	t33 = (((x2321<<x2322)^x2323)+x2324);

	if (t33 != -10764034LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x2401 = 0;
	int64_t x2402 = 3LL;
	volatile int32_t t34 = 20703958;

	t34 = (((x2401<<x2402)^x2403)+x2404);

	if (t34 != -130) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2409 = 218432LLU;
	uint16_t x2410 = 48U;
	volatile int8_t x2411 = -1;
	uint8_t x2412 = 9U;
	uint64_t t35 = 14822278LLU;

	t35 = (((x2409<<x2410)^x2411)+x2412);

	if (t35 != 12303834181976195080LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2635 = INT64_MIN;
	volatile uint64_t x2636 = UINT64_MAX;
	volatile uint64_t t36 = 3369504073LLU;

	t36 = (((x2633<<x2634)^x2635)+x2636);

	if (t36 != 9223372036921882623LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2670 = 13U;
	uint32_t x2671 = 1069350098U;
	int8_t x2672 = INT8_MIN;
	uint32_t t37 = 1U;

	t37 = (((x2669<<x2670)^x2671)+x2672);

	if (t37 != 3225623634U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x2694 = 1;
	uint64_t x2695 = UINT64_MAX;
	uint32_t x2696 = 609503U;
	uint64_t t38 = 79584519302LLU;

	t38 = (((x2693<<x2694)^x2695)+x2696);

	if (t38 != 18446744069415193824LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x2893 = 1298218179353417LL;
	int8_t x2894 = 5;
	int16_t x2895 = -1;
	int32_t x2896 = -1;

	t39 = (((x2893<<x2894)^x2895)+x2896);

	if (t39 != -41542981739309346LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x2977 = 10LLU;
	static volatile int8_t x2978 = 3;
	static int32_t x2979 = -1;

	t40 = (((x2977<<x2978)^x2979)+x2980);

	if (t40 != 2147483566LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x3113 = 6U;
	static uint8_t x3114 = 0U;
	static int8_t x3115 = INT8_MIN;
	int32_t t41 = 1;

	t41 = (((x3113<<x3114)^x3115)+x3116);

	if (t41 != 65413) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x3117 = 24U;
	static volatile uint16_t x3118 = 0U;
	int16_t x3119 = 4896;
	uint32_t t42 = 0U;

	t42 = (((x3117<<x3118)^x3119)+x3120);

	if (t42 != 51790U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x3145 = 73U;
	int16_t x3146 = 2;
	volatile int32_t x3147 = -318538609;
	volatile uint32_t x3148 = UINT32_MAX;

	t43 = (((x3145<<x3146)^x3147)+x3148);

	if (t43 != 3976428970U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x3365 = 103382354178LLU;
	static int8_t x3366 = 1;
	int16_t x3368 = 30;

	t44 = (((x3365<<x3366)^x3367)+x3368);

	if (t44 != 206764708387LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x3381 = UINT8_MAX;
	uint16_t x3382 = 14U;
	uint32_t x3383 = 118878208U;
	volatile uint64_t x3384 = 20LLU;
	static uint64_t t45 = 2263425903561500LLU;

	t45 = (((x3381<<x3382)^x3383)+x3384);

	if (t45 != 120205332LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x3405 = 101546662LL;
	uint8_t x3406 = 17U;
	int16_t x3407 = INT16_MIN;

	t46 = (((x3405<<x3406)^x3407)+x3408);

	if (t46 != -13309924114427LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3413 = 316027530131502724LLU;
	uint64_t x3414 = 12LLU;
	static volatile int32_t x3416 = INT32_MIN;
	volatile uint64_t t47 = 3655101320270LLU;

	t47 = (((x3413<<x3414)^x3415)+x3416);

	if (t47 != 15270065812595523456LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3433 = UINT16_MAX;
	volatile int8_t x3434 = 8;
	int64_t x3435 = -728034643LL;
	static int8_t x3436 = -1;
	volatile int64_t t48 = -136941206939750LL;

	t48 = (((x3433<<x3434)^x3435)+x3436);

	if (t48 != -731583060LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x3465 = 64U;
	uint8_t x3466 = 5U;
	static uint16_t x3467 = 40U;
	volatile int16_t x3468 = -7;
	volatile int32_t t49 = 107615948;

	t49 = (((x3465<<x3466)^x3467)+x3468);

	if (t49 != 2081) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3501 = 0;
	int64_t x3503 = INT64_MAX;
	int32_t x3504 = INT32_MIN;

	t50 = (((x3501<<x3502)^x3503)+x3504);

	if (t50 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3605 = 13200LLU;
	int16_t x3606 = 3;
	int16_t x3608 = 1421;

	t51 = (((x3605<<x3606)^x3607)+x3608);

	if (t51 != 18446744073709447436LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x3641 = 111LLU;
	int64_t x3642 = 2LL;
	int64_t x3643 = 1LL;
	int32_t x3644 = INT32_MAX;
	uint64_t t52 = 127304425868LLU;

	t52 = (((x3641<<x3642)^x3643)+x3644);

	if (t52 != 2147484092LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3737 = 89;
	int8_t x3738 = 7;
	uint8_t x3739 = UINT8_MAX;
	static uint32_t t53 = 6U;

	t53 = (((x3737<<x3738)^x3739)+x3740);

	if (t53 != 11390U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x3773 = INT32_MAX;
	volatile uint32_t x3774 = 0U;
	uint64_t x3775 = 838191161443LLU;
	static volatile int64_t x3776 = 81LL;

	t54 = (((x3773<<x3774)^x3775)+x3776);

	if (t54 != 838993567725LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3909 = 7U;
	volatile uint32_t x3910 = 1U;
	static uint16_t x3911 = UINT16_MAX;
	int16_t x3912 = -112;
	int32_t t55 = 27;

	t55 = (((x3909<<x3910)^x3911)+x3912);

	if (t55 != 65409) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3934 = 17U;
	int8_t x3935 = -1;
	static uint32_t t56 = 342456846U;

	t56 = (((x3933<<x3934)^x3935)+x3936);

	if (t56 != 2142371838U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x4081 = 61U;
	uint8_t x4082 = 1U;
	int64_t x4083 = INT64_MIN;
	uint32_t x4084 = 1476056U;
	int64_t t57 = -3692652LL;

	t57 = (((x4081<<x4082)^x4083)+x4084);

	if (t57 != -9223372036853299630LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x4157 = UINT64_MAX;
	uint8_t x4160 = UINT8_MAX;
	volatile uint64_t t58 = 27309869LLU;

	t58 = (((x4157<<x4158)^x4159)+x4160);

	if (t58 != 1048830LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x4253 = UINT8_MAX;
	volatile uint8_t x4254 = 1U;
	int16_t x4255 = 30;
	uint32_t x4256 = UINT32_MAX;
	static volatile uint32_t t59 = 268517592U;

	t59 = (((x4253<<x4254)^x4255)+x4256);

	if (t59 != 479U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x4361 = 4;
	int16_t x4362 = 1;
	uint32_t x4363 = 9497U;
	int64_t x4364 = INT64_MIN;
	volatile int64_t t60 = 42426030901361657LL;

	t60 = (((x4361<<x4362)^x4363)+x4364);

	if (t60 != -9223372036854766319LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x4381 = 0U;
	volatile uint16_t x4382 = 1U;
	volatile int8_t x4383 = INT8_MIN;
	uint8_t x4384 = UINT8_MAX;
	static volatile uint32_t t61 = 29599U;

	t61 = (((x4381<<x4382)^x4383)+x4384);

	if (t61 != 127U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x4397 = UINT16_MAX;
	static uint8_t x4398 = 1U;
	int8_t x4399 = -3;
	int64_t x4400 = 3711862541320LL;
	int64_t t62 = 0LL;

	t62 = (((x4397<<x4398)^x4399)+x4400);

	if (t62 != 3711862410251LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x4429 = UINT8_MAX;
	static volatile int32_t x4430 = 0;
	uint64_t x4431 = UINT64_MAX;
	uint8_t x4432 = UINT8_MAX;
	static volatile uint64_t t63 = UINT64_MAX;

	t63 = (((x4429<<x4430)^x4431)+x4432);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4609 = 56U;
	uint8_t x4610 = 0U;
	int16_t x4611 = -6274;
	int64_t x4612 = -7701074LL;
	volatile int64_t t64 = -1LL;

	t64 = (((x4609<<x4610)^x4611)+x4612);

	if (t64 != -7707404LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x4617 = 10;
	int8_t x4618 = 1;
	volatile int32_t x4619 = 12958956;
	volatile uint64_t x4620 = 322LLU;
	uint64_t t65 = 629193LLU;

	t65 = (((x4617<<x4618)^x4619)+x4620);

	if (t65 != 12959290LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x4630 = 11U;
	static volatile int8_t x4631 = INT8_MIN;
	static uint64_t x4632 = 24886108475LLU;
	volatile uint64_t t66 = 1241072894LLU;

	t66 = (((x4629<<x4630)^x4631)+x4632);

	if (t66 != 24886110395LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4717 = 168176230U;
	volatile uint8_t x4718 = 1U;
	uint16_t x4719 = 1U;
	uint64_t x4720 = UINT64_MAX;

	t67 = (((x4717<<x4718)^x4719)+x4720);

	if (t67 != 336352460LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4745 = 49U;
	volatile int32_t x4746 = 8;
	int8_t x4747 = -3;
	static int32_t t68 = 14;

	t68 = (((x4745<<x4746)^x4747)+x4748);

	if (t68 != -17169) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4909 = UINT64_MAX;
	uint32_t x4910 = 13U;
	int64_t x4911 = INT64_MIN;
	static volatile int8_t x4912 = INT8_MIN;
	uint64_t t69 = 735225LLU;

	t69 = (((x4909<<x4910)^x4911)+x4912);

	if (t69 != 9223372036854767488LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x4954 = 32U;
	int64_t x4956 = 179849467LL;

	t70 = (((x4953<<x4954)^x4955)+x4956);

	if (t70 != 4474816762LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x5009 = INT16_MAX;
	static volatile int8_t x5010 = 1;
	volatile uint8_t x5011 = 0U;
	volatile int64_t t71 = -1925413LL;

	t71 = (((x5009<<x5010)^x5011)+x5012);

	if (t71 != 526112LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x5125 = UINT16_MAX;
	static uint16_t x5126 = 15U;
	static uint32_t x5127 = 133U;
	int32_t x5128 = -4514158;
	volatile uint32_t t72 = 2U;

	t72 = (((x5125<<x5126)^x5127)+x5128);

	if (t72 != 2142936855U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x5135 = -1LL;
	int64_t t73 = 17566LL;

	t73 = (((x5133<<x5134)^x5135)+x5136);

	if (t73 != -2088255LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x5185 = 8U;
	volatile int32_t x5186 = 0;
	int64_t x5187 = -1LL;
	int16_t x5188 = -1;
	static int64_t t74 = 242LL;

	t74 = (((x5185<<x5186)^x5187)+x5188);

	if (t74 != -10LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x5229 = 7;
	int8_t x5230 = 1;
	int16_t x5231 = -1;
	int8_t x5232 = INT8_MIN;
	static volatile int32_t t75 = -603;

	t75 = (((x5229<<x5230)^x5231)+x5232);

	if (t75 != -143) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x5333 = 2648U;
	uint8_t x5334 = 0U;
	int8_t x5335 = INT8_MAX;
	volatile int32_t t76 = 27;

	t76 = (((x5333<<x5334)^x5335)+x5336);

	if (t76 != 2640) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x5337 = UINT32_MAX;
	int16_t x5338 = 7;
	static int16_t x5339 = INT16_MIN;
	uint8_t x5340 = UINT8_MAX;
	uint32_t t77 = 783762764U;

	t77 = (((x5337<<x5338)^x5339)+x5340);

	if (t77 != 32895U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5361 = 1;
	static uint8_t x5362 = 2U;
	static volatile int64_t t78 = 2061752024LL;

	t78 = (((x5361<<x5362)^x5363)+x5364);

	if (t78 != -7248931819282563LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5593 = 30518882471LLU;
	volatile int8_t x5594 = 6;
	int16_t x5595 = INT16_MAX;
	static int32_t x5596 = 39001;

	t79 = (((x5593<<x5594)^x5595)+x5596);

	if (t79 != 1953208528536LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5621 = 13480213154270LLU;
	volatile uint64_t x5622 = 6LLU;
	volatile int8_t x5623 = INT8_MIN;
	int8_t x5624 = 1;
	static volatile uint64_t t80 = 547523735951LLU;

	t80 = (((x5621<<x5622)^x5623)+x5624);

	if (t80 != 18445881340067678209LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x5734 = 63U;
	volatile int8_t x5735 = 0;
	static uint32_t x5736 = UINT32_MAX;
	volatile uint64_t t81 = 60LLU;

	t81 = (((x5733<<x5734)^x5735)+x5736);

	if (t81 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x5778 = 19U;
	int16_t x5779 = INT16_MIN;
	volatile int64_t t82 = 105500LL;

	t82 = (((x5777<<x5778)^x5779)+x5780);

	if (t82 != -9223372035447619584LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x5869 = UINT64_MAX;
	volatile uint8_t x5870 = 3U;
	int16_t x5872 = INT16_MIN;
	volatile uint64_t t83 = 1728812585047LLU;

	t83 = (((x5869<<x5870)^x5871)+x5872);

	if (t83 != 18446744073709518834LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x6137 = 2U;
	volatile int8_t x6139 = INT8_MAX;
	static volatile int16_t x6140 = -1;

	t84 = (((x6137<<x6138)^x6139)+x6140);

	if (t84 != 110) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x6173 = INT16_MAX;
	int8_t x6174 = 0;
	uint32_t x6176 = 1407770238U;

	t85 = (((x6173<<x6174)^x6175)+x6176);

	if (t85 != 1407802761LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x6192 = -1LL;
	uint64_t t86 = 11LLU;

	t86 = (((x6189<<x6190)^x6191)+x6192);

	if (t86 != 9912083675771035135LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x6194 = 0U;
	static volatile int8_t x6195 = -1;
	volatile int64_t t87 = -75639LL;

	t87 = (((x6193<<x6194)^x6195)+x6196);

	if (t87 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x6273 = INT8_MAX;
	volatile int8_t x6274 = 1;
	uint32_t x6275 = 194836U;
	int32_t x6276 = -1;
	static volatile uint32_t t88 = 129068U;

	t88 = (((x6273<<x6274)^x6275)+x6276);

	if (t88 != 195049U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x6362 = 0U;
	volatile int16_t x6363 = -1;
	static uint32_t t89 = 1013151U;

	t89 = (((x6361<<x6362)^x6363)+x6364);

	if (t89 != 968U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x6369 = 2458U;
	volatile uint64_t x6370 = 0LLU;
	uint32_t x6371 = 77U;
	static int8_t x6372 = INT8_MAX;
	volatile uint32_t t90 = 30459U;

	t90 = (((x6369<<x6370)^x6371)+x6372);

	if (t90 != 2646U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x6401 = 14410793U;
	uint8_t x6402 = 22U;
	int16_t x6403 = INT16_MAX;
	uint32_t t91 = 217760645U;

	t91 = (((x6401<<x6402)^x6403)+x6404);

	if (t91 != 171999231U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x6493 = 3041U;
	uint16_t x6494 = 2U;
	int8_t x6495 = -1;
	uint8_t x6496 = 7U;
	volatile uint32_t t92 = 64826U;

	t92 = (((x6493<<x6494)^x6495)+x6496);

	if (t92 != 4294955138U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x6497 = 436;
	uint8_t x6498 = 5U;
	int64_t x6499 = INT64_MIN;
	int8_t x6500 = INT8_MIN;
	volatile int64_t t93 = -60425528696LL;

	t93 = (((x6497<<x6498)^x6499)+x6500);

	if (t93 != -9223372036854761984LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6561 = UINT16_MAX;
	int8_t x6562 = 0;
	int64_t x6563 = INT64_MAX;
	static volatile int64_t t94 = 10924644761197883LL;

	t94 = (((x6561<<x6562)^x6563)+x6564);

	if (t94 != 9223372036854710144LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x6685 = 15U;
	uint16_t x6686 = 1U;
	volatile uint32_t x6688 = 1706754U;
	static volatile int64_t t95 = -328038134904134248LL;

	t95 = (((x6685<<x6686)^x6687)+x6688);

	if (t95 != 1577115LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x6717 = 896932678029983264LLU;
	static int16_t x6720 = INT16_MAX;
	volatile uint64_t t96 = 495350890LLU;

	t96 = (((x6717<<x6718)^x6719)+x6720);

	if (t96 != 3587730712119965825LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x6933 = 962U;
	static volatile int64_t x6936 = 254LL;
	volatile int64_t t97 = -529LL;

	t97 = (((x6933<<x6934)^x6935)+x6936);

	if (t97 != -52299392LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x6937 = 0U;
	uint8_t x6938 = 1U;
	static int16_t x6939 = INT16_MIN;
	volatile uint32_t t98 = 5760168U;

	t98 = (((x6937<<x6938)^x6939)+x6940);

	if (t98 != 4294934485U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x6941 = 614050U;
	uint64_t x6943 = 41791306182704360LLU;
	int8_t x6944 = -2;
	static volatile uint64_t t99 = 8735227652923LLU;

	t99 = (((x6941<<x6942)^x6943)+x6944);

	if (t99 != 41791306163546278LLU) { NG(); } else { ; }
	
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

