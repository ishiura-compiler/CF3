
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

static uint8_t x6 = 3U;
int16_t x12 = INT16_MIN;
int16_t x35 = -1;
uint64_t x42 = 126103832450733LLU;
uint16_t x59 = 0U;
int32_t t8 = 164;
int32_t x76 = 0;
static volatile uint64_t x88 = 9680760972117224LLU;
volatile uint8_t x118 = 57U;
int32_t x119 = -1;
uint8_t x142 = 12U;
uint16_t x144 = 3U;
static int32_t t21 = 1376;
uint32_t x155 = UINT32_MAX;
int8_t x167 = 4;
int32_t t23 = 952;
volatile int8_t x171 = 31;
volatile int32_t t24 = 0;
uint64_t x181 = 54LLU;
int32_t x199 = 62009170;
volatile int32_t t28 = -260241;
uint8_t x217 = 5U;
uint16_t x222 = UINT16_MAX;
int16_t x224 = -1;
static volatile int32_t t32 = -1028645;
int32_t x239 = INT32_MIN;
uint32_t x260 = 735U;
volatile int16_t x269 = 4;
uint8_t x273 = 118U;
static uint32_t x278 = UINT32_MAX;
static volatile int64_t x280 = -1LL;
static uint16_t x318 = 147U;
int16_t x319 = -1;
static volatile int64_t x320 = 476076704434LL;
static int32_t x321 = -54;
int8_t x324 = -1;
volatile uint16_t x340 = 2479U;
int16_t x341 = INT16_MAX;
int8_t x342 = INT8_MAX;
static int16_t x344 = -1;
volatile int32_t t47 = 10;
int16_t x355 = -1;
volatile uint8_t x367 = UINT8_MAX;
uint16_t x373 = 258U;
volatile int32_t t53 = 711351237;
static int16_t x390 = 6;
volatile uint64_t x392 = UINT64_MAX;
uint8_t x394 = 36U;
int16_t x396 = 78;
static volatile int32_t t56 = -825518;
uint32_t x438 = 2466U;
static uint8_t x444 = 19U;
static int16_t x461 = INT16_MIN;
int64_t x464 = 33222828598LL;
int16_t x471 = INT16_MAX;
static int16_t x472 = -1;
int32_t t63 = 1;
uint64_t x481 = 1469259798176764017LLU;
int8_t x486 = 21;
static int32_t x488 = INT32_MIN;
int32_t t66 = 33;
volatile int8_t x489 = -1;
volatile int32_t x501 = -48;
uint8_t x504 = 1U;
int8_t x527 = INT8_MIN;
uint16_t x535 = 3487U;
int32_t t73 = -420172132;
volatile int64_t x558 = 672882591724614LL;
int32_t x560 = -1;
volatile int32_t t75 = -2783674;
int32_t x561 = INT32_MIN;
int16_t x563 = 1;
int32_t t77 = -40;
static uint32_t x597 = 12U;
uint32_t x607 = 24988U;
static int64_t x613 = -1LL;
int16_t x615 = -198;
volatile int64_t x620 = INT64_MIN;
volatile uint32_t x627 = 13625U;
int32_t x629 = INT32_MIN;
uint16_t x654 = 168U;
uint32_t x656 = UINT32_MAX;
uint64_t x674 = 3376168452585LLU;
int32_t t87 = 4156;
uint32_t x679 = UINT32_MAX;
int32_t t89 = -114009;
uint8_t x691 = 3U;
static int64_t x697 = INT64_MAX;
uint64_t x698 = UINT64_MAX;
volatile uint16_t x700 = 889U;
int32_t t92 = -365279;
static int8_t x713 = INT8_MIN;
int64_t x740 = -1LL;
int32_t t95 = -9826;
int64_t x741 = INT64_MIN;
int32_t t96 = -1;
uint32_t x745 = UINT32_MAX;
static int64_t x748 = 139706195574004LL;
int16_t x751 = INT16_MIN;
int16_t x763 = INT16_MAX;
volatile int32_t t101 = 1883;
int64_t x777 = -58532LL;
static int8_t x780 = 1;
volatile uint32_t x787 = UINT32_MAX;
volatile int16_t x795 = INT16_MAX;
int64_t x796 = INT64_MAX;
volatile int32_t t105 = -58;
volatile int32_t t107 = 48911;
uint64_t x825 = 441LLU;
int16_t x833 = INT16_MIN;
static int32_t t111 = 29204174;
uint64_t x840 = UINT64_MAX;
volatile uint8_t x851 = 59U;
uint16_t x854 = 27058U;
uint16_t x886 = 1U;
int16_t x895 = -1;
int8_t x897 = -1;
uint32_t x917 = UINT32_MAX;
volatile uint8_t x947 = 2U;
static volatile int32_t t122 = 81;
int32_t t123 = 22022;
int32_t x959 = -1;
int32_t x960 = -1818448;
int16_t x961 = -1;
static uint8_t x962 = UINT8_MAX;
int16_t x963 = -1;
int32_t x982 = 0;
static uint32_t x986 = 3704445U;
uint16_t x987 = UINT16_MAX;
static int32_t t129 = 9578;
volatile int32_t x1010 = 77550539;
int16_t x1011 = -1;
int32_t x1029 = INT32_MIN;
int32_t t133 = -64332702;
int64_t x1057 = -1318016979LL;
static uint8_t x1058 = UINT8_MAX;
static uint16_t x1059 = 10U;
int32_t x1068 = INT32_MAX;
uint32_t x1080 = 2585783U;
int16_t x1082 = 386;
int32_t t138 = 20753970;
int32_t x1092 = 99183908;
volatile uint64_t x1110 = 1314990LLU;
int16_t x1111 = 427;
int64_t x1114 = INT64_MAX;
int16_t x1117 = -1;
int32_t x1118 = 548210;
int32_t t143 = -1098103;
volatile int32_t t146 = -926387251;
static uint32_t x1138 = 72167749U;
int32_t x1149 = -1;
int32_t t148 = -24578463;
uint16_t x1177 = 1318U;
int32_t t149 = 669911;
volatile int64_t x1187 = INT64_MAX;
uint8_t x1210 = UINT8_MAX;
int16_t x1237 = 1;
uint64_t x1250 = 105510560078564091LLU;
int32_t t161 = -291;
volatile int32_t t163 = -107669320;
volatile int8_t x1275 = INT8_MIN;
volatile uint16_t x1284 = UINT16_MAX;
int64_t x1285 = INT64_MIN;
volatile uint16_t x1288 = 1618U;
volatile int16_t x1290 = INT16_MAX;
volatile int32_t t168 = -271296;
uint8_t x1298 = UINT8_MAX;
uint16_t x1299 = 1846U;
static int32_t x1305 = INT32_MIN;
int32_t t170 = 177489776;
uint64_t x1329 = UINT64_MAX;
static uint64_t x1331 = 14886LLU;
static volatile int64_t x1332 = -1LL;
volatile int32_t t171 = 3349005;
int8_t x1335 = INT8_MIN;
int8_t x1336 = -24;
int64_t x1337 = INT64_MIN;
int64_t x1348 = INT64_MAX;
static int16_t x1359 = 4875;
int32_t t180 = 1;
volatile int16_t x1381 = INT16_MAX;
int32_t t181 = 158596920;
int8_t x1385 = INT8_MAX;
volatile int32_t t184 = 1;
uint32_t x1398 = UINT32_MAX;
uint32_t x1400 = UINT32_MAX;
uint8_t x1412 = 95U;
volatile int8_t x1419 = INT8_MAX;
static uint16_t x1422 = UINT16_MAX;
static uint16_t x1450 = 32U;
static uint32_t x1452 = UINT32_MAX;
int32_t t190 = 16935341;
static int16_t x1463 = -9926;
int32_t x1464 = INT32_MIN;
uint32_t x1470 = 3U;
static int32_t t193 = 1;
uint32_t x1477 = UINT32_MAX;
uint32_t x1493 = 1897185501U;
volatile int8_t x1499 = -1;


