
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

int32_t x17 = INT32_MIN;
volatile int32_t x19 = -1;
static uint32_t x20 = UINT32_MAX;
int32_t t1 = -246;
int64_t x21 = -1LL;
static int16_t x24 = INT16_MIN;
volatile int32_t t2 = 1928300;
uint16_t x34 = 1U;
static uint64_t x46 = 11125LLU;
int8_t x49 = -1;
int16_t x52 = INT16_MIN;
int8_t x53 = -28;
static int16_t x57 = -19;
volatile uint64_t x58 = 7941149363LLU;
volatile int32_t t9 = -84666;
int32_t x73 = -1;
int16_t x76 = INT16_MIN;
volatile int8_t x91 = INT8_MAX;
int64_t x94 = 59LL;
uint8_t x115 = 7U;
volatile uint16_t x116 = 3607U;
int64_t x120 = INT64_MAX;
int32_t x126 = 2470;
volatile int32_t t17 = 1;
int32_t t18 = 169;
int8_t x141 = INT8_MIN;
static int64_t x145 = -1LL;
volatile uint64_t x146 = UINT64_MAX;
uint32_t x147 = UINT32_MAX;
volatile int64_t x148 = -1LL;
int8_t x154 = INT8_MAX;
uint32_t x155 = UINT32_MAX;
static int16_t x173 = INT16_MAX;
int64_t x174 = 1LL;
uint32_t x194 = 2119273U;
int32_t x195 = -1;
uint8_t x205 = UINT8_MAX;
int32_t t29 = -386535338;
int16_t x211 = 85;
int32_t x216 = -1;
int32_t x238 = 5;
int16_t x239 = INT16_MAX;
int64_t x246 = INT64_MAX;
int16_t x249 = -1650;
int32_t x261 = 0;
uint16_t x262 = 88U;
volatile uint16_t x278 = 1U;
volatile uint32_t x279 = 39871288U;
int32_t t41 = -112207;
uint16_t x321 = 186U;
static int8_t x326 = INT8_MAX;
volatile int32_t t48 = -1;
int16_t x357 = INT16_MIN;
uint64_t x358 = 6020380149LLU;
int64_t x359 = INT64_MIN;
volatile uint16_t x370 = UINT16_MAX;
int32_t x381 = INT32_MIN;
static uint64_t x382 = UINT64_MAX;
int16_t x401 = INT16_MIN;
uint32_t x402 = 106406632U;
int64_t x435 = 438952789668LL;
static int16_t x436 = INT16_MIN;
static volatile uint32_t x450 = 9U;
int16_t x451 = INT16_MAX;
int16_t x458 = 367;
static uint8_t x464 = 3U;
static volatile int32_t t63 = -392551979;
static int64_t x485 = INT64_MAX;
static int32_t t64 = -252333;
int32_t x492 = INT32_MIN;
int8_t x497 = 3;
volatile int32_t t66 = -3104;
volatile uint32_t x501 = 310442478U;
int32_t x502 = 619898;
int32_t x504 = INT32_MIN;
uint8_t x519 = 9U;
volatile int32_t t70 = -3335;
uint32_t x522 = 672U;
uint64_t x528 = 0LLU;
int16_t x529 = INT16_MIN;
int8_t x530 = 1;
int64_t x553 = -2416088075301LL;
int8_t x556 = -38;
int16_t x559 = 10598;
uint16_t x583 = UINT16_MAX;
volatile uint16_t x614 = 48U;
volatile int32_t x620 = -303;
static int32_t t83 = 381739297;
uint16_t x643 = 2U;
volatile int32_t t85 = -802;
volatile int8_t x647 = INT8_MIN;
uint32_t x656 = 6960360U;
int64_t x664 = -1LL;
static uint16_t x674 = 20U;
volatile int64_t x680 = -1LL;
int8_t x707 = -63;
int32_t t92 = -22;
int16_t x716 = 195;
uint8_t x721 = 20U;
uint8_t x723 = 5U;
int16_t x724 = 1102;
uint64_t x728 = 1965148LLU;
volatile int32_t t95 = 6675;
static uint32_t x730 = 11612U;
static volatile int16_t x737 = 136;
volatile int32_t x740 = -1;
uint32_t x747 = 53359862U;
volatile int32_t t98 = 646708903;
uint64_t x754 = 110LLU;
static int64_t x756 = -1LL;
static int32_t t103 = -367;
int8_t x797 = -49;
uint16_t x800 = 12U;
volatile int32_t t106 = -33958;
static int8_t x822 = 13;
volatile int16_t x824 = -3;
uint64_t x832 = 1310LLU;
int8_t x836 = -1;
int32_t t110 = 148;
uint8_t x840 = UINT8_MAX;
volatile int8_t x891 = 48;
uint64_t x893 = 2047827639524LLU;
static uint8_t x894 = UINT8_MAX;
int16_t x914 = INT16_MAX;
volatile uint16_t x922 = UINT16_MAX;
static int16_t x929 = -1;
int16_t x934 = INT16_MAX;
int32_t x939 = INT32_MAX;
volatile int64_t x943 = INT64_MIN;
int32_t t129 = -5931152;
static volatile uint8_t x999 = 11U;
uint8_t x1014 = 16U;
int8_t x1025 = INT8_MAX;
volatile int32_t t136 = -588;
volatile uint16_t x1062 = 6385U;
int64_t x1068 = INT64_MIN;
volatile int16_t x1077 = INT16_MIN;
volatile uint64_t x1080 = UINT64_MAX;
volatile uint16_t x1083 = UINT16_MAX;
uint64_t x1095 = 3329976646625255LLU;
int32_t x1113 = INT32_MAX;
uint64_t x1114 = 200399546381534825LLU;
int8_t x1116 = INT8_MIN;
uint16_t x1118 = UINT16_MAX;
static uint8_t x1124 = 3U;
static int32_t t149 = 331;
int16_t x1133 = INT16_MIN;
int16_t x1139 = 12969;
int8_t x1143 = INT8_MAX;
int8_t x1144 = INT8_MAX;
uint64_t x1150 = 2178LLU;
int16_t x1151 = -1;
uint32_t x1160 = 3914070U;
volatile uint32_t x1163 = UINT32_MAX;
volatile uint64_t x1173 = 209LLU;
uint32_t x1178 = 1154U;
volatile int32_t t159 = -270113071;
int8_t x1219 = 2;
int32_t t166 = -369071;
int32_t x1241 = -14343;
uint16_t x1244 = 55U;
int16_t x1258 = INT16_MAX;
uint64_t x1269 = 93551346472332854LLU;
int32_t t174 = -2766880;
int8_t x1296 = INT8_MIN;
volatile int8_t x1310 = INT8_MAX;
volatile int32_t t178 = -554439598;
volatile int32_t t180 = 1696823;
int64_t x1336 = INT64_MIN;
volatile int32_t t181 = -1;
static int8_t x1353 = -51;
volatile int32_t x1360 = INT32_MIN;
int32_t t183 = -23899;
int32_t x1365 = 1161534;
static uint8_t x1366 = 47U;
int32_t x1378 = INT32_MAX;
volatile int32_t t186 = 14411648;
int32_t x1385 = -1;
volatile int8_t x1392 = INT8_MIN;
int64_t x1396 = -1LL;
uint16_t x1409 = 14327U;
uint32_t x1410 = 3249106U;
int32_t x1417 = INT32_MIN;
uint16_t x1419 = 81U;
static volatile uint16_t x1421 = 979U;
int32_t t193 = 887082645;
uint16_t x1427 = 1U;
uint8_t x1428 = 1U;
int32_t x1432 = 34;
static uint8_t x1435 = UINT8_MAX;
static uint8_t x1436 = UINT8_MAX;
int32_t t196 = -1919509;
uint8_t x1459 = UINT8_MAX;
static int32_t t197 = -29;
int32_t x1469 = INT32_MIN;
volatile uint32_t x1470 = 218676651U;


