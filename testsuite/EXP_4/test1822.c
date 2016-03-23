
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

volatile int16_t x1 = -1;
int32_t x8 = -7036;
volatile int64_t t1 = -8541286900LL;
static int64_t x30 = INT64_MIN;
volatile uint16_t x41 = 17U;
int8_t x43 = INT8_MIN;
int16_t x44 = 1946;
uint32_t x60 = UINT32_MAX;
uint32_t t10 = UINT32_MAX;
uint8_t x105 = 37U;
int16_t x111 = -1;
int8_t x114 = INT8_MIN;
static volatile int64_t t13 = INT64_MIN;
volatile uint64_t t14 = 369034LLU;
uint16_t x128 = 3U;
static int32_t x129 = -13992462;
volatile uint32_t x131 = UINT32_MAX;
int32_t x132 = -1;
volatile int64_t t16 = 222LL;
volatile int32_t x135 = -4214628;
int32_t x136 = -1;
int32_t t18 = -65;
uint64_t x162 = 0LLU;
int8_t x171 = 1;
int32_t t23 = 15811693;
static int8_t x202 = INT8_MAX;
uint16_t x203 = 0U;
uint64_t t24 = 4107520695788812LLU;
uint16_t x226 = UINT16_MAX;
uint8_t x242 = 5U;
static int64_t x243 = INT64_MIN;
int8_t x244 = -27;
int64_t x249 = -1LL;
int64_t t29 = -255LL;
uint16_t x262 = 124U;
int64_t x263 = 7750328LL;
int64_t x264 = INT64_MAX;
int32_t x272 = 2023040;
volatile int8_t x273 = -51;
uint16_t x276 = UINT16_MAX;
static volatile int8_t x280 = INT8_MAX;
static int32_t x282 = INT32_MAX;
int64_t t35 = -2663LL;
static volatile int16_t x297 = -1;
uint8_t x312 = 61U;
int32_t t37 = -3857;
int32_t x322 = 275741404;
volatile uint64_t t39 = 67525069483LLU;
static int32_t x337 = -1;
int8_t x390 = -1;
int16_t x391 = -35;
int16_t x403 = -1;
uint64_t x412 = UINT64_MAX;
int16_t x419 = INT16_MAX;
static int16_t x426 = INT16_MAX;
static int64_t x429 = -193LL;
volatile uint32_t x460 = UINT32_MAX;
uint8_t x471 = 14U;
int32_t t54 = -78391;
int8_t x480 = INT8_MAX;
static uint64_t t55 = 309423LLU;
static volatile int16_t x488 = INT16_MIN;
int32_t x494 = -216;
int16_t x499 = INT16_MIN;
int16_t x501 = 148;
int64_t t62 = INT64_MAX;
int16_t x552 = 324;
uint64_t x554 = 5347990227LLU;
int8_t x578 = 5;
uint32_t x593 = 120U;
int32_t x596 = -1;
volatile int16_t x607 = -1;
int8_t x628 = -1;
volatile int64_t x640 = 44165155LL;
static volatile int32_t x645 = 19522132;
int16_t x646 = -1;
volatile int64_t x647 = -1LL;
volatile uint32_t x653 = 249U;
uint32_t x655 = 2720U;
uint32_t t77 = 1232247954U;
static int64_t x661 = INT64_MAX;
uint16_t x671 = 1U;
volatile int16_t x697 = 9;
int16_t x714 = INT16_MIN;
volatile int64_t x715 = INT64_MIN;
int8_t x726 = -28;
int64_t t87 = INT64_MIN;
static volatile int32_t x729 = INT32_MAX;
int16_t x731 = 16;
volatile int32_t t88 = INT32_MAX;
int32_t x738 = INT32_MIN;
static int32_t x739 = INT32_MAX;
int16_t x743 = INT16_MIN;
volatile uint32_t x754 = 378479835U;
static int32_t x767 = INT32_MIN;
int32_t t96 = -20848069;
uint8_t x831 = 0U;
int32_t x854 = -1;
uint64_t x856 = UINT64_MAX;
uint16_t x862 = 17618U;
volatile int64_t x873 = -7855115782457LL;
volatile uint8_t x881 = 31U;
volatile int8_t x882 = -1;
volatile uint16_t x884 = 1806U;
uint32_t x886 = UINT32_MAX;
int32_t x903 = INT32_MIN;
uint64_t t109 = UINT64_MAX;
int64_t x905 = INT64_MAX;
uint8_t x910 = 5U;
int16_t x914 = INT16_MAX;
uint64_t x915 = 24448793632775934LLU;
volatile int32_t x916 = INT32_MIN;
volatile int32_t t113 = INT32_MAX;
volatile uint32_t x935 = 419283U;
int64_t x938 = -1LL;
uint8_t x939 = 86U;
volatile int64_t t115 = INT64_MIN;
volatile int32_t x945 = INT32_MAX;
static int32_t t116 = INT32_MAX;
int16_t x956 = 114;
int8_t x961 = INT8_MIN;
static int8_t x963 = -1;
static uint32_t x964 = UINT32_MAX;
volatile int32_t t118 = -1;
int16_t x967 = -223;
static uint16_t x971 = 467U;
static uint64_t x972 = 1876629283021472LLU;
volatile uint64_t t120 = 1727665066240599LLU;
int32_t x977 = INT32_MIN;
int32_t x990 = INT32_MAX;
int64_t t122 = 6802LL;
uint16_t x996 = 132U;
uint8_t x1011 = 0U;
int16_t x1014 = -1;
volatile uint32_t x1015 = 2U;
int16_t x1033 = -1;
int16_t x1051 = -2918;
uint32_t x1057 = 188106550U;
static uint64_t t133 = 14951468738LLU;
uint8_t x1074 = 15U;
uint16_t x1077 = UINT16_MAX;
int16_t x1079 = INT16_MIN;
static volatile int8_t x1087 = -3;
int16_t x1122 = INT16_MAX;
uint64_t x1166 = 15233LLU;
int16_t x1167 = -1;
volatile int8_t x1171 = INT8_MIN;
static uint16_t x1181 = 11U;
int64_t x1184 = INT64_MAX;
int32_t t147 = -5338529;
static int8_t x1193 = INT8_MIN;
int16_t x1194 = -9;
static volatile int32_t t148 = -231246168;
volatile int8_t x1199 = 0;
int16_t x1207 = -5780;
static uint16_t x1208 = 22U;
int32_t t151 = 17583768;
uint32_t x1221 = 1935U;
uint8_t x1232 = 7U;
int16_t x1241 = -1;
int8_t x1242 = INT8_MAX;
static int8_t x1244 = INT8_MAX;
uint8_t x1255 = 18U;
volatile int64_t x1261 = INT64_MIN;
volatile int16_t x1267 = -164;
uint32_t x1277 = 175874U;
int16_t x1283 = -1;
volatile int64_t t162 = INT64_MAX;
int16_t x1285 = INT16_MAX;
uint32_t x1313 = 1U;
uint8_t x1328 = 31U;
volatile uint32_t x1337 = 56910528U;
uint8_t x1341 = 1U;
static uint32_t x1347 = 208393807U;
volatile uint32_t t173 = UINT32_MAX;
static int64_t t174 = -614LL;
static int8_t x1378 = INT8_MIN;
uint64_t t177 = 54343879LLU;
int8_t x1402 = 0;
volatile uint32_t t181 = UINT32_MAX;
uint16_t x1409 = 84U;
static int64_t x1411 = INT64_MIN;
static int8_t x1420 = 1;
int8_t x1425 = INT8_MIN;
int32_t x1429 = INT32_MIN;
uint8_t x1431 = 6U;
int64_t x1436 = INT64_MAX;
uint16_t x1445 = UINT16_MAX;
static volatile int32_t x1483 = 0;
uint64_t t189 = UINT64_MAX;
int8_t x1486 = -1;
int16_t x1487 = INT16_MAX;
int8_t x1489 = 3;
int8_t x1493 = -1;
int32_t x1496 = -1;
volatile int16_t x1510 = -1;
uint32_t x1525 = 1111U;
static volatile int64_t t197 = -1622LL;
int8_t x1540 = INT8_MIN;


