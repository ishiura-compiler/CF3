#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x292 = 1098548961U;
uint8_t x293 = 6U;
uint64_t x294 = 227108360620389312LLU;
uint8_t x354 = UINT8_MAX;
static volatile int64_t x357 = INT64_MIN;
static uint8_t x378 = 3U;
int8_t x379 = 0;
static int32_t t7 = 9784569;
int64_t x382 = 518008894860LL;
volatile int32_t t10 = -719058820;
uint32_t x442 = UINT32_MAX;
int8_t x444 = -1;
int32_t t11 = 224969474;
int8_t x563 = 0;
static volatile int16_t x564 = INT16_MIN;
static uint32_t x644 = 1419056U;
volatile uint32_t x677 = 38808480U;
int32_t t23 = -15;
volatile int32_t t25 = -59443019;
int16_t x1212 = INT16_MIN;
volatile uint32_t x1268 = UINT32_MAX;
static int64_t x1341 = 539486120065LL;
volatile int32_t t30 = 1977;
volatile uint64_t x1445 = UINT64_MAX;
uint64_t x1446 = 211206410155LLU;
int16_t x1454 = 15;
static int32_t t33 = -146448;
static int32_t t34 = -40949311;
volatile uint16_t x1490 = UINT16_MAX;
int64_t x1513 = INT64_MIN;
static volatile int64_t x1721 = -1LL;
uint32_t x1722 = 23789U;
static int32_t t37 = 201167;
volatile int32_t x1788 = INT32_MIN;
volatile uint64_t x1994 = 7396585LLU;
int8_t x2035 = 28;
int64_t x2045 = INT64_MIN;
uint32_t x2188 = 48876U;
volatile int32_t t45 = -685161320;
uint8_t x2338 = 119U;
int16_t x2339 = 0;
uint8_t x2340 = 3U;
volatile int32_t t48 = -125;
uint32_t x2470 = 230U;
volatile int32_t t51 = -1;
volatile int32_t t52 = 11309743;
static int32_t t53 = -27736;
volatile uint16_t x2579 = 6U;
uint8_t x2747 = 2U;
int64_t x2779 = 0LL;
int16_t x2780 = -5668;
static uint64_t x2830 = 129960995622754149LLU;
uint8_t x2831 = 1U;
volatile int32_t t58 = 6183;
volatile int32_t t59 = 65160682;
static volatile int32_t t60 = 1;
uint32_t x3202 = UINT32_MAX;
uint8_t x3467 = 6U;
uint8_t x3531 = 1U;
static volatile int32_t t69 = -559562612;
int32_t x3552 = -1;
uint8_t x3579 = 5U;
volatile int32_t t71 = 168197;
int8_t x3815 = 10;
static int32_t t74 = 121908;
int64_t x3883 = 1LL;
static volatile int32_t t76 = 107;
static volatile uint8_t x4007 = 17U;
uint64_t x4008 = 19598690948LLU;
uint8_t x4267 = 0U;
int32_t t80 = 127126230;
uint16_t x4474 = 6U;
uint64_t x4475 = 2LLU;
int64_t x4476 = INT64_MIN;
int32_t x4483 = 0;
volatile uint8_t x4484 = UINT8_MAX;
static volatile int32_t t83 = -8126358;
int64_t x4596 = 4149452LL;
int32_t t85 = 3327579;
volatile int16_t x4649 = -1;
uint16_t x4651 = 3U;
int32_t t87 = 1;
int32_t t88 = 1;
int32_t t89 = 18;
int16_t x4845 = INT16_MIN;
volatile int32_t t91 = -114210758;
int8_t x4998 = INT8_MAX;
static uint16_t x5000 = 0U;
volatile int32_t t92 = 210560606;
int64_t x5048 = -2226306805177415396LL;
static int32_t t94 = -42377025;
static volatile uint8_t x5246 = UINT8_MAX;
uint64_t x5268 = 13788011LLU;
int64_t x5329 = -92219331457387384LL;


