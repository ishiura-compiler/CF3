
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

static int8_t x6 = INT8_MIN;
int32_t x22 = 477285;
static int16_t x33 = 3;
volatile uint16_t x40 = UINT16_MAX;
volatile uint32_t t4 = UINT32_MAX;
static uint16_t x44 = 368U;
volatile int32_t x47 = -1;
volatile int32_t x53 = -1;
volatile int16_t x58 = INT16_MIN;
static volatile int32_t x68 = -1;
static uint32_t t11 = 71047251U;
static int32_t x77 = -1;
static int32_t x78 = -1;
static volatile int32_t t12 = 242620;
int64_t x87 = 6685621662956LL;
volatile int64_t t13 = INT64_MIN;
volatile int32_t x109 = INT32_MIN;
volatile uint64_t t17 = 546246414133186540LLU;
static uint64_t x121 = 491203749010LLU;
int64_t x124 = INT64_MAX;
uint64_t x125 = 3LLU;
int64_t x161 = INT64_MIN;
uint8_t x184 = UINT8_MAX;
uint64_t x187 = 153406889275477LLU;
int32_t x211 = INT32_MIN;
static uint32_t x213 = 355565332U;
volatile int16_t x217 = INT16_MIN;
int64_t x219 = -1LL;
volatile int32_t t34 = 13;
uint32_t x233 = 4182204U;
int16_t x234 = INT16_MAX;
volatile int64_t t37 = 5891LL;
uint8_t x271 = 78U;
static uint16_t x277 = 2U;
int64_t x279 = -91833LL;
uint64_t t41 = 5474151LLU;
static int16_t x284 = INT16_MAX;
uint16_t x302 = 168U;
int8_t x303 = INT8_MAX;
static uint32_t x314 = 17699U;
int64_t t45 = INT64_MAX;
uint32_t x317 = 9047643U;
uint32_t x320 = 2U;
int16_t x322 = INT16_MIN;
static volatile uint8_t x326 = UINT8_MAX;
int8_t x327 = -11;
static int64_t t48 = 7497152932986602LL;
volatile uint32_t x342 = 1013958U;
int64_t t50 = -1LL;
int32_t x365 = 34438;
volatile uint8_t x369 = 3U;
int8_t x371 = -2;
int16_t x377 = 946;
uint32_t x379 = UINT32_MAX;
uint64_t x380 = 15956830413LLU;
uint16_t x384 = 1U;
uint8_t x401 = UINT8_MAX;
int8_t x404 = 22;
int64_t t60 = -14680351034681067LL;
volatile uint16_t x416 = UINT16_MAX;
uint16_t x427 = 1U;
int32_t t62 = 107783;
static uint64_t x441 = 2855270LLU;
int32_t x450 = -1;
uint64_t x457 = 2996240LLU;
int32_t x458 = INT32_MAX;
volatile int64_t x460 = INT64_MAX;
int8_t x463 = -16;
int8_t x464 = -1;
int16_t x471 = INT16_MIN;
static volatile int64_t t67 = 66885599LL;
static volatile int64_t x482 = INT64_MIN;
int64_t t69 = -477650131LL;
uint32_t x505 = UINT32_MAX;
static int64_t x507 = INT64_MIN;
volatile int8_t x514 = 7;
int8_t x524 = INT8_MIN;
static int64_t x526 = INT64_MIN;
static int64_t x533 = INT64_MIN;
int32_t x541 = -107;
uint64_t x542 = 7086LLU;
uint16_t x548 = 2230U;
static uint16_t x549 = 486U;
volatile int32_t x550 = -1;
int8_t x559 = INT8_MIN;
uint64_t t82 = UINT64_MAX;
int32_t x565 = INT32_MIN;
static int64_t x573 = 20573114948576126LL;
uint16_t x583 = UINT16_MAX;
uint8_t x586 = 14U;
volatile int64_t t87 = INT64_MIN;
static volatile int64_t t88 = -558785785225444926LL;
volatile int64_t x599 = -31230727855927629LL;
int64_t x611 = INT64_MIN;
int64_t x617 = INT64_MIN;
int64_t x631 = 116LL;
static volatile int64_t t93 = -4828486315484LL;
static uint32_t x645 = 8U;
int8_t x659 = INT8_MAX;
uint8_t x689 = 22U;
int16_t x697 = INT16_MIN;
static int8_t x699 = -1;
int32_t t98 = -25909;
uint8_t x704 = 6U;
int32_t x705 = INT32_MIN;
uint8_t x725 = 83U;
uint32_t x727 = 25783U;
volatile int32_t t103 = -88725;
uint64_t x741 = 1322870LLU;
volatile uint64_t t105 = 2240LLU;
int64_t x745 = 220LL;
static int64_t x753 = INT64_MIN;
int8_t x762 = INT8_MAX;
uint32_t x791 = UINT32_MAX;
static uint8_t x793 = UINT8_MAX;
int32_t x795 = INT32_MIN;
volatile int16_t x820 = 0;
volatile int32_t t114 = 1;
int64_t x835 = INT64_MIN;
static int64_t x845 = -1LL;
volatile int16_t x860 = INT16_MAX;
uint16_t x865 = UINT16_MAX;
uint64_t x869 = UINT64_MAX;
uint64_t t121 = UINT64_MAX;
volatile int64_t x885 = 996130785355076LL;
volatile int16_t x886 = 123;
volatile int16_t x887 = INT16_MIN;
uint32_t x891 = 24701276U;
int64_t x894 = INT64_MAX;
int8_t x896 = -1;
static int16_t x904 = -1;
static volatile uint64_t t126 = 438348917021LLU;
uint32_t x919 = 1U;
static volatile int64_t t128 = 706080770456LL;
int32_t x942 = INT32_MAX;
int16_t x944 = INT16_MIN;
int32_t x946 = -7434;
static int64_t x947 = -22792110272829526LL;
int32_t t132 = -8;
int16_t x993 = 133;
int32_t x998 = -1;
uint16_t x999 = 2119U;
uint64_t t137 = 157106572LLU;
volatile int8_t x1001 = -10;
int16_t x1002 = INT16_MIN;
static int32_t t138 = 84354;
int64_t x1010 = -1LL;
int16_t x1020 = -1090;
volatile int64_t t140 = -15LL;
uint32_t x1026 = 80U;
int16_t x1027 = INT16_MIN;
int32_t x1029 = INT32_MAX;
static uint32_t x1032 = UINT32_MAX;
volatile int32_t t143 = -3004599;
volatile uint8_t x1056 = 16U;
int64_t x1068 = INT64_MAX;
static int8_t x1079 = -3;
volatile uint32_t t146 = UINT32_MAX;
static uint16_t x1086 = 10595U;
int64_t x1102 = INT64_MIN;
int16_t x1105 = INT16_MAX;
static volatile int64_t t150 = 83LL;
uint64_t x1136 = UINT64_MAX;
volatile int64_t t154 = -3869305158LL;
volatile uint32_t x1146 = 13473157U;
static int8_t x1151 = INT8_MIN;
volatile int32_t x1163 = -1;
int64_t x1168 = 601268055676LL;
int32_t x1173 = INT32_MIN;
volatile int32_t x1181 = -114027;
uint8_t x1183 = 0U;
static volatile int8_t x1189 = -1;
int8_t x1190 = 0;
int32_t x1191 = INT32_MIN;
int64_t x1194 = 274826244124LL;
int64_t x1205 = -7008652LL;
uint16_t x1208 = 1566U;
volatile int32_t t167 = 15017093;
volatile int32_t x1229 = INT32_MAX;
int32_t x1262 = 2;
static int16_t x1264 = -1;
int64_t t173 = 12795477651LL;
uint64_t x1273 = 1816139713LLU;
static int64_t x1277 = -1LL;
int32_t t177 = 194932;
volatile int64_t t178 = -1LL;
static volatile uint64_t t179 = 139288LLU;
uint64_t x1322 = 1902802193LLU;
int64_t x1325 = INT64_MIN;
int16_t x1351 = -1;
static int32_t t183 = 23213792;
static volatile int32_t t185 = -94;
uint64_t x1376 = 609849635613LLU;
uint32_t x1387 = 1U;
int16_t x1388 = INT16_MAX;
static int64_t x1399 = INT64_MIN;
int16_t x1409 = INT16_MAX;
int16_t x1411 = -877;
int32_t x1421 = INT32_MAX;
int32_t x1428 = INT32_MAX;
static uint8_t x1431 = 13U;
static int8_t x1449 = 24;
uint16_t x1457 = 1018U;


