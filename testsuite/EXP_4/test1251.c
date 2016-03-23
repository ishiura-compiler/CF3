
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

int8_t x3 = 10;
uint32_t x10 = 327U;
int16_t x13 = INT16_MIN;
uint16_t x15 = UINT16_MAX;
volatile uint32_t t4 = 52176479U;
int8_t x50 = 8;
int64_t x52 = 409LL;
int16_t x88 = -1;
volatile int32_t t6 = -15467;
volatile uint16_t x98 = 1U;
uint8_t x101 = UINT8_MAX;
volatile uint8_t x104 = 10U;
int64_t x109 = -1LL;
static uint8_t x111 = UINT8_MAX;
volatile uint64_t t10 = 66043677327126LLU;
int16_t x133 = -1;
int32_t x139 = 60289255;
volatile int16_t x145 = 938;
static uint8_t x147 = 3U;
static int32_t x148 = INT32_MAX;
static uint32_t x150 = UINT32_MAX;
int16_t x157 = INT16_MAX;
static uint8_t x159 = UINT8_MAX;
uint64_t t18 = 42975006LLU;
uint8_t x174 = 10U;
int64_t x179 = INT64_MIN;
static int8_t x187 = -34;
int64_t x200 = INT64_MIN;
static int32_t x201 = INT32_MAX;
int8_t x203 = INT8_MIN;
volatile int32_t t24 = 166;
volatile uint32_t x233 = 1981U;
static int16_t x236 = -904;
uint8_t x238 = UINT8_MAX;
uint8_t x240 = UINT8_MAX;
int8_t x242 = 6;
uint32_t x244 = 1889010U;
uint64_t x258 = UINT64_MAX;
static volatile int64_t x263 = -2111408482LL;
volatile uint32_t x277 = 92U;
uint8_t x278 = 45U;
volatile uint16_t x280 = 3048U;
uint64_t x281 = UINT64_MAX;
volatile uint64_t t34 = 3938LLU;
int64_t x311 = 2LL;
static int64_t t36 = 0LL;
static volatile uint8_t x318 = 5U;
int8_t x319 = -1;
int16_t x323 = INT16_MIN;
int16_t x326 = 7929;
volatile int64_t x328 = INT64_MAX;
static int8_t x345 = INT8_MAX;
int8_t x347 = -1;
int8_t x348 = -1;
static uint8_t x381 = 13U;
static int32_t x384 = -4655;
volatile uint64_t x387 = 1439065054402536382LLU;
volatile int32_t x429 = INT32_MAX;
uint16_t x432 = UINT16_MAX;
volatile int32_t t55 = -871197020;
uint64_t t56 = 128298530LLU;
volatile uint32_t x463 = 14U;
static uint8_t x466 = UINT8_MAX;
uint8_t x468 = 2U;
uint16_t x472 = 1U;
uint64_t x480 = 2032978565LLU;
volatile int8_t x485 = INT8_MIN;
uint64_t x505 = 86286380307603LLU;
uint16_t x506 = UINT16_MAX;
volatile int16_t x508 = 0;
int32_t x510 = INT32_MAX;
int64_t t65 = -186298LL;
uint64_t x519 = 345408416LLU;
int32_t x533 = INT32_MIN;
int64_t x535 = INT64_MIN;
static uint32_t x540 = 1370978U;
volatile uint64_t t69 = 83LLU;
uint32_t x581 = 2798304U;
volatile uint32_t t73 = 65140756U;
uint64_t x602 = 1LLU;
uint8_t x628 = UINT8_MAX;
int16_t x663 = INT16_MIN;
volatile int32_t t80 = 289003493;
volatile uint16_t x665 = 1232U;
uint64_t x666 = UINT64_MAX;
uint64_t x668 = 92040836367525629LLU;
int64_t x676 = INT64_MAX;
uint64_t x690 = 95008LLU;
volatile uint8_t x702 = 7U;
static uint8_t x703 = UINT8_MAX;
int32_t x707 = -30715;
int8_t x731 = -1;
int64_t t88 = 5446162808256LL;
int64_t x791 = -629191418640LL;
uint16_t x805 = 6671U;
static uint16_t x807 = 5U;
static volatile int8_t x825 = INT8_MIN;
int32_t t97 = 747352330;
static int32_t x835 = INT32_MIN;
int8_t x837 = -1;
static volatile uint16_t x838 = UINT16_MAX;
int8_t x839 = 16;
int16_t x841 = 1;
int32_t x843 = INT32_MIN;
int32_t t100 = 4725312;
volatile uint64_t x848 = UINT64_MAX;
volatile uint64_t t101 = 4591843936LLU;
int16_t x850 = INT16_MAX;
int32_t t106 = -63197;
int32_t x896 = -1;
int32_t x909 = 1078826;
uint8_t x910 = UINT8_MAX;
uint8_t x922 = 45U;
int64_t x932 = INT64_MAX;
int32_t t112 = -111337;
uint64_t x937 = UINT64_MAX;
uint8_t x958 = 54U;
static int32_t x968 = INT32_MIN;
uint8_t x970 = UINT8_MAX;
volatile int8_t x986 = 1;
int32_t t119 = -493632;
int8_t x1006 = 48;
static volatile uint64_t t122 = 57619674710347066LLU;
uint64_t t128 = 30613567058LLU;
int32_t x1087 = INT32_MAX;
volatile uint64_t x1088 = 470960046675474LLU;
uint8_t x1095 = UINT8_MAX;
volatile int32_t t130 = 63817387;
int8_t x1113 = INT8_MIN;
volatile int8_t x1114 = INT8_MAX;
volatile int32_t t133 = -177147;
uint64_t x1150 = 260984349990LLU;
volatile uint64_t x1162 = 238259LLU;
uint64_t t135 = 102LLU;
uint8_t x1166 = 4U;
int32_t t136 = 14;
static int16_t x1176 = -1;
uint32_t x1182 = UINT32_MAX;
volatile uint32_t t139 = 7341U;
uint16_t x1196 = UINT16_MAX;
volatile uint32_t t140 = 1U;
int64_t x1232 = INT64_MAX;
static uint32_t x1235 = UINT32_MAX;
static volatile int32_t t147 = -3639;
static volatile uint32_t x1246 = 339U;
volatile uint64_t t150 = 484600263090826838LLU;
static int16_t x1265 = INT16_MIN;
int32_t x1271 = 574;
uint32_t x1272 = 87179303U;
int64_t x1307 = INT64_MIN;
int8_t x1311 = INT8_MAX;
int16_t x1317 = -27;
int8_t x1351 = 26;
uint16_t x1366 = 8U;
int32_t t160 = -486;
int16_t x1380 = INT16_MAX;
uint32_t x1393 = 108561U;
static uint16_t x1398 = 9536U;
int16_t x1400 = -6;
volatile uint64_t x1406 = 60LLU;
static uint16_t x1413 = 1795U;
int16_t x1414 = INT16_MAX;
volatile int32_t t168 = -1777782;
int16_t x1421 = 1;
int16_t x1422 = INT16_MAX;
uint16_t x1444 = UINT16_MAX;
int32_t t171 = -490221687;
static int64_t x1450 = 19940839828683961LL;
uint32_t t174 = 0U;
int8_t x1489 = INT8_MAX;
uint8_t x1490 = 95U;
uint16_t x1492 = UINT16_MAX;
volatile int32_t t175 = -25673;
uint64_t x1498 = 6LLU;
volatile int8_t x1511 = -2;
int32_t x1533 = INT32_MAX;
int64_t x1536 = INT64_MIN;
int32_t t181 = 69075208;
int16_t x1541 = INT16_MIN;
volatile int32_t x1570 = 456;
static int8_t x1577 = -7;
uint8_t x1602 = UINT8_MAX;
uint64_t x1611 = 1613927643877LLU;
int64_t x1612 = -1LL;
int64_t t191 = 2763649815244841798LL;
uint16_t x1622 = UINT16_MAX;
int32_t x1623 = 0;
int32_t x1624 = -1;
int32_t t192 = -2;
uint8_t x1643 = 45U;
static volatile uint64_t t195 = 234535LLU;
int64_t x1645 = -113173LL;
int16_t x1647 = INT16_MAX;
volatile int64_t t196 = 8765194LL;
static uint64_t x1655 = 423605LLU;
uint8_t x1660 = 1U;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	static volatile uint8_t x2 = 108U;
	volatile uint8_t x4 = 126U;
	volatile int32_t t0 = 29570;

    t0 = (x1%(x2<<(x3!=x4)));

    if (t0 != 39) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = 990794LLU;
	uint64_t x11 = 1840609962LLU;
	uint32_t x12 = 345984700U;
	uint64_t t1 = 54462927772579LLU;

    t1 = (x9%(x10<<(x11!=x12)));

    if (t1 != 638LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x14 = 3U;
	int64_t x16 = -1LL;
	int32_t t2 = 2628;

    t2 = (x13%(x14<<(x15!=x16)));

    if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x21 = -1;
	uint64_t x22 = 7019077386512351263LLU;
	volatile int16_t x23 = -1;
	uint16_t x24 = 220U;
	volatile uint64_t t3 = 155486003806406517LLU;

    t3 = (x21%(x22<<(x23!=x24)));

    if (t3 != 4408589300684849089LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x25 = 11949243U;
	uint32_t x26 = 23U;
	static uint32_t x27 = 372U;
	int32_t x28 = INT32_MIN;

    t4 = (x25%(x26<<(x27!=x28)));

    if (t4 != 7U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x49 = INT16_MIN;
	volatile int16_t x51 = INT16_MAX;
	static volatile int32_t t5 = 1992;

    t5 = (x49%(x50<<(x51!=x52)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x85 = UINT8_MAX;
	static uint16_t x86 = 24U;
	volatile int64_t x87 = 2841312596LL;

    t6 = (x85%(x86<<(x87!=x88)));

    if (t6 != 15) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x93 = INT8_MIN;
	uint8_t x94 = UINT8_MAX;
	volatile uint32_t x95 = UINT32_MAX;
	static uint8_t x96 = 65U;
	static int32_t t7 = 12;

    t7 = (x93%(x94<<(x95!=x96)));

    if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x97 = INT32_MIN;
	volatile uint64_t x99 = UINT64_MAX;
	static uint16_t x100 = 3098U;
	volatile int32_t t8 = 26;

    t8 = (x97%(x98<<(x99!=x100)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x102 = 1;
	int16_t x103 = INT16_MAX;
	int32_t t9 = -544454;

    t9 = (x101%(x102<<(x103!=x104)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x110 = UINT64_MAX;
	volatile int64_t x112 = -1LL;

    t10 = (x109%(x110<<(x111!=x112)));

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x113 = -1;
	uint64_t x114 = 112194740123348771LLU;
	uint16_t x115 = 1223U;
	int16_t x116 = INT16_MAX;
	uint64_t t11 = 1248531080LLU;

    t11 = (x113%(x114<<(x115!=x116)));

    if (t11 != 46806693480353171LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x121 = -1;
	uint32_t x122 = 12035U;
	int8_t x123 = INT8_MIN;
	uint32_t x124 = 37U;
	uint32_t t12 = 3666009U;

    t12 = (x121%(x122<<(x123!=x124)));

    if (t12 != 12775U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x134 = 2351222898191390617LL;
	int16_t x135 = INT16_MIN;
	volatile int8_t x136 = -42;
	volatile int64_t t13 = -6134LL;

    t13 = (x133%(x134<<(x135!=x136)));

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x137 = 6242219378306LLU;
	static int16_t x138 = 51;
	int16_t x140 = INT16_MAX;
	uint64_t t14 = 16902254817188910LLU;

    t14 = (x137%(x138<<(x139!=x140)));

    if (t14 != 8LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x141 = -1;
	uint16_t x142 = 2U;
	volatile int16_t x143 = INT16_MIN;
	int16_t x144 = INT16_MIN;
	volatile int32_t t15 = -42509;

    t15 = (x141%(x142<<(x143!=x144)));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x146 = 1268655998357298LL;
	int64_t t16 = 48713LL;

    t16 = (x145%(x146<<(x147!=x148)));

    if (t16 != 938LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x149 = 1U;
	uint16_t x151 = 13119U;
	int8_t x152 = -1;
	volatile uint32_t t17 = 88903U;

    t17 = (x149%(x150<<(x151!=x152)));

    if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x158 = 27048577LLU;
	uint32_t x160 = 28807U;

    t18 = (x157%(x158<<(x159!=x160)));

    if (t18 != 32767LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x173 = -1;
	volatile uint64_t x175 = 0LLU;
	static volatile int32_t x176 = -1;
	int32_t t19 = 26280110;

    t19 = (x173%(x174<<(x175!=x176)));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x177 = 13435LL;
	uint8_t x178 = 1U;
	static int64_t x180 = 1708064801LL;
	int64_t t20 = 1412607072LL;

    t20 = (x177%(x178<<(x179!=x180)));

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x185 = 0U;
	volatile uint8_t x186 = UINT8_MAX;
	volatile int64_t x188 = INT64_MAX;
	volatile int32_t t21 = -99379;

    t21 = (x185%(x186<<(x187!=x188)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x193 = 106422185;
	static uint64_t x194 = 1133LLU;
	uint64_t x195 = 84990254397LLU;
	static uint32_t x196 = 3U;
	volatile uint64_t t22 = 65071106203LLU;

    t22 = (x193%(x194<<(x195!=x196)));

    if (t22 != 1761LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x197 = 4;
	volatile uint8_t x198 = UINT8_MAX;
	volatile int32_t x199 = INT32_MAX;
	volatile int32_t t23 = 61763;

    t23 = (x197%(x198<<(x199!=x200)));

    if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x202 = INT16_MAX;
	static uint32_t x204 = 23878U;

    t24 = (x201%(x202<<(x203!=x204)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x221 = 2032099782967763LLU;
	uint64_t x222 = 17LLU;
	static int16_t x223 = 377;
	int8_t x224 = -1;
	uint64_t t25 = 12423LLU;

    t25 = (x221%(x222<<(x223!=x224)));

    if (t25 != 15LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x229 = 925558716;
	uint16_t x230 = 2U;
	static int8_t x231 = INT8_MIN;
	static int32_t x232 = -2;
	volatile int32_t t26 = -23224;

    t26 = (x229%(x230<<(x231!=x232)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x234 = UINT8_MAX;
	int8_t x235 = 0;
	static volatile uint32_t t27 = 5259228U;

    t27 = (x233%(x234<<(x235!=x236)));

    if (t27 != 451U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x237 = UINT16_MAX;
	volatile int64_t x239 = INT64_MIN;
	int32_t t28 = 22963314;

    t28 = (x237%(x238<<(x239!=x240)));

    if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x241 = 1770U;
	static uint16_t x243 = UINT16_MAX;
	volatile uint32_t t29 = 422519U;

    t29 = (x241%(x242<<(x243!=x244)));

    if (t29 != 6U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x257 = UINT32_MAX;
	int64_t x259 = INT64_MIN;
	int64_t x260 = -764324LL;
	static volatile uint64_t t30 = 496110LLU;

    t30 = (x257%(x258<<(x259!=x260)));

    if (t30 != 4294967295LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x261 = -1LL;
	int64_t x262 = 444LL;
	int8_t x264 = INT8_MIN;
	int64_t t31 = -2LL;

    t31 = (x261%(x262<<(x263!=x264)));

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x279 = -95;
	uint32_t t32 = 8131U;

    t32 = (x277%(x278<<(x279!=x280)));

    if (t32 != 2U) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int16_t x282 = INT16_MAX;
	uint64_t x283 = 11832976910011LLU;
	uint8_t x284 = UINT8_MAX;
	volatile uint64_t t33 = 24LLU;

    t33 = (x281%(x282<<(x283!=x284)));

    if (t33 != 15LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x285 = -926;
	uint64_t x286 = 93LLU;
	static int8_t x287 = INT8_MIN;
	uint16_t x288 = 99U;

    t34 = (x285%(x286<<(x287!=x288)));

    if (t34 != 20LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x301 = 562748LL;
	uint8_t x302 = 4U;
	int8_t x303 = INT8_MIN;
	int16_t x304 = -15;
	volatile int64_t t35 = 162729086840414LL;

    t35 = (x301%(x302<<(x303!=x304)));

    if (t35 != 4LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x309 = 981014217LL;
	int8_t x310 = INT8_MAX;
	int64_t x312 = INT64_MIN;

    t36 = (x309%(x310<<(x311!=x312)));

    if (t36 != 177LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x313 = 180U;
	volatile uint16_t x314 = UINT16_MAX;
	volatile uint32_t x315 = UINT32_MAX;
	volatile int16_t x316 = 653;
	uint32_t t37 = 11390U;

    t37 = (x313%(x314<<(x315!=x316)));

    if (t37 != 180U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x317 = INT8_MIN;
	volatile int64_t x320 = INT64_MAX;
	static int32_t t38 = 3161313;

    t38 = (x317%(x318<<(x319!=x320)));

    if (t38 != -8) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x321 = INT32_MAX;
	uint8_t x322 = 15U;
	uint32_t x324 = 32765U;
	int32_t t39 = -3;

    t39 = (x321%(x322<<(x323!=x324)));

    if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x325 = INT64_MAX;
	static uint64_t x327 = 507959112059LLU;
	volatile int64_t t40 = -684683638211LL;

    t40 = (x325%(x326<<(x327!=x328)));

    if (t40 != 12589LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x329 = -25260083;
	static uint16_t x330 = 636U;
	volatile int8_t x331 = 0;
	uint64_t x332 = UINT64_MAX;
	volatile int32_t t41 = -4790793;

    t41 = (x329%(x330<<(x331!=x332)));

    if (t41 != -707) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x333 = INT64_MAX;
	uint64_t x334 = 1932009LLU;
	static int16_t x335 = INT16_MAX;
	int64_t x336 = 53LL;
	static uint64_t t42 = 14116973892LLU;

    t42 = (x333%(x334<<(x335!=x336)));

    if (t42 != 1497919LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x337 = INT32_MAX;
	volatile int8_t x338 = INT8_MAX;
	int8_t x339 = INT8_MIN;
	volatile int64_t x340 = 41LL;
	int32_t t43 = -312;

    t43 = (x337%(x338<<(x339!=x340)));

    if (t43 != 7) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x346 = INT32_MAX;
	int32_t t44 = -10644297;

    t44 = (x345%(x346<<(x347!=x348)));

    if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x369 = -1LL;
	uint16_t x370 = 14U;
	static uint32_t x371 = UINT32_MAX;
	static int32_t x372 = -1;
	static int64_t t45 = -60451409112LL;

    t45 = (x369%(x370<<(x371!=x372)));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x377 = 0U;
	volatile uint64_t x378 = 1671831069967041518LLU;
	uint64_t x379 = UINT64_MAX;
	int16_t x380 = INT16_MAX;
	volatile uint64_t t46 = 552LLU;

    t46 = (x377%(x378<<(x379!=x380)));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x382 = 4852625U;
	uint16_t x383 = 13U;
	volatile uint32_t t47 = 24U;

    t47 = (x381%(x382<<(x383!=x384)));

    if (t47 != 13U) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x385 = INT64_MAX;
	int16_t x386 = 188;
	uint64_t x388 = 2127295351LLU;
	int64_t t48 = -72574544LL;

    t48 = (x385%(x386<<(x387!=x388)));

    if (t48 != 223LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x389 = UINT32_MAX;
	uint16_t x390 = UINT16_MAX;
	int64_t x391 = INT64_MIN;
	int32_t x392 = 20338;
	uint32_t t49 = 1783U;

    t49 = (x389%(x390<<(x391!=x392)));

    if (t49 != 65535U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x401 = 60018423;
	volatile int8_t x402 = 1;
	uint8_t x403 = 30U;
	int32_t x404 = INT32_MIN;
	volatile int32_t t50 = 12;

    t50 = (x401%(x402<<(x403!=x404)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x421 = 207U;
	int64_t x422 = 5550215808LL;
	uint32_t x423 = 3256U;
	int64_t x424 = -65054535799417873LL;
	volatile int64_t t51 = -49LL;

    t51 = (x421%(x422<<(x423!=x424)));

    if (t51 != 207LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x425 = 13U;
	int16_t x426 = INT16_MAX;
	static int16_t x427 = -1;
	uint8_t x428 = 52U;
	volatile int32_t t52 = 1230;

    t52 = (x425%(x426<<(x427!=x428)));

    if (t52 != 13) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x430 = 257927U;
	int64_t x431 = 126756938LL;
	volatile uint32_t t53 = 22U;

    t53 = (x429%(x430<<(x431!=x432)));

    if (t53 != 499299U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x433 = INT16_MAX;
	uint16_t x434 = 508U;
	uint16_t x435 = 1331U;
	int8_t x436 = -1;
	volatile int32_t t54 = 103;

    t54 = (x433%(x434<<(x435!=x436)));

    if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x437 = -2;
	uint16_t x438 = UINT16_MAX;
	int32_t x439 = INT32_MIN;
	volatile uint8_t x440 = 125U;

    t55 = (x437%(x438<<(x439!=x440)));

    if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x449 = UINT64_MAX;
	uint16_t x450 = 12491U;
	static int32_t x451 = -310886;
	int8_t x452 = INT8_MIN;

    t56 = (x449%(x450<<(x451!=x452)));

    if (t56 != 21543LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x453 = -1;
	uint32_t x454 = UINT32_MAX;
	static int64_t x455 = -4506LL;
	volatile int16_t x456 = 0;
	static uint32_t t57 = 451610U;

    t57 = (x453%(x454<<(x455!=x456)));

    if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int32_t x461 = 1;
	int16_t x462 = INT16_MAX;
	static volatile uint64_t x464 = 23171245854748968LLU;
	int32_t t58 = 477562;

    t58 = (x461%(x462<<(x463!=x464)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x465 = 300816LL;
	int64_t x467 = -1LL;
	volatile int64_t t59 = 421087233509624010LL;

    t59 = (x465%(x466<<(x467!=x468)));

    if (t59 != 426LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x469 = INT64_MIN;
	volatile uint32_t x470 = 19690448U;
	uint32_t x471 = 775U;
	int64_t t60 = -239056697006LL;

    t60 = (x469%(x470<<(x471!=x472)));

    if (t60 != -36144160LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x473 = INT32_MAX;
	uint8_t x474 = UINT8_MAX;
	int8_t x475 = INT8_MIN;
	int32_t x476 = INT32_MIN;
	volatile int32_t t61 = -469905;

    t61 = (x473%(x474<<(x475!=x476)));

    if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x477 = UINT32_MAX;
	int32_t x478 = 4010;
	int32_t x479 = -1;
	volatile uint32_t t62 = 3009U;

    t62 = (x477%(x478<<(x479!=x480)));

    if (t62 != 655U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x486 = 16035U;
	uint16_t x487 = UINT16_MAX;
	uint64_t x488 = UINT64_MAX;
	volatile int32_t t63 = -3475;

    t63 = (x485%(x486<<(x487!=x488)));

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x507 = 529U;
	volatile uint64_t t64 = 12862304160751154LLU;

    t64 = (x505%(x506<<(x507!=x508)));

    if (t64 != 32793LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x509 = 2137LL;
	int32_t x511 = -1;
	int32_t x512 = -1;

    t65 = (x509%(x510<<(x511!=x512)));

    if (t65 != 2137LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x513 = UINT16_MAX;
	uint8_t x514 = UINT8_MAX;
	static volatile uint8_t x515 = 21U;
	int8_t x516 = INT8_MIN;
	int32_t t66 = 0;

    t66 = (x513%(x514<<(x515!=x516)));

    if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x517 = INT64_MIN;
	int16_t x518 = 2008;
	int16_t x520 = -386;
	int64_t t67 = -128500029949947LL;

    t67 = (x517%(x518<<(x519!=x520)));

    if (t67 != -160LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x534 = UINT16_MAX;
	static int32_t x536 = 12;
	static int32_t t68 = 1;

    t68 = (x533%(x534<<(x535!=x536)));

    if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x537 = 3404388963767277388LLU;
	uint8_t x538 = UINT8_MAX;
	int16_t x539 = -289;

    t69 = (x537%(x538<<(x539!=x540)));

    if (t69 != 358LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x561 = INT16_MIN;
	int16_t x562 = 3108;
	uint64_t x563 = 33009190366LLU;
	int8_t x564 = 13;
	static volatile int32_t t70 = 237;

    t70 = (x561%(x562<<(x563!=x564)));

    if (t70 != -1688) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x565 = INT64_MIN;
	int8_t x566 = 1;
	int64_t x567 = INT64_MIN;
	int32_t x568 = INT32_MIN;
	static int64_t t71 = -4580272900951LL;

    t71 = (x565%(x566<<(x567!=x568)));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x569 = 14796692994LLU;
	uint16_t x570 = 3U;
	int32_t x571 = INT32_MAX;
	uint64_t x572 = UINT64_MAX;
	static uint64_t t72 = 494828821LLU;

    t72 = (x569%(x570<<(x571!=x572)));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x582 = 11;
	uint16_t x583 = 60U;
	int16_t x584 = INT16_MAX;

    t73 = (x581%(x582<<(x583!=x584)));

    if (t73 != 14U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x585 = UINT64_MAX;
	static uint8_t x586 = UINT8_MAX;
	volatile uint16_t x587 = 12U;
	uint64_t x588 = 19072LLU;
	uint64_t t74 = 3934LLU;

    t74 = (x585%(x586<<(x587!=x588)));

    if (t74 != 255LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x589 = -16;
	volatile int8_t x590 = INT8_MAX;
	int32_t x591 = INT32_MAX;
	volatile int32_t x592 = -1;
	volatile int32_t t75 = 4765;

    t75 = (x589%(x590<<(x591!=x592)));

    if (t75 != -16) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x601 = 43367U;
	volatile int32_t x603 = INT32_MIN;
	int8_t x604 = -1;
	volatile uint64_t t76 = 12230669664658LLU;

    t76 = (x601%(x602<<(x603!=x604)));

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x625 = 3U;
	int16_t x626 = 109;
	int64_t x627 = INT64_MIN;
	int32_t t77 = -219168166;

    t77 = (x625%(x626<<(x627!=x628)));

    if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x633 = UINT32_MAX;
	uint64_t x634 = 5450183LLU;
	int16_t x635 = INT16_MIN;
	static int8_t x636 = INT8_MIN;
	volatile uint64_t t78 = 236LLU;

    t78 = (x633%(x634<<(x635!=x636)));

    if (t78 != 223091LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x657 = -1;
	static uint64_t x658 = 255231600LLU;
	int32_t x659 = 21830288;
	int64_t x660 = 593888626693461LL;
	volatile uint64_t t79 = 2041602LLU;

    t79 = (x657%(x658<<(x659!=x660)));

    if (t79 != 142318815LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x661 = INT32_MAX;
	int16_t x662 = INT16_MAX;
	int64_t x664 = INT64_MIN;

    t80 = (x661%(x662<<(x663!=x664)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x667 = INT16_MIN;
	uint64_t t81 = 9LLU;

    t81 = (x665%(x666<<(x667!=x668)));

    if (t81 != 1232LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x673 = 154U;
	uint32_t x674 = UINT32_MAX;
	int32_t x675 = INT32_MAX;
	volatile uint32_t t82 = 206558419U;

    t82 = (x673%(x674<<(x675!=x676)));

    if (t82 != 154U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x685 = INT64_MAX;
	static volatile uint16_t x686 = UINT16_MAX;
	int8_t x687 = -1;
	volatile int32_t x688 = INT32_MAX;
	volatile int64_t t83 = -1509LL;

    t83 = (x685%(x686<<(x687!=x688)));

    if (t83 != 32767LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x689 = 7U;
	static int16_t x691 = INT16_MIN;
	static int16_t x692 = -1;
	volatile uint64_t t84 = 1396537023313503LLU;

    t84 = (x689%(x690<<(x691!=x692)));

    if (t84 != 7LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x697 = UINT8_MAX;
	uint64_t x698 = 13465927047475096LLU;
	int8_t x699 = INT8_MIN;
	uint8_t x700 = UINT8_MAX;
	static volatile uint64_t t85 = 6555264827LLU;

    t85 = (x697%(x698<<(x699!=x700)));

    if (t85 != 255LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x701 = INT64_MAX;
	uint16_t x704 = UINT16_MAX;
	volatile int64_t t86 = -415205345852119732LL;

    t86 = (x701%(x702<<(x703!=x704)));

    if (t86 != 7LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x705 = INT64_MAX;
	static uint32_t x706 = 2U;
	static int64_t x708 = -838LL;
	int64_t t87 = 200280LL;

    t87 = (x705%(x706<<(x707!=x708)));

    if (t87 != 3LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x729 = INT64_MAX;
	volatile uint16_t x730 = 7808U;
	int64_t x732 = INT64_MIN;

    t88 = (x729%(x730<<(x731!=x732)));

    if (t88 != 5375LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x749 = 0U;
	int16_t x750 = INT16_MAX;
	volatile int16_t x751 = 74;
	uint8_t x752 = 0U;
	volatile int32_t t89 = 1;

    t89 = (x749%(x750<<(x751!=x752)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x761 = 3;
	static uint16_t x762 = UINT16_MAX;
	static int16_t x763 = -592;
	static uint32_t x764 = 2U;
	int32_t t90 = -3579;

    t90 = (x761%(x762<<(x763!=x764)));

    if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x777 = 5;
	uint16_t x778 = UINT16_MAX;
	int32_t x779 = INT32_MIN;
	uint16_t x780 = UINT16_MAX;
	static volatile int32_t t91 = 4432281;

    t91 = (x777%(x778<<(x779!=x780)));

    if (t91 != 5) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x781 = 1U;
	uint8_t x782 = 4U;
	uint32_t x783 = 537515U;
	int8_t x784 = 24;
	int32_t t92 = 233;

    t92 = (x781%(x782<<(x783!=x784)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x789 = INT64_MIN;
	uint8_t x790 = 3U;
	uint16_t x792 = 31949U;
	static volatile int64_t t93 = -44LL;

    t93 = (x789%(x790<<(x791!=x792)));

    if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x797 = -1;
	uint16_t x798 = 801U;
	int8_t x799 = INT8_MIN;
	uint16_t x800 = UINT16_MAX;
	int32_t t94 = -337;

    t94 = (x797%(x798<<(x799!=x800)));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x801 = 3165207795LLU;
	static uint32_t x802 = 2204U;
	int8_t x803 = INT8_MAX;
	static int32_t x804 = -1;
	volatile uint64_t t95 = 18805383483756607LLU;

    t95 = (x801%(x802<<(x803!=x804)));

    if (t95 != 3723LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x806 = UINT64_MAX;
	int64_t x808 = INT64_MAX;
	volatile uint64_t t96 = 14481006927LLU;

    t96 = (x805%(x806<<(x807!=x808)));

    if (t96 != 6671LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x826 = 165961150;
	int16_t x827 = INT16_MAX;
	int32_t x828 = INT32_MIN;

    t97 = (x825%(x826<<(x827!=x828)));

    if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x833 = -1;
	uint32_t x834 = UINT32_MAX;
	int64_t x836 = INT64_MAX;
	volatile uint32_t t98 = 0U;

    t98 = (x833%(x834<<(x835!=x836)));

    if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x840 = INT32_MIN;
	volatile int32_t t99 = -7160;

    t99 = (x837%(x838<<(x839!=x840)));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x842 = 6U;
	int64_t x844 = -1LL;

    t100 = (x841%(x842<<(x843!=x844)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x845 = -97644;
	uint64_t x846 = UINT64_MAX;
	volatile int8_t x847 = 15;

    t101 = (x845%(x846<<(x847!=x848)));

    if (t101 != 18446744073709453972LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x849 = INT64_MAX;
	int16_t x851 = INT16_MAX;
	volatile uint8_t x852 = 3U;
	int64_t t102 = 153569LL;

    t102 = (x849%(x850<<(x851!=x852)));

    if (t102 != 7LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x853 = INT16_MAX;
	uint32_t x854 = 5125027U;
	int8_t x855 = -1;
	static int8_t x856 = -1;
	static uint32_t t103 = 6U;

    t103 = (x853%(x854<<(x855!=x856)));

    if (t103 != 32767U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x869 = INT16_MIN;
	uint32_t x870 = 22U;
	uint8_t x871 = UINT8_MAX;
	int16_t x872 = INT16_MIN;
	volatile uint32_t t104 = 299178099U;

    t104 = (x869%(x870<<(x871!=x872)));

    if (t104 != 16U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x877 = INT16_MIN;
	volatile uint16_t x878 = UINT16_MAX;
	int32_t x879 = -1;
	uint64_t x880 = 1591184885732LLU;
	volatile int32_t t105 = -28;

    t105 = (x877%(x878<<(x879!=x880)));

    if (t105 != -32768) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x885 = -1;
	int16_t x886 = INT16_MAX;
	volatile uint32_t x887 = 15526U;
	int32_t x888 = INT32_MAX;

    t106 = (x885%(x886<<(x887!=x888)));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint16_t x893 = 15771U;
	uint64_t x894 = 2LLU;
	static uint64_t x895 = 31786LLU;
	uint64_t t107 = 30460655499768LLU;

    t107 = (x893%(x894<<(x895!=x896)));

    if (t107 != 3LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x905 = 345U;
	int16_t x906 = INT16_MAX;
	int64_t x907 = 478LL;
	int64_t x908 = 9333056147744038LL;
	volatile int32_t t108 = 232914;

    t108 = (x905%(x906<<(x907!=x908)));

    if (t108 != 345) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x911 = INT32_MIN;
	int16_t x912 = INT16_MIN;
	int32_t t109 = 1377183;

    t109 = (x909%(x910<<(x911!=x912)));

    if (t109 != 176) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x917 = INT8_MIN;
	int32_t x918 = 7905225;
	uint64_t x919 = 848LLU;
	static uint8_t x920 = 56U;
	volatile int32_t t110 = 82552;

    t110 = (x917%(x918<<(x919!=x920)));

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x921 = INT32_MIN;
	volatile int16_t x923 = -1;
	static uint8_t x924 = 1U;
	volatile int32_t t111 = 130398769;

    t111 = (x921%(x922<<(x923!=x924)));

    if (t111 != -38) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x929 = INT32_MAX;
	int16_t x930 = INT16_MAX;
	int64_t x931 = INT64_MIN;

    t112 = (x929%(x930<<(x931!=x932)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x938 = UINT16_MAX;
	volatile int64_t x939 = -439LL;
	uint64_t x940 = 138022955816040769LLU;
	uint64_t t113 = 21641837845838LLU;

    t113 = (x937%(x938<<(x939!=x940)));

    if (t113 != 65535LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x941 = -22;
	volatile int8_t x942 = INT8_MAX;
	uint64_t x943 = 65486LLU;
	static int32_t x944 = INT32_MIN;
	static int32_t t114 = 0;

    t114 = (x941%(x942<<(x943!=x944)));

    if (t114 != -22) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x957 = UINT64_MAX;
	volatile int32_t x959 = -48880;
	int64_t x960 = -1LL;
	uint64_t t115 = 1039406579607309LLU;

    t115 = (x957%(x958<<(x959!=x960)));

    if (t115 != 51LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x965 = UINT32_MAX;
	int64_t x966 = 9956972121915953LL;
	int16_t x967 = INT16_MAX;
	volatile int64_t t116 = 4863931112135LL;

    t116 = (x965%(x966<<(x967!=x968)));

    if (t116 != 4294967295LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint64_t x969 = 8241900088727641LLU;
	int8_t x971 = INT8_MIN;
	uint16_t x972 = 3776U;
	volatile uint64_t t117 = 876747575LLU;

    t117 = (x969%(x970<<(x971!=x972)));

    if (t117 != 451LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x985 = UINT32_MAX;
	static volatile uint64_t x987 = UINT64_MAX;
	int16_t x988 = -1;
	uint32_t t118 = 4014U;

    t118 = (x985%(x986<<(x987!=x988)));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x989 = 74258;
	uint16_t x990 = 28U;
	uint8_t x991 = 19U;
	int8_t x992 = -36;

    t119 = (x989%(x990<<(x991!=x992)));

    if (t119 != 2) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x993 = INT8_MIN;
	int64_t x994 = 700983021LL;
	int16_t x995 = INT16_MAX;
	static uint64_t x996 = UINT64_MAX;
	int64_t t120 = -7561455714999591LL;

    t120 = (x993%(x994<<(x995!=x996)));

    if (t120 != -128LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x1005 = -1;
	int32_t x1007 = INT32_MAX;
	uint32_t x1008 = 3993U;
	volatile int32_t t121 = 211287221;

    t121 = (x1005%(x1006<<(x1007!=x1008)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x1029 = 6152325509534227LLU;
	static uint32_t x1030 = 29U;
	volatile uint8_t x1031 = UINT8_MAX;
	volatile uint32_t x1032 = 60711U;

    t122 = (x1029%(x1030<<(x1031!=x1032)));

    if (t122 != 7LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x1045 = INT64_MIN;
	static uint64_t x1046 = UINT64_MAX;
	static uint64_t x1047 = 4488LLU;
	static uint16_t x1048 = 274U;
	volatile uint64_t t123 = 17580490717LLU;

    t123 = (x1045%(x1046<<(x1047!=x1048)));

    if (t123 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x1057 = -1;
	volatile int64_t x1058 = 3LL;
	int64_t x1059 = INT64_MIN;
	int32_t x1060 = INT32_MIN;
	int64_t t124 = -223933LL;

    t124 = (x1057%(x1058<<(x1059!=x1060)));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x1069 = INT64_MIN;
	int32_t x1070 = 23;
	static int32_t x1071 = -1;
	int64_t x1072 = INT64_MIN;
	static volatile int64_t t125 = 11877LL;

    t125 = (x1069%(x1070<<(x1071!=x1072)));

    if (t125 != -26LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x1073 = 14324910564012830LLU;
	static uint32_t x1074 = 12443U;
	volatile uint64_t x1075 = 5495122062361LLU;
	uint16_t x1076 = 852U;
	volatile uint64_t t126 = 4543LLU;

    t126 = (x1073%(x1074<<(x1075!=x1076)));

    if (t126 != 13120LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x1077 = INT8_MIN;
	int16_t x1078 = INT16_MAX;
	static uint64_t x1079 = 2767723921387085878LLU;
	int8_t x1080 = INT8_MAX;
	static int32_t t127 = -94563753;

    t127 = (x1077%(x1078<<(x1079!=x1080)));

    if (t127 != -128) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x1081 = UINT8_MAX;
	volatile uint64_t x1082 = 712891321922764LLU;
	static uint8_t x1083 = 7U;
	static int8_t x1084 = 30;

    t128 = (x1081%(x1082<<(x1083!=x1084)));

    if (t128 != 255LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x1085 = INT32_MIN;
	uint16_t x1086 = 5991U;
	volatile int32_t t129 = -520709;

    t129 = (x1085%(x1086<<(x1087!=x1088)));

    if (t129 != -9698) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x1093 = INT16_MAX;
	uint16_t x1094 = 3U;
	int16_t x1096 = -1;

    t130 = (x1093%(x1094<<(x1095!=x1096)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x1115 = INT64_MIN;
	int16_t x1116 = -3936;
	volatile int32_t t131 = 93868438;

    t131 = (x1113%(x1114<<(x1115!=x1116)));

    if (t131 != -128) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x1117 = UINT64_MAX;
	static volatile uint64_t x1118 = UINT64_MAX;
	int64_t x1119 = 1LL;
	uint64_t x1120 = UINT64_MAX;
	volatile uint64_t t132 = 423668LLU;

    t132 = (x1117%(x1118<<(x1119!=x1120)));

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x1145 = INT16_MIN;
	int8_t x1146 = 19;
	int8_t x1147 = INT8_MIN;
	int16_t x1148 = -246;

    t133 = (x1145%(x1146<<(x1147!=x1148)));

    if (t133 != -12) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x1149 = -1;
	int64_t x1151 = -51626656051962871LL;
	uint64_t x1152 = 520586LLU;
	volatile uint64_t t134 = 188090LLU;

    t134 = (x1149%(x1150<<(x1151!=x1152)));

    if (t134 != 140608065795LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x1161 = UINT16_MAX;
	static volatile int64_t x1163 = -1LL;
	uint32_t x1164 = 141891U;

    t135 = (x1161%(x1162<<(x1163!=x1164)));

    if (t135 != 65535LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x1165 = -4;
	uint16_t x1167 = 219U;
	uint8_t x1168 = 4U;

    t136 = (x1165%(x1166<<(x1167!=x1168)));

    if (t136 != -4) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x1169 = -1036070799395369LL;
	uint16_t x1170 = 1408U;
	volatile int8_t x1171 = -1;
	int64_t x1172 = 487291797081310394LL;
	volatile int64_t t137 = -29694530855LL;

    t137 = (x1169%(x1170<<(x1171!=x1172)));

    if (t137 != -1321LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x1173 = 951U;
	uint16_t x1174 = 1756U;
	int8_t x1175 = 1;
	volatile int32_t t138 = 0;

    t138 = (x1173%(x1174<<(x1175!=x1176)));

    if (t138 != 951) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1181 = INT8_MIN;
	static int8_t x1183 = 11;
	uint32_t x1184 = 26948U;

    t139 = (x1181%(x1182<<(x1183!=x1184)));

    if (t139 != 4294967168U) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x1193 = 1;
	static uint32_t x1194 = 17U;
	volatile uint64_t x1195 = UINT64_MAX;

    t140 = (x1193%(x1194<<(x1195!=x1196)));

    if (t140 != 1U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1201 = INT16_MAX;
	int16_t x1202 = INT16_MAX;
	static int32_t x1203 = 5;
	uint16_t x1204 = UINT16_MAX;
	int32_t t141 = 2;

    t141 = (x1201%(x1202<<(x1203!=x1204)));

    if (t141 != 32767) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1205 = INT16_MIN;
	static uint8_t x1206 = UINT8_MAX;
	int32_t x1207 = INT32_MIN;
	static int8_t x1208 = INT8_MAX;
	volatile int32_t t142 = 30663617;

    t142 = (x1205%(x1206<<(x1207!=x1208)));

    if (t142 != -128) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x1209 = INT16_MIN;
	static int64_t x1210 = 116144045656LL;
	int16_t x1211 = INT16_MIN;
	static uint32_t x1212 = 112U;
	int64_t t143 = -65LL;

    t143 = (x1209%(x1210<<(x1211!=x1212)));

    if (t143 != -32768LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x1225 = INT32_MIN;
	int64_t x1226 = 3953806185685046LL;
	uint64_t x1227 = UINT64_MAX;
	static volatile uint32_t x1228 = UINT32_MAX;
	static volatile int64_t t144 = -17LL;

    t144 = (x1225%(x1226<<(x1227!=x1228)));

    if (t144 != -2147483648LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1229 = 63;
	uint8_t x1230 = 87U;
	volatile int64_t x1231 = INT64_MIN;
	volatile int32_t t145 = -748414828;

    t145 = (x1229%(x1230<<(x1231!=x1232)));

    if (t145 != 63) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x1233 = -7745;
	static int16_t x1234 = INT16_MAX;
	uint8_t x1236 = UINT8_MAX;
	static volatile int32_t t146 = -101732;

    t146 = (x1233%(x1234<<(x1235!=x1236)));

    if (t146 != -7745) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1237 = -2;
	int16_t x1238 = INT16_MAX;
	int16_t x1239 = INT16_MAX;
	static int64_t x1240 = -44583828330631LL;

    t147 = (x1237%(x1238<<(x1239!=x1240)));

    if (t147 != -2) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x1245 = -54883;
	static uint8_t x1247 = UINT8_MAX;
	int16_t x1248 = 642;
	volatile uint32_t t148 = 92833952U;

    t148 = (x1245%(x1246<<(x1247!=x1248)));

    if (t148 != 51U) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1257 = INT32_MAX;
	int8_t x1258 = INT8_MAX;
	int8_t x1259 = -5;
	int32_t x1260 = INT32_MIN;
	static volatile int32_t t149 = -880;

    t149 = (x1257%(x1258<<(x1259!=x1260)));

    if (t149 != 7) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1261 = 3807330441LLU;
	uint64_t x1262 = UINT64_MAX;
	uint32_t x1263 = UINT32_MAX;
	static uint32_t x1264 = UINT32_MAX;

    t150 = (x1261%(x1262<<(x1263!=x1264)));

    if (t150 != 3807330441LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x1266 = UINT16_MAX;
	uint64_t x1267 = 10027767325326565LLU;
	int8_t x1268 = -1;
	volatile int32_t t151 = -2888157;

    t151 = (x1265%(x1266<<(x1267!=x1268)));

    if (t151 != -32768) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1269 = -1;
	int64_t x1270 = 175LL;
	volatile int64_t t152 = -5621997807528LL;

    t152 = (x1269%(x1270<<(x1271!=x1272)));

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x1285 = 89LLU;
	int16_t x1286 = INT16_MAX;
	int32_t x1287 = INT32_MIN;
	uint16_t x1288 = UINT16_MAX;
	volatile uint64_t t153 = 144921657828LLU;

    t153 = (x1285%(x1286<<(x1287!=x1288)));

    if (t153 != 89LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x1305 = INT8_MAX;
	uint32_t x1306 = UINT32_MAX;
	int32_t x1308 = -1;
	static uint32_t t154 = 8169U;

    t154 = (x1305%(x1306<<(x1307!=x1308)));

    if (t154 != 127U) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x1309 = INT64_MIN;
	uint64_t x1310 = 2LLU;
	int8_t x1312 = INT8_MIN;
	volatile uint64_t t155 = 192LLU;

    t155 = (x1309%(x1310<<(x1311!=x1312)));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1318 = 82U;
	volatile uint64_t x1319 = 143172LLU;
	int32_t x1320 = INT32_MAX;
	int32_t t156 = 241;

    t156 = (x1317%(x1318<<(x1319!=x1320)));

    if (t156 != -27) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint16_t x1345 = 999U;
	uint16_t x1346 = 26034U;
	int16_t x1347 = -29;
	static int32_t x1348 = INT32_MIN;
	volatile int32_t t157 = -3165;

    t157 = (x1345%(x1346<<(x1347!=x1348)));

    if (t157 != 999) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1349 = 6;
	uint32_t x1350 = UINT32_MAX;
	uint32_t x1352 = 96580U;
	volatile uint32_t t158 = 2638U;

    t158 = (x1349%(x1350<<(x1351!=x1352)));

    if (t158 != 6U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1357 = INT64_MIN;
	uint8_t x1358 = 1U;
	volatile int8_t x1359 = -1;
	uint64_t x1360 = 15060973226317310LLU;
	static volatile int64_t t159 = -13666LL;

    t159 = (x1357%(x1358<<(x1359!=x1360)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x1365 = INT16_MIN;
	int8_t x1367 = INT8_MIN;
	int16_t x1368 = 6;

    t160 = (x1365%(x1366<<(x1367!=x1368)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x1377 = -1;
	uint16_t x1378 = UINT16_MAX;
	volatile int16_t x1379 = INT16_MIN;
	int32_t t161 = -71192371;

    t161 = (x1377%(x1378<<(x1379!=x1380)));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x1385 = UINT64_MAX;
	volatile int8_t x1386 = INT8_MAX;
	static volatile int64_t x1387 = -252127707LL;
	int8_t x1388 = 0;
	static volatile uint64_t t162 = 9027874737LLU;

    t162 = (x1385%(x1386<<(x1387!=x1388)));

    if (t162 != 1LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1389 = 41096679014514780LLU;
	int16_t x1390 = 124;
	int32_t x1391 = INT32_MIN;
	int16_t x1392 = INT16_MIN;
	uint64_t t163 = 14468430973902LLU;

    t163 = (x1389%(x1390<<(x1391!=x1392)));

    if (t163 != 244LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x1394 = UINT16_MAX;
	static int8_t x1395 = -1;
	int16_t x1396 = INT16_MAX;
	uint32_t t164 = 50262352U;

    t164 = (x1393%(x1394<<(x1395!=x1396)));

    if (t164 != 108561U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1397 = UINT32_MAX;
	int64_t x1399 = 0LL;
	volatile uint32_t t165 = 851495691U;

    t165 = (x1397%(x1398<<(x1399!=x1400)));

    if (t165 != 10111U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x1401 = 152227047LLU;
	int16_t x1402 = 46;
	static int16_t x1403 = INT16_MAX;
	uint8_t x1404 = 7U;
	uint64_t t166 = 27926946536167LLU;

    t166 = (x1401%(x1402<<(x1403!=x1404)));

    if (t166 != 75LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x1405 = INT16_MAX;
	uint64_t x1407 = 121764391LLU;
	int64_t x1408 = INT64_MIN;
	static volatile uint64_t t167 = 7426703LLU;

    t167 = (x1405%(x1406<<(x1407!=x1408)));

    if (t167 != 7LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1415 = INT8_MAX;
	uint8_t x1416 = 4U;

    t168 = (x1413%(x1414<<(x1415!=x1416)));

    if (t168 != 1795) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x1423 = UINT16_MAX;
	int64_t x1424 = INT64_MAX;
	volatile int32_t t169 = -3;

    t169 = (x1421%(x1422<<(x1423!=x1424)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x1429 = INT64_MIN;
	int8_t x1430 = 27;
	static int32_t x1431 = INT32_MIN;
	uint16_t x1432 = UINT16_MAX;
	int64_t t170 = -45085341055085LL;

    t170 = (x1429%(x1430<<(x1431!=x1432)));

    if (t170 != -26LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x1441 = INT16_MIN;
	volatile uint16_t x1442 = 5957U;
	volatile uint64_t x1443 = 20LLU;

    t171 = (x1441%(x1442<<(x1443!=x1444)));

    if (t171 != -8940) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1449 = -1LL;
	int32_t x1451 = INT32_MAX;
	int32_t x1452 = INT32_MIN;
	volatile int64_t t172 = -3582129LL;

    t172 = (x1449%(x1450<<(x1451!=x1452)));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x1481 = 119338961226659048LLU;
	int8_t x1482 = 1;
	static int32_t x1483 = -1;
	int32_t x1484 = INT32_MAX;
	volatile uint64_t t173 = 12821LLU;

    t173 = (x1481%(x1482<<(x1483!=x1484)));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1485 = -36;
	volatile uint32_t x1486 = 110451U;
	int8_t x1487 = INT8_MIN;
	static volatile int32_t x1488 = INT32_MIN;

    t174 = (x1485%(x1486<<(x1487!=x1488)));

    if (t174 != 190576U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1491 = 7;

    t175 = (x1489%(x1490<<(x1491!=x1492)));

    if (t175 != 127) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x1493 = 0;
	volatile uint8_t x1494 = UINT8_MAX;
	uint16_t x1495 = 425U;
	int8_t x1496 = -1;
	volatile int32_t t176 = 102257987;

    t176 = (x1493%(x1494<<(x1495!=x1496)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1497 = INT16_MIN;
	static int8_t x1499 = 25;
	int32_t x1500 = -1;
	static volatile uint64_t t177 = 38412102LLU;

    t177 = (x1497%(x1498<<(x1499!=x1500)));

    if (t177 != 8LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x1501 = INT64_MIN;
	int64_t x1502 = 11602087242LL;
	uint32_t x1503 = UINT32_MAX;
	static int64_t x1504 = -7381LL;
	volatile int64_t t178 = -18381922298LL;

    t178 = (x1501%(x1502<<(x1503!=x1504)));

    if (t178 != -16757411180LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1509 = -83;
	uint8_t x1510 = 1U;
	uint16_t x1512 = 0U;
	int32_t t179 = -1613;

    t179 = (x1509%(x1510<<(x1511!=x1512)));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int32_t x1525 = INT32_MIN;
	uint64_t x1526 = UINT64_MAX;
	int64_t x1527 = -1LL;
	int32_t x1528 = -41287679;
	uint64_t t180 = 770967870390LLU;

    t180 = (x1525%(x1526<<(x1527!=x1528)));

    if (t180 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1534 = 5U;
	volatile uint32_t x1535 = 8908990U;

    t181 = (x1533%(x1534<<(x1535!=x1536)));

    if (t181 != 7) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x1542 = 34U;
	int16_t x1543 = 16;
	uint32_t x1544 = 37U;
	volatile uint32_t t182 = 32496077U;

    t182 = (x1541%(x1542<<(x1543!=x1544)));

    if (t182 != 60U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x1553 = INT64_MAX;
	static int8_t x1554 = INT8_MAX;
	uint64_t x1555 = UINT64_MAX;
	int8_t x1556 = -1;
	int64_t t183 = -15543347813701LL;

    t183 = (x1553%(x1554<<(x1555!=x1556)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x1557 = INT16_MAX;
	int64_t x1558 = 2656138922683LL;
	uint32_t x1559 = UINT32_MAX;
	int8_t x1560 = 7;
	volatile int64_t t184 = -247183359298974LL;

    t184 = (x1557%(x1558<<(x1559!=x1560)));

    if (t184 != 32767LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1569 = UINT32_MAX;
	int64_t x1571 = INT64_MIN;
	volatile uint8_t x1572 = UINT8_MAX;
	volatile uint32_t t185 = 690528361U;

    t185 = (x1569%(x1570<<(x1571!=x1572)));

    if (t185 != 879U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1573 = 0;
	volatile int16_t x1574 = 6;
	int16_t x1575 = INT16_MIN;
	static int8_t x1576 = INT8_MAX;
	volatile int32_t t186 = 920;

    t186 = (x1573%(x1574<<(x1575!=x1576)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1578 = 1U;
	int16_t x1579 = INT16_MAX;
	int8_t x1580 = -47;
	int32_t t187 = 76073584;

    t187 = (x1577%(x1578<<(x1579!=x1580)));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x1585 = UINT16_MAX;
	int16_t x1586 = INT16_MAX;
	uint32_t x1587 = 10390762U;
	static int64_t x1588 = -1LL;
	volatile int32_t t188 = -4;

    t188 = (x1585%(x1586<<(x1587!=x1588)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x1601 = INT64_MAX;
	static uint32_t x1603 = 1741U;
	int64_t x1604 = INT64_MIN;
	static volatile int64_t t189 = -2LL;

    t189 = (x1601%(x1602<<(x1603!=x1604)));

    if (t189 != 127LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1605 = 30266842869LLU;
	int8_t x1606 = INT8_MAX;
	static int64_t x1607 = -1LL;
	int64_t x1608 = INT64_MIN;
	volatile uint64_t t190 = 9LLU;

    t190 = (x1605%(x1606<<(x1607!=x1608)));

    if (t190 != 177LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1609 = 579LL;
	static uint32_t x1610 = 3010039U;

    t191 = (x1609%(x1610<<(x1611!=x1612)));

    if (t191 != 579LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1621 = INT8_MAX;

    t192 = (x1621%(x1622<<(x1623!=x1624)));

    if (t192 != 127) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1625 = INT64_MIN;
	static uint32_t x1626 = 259087759U;
	static int64_t x1627 = -1586LL;
	static int32_t x1628 = 134;
	int64_t t193 = -738LL;

    t193 = (x1625%(x1626<<(x1627!=x1628)));

    if (t193 != -459008264LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1633 = INT32_MIN;
	uint64_t x1634 = 29840636LLU;
	int32_t x1635 = INT32_MAX;
	volatile int32_t x1636 = -312;
	volatile uint64_t t194 = 81LLU;

    t194 = (x1633%(x1634<<(x1635!=x1636)));

    if (t194 != 57720208LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1641 = INT64_MAX;
	volatile uint64_t x1642 = 44117538857498294LLU;
	int16_t x1644 = 1499;

    t195 = (x1641%(x1642<<(x1643!=x1644)));

    if (t195 != 46923954495130655LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x1646 = UINT8_MAX;
	uint16_t x1648 = UINT16_MAX;

    t196 = (x1645%(x1646<<(x1647!=x1648)));

    if (t196 != -463LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1649 = 518;
	static uint64_t x1650 = UINT64_MAX;
	int8_t x1651 = INT8_MIN;
	static int64_t x1652 = -1295LL;
	volatile uint64_t t197 = 6201811120LLU;

    t197 = (x1649%(x1650<<(x1651!=x1652)));

    if (t197 != 518LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x1653 = 18026567139469946LLU;
	uint8_t x1654 = 18U;
	uint64_t x1656 = 2277152764010918LLU;
	uint64_t t198 = 65045107751082832LLU;

    t198 = (x1653%(x1654<<(x1655!=x1656)));

    if (t198 != 14LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1657 = UINT16_MAX;
	volatile int8_t x1658 = INT8_MAX;
	uint64_t x1659 = 2777700194022230136LLU;
	static volatile int32_t t199 = -5909;

    t199 = (x1657%(x1658<<(x1659!=x1660)));

    if (t199 != 3) { NG(); } else { ; }
	
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

