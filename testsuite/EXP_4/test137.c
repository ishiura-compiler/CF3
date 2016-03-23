
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

static int32_t x30 = INT32_MAX;
int32_t t1 = 10636;
volatile uint64_t x36 = UINT64_MAX;
volatile uint32_t x41 = 76483U;
uint32_t t3 = 0U;
uint32_t x56 = 1263U;
int16_t x70 = INT16_MIN;
int32_t x107 = INT32_MAX;
static int32_t x111 = INT32_MAX;
int64_t t9 = INT64_MAX;
static int16_t x124 = INT16_MAX;
static int32_t x132 = -45;
static int8_t x142 = INT8_MAX;
int64_t x149 = 1929296268043823LL;
uint64_t x167 = 865531LLU;
uint16_t x188 = UINT16_MAX;
uint16_t x192 = 5U;
int64_t t19 = 61LL;
volatile uint8_t x195 = UINT8_MAX;
uint8_t x236 = 66U;
static int16_t x244 = -30;
uint16_t x246 = 695U;
int8_t x248 = INT8_MIN;
volatile int16_t x274 = INT16_MIN;
uint16_t x277 = 39U;
volatile int32_t t29 = 5;
int32_t t30 = 13395;
int16_t x305 = 8;
static volatile int32_t t33 = -151501440;
volatile uint16_t x322 = UINT16_MAX;
uint32_t x326 = UINT32_MAX;
volatile int8_t x331 = 47;
volatile int32_t t37 = -238983;
volatile uint32_t x335 = UINT32_MAX;
volatile int32_t t38 = 0;
volatile int64_t t39 = INT64_MAX;
uint64_t x351 = 4740167119233496629LLU;
uint16_t x357 = 14530U;
uint64_t x358 = 1471285801LLU;
uint8_t x364 = 99U;
uint8_t x379 = 31U;
uint32_t x381 = UINT32_MAX;
int8_t x382 = -2;
int32_t x389 = INT32_MAX;
int8_t x403 = 11;
static volatile int32_t t47 = 21200930;
static int16_t x427 = INT16_MIN;
volatile uint32_t x428 = 58U;
int8_t x438 = INT8_MAX;
int16_t x443 = INT16_MAX;
int32_t x445 = 0;
int16_t x451 = INT16_MAX;
static volatile uint32_t x452 = UINT32_MAX;
uint64_t x474 = 936368369593LLU;
static uint8_t x479 = 78U;
uint64_t x493 = 203LLU;
int64_t x510 = INT64_MIN;
int8_t x511 = INT8_MIN;
volatile int16_t x521 = 13131;
volatile uint8_t x522 = 108U;
int32_t t60 = -28230659;
uint16_t x526 = 25U;
int16_t x542 = INT16_MIN;
uint32_t t63 = 1U;
int8_t x558 = -27;
volatile uint32_t t65 = 4594U;
volatile int32_t t67 = 21;
static int64_t x584 = INT64_MIN;
int16_t x588 = INT16_MIN;
uint64_t x601 = UINT64_MAX;
int64_t x602 = -6914237941292LL;
volatile int64_t x610 = INT64_MIN;
int64_t t71 = INT64_MAX;
uint16_t x618 = 2U;
volatile uint64_t x647 = 354500047LLU;
volatile int32_t t73 = 1;
int64_t x662 = INT64_MIN;
static int32_t t74 = 34990;
static uint16_t x665 = 38U;
int16_t x666 = -123;
static int8_t x668 = -1;
uint16_t x669 = 14U;
int8_t x672 = -1;
static volatile int32_t x678 = INT32_MIN;
volatile int32_t t77 = 1255508;
volatile uint32_t t78 = 647161300U;
int64_t x689 = INT64_MAX;
uint64_t x691 = UINT64_MAX;
int16_t x710 = 1;
int32_t x718 = -125;
static volatile int64_t t82 = -208722250943LL;
volatile uint8_t x721 = 4U;
uint32_t x724 = 389269417U;
uint32_t x739 = 17979U;
volatile int64_t x740 = 0LL;
uint32_t x760 = 5523213U;
volatile uint32_t t88 = 41759U;
int32_t x774 = INT32_MAX;
static int8_t x776 = INT8_MIN;
volatile uint64_t x781 = UINT64_MAX;
uint8_t x793 = 5U;
volatile int64_t x794 = INT64_MAX;
int32_t x795 = INT32_MAX;
static volatile int64_t x802 = -1LL;
int16_t x804 = -1517;
int32_t t92 = -9608615;
volatile int64_t x818 = -3LL;
uint64_t x825 = UINT64_MAX;
volatile uint32_t t97 = 5U;
volatile int64_t x846 = INT64_MAX;
volatile uint64_t t98 = 3099388035909191243LLU;
uint64_t x850 = UINT64_MAX;
uint64_t x853 = UINT64_MAX;
int64_t x856 = 231124LL;
int64_t x857 = 15LL;
int16_t x859 = -1;
uint16_t x861 = 16457U;
static int32_t x877 = 97684;
int8_t x882 = -7;
static int16_t x883 = INT16_MAX;
static int16_t x884 = INT16_MIN;
int16_t x895 = -18;
int32_t x905 = INT32_MAX;
int8_t x906 = INT8_MAX;
int16_t x918 = -13;
uint16_t x942 = 5654U;
static uint64_t t110 = 10234218LLU;
volatile uint16_t x947 = UINT16_MAX;
uint16_t x948 = 113U;
uint16_t x953 = 6843U;
int32_t x962 = INT32_MAX;
static volatile int32_t t113 = 10299564;
uint16_t x965 = 509U;
static volatile int32_t t114 = 81;
int32_t x972 = 1732135;
static uint64_t t115 = 76266284702107LLU;
int64_t x979 = -1LL;
volatile int16_t x980 = INT16_MIN;
static uint32_t x986 = UINT32_MAX;
int32_t t118 = INT32_MAX;
uint8_t x993 = 53U;
int32_t x995 = -497086831;
volatile uint16_t x1000 = UINT16_MAX;
uint32_t x1005 = UINT32_MAX;
volatile uint8_t x1007 = 9U;
static int8_t x1008 = INT8_MAX;
int32_t x1013 = INT32_MAX;
volatile uint32_t x1016 = 3695241U;
int8_t x1028 = -1;
int32_t x1035 = INT32_MIN;
int8_t x1052 = 1;
volatile int64_t t126 = INT64_MAX;
int32_t t127 = 104635;
uint64_t x1057 = UINT64_MAX;
volatile int64_t x1060 = -1LL;
uint64_t t128 = UINT64_MAX;
uint32_t x1073 = 443272U;
int16_t x1074 = INT16_MAX;
uint32_t t130 = 4732U;
int64_t x1083 = -1LL;
static int64_t x1084 = -1LL;
volatile int64_t t131 = INT64_MAX;
static int8_t x1086 = INT8_MAX;
static uint32_t x1088 = 11U;
volatile uint64_t x1090 = UINT64_MAX;
int16_t x1091 = -1;
static uint32_t t133 = UINT32_MAX;
uint32_t x1125 = UINT32_MAX;
static uint8_t x1127 = 0U;
uint64_t x1141 = 132874636608792LLU;
static uint16_t x1142 = 40U;
static volatile int16_t x1143 = -141;
static int16_t x1144 = -10;
static uint8_t x1145 = 1U;
uint32_t x1162 = UINT32_MAX;
volatile uint32_t x1163 = UINT32_MAX;
uint64_t x1185 = UINT64_MAX;
volatile int8_t x1186 = INT8_MIN;
volatile int32_t t147 = INT32_MAX;
int16_t x1209 = 1;
volatile uint16_t x1211 = 32U;
int32_t t148 = -190;
uint16_t x1213 = UINT16_MAX;
int8_t x1222 = INT8_MIN;
static int16_t x1233 = INT16_MAX;
uint8_t x1247 = 0U;
int32_t x1296 = -618;
uint64_t t156 = 8540387201283LLU;
static int64_t x1297 = INT64_MAX;
int64_t t157 = -19LL;
static volatile int32_t t159 = INT32_MAX;
int32_t x1334 = INT32_MIN;
static int32_t x1336 = -1;
uint64_t x1339 = UINT64_MAX;
int32_t x1344 = 151;
int16_t x1347 = INT16_MAX;
int8_t x1350 = INT8_MAX;
volatile int8_t x1352 = INT8_MAX;
volatile uint32_t x1374 = 6834U;
static uint16_t x1388 = UINT16_MAX;
volatile int32_t t171 = 31665;
int64_t x1402 = INT64_MIN;
int8_t x1403 = 0;
int32_t t174 = -81;
uint16_t x1430 = 108U;
int64_t x1431 = INT64_MIN;
volatile int64_t x1444 = -1LL;
static uint16_t x1457 = UINT16_MAX;
int32_t t180 = 216902;
volatile uint8_t x1493 = 106U;
uint8_t x1494 = UINT8_MAX;
int8_t x1495 = 8;
uint16_t x1510 = UINT16_MAX;
volatile int16_t x1512 = INT16_MIN;
static volatile int32_t t183 = 1001;
uint16_t x1513 = 18210U;
uint8_t x1518 = UINT8_MAX;
int64_t x1523 = 3LL;
int8_t x1560 = INT8_MAX;
int32_t t191 = -2;
int32_t x1565 = INT32_MAX;
static volatile int32_t t193 = -97899093;
int32_t x1573 = INT32_MAX;
uint32_t x1574 = UINT32_MAX;
uint64_t x1633 = 4873382LLU;
int8_t x1639 = INT8_MIN;