void f0(void) {
    	uint32_t x2 = 5U;
	uint8_t x3 = UINT8_MAX;
	static uint8_t x4 = UINT8_MAX;
	volatile uint32_t t0 = UINT32_MAX;

    t0 = (x1-(x2%(x3<=x4)));

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int64_t x6 = -1LL;
	static int64_t x7 = -434193LL;

    t1 = (x5-(x6%(x7<=x8)));

    if (t1 != -32768LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x13 = 1U;
	int32_t x14 = INT32_MAX;
	int64_t x15 = INT64_MIN;
	int16_t x16 = INT16_MIN;
	int32_t t2 = 0;

    t2 = (x13-(x14%(x15<=x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x25 = -141891668;
	int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MIN;
	int8_t x28 = INT8_MIN;
	volatile int32_t t3 = -347;

    t3 = (x25-(x26%(x27<=x28)));

    if (t3 != -141891668) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x29 = UINT32_MAX;
	int64_t x31 = INT64_MAX;
	int64_t x32 = INT64_MAX;
	volatile int64_t t4 = -13632121299940411LL;

    t4 = (x29-(x30%(x31<=x32)));

    if (t4 != 4294967295LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x33 = 0;
	int32_t x34 = -1;
	int64_t x35 = INT64_MIN;
	static int8_t x36 = INT8_MAX;
	volatile int32_t t5 = -3636;

    t5 = (x33-(x34%(x35<=x36)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x42 = INT8_MIN;
	volatile int32_t t6 = -4;

    t6 = (x41-(x42%(x43<=x44)));

    if (t6 != 17) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x57 = -1;
	int32_t x58 = INT32_MIN;
	int64_t x59 = 1677917205LL;
	volatile int32_t t7 = 32767054;

    t7 = (x57-(x58%(x59<=x60)));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x65 = INT32_MAX;
	int8_t x66 = INT8_MIN;
	int64_t x67 = -1LL;
	int64_t x68 = -1LL;
	int32_t t8 = INT32_MAX;

    t8 = (x65-(x66%(x67<=x68)));

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x97 = 2677945923897042965LL;
	volatile uint16_t x98 = UINT16_MAX;
	static int32_t x99 = INT32_MAX;
	uint32_t x100 = UINT32_MAX;
	int64_t t9 = -359715LL;

    t9 = (x97-(x98%(x99<=x100)));

    if (t9 != 2677945923897042965LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x101 = -1;
	uint32_t x102 = 68583U;
	int8_t x103 = INT8_MIN;
	volatile uint32_t x104 = UINT32_MAX;

    t10 = (x101-(x102%(x103<=x104)));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x106 = 1U;
	uint64_t x107 = 16LLU;
	int64_t x108 = INT64_MIN;
	int32_t t11 = -889127;

    t11 = (x105-(x106%(x107<=x108)));

    if (t11 != 37) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x109 = UINT8_MAX;
	int32_t x110 = INT32_MIN;
	int16_t x112 = 2380;
	static volatile int32_t t12 = 1;

    t12 = (x109-(x110%(x111<=x112)));

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x113 = INT64_MIN;
	int8_t x115 = INT8_MAX;
	uint64_t x116 = UINT64_MAX;

    t13 = (x113-(x114%(x115<=x116)));

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x121 = 8122U;
	uint64_t x122 = UINT64_MAX;
	int16_t x123 = INT16_MIN;
	int32_t x124 = 312411;

    t14 = (x121-(x122%(x123<=x124)));

    if (t14 != 8122LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x125 = INT64_MIN;
	static int64_t x126 = INT64_MIN;
	int32_t x127 = -15588647;
	static volatile int64_t t15 = INT64_MIN;

    t15 = (x125-(x126%(x127<=x128)));

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x130 = -14544858465864117LL;

    t16 = (x129-(x130%(x131<=x132)));

    if (t16 != -13992462LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x133 = 0;
	uint16_t x134 = 17180U;
	int32_t t17 = 51;

    t17 = (x133-(x134%(x135<=x136)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x145 = -8905;
	int8_t x146 = INT8_MIN;
	int8_t x147 = INT8_MAX;
	static volatile int32_t x148 = 9869522;

    t18 = (x145-(x146%(x147<=x148)));

    if (t18 != -8905) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x149 = INT32_MAX;
	uint64_t x150 = 3424228354804266860LLU;
	volatile int64_t x151 = 373751481LL;
	uint64_t x152 = UINT64_MAX;
	static uint64_t t19 = 27590LLU;

    t19 = (x149-(x150%(x151<=x152)));

    if (t19 != 2147483647LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x161 = -1LL;
	volatile uint64_t x163 = UINT64_MAX;
	int16_t x164 = -1;
	static volatile uint64_t t20 = UINT64_MAX;

    t20 = (x161-(x162%(x163<=x164)));

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x169 = INT32_MAX;
	int64_t x170 = -1LL;
	uint32_t x172 = UINT32_MAX;
	volatile int64_t t21 = 121922LL;

    t21 = (x169-(x170%(x171<=x172)));

    if (t21 != 2147483647LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x185 = 63U;
	static int16_t x186 = INT16_MAX;
	int32_t x187 = -1;
	int32_t x188 = INT32_MAX;
	volatile int32_t t22 = 23675426;

    t22 = (x185-(x186%(x187<=x188)));

    if (t22 != 63) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x189 = INT8_MIN;
	int32_t x190 = INT32_MAX;
	uint16_t x191 = UINT16_MAX;
	int64_t x192 = 33843455LL;

    t23 = (x189-(x190%(x191<=x192)));

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x201 = 770356594028LLU;
	uint64_t x204 = 139429283823605LLU;

    t24 = (x201-(x202%(x203<=x204)));

    if (t24 != 770356594028LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x225 = -1;
	volatile int16_t x227 = -1;
	static int8_t x228 = 2;
	volatile int32_t t25 = -1;

    t25 = (x225-(x226%(x227<=x228)));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x233 = 118630836919586LL;
	int16_t x234 = INT16_MIN;
	int64_t x235 = -34777743LL;
	static uint16_t x236 = UINT16_MAX;
	static volatile int64_t t26 = -474847409884747LL;

    t26 = (x233-(x234%(x235<=x236)));

    if (t26 != 118630836919586LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x237 = 148878693;
	volatile uint8_t x238 = 119U;
	volatile int8_t x239 = INT8_MIN;
	uint16_t x240 = 12U;
	int32_t t27 = -3;

    t27 = (x237-(x238%(x239<=x240)));

    if (t27 != 148878693) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x241 = INT16_MAX;
	int32_t t28 = -47935;

    t28 = (x241-(x242%(x243<=x244)));

    if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x250 = INT16_MAX;
	volatile int8_t x251 = 6;
	uint8_t x252 = UINT8_MAX;

    t29 = (x249-(x250%(x251<=x252)));

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x261 = INT8_MIN;
	static int32_t t30 = 870816287;

    t30 = (x261-(x262%(x263<=x264)));

    if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x269 = 0U;
	volatile int8_t x270 = INT8_MIN;
	volatile int64_t x271 = -1LL;
	int32_t t31 = -2;

    t31 = (x269-(x270%(x271<=x272)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x274 = -4658;
	volatile int64_t x275 = INT64_MIN;
	int32_t t32 = -352;

    t32 = (x273-(x274%(x275<=x276)));

    if (t32 != -51) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x277 = -1LL;
	static int32_t x278 = INT32_MAX;
	int64_t x279 = -6884999987LL;
	volatile int64_t t33 = -90LL;

    t33 = (x277-(x278%(x279<=x280)));

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x281 = -1LL;
	int64_t x283 = INT64_MIN;
	int8_t x284 = INT8_MIN;
	volatile int64_t t34 = 902982LL;

    t34 = (x281-(x282%(x283<=x284)));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x289 = -1135701127968567222LL;
	int64_t x290 = INT64_MIN;
	static volatile int16_t x291 = -32;
	volatile uint8_t x292 = 1U;

    t35 = (x289-(x290%(x291<=x292)));

    if (t35 != -1135701127968567222LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x298 = INT16_MIN;
	int64_t x299 = -1LL;
	int32_t x300 = INT32_MAX;
	volatile int32_t t36 = 56;

    t36 = (x297-(x298%(x299<=x300)));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x309 = INT16_MAX;
	int8_t x310 = INT8_MIN;
	uint8_t x311 = 47U;

    t37 = (x309-(x310%(x311<=x312)));

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x321 = 117U;
	int8_t x323 = -1;
	static uint16_t x324 = 19042U;
	uint32_t t38 = 1U;

    t38 = (x321-(x322%(x323<=x324)));

    if (t38 != 117U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x329 = 0U;
	uint64_t x330 = 8644413350LLU;
	static volatile uint8_t x331 = UINT8_MAX;
	static uint16_t x332 = 13333U;

    t39 = (x329-(x330%(x331<=x332)));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x338 = UINT32_MAX;
	uint32_t x339 = 119U;
	uint32_t x340 = 6919U;
	uint32_t t40 = UINT32_MAX;

    t40 = (x337-(x338%(x339<=x340)));

    if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x341 = 504011065742LLU;
	uint8_t x342 = 2U;
	int32_t x343 = -1;
	int8_t x344 = 0;
	volatile uint64_t t41 = 5853033LLU;

    t41 = (x341-(x342%(x343<=x344)));

    if (t41 != 504011065742LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x349 = -12;
	int32_t x350 = INT32_MIN;
	int16_t x351 = 0;
	static uint8_t x352 = UINT8_MAX;
	static int32_t t42 = -3113;

    t42 = (x349-(x350%(x351<=x352)));

    if (t42 != -12) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x353 = 14U;
	uint64_t x354 = 13342460140332288LLU;
	static int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MIN;
	uint64_t t43 = 1LLU;

    t43 = (x353-(x354%(x355<=x356)));

    if (t43 != 14LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x365 = 13293U;
	int64_t x366 = INT64_MIN;
	static uint8_t x367 = 8U;
	int16_t x368 = INT16_MAX;
	static volatile int64_t t44 = -139865617964LL;

    t44 = (x365-(x366%(x367<=x368)));

    if (t44 != 13293LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x385 = 7789U;
	volatile uint64_t x386 = 35764369768093485LLU;
	static volatile int16_t x387 = -1693;
	uint32_t x388 = UINT32_MAX;
	volatile uint64_t t45 = 27LLU;

    t45 = (x385-(x386%(x387<=x388)));

    if (t45 != 7789LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x389 = INT8_MAX;
	static uint8_t x392 = UINT8_MAX;
	volatile int32_t t46 = 125259232;

    t46 = (x389-(x390%(x391<=x392)));

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x401 = 32;
	static int32_t x402 = 1055092055;
	int64_t x404 = -1LL;
	int32_t t47 = -201021;

    t47 = (x401-(x402%(x403<=x404)));

    if (t47 != 32) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x409 = INT32_MAX;
	int16_t x410 = 229;
	static volatile int64_t x411 = -1LL;
	volatile int32_t t48 = INT32_MAX;

    t48 = (x409-(x410%(x411<=x412)));

    if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x417 = -125589218723467LL;
	uint16_t x418 = 9779U;
	static volatile int64_t x420 = INT64_MAX;
	int64_t t49 = 2626374933LL;

    t49 = (x417-(x418%(x419<=x420)));

    if (t49 != -125589218723467LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x425 = INT16_MIN;
	int8_t x427 = INT8_MIN;
	volatile int64_t x428 = 17491990277775039LL;
	int32_t t50 = 38341122;

    t50 = (x425-(x426%(x427<=x428)));

    if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x430 = INT32_MIN;
	int8_t x431 = 1;
	uint64_t x432 = 244866514LLU;
	volatile int64_t t51 = 31004619041LL;

    t51 = (x429-(x430%(x431<=x432)));

    if (t51 != -193LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x437 = -1LL;
	int64_t x438 = INT64_MIN;
	static volatile int16_t x439 = -1;
	uint16_t x440 = 26U;
	int64_t t52 = 1309326LL;

    t52 = (x437-(x438%(x439<=x440)));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x457 = 116U;
	uint64_t x458 = 53614369463544LLU;
	static int8_t x459 = 1;
	uint64_t t53 = 43850675LLU;

    t53 = (x457-(x458%(x459<=x460)));

    if (t53 != 116LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x469 = 9U;
	int16_t x470 = INT16_MIN;
	int8_t x472 = INT8_MAX;

    t54 = (x469-(x470%(x471<=x472)));

    if (t54 != 9) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x477 = 11903U;
	static uint64_t x478 = 3115904523LLU;
	int8_t x479 = INT8_MAX;

    t55 = (x477-(x478%(x479<=x480)));

    if (t55 != 11903LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int64_t x485 = -14LL;
	volatile int8_t x486 = -1;
	volatile uint32_t x487 = 31U;
	int64_t t56 = -392549927LL;

    t56 = (x485-(x486%(x487<=x488)));

    if (t56 != -14LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x489 = INT64_MIN;
	volatile uint8_t x490 = 1U;
	static uint64_t x491 = 111371214691LLU;
	int8_t x492 = INT8_MIN;
	int64_t t57 = INT64_MIN;

    t57 = (x489-(x490%(x491<=x492)));

    if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x493 = INT64_MAX;
	int8_t x495 = -1;
	uint64_t x496 = UINT64_MAX;
	volatile int64_t t58 = INT64_MAX;

    t58 = (x493-(x494%(x495<=x496)));

    if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x497 = UINT8_MAX;
	static int16_t x498 = -2;
	int8_t x500 = INT8_MAX;
	volatile int32_t t59 = 159;

    t59 = (x497-(x498%(x499<=x500)));

    if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x502 = 1U;
	uint64_t x503 = 18445456825406LLU;
	volatile int8_t x504 = -1;
	static volatile int32_t t60 = -13;

    t60 = (x501-(x502%(x503<=x504)));

    if (t60 != 148) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x505 = 55U;
	int32_t x506 = INT32_MAX;
	int64_t x507 = INT64_MIN;
	int64_t x508 = INT64_MIN;
	uint32_t t61 = 1U;

    t61 = (x505-(x506%(x507<=x508)));

    if (t61 != 55U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x509 = INT64_MAX;
	static int16_t x510 = INT16_MIN;
	int8_t x511 = INT8_MIN;
	static int8_t x512 = INT8_MIN;

    t62 = (x509-(x510%(x511<=x512)));

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x525 = INT64_MAX;
	int64_t x526 = -1LL;
	int64_t x527 = INT64_MIN;
	uint32_t x528 = 248752224U;
	static int64_t t63 = INT64_MAX;

    t63 = (x525-(x526%(x527<=x528)));

    if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x533 = UINT16_MAX;
	int64_t x534 = INT64_MAX;
	static uint64_t x535 = 8LLU;
	static uint16_t x536 = 97U;
	int64_t t64 = 50LL;

    t64 = (x533-(x534%(x535<=x536)));

    if (t64 != 65535LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x549 = UINT64_MAX;
	volatile int8_t x550 = 0;
	int16_t x551 = 0;
	volatile uint64_t t65 = UINT64_MAX;

    t65 = (x549-(x550%(x551<=x552)));

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x553 = INT8_MAX;
	int32_t x555 = INT32_MIN;
	volatile int8_t x556 = INT8_MIN;
	uint64_t t66 = 57233191409742432LLU;

    t66 = (x553-(x554%(x555<=x556)));

    if (t66 != 127LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x569 = UINT16_MAX;
	volatile uint64_t x570 = 5LLU;
	int64_t x571 = 8139065208LL;
	uint64_t x572 = 39674248436LLU;
	volatile uint64_t t67 = 28765557LLU;

    t67 = (x569-(x570%(x571<=x572)));

    if (t67 != 65535LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x577 = INT64_MIN;
	static volatile int8_t x579 = -15;
	int8_t x580 = 1;
	volatile int64_t t68 = INT64_MIN;

    t68 = (x577-(x578%(x579<=x580)));

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x594 = INT32_MIN;
	int8_t x595 = -54;
	static uint32_t t69 = 1552U;

    t69 = (x593-(x594%(x595<=x596)));

    if (t69 != 120U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x601 = INT32_MAX;
	volatile uint8_t x602 = 3U;
	int32_t x603 = -1025;
	volatile int16_t x604 = 0;
	int32_t t70 = INT32_MAX;

    t70 = (x601-(x602%(x603<=x604)));

    if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x605 = 23U;
	int64_t x606 = 3034392030395201676LL;
	uint8_t x608 = 44U;
	volatile int64_t t71 = -7619502005880994LL;

    t71 = (x605-(x606%(x607<=x608)));

    if (t71 != 23LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x613 = INT32_MIN;
	int16_t x614 = -1;
	int16_t x615 = INT16_MIN;
	int64_t x616 = -1LL;
	int32_t t72 = INT32_MIN;

    t72 = (x613-(x614%(x615<=x616)));

    if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x617 = -1;
	int64_t x618 = 33998137LL;
	int8_t x619 = INT8_MIN;
	int8_t x620 = 28;
	int64_t t73 = -240LL;

    t73 = (x617-(x618%(x619<=x620)));

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x625 = -1LL;
	uint32_t x626 = 100435878U;
	static volatile uint32_t x627 = UINT32_MAX;
	int64_t t74 = -4780408969898699LL;

    t74 = (x625-(x626%(x627<=x628)));

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x637 = INT8_MAX;
	int8_t x638 = -1;
	int16_t x639 = INT16_MAX;
	int32_t t75 = 103534;

    t75 = (x637-(x638%(x639<=x640)));

    if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x648 = UINT8_MAX;
	volatile int32_t t76 = -40;

    t76 = (x645-(x646%(x647<=x648)));

    if (t76 != 19522132) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x654 = -1;
	uint64_t x656 = 53243LLU;

    t77 = (x653-(x654%(x655<=x656)));

    if (t77 != 249U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x662 = -30;
	int16_t x663 = INT16_MAX;
	uint64_t x664 = UINT64_MAX;
	static volatile int64_t t78 = INT64_MAX;

    t78 = (x661-(x662%(x663<=x664)));

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x669 = INT8_MIN;
	int8_t x670 = -1;
	uint8_t x672 = 1U;
	int32_t t79 = 74037444;

    t79 = (x669-(x670%(x671<=x672)));

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x677 = 2LLU;
	int32_t x678 = INT32_MIN;
	uint32_t x679 = 4932478U;
	int32_t x680 = INT32_MAX;
	uint64_t t80 = 8735322222217LLU;

    t80 = (x677-(x678%(x679<=x680)));

    if (t80 != 2LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x681 = INT64_MAX;
	volatile int64_t x682 = INT64_MIN;
	int16_t x683 = 4;
	uint32_t x684 = UINT32_MAX;
	volatile int64_t t81 = INT64_MAX;

    t81 = (x681-(x682%(x683<=x684)));

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x698 = INT16_MIN;
	int64_t x699 = 917LL;
	int32_t x700 = INT32_MAX;
	static volatile int32_t t82 = -2;

    t82 = (x697-(x698%(x699<=x700)));

    if (t82 != 9) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x705 = INT32_MIN;
	int32_t x706 = INT32_MAX;
	int16_t x707 = 11551;
	uint64_t x708 = 63746363283LLU;
	volatile int32_t t83 = INT32_MIN;

    t83 = (x705-(x706%(x707<=x708)));

    if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x713 = INT64_MIN;
	uint16_t x716 = UINT16_MAX;
	int64_t t84 = INT64_MIN;

    t84 = (x713-(x714%(x715<=x716)));

    if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x717 = INT8_MIN;
	static int64_t x718 = INT64_MAX;
	int64_t x719 = -1LL;
	int8_t x720 = 57;
	static int64_t t85 = -3337619539278298693LL;

    t85 = (x717-(x718%(x719<=x720)));

    if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x721 = -1;
	int64_t x722 = INT64_MIN;
	int64_t x723 = -1100LL;
	volatile int32_t x724 = INT32_MAX;
	int64_t t86 = -6861144192LL;

    t86 = (x721-(x722%(x723<=x724)));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x725 = INT64_MIN;
	static int8_t x727 = 1;
	uint64_t x728 = 50044220232LLU;

    t87 = (x725-(x726%(x727<=x728)));

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x730 = INT32_MIN;
	static uint32_t x732 = UINT32_MAX;

    t88 = (x729-(x730%(x731<=x732)));

    if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int8_t x733 = -24;
	static uint32_t x734 = 636196433U;
	int8_t x735 = INT8_MIN;
	static int8_t x736 = 5;
	uint32_t t89 = 314U;

    t89 = (x733-(x734%(x735<=x736)));

    if (t89 != 4294967272U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x737 = 496170;
	volatile uint64_t x740 = UINT64_MAX;
	int32_t t90 = 17334282;

    t90 = (x737-(x738%(x739<=x740)));

    if (t90 != 496170) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x741 = -1;
	static int8_t x742 = -1;
	volatile int16_t x744 = -1;
	int32_t t91 = -21;

    t91 = (x741-(x742%(x743<=x744)));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x745 = -1LL;
	volatile uint64_t x746 = 24818744LLU;
	int16_t x747 = -1;
	int64_t x748 = INT64_MAX;
	static volatile uint64_t t92 = UINT64_MAX;

    t92 = (x745-(x746%(x747<=x748)));

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x753 = 155561LLU;
	int16_t x755 = INT16_MIN;
	int64_t x756 = -1LL;
	uint64_t t93 = 372109LLU;

    t93 = (x753-(x754%(x755<=x756)));

    if (t93 != 155561LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x765 = -1;
	static uint32_t x766 = UINT32_MAX;
	volatile int32_t x768 = INT32_MIN;
	static uint32_t t94 = UINT32_MAX;

    t94 = (x765-(x766%(x767<=x768)));

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x773 = INT8_MAX;
	int64_t x774 = INT64_MAX;
	int64_t x775 = INT64_MIN;
	int16_t x776 = INT16_MIN;
	volatile int64_t t95 = -149368271LL;

    t95 = (x773-(x774%(x775<=x776)));

    if (t95 != 127LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x793 = -1;
	uint8_t x794 = 5U;
	int16_t x795 = INT16_MIN;
	int8_t x796 = 11;

    t96 = (x793-(x794%(x795<=x796)));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x817 = -2;
	volatile int8_t x818 = -1;
	volatile uint32_t x819 = UINT32_MAX;
	int64_t x820 = INT64_MAX;
	volatile int32_t t97 = 24421172;

    t97 = (x817-(x818%(x819<=x820)));

    if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x821 = INT16_MIN;
	volatile int8_t x822 = 7;
	int8_t x823 = INT8_MIN;
	int64_t x824 = INT64_MAX;
	volatile int32_t t98 = 1285;

    t98 = (x821-(x822%(x823<=x824)));

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x829 = 1545047735738199LLU;
	static uint32_t x830 = UINT32_MAX;
	int32_t x832 = INT32_MAX;
	uint64_t t99 = 7136587437LLU;

    t99 = (x829-(x830%(x831<=x832)));

    if (t99 != 1545047735738199LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x853 = -2;
	static int16_t x855 = -1;
	int32_t t100 = 1;

    t100 = (x853-(x854%(x855<=x856)));

    if (t100 != -2) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x861 = -1;
	volatile int8_t x863 = INT8_MIN;
	static int8_t x864 = INT8_MIN;
	int32_t t101 = 1;

    t101 = (x861-(x862%(x863<=x864)));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x865 = 937403U;
	int32_t x866 = -1;
	static int16_t x867 = 1692;
	uint16_t x868 = UINT16_MAX;
	uint32_t t102 = 9U;

    t102 = (x865-(x866%(x867<=x868)));

    if (t102 != 937403U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x874 = 205177LLU;
	static volatile int16_t x875 = INT16_MIN;
	uint8_t x876 = UINT8_MAX;
	uint64_t t103 = 28076459733218LLU;

    t103 = (x873-(x874%(x875<=x876)));

    if (t103 != 18446736218593769159LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x877 = -1;
	static int32_t x878 = INT32_MIN;
	volatile int16_t x879 = INT16_MIN;
	static volatile uint16_t x880 = 23U;
	static int32_t t104 = -112669;

    t104 = (x877-(x878%(x879<=x880)));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x883 = INT64_MIN;
	int32_t t105 = -399;

    t105 = (x881-(x882%(x883<=x884)));

    if (t105 != 31) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x885 = 97106264366471LLU;
	static uint32_t x887 = 7132131U;
	int64_t x888 = 2170340167244782403LL;
	uint64_t t106 = 128187181551703839LLU;

    t106 = (x885-(x886%(x887<=x888)));

    if (t106 != 97106264366471LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x893 = INT8_MIN;
	int32_t x894 = -1277822;
	int16_t x895 = INT16_MIN;
	static int32_t x896 = INT32_MAX;
	int32_t t107 = 78674;

    t107 = (x893-(x894%(x895<=x896)));

    if (t107 != -128) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x897 = 69666U;
	volatile int16_t x898 = INT16_MAX;
	static int64_t x899 = -1LL;
	int32_t x900 = -1;
	static volatile uint32_t t108 = 6393065U;

    t108 = (x897-(x898%(x899<=x900)));

    if (t108 != 69666U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x901 = UINT64_MAX;
	int32_t x902 = 602818176;
	int16_t x904 = INT16_MAX;

    t109 = (x901-(x902%(x903<=x904)));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x906 = INT16_MAX;
	int16_t x907 = INT16_MIN;
	static uint8_t x908 = 3U;
	int64_t t110 = INT64_MAX;

    t110 = (x905-(x906%(x907<=x908)));

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x909 = -1;
	uint32_t x911 = UINT32_MAX;
	int32_t x912 = -1;
	int32_t t111 = 1432430;

    t111 = (x909-(x910%(x911<=x912)));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x913 = INT8_MIN;
	volatile int32_t t112 = -352811;

    t112 = (x913-(x914%(x915<=x916)));

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x929 = INT32_MAX;
	volatile int8_t x930 = 0;
	int16_t x931 = INT16_MIN;
	uint8_t x932 = 2U;

    t113 = (x929-(x930%(x931<=x932)));

    if (t113 != INT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x933 = 0U;
	uint8_t x934 = 118U;
	volatile int64_t x936 = INT64_MAX;
	volatile int32_t t114 = -624077845;

    t114 = (x933-(x934%(x935<=x936)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x937 = INT64_MIN;
	int64_t x940 = INT64_MAX;

    t115 = (x937-(x938%(x939<=x940)));

    if (t115 != INT64_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x946 = -21563983;
	int8_t x947 = -19;
	int32_t x948 = 1433603;

    t116 = (x945-(x946%(x947<=x948)));

    if (t116 != INT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x953 = INT16_MIN;
	int32_t x954 = INT32_MIN;
	static volatile int64_t x955 = INT64_MIN;
	volatile int32_t t117 = -109986700;

    t117 = (x953-(x954%(x955<=x956)));

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x962 = 142U;

    t118 = (x961-(x962%(x963<=x964)));

    if (t118 != -128) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x965 = INT64_MIN;
	static int8_t x966 = INT8_MIN;
	static uint16_t x968 = UINT16_MAX;
	int64_t t119 = INT64_MIN;

    t119 = (x965-(x966%(x967<=x968)));

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x969 = UINT16_MAX;
	uint64_t x970 = 7148895LLU;

    t120 = (x969-(x970%(x971<=x972)));

    if (t120 != 65535LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x978 = 257850LL;
	int8_t x979 = INT8_MAX;
	int64_t x980 = 4649775052003LL;
	volatile int64_t t121 = -71898502LL;

    t121 = (x977-(x978%(x979<=x980)));

    if (t121 != -2147483648LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x989 = -1LL;
	int16_t x991 = INT16_MIN;
	int16_t x992 = -24;

    t122 = (x989-(x990%(x991<=x992)));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x993 = -1;
	static int32_t x994 = -151401079;
	static volatile int16_t x995 = -2;
	int32_t t123 = 39260842;

    t123 = (x993-(x994%(x995<=x996)));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x1009 = 1141733836LLU;
	volatile int8_t x1010 = INT8_MIN;
	uint8_t x1012 = 36U;
	volatile uint64_t t124 = 3740321280LLU;

    t124 = (x1009-(x1010%(x1011<=x1012)));

    if (t124 != 1141733836LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x1013 = INT8_MAX;
	static int32_t x1016 = INT32_MIN;
	volatile int32_t t125 = -100295;

    t125 = (x1013-(x1014%(x1015<=x1016)));

    if (t125 != 127) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x1021 = -1LL;
	int8_t x1022 = 11;
	static int16_t x1023 = -1;
	int64_t x1024 = -1LL;
	static int64_t t126 = -845281068062654LL;

    t126 = (x1021-(x1022%(x1023<=x1024)));

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x1025 = 36;
	uint64_t x1026 = UINT64_MAX;
	int8_t x1027 = 0;
	uint32_t x1028 = 1007077072U;
	uint64_t t127 = 298070LLU;

    t127 = (x1025-(x1026%(x1027<=x1028)));

    if (t127 != 36LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x1029 = -10;
	int8_t x1030 = -1;
	uint8_t x1031 = UINT8_MAX;
	int32_t x1032 = 712;
	volatile int32_t t128 = 396085789;

    t128 = (x1029-(x1030%(x1031<=x1032)));

    if (t128 != -10) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x1034 = -1;
	uint8_t x1035 = UINT8_MAX;
	uint64_t x1036 = 40859286LLU;
	int32_t t129 = 12176;

    t129 = (x1033-(x1034%(x1035<=x1036)));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x1049 = -1;
	uint64_t x1050 = UINT64_MAX;
	volatile int32_t x1052 = -18;
	volatile uint64_t t130 = UINT64_MAX;

    t130 = (x1049-(x1050%(x1051<=x1052)));

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x1053 = UINT16_MAX;
	volatile int16_t x1054 = INT16_MIN;
	int8_t x1055 = 2;
	static volatile uint8_t x1056 = UINT8_MAX;
	static int32_t t131 = -7824;

    t131 = (x1053-(x1054%(x1055<=x1056)));

    if (t131 != 65535) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x1058 = 106;
	uint16_t x1059 = 66U;
	int8_t x1060 = INT8_MAX;
	volatile uint32_t t132 = 110321U;

    t132 = (x1057-(x1058%(x1059<=x1060)));

    if (t132 != 188106550U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x1061 = INT8_MAX;
	uint64_t x1062 = UINT64_MAX;
	int32_t x1063 = INT32_MIN;
	volatile int8_t x1064 = INT8_MAX;

    t133 = (x1061-(x1062%(x1063<=x1064)));

    if (t133 != 127LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x1065 = INT8_MAX;
	static uint32_t x1066 = 3U;
	static uint8_t x1067 = 6U;
	int16_t x1068 = INT16_MAX;
	uint32_t t134 = 14172U;

    t134 = (x1065-(x1066%(x1067<=x1068)));

    if (t134 != 127U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x1069 = 3U;
	int32_t x1070 = INT32_MAX;
	uint16_t x1071 = 30U;
	volatile uint64_t x1072 = 4891189287LLU;
	static int32_t t135 = -12;

    t135 = (x1069-(x1070%(x1071<=x1072)));

    if (t135 != 3) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x1073 = 30;
	static volatile uint32_t x1075 = 46U;
	int8_t x1076 = INT8_MIN;
	static int32_t t136 = 61484;

    t136 = (x1073-(x1074%(x1075<=x1076)));

    if (t136 != 30) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x1078 = INT64_MAX;
	int32_t x1080 = -1;
	static int64_t t137 = -226LL;

    t137 = (x1077-(x1078%(x1079<=x1080)));

    if (t137 != 65535LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x1081 = -1;
	static int64_t x1082 = INT64_MIN;
	int32_t x1083 = -1840;
	volatile int8_t x1084 = INT8_MIN;
	static volatile int64_t t138 = 5991869LL;

    t138 = (x1081-(x1082%(x1083<=x1084)));

    if (t138 != -1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x1085 = 90299508475863LLU;
	int16_t x1086 = INT16_MIN;
	uint64_t x1088 = UINT64_MAX;
	uint64_t t139 = 163543622LLU;

    t139 = (x1085-(x1086%(x1087<=x1088)));

    if (t139 != 90299508475863LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x1105 = -1;
	uint8_t x1106 = UINT8_MAX;
	int16_t x1107 = INT16_MIN;
	volatile int64_t x1108 = -1LL;
	static int32_t t140 = 30;

    t140 = (x1105-(x1106%(x1107<=x1108)));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x1121 = INT64_MIN;
	int64_t x1123 = INT64_MAX;
	static int64_t x1124 = INT64_MAX;
	int64_t t141 = INT64_MIN;

    t141 = (x1121-(x1122%(x1123<=x1124)));

    if (t141 != INT64_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x1125 = 141U;
	int32_t x1126 = INT32_MIN;
	int16_t x1127 = 5;
	uint64_t x1128 = 6480LLU;
	static int32_t t142 = 13839;

    t142 = (x1125-(x1126%(x1127<=x1128)));

    if (t142 != 141) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x1133 = UINT16_MAX;
	int32_t x1134 = 806594612;
	int16_t x1135 = INT16_MIN;
	int16_t x1136 = INT16_MIN;
	int32_t t143 = -87468368;

    t143 = (x1133-(x1134%(x1135<=x1136)));

    if (t143 != 65535) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x1137 = -11LL;
	int32_t x1138 = INT32_MAX;
	uint16_t x1139 = 14576U;
	volatile int16_t x1140 = INT16_MAX;
	int64_t t144 = 57892488743LL;

    t144 = (x1137-(x1138%(x1139<=x1140)));

    if (t144 != -11LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x1165 = -817560120;
	int32_t x1168 = INT32_MAX;
	volatile uint64_t t145 = 34815779708803004LLU;

    t145 = (x1165-(x1166%(x1167<=x1168)));

    if (t145 != 18446744072891991496LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1169 = INT64_MIN;
	static int8_t x1170 = -1;
	uint16_t x1172 = 3U;
	int64_t t146 = INT64_MIN;

    t146 = (x1169-(x1170%(x1171<=x1172)));

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1182 = 4764779;
	int32_t x1183 = INT32_MIN;

    t147 = (x1181-(x1182%(x1183<=x1184)));

    if (t147 != 11) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x1195 = 6;
	int16_t x1196 = 11618;

    t148 = (x1193-(x1194%(x1195<=x1196)));

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x1197 = INT64_MIN;
	volatile int32_t x1198 = INT32_MAX;
	static volatile uint8_t x1200 = UINT8_MAX;
	static volatile int64_t t149 = INT64_MIN;

    t149 = (x1197-(x1198%(x1199<=x1200)));

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1205 = INT8_MAX;
	int32_t x1206 = 1038640;
	volatile int32_t t150 = 14388;

    t150 = (x1205-(x1206%(x1207<=x1208)));

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1209 = -244926171;
	int32_t x1210 = -1;
	int16_t x1211 = 2;
	uint8_t x1212 = UINT8_MAX;

    t151 = (x1209-(x1210%(x1211<=x1212)));

    if (t151 != -244926171) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x1217 = INT8_MAX;
	int32_t x1218 = 9524;
	int64_t x1219 = -1LL;
	static int8_t x1220 = INT8_MAX;
	int32_t t152 = -28;

    t152 = (x1217-(x1218%(x1219<=x1220)));

    if (t152 != 127) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1222 = -1;
	volatile int32_t x1223 = -1;
	uint16_t x1224 = 1U;
	uint32_t t153 = 43216U;

    t153 = (x1221-(x1222%(x1223<=x1224)));

    if (t153 != 1935U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x1229 = 308209833385302LLU;
	static int64_t x1230 = 978453LL;
	volatile int32_t x1231 = INT32_MIN;
	volatile uint64_t t154 = 364113533432510957LLU;

    t154 = (x1229-(x1230%(x1231<=x1232)));

    if (t154 != 308209833385302LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1237 = INT16_MIN;
	volatile uint64_t x1238 = 362LLU;
	uint64_t x1239 = 211780LLU;
	uint64_t x1240 = UINT64_MAX;
	volatile uint64_t t155 = 2084226036247LLU;

    t155 = (x1237-(x1238%(x1239<=x1240)));

    if (t155 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1243 = 14U;
	volatile int32_t t156 = 2081;

    t156 = (x1241-(x1242%(x1243<=x1244)));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x1253 = -1;
	uint32_t x1254 = 9959561U;
	volatile int16_t x1256 = 135;
	static volatile uint32_t t157 = UINT32_MAX;

    t157 = (x1253-(x1254%(x1255<=x1256)));

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1262 = INT64_MIN;
	static volatile int8_t x1263 = -1;
	int16_t x1264 = INT16_MAX;
	static volatile int64_t t158 = INT64_MIN;

    t158 = (x1261-(x1262%(x1263<=x1264)));

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1265 = INT8_MAX;
	volatile uint64_t x1266 = 3512LLU;
	static int8_t x1268 = 13;
	uint64_t t159 = 628481LLU;

    t159 = (x1265-(x1266%(x1267<=x1268)));

    if (t159 != 127LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1273 = INT16_MAX;
	int16_t x1274 = -6414;
	volatile int64_t x1275 = -1LL;
	static uint64_t x1276 = UINT64_MAX;
	int32_t t160 = -2049991;

    t160 = (x1273-(x1274%(x1275<=x1276)));

    if (t160 != 32767) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x1278 = INT8_MIN;
	uint8_t x1279 = UINT8_MAX;
	uint16_t x1280 = UINT16_MAX;
	uint32_t t161 = 5U;

    t161 = (x1277-(x1278%(x1279<=x1280)));

    if (t161 != 175874U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x1281 = INT64_MAX;
	int64_t x1282 = 7LL;
	volatile int64_t x1284 = INT64_MAX;

    t162 = (x1281-(x1282%(x1283<=x1284)));

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x1286 = INT16_MAX;
	static int32_t x1287 = INT32_MIN;
	int8_t x1288 = 0;
	static int32_t t163 = 926516264;

    t163 = (x1285-(x1286%(x1287<=x1288)));

    if (t163 != 32767) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x1289 = -1LL;
	volatile int8_t x1290 = -22;
	int64_t x1291 = INT64_MIN;
	int8_t x1292 = -10;
	static volatile int64_t t164 = -8211942148951LL;

    t164 = (x1289-(x1290%(x1291<=x1292)));

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x1305 = 13U;
	int64_t x1306 = -189949LL;
	int8_t x1307 = INT8_MIN;
	static volatile int16_t x1308 = -1;
	int64_t t165 = 6LL;

    t165 = (x1305-(x1306%(x1307<=x1308)));

    if (t165 != 13LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x1309 = 3028U;
	uint32_t x1310 = 413362999U;
	int8_t x1311 = -1;
	int32_t x1312 = -1;
	volatile uint32_t t166 = 254041U;

    t166 = (x1309-(x1310%(x1311<=x1312)));

    if (t166 != 3028U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x1314 = 0;
	uint16_t x1315 = 3U;
	static uint16_t x1316 = 42U;
	static volatile uint32_t t167 = 6340789U;

    t167 = (x1313-(x1314%(x1315<=x1316)));

    if (t167 != 1U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1317 = 27289;
	uint64_t x1318 = 207917803092523LLU;
	int16_t x1319 = 0;
	uint8_t x1320 = UINT8_MAX;
	uint64_t t168 = 6058612548805566657LLU;

    t168 = (x1317-(x1318%(x1319<=x1320)));

    if (t168 != 27289LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1325 = INT64_MIN;
	int16_t x1326 = INT16_MIN;
	int32_t x1327 = INT32_MIN;
	volatile int64_t t169 = INT64_MIN;

    t169 = (x1325-(x1326%(x1327<=x1328)));

    if (t169 != INT64_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1329 = UINT32_MAX;
	volatile int64_t x1330 = INT64_MIN;
	uint64_t x1331 = 27638306559652182LLU;
	int64_t x1332 = -14676946LL;
	int64_t t170 = -1673283254662LL;

    t170 = (x1329-(x1330%(x1331<=x1332)));

    if (t170 != 4294967295LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x1338 = -1LL;
	int64_t x1339 = INT64_MIN;
	int32_t x1340 = INT32_MAX;
	int64_t t171 = -62739LL;

    t171 = (x1337-(x1338%(x1339<=x1340)));

    if (t171 != 56910528LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x1342 = INT64_MIN;
	static int8_t x1343 = 2;
	volatile uint64_t x1344 = 8873753292018789286LLU;
	static volatile int64_t t172 = -110LL;

    t172 = (x1341-(x1342%(x1343<=x1344)));

    if (t172 != 1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1345 = -1;
	static uint32_t x1346 = UINT32_MAX;
	int32_t x1348 = -1;

    t173 = (x1345-(x1346%(x1347<=x1348)));

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1361 = INT16_MIN;
	int64_t x1362 = -131605831271LL;
	int64_t x1363 = INT64_MIN;
	static int8_t x1364 = 15;

    t174 = (x1361-(x1362%(x1363<=x1364)));

    if (t174 != -32768LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x1369 = 811U;
	uint16_t x1370 = UINT16_MAX;
	static int32_t x1371 = -1794195;
	int16_t x1372 = -4;
	volatile int32_t t175 = -4;

    t175 = (x1369-(x1370%(x1371<=x1372)));

    if (t175 != 811) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1373 = UINT32_MAX;
	uint32_t x1374 = UINT32_MAX;
	volatile int16_t x1375 = INT16_MIN;
	uint8_t x1376 = 5U;
	static volatile uint32_t t176 = UINT32_MAX;

    t176 = (x1373-(x1374%(x1375<=x1376)));

    if (t176 != UINT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1377 = 112247959LLU;
	volatile int8_t x1379 = INT8_MIN;
	volatile uint16_t x1380 = 1U;

    t177 = (x1377-(x1378%(x1379<=x1380)));

    if (t177 != 112247959LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x1389 = UINT32_MAX;
	uint16_t x1390 = 1U;
	int8_t x1391 = -9;
	volatile int64_t x1392 = 37902694LL;
	uint32_t t178 = UINT32_MAX;

    t178 = (x1389-(x1390%(x1391<=x1392)));

    if (t178 != UINT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1393 = INT32_MIN;
	int16_t x1394 = INT16_MAX;
	uint32_t x1395 = 3805U;
	int16_t x1396 = INT16_MIN;
	int32_t t179 = INT32_MIN;

    t179 = (x1393-(x1394%(x1395<=x1396)));

    if (t179 != INT32_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1401 = INT64_MIN;
	volatile int8_t x1403 = -1;
	uint16_t x1404 = UINT16_MAX;
	int64_t t180 = INT64_MIN;

    t180 = (x1401-(x1402%(x1403<=x1404)));

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1405 = UINT32_MAX;
	volatile int16_t x1406 = 9;
	int64_t x1407 = -10214075136249LL;
	static uint16_t x1408 = 67U;

    t181 = (x1405-(x1406%(x1407<=x1408)));

    if (t181 != UINT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1410 = -1;
	int16_t x1412 = -1;
	volatile int32_t t182 = 10449314;

    t182 = (x1409-(x1410%(x1411<=x1412)));

    if (t182 != 84) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1417 = INT8_MIN;
	uint16_t x1418 = 36U;
	uint32_t x1419 = 1U;
	int32_t t183 = 13;

    t183 = (x1417-(x1418%(x1419<=x1420)));

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1426 = -1LL;
	uint16_t x1427 = 4U;
	uint32_t x1428 = 343117U;
	int64_t t184 = -1432674914007254403LL;

    t184 = (x1425-(x1426%(x1427<=x1428)));

    if (t184 != -128LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1430 = INT16_MIN;
	static int16_t x1432 = INT16_MAX;
	volatile int32_t t185 = INT32_MIN;

    t185 = (x1429-(x1430%(x1431<=x1432)));

    if (t185 != INT32_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1433 = 9249;
	int32_t x1434 = INT32_MIN;
	static int32_t x1435 = INT32_MIN;
	volatile int32_t t186 = 62188;

    t186 = (x1433-(x1434%(x1435<=x1436)));

    if (t186 != 9249) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1446 = -1;
	static int32_t x1447 = -1;
	int16_t x1448 = INT16_MAX;
	int32_t t187 = -28752;

    t187 = (x1445-(x1446%(x1447<=x1448)));

    if (t187 != 65535) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1453 = -1;
	int64_t x1454 = 549LL;
	uint32_t x1455 = 65503U;
	uint64_t x1456 = 2822979344956928788LLU;
	int64_t t188 = 1LL;

    t188 = (x1453-(x1454%(x1455<=x1456)));

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1481 = UINT64_MAX;
	int64_t x1482 = -533LL;
	uint8_t x1484 = 13U;

    t189 = (x1481-(x1482%(x1483<=x1484)));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1485 = -214897;
	int64_t x1488 = INT64_MAX;
	volatile int32_t t190 = 917441201;

    t190 = (x1485-(x1486%(x1487<=x1488)));

    if (t190 != -214897) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1490 = 41U;
	static int8_t x1491 = 1;
	int32_t x1492 = INT32_MAX;
	int32_t t191 = -63146;

    t191 = (x1489-(x1490%(x1491<=x1492)));

    if (t191 != 3) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1494 = INT8_MIN;
	int16_t x1495 = INT16_MIN;
	volatile int32_t t192 = -479;

    t192 = (x1493-(x1494%(x1495<=x1496)));

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x1501 = UINT16_MAX;
	volatile int8_t x1502 = INT8_MIN;
	int32_t x1503 = -1;
	volatile uint8_t x1504 = UINT8_MAX;
	static int32_t t193 = -3787937;

    t193 = (x1501-(x1502%(x1503<=x1504)));

    if (t193 != 65535) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1509 = INT64_MAX;
	int16_t x1511 = INT16_MAX;
	int32_t x1512 = 260837250;
	volatile int64_t t194 = INT64_MAX;

    t194 = (x1509-(x1510%(x1511<=x1512)));

    if (t194 != INT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x1513 = 0;
	int64_t x1514 = INT64_MIN;
	volatile int8_t x1515 = INT8_MIN;
	static int8_t x1516 = -1;
	volatile int64_t t195 = 1786591058089140LL;

    t195 = (x1513-(x1514%(x1515<=x1516)));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1517 = 7U;
	int16_t x1518 = -1;
	volatile int16_t x1519 = INT16_MIN;
	uint32_t x1520 = UINT32_MAX;
	static int32_t t196 = -1088;

    t196 = (x1517-(x1518%(x1519<=x1520)));

    if (t196 != 7) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1526 = -1LL;
	uint32_t x1527 = 1079U;
	int64_t x1528 = INT64_MAX;

    t197 = (x1525-(x1526%(x1527<=x1528)));

    if (t197 != 1111LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1537 = UINT16_MAX;
	volatile int32_t x1538 = INT32_MAX;
	static volatile int64_t x1539 = -160467487889528LL;
	volatile int32_t t198 = -68258576;

    t198 = (x1537-(x1538%(x1539<=x1540)));

    if (t198 != 65535) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1541 = INT16_MIN;
	uint8_t x1542 = UINT8_MAX;
	int8_t x1543 = -42;
	int16_t x1544 = -1;
	volatile int32_t t199 = 43533;

    t199 = (x1541-(x1542%(x1543<=x1544)));

    if (t199 != -32768) { NG(); } else { ; }
	
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

