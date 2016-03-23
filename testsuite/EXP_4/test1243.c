
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

int8_t x11 = INT8_MIN;
int32_t t1 = -13369349;
volatile uint16_t x14 = UINT16_MAX;
int32_t t4 = 836250;
uint8_t x37 = 0U;
static int8_t x40 = INT8_MIN;
int8_t x50 = 0;
uint8_t x61 = UINT8_MAX;
static volatile int8_t x69 = 28;
uint8_t x72 = 5U;
static volatile int32_t t9 = 18538859;
uint32_t t10 = UINT32_MAX;
static int32_t x97 = 19905;
uint8_t x109 = 99U;
uint16_t x126 = 831U;
static uint16_t x133 = 62U;
volatile int32_t t16 = -36245520;
volatile int32_t t18 = 19;
int64_t x187 = INT64_MIN;
volatile int8_t x190 = INT8_MAX;
static volatile int64_t x205 = 854390568143072LL;
static int8_t x208 = INT8_MIN;
volatile int64_t t24 = 13628913023LL;
int16_t x215 = -1;
uint64_t x219 = 13935LLU;
volatile int32_t t27 = -1606774;
static int16_t x236 = INT16_MIN;
int64_t x260 = INT64_MIN;
int16_t x262 = -1;
int64_t x263 = INT64_MIN;
int8_t x268 = -1;
volatile uint32_t x274 = UINT32_MAX;
volatile int32_t t33 = INT32_MAX;
uint8_t x277 = UINT8_MAX;
static int64_t x279 = 11025LL;
int64_t x280 = INT64_MIN;
static volatile uint64_t t35 = 40825164762449401LLU;
volatile int64_t x294 = INT64_MAX;
static uint32_t x295 = UINT32_MAX;
int32_t t38 = -40345397;
uint32_t x306 = 167830U;
int64_t t39 = -690939511329302LL;
uint8_t x317 = UINT8_MAX;
uint8_t x318 = UINT8_MAX;
static volatile int32_t t41 = -143564368;
uint64_t x336 = 21249363866872LLU;
uint64_t x337 = 83270469321LLU;
volatile int16_t x339 = INT16_MAX;
int32_t x354 = INT32_MIN;
uint64_t t47 = UINT64_MAX;
int8_t x362 = INT8_MIN;
int32_t x363 = -1;
volatile int32_t t48 = 3706714;
uint32_t x365 = 902U;
uint32_t x391 = UINT32_MAX;
int8_t x399 = 4;
static volatile int32_t t52 = -472;
volatile int16_t x402 = -1;
uint32_t x421 = UINT32_MAX;
static volatile int8_t x423 = INT8_MIN;
uint32_t t55 = UINT32_MAX;
static int16_t x442 = INT16_MAX;
volatile uint8_t x459 = 1U;
uint8_t x465 = 57U;
int64_t x468 = -10762LL;
int16_t x472 = INT16_MAX;
static int64_t t64 = INT64_MAX;
uint32_t x486 = UINT32_MAX;
uint32_t t66 = 19891U;
uint8_t x501 = 23U;
static int8_t x504 = INT8_MIN;
uint64_t x505 = 46728612352LLU;
volatile int32_t x507 = INT32_MAX;
uint8_t x537 = UINT8_MAX;
uint64_t x541 = 185296365216443LLU;
int16_t x543 = 464;
int32_t x550 = 775863716;
int8_t x551 = INT8_MIN;
static uint32_t x555 = 407494U;
int32_t x566 = -1;
int32_t x570 = INT32_MIN;
static int64_t x573 = INT64_MAX;
uint64_t x576 = UINT64_MAX;
volatile int32_t t78 = 4;
uint16_t x593 = 4482U;
uint16_t x598 = 549U;
volatile int16_t x605 = 64;
uint32_t x622 = 1388U;
volatile uint32_t x625 = 1439U;
static int64_t t84 = -425525565076247LL;
int8_t x645 = 0;
int64_t x646 = INT64_MAX;
volatile int32_t t86 = -1378932;
uint32_t x665 = UINT32_MAX;
static int32_t x668 = INT32_MIN;
int64_t x678 = 278380042448LL;
int16_t x680 = -1;
volatile int8_t x694 = INT8_MIN;
int32_t t90 = INT32_MAX;
volatile int16_t x713 = 1;
static volatile int32_t x714 = INT32_MIN;
int64_t x722 = INT64_MIN;
int8_t x748 = INT8_MIN;
uint8_t x758 = 6U;
int64_t x762 = INT64_MIN;
volatile int64_t x764 = 2149LL;
int32_t t99 = -383;
static int64_t x778 = 66369435LL;
uint64_t x780 = UINT64_MAX;
int16_t x795 = INT16_MAX;
uint16_t x814 = 14U;
static uint16_t x816 = 229U;
int8_t x826 = INT8_MIN;
uint32_t x833 = 27U;
uint64_t t108 = 2173572918217589LLU;
volatile int32_t t111 = -155398012;
int32_t x878 = 474;
uint64_t t112 = 93LLU;
static uint64_t x897 = 40822574983501LLU;
uint64_t x898 = 56741251832671485LLU;
int16_t x900 = -1;
int32_t x902 = 500;
int64_t x903 = -1LL;
static uint16_t x904 = 7U;
int32_t t117 = -6037589;
static uint32_t x921 = 4U;
uint8_t x923 = 15U;
static uint16_t x930 = UINT16_MAX;
int8_t x935 = INT8_MAX;
volatile uint64_t x937 = 816LLU;
static volatile int16_t x938 = -1;
volatile int8_t x939 = -5;
volatile uint64_t t124 = 17589375759LLU;
uint64_t t126 = 18LLU;
static uint16_t x965 = UINT16_MAX;
static volatile int32_t x966 = 14047415;
int32_t t127 = -98;
int8_t x969 = 0;
volatile int16_t x971 = 37;
volatile int32_t t130 = 1138258;
uint8_t x987 = 7U;
int16_t x994 = INT16_MIN;
static volatile int32_t x1001 = INT32_MAX;
int8_t x1004 = 0;
static int32_t t138 = 3096;
static uint16_t x1028 = 14101U;
int32_t t139 = 3213682;
int64_t x1029 = INT64_MAX;
int8_t x1032 = -32;
static int8_t x1039 = INT8_MAX;
int32_t t142 = -32289854;
static uint16_t x1051 = UINT16_MAX;
int8_t x1058 = INT8_MIN;
uint8_t x1060 = UINT8_MAX;
static volatile int32_t t144 = -2072;
volatile int32_t t145 = 5;
volatile uint32_t x1079 = 62U;
static int32_t x1080 = 261420;
int8_t x1081 = INT8_MAX;
static volatile int32_t t147 = -2008557;
volatile int64_t x1094 = -1LL;
int8_t x1098 = 0;
uint16_t x1101 = 4U;
static volatile uint16_t x1103 = 5106U;
volatile int32_t t150 = -232768;
int16_t x1133 = INT16_MAX;
uint8_t x1174 = UINT8_MAX;
volatile uint8_t x1175 = 5U;
uint64_t t155 = 174LLU;
int16_t x1181 = INT16_MAX;
int16_t x1190 = INT16_MAX;
volatile int8_t x1191 = INT8_MIN;
int32_t t160 = -1;
uint32_t x1205 = 2025U;
uint8_t x1215 = UINT8_MAX;
uint64_t t162 = 9044LLU;
volatile int32_t x1219 = -22;
volatile uint32_t x1221 = UINT32_MAX;
int32_t x1226 = -73281;
static uint8_t x1233 = 4U;
static int32_t x1241 = INT32_MAX;
uint8_t x1242 = UINT8_MAX;
volatile uint64_t x1244 = 10938328520010LLU;
static int64_t x1250 = -25358312212LL;
int32_t x1251 = INT32_MAX;
uint32_t x1256 = 907501U;
volatile int32_t t171 = 131279343;
static volatile int64_t x1257 = 511LL;
uint8_t x1258 = 1U;
static volatile int64_t t172 = 3839078077LL;
static volatile uint32_t t175 = UINT32_MAX;
uint32_t x1291 = UINT32_MAX;
uint32_t x1293 = 30197792U;
static int8_t x1294 = 11;
uint16_t x1301 = 14675U;
static int16_t x1304 = 4;
static int16_t x1327 = -1;
volatile uint32_t t183 = 213106U;
int64_t x1353 = INT64_MAX;
volatile int8_t x1361 = INT8_MAX;
static int64_t x1362 = INT64_MIN;
volatile int8_t x1375 = INT8_MIN;
int64_t t187 = -3480654971941084LL;
volatile uint64_t t188 = 3534880664619LLU;
int64_t x1382 = -526735932LL;
static int16_t x1384 = -1;
int8_t x1390 = INT8_MAX;
uint8_t x1415 = UINT8_MAX;
int32_t x1419 = INT32_MIN;
static uint32_t x1438 = 5865U;
static uint8_t x1442 = UINT8_MAX;
uint8_t x1456 = UINT8_MAX;