void f0(void) {
    	uint32_t x1 = 223097U;
	uint64_t x2 = 4LLU;
	int64_t x3 = INT64_MIN;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 1499936;

    t0 = (x1>(x2>>(x3>x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x18 = 12;

    t1 = (x17>(x18>>(x19>x20)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x22 = 1299U;
	volatile int8_t x23 = 37;

    t2 = (x21>(x22>>(x23>x24)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x25 = -1;
	int32_t x26 = 5;
	volatile int16_t x27 = -1;
	int16_t x28 = -1;
	volatile int32_t t3 = -121;

    t3 = (x25>(x26>>(x27>x28)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x33 = 0U;
	static uint64_t x35 = 214LLU;
	uint32_t x36 = 0U;
	volatile int32_t t4 = 1033;

    t4 = (x33>(x34>>(x35>x36)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x37 = -68;
	uint32_t x38 = UINT32_MAX;
	uint16_t x39 = 9219U;
	volatile uint8_t x40 = 1U;
	int32_t t5 = 18505715;

    t5 = (x37>(x38>>(x39>x40)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x45 = INT64_MIN;
	volatile uint8_t x47 = 21U;
	volatile uint32_t x48 = 3010U;
	int32_t t6 = -6;

    t6 = (x45>(x46>>(x47>x48)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x50 = 2;
	uint32_t x51 = UINT32_MAX;
	int32_t t7 = 1167;

    t7 = (x49>(x50>>(x51>x52)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x54 = 1;
	static int16_t x55 = -1;
	static int64_t x56 = -1819867524497129LL;
	static int32_t t8 = -6;

    t8 = (x53>(x54>>(x55>x56)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x59 = 2U;
	int32_t x60 = INT32_MAX;

    t9 = (x57>(x58>>(x59>x60)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x74 = 7U;
	static int64_t x75 = -237288012452913233LL;
	volatile int32_t t10 = -27;

    t10 = (x73>(x74>>(x75>x76)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x81 = -66LL;
	uint64_t x82 = 112986998LLU;
	volatile uint64_t x83 = 92911723LLU;
	uint64_t x84 = UINT64_MAX;
	int32_t t11 = 31513;

    t11 = (x81>(x82>>(x83>x84)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MAX;
	int32_t x92 = -1;
	volatile int32_t t12 = 1;

    t12 = (x89>(x90>>(x91>x92)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x93 = -962877782517LL;
	static int16_t x95 = 31;
	int32_t x96 = INT32_MIN;
	int32_t t13 = 1;

    t13 = (x93>(x94>>(x95>x96)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x105 = INT32_MAX;
	volatile int16_t x106 = INT16_MAX;
	int64_t x107 = INT64_MIN;
	int16_t x108 = 11;
	volatile int32_t t14 = -590748;

    t14 = (x105>(x106>>(x107>x108)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x113 = INT64_MIN;
	int64_t x114 = 0LL;
	volatile int32_t t15 = -121;

    t15 = (x113>(x114>>(x115>x116)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x117 = INT16_MIN;
	uint16_t x118 = 29U;
	static int16_t x119 = INT16_MIN;
	volatile int32_t t16 = -499232701;

    t16 = (x117>(x118>>(x119>x120)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x125 = INT64_MAX;
	int16_t x127 = INT16_MIN;
	int8_t x128 = -1;

    t17 = (x125>(x126>>(x127>x128)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x129 = UINT32_MAX;
	uint16_t x130 = 4U;
	volatile int16_t x131 = INT16_MIN;
	int32_t x132 = INT32_MIN;

    t18 = (x129>(x130>>(x131>x132)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x137 = INT32_MIN;
	uint16_t x138 = 18U;
	uint8_t x139 = 1U;
	volatile int32_t x140 = INT32_MIN;
	volatile int32_t t19 = 10;

    t19 = (x137>(x138>>(x139>x140)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x142 = INT64_MAX;
	volatile int16_t x143 = INT16_MIN;
	volatile int16_t x144 = -13;
	int32_t t20 = -770638;

    t20 = (x141>(x142>>(x143>x144)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t t21 = 2029;

    t21 = (x145>(x146>>(x147>x148)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x149 = 776U;
	int16_t x150 = INT16_MAX;
	volatile uint64_t x151 = 92695480894LLU;
	int8_t x152 = -24;
	static int32_t t22 = -395;

    t22 = (x149>(x150>>(x151>x152)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x153 = -29;
	int8_t x156 = INT8_MIN;
	int32_t t23 = -7389;

    t23 = (x153>(x154>>(x155>x156)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x165 = 192U;
	int16_t x166 = 45;
	int64_t x167 = -1LL;
	uint32_t x168 = 14624576U;
	volatile int32_t t24 = 387247752;

    t24 = (x165>(x166>>(x167>x168)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x175 = -1;
	volatile int8_t x176 = -2;
	int32_t t25 = 406727308;

    t25 = (x173>(x174>>(x175>x176)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x181 = UINT32_MAX;
	static volatile uint64_t x182 = 55462735615995LLU;
	int32_t x183 = 435;
	uint16_t x184 = 500U;
	int32_t t26 = 7;

    t26 = (x181>(x182>>(x183>x184)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x189 = UINT16_MAX;
	volatile uint16_t x190 = UINT16_MAX;
	uint16_t x191 = UINT16_MAX;
	int16_t x192 = INT16_MAX;
	volatile int32_t t27 = -1;

    t27 = (x189>(x190>>(x191>x192)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x193 = -1LL;
	int32_t x196 = INT32_MAX;
	volatile int32_t t28 = 61;

    t28 = (x193>(x194>>(x195>x196)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x206 = 754573524;
	volatile uint32_t x207 = 65185U;
	int16_t x208 = INT16_MIN;

    t29 = (x205>(x206>>(x207>x208)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x209 = -440505LL;
	uint8_t x210 = 2U;
	int32_t x212 = 145018;
	volatile int32_t t30 = 10645;

    t30 = (x209>(x210>>(x211>x212)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x213 = 113789658488971771LLU;
	uint8_t x214 = 48U;
	static int64_t x215 = -125917LL;
	volatile int32_t t31 = 236939;

    t31 = (x213>(x214>>(x215>x216)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x233 = UINT16_MAX;
	uint32_t x234 = 766U;
	int64_t x235 = INT64_MIN;
	int8_t x236 = -1;
	int32_t t32 = 616;

    t32 = (x233>(x234>>(x235>x236)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x237 = 7766530137LL;
	int16_t x240 = -1;
	int32_t t33 = -109;

    t33 = (x237>(x238>>(x239>x240)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x245 = 13U;
	volatile int8_t x247 = INT8_MIN;
	static uint32_t x248 = 246129U;
	volatile int32_t t34 = 2075266;

    t34 = (x245>(x246>>(x247>x248)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x250 = 101864102632LL;
	uint8_t x251 = 1U;
	static volatile int64_t x252 = -190LL;
	int32_t t35 = 14245142;

    t35 = (x249>(x250>>(x251>x252)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x263 = 1048784860LLU;
	uint16_t x264 = 7U;
	volatile int32_t t36 = -34;

    t36 = (x261>(x262>>(x263>x264)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x269 = 50;
	static int8_t x270 = 0;
	static uint32_t x271 = 598724U;
	static int32_t x272 = -1;
	int32_t t37 = 1;

    t37 = (x269>(x270>>(x271>x272)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x273 = -74;
	uint8_t x274 = UINT8_MAX;
	volatile int16_t x275 = INT16_MIN;
	int32_t x276 = INT32_MAX;
	volatile int32_t t38 = -106838976;

    t38 = (x273>(x274>>(x275>x276)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x277 = 308473547U;
	int8_t x280 = -1;
	int32_t t39 = 16;

    t39 = (x277>(x278>>(x279>x280)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x281 = 9775;
	static int16_t x282 = INT16_MAX;
	int16_t x283 = -7;
	uint64_t x284 = 4052239858757LLU;
	int32_t t40 = 9700;

    t40 = (x281>(x282>>(x283>x284)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	static volatile uint16_t x295 = UINT16_MAX;
	int16_t x296 = INT16_MIN;

    t41 = (x293>(x294>>(x295>x296)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x301 = 0U;
	int32_t x302 = 11;
	uint64_t x303 = UINT64_MAX;
	static volatile uint64_t x304 = UINT64_MAX;
	static volatile int32_t t42 = -6947;

    t42 = (x301>(x302>>(x303>x304)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x309 = -1;
	static uint64_t x310 = 63572178LLU;
	int64_t x311 = -2556LL;
	int8_t x312 = INT8_MIN;
	volatile int32_t t43 = 173583451;

    t43 = (x309>(x310>>(x311>x312)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x313 = -1;
	uint8_t x314 = UINT8_MAX;
	volatile int32_t x315 = -1;
	uint32_t x316 = 2684895U;
	volatile int32_t t44 = 809292206;

    t44 = (x313>(x314>>(x315>x316)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x322 = 0;
	int64_t x323 = -1LL;
	volatile int64_t x324 = -5135449339907151LL;
	static int32_t t45 = 63588064;

    t45 = (x321>(x322>>(x323>x324)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x325 = INT8_MIN;
	uint8_t x327 = 24U;
	int8_t x328 = -5;
	volatile int32_t t46 = 212;

    t46 = (x325>(x326>>(x327>x328)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x345 = -1;
	uint8_t x346 = 1U;
	static int64_t x347 = 42239079897337402LL;
	uint64_t x348 = 381130237LLU;
	int32_t t47 = 290;

    t47 = (x345>(x346>>(x347>x348)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x349 = INT16_MAX;
	int64_t x350 = 31414444350LL;
	int8_t x351 = 31;
	uint64_t x352 = UINT64_MAX;

    t48 = (x349>(x350>>(x351>x352)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x360 = INT8_MIN;
	volatile int32_t t49 = -5035678;

    t49 = (x357>(x358>>(x359>x360)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x365 = INT64_MAX;
	static uint32_t x366 = UINT32_MAX;
	int32_t x367 = 7073847;
	static int8_t x368 = INT8_MIN;
	int32_t t50 = 10503308;

    t50 = (x365>(x366>>(x367>x368)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x369 = 8;
	int32_t x371 = INT32_MIN;
	int64_t x372 = -1LL;
	static volatile int32_t t51 = -12;

    t51 = (x369>(x370>>(x371>x372)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x373 = 4U;
	uint64_t x374 = 40LLU;
	int8_t x375 = 7;
	int64_t x376 = INT64_MIN;
	volatile int32_t t52 = 597;

    t52 = (x373>(x374>>(x375>x376)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x383 = UINT16_MAX;
	volatile int16_t x384 = 23;
	static int32_t t53 = -2842;

    t53 = (x381>(x382>>(x383>x384)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x385 = INT8_MIN;
	static volatile uint8_t x386 = 44U;
	volatile int8_t x387 = INT8_MIN;
	static uint64_t x388 = 7274970931338503LLU;
	static int32_t t54 = 184;

    t54 = (x385>(x386>>(x387>x388)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x393 = 83786105524LL;
	int64_t x394 = INT64_MAX;
	static int8_t x395 = INT8_MAX;
	uint8_t x396 = UINT8_MAX;
	int32_t t55 = -11358;

    t55 = (x393>(x394>>(x395>x396)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x403 = UINT64_MAX;
	int32_t x404 = 48;
	int32_t t56 = -604;

    t56 = (x401>(x402>>(x403>x404)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x405 = INT8_MIN;
	uint64_t x406 = 5LLU;
	volatile uint64_t x407 = 138904244749151LLU;
	volatile uint8_t x408 = 7U;
	volatile int32_t t57 = 24;

    t57 = (x405>(x406>>(x407>x408)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x413 = -1;
	int32_t x414 = INT32_MAX;
	int16_t x415 = -1;
	int64_t x416 = 4819454627446019LL;
	int32_t t58 = 24167;

    t58 = (x413>(x414>>(x415>x416)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x433 = -1440;
	volatile uint16_t x434 = 314U;
	static int32_t t59 = -118397;

    t59 = (x433>(x434>>(x435>x436)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x449 = -1;
	int32_t x452 = -1;
	static int32_t t60 = 21;

    t60 = (x449>(x450>>(x451>x452)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x457 = -1;
	static int32_t x459 = -1;
	static int8_t x460 = INT8_MAX;
	volatile int32_t t61 = 1925;

    t61 = (x457>(x458>>(x459>x460)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x461 = 24;
	static int8_t x462 = 1;
	uint16_t x463 = UINT16_MAX;
	volatile int32_t t62 = -125062931;

    t62 = (x461>(x462>>(x463>x464)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x469 = 7973;
	static uint16_t x470 = UINT16_MAX;
	uint8_t x471 = 5U;
	volatile int16_t x472 = 6467;

    t63 = (x469>(x470>>(x471>x472)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x486 = 3U;
	static volatile uint32_t x487 = 217U;
	static int8_t x488 = INT8_MIN;

    t64 = (x485>(x486>>(x487>x488)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x489 = 557;
	uint16_t x490 = UINT16_MAX;
	volatile int8_t x491 = -1;
	volatile int32_t t65 = -6855;

    t65 = (x489>(x490>>(x491>x492)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x498 = 0U;
	uint32_t x499 = 12661532U;
	volatile int64_t x500 = 2509085792929LL;

    t66 = (x497>(x498>>(x499>x500)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x503 = INT32_MIN;
	int32_t t67 = -9490;

    t67 = (x501>(x502>>(x503>x504)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x505 = INT8_MIN;
	int8_t x506 = 0;
	static uint32_t x507 = 224757U;
	uint16_t x508 = 29U;
	static volatile int32_t t68 = -1501534;

    t68 = (x505>(x506>>(x507>x508)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x513 = -1LL;
	static int16_t x514 = INT16_MAX;
	int16_t x515 = -13;
	int64_t x516 = INT64_MIN;
	volatile int32_t t69 = 659;

    t69 = (x513>(x514>>(x515>x516)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x517 = INT64_MIN;
	static uint16_t x518 = 25U;
	int32_t x520 = INT32_MIN;

    t70 = (x517>(x518>>(x519>x520)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x521 = 4800279991740694LLU;
	int16_t x523 = INT16_MIN;
	int16_t x524 = INT16_MIN;
	int32_t t71 = 6789;

    t71 = (x521>(x522>>(x523>x524)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x525 = 5U;
	int32_t x526 = 162786;
	int16_t x527 = INT16_MAX;
	volatile int32_t t72 = -363859;

    t72 = (x525>(x526>>(x527>x528)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x531 = INT32_MAX;
	uint32_t x532 = 14099787U;
	volatile int32_t t73 = -7;

    t73 = (x529>(x530>>(x531>x532)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x549 = INT16_MAX;
	int8_t x550 = INT8_MAX;
	uint64_t x551 = 3929LLU;
	static int8_t x552 = -45;
	static int32_t t74 = 12953083;

    t74 = (x549>(x550>>(x551>x552)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x554 = UINT32_MAX;
	uint64_t x555 = UINT64_MAX;
	volatile int32_t t75 = -78842906;

    t75 = (x553>(x554>>(x555>x556)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x557 = UINT64_MAX;
	volatile int8_t x558 = INT8_MAX;
	int32_t x560 = INT32_MAX;
	static int32_t t76 = 109755911;

    t76 = (x557>(x558>>(x559>x560)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x565 = 0U;
	static uint16_t x566 = UINT16_MAX;
	int16_t x567 = -1;
	static int32_t x568 = INT32_MIN;
	static volatile int32_t t77 = -11974;

    t77 = (x565>(x566>>(x567>x568)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x581 = INT16_MIN;
	volatile uint64_t x582 = 1408LLU;
	int8_t x584 = INT8_MIN;
	volatile int32_t t78 = 4082155;

    t78 = (x581>(x582>>(x583>x584)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x605 = -15549484;
	uint32_t x606 = 8773U;
	volatile int64_t x607 = INT64_MIN;
	static int8_t x608 = INT8_MAX;
	int32_t t79 = -902;

    t79 = (x605>(x606>>(x607>x608)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x613 = INT16_MAX;
	uint64_t x615 = 7087286814560LLU;
	int16_t x616 = INT16_MIN;
	int32_t t80 = -310;

    t80 = (x613>(x614>>(x615>x616)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x617 = -43;
	int32_t x618 = INT32_MAX;
	static int32_t x619 = -1;
	volatile int32_t t81 = 4232;

    t81 = (x617>(x618>>(x619>x620)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x621 = 12U;
	int32_t x622 = 5;
	static int64_t x623 = -1LL;
	int16_t x624 = -5645;
	int32_t t82 = -27975244;

    t82 = (x621>(x622>>(x623>x624)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x633 = INT64_MIN;
	int32_t x634 = 123393016;
	int16_t x635 = INT16_MIN;
	static int32_t x636 = -1;

    t83 = (x633>(x634>>(x635>x636)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x637 = 3;
	uint64_t x638 = 13786370LLU;
	static volatile int64_t x639 = INT64_MAX;
	int16_t x640 = INT16_MIN;
	int32_t t84 = 48;

    t84 = (x637>(x638>>(x639>x640)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x641 = -1;
	uint8_t x642 = 13U;
	volatile int64_t x644 = -2643472869LL;

    t85 = (x641>(x642>>(x643>x644)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x645 = UINT16_MAX;
	int16_t x646 = 81;
	static uint8_t x648 = 22U;
	volatile int32_t t86 = 1887;

    t86 = (x645>(x646>>(x647>x648)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x653 = INT64_MIN;
	static int32_t x654 = 416872747;
	uint64_t x655 = 131595090032972979LLU;
	int32_t t87 = -56205;

    t87 = (x653>(x654>>(x655>x656)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x661 = INT64_MAX;
	uint8_t x662 = 2U;
	static uint8_t x663 = 3U;
	int32_t t88 = -103423;

    t88 = (x661>(x662>>(x663>x664)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x673 = INT64_MIN;
	int32_t x675 = INT32_MIN;
	int32_t x676 = 16;
	volatile int32_t t89 = 61574240;

    t89 = (x673>(x674>>(x675>x676)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x677 = 67U;
	uint64_t x678 = UINT64_MAX;
	uint8_t x679 = 1U;
	volatile int32_t t90 = 17;

    t90 = (x677>(x678>>(x679>x680)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x681 = -184838933308134LL;
	uint8_t x682 = 2U;
	int64_t x683 = INT64_MAX;
	int32_t x684 = -1;
	int32_t t91 = 52288;

    t91 = (x681>(x682>>(x683>x684)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x705 = -1;
	uint64_t x706 = 748206391LLU;
	static int8_t x708 = INT8_MIN;

    t92 = (x705>(x706>>(x707>x708)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x713 = 1U;
	int64_t x714 = 15759057855138LL;
	int16_t x715 = INT16_MIN;
	volatile int32_t t93 = -6590073;

    t93 = (x713>(x714>>(x715>x716)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x722 = 46782U;
	int32_t t94 = -226884870;

    t94 = (x721>(x722>>(x723>x724)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x725 = 2456695227013290274LLU;
	uint64_t x726 = UINT64_MAX;
	int64_t x727 = INT64_MAX;

    t95 = (x725>(x726>>(x727>x728)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x729 = 15U;
	int16_t x731 = INT16_MIN;
	int64_t x732 = -58495LL;
	static volatile int32_t t96 = -1074433;

    t96 = (x729>(x730>>(x731>x732)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x738 = 10U;
	static int64_t x739 = -1LL;
	volatile int32_t t97 = -21;

    t97 = (x737>(x738>>(x739>x740)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x745 = -73839553;
	uint8_t x746 = 0U;
	int8_t x748 = 24;

    t98 = (x745>(x746>>(x747>x748)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x753 = -993;
	int8_t x755 = 24;
	int32_t t99 = -68822048;

    t99 = (x753>(x754>>(x755>x756)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x757 = INT64_MAX;
	uint8_t x758 = UINT8_MAX;
	uint64_t x759 = UINT64_MAX;
	int16_t x760 = INT16_MAX;
	volatile int32_t t100 = 330;

    t100 = (x757>(x758>>(x759>x760)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x765 = 2U;
	volatile uint8_t x766 = UINT8_MAX;
	volatile uint64_t x767 = 211421999248827288LLU;
	static uint16_t x768 = UINT16_MAX;
	static int32_t t101 = 5;

    t101 = (x765>(x766>>(x767>x768)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x773 = INT64_MIN;
	volatile uint64_t x774 = 3085276LLU;
	static volatile int16_t x775 = INT16_MIN;
	volatile int8_t x776 = INT8_MIN;
	volatile int32_t t102 = -1049760;

    t102 = (x773>(x774>>(x775>x776)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x785 = -18;
	uint8_t x786 = 0U;
	static int8_t x787 = INT8_MAX;
	uint64_t x788 = 2229191181725132LLU;

    t103 = (x785>(x786>>(x787>x788)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x798 = UINT16_MAX;
	static uint16_t x799 = UINT16_MAX;
	volatile int32_t t104 = -1;

    t104 = (x797>(x798>>(x799>x800)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x809 = 2495;
	uint64_t x810 = 55590857905219175LLU;
	int32_t x811 = 214;
	int16_t x812 = INT16_MIN;
	int32_t t105 = 2;

    t105 = (x809>(x810>>(x811>x812)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x813 = 166504116U;
	static int64_t x814 = INT64_MAX;
	volatile int32_t x815 = 40;
	volatile int64_t x816 = 788LL;

    t106 = (x813>(x814>>(x815>x816)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x821 = INT8_MIN;
	static int32_t x823 = INT32_MIN;
	int32_t t107 = 176522;

    t107 = (x821>(x822>>(x823>x824)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x825 = INT64_MAX;
	uint32_t x826 = 42698U;
	int32_t x827 = -1250424;
	static volatile uint32_t x828 = 4008794U;
	static int32_t t108 = 237424;

    t108 = (x825>(x826>>(x827>x828)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint32_t x829 = 56880135U;
	int16_t x830 = INT16_MAX;
	volatile uint64_t x831 = 155543598LLU;
	static volatile int32_t t109 = 1;

    t109 = (x829>(x830>>(x831>x832)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x833 = INT64_MIN;
	static uint32_t x834 = 2056615U;
	int64_t x835 = 30255296LL;

    t110 = (x833>(x834>>(x835>x836)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x837 = UINT32_MAX;
	uint8_t x838 = 0U;
	uint64_t x839 = 550105004003461406LLU;
	static int32_t t111 = -47267825;

    t111 = (x837>(x838>>(x839>x840)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x845 = 13826;
	int32_t x846 = 57;
	uint32_t x847 = 20106U;
	int8_t x848 = INT8_MIN;
	int32_t t112 = 44994;

    t112 = (x845>(x846>>(x847>x848)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x849 = 2779U;
	int16_t x850 = INT16_MAX;
	static int64_t x851 = INT64_MIN;
	static int16_t x852 = 3;
	int32_t t113 = -1;

    t113 = (x849>(x850>>(x851>x852)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x857 = INT64_MIN;
	volatile uint16_t x858 = 5555U;
	uint16_t x859 = UINT16_MAX;
	volatile int16_t x860 = INT16_MIN;
	volatile int32_t t114 = 7;

    t114 = (x857>(x858>>(x859>x860)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x869 = -9;
	uint8_t x870 = 10U;
	uint64_t x871 = 112LLU;
	static int32_t x872 = -1462;
	static int32_t t115 = 26508;

    t115 = (x869>(x870>>(x871>x872)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x873 = 98;
	volatile uint64_t x874 = 493799LLU;
	static uint8_t x875 = 1U;
	int32_t x876 = INT32_MAX;
	int32_t t116 = 500316;

    t116 = (x873>(x874>>(x875>x876)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x885 = 6770295294086029LLU;
	static int64_t x886 = 121245LL;
	int16_t x887 = INT16_MIN;
	int64_t x888 = -1LL;
	int32_t t117 = 23558746;

    t117 = (x885>(x886>>(x887>x888)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x889 = INT16_MAX;
	volatile uint16_t x890 = 3759U;
	volatile int32_t x892 = INT32_MIN;
	volatile int32_t t118 = 316605;

    t118 = (x889>(x890>>(x891>x892)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint8_t x895 = UINT8_MAX;
	static int16_t x896 = INT16_MIN;
	volatile int32_t t119 = 696;

    t119 = (x893>(x894>>(x895>x896)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x901 = 20U;
	int16_t x902 = 70;
	volatile uint64_t x903 = 278977751790907LLU;
	uint8_t x904 = 20U;
	volatile int32_t t120 = -174347599;

    t120 = (x901>(x902>>(x903>x904)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x913 = UINT32_MAX;
	volatile int64_t x915 = 221732LL;
	int64_t x916 = -3314LL;
	static volatile int32_t t121 = 851;

    t121 = (x913>(x914>>(x915>x916)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x921 = 88;
	int8_t x923 = 1;
	volatile uint16_t x924 = UINT16_MAX;
	int32_t t122 = -6170694;

    t122 = (x921>(x922>>(x923>x924)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x930 = UINT16_MAX;
	volatile int64_t x931 = -1LL;
	static volatile uint32_t x932 = UINT32_MAX;
	volatile int32_t t123 = 2;

    t123 = (x929>(x930>>(x931>x932)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x933 = UINT64_MAX;
	volatile uint16_t x935 = 24U;
	uint64_t x936 = UINT64_MAX;
	int32_t t124 = -8466374;

    t124 = (x933>(x934>>(x935>x936)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x937 = -1;
	uint64_t x938 = UINT64_MAX;
	static int8_t x940 = INT8_MIN;
	volatile int32_t t125 = -6;

    t125 = (x937>(x938>>(x939>x940)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x941 = UINT8_MAX;
	int16_t x942 = 7170;
	uint16_t x944 = UINT16_MAX;
	static int32_t t126 = -17;

    t126 = (x941>(x942>>(x943>x944)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x953 = 24U;
	int8_t x954 = INT8_MAX;
	int8_t x955 = INT8_MAX;
	static int64_t x956 = INT64_MIN;
	volatile int32_t t127 = -1;

    t127 = (x953>(x954>>(x955>x956)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x957 = -1;
	uint16_t x958 = 371U;
	uint64_t x959 = 892232792117LLU;
	int64_t x960 = INT64_MIN;
	int32_t t128 = 76180449;

    t128 = (x957>(x958>>(x959>x960)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x973 = 101U;
	uint16_t x974 = UINT16_MAX;
	int8_t x975 = -1;
	uint64_t x976 = 9717911LLU;

    t129 = (x973>(x974>>(x975>x976)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x993 = INT64_MIN;
	static int64_t x994 = 1855986500406228LL;
	static int16_t x995 = INT16_MIN;
	uint8_t x996 = 15U;
	static int32_t t130 = -503220846;

    t130 = (x993>(x994>>(x995>x996)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x997 = UINT8_MAX;
	uint8_t x998 = 2U;
	uint16_t x1000 = 1875U;
	int32_t t131 = 3689;

    t131 = (x997>(x998>>(x999>x1000)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x1001 = INT8_MAX;
	static uint8_t x1002 = 71U;
	int8_t x1003 = -1;
	int64_t x1004 = INT64_MIN;
	int32_t t132 = 0;

    t132 = (x1001>(x1002>>(x1003>x1004)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x1005 = -1;
	uint16_t x1006 = UINT16_MAX;
	int64_t x1007 = INT64_MAX;
	int16_t x1008 = INT16_MIN;
	volatile int32_t t133 = 259;

    t133 = (x1005>(x1006>>(x1007>x1008)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x1013 = 216LLU;
	int16_t x1015 = -1;
	int32_t x1016 = INT32_MIN;
	static volatile int32_t t134 = 1110218;

    t134 = (x1013>(x1014>>(x1015>x1016)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x1026 = UINT16_MAX;
	uint16_t x1027 = 266U;
	int16_t x1028 = INT16_MAX;
	volatile int32_t t135 = -2;

    t135 = (x1025>(x1026>>(x1027>x1028)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x1045 = INT8_MIN;
	int64_t x1046 = INT64_MAX;
	int16_t x1047 = -1;
	static int64_t x1048 = 6731834667269LL;

    t136 = (x1045>(x1046>>(x1047>x1048)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x1049 = INT16_MAX;
	static int32_t x1050 = 1;
	static int64_t x1051 = 748761450638344LL;
	volatile int64_t x1052 = INT64_MIN;
	int32_t t137 = -12;

    t137 = (x1049>(x1050>>(x1051>x1052)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x1061 = 56U;
	static int16_t x1063 = 5171;
	uint16_t x1064 = 11969U;
	static volatile int32_t t138 = 1365;

    t138 = (x1061>(x1062>>(x1063>x1064)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1065 = INT8_MIN;
	uint32_t x1066 = 5651518U;
	int64_t x1067 = INT64_MIN;
	int32_t t139 = 6762856;

    t139 = (x1065>(x1066>>(x1067>x1068)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x1069 = 0;
	int32_t x1070 = INT32_MAX;
	int32_t x1071 = INT32_MIN;
	volatile int16_t x1072 = INT16_MAX;
	int32_t t140 = -7601034;

    t140 = (x1069>(x1070>>(x1071>x1072)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1073 = -13456;
	volatile int64_t x1074 = INT64_MAX;
	int32_t x1075 = -1;
	volatile int64_t x1076 = INT64_MAX;
	static int32_t t141 = -11636;

    t141 = (x1073>(x1074>>(x1075>x1076)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x1078 = UINT32_MAX;
	uint8_t x1079 = 1U;
	int32_t t142 = 790;

    t142 = (x1077>(x1078>>(x1079>x1080)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x1081 = -12;
	uint32_t x1082 = 18733877U;
	static int64_t x1084 = INT64_MIN;
	volatile int32_t t143 = 0;

    t143 = (x1081>(x1082>>(x1083>x1084)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x1085 = INT32_MAX;
	int32_t x1086 = 13;
	static int32_t x1087 = INT32_MAX;
	uint32_t x1088 = 4684U;
	static volatile int32_t t144 = -5489;

    t144 = (x1085>(x1086>>(x1087>x1088)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1093 = 7917;
	static volatile uint32_t x1094 = UINT32_MAX;
	uint64_t x1096 = 1618LLU;
	int32_t t145 = 38;

    t145 = (x1093>(x1094>>(x1095>x1096)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x1105 = 502U;
	uint16_t x1106 = 184U;
	int8_t x1107 = INT8_MIN;
	int16_t x1108 = 3;
	int32_t t146 = -308;

    t146 = (x1105>(x1106>>(x1107>x1108)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x1115 = INT64_MIN;
	static volatile int32_t t147 = -10;

    t147 = (x1113>(x1114>>(x1115>x1116)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1117 = -38;
	int16_t x1119 = 2706;
	int16_t x1120 = INT16_MAX;
	volatile int32_t t148 = -211;

    t148 = (x1117>(x1118>>(x1119>x1120)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1121 = 1;
	volatile int32_t x1122 = 9638;
	int64_t x1123 = INT64_MAX;

    t149 = (x1121>(x1122>>(x1123>x1124)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1134 = 84U;
	int64_t x1135 = INT64_MIN;
	uint32_t x1136 = UINT32_MAX;
	int32_t t150 = 351189;

    t150 = (x1133>(x1134>>(x1135>x1136)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1137 = INT32_MAX;
	uint32_t x1138 = 19U;
	int32_t x1140 = 1;
	volatile int32_t t151 = 167134719;

    t151 = (x1137>(x1138>>(x1139>x1140)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x1141 = INT32_MAX;
	uint16_t x1142 = UINT16_MAX;
	int32_t t152 = -306489433;

    t152 = (x1141>(x1142>>(x1143>x1144)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x1149 = 21922429;
	int8_t x1152 = INT8_MAX;
	int32_t t153 = -3337266;

    t153 = (x1149>(x1150>>(x1151>x1152)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x1157 = -1;
	static uint64_t x1158 = UINT64_MAX;
	int16_t x1159 = -2;
	volatile int32_t t154 = -2716;

    t154 = (x1157>(x1158>>(x1159>x1160)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x1161 = INT32_MIN;
	int32_t x1162 = INT32_MAX;
	static volatile int64_t x1164 = 3974287163962875LL;
	volatile int32_t t155 = 4;

    t155 = (x1161>(x1162>>(x1163>x1164)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1174 = 747U;
	static volatile int64_t x1175 = INT64_MIN;
	int32_t x1176 = -1;
	static int32_t t156 = 53785;

    t156 = (x1173>(x1174>>(x1175>x1176)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1177 = INT8_MAX;
	uint16_t x1179 = 163U;
	static volatile uint32_t x1180 = UINT32_MAX;
	int32_t t157 = -408;

    t157 = (x1177>(x1178>>(x1179>x1180)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x1181 = -11;
	static volatile int32_t x1182 = INT32_MAX;
	uint64_t x1183 = UINT64_MAX;
	int8_t x1184 = -11;
	int32_t t158 = -182409;

    t158 = (x1181>(x1182>>(x1183>x1184)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x1185 = 68525LL;
	uint8_t x1186 = UINT8_MAX;
	int32_t x1187 = 58916;
	int8_t x1188 = INT8_MIN;

    t159 = (x1185>(x1186>>(x1187>x1188)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1189 = -6;
	uint8_t x1190 = 21U;
	int16_t x1191 = -1;
	int16_t x1192 = -347;
	int32_t t160 = 9326854;

    t160 = (x1189>(x1190>>(x1191>x1192)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint16_t x1201 = UINT16_MAX;
	uint32_t x1202 = UINT32_MAX;
	volatile int16_t x1203 = 1776;
	static int16_t x1204 = INT16_MIN;
	volatile int32_t t161 = 29;

    t161 = (x1201>(x1202>>(x1203>x1204)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x1209 = 7U;
	int32_t x1210 = INT32_MAX;
	volatile int32_t x1211 = 7;
	int32_t x1212 = INT32_MIN;
	volatile int32_t t162 = -227;

    t162 = (x1209>(x1210>>(x1211>x1212)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1217 = -1;
	volatile uint8_t x1218 = 65U;
	int16_t x1220 = -1;
	static int32_t t163 = 405810;

    t163 = (x1217>(x1218>>(x1219>x1220)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1221 = INT64_MIN;
	int64_t x1222 = INT64_MAX;
	uint64_t x1223 = UINT64_MAX;
	int16_t x1224 = -1;
	volatile int32_t t164 = -1;

    t164 = (x1221>(x1222>>(x1223>x1224)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x1225 = 649396183U;
	int32_t x1226 = INT32_MAX;
	uint16_t x1227 = 3U;
	int32_t x1228 = -18;
	volatile int32_t t165 = -592;

    t165 = (x1225>(x1226>>(x1227>x1228)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x1229 = 77601;
	uint8_t x1230 = UINT8_MAX;
	volatile uint64_t x1231 = 15145203569LLU;
	volatile uint16_t x1232 = UINT16_MAX;

    t166 = (x1229>(x1230>>(x1231>x1232)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1242 = UINT8_MAX;
	volatile uint16_t x1243 = UINT16_MAX;
	int32_t t167 = 1740;

    t167 = (x1241>(x1242>>(x1243>x1244)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x1245 = UINT8_MAX;
	uint64_t x1246 = 15378439258LLU;
	int32_t x1247 = 248127022;
	volatile int16_t x1248 = -45;
	int32_t t168 = 7199783;

    t168 = (x1245>(x1246>>(x1247>x1248)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1249 = -1LL;
	uint8_t x1250 = 6U;
	static volatile uint8_t x1251 = UINT8_MAX;
	int32_t x1252 = INT32_MIN;
	volatile int32_t t169 = -51843;

    t169 = (x1249>(x1250>>(x1251>x1252)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1257 = 2;
	int32_t x1259 = INT32_MAX;
	uint8_t x1260 = 15U;
	volatile int32_t t170 = -390583884;

    t170 = (x1257>(x1258>>(x1259>x1260)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1265 = INT16_MIN;
	volatile int32_t x1266 = INT32_MAX;
	int16_t x1267 = 6005;
	int32_t x1268 = INT32_MAX;
	int32_t t171 = 451539;

    t171 = (x1265>(x1266>>(x1267>x1268)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1270 = 3893;
	uint64_t x1271 = UINT64_MAX;
	int32_t x1272 = INT32_MIN;
	volatile int32_t t172 = 8;

    t172 = (x1269>(x1270>>(x1271>x1272)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x1273 = 66000LLU;
	int8_t x1274 = INT8_MAX;
	volatile int16_t x1275 = 3300;
	volatile int64_t x1276 = 20730066016131738LL;
	volatile int32_t t173 = -422859720;

    t173 = (x1273>(x1274>>(x1275>x1276)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x1285 = -823192240578726936LL;
	volatile uint8_t x1286 = 14U;
	int32_t x1287 = -990847;
	int16_t x1288 = 1;

    t174 = (x1285>(x1286>>(x1287>x1288)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x1289 = INT32_MIN;
	uint64_t x1290 = 209LLU;
	static int16_t x1291 = -1;
	volatile int16_t x1292 = INT16_MIN;
	static volatile int32_t t175 = -1;

    t175 = (x1289>(x1290>>(x1291>x1292)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x1293 = -424;
	volatile uint64_t x1294 = 472810202876LLU;
	int32_t x1295 = INT32_MAX;
	static int32_t t176 = -26;

    t176 = (x1293>(x1294>>(x1295>x1296)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1301 = UINT8_MAX;
	volatile int8_t x1302 = 50;
	int8_t x1303 = INT8_MIN;
	int32_t x1304 = INT32_MIN;
	volatile int32_t t177 = 850;

    t177 = (x1301>(x1302>>(x1303>x1304)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x1309 = INT32_MIN;
	int32_t x1311 = -12;
	int16_t x1312 = 41;

    t178 = (x1309>(x1310>>(x1311>x1312)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1313 = INT64_MIN;
	uint64_t x1314 = 1113137903059643LLU;
	volatile uint8_t x1315 = 6U;
	static uint8_t x1316 = 1U;
	volatile int32_t t179 = 21833094;

    t179 = (x1313>(x1314>>(x1315>x1316)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x1329 = INT16_MIN;
	volatile uint16_t x1330 = 5U;
	uint64_t x1331 = 11643626597039367LLU;
	int16_t x1332 = INT16_MAX;

    t180 = (x1329>(x1330>>(x1331>x1332)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1333 = INT8_MAX;
	volatile uint8_t x1334 = 10U;
	int8_t x1335 = INT8_MIN;

    t181 = (x1333>(x1334>>(x1335>x1336)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x1354 = INT64_MAX;
	uint32_t x1355 = UINT32_MAX;
	int32_t x1356 = -1;
	volatile int32_t t182 = -1;

    t182 = (x1353>(x1354>>(x1355>x1356)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1357 = UINT64_MAX;
	uint32_t x1358 = UINT32_MAX;
	int8_t x1359 = INT8_MIN;

    t183 = (x1357>(x1358>>(x1359>x1360)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x1367 = INT16_MIN;
	int64_t x1368 = INT64_MAX;
	int32_t t184 = 4600;

    t184 = (x1365>(x1366>>(x1367>x1368)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1369 = -1;
	static int64_t x1370 = INT64_MAX;
	static int32_t x1371 = 1101540;
	static int16_t x1372 = INT16_MIN;
	int32_t t185 = -969714;

    t185 = (x1369>(x1370>>(x1371>x1372)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x1377 = UINT64_MAX;
	int64_t x1379 = 18171782182470655LL;
	int64_t x1380 = 1755083241228310605LL;

    t186 = (x1377>(x1378>>(x1379>x1380)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x1386 = 111774296100911LLU;
	static int32_t x1387 = INT32_MIN;
	int64_t x1388 = -1LL;
	volatile int32_t t187 = 47075256;

    t187 = (x1385>(x1386>>(x1387>x1388)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1389 = INT32_MAX;
	uint64_t x1390 = 352622518437LLU;
	static int64_t x1391 = INT64_MIN;
	volatile int32_t t188 = -9;

    t188 = (x1389>(x1390>>(x1391>x1392)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1393 = 6184;
	uint64_t x1394 = 2802498575233061741LLU;
	int8_t x1395 = INT8_MIN;
	volatile int32_t t189 = -7;

    t189 = (x1393>(x1394>>(x1395>x1396)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1405 = 0U;
	uint16_t x1406 = 2U;
	static uint16_t x1407 = 24305U;
	int16_t x1408 = INT16_MAX;
	int32_t t190 = 4341;

    t190 = (x1405>(x1406>>(x1407>x1408)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x1411 = INT8_MIN;
	int16_t x1412 = INT16_MAX;
	int32_t t191 = -898562;

    t191 = (x1409>(x1410>>(x1411>x1412)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x1418 = INT64_MAX;
	int32_t x1420 = -1;
	static volatile int32_t t192 = 130889359;

    t192 = (x1417>(x1418>>(x1419>x1420)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x1422 = INT64_MAX;
	uint8_t x1423 = 0U;
	int8_t x1424 = INT8_MIN;

    t193 = (x1421>(x1422>>(x1423>x1424)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1425 = INT64_MIN;
	int8_t x1426 = INT8_MAX;
	static volatile int32_t t194 = 21629390;

    t194 = (x1425>(x1426>>(x1427>x1428)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1429 = 185LLU;
	uint16_t x1430 = UINT16_MAX;
	static uint8_t x1431 = UINT8_MAX;
	static int32_t t195 = -11;

    t195 = (x1429>(x1430>>(x1431>x1432)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1433 = INT8_MAX;
	uint8_t x1434 = UINT8_MAX;

    t196 = (x1433>(x1434>>(x1435>x1436)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1457 = -390427;
	static volatile int8_t x1458 = INT8_MAX;
	static int64_t x1460 = 8949LL;

    t197 = (x1457>(x1458>>(x1459>x1460)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1465 = -79;
	uint8_t x1466 = 18U;
	int64_t x1467 = -1LL;
	uint64_t x1468 = 4751549520508496324LLU;
	int32_t t198 = 0;

    t198 = (x1465>(x1466>>(x1467>x1468)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x1471 = -1599304580LL;
	int8_t x1472 = INT8_MIN;
	volatile int32_t t199 = -76107;

    t199 = (x1469>(x1470>>(x1471>x1472)));

    if (t199 != 1) { NG(); } else { ; }
	
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