void f0(void) {
	static int64_t x73 = -1LL;
	uint16_t x74 = 59U;
	uint8_t x75 = 4U;
	uint64_t x76 = UINT64_MAX;
	volatile int32_t t0 = 219;

	t0 = (x73<=((x74<<x75)&x76));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x133 = INT16_MIN;
	uint8_t x134 = 55U;
	int8_t x135 = 0;
	volatile int32_t x136 = INT32_MAX;
	int32_t t1 = 0;

	t1 = (x133<=((x134<<x135)&x136));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x289 = 0;
	int64_t x290 = 2770252LL;
	uint8_t x291 = 3U;
	volatile int32_t t2 = -1042;

	t2 = (x289<=((x290<<x291)&x292));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x295 = 28U;
	volatile int32_t x296 = INT32_MIN;
	static volatile int32_t t3 = 0;

	t3 = (x293<=((x294<<x295)&x296));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x305 = 13626U;
	int8_t x306 = INT8_MAX;
	uint16_t x307 = 2U;
	static uint64_t x308 = UINT64_MAX;
	volatile int32_t t4 = -332;

	t4 = (x305<=((x306<<x307)&x308));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x353 = 3U;
	volatile int16_t x355 = 2;
	uint64_t x356 = 18570415098401440LLU;
	volatile int32_t t5 = -4012426;

	t5 = (x353<=((x354<<x355)&x356));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x358 = INT8_MAX;
	static uint16_t x359 = 17U;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t6 = 47171463;

	t6 = (x357<=((x358<<x359)&x360));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x377 = INT16_MIN;
	int64_t x380 = -1LL;

	t7 = (x377<=((x378<<x379)&x380));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x381 = INT32_MIN;
	static int32_t x383 = 10;
	volatile uint8_t x384 = 0U;
	volatile int32_t t8 = 9856550;

	t8 = (x381<=((x382<<x383)&x384));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x405 = -1;
	uint64_t x406 = 87962899401978LLU;
	int16_t x407 = 0;
	int64_t x408 = -919263LL;
	volatile int32_t t9 = 12;

	t9 = (x405<=((x406<<x407)&x408));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x437 = 36;
	uint8_t x438 = UINT8_MAX;
	volatile uint32_t x439 = 0U;
	volatile uint16_t x440 = UINT16_MAX;

	t10 = (x437<=((x438<<x439)&x440));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x441 = INT32_MIN;
	uint8_t x443 = 1U;

	t11 = (x441<=((x442<<x443)&x444));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x481 = INT32_MIN;
	int8_t x482 = INT8_MAX;
	volatile int8_t x483 = 7;
	volatile uint8_t x484 = 58U;
	int32_t t12 = 0;

	t12 = (x481<=((x482<<x483)&x484));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x517 = 856767;
	uint64_t x518 = 1LLU;
	uint8_t x519 = 23U;
	int8_t x520 = -1;
	int32_t t13 = -685370;

	t13 = (x517<=((x518<<x519)&x520));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x561 = -1;
	int64_t x562 = INT64_MAX;
	volatile int32_t t14 = -7;

	t14 = (x561<=((x562<<x563)&x564));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x565 = 4U;
	int16_t x566 = INT16_MAX;
	volatile uint16_t x567 = 3U;
	int32_t x568 = -235;
	volatile int32_t t15 = 2;

	t15 = (x565<=((x566<<x567)&x568));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x641 = INT64_MIN;
	uint8_t x642 = 63U;
	int16_t x643 = 0;
	volatile int32_t t16 = -17957034;

	t16 = (x641<=((x642<<x643)&x644));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x678 = 3978U;
	uint8_t x679 = 13U;
	volatile int32_t x680 = -1;
	int32_t t17 = 20;

	t17 = (x677<=((x678<<x679)&x680));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x697 = 113U;
	volatile uint32_t x698 = 2U;
	int8_t x699 = 0;
	int32_t x700 = -165;
	volatile int32_t t18 = 1;

	t18 = (x697<=((x698<<x699)&x700));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x737 = 0U;
	uint64_t x738 = UINT64_MAX;
	int8_t x739 = 61;
	int8_t x740 = INT8_MIN;
	volatile int32_t t19 = -2660172;

	t19 = (x737<=((x738<<x739)&x740));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x829 = INT32_MIN;
	volatile uint16_t x830 = UINT16_MAX;
	uint16_t x831 = 5U;
	static int8_t x832 = INT8_MAX;
	volatile int32_t t20 = 2242;

	t20 = (x829<=((x830<<x831)&x832));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x837 = 2002;
	uint64_t x838 = 973596120304493197LLU;
	uint8_t x839 = 1U;
	int8_t x840 = 3;
	int32_t t21 = 13823;

	t21 = (x837<=((x838<<x839)&x840));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x841 = -1;
	int8_t x842 = 57;
	int8_t x843 = 1;
	int16_t x844 = -9289;
	volatile int32_t t22 = -8967;

	t22 = (x841<=((x842<<x843)&x844));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x897 = 118U;
	static int8_t x898 = 13;
	volatile uint8_t x899 = 26U;
	int8_t x900 = INT8_MIN;

	t23 = (x897<=((x898<<x899)&x900));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x957 = 2652055183481723LLU;
	uint32_t x958 = UINT32_MAX;
	int8_t x959 = 0;
	int32_t x960 = INT32_MIN;
	int32_t t24 = 242613534;

	t24 = (x957<=((x958<<x959)&x960));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1153 = -1;
	uint64_t x1154 = 14556906LLU;
	uint16_t x1155 = 3U;
	volatile int8_t x1156 = 55;

	t25 = (x1153<=((x1154<<x1155)&x1156));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1209 = -1;
	static int8_t x1210 = 8;
	static uint8_t x1211 = 14U;
	int32_t t26 = -127;

	t26 = (x1209<=((x1210<<x1211)&x1212));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1257 = INT32_MIN;
	uint8_t x1258 = 0U;
	int16_t x1259 = 10;
	volatile uint8_t x1260 = 7U;
	int32_t t27 = -283365;

	t27 = (x1257<=((x1258<<x1259)&x1260));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x1261 = -10954813;
	volatile int64_t x1262 = 48LL;
	int8_t x1263 = 3;
	int8_t x1264 = INT8_MIN;
	static int32_t t28 = -395;

	t28 = (x1261<=((x1262<<x1263)&x1264));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1265 = 469817;
	uint64_t x1266 = 129109505LLU;
	volatile int8_t x1267 = 0;
	int32_t t29 = 15334419;

	t29 = (x1265<=((x1266<<x1267)&x1268));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1342 = 461084043461LL;
	volatile int32_t x1343 = 0;
	uint32_t x1344 = UINT32_MAX;

	t30 = (x1341<=((x1342<<x1343)&x1344));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1433 = INT16_MAX;
	uint64_t x1434 = 25540795245643LLU;
	uint8_t x1435 = 15U;
	uint64_t x1436 = UINT64_MAX;
	static int32_t t31 = 7525;

	t31 = (x1433<=((x1434<<x1435)&x1436));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1447 = 1;
	volatile int32_t x1448 = INT32_MAX;
	int32_t t32 = -9073012;

	t32 = (x1445<=((x1446<<x1447)&x1448));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1453 = 15;
	int16_t x1455 = 9;
	int64_t x1456 = INT64_MIN;

	t33 = (x1453<=((x1454<<x1455)&x1456));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1485 = 12;
	volatile uint32_t x1486 = 1U;
	uint16_t x1487 = 1U;
	volatile uint32_t x1488 = 50034147U;

	t34 = (x1485<=((x1486<<x1487)&x1488));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1489 = 7U;
	int8_t x1491 = 0;
	int32_t x1492 = INT32_MIN;
	volatile int32_t t35 = 14001293;

	t35 = (x1489<=((x1490<<x1491)&x1492));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1514 = UINT16_MAX;
	volatile uint8_t x1515 = 6U;
	int16_t x1516 = INT16_MIN;
	volatile int32_t t36 = -3;

	t36 = (x1513<=((x1514<<x1515)&x1516));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1723 = 0U;
	uint32_t x1724 = 1455639624U;

	t37 = (x1721<=((x1722<<x1723)&x1724));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x1785 = 820668327LLU;
	volatile int16_t x1786 = 534;
	static volatile int32_t x1787 = 1;
	int32_t t38 = 107711264;

	t38 = (x1785<=((x1786<<x1787)&x1788));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1841 = -1;
	int16_t x1842 = 2814;
	int16_t x1843 = 1;
	uint64_t x1844 = 22LLU;
	static int32_t t39 = 184598096;

	t39 = (x1841<=((x1842<<x1843)&x1844));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x1993 = -1;
	uint8_t x1995 = 22U;
	volatile uint16_t x1996 = 0U;
	volatile int32_t t40 = 1;

	t40 = (x1993<=((x1994<<x1995)&x1996));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x2033 = INT32_MIN;
	uint32_t x2034 = 126136618U;
	int16_t x2036 = INT16_MIN;
	volatile int32_t t41 = 591555871;

	t41 = (x2033<=((x2034<<x2035)&x2036));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2046 = UINT16_MAX;
	uint16_t x2047 = 1U;
	static int64_t x2048 = -1LL;
	volatile int32_t t42 = -557490764;

	t42 = (x2045<=((x2046<<x2047)&x2048));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2093 = -13034457571LL;
	static uint8_t x2094 = UINT8_MAX;
	static uint16_t x2095 = 1U;
	static uint64_t x2096 = UINT64_MAX;
	static volatile int32_t t43 = 2208183;

	t43 = (x2093<=((x2094<<x2095)&x2096));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x2185 = 0;
	static uint32_t x2186 = UINT32_MAX;
	int8_t x2187 = 30;
	volatile int32_t t44 = -6125657;

	t44 = (x2185<=((x2186<<x2187)&x2188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2237 = UINT32_MAX;
	int8_t x2238 = 1;
	int16_t x2239 = 26;
	uint64_t x2240 = 12482993964766333LLU;

	t45 = (x2237<=((x2238<<x2239)&x2240));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2297 = INT8_MIN;
	static uint8_t x2298 = 3U;
	volatile int32_t x2299 = 6;
	static volatile int32_t x2300 = INT32_MIN;
	int32_t t46 = 1577848;

	t46 = (x2297<=((x2298<<x2299)&x2300));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x2317 = -28946435LL;
	static volatile uint32_t x2318 = 386467803U;
	int16_t x2319 = 5;
	int32_t x2320 = INT32_MIN;
	static int32_t t47 = -19773984;

	t47 = (x2317<=((x2318<<x2319)&x2320));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2337 = INT8_MIN;

	t48 = (x2337<=((x2338<<x2339)&x2340));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2437 = 0U;
	uint16_t x2438 = UINT16_MAX;
	static int32_t x2439 = 1;
	int32_t x2440 = 47512226;
	volatile int32_t t49 = 121787625;

	t49 = (x2437<=((x2438<<x2439)&x2440));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x2469 = 401162LLU;
	uint64_t x2471 = 15LLU;
	uint32_t x2472 = UINT32_MAX;
	int32_t t50 = -1536;

	t50 = (x2469<=((x2470<<x2471)&x2472));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2477 = -1;
	int16_t x2478 = INT16_MAX;
	static uint8_t x2479 = 0U;
	static int32_t x2480 = INT32_MAX;

	t51 = (x2477<=((x2478<<x2479)&x2480));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2557 = -923;
	volatile int8_t x2558 = 11;
	uint32_t x2559 = 8U;
	volatile int8_t x2560 = INT8_MIN;

	t52 = (x2557<=((x2558<<x2559)&x2560));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2565 = INT16_MIN;
	volatile uint64_t x2566 = 107258964LLU;
	uint16_t x2567 = 0U;
	int64_t x2568 = INT64_MAX;

	t53 = (x2565<=((x2566<<x2567)&x2568));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x2577 = 0;
	uint32_t x2578 = UINT32_MAX;
	static int64_t x2580 = -1LL;
	volatile int32_t t54 = -15954278;

	t54 = (x2577<=((x2578<<x2579)&x2580));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x2745 = -1;
	uint32_t x2746 = 12093023U;
	int64_t x2748 = INT64_MAX;
	volatile int32_t t55 = -48892366;

	t55 = (x2745<=((x2746<<x2747)&x2748));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x2777 = INT64_MAX;
	uint32_t x2778 = 87676U;
	volatile int32_t t56 = -162;

	t56 = (x2777<=((x2778<<x2779)&x2780));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2829 = INT64_MIN;
	uint16_t x2832 = UINT16_MAX;
	int32_t t57 = -866;

	t57 = (x2829<=((x2830<<x2831)&x2832));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2981 = -1;
	uint8_t x2982 = 52U;
	uint16_t x2983 = 14U;
	int32_t x2984 = -60634;

	t58 = (x2981<=((x2982<<x2983)&x2984));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3013 = -1LL;
	uint8_t x3014 = 38U;
	int32_t x3015 = 1;
	int16_t x3016 = -1;

	t59 = (x3013<=((x3014<<x3015)&x3016));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x3025 = -47;
	int8_t x3026 = INT8_MAX;
	int16_t x3027 = 0;
	uint64_t x3028 = 21211349460269LLU;

	t60 = (x3025<=((x3026<<x3027)&x3028));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x3069 = INT16_MIN;
	uint32_t x3070 = 7340U;
	int8_t x3071 = 0;
	static int16_t x3072 = INT16_MIN;
	volatile int32_t t61 = 426174;

	t61 = (x3069<=((x3070<<x3071)&x3072));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3149 = 9;
	int32_t x3150 = 696;
	uint8_t x3151 = 5U;
	volatile uint16_t x3152 = UINT16_MAX;
	int32_t t62 = -224802767;

	t62 = (x3149<=((x3150<<x3151)&x3152));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x3201 = 2U;
	int8_t x3203 = 1;
	uint8_t x3204 = UINT8_MAX;
	static int32_t t63 = 142655;

	t63 = (x3201<=((x3202<<x3203)&x3204));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3289 = -11;
	int8_t x3290 = INT8_MAX;
	static int16_t x3291 = 2;
	uint8_t x3292 = 15U;
	volatile int32_t t64 = 1109;

	t64 = (x3289<=((x3290<<x3291)&x3292));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x3309 = 2725830LLU;
	int8_t x3310 = 1;
	volatile uint8_t x3311 = 13U;
	int16_t x3312 = -1;
	volatile int32_t t65 = 2046;

	t65 = (x3309<=((x3310<<x3311)&x3312));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x3357 = INT32_MIN;
	uint64_t x3358 = 1073065403673LLU;
	volatile uint8_t x3359 = 4U;
	static int64_t x3360 = INT64_MIN;
	volatile int32_t t66 = -128957;

	t66 = (x3357<=((x3358<<x3359)&x3360));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3421 = UINT8_MAX;
	static uint8_t x3422 = 49U;
	static uint8_t x3423 = 15U;
	int8_t x3424 = 3;
	volatile int32_t t67 = 49046303;

	t67 = (x3421<=((x3422<<x3423)&x3424));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x3465 = -1;
	static uint16_t x3466 = 3U;
	int32_t x3468 = -1;
	int32_t t68 = 0;

	t68 = (x3465<=((x3466<<x3467)&x3468));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3529 = 24763361LLU;
	uint16_t x3530 = 7U;
	uint64_t x3532 = 1162305025307LLU;

	t69 = (x3529<=((x3530<<x3531)&x3532));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3549 = 1021;
	uint16_t x3550 = 500U;
	uint16_t x3551 = 1U;
	int32_t t70 = 906261470;

	t70 = (x3549<=((x3550<<x3551)&x3552));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3577 = INT64_MAX;
	uint32_t x3578 = UINT32_MAX;
	volatile int16_t x3580 = -1;

	t71 = (x3577<=((x3578<<x3579)&x3580));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x3721 = 1285;
	uint64_t x3722 = 115545800LLU;
	int8_t x3723 = 1;
	int64_t x3724 = 2870219614LL;
	static int32_t t72 = 7309;

	t72 = (x3721<=((x3722<<x3723)&x3724));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x3773 = 5LLU;
	int8_t x3774 = INT8_MAX;
	volatile uint32_t x3775 = 7U;
	int16_t x3776 = INT16_MIN;
	volatile int32_t t73 = -286978997;

	t73 = (x3773<=((x3774<<x3775)&x3776));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x3813 = 10962870090LLU;
	int16_t x3814 = INT16_MAX;
	volatile int32_t x3816 = 837153562;

	t74 = (x3813<=((x3814<<x3815)&x3816));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3845 = INT8_MIN;
	uint8_t x3846 = 1U;
	volatile uint16_t x3847 = 6U;
	static uint32_t x3848 = 56U;
	int32_t t75 = 481;

	t75 = (x3845<=((x3846<<x3847)&x3848));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3881 = 25U;
	uint64_t x3882 = 31LLU;
	uint8_t x3884 = 82U;

	t76 = (x3881<=((x3882<<x3883)&x3884));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4005 = 1502128282712784722LLU;
	uint8_t x4006 = 0U;
	int32_t t77 = 1418;

	t77 = (x4005<=((x4006<<x4007)&x4008));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x4065 = -4100591510934LL;
	static volatile uint64_t x4066 = UINT64_MAX;
	uint32_t x4067 = 1U;
	uint32_t x4068 = 234U;
	int32_t t78 = -286429;

	t78 = (x4065<=((x4066<<x4067)&x4068));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4265 = 2730LLU;
	int32_t x4266 = 505;
	static volatile int8_t x4268 = INT8_MIN;
	static volatile int32_t t79 = -134575;

	t79 = (x4265<=((x4266<<x4267)&x4268));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4417 = -5829;
	static volatile int64_t x4418 = 0LL;
	uint64_t x4419 = 31LLU;
	int16_t x4420 = INT16_MIN;

	t80 = (x4417<=((x4418<<x4419)&x4420));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x4473 = INT8_MIN;
	static int32_t t81 = -1192351;

	t81 = (x4473<=((x4474<<x4475)&x4476));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x4481 = INT32_MIN;
	volatile uint8_t x4482 = UINT8_MAX;
	int32_t t82 = -22;

	t82 = (x4481<=((x4482<<x4483)&x4484));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x4525 = -13;
	uint32_t x4526 = 485U;
	uint8_t x4527 = 1U;
	uint32_t x4528 = UINT32_MAX;

	t83 = (x4525<=((x4526<<x4527)&x4528));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x4545 = 1U;
	uint8_t x4546 = 0U;
	uint8_t x4547 = 6U;
	int8_t x4548 = -1;
	static volatile int32_t t84 = 54;

	t84 = (x4545<=((x4546<<x4547)&x4548));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4593 = INT8_MAX;
	uint64_t x4594 = UINT64_MAX;
	volatile int32_t x4595 = 3;

	t85 = (x4593<=((x4594<<x4595)&x4596));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4650 = UINT8_MAX;
	int32_t x4652 = INT32_MIN;
	volatile int32_t t86 = -51874;

	t86 = (x4649<=((x4650<<x4651)&x4652));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x4709 = INT16_MAX;
	int16_t x4710 = 31;
	int8_t x4711 = 0;
	int16_t x4712 = -842;

	t87 = (x4709<=((x4710<<x4711)&x4712));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4777 = UINT8_MAX;
	static uint32_t x4778 = 13U;
	static volatile int8_t x4779 = 2;
	int8_t x4780 = 0;

	t88 = (x4777<=((x4778<<x4779)&x4780));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4817 = 1;
	uint64_t x4818 = UINT64_MAX;
	uint16_t x4819 = 7U;
	volatile uint32_t x4820 = 12U;

	t89 = (x4817<=((x4818<<x4819)&x4820));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x4846 = UINT16_MAX;
	int32_t x4847 = 3;
	int32_t x4848 = -1;
	volatile int32_t t90 = -144;

	t90 = (x4845<=((x4846<<x4847)&x4848));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x4881 = 2408848935005LLU;
	static uint8_t x4882 = 1U;
	static int32_t x4883 = 5;
	uint8_t x4884 = 0U;

	t91 = (x4881<=((x4882<<x4883)&x4884));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x4997 = 34;
	static uint32_t x4999 = 11U;

	t92 = (x4997<=((x4998<<x4999)&x5000));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x5045 = INT16_MIN;
	static volatile uint32_t x5046 = 3U;
	static uint32_t x5047 = 3U;
	volatile int32_t t93 = -8;

	t93 = (x5045<=((x5046<<x5047)&x5048));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x5181 = INT8_MIN;
	volatile int64_t x5182 = 8LL;
	int32_t x5183 = 1;
	int8_t x5184 = INT8_MIN;

	t94 = (x5181<=((x5182<<x5183)&x5184));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x5209 = INT16_MIN;
	uint64_t x5210 = 98405639935003106LLU;
	uint16_t x5211 = 2U;
	static int16_t x5212 = -1;
	int32_t t95 = 570;

	t95 = (x5209<=((x5210<<x5211)&x5212));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5245 = 1;
	static int8_t x5247 = 0;
	int32_t x5248 = -204007450;
	volatile int32_t t96 = -1;

	t96 = (x5245<=((x5246<<x5247)&x5248));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5261 = -22;
	int16_t x5262 = 2;
	uint16_t x5263 = 2U;
	volatile int64_t x5264 = -547219LL;
	volatile int32_t t97 = 1612826;

	t97 = (x5261<=((x5262<<x5263)&x5264));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5265 = INT8_MIN;
	volatile int16_t x5266 = INT16_MAX;
	static uint16_t x5267 = 0U;
	int32_t t98 = -881686;

	t98 = (x5265<=((x5266<<x5267)&x5268));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x5330 = 863446U;
	uint8_t x5331 = 24U;
	uint64_t x5332 = 1LLU;
	volatile int32_t t99 = -11;

	t99 = (x5329<=((x5330<<x5331)&x5332));

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

