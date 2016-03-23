
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

uint8_t x31 = 3U;
uint8_t x126 = 9U;
volatile uint32_t x128 = UINT32_MAX;
uint8_t x243 = 13U;
volatile int32_t x341 = -1;
uint32_t x342 = 5U;
int32_t x343 = INT32_MAX;
uint64_t t12 = 4294570004866588012LLU;
static volatile uint8_t x879 = 6U;
int32_t t15 = 25508;
volatile uint64_t t16 = 109218326419726LLU;
uint8_t x1221 = 6U;
static volatile uint8_t x1430 = UINT8_MAX;
static int16_t x1431 = INT16_MIN;
int32_t t21 = 12102;
static int16_t x1565 = INT16_MIN;
volatile int32_t t22 = -11419127;
int64_t x1597 = INT64_MAX;
int64_t t23 = 3067489562LL;
uint16_t x1697 = 985U;
int64_t t24 = -10148127789498LL;
int16_t x1757 = INT16_MIN;
uint16_t x1759 = 60U;
static int8_t x1827 = 26;
volatile uint64_t t27 = 2030153296086226LLU;
int32_t x1929 = -7511;
int8_t x1930 = INT8_MAX;
int64_t x1977 = INT64_MAX;
int32_t x1997 = -1;
volatile int8_t x2000 = -1;
volatile int64_t t32 = 95107447603418LL;
uint32_t t33 = 1419741U;
static int32_t x2243 = INT32_MIN;
int32_t x2244 = INT32_MIN;
int64_t x3025 = INT64_MIN;
int8_t x3125 = -8;
uint16_t x3126 = 3448U;
static uint32_t x3165 = 501U;
volatile uint64_t t43 = 66760030LLU;
uint64_t x3221 = 186620643850288246LLU;
volatile uint64_t t44 = 3777992505LLU;
int16_t x3681 = INT16_MAX;
int32_t x3682 = INT32_MAX;
int8_t x3684 = -1;
int32_t t48 = -6;
uint16_t x3737 = UINT16_MAX;
int16_t x3799 = 0;
uint64_t x3818 = 30667468603829LLU;
volatile int8_t x3938 = 0;
volatile int32_t x4038 = 116;
int16_t x4040 = -1;
static int32_t x4053 = INT32_MIN;
uint64_t x4056 = UINT64_MAX;
uint8_t x4082 = 1U;
int32_t x4083 = -1;
int32_t t56 = 13188926;
int16_t x4113 = INT16_MAX;
uint8_t x4114 = 23U;
int8_t x4115 = 1;
volatile int8_t x4255 = -1;
volatile int16_t x4256 = -2;
int8_t x4321 = 3;
static volatile uint64_t x4324 = UINT64_MAX;
int32_t t60 = 32265910;
int16_t x4369 = INT16_MIN;
static uint64_t x4372 = UINT64_MAX;
static uint16_t x4470 = UINT16_MAX;
uint32_t x4509 = UINT32_MAX;
static volatile uint16_t x4512 = UINT16_MAX;
volatile int32_t t66 = -312;
int16_t x4777 = -1;
static int32_t x4843 = -1;
uint32_t x4930 = UINT32_MAX;
int8_t x4931 = 10;
int32_t x5201 = INT32_MIN;
int16_t x5276 = -1;
uint64_t t74 = 111115991567981LLU;
volatile int32_t x5365 = -54189123;
uint32_t x5368 = UINT32_MAX;
volatile int8_t x5439 = -1;
uint64_t x5548 = UINT64_MAX;
static volatile int32_t x6003 = 0;
uint32_t x6004 = UINT32_MAX;
uint64_t t80 = 27LLU;
static uint64_t x6092 = UINT64_MAX;
int64_t x6173 = INT64_MIN;
volatile int64_t t83 = -1096373986219LL;
static int16_t x6305 = INT16_MIN;
volatile uint64_t x6382 = 502LLU;
volatile int16_t x6577 = -1;
int8_t x6578 = INT8_MAX;
volatile int8_t x6633 = INT8_MIN;
int8_t x6635 = 2;
uint8_t x6643 = 3U;
uint16_t x6675 = 15U;
volatile uint16_t x6717 = 4U;
uint32_t x6718 = 416925904U;
int8_t x6839 = INT8_MIN;
volatile int8_t x6865 = 0;
volatile int32_t x6868 = INT32_MAX;
int64_t x6890 = INT64_MAX;
volatile int32_t x7008 = -1;
volatile uint64_t x7048 = UINT64_MAX;
int16_t x7200 = INT16_MIN;
int8_t x7276 = -1;
static int16_t x7321 = -13;
int32_t x7322 = 28953;
uint8_t x7323 = 17U;
int32_t x7334 = INT32_MAX;
int32_t x7385 = -1;
uint32_t x7466 = 0U;
uint8_t x7710 = 9U;
static volatile int16_t x7721 = INT16_MIN;
int64_t x7723 = -1LL;
volatile uint64_t t108 = 2145223LLU;
uint64_t x7806 = UINT64_MAX;
static int32_t x7973 = INT32_MAX;
uint8_t x7974 = 55U;
uint8_t x8130 = UINT8_MAX;
static int64_t x8131 = -1LL;
volatile int32_t t111 = -24368091;
static int64_t x8175 = INT64_MIN;
static int64_t x8176 = INT64_MIN;
uint8_t x8214 = 19U;
volatile uint8_t x8272 = UINT8_MAX;
volatile uint64_t t116 = 16884LLU;
volatile uint16_t x8473 = 4U;
static int32_t x8476 = -1;
int32_t x8682 = 3;
int32_t x8684 = -1;
int8_t x8762 = INT8_MAX;
int64_t x8795 = -1LL;
uint64_t t122 = 16130381540076576LLU;
volatile int16_t x9148 = -38;
uint64_t x9185 = UINT64_MAX;
int32_t x9186 = 309;
int32_t x9187 = -1;
static uint64_t t124 = 40056222LLU;
volatile uint64_t x9320 = UINT64_MAX;
int64_t x9362 = INT64_MAX;
int32_t x9363 = -1;
uint64_t x9458 = UINT64_MAX;
int8_t x9460 = INT8_MAX;
static volatile uint64_t t130 = 73746679006389LLU;
volatile uint32_t x9821 = 639284493U;
static volatile uint64_t t134 = 276855LLU;
int8_t x9835 = -1;
volatile uint32_t x9946 = UINT32_MAX;
int32_t x10034 = 5346440;
uint16_t x10042 = 5139U;
uint64_t x10050 = 58048LLU;
volatile uint8_t x10051 = 4U;
int8_t x10052 = 0;
volatile int8_t x10168 = INT8_MIN;
uint16_t x10213 = 1U;
int8_t x10216 = 0;
int16_t x10553 = INT16_MIN;
uint16_t x10554 = UINT16_MAX;
int16_t x10556 = -1;
int32_t t148 = -508;
int32_t x10587 = -1;
static volatile int32_t x10637 = INT32_MAX;
uint64_t x10638 = 249853216LLU;
int16_t x10645 = INT16_MIN;
uint8_t x10941 = 3U;
int8_t x11030 = 43;
volatile uint16_t x11239 = 22U;
volatile int32_t t156 = 1;
int16_t x11288 = -1;
volatile int32_t t158 = 0;
uint16_t x11381 = 13U;
int32_t x11382 = INT32_MAX;
volatile uint16_t x11482 = 19371U;
int32_t x11697 = INT32_MAX;
int64_t x11700 = -1LL;
int16_t x11753 = -1;
int64_t x11768 = -1LL;
uint8_t x11782 = 1U;
int8_t x12201 = INT8_MIN;
int32_t t173 = -59611;
static int16_t x12344 = -1;
int32_t x12357 = -1;
volatile int8_t x12358 = 1;
uint64_t x12360 = UINT64_MAX;
static int8_t x12376 = -13;
int8_t x12544 = -1;
int16_t x12552 = -25;
uint64_t t179 = 197133249483826726LLU;
int64_t x12852 = INT64_MIN;
volatile uint64_t t183 = 1LLU;
uint16_t x13102 = 6U;
uint64_t x13166 = 29960531178LLU;
int32_t x13167 = INT32_MIN;
int32_t x13248 = -1;
int16_t x13423 = INT16_MIN;
int16_t x13532 = -1;
uint16_t x13614 = 3U;
int32_t x13615 = -1;
uint64_t t193 = 90601LLU;
int16_t x13761 = -1;
int8_t x13797 = INT8_MIN;
uint32_t x13798 = 490U;
volatile uint32_t t195 = 15218568U;
static uint16_t x13826 = 0U;
uint8_t x13827 = 46U;
uint32_t t196 = 5967545U;
static int16_t x13842 = INT16_MAX;
uint64_t x13849 = UINT64_MAX;
volatile int64_t t199 = 3LL;