void f0(void) {
    	static int32_t x13 = 13968;
	uint16_t x14 = 1373U;
	int64_t x15 = INT64_MIN;
	uint64_t x16 = 20LLU;
	volatile int32_t t0 = -10948469;

    t0 = (x13>>(x14<=(x15+x16)));

    if (t0 != 6984) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x29 = INT32_MAX;
	volatile int64_t x31 = 11707020315490832LL;
	int16_t x32 = -1;

    t1 = (x29>>(x30<=(x31+x32)));

    if (t1 != 1073741823) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x33 = UINT64_MAX;
	static volatile int64_t x34 = INT64_MIN;
	uint8_t x35 = UINT8_MAX;
	uint64_t t2 = UINT64_MAX;

    t2 = (x33>>(x34<=(x35+x36)));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x42 = UINT32_MAX;
	int16_t x43 = INT16_MAX;
	uint8_t x44 = 31U;

    t3 = (x41>>(x42<=(x43+x44)));

    if (t3 != 76483U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x53 = 870U;
	int8_t x54 = INT8_MIN;
	int32_t x55 = -62945;
	static volatile int32_t t4 = 74844721;

    t4 = (x53>>(x54<=(x55+x56)));

    if (t4 != 870) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x69 = 49274U;
	static int16_t x71 = INT16_MAX;
	static uint8_t x72 = UINT8_MAX;
	uint32_t t5 = 222593696U;

    t5 = (x69>>(x70<=(x71+x72)));

    if (t5 != 24637U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x81 = INT64_MAX;
	uint8_t x82 = UINT8_MAX;
	volatile uint64_t x83 = 35LLU;
	int64_t x84 = INT64_MIN;
	volatile int64_t t6 = 3581438186004044137LL;

    t6 = (x81>>(x82<=(x83+x84)));

    if (t6 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x89 = INT8_MAX;
	int8_t x90 = INT8_MAX;
	uint16_t x91 = 0U;
	uint32_t x92 = 1U;
	int32_t t7 = -20951398;

    t7 = (x89>>(x90<=(x91+x92)));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x105 = 0LLU;
	int8_t x106 = INT8_MIN;
	int16_t x108 = INT16_MIN;
	uint64_t t8 = 227369LLU;

    t8 = (x105>>(x106<=(x107+x108)));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x109 = INT64_MAX;
	static uint32_t x110 = UINT32_MAX;
	int64_t x112 = -245418LL;

    t9 = (x109>>(x110<=(x111+x112)));

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x121 = 337U;
	int16_t x122 = INT16_MIN;
	static uint8_t x123 = 61U;
	uint32_t t10 = 4016780U;

    t10 = (x121>>(x122<=(x123+x124)));

    if (t10 != 168U) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x129 = 4691562;
	volatile uint8_t x130 = 94U;
	volatile int16_t x131 = INT16_MIN;
	int32_t t11 = -113946871;

    t11 = (x129>>(x130<=(x131+x132)));

    if (t11 != 4691562) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x141 = 23U;
	int8_t x143 = INT8_MAX;
	int32_t x144 = -1;
	static volatile uint32_t t12 = 3U;

    t12 = (x141>>(x142<=(x143+x144)));

    if (t12 != 23U) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x145 = 214001910;
	volatile uint8_t x146 = 100U;
	int8_t x147 = INT8_MAX;
	int64_t x148 = INT64_MIN;
	static volatile int32_t t13 = 1060869298;

    t13 = (x145>>(x146<=(x147+x148)));

    if (t13 != 214001910) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x150 = 508885606958LL;
	static int64_t x151 = -1LL;
	int16_t x152 = INT16_MAX;
	static int64_t t14 = -101601LL;

    t14 = (x149>>(x150<=(x151+x152)));

    if (t14 != 1929296268043823LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x165 = 7566230U;
	int16_t x166 = INT16_MAX;
	uint64_t x168 = 190268797163LLU;
	static volatile uint32_t t15 = 1884063U;

    t15 = (x165>>(x166<=(x167+x168)));

    if (t15 != 3783115U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x177 = INT16_MAX;
	volatile int32_t x178 = 210241;
	int32_t x179 = -1;
	volatile uint32_t x180 = 1730370U;
	int32_t t16 = 0;

    t16 = (x177>>(x178<=(x179+x180)));

    if (t16 != 16383) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x181 = 3140259;
	uint64_t x182 = 22167521LLU;
	uint64_t x183 = 135LLU;
	volatile uint16_t x184 = 354U;
	volatile int32_t t17 = 994;

    t17 = (x181>>(x182<=(x183+x184)));

    if (t17 != 3140259) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x185 = 21;
	int16_t x186 = 15;
	int64_t x187 = 599LL;
	volatile int32_t t18 = 0;

    t18 = (x185>>(x186<=(x187+x188)));

    if (t18 != 10) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x189 = 99792384LL;
	static int8_t x190 = INT8_MIN;
	uint64_t x191 = UINT64_MAX;

    t19 = (x189>>(x190<=(x191+x192)));

    if (t19 != 99792384LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x193 = 29U;
	volatile uint16_t x194 = UINT16_MAX;
	uint64_t x196 = 792050523791LLU;
	int32_t t20 = 21903834;

    t20 = (x193>>(x194<=(x195+x196)));

    if (t20 != 14) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x197 = UINT16_MAX;
	volatile uint64_t x198 = 5641690LLU;
	int16_t x199 = INT16_MIN;
	int64_t x200 = -40633924137LL;
	static int32_t t21 = 57894702;

    t21 = (x197>>(x198<=(x199+x200)));

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x233 = INT16_MAX;
	volatile int8_t x234 = -41;
	int8_t x235 = INT8_MAX;
	volatile int32_t t22 = 268;

    t22 = (x233>>(x234<=(x235+x236)));

    if (t22 != 16383) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x241 = INT32_MAX;
	int16_t x242 = -1;
	int8_t x243 = INT8_MAX;
	volatile int32_t t23 = 30;

    t23 = (x241>>(x242<=(x243+x244)));

    if (t23 != 1073741823) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x245 = 1LLU;
	int64_t x247 = INT64_MAX;
	volatile uint64_t t24 = 4005154233001LLU;

    t24 = (x245>>(x246<=(x247+x248)));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x257 = UINT32_MAX;
	uint64_t x258 = UINT64_MAX;
	volatile int8_t x259 = INT8_MIN;
	volatile int8_t x260 = -51;
	volatile uint32_t t25 = UINT32_MAX;

    t25 = (x257>>(x258<=(x259+x260)));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x269 = INT32_MAX;
	uint64_t x270 = 1776228LLU;
	volatile uint64_t x271 = UINT64_MAX;
	volatile int16_t x272 = -8013;
	int32_t t26 = -6376895;

    t26 = (x269>>(x270<=(x271+x272)));

    if (t26 != 1073741823) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x273 = INT8_MAX;
	int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MAX;
	volatile int32_t t27 = -6;

    t27 = (x273>>(x274<=(x275+x276)));

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x278 = 0U;
	int64_t x279 = INT64_MAX;
	int8_t x280 = -5;
	int32_t t28 = 97662;

    t28 = (x277>>(x278<=(x279+x280)));

    if (t28 != 19) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x289 = INT8_MAX;
	int16_t x290 = -6;
	uint64_t x291 = UINT64_MAX;
	static int64_t x292 = INT64_MIN;

    t29 = (x289>>(x290<=(x291+x292)));

    if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x293 = 2U;
	uint32_t x294 = 126756970U;
	static uint16_t x295 = 31U;
	uint8_t x296 = UINT8_MAX;

    t30 = (x293>>(x294<=(x295+x296)));

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x297 = INT8_MAX;
	int8_t x298 = -1;
	volatile uint64_t x299 = 1332657LLU;
	int64_t x300 = 227095974957LL;
	int32_t t31 = 203592;

    t31 = (x297>>(x298<=(x299+x300)));

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x301 = 341457U;
	int32_t x302 = INT32_MAX;
	int64_t x303 = 2715626487917402LL;
	uint64_t x304 = 237723552659577250LLU;
	volatile uint32_t t32 = 5999U;

    t32 = (x301>>(x302<=(x303+x304)));

    if (t32 != 170728U) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint8_t x306 = 26U;
	uint16_t x307 = UINT16_MAX;
	static uint32_t x308 = UINT32_MAX;

    t33 = (x305>>(x306<=(x307+x308)));

    if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x317 = INT64_MAX;
	int8_t x318 = INT8_MAX;
	static uint32_t x319 = UINT32_MAX;
	int64_t x320 = 24736593398LL;
	int64_t t34 = -5479990294928LL;

    t34 = (x317>>(x318<=(x319+x320)));

    if (t34 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x321 = UINT16_MAX;
	uint32_t x323 = 1U;
	int64_t x324 = INT64_MIN;
	volatile int32_t t35 = -878;

    t35 = (x321>>(x322<=(x323+x324)));

    if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x325 = 4U;
	volatile int16_t x327 = -2;
	int8_t x328 = INT8_MIN;
	volatile int32_t t36 = -242;

    t36 = (x325>>(x326<=(x327+x328)));

    if (t36 != 4) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x329 = 9;
	int32_t x330 = INT32_MIN;
	static int16_t x332 = -659;

    t37 = (x329>>(x330<=(x331+x332)));

    if (t37 != 4) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x333 = 771;
	static volatile int32_t x334 = INT32_MAX;
	static int64_t x336 = INT64_MIN;

    t38 = (x333>>(x334<=(x335+x336)));

    if (t38 != 771) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x337 = INT64_MAX;
	int64_t x338 = 2135609703865092519LL;
	uint32_t x339 = 173247549U;
	int32_t x340 = INT32_MAX;

    t39 = (x337>>(x338<=(x339+x340)));

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x345 = UINT16_MAX;
	int8_t x346 = INT8_MIN;
	int32_t x347 = -1;
	uint32_t x348 = 2196U;
	volatile int32_t t40 = 4239924;

    t40 = (x345>>(x346<=(x347+x348)));

    if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x349 = 7869605900LL;
	uint16_t x350 = UINT16_MAX;
	int32_t x352 = -1;
	volatile int64_t t41 = 256110063915LL;

    t41 = (x349>>(x350<=(x351+x352)));

    if (t41 != 3934802950LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x359 = 0;
	static int64_t x360 = -1LL;
	int32_t t42 = -490356404;

    t42 = (x357>>(x358<=(x359+x360)));

    if (t42 != 7265) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x361 = UINT64_MAX;
	volatile int16_t x362 = -1;
	uint8_t x363 = 28U;
	uint64_t t43 = 37LLU;

    t43 = (x361>>(x362<=(x363+x364)));

    if (t43 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x377 = 823376645;
	static uint32_t x378 = UINT32_MAX;
	int64_t x380 = INT64_MIN;
	volatile int32_t t44 = 1;

    t44 = (x377>>(x378<=(x379+x380)));

    if (t44 != 823376645) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x383 = UINT8_MAX;
	volatile int16_t x384 = INT16_MIN;
	uint32_t t45 = UINT32_MAX;

    t45 = (x381>>(x382<=(x383+x384)));

    if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x390 = 0LLU;
	static int64_t x391 = -1LL;
	int16_t x392 = 1;
	volatile int32_t t46 = -94;

    t46 = (x389>>(x390<=(x391+x392)));

    if (t46 != 1073741823) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x401 = 81U;
	int32_t x402 = INT32_MIN;
	uint16_t x404 = 9258U;

    t47 = (x401>>(x402<=(x403+x404)));

    if (t47 != 40) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x425 = UINT64_MAX;
	int32_t x426 = INT32_MIN;
	static volatile uint64_t t48 = 1LLU;

    t48 = (x425>>(x426<=(x427+x428)));

    if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x429 = 1955028510415713LLU;
	int8_t x430 = -1;
	volatile uint32_t x431 = 5U;
	int16_t x432 = -165;
	uint64_t t49 = 1763LLU;

    t49 = (x429>>(x430<=(x431+x432)));

    if (t49 != 1955028510415713LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x437 = 5753546LLU;
	static uint8_t x439 = 9U;
	int32_t x440 = -1;
	volatile uint64_t t50 = 692149LLU;

    t50 = (x437>>(x438<=(x439+x440)));

    if (t50 != 5753546LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x441 = 56;
	uint64_t x442 = 52913970624660LLU;
	static uint64_t x444 = UINT64_MAX;
	int32_t t51 = 133383629;

    t51 = (x441>>(x442<=(x443+x444)));

    if (t51 != 56) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x446 = INT64_MIN;
	uint32_t x447 = 27U;
	static int16_t x448 = -1;
	static int32_t t52 = 0;

    t52 = (x445>>(x446<=(x447+x448)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x449 = 12U;
	int32_t x450 = INT32_MAX;
	static volatile int32_t t53 = -4045;

    t53 = (x449>>(x450<=(x451+x452)));

    if (t53 != 12) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x473 = INT16_MAX;
	int16_t x475 = INT16_MAX;
	int16_t x476 = INT16_MIN;
	int32_t t54 = -58;

    t54 = (x473>>(x474<=(x475+x476)));

    if (t54 != 16383) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x477 = 1U;
	volatile int32_t x478 = -67778941;
	volatile uint16_t x480 = 971U;
	volatile int32_t t55 = 355798211;

    t55 = (x477>>(x478<=(x479+x480)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x485 = 418;
	int8_t x486 = -8;
	int8_t x487 = INT8_MIN;
	static int16_t x488 = INT16_MAX;
	volatile int32_t t56 = -254585000;

    t56 = (x485>>(x486<=(x487+x488)));

    if (t56 != 209) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint16_t x494 = 550U;
	int16_t x495 = INT16_MIN;
	static uint8_t x496 = 9U;
	uint64_t t57 = 907811766LLU;

    t57 = (x493>>(x494<=(x495+x496)));

    if (t57 != 203LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x509 = INT8_MAX;
	volatile int8_t x512 = INT8_MIN;
	int32_t t58 = 3142;

    t58 = (x509>>(x510<=(x511+x512)));

    if (t58 != 63) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x517 = 1;
	volatile uint64_t x518 = UINT64_MAX;
	uint8_t x519 = 28U;
	int32_t x520 = 13009;
	static int32_t t59 = 1700;

    t59 = (x517>>(x518<=(x519+x520)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x523 = INT8_MIN;
	uint16_t x524 = UINT16_MAX;

    t60 = (x521>>(x522<=(x523+x524)));

    if (t60 != 6565) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x525 = 0;
	uint16_t x527 = 14U;
	int16_t x528 = 31;
	static int32_t t61 = 75464;

    t61 = (x525>>(x526<=(x527+x528)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x541 = 15530554682939474LLU;
	int64_t x543 = 352913611LL;
	uint8_t x544 = 1U;
	volatile uint64_t t62 = 63LLU;

    t62 = (x541>>(x542<=(x543+x544)));

    if (t62 != 7765277341469737LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x545 = 2059345881U;
	int32_t x546 = INT32_MIN;
	int8_t x547 = 1;
	int32_t x548 = -47429596;

    t63 = (x545>>(x546<=(x547+x548)));

    if (t63 != 1029672940U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x549 = 1005U;
	volatile int64_t x550 = INT64_MIN;
	int8_t x551 = -3;
	volatile uint32_t x552 = UINT32_MAX;
	int32_t t64 = -74;

    t64 = (x549>>(x550<=(x551+x552)));

    if (t64 != 502) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x557 = UINT32_MAX;
	int32_t x559 = 964705913;
	int16_t x560 = -1372;

    t65 = (x557>>(x558<=(x559+x560)));

    if (t65 != 2147483647U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x565 = 1279030196061LL;
	static volatile uint64_t x566 = 87057314LLU;
	volatile uint16_t x567 = UINT16_MAX;
	int32_t x568 = -1;
	int64_t t66 = -104597LL;

    t66 = (x565>>(x566<=(x567+x568)));

    if (t66 != 1279030196061LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x573 = 1;
	uint32_t x574 = 52U;
	volatile int16_t x575 = INT16_MAX;
	int64_t x576 = INT64_MIN;

    t67 = (x573>>(x574<=(x575+x576)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x581 = 0U;
	int16_t x582 = INT16_MIN;
	int8_t x583 = INT8_MAX;
	int32_t t68 = -11;

    t68 = (x581>>(x582<=(x583+x584)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x585 = INT64_MAX;
	uint16_t x586 = 1U;
	int8_t x587 = -1;
	int64_t t69 = INT64_MAX;

    t69 = (x585>>(x586<=(x587+x588)));

    if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x603 = INT32_MIN;
	volatile uint16_t x604 = 522U;
	uint64_t t70 = 138116874199006LLU;

    t70 = (x601>>(x602<=(x603+x604)));

    if (t70 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x609 = INT64_MAX;
	uint32_t x611 = UINT32_MAX;
	static uint64_t x612 = UINT64_MAX;

    t71 = (x609>>(x610<=(x611+x612)));

    if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x617 = 46308;
	static int32_t x619 = -32745315;
	int32_t x620 = INT32_MAX;
	static volatile int32_t t72 = -2;

    t72 = (x617>>(x618<=(x619+x620)));

    if (t72 != 23154) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x645 = INT8_MAX;
	int32_t x646 = INT32_MIN;
	int64_t x648 = INT64_MIN;

    t73 = (x645>>(x646<=(x647+x648)));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x661 = 1331;
	uint8_t x663 = UINT8_MAX;
	int16_t x664 = -1;

    t74 = (x661>>(x662<=(x663+x664)));

    if (t74 != 665) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x667 = -8308;
	int32_t t75 = 28;

    t75 = (x665>>(x666<=(x667+x668)));

    if (t75 != 38) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x670 = INT64_MIN;
	int16_t x671 = INT16_MIN;
	int32_t t76 = -184;

    t76 = (x669>>(x670<=(x671+x672)));

    if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x677 = 2U;
	static uint64_t x679 = 101847LLU;
	volatile int32_t x680 = INT32_MAX;

    t77 = (x677>>(x678<=(x679+x680)));

    if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x685 = 1889U;
	int64_t x686 = 20386652LL;
	static int8_t x687 = -10;
	int8_t x688 = INT8_MAX;

    t78 = (x685>>(x686<=(x687+x688)));

    if (t78 != 1889U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x690 = UINT8_MAX;
	volatile int8_t x692 = -1;
	static int64_t t79 = -7LL;

    t79 = (x689>>(x690<=(x691+x692)));

    if (t79 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x693 = INT8_MAX;
	int64_t x694 = INT64_MIN;
	int32_t x695 = -1;
	uint32_t x696 = 26728005U;
	volatile int32_t t80 = -1;

    t80 = (x693>>(x694<=(x695+x696)));

    if (t80 != 63) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x709 = UINT64_MAX;
	uint64_t x711 = 0LLU;
	int8_t x712 = INT8_MIN;
	static volatile uint64_t t81 = 16LLU;

    t81 = (x709>>(x710<=(x711+x712)));

    if (t81 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x717 = 37604LL;
	int8_t x719 = INT8_MAX;
	uint64_t x720 = UINT64_MAX;

    t82 = (x717>>(x718<=(x719+x720)));

    if (t82 != 37604LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x722 = 1U;
	uint32_t x723 = UINT32_MAX;
	int32_t t83 = 29;

    t83 = (x721>>(x722<=(x723+x724)));

    if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x737 = 12LLU;
	uint32_t x738 = 23582467U;
	volatile uint64_t t84 = 567421LLU;

    t84 = (x737>>(x738<=(x739+x740)));

    if (t84 != 12LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x741 = 1U;
	int32_t x742 = -1;
	int64_t x743 = 175307323267LL;
	int8_t x744 = INT8_MIN;
	static int32_t t85 = -1413417;

    t85 = (x741>>(x742<=(x743+x744)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x757 = 821;
	int32_t x758 = INT32_MIN;
	int64_t x759 = -1LL;
	int32_t t86 = -3545926;

    t86 = (x757>>(x758<=(x759+x760)));

    if (t86 != 410) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x761 = INT8_MAX;
	static volatile uint8_t x762 = 60U;
	int8_t x763 = INT8_MIN;
	int32_t x764 = -1;
	static int32_t t87 = 528678;

    t87 = (x761>>(x762<=(x763+x764)));

    if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x765 = 8369802U;
	int32_t x766 = -2571;
	uint8_t x767 = 1U;
	int64_t x768 = INT64_MIN;

    t88 = (x765>>(x766<=(x767+x768)));

    if (t88 != 8369802U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x773 = INT16_MAX;
	uint8_t x775 = 2U;
	int32_t t89 = -27970;

    t89 = (x773>>(x774<=(x775+x776)));

    if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x782 = 5U;
	uint8_t x783 = 0U;
	volatile uint8_t x784 = 3U;
	volatile uint64_t t90 = UINT64_MAX;

    t90 = (x781>>(x782<=(x783+x784)));

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x796 = -154;
	int32_t t91 = 2;

    t91 = (x793>>(x794<=(x795+x796)));

    if (t91 != 5) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x801 = 786;
	int32_t x803 = 918;

    t92 = (x801>>(x802<=(x803+x804)));

    if (t92 != 786) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x809 = 3U;
	int8_t x810 = -5;
	int32_t x811 = -1;
	volatile int16_t x812 = INT16_MIN;
	int32_t t93 = 85435080;

    t93 = (x809>>(x810<=(x811+x812)));

    if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x817 = 3064010U;
	uint8_t x819 = 0U;
	int8_t x820 = INT8_MAX;
	volatile uint32_t t94 = 14U;

    t94 = (x817>>(x818<=(x819+x820)));

    if (t94 != 1532005U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x826 = -1LL;
	static volatile int64_t x827 = -19143984055804014LL;
	uint64_t x828 = 5110954734748LLU;
	static uint64_t t95 = UINT64_MAX;

    t95 = (x825>>(x826<=(x827+x828)));

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x829 = UINT32_MAX;
	int64_t x830 = 5LL;
	int16_t x831 = -87;
	int32_t x832 = -10346057;
	volatile uint32_t t96 = UINT32_MAX;

    t96 = (x829>>(x830<=(x831+x832)));

    if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x837 = 15951U;
	uint8_t x838 = 0U;
	int8_t x839 = -1;
	int64_t x840 = INT64_MAX;

    t97 = (x837>>(x838<=(x839+x840)));

    if (t97 != 7975U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x845 = 53LLU;
	int16_t x847 = INT16_MIN;
	uint16_t x848 = 236U;

    t98 = (x845>>(x846<=(x847+x848)));

    if (t98 != 53LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x849 = 1U;
	uint16_t x851 = 0U;
	int32_t x852 = -1928125;
	static volatile uint32_t t99 = 6023U;

    t99 = (x849>>(x850<=(x851+x852)));

    if (t99 != 1U) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x854 = 6U;
	int64_t x855 = -2643095LL;
	uint64_t t100 = UINT64_MAX;

    t100 = (x853>>(x854<=(x855+x856)));

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x858 = 3U;
	int8_t x860 = INT8_MIN;
	int64_t t101 = -2038LL;

    t101 = (x857>>(x858<=(x859+x860)));

    if (t101 != 15LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x862 = -1;
	int16_t x863 = -613;
	static int64_t x864 = 330469221109665076LL;
	int32_t t102 = 12779;

    t102 = (x861>>(x862<=(x863+x864)));

    if (t102 != 8228) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x878 = 2885826U;
	uint16_t x879 = 15248U;
	int8_t x880 = -1;
	static volatile int32_t t103 = 644702;

    t103 = (x877>>(x878<=(x879+x880)));

    if (t103 != 97684) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x881 = 1LLU;
	uint64_t t104 = 8674747546877313999LLU;

    t104 = (x881>>(x882<=(x883+x884)));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x889 = 16953510423362LLU;
	static uint64_t x890 = 6886LLU;
	uint16_t x891 = UINT16_MAX;
	int8_t x892 = INT8_MAX;
	volatile uint64_t t105 = 6LLU;

    t105 = (x889>>(x890<=(x891+x892)));

    if (t105 != 8476755211681LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x893 = 6;
	uint16_t x894 = 1U;
	volatile uint32_t x896 = UINT32_MAX;
	volatile int32_t t106 = -15203;

    t106 = (x893>>(x894<=(x895+x896)));

    if (t106 != 3) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x897 = 1LLU;
	int8_t x898 = -1;
	int64_t x899 = -4549310762511007LL;
	static uint16_t x900 = UINT16_MAX;
	uint64_t t107 = 5552814399487370405LLU;

    t107 = (x897>>(x898<=(x899+x900)));

    if (t107 != 1LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x907 = 20U;
	volatile int64_t x908 = 51205LL;
	int32_t t108 = 316;

    t108 = (x905>>(x906<=(x907+x908)));

    if (t108 != 1073741823) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x917 = 7;
	volatile int32_t x919 = INT32_MAX;
	int64_t x920 = INT64_MIN;
	int32_t t109 = 709676517;

    t109 = (x917>>(x918<=(x919+x920)));

    if (t109 != 7) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x941 = 5012657293024781093LLU;
	uint8_t x943 = 5U;
	int16_t x944 = INT16_MAX;

    t110 = (x941>>(x942<=(x943+x944)));

    if (t110 != 2506328646512390546LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int64_t x945 = INT64_MAX;
	int64_t x946 = 5503545991LL;
	volatile int64_t t111 = INT64_MAX;

    t111 = (x945>>(x946<=(x947+x948)));

    if (t111 != INT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x954 = -527LL;
	volatile uint8_t x955 = UINT8_MAX;
	volatile uint8_t x956 = 13U;
	int32_t t112 = 3660784;

    t112 = (x953>>(x954<=(x955+x956)));

    if (t112 != 3421) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x961 = INT32_MAX;
	int64_t x963 = INT64_MAX;
	int16_t x964 = -27;

    t113 = (x961>>(x962<=(x963+x964)));

    if (t113 != 1073741823) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x966 = INT16_MIN;
	int64_t x967 = INT64_MAX;
	volatile int64_t x968 = INT64_MIN;

    t114 = (x965>>(x966<=(x967+x968)));

    if (t114 != 254) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x969 = 1051124751233087016LLU;
	static int8_t x970 = INT8_MIN;
	volatile int8_t x971 = -22;

    t115 = (x969>>(x970<=(x971+x972)));

    if (t115 != 525562375616543508LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x977 = INT32_MAX;
	int64_t x978 = -1LL;
	int32_t t116 = INT32_MAX;

    t116 = (x977>>(x978<=(x979+x980)));

    if (t116 != INT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x981 = INT64_MAX;
	uint8_t x982 = 46U;
	volatile int8_t x983 = 22;
	volatile int8_t x984 = 0;
	static volatile int64_t t117 = INT64_MAX;

    t117 = (x981>>(x982<=(x983+x984)));

    if (t117 != INT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x985 = INT32_MAX;
	volatile int64_t x987 = -1LL;
	int16_t x988 = -1;

    t118 = (x985>>(x986<=(x987+x988)));

    if (t118 != INT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x994 = 271985;
	static int64_t x996 = -1LL;
	volatile int32_t t119 = 174586875;

    t119 = (x993>>(x994<=(x995+x996)));

    if (t119 != 53) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x997 = 25;
	uint16_t x998 = 978U;
	int64_t x999 = INT64_MIN;
	static int32_t t120 = 2006;

    t120 = (x997>>(x998<=(x999+x1000)));

    if (t120 != 25) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x1006 = INT16_MAX;
	static uint32_t t121 = UINT32_MAX;

    t121 = (x1005>>(x1006<=(x1007+x1008)));

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x1009 = UINT16_MAX;
	volatile int32_t x1010 = -5439880;
	volatile int32_t x1011 = 11001;
	volatile int32_t x1012 = INT32_MIN;
	volatile int32_t t122 = 4851169;

    t122 = (x1009>>(x1010<=(x1011+x1012)));

    if (t122 != 65535) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x1014 = UINT32_MAX;
	uint64_t x1015 = 511405LLU;
	int32_t t123 = INT32_MAX;

    t123 = (x1013>>(x1014<=(x1015+x1016)));

    if (t123 != INT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x1025 = 2;
	uint8_t x1026 = 82U;
	int64_t x1027 = -28LL;
	volatile int32_t t124 = 121;

    t124 = (x1025>>(x1026<=(x1027+x1028)));

    if (t124 != 2) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x1033 = 456487724;
	uint32_t x1034 = 15599825U;
	volatile uint8_t x1036 = 37U;
	volatile int32_t t125 = 329870;

    t125 = (x1033>>(x1034<=(x1035+x1036)));

    if (t125 != 228243862) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x1049 = INT64_MAX;
	uint16_t x1050 = 31U;
	volatile int32_t x1051 = INT32_MIN;

    t126 = (x1049>>(x1050<=(x1051+x1052)));

    if (t126 != INT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x1053 = UINT8_MAX;
	int64_t x1054 = INT64_MIN;
	volatile int32_t x1055 = -451284;
	uint8_t x1056 = 2U;

    t127 = (x1053>>(x1054<=(x1055+x1056)));

    if (t127 != 127) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x1058 = UINT8_MAX;
	int8_t x1059 = 0;

    t128 = (x1057>>(x1058<=(x1059+x1060)));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x1069 = UINT16_MAX;
	volatile int64_t x1070 = INT64_MIN;
	volatile uint16_t x1071 = UINT16_MAX;
	int16_t x1072 = INT16_MIN;
	int32_t t129 = 248;

    t129 = (x1069>>(x1070<=(x1071+x1072)));

    if (t129 != 32767) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x1075 = -19;
	uint8_t x1076 = 3U;

    t130 = (x1073>>(x1074<=(x1075+x1076)));

    if (t130 != 443272U) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x1081 = INT64_MAX;
	int32_t x1082 = 26;

    t131 = (x1081>>(x1082<=(x1083+x1084)));

    if (t131 != INT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x1085 = UINT16_MAX;
	volatile int8_t x1087 = INT8_MIN;
	static int32_t t132 = 0;

    t132 = (x1085>>(x1086<=(x1087+x1088)));

    if (t132 != 32767) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x1089 = UINT32_MAX;
	int16_t x1092 = 549;

    t133 = (x1089>>(x1090<=(x1091+x1092)));

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x1093 = INT32_MAX;
	static int16_t x1094 = INT16_MIN;
	static volatile int16_t x1095 = INT16_MAX;
	uint16_t x1096 = 11657U;
	volatile int32_t t134 = -3742876;

    t134 = (x1093>>(x1094<=(x1095+x1096)));

    if (t134 != 1073741823) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x1113 = 33297410;
	int32_t x1114 = INT32_MAX;
	int64_t x1115 = INT64_MIN;
	uint32_t x1116 = 89459523U;
	volatile int32_t t135 = -938805;

    t135 = (x1113>>(x1114<=(x1115+x1116)));

    if (t135 != 33297410) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x1121 = 44742633372847012LL;
	int16_t x1122 = INT16_MIN;
	uint32_t x1123 = 1762U;
	static volatile int16_t x1124 = -1;
	volatile int64_t t136 = 22503LL;

    t136 = (x1121>>(x1122<=(x1123+x1124)));

    if (t136 != 44742633372847012LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x1126 = INT64_MIN;
	uint32_t x1128 = 1903056485U;
	uint32_t t137 = 737274U;

    t137 = (x1125>>(x1126<=(x1127+x1128)));

    if (t137 != 2147483647U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t t138 = 166927543796420722LLU;

    t138 = (x1141>>(x1142<=(x1143+x1144)));

    if (t138 != 132874636608792LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x1146 = UINT8_MAX;
	int32_t x1147 = 40;
	static uint32_t x1148 = UINT32_MAX;
	volatile int32_t t139 = 90;

    t139 = (x1145>>(x1146<=(x1147+x1148)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x1153 = INT8_MAX;
	int8_t x1154 = -3;
	int16_t x1155 = INT16_MIN;
	uint8_t x1156 = 11U;
	volatile int32_t t140 = 1;

    t140 = (x1153>>(x1154<=(x1155+x1156)));

    if (t140 != 127) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x1161 = 9U;
	int8_t x1164 = INT8_MIN;
	static volatile int32_t t141 = 648970342;

    t141 = (x1161>>(x1162<=(x1163+x1164)));

    if (t141 != 9) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x1173 = UINT32_MAX;
	static int16_t x1174 = INT16_MAX;
	uint8_t x1175 = 1U;
	uint64_t x1176 = 3585774LLU;
	volatile uint32_t t142 = 34509934U;

    t142 = (x1173>>(x1174<=(x1175+x1176)));

    if (t142 != 2147483647U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x1177 = 1980LLU;
	int8_t x1178 = INT8_MIN;
	static volatile int16_t x1179 = -1769;
	uint64_t x1180 = 250081068652344381LLU;
	volatile uint64_t t143 = 1578456803LLU;

    t143 = (x1177>>(x1178<=(x1179+x1180)));

    if (t143 != 1980LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x1181 = 14932308308993LL;
	uint8_t x1182 = 5U;
	int16_t x1183 = 13375;
	uint64_t x1184 = UINT64_MAX;
	int64_t t144 = 548917885730439LL;

    t144 = (x1181>>(x1182<=(x1183+x1184)));

    if (t144 != 7466154154496LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1187 = INT16_MAX;
	static int32_t x1188 = -1237412;
	volatile uint64_t t145 = UINT64_MAX;

    t145 = (x1185>>(x1186<=(x1187+x1188)));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x1189 = 238325307387LLU;
	uint8_t x1190 = 10U;
	uint16_t x1191 = 0U;
	static int64_t x1192 = INT64_MIN;
	volatile uint64_t t146 = 1706777364877288334LLU;

    t146 = (x1189>>(x1190<=(x1191+x1192)));

    if (t146 != 238325307387LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1201 = INT32_MAX;
	volatile int64_t x1202 = -1LL;
	uint64_t x1203 = 115LLU;
	int32_t x1204 = 32;

    t147 = (x1201>>(x1202<=(x1203+x1204)));

    if (t147 != INT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1210 = INT8_MIN;
	int32_t x1212 = 693438379;

    t148 = (x1209>>(x1210<=(x1211+x1212)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x1214 = INT64_MAX;
	uint32_t x1215 = 193U;
	static int16_t x1216 = INT16_MAX;
	int32_t t149 = 2;

    t149 = (x1213>>(x1214<=(x1215+x1216)));

    if (t149 != 65535) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x1221 = 28784U;
	int64_t x1223 = -1LL;
	volatile int32_t x1224 = -1;
	volatile uint32_t t150 = 371U;

    t150 = (x1221>>(x1222<=(x1223+x1224)));

    if (t150 != 14392U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x1234 = -2929132141972LL;
	int8_t x1235 = INT8_MIN;
	volatile uint32_t x1236 = 546032U;
	int32_t t151 = 1311;

    t151 = (x1233>>(x1234<=(x1235+x1236)));

    if (t151 != 16383) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x1237 = 450991U;
	uint64_t x1238 = 9054840328911966LLU;
	int8_t x1239 = -1;
	int32_t x1240 = -1;
	uint32_t t152 = 8U;

    t152 = (x1237>>(x1238<=(x1239+x1240)));

    if (t152 != 225495U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x1245 = INT16_MAX;
	int64_t x1246 = INT64_MIN;
	static int32_t x1248 = -3354192;
	int32_t t153 = -19;

    t153 = (x1245>>(x1246<=(x1247+x1248)));

    if (t153 != 16383) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x1261 = UINT32_MAX;
	uint32_t x1262 = UINT32_MAX;
	uint64_t x1263 = UINT64_MAX;
	static uint32_t x1264 = 586U;
	volatile uint32_t t154 = UINT32_MAX;

    t154 = (x1261>>(x1262<=(x1263+x1264)));

    if (t154 != UINT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x1265 = INT8_MAX;
	uint16_t x1266 = 29U;
	int8_t x1267 = INT8_MIN;
	int16_t x1268 = INT16_MIN;
	volatile int32_t t155 = -90484696;

    t155 = (x1265>>(x1266<=(x1267+x1268)));

    if (t155 != 127) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1293 = 4085170071LLU;
	uint32_t x1294 = 238U;
	int64_t x1295 = -928003869LL;

    t156 = (x1293>>(x1294<=(x1295+x1296)));

    if (t156 != 4085170071LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x1298 = 13474498U;
	int32_t x1299 = -563615;
	static uint32_t x1300 = 7104U;

    t157 = (x1297>>(x1298<=(x1299+x1300)));

    if (t157 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1305 = INT64_MAX;
	static int64_t x1306 = INT64_MIN;
	uint32_t x1307 = 704673U;
	volatile uint16_t x1308 = 6U;
	int64_t t158 = 240174833173LL;

    t158 = (x1305>>(x1306<=(x1307+x1308)));

    if (t158 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1309 = INT32_MAX;
	int32_t x1310 = -1;
	int8_t x1311 = INT8_MIN;
	volatile int16_t x1312 = -20;

    t159 = (x1309>>(x1310<=(x1311+x1312)));

    if (t159 != INT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x1325 = 537U;
	uint32_t x1326 = 110U;
	int8_t x1327 = INT8_MIN;
	int8_t x1328 = INT8_MAX;
	volatile int32_t t160 = 0;

    t160 = (x1325>>(x1326<=(x1327+x1328)));

    if (t160 != 268) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1329 = 29969U;
	static int8_t x1330 = 37;
	uint8_t x1331 = 79U;
	int64_t x1332 = INT64_MIN;
	volatile uint32_t t161 = 57U;

    t161 = (x1329>>(x1330<=(x1331+x1332)));

    if (t161 != 29969U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1333 = INT16_MAX;
	static volatile uint16_t x1335 = 7U;
	static volatile int32_t t162 = 53886000;

    t162 = (x1333>>(x1334<=(x1335+x1336)));

    if (t162 != 16383) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint8_t x1337 = 5U;
	static volatile uint8_t x1338 = 13U;
	int64_t x1340 = 2LL;
	int32_t t163 = -64054;

    t163 = (x1337>>(x1338<=(x1339+x1340)));

    if (t163 != 5) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x1341 = 1017U;
	static volatile int32_t x1342 = 185035419;
	static uint16_t x1343 = 3094U;
	int32_t t164 = 2539;

    t164 = (x1341>>(x1342<=(x1343+x1344)));

    if (t164 != 1017) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1345 = 1;
	volatile int16_t x1346 = -314;
	uint16_t x1348 = 21076U;
	int32_t t165 = -746578051;

    t165 = (x1345>>(x1346<=(x1347+x1348)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1349 = 6856504;
	int16_t x1351 = 1;
	volatile int32_t t166 = -18913729;

    t166 = (x1349>>(x1350<=(x1351+x1352)));

    if (t166 != 3428252) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1361 = 39;
	uint8_t x1362 = 11U;
	static volatile int64_t x1363 = -3824LL;
	volatile uint8_t x1364 = 0U;
	volatile int32_t t167 = 9283336;

    t167 = (x1361>>(x1362<=(x1363+x1364)));

    if (t167 != 39) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1373 = INT32_MAX;
	int16_t x1375 = INT16_MAX;
	int8_t x1376 = -32;
	int32_t t168 = -6;

    t168 = (x1373>>(x1374<=(x1375+x1376)));

    if (t168 != 1073741823) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1381 = UINT16_MAX;
	volatile int64_t x1382 = 688255LL;
	volatile uint64_t x1383 = UINT64_MAX;
	uint16_t x1384 = 2U;
	static int32_t t169 = 0;

    t169 = (x1381>>(x1382<=(x1383+x1384)));

    if (t169 != 65535) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1385 = INT64_MAX;
	static volatile uint16_t x1386 = 12247U;
	int8_t x1387 = INT8_MIN;
	int64_t t170 = 35308LL;

    t170 = (x1385>>(x1386<=(x1387+x1388)));

    if (t170 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1389 = 4U;
	uint32_t x1390 = 1368117222U;
	uint64_t x1391 = 99038046556738LLU;
	int8_t x1392 = INT8_MIN;

    t171 = (x1389>>(x1390<=(x1391+x1392)));

    if (t171 != 2) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1401 = 25U;
	static uint16_t x1404 = 27885U;
	int32_t t172 = -5942;

    t172 = (x1401>>(x1402<=(x1403+x1404)));

    if (t172 != 12) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1405 = 17;
	int8_t x1406 = INT8_MIN;
	uint8_t x1407 = 94U;
	int64_t x1408 = INT64_MIN;
	int32_t t173 = -24280;

    t173 = (x1405>>(x1406<=(x1407+x1408)));

    if (t173 != 17) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x1409 = 195U;
	volatile int64_t x1410 = -1LL;
	int16_t x1411 = -1;
	int32_t x1412 = -261183;

    t174 = (x1409>>(x1410<=(x1411+x1412)));

    if (t174 != 195) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1417 = INT32_MAX;
	int64_t x1418 = INT64_MAX;
	volatile int64_t x1419 = 7LL;
	int8_t x1420 = INT8_MIN;
	static int32_t t175 = INT32_MAX;

    t175 = (x1417>>(x1418<=(x1419+x1420)));

    if (t175 != INT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1429 = 12523LLU;
	static uint16_t x1432 = 17U;
	uint64_t t176 = 4463411137865LLU;

    t176 = (x1429>>(x1430<=(x1431+x1432)));

    if (t176 != 12523LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1441 = 4U;
	int64_t x1442 = -1LL;
	volatile int8_t x1443 = INT8_MIN;
	int32_t t177 = 107;

    t177 = (x1441>>(x1442<=(x1443+x1444)));

    if (t177 != 4) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1453 = 22;
	uint16_t x1454 = UINT16_MAX;
	uint64_t x1455 = 165007310656011LLU;
	volatile int8_t x1456 = -1;
	int32_t t178 = -44;

    t178 = (x1453>>(x1454<=(x1455+x1456)));

    if (t178 != 11) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1458 = INT8_MIN;
	uint32_t x1459 = 23U;
	int32_t x1460 = -474161;
	volatile int32_t t179 = 399562;

    t179 = (x1457>>(x1458<=(x1459+x1460)));

    if (t179 != 65535) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1465 = 7U;
	static int64_t x1466 = -1LL;
	uint64_t x1467 = UINT64_MAX;
	int32_t x1468 = -425069;

    t180 = (x1465>>(x1466<=(x1467+x1468)));

    if (t180 != 7) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x1469 = 0LLU;
	int8_t x1470 = -1;
	static int8_t x1471 = -1;
	static uint64_t x1472 = 33442LLU;
	uint64_t t181 = 223250844LLU;

    t181 = (x1469>>(x1470<=(x1471+x1472)));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1496 = 1;
	int32_t t182 = 7;

    t182 = (x1493>>(x1494<=(x1495+x1496)));

    if (t182 != 106) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1509 = 6;
	uint64_t x1511 = 1022196LLU;

    t183 = (x1509>>(x1510<=(x1511+x1512)));

    if (t183 != 3) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x1514 = INT32_MAX;
	int64_t x1515 = 9927998284165193LL;
	uint64_t x1516 = UINT64_MAX;
	static int32_t t184 = 4991;

    t184 = (x1513>>(x1514<=(x1515+x1516)));

    if (t184 != 9105) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1517 = UINT64_MAX;
	int32_t x1519 = INT32_MIN;
	int8_t x1520 = INT8_MAX;
	uint64_t t185 = UINT64_MAX;

    t185 = (x1517>>(x1518<=(x1519+x1520)));

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1521 = INT8_MAX;
	int32_t x1522 = -1;
	uint64_t x1524 = 8392831439584LLU;
	volatile int32_t t186 = 34001;

    t186 = (x1521>>(x1522<=(x1523+x1524)));

    if (t186 != 127) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x1529 = UINT16_MAX;
	uint64_t x1530 = UINT64_MAX;
	int16_t x1531 = INT16_MIN;
	uint8_t x1532 = 43U;
	int32_t t187 = 24384;

    t187 = (x1529>>(x1530<=(x1531+x1532)));

    if (t187 != 65535) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1537 = UINT16_MAX;
	static volatile int64_t x1538 = 90610305193016725LL;
	int32_t x1539 = INT32_MIN;
	int64_t x1540 = -39514LL;
	static int32_t t188 = -225545883;

    t188 = (x1537>>(x1538<=(x1539+x1540)));

    if (t188 != 65535) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x1549 = 2886261880204729414LL;
	int8_t x1550 = 0;
	volatile int32_t x1551 = INT32_MAX;
	static uint64_t x1552 = 3LLU;
	int64_t t189 = -6917180LL;

    t189 = (x1549>>(x1550<=(x1551+x1552)));

    if (t189 != 1443130940102364707LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1553 = 48U;
	int32_t x1554 = -1;
	volatile int64_t x1555 = -7LL;
	int64_t x1556 = -1LL;
	volatile int32_t t190 = -1;

    t190 = (x1553>>(x1554<=(x1555+x1556)));

    if (t190 != 48) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1557 = 12381U;
	int32_t x1558 = INT32_MIN;
	volatile uint8_t x1559 = 23U;

    t191 = (x1557>>(x1558<=(x1559+x1560)));

    if (t191 != 6190) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1566 = 3U;
	static int8_t x1567 = INT8_MIN;
	volatile uint64_t x1568 = 3044074123909LLU;
	volatile int32_t t192 = 2592497;

    t192 = (x1565>>(x1566<=(x1567+x1568)));

    if (t192 != 1073741823) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x1569 = INT16_MAX;
	uint16_t x1570 = 42U;
	uint64_t x1571 = UINT64_MAX;
	int64_t x1572 = INT64_MAX;

    t193 = (x1569>>(x1570<=(x1571+x1572)));

    if (t193 != 16383) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1575 = -21;
	int64_t x1576 = 18LL;
	static int32_t t194 = INT32_MAX;

    t194 = (x1573>>(x1574<=(x1575+x1576)));

    if (t194 != INT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint32_t x1601 = 188460U;
	int64_t x1602 = INT64_MAX;
	int16_t x1603 = INT16_MAX;
	static volatile int16_t x1604 = 3332;
	static volatile uint32_t t195 = 1U;

    t195 = (x1601>>(x1602<=(x1603+x1604)));

    if (t195 != 188460U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1605 = 2470U;
	uint32_t x1606 = 173619885U;
	volatile int64_t x1607 = -13620931913216747LL;
	int32_t x1608 = INT32_MIN;
	int32_t t196 = -15471;

    t196 = (x1605>>(x1606<=(x1607+x1608)));

    if (t196 != 2470) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1609 = 111U;
	int16_t x1610 = INT16_MIN;
	uint8_t x1611 = 45U;
	int64_t x1612 = -1LL;
	volatile int32_t t197 = 25;

    t197 = (x1609>>(x1610<=(x1611+x1612)));

    if (t197 != 55) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x1634 = 1;
	uint64_t x1635 = 435002LLU;
	volatile int16_t x1636 = INT16_MAX;
	static volatile uint64_t t198 = 50895810193283LLU;

    t198 = (x1633>>(x1634<=(x1635+x1636)));

    if (t198 != 2436691LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x1637 = 121543203LLU;
	int16_t x1638 = 47;
	uint16_t x1640 = 13628U;
	volatile uint64_t t199 = 12444LLU;

    t199 = (x1637>>(x1638<=(x1639+x1640)));

    if (t199 != 60771601LLU) { NG(); } else { ; }
	
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

