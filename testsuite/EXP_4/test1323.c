
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

static uint64_t x3 = 2LLU;
int16_t x4 = INT16_MAX;
static int8_t x5 = INT8_MIN;
int8_t x11 = -23;
volatile int16_t x13 = INT16_MIN;
volatile int8_t x27 = -1;
uint16_t x42 = UINT16_MAX;
int64_t x46 = 18640350774403LL;
int16_t x66 = 2;
int32_t t11 = -1;
int16_t x75 = -1;
volatile int32_t t12 = -435146698;
uint64_t x87 = UINT64_MAX;
static int8_t x101 = INT8_MIN;
static int16_t x112 = 414;
int32_t x114 = 2;
volatile int32_t x119 = -1;
int16_t x123 = 0;
volatile uint16_t x125 = 15U;
int64_t x128 = INT64_MAX;
uint32_t x129 = UINT32_MAX;
uint8_t x131 = 10U;
uint16_t x132 = 1782U;
int64_t x133 = INT64_MIN;
volatile uint32_t x143 = 19U;
volatile int32_t x169 = -1;
volatile int8_t x181 = INT8_MIN;
volatile int32_t t28 = -1456;
static uint64_t x190 = UINT64_MAX;
volatile int32_t t31 = 100;
int16_t x204 = INT16_MIN;
uint64_t x213 = UINT64_MAX;
uint8_t x225 = 8U;
uint8_t x226 = UINT8_MAX;
uint16_t x230 = UINT16_MAX;
int32_t t36 = 15;
volatile int32_t x245 = INT32_MIN;
static volatile uint8_t x248 = 2U;
static uint64_t x261 = 260530737195LLU;
static volatile uint16_t x262 = 1U;
static volatile int32_t t40 = -2;
static uint16_t x268 = 2713U;
int16_t x269 = INT16_MIN;
int16_t x270 = INT16_MAX;
int32_t t43 = 110011612;
int64_t x283 = INT64_MAX;
volatile int32_t t44 = 88434;
uint8_t x286 = 4U;
int16_t x290 = INT16_MAX;
static int32_t x300 = INT32_MIN;
static uint64_t x301 = UINT64_MAX;
int32_t x308 = -1;
int64_t x321 = INT64_MIN;
static uint64_t x331 = 1377150326833090270LLU;
static int32_t t51 = 0;
uint8_t x340 = 124U;
int32_t t52 = 856844026;
static uint8_t x349 = 101U;
int16_t x363 = 26;
uint8_t x364 = 47U;
int64_t x365 = -1LL;
int32_t t57 = -191;
static int32_t x397 = -82;
uint64_t x398 = UINT64_MAX;
int8_t x399 = -6;
int64_t x400 = 5493LL;
uint8_t x406 = UINT8_MAX;
int16_t x426 = 2;
uint16_t x432 = 5951U;
int64_t x439 = -1LL;
int8_t x440 = 6;
uint32_t x444 = 879U;
int64_t x445 = INT64_MIN;
static int8_t x448 = INT8_MAX;
static uint8_t x459 = 1U;
int16_t x464 = -1;
int8_t x468 = INT8_MIN;
int16_t x470 = 0;
int32_t x471 = -46;
uint32_t x475 = UINT32_MAX;
static uint64_t x489 = UINT64_MAX;
uint64_t x509 = 10460861596LLU;
uint32_t x515 = 17057972U;
volatile int32_t t78 = 1;
uint32_t x517 = 59713890U;
uint16_t x527 = 1U;
static uint16_t x539 = 3U;
uint8_t x546 = 10U;
int64_t x547 = -27891863LL;
static uint64_t x552 = 905460566327056LLU;
uint8_t x554 = UINT8_MAX;
int32_t t87 = -14;
int16_t x558 = 55;
int32_t t88 = 43;
uint32_t x563 = 1081057398U;
static int64_t x573 = 99605382450LL;
volatile int32_t t93 = 0;
volatile uint16_t x589 = UINT16_MAX;
int8_t x591 = INT8_MAX;
uint64_t x599 = UINT64_MAX;
static int8_t x600 = -2;
volatile uint32_t x610 = 1U;
int64_t x614 = INT64_MAX;
int16_t x631 = INT16_MAX;
static int64_t x642 = INT64_MAX;
int8_t x657 = 34;
static volatile uint32_t x670 = 4951858U;
static int64_t x679 = 7192971LL;
int16_t x689 = 252;
static int64_t x696 = INT64_MIN;
static int16_t x700 = -10401;
uint8_t x715 = 1U;
int8_t x724 = INT8_MIN;
static int32_t t112 = 144615;
uint32_t x729 = 117442825U;
volatile int32_t t114 = 1041935;
volatile int32_t t115 = -39424;
volatile int32_t x737 = INT32_MIN;
static uint16_t x738 = 4U;
uint16_t x771 = UINT16_MAX;
static uint8_t x780 = 1U;
uint8_t x789 = 1U;
uint32_t x810 = UINT32_MAX;
int64_t x811 = INT64_MIN;
static uint32_t x812 = UINT32_MAX;
volatile uint16_t x817 = 26098U;
int64_t x823 = -56413LL;
uint16_t x842 = 59U;
int64_t x843 = INT64_MIN;
int32_t t133 = -7;
static int8_t x865 = -2;
static int16_t x871 = 4;
int16_t x876 = INT16_MIN;
volatile uint8_t x882 = 0U;
volatile int32_t t141 = 43866669;
volatile int32_t t142 = 48896;
static uint32_t x938 = UINT32_MAX;
static uint32_t x946 = 1658U;
volatile int64_t x979 = 4051239692LL;
int32_t x980 = -397;
volatile int32_t t152 = 368599653;
int32_t t153 = -212;
int64_t x993 = INT64_MAX;
static volatile int64_t x995 = -429641316497394353LL;
int16_t x1007 = INT16_MIN;
uint16_t x1008 = 1829U;
uint64_t x1010 = 38117009LLU;
int32_t x1014 = INT32_MAX;
uint8_t x1015 = 13U;
uint8_t x1022 = 14U;
int32_t t160 = 442584;
uint32_t x1031 = UINT32_MAX;
static int32_t t161 = 282;
volatile int16_t x1040 = -6838;
int8_t x1049 = 40;
int64_t x1051 = INT64_MIN;
volatile uint16_t x1053 = 47U;
volatile uint64_t x1066 = 193336LLU;
int32_t t166 = 1637102;
uint16_t x1076 = UINT16_MAX;
volatile int32_t t168 = 937835;
int64_t x1081 = INT64_MAX;
int32_t t170 = -30;
uint16_t x1101 = 26018U;
volatile int32_t t171 = 1;
uint64_t x1108 = UINT64_MAX;
int32_t t173 = 8926396;
int16_t x1128 = INT16_MAX;
int32_t t174 = -1;
int16_t x1137 = INT16_MIN;
int32_t x1139 = 27297390;
static int64_t x1141 = INT64_MAX;
volatile uint64_t x1144 = 393149354439LLU;
int32_t t177 = 1;
int16_t x1156 = -3544;
static int32_t x1160 = -1;
int8_t x1181 = 1;
int8_t x1183 = -1;
int16_t x1200 = -1;
uint16_t x1202 = UINT16_MAX;
volatile int32_t t185 = -366;
static uint8_t x1205 = 2U;
uint8_t x1211 = 2U;
int8_t x1218 = 11;
static int64_t x1227 = -117269537127588778LL;
static int32_t t189 = -60;
volatile int32_t t190 = 634;
volatile int32_t t191 = -2;
int8_t x1245 = -1;
int32_t t194 = -3341;
int32_t x1264 = INT32_MIN;
uint16_t x1267 = 5U;
int16_t x1273 = INT16_MIN;
uint8_t x1294 = UINT8_MAX;
uint8_t x1295 = 2U;