void f0(void) {
    	int64_t x5 = INT64_MIN;
	int32_t x7 = INT32_MAX;
	static uint32_t x8 = UINT32_MAX;
	volatile int64_t t0 = INT64_MIN;

    t0 = (x5+(x6%(x7<=x8)));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x13 = INT64_MAX;
	int8_t x14 = INT8_MIN;
	int32_t x15 = INT32_MIN;
	uint8_t x16 = 2U;
	static volatile int64_t t1 = INT64_MAX;

    t1 = (x13+(x14%(x15<=x16)));

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x21 = INT64_MIN;
	uint64_t x23 = 95LLU;
	static int8_t x24 = INT8_MAX;
	static int64_t t2 = INT64_MIN;

    t2 = (x21+(x22%(x23<=x24)));

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x34 = -62;
	int32_t x35 = -1;
	static int16_t x36 = INT16_MAX;
	static volatile int32_t t3 = 32146;

    t3 = (x33+(x34%(x35<=x36)));

    if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x37 = UINT32_MAX;
	uint8_t x38 = 8U;
	int8_t x39 = -1;

    t4 = (x37+(x38%(x39<=x40)));

    if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x41 = 27U;
	int64_t x42 = -1LL;
	int16_t x43 = INT16_MIN;
	volatile int64_t t5 = -554218252860161LL;

    t5 = (x41+(x42%(x43<=x44)));

    if (t5 != 27LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x45 = INT32_MIN;
	int64_t x46 = INT64_MIN;
	int32_t x48 = -1;
	volatile int64_t t6 = 394745407728LL;

    t6 = (x45+(x46%(x47<=x48)));

    if (t6 != -2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x49 = UINT64_MAX;
	volatile int64_t x50 = 13345517LL;
	int8_t x51 = INT8_MIN;
	static int16_t x52 = INT16_MAX;
	static volatile uint64_t t7 = UINT64_MAX;

    t7 = (x49+(x50%(x51<=x52)));

    if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x54 = -1;
	int16_t x55 = INT16_MAX;
	int32_t x56 = INT32_MAX;
	volatile int32_t t8 = 10;

    t8 = (x53+(x54%(x55<=x56)));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x57 = 197U;
	int32_t x59 = INT32_MIN;
	volatile int32_t x60 = INT32_MIN;
	static volatile int32_t t9 = -26659422;

    t9 = (x57+(x58%(x59<=x60)));

    if (t9 != 197) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x61 = INT32_MIN;
	int32_t x62 = INT32_MAX;
	volatile int32_t x63 = -235531300;
	volatile uint16_t x64 = 14213U;
	static int32_t t10 = INT32_MIN;

    t10 = (x61+(x62%(x63<=x64)));

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x65 = UINT8_MAX;
	uint32_t x66 = 1734018548U;
	static int16_t x67 = INT16_MIN;

    t11 = (x65+(x66%(x67<=x68)));

    if (t11 != 255U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x79 = 0;
	static int32_t x80 = 10;

    t12 = (x77+(x78%(x79<=x80)));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x85 = INT64_MIN;
	static volatile uint16_t x86 = 3U;
	static int64_t x88 = INT64_MAX;

    t13 = (x85+(x86%(x87<=x88)));

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x89 = -1;
	volatile int16_t x90 = -1;
	int32_t x91 = INT32_MIN;
	uint16_t x92 = 11U;
	int32_t t14 = 96127585;

    t14 = (x89+(x90%(x91<=x92)));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x105 = UINT32_MAX;
	int64_t x106 = INT64_MIN;
	int8_t x107 = INT8_MIN;
	static int32_t x108 = 0;
	int64_t t15 = 862LL;

    t15 = (x105+(x106%(x107<=x108)));

    if (t15 != 4294967295LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x110 = 21U;
	int16_t x111 = INT16_MIN;
	volatile int16_t x112 = INT16_MAX;
	volatile int32_t t16 = INT32_MIN;

    t16 = (x109+(x110%(x111<=x112)));

    if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x117 = 5382LLU;
	static int32_t x118 = INT32_MIN;
	int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MIN;

    t17 = (x117+(x118%(x119<=x120)));

    if (t17 != 5382LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x122 = 1;
	volatile uint8_t x123 = UINT8_MAX;
	static volatile uint64_t t18 = 3382780926041592LLU;

    t18 = (x121+(x122%(x123<=x124)));

    if (t18 != 491203749010LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x126 = INT8_MIN;
	volatile int16_t x127 = 1024;
	uint32_t x128 = 316897280U;
	volatile uint64_t t19 = 2LLU;

    t19 = (x125+(x126%(x127<=x128)));

    if (t19 != 3LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x141 = 13U;
	volatile int64_t x142 = INT64_MIN;
	int16_t x143 = INT16_MIN;
	int16_t x144 = INT16_MIN;
	volatile int64_t t20 = -565526565105518736LL;

    t20 = (x141+(x142%(x143<=x144)));

    if (t20 != 13LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x157 = INT32_MIN;
	uint64_t x158 = 24124499LLU;
	static uint32_t x159 = 225009U;
	static int32_t x160 = 2011703;
	volatile uint64_t t21 = 1041359675550LLU;

    t21 = (x157+(x158%(x159<=x160)));

    if (t21 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x162 = UINT64_MAX;
	uint64_t x163 = 459837212LLU;
	uint64_t x164 = UINT64_MAX;
	volatile uint64_t t22 = 8000507176728365LLU;

    t22 = (x161+(x162%(x163<=x164)));

    if (t22 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x165 = INT32_MIN;
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = -1;
	uint64_t x168 = UINT64_MAX;
	static int32_t t23 = INT32_MIN;

    t23 = (x165+(x166%(x167<=x168)));

    if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x181 = INT8_MAX;
	static uint8_t x182 = UINT8_MAX;
	int64_t x183 = INT64_MIN;
	static volatile int32_t t24 = -662120;

    t24 = (x181+(x182%(x183<=x184)));

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x185 = 57473936;
	uint16_t x186 = 1274U;
	int8_t x188 = -1;
	volatile int32_t t25 = -50289631;

    t25 = (x185+(x186%(x187<=x188)));

    if (t25 != 57473936) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x193 = -1;
	int8_t x194 = INT8_MAX;
	int16_t x195 = -402;
	uint32_t x196 = UINT32_MAX;
	static volatile int32_t t26 = 3;

    t26 = (x193+(x194%(x195<=x196)));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x201 = 15U;
	int64_t x202 = INT64_MIN;
	static int64_t x203 = INT64_MIN;
	volatile uint32_t x204 = UINT32_MAX;
	volatile int64_t t27 = 235181499038976LL;

    t27 = (x201+(x202%(x203<=x204)));

    if (t27 != 15LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x205 = 0;
	volatile uint8_t x206 = 2U;
	int64_t x207 = -1LL;
	uint8_t x208 = 2U;
	volatile int32_t t28 = -35470826;

    t28 = (x205+(x206%(x207<=x208)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x209 = UINT64_MAX;
	static uint8_t x210 = 59U;
	static volatile uint8_t x212 = 24U;
	static volatile uint64_t t29 = UINT64_MAX;

    t29 = (x209+(x210%(x211<=x212)));

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x214 = UINT8_MAX;
	int8_t x215 = INT8_MIN;
	int8_t x216 = -1;
	uint32_t t30 = 973623U;

    t30 = (x213+(x214%(x215<=x216)));

    if (t30 != 355565332U) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x218 = INT32_MAX;
	int64_t x220 = 1756616296450LL;
	int32_t t31 = -15418039;

    t31 = (x217+(x218%(x219<=x220)));

    if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int8_t x221 = INT8_MIN;
	static volatile uint16_t x222 = UINT16_MAX;
	uint32_t x223 = 28118U;
	static int8_t x224 = INT8_MIN;
	volatile int32_t t32 = -16233;

    t32 = (x221+(x222%(x223<=x224)));

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x225 = -1921027525361947LL;
	uint8_t x226 = 31U;
	uint32_t x227 = 1031713331U;
	int32_t x228 = INT32_MAX;
	volatile int64_t t33 = 537320LL;

    t33 = (x225+(x226%(x227<=x228)));

    if (t33 != -1921027525361947LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x229 = -1;
	volatile uint16_t x230 = 3116U;
	int64_t x231 = 1LL;
	volatile int64_t x232 = 55161298LL;

    t34 = (x229+(x230%(x231<=x232)));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x235 = 68U;
	static uint16_t x236 = UINT16_MAX;
	static volatile uint32_t t35 = 10254U;

    t35 = (x233+(x234%(x235<=x236)));

    if (t35 != 4182204U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x241 = UINT8_MAX;
	static uint8_t x242 = 37U;
	volatile uint32_t x243 = 40103475U;
	int8_t x244 = -1;
	volatile int32_t t36 = -417095693;

    t36 = (x241+(x242%(x243<=x244)));

    if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x249 = -497LL;
	int8_t x250 = INT8_MAX;
	int8_t x251 = -1;
	static uint32_t x252 = UINT32_MAX;

    t37 = (x249+(x250%(x251<=x252)));

    if (t37 != -497LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x261 = -443512366990719LL;
	int8_t x262 = 0;
	uint64_t x263 = UINT64_MAX;
	uint64_t x264 = UINT64_MAX;
	volatile int64_t t38 = 37LL;

    t38 = (x261+(x262%(x263<=x264)));

    if (t38 != -443512366990719LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x269 = -1;
	int8_t x270 = 2;
	volatile uint16_t x272 = UINT16_MAX;
	int32_t t39 = -5151053;

    t39 = (x269+(x270%(x271<=x272)));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x273 = -1482;
	int16_t x274 = -421;
	uint32_t x275 = 56962119U;
	static int32_t x276 = -10914;
	int32_t t40 = -3;

    t40 = (x273+(x274%(x275<=x276)));

    if (t40 != -1482) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x278 = UINT64_MAX;
	uint8_t x280 = UINT8_MAX;

    t41 = (x277+(x278%(x279<=x280)));

    if (t41 != 2LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x281 = -468;
	int64_t x282 = -61925367339LL;
	volatile uint64_t x283 = 31485LLU;
	int64_t t42 = 27LL;

    t42 = (x281+(x282%(x283<=x284)));

    if (t42 != -468LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x289 = 3689912470731704LLU;
	static volatile int8_t x290 = INT8_MAX;
	int64_t x291 = INT64_MIN;
	volatile int16_t x292 = -1;
	static uint64_t t43 = 50629857128443LLU;

    t43 = (x289+(x290%(x291<=x292)));

    if (t43 != 3689912470731704LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x301 = INT64_MIN;
	int16_t x304 = INT16_MAX;
	int64_t t44 = INT64_MIN;

    t44 = (x301+(x302%(x303<=x304)));

    if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x313 = INT64_MAX;
	int32_t x315 = -11631;
	volatile int8_t x316 = INT8_MAX;

    t45 = (x313+(x314%(x315<=x316)));

    if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x318 = INT16_MIN;
	int32_t x319 = 0;
	volatile uint32_t t46 = 6171U;

    t46 = (x317+(x318%(x319<=x320)));

    if (t46 != 9047643U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x321 = 1LLU;
	uint16_t x323 = 6U;
	static uint64_t x324 = UINT64_MAX;
	static uint64_t t47 = 27154177972LLU;

    t47 = (x321+(x322%(x323<=x324)));

    if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x325 = -1937974LL;
	int64_t x328 = -1LL;

    t48 = (x325+(x326%(x327<=x328)));

    if (t48 != -1937974LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x337 = -1LL;
	int16_t x338 = 0;
	int8_t x339 = -2;
	int32_t x340 = -1;
	int64_t t49 = -45081479191721026LL;

    t49 = (x337+(x338%(x339<=x340)));

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x341 = -883251553067149LL;
	static uint32_t x343 = 127007031U;
	static int8_t x344 = INT8_MIN;

    t50 = (x341+(x342%(x343<=x344)));

    if (t50 != -883251553067149LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MIN;
	static int8_t x352 = 1;
	int32_t t51 = INT32_MIN;

    t51 = (x349+(x350%(x351<=x352)));

    if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x366 = 448;
	static uint64_t x367 = 629323631LLU;
	static volatile int64_t x368 = INT64_MIN;
	volatile int32_t t52 = 862;

    t52 = (x365+(x366%(x367<=x368)));

    if (t52 != 34438) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x370 = 11LLU;
	uint8_t x372 = 7U;
	static uint64_t t53 = 186543246697886LLU;

    t53 = (x369+(x370%(x371<=x372)));

    if (t53 != 3LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x378 = 71299806U;
	volatile uint32_t t54 = 752U;

    t54 = (x377+(x378%(x379<=x380)));

    if (t54 != 946U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x381 = INT64_MAX;
	uint32_t x382 = 27290669U;
	int32_t x383 = -23;
	int64_t t55 = INT64_MAX;

    t55 = (x381+(x382%(x383<=x384)));

    if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x385 = INT16_MIN;
	uint8_t x386 = 1U;
	static uint8_t x387 = UINT8_MAX;
	int16_t x388 = INT16_MAX;
	volatile int32_t t56 = -353;

    t56 = (x385+(x386%(x387<=x388)));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x389 = 1;
	static int32_t x390 = INT32_MIN;
	int8_t x391 = -1;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t57 = -154495055;

    t57 = (x389+(x390%(x391<=x392)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x393 = UINT16_MAX;
	volatile int8_t x394 = INT8_MIN;
	int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MIN;
	volatile int32_t t58 = 2022822;

    t58 = (x393+(x394%(x395<=x396)));

    if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x402 = 0U;
	static int64_t x403 = -37328406LL;
	int32_t t59 = 77565778;

    t59 = (x401+(x402%(x403<=x404)));

    if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x405 = INT16_MIN;
	int64_t x406 = INT64_MIN;
	int64_t x407 = -1LL;
	uint8_t x408 = 1U;

    t60 = (x405+(x406%(x407<=x408)));

    if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x413 = 2U;
	int32_t x414 = INT32_MIN;
	int16_t x415 = 13050;
	int32_t t61 = 111666;

    t61 = (x413+(x414%(x415<=x416)));

    if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x425 = INT16_MAX;
	uint8_t x426 = 114U;
	static volatile int32_t x428 = INT32_MAX;

    t62 = (x425+(x426%(x427<=x428)));

    if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x442 = UINT64_MAX;
	volatile uint32_t x443 = 158U;
	uint64_t x444 = UINT64_MAX;
	volatile uint64_t t63 = 11213LLU;

    t63 = (x441+(x442%(x443<=x444)));

    if (t63 != 2855270LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x449 = -22;
	uint16_t x451 = 82U;
	static volatile int64_t x452 = INT64_MAX;
	volatile int32_t t64 = 1;

    t64 = (x449+(x450%(x451<=x452)));

    if (t64 != -22) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x459 = -1;
	uint64_t t65 = 397940LLU;

    t65 = (x457+(x458%(x459<=x460)));

    if (t65 != 2996240LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x461 = 154U;
	uint32_t x462 = 997U;
	volatile uint32_t t66 = 179397U;

    t66 = (x461+(x462%(x463<=x464)));

    if (t66 != 154U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x469 = 52U;
	int64_t x470 = -1LL;
	uint8_t x472 = 5U;

    t67 = (x469+(x470%(x471<=x472)));

    if (t67 != 52LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x473 = -1;
	int32_t x474 = 6686224;
	int8_t x475 = -1;
	int64_t x476 = 43965LL;
	volatile int32_t t68 = 846;

    t68 = (x473+(x474%(x475<=x476)));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x481 = INT32_MIN;
	static int8_t x483 = INT8_MIN;
	int32_t x484 = -1;

    t69 = (x481+(x482%(x483<=x484)));

    if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x485 = INT32_MAX;
	volatile int32_t x486 = INT32_MIN;
	volatile int64_t x487 = INT64_MIN;
	int64_t x488 = INT64_MAX;
	volatile int32_t t70 = INT32_MAX;

    t70 = (x485+(x486%(x487<=x488)));

    if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x489 = -938020069;
	static volatile int64_t x490 = INT64_MAX;
	int8_t x491 = INT8_MIN;
	int8_t x492 = 3;
	int64_t t71 = -720290347273LL;

    t71 = (x489+(x490%(x491<=x492)));

    if (t71 != -938020069LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x493 = 11679;
	uint8_t x494 = 6U;
	int16_t x495 = -1;
	uint8_t x496 = 38U;
	int32_t t72 = -133597527;

    t72 = (x493+(x494%(x495<=x496)));

    if (t72 != 11679) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x506 = 31157258;
	static int16_t x508 = INT16_MIN;
	uint32_t t73 = UINT32_MAX;

    t73 = (x505+(x506%(x507<=x508)));

    if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x513 = 511U;
	uint32_t x515 = 8060358U;
	uint32_t x516 = 668741851U;
	uint32_t t74 = 28982786U;

    t74 = (x513+(x514%(x515<=x516)));

    if (t74 != 511U) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x517 = INT16_MAX;
	static uint32_t x518 = 56435U;
	int8_t x519 = -56;
	static int16_t x520 = 25;
	uint32_t t75 = 129597U;

    t75 = (x517+(x518%(x519<=x520)));

    if (t75 != 32767U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x521 = INT8_MIN;
	static int16_t x522 = INT16_MIN;
	volatile int16_t x523 = INT16_MIN;
	static int32_t t76 = 4256400;

    t76 = (x521+(x522%(x523<=x524)));

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x525 = INT32_MIN;
	int8_t x527 = INT8_MIN;
	static int32_t x528 = 512048;
	int64_t t77 = -15539LL;

    t77 = (x525+(x526%(x527<=x528)));

    if (t77 != -2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x534 = -1LL;
	int8_t x535 = 0;
	volatile uint64_t x536 = 4263645513974241LLU;
	int64_t t78 = INT64_MIN;

    t78 = (x533+(x534%(x535<=x536)));

    if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x543 = UINT16_MAX;
	int32_t x544 = INT32_MAX;
	uint64_t t79 = 2743951095524975LLU;

    t79 = (x541+(x542%(x543<=x544)));

    if (t79 != 18446744073709551509LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x545 = -1;
	int64_t x546 = INT64_MAX;
	int64_t x547 = INT64_MIN;
	static int64_t t80 = 5740583285LL;

    t80 = (x545+(x546%(x547<=x548)));

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x551 = -1;
	volatile uint8_t x552 = 1U;
	int32_t t81 = -142941;

    t81 = (x549+(x550%(x551<=x552)));

    if (t81 != 486) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x557 = UINT64_MAX;
	uint16_t x558 = 16380U;
	volatile int16_t x560 = -1;

    t82 = (x557+(x558%(x559<=x560)));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x561 = -1LL;
	int16_t x562 = 173;
	static int16_t x563 = INT16_MAX;
	int64_t x564 = 60320762675026385LL;
	volatile int64_t t83 = 3799043426LL;

    t83 = (x561+(x562%(x563<=x564)));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x566 = 2135334LL;
	volatile int64_t x567 = INT64_MIN;
	static int32_t x568 = -1;
	volatile int64_t t84 = 115394457446LL;

    t84 = (x565+(x566%(x567<=x568)));

    if (t84 != -2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x574 = 18438342;
	int16_t x575 = INT16_MAX;
	int64_t x576 = INT64_MAX;
	int64_t t85 = -833569551LL;

    t85 = (x573+(x574%(x575<=x576)));

    if (t85 != 20573114948576126LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x581 = -1;
	volatile int64_t x582 = INT64_MAX;
	uint16_t x584 = UINT16_MAX;
	static int64_t t86 = 1714056637362421LL;

    t86 = (x581+(x582%(x583<=x584)));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x585 = INT64_MIN;
	uint64_t x587 = UINT64_MAX;
	int8_t x588 = -1;

    t87 = (x585+(x586%(x587<=x588)));

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x589 = INT16_MIN;
	static int64_t x590 = INT64_MAX;
	volatile int32_t x591 = -1;
	volatile int8_t x592 = -1;

    t88 = (x589+(x590%(x591<=x592)));

    if (t88 != -32768LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x597 = INT64_MIN;
	volatile int8_t x598 = 6;
	int32_t x600 = INT32_MIN;
	static int64_t t89 = INT64_MIN;

    t89 = (x597+(x598%(x599<=x600)));

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x609 = UINT32_MAX;
	volatile int8_t x610 = -1;
	static uint32_t x612 = UINT32_MAX;
	uint32_t t90 = UINT32_MAX;

    t90 = (x609+(x610%(x611<=x612)));

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x613 = 2U;
	static uint16_t x614 = UINT16_MAX;
	int8_t x615 = INT8_MIN;
	uint32_t x616 = UINT32_MAX;
	volatile int32_t t91 = -6660611;

    t91 = (x613+(x614%(x615<=x616)));

    if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x618 = 12U;
	int8_t x619 = -1;
	int8_t x620 = -1;
	int64_t t92 = INT64_MIN;

    t92 = (x617+(x618%(x619<=x620)));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x629 = 17;
	int64_t x630 = INT64_MIN;
	int64_t x632 = INT64_MAX;

    t93 = (x629+(x630%(x631<=x632)));

    if (t93 != 17LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x646 = 207541891LLU;
	int8_t x647 = 3;
	uint32_t x648 = UINT32_MAX;
	volatile uint64_t t94 = 1426879014892LLU;

    t94 = (x645+(x646%(x647<=x648)));

    if (t94 != 8LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x657 = 277150228699387908LLU;
	uint8_t x658 = 121U;
	uint64_t x660 = 24308264018071LLU;
	volatile uint64_t t95 = 18293806LLU;

    t95 = (x657+(x658%(x659<=x660)));

    if (t95 != 277150228699387908LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x677 = 5834747U;
	volatile int8_t x678 = 40;
	static int16_t x679 = 43;
	uint32_t x680 = 16533613U;
	volatile uint32_t t96 = 11U;

    t96 = (x677+(x678%(x679<=x680)));

    if (t96 != 5834747U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x690 = 50741223293822LL;
	int8_t x691 = 19;
	static int64_t x692 = INT64_MAX;
	int64_t t97 = -614020653736LL;

    t97 = (x689+(x690%(x691<=x692)));

    if (t97 != 22LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x698 = INT32_MIN;
	static int64_t x700 = 5747994846864LL;

    t98 = (x697+(x698%(x699<=x700)));

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x701 = 7U;
	static volatile int32_t x702 = 33293973;
	int64_t x703 = -1LL;
	static uint32_t t99 = 232U;

    t99 = (x701+(x702%(x703<=x704)));

    if (t99 != 7U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x706 = INT16_MAX;
	uint32_t x707 = 1621453403U;
	static int16_t x708 = INT16_MIN;
	volatile int32_t t100 = INT32_MIN;

    t100 = (x705+(x706%(x707<=x708)));

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint64_t x709 = UINT64_MAX;
	volatile int64_t x710 = -7LL;
	static uint32_t x711 = 127287725U;
	uint64_t x712 = UINT64_MAX;
	volatile uint64_t t101 = UINT64_MAX;

    t101 = (x709+(x710%(x711<=x712)));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x717 = -5;
	static int32_t x718 = -1;
	uint8_t x719 = 3U;
	uint64_t x720 = UINT64_MAX;
	int32_t t102 = -1730214;

    t102 = (x717+(x718%(x719<=x720)));

    if (t102 != -5) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x726 = 1064U;
	volatile int32_t x728 = INT32_MIN;

    t103 = (x725+(x726%(x727<=x728)));

    if (t103 != 83) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int32_t x737 = -322508933;
	uint8_t x738 = 1U;
	int64_t x739 = INT64_MIN;
	static uint8_t x740 = UINT8_MAX;
	static int32_t t104 = -634155621;

    t104 = (x737+(x738%(x739<=x740)));

    if (t104 != -322508933) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x742 = 1558640846110LLU;
	int32_t x743 = 2;
	int64_t x744 = INT64_MAX;

    t105 = (x741+(x742%(x743<=x744)));

    if (t105 != 1322870LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x746 = 34964;
	uint64_t x747 = 181885778LLU;
	static volatile int16_t x748 = INT16_MIN;
	int64_t t106 = 0LL;

    t106 = (x745+(x746%(x747<=x748)));

    if (t106 != 220LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x754 = 174061U;
	uint16_t x755 = 57U;
	uint32_t x756 = 477U;
	volatile int64_t t107 = INT64_MIN;

    t107 = (x753+(x754%(x755<=x756)));

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x761 = INT16_MIN;
	uint64_t x763 = 185LLU;
	int16_t x764 = INT16_MIN;
	static volatile int32_t t108 = 3251724;

    t108 = (x761+(x762%(x763<=x764)));

    if (t108 != -32768) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x769 = 10406U;
	int32_t x770 = 272627;
	uint64_t x771 = 705944963215LLU;
	static int32_t x772 = INT32_MIN;
	uint32_t t109 = 6117632U;

    t109 = (x769+(x770%(x771<=x772)));

    if (t109 != 10406U) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x785 = 5743902558662462LLU;
	int16_t x786 = INT16_MAX;
	static int8_t x787 = INT8_MIN;
	int8_t x788 = 1;
	uint64_t t110 = 2553612287832527308LLU;

    t110 = (x785+(x786%(x787<=x788)));

    if (t110 != 5743902558662462LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x789 = -39264056LL;
	uint32_t x790 = 5355U;
	int32_t x792 = -1;
	volatile int64_t t111 = 13290546766LL;

    t111 = (x789+(x790%(x791<=x792)));

    if (t111 != -39264056LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x794 = 361U;
	int64_t x796 = 1087825LL;
	static int32_t t112 = -1337599;

    t112 = (x793+(x794%(x795<=x796)));

    if (t112 != 255) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x797 = 16155U;
	static uint8_t x798 = 85U;
	volatile int8_t x799 = -1;
	uint32_t x800 = UINT32_MAX;
	int32_t t113 = -7493;

    t113 = (x797+(x798%(x799<=x800)));

    if (t113 != 16155) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x817 = INT8_MIN;
	int16_t x818 = 16337;
	int32_t x819 = INT32_MIN;

    t114 = (x817+(x818%(x819<=x820)));

    if (t114 != -128) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int16_t x833 = 633;
	int16_t x834 = -1;
	volatile int32_t x836 = INT32_MIN;
	static volatile int32_t t115 = -2;

    t115 = (x833+(x834%(x835<=x836)));

    if (t115 != 633) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x846 = 0U;
	volatile int8_t x847 = INT8_MIN;
	static int32_t x848 = 2792;
	int64_t t116 = 5538555982659216LL;

    t116 = (x845+(x846%(x847<=x848)));

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x853 = 1725765843882569LLU;
	uint16_t x854 = UINT16_MAX;
	volatile uint8_t x855 = 126U;
	uint64_t x856 = 118944570331LLU;
	uint64_t t117 = 0LLU;

    t117 = (x853+(x854%(x855<=x856)));

    if (t117 != 1725765843882569LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x857 = INT64_MAX;
	static uint16_t x858 = 70U;
	uint16_t x859 = 8285U;
	volatile int64_t t118 = INT64_MAX;

    t118 = (x857+(x858%(x859<=x860)));

    if (t118 != INT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x861 = INT16_MAX;
	volatile int32_t x862 = -47695124;
	int32_t x863 = INT32_MIN;
	int8_t x864 = INT8_MAX;
	volatile int32_t t119 = -108344575;

    t119 = (x861+(x862%(x863<=x864)));

    if (t119 != 32767) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x866 = INT32_MIN;
	int64_t x867 = -2090489916992694LL;
	static uint8_t x868 = 3U;
	int32_t t120 = 244548;

    t120 = (x865+(x866%(x867<=x868)));

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x870 = INT8_MIN;
	int32_t x871 = INT32_MIN;
	uint8_t x872 = 3U;

    t121 = (x869+(x870%(x871<=x872)));

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x888 = UINT64_MAX;
	int64_t t122 = 5275867330495128LL;

    t122 = (x885+(x886%(x887<=x888)));

    if (t122 != 996130785355076LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x889 = UINT16_MAX;
	int64_t x890 = -1LL;
	int8_t x892 = INT8_MIN;
	int64_t t123 = 3354LL;

    t123 = (x889+(x890%(x891<=x892)));

    if (t123 != 65535LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x893 = 104LLU;
	static int16_t x895 = -6;
	volatile uint64_t t124 = 216707065LLU;

    t124 = (x893+(x894%(x895<=x896)));

    if (t124 != 104LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x901 = -1;
	uint64_t x902 = UINT64_MAX;
	volatile int64_t x903 = -1LL;
	uint64_t t125 = UINT64_MAX;

    t125 = (x901+(x902%(x903<=x904)));

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x905 = 35134741439939272LLU;
	int16_t x906 = INT16_MIN;
	int64_t x907 = -7634414LL;
	int16_t x908 = -10168;

    t126 = (x905+(x906%(x907<=x908)));

    if (t126 != 35134741439939272LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x913 = INT32_MIN;
	static int32_t x914 = 3445;
	static int32_t x915 = -1;
	uint8_t x916 = 0U;
	int32_t t127 = INT32_MIN;

    t127 = (x913+(x914%(x915<=x916)));

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x917 = INT32_MAX;
	int64_t x918 = -31134LL;
	uint32_t x920 = 118203U;

    t128 = (x917+(x918%(x919<=x920)));

    if (t128 != 2147483647LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x921 = 147817869053776483LLU;
	int64_t x922 = -1LL;
	static uint64_t x923 = 65LLU;
	uint16_t x924 = UINT16_MAX;
	volatile uint64_t t129 = 566LLU;

    t129 = (x921+(x922%(x923<=x924)));

    if (t129 != 147817869053776483LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x933 = INT64_MIN;
	volatile int64_t x934 = -23399LL;
	volatile int64_t x935 = -1LL;
	int8_t x936 = INT8_MAX;
	volatile int64_t t130 = INT64_MIN;

    t130 = (x933+(x934%(x935<=x936)));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x941 = -107065;
	volatile uint32_t x943 = 2038660133U;
	static int32_t t131 = 809699;

    t131 = (x941+(x942%(x943<=x944)));

    if (t131 != -107065) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x945 = INT8_MIN;
	int16_t x948 = 1;

    t132 = (x945+(x946%(x947<=x948)));

    if (t132 != -128) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x949 = -2;
	volatile uint16_t x950 = UINT16_MAX;
	volatile uint64_t x951 = 1589290540LLU;
	int8_t x952 = INT8_MIN;
	static int32_t t133 = -1;

    t133 = (x949+(x950%(x951<=x952)));

    if (t133 != -2) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x977 = -1;
	static int16_t x978 = INT16_MIN;
	int16_t x979 = 0;
	uint64_t x980 = 161277LLU;
	int32_t t134 = -32643;

    t134 = (x977+(x978%(x979<=x980)));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x981 = UINT32_MAX;
	uint8_t x982 = 6U;
	int32_t x983 = INT32_MIN;
	static volatile uint16_t x984 = 3933U;
	volatile uint32_t t135 = UINT32_MAX;

    t135 = (x981+(x982%(x983<=x984)));

    if (t135 != UINT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x994 = UINT32_MAX;
	int8_t x995 = 2;
	volatile int32_t x996 = INT32_MAX;
	uint32_t t136 = 40608U;

    t136 = (x993+(x994%(x995<=x996)));

    if (t136 != 133U) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x997 = 11497528247LLU;
	uint64_t x1000 = 29447563LLU;

    t137 = (x997+(x998%(x999<=x1000)));

    if (t137 != 11497528247LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x1003 = INT8_MIN;
	uint16_t x1004 = 52U;

    t138 = (x1001+(x1002%(x1003<=x1004)));

    if (t138 != -10) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x1009 = -1;
	int32_t x1011 = -1;
	uint8_t x1012 = UINT8_MAX;
	volatile int64_t t139 = -2LL;

    t139 = (x1009+(x1010%(x1011<=x1012)));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1017 = -1436101968LL;
	int8_t x1018 = -1;
	int64_t x1019 = INT64_MIN;

    t140 = (x1017+(x1018%(x1019<=x1020)));

    if (t140 != -1436101968LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x1025 = UINT16_MAX;
	int8_t x1028 = -1;
	uint32_t t141 = 3U;

    t141 = (x1025+(x1026%(x1027<=x1028)));

    if (t141 != 65535U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x1030 = -1;
	static int16_t x1031 = INT16_MIN;
	volatile int32_t t142 = INT32_MAX;

    t142 = (x1029+(x1030%(x1031<=x1032)));

    if (t142 != INT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x1033 = 23U;
	int32_t x1034 = INT32_MIN;
	int8_t x1035 = 35;
	int64_t x1036 = INT64_MAX;

    t143 = (x1033+(x1034%(x1035<=x1036)));

    if (t143 != 23) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x1053 = INT32_MAX;
	int16_t x1054 = 8;
	volatile int16_t x1055 = 0;
	volatile int32_t t144 = INT32_MAX;

    t144 = (x1053+(x1054%(x1055<=x1056)));

    if (t144 != INT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x1065 = 12U;
	int32_t x1066 = -1;
	int64_t x1067 = INT64_MAX;
	static int32_t t145 = 1283100;

    t145 = (x1065+(x1066%(x1067<=x1068)));

    if (t145 != 12) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x1077 = UINT32_MAX;
	int16_t x1078 = INT16_MAX;
	int16_t x1080 = -1;

    t146 = (x1077+(x1078%(x1079<=x1080)));

    if (t146 != UINT32_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x1085 = INT8_MIN;
	int16_t x1087 = -13621;
	int8_t x1088 = INT8_MAX;
	volatile int32_t t147 = 6031;

    t147 = (x1085+(x1086%(x1087<=x1088)));

    if (t147 != -128) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x1093 = -1;
	volatile uint16_t x1094 = 13U;
	uint16_t x1095 = 16313U;
	volatile uint64_t x1096 = 1271094378LLU;
	int32_t t148 = -640;

    t148 = (x1093+(x1094%(x1095<=x1096)));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1101 = -1;
	static int8_t x1103 = INT8_MIN;
	int8_t x1104 = -1;
	volatile int64_t t149 = -189LL;

    t149 = (x1101+(x1102%(x1103<=x1104)));

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1106 = -80829167LL;
	volatile int32_t x1107 = -1;
	int8_t x1108 = 0;

    t150 = (x1105+(x1106%(x1107<=x1108)));

    if (t150 != 32767LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x1113 = INT16_MIN;
	static int32_t x1114 = -22017634;
	int64_t x1115 = INT64_MIN;
	int8_t x1116 = INT8_MAX;
	int32_t t151 = -35;

    t151 = (x1113+(x1114%(x1115<=x1116)));

    if (t151 != -32768) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x1125 = 0;
	int16_t x1126 = INT16_MAX;
	int64_t x1127 = INT64_MIN;
	int16_t x1128 = INT16_MIN;
	static volatile int32_t t152 = 361;

    t152 = (x1125+(x1126%(x1127<=x1128)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x1133 = 0U;
	static int64_t x1134 = -423341540419111206LL;
	static volatile int32_t x1135 = -1;
	volatile int64_t t153 = 477443374LL;

    t153 = (x1133+(x1134%(x1135<=x1136)));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x1141 = UINT8_MAX;
	int64_t x1142 = INT64_MIN;
	int16_t x1143 = 3748;
	uint32_t x1144 = UINT32_MAX;

    t154 = (x1141+(x1142%(x1143<=x1144)));

    if (t154 != 255LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x1145 = 41544592;
	uint8_t x1147 = 0U;
	int64_t x1148 = 7220828949369135LL;
	uint32_t t155 = 139U;

    t155 = (x1145+(x1146%(x1147<=x1148)));

    if (t155 != 41544592U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x1149 = INT16_MIN;
	volatile uint8_t x1150 = 0U;
	static int32_t x1152 = -1;
	int32_t t156 = -105712035;

    t156 = (x1149+(x1150%(x1151<=x1152)));

    if (t156 != -32768) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x1161 = 376025142U;
	int32_t x1162 = 5;
	static int64_t x1164 = -1LL;
	volatile uint32_t t157 = 576378429U;

    t157 = (x1161+(x1162%(x1163<=x1164)));

    if (t157 != 376025142U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1165 = -13539;
	static int64_t x1166 = INT64_MAX;
	static uint8_t x1167 = 11U;
	volatile int64_t t158 = 12342203027LL;

    t158 = (x1165+(x1166%(x1167<=x1168)));

    if (t158 != -13539LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1174 = 7;
	int32_t x1175 = INT32_MAX;
	uint64_t x1176 = UINT64_MAX;
	volatile int32_t t159 = INT32_MIN;

    t159 = (x1173+(x1174%(x1175<=x1176)));

    if (t159 != INT32_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1177 = 5U;
	int32_t x1178 = INT32_MAX;
	volatile uint8_t x1179 = UINT8_MAX;
	volatile uint64_t x1180 = UINT64_MAX;
	int32_t t160 = -5265;

    t160 = (x1177+(x1178%(x1179<=x1180)));

    if (t160 != 5) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x1182 = 114LLU;
	static int16_t x1184 = 16013;
	static uint64_t t161 = 4992369526572638371LLU;

    t161 = (x1181+(x1182%(x1183<=x1184)));

    if (t161 != 18446744073709437589LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1192 = 3U;
	int32_t t162 = -4818093;

    t162 = (x1189+(x1190%(x1191<=x1192)));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1193 = -1;
	volatile int32_t x1195 = INT32_MIN;
	int32_t x1196 = 116791966;
	volatile int64_t t163 = -468435338133567104LL;

    t163 = (x1193+(x1194%(x1195<=x1196)));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1197 = INT16_MIN;
	volatile int32_t x1198 = -1;
	int8_t x1199 = INT8_MIN;
	int64_t x1200 = -1LL;
	static int32_t t164 = -83168;

    t164 = (x1197+(x1198%(x1199<=x1200)));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x1201 = 5289786U;
	static uint16_t x1202 = UINT16_MAX;
	volatile int64_t x1203 = INT64_MIN;
	static int16_t x1204 = INT16_MIN;
	uint32_t t165 = 507422U;

    t165 = (x1201+(x1202%(x1203<=x1204)));

    if (t165 != 5289786U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x1206 = -1;
	int64_t x1207 = -483359LL;
	int64_t t166 = -6814LL;

    t166 = (x1205+(x1206%(x1207<=x1208)));

    if (t166 != -7008652LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x1209 = -1;
	int32_t x1210 = 36023;
	int16_t x1211 = -7497;
	uint64_t x1212 = UINT64_MAX;

    t167 = (x1209+(x1210%(x1211<=x1212)));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x1213 = -1;
	static int64_t x1214 = 1LL;
	uint64_t x1215 = 162017573505LLU;
	volatile int32_t x1216 = -1;
	volatile int64_t t168 = -1055933230888LL;

    t168 = (x1213+(x1214%(x1215<=x1216)));

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1230 = 697224U;
	int16_t x1231 = -170;
	static volatile uint16_t x1232 = 3307U;
	volatile uint32_t t169 = 234946381U;

    t169 = (x1229+(x1230%(x1231<=x1232)));

    if (t169 != 2147483647U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1245 = 18004U;
	int16_t x1246 = INT16_MIN;
	int16_t x1247 = -1;
	uint16_t x1248 = UINT16_MAX;
	int32_t t170 = -335812;

    t170 = (x1245+(x1246%(x1247<=x1248)));

    if (t170 != 18004) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x1257 = -2;
	static int16_t x1258 = INT16_MIN;
	uint16_t x1259 = UINT16_MAX;
	int64_t x1260 = 34687799894763352LL;
	int32_t t171 = -344;

    t171 = (x1257+(x1258%(x1259<=x1260)));

    if (t171 != -2) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1261 = -1113334;
	static uint64_t x1263 = UINT64_MAX;
	volatile int32_t t172 = -463817;

    t172 = (x1261+(x1262%(x1263<=x1264)));

    if (t172 != -1113334) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1269 = INT8_MIN;
	static int64_t x1270 = INT64_MAX;
	int64_t x1271 = -821348907431LL;
	uint32_t x1272 = 46U;

    t173 = (x1269+(x1270%(x1271<=x1272)));

    if (t173 != -128LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x1274 = INT64_MAX;
	static int8_t x1275 = 60;
	uint64_t x1276 = 223772477LLU;
	uint64_t t174 = 8LLU;

    t174 = (x1273+(x1274%(x1275<=x1276)));

    if (t174 != 1816139713LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1278 = -25;
	int32_t x1279 = INT32_MIN;
	uint8_t x1280 = 35U;
	int64_t t175 = 6958173781662LL;

    t175 = (x1277+(x1278%(x1279<=x1280)));

    if (t175 != -1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x1281 = 7267737LLU;
	uint64_t x1282 = 834196264LLU;
	int16_t x1283 = INT16_MIN;
	uint8_t x1284 = UINT8_MAX;
	uint64_t t176 = 3601825203LLU;

    t176 = (x1281+(x1282%(x1283<=x1284)));

    if (t176 != 7267737LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1285 = -14;
	int16_t x1286 = INT16_MIN;
	int64_t x1287 = -1LL;
	uint8_t x1288 = 2U;

    t177 = (x1285+(x1286%(x1287<=x1288)));

    if (t177 != -14) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1289 = -1LL;
	int64_t x1290 = 15650922404327811LL;
	int32_t x1291 = 77059924;
	volatile int64_t x1292 = INT64_MAX;

    t178 = (x1289+(x1290%(x1291<=x1292)));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1301 = INT8_MIN;
	uint64_t x1302 = UINT64_MAX;
	int32_t x1303 = INT32_MIN;
	uint16_t x1304 = 46U;

    t179 = (x1301+(x1302%(x1303<=x1304)));

    if (t179 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x1321 = INT32_MIN;
	volatile int8_t x1323 = -1;
	int32_t x1324 = INT32_MAX;
	uint64_t t180 = 894LLU;

    t180 = (x1321+(x1322%(x1323<=x1324)));

    if (t180 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x1326 = 122U;
	int32_t x1327 = -40770328;
	int64_t x1328 = -14343LL;
	volatile int64_t t181 = INT64_MIN;

    t181 = (x1325+(x1326%(x1327<=x1328)));

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x1341 = UINT8_MAX;
	int16_t x1342 = -1;
	int16_t x1343 = INT16_MAX;
	uint64_t x1344 = 46326772LLU;
	volatile int32_t t182 = 0;

    t182 = (x1341+(x1342%(x1343<=x1344)));

    if (t182 != 255) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x1349 = -17;
	int32_t x1350 = 158940512;
	static int8_t x1352 = INT8_MAX;

    t183 = (x1349+(x1350%(x1351<=x1352)));

    if (t183 != -17) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x1365 = INT16_MIN;
	int16_t x1366 = INT16_MAX;
	int16_t x1367 = -1;
	uint64_t x1368 = UINT64_MAX;
	int32_t t184 = 365778052;

    t184 = (x1365+(x1366%(x1367<=x1368)));

    if (t184 != -32768) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1369 = -1;
	int8_t x1370 = INT8_MIN;
	int8_t x1371 = INT8_MIN;
	volatile int32_t x1372 = -1;

    t185 = (x1369+(x1370%(x1371<=x1372)));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x1373 = INT16_MIN;
	uint16_t x1374 = 4317U;
	uint8_t x1375 = UINT8_MAX;
	int32_t t186 = 0;

    t186 = (x1373+(x1374%(x1375<=x1376)));

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x1385 = INT64_MAX;
	int16_t x1386 = 883;
	int64_t t187 = INT64_MAX;

    t187 = (x1385+(x1386%(x1387<=x1388)));

    if (t187 != INT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1397 = -172;
	uint16_t x1398 = UINT16_MAX;
	volatile uint8_t x1400 = UINT8_MAX;
	int32_t t188 = 1510252;

    t188 = (x1397+(x1398%(x1399<=x1400)));

    if (t188 != -172) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1410 = -6443171;
	uint32_t x1412 = UINT32_MAX;
	volatile int32_t t189 = -29936280;

    t189 = (x1409+(x1410%(x1411<=x1412)));

    if (t189 != 32767) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1413 = UINT8_MAX;
	uint8_t x1414 = 30U;
	static int64_t x1415 = -5642656LL;
	static int64_t x1416 = 705347835417LL;
	volatile int32_t t190 = -109558578;

    t190 = (x1413+(x1414%(x1415<=x1416)));

    if (t190 != 255) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x1417 = INT64_MIN;
	int8_t x1418 = INT8_MIN;
	int8_t x1419 = INT8_MIN;
	static volatile uint16_t x1420 = 0U;
	int64_t t191 = INT64_MIN;

    t191 = (x1417+(x1418%(x1419<=x1420)));

    if (t191 != INT64_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1422 = UINT32_MAX;
	volatile uint64_t x1423 = 4248915692629LLU;
	volatile int64_t x1424 = INT64_MIN;
	volatile uint32_t t192 = 139U;

    t192 = (x1421+(x1422%(x1423<=x1424)));

    if (t192 != 2147483647U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1425 = -24;
	uint16_t x1426 = 464U;
	int32_t x1427 = 769186;
	volatile int32_t t193 = -3;

    t193 = (x1425+(x1426%(x1427<=x1428)));

    if (t193 != -24) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1429 = 5LLU;
	static uint16_t x1430 = UINT16_MAX;
	int16_t x1432 = INT16_MAX;
	uint64_t t194 = 15265682781523951LLU;

    t194 = (x1429+(x1430%(x1431<=x1432)));

    if (t194 != 5LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x1433 = 79LLU;
	static int32_t x1434 = INT32_MIN;
	int16_t x1435 = INT16_MIN;
	volatile int8_t x1436 = INT8_MAX;
	uint64_t t195 = 742901783LLU;

    t195 = (x1433+(x1434%(x1435<=x1436)));

    if (t195 != 79LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x1445 = INT8_MIN;
	volatile int32_t x1446 = 14050;
	int16_t x1447 = -2;
	volatile uint8_t x1448 = UINT8_MAX;
	static volatile int32_t t196 = -38;

    t196 = (x1445+(x1446%(x1447<=x1448)));

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1450 = UINT64_MAX;
	int16_t x1451 = INT16_MIN;
	uint16_t x1452 = 3510U;
	static volatile uint64_t t197 = 154LLU;

    t197 = (x1449+(x1450%(x1451<=x1452)));

    if (t197 != 24LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1453 = INT64_MAX;
	volatile int8_t x1454 = INT8_MIN;
	int64_t x1455 = INT64_MIN;
	static volatile uint16_t x1456 = 1U;
	int64_t t198 = INT64_MAX;

    t198 = (x1453+(x1454%(x1455<=x1456)));

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1458 = UINT32_MAX;
	int64_t x1459 = INT64_MIN;
	int64_t x1460 = -1LL;
	volatile uint32_t t199 = 3U;

    t199 = (x1457+(x1458%(x1459<=x1460)));

    if (t199 != 1018U) { NG(); } else { ; }
	
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

