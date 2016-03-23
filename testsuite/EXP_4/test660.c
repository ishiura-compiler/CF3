
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 0U;
volatile uint64_t x5 = 4553769461191029632LLU;
uint64_t t1 = 42307778354514LLU;
int16_t x13 = INT16_MIN;
static int8_t x14 = INT8_MAX;
int16_t x21 = -1;
static int64_t x23 = 462480877495LL;
int64_t x24 = 7215388491144LL;
int16_t x29 = 461;
int8_t x31 = -30;
int32_t t5 = 949;
static uint8_t x110 = UINT8_MAX;
volatile uint64_t x111 = 1496384334426353577LLU;
uint32_t x143 = UINT32_MAX;
volatile int32_t t10 = -618;
static int16_t x149 = INT16_MIN;
uint32_t x203 = 1622U;
uint32_t x204 = UINT32_MAX;
uint32_t x266 = UINT32_MAX;
int16_t x268 = 4994;
static uint64_t x276 = 2442562704124470LLU;
volatile int8_t x294 = INT8_MAX;
int64_t x296 = -1LL;
uint16_t x318 = 319U;
int16_t x319 = 12247;
static uint8_t x346 = UINT8_MAX;
static uint32_t x355 = 0U;
int32_t x360 = INT32_MIN;
int64_t x377 = -1LL;
int32_t x401 = 0;
int64_t x403 = 29475400665949622LL;
int64_t x404 = INT64_MIN;
volatile int64_t x417 = INT64_MAX;
volatile int64_t t29 = 2738LL;
uint16_t x477 = UINT16_MAX;
int8_t x489 = 11;
int16_t x491 = INT16_MIN;
int16_t x537 = -1;
uint8_t x538 = 2U;
uint16_t x539 = 1U;
volatile int64_t x565 = -1LL;
int32_t x568 = 3204081;
static int64_t t35 = -105267438015133LL;
static int8_t x621 = 2;
int32_t x624 = -385;
uint64_t x629 = 65699932407168LLU;
uint64_t x638 = 38LLU;
uint8_t x659 = UINT8_MAX;
uint16_t x697 = 64U;
int16_t x717 = INT16_MIN;
static int64_t x730 = INT64_MAX;
int16_t x731 = -1;
int16_t x732 = INT16_MIN;
static uint64_t x766 = 7204049238266081LLU;
int16_t x780 = -1;
int64_t x816 = INT64_MIN;
uint32_t x830 = 10255186U;
int8_t x853 = INT8_MAX;
int16_t x856 = 1161;
uint8_t x858 = UINT8_MAX;
static volatile int32_t x862 = INT32_MAX;
static int16_t x864 = -121;
int16_t x866 = 1;
volatile int32_t t60 = -215304;
static int8_t x911 = INT8_MIN;
volatile int32_t t63 = -1479;
uint32_t x954 = UINT32_MAX;
int32_t x959 = INT32_MIN;
static int16_t x985 = INT16_MAX;
static uint64_t x988 = UINT64_MAX;
uint64_t t73 = 1858803LLU;
int32_t x1044 = -3344;
volatile int8_t x1045 = 17;
static int32_t x1048 = INT32_MIN;
int64_t x1125 = INT64_MAX;
uint64_t x1139 = 234760961418LLU;
uint8_t x1154 = 4U;
uint64_t x1166 = 961640260LLU;
volatile int16_t x1187 = -1;
uint32_t t83 = 118671U;
int16_t x1216 = INT16_MIN;
static int64_t x1228 = INT64_MIN;
static uint64_t x1242 = UINT64_MAX;
volatile int16_t x1243 = -1;
volatile int8_t x1266 = INT8_MAX;
static volatile int32_t x1268 = INT32_MIN;
volatile uint32_t x1310 = 16316U;
uint16_t x1312 = 695U;
volatile uint32_t t96 = 422945U;
uint16_t x1405 = UINT16_MAX;
int16_t x1432 = INT16_MIN;
uint8_t x1435 = 13U;
uint64_t x1465 = 7LLU;
volatile int64_t x1467 = -1LL;
int8_t x1471 = 1;
volatile uint32_t t103 = 2140808U;
volatile int32_t t104 = 6;
int64_t x1481 = 74188488412100510LL;
int8_t x1491 = 3;
volatile int8_t x1509 = -1;
static int64_t x1512 = INT64_MAX;
uint32_t x1523 = 71693054U;
int32_t x1524 = INT32_MAX;
int8_t x1538 = INT8_MAX;
int16_t x1555 = -1;
static int16_t x1587 = INT16_MIN;
uint64_t x1603 = UINT64_MAX;
uint8_t x1610 = 71U;
uint8_t x1641 = UINT8_MAX;
uint64_t x1655 = 1985359582886LLU;
uint32_t x1718 = UINT32_MAX;
static int64_t x1719 = -1LL;
volatile int64_t x1720 = INT64_MIN;
volatile uint32_t x1722 = 7302U;
int16_t x1733 = -1;
volatile uint8_t x1747 = 0U;
int16_t x1812 = INT16_MIN;
volatile int32_t t128 = INT32_MIN;
uint16_t x1817 = UINT16_MAX;
uint32_t x1819 = UINT32_MAX;
volatile int64_t x1825 = -1LL;
volatile int32_t t131 = -54324811;
int8_t x1851 = INT8_MAX;
int8_t x1852 = INT8_MIN;
static int64_t x1863 = 28219955LL;
uint64_t x1881 = 1894637LLU;
int64_t x1884 = INT64_MAX;
uint64_t x1888 = 89733LLU;
uint64_t x1889 = UINT64_MAX;
static uint8_t x1890 = 15U;
volatile int8_t x1895 = INT8_MAX;
int32_t t140 = 152;
int64_t x1932 = INT64_MAX;
uint64_t x1978 = 134454307895979343LLU;
static volatile uint16_t x1979 = UINT16_MAX;
int16_t x1992 = -289;
int8_t x1995 = -1;
int64_t x2008 = INT64_MAX;
int32_t t151 = -510323594;
int32_t x2028 = INT32_MIN;
volatile int16_t x2039 = -1;
static int8_t x2040 = -2;
volatile uint64_t t153 = 48782363494918517LLU;
uint64_t x2056 = 10266471LLU;
uint64_t x2089 = 2021287320036742LLU;
volatile uint32_t t157 = 444U;
static int64_t t158 = -110472103LL;
uint64_t x2153 = 12LLU;
uint8_t x2154 = 7U;
int8_t x2156 = INT8_MAX;
int16_t x2165 = INT16_MIN;
int16_t x2167 = 14;
volatile uint32_t t160 = 183424457U;
static volatile int32_t t161 = -555178179;
volatile int32_t t162 = -30342;
volatile uint64_t t165 = 6890970278414727LLU;
static int32_t x2238 = 495736581;
uint32_t x2257 = UINT32_MAX;
int64_t x2260 = INT64_MIN;
uint64_t x2273 = 1696487546942LLU;
static int16_t x2313 = -1;
uint8_t x2314 = 1U;
int8_t x2337 = INT8_MIN;
volatile uint32_t x2339 = 2477585U;
volatile int16_t x2340 = INT16_MIN;
static int16_t x2403 = 21;
int8_t x2404 = 38;
int16_t x2450 = INT16_MAX;
static volatile uint32_t x2481 = UINT32_MAX;
static uint64_t x2516 = 3127919005LLU;
uint16_t x2522 = UINT16_MAX;
volatile int16_t x2523 = INT16_MAX;
static volatile int32_t t186 = 7850996;
volatile int64_t t187 = 2672381862778LL;
uint32_t x2574 = 35062083U;
int64_t x2576 = INT64_MAX;
int32_t x2603 = -1;
volatile uint64_t t190 = 3LLU;
int32_t x2606 = INT32_MAX;
int8_t x2608 = 57;
int32_t t191 = -3911695;
int32_t x2616 = INT32_MIN;
uint32_t x2681 = 10U;
uint32_t x2684 = UINT32_MAX;
uint64_t x2687 = 1076LLU;
int64_t t196 = -138121072172721LL;
int32_t x2700 = INT32_MAX;
uint8_t x2718 = 29U;
int32_t t199 = -63860887;