void f0(void) {
    	int16_t x1 = 8;
	volatile int32_t x2 = 0;
	volatile int16_t x3 = -1;
	static int64_t x4 = 6995LL;
	int32_t t0 = -25142;

    t0 = (x1>>(x2%(x3!=x4)));

    if (t0 != 8) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x9 = INT8_MAX;
	volatile int16_t x10 = INT16_MAX;
	uint32_t x12 = 481997U;

    t1 = (x9>>(x10%(x11!=x12)));

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x13 = 12154U;
	int16_t x15 = INT16_MAX;
	int16_t x16 = -1;
	volatile int32_t t2 = -5652895;

    t2 = (x13>>(x14%(x15!=x16)));

    if (t2 != 12154) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x17 = 364LLU;
	volatile int16_t x18 = INT16_MAX;
	uint16_t x19 = 1766U;
	int64_t x20 = INT64_MIN;
	static volatile uint64_t t3 = 16195990377LLU;

    t3 = (x17>>(x18%(x19!=x20)));

    if (t3 != 364LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x21 = 99U;
	volatile int8_t x22 = -50;
	static int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MIN;

    t4 = (x21>>(x22%(x23!=x24)));

    if (t4 != 99) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x38 = INT8_MAX;
	uint32_t x39 = UINT32_MAX;
	int32_t t5 = 33;

    t5 = (x37>>(x38%(x39!=x40)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x45 = INT64_MAX;
	static int8_t x46 = INT8_MIN;
	volatile int16_t x47 = -550;
	int64_t x48 = INT64_MIN;
	int64_t t6 = INT64_MAX;

    t6 = (x45>>(x46%(x47!=x48)));

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x49 = 23016390830LLU;
	int64_t x51 = -62543LL;
	uint16_t x52 = UINT16_MAX;
	volatile uint64_t t7 = 5946034LLU;

    t7 = (x49>>(x50%(x51!=x52)));

    if (t7 != 23016390830LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint8_t x62 = UINT8_MAX;
	volatile int64_t x63 = INT64_MIN;
	uint32_t x64 = 3535U;
	volatile int32_t t8 = 118;

    t8 = (x61>>(x62%(x63!=x64)));

    if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x70 = UINT8_MAX;
	static uint16_t x71 = 0U;

    t9 = (x69>>(x70%(x71!=x72)));

    if (t9 != 28) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x89 = UINT32_MAX;
	int32_t x90 = INT32_MAX;
	int32_t x91 = INT32_MAX;
	int16_t x92 = INT16_MIN;

    t10 = (x89>>(x90%(x91!=x92)));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	int16_t x100 = 0;
	int32_t t11 = -65826557;

    t11 = (x97>>(x98%(x99!=x100)));

    if (t11 != 19905) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x110 = 12U;
	static int64_t x111 = -1LL;
	static int16_t x112 = INT16_MIN;
	static int32_t t12 = -1;

    t12 = (x109>>(x110%(x111!=x112)));

    if (t12 != 99) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x113 = 80173176920039467LL;
	uint32_t x114 = 12368346U;
	uint8_t x115 = 1U;
	int16_t x116 = -1;
	int64_t t13 = 106458LL;

    t13 = (x113>>(x114%(x115!=x116)));

    if (t13 != 80173176920039467LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x125 = 51U;
	uint16_t x127 = 223U;
	uint16_t x128 = 1U;
	static volatile int32_t t14 = 6;

    t14 = (x125>>(x126%(x127!=x128)));

    if (t14 != 51) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x129 = 10LLU;
	int8_t x130 = 2;
	int8_t x131 = 0;
	uint16_t x132 = 41U;
	uint64_t t15 = 3592LLU;

    t15 = (x129>>(x130%(x131!=x132)));

    if (t15 != 10LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x134 = -256642;
	int32_t x135 = -2;
	uint16_t x136 = 144U;

    t16 = (x133>>(x134%(x135!=x136)));

    if (t16 != 62) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x137 = UINT8_MAX;
	int32_t x138 = INT32_MIN;
	int8_t x139 = -3;
	volatile int8_t x140 = 3;
	volatile int32_t t17 = -2584;

    t17 = (x137>>(x138%(x139!=x140)));

    if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x157 = UINT16_MAX;
	int8_t x158 = INT8_MAX;
	int64_t x159 = -16230305515958LL;
	uint8_t x160 = UINT8_MAX;

    t18 = (x157>>(x158%(x159!=x160)));

    if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x177 = 499LL;
	int8_t x178 = -1;
	static int8_t x179 = -1;
	int16_t x180 = INT16_MIN;
	volatile int64_t t19 = -9838351LL;

    t19 = (x177>>(x178%(x179!=x180)));

    if (t19 != 499LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x181 = INT64_MAX;
	volatile int32_t x182 = INT32_MAX;
	int8_t x183 = 7;
	volatile int32_t x184 = INT32_MAX;
	static volatile int64_t t20 = INT64_MAX;

    t20 = (x181>>(x182%(x183!=x184)));

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x185 = 0;
	volatile int8_t x186 = 4;
	uint16_t x188 = UINT16_MAX;
	int32_t t21 = 0;

    t21 = (x185>>(x186%(x187!=x188)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x189 = 58799525789209LLU;
	int16_t x191 = -1;
	volatile int32_t x192 = 4843456;
	uint64_t t22 = 355416799705257504LLU;

    t22 = (x189>>(x190%(x191!=x192)));

    if (t22 != 58799525789209LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x197 = INT16_MAX;
	uint64_t x198 = 282804473921247898LLU;
	volatile int16_t x199 = INT16_MIN;
	int16_t x200 = INT16_MAX;
	static int32_t t23 = 29;

    t23 = (x197>>(x198%(x199!=x200)));

    if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x206 = 49U;
	uint64_t x207 = UINT64_MAX;

    t24 = (x205>>(x206%(x207!=x208)));

    if (t24 != 854390568143072LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x213 = INT64_MAX;
	volatile int16_t x214 = 1460;
	int64_t x216 = INT64_MIN;
	static volatile int64_t t25 = INT64_MAX;

    t25 = (x213>>(x214%(x215!=x216)));

    if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x217 = INT8_MAX;
	static volatile int64_t x218 = INT64_MIN;
	static uint64_t x220 = 43128343643421518LLU;
	static volatile int32_t t26 = 3972;

    t26 = (x217>>(x218%(x219!=x220)));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x229 = UINT16_MAX;
	uint8_t x230 = 7U;
	uint8_t x231 = 13U;
	int64_t x232 = INT64_MAX;

    t27 = (x229>>(x230%(x231!=x232)));

    if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x233 = UINT32_MAX;
	int32_t x234 = INT32_MIN;
	static int32_t x235 = 428748;
	volatile uint32_t t28 = UINT32_MAX;

    t28 = (x233>>(x234%(x235!=x236)));

    if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x241 = 1;
	int32_t x242 = 16270;
	int32_t x243 = 232748834;
	static uint64_t x244 = 1315985785763749LLU;
	volatile int32_t t29 = -12;

    t29 = (x241>>(x242%(x243!=x244)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x257 = 3677;
	int32_t x258 = 69229753;
	static int32_t x259 = -1;
	volatile int32_t t30 = -835;

    t30 = (x257>>(x258%(x259!=x260)));

    if (t30 != 3677) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x261 = 0U;
	uint32_t x264 = 218U;
	volatile int32_t t31 = -5343102;

    t31 = (x261>>(x262%(x263!=x264)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x265 = 15795530LL;
	int64_t x266 = 686705489100833LL;
	static uint8_t x267 = UINT8_MAX;
	volatile int64_t t32 = -141377335LL;

    t32 = (x265>>(x266%(x267!=x268)));

    if (t32 != 15795530LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x273 = INT32_MAX;
	int32_t x275 = INT32_MIN;
	int64_t x276 = 644440LL;

    t33 = (x273>>(x274%(x275!=x276)));

    if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x278 = 0;
	volatile int32_t t34 = -1086;

    t34 = (x277>>(x278%(x279!=x280)));

    if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x281 = 96LLU;
	int64_t x282 = INT64_MAX;
	int16_t x283 = 0;
	int16_t x284 = INT16_MIN;

    t35 = (x281>>(x282%(x283!=x284)));

    if (t35 != 96LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x289 = INT8_MAX;
	int64_t x290 = 111407419236LL;
	volatile uint16_t x291 = 57U;
	static int32_t x292 = -40;
	volatile int32_t t36 = -1;

    t36 = (x289>>(x290%(x291!=x292)));

    if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x293 = INT8_MAX;
	uint8_t x296 = 9U;
	volatile int32_t t37 = 1;

    t37 = (x293>>(x294%(x295!=x296)));

    if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x297 = 0;
	int64_t x298 = -1LL;
	static int16_t x299 = INT16_MIN;
	int64_t x300 = -1LL;

    t38 = (x297>>(x298%(x299!=x300)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x305 = 11772704321LL;
	volatile uint64_t x307 = UINT64_MAX;
	int16_t x308 = -3995;

    t39 = (x305>>(x306%(x307!=x308)));

    if (t39 != 11772704321LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x313 = 12196U;
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = -1LL;
	int16_t x316 = INT16_MAX;
	volatile uint32_t t40 = 1561U;

    t40 = (x313>>(x314%(x315!=x316)));

    if (t40 != 12196U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x319 = 32LLU;
	volatile int8_t x320 = -1;

    t41 = (x317>>(x318%(x319!=x320)));

    if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x321 = 1774744;
	volatile int8_t x322 = -29;
	int64_t x323 = 659024117263LL;
	uint64_t x324 = 4163LLU;
	volatile int32_t t42 = -26;

    t42 = (x321>>(x322%(x323!=x324)));

    if (t42 != 1774744) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x333 = 5858275;
	int16_t x334 = INT16_MAX;
	uint32_t x335 = UINT32_MAX;
	volatile int32_t t43 = -3118652;

    t43 = (x333>>(x334%(x335!=x336)));

    if (t43 != 5858275) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x338 = 104922919U;
	int8_t x340 = INT8_MIN;
	volatile uint64_t t44 = 5015897804533LLU;

    t44 = (x337>>(x338%(x339!=x340)));

    if (t44 != 83270469321LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x345 = UINT32_MAX;
	static uint8_t x346 = 9U;
	static volatile uint32_t x347 = 1780U;
	int16_t x348 = 1;
	uint32_t t45 = UINT32_MAX;

    t45 = (x345>>(x346%(x347!=x348)));

    if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x353 = 97211136U;
	volatile int16_t x355 = 7;
	int32_t x356 = INT32_MIN;
	uint32_t t46 = 10761292U;

    t46 = (x353>>(x354%(x355!=x356)));

    if (t46 != 97211136U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x357 = UINT64_MAX;
	int32_t x358 = INT32_MAX;
	static int32_t x359 = 376500477;
	static int32_t x360 = -7221;

    t47 = (x357>>(x358%(x359!=x360)));

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x361 = 20;
	int32_t x364 = INT32_MAX;

    t48 = (x361>>(x362%(x363!=x364)));

    if (t48 != 20) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x366 = -1;
	volatile uint8_t x367 = 1U;
	uint8_t x368 = 3U;
	uint32_t t49 = 84506919U;

    t49 = (x365>>(x366%(x367!=x368)));

    if (t49 != 902U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x369 = 0U;
	int64_t x370 = INT64_MAX;
	uint8_t x371 = 50U;
	static volatile int32_t x372 = 1587749;
	volatile uint32_t t50 = 15U;

    t50 = (x369>>(x370%(x371!=x372)));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x389 = 233115547U;
	volatile int32_t x390 = INT32_MAX;
	int64_t x392 = -415533453LL;
	volatile uint32_t t51 = 559740032U;

    t51 = (x389>>(x390%(x391!=x392)));

    if (t51 != 233115547U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x397 = UINT16_MAX;
	static int8_t x398 = INT8_MIN;
	uint64_t x400 = UINT64_MAX;

    t52 = (x397>>(x398%(x399!=x400)));

    if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x401 = 0;
	volatile int64_t x403 = -352637146057107LL;
	int32_t x404 = -1123;
	int32_t t53 = 1835958;

    t53 = (x401>>(x402%(x403!=x404)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x409 = 0;
	static int32_t x410 = INT32_MIN;
	static int16_t x411 = 5;
	static int32_t x412 = INT32_MAX;
	volatile int32_t t54 = -2252377;

    t54 = (x409>>(x410%(x411!=x412)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x422 = 2611;
	int64_t x424 = INT64_MAX;

    t55 = (x421>>(x422%(x423!=x424)));

    if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x425 = 5U;
	int8_t x426 = INT8_MIN;
	static uint32_t x427 = 3619102U;
	int32_t x428 = INT32_MIN;
	int32_t t56 = -20598;

    t56 = (x425>>(x426%(x427!=x428)));

    if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x429 = 15;
	volatile int8_t x430 = 45;
	int64_t x431 = -1LL;
	uint8_t x432 = 3U;
	int32_t t57 = 23851662;

    t57 = (x429>>(x430%(x431!=x432)));

    if (t57 != 15) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x441 = UINT8_MAX;
	volatile int64_t x443 = -1LL;
	int64_t x444 = 17168524LL;
	volatile int32_t t58 = -68826899;

    t58 = (x441>>(x442%(x443!=x444)));

    if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x445 = 1366U;
	uint16_t x446 = 3387U;
	int32_t x447 = 340597498;
	volatile uint8_t x448 = UINT8_MAX;
	static volatile int32_t t59 = -177000055;

    t59 = (x445>>(x446%(x447!=x448)));

    if (t59 != 1366) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x457 = 29367U;
	static uint16_t x458 = 9U;
	int32_t x460 = INT32_MIN;
	static volatile int32_t t60 = 46;

    t60 = (x457>>(x458%(x459!=x460)));

    if (t60 != 29367) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x466 = -1;
	int64_t x467 = -924505LL;
	int32_t t61 = -510694161;

    t61 = (x465>>(x466%(x467!=x468)));

    if (t61 != 57) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x469 = 239538LLU;
	int32_t x470 = INT32_MIN;
	int32_t x471 = -1;
	volatile uint64_t t62 = 100103696LLU;

    t62 = (x469>>(x470%(x471!=x472)));

    if (t62 != 239538LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x473 = INT64_MAX;
	static int32_t x474 = INT32_MIN;
	int16_t x475 = -1;
	static volatile uint8_t x476 = 3U;
	volatile int64_t t63 = INT64_MAX;

    t63 = (x473>>(x474%(x475!=x476)));

    if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x481 = INT64_MAX;
	int8_t x482 = INT8_MIN;
	volatile uint32_t x483 = 2U;
	volatile uint8_t x484 = 20U;

    t64 = (x481>>(x482%(x483!=x484)));

    if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x485 = INT16_MAX;
	int8_t x487 = -1;
	int16_t x488 = INT16_MAX;
	int32_t t65 = 382;

    t65 = (x485>>(x486%(x487!=x488)));

    if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x497 = 385385U;
	static int64_t x498 = -712LL;
	static int64_t x499 = INT64_MIN;
	int32_t x500 = -2266419;

    t66 = (x497>>(x498%(x499!=x500)));

    if (t66 != 385385U) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x502 = 1933U;
	uint16_t x503 = 3923U;
	static int32_t t67 = 51;

    t67 = (x501>>(x502%(x503!=x504)));

    if (t67 != 23) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x506 = 4700U;
	int16_t x508 = 11829;
	uint64_t t68 = 7356333LLU;

    t68 = (x505>>(x506%(x507!=x508)));

    if (t68 != 46728612352LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x529 = 0;
	int16_t x530 = INT16_MIN;
	int8_t x531 = -1;
	int32_t x532 = INT32_MIN;
	volatile int32_t t69 = -1507911;

    t69 = (x529>>(x530%(x531!=x532)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x538 = -1;
	int32_t x539 = 7;
	int16_t x540 = -6161;
	int32_t t70 = -13952290;

    t70 = (x537>>(x538%(x539!=x540)));

    if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x542 = INT32_MIN;
	uint32_t x544 = 10179422U;
	volatile uint64_t t71 = 8513LLU;

    t71 = (x541>>(x542%(x543!=x544)));

    if (t71 != 185296365216443LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x545 = 1;
	int16_t x546 = -1;
	volatile uint64_t x547 = UINT64_MAX;
	volatile int16_t x548 = 437;
	int32_t t72 = -1;

    t72 = (x545>>(x546%(x547!=x548)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x549 = 0U;
	int64_t x552 = -1LL;
	volatile uint32_t t73 = 5139U;

    t73 = (x549>>(x550%(x551!=x552)));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x553 = INT64_MAX;
	volatile int16_t x554 = INT16_MIN;
	uint32_t x556 = UINT32_MAX;
	int64_t t74 = INT64_MAX;

    t74 = (x553>>(x554%(x555!=x556)));

    if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x565 = 26U;
	int32_t x567 = INT32_MIN;
	uint64_t x568 = UINT64_MAX;
	int32_t t75 = -565065;

    t75 = (x565>>(x566%(x567!=x568)));

    if (t75 != 26) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x569 = UINT8_MAX;
	int8_t x571 = 3;
	int32_t x572 = INT32_MIN;
	volatile int32_t t76 = 826530;

    t76 = (x569>>(x570%(x571!=x572)));

    if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x574 = -627LL;
	int64_t x575 = INT64_MIN;
	volatile int64_t t77 = INT64_MAX;

    t77 = (x573>>(x574%(x575!=x576)));

    if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x577 = 14237U;
	int32_t x578 = 0;
	volatile int8_t x579 = INT8_MIN;
	int16_t x580 = 3;

    t78 = (x577>>(x578%(x579!=x580)));

    if (t78 != 14237) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x594 = -1;
	int8_t x595 = INT8_MAX;
	int8_t x596 = -1;
	volatile int32_t t79 = 3910067;

    t79 = (x593>>(x594%(x595!=x596)));

    if (t79 != 4482) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x597 = 28635U;
	int8_t x599 = INT8_MAX;
	uint32_t x600 = 1285901U;
	static volatile int32_t t80 = 0;

    t80 = (x597>>(x598%(x599!=x600)));

    if (t80 != 28635) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x606 = INT16_MIN;
	uint64_t x607 = 1348937LLU;
	uint16_t x608 = 3141U;
	static volatile int32_t t81 = 3974368;

    t81 = (x605>>(x606%(x607!=x608)));

    if (t81 != 64) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x621 = 556078U;
	int8_t x623 = INT8_MAX;
	int64_t x624 = 131421229LL;
	static volatile uint32_t t82 = 1966291690U;

    t82 = (x621>>(x622%(x623!=x624)));

    if (t82 != 556078U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x626 = INT64_MIN;
	uint8_t x627 = 4U;
	static int16_t x628 = INT16_MIN;
	static volatile uint32_t t83 = 3U;

    t83 = (x625>>(x626%(x627!=x628)));

    if (t83 != 1439U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x633 = 588027924285719LL;
	int64_t x634 = -1LL;
	volatile int16_t x635 = INT16_MIN;
	int8_t x636 = -8;

    t84 = (x633>>(x634%(x635!=x636)));

    if (t84 != 588027924285719LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x637 = INT16_MAX;
	volatile uint8_t x638 = UINT8_MAX;
	static int32_t x639 = -146996632;
	volatile int32_t x640 = INT32_MAX;
	int32_t t85 = -669018;

    t85 = (x637>>(x638%(x639!=x640)));

    if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x647 = 4086U;
	int16_t x648 = INT16_MIN;

    t86 = (x645>>(x646%(x647!=x648)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x666 = INT8_MIN;
	static int64_t x667 = INT64_MAX;
	volatile uint32_t t87 = UINT32_MAX;

    t87 = (x665>>(x666%(x667!=x668)));

    if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x669 = INT64_MAX;
	int16_t x670 = 0;
	uint8_t x671 = UINT8_MAX;
	int32_t x672 = INT32_MIN;
	volatile int64_t t88 = INT64_MAX;

    t88 = (x669>>(x670%(x671!=x672)));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x677 = 1323LLU;
	static uint32_t x679 = 5750748U;
	volatile uint64_t t89 = 521902087LLU;

    t89 = (x677>>(x678%(x679!=x680)));

    if (t89 != 1323LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x693 = INT32_MAX;
	uint16_t x695 = 80U;
	int32_t x696 = INT32_MIN;

    t90 = (x693>>(x694%(x695!=x696)));

    if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x701 = 47;
	volatile int8_t x702 = INT8_MIN;
	uint64_t x703 = 2LLU;
	int8_t x704 = -26;
	int32_t t91 = 88572616;

    t91 = (x701>>(x702%(x703!=x704)));

    if (t91 != 47) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x709 = 1U;
	uint32_t x710 = UINT32_MAX;
	static int16_t x711 = 111;
	static int32_t x712 = INT32_MAX;
	volatile int32_t t92 = -33;

    t92 = (x709>>(x710%(x711!=x712)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x715 = INT16_MIN;
	static int8_t x716 = 8;
	int32_t t93 = -6090;

    t93 = (x713>>(x714%(x715!=x716)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x721 = 1563U;
	int16_t x723 = INT16_MIN;
	volatile int8_t x724 = 37;
	static uint32_t t94 = 33304806U;

    t94 = (x721>>(x722%(x723!=x724)));

    if (t94 != 1563U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x725 = 21996153405LLU;
	int8_t x726 = -1;
	volatile int16_t x727 = INT16_MAX;
	int8_t x728 = 0;
	volatile uint64_t t95 = 1584583LLU;

    t95 = (x725>>(x726%(x727!=x728)));

    if (t95 != 21996153405LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x729 = 16799U;
	int8_t x730 = INT8_MIN;
	static volatile int16_t x731 = 394;
	int32_t x732 = -1;
	volatile uint32_t t96 = 8U;

    t96 = (x729>>(x730%(x731!=x732)));

    if (t96 != 16799U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x745 = 17U;
	uint32_t x746 = UINT32_MAX;
	int64_t x747 = 19347LL;
	uint32_t t97 = 7U;

    t97 = (x745>>(x746%(x747!=x748)));

    if (t97 != 17U) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x757 = 2;
	volatile int64_t x759 = INT64_MIN;
	int8_t x760 = -1;
	volatile int32_t t98 = 37118326;

    t98 = (x757>>(x758%(x759!=x760)));

    if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x761 = 5240U;
	int64_t x763 = INT64_MIN;

    t99 = (x761>>(x762%(x763!=x764)));

    if (t99 != 5240) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x777 = 29602;
	int32_t x779 = -21855823;
	static volatile int32_t t100 = -14;

    t100 = (x777>>(x778%(x779!=x780)));

    if (t100 != 29602) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x785 = 1;
	volatile int16_t x786 = INT16_MAX;
	int64_t x787 = INT64_MIN;
	uint8_t x788 = UINT8_MAX;
	volatile int32_t t101 = -7029;

    t101 = (x785>>(x786%(x787!=x788)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x793 = 0U;
	uint16_t x794 = 275U;
	int8_t x796 = INT8_MIN;
	int32_t t102 = 36414;

    t102 = (x793>>(x794%(x795!=x796)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x813 = 321LLU;
	int32_t x815 = -1;
	uint64_t t103 = 14325696446803LLU;

    t103 = (x813>>(x814%(x815!=x816)));

    if (t103 != 321LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x817 = 82LLU;
	int8_t x818 = INT8_MIN;
	volatile uint16_t x819 = UINT16_MAX;
	uint32_t x820 = 4223474U;
	uint64_t t104 = 55775046LLU;

    t104 = (x817>>(x818%(x819!=x820)));

    if (t104 != 82LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x821 = INT8_MAX;
	static uint8_t x822 = 12U;
	int8_t x823 = 14;
	volatile int16_t x824 = INT16_MIN;
	volatile int32_t t105 = -3539578;

    t105 = (x821>>(x822%(x823!=x824)));

    if (t105 != 127) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x825 = 7U;
	int16_t x827 = INT16_MAX;
	int16_t x828 = INT16_MIN;
	volatile int32_t t106 = -52447;

    t106 = (x825>>(x826%(x827!=x828)));

    if (t106 != 7) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x834 = UINT8_MAX;
	static int16_t x835 = -5;
	uint32_t x836 = UINT32_MAX;
	uint32_t t107 = 14977600U;

    t107 = (x833>>(x834%(x835!=x836)));

    if (t107 != 27U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x837 = 216653033959355123LLU;
	uint64_t x838 = 563435516553279484LLU;
	int8_t x839 = 3;
	int16_t x840 = INT16_MIN;

    t108 = (x837>>(x838%(x839!=x840)));

    if (t108 != 216653033959355123LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x841 = 0U;
	uint32_t x842 = UINT32_MAX;
	static uint64_t x843 = 78878625017192129LLU;
	uint64_t x844 = 2218LLU;
	int32_t t109 = -19;

    t109 = (x841>>(x842%(x843!=x844)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x865 = 99U;
	uint64_t x866 = 36464889LLU;
	int64_t x867 = INT64_MIN;
	int32_t x868 = INT32_MIN;
	volatile uint32_t t110 = 21180622U;

    t110 = (x865>>(x866%(x867!=x868)));

    if (t110 != 99U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x873 = 0;
	int64_t x874 = -1LL;
	uint64_t x875 = 36131644LLU;
	int32_t x876 = INT32_MIN;

    t111 = (x873>>(x874%(x875!=x876)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x877 = 6172LLU;
	volatile int64_t x879 = INT64_MIN;
	int64_t x880 = -9240938682LL;

    t112 = (x877>>(x878%(x879!=x880)));

    if (t112 != 6172LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x881 = INT16_MAX;
	int8_t x882 = -1;
	int64_t x883 = 41619581LL;
	int16_t x884 = INT16_MAX;
	int32_t t113 = 466;

    t113 = (x881>>(x882%(x883!=x884)));

    if (t113 != 32767) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x889 = 368;
	int32_t x890 = 1300980;
	uint64_t x891 = 1738251552089LLU;
	uint8_t x892 = 59U;
	volatile int32_t t114 = 0;

    t114 = (x889>>(x890%(x891!=x892)));

    if (t114 != 368) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x893 = 115;
	int16_t x894 = INT16_MIN;
	uint16_t x895 = UINT16_MAX;
	volatile int64_t x896 = INT64_MIN;
	int32_t t115 = 1253;

    t115 = (x893>>(x894%(x895!=x896)));

    if (t115 != 115) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x899 = UINT8_MAX;
	uint64_t t116 = 608LLU;

    t116 = (x897>>(x898%(x899!=x900)));

    if (t116 != 40822574983501LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x901 = INT16_MAX;

    t117 = (x901>>(x902%(x903!=x904)));

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x905 = UINT32_MAX;
	int16_t x906 = INT16_MAX;
	uint64_t x907 = 8139046LLU;
	int8_t x908 = -20;
	uint32_t t118 = UINT32_MAX;

    t118 = (x905>>(x906%(x907!=x908)));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x909 = UINT8_MAX;
	static int16_t x910 = -13412;
	static int8_t x911 = -1;
	uint32_t x912 = 1340909U;
	volatile int32_t t119 = 503531;

    t119 = (x909>>(x910%(x911!=x912)));

    if (t119 != 255) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x913 = UINT32_MAX;
	int64_t x914 = -1LL;
	static volatile int8_t x915 = INT8_MAX;
	volatile int8_t x916 = INT8_MIN;
	volatile uint32_t t120 = UINT32_MAX;

    t120 = (x913>>(x914%(x915!=x916)));

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x922 = INT64_MIN;
	volatile uint64_t x924 = 1606197480695137LLU;
	uint32_t t121 = 3001162U;

    t121 = (x921>>(x922%(x923!=x924)));

    if (t121 != 4U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x929 = 15810300U;
	volatile uint8_t x931 = UINT8_MAX;
	int32_t x932 = INT32_MIN;
	volatile uint32_t t122 = 429401692U;

    t122 = (x929>>(x930%(x931!=x932)));

    if (t122 != 15810300U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x933 = 48U;
	int64_t x934 = INT64_MIN;
	volatile int32_t x936 = INT32_MAX;
	static volatile int32_t t123 = 91236;

    t123 = (x933>>(x934%(x935!=x936)));

    if (t123 != 48) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x940 = 3U;

    t124 = (x937>>(x938%(x939!=x940)));

    if (t124 != 816LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x945 = 2;
	static volatile int32_t x946 = -23569489;
	int64_t x947 = 25403392837213604LL;
	static volatile int32_t x948 = INT32_MIN;
	static int32_t t125 = -273;

    t125 = (x945>>(x946%(x947!=x948)));

    if (t125 != 2) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x961 = 1222595400LLU;
	int8_t x962 = 0;
	int16_t x963 = 45;
	uint64_t x964 = 123LLU;

    t126 = (x961>>(x962%(x963!=x964)));

    if (t126 != 1222595400LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x967 = -1;
	static int32_t x968 = INT32_MIN;

    t127 = (x965>>(x966%(x967!=x968)));

    if (t127 != 65535) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x970 = -185408091704206672LL;
	uint32_t x972 = UINT32_MAX;
	int32_t t128 = 0;

    t128 = (x969>>(x970%(x971!=x972)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x977 = 89U;
	int8_t x978 = -1;
	int8_t x979 = 1;
	int16_t x980 = -1795;
	int32_t t129 = 21994;

    t129 = (x977>>(x978%(x979!=x980)));

    if (t129 != 89) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x981 = 538U;
	static volatile int16_t x982 = INT16_MIN;
	int16_t x983 = -1;
	int16_t x984 = INT16_MAX;

    t130 = (x981>>(x982%(x983!=x984)));

    if (t130 != 538) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x985 = 2U;
	int64_t x986 = INT64_MIN;
	int64_t x988 = -1LL;
	static volatile int32_t t131 = -7696227;

    t131 = (x985>>(x986%(x987!=x988)));

    if (t131 != 2) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x989 = 88U;
	uint64_t x990 = UINT64_MAX;
	uint64_t x991 = UINT64_MAX;
	uint8_t x992 = 3U;
	static volatile int32_t t132 = 1001437128;

    t132 = (x989>>(x990%(x991!=x992)));

    if (t132 != 88) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x993 = 1;
	int16_t x995 = INT16_MIN;
	static uint16_t x996 = UINT16_MAX;
	int32_t t133 = -2366;

    t133 = (x993>>(x994%(x995!=x996)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x997 = 2313U;
	volatile int32_t x998 = -55666;
	uint32_t x999 = 120U;
	int8_t x1000 = INT8_MAX;
	int32_t t134 = -1;

    t134 = (x997>>(x998%(x999!=x1000)));

    if (t134 != 2313) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x1002 = 12LL;
	uint32_t x1003 = 667868029U;
	int32_t t135 = INT32_MAX;

    t135 = (x1001>>(x1002%(x1003!=x1004)));

    if (t135 != INT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x1005 = 4157413154LL;
	int16_t x1006 = -1;
	int8_t x1007 = INT8_MIN;
	int8_t x1008 = INT8_MAX;
	volatile int64_t t136 = 17617060645LL;

    t136 = (x1005>>(x1006%(x1007!=x1008)));

    if (t136 != 4157413154LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x1009 = UINT8_MAX;
	volatile int32_t x1010 = -1;
	volatile int64_t x1011 = INT64_MIN;
	volatile int32_t x1012 = 6;
	volatile int32_t t137 = 413;

    t137 = (x1009>>(x1010%(x1011!=x1012)));

    if (t137 != 255) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x1021 = UINT8_MAX;
	int8_t x1022 = -1;
	uint16_t x1023 = UINT16_MAX;
	static int64_t x1024 = -548898208140390529LL;

    t138 = (x1021>>(x1022%(x1023!=x1024)));

    if (t138 != 255) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x1025 = INT16_MAX;
	int64_t x1026 = INT64_MIN;
	int64_t x1027 = INT64_MAX;

    t139 = (x1025>>(x1026%(x1027!=x1028)));

    if (t139 != 32767) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x1030 = 7974U;
	volatile int32_t x1031 = INT32_MAX;
	int64_t t140 = INT64_MAX;

    t140 = (x1029>>(x1030%(x1031!=x1032)));

    if (t140 != INT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x1033 = UINT32_MAX;
	uint64_t x1034 = 340947659024LLU;
	int8_t x1035 = INT8_MIN;
	int8_t x1036 = -1;
	volatile uint32_t t141 = UINT32_MAX;

    t141 = (x1033>>(x1034%(x1035!=x1036)));

    if (t141 != UINT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x1037 = 31U;
	uint32_t x1038 = 1U;
	int16_t x1040 = 7392;

    t142 = (x1037>>(x1038%(x1039!=x1040)));

    if (t142 != 31) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x1049 = UINT8_MAX;
	volatile uint32_t x1050 = UINT32_MAX;
	int32_t x1052 = -1;
	volatile int32_t t143 = -102175786;

    t143 = (x1049>>(x1050%(x1051!=x1052)));

    if (t143 != 255) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1057 = INT8_MAX;
	int32_t x1059 = INT32_MIN;

    t144 = (x1057>>(x1058%(x1059!=x1060)));

    if (t144 != 127) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x1065 = UINT8_MAX;
	uint32_t x1066 = 6071450U;
	static int16_t x1067 = INT16_MIN;
	volatile int16_t x1068 = -62;

    t145 = (x1065>>(x1066%(x1067!=x1068)));

    if (t145 != 255) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x1077 = 7096501285019065LLU;
	uint16_t x1078 = 847U;
	volatile uint64_t t146 = 1572673LLU;

    t146 = (x1077>>(x1078%(x1079!=x1080)));

    if (t146 != 7096501285019065LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x1082 = -1LL;
	static volatile int16_t x1083 = -492;
	static int8_t x1084 = INT8_MAX;

    t147 = (x1081>>(x1082%(x1083!=x1084)));

    if (t147 != 127) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1093 = INT8_MAX;
	int8_t x1095 = -3;
	volatile uint32_t x1096 = 14475U;
	volatile int32_t t148 = -1107858;

    t148 = (x1093>>(x1094%(x1095!=x1096)));

    if (t148 != 127) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1097 = 105751157620636LL;
	int64_t x1099 = INT64_MIN;
	volatile int64_t x1100 = -13440158LL;
	volatile int64_t t149 = 467585519608065073LL;

    t149 = (x1097>>(x1098%(x1099!=x1100)));

    if (t149 != 105751157620636LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x1102 = UINT16_MAX;
	volatile uint64_t x1104 = 21253647483409676LLU;

    t150 = (x1101>>(x1102%(x1103!=x1104)));

    if (t150 != 4) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1117 = INT32_MAX;
	uint8_t x1118 = 72U;
	uint16_t x1119 = 368U;
	int16_t x1120 = INT16_MIN;
	volatile int32_t t151 = INT32_MAX;

    t151 = (x1117>>(x1118%(x1119!=x1120)));

    if (t151 != INT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x1134 = INT8_MIN;
	static volatile uint64_t x1135 = 0LLU;
	uint32_t x1136 = 50122U;
	static int32_t t152 = -6;

    t152 = (x1133>>(x1134%(x1135!=x1136)));

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x1157 = 16025766;
	uint16_t x1158 = UINT16_MAX;
	int64_t x1159 = INT64_MIN;
	volatile int64_t x1160 = INT64_MAX;
	volatile int32_t t153 = 3;

    t153 = (x1157>>(x1158%(x1159!=x1160)));

    if (t153 != 16025766) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x1161 = 24307U;
	int64_t x1162 = INT64_MIN;
	static int64_t x1163 = INT64_MIN;
	int32_t x1164 = -54573;
	uint32_t t154 = 247214U;

    t154 = (x1161>>(x1162%(x1163!=x1164)));

    if (t154 != 24307U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1173 = 259048LLU;
	uint16_t x1176 = UINT16_MAX;

    t155 = (x1173>>(x1174%(x1175!=x1176)));

    if (t155 != 259048LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x1177 = 49U;
	int32_t x1178 = 32820033;
	int8_t x1179 = -1;
	int64_t x1180 = 30603949953LL;
	int32_t t156 = -35341;

    t156 = (x1177>>(x1178%(x1179!=x1180)));

    if (t156 != 49) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x1182 = INT8_MAX;
	int8_t x1183 = INT8_MAX;
	int16_t x1184 = -309;
	volatile int32_t t157 = -4921451;

    t157 = (x1181>>(x1182%(x1183!=x1184)));

    if (t157 != 32767) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x1189 = UINT64_MAX;
	int16_t x1192 = 1;
	uint64_t t158 = UINT64_MAX;

    t158 = (x1189>>(x1190%(x1191!=x1192)));

    if (t158 != UINT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1193 = 0;
	uint16_t x1194 = 3976U;
	uint16_t x1195 = 4800U;
	uint64_t x1196 = 24810LLU;
	volatile int32_t t159 = 8;

    t159 = (x1193>>(x1194%(x1195!=x1196)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1197 = 2U;
	static volatile uint64_t x1198 = UINT64_MAX;
	int16_t x1199 = INT16_MIN;
	volatile int8_t x1200 = -27;

    t160 = (x1197>>(x1198%(x1199!=x1200)));

    if (t160 != 2) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x1206 = INT8_MIN;
	volatile int16_t x1207 = 1;
	uint16_t x1208 = 3U;
	uint32_t t161 = 51423U;

    t161 = (x1205>>(x1206%(x1207!=x1208)));

    if (t161 != 2025U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x1213 = 8131335641542939836LLU;
	static volatile int32_t x1214 = INT32_MIN;
	int64_t x1216 = INT64_MIN;

    t162 = (x1213>>(x1214%(x1215!=x1216)));

    if (t162 != 8131335641542939836LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x1217 = 1777394693LL;
	uint8_t x1218 = 125U;
	uint16_t x1220 = 0U;
	int64_t t163 = 315552231534370039LL;

    t163 = (x1217>>(x1218%(x1219!=x1220)));

    if (t163 != 1777394693LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x1222 = INT16_MAX;
	uint32_t x1223 = 727900U;
	int64_t x1224 = INT64_MAX;
	static volatile uint32_t t164 = UINT32_MAX;

    t164 = (x1221>>(x1222%(x1223!=x1224)));

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x1225 = 403;
	int16_t x1227 = -723;
	uint32_t x1228 = 1364825042U;
	volatile int32_t t165 = -21826;

    t165 = (x1225>>(x1226%(x1227!=x1228)));

    if (t165 != 403) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1234 = INT32_MAX;
	uint8_t x1235 = 43U;
	int8_t x1236 = INT8_MIN;
	int32_t t166 = 19873184;

    t166 = (x1233>>(x1234%(x1235!=x1236)));

    if (t166 != 4) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x1237 = UINT16_MAX;
	static uint64_t x1238 = 420652191465LLU;
	int32_t x1239 = INT32_MAX;
	uint8_t x1240 = UINT8_MAX;
	volatile int32_t t167 = 399578;

    t167 = (x1237>>(x1238%(x1239!=x1240)));

    if (t167 != 65535) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x1243 = INT32_MIN;
	volatile int32_t t168 = INT32_MAX;

    t168 = (x1241>>(x1242%(x1243!=x1244)));

    if (t168 != INT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1245 = 125030977;
	uint8_t x1246 = 7U;
	int64_t x1247 = INT64_MIN;
	uint16_t x1248 = 944U;
	int32_t t169 = -114097;

    t169 = (x1245>>(x1246%(x1247!=x1248)));

    if (t169 != 125030977) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1249 = 5U;
	int64_t x1252 = -2365135684LL;
	uint32_t t170 = 10807331U;

    t170 = (x1249>>(x1250%(x1251!=x1252)));

    if (t170 != 5U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x1253 = 5;
	int8_t x1254 = INT8_MAX;
	uint64_t x1255 = 60506LLU;

    t171 = (x1253>>(x1254%(x1255!=x1256)));

    if (t171 != 5) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1259 = INT16_MAX;
	int32_t x1260 = INT32_MIN;

    t172 = (x1257>>(x1258%(x1259!=x1260)));

    if (t172 != 511LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x1261 = 0U;
	uint64_t x1262 = 7LLU;
	int64_t x1263 = 0LL;
	int64_t x1264 = -1546776839619794LL;
	int32_t t173 = 114055;

    t173 = (x1261>>(x1262%(x1263!=x1264)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x1265 = 96714143644LL;
	int32_t x1266 = INT32_MAX;
	uint64_t x1267 = 13153LLU;
	int64_t x1268 = -1LL;
	volatile int64_t t174 = 59711LL;

    t174 = (x1265>>(x1266%(x1267!=x1268)));

    if (t174 != 96714143644LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x1277 = UINT32_MAX;
	int8_t x1278 = -1;
	int32_t x1279 = INT32_MIN;
	uint32_t x1280 = UINT32_MAX;

    t175 = (x1277>>(x1278%(x1279!=x1280)));

    if (t175 != UINT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x1285 = 3U;
	int64_t x1286 = -1LL;
	uint32_t x1287 = 5U;
	static int16_t x1288 = INT16_MIN;
	int32_t t176 = -5955;

    t176 = (x1285>>(x1286%(x1287!=x1288)));

    if (t176 != 3) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1289 = 11961554U;
	int64_t x1290 = -1LL;
	int16_t x1292 = -32;
	uint32_t t177 = 228U;

    t177 = (x1289>>(x1290%(x1291!=x1292)));

    if (t177 != 11961554U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1295 = 10818825930LLU;
	uint32_t x1296 = 17505U;
	static uint32_t t178 = 1U;

    t178 = (x1293>>(x1294%(x1295!=x1296)));

    if (t178 != 30197792U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x1297 = 2U;
	uint32_t x1298 = UINT32_MAX;
	int64_t x1299 = INT64_MIN;
	static volatile uint8_t x1300 = 3U;
	uint32_t t179 = 16570U;

    t179 = (x1297>>(x1298%(x1299!=x1300)));

    if (t179 != 2U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1302 = 3531013;
	int32_t x1303 = INT32_MIN;
	static int32_t t180 = 1;

    t180 = (x1301>>(x1302%(x1303!=x1304)));

    if (t180 != 14675) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1325 = 0;
	static int8_t x1326 = INT8_MIN;
	uint16_t x1328 = 1522U;
	int32_t t181 = -238672199;

    t181 = (x1325>>(x1326%(x1327!=x1328)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1329 = 12;
	static int64_t x1330 = -1LL;
	int64_t x1331 = INT64_MIN;
	volatile uint64_t x1332 = UINT64_MAX;
	volatile int32_t t182 = 1;

    t182 = (x1329>>(x1330%(x1331!=x1332)));

    if (t182 != 12) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1333 = 1886U;
	int64_t x1334 = -1LL;
	int16_t x1335 = 138;
	static volatile int8_t x1336 = -1;

    t183 = (x1333>>(x1334%(x1335!=x1336)));

    if (t183 != 1886U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1354 = -1;
	int8_t x1355 = INT8_MAX;
	int16_t x1356 = INT16_MIN;
	int64_t t184 = INT64_MAX;

    t184 = (x1353>>(x1354%(x1355!=x1356)));

    if (t184 != INT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1357 = INT16_MAX;
	volatile uint64_t x1358 = 1778LLU;
	uint32_t x1359 = UINT32_MAX;
	int32_t x1360 = INT32_MAX;
	int32_t t185 = 101301902;

    t185 = (x1357>>(x1358%(x1359!=x1360)));

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1363 = UINT8_MAX;
	uint32_t x1364 = 1918963U;
	static int32_t t186 = 69319879;

    t186 = (x1361>>(x1362%(x1363!=x1364)));

    if (t186 != 127) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1373 = 1137989625135082066LL;
	int32_t x1374 = INT32_MIN;
	int64_t x1376 = -1LL;

    t187 = (x1373>>(x1374%(x1375!=x1376)));

    if (t187 != 1137989625135082066LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1377 = 1759640673782729LLU;
	int8_t x1378 = INT8_MAX;
	uint16_t x1379 = UINT16_MAX;
	static int8_t x1380 = -1;

    t188 = (x1377>>(x1378%(x1379!=x1380)));

    if (t188 != 1759640673782729LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1381 = INT16_MAX;
	static uint32_t x1383 = 50319U;
	volatile int32_t t189 = -12;

    t189 = (x1381>>(x1382%(x1383!=x1384)));

    if (t189 != 32767) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1389 = 63U;
	int32_t x1391 = INT32_MIN;
	static int16_t x1392 = 0;
	volatile uint32_t t190 = 117U;

    t190 = (x1389>>(x1390%(x1391!=x1392)));

    if (t190 != 63U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1401 = 393U;
	int64_t x1402 = INT64_MIN;
	uint64_t x1403 = 3019450031305025313LLU;
	uint16_t x1404 = 1739U;
	volatile int32_t t191 = 1904;

    t191 = (x1401>>(x1402%(x1403!=x1404)));

    if (t191 != 393) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1413 = 4LL;
	static uint64_t x1414 = 386149LLU;
	volatile uint16_t x1416 = 2401U;
	int64_t t192 = 305696447676LL;

    t192 = (x1413>>(x1414%(x1415!=x1416)));

    if (t192 != 4LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1417 = UINT16_MAX;
	int16_t x1418 = 1;
	int16_t x1420 = INT16_MAX;
	volatile int32_t t193 = 18627;

    t193 = (x1417>>(x1418%(x1419!=x1420)));

    if (t193 != 65535) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1421 = 0;
	static uint8_t x1422 = 25U;
	int64_t x1423 = -510002766632586LL;
	volatile int8_t x1424 = 0;
	volatile int32_t t194 = 95;

    t194 = (x1421>>(x1422%(x1423!=x1424)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1425 = INT32_MAX;
	volatile uint8_t x1426 = 2U;
	static uint32_t x1427 = UINT32_MAX;
	static uint16_t x1428 = 6U;
	int32_t t195 = INT32_MAX;

    t195 = (x1425>>(x1426%(x1427!=x1428)));

    if (t195 != INT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1433 = 1U;
	int32_t x1434 = 9745863;
	volatile uint16_t x1435 = 5U;
	uint64_t x1436 = 3645784823054993LLU;
	volatile int32_t t196 = -13809;

    t196 = (x1433>>(x1434%(x1435!=x1436)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x1437 = 0;
	int32_t x1439 = -1;
	static int16_t x1440 = INT16_MAX;
	static volatile int32_t t197 = -72;

    t197 = (x1437>>(x1438%(x1439!=x1440)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x1441 = 141LLU;
	uint8_t x1443 = 4U;
	volatile int64_t x1444 = -9LL;
	static volatile uint64_t t198 = 3903275651LLU;

    t198 = (x1441>>(x1442%(x1443!=x1444)));

    if (t198 != 141LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x1453 = INT64_MAX;
	int16_t x1454 = INT16_MIN;
	uint32_t x1455 = 1006U;
	volatile int64_t t199 = INT64_MAX;

    t199 = (x1453>>(x1454%(x1455!=x1456)));

    if (t199 != INT64_MAX) { NG(); } else { ; }
	
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