void f0(void) {
    	int32_t x1 = -1;
	static uint64_t x2 = 148250LLU;
	int32_t t0 = 0;

    t0 = (x1!=(x2>>(x3!=x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x6 = 2U;
	uint64_t x7 = UINT64_MAX;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -7;

    t1 = (x5!=(x6>>(x7!=x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 7U;
	uint8_t x10 = UINT8_MAX;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 373288;

    t2 = (x9!=(x10>>(x11!=x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x14 = UINT64_MAX;
	int8_t x15 = -1;
	int64_t x16 = -1LL;
	static volatile int32_t t3 = 44;

    t3 = (x13!=(x14>>(x15!=x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	int16_t x18 = 14;
	int64_t x19 = 222421189161219092LL;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 930648;

    t4 = (x17!=(x18>>(x19!=x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 904693101U;
	static volatile uint8_t x22 = 18U;
	int8_t x23 = -1;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 428807;

    t5 = (x21!=(x22>>(x23!=x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint8_t x25 = 11U;
	volatile int16_t x26 = 0;
	int64_t x28 = -1LL;
	volatile int32_t t6 = -17;

    t6 = (x25!=(x26>>(x27!=x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = -1;
	volatile uint16_t x30 = 240U;
	uint8_t x31 = 13U;
	int64_t x32 = INT64_MAX;
	static int32_t t7 = -865;

    t7 = (x29!=(x30>>(x31!=x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x41 = INT8_MIN;
	int64_t x43 = INT64_MIN;
	int8_t x44 = 52;
	static volatile int32_t t8 = -11;

    t8 = (x41!=(x42>>(x43!=x44)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = INT32_MAX;
	uint64_t x47 = 2682363615LLU;
	static int16_t x48 = -539;
	int32_t t9 = 1025738;

    t9 = (x45!=(x46>>(x47!=x48)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x65 = INT16_MAX;
	int8_t x67 = INT8_MAX;
	int8_t x68 = -46;
	volatile int32_t t10 = -10107;

    t10 = (x65!=(x66>>(x67!=x68)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x69 = INT8_MAX;
	static uint64_t x70 = UINT64_MAX;
	int8_t x71 = -1;
	static int16_t x72 = INT16_MIN;

    t11 = (x69!=(x70>>(x71!=x72)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x73 = UINT8_MAX;
	volatile uint8_t x74 = 59U;
	int8_t x76 = INT8_MIN;

    t12 = (x73!=(x74>>(x75!=x76)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x85 = 1888LL;
	volatile uint16_t x86 = 14U;
	static int32_t x88 = -1;
	volatile int32_t t13 = 19143;

    t13 = (x85!=(x86>>(x87!=x88)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x102 = 0U;
	int8_t x103 = INT8_MIN;
	uint16_t x104 = 20506U;
	int32_t t14 = 114576;

    t14 = (x101!=(x102>>(x103!=x104)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x109 = INT64_MAX;
	static uint32_t x110 = UINT32_MAX;
	int8_t x111 = INT8_MIN;
	volatile int32_t t15 = -120835393;

    t15 = (x109!=(x110>>(x111!=x112)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x113 = INT32_MIN;
	int32_t x115 = INT32_MIN;
	static uint8_t x116 = 42U;
	volatile int32_t t16 = -1341638;

    t16 = (x113!=(x114>>(x115!=x116)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int32_t x117 = 2;
	uint8_t x118 = 29U;
	int8_t x120 = INT8_MIN;
	int32_t t17 = 495811;

    t17 = (x117!=(x118>>(x119!=x120)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x121 = 1592579608925951239LLU;
	int8_t x122 = INT8_MAX;
	int8_t x124 = INT8_MAX;
	volatile int32_t t18 = 33443;

    t18 = (x121!=(x122>>(x123!=x124)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x126 = 34653LLU;
	volatile int16_t x127 = INT16_MAX;
	static int32_t t19 = 444323406;

    t19 = (x125!=(x126>>(x127!=x128)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x130 = INT64_MAX;
	volatile int32_t t20 = -298;

    t20 = (x129!=(x130>>(x131!=x132)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x134 = 48568U;
	int64_t x135 = 34529697269LL;
	int64_t x136 = -1LL;
	volatile int32_t t21 = 0;

    t21 = (x133!=(x134>>(x135!=x136)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x141 = INT8_MIN;
	uint16_t x142 = 103U;
	volatile int16_t x144 = INT16_MIN;
	int32_t t22 = 187617832;

    t22 = (x141!=(x142>>(x143!=x144)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x145 = 4U;
	int16_t x146 = INT16_MAX;
	int16_t x147 = INT16_MAX;
	int32_t x148 = 11678;
	int32_t t23 = -7;

    t23 = (x145!=(x146>>(x147!=x148)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x153 = 987861141LLU;
	uint32_t x154 = 253617U;
	static int16_t x155 = -1;
	int64_t x156 = -1LL;
	int32_t t24 = -51378686;

    t24 = (x153!=(x154>>(x155!=x156)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x157 = INT8_MIN;
	volatile int32_t x158 = 207807908;
	int64_t x159 = INT64_MIN;
	volatile uint32_t x160 = 41U;
	volatile int32_t t25 = -63905706;

    t25 = (x157!=(x158>>(x159!=x160)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x161 = -11560405914033560LL;
	static int32_t x162 = 100166;
	volatile int8_t x163 = INT8_MIN;
	int16_t x164 = 3516;
	static volatile int32_t t26 = 616;

    t26 = (x161!=(x162>>(x163!=x164)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x170 = 14;
	uint32_t x171 = 1U;
	uint64_t x172 = UINT64_MAX;
	int32_t t27 = 328033;

    t27 = (x169!=(x170>>(x171!=x172)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x182 = 622972974283044LLU;
	int64_t x183 = -17581098521164404LL;
	uint16_t x184 = UINT16_MAX;

    t28 = (x181!=(x182>>(x183!=x184)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x185 = 7733146211LL;
	uint32_t x186 = 426845670U;
	volatile int16_t x187 = 0;
	int64_t x188 = -1LL;
	volatile int32_t t29 = -8048;

    t29 = (x185!=(x186>>(x187!=x188)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x189 = -12583915507356LL;
	int8_t x191 = -1;
	volatile int16_t x192 = INT16_MIN;
	int32_t t30 = 345583;

    t30 = (x189!=(x190>>(x191!=x192)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x197 = 1359;
	volatile uint32_t x198 = 672072852U;
	volatile int8_t x199 = 0;
	static int64_t x200 = INT64_MAX;

    t31 = (x197!=(x198>>(x199!=x200)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x201 = INT8_MIN;
	uint16_t x202 = 9165U;
	uint16_t x203 = 14U;
	int32_t t32 = 48823574;

    t32 = (x201!=(x202>>(x203!=x204)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x209 = -4;
	uint32_t x210 = 1030947U;
	uint8_t x211 = UINT8_MAX;
	int16_t x212 = -1;
	int32_t t33 = 12126;

    t33 = (x209!=(x210>>(x211!=x212)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x214 = 17855U;
	uint32_t x215 = 11U;
	uint8_t x216 = 87U;
	int32_t t34 = 1;

    t34 = (x213!=(x214>>(x215!=x216)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x227 = UINT32_MAX;
	int8_t x228 = -1;
	static int32_t t35 = 90277;

    t35 = (x225!=(x226>>(x227!=x228)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x229 = 379U;
	static int16_t x231 = -2;
	uint32_t x232 = UINT32_MAX;

    t36 = (x229!=(x230>>(x231!=x232)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x246 = UINT64_MAX;
	int32_t x247 = 7125050;
	static volatile int32_t t37 = 4278;

    t37 = (x245!=(x246>>(x247!=x248)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x253 = INT32_MIN;
	uint16_t x254 = 8U;
	static uint16_t x255 = UINT16_MAX;
	uint32_t x256 = UINT32_MAX;
	static volatile int32_t t38 = 12;

    t38 = (x253!=(x254>>(x255!=x256)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x257 = UINT64_MAX;
	int8_t x258 = 59;
	int8_t x259 = INT8_MIN;
	int32_t x260 = 12591233;
	int32_t t39 = -533802776;

    t39 = (x257!=(x258>>(x259!=x260)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x263 = -1;
	int16_t x264 = INT16_MIN;

    t40 = (x261!=(x262>>(x263!=x264)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x265 = 121U;
	static int8_t x266 = 0;
	static int32_t x267 = INT32_MIN;
	volatile int32_t t41 = 40142;

    t41 = (x265!=(x266>>(x267!=x268)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x271 = -1;
	static int16_t x272 = INT16_MAX;
	volatile int32_t t42 = -30;

    t42 = (x269!=(x270>>(x271!=x272)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x277 = -1;
	static volatile uint8_t x278 = 45U;
	volatile int8_t x279 = 5;
	int16_t x280 = -97;

    t43 = (x277!=(x278>>(x279!=x280)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x281 = 9U;
	static volatile uint32_t x282 = 426U;
	int16_t x284 = -2803;

    t44 = (x281!=(x282>>(x283!=x284)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x285 = INT16_MIN;
	volatile int32_t x287 = -30;
	int64_t x288 = -1LL;
	int32_t t45 = 59;

    t45 = (x285!=(x286>>(x287!=x288)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x289 = -1;
	int16_t x291 = -65;
	uint16_t x292 = 188U;
	volatile int32_t t46 = 149820394;

    t46 = (x289!=(x290>>(x291!=x292)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x297 = 58;
	static int64_t x298 = INT64_MAX;
	int32_t x299 = INT32_MAX;
	int32_t t47 = -5740234;

    t47 = (x297!=(x298>>(x299!=x300)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x302 = 109U;
	int8_t x303 = INT8_MAX;
	int32_t x304 = INT32_MAX;
	volatile int32_t t48 = -146;

    t48 = (x301!=(x302>>(x303!=x304)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x305 = 859;
	int64_t x306 = 44457LL;
	int64_t x307 = INT64_MIN;
	static volatile int32_t t49 = 179588880;

    t49 = (x305!=(x306>>(x307!=x308)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x322 = 1;
	int32_t x323 = INT32_MAX;
	volatile int64_t x324 = 11LL;
	static int32_t t50 = -40654517;

    t50 = (x321!=(x322>>(x323!=x324)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x329 = -42851907961480780LL;
	int32_t x330 = INT32_MAX;
	int8_t x332 = INT8_MIN;

    t51 = (x329!=(x330>>(x331!=x332)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x337 = INT32_MAX;
	static int16_t x338 = 0;
	int16_t x339 = -1729;

    t52 = (x337!=(x338>>(x339!=x340)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x350 = UINT16_MAX;
	int16_t x351 = 3;
	static volatile int8_t x352 = INT8_MIN;
	int32_t t53 = -3;

    t53 = (x349!=(x350>>(x351!=x352)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x361 = UINT64_MAX;
	int8_t x362 = INT8_MAX;
	volatile int32_t t54 = 1;

    t54 = (x361!=(x362>>(x363!=x364)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x366 = 14;
	int32_t x367 = -1;
	uint32_t x368 = 10564U;
	volatile int32_t t55 = -2;

    t55 = (x365!=(x366>>(x367!=x368)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x369 = INT16_MIN;
	volatile uint64_t x370 = 48285111173LLU;
	int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MAX;
	int32_t t56 = -1;

    t56 = (x369!=(x370>>(x371!=x372)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint8_t x385 = 3U;
	volatile uint16_t x386 = 43U;
	uint32_t x387 = 190U;
	static int16_t x388 = INT16_MAX;

    t57 = (x385!=(x386>>(x387!=x388)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t t58 = -439031547;

    t58 = (x397!=(x398>>(x399!=x400)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x405 = UINT8_MAX;
	int16_t x407 = INT16_MIN;
	uint16_t x408 = UINT16_MAX;
	static int32_t t59 = -11668;

    t59 = (x405!=(x406>>(x407!=x408)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x417 = UINT16_MAX;
	int32_t x418 = 0;
	static int8_t x419 = INT8_MIN;
	static int8_t x420 = -1;
	int32_t t60 = 4923;

    t60 = (x417!=(x418>>(x419!=x420)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x421 = -1LL;
	uint32_t x422 = 30837U;
	int64_t x423 = INT64_MIN;
	uint64_t x424 = UINT64_MAX;
	volatile int32_t t61 = -1;

    t61 = (x421!=(x422>>(x423!=x424)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x425 = INT8_MAX;
	int64_t x427 = INT64_MIN;
	int32_t x428 = -1;
	volatile int32_t t62 = 61;

    t62 = (x425!=(x426>>(x427!=x428)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x429 = -283930834LL;
	volatile uint32_t x430 = UINT32_MAX;
	static int8_t x431 = INT8_MAX;
	int32_t t63 = 261010;

    t63 = (x429!=(x430>>(x431!=x432)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x437 = INT32_MIN;
	uint16_t x438 = 18U;
	int32_t t64 = -90;

    t64 = (x437!=(x438>>(x439!=x440)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x441 = -1;
	volatile uint8_t x442 = UINT8_MAX;
	static volatile int8_t x443 = INT8_MIN;
	volatile int32_t t65 = -19566672;

    t65 = (x441!=(x442>>(x443!=x444)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x446 = 3U;
	static uint16_t x447 = UINT16_MAX;
	volatile int32_t t66 = 1639120;

    t66 = (x445!=(x446>>(x447!=x448)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x457 = 7094U;
	volatile uint32_t x458 = 16184U;
	volatile uint32_t x460 = UINT32_MAX;
	static volatile int32_t t67 = -1;

    t67 = (x457!=(x458>>(x459!=x460)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x461 = 19;
	uint64_t x462 = 9158910995059949LLU;
	uint8_t x463 = 33U;
	int32_t t68 = -1;

    t68 = (x461!=(x462>>(x463!=x464)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x465 = UINT8_MAX;
	static uint32_t x466 = 32472301U;
	int16_t x467 = 3520;
	volatile int32_t t69 = 67026605;

    t69 = (x465!=(x466>>(x467!=x468)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x469 = 145643892;
	int64_t x472 = INT64_MAX;
	int32_t t70 = -93310;

    t70 = (x469!=(x470>>(x471!=x472)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x473 = -1;
	uint64_t x474 = UINT64_MAX;
	uint8_t x476 = 3U;
	static volatile int32_t t71 = -8995;

    t71 = (x473!=(x474>>(x475!=x476)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x485 = INT8_MIN;
	static volatile uint8_t x486 = UINT8_MAX;
	int16_t x487 = INT16_MIN;
	static uint16_t x488 = 43U;
	static volatile int32_t t72 = -110;

    t72 = (x485!=(x486>>(x487!=x488)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x490 = 164284946338448871LL;
	int64_t x491 = INT64_MAX;
	uint64_t x492 = UINT64_MAX;
	volatile int32_t t73 = 16952223;

    t73 = (x489!=(x490>>(x491!=x492)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x493 = INT16_MIN;
	volatile uint8_t x494 = 3U;
	int64_t x495 = -13937354838170LL;
	int8_t x496 = -2;
	volatile int32_t t74 = -1;

    t74 = (x493!=(x494>>(x495!=x496)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x497 = UINT32_MAX;
	volatile uint32_t x498 = 150479296U;
	uint8_t x499 = 42U;
	int8_t x500 = INT8_MAX;
	volatile int32_t t75 = 2;

    t75 = (x497!=(x498>>(x499!=x500)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x505 = -1;
	volatile uint32_t x506 = 806292U;
	uint16_t x507 = UINT16_MAX;
	int32_t x508 = INT32_MIN;
	static volatile int32_t t76 = 786;

    t76 = (x505!=(x506>>(x507!=x508)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x510 = 249729LLU;
	int16_t x511 = INT16_MAX;
	uint16_t x512 = 6582U;
	int32_t t77 = -3;

    t77 = (x509!=(x510>>(x511!=x512)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x513 = 10248LL;
	uint64_t x514 = 13421116746LLU;
	int32_t x516 = INT32_MIN;

    t78 = (x513!=(x514>>(x515!=x516)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x518 = INT16_MAX;
	int8_t x519 = INT8_MIN;
	uint8_t x520 = UINT8_MAX;
	int32_t t79 = 64;

    t79 = (x517!=(x518>>(x519!=x520)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x521 = UINT8_MAX;
	volatile int32_t x522 = 61497941;
	int64_t x523 = -1LL;
	int64_t x524 = INT64_MIN;
	volatile int32_t t80 = 49833;

    t80 = (x521!=(x522>>(x523!=x524)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x525 = INT16_MIN;
	int32_t x526 = 745126695;
	uint64_t x528 = UINT64_MAX;
	volatile int32_t t81 = 1;

    t81 = (x525!=(x526>>(x527!=x528)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x529 = -3686LL;
	uint16_t x530 = 58U;
	int32_t x531 = INT32_MIN;
	static volatile int16_t x532 = 1;
	volatile int32_t t82 = 145057;

    t82 = (x529!=(x530>>(x531!=x532)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x537 = UINT8_MAX;
	uint64_t x538 = 17944334003765192LLU;
	static int8_t x540 = -14;
	volatile int32_t t83 = -6;

    t83 = (x537!=(x538>>(x539!=x540)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x541 = 519258U;
	static int64_t x542 = INT64_MAX;
	uint16_t x543 = UINT16_MAX;
	volatile int64_t x544 = INT64_MAX;
	volatile int32_t t84 = 196;

    t84 = (x541!=(x542>>(x543!=x544)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x545 = 23;
	volatile int32_t x548 = 1;
	volatile int32_t t85 = 209;

    t85 = (x545!=(x546>>(x547!=x548)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x549 = -1LL;
	int16_t x550 = 3635;
	uint8_t x551 = 34U;
	static volatile int32_t t86 = -482;

    t86 = (x549!=(x550>>(x551!=x552)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x553 = -27;
	int16_t x555 = INT16_MIN;
	int32_t x556 = -1;

    t87 = (x553!=(x554>>(x555!=x556)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x557 = -22;
	int16_t x559 = -1;
	int8_t x560 = INT8_MIN;

    t88 = (x557!=(x558>>(x559!=x560)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x561 = 1U;
	int16_t x562 = 0;
	static int8_t x564 = 42;
	static volatile int32_t t89 = 0;

    t89 = (x561!=(x562>>(x563!=x564)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x565 = INT8_MAX;
	uint16_t x566 = UINT16_MAX;
	volatile int32_t x567 = 91;
	int32_t x568 = -520;
	int32_t t90 = 0;

    t90 = (x565!=(x566>>(x567!=x568)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x569 = INT32_MIN;
	static uint64_t x570 = 483631673042212331LLU;
	int16_t x571 = INT16_MIN;
	int16_t x572 = 214;
	int32_t t91 = -19023663;

    t91 = (x569!=(x570>>(x571!=x572)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x574 = UINT64_MAX;
	int8_t x575 = INT8_MIN;
	static uint16_t x576 = UINT16_MAX;
	volatile int32_t t92 = 257;

    t92 = (x573!=(x574>>(x575!=x576)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x585 = -1;
	uint64_t x586 = 6436668149661453415LLU;
	uint64_t x587 = UINT64_MAX;
	int32_t x588 = -1;

    t93 = (x585!=(x586>>(x587!=x588)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x590 = UINT64_MAX;
	static int32_t x592 = -1;
	int32_t t94 = 2428;

    t94 = (x589!=(x590>>(x591!=x592)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x597 = INT8_MIN;
	volatile uint16_t x598 = 11U;
	int32_t t95 = -198;

    t95 = (x597!=(x598>>(x599!=x600)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x609 = -163;
	int16_t x611 = INT16_MIN;
	int16_t x612 = 81;
	static int32_t t96 = 880206908;

    t96 = (x609!=(x610>>(x611!=x612)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x613 = INT32_MIN;
	static int64_t x615 = 1530079277359LL;
	int8_t x616 = INT8_MIN;
	int32_t t97 = -1;

    t97 = (x613!=(x614>>(x615!=x616)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x617 = INT16_MAX;
	static uint32_t x618 = UINT32_MAX;
	int16_t x619 = INT16_MIN;
	uint16_t x620 = 2U;
	int32_t t98 = -8300544;

    t98 = (x617!=(x618>>(x619!=x620)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x621 = 46;
	int16_t x622 = INT16_MAX;
	int64_t x623 = INT64_MIN;
	volatile uint16_t x624 = 943U;
	int32_t t99 = 132411;

    t99 = (x621!=(x622>>(x623!=x624)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x629 = 0;
	static int32_t x630 = 14536373;
	volatile uint16_t x632 = 738U;
	volatile int32_t t100 = -401731;

    t100 = (x629!=(x630>>(x631!=x632)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x637 = -496980LL;
	uint64_t x638 = 393950994269LLU;
	volatile uint16_t x639 = UINT16_MAX;
	int8_t x640 = 0;
	static volatile int32_t t101 = 28473;

    t101 = (x637!=(x638>>(x639!=x640)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x641 = 2600LL;
	int32_t x643 = -6177;
	int8_t x644 = INT8_MIN;
	int32_t t102 = 4;

    t102 = (x641!=(x642>>(x643!=x644)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x658 = 5U;
	static int64_t x659 = INT64_MIN;
	static int16_t x660 = -1;
	volatile int32_t t103 = -12;

    t103 = (x657!=(x658>>(x659!=x660)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x669 = 2U;
	static volatile int64_t x671 = INT64_MIN;
	static volatile int32_t x672 = 1;
	volatile int32_t t104 = 27598;

    t104 = (x669!=(x670>>(x671!=x672)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x677 = INT64_MAX;
	volatile uint32_t x678 = 1U;
	int64_t x680 = INT64_MAX;
	int32_t t105 = 121;

    t105 = (x677!=(x678>>(x679!=x680)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x690 = UINT16_MAX;
	int64_t x691 = -1LL;
	static volatile int32_t x692 = -1;
	static int32_t t106 = -714923981;

    t106 = (x689!=(x690>>(x691!=x692)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x693 = 465105595902357LLU;
	uint32_t x694 = UINT32_MAX;
	int8_t x695 = INT8_MIN;
	int32_t t107 = -156;

    t107 = (x693!=(x694>>(x695!=x696)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x697 = -1;
	int8_t x698 = 34;
	static int8_t x699 = INT8_MIN;
	int32_t t108 = -13421226;

    t108 = (x697!=(x698>>(x699!=x700)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x705 = -1LL;
	uint32_t x706 = UINT32_MAX;
	uint64_t x707 = UINT64_MAX;
	static int8_t x708 = INT8_MIN;
	volatile int32_t t109 = -2358;

    t109 = (x705!=(x706>>(x707!=x708)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x709 = 124U;
	static volatile int64_t x710 = INT64_MAX;
	uint32_t x711 = UINT32_MAX;
	static int64_t x712 = INT64_MIN;
	static volatile int32_t t110 = -15329;

    t110 = (x709!=(x710>>(x711!=x712)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x713 = 14U;
	uint32_t x714 = 1643620120U;
	int64_t x716 = -1LL;
	int32_t t111 = -4093;

    t111 = (x713!=(x714>>(x715!=x716)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x721 = UINT16_MAX;
	uint16_t x722 = 15U;
	int64_t x723 = -1LL;

    t112 = (x721!=(x722>>(x723!=x724)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint16_t x725 = 2201U;
	static int16_t x726 = 40;
	volatile uint8_t x727 = 1U;
	int32_t x728 = -1;
	volatile int32_t t113 = 7630;

    t113 = (x725!=(x726>>(x727!=x728)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x730 = UINT64_MAX;
	uint32_t x731 = UINT32_MAX;
	uint32_t x732 = 410338U;

    t114 = (x729!=(x730>>(x731!=x732)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x733 = UINT16_MAX;
	volatile uint16_t x734 = 250U;
	volatile int8_t x735 = INT8_MIN;
	uint64_t x736 = 56851LLU;

    t115 = (x733!=(x734>>(x735!=x736)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x739 = INT8_MAX;
	int8_t x740 = -1;
	volatile int32_t t116 = -479810681;

    t116 = (x737!=(x738>>(x739!=x740)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x741 = INT64_MAX;
	uint16_t x742 = UINT16_MAX;
	volatile int64_t x743 = INT64_MAX;
	volatile uint16_t x744 = 3U;
	volatile int32_t t117 = -191031860;

    t117 = (x741!=(x742>>(x743!=x744)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x745 = 12502511558LL;
	int32_t x746 = INT32_MAX;
	static int16_t x747 = INT16_MIN;
	int8_t x748 = -1;
	volatile int32_t t118 = -2;

    t118 = (x745!=(x746>>(x747!=x748)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x749 = INT64_MIN;
	static uint16_t x750 = 253U;
	int8_t x751 = INT8_MAX;
	volatile int64_t x752 = -1LL;
	volatile int32_t t119 = -568657043;

    t119 = (x749!=(x750>>(x751!=x752)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x757 = INT16_MIN;
	uint16_t x758 = UINT16_MAX;
	int16_t x759 = -1;
	int32_t x760 = -1807505;
	int32_t t120 = 5571;

    t120 = (x757!=(x758>>(x759!=x760)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x769 = 104U;
	uint16_t x770 = 25U;
	uint64_t x772 = UINT64_MAX;
	volatile int32_t t121 = -1523978;

    t121 = (x769!=(x770>>(x771!=x772)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x777 = UINT64_MAX;
	static int8_t x778 = 1;
	static int32_t x779 = -28035415;
	static int32_t t122 = -11910606;

    t122 = (x777!=(x778>>(x779!=x780)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x790 = INT32_MAX;
	int16_t x791 = INT16_MIN;
	int8_t x792 = -7;
	volatile int32_t t123 = 10672;

    t123 = (x789!=(x790>>(x791!=x792)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x801 = -259;
	int64_t x802 = 382LL;
	volatile int16_t x803 = INT16_MAX;
	static int32_t x804 = -1;
	volatile int32_t t124 = 198;

    t124 = (x801!=(x802>>(x803!=x804)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x809 = -28;
	volatile int32_t t125 = -128326948;

    t125 = (x809!=(x810>>(x811!=x812)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x818 = UINT32_MAX;
	int64_t x819 = INT64_MIN;
	int8_t x820 = -1;
	int32_t t126 = -2187;

    t126 = (x817!=(x818>>(x819!=x820)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x821 = 0;
	uint64_t x822 = UINT64_MAX;
	int64_t x824 = INT64_MAX;
	int32_t t127 = 123;

    t127 = (x821!=(x822>>(x823!=x824)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x825 = -114678027064632LL;
	uint32_t x826 = 8U;
	int32_t x827 = -25484116;
	int8_t x828 = INT8_MAX;
	int32_t t128 = -85335;

    t128 = (x825!=(x826>>(x827!=x828)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x829 = INT32_MAX;
	static int8_t x830 = INT8_MAX;
	uint16_t x831 = 1U;
	volatile int16_t x832 = -401;
	int32_t t129 = -281362;

    t129 = (x829!=(x830>>(x831!=x832)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x841 = INT32_MIN;
	static int32_t x844 = -427352;
	int32_t t130 = -3964;

    t130 = (x841!=(x842>>(x843!=x844)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x845 = 2805U;
	uint8_t x846 = UINT8_MAX;
	volatile uint8_t x847 = 6U;
	int64_t x848 = -1LL;
	int32_t t131 = 134;

    t131 = (x845!=(x846>>(x847!=x848)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x853 = -1;
	static uint16_t x854 = UINT16_MAX;
	static int16_t x855 = 27;
	int32_t x856 = 2489925;
	volatile int32_t t132 = 1082;

    t132 = (x853!=(x854>>(x855!=x856)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x857 = 8071385U;
	int32_t x858 = INT32_MAX;
	int64_t x859 = INT64_MIN;
	int64_t x860 = -1LL;

    t133 = (x857!=(x858>>(x859!=x860)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x866 = 0U;
	volatile uint16_t x867 = UINT16_MAX;
	volatile int32_t x868 = INT32_MIN;
	int32_t t134 = -14512;

    t134 = (x865!=(x866>>(x867!=x868)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x869 = INT64_MIN;
	uint8_t x870 = 0U;
	static int32_t x872 = INT32_MAX;
	volatile int32_t t135 = -70;

    t135 = (x869!=(x870>>(x871!=x872)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x873 = UINT32_MAX;
	uint64_t x874 = UINT64_MAX;
	uint8_t x875 = 0U;
	int32_t t136 = -52935367;

    t136 = (x873!=(x874>>(x875!=x876)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x877 = INT16_MAX;
	static uint32_t x878 = UINT32_MAX;
	uint64_t x879 = 53637066334525389LLU;
	int16_t x880 = INT16_MAX;
	int32_t t137 = -14;

    t137 = (x877!=(x878>>(x879!=x880)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x881 = 1;
	volatile int32_t x883 = INT32_MAX;
	static uint32_t x884 = 35441692U;
	int32_t t138 = -74816313;

    t138 = (x881!=(x882>>(x883!=x884)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x885 = 225585U;
	static volatile int16_t x886 = 16284;
	volatile int8_t x887 = 1;
	int16_t x888 = INT16_MIN;
	volatile int32_t t139 = 110;

    t139 = (x885!=(x886>>(x887!=x888)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x889 = -7726;
	volatile uint32_t x890 = UINT32_MAX;
	uint8_t x891 = UINT8_MAX;
	int64_t x892 = INT64_MIN;
	int32_t t140 = 8;

    t140 = (x889!=(x890>>(x891!=x892)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x901 = -1871857LL;
	uint32_t x902 = UINT32_MAX;
	int8_t x903 = INT8_MIN;
	static int16_t x904 = INT16_MIN;

    t141 = (x901!=(x902>>(x903!=x904)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x905 = INT32_MIN;
	int8_t x906 = 13;
	volatile uint32_t x907 = UINT32_MAX;
	static int32_t x908 = -1;

    t142 = (x905!=(x906>>(x907!=x908)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x929 = 1U;
	int32_t x930 = INT32_MAX;
	static int64_t x931 = 754LL;
	uint16_t x932 = 129U;
	volatile int32_t t143 = 25;

    t143 = (x929!=(x930>>(x931!=x932)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x933 = INT64_MAX;
	uint64_t x934 = UINT64_MAX;
	int32_t x935 = INT32_MIN;
	int64_t x936 = INT64_MIN;
	volatile int32_t t144 = 1461;

    t144 = (x933!=(x934>>(x935!=x936)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x937 = 18688U;
	uint16_t x939 = 241U;
	uint16_t x940 = UINT16_MAX;
	volatile int32_t t145 = -79;

    t145 = (x937!=(x938>>(x939!=x940)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x941 = INT32_MAX;
	static volatile uint32_t x942 = 33U;
	static uint16_t x943 = UINT16_MAX;
	int64_t x944 = -3788320LL;
	static volatile int32_t t146 = 516663877;

    t146 = (x941!=(x942>>(x943!=x944)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x945 = -1;
	volatile int64_t x947 = -817453LL;
	int64_t x948 = -1LL;
	static volatile int32_t t147 = -969873;

    t147 = (x945!=(x946>>(x947!=x948)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x949 = -1;
	static int16_t x950 = 60;
	uint8_t x951 = 7U;
	int8_t x952 = -1;
	int32_t t148 = 1612;

    t148 = (x949!=(x950>>(x951!=x952)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x961 = INT32_MIN;
	uint64_t x962 = 7LLU;
	static uint16_t x963 = 25439U;
	int32_t x964 = -1;
	static int32_t t149 = -3260;

    t149 = (x961!=(x962>>(x963!=x964)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x969 = 0U;
	uint8_t x970 = 3U;
	uint64_t x971 = UINT64_MAX;
	int32_t x972 = -9;
	int32_t t150 = -33354769;

    t150 = (x969!=(x970>>(x971!=x972)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x977 = 498328583;
	volatile int32_t x978 = INT32_MAX;
	static int32_t t151 = -120830784;

    t151 = (x977!=(x978>>(x979!=x980)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x981 = 48U;
	uint16_t x982 = 1046U;
	int32_t x983 = INT32_MAX;
	uint8_t x984 = UINT8_MAX;

    t152 = (x981!=(x982>>(x983!=x984)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x985 = INT16_MAX;
	static uint16_t x986 = 22U;
	int16_t x987 = 5;
	int16_t x988 = INT16_MIN;

    t153 = (x985!=(x986>>(x987!=x988)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x989 = 217396047301567226LLU;
	int32_t x990 = 1;
	uint16_t x991 = 23U;
	int8_t x992 = 1;
	int32_t t154 = 1334658;

    t154 = (x989!=(x990>>(x991!=x992)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x994 = 20;
	uint16_t x996 = 636U;
	int32_t t155 = -376;

    t155 = (x993!=(x994>>(x995!=x996)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x997 = 2U;
	int64_t x998 = 41611587LL;
	int32_t x999 = INT32_MIN;
	volatile int8_t x1000 = -1;
	int32_t t156 = 9533949;

    t156 = (x997!=(x998>>(x999!=x1000)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1005 = INT16_MIN;
	uint16_t x1006 = 0U;
	int32_t t157 = -59125;

    t157 = (x1005!=(x1006>>(x1007!=x1008)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x1009 = UINT64_MAX;
	uint64_t x1011 = UINT64_MAX;
	volatile int32_t x1012 = INT32_MIN;
	int32_t t158 = 43;

    t158 = (x1009!=(x1010>>(x1011!=x1012)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x1013 = -1;
	volatile int16_t x1016 = INT16_MIN;
	volatile int32_t t159 = -27;

    t159 = (x1013!=(x1014>>(x1015!=x1016)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x1021 = -1;
	uint64_t x1023 = 5395536010590863099LLU;
	static int32_t x1024 = -50110;

    t160 = (x1021!=(x1022>>(x1023!=x1024)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x1029 = INT32_MIN;
	int8_t x1030 = 1;
	uint64_t x1032 = UINT64_MAX;

    t161 = (x1029!=(x1030>>(x1031!=x1032)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x1037 = -156045525803396LL;
	uint8_t x1038 = 28U;
	uint8_t x1039 = UINT8_MAX;
	volatile int32_t t162 = -21;

    t162 = (x1037!=(x1038>>(x1039!=x1040)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x1041 = -1;
	volatile uint8_t x1042 = UINT8_MAX;
	static int64_t x1043 = -5168457494LL;
	volatile int16_t x1044 = INT16_MIN;
	static int32_t t163 = 73;

    t163 = (x1041!=(x1042>>(x1043!=x1044)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x1050 = 1;
	int16_t x1052 = 48;
	volatile int32_t t164 = 55095;

    t164 = (x1049!=(x1050>>(x1051!=x1052)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x1054 = INT16_MAX;
	volatile uint8_t x1055 = 3U;
	static uint32_t x1056 = UINT32_MAX;
	volatile int32_t t165 = 6394;

    t165 = (x1053!=(x1054>>(x1055!=x1056)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1065 = -136821;
	int8_t x1067 = -1;
	static uint8_t x1068 = 0U;

    t166 = (x1065!=(x1066>>(x1067!=x1068)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1073 = -1;
	uint8_t x1074 = 3U;
	int8_t x1075 = INT8_MAX;
	int32_t t167 = 1;

    t167 = (x1073!=(x1074>>(x1075!=x1076)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x1077 = UINT32_MAX;
	uint64_t x1078 = UINT64_MAX;
	uint32_t x1079 = 5717U;
	static int16_t x1080 = -1569;

    t168 = (x1077!=(x1078>>(x1079!=x1080)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1082 = UINT8_MAX;
	static int32_t x1083 = -1;
	uint16_t x1084 = 3U;
	int32_t t169 = -39;

    t169 = (x1081!=(x1082>>(x1083!=x1084)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1097 = INT8_MAX;
	uint32_t x1098 = 14572U;
	int16_t x1099 = -1;
	uint8_t x1100 = UINT8_MAX;

    t170 = (x1097!=(x1098>>(x1099!=x1100)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1102 = INT8_MAX;
	uint64_t x1103 = UINT64_MAX;
	uint32_t x1104 = 496241186U;

    t171 = (x1101!=(x1102>>(x1103!=x1104)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x1105 = INT64_MIN;
	static uint16_t x1106 = UINT16_MAX;
	static uint16_t x1107 = UINT16_MAX;
	static int32_t t172 = 12634;

    t172 = (x1105!=(x1106>>(x1107!=x1108)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1121 = INT16_MIN;
	uint16_t x1122 = UINT16_MAX;
	int32_t x1123 = INT32_MAX;
	int64_t x1124 = -1664627287LL;

    t173 = (x1121!=(x1122>>(x1123!=x1124)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1125 = INT32_MAX;
	volatile uint16_t x1126 = UINT16_MAX;
	volatile int64_t x1127 = -1LL;

    t174 = (x1125!=(x1126>>(x1127!=x1128)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x1129 = INT32_MAX;
	static volatile uint8_t x1130 = UINT8_MAX;
	uint8_t x1131 = 56U;
	int8_t x1132 = 1;
	volatile int32_t t175 = 1;

    t175 = (x1129!=(x1130>>(x1131!=x1132)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x1138 = 6395996U;
	volatile uint32_t x1140 = UINT32_MAX;
	volatile int32_t t176 = 914;

    t176 = (x1137!=(x1138>>(x1139!=x1140)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x1142 = 189LLU;
	uint8_t x1143 = 43U;

    t177 = (x1141!=(x1142>>(x1143!=x1144)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1153 = 0LL;
	static uint16_t x1154 = 3U;
	static int64_t x1155 = -176165LL;
	volatile int32_t t178 = 8020;

    t178 = (x1153!=(x1154>>(x1155!=x1156)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1157 = INT64_MIN;
	int64_t x1158 = INT64_MAX;
	uint16_t x1159 = UINT16_MAX;
	static int32_t t179 = 81460172;

    t179 = (x1157!=(x1158>>(x1159!=x1160)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1169 = 0LL;
	uint8_t x1170 = 0U;
	uint8_t x1171 = 1U;
	uint16_t x1172 = 1U;
	static int32_t t180 = 15806;

    t180 = (x1169!=(x1170>>(x1171!=x1172)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1177 = 40U;
	volatile uint32_t x1178 = UINT32_MAX;
	volatile int16_t x1179 = INT16_MIN;
	int32_t x1180 = 7;
	int32_t t181 = -31808;

    t181 = (x1177!=(x1178>>(x1179!=x1180)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1182 = INT64_MAX;
	uint32_t x1184 = 16138U;
	int32_t t182 = -753632887;

    t182 = (x1181!=(x1182>>(x1183!=x1184)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1189 = INT64_MAX;
	static volatile uint16_t x1190 = UINT16_MAX;
	static uint8_t x1191 = 15U;
	int64_t x1192 = INT64_MIN;
	volatile int32_t t183 = 10;

    t183 = (x1189!=(x1190>>(x1191!=x1192)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1197 = 5888748LLU;
	uint32_t x1198 = UINT32_MAX;
	int32_t x1199 = INT32_MIN;
	static volatile int32_t t184 = -672;

    t184 = (x1197!=(x1198>>(x1199!=x1200)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1201 = 44264893LLU;
	uint64_t x1203 = 833750161LLU;
	static volatile uint64_t x1204 = 5940570816079269715LLU;

    t185 = (x1201!=(x1202>>(x1203!=x1204)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x1206 = 0;
	uint32_t x1207 = 9U;
	uint64_t x1208 = 46381366782350002LLU;
	volatile int32_t t186 = 338798122;

    t186 = (x1205!=(x1206>>(x1207!=x1208)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x1209 = -1;
	uint64_t x1210 = UINT64_MAX;
	int32_t x1212 = INT32_MIN;
	int32_t t187 = -1;

    t187 = (x1209!=(x1210>>(x1211!=x1212)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x1217 = INT16_MIN;
	int64_t x1219 = INT64_MIN;
	volatile int16_t x1220 = -1;
	static volatile int32_t t188 = -116;

    t188 = (x1217!=(x1218>>(x1219!=x1220)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x1225 = 54454LL;
	uint16_t x1226 = 28056U;
	static int8_t x1228 = -1;

    t189 = (x1225!=(x1226>>(x1227!=x1228)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint64_t x1229 = 75106045326356LLU;
	uint32_t x1230 = 14360U;
	int32_t x1231 = 30;
	static int16_t x1232 = 23;

    t190 = (x1229!=(x1230>>(x1231!=x1232)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x1237 = UINT8_MAX;
	volatile int64_t x1238 = INT64_MAX;
	uint8_t x1239 = 62U;
	int16_t x1240 = INT16_MAX;

    t191 = (x1237!=(x1238>>(x1239!=x1240)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1241 = INT64_MAX;
	uint16_t x1242 = 23U;
	static int16_t x1243 = -6;
	int8_t x1244 = INT8_MIN;
	volatile int32_t t192 = 1;

    t192 = (x1241!=(x1242>>(x1243!=x1244)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1246 = 51;
	static int16_t x1247 = 0;
	static int16_t x1248 = -71;
	volatile int32_t t193 = 211876;

    t193 = (x1245!=(x1246>>(x1247!=x1248)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1249 = INT64_MAX;
	int64_t x1250 = 385535233515127LL;
	int16_t x1251 = INT16_MAX;
	uint16_t x1252 = UINT16_MAX;

    t194 = (x1249!=(x1250>>(x1251!=x1252)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x1261 = -1;
	int32_t x1262 = INT32_MAX;
	static uint32_t x1263 = 0U;
	static int32_t t195 = -19;

    t195 = (x1261!=(x1262>>(x1263!=x1264)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1265 = -1;
	int16_t x1266 = INT16_MAX;
	int16_t x1268 = -53;
	volatile int32_t t196 = -247875010;

    t196 = (x1265!=(x1266>>(x1267!=x1268)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1269 = INT16_MIN;
	static uint8_t x1270 = 22U;
	volatile uint64_t x1271 = 5628735091287LLU;
	int16_t x1272 = INT16_MIN;
	volatile int32_t t197 = 441359;

    t197 = (x1269!=(x1270>>(x1271!=x1272)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1274 = 7U;
	int16_t x1275 = INT16_MIN;
	int16_t x1276 = -1;
	volatile int32_t t198 = -512;

    t198 = (x1273!=(x1274>>(x1275!=x1276)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1293 = 47U;
	static uint8_t x1296 = 0U;
	volatile int32_t t199 = 6468;

    t199 = (x1293!=(x1294>>(x1295!=x1296)));

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