void f0(void) {
    	volatile int8_t x2 = 7;
	volatile int8_t x3 = INT8_MAX;
	uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 1229U;

    t0 = (x1-(x2<<(x3/x4)));

    if (t0 != 4294967289U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = UINT16_MAX;
	volatile int8_t x7 = -1;
	volatile uint8_t x8 = 82U;

    t1 = (x5-(x6<<(x7/x8)));

    if (t1 != 4553769461190964097LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = 549;
	uint32_t x10 = UINT32_MAX;
	int8_t x11 = INT8_MIN;
	static int16_t x12 = 150;
	volatile uint32_t t2 = 35325488U;

    t2 = (x9-(x10<<(x11/x12)));

    if (t2 != 550U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x15 = -16;
	volatile uint32_t x16 = UINT32_MAX;
	int32_t t3 = 93835156;

    t3 = (x13-(x14<<(x15/x16)));

    if (t3 != -32895) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x22 = 0;
	volatile int32_t t4 = 257638;

    t4 = (x21-(x22<<(x23/x24)));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x30 = 14;
	volatile int64_t x32 = -197769019LL;

    t5 = (x29-(x30<<(x31/x32)));

    if (t5 != 447) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x53 = UINT32_MAX;
	uint64_t x54 = 106028LLU;
	int32_t x55 = INT32_MIN;
	volatile uint32_t x56 = UINT32_MAX;
	uint64_t t6 = 45609351678992LLU;

    t6 = (x53-(x54<<(x55/x56)));

    if (t6 != 4294861267LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x101 = INT8_MIN;
	uint32_t x102 = 7721U;
	uint32_t x103 = 1586995384U;
	int64_t x104 = INT64_MIN;
	volatile uint32_t t7 = 3U;

    t7 = (x101-(x102<<(x103/x104)));

    if (t7 != 4294959447U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x105 = 3;
	int16_t x106 = INT16_MAX;
	int16_t x107 = -1;
	int16_t x108 = INT16_MIN;
	volatile int32_t t8 = -235459603;

    t8 = (x105-(x106<<(x107/x108)));

    if (t8 != -32764) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x109 = INT16_MAX;
	int32_t x112 = INT32_MIN;
	static int32_t t9 = -7121;

    t9 = (x109-(x110<<(x111/x112)));

    if (t9 != 32512) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x141 = 38;
	static uint8_t x142 = UINT8_MAX;
	int32_t x144 = -1;

    t10 = (x141-(x142<<(x143/x144)));

    if (t10 != -472) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x150 = INT8_MAX;
	uint32_t x151 = 1U;
	int8_t x152 = -12;
	volatile int32_t t11 = 67826;

    t11 = (x149-(x150<<(x151/x152)));

    if (t11 != -32895) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x189 = INT32_MAX;
	uint16_t x190 = 1519U;
	static int16_t x191 = INT16_MIN;
	volatile int16_t x192 = INT16_MIN;
	volatile int32_t t12 = 0;

    t12 = (x189-(x190<<(x191/x192)));

    if (t12 != 2147480609) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x201 = INT8_MAX;
	static uint32_t x202 = 116U;
	volatile uint32_t t13 = 14126U;

    t13 = (x201-(x202<<(x203/x204)));

    if (t13 != 11U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x221 = 0;
	volatile int64_t x222 = INT64_MAX;
	static volatile int8_t x223 = INT8_MIN;
	int16_t x224 = INT16_MIN;
	volatile int64_t t14 = 234LL;

    t14 = (x221-(x222<<(x223/x224)));

    if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x233 = -1;
	static uint16_t x234 = 0U;
	int8_t x235 = INT8_MAX;
	static uint64_t x236 = UINT64_MAX;
	volatile int32_t t15 = -1585;

    t15 = (x233-(x234<<(x235/x236)));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x265 = 61U;
	int16_t x267 = INT16_MAX;
	static volatile uint32_t t16 = 43U;

    t16 = (x265-(x266<<(x267/x268)));

    if (t16 != 125U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x273 = 211LL;
	uint8_t x274 = 2U;
	uint64_t x275 = 1226896838482808LLU;
	int64_t t17 = 914852717540388193LL;

    t17 = (x273-(x274<<(x275/x276)));

    if (t17 != 209LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x293 = UINT32_MAX;
	volatile int64_t x295 = -1LL;
	uint32_t t18 = 1937476796U;

    t18 = (x293-(x294<<(x295/x296)));

    if (t18 != 4294967041U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x317 = INT64_MAX;
	uint64_t x320 = 392845LLU;
	volatile int64_t t19 = 27062292LL;

    t19 = (x317-(x318<<(x319/x320)));

    if (t19 != 9223372036854775488LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x345 = INT8_MAX;
	int16_t x347 = -31;
	static int16_t x348 = INT16_MAX;
	static volatile int32_t t20 = -120500874;

    t20 = (x345-(x346<<(x347/x348)));

    if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x353 = -23;
	static volatile uint64_t x354 = 132279872LLU;
	int8_t x356 = -19;
	volatile uint64_t t21 = 1407605862LLU;

    t21 = (x353-(x354<<(x355/x356)));

    if (t21 != 18446744073577271721LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x357 = 848223U;
	int16_t x358 = INT16_MAX;
	static int32_t x359 = 21148;
	static uint32_t t22 = 3474201U;

    t22 = (x357-(x358<<(x359/x360)));

    if (t22 != 815456U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x361 = 2U;
	uint16_t x362 = 18U;
	volatile uint16_t x363 = 604U;
	static uint16_t x364 = 30176U;
	int32_t t23 = 136655716;

    t23 = (x361-(x362<<(x363/x364)));

    if (t23 != -16) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x378 = 637U;
	static uint32_t x379 = 9593689U;
	volatile int32_t x380 = INT32_MAX;
	static int64_t t24 = 363503719277059LL;

    t24 = (x377-(x378<<(x379/x380)));

    if (t24 != -638LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x381 = INT16_MIN;
	int16_t x382 = 1581;
	uint8_t x383 = UINT8_MAX;
	uint16_t x384 = 112U;
	volatile int32_t t25 = 6229;

    t25 = (x381-(x382<<(x383/x384)));

    if (t25 != -39092) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x393 = INT8_MAX;
	static volatile int16_t x394 = INT16_MAX;
	uint8_t x395 = UINT8_MAX;
	int32_t x396 = INT32_MIN;
	static int32_t t26 = -25192903;

    t26 = (x393-(x394<<(x395/x396)));

    if (t26 != -32640) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x402 = UINT8_MAX;
	volatile int32_t t27 = 0;

    t27 = (x401-(x402<<(x403/x404)));

    if (t27 != -255) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x413 = 1LL;
	static uint32_t x414 = UINT32_MAX;
	static uint8_t x415 = UINT8_MAX;
	uint64_t x416 = 51669378LLU;
	int64_t t28 = -606660595775975257LL;

    t28 = (x413-(x414<<(x415/x416)));

    if (t28 != -4294967294LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x418 = 3050748U;
	int32_t x419 = 6186;
	int32_t x420 = INT32_MAX;

    t29 = (x417-(x418<<(x419/x420)));

    if (t29 != 9223372036851725059LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x478 = 32U;
	uint8_t x479 = 21U;
	volatile int16_t x480 = INT16_MIN;
	volatile int32_t t30 = 53;

    t30 = (x477-(x478<<(x479/x480)));

    if (t30 != 65503) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x490 = UINT8_MAX;
	int64_t x492 = INT64_MIN;
	int32_t t31 = -15144143;

    t31 = (x489-(x490<<(x491/x492)));

    if (t31 != -244) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x497 = INT8_MAX;
	uint64_t x498 = 106193321028604200LLU;
	uint8_t x499 = 1U;
	volatile uint32_t x500 = UINT32_MAX;
	volatile uint64_t t32 = 4LLU;

    t32 = (x497-(x498<<(x499/x500)));

    if (t32 != 18340550752680947543LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x540 = UINT64_MAX;
	int32_t t33 = -178916;

    t33 = (x537-(x538<<(x539/x540)));

    if (t33 != -3) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x553 = INT8_MIN;
	uint8_t x554 = UINT8_MAX;
	uint16_t x555 = 25U;
	static uint16_t x556 = 2623U;
	volatile int32_t t34 = 33837648;

    t34 = (x553-(x554<<(x555/x556)));

    if (t34 != -383) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x566 = 45;
	int32_t x567 = 56;

    t35 = (x565-(x566<<(x567/x568)));

    if (t35 != -46LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x597 = INT8_MIN;
	int64_t x598 = 344LL;
	int8_t x599 = -19;
	static uint8_t x600 = UINT8_MAX;
	volatile int64_t t36 = 22468LL;

    t36 = (x597-(x598<<(x599/x600)));

    if (t36 != -472LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x622 = INT8_MAX;
	static uint64_t x623 = UINT64_MAX;
	int32_t t37 = 328231;

    t37 = (x621-(x622<<(x623/x624)));

    if (t37 != -252) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x630 = 7U;
	uint8_t x631 = UINT8_MAX;
	int16_t x632 = INT16_MIN;
	volatile uint64_t t38 = 2950LLU;

    t38 = (x629-(x630<<(x631/x632)));

    if (t38 != 65699932407161LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x637 = 5745;
	int8_t x639 = -1;
	static volatile uint8_t x640 = 4U;
	static volatile uint64_t t39 = 121494719LLU;

    t39 = (x637-(x638<<(x639/x640)));

    if (t39 != 5707LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x649 = INT8_MAX;
	uint64_t x650 = 0LLU;
	volatile int64_t x651 = -1LL;
	int8_t x652 = -2;
	uint64_t t40 = 1250964434LLU;

    t40 = (x649-(x650<<(x651/x652)));

    if (t40 != 127LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x657 = INT32_MAX;
	uint32_t x658 = UINT32_MAX;
	int32_t x660 = INT32_MAX;
	static volatile uint32_t t41 = 104132U;

    t41 = (x657-(x658<<(x659/x660)));

    if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x665 = INT16_MAX;
	static int32_t x666 = INT32_MAX;
	volatile int32_t x667 = INT32_MIN;
	uint64_t x668 = UINT64_MAX;
	static volatile int32_t t42 = -465776;

    t42 = (x665-(x666<<(x667/x668)));

    if (t42 != -2147450880) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x698 = 2U;
	static int8_t x699 = INT8_MIN;
	int64_t x700 = INT64_MAX;
	volatile int32_t t43 = 0;

    t43 = (x697-(x698<<(x699/x700)));

    if (t43 != 62) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint64_t x713 = UINT64_MAX;
	uint32_t x714 = UINT32_MAX;
	volatile int32_t x715 = -1;
	uint64_t x716 = UINT64_MAX;
	static volatile uint64_t t44 = 24141LLU;

    t44 = (x713-(x714<<(x715/x716)));

    if (t44 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x718 = 0;
	uint64_t x719 = 882128LLU;
	int32_t x720 = -1;
	static volatile int32_t t45 = -652616;

    t45 = (x717-(x718<<(x719/x720)));

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x729 = -1;
	volatile int64_t t46 = INT64_MIN;

    t46 = (x729-(x730<<(x731/x732)));

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x757 = INT64_MAX;
	static uint32_t x758 = UINT32_MAX;
	uint64_t x759 = UINT64_MAX;
	static int8_t x760 = INT8_MIN;
	volatile int64_t t47 = 46226LL;

    t47 = (x757-(x758<<(x759/x760)));

    if (t47 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x761 = INT64_MIN;
	static volatile uint64_t x762 = UINT64_MAX;
	uint64_t x763 = 193901194LLU;
	int32_t x764 = -1;
	uint64_t t48 = 8294642367LLU;

    t48 = (x761-(x762<<(x763/x764)));

    if (t48 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x765 = 16724805049588LLU;
	int16_t x767 = -1;
	int32_t x768 = 182205;
	uint64_t t49 = 107832329400065530LLU;

    t49 = (x765-(x766<<(x767/x768)));

    if (t49 != 18439556749276335123LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x777 = UINT16_MAX;
	int8_t x778 = 0;
	int8_t x779 = -6;
	static int32_t t50 = -3685847;

    t50 = (x777-(x778<<(x779/x780)));

    if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x793 = UINT16_MAX;
	int16_t x794 = 0;
	int8_t x795 = INT8_MIN;
	int32_t x796 = INT32_MAX;
	int32_t t51 = 157968;

    t51 = (x793-(x794<<(x795/x796)));

    if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x801 = 10488087;
	uint32_t x802 = 18U;
	int32_t x803 = -1;
	uint64_t x804 = UINT64_MAX;
	volatile uint32_t t52 = 130443324U;

    t52 = (x801-(x802<<(x803/x804)));

    if (t52 != 10488051U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x813 = 2682;
	int16_t x814 = INT16_MAX;
	static int64_t x815 = INT64_MIN;
	volatile int32_t t53 = 6806464;

    t53 = (x813-(x814<<(x815/x816)));

    if (t53 != -62852) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x817 = -26;
	uint8_t x818 = 54U;
	uint16_t x819 = 147U;
	uint64_t x820 = 28644LLU;
	volatile int32_t t54 = 3585587;

    t54 = (x817-(x818<<(x819/x820)));

    if (t54 != -80) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x829 = 1;
	static int32_t x831 = 63838;
	volatile int32_t x832 = INT32_MIN;
	uint32_t t55 = 394048U;

    t55 = (x829-(x830<<(x831/x832)));

    if (t55 != 4284712111U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x837 = INT8_MIN;
	uint32_t x838 = 499005328U;
	int64_t x839 = INT64_MIN;
	int64_t x840 = INT64_MIN;
	volatile uint32_t t56 = 13U;

    t56 = (x837-(x838<<(x839/x840)));

    if (t56 != 3296956512U) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x854 = 1696865U;
	volatile uint16_t x855 = 12630U;
	uint32_t t57 = 242237180U;

    t57 = (x853-(x854<<(x855/x856)));

    if (t57 != 2557377663U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x857 = UINT8_MAX;
	int8_t x859 = -1;
	uint8_t x860 = UINT8_MAX;
	static int32_t t58 = -149813;

    t58 = (x857-(x858<<(x859/x860)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x861 = UINT32_MAX;
	uint32_t x863 = 105U;
	uint32_t t59 = 726U;

    t59 = (x861-(x862<<(x863/x864)));

    if (t59 != 2147483648U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x865 = 26;
	int8_t x867 = INT8_MIN;
	int64_t x868 = 51625475186LL;

    t60 = (x865-(x866<<(x867/x868)));

    if (t60 != 25) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x881 = -364291976;
	uint16_t x882 = 95U;
	volatile uint64_t x883 = 1288LLU;
	int16_t x884 = -303;
	volatile int32_t t61 = -372772;

    t61 = (x881-(x882<<(x883/x884)));

    if (t61 != -364292071) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x905 = UINT32_MAX;
	int16_t x906 = 339;
	int16_t x907 = -11;
	static uint32_t x908 = UINT32_MAX;
	uint32_t t62 = 1391U;

    t62 = (x905-(x906<<(x907/x908)));

    if (t62 != 4294966956U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x909 = 5;
	int32_t x910 = INT32_MAX;
	int32_t x912 = INT32_MIN;

    t63 = (x909-(x910<<(x911/x912)));

    if (t63 != -2147483642) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x933 = -10262246;
	uint16_t x934 = 24U;
	static int32_t x935 = -1;
	static int32_t x936 = -962388;
	int32_t t64 = 1;

    t64 = (x933-(x934<<(x935/x936)));

    if (t64 != -10262270) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x949 = -10;
	uint16_t x950 = 1035U;
	uint8_t x951 = 25U;
	static volatile uint64_t x952 = 27915506LLU;
	volatile int32_t t65 = 12389;

    t65 = (x949-(x950<<(x951/x952)));

    if (t65 != -1045) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x953 = UINT64_MAX;
	volatile int32_t x955 = INT32_MAX;
	int64_t x956 = 347601427194465143LL;
	uint64_t t66 = 640872LLU;

    t66 = (x953-(x954<<(x955/x956)));

    if (t66 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x957 = INT8_MIN;
	uint16_t x958 = 124U;
	volatile int64_t x960 = INT64_MAX;
	volatile int32_t t67 = 482323;

    t67 = (x957-(x958<<(x959/x960)));

    if (t67 != -252) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x986 = 43U;
	int8_t x987 = INT8_MIN;
	int32_t t68 = 359363697;

    t68 = (x985-(x986<<(x987/x988)));

    if (t68 != 32724) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x993 = UINT16_MAX;
	int16_t x994 = 232;
	int8_t x995 = INT8_MIN;
	int64_t x996 = INT64_MAX;
	int32_t t69 = 82448301;

    t69 = (x993-(x994<<(x995/x996)));

    if (t69 != 65303) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x1009 = 894;
	static uint32_t x1010 = UINT32_MAX;
	volatile uint64_t x1011 = 608418448696266LLU;
	volatile uint64_t x1012 = 1384631747785204LLU;
	uint32_t t70 = 7U;

    t70 = (x1009-(x1010<<(x1011/x1012)));

    if (t70 != 895U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x1013 = INT16_MIN;
	volatile uint8_t x1014 = 0U;
	uint8_t x1015 = 83U;
	static int32_t x1016 = INT32_MAX;
	volatile int32_t t71 = 205;

    t71 = (x1013-(x1014<<(x1015/x1016)));

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x1017 = INT8_MAX;
	uint8_t x1018 = 92U;
	int8_t x1019 = INT8_MIN;
	int64_t x1020 = 3154271LL;
	int32_t t72 = -84;

    t72 = (x1017-(x1018<<(x1019/x1020)));

    if (t72 != 35) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x1025 = 2232585LLU;
	uint8_t x1026 = 6U;
	int64_t x1027 = INT64_MAX;
	volatile int64_t x1028 = INT64_MAX;

    t73 = (x1025-(x1026<<(x1027/x1028)));

    if (t73 != 2232573LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x1041 = -1;
	uint8_t x1042 = 3U;
	int16_t x1043 = INT16_MIN;
	volatile int32_t t74 = 99;

    t74 = (x1041-(x1042<<(x1043/x1044)));

    if (t74 != -1537) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x1046 = 32594502456302142LLU;
	volatile uint8_t x1047 = 38U;
	volatile uint64_t t75 = 168906LLU;

    t75 = (x1045-(x1046<<(x1047/x1048)));

    if (t75 != 18414149571253249491LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x1049 = -1LL;
	volatile uint16_t x1050 = 3U;
	int8_t x1051 = -49;
	int64_t x1052 = -130367LL;
	int64_t t76 = 87376390LL;

    t76 = (x1049-(x1050<<(x1051/x1052)));

    if (t76 != -4LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x1073 = INT16_MIN;
	static int16_t x1074 = 1360;
	int8_t x1075 = INT8_MIN;
	static int64_t x1076 = INT64_MIN;
	int32_t t77 = 81487;

    t77 = (x1073-(x1074<<(x1075/x1076)));

    if (t77 != -34128) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x1126 = UINT8_MAX;
	int32_t x1127 = -1;
	int8_t x1128 = -8;
	int64_t t78 = 10041037LL;

    t78 = (x1125-(x1126<<(x1127/x1128)));

    if (t78 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x1129 = 17509009261LL;
	int32_t x1130 = INT32_MAX;
	int16_t x1131 = INT16_MAX;
	static int32_t x1132 = INT32_MAX;
	int64_t t79 = -11454148209LL;

    t79 = (x1129-(x1130<<(x1131/x1132)));

    if (t79 != 15361525614LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x1137 = 16U;
	uint8_t x1138 = UINT8_MAX;
	int16_t x1140 = -1;
	int32_t t80 = 181431;

    t80 = (x1137-(x1138<<(x1139/x1140)));

    if (t80 != -239) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x1153 = UINT8_MAX;
	int16_t x1155 = INT16_MIN;
	int16_t x1156 = INT16_MIN;
	int32_t t81 = -4018;

    t81 = (x1153-(x1154<<(x1155/x1156)));

    if (t81 != 247) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x1165 = INT16_MIN;
	static int8_t x1167 = INT8_MIN;
	int32_t x1168 = INT32_MIN;
	uint64_t t82 = 9115LLU;

    t82 = (x1165-(x1166<<(x1167/x1168)));

    if (t82 != 18446744072747878588LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x1185 = INT32_MIN;
	uint32_t x1186 = UINT32_MAX;
	static uint16_t x1188 = UINT16_MAX;

    t83 = (x1185-(x1186<<(x1187/x1188)));

    if (t83 != 2147483649U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x1189 = 1;
	volatile uint8_t x1190 = UINT8_MAX;
	static uint8_t x1191 = 0U;
	int8_t x1192 = -1;
	int32_t t84 = 413602372;

    t84 = (x1189-(x1190<<(x1191/x1192)));

    if (t84 != -254) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x1193 = UINT32_MAX;
	uint8_t x1194 = 5U;
	static int16_t x1195 = 1776;
	volatile int64_t x1196 = -22061129LL;
	volatile uint32_t t85 = 3240U;

    t85 = (x1193-(x1194<<(x1195/x1196)));

    if (t85 != 4294967290U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x1209 = INT64_MIN;
	static int16_t x1210 = 0;
	static int16_t x1211 = -1;
	volatile int64_t x1212 = -948203570529549436LL;
	int64_t t86 = INT64_MIN;

    t86 = (x1209-(x1210<<(x1211/x1212)));

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x1213 = 1;
	uint16_t x1214 = UINT16_MAX;
	int16_t x1215 = INT16_MAX;
	static int32_t t87 = -157695;

    t87 = (x1213-(x1214<<(x1215/x1216)));

    if (t87 != -65534) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x1217 = 242LLU;
	uint64_t x1218 = 1240983070083846LLU;
	uint8_t x1219 = 4U;
	int16_t x1220 = 29;
	uint64_t t88 = 483686697LLU;

    t88 = (x1217-(x1218<<(x1219/x1220)));

    if (t88 != 18445503090639468012LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x1225 = -1;
	int16_t x1226 = INT16_MAX;
	static int32_t x1227 = INT32_MIN;
	volatile int32_t t89 = -7212178;

    t89 = (x1225-(x1226<<(x1227/x1228)));

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x1241 = INT32_MAX;
	uint8_t x1244 = UINT8_MAX;
	static uint64_t t90 = 33343115732913967LLU;

    t90 = (x1241-(x1242<<(x1243/x1244)));

    if (t90 != 2147483648LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x1249 = -82141097;
	volatile int8_t x1250 = INT8_MAX;
	uint32_t x1251 = 732U;
	static volatile uint16_t x1252 = 1527U;
	volatile int32_t t91 = -97;

    t91 = (x1249-(x1250<<(x1251/x1252)));

    if (t91 != -82141224) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x1265 = INT8_MIN;
	int8_t x1267 = INT8_MIN;
	int32_t t92 = 7155;

    t92 = (x1265-(x1266<<(x1267/x1268)));

    if (t92 != -255) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x1305 = INT16_MIN;
	static uint8_t x1306 = 4U;
	int16_t x1307 = INT16_MIN;
	int64_t x1308 = INT64_MIN;
	int32_t t93 = -81576920;

    t93 = (x1305-(x1306<<(x1307/x1308)));

    if (t93 != -32772) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x1309 = -1;
	volatile int64_t x1311 = 10258LL;
	uint32_t t94 = 3888231U;

    t94 = (x1309-(x1310<<(x1311/x1312)));

    if (t94 != 4027645951U) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x1321 = UINT8_MAX;
	int8_t x1322 = 51;
	int16_t x1323 = 94;
	int64_t x1324 = INT64_MIN;
	volatile int32_t t95 = -55645574;

    t95 = (x1321-(x1322<<(x1323/x1324)));

    if (t95 != 204) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x1393 = -27;
	uint32_t x1394 = 10513170U;
	volatile uint16_t x1395 = 4984U;
	int64_t x1396 = INT64_MIN;

    t96 = (x1393-(x1394<<(x1395/x1396)));

    if (t96 != 4284454099U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x1406 = UINT32_MAX;
	uint8_t x1407 = UINT8_MAX;
	static uint64_t x1408 = UINT64_MAX;
	uint32_t t97 = 96499U;

    t97 = (x1405-(x1406<<(x1407/x1408)));

    if (t97 != 65536U) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x1417 = INT8_MIN;
	uint32_t x1418 = 9896U;
	int32_t x1419 = 6224;
	int64_t x1420 = INT64_MIN;
	volatile uint32_t t98 = 372U;

    t98 = (x1417-(x1418<<(x1419/x1420)));

    if (t98 != 4294957272U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x1429 = 5876426096215LL;
	uint8_t x1430 = 3U;
	uint64_t x1431 = UINT64_MAX;
	volatile int64_t t99 = 2315350812899826138LL;

    t99 = (x1429-(x1430<<(x1431/x1432)));

    if (t99 != 5876426096209LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x1433 = 815626;
	uint32_t x1434 = 410U;
	volatile int8_t x1436 = INT8_MIN;
	uint32_t t100 = 539100U;

    t100 = (x1433-(x1434<<(x1435/x1436)));

    if (t100 != 815216U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x1453 = INT8_MAX;
	uint32_t x1454 = 3U;
	static uint32_t x1455 = 780701U;
	int8_t x1456 = -1;
	static uint32_t t101 = 50964U;

    t101 = (x1453-(x1454<<(x1455/x1456)));

    if (t101 != 124U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x1466 = 74648LLU;
	int64_t x1468 = INT64_MIN;
	static volatile uint64_t t102 = 814441347149587LLU;

    t102 = (x1465-(x1466<<(x1467/x1468)));

    if (t102 != 18446744073709476975LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x1469 = 63U;
	int32_t x1470 = INT32_MAX;
	volatile int16_t x1472 = INT16_MIN;

    t103 = (x1469-(x1470<<(x1471/x1472)));

    if (t103 != 2147483712U) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x1473 = -1;
	int8_t x1474 = 4;
	static int16_t x1475 = -4;
	static int16_t x1476 = -11774;

    t104 = (x1473-(x1474<<(x1475/x1476)));

    if (t104 != -5) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x1482 = 1U;
	uint16_t x1483 = 1896U;
	uint16_t x1484 = 3440U;
	volatile int64_t t105 = 1488LL;

    t105 = (x1481-(x1482<<(x1483/x1484)));

    if (t105 != 74188488412100509LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x1489 = INT16_MIN;
	uint64_t x1490 = 127424LLU;
	int64_t x1492 = 39076LL;
	static volatile uint64_t t106 = 5114607358107LLU;

    t106 = (x1489-(x1490<<(x1491/x1492)));

    if (t106 != 18446744073709391424LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x1510 = 9217208428728767486LLU;
	volatile int8_t x1511 = 23;
	volatile uint64_t t107 = 1134098077611088LLU;

    t107 = (x1509-(x1510<<(x1511/x1512)));

    if (t107 != 9229535644980784129LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x1513 = 8459532U;
	int16_t x1514 = INT16_MAX;
	uint8_t x1515 = UINT8_MAX;
	int16_t x1516 = INT16_MIN;
	uint32_t t108 = 782231598U;

    t108 = (x1513-(x1514<<(x1515/x1516)));

    if (t108 != 8426765U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x1521 = UINT8_MAX;
	uint64_t x1522 = 2660045358247290LLU;
	uint64_t t109 = 306615784LLU;

    t109 = (x1521-(x1522<<(x1523/x1524)));

    if (t109 != 18444084028351304581LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x1533 = UINT32_MAX;
	int8_t x1534 = INT8_MAX;
	volatile uint32_t x1535 = 814U;
	static volatile uint8_t x1536 = UINT8_MAX;
	uint32_t t110 = 116U;

    t110 = (x1533-(x1534<<(x1535/x1536)));

    if (t110 != 4294966279U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x1537 = 12U;
	int64_t x1539 = INT64_MAX;
	static int64_t x1540 = INT64_MAX;
	volatile int32_t t111 = 18;

    t111 = (x1537-(x1538<<(x1539/x1540)));

    if (t111 != -242) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x1553 = INT16_MIN;
	uint64_t x1554 = 3011972LLU;
	uint8_t x1556 = 17U;
	uint64_t t112 = 18LLU;

    t112 = (x1553-(x1554<<(x1555/x1556)));

    if (t112 != 18446744073706506876LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x1585 = 156;
	uint8_t x1586 = 27U;
	int64_t x1588 = INT64_MAX;
	static int32_t t113 = -1;

    t113 = (x1585-(x1586<<(x1587/x1588)));

    if (t113 != 129) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x1601 = 1U;
	int16_t x1602 = 0;
	int8_t x1604 = -7;
	static volatile int32_t t114 = -2466486;

    t114 = (x1601-(x1602<<(x1603/x1604)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x1609 = 337132263U;
	int64_t x1611 = -1LL;
	int64_t x1612 = INT64_MIN;
	uint32_t t115 = 7926024U;

    t115 = (x1609-(x1610<<(x1611/x1612)));

    if (t115 != 337132192U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x1613 = 3;
	int64_t x1614 = 133546193LL;
	volatile uint64_t x1615 = 14987895647414LLU;
	volatile int64_t x1616 = -1556167944805LL;
	volatile int64_t t116 = -6141LL;

    t116 = (x1613-(x1614<<(x1615/x1616)));

    if (t116 != -133546190LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x1642 = 102U;
	uint16_t x1643 = UINT16_MAX;
	static int16_t x1644 = INT16_MAX;
	static int32_t t117 = 0;

    t117 = (x1641-(x1642<<(x1643/x1644)));

    if (t117 != -153) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x1653 = -1;
	int16_t x1654 = 1;
	int32_t x1656 = INT32_MIN;
	volatile int32_t t118 = 181117716;

    t118 = (x1653-(x1654<<(x1655/x1656)));

    if (t118 != -2) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x1673 = UINT8_MAX;
	uint32_t x1674 = UINT32_MAX;
	uint16_t x1675 = UINT16_MAX;
	int64_t x1676 = INT64_MAX;
	static volatile uint32_t t119 = 12544419U;

    t119 = (x1673-(x1674<<(x1675/x1676)));

    if (t119 != 256U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x1697 = UINT64_MAX;
	volatile int32_t x1698 = INT32_MAX;
	volatile int8_t x1699 = INT8_MAX;
	volatile uint64_t x1700 = 18829484746992LLU;
	volatile uint64_t t120 = 584629454600377312LLU;

    t120 = (x1697-(x1698<<(x1699/x1700)));

    if (t120 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x1709 = INT8_MIN;
	int8_t x1710 = 0;
	uint32_t x1711 = 134537U;
	int16_t x1712 = -1;
	int32_t t121 = 1269210;

    t121 = (x1709-(x1710<<(x1711/x1712)));

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x1717 = UINT64_MAX;
	volatile uint64_t t122 = 24035909827LLU;

    t122 = (x1717-(x1718<<(x1719/x1720)));

    if (t122 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x1721 = 1;
	int8_t x1723 = INT8_MIN;
	uint64_t x1724 = UINT64_MAX;
	uint32_t t123 = 6U;

    t123 = (x1721-(x1722<<(x1723/x1724)));

    if (t123 != 4294959995U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x1729 = 12U;
	uint16_t x1730 = UINT16_MAX;
	static int16_t x1731 = -1;
	static int16_t x1732 = -1;
	volatile int32_t t124 = -1;

    t124 = (x1729-(x1730<<(x1731/x1732)));

    if (t124 != -131058) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x1734 = INT64_MAX;
	volatile int32_t x1735 = -1585342;
	static volatile int64_t x1736 = INT64_MIN;
	volatile int64_t t125 = INT64_MIN;

    t125 = (x1733-(x1734<<(x1735/x1736)));

    if (t125 != INT64_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x1745 = INT64_MAX;
	int64_t x1746 = INT64_MAX;
	uint8_t x1748 = 81U;
	int64_t t126 = 6250956754485LL;

    t126 = (x1745-(x1746<<(x1747/x1748)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x1773 = INT16_MAX;
	int16_t x1774 = INT16_MAX;
	static uint32_t x1775 = 74580217U;
	int32_t x1776 = 4629564;
	int32_t t127 = 285643137;

    t127 = (x1773-(x1774<<(x1775/x1776)));

    if (t127 != -2147385345) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x1809 = -1;
	int32_t x1810 = INT32_MAX;
	int16_t x1811 = -1;

    t128 = (x1809-(x1810<<(x1811/x1812)));

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x1818 = 33LL;
	volatile uint64_t x1820 = UINT64_MAX;
	int64_t t129 = -496LL;

    t129 = (x1817-(x1818<<(x1819/x1820)));

    if (t129 != 65502LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x1826 = 23U;
	static uint16_t x1827 = 11986U;
	uint32_t x1828 = UINT32_MAX;
	volatile int64_t t130 = -1LL;

    t130 = (x1825-(x1826<<(x1827/x1828)));

    if (t130 != -24LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint8_t x1837 = UINT8_MAX;
	static int16_t x1838 = 41;
	int16_t x1839 = -1;
	int16_t x1840 = INT16_MIN;

    t131 = (x1837-(x1838<<(x1839/x1840)));

    if (t131 != 214) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x1841 = INT8_MIN;
	uint32_t x1842 = UINT32_MAX;
	int64_t x1843 = -3067107777072129LL;
	int64_t x1844 = INT64_MIN;
	static uint32_t t132 = 5074U;

    t132 = (x1841-(x1842<<(x1843/x1844)));

    if (t132 != 4294967169U) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x1849 = 709478205U;
	uint16_t x1850 = 1U;
	uint32_t t133 = 575841U;

    t133 = (x1849-(x1850<<(x1851/x1852)));

    if (t133 != 709478204U) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x1861 = UINT32_MAX;
	int8_t x1862 = 1;
	volatile uint64_t x1864 = UINT64_MAX;
	static volatile uint32_t t134 = 41344146U;

    t134 = (x1861-(x1862<<(x1863/x1864)));

    if (t134 != 4294967294U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x1873 = -1LL;
	static volatile uint64_t x1874 = 96571785996LLU;
	volatile uint8_t x1875 = UINT8_MAX;
	uint32_t x1876 = UINT32_MAX;
	uint64_t t135 = 481763115943LLU;

    t135 = (x1873-(x1874<<(x1875/x1876)));

    if (t135 != 18446743977137765619LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x1882 = INT32_MAX;
	int8_t x1883 = -1;
	volatile uint64_t t136 = 1762449789745627455LLU;

    t136 = (x1881-(x1882<<(x1883/x1884)));

    if (t136 != 18446744071563962606LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x1885 = 398651413U;
	static uint32_t x1886 = 185U;
	uint8_t x1887 = 91U;
	uint32_t t137 = 3144U;

    t137 = (x1885-(x1886<<(x1887/x1888)));

    if (t137 != 398651228U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x1891 = 0;
	int8_t x1892 = INT8_MIN;
	static uint64_t t138 = 4474376LLU;

    t138 = (x1889-(x1890<<(x1891/x1892)));

    if (t138 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1893 = INT8_MIN;
	static uint32_t x1894 = UINT32_MAX;
	volatile uint8_t x1896 = UINT8_MAX;
	uint32_t t139 = 1945805U;

    t139 = (x1893-(x1894<<(x1895/x1896)));

    if (t139 != 4294967169U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x1901 = -1;
	static uint16_t x1902 = UINT16_MAX;
	uint32_t x1903 = 7U;
	int64_t x1904 = INT64_MAX;

    t140 = (x1901-(x1902<<(x1903/x1904)));

    if (t140 != -65536) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1917 = INT16_MAX;
	uint16_t x1918 = 268U;
	volatile int8_t x1919 = -1;
	volatile int16_t x1920 = INT16_MAX;
	volatile int32_t t141 = 110757737;

    t141 = (x1917-(x1918<<(x1919/x1920)));

    if (t141 != 32499) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x1929 = INT16_MAX;
	uint8_t x1930 = 77U;
	int32_t x1931 = -1;
	static int32_t t142 = -124;

    t142 = (x1929-(x1930<<(x1931/x1932)));

    if (t142 != 32690) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x1933 = INT8_MIN;
	uint16_t x1934 = UINT16_MAX;
	int8_t x1935 = 22;
	uint16_t x1936 = UINT16_MAX;
	static int32_t t143 = 1874486;

    t143 = (x1933-(x1934<<(x1935/x1936)));

    if (t143 != -65663) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1961 = UINT8_MAX;
	uint32_t x1962 = 486U;
	int8_t x1963 = 1;
	int32_t x1964 = INT32_MIN;
	uint32_t t144 = 85921U;

    t144 = (x1961-(x1962<<(x1963/x1964)));

    if (t144 != 4294967065U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x1973 = INT8_MAX;
	uint8_t x1974 = UINT8_MAX;
	volatile uint16_t x1975 = UINT16_MAX;
	static volatile uint32_t x1976 = 2312679U;
	volatile int32_t t145 = -2219817;

    t145 = (x1973-(x1974<<(x1975/x1976)));

    if (t145 != -128) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1977 = UINT16_MAX;
	volatile uint16_t x1980 = 3639U;
	uint64_t t146 = 83470282676652LLU;

    t146 = (x1977-(x1978<<(x1979/x1980)));

    if (t146 != 5337835775344312319LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1981 = UINT16_MAX;
	static volatile uint8_t x1982 = 6U;
	int32_t x1983 = 82;
	volatile int8_t x1984 = INT8_MIN;
	int32_t t147 = 2862040;

    t147 = (x1981-(x1982<<(x1983/x1984)));

    if (t147 != 65529) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x1985 = UINT16_MAX;
	int8_t x1986 = 20;
	uint32_t x1987 = 8245U;
	int8_t x1988 = INT8_MIN;
	int32_t t148 = 82378327;

    t148 = (x1985-(x1986<<(x1987/x1988)));

    if (t148 != 65515) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x1989 = 326457939298254LL;
	static uint64_t x1990 = 5656160580214198761LLU;
	uint8_t x1991 = UINT8_MAX;
	uint64_t t149 = 82070224146LLU;

    t149 = (x1989-(x1990<<(x1991/x1992)));

    if (t149 != 12790909951434651109LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x1993 = 5806U;
	int16_t x1994 = 63;
	int32_t x1996 = INT32_MAX;
	static int32_t t150 = 511206;

    t150 = (x1993-(x1994<<(x1995/x1996)));

    if (t150 != 5743) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x2005 = -1;
	static int8_t x2006 = 0;
	int16_t x2007 = 2;

    t151 = (x2005-(x2006<<(x2007/x2008)));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x2025 = -1LL;
	uint8_t x2026 = UINT8_MAX;
	int16_t x2027 = -1;
	static volatile int64_t t152 = -67259649671298LL;

    t152 = (x2025-(x2026<<(x2027/x2028)));

    if (t152 != -256LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x2037 = -42;
	static uint64_t x2038 = 58421985750033LLU;

    t153 = (x2037-(x2038<<(x2039/x2040)));

    if (t153 != 18446685651723801541LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x2053 = UINT64_MAX;
	uint32_t x2054 = 261242U;
	int8_t x2055 = INT8_MAX;
	volatile uint64_t t154 = 7LLU;

    t154 = (x2053-(x2054<<(x2055/x2056)));

    if (t154 != 18446744073709290373LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x2077 = INT8_MIN;
	volatile int64_t x2078 = 93LL;
	uint8_t x2079 = UINT8_MAX;
	uint8_t x2080 = 7U;
	volatile int64_t t155 = -15687971916LL;

    t155 = (x2077-(x2078<<(x2079/x2080)));

    if (t155 != -6390911336576LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x2090 = INT32_MAX;
	uint32_t x2091 = 50845984U;
	static uint32_t x2092 = UINT32_MAX;
	volatile uint64_t t156 = 64LLU;

    t156 = (x2089-(x2090<<(x2091/x2092)));

    if (t156 != 2021285172553095LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x2101 = 15565U;
	uint32_t x2102 = UINT32_MAX;
	uint8_t x2103 = UINT8_MAX;
	static uint64_t x2104 = UINT64_MAX;

    t157 = (x2101-(x2102<<(x2103/x2104)));

    if (t157 != 15566U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x2125 = UINT8_MAX;
	int64_t x2126 = INT64_MAX;
	static volatile int16_t x2127 = -1;
	static volatile int32_t x2128 = INT32_MIN;

    t158 = (x2125-(x2126<<(x2127/x2128)));

    if (t158 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x2155 = 30LL;
	volatile uint64_t t159 = 0LLU;

    t159 = (x2153-(x2154<<(x2155/x2156)));

    if (t159 != 5LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint32_t x2166 = 6U;
	int64_t x2168 = INT64_MIN;

    t160 = (x2165-(x2166<<(x2167/x2168)));

    if (t160 != 4294934522U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x2169 = -33;
	uint16_t x2170 = 2272U;
	static uint64_t x2171 = UINT64_MAX;
	int64_t x2172 = INT64_MAX;

    t161 = (x2169-(x2170<<(x2171/x2172)));

    if (t161 != -9121) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x2181 = -1;
	int32_t x2182 = 163;
	uint64_t x2183 = 3307LLU;
	int32_t x2184 = -1;

    t162 = (x2181-(x2182<<(x2183/x2184)));

    if (t162 != -164) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x2201 = 2U;
	volatile uint64_t x2202 = UINT64_MAX;
	int8_t x2203 = INT8_MAX;
	volatile uint64_t x2204 = 4LLU;
	uint64_t t163 = 20765245678953368LLU;

    t163 = (x2201-(x2202<<(x2203/x2204)));

    if (t163 != 2147483650LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x2209 = -1;
	uint32_t x2210 = 3647438U;
	int64_t x2211 = INT64_MIN;
	volatile int64_t x2212 = INT64_MIN;
	uint32_t t164 = 52191U;

    t164 = (x2209-(x2210<<(x2211/x2212)));

    if (t164 != 4287672419U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x2221 = -4577;
	volatile uint64_t x2222 = 600281654639LLU;
	uint8_t x2223 = UINT8_MAX;
	static int32_t x2224 = INT32_MIN;

    t165 = (x2221-(x2222<<(x2223/x2224)));

    if (t165 != 18446743473427892400LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x2237 = 1582U;
	uint8_t x2239 = 3U;
	static int16_t x2240 = INT16_MAX;
	static int32_t t166 = 839028748;

    t166 = (x2237-(x2238<<(x2239/x2240)));

    if (t166 != -495734999) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x2258 = UINT16_MAX;
	uint8_t x2259 = 25U;
	volatile uint32_t t167 = 1213636U;

    t167 = (x2257-(x2258<<(x2259/x2260)));

    if (t167 != 4294901760U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x2274 = 3551;
	static uint32_t x2275 = 6U;
	volatile int32_t x2276 = -1;
	volatile uint64_t t168 = 5324169429957LLU;

    t168 = (x2273-(x2274<<(x2275/x2276)));

    if (t168 != 1696487543391LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x2305 = UINT32_MAX;
	int8_t x2306 = INT8_MAX;
	static int8_t x2307 = INT8_MIN;
	int32_t x2308 = 284430;
	volatile uint32_t t169 = 4889263U;

    t169 = (x2305-(x2306<<(x2307/x2308)));

    if (t169 != 4294967168U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x2315 = 0U;
	volatile int32_t x2316 = INT32_MIN;
	static int32_t t170 = -7862;

    t170 = (x2313-(x2314<<(x2315/x2316)));

    if (t170 != -2) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x2329 = 1413;
	int32_t x2330 = 7440;
	int16_t x2331 = -1;
	int16_t x2332 = 709;
	int32_t t171 = -42297;

    t171 = (x2329-(x2330<<(x2331/x2332)));

    if (t171 != -6027) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x2338 = 9U;
	int32_t t172 = 164095;

    t172 = (x2337-(x2338<<(x2339/x2340)));

    if (t172 != -137) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x2345 = 62;
	int64_t x2346 = 10646074442LL;
	int8_t x2347 = 0;
	volatile int16_t x2348 = INT16_MAX;
	int64_t t173 = 33182818LL;

    t173 = (x2345-(x2346<<(x2347/x2348)));

    if (t173 != -10646074380LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x2377 = UINT16_MAX;
	static volatile int16_t x2378 = 78;
	int32_t x2379 = -59;
	static volatile int16_t x2380 = INT16_MIN;
	int32_t t174 = 106559130;

    t174 = (x2377-(x2378<<(x2379/x2380)));

    if (t174 != 65457) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x2401 = INT64_MAX;
	int32_t x2402 = 72787529;
	volatile int64_t t175 = 525599512LL;

    t175 = (x2401-(x2402<<(x2403/x2404)));

    if (t175 != 9223372036781988278LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x2429 = INT16_MIN;
	uint32_t x2430 = 245409382U;
	static volatile uint8_t x2431 = 43U;
	volatile int8_t x2432 = INT8_MIN;
	volatile uint32_t t176 = 16534235U;

    t176 = (x2429-(x2430<<(x2431/x2432)));

    if (t176 != 4049525146U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x2449 = INT8_MIN;
	int16_t x2451 = -3497;
	int64_t x2452 = 373961347LL;
	int32_t t177 = 6;

    t177 = (x2449-(x2450<<(x2451/x2452)));

    if (t177 != -32895) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x2477 = INT8_MAX;
	int16_t x2478 = 6522;
	int32_t x2479 = -1;
	uint16_t x2480 = 118U;
	volatile int32_t t178 = 336943;

    t178 = (x2477-(x2478<<(x2479/x2480)));

    if (t178 != -6395) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x2482 = 1768U;
	int16_t x2483 = 24;
	volatile int64_t x2484 = -1616471594725LL;
	volatile uint32_t t179 = 972U;

    t179 = (x2481-(x2482<<(x2483/x2484)));

    if (t179 != 4294965527U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x2485 = INT8_MIN;
	volatile uint32_t x2486 = 304U;
	int8_t x2487 = INT8_MIN;
	int16_t x2488 = -7;
	uint32_t t180 = 7985823U;

    t180 = (x2485-(x2486<<(x2487/x2488)));

    if (t180 != 4215275392U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x2489 = 389400U;
	int8_t x2490 = 28;
	uint32_t x2491 = 5U;
	int16_t x2492 = INT16_MIN;
	uint32_t t181 = 31U;

    t181 = (x2489-(x2490<<(x2491/x2492)));

    if (t181 != 389372U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x2493 = 31LL;
	int8_t x2494 = 10;
	uint32_t x2495 = 1962759423U;
	int32_t x2496 = INT32_MIN;
	int64_t t182 = 61350182350LL;

    t182 = (x2493-(x2494<<(x2495/x2496)));

    if (t182 != 21LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x2513 = INT64_MAX;
	int16_t x2514 = INT16_MAX;
	int16_t x2515 = INT16_MAX;
	static volatile int64_t t183 = 467974219238LL;

    t183 = (x2513-(x2514<<(x2515/x2516)));

    if (t183 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x2521 = INT8_MIN;
	volatile int16_t x2524 = INT16_MIN;
	int32_t t184 = -53;

    t184 = (x2521-(x2522<<(x2523/x2524)));

    if (t184 != -65663) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x2537 = UINT32_MAX;
	int64_t x2538 = INT64_MAX;
	int32_t x2539 = -41397891;
	int32_t x2540 = 142072959;
	int64_t t185 = 1118LL;

    t185 = (x2537-(x2538<<(x2539/x2540)));

    if (t185 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x2545 = INT16_MAX;
	volatile uint8_t x2546 = 5U;
	static int8_t x2547 = 1;
	volatile uint16_t x2548 = 273U;

    t186 = (x2545-(x2546<<(x2547/x2548)));

    if (t186 != 32762) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x2549 = INT32_MIN;
	int64_t x2550 = 707358527LL;
	int8_t x2551 = 18;
	int64_t x2552 = INT64_MIN;

    t187 = (x2549-(x2550<<(x2551/x2552)));

    if (t187 != -2854842175LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x2573 = 9;
	volatile int8_t x2575 = -59;
	uint32_t t188 = 126U;

    t188 = (x2573-(x2574<<(x2575/x2576)));

    if (t188 != 4259905222U) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint64_t x2597 = 290LLU;
	static int32_t x2598 = INT32_MAX;
	uint8_t x2599 = UINT8_MAX;
	uint16_t x2600 = 17264U;
	uint64_t t189 = 80LLU;

    t189 = (x2597-(x2598<<(x2599/x2600)));

    if (t189 != 18446744071562068259LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x2601 = 1045696963U;
	static uint64_t x2602 = 204LLU;
	volatile uint32_t x2604 = UINT32_MAX;

    t190 = (x2601-(x2602<<(x2603/x2604)));

    if (t190 != 1045696555LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x2605 = 830;
	volatile uint16_t x2607 = 3U;

    t191 = (x2605-(x2606<<(x2607/x2608)));

    if (t191 != -2147482817) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint64_t x2613 = 1135LLU;
	volatile int16_t x2614 = INT16_MAX;
	uint32_t x2615 = UINT32_MAX;
	volatile uint64_t t192 = 2684LLU;

    t192 = (x2613-(x2614<<(x2615/x2616)));

    if (t192 != 18446744073709487217LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x2621 = 15;
	uint8_t x2622 = 31U;
	uint32_t x2623 = 6U;
	uint16_t x2624 = 4U;
	static volatile int32_t t193 = -5517729;

    t193 = (x2621-(x2622<<(x2623/x2624)));

    if (t193 != -47) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x2677 = INT16_MAX;
	int8_t x2678 = 25;
	volatile int64_t x2679 = INT64_MAX;
	int64_t x2680 = INT64_MIN;
	volatile int32_t t194 = 1042031;

    t194 = (x2677-(x2678<<(x2679/x2680)));

    if (t194 != 32742) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x2682 = 1;
	int32_t x2683 = INT32_MIN;
	static volatile uint32_t t195 = 3U;

    t195 = (x2681-(x2682<<(x2683/x2684)));

    if (t195 != 9U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x2685 = INT64_MAX;
	volatile int32_t x2686 = 450773;
	uint32_t x2688 = UINT32_MAX;

    t196 = (x2685-(x2686<<(x2687/x2688)));

    if (t196 != 9223372036854325034LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x2697 = 611U;
	int8_t x2698 = INT8_MAX;
	uint16_t x2699 = UINT16_MAX;
	int32_t t197 = 398161302;

    t197 = (x2697-(x2698<<(x2699/x2700)));

    if (t197 != 484) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x2701 = 33;
	uint16_t x2702 = UINT16_MAX;
	int16_t x2703 = 81;
	volatile uint8_t x2704 = UINT8_MAX;
	volatile int32_t t198 = 87711;

    t198 = (x2701-(x2702<<(x2703/x2704)));

    if (t198 != -65502) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x2717 = UINT8_MAX;
	volatile uint32_t x2719 = 473966U;
	int16_t x2720 = INT16_MIN;

    t199 = (x2717-(x2718<<(x2719/x2720)));

    if (t199 != 226) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