void f0(void) {
    	int64_t x29 = -1LL;
	int8_t x30 = INT8_MAX;
	uint64_t x32 = UINT64_MAX;
	volatile int64_t t0 = -476421LL;

    t0 = (x29^(x30>>(x31-x32)));

    if (t0 != -8LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x65 = -13;
	int64_t x66 = INT64_MAX;
	uint16_t x67 = 30U;
	volatile int32_t x68 = 0;
	volatile int64_t t1 = -5827709096446684LL;

    t1 = (x65^(x66>>(x67-x68)));

    if (t1 != -8589934580LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x109 = INT8_MAX;
	int32_t x110 = INT32_MAX;
	int8_t x111 = -1;
	static int16_t x112 = -24;
	int32_t t2 = 0;

    t2 = (x109^(x110>>(x111-x112)));

    if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x125 = INT16_MAX;
	int32_t x127 = -1;
	volatile int32_t t3 = 9144544;

    t3 = (x125^(x126>>(x127-x128)));

    if (t3 != 32758) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x233 = 63125U;
	volatile int64_t x234 = INT64_MAX;
	static volatile uint8_t x235 = 48U;
	int8_t x236 = -1;
	static int64_t t4 = 100732768966736330LL;

    t4 = (x233^(x234>>(x235-x236)));

    if (t4 != 51562LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x241 = INT8_MIN;
	uint8_t x242 = UINT8_MAX;
	int64_t x244 = -1LL;
	int32_t t5 = -371508488;

    t5 = (x241^(x242>>(x243-x244)));

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x344 = INT32_MAX;
	uint32_t t6 = 791U;

    t6 = (x341^(x342>>(x343-x344)));

    if (t6 != 4294967290U) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x357 = 7U;
	static volatile uint8_t x358 = 2U;
	int32_t x359 = -1;
	volatile uint32_t x360 = UINT32_MAX;
	int32_t t7 = 365189284;

    t7 = (x357^(x358>>(x359-x360)));

    if (t7 != 5) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x433 = UINT16_MAX;
	uint16_t x434 = UINT16_MAX;
	int8_t x435 = 1;
	uint16_t x436 = 1U;
	volatile int32_t t8 = -1099;

    t8 = (x433^(x434>>(x435-x436)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x449 = -90825344756LL;
	uint16_t x450 = UINT16_MAX;
	uint8_t x451 = 0U;
	static uint32_t x452 = UINT32_MAX;
	int64_t t9 = -161698468489LL;

    t9 = (x449^(x450>>(x451-x452)));

    if (t9 != -90825341197LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x561 = -495;
	static int64_t x562 = 13733LL;
	uint8_t x563 = 89U;
	uint8_t x564 = 38U;
	volatile int64_t t10 = 1LL;

    t10 = (x561^(x562>>(x563-x564)));

    if (t10 != -495LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x629 = INT32_MIN;
	volatile uint8_t x630 = UINT8_MAX;
	int32_t x631 = -1;
	uint32_t x632 = UINT32_MAX;
	int32_t t11 = 106662;

    t11 = (x629^(x630>>(x631-x632)));

    if (t11 != -2147483393) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x717 = 5U;
	static volatile uint64_t x718 = 19012588761063LLU;
	volatile uint8_t x719 = 41U;
	volatile int8_t x720 = -1;

    t12 = (x717^(x718>>(x719-x720)));

    if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x757 = 1U;
	static uint16_t x758 = UINT16_MAX;
	int8_t x759 = 26;
	int64_t x760 = -1LL;
	int32_t t13 = -3;

    t13 = (x757^(x758>>(x759-x760)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x877 = -1LL;
	int32_t x878 = 1;
	volatile int16_t x880 = -1;
	volatile int64_t t14 = 626879700347LL;

    t14 = (x877^(x878>>(x879-x880)));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x1173 = INT32_MAX;
	static volatile int16_t x1174 = INT16_MAX;
	int32_t x1175 = -1;
	int8_t x1176 = -1;

    t15 = (x1173^(x1174>>(x1175-x1176)));

    if (t15 != 2147450880) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x1217 = -1LL;
	static volatile uint64_t x1218 = 230012778LLU;
	int64_t x1219 = INT64_MAX;
	int64_t x1220 = INT64_MAX;

    t16 = (x1217^(x1218>>(x1219-x1220)));

    if (t16 != 18446744073479538837LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x1222 = UINT16_MAX;
	static int16_t x1223 = 1;
	int64_t x1224 = -1LL;
	volatile int32_t t17 = -370;

    t17 = (x1221^(x1222>>(x1223-x1224)));

    if (t17 != 16377) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x1257 = 0;
	volatile uint8_t x1258 = 0U;
	uint16_t x1259 = 1U;
	int32_t x1260 = -1;
	int32_t t18 = 65;

    t18 = (x1257^(x1258>>(x1259-x1260)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x1261 = INT8_MIN;
	uint8_t x1262 = 1U;
	uint32_t x1263 = 25U;
	volatile int16_t x1264 = 1;
	static int32_t t19 = -153168885;

    t19 = (x1261^(x1262>>(x1263-x1264)));

    if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x1365 = INT16_MIN;
	uint32_t x1366 = 1021419U;
	uint8_t x1367 = 25U;
	uint8_t x1368 = 2U;
	volatile uint32_t t20 = 68439U;

    t20 = (x1365^(x1366>>(x1367-x1368)));

    if (t20 != 4294934528U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x1429 = INT16_MIN;
	int16_t x1432 = INT16_MIN;

    t21 = (x1429^(x1430>>(x1431-x1432)));

    if (t21 != -32513) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x1566 = UINT16_MAX;
	uint8_t x1567 = 1U;
	static int8_t x1568 = -1;

    t22 = (x1565^(x1566>>(x1567-x1568)));

    if (t22 != -16385) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x1598 = UINT32_MAX;
	static volatile uint64_t x1599 = 7LLU;
	uint64_t x1600 = UINT64_MAX;

    t23 = (x1597^(x1598>>(x1599-x1600)));

    if (t23 != 9223372036837998592LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x1698 = 2033548803LL;
	static volatile int32_t x1699 = -1;
	uint32_t x1700 = UINT32_MAX;

    t24 = (x1697^(x1698>>(x1699-x1700)));

    if (t24 != 2033548762LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x1758 = 63858985LLU;
	uint32_t x1760 = UINT32_MAX;
	uint64_t t25 = 43659528LLU;

    t25 = (x1757^(x1758>>(x1759-x1760)));

    if (t25 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x1773 = INT64_MIN;
	uint32_t x1774 = 1807547U;
	uint32_t x1775 = UINT32_MAX;
	int8_t x1776 = -2;
	int64_t t26 = 5LL;

    t26 = (x1773^(x1774>>(x1775-x1776)));

    if (t26 != -9223372036853872035LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x1825 = INT32_MIN;
	uint64_t x1826 = 2240576839891151LLU;
	volatile int8_t x1828 = -1;

    t27 = (x1825^(x1826>>(x1827-x1828)));

    if (t27 != 18446744071578761566LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x1931 = INT64_MIN;
	int64_t x1932 = INT64_MIN;
	volatile int32_t t28 = 514490;

    t28 = (x1929^(x1930>>(x1931-x1932)));

    if (t28 != -7466) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x1978 = 837728LL;
	static uint8_t x1979 = 56U;
	int8_t x1980 = 1;
	static volatile int64_t t29 = INT64_MAX;

    t29 = (x1977^(x1978>>(x1979-x1980)));

    if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1998 = 28LL;
	int8_t x1999 = 6;
	int64_t t30 = -3697LL;

    t30 = (x1997^(x1998>>(x1999-x2000)));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x2041 = INT32_MAX;
	uint32_t x2042 = 228222241U;
	static volatile uint64_t x2043 = 1LLU;
	int64_t x2044 = -1LL;
	uint32_t t31 = 870544178U;

    t31 = (x2041^(x2042>>(x2043-x2044)));

    if (t31 != 2090428087U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x2085 = -1;
	int64_t x2086 = INT64_MAX;
	uint8_t x2087 = 7U;
	int8_t x2088 = -35;

    t32 = (x2085^(x2086>>(x2087-x2088)));

    if (t32 != -2097152LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x2185 = INT16_MAX;
	uint32_t x2186 = 170177U;
	volatile uint64_t x2187 = UINT64_MAX;
	static int16_t x2188 = -1;

    t33 = (x2185^(x2186>>(x2187-x2188)));

    if (t33 != 190270U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x2241 = 34U;
	int64_t x2242 = 783735107869227LL;
	static volatile int64_t t34 = 177257LL;

    t34 = (x2241^(x2242>>(x2243-x2244)));

    if (t34 != 783735107869193LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x2273 = INT32_MIN;
	uint64_t x2274 = 0LLU;
	int64_t x2275 = -1LL;
	static int8_t x2276 = -42;
	volatile uint64_t t35 = 30001006994457LLU;

    t35 = (x2273^(x2274>>(x2275-x2276)));

    if (t35 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x2521 = -1;
	uint64_t x2522 = 3229053649LLU;
	int8_t x2523 = INT8_MIN;
	int8_t x2524 = INT8_MIN;
	volatile uint64_t t36 = 2351LLU;

    t36 = (x2521^(x2522>>(x2523-x2524)));

    if (t36 != 18446744070480497966LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x2597 = INT64_MIN;
	uint32_t x2598 = 57U;
	int8_t x2599 = 0;
	int16_t x2600 = -1;
	int64_t t37 = 119596203LL;

    t37 = (x2597^(x2598>>(x2599-x2600)));

    if (t37 != -9223372036854775780LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x2665 = -1;
	volatile uint16_t x2666 = 1289U;
	int64_t x2667 = -1LL;
	int32_t x2668 = -1;
	static volatile int32_t t38 = -12334;

    t38 = (x2665^(x2666>>(x2667-x2668)));

    if (t38 != -1290) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x2721 = INT32_MAX;
	volatile int64_t x2722 = 14041645112954LL;
	int8_t x2723 = 44;
	int32_t x2724 = -1;
	int64_t t39 = -1028708067015782146LL;

    t39 = (x2721^(x2722>>(x2723-x2724)));

    if (t39 != 2147483647LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x3026 = 377295489356LL;
	volatile int64_t x3027 = INT64_MIN;
	int64_t x3028 = INT64_MIN;
	int64_t t40 = 5645LL;

    t40 = (x3025^(x3026>>(x3027-x3028)));

    if (t40 != -9223371659559286452LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x3081 = 7;
	uint64_t x3082 = UINT64_MAX;
	int8_t x3083 = 3;
	uint32_t x3084 = UINT32_MAX;
	uint64_t t41 = 9479482LLU;

    t41 = (x3081^(x3082>>(x3083-x3084)));

    if (t41 != 1152921504606846968LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x3127 = 6U;
	int8_t x3128 = -1;
	int32_t t42 = 404152045;

    t42 = (x3125^(x3126>>(x3127-x3128)));

    if (t42 != -30) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x3166 = UINT64_MAX;
	int16_t x3167 = -1;
	volatile int16_t x3168 = -1;

    t43 = (x3165^(x3166>>(x3167-x3168)));

    if (t43 != 18446744073709551114LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x3222 = 901U;
	uint64_t x3223 = 1LLU;
	uint8_t x3224 = 0U;

    t44 = (x3221^(x3222>>(x3223-x3224)));

    if (t44 != 186620643850288564LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x3389 = INT64_MIN;
	int8_t x3390 = 14;
	int32_t x3391 = -1;
	int32_t x3392 = -1;
	int64_t t45 = 1945168845LL;

    t45 = (x3389^(x3390>>(x3391-x3392)));

    if (t45 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x3469 = 31972274899LL;
	static uint8_t x3470 = 7U;
	static uint16_t x3471 = 1U;
	static int32_t x3472 = -1;
	int64_t t46 = 1LL;

    t46 = (x3469^(x3470>>(x3471-x3472)));

    if (t46 != 31972274898LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x3589 = 1698616219U;
	uint8_t x3590 = UINT8_MAX;
	uint8_t x3591 = 1U;
	int32_t x3592 = -1;
	volatile uint32_t t47 = 197136U;

    t47 = (x3589^(x3590>>(x3591-x3592)));

    if (t47 != 1698616228U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x3683 = 0U;

    t48 = (x3681^(x3682>>(x3683-x3684)));

    if (t48 != 1073709056) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x3738 = 10921U;
	int16_t x3739 = 10;
	int16_t x3740 = -1;
	int32_t t49 = -18;

    t49 = (x3737^(x3738>>(x3739-x3740)));

    if (t49 != 65530) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x3797 = 7U;
	volatile uint16_t x3798 = UINT16_MAX;
	uint32_t x3800 = UINT32_MAX;
	int32_t t50 = 124;

    t50 = (x3797^(x3798>>(x3799-x3800)));

    if (t50 != 32760) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x3817 = INT16_MIN;
	int64_t x3819 = -1LL;
	uint64_t x3820 = UINT64_MAX;
	static uint64_t t51 = 3017982419LLU;

    t51 = (x3817^(x3818>>(x3819-x3820)));

    if (t51 != 18446713406240915893LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x3937 = INT32_MIN;
	uint64_t x3939 = UINT64_MAX;
	int8_t x3940 = -1;
	int32_t t52 = INT32_MIN;

    t52 = (x3937^(x3938>>(x3939-x3940)));

    if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x4033 = INT8_MIN;
	uint64_t x4034 = UINT64_MAX;
	uint64_t x4035 = UINT64_MAX;
	uint64_t x4036 = UINT64_MAX;
	uint64_t t53 = 1019469776LLU;

    t53 = (x4033^(x4034>>(x4035-x4036)));

    if (t53 != 127LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x4037 = UINT16_MAX;
	int16_t x4039 = 7;
	volatile int32_t t54 = 1259617;

    t54 = (x4037^(x4038>>(x4039-x4040)));

    if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x4054 = 43U;
	static uint64_t x4055 = UINT64_MAX;
	static int32_t t55 = 316537;

    t55 = (x4053^(x4054>>(x4055-x4056)));

    if (t55 != -2147483605) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x4081 = INT8_MIN;
	int16_t x4084 = -1;

    t56 = (x4081^(x4082>>(x4083-x4084)));

    if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x4116 = 0U;
	static volatile int32_t t57 = 1222;

    t57 = (x4113^(x4114>>(x4115-x4116)));

    if (t57 != 32756) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x4253 = -112LL;
	uint16_t x4254 = 79U;
	int64_t t58 = -1247591719031344012LL;

    t58 = (x4253^(x4254>>(x4255-x4256)));

    if (t58 != -73LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x4277 = UINT16_MAX;
	int16_t x4278 = 2176;
	static int32_t x4279 = -1;
	static volatile int32_t x4280 = -1;
	static volatile int32_t t59 = 140899156;

    t59 = (x4277^(x4278>>(x4279-x4280)));

    if (t59 != 63359) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x4322 = 6U;
	uint8_t x4323 = 12U;

    t60 = (x4321^(x4322>>(x4323-x4324)));

    if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x4370 = 6938377626081083271LLU;
	int8_t x4371 = 12;
	static uint64_t t61 = 3576847786665LLU;

    t61 = (x4369^(x4370>>(x4371-x4372)));

    if (t61 != 18445897103784493221LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x4429 = -5LL;
	static int8_t x4430 = INT8_MAX;
	uint16_t x4431 = 0U;
	uint32_t x4432 = UINT32_MAX;
	int64_t t62 = 425946745935180137LL;

    t62 = (x4429^(x4430>>(x4431-x4432)));

    if (t62 != -60LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x4469 = 1U;
	int64_t x4471 = -1LL;
	int16_t x4472 = -1;
	volatile int32_t t63 = 893126456;

    t63 = (x4469^(x4470>>(x4471-x4472)));

    if (t63 != 65534) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x4477 = 11167818U;
	static int64_t x4478 = INT64_MAX;
	static uint64_t x4479 = 7LLU;
	uint64_t x4480 = UINT64_MAX;
	volatile int64_t t64 = -25LL;

    t64 = (x4477^(x4478>>(x4479-x4480)));

    if (t64 != 36028797007796149LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x4510 = 960U;
	volatile uint16_t x4511 = UINT16_MAX;
	volatile uint32_t t65 = 773884202U;

    t65 = (x4509^(x4510>>(x4511-x4512)));

    if (t65 != 4294966335U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x4569 = 34U;
	volatile uint16_t x4570 = 4U;
	uint32_t x4571 = UINT32_MAX;
	int16_t x4572 = -1;

    t66 = (x4569^(x4570>>(x4571-x4572)));

    if (t66 != 38) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x4697 = 21313LLU;
	static uint8_t x4698 = 0U;
	volatile int16_t x4699 = -1;
	uint64_t x4700 = UINT64_MAX;
	uint64_t t67 = 15959426LLU;

    t67 = (x4697^(x4698>>(x4699-x4700)));

    if (t67 != 21313LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x4778 = 31U;
	uint16_t x4779 = 28U;
	int32_t x4780 = -1;
	volatile uint32_t t68 = UINT32_MAX;

    t68 = (x4777^(x4778>>(x4779-x4780)));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x4821 = INT16_MAX;
	int64_t x4822 = INT64_MAX;
	int32_t x4823 = -1;
	int64_t x4824 = -1LL;
	int64_t t69 = -695285674704136981LL;

    t69 = (x4821^(x4822>>(x4823-x4824)));

    if (t69 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x4841 = INT8_MAX;
	uint16_t x4842 = 68U;
	int8_t x4844 = -1;
	static int32_t t70 = 617859854;

    t70 = (x4841^(x4842>>(x4843-x4844)));

    if (t70 != 59) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x4929 = -5898087020997LL;
	static int8_t x4932 = 0;
	volatile int64_t t71 = 1630449702LL;

    t71 = (x4929^(x4930>>(x4931-x4932)));

    if (t71 != -5898086794812LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x5113 = UINT8_MAX;
	uint32_t x5114 = 668U;
	volatile int8_t x5115 = 1;
	int8_t x5116 = -1;
	volatile uint32_t t72 = 6U;

    t72 = (x5113^(x5114>>(x5115-x5116)));

    if (t72 != 88U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x5202 = 2303U;
	uint8_t x5203 = 15U;
	int32_t x5204 = 0;
	int32_t t73 = INT32_MIN;

    t73 = (x5201^(x5202>>(x5203-x5204)));

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x5273 = INT32_MAX;
	volatile uint64_t x5274 = 271338560LLU;
	int16_t x5275 = 34;

    t74 = (x5273^(x5274>>(x5275-x5276)));

    if (t74 != 2147483647LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x5366 = 262537215LL;
	uint8_t x5367 = 0U;
	int64_t t75 = 2815606506529790847LL;

    t75 = (x5365^(x5366>>(x5367-x5368)));

    if (t75 != -82322366LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x5437 = 82U;
	uint64_t x5438 = 21LLU;
	int16_t x5440 = -12;
	static volatile uint64_t t76 = 2LLU;

    t76 = (x5437^(x5438>>(x5439-x5440)));

    if (t76 != 82LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x5445 = INT32_MIN;
	volatile uint64_t x5446 = UINT64_MAX;
	static int8_t x5447 = -1;
	uint32_t x5448 = UINT32_MAX;
	static uint64_t t77 = 26873888683637697LLU;

    t77 = (x5445^(x5446>>(x5447-x5448)));

    if (t77 != 2147483647LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x5545 = INT8_MAX;
	uint32_t x5546 = 89282067U;
	int8_t x5547 = 1;
	uint32_t t78 = 1814071980U;

    t78 = (x5545^(x5546>>(x5547-x5548)));

    if (t78 != 22320635U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x5705 = 92873832LLU;
	int8_t x5706 = 0;
	int16_t x5707 = -1;
	int16_t x5708 = -1;
	volatile uint64_t t79 = 538116267847LLU;

    t79 = (x5705^(x5706>>(x5707-x5708)));

    if (t79 != 92873832LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x6001 = INT32_MIN;
	volatile uint64_t x6002 = UINT64_MAX;

    t80 = (x6001^(x6002>>(x6003-x6004)));

    if (t80 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x6025 = -1;
	uint64_t x6026 = 12473519LLU;
	uint16_t x6027 = 0U;
	uint64_t x6028 = UINT64_MAX;
	volatile uint64_t t81 = 21426253LLU;

    t81 = (x6025^(x6026>>(x6027-x6028)));

    if (t81 != 18446744073703314856LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x6089 = 0LL;
	uint8_t x6090 = 3U;
	int32_t x6091 = -1;
	volatile int64_t t82 = -13784317535435018LL;

    t82 = (x6089^(x6090>>(x6091-x6092)));

    if (t82 != 3LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x6174 = UINT16_MAX;
	int16_t x6175 = INT16_MIN;
	int16_t x6176 = INT16_MIN;

    t83 = (x6173^(x6174>>(x6175-x6176)));

    if (t83 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x6306 = INT32_MAX;
	int64_t x6307 = INT64_MIN;
	int64_t x6308 = INT64_MIN;
	static volatile int32_t t84 = 0;

    t84 = (x6305^(x6306>>(x6307-x6308)));

    if (t84 != -2147450881) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x6381 = UINT64_MAX;
	int8_t x6383 = 3;
	int8_t x6384 = -9;
	static uint64_t t85 = UINT64_MAX;

    t85 = (x6381^(x6382>>(x6383-x6384)));

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x6561 = INT64_MIN;
	volatile uint32_t x6562 = 16704413U;
	volatile int8_t x6563 = 0;
	volatile int8_t x6564 = -2;
	volatile int64_t t86 = -3LL;

    t86 = (x6561^(x6562>>(x6563-x6564)));

    if (t86 != -9223372036850599705LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x6579 = -1LL;
	volatile int16_t x6580 = -1;
	int32_t t87 = -68;

    t87 = (x6577^(x6578>>(x6579-x6580)));

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x6634 = INT32_MAX;
	int16_t x6636 = -1;
	volatile int32_t t88 = -911;

    t88 = (x6633^(x6634>>(x6635-x6636)));

    if (t88 != -268435329) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x6641 = UINT8_MAX;
	volatile int64_t x6642 = INT64_MAX;
	int16_t x6644 = -1;
	int64_t t89 = -261439843LL;

    t89 = (x6641^(x6642>>(x6643-x6644)));

    if (t89 != 576460752303423232LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x6673 = UINT64_MAX;
	uint16_t x6674 = 12145U;
	static volatile uint16_t x6676 = 0U;
	volatile uint64_t t90 = UINT64_MAX;

    t90 = (x6673^(x6674>>(x6675-x6676)));

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x6719 = -1LL;
	int32_t x6720 = -1;
	volatile uint32_t t91 = 292911980U;

    t91 = (x6717^(x6718>>(x6719-x6720)));

    if (t91 != 416925908U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x6837 = 541051952;
	uint8_t x6838 = 2U;
	volatile int8_t x6840 = INT8_MIN;
	volatile int32_t t92 = 2803799;

    t92 = (x6837^(x6838>>(x6839-x6840)));

    if (t92 != 541051954) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x6866 = 72U;
	int32_t x6867 = INT32_MAX;
	volatile uint32_t t93 = 2427U;

    t93 = (x6865^(x6866>>(x6867-x6868)));

    if (t93 != 72U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x6881 = -1;
	volatile uint8_t x6882 = 99U;
	int32_t x6883 = -1;
	int16_t x6884 = -1;
	volatile int32_t t94 = 19870;

    t94 = (x6881^(x6882>>(x6883-x6884)));

    if (t94 != -100) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x6889 = -1;
	int16_t x6891 = 17;
	static int16_t x6892 = 0;
	int64_t t95 = 154374232961040171LL;

    t95 = (x6889^(x6890>>(x6891-x6892)));

    if (t95 != -70368744177664LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x7005 = 3467LLU;
	volatile int8_t x7006 = INT8_MAX;
	static int32_t x7007 = -1;
	uint64_t t96 = 66982508924LLU;

    t96 = (x7005^(x7006>>(x7007-x7008)));

    if (t96 != 3572LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x7045 = INT8_MIN;
	static volatile uint16_t x7046 = 101U;
	int8_t x7047 = 1;
	volatile int32_t t97 = 0;

    t97 = (x7045^(x7046>>(x7047-x7048)));

    if (t97 != -103) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x7177 = 28463U;
	int8_t x7178 = INT8_MAX;
	volatile uint16_t x7179 = 7U;
	int16_t x7180 = -1;
	int32_t t98 = 165340;

    t98 = (x7177^(x7178>>(x7179-x7180)));

    if (t98 != 28463) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x7197 = INT32_MIN;
	uint16_t x7198 = UINT16_MAX;
	int16_t x7199 = INT16_MIN;
	int32_t t99 = 911;

    t99 = (x7197^(x7198>>(x7199-x7200)));

    if (t99 != -2147418113) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x7273 = INT64_MIN;
	static uint32_t x7274 = 1003U;
	uint32_t x7275 = UINT32_MAX;
	volatile int64_t t100 = 3157LL;

    t100 = (x7273^(x7274>>(x7275-x7276)));

    if (t100 != -9223372036854774805LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x7324 = UINT32_MAX;
	volatile int32_t t101 = 358513;

    t101 = (x7321^(x7322>>(x7323-x7324)));

    if (t101 != -13) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x7333 = UINT8_MAX;
	volatile int32_t x7335 = -1;
	int16_t x7336 = -1;
	static volatile int32_t t102 = 7805;

    t102 = (x7333^(x7334>>(x7335-x7336)));

    if (t102 != 2147483392) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x7349 = INT64_MAX;
	volatile uint64_t x7350 = 62742103356337592LLU;
	uint8_t x7351 = 51U;
	uint32_t x7352 = UINT32_MAX;
	static volatile uint64_t t103 = 66218593121595LLU;

    t103 = (x7349^(x7350>>(x7351-x7352)));

    if (t103 != 9223372036854775794LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x7386 = 752U;
	static int64_t x7387 = -1LL;
	int32_t x7388 = -1;
	static volatile uint32_t t104 = 1317U;

    t104 = (x7385^(x7386>>(x7387-x7388)));

    if (t104 != 4294966543U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x7437 = 3964;
	uint16_t x7438 = 5U;
	int8_t x7439 = -1;
	volatile int64_t x7440 = -1LL;
	int32_t t105 = -85146;

    t105 = (x7437^(x7438>>(x7439-x7440)));

    if (t105 != 3961) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x7465 = -1;
	int8_t x7467 = 5;
	volatile int8_t x7468 = 1;
	static uint32_t t106 = UINT32_MAX;

    t106 = (x7465^(x7466>>(x7467-x7468)));

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x7709 = UINT32_MAX;
	static int8_t x7711 = -1;
	int64_t x7712 = -1LL;
	static uint32_t t107 = 5U;

    t107 = (x7709^(x7710>>(x7711-x7712)));

    if (t107 != 4294967286U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x7722 = 607LLU;
	int64_t x7724 = -5LL;

    t108 = (x7721^(x7722>>(x7723-x7724)));

    if (t108 != 18446744073709518885LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x7805 = -1;
	int8_t x7807 = 4;
	volatile int8_t x7808 = -13;
	volatile uint64_t t109 = 13199LLU;

    t109 = (x7805^(x7806>>(x7807-x7808)));

    if (t109 != 18446603336221196288LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x7975 = INT8_MIN;
	int8_t x7976 = INT8_MIN;
	int32_t t110 = -10047;

    t110 = (x7973^(x7974>>(x7975-x7976)));

    if (t110 != 2147483592) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x8129 = -1;
	static int32_t x8132 = -1;

    t111 = (x8129^(x8130>>(x8131-x8132)));

    if (t111 != -256) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x8173 = INT16_MIN;
	uint16_t x8174 = UINT16_MAX;
	volatile int32_t t112 = 7136;

    t112 = (x8173^(x8174>>(x8175-x8176)));

    if (t112 != -32769) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x8213 = 7U;
	int16_t x8215 = 0;
	int64_t x8216 = -1LL;
	volatile int32_t t113 = -730143838;

    t113 = (x8213^(x8214>>(x8215-x8216)));

    if (t113 != 14) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x8269 = 27595LLU;
	int64_t x8270 = 5731LL;
	volatile uint8_t x8271 = UINT8_MAX;
	uint64_t t114 = 3LLU;

    t114 = (x8269^(x8270>>(x8271-x8272)));

    if (t114 != 32168LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x8309 = 0U;
	uint64_t x8310 = UINT64_MAX;
	static int16_t x8311 = -1;
	static volatile int16_t x8312 = -1;
	static volatile uint64_t t115 = UINT64_MAX;

    t115 = (x8309^(x8310>>(x8311-x8312)));

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x8369 = INT32_MAX;
	uint64_t x8370 = 46430LLU;
	uint64_t x8371 = UINT64_MAX;
	int32_t x8372 = -1;

    t116 = (x8369^(x8370>>(x8371-x8372)));

    if (t116 != 2147437217LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x8417 = INT64_MIN;
	static uint64_t x8418 = 433729624LLU;
	uint64_t x8419 = 2LLU;
	int64_t x8420 = -1LL;
	uint64_t t117 = 51227681LLU;

    t117 = (x8417^(x8418>>(x8419-x8420)));

    if (t117 != 9223372036908992011LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x8474 = INT32_MAX;
	uint8_t x8475 = 28U;
	int32_t t118 = -698092;

    t118 = (x8473^(x8474>>(x8475-x8476)));

    if (t118 != 7) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x8549 = INT16_MAX;
	static uint64_t x8550 = UINT64_MAX;
	static int32_t x8551 = INT32_MIN;
	volatile int32_t x8552 = INT32_MIN;
	volatile uint64_t t119 = 3304209LLU;

    t119 = (x8549^(x8550>>(x8551-x8552)));

    if (t119 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x8681 = INT16_MIN;
	int64_t x8683 = -1LL;
	int32_t t120 = 125757;

    t120 = (x8681^(x8682>>(x8683-x8684)));

    if (t120 != -32765) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x8761 = -1;
	volatile int8_t x8763 = -1;
	static int64_t x8764 = -1LL;
	volatile int32_t t121 = -48729117;

    t121 = (x8761^(x8762>>(x8763-x8764)));

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x8793 = 98U;
	uint64_t x8794 = 1475769734779888LLU;
	int8_t x8796 = -1;

    t122 = (x8793^(x8794>>(x8795-x8796)));

    if (t122 != 1475769734779794LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x9145 = -1;
	int64_t x9146 = 29055236740LL;
	uint8_t x9147 = 11U;
	volatile int64_t t123 = 1269859766LL;

    t123 = (x9145^(x9146>>(x9147-x9148)));

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x9188 = -1;

    t124 = (x9185^(x9186>>(x9187-x9188)));

    if (t124 != 18446744073709551306LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x9201 = UINT32_MAX;
	uint8_t x9202 = UINT8_MAX;
	volatile int8_t x9203 = INT8_MIN;
	int8_t x9204 = INT8_MIN;
	uint32_t t125 = 1844437736U;

    t125 = (x9201^(x9202>>(x9203-x9204)));

    if (t125 != 4294967040U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x9317 = -1;
	static uint16_t x9318 = 7354U;
	int64_t x9319 = -1LL;
	int32_t t126 = 33225221;

    t126 = (x9317^(x9318>>(x9319-x9320)));

    if (t126 != -7355) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x9361 = 62U;
	static int8_t x9364 = -1;
	int64_t t127 = -171LL;

    t127 = (x9361^(x9362>>(x9363-x9364)));

    if (t127 != 9223372036854775745LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x9385 = INT8_MIN;
	static volatile int64_t x9386 = 204941667040LL;
	int16_t x9387 = INT16_MAX;
	int16_t x9388 = INT16_MAX;
	static int64_t t128 = 2074655453742104LL;

    t128 = (x9385^(x9386>>(x9387-x9388)));

    if (t128 != -204941666976LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x9429 = INT16_MIN;
	uint64_t x9430 = UINT64_MAX;
	static int32_t x9431 = -1;
	static uint32_t x9432 = UINT32_MAX;
	static volatile uint64_t t129 = 2361636442752LLU;

    t129 = (x9429^(x9430>>(x9431-x9432)));

    if (t129 != 32767LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x9457 = -7;
	int8_t x9459 = INT8_MAX;

    t130 = (x9457^(x9458>>(x9459-x9460)));

    if (t130 != 6LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x9613 = 663620674483LL;
	volatile uint32_t x9614 = UINT32_MAX;
	volatile int32_t x9615 = -1;
	int32_t x9616 = -1;
	volatile int64_t t131 = -169091737LL;

    t131 = (x9613^(x9614>>(x9615-x9616)));

    if (t131 != 663524219980LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x9657 = -125675;
	int32_t x9658 = INT32_MAX;
	uint8_t x9659 = 1U;
	int16_t x9660 = -1;
	volatile int32_t t132 = 867492561;

    t132 = (x9657^(x9658>>(x9659-x9660)));

    if (t132 != -536745238) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x9817 = -52991327;
	static int8_t x9818 = 28;
	volatile int16_t x9819 = 0;
	int8_t x9820 = -1;
	int32_t t133 = 59109798;

    t133 = (x9817^(x9818>>(x9819-x9820)));

    if (t133 != -52991313) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x9822 = 24461830167980LLU;
	volatile uint16_t x9823 = 15U;
	volatile int8_t x9824 = -3;

    t134 = (x9821^(x9822>>(x9823-x9824)));

    if (t134 != 596994209LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x9825 = 6U;
	int32_t x9826 = 187;
	static volatile uint8_t x9827 = 9U;
	uint16_t x9828 = 2U;
	int32_t t135 = 124801065;

    t135 = (x9825^(x9826>>(x9827-x9828)));

    if (t135 != 7) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x9833 = 7811400LL;
	int64_t x9834 = 58LL;
	int32_t x9836 = -1;
	static volatile int64_t t136 = 1LL;

    t136 = (x9833^(x9834>>(x9835-x9836)));

    if (t136 != 7811442LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x9945 = 47U;
	static int8_t x9947 = INT8_MAX;
	int32_t x9948 = 97;
	uint32_t t137 = 836U;

    t137 = (x9945^(x9946>>(x9947-x9948)));

    if (t137 != 44U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x10033 = -51;
	int8_t x10035 = INT8_MIN;
	int8_t x10036 = INT8_MIN;
	volatile int32_t t138 = 24171929;

    t138 = (x10033^(x10034>>(x10035-x10036)));

    if (t138 != -5346491) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x10041 = 0;
	uint32_t x10043 = UINT32_MAX;
	int8_t x10044 = -1;
	static volatile int32_t t139 = 44461;

    t139 = (x10041^(x10042>>(x10043-x10044)));

    if (t139 != 5139) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x10049 = -1LL;
	uint64_t t140 = 11920161627LLU;

    t140 = (x10049^(x10050>>(x10051-x10052)));

    if (t140 != 18446744073709547987LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int32_t x10165 = INT32_MIN;
	uint8_t x10166 = 13U;
	int8_t x10167 = INT8_MIN;
	static int32_t t141 = -390040;

    t141 = (x10165^(x10166>>(x10167-x10168)));

    if (t141 != -2147483635) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x10214 = UINT8_MAX;
	uint32_t x10215 = 3U;
	volatile int32_t t142 = 131899199;

    t142 = (x10213^(x10214>>(x10215-x10216)));

    if (t142 != 30) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x10257 = INT64_MAX;
	uint16_t x10258 = 1397U;
	static uint64_t x10259 = UINT64_MAX;
	volatile int8_t x10260 = -9;
	volatile int64_t t143 = -25565970308140848LL;

    t143 = (x10257^(x10258>>(x10259-x10260)));

    if (t143 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x10309 = INT32_MIN;
	uint32_t x10310 = UINT32_MAX;
	uint16_t x10311 = 2U;
	static uint32_t x10312 = UINT32_MAX;
	uint32_t t144 = 1541749666U;

    t144 = (x10309^(x10310>>(x10311-x10312)));

    if (t144 != 2684354559U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x10325 = UINT16_MAX;
	static int64_t x10326 = INT64_MAX;
	int64_t x10327 = INT64_MIN;
	int64_t x10328 = INT64_MIN;
	int64_t t145 = 1946045492215354LL;

    t145 = (x10325^(x10326>>(x10327-x10328)));

    if (t145 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x10345 = INT8_MIN;
	uint8_t x10346 = 9U;
	uint32_t x10347 = 5U;
	static uint32_t x10348 = UINT32_MAX;
	int32_t t146 = 1481747;

    t146 = (x10345^(x10346>>(x10347-x10348)));

    if (t146 != -128) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x10361 = UINT64_MAX;
	uint32_t x10362 = UINT32_MAX;
	uint16_t x10363 = 45U;
	uint8_t x10364 = 29U;
	static volatile uint64_t t147 = 4366434346417642020LLU;

    t147 = (x10361^(x10362>>(x10363-x10364)));

    if (t147 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x10555 = -1;

    t148 = (x10553^(x10554>>(x10555-x10556)));

    if (t148 != -32769) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x10585 = 30U;
	int32_t x10586 = INT32_MAX;
	int16_t x10588 = -1;
	volatile int32_t t149 = -23605402;

    t149 = (x10585^(x10586>>(x10587-x10588)));

    if (t149 != 2147483617) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x10639 = UINT64_MAX;
	int8_t x10640 = -1;
	static uint64_t t150 = 342421969356953022LLU;

    t150 = (x10637^(x10638>>(x10639-x10640)));

    if (t150 != 1897630431LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x10646 = INT8_MAX;
	int16_t x10647 = -1;
	static uint32_t x10648 = UINT32_MAX;
	int32_t t151 = -1335085;

    t151 = (x10645^(x10646>>(x10647-x10648)));

    if (t151 != -32641) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x10741 = INT16_MAX;
	int64_t x10742 = 3842654714370859LL;
	int32_t x10743 = -1;
	static int16_t x10744 = -1;
	int64_t t152 = -1LL;

    t152 = (x10741^(x10742>>(x10743-x10744)));

    if (t152 != 3842654714389716LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x10942 = 875LL;
	static uint16_t x10943 = 1U;
	volatile int16_t x10944 = -2;
	int64_t t153 = 806117239870436LL;

    t153 = (x10941^(x10942>>(x10943-x10944)));

    if (t153 != 110LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x11029 = INT32_MAX;
	int8_t x11031 = INT8_MIN;
	int8_t x11032 = INT8_MIN;
	static volatile int32_t t154 = 1890910;

    t154 = (x11029^(x11030>>(x11031-x11032)));

    if (t154 != 2147483604) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x11209 = INT64_MIN;
	uint64_t x11210 = 14054757651LLU;
	volatile uint64_t x11211 = 43LLU;
	volatile int8_t x11212 = 3;
	uint64_t t155 = 9510933LLU;

    t155 = (x11209^(x11210>>(x11211-x11212)));

    if (t155 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x11237 = INT8_MIN;
	volatile uint16_t x11238 = 217U;
	volatile int8_t x11240 = 0;

    t156 = (x11237^(x11238>>(x11239-x11240)));

    if (t156 != -128) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x11257 = 589815U;
	int16_t x11258 = INT16_MAX;
	int16_t x11259 = -1;
	volatile uint64_t x11260 = UINT64_MAX;
	volatile uint32_t t157 = 3U;

    t157 = (x11257^(x11258>>(x11259-x11260)));

    if (t157 != 557064U) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x11285 = INT8_MIN;
	uint8_t x11286 = 3U;
	static int32_t x11287 = -1;

    t158 = (x11285^(x11286>>(x11287-x11288)));

    if (t158 != -125) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x11383 = 1U;
	int64_t x11384 = -2LL;
	int32_t t159 = -4479791;

    t159 = (x11381^(x11382>>(x11383-x11384)));

    if (t159 != 268435442) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x11401 = 10973U;
	int32_t x11402 = 20;
	int32_t x11403 = INT32_MIN;
	static int32_t x11404 = INT32_MIN;
	static int32_t t160 = -1;

    t160 = (x11401^(x11402>>(x11403-x11404)));

    if (t160 != 10953) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x11441 = UINT32_MAX;
	static uint16_t x11442 = UINT16_MAX;
	int16_t x11443 = -1;
	int8_t x11444 = -1;
	volatile uint32_t t161 = 25688U;

    t161 = (x11441^(x11442>>(x11443-x11444)));

    if (t161 != 4294901760U) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x11481 = 110352906;
	static volatile int8_t x11483 = -1;
	static int64_t x11484 = -1LL;
	static volatile int32_t t162 = 24089;

    t162 = (x11481^(x11482>>(x11483-x11484)));

    if (t162 != 110334369) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x11657 = 6478U;
	volatile uint32_t x11658 = 119566U;
	uint8_t x11659 = UINT8_MAX;
	static uint8_t x11660 = UINT8_MAX;
	volatile uint32_t t163 = 18033639U;

    t163 = (x11657^(x11658>>(x11659-x11660)));

    if (t163 != 117312U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x11698 = INT32_MAX;
	volatile uint8_t x11699 = 1U;
	int32_t t164 = 69039954;

    t164 = (x11697^(x11698>>(x11699-x11700)));

    if (t164 != 1610612736) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x11754 = INT8_MAX;
	volatile uint64_t x11755 = 17LLU;
	int16_t x11756 = 0;
	static int32_t t165 = -44;

    t165 = (x11753^(x11754>>(x11755-x11756)));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x11765 = -12;
	uint64_t x11766 = UINT64_MAX;
	static uint8_t x11767 = 30U;
	volatile uint64_t t166 = 2165637128181LLU;

    t166 = (x11765^(x11766>>(x11767-x11768)));

    if (t166 != 18446744065119617035LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x11781 = INT16_MIN;
	static uint8_t x11783 = 1U;
	static int32_t x11784 = -7;
	volatile int32_t t167 = 5242;

    t167 = (x11781^(x11782>>(x11783-x11784)));

    if (t167 != -32768) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x11833 = -1;
	uint64_t x11834 = 1907LLU;
	static volatile int16_t x11835 = -1;
	static int8_t x11836 = -3;
	uint64_t t168 = 1920604LLU;

    t168 = (x11833^(x11834>>(x11835-x11836)));

    if (t168 != 18446744073709551139LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x12141 = 19699U;
	int8_t x12142 = INT8_MAX;
	volatile int8_t x12143 = 0;
	int16_t x12144 = -1;
	static int32_t t169 = -1986;

    t169 = (x12141^(x12142>>(x12143-x12144)));

    if (t169 != 19660) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x12157 = -28;
	uint8_t x12158 = 2U;
	uint8_t x12159 = 0U;
	int64_t x12160 = -3LL;
	static volatile int32_t t170 = -585066763;

    t170 = (x12157^(x12158>>(x12159-x12160)));

    if (t170 != -28) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x12193 = INT8_MIN;
	static int8_t x12194 = 1;
	int8_t x12195 = -1;
	int64_t x12196 = -1LL;
	volatile int32_t t171 = -300959233;

    t171 = (x12193^(x12194>>(x12195-x12196)));

    if (t171 != -127) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x12202 = 45155050176LL;
	volatile int8_t x12203 = INT8_MIN;
	int8_t x12204 = INT8_MIN;
	int64_t t172 = -511LL;

    t172 = (x12201^(x12202>>(x12203-x12204)));

    if (t172 != -45155050176LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x12241 = INT8_MIN;
	int8_t x12242 = INT8_MAX;
	int8_t x12243 = 0;
	static int16_t x12244 = -1;

    t173 = (x12241^(x12242>>(x12243-x12244)));

    if (t173 != -65) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x12341 = 1320;
	int8_t x12342 = 9;
	int32_t x12343 = -1;
	static volatile int32_t t174 = 3;

    t174 = (x12341^(x12342>>(x12343-x12344)));

    if (t174 != 1313) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x12359 = -1;
	int32_t t175 = -1;

    t175 = (x12357^(x12358>>(x12359-x12360)));

    if (t175 != -2) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x12373 = 93U;
	int8_t x12374 = INT8_MAX;
	int32_t x12375 = -1;
	static uint32_t t176 = 10845U;

    t176 = (x12373^(x12374>>(x12375-x12376)));

    if (t176 != 93U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x12397 = INT32_MIN;
	int64_t x12398 = 20885440626895354LL;
	int64_t x12399 = -1LL;
	volatile int32_t x12400 = -1;
	static volatile int64_t t177 = 706LL;

    t177 = (x12397^(x12398>>(x12399-x12400)));

    if (t177 != -20885442051495430LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x12541 = 181514;
	int64_t x12542 = INT64_MAX;
	static uint64_t x12543 = UINT64_MAX;
	volatile int64_t t178 = -3607699631133578LL;

    t178 = (x12541^(x12542>>(x12543-x12544)));

    if (t178 != 9223372036854594293LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x12549 = -1;
	volatile uint64_t x12550 = 27640393887833LLU;
	static uint16_t x12551 = 2U;

    t179 = (x12549^(x12550>>(x12551-x12552)));

    if (t179 != 18446744073709345679LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x12593 = 7937U;
	uint8_t x12594 = UINT8_MAX;
	static int16_t x12595 = -1;
	static uint64_t x12596 = UINT64_MAX;
	int32_t t180 = 166309;

    t180 = (x12593^(x12594>>(x12595-x12596)));

    if (t180 != 8190) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x12849 = 1410296U;
	static volatile uint64_t x12850 = 7382992561650LLU;
	static volatile int64_t x12851 = INT64_MIN;
	volatile uint64_t t181 = 249LLU;

    t181 = (x12849^(x12850>>(x12851-x12852)));

    if (t181 != 7382993445130LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x12885 = -1;
	static int16_t x12886 = 122;
	int8_t x12887 = -1;
	static int16_t x12888 = -1;
	volatile int32_t t182 = -14610;

    t182 = (x12885^(x12886>>(x12887-x12888)));

    if (t182 != -123) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x13065 = 66371119092130LLU;
	uint64_t x13066 = UINT64_MAX;
	volatile int32_t x13067 = -1;
	int32_t x13068 = -1;

    t183 = (x13065^(x13066>>(x13067-x13068)));

    if (t183 != 18446677702590459485LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x13101 = 0;
	int32_t x13103 = 0;
	volatile uint64_t x13104 = UINT64_MAX;
	volatile int32_t t184 = 1268752;

    t184 = (x13101^(x13102>>(x13103-x13104)));

    if (t184 != 3) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x13153 = INT64_MAX;
	int32_t x13154 = INT32_MAX;
	uint32_t x13155 = UINT32_MAX;
	uint32_t x13156 = UINT32_MAX;
	volatile int64_t t185 = -6473LL;

    t185 = (x13153^(x13154>>(x13155-x13156)));

    if (t185 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x13165 = INT64_MAX;
	int32_t x13168 = INT32_MIN;
	uint64_t t186 = 25LLU;

    t186 = (x13165^(x13166>>(x13167-x13168)));

    if (t186 != 9223372006894244629LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x13245 = UINT32_MAX;
	static int64_t x13246 = 63536LL;
	int64_t x13247 = -1LL;
	volatile int64_t t187 = 68996618365314363LL;

    t187 = (x13245^(x13246>>(x13247-x13248)));

    if (t187 != 4294903759LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x13421 = INT32_MIN;
	volatile int32_t x13422 = INT32_MAX;
	static int16_t x13424 = INT16_MIN;
	int32_t t188 = 478;

    t188 = (x13421^(x13422>>(x13423-x13424)));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x13517 = INT32_MAX;
	uint8_t x13518 = 9U;
	int64_t x13519 = -1LL;
	int32_t x13520 = -1;
	volatile int32_t t189 = 912023;

    t189 = (x13517^(x13518>>(x13519-x13520)));

    if (t189 != 2147483638) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x13529 = INT16_MAX;
	static uint64_t x13530 = 32841639LLU;
	int16_t x13531 = -1;
	volatile uint64_t t190 = 13LLU;

    t190 = (x13529^(x13530>>(x13531-x13532)));

    if (t190 != 32858200LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x13613 = 3282600U;
	static int32_t x13616 = -1;
	uint32_t t191 = 22U;

    t191 = (x13613^(x13614>>(x13615-x13616)));

    if (t191 != 3282603U) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x13621 = 104393625660LL;
	uint8_t x13622 = 40U;
	int32_t x13623 = INT32_MAX;
	int32_t x13624 = INT32_MAX;
	int64_t t192 = -268710372678460LL;

    t192 = (x13621^(x13622>>(x13623-x13624)));

    if (t192 != 104393625620LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x13705 = UINT64_MAX;
	uint64_t x13706 = UINT64_MAX;
	uint16_t x13707 = 3U;
	int16_t x13708 = -1;

    t193 = (x13705^(x13706>>(x13707-x13708)));

    if (t193 != 17293822569102704640LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x13762 = INT32_MAX;
	int16_t x13763 = INT16_MIN;
	int16_t x13764 = INT16_MIN;
	int32_t t194 = INT32_MIN;

    t194 = (x13761^(x13762>>(x13763-x13764)));

    if (t194 != INT32_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x13799 = 28U;
	uint32_t x13800 = UINT32_MAX;

    t195 = (x13797^(x13798>>(x13799-x13800)));

    if (t195 != 4294967168U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x13825 = 3U;
	static uint8_t x13828 = 45U;

    t196 = (x13825^(x13826>>(x13827-x13828)));

    if (t196 != 3U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x13841 = UINT8_MAX;
	static volatile int32_t x13843 = 2;
	int64_t x13844 = -1LL;
	volatile int32_t t197 = -85187;

    t197 = (x13841^(x13842>>(x13843-x13844)));

    if (t197 != 3840) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x13850 = 15523805218696344LLU;
	uint64_t x13851 = 37LLU;
	volatile int8_t x13852 = 0;
	uint64_t t198 = 242238LLU;

    t198 = (x13849^(x13850>>(x13851-x13852)));

    if (t198 != 18446744073709438665LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x13897 = INT64_MAX;
	static uint32_t x13898 = 14184U;
	volatile int64_t x13899 = INT64_MIN;
	int64_t x13900 = INT64_MIN;

    t199 = (x13897^(x13898>>(x13899-x13900)));

    if (t199 != 9223372036854761623LL) { NG(); } else { ; }
	
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