void f0(void) {
    	int64_t x5 = INT64_MIN;
	int64_t x7 = 0LL;
	volatile uint8_t x8 = 47U;
	static volatile int32_t t0 = 69;

    t0 = (x5!=(x6<<(x7>x8)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x9 = 37738383814563802LL;
	volatile uint64_t x10 = 18467501210542043LLU;
	uint16_t x11 = UINT16_MAX;
	int32_t t1 = 929867;

    t1 = (x9!=(x10<<(x11>x12)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x13 = UINT64_MAX;
	volatile uint16_t x14 = UINT16_MAX;
	int16_t x15 = 1;
	volatile int64_t x16 = INT64_MIN;
	int32_t t2 = -30149665;

    t2 = (x13!=(x14<<(x15>x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x29 = -1LL;
	volatile uint16_t x30 = 4U;
	volatile uint32_t x31 = 7U;
	int8_t x32 = 3;
	int32_t t3 = -6556863;

    t3 = (x29!=(x30<<(x31>x32)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x33 = INT64_MAX;
	uint64_t x34 = UINT64_MAX;
	int16_t x36 = -1;
	static volatile int32_t t4 = -2584571;

    t4 = (x33!=(x34<<(x35>x36)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x41 = INT16_MAX;
	static int16_t x43 = -6044;
	int16_t x44 = -360;
	volatile int32_t t5 = -5109;

    t5 = (x41!=(x42<<(x43>x44)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x53 = -1;
	static int16_t x54 = 354;
	int32_t x55 = -1;
	int32_t x56 = 125820899;
	int32_t t6 = 641369845;

    t6 = (x53!=(x54<<(x55>x56)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x57 = 1;
	volatile uint16_t x58 = 11U;
	int8_t x60 = INT8_MAX;
	int32_t t7 = -143738;

    t7 = (x57!=(x58<<(x59>x60)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x61 = INT64_MIN;
	int64_t x62 = 644532LL;
	int32_t x63 = -1;
	uint32_t x64 = 215U;

    t8 = (x61!=(x62<<(x63>x64)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x73 = INT16_MIN;
	int32_t x74 = 12614792;
	int32_t x75 = INT32_MIN;
	volatile int32_t t9 = -345;

    t9 = (x73!=(x74<<(x75>x76)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x77 = -1LL;
	uint64_t x78 = UINT64_MAX;
	int64_t x79 = INT64_MIN;
	int16_t x80 = 19;
	static volatile int32_t t10 = 12600589;

    t10 = (x77!=(x78<<(x79>x80)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x81 = -76827894306102LL;
	uint16_t x82 = 333U;
	int8_t x83 = INT8_MIN;
	static volatile int8_t x84 = INT8_MIN;
	int32_t t11 = -9895032;

    t11 = (x81!=(x82<<(x83>x84)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x85 = INT16_MAX;
	int16_t x86 = 0;
	uint8_t x87 = 20U;
	volatile int32_t t12 = 5;

    t12 = (x85!=(x86<<(x87>x88)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x93 = 42;
	volatile uint64_t x94 = UINT64_MAX;
	static volatile uint64_t x95 = 14872156528669LLU;
	volatile int32_t x96 = -1;
	int32_t t13 = -176;

    t13 = (x93!=(x94<<(x95>x96)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x97 = UINT64_MAX;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = -1100383623914434150LL;
	int16_t x100 = -1;
	static int32_t t14 = -2;

    t14 = (x97!=(x98<<(x99>x100)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x105 = UINT64_MAX;
	uint32_t x106 = UINT32_MAX;
	static int32_t x107 = -1;
	int64_t x108 = 219259339783055651LL;
	int32_t t15 = -499125;

    t15 = (x105!=(x106<<(x107>x108)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x109 = INT8_MIN;
	uint32_t x110 = UINT32_MAX;
	static int64_t x111 = INT64_MAX;
	uint64_t x112 = 4383619585585741855LLU;
	int32_t t16 = 15;

    t16 = (x109!=(x110<<(x111>x112)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x113 = -1;
	static uint8_t x114 = 40U;
	int64_t x115 = INT64_MIN;
	uint64_t x116 = UINT64_MAX;
	static volatile int32_t t17 = 29;

    t17 = (x113!=(x114<<(x115>x116)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x117 = -1;
	static int32_t x120 = INT32_MAX;
	volatile int32_t t18 = 2;

    t18 = (x117!=(x118<<(x119>x120)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x137 = INT32_MAX;
	static int64_t x138 = INT64_MAX;
	static int64_t x139 = INT64_MIN;
	volatile int16_t x140 = INT16_MIN;
	static int32_t t19 = 0;

    t19 = (x137!=(x138<<(x139>x140)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x141 = -1LL;
	static int64_t x143 = INT64_MIN;
	static int32_t t20 = -8173168;

    t20 = (x141!=(x142<<(x143>x144)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x145 = 837;
	volatile uint64_t x146 = 464963017965877669LLU;
	static uint8_t x147 = 5U;
	uint16_t x148 = UINT16_MAX;

    t21 = (x145!=(x146<<(x147>x148)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x153 = -5;
	static volatile int16_t x154 = 30;
	int64_t x156 = 98106302254537LL;
	static int32_t t22 = -138456;

    t22 = (x153!=(x154<<(x155>x156)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x165 = 0;
	uint8_t x166 = 81U;
	volatile uint64_t x168 = UINT64_MAX;

    t23 = (x165!=(x166<<(x167>x168)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x169 = INT16_MIN;
	static uint16_t x170 = 29627U;
	uint8_t x172 = UINT8_MAX;

    t24 = (x169!=(x170<<(x171>x172)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x173 = INT16_MIN;
	uint64_t x174 = UINT64_MAX;
	static int32_t x175 = -2811;
	int64_t x176 = INT64_MAX;
	volatile int32_t t25 = -1218;

    t25 = (x173!=(x174<<(x175>x176)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x182 = UINT32_MAX;
	static int8_t x183 = -1;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t26 = 59;

    t26 = (x181!=(x182<<(x183>x184)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x189 = -1;
	uint64_t x190 = 1454937252446LLU;
	uint32_t x191 = 0U;
	volatile uint64_t x192 = 126798908898259LLU;
	int32_t t27 = 513;

    t27 = (x189!=(x190<<(x191>x192)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x197 = UINT32_MAX;
	uint64_t x198 = 434501284396156LLU;
	int16_t x200 = INT16_MIN;

    t28 = (x197!=(x198<<(x199>x200)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x205 = 5;
	int16_t x206 = INT16_MAX;
	int32_t x207 = INT32_MAX;
	int64_t x208 = -1LL;
	int32_t t29 = -146379;

    t29 = (x205!=(x206<<(x207>x208)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x209 = -23051LL;
	static int16_t x210 = 125;
	uint64_t x211 = 14550770877233LLU;
	uint32_t x212 = 2U;
	volatile int32_t t30 = 186;

    t30 = (x209!=(x210<<(x211>x212)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x218 = 5398U;
	int64_t x219 = INT64_MIN;
	int64_t x220 = 7LL;
	volatile int32_t t31 = -42357436;

    t31 = (x217!=(x218<<(x219>x220)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x221 = -25675LL;
	int32_t x223 = INT32_MAX;

    t32 = (x221!=(x222<<(x223>x224)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x237 = 136501U;
	uint8_t x238 = 0U;
	int64_t x240 = 8754402072666LL;
	int32_t t33 = -255019;

    t33 = (x237!=(x238<<(x239>x240)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x253 = 14LL;
	static volatile uint8_t x254 = 3U;
	volatile int64_t x255 = -79594805867300LL;
	int32_t x256 = -101;
	int32_t t34 = 321;

    t34 = (x253!=(x254<<(x255>x256)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x257 = 371U;
	int64_t x258 = INT64_MAX;
	uint64_t x259 = 22LLU;
	int32_t t35 = -64068;

    t35 = (x257!=(x258<<(x259>x260)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x261 = 4U;
	volatile uint8_t x262 = 2U;
	int16_t x263 = INT16_MIN;
	int8_t x264 = -1;
	static int32_t t36 = 953990;

    t36 = (x261!=(x262<<(x263>x264)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x270 = 517149282U;
	static int8_t x271 = INT8_MIN;
	int32_t x272 = INT32_MIN;
	int32_t t37 = -902388416;

    t37 = (x269!=(x270<<(x271>x272)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x274 = 115;
	uint32_t x275 = 1U;
	int8_t x276 = -7;
	int32_t t38 = -1;

    t38 = (x273!=(x274<<(x275>x276)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x277 = UINT8_MAX;
	int16_t x279 = -1;
	static int32_t t39 = 123777427;

    t39 = (x277!=(x278<<(x279>x280)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x285 = INT64_MIN;
	static uint8_t x286 = 84U;
	static volatile int64_t x287 = -15LL;
	static uint8_t x288 = 18U;
	volatile int32_t t40 = -328;

    t40 = (x285!=(x286<<(x287>x288)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x301 = INT64_MIN;
	uint8_t x302 = 5U;
	volatile uint16_t x303 = 369U;
	static int32_t x304 = INT32_MIN;
	int32_t t41 = -186;

    t41 = (x301!=(x302<<(x303>x304)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x305 = -1LL;
	uint64_t x306 = UINT64_MAX;
	int64_t x307 = 4LL;
	int64_t x308 = -835282LL;
	static int32_t t42 = 4693;

    t42 = (x305!=(x306<<(x307>x308)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x317 = 1U;
	static volatile int32_t t43 = -74162;

    t43 = (x317!=(x318<<(x319>x320)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x322 = 811;
	static uint8_t x323 = UINT8_MAX;
	int32_t t44 = 7842716;

    t44 = (x321!=(x322<<(x323>x324)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x337 = 295837984;
	int8_t x338 = 1;
	int64_t x339 = INT64_MIN;
	int32_t t45 = -286254;

    t45 = (x337!=(x338<<(x339>x340)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x343 = UINT32_MAX;
	static int32_t t46 = -18;

    t46 = (x341!=(x342<<(x343>x344)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x345 = INT16_MAX;
	static uint8_t x346 = 6U;
	int32_t x347 = INT32_MIN;
	int16_t x348 = 5;

    t47 = (x345!=(x346<<(x347>x348)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x353 = -1;
	uint64_t x354 = 337196839984586359LLU;
	uint64_t x356 = 4238284557304924617LLU;
	int32_t t48 = -2;

    t48 = (x353!=(x354<<(x355>x356)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x365 = 21696;
	volatile uint64_t x366 = 329329831LLU;
	int16_t x368 = INT16_MIN;
	volatile int32_t t49 = 107;

    t49 = (x365!=(x366<<(x367>x368)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x369 = INT8_MIN;
	uint16_t x370 = 7U;
	volatile int64_t x371 = -1LL;
	int8_t x372 = INT8_MIN;
	int32_t t50 = -3775;

    t50 = (x369!=(x370<<(x371>x372)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x374 = INT16_MAX;
	uint64_t x375 = 3154998274332716181LLU;
	volatile int32_t x376 = -29;
	volatile int32_t t51 = 159171;

    t51 = (x373!=(x374<<(x375>x376)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x381 = INT16_MIN;
	int16_t x382 = INT16_MAX;
	static volatile uint8_t x383 = 86U;
	uint8_t x384 = 108U;
	int32_t t52 = -3222;

    t52 = (x381!=(x382<<(x383>x384)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x385 = INT16_MAX;
	int32_t x386 = INT32_MAX;
	static uint32_t x387 = 22U;
	static int8_t x388 = 23;

    t53 = (x385!=(x386<<(x387>x388)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x389 = -1;
	int16_t x391 = -13;
	volatile int32_t t54 = 175086006;

    t54 = (x389!=(x390<<(x391>x392)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x393 = INT32_MAX;
	volatile int64_t x395 = INT64_MIN;
	int32_t t55 = 0;

    t55 = (x393!=(x394<<(x395>x396)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x401 = INT8_MIN;
	int8_t x402 = INT8_MAX;
	volatile int16_t x403 = INT16_MIN;
	uint16_t x404 = UINT16_MAX;

    t56 = (x401!=(x402<<(x403>x404)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x409 = 1640;
	volatile uint32_t x410 = 6455U;
	int32_t x411 = -1;
	uint8_t x412 = 13U;
	static int32_t t57 = -56439420;

    t57 = (x409!=(x410<<(x411>x412)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x437 = INT16_MIN;
	static int32_t x439 = INT32_MIN;
	int16_t x440 = INT16_MIN;
	static volatile int32_t t58 = 491608;

    t58 = (x437!=(x438<<(x439>x440)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x441 = -884LL;
	int64_t x442 = 8896881068227863LL;
	int8_t x443 = INT8_MAX;
	static volatile int32_t t59 = 113584;

    t59 = (x441!=(x442<<(x443>x444)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x449 = INT16_MIN;
	int64_t x450 = INT64_MAX;
	volatile int32_t x451 = INT32_MIN;
	int32_t x452 = INT32_MIN;
	volatile int32_t t60 = 1926;

    t60 = (x449!=(x450<<(x451>x452)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x462 = 245495776U;
	volatile int16_t x463 = INT16_MIN;
	int32_t t61 = 1;

    t61 = (x461!=(x462<<(x463>x464)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x465 = UINT8_MAX;
	uint64_t x466 = 2659124057730LLU;
	uint64_t x467 = 1LLU;
	static int32_t x468 = INT32_MIN;
	volatile int32_t t62 = -47;

    t62 = (x465!=(x466<<(x467>x468)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x469 = INT64_MIN;
	static uint16_t x470 = 0U;

    t63 = (x469!=(x470<<(x471>x472)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x477 = -28;
	static uint64_t x478 = 6120449063020850LLU;
	int64_t x479 = INT64_MAX;
	uint64_t x480 = 6067723451526403LLU;
	static int32_t t64 = -2;

    t64 = (x477!=(x478<<(x479>x480)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x482 = 7576U;
	int16_t x483 = 569;
	int32_t x484 = 891208619;
	volatile int32_t t65 = -51;

    t65 = (x481!=(x482<<(x483>x484)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x485 = INT8_MIN;
	volatile uint16_t x487 = 12483U;

    t66 = (x485!=(x486<<(x487>x488)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x490 = INT8_MAX;
	static int16_t x491 = INT16_MIN;
	static int64_t x492 = INT64_MIN;
	int32_t t67 = 592672772;

    t67 = (x489!=(x490<<(x491>x492)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x497 = 20U;
	uint16_t x498 = 12201U;
	volatile int16_t x499 = -2704;
	int32_t x500 = INT32_MIN;
	int32_t t68 = 7568301;

    t68 = (x497!=(x498<<(x499>x500)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x502 = INT32_MAX;
	volatile int64_t x503 = -1LL;
	int32_t t69 = -10;

    t69 = (x501!=(x502<<(x503>x504)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x517 = 267011426561287LLU;
	int8_t x518 = 56;
	static int16_t x519 = INT16_MIN;
	static int16_t x520 = INT16_MIN;
	static volatile int32_t t70 = 12997;

    t70 = (x517!=(x518<<(x519>x520)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x525 = 25;
	int16_t x526 = 6848;
	static int64_t x528 = INT64_MIN;
	volatile int32_t t71 = 23689151;

    t71 = (x525!=(x526<<(x527>x528)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x533 = 1;
	uint32_t x534 = 794264U;
	volatile int8_t x536 = INT8_MAX;
	int32_t t72 = 107094753;

    t72 = (x533!=(x534<<(x535>x536)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x541 = INT32_MIN;
	uint16_t x542 = 418U;
	int32_t x543 = INT32_MAX;
	uint8_t x544 = 124U;

    t73 = (x541!=(x542<<(x543>x544)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x545 = UINT8_MAX;
	uint8_t x546 = 5U;
	uint16_t x547 = 18448U;
	static uint64_t x548 = UINT64_MAX;
	int32_t t74 = 317693;

    t74 = (x545!=(x546<<(x547>x548)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x557 = -23990799482LL;
	int8_t x559 = 7;

    t75 = (x557!=(x558<<(x559>x560)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x562 = UINT32_MAX;
	static uint16_t x564 = 0U;
	volatile int32_t t76 = 0;

    t76 = (x561!=(x562<<(x563>x564)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x565 = -1;
	static uint16_t x566 = 29963U;
	int16_t x567 = -1;
	int8_t x568 = INT8_MIN;

    t77 = (x565!=(x566<<(x567>x568)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x598 = 258LLU;
	int64_t x599 = INT64_MIN;
	int16_t x600 = INT16_MIN;
	int32_t t78 = 3;

    t78 = (x597!=(x598<<(x599>x600)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x605 = INT16_MIN;
	int8_t x606 = INT8_MAX;
	uint16_t x608 = 3U;
	volatile int32_t t79 = -17007;

    t79 = (x605!=(x606<<(x607>x608)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x614 = INT16_MAX;
	static int16_t x616 = INT16_MIN;
	static int32_t t80 = -822054973;

    t80 = (x613!=(x614<<(x615>x616)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x617 = INT8_MIN;
	int8_t x618 = 2;
	volatile int16_t x619 = INT16_MIN;
	volatile int32_t t81 = 23272;

    t81 = (x617!=(x618<<(x619>x620)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x625 = INT8_MIN;
	uint8_t x626 = 28U;
	int8_t x628 = INT8_MIN;
	static int32_t t82 = 978;

    t82 = (x625!=(x626<<(x627>x628)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x630 = 0;
	volatile uint16_t x631 = UINT16_MAX;
	static volatile int64_t x632 = 4139911327792758530LL;
	int32_t t83 = 2;

    t83 = (x629!=(x630<<(x631>x632)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x641 = -58;
	int16_t x642 = INT16_MAX;
	int32_t x643 = -509;
	static int64_t x644 = -6046629550LL;
	int32_t t84 = 32843;

    t84 = (x641!=(x642<<(x643>x644)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x653 = INT16_MAX;
	uint16_t x655 = UINT16_MAX;
	int32_t t85 = -186116;

    t85 = (x653!=(x654<<(x655>x656)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x661 = INT8_MAX;
	volatile uint8_t x662 = 18U;
	static int8_t x663 = 7;
	static int16_t x664 = 29;
	volatile int32_t t86 = 30;

    t86 = (x661!=(x662<<(x663>x664)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x673 = 54;
	volatile uint32_t x675 = UINT32_MAX;
	uint16_t x676 = 7U;

    t87 = (x673!=(x674<<(x675>x676)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x677 = -4877;
	volatile int8_t x678 = INT8_MAX;
	int64_t x680 = INT64_MIN;
	int32_t t88 = -1751;

    t88 = (x677!=(x678<<(x679>x680)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x685 = 490U;
	static uint32_t x686 = UINT32_MAX;
	int16_t x687 = -1;
	volatile int32_t x688 = INT32_MIN;

    t89 = (x685!=(x686<<(x687>x688)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint8_t x689 = UINT8_MAX;
	uint64_t x690 = 57LLU;
	uint32_t x692 = 19U;
	static int32_t t90 = 37729;

    t90 = (x689!=(x690<<(x691>x692)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int64_t x699 = INT64_MIN;
	int32_t t91 = -462234604;

    t91 = (x697!=(x698<<(x699>x700)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x705 = 2099796262U;
	uint64_t x706 = 90456498LLU;
	int64_t x707 = INT64_MIN;
	volatile int32_t x708 = INT32_MIN;

    t92 = (x705!=(x706<<(x707>x708)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x714 = UINT32_MAX;
	volatile int16_t x715 = INT16_MIN;
	static volatile uint16_t x716 = 127U;
	int32_t t93 = 0;

    t93 = (x713!=(x714<<(x715>x716)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x721 = 1;
	uint16_t x722 = 1790U;
	uint16_t x723 = UINT16_MAX;
	static uint8_t x724 = 15U;
	static volatile int32_t t94 = -2382244;

    t94 = (x721!=(x722<<(x723>x724)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x737 = 9LL;
	uint8_t x738 = 83U;
	int64_t x739 = -1LL;

    t95 = (x737!=(x738<<(x739>x740)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x742 = 216U;
	uint16_t x743 = UINT16_MAX;
	int64_t x744 = INT64_MIN;

    t96 = (x741!=(x742<<(x743>x744)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x746 = 11U;
	static uint16_t x747 = UINT16_MAX;
	int32_t t97 = -494136;

    t97 = (x745!=(x746<<(x747>x748)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x749 = INT16_MAX;
	int8_t x750 = INT8_MAX;
	int16_t x752 = INT16_MIN;
	volatile int32_t t98 = 31;

    t98 = (x749!=(x750<<(x751>x752)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x753 = INT32_MIN;
	uint16_t x754 = UINT16_MAX;
	static int32_t x755 = INT32_MIN;
	uint64_t x756 = 17968289142LLU;
	volatile int32_t t99 = 0;

    t99 = (x753!=(x754<<(x755>x756)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x761 = -51;
	int32_t x762 = 114;
	int8_t x764 = INT8_MAX;
	int32_t t100 = -3;

    t100 = (x761!=(x762<<(x763>x764)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x769 = 201;
	volatile uint8_t x770 = 8U;
	static volatile int16_t x771 = INT16_MIN;
	uint32_t x772 = UINT32_MAX;

    t101 = (x769!=(x770<<(x771>x772)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x778 = 75U;
	int16_t x779 = INT16_MIN;
	int32_t t102 = 0;

    t102 = (x777!=(x778<<(x779>x780)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x785 = -41;
	static uint64_t x786 = 3LLU;
	uint8_t x788 = 0U;
	int32_t t103 = -22225600;

    t103 = (x785!=(x786<<(x787>x788)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x793 = 15792;
	int16_t x794 = INT16_MAX;
	volatile int32_t t104 = -17265;

    t104 = (x793!=(x794<<(x795>x796)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x797 = INT64_MIN;
	int8_t x798 = 3;
	int32_t x799 = -5;
	static uint16_t x800 = UINT16_MAX;

    t105 = (x797!=(x798<<(x799>x800)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x805 = 536908919;
	uint32_t x806 = 1776875U;
	int16_t x807 = INT16_MIN;
	volatile int64_t x808 = INT64_MIN;
	static int32_t t106 = -1393;

    t106 = (x805!=(x806<<(x807>x808)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x813 = INT16_MIN;
	uint64_t x814 = 773577LLU;
	volatile uint8_t x815 = 13U;
	uint8_t x816 = 2U;

    t107 = (x813!=(x814<<(x815>x816)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x817 = -1LL;
	static int64_t x818 = 274LL;
	uint64_t x819 = 2814875LLU;
	int8_t x820 = 2;
	volatile int32_t t108 = 63;

    t108 = (x817!=(x818<<(x819>x820)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x826 = 3728079752559LLU;
	static uint8_t x827 = 27U;
	int16_t x828 = 4;
	int32_t t109 = -137986885;

    t109 = (x825!=(x826<<(x827>x828)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x829 = 30300247U;
	uint8_t x830 = 1U;
	int16_t x831 = INT16_MAX;
	int16_t x832 = -5;
	int32_t t110 = 2854281;

    t110 = (x829!=(x830<<(x831>x832)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x834 = 10564U;
	uint32_t x835 = 510U;
	int64_t x836 = INT64_MIN;

    t111 = (x833!=(x834<<(x835>x836)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x837 = 224966;
	uint8_t x838 = 0U;
	int8_t x839 = INT8_MIN;
	static volatile int32_t t112 = -1975;

    t112 = (x837!=(x838<<(x839>x840)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x849 = INT32_MIN;
	int8_t x850 = INT8_MAX;
	uint16_t x852 = 0U;
	int32_t t113 = 2833;

    t113 = (x849!=(x850<<(x851>x852)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x853 = -1LL;
	volatile int16_t x855 = -1;
	int8_t x856 = INT8_MIN;
	static volatile int32_t t114 = 541;

    t114 = (x853!=(x854<<(x855>x856)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x857 = INT8_MIN;
	int8_t x858 = INT8_MAX;
	int8_t x859 = -1;
	uint64_t x860 = UINT64_MAX;
	int32_t t115 = 1;

    t115 = (x857!=(x858<<(x859>x860)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x873 = INT16_MIN;
	uint32_t x874 = UINT32_MAX;
	int64_t x875 = INT64_MAX;
	int8_t x876 = INT8_MIN;
	int32_t t116 = -645698296;

    t116 = (x873!=(x874<<(x875>x876)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x877 = 2U;
	uint64_t x878 = 185773569669083576LLU;
	static uint8_t x879 = UINT8_MAX;
	static int32_t x880 = -1;
	volatile int32_t t117 = -221598;

    t117 = (x877!=(x878<<(x879>x880)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x885 = 4962711044731267LLU;
	uint64_t x887 = UINT64_MAX;
	int8_t x888 = INT8_MIN;
	volatile int32_t t118 = -2477;

    t118 = (x885!=(x886<<(x887>x888)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x893 = INT32_MIN;
	uint64_t x894 = 4266722263310LLU;
	static int32_t x896 = 99764327;
	static volatile int32_t t119 = 80405405;

    t119 = (x893!=(x894<<(x895>x896)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x898 = 1278U;
	int16_t x899 = INT16_MIN;
	int8_t x900 = -32;
	int32_t t120 = -8;

    t120 = (x897!=(x898<<(x899>x900)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x918 = 6883295270244907414LLU;
	static int8_t x919 = INT8_MIN;
	int16_t x920 = 46;
	static int32_t t121 = 912648568;

    t121 = (x917!=(x918<<(x919>x920)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x945 = UINT16_MAX;
	volatile int8_t x946 = 0;
	volatile uint64_t x948 = 188147870503823LLU;

    t122 = (x945!=(x946<<(x947>x948)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x953 = 64LLU;
	volatile int64_t x954 = INT64_MAX;
	int8_t x955 = INT8_MIN;
	static int8_t x956 = 0;

    t123 = (x953!=(x954<<(x955>x956)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x957 = -1;
	int16_t x958 = 13;
	int32_t t124 = -309;

    t124 = (x957!=(x958<<(x959>x960)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x964 = INT16_MIN;
	int32_t t125 = -18;

    t125 = (x961!=(x962<<(x963>x964)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x981 = 3U;
	uint16_t x983 = 23753U;
	uint32_t x984 = 5U;
	int32_t t126 = 33123263;

    t126 = (x981!=(x982<<(x983>x984)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x985 = INT32_MAX;
	int8_t x988 = -1;
	int32_t t127 = 2684155;

    t127 = (x985!=(x986<<(x987>x988)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x989 = 53070U;
	uint64_t x990 = UINT64_MAX;
	static uint64_t x991 = 204497LLU;
	static uint64_t x992 = UINT64_MAX;
	volatile int32_t t128 = 516464299;

    t128 = (x989!=(x990<<(x991>x992)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x1001 = -523;
	volatile int16_t x1002 = INT16_MAX;
	uint32_t x1003 = 513U;
	int8_t x1004 = INT8_MIN;

    t129 = (x1001!=(x1002<<(x1003>x1004)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x1009 = INT8_MIN;
	volatile uint64_t x1012 = 55811643730605154LLU;
	int32_t t130 = 7;

    t130 = (x1009!=(x1010<<(x1011>x1012)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x1030 = UINT32_MAX;
	static int8_t x1031 = 1;
	uint64_t x1032 = 59468LLU;
	static volatile int32_t t131 = -50322;

    t131 = (x1029!=(x1030<<(x1031>x1032)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x1033 = -1;
	uint8_t x1034 = 125U;
	int8_t x1035 = INT8_MIN;
	static int16_t x1036 = -2;
	int32_t t132 = -229624;

    t132 = (x1033!=(x1034<<(x1035>x1036)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x1041 = INT64_MAX;
	uint32_t x1042 = 222U;
	volatile uint8_t x1043 = 29U;
	int64_t x1044 = -1LL;

    t133 = (x1041!=(x1042<<(x1043>x1044)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x1053 = -1;
	uint16_t x1054 = 3U;
	int32_t x1055 = -1;
	volatile int8_t x1056 = 5;
	static int32_t t134 = -4156;

    t134 = (x1053!=(x1054<<(x1055>x1056)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x1060 = 8915288333510330857LLU;
	volatile int32_t t135 = 65582;

    t135 = (x1057!=(x1058<<(x1059>x1060)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x1065 = -23;
	volatile uint64_t x1066 = UINT64_MAX;
	uint16_t x1067 = 3U;
	volatile int32_t t136 = 1;

    t136 = (x1065!=(x1066<<(x1067>x1068)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x1077 = 8;
	static int64_t x1078 = 340860377116105786LL;
	int16_t x1079 = INT16_MIN;
	volatile int32_t t137 = 43039193;

    t137 = (x1077!=(x1078<<(x1079>x1080)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x1081 = 35LL;
	uint8_t x1083 = 1U;
	int16_t x1084 = -1;

    t138 = (x1081!=(x1082<<(x1083>x1084)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x1089 = -1;
	volatile uint16_t x1090 = UINT16_MAX;
	volatile int32_t x1091 = 0;
	volatile int32_t t139 = -4;

    t139 = (x1089!=(x1090<<(x1091>x1092)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x1097 = UINT32_MAX;
	static int8_t x1098 = INT8_MAX;
	volatile int64_t x1099 = -1LL;
	static int32_t x1100 = -54584;
	int32_t t140 = -111018491;

    t140 = (x1097!=(x1098<<(x1099>x1100)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x1109 = -16;
	volatile int16_t x1112 = -1;
	static volatile int32_t t141 = -11275;

    t141 = (x1109!=(x1110<<(x1111>x1112)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x1113 = INT16_MIN;
	static volatile uint32_t x1115 = 1964259624U;
	int16_t x1116 = INT16_MIN;
	int32_t t142 = -950;

    t142 = (x1113!=(x1114<<(x1115>x1116)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1119 = INT32_MIN;
	uint16_t x1120 = UINT16_MAX;

    t143 = (x1117!=(x1118<<(x1119>x1120)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x1121 = -1LL;
	int16_t x1122 = 0;
	int64_t x1123 = INT64_MAX;
	int16_t x1124 = -1;
	volatile int32_t t144 = 122;

    t144 = (x1121!=(x1122<<(x1123>x1124)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x1125 = INT16_MAX;
	uint8_t x1126 = 14U;
	int32_t x1127 = -288;
	int8_t x1128 = -45;
	int32_t t145 = -191970468;

    t145 = (x1125!=(x1126<<(x1127>x1128)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x1129 = 4003090879LLU;
	uint8_t x1130 = 72U;
	int64_t x1131 = INT64_MIN;
	int8_t x1132 = INT8_MAX;

    t146 = (x1129!=(x1130<<(x1131>x1132)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x1137 = INT32_MIN;
	volatile int8_t x1139 = 1;
	int32_t x1140 = 1;
	volatile int32_t t147 = -100;

    t147 = (x1137!=(x1138<<(x1139>x1140)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x1150 = 131311684462327367LL;
	int16_t x1151 = INT16_MIN;
	static volatile int32_t x1152 = -1;

    t148 = (x1149!=(x1150<<(x1151>x1152)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x1178 = 3433037279623LLU;
	static volatile int16_t x1179 = -1;
	int64_t x1180 = INT64_MIN;

    t149 = (x1177!=(x1178<<(x1179>x1180)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1185 = -1297253017392237LL;
	uint32_t x1186 = UINT32_MAX;
	uint32_t x1188 = 3871194U;
	int32_t t150 = -15346095;

    t150 = (x1185!=(x1186<<(x1187>x1188)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x1189 = UINT16_MAX;
	volatile uint8_t x1190 = 2U;
	volatile int16_t x1191 = INT16_MIN;
	volatile int8_t x1192 = INT8_MIN;
	int32_t t151 = 12;

    t151 = (x1189!=(x1190<<(x1191>x1192)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x1197 = INT64_MAX;
	uint8_t x1198 = 3U;
	static uint32_t x1199 = UINT32_MAX;
	uint64_t x1200 = UINT64_MAX;
	int32_t t152 = -173216;

    t152 = (x1197!=(x1198<<(x1199>x1200)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x1201 = 238824443LL;
	uint64_t x1202 = UINT64_MAX;
	static int8_t x1203 = INT8_MIN;
	int32_t x1204 = 0;
	int32_t t153 = -115;

    t153 = (x1201!=(x1202<<(x1203>x1204)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x1205 = INT64_MIN;
	uint64_t x1206 = 10143740305652548LLU;
	volatile int64_t x1207 = INT64_MIN;
	int32_t x1208 = INT32_MIN;
	static int32_t t154 = -682134524;

    t154 = (x1205!=(x1206<<(x1207>x1208)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1209 = 107525477872925LLU;
	int8_t x1211 = 39;
	int32_t x1212 = INT32_MAX;
	volatile int32_t t155 = 229;

    t155 = (x1209!=(x1210<<(x1211>x1212)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1213 = INT32_MAX;
	uint16_t x1214 = 30448U;
	int64_t x1215 = -79528161173369348LL;
	int32_t x1216 = -42228;
	int32_t t156 = -961466238;

    t156 = (x1213!=(x1214<<(x1215>x1216)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1229 = INT32_MIN;
	static volatile int8_t x1230 = INT8_MAX;
	int64_t x1231 = 2331163LL;
	int8_t x1232 = INT8_MIN;
	volatile int32_t t157 = 25722;

    t157 = (x1229!=(x1230<<(x1231>x1232)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1233 = INT16_MIN;
	uint64_t x1234 = 108407247967521LLU;
	volatile int16_t x1235 = 28;
	int16_t x1236 = INT16_MIN;
	int32_t t158 = -1;

    t158 = (x1233!=(x1234<<(x1235>x1236)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1238 = 306039823;
	int64_t x1239 = INT64_MIN;
	int16_t x1240 = INT16_MIN;
	int32_t t159 = -11;

    t159 = (x1237!=(x1238<<(x1239>x1240)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1249 = INT16_MIN;
	uint64_t x1251 = 26955985346569949LLU;
	int64_t x1252 = INT64_MIN;
	static volatile int32_t t160 = -1889037;

    t160 = (x1249!=(x1250<<(x1251>x1252)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x1253 = 92U;
	static volatile uint16_t x1254 = 19601U;
	int64_t x1255 = -1LL;
	int64_t x1256 = -1LL;

    t161 = (x1253!=(x1254<<(x1255>x1256)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1265 = 1U;
	int16_t x1266 = INT16_MAX;
	volatile int32_t x1267 = -1;
	static uint32_t x1268 = 3U;
	volatile int32_t t162 = 5486382;

    t162 = (x1265!=(x1266<<(x1267>x1268)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x1269 = 145248;
	uint64_t x1270 = 30013605851492812LLU;
	int16_t x1271 = INT16_MIN;
	static uint32_t x1272 = 23305U;

    t163 = (x1269!=(x1270<<(x1271>x1272)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1273 = -1LL;
	static uint16_t x1274 = 3400U;
	static int8_t x1276 = INT8_MIN;
	int32_t t164 = 779;

    t164 = (x1273!=(x1274<<(x1275>x1276)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1277 = -5;
	static int8_t x1278 = 1;
	uint8_t x1279 = UINT8_MAX;
	int16_t x1280 = INT16_MIN;
	int32_t t165 = -24643;

    t165 = (x1277!=(x1278<<(x1279>x1280)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x1281 = 162U;
	volatile int32_t x1282 = INT32_MAX;
	volatile uint8_t x1283 = UINT8_MAX;
	int32_t t166 = -992;

    t166 = (x1281!=(x1282<<(x1283>x1284)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1286 = 134873316874720988LLU;
	uint16_t x1287 = 71U;
	int32_t t167 = 3211;

    t167 = (x1285!=(x1286<<(x1287>x1288)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1289 = -1LL;
	int16_t x1291 = -1;
	volatile int16_t x1292 = 1913;

    t168 = (x1289!=(x1290<<(x1291>x1292)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1297 = -216929LL;
	int32_t x1300 = INT32_MIN;
	volatile int32_t t169 = 983;

    t169 = (x1297!=(x1298<<(x1299>x1300)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x1306 = UINT8_MAX;
	uint8_t x1307 = 5U;
	uint16_t x1308 = UINT16_MAX;

    t170 = (x1305!=(x1306<<(x1307>x1308)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1330 = INT32_MAX;

    t171 = (x1329!=(x1330<<(x1331>x1332)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x1333 = 22220892239LLU;
	int64_t x1334 = 9469686984LL;
	volatile int32_t t172 = 1770;

    t172 = (x1333!=(x1334<<(x1335>x1336)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint16_t x1338 = 249U;
	int16_t x1339 = 32;
	static uint64_t x1340 = 3542789LLU;
	int32_t t173 = 5;

    t173 = (x1337!=(x1338<<(x1339>x1340)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1341 = -1;
	uint64_t x1342 = 502381702LLU;
	int16_t x1343 = 1;
	volatile int32_t x1344 = -1;
	volatile int32_t t174 = 3436;

    t174 = (x1341!=(x1342<<(x1343>x1344)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x1345 = 101U;
	static int32_t x1346 = 237528761;
	uint64_t x1347 = 19LLU;
	int32_t t175 = -47817445;

    t175 = (x1345!=(x1346<<(x1347>x1348)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x1349 = INT32_MAX;
	uint16_t x1350 = 15U;
	int8_t x1351 = INT8_MIN;
	int64_t x1352 = INT64_MAX;
	int32_t t176 = 56525366;

    t176 = (x1349!=(x1350<<(x1351>x1352)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x1353 = 933U;
	uint32_t x1354 = 3219U;
	uint8_t x1355 = UINT8_MAX;
	static uint64_t x1356 = 549343951356LLU;
	volatile int32_t t177 = 2;

    t177 = (x1353!=(x1354<<(x1355>x1356)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1357 = 1;
	static int8_t x1358 = 63;
	uint32_t x1360 = UINT32_MAX;
	int32_t t178 = -6060509;

    t178 = (x1357!=(x1358<<(x1359>x1360)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1369 = UINT16_MAX;
	static int64_t x1370 = INT64_MAX;
	int16_t x1371 = INT16_MAX;
	uint16_t x1372 = UINT16_MAX;
	static volatile int32_t t179 = -50240;

    t179 = (x1369!=(x1370<<(x1371>x1372)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1377 = 4357933220377251LL;
	volatile uint16_t x1378 = 403U;
	uint64_t x1379 = 581780806920920LLU;
	uint8_t x1380 = UINT8_MAX;

    t180 = (x1377!=(x1378<<(x1379>x1380)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x1382 = 7173;
	static int64_t x1383 = INT64_MIN;
	uint16_t x1384 = 3476U;

    t181 = (x1381!=(x1382<<(x1383>x1384)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1386 = 25U;
	uint64_t x1387 = 11580947651941LLU;
	static uint32_t x1388 = 7734233U;
	int32_t t182 = -49;

    t182 = (x1385!=(x1386<<(x1387>x1388)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x1389 = 1;
	uint16_t x1390 = UINT16_MAX;
	int8_t x1391 = -1;
	int8_t x1392 = -1;
	int32_t t183 = -27;

    t183 = (x1389!=(x1390<<(x1391>x1392)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1393 = INT64_MIN;
	volatile uint64_t x1394 = UINT64_MAX;
	int8_t x1395 = -1;
	int8_t x1396 = INT8_MAX;

    t184 = (x1393!=(x1394<<(x1395>x1396)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1397 = 55U;
	volatile int64_t x1399 = INT64_MIN;
	volatile int32_t t185 = 2;

    t185 = (x1397!=(x1398<<(x1399>x1400)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x1409 = INT8_MIN;
	uint16_t x1410 = UINT16_MAX;
	int8_t x1411 = -1;
	static int32_t t186 = -146;

    t186 = (x1409!=(x1410<<(x1411>x1412)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1413 = -394160354661133469LL;
	int8_t x1414 = 14;
	int8_t x1415 = -1;
	int64_t x1416 = -1LL;
	volatile int32_t t187 = 10123825;

    t187 = (x1413!=(x1414<<(x1415>x1416)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1417 = INT8_MAX;
	int16_t x1418 = INT16_MAX;
	uint32_t x1420 = UINT32_MAX;
	int32_t t188 = 27;

    t188 = (x1417!=(x1418<<(x1419>x1420)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint64_t x1421 = UINT64_MAX;
	static int16_t x1423 = -1;
	uint16_t x1424 = UINT16_MAX;
	static volatile int32_t t189 = -5412596;

    t189 = (x1421!=(x1422<<(x1423>x1424)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1449 = UINT64_MAX;
	uint8_t x1451 = UINT8_MAX;

    t190 = (x1449!=(x1450<<(x1451>x1452)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1461 = -1;
	static uint64_t x1462 = UINT64_MAX;
	volatile int32_t t191 = 5940812;

    t191 = (x1461!=(x1462<<(x1463>x1464)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x1465 = INT32_MIN;
	uint16_t x1466 = 2899U;
	int8_t x1467 = -1;
	static int64_t x1468 = INT64_MIN;
	static int32_t t192 = 962;

    t192 = (x1465!=(x1466<<(x1467>x1468)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x1469 = UINT64_MAX;
	int32_t x1471 = INT32_MIN;
	int64_t x1472 = -1LL;

    t193 = (x1469!=(x1470<<(x1471>x1472)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1478 = UINT64_MAX;
	static int16_t x1479 = INT16_MAX;
	int64_t x1480 = INT64_MIN;
	int32_t t194 = -269110;

    t194 = (x1477!=(x1478<<(x1479>x1480)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1485 = 126301681;
	static uint64_t x1486 = UINT64_MAX;
	int8_t x1487 = INT8_MIN;
	uint64_t x1488 = UINT64_MAX;
	volatile int32_t t195 = -1094;

    t195 = (x1485!=(x1486<<(x1487>x1488)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1494 = 19U;
	int64_t x1495 = 1024LL;
	volatile int8_t x1496 = INT8_MIN;
	int32_t t196 = 0;

    t196 = (x1493!=(x1494<<(x1495>x1496)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x1497 = -1;
	uint16_t x1498 = 900U;
	static uint64_t x1500 = UINT64_MAX;
	volatile int32_t t197 = 577513;

    t197 = (x1497!=(x1498<<(x1499>x1500)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x1501 = INT8_MIN;
	static uint16_t x1502 = 51U;
	int64_t x1503 = -128365857LL;
	uint64_t x1504 = 1576609403089LLU;
	volatile int32_t t198 = -100590;

    t198 = (x1501!=(x1502<<(x1503>x1504)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1505 = 5U;
	uint32_t x1506 = 7290U;
	int8_t x1507 = -7;
	int32_t x1508 = INT32_MIN;
	int32_t t199 = -202882;

    t199 = (x1505!=(x1506<<(x1507>x1508)));

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

