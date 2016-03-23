
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

int16_t x2 = INT16_MAX;
uint8_t x16 = UINT8_MAX;
int8_t x67 = -1;
uint16_t x69 = 3157U;
uint32_t x70 = UINT32_MAX;
static int64_t x80 = INT64_MIN;
volatile int8_t x85 = -51;
volatile uint16_t x93 = UINT16_MAX;
uint8_t x94 = 39U;
int32_t t14 = 43;
volatile int32_t x110 = 124;
volatile int64_t x111 = -1LL;
volatile uint32_t t17 = 4370094U;
uint8_t x128 = UINT8_MAX;
int64_t t18 = -4LL;
int16_t x133 = -1;
int64_t x135 = INT64_MAX;
int32_t t19 = -5630356;
uint32_t x148 = 18321U;
uint16_t x152 = UINT16_MAX;
static uint32_t x155 = 56U;
uint64_t x190 = 107LLU;
volatile uint64_t t24 = 756493746283888LLU;
int8_t x197 = -1;
int32_t x206 = 2276757;
int32_t t26 = 104;
int64_t x223 = -1LL;
uint8_t x249 = 1U;
int32_t x250 = 0;
uint32_t x262 = 7U;
volatile int16_t x264 = INT16_MIN;
static volatile uint8_t x265 = 0U;
static volatile uint64_t x266 = 453212LLU;
int8_t x288 = INT8_MIN;
static uint32_t t32 = 1290714210U;
int8_t x289 = -1;
uint64_t x290 = 9302413797748LLU;
int8_t x292 = INT8_MIN;
int16_t x306 = INT16_MAX;
int32_t x320 = INT32_MIN;
static int32_t t37 = -10642827;
uint32_t x345 = UINT32_MAX;
uint16_t x349 = 97U;
uint16_t x350 = 9310U;
int8_t x351 = -14;
uint32_t x366 = 1877U;
static int32_t x383 = -1;
int16_t x431 = -8186;
uint64_t t48 = 31030LLU;
int8_t x440 = INT8_MIN;
uint8_t x445 = UINT8_MAX;
uint16_t x450 = UINT16_MAX;
int8_t x451 = INT8_MAX;
uint64_t t56 = 95LLU;
static int32_t x490 = INT32_MAX;
int64_t x500 = -7669787515150LL;
int8_t x503 = -1;
int16_t x505 = INT16_MIN;
int16_t x508 = -2182;
volatile int64_t t64 = -5478308LL;
volatile int8_t x537 = 31;
static int64_t x545 = -3920802LL;
static volatile uint32_t x547 = 3197464U;
static uint16_t x556 = UINT16_MAX;
volatile int64_t t69 = 1068938913890987224LL;
int8_t x581 = -1;
uint64_t x593 = 3441000853256680LLU;
uint8_t x595 = UINT8_MAX;
int32_t x600 = INT32_MAX;
volatile int64_t t72 = 3890137360548851LL;
uint8_t x609 = UINT8_MAX;
static int64_t x611 = INT64_MIN;
int32_t x623 = -1;
uint32_t x624 = 251U;
volatile int32_t t75 = 1871;
static int16_t x625 = 299;
int32_t t76 = 1;
uint8_t x657 = 58U;
int32_t x658 = 22;
uint16_t x664 = UINT16_MAX;
volatile int64_t t79 = 0LL;
uint32_t x687 = 385526U;
uint16_t x688 = UINT16_MAX;
static uint64_t t81 = 86LLU;
static int8_t x689 = 29;
int32_t x692 = INT32_MIN;
int8_t x694 = 9;
uint8_t x695 = 0U;
static uint64_t x721 = 31749411956LLU;
int16_t x724 = INT16_MAX;
int16_t x725 = -7;
uint32_t x727 = UINT32_MAX;
volatile uint32_t x734 = 341U;
int64_t x735 = INT64_MIN;
static int32_t x741 = -1;
volatile uint64_t t91 = 9200120878438416446LLU;
int16_t x769 = -3;
volatile int32_t t93 = -452193;
int64_t x784 = INT64_MIN;
static volatile int32_t t94 = 4141;
uint32_t x790 = UINT32_MAX;
uint32_t x797 = 1439331U;
static int32_t x800 = -1;
static int8_t x826 = 13;
static int16_t x827 = -1;
volatile uint32_t t99 = 1926826240U;
uint64_t t101 = 230919LLU;
uint64_t t102 = 5332682211LLU;
volatile uint32_t x856 = 309112U;
int8_t x859 = -1;
volatile int32_t t104 = -2821677;
uint32_t t106 = 3U;
uint32_t x873 = 100457U;
uint32_t x886 = 3U;
volatile uint32_t t108 = 9197U;
int16_t x896 = -15;
static int32_t x941 = INT32_MAX;
int64_t x942 = 30LL;
uint32_t t115 = 170923U;
int32_t x975 = INT32_MIN;
int32_t x993 = INT32_MAX;
static volatile uint8_t x1008 = 1U;
uint32_t t122 = 12778854U;
uint8_t x1041 = 0U;
static uint64_t x1042 = 14909360705548418LLU;
uint64_t t124 = 24165296029LLU;
uint64_t x1045 = 1777803LLU;
static int64_t x1047 = INT64_MIN;
static int8_t x1062 = 6;
volatile int64_t t127 = 4930422LL;
static volatile uint16_t x1101 = 580U;
int32_t x1102 = 5895684;
int32_t x1108 = 58257410;
int64_t x1121 = -89082867066935LL;
int16_t x1123 = -26;
uint16_t x1129 = UINT16_MAX;
static uint64_t x1148 = 180454LLU;
uint32_t x1164 = 2U;
static volatile int32_t t135 = 40703106;
volatile int8_t x1171 = INT8_MIN;
volatile uint32_t t137 = 54447U;
int32_t t138 = -6210394;
volatile uint32_t x1190 = UINT32_MAX;
static uint64_t x1202 = 516354368828LLU;
int16_t x1206 = 0;
int64_t x1226 = 7591687216191LL;
volatile int16_t x1229 = -1;
int32_t t144 = 14;
volatile uint64_t t145 = 134981513955663LLU;
static uint32_t x1257 = 522275191U;
int32_t x1275 = 3188316;
int64_t t148 = 5987023875561496LL;
int16_t x1278 = 0;
static int16_t x1280 = INT16_MIN;
int32_t x1284 = INT32_MIN;
volatile uint64_t x1286 = 62530317154LLU;
uint32_t x1292 = 156669152U;
volatile int32_t x1313 = -875368;
int64_t x1315 = 26738472LL;
volatile uint32_t t153 = 11352U;
static volatile uint64_t x1338 = 4029LLU;
volatile int64_t x1343 = 482306912LL;
volatile uint32_t x1358 = 2U;
static uint32_t t158 = 237U;
uint64_t t159 = 570908160027591544LLU;
volatile uint32_t t160 = 5U;
volatile int32_t x1380 = -1;
volatile int64_t t161 = -3608697659006LL;
int64_t x1384 = INT64_MAX;
uint16_t x1396 = 497U;
volatile uint64_t t164 = 4000264909363160038LLU;
int32_t x1423 = INT32_MAX;
static int32_t t167 = 1;
static int64_t t168 = 15LL;
uint32_t t169 = 225506702U;
int64_t x1457 = -9239656252541252LL;
uint16_t x1458 = 24U;
int32_t x1470 = 27;
int64_t x1472 = INT64_MIN;
static uint64_t x1496 = UINT64_MAX;
volatile int32_t t173 = 120;
uint64_t x1508 = 15073661186555LLU;
uint32_t t176 = 9U;
uint16_t x1517 = 0U;
int32_t t178 = 6;
int8_t x1544 = INT8_MIN;
uint16_t x1545 = UINT16_MAX;
int8_t x1546 = INT8_MAX;
int8_t x1555 = 1;
uint64_t t184 = 25464955LLU;
static int64_t x1561 = -1LL;
uint16_t x1564 = 14U;
uint32_t x1589 = UINT32_MAX;
static volatile uint32_t t188 = 1512U;
uint64_t x1610 = 833231478318LLU;
int32_t x1620 = -6534;
int64_t x1628 = INT64_MAX;
uint8_t x1629 = 14U;
int16_t x1631 = -1;
volatile uint32_t t193 = 3794U;
static int64_t x1652 = 3678348LL;
uint8_t x1654 = UINT8_MAX;
static volatile int32_t t196 = 53296337;
uint64_t x1674 = 4376358010727684LLU;
int64_t x1676 = -1LL;
int16_t x1680 = -247;


void f0(void) {
    	uint16_t x1 = 24U;
	uint16_t x3 = UINT16_MAX;
	volatile int32_t x4 = INT32_MIN;
	static int32_t t0 = 3268;

    t0 = (x1*(x2>>(x3!=x4)));

    if (t0 != 393192) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x13 = -1;
	volatile uint16_t x14 = 1U;
	uint32_t x15 = 4690999U;
	volatile int32_t t1 = -247282465;

    t1 = (x13*(x14>>(x15!=x16)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x17 = UINT32_MAX;
	int16_t x18 = INT16_MAX;
	int8_t x19 = 21;
	uint16_t x20 = 21U;
	volatile uint32_t t2 = 3645428U;

    t2 = (x17*(x18>>(x19!=x20)));

    if (t2 != 4294934529U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x25 = -1LL;
	volatile uint8_t x26 = 0U;
	int8_t x27 = -21;
	uint16_t x28 = UINT16_MAX;
	volatile int64_t t3 = -88LL;

    t3 = (x25*(x26>>(x27!=x28)));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x29 = 670U;
	int64_t x30 = 4355675015LL;
	int8_t x31 = INT8_MIN;
	int64_t x32 = INT64_MIN;
	volatile int64_t t4 = -1448359105815367LL;

    t4 = (x29*(x30>>(x31!=x32)));

    if (t4 != 1459151129690LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x33 = INT8_MIN;
	volatile uint16_t x34 = 33U;
	static uint8_t x35 = 82U;
	uint16_t x36 = 1963U;
	volatile int32_t t5 = 3761;

    t5 = (x33*(x34>>(x35!=x36)));

    if (t5 != -2048) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x37 = 34U;
	uint16_t x38 = 1706U;
	uint64_t x39 = UINT64_MAX;
	static uint8_t x40 = UINT8_MAX;
	volatile int32_t t6 = -178314345;

    t6 = (x37*(x38>>(x39!=x40)));

    if (t6 != 29002) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x53 = -1LL;
	volatile int8_t x54 = 0;
	static uint32_t x55 = 580271U;
	int32_t x56 = 38199524;
	volatile int64_t t7 = -1333385988864LL;

    t7 = (x53*(x54>>(x55!=x56)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x61 = 1676766513U;
	int8_t x62 = INT8_MAX;
	int8_t x63 = INT8_MIN;
	volatile uint16_t x64 = UINT16_MAX;
	static uint32_t t8 = 9U;

    t8 = (x61*(x62>>(x63!=x64)));

    if (t8 != 2557075215U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x65 = UINT64_MAX;
	uint8_t x66 = 36U;
	int16_t x68 = INT16_MIN;
	uint64_t t9 = 37675208148197884LLU;

    t9 = (x65*(x66>>(x67!=x68)));

    if (t9 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x71 = 105U;
	static int16_t x72 = INT16_MIN;
	uint32_t t10 = 70U;

    t10 = (x69*(x70>>(x71!=x72)));

    if (t10 != 2147480491U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x77 = UINT64_MAX;
	static int8_t x78 = 5;
	static int64_t x79 = -1007890752492875445LL;
	static uint64_t t11 = 233775528996784LLU;

    t11 = (x77*(x78>>(x79!=x80)));

    if (t11 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x86 = INT16_MAX;
	int16_t x87 = -35;
	static int16_t x88 = 0;
	int32_t t12 = -355048028;

    t12 = (x85*(x86>>(x87!=x88)));

    if (t12 != -835533) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x95 = 3;
	uint32_t x96 = 1034907526U;
	int32_t t13 = 76;

    t13 = (x93*(x94>>(x95!=x96)));

    if (t13 != 1245165) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x97 = INT8_MAX;
	int32_t x98 = 709029;
	int16_t x99 = -1;
	volatile uint64_t x100 = 3668544801297518LLU;

    t14 = (x97*(x98>>(x99!=x100)));

    if (t14 != 45023278) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x109 = 0;
	static volatile uint64_t x112 = 1477520972LLU;
	int32_t t15 = -21;

    t15 = (x109*(x110>>(x111!=x112)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x113 = 0U;
	static uint64_t x114 = 6945437447LLU;
	uint8_t x115 = 7U;
	volatile int16_t x116 = INT16_MAX;
	volatile uint64_t t16 = 26836LLU;

    t16 = (x113*(x114>>(x115!=x116)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x117 = UINT8_MAX;
	uint32_t x118 = 0U;
	int64_t x119 = INT64_MAX;
	volatile int16_t x120 = 0;

    t17 = (x117*(x118>>(x119!=x120)));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x125 = -1LL;
	uint8_t x126 = 108U;
	uint64_t x127 = 1802660LLU;

    t18 = (x125*(x126>>(x127!=x128)));

    if (t18 != -54LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x134 = INT16_MAX;
	uint32_t x136 = 412U;

    t19 = (x133*(x134>>(x135!=x136)));

    if (t19 != -16383) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x145 = 1U;
	uint8_t x146 = UINT8_MAX;
	volatile uint16_t x147 = UINT16_MAX;
	int32_t t20 = -2173;

    t20 = (x145*(x146>>(x147!=x148)));

    if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x149 = INT32_MAX;
	static uint32_t x150 = 993702513U;
	int8_t x151 = -9;
	volatile uint32_t t21 = 54580U;

    t21 = (x149*(x150>>(x151!=x152)));

    if (t21 != 3798116040U) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x153 = 7;
	int64_t x154 = 51580569145704421LL;
	volatile int16_t x156 = INT16_MAX;
	static volatile int64_t t22 = 8920337895190788LL;

    t22 = (x153*(x154>>(x155!=x156)));

    if (t22 != 180531992009965470LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x173 = 3838981U;
	int64_t x174 = 45322931LL;
	uint16_t x175 = 11U;
	int8_t x176 = INT8_MIN;
	static volatile int64_t t23 = -1LL;

    t23 = (x173*(x174>>(x175!=x176)));

    if (t23 != 86996933567165LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x189 = 217236332U;
	static int8_t x191 = -1;
	uint8_t x192 = UINT8_MAX;

    t24 = (x189*(x190>>(x191!=x192)));

    if (t24 != 11513525596LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x198 = INT32_MAX;
	uint8_t x199 = 16U;
	uint32_t x200 = 4129840U;
	volatile int32_t t25 = -374589571;

    t25 = (x197*(x198>>(x199!=x200)));

    if (t25 != -1073741823) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x205 = -1;
	int64_t x207 = INT64_MIN;
	static int16_t x208 = INT16_MAX;

    t26 = (x205*(x206>>(x207!=x208)));

    if (t26 != -1138378) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x221 = -1;
	volatile int16_t x222 = 5;
	int16_t x224 = INT16_MIN;
	int32_t t27 = -519721;

    t27 = (x221*(x222>>(x223!=x224)));

    if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x251 = 7293U;
	static int64_t x252 = INT64_MIN;
	volatile int32_t t28 = -994496;

    t28 = (x249*(x250>>(x251!=x252)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x261 = UINT32_MAX;
	int32_t x263 = INT32_MAX;
	uint32_t t29 = 42991323U;

    t29 = (x261*(x262>>(x263!=x264)));

    if (t29 != 4294967293U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x267 = INT16_MIN;
	volatile uint16_t x268 = 4U;
	volatile uint64_t t30 = 3278035LLU;

    t30 = (x265*(x266>>(x267!=x268)));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x269 = UINT8_MAX;
	volatile uint16_t x270 = 31698U;
	int32_t x271 = INT32_MAX;
	static int16_t x272 = INT16_MAX;
	volatile int32_t t31 = 163053;

    t31 = (x269*(x270>>(x271!=x272)));

    if (t31 != 4041495) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x285 = UINT32_MAX;
	uint16_t x286 = 92U;
	static int32_t x287 = -1;

    t32 = (x285*(x286>>(x287!=x288)));

    if (t32 != 4294967250U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x291 = UINT16_MAX;
	volatile uint64_t t33 = 3921LLU;

    t33 = (x289*(x290>>(x291!=x292)));

    if (t33 != 18446739422502652742LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x293 = UINT32_MAX;
	uint16_t x294 = 1U;
	int32_t x295 = 887927246;
	uint32_t x296 = 3706515U;
	static volatile uint32_t t34 = 501575347U;

    t34 = (x293*(x294>>(x295!=x296)));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x297 = -1LL;
	uint64_t x298 = 4209817534465421708LLU;
	int8_t x299 = 0;
	volatile uint64_t x300 = 14862262881LLU;
	static uint64_t t35 = 669791LLU;

    t35 = (x297*(x298>>(x299!=x300)));

    if (t35 != 16341835306476840762LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint32_t x305 = UINT32_MAX;
	int16_t x307 = INT16_MIN;
	int16_t x308 = 6255;
	volatile uint32_t t36 = 95U;

    t36 = (x305*(x306>>(x307!=x308)));

    if (t36 != 4294950913U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x317 = -11;
	uint8_t x318 = 3U;
	int8_t x319 = INT8_MAX;

    t37 = (x317*(x318>>(x319!=x320)));

    if (t37 != -11) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x329 = INT16_MAX;
	volatile uint8_t x330 = UINT8_MAX;
	int32_t x331 = INT32_MIN;
	static volatile int16_t x332 = -1;
	int32_t t38 = 2;

    t38 = (x329*(x330>>(x331!=x332)));

    if (t38 != 4161409) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x341 = UINT64_MAX;
	uint32_t x342 = 2U;
	static uint16_t x343 = 211U;
	static int32_t x344 = INT32_MIN;
	uint64_t t39 = UINT64_MAX;

    t39 = (x341*(x342>>(x343!=x344)));

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x346 = INT32_MAX;
	static int32_t x347 = INT32_MIN;
	int8_t x348 = -1;
	volatile uint32_t t40 = 99396U;

    t40 = (x345*(x346>>(x347!=x348)));

    if (t40 != 3221225473U) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x352 = 27;
	volatile int32_t t41 = -5;

    t41 = (x349*(x350>>(x351!=x352)));

    if (t41 != 451535) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x365 = -1;
	int16_t x367 = -1;
	int32_t x368 = INT32_MIN;
	uint32_t t42 = 20905U;

    t42 = (x365*(x366>>(x367!=x368)));

    if (t42 != 4294966358U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x373 = INT8_MAX;
	static uint64_t x374 = 4555927743546747LLU;
	uint8_t x375 = 58U;
	int64_t x376 = INT64_MIN;
	static volatile uint64_t t43 = 909820315467LLU;

    t43 = (x373*(x374>>(x375!=x376)));

    if (t43 != 289301411715218371LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x377 = UINT8_MAX;
	static int16_t x378 = 7857;
	uint64_t x379 = 73100800202654LLU;
	uint64_t x380 = 271396270219LLU;
	volatile int32_t t44 = -379;

    t44 = (x377*(x378>>(x379!=x380)));

    if (t44 != 1001640) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x381 = INT64_MAX;
	uint64_t x382 = UINT64_MAX;
	static int64_t x384 = -1LL;
	uint64_t t45 = 225978986435LLU;

    t45 = (x381*(x382>>(x383!=x384)));

    if (t45 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x417 = 1609;
	uint32_t x418 = UINT32_MAX;
	int8_t x419 = INT8_MIN;
	int64_t x420 = -28584286001635555LL;
	volatile uint32_t t46 = 296226491U;

    t46 = (x417*(x418>>(x419!=x420)));

    if (t46 != 2147482039U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x421 = -127759LL;
	static volatile int16_t x422 = 29;
	uint64_t x423 = UINT64_MAX;
	static int8_t x424 = INT8_MIN;
	int64_t t47 = 867853484080624LL;

    t47 = (x421*(x422>>(x423!=x424)));

    if (t47 != -1788626LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x429 = 93;
	static uint64_t x430 = UINT64_MAX;
	int64_t x432 = INT64_MIN;

    t48 = (x429*(x430>>(x431!=x432)));

    if (t48 != 9223372036854775715LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x433 = UINT64_MAX;
	volatile int64_t x434 = INT64_MAX;
	int8_t x435 = INT8_MAX;
	int16_t x436 = -1;
	volatile uint64_t t49 = 5563LLU;

    t49 = (x433*(x434>>(x435!=x436)));

    if (t49 != 13835058055282163713LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x437 = -1;
	uint32_t x438 = 108525U;
	static int32_t x439 = INT32_MAX;
	uint32_t t50 = 3083U;

    t50 = (x437*(x438>>(x439!=x440)));

    if (t50 != 4294913034U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x446 = UINT32_MAX;
	uint32_t x447 = UINT32_MAX;
	int8_t x448 = INT8_MAX;
	volatile uint32_t t51 = 167U;

    t51 = (x445*(x446>>(x447!=x448)));

    if (t51 != 2147483393U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x449 = 4U;
	uint64_t x452 = UINT64_MAX;
	static uint32_t t52 = 511603324U;

    t52 = (x449*(x450>>(x451!=x452)));

    if (t52 != 131068U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x457 = -27;
	uint64_t x458 = 1354522098860721LLU;
	static uint64_t x459 = UINT64_MAX;
	int16_t x460 = INT16_MAX;
	uint64_t t53 = 25071724296LLU;

    t53 = (x457*(x458>>(x459!=x460)));

    if (t53 != 18428458025374931896LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x465 = -1LL;
	volatile int64_t x466 = 17197855286906086LL;
	int64_t x467 = 5679039670077LL;
	int64_t x468 = -302027493LL;
	static int64_t t54 = 7427534926365LL;

    t54 = (x465*(x466>>(x467!=x468)));

    if (t54 != -8598927643453043LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x469 = -57;
	uint16_t x470 = UINT16_MAX;
	int32_t x471 = -1;
	uint32_t x472 = 14714U;
	volatile int32_t t55 = -1117032;

    t55 = (x469*(x470>>(x471!=x472)));

    if (t55 != -1867719) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x485 = 2530839927019540LLU;
	uint16_t x486 = 12U;
	uint8_t x487 = 0U;
	uint64_t x488 = 54344022412LLU;

    t56 = (x485*(x486>>(x487!=x488)));

    if (t56 != 15185039562117240LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x489 = 0U;
	static int8_t x491 = -1;
	static uint8_t x492 = 1U;
	volatile uint32_t t57 = 2337294U;

    t57 = (x489*(x490>>(x491!=x492)));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x493 = 10U;
	volatile int16_t x494 = INT16_MAX;
	int8_t x495 = 40;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t58 = 913401513;

    t58 = (x493*(x494>>(x495!=x496)));

    if (t58 != 163830) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x497 = 3LL;
	int8_t x498 = 16;
	volatile int32_t x499 = INT32_MIN;
	volatile int64_t t59 = 36080880644LL;

    t59 = (x497*(x498>>(x499!=x500)));

    if (t59 != 24LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x501 = UINT16_MAX;
	uint16_t x502 = 4U;
	static int16_t x504 = INT16_MIN;
	int32_t t60 = 110760211;

    t60 = (x501*(x502>>(x503!=x504)));

    if (t60 != 131070) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x506 = 53LLU;
	volatile int16_t x507 = -1;
	volatile uint64_t t61 = 3898LLU;

    t61 = (x505*(x506>>(x507!=x508)));

    if (t61 != 18446744073708699648LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x513 = UINT32_MAX;
	uint16_t x514 = UINT16_MAX;
	int32_t x515 = 7759882;
	volatile uint8_t x516 = 24U;
	uint32_t t62 = 2U;

    t62 = (x513*(x514>>(x515!=x516)));

    if (t62 != 4294934529U) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x517 = INT32_MIN;
	int8_t x518 = 2;
	uint32_t x519 = 838707351U;
	int8_t x520 = INT8_MIN;
	static volatile int32_t t63 = INT32_MIN;

    t63 = (x517*(x518>>(x519!=x520)));

    if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x521 = 241U;
	int64_t x522 = 758101304LL;
	int32_t x523 = INT32_MAX;
	volatile uint64_t x524 = 11959083LLU;

    t64 = (x521*(x522>>(x523!=x524)));

    if (t64 != 91351207132LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x525 = -411843;
	int8_t x526 = 0;
	int8_t x527 = INT8_MIN;
	int64_t x528 = 166482789LL;
	int32_t t65 = -81508;

    t65 = (x525*(x526>>(x527!=x528)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x529 = UINT8_MAX;
	uint32_t x530 = 11U;
	uint32_t x531 = 784317U;
	int64_t x532 = 14720350446329670LL;
	volatile uint32_t t66 = 24305U;

    t66 = (x529*(x530>>(x531!=x532)));

    if (t66 != 1275U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x538 = UINT16_MAX;
	int8_t x539 = INT8_MIN;
	static uint16_t x540 = 5U;
	volatile int32_t t67 = 783;

    t67 = (x537*(x538>>(x539!=x540)));

    if (t67 != 1015777) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x546 = UINT16_MAX;
	static volatile uint16_t x548 = 2163U;
	volatile int64_t t68 = -2949755981233LL;

    t68 = (x545*(x546>>(x547!=x548)));

    if (t68 != -128472919134LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x553 = 110692573093384LL;
	volatile uint8_t x554 = UINT8_MAX;
	static uint16_t x555 = 247U;

    t69 = (x553*(x554>>(x555!=x556)));

    if (t69 != 14057956782859768LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x582 = 0;
	int64_t x583 = 647080203128LL;
	volatile uint16_t x584 = 436U;
	volatile int32_t t70 = -18359;

    t70 = (x581*(x582>>(x583!=x584)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x594 = 37;
	volatile uint32_t x596 = 59U;
	uint64_t t71 = 43979690941044LLU;

    t71 = (x593*(x594>>(x595!=x596)));

    if (t71 != 61938015358620240LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x597 = -16697LL;
	volatile uint32_t x598 = UINT32_MAX;
	int8_t x599 = -1;

    t72 = (x597*(x598>>(x599!=x600)));

    if (t72 != -35856534453959LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x601 = INT8_MIN;
	volatile uint32_t x602 = 1U;
	static uint32_t x603 = 34U;
	static int32_t x604 = INT32_MIN;
	uint32_t t73 = 112191942U;

    t73 = (x601*(x602>>(x603!=x604)));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint8_t x610 = UINT8_MAX;
	static int16_t x612 = -52;
	volatile int32_t t74 = 185;

    t74 = (x609*(x610>>(x611!=x612)));

    if (t74 != 32385) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x621 = 13U;
	uint8_t x622 = UINT8_MAX;

    t75 = (x621*(x622>>(x623!=x624)));

    if (t75 != 1651) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x626 = 2U;
	static uint8_t x627 = UINT8_MAX;
	int16_t x628 = INT16_MIN;

    t76 = (x625*(x626>>(x627!=x628)));

    if (t76 != 299) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x659 = UINT8_MAX;
	int16_t x660 = -1;
	static volatile int32_t t77 = -514010;

    t77 = (x657*(x658>>(x659!=x660)));

    if (t77 != 638) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x661 = 1902LL;
	uint32_t x662 = UINT32_MAX;
	uint32_t x663 = UINT32_MAX;
	int64_t t78 = 17469913LL;

    t78 = (x661*(x662>>(x663!=x664)));

    if (t78 != 4084513896594LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x673 = -1LL;
	volatile uint16_t x674 = 895U;
	volatile int64_t x675 = 0LL;
	uint64_t x676 = 15874579LLU;

    t79 = (x673*(x674>>(x675!=x676)));

    if (t79 != -447LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x677 = INT16_MAX;
	volatile uint64_t x678 = UINT64_MAX;
	volatile uint32_t x679 = UINT32_MAX;
	int64_t x680 = -1LL;
	volatile uint64_t t80 = 104994436816LLU;

    t80 = (x677*(x678>>(x679!=x680)));

    if (t80 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint8_t x685 = UINT8_MAX;
	uint64_t x686 = UINT64_MAX;

    t81 = (x685*(x686>>(x687!=x688)));

    if (t81 != 9223372036854775553LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x690 = 83U;
	volatile int16_t x691 = -13825;
	static volatile uint32_t t82 = 820646838U;

    t82 = (x689*(x690>>(x691!=x692)));

    if (t82 != 1189U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x693 = INT16_MAX;
	int8_t x696 = INT8_MIN;
	static int32_t t83 = 807704;

    t83 = (x693*(x694>>(x695!=x696)));

    if (t83 != 131068) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x705 = -1LL;
	int16_t x706 = INT16_MAX;
	volatile int8_t x707 = INT8_MAX;
	uint16_t x708 = 2927U;
	volatile int64_t t84 = -102012LL;

    t84 = (x705*(x706>>(x707!=x708)));

    if (t84 != -16383LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x717 = 8105196111304560858LLU;
	uint32_t x718 = UINT32_MAX;
	int16_t x719 = -255;
	int64_t x720 = INT64_MAX;
	volatile uint64_t t85 = 1401396008LLU;

    t85 = (x717*(x718>>(x719!=x720)));

    if (t85 != 6060815412089614118LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x722 = INT16_MAX;
	static uint16_t x723 = 2U;
	volatile uint64_t t86 = 16LLU;

    t86 = (x721*(x722>>(x723!=x724)));

    if (t86 != 520150616075148LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint16_t x726 = 5U;
	int64_t x728 = INT64_MIN;
	int32_t t87 = 23;

    t87 = (x725*(x726>>(x727!=x728)));

    if (t87 != -14) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x733 = INT8_MIN;
	volatile uint16_t x736 = 2U;
	volatile uint32_t t88 = 344U;

    t88 = (x733*(x734>>(x735!=x736)));

    if (t88 != 4294945536U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x737 = INT16_MAX;
	volatile uint32_t x738 = UINT32_MAX;
	uint16_t x739 = UINT16_MAX;
	uint32_t x740 = UINT32_MAX;
	uint32_t t89 = 65380390U;

    t89 = (x737*(x738>>(x739!=x740)));

    if (t89 != 2147450881U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x742 = 972516869398LLU;
	uint16_t x743 = 2959U;
	int64_t x744 = INT64_MIN;
	static volatile uint64_t t90 = 47575067634493410LLU;

    t90 = (x741*(x742>>(x743!=x744)));

    if (t90 != 18446743587451116917LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x757 = 28U;
	volatile uint64_t x758 = 186933LLU;
	int32_t x759 = INT32_MIN;
	uint16_t x760 = 3889U;

    t91 = (x757*(x758>>(x759!=x760)));

    if (t91 != 2617048LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x770 = 2U;
	volatile int16_t x771 = 0;
	volatile int64_t x772 = -31072622174093LL;
	int32_t t92 = 0;

    t92 = (x769*(x770>>(x771!=x772)));

    if (t92 != -3) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x773 = INT16_MIN;
	uint8_t x774 = UINT8_MAX;
	int16_t x775 = INT16_MIN;
	uint32_t x776 = UINT32_MAX;

    t93 = (x773*(x774>>(x775!=x776)));

    if (t93 != -4161536) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x781 = -4752;
	uint16_t x782 = 992U;
	uint8_t x783 = 2U;

    t94 = (x781*(x782>>(x783!=x784)));

    if (t94 != -2356992) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x785 = 32926700778LLU;
	static uint16_t x786 = UINT16_MAX;
	uint32_t x787 = UINT32_MAX;
	static int64_t x788 = -28222895520LL;
	uint64_t t95 = 1446721LLU;

    t95 = (x785*(x786>>(x787!=x788)));

    if (t95 != 1078909204392726LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x789 = -835;
	int64_t x791 = 358278990LL;
	int8_t x792 = -1;
	uint32_t t96 = 0U;

    t96 = (x789*(x790>>(x791!=x792)));

    if (t96 != 2147484483U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x798 = 12U;
	static int32_t x799 = -22;
	volatile uint32_t t97 = 933864031U;

    t97 = (x797*(x798>>(x799!=x800)));

    if (t97 != 8635986U) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x813 = 0U;
	int8_t x814 = 0;
	static int64_t x815 = INT64_MIN;
	int16_t x816 = 4808;
	volatile int32_t t98 = 114435787;

    t98 = (x813*(x814>>(x815!=x816)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x825 = 3461U;
	uint8_t x828 = 10U;

    t99 = (x825*(x826>>(x827!=x828)));

    if (t99 != 20766U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x833 = -1;
	static int8_t x834 = INT8_MAX;
	volatile int16_t x835 = -1;
	static uint32_t x836 = 14992665U;
	volatile int32_t t100 = -293481828;

    t100 = (x833*(x834>>(x835!=x836)));

    if (t100 != -63) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x841 = 11;
	uint64_t x842 = 113272208715144LLU;
	int8_t x843 = INT8_MAX;
	int32_t x844 = INT32_MIN;

    t101 = (x841*(x842>>(x843!=x844)));

    if (t101 != 622997147933292LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x849 = 1U;
	uint64_t x850 = 1035328189554535LLU;
	int32_t x851 = INT32_MAX;
	uint32_t x852 = 518629U;

    t102 = (x849*(x850>>(x851!=x852)));

    if (t102 != 517664094777267LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x853 = -4;
	int16_t x854 = 0;
	int16_t x855 = 15;
	int32_t t103 = -7819;

    t103 = (x853*(x854>>(x855!=x856)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x857 = 6666U;
	volatile uint8_t x858 = 28U;
	int32_t x860 = INT32_MIN;

    t104 = (x857*(x858>>(x859!=x860)));

    if (t104 != 93324) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x861 = -3243;
	uint64_t x862 = 579451299402777927LLU;
	int8_t x863 = -4;
	uint32_t x864 = 1008815084U;
	uint64_t t105 = 91237LLU;

    t105 = (x861*(x862>>(x863!=x864)));

    if (t105 != 1203665777582725407LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x865 = 1888U;
	volatile uint8_t x866 = UINT8_MAX;
	volatile int16_t x867 = INT16_MIN;
	int16_t x868 = INT16_MAX;

    t106 = (x865*(x866>>(x867!=x868)));

    if (t106 != 239776U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x874 = 0;
	int64_t x875 = INT64_MIN;
	int64_t x876 = INT64_MAX;
	volatile uint32_t t107 = 6738U;

    t107 = (x873*(x874>>(x875!=x876)));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x885 = INT8_MAX;
	uint32_t x887 = 25030479U;
	volatile int64_t x888 = INT64_MIN;

    t108 = (x885*(x886>>(x887!=x888)));

    if (t108 != 127U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x893 = 45LLU;
	static volatile uint8_t x894 = UINT8_MAX;
	int64_t x895 = INT64_MIN;
	volatile uint64_t t109 = 135451349391690086LLU;

    t109 = (x893*(x894>>(x895!=x896)));

    if (t109 != 5715LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x901 = -10422LL;
	volatile int8_t x902 = 1;
	static int8_t x903 = -16;
	int8_t x904 = INT8_MIN;
	int64_t t110 = 1647128111518746555LL;

    t110 = (x901*(x902>>(x903!=x904)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x905 = 1771613090347744528LL;
	uint8_t x906 = 1U;
	uint64_t x907 = UINT64_MAX;
	int32_t x908 = INT32_MIN;
	int64_t t111 = -6995892LL;

    t111 = (x905*(x906>>(x907!=x908)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x909 = 0U;
	static int64_t x910 = INT64_MAX;
	int64_t x911 = 920LL;
	int32_t x912 = INT32_MIN;
	int64_t t112 = -28223801LL;

    t112 = (x909*(x910>>(x911!=x912)));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x913 = INT16_MIN;
	uint32_t x914 = 42545733U;
	uint64_t x915 = UINT64_MAX;
	static int64_t x916 = -64161724950237546LL;
	uint32_t t113 = 32077U;

    t113 = (x913*(x914>>(x915!=x916)));

    if (t113 != 3010396160U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x943 = INT8_MIN;
	volatile uint32_t x944 = 537792983U;
	volatile int64_t t114 = 78516383LL;

    t114 = (x941*(x942>>(x943!=x944)));

    if (t114 != 32212254705LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x961 = 58U;
	uint32_t x962 = 158810482U;
	int8_t x963 = INT8_MAX;
	uint64_t x964 = UINT64_MAX;

    t115 = (x961*(x962>>(x963!=x964)));

    if (t115 != 310536682U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x973 = 11262;
	uint64_t x974 = 70313LLU;
	volatile uint32_t x976 = 38U;
	uint64_t t116 = 877329LLU;

    t116 = (x973*(x974>>(x975!=x976)));

    if (t116 != 395926872LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x994 = 102047U;
	uint16_t x995 = 3U;
	static int8_t x996 = 47;
	uint32_t t117 = 13331U;

    t117 = (x993*(x994>>(x995!=x996)));

    if (t117 != 2147432625U) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x997 = 879329830148370937LL;
	uint16_t x998 = 5U;
	uint8_t x999 = 11U;
	static int8_t x1000 = -3;
	int64_t t118 = 915299051814106020LL;

    t118 = (x997*(x998>>(x999!=x1000)));

    if (t118 != 1758659660296741874LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x1001 = UINT32_MAX;
	uint64_t x1002 = UINT64_MAX;
	volatile int32_t x1003 = INT32_MIN;
	int16_t x1004 = INT16_MAX;
	static uint64_t t119 = 2218225LLU;

    t119 = (x1001*(x1002>>(x1003!=x1004)));

    if (t119 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x1005 = 0U;
	static uint64_t x1006 = UINT64_MAX;
	volatile int8_t x1007 = INT8_MAX;
	uint64_t t120 = 1607520060463845LLU;

    t120 = (x1005*(x1006>>(x1007!=x1008)));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x1013 = INT16_MIN;
	volatile uint32_t x1014 = 240939378U;
	uint8_t x1015 = 83U;
	uint32_t x1016 = 65340160U;
	volatile uint32_t t121 = 0U;

    t121 = (x1013*(x1014>>(x1015!=x1016)));

    if (t121 != 3819143168U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x1021 = INT32_MIN;
	uint32_t x1022 = UINT32_MAX;
	static uint8_t x1023 = 0U;
	volatile uint8_t x1024 = 4U;

    t122 = (x1021*(x1022>>(x1023!=x1024)));

    if (t122 != 2147483648U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x1033 = 62;
	static int8_t x1034 = INT8_MAX;
	uint64_t x1035 = UINT64_MAX;
	volatile int32_t x1036 = -507827;
	int32_t t123 = 0;

    t123 = (x1033*(x1034>>(x1035!=x1036)));

    if (t123 != 3906) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x1043 = INT64_MAX;
	int16_t x1044 = -25;

    t124 = (x1041*(x1042>>(x1043!=x1044)));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x1046 = 25;
	uint32_t x1048 = 368042U;
	uint64_t t125 = 1439337787236LLU;

    t125 = (x1045*(x1046>>(x1047!=x1048)));

    if (t125 != 21333636LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x1061 = 187627520935971LL;
	int8_t x1063 = INT8_MIN;
	uint8_t x1064 = 1U;
	volatile int64_t t126 = -2024607507638673LL;

    t126 = (x1061*(x1062>>(x1063!=x1064)));

    if (t126 != 562882562807913LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x1073 = INT32_MAX;
	volatile int64_t x1074 = 73496835LL;
	static volatile uint8_t x1075 = 2U;
	static volatile uint16_t x1076 = 28617U;

    t127 = (x1073*(x1074>>(x1075!=x1076)));

    if (t127 != 78916624560636799LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x1081 = -1;
	volatile uint64_t x1082 = 2463137787501405LLU;
	static int16_t x1083 = INT16_MIN;
	int32_t x1084 = 111324305;
	uint64_t t128 = 74959LLU;

    t128 = (x1081*(x1082>>(x1083!=x1084)));

    if (t128 != 18445512504815800914LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x1103 = -1;
	static int64_t x1104 = INT64_MAX;
	static int32_t t129 = -795;

    t129 = (x1101*(x1102>>(x1103!=x1104)));

    if (t129 != 1709748360) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x1105 = INT8_MAX;
	uint8_t x1106 = 2U;
	int8_t x1107 = -1;
	int32_t t130 = 5;

    t130 = (x1105*(x1106>>(x1107!=x1108)));

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x1109 = UINT8_MAX;
	uint8_t x1110 = 18U;
	int32_t x1111 = INT32_MIN;
	int8_t x1112 = -1;
	volatile int32_t t131 = 1691483;

    t131 = (x1109*(x1110>>(x1111!=x1112)));

    if (t131 != 2295) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x1122 = 1591697234502279LLU;
	int16_t x1124 = INT16_MAX;
	static uint64_t t132 = 4LLU;

    t132 = (x1121*(x1122>>(x1123!=x1124)));

    if (t132 != 13601659317870367387LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x1130 = UINT64_MAX;
	volatile uint32_t x1131 = UINT32_MAX;
	int8_t x1132 = INT8_MIN;
	uint64_t t133 = 2072651LLU;

    t133 = (x1129*(x1130>>(x1131!=x1132)));

    if (t133 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x1145 = INT16_MAX;
	uint64_t x1146 = 651035285173874986LLU;
	int32_t x1147 = INT32_MIN;
	uint64_t t134 = 52907244221365LLU;

    t134 = (x1145*(x1146>>(x1147!=x1148)));

    if (t134 != 4018520042059999083LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x1161 = -2641;
	static uint16_t x1162 = 3U;
	volatile int8_t x1163 = INT8_MIN;

    t135 = (x1161*(x1162>>(x1163!=x1164)));

    if (t135 != -2641) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x1165 = 23983U;
	static uint64_t x1166 = 6326920287230179565LLU;
	volatile int64_t x1167 = -1LL;
	volatile int64_t x1168 = -1LL;
	uint64_t t136 = 927377LLU;

    t136 = (x1165*(x1166>>(x1167!=x1168)));

    if (t136 != 14059242380334465795LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x1169 = INT8_MIN;
	uint32_t x1170 = 266600341U;
	static volatile uint16_t x1172 = UINT16_MAX;

    t137 = (x1169*(x1170>>(x1171!=x1172)));

    if (t137 != 117447424U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x1173 = 495;
	uint8_t x1174 = 1U;
	int64_t x1175 = INT64_MIN;
	uint64_t x1176 = UINT64_MAX;

    t138 = (x1173*(x1174>>(x1175!=x1176)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x1181 = 23U;
	uint64_t x1182 = UINT64_MAX;
	int64_t x1183 = INT64_MIN;
	int8_t x1184 = -1;
	volatile uint64_t t139 = 390347865049823982LLU;

    t139 = (x1181*(x1182>>(x1183!=x1184)));

    if (t139 != 9223372036854775785LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x1189 = INT8_MAX;
	int32_t x1191 = 613062457;
	uint8_t x1192 = 87U;
	static uint32_t t140 = 461U;

    t140 = (x1189*(x1190>>(x1191!=x1192)));

    if (t140 != 2147483521U) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x1201 = 698296LLU;
	volatile int8_t x1203 = INT8_MAX;
	volatile int64_t x1204 = 6336723LL;
	volatile uint64_t t141 = 4307011LLU;

    t141 = (x1201*(x1202>>(x1203!=x1204)));

    if (t141 != 180284095167558544LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1205 = 1;
	uint64_t x1207 = UINT64_MAX;
	volatile int32_t x1208 = INT32_MIN;
	int32_t t142 = 15393;

    t142 = (x1205*(x1206>>(x1207!=x1208)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x1225 = 2LL;
	int64_t x1227 = -82502LL;
	uint16_t x1228 = 22U;
	int64_t t143 = -2732608226385021501LL;

    t143 = (x1225*(x1226>>(x1227!=x1228)));

    if (t143 != 7591687216190LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x1230 = 111U;
	volatile uint32_t x1231 = 1U;
	volatile uint8_t x1232 = 10U;

    t144 = (x1229*(x1230>>(x1231!=x1232)));

    if (t144 != -55) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x1253 = -14508LL;
	uint64_t x1254 = 3638389870039909831LLU;
	int64_t x1255 = INT64_MIN;
	volatile int32_t x1256 = INT32_MIN;

    t145 = (x1253*(x1254>>(x1255!=x1256)));

    if (t145 != 4410652208862455676LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x1258 = 6384019600LL;
	uint16_t x1259 = UINT16_MAX;
	uint16_t x1260 = 1092U;
	static volatile int64_t t146 = -143242LL;

    t146 = (x1257*(x1258>>(x1259!=x1260)));

    if (t146 != 1667107527968871800LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1269 = INT32_MIN;
	uint64_t x1270 = 2LLU;
	int64_t x1271 = -1LL;
	int8_t x1272 = INT8_MIN;
	uint64_t t147 = 245359926081LLU;

    t147 = (x1269*(x1270>>(x1271!=x1272)));

    if (t147 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1273 = -1LL;
	static volatile int16_t x1274 = INT16_MAX;
	int32_t x1276 = INT32_MIN;

    t148 = (x1273*(x1274>>(x1275!=x1276)));

    if (t148 != -16383LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x1277 = 423629U;
	int32_t x1279 = INT32_MIN;
	volatile uint32_t t149 = 390U;

    t149 = (x1277*(x1278>>(x1279!=x1280)));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1281 = 5744439U;
	uint32_t x1282 = 16289159U;
	int8_t x1283 = INT8_MIN;
	uint32_t t150 = 8030U;

    t150 = (x1281*(x1282>>(x1283!=x1284)));

    if (t150 != 958490853U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x1285 = 14244592LL;
	int16_t x1287 = 4428;
	int8_t x1288 = 0;
	static volatile uint64_t t151 = 252996349638214LLU;

    t151 = (x1285*(x1286>>(x1287!=x1288)));

    if (t151 != 445359427744665584LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x1289 = INT64_MIN;
	static int8_t x1290 = 0;
	volatile uint16_t x1291 = 5341U;
	int64_t t152 = 78091LL;

    t152 = (x1289*(x1290>>(x1291!=x1292)));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x1314 = 19U;
	int32_t x1316 = 36035;

    t153 = (x1313*(x1314>>(x1315!=x1316)));

    if (t153 != 4287088984U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x1333 = UINT8_MAX;
	uint64_t x1334 = 114805367742979144LLU;
	static int16_t x1335 = INT16_MIN;
	static uint32_t x1336 = UINT32_MAX;
	volatile uint64_t t154 = 14534831LLU;

    t154 = (x1333*(x1334>>(x1335!=x1336)));

    if (t154 != 14637684387229840860LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x1337 = UINT32_MAX;
	int64_t x1339 = INT64_MAX;
	static volatile int8_t x1340 = 1;
	volatile uint64_t t155 = 0LLU;

    t155 = (x1337*(x1338>>(x1339!=x1340)));

    if (t155 != 8650064132130LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x1341 = 217856102LL;
	static volatile uint32_t x1342 = 170U;
	int8_t x1344 = -1;
	volatile int64_t t156 = 5165262378906650LL;

    t156 = (x1341*(x1342>>(x1343!=x1344)));

    if (t156 != 18517768670LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1357 = INT8_MAX;
	volatile int8_t x1359 = -1;
	int32_t x1360 = -1;
	uint32_t t157 = 1525757U;

    t157 = (x1357*(x1358>>(x1359!=x1360)));

    if (t157 != 254U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1365 = INT16_MIN;
	uint32_t x1366 = 3320U;
	int8_t x1367 = INT8_MIN;
	uint8_t x1368 = 38U;

    t158 = (x1365*(x1366>>(x1367!=x1368)));

    if (t158 != 4240572416U) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1369 = INT32_MAX;
	uint64_t x1370 = 826494LLU;
	int8_t x1371 = 0;
	int8_t x1372 = INT8_MIN;

    t159 = (x1369*(x1370>>(x1371!=x1372)));

    if (t159 != 887441174671809LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1373 = 11U;
	static uint32_t x1374 = 317U;
	volatile int16_t x1375 = -43;
	static int32_t x1376 = -14257;

    t160 = (x1373*(x1374>>(x1375!=x1376)));

    if (t160 != 1738U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x1377 = 1U;
	int64_t x1378 = 4058666767729884588LL;
	static int8_t x1379 = INT8_MIN;

    t161 = (x1377*(x1378>>(x1379!=x1380)));

    if (t161 != 2029333383864942294LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1381 = INT8_MIN;
	static uint16_t x1382 = UINT16_MAX;
	volatile int8_t x1383 = -1;
	volatile int32_t t162 = 25;

    t162 = (x1381*(x1382>>(x1383!=x1384)));

    if (t162 != -4194176) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1393 = -1;
	uint8_t x1394 = UINT8_MAX;
	uint8_t x1395 = UINT8_MAX;
	int32_t t163 = 2221;

    t163 = (x1393*(x1394>>(x1395!=x1396)));

    if (t163 != -127) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1397 = UINT64_MAX;
	int64_t x1398 = 15176LL;
	int16_t x1399 = INT16_MIN;
	static int32_t x1400 = -72;

    t164 = (x1397*(x1398>>(x1399!=x1400)));

    if (t164 != 18446744073709544028LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1421 = INT16_MIN;
	static uint32_t x1422 = 115U;
	static int32_t x1424 = INT32_MIN;
	static uint32_t t165 = 140507707U;

    t165 = (x1421*(x1422>>(x1423!=x1424)));

    if (t165 != 4293099520U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1425 = -1;
	static uint16_t x1426 = 10U;
	int8_t x1427 = 12;
	int32_t x1428 = -1;
	volatile int32_t t166 = -3438344;

    t166 = (x1425*(x1426>>(x1427!=x1428)));

    if (t166 != -5) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1433 = INT8_MIN;
	int8_t x1434 = INT8_MAX;
	static int16_t x1435 = INT16_MIN;
	int16_t x1436 = 14704;

    t167 = (x1433*(x1434>>(x1435!=x1436)));

    if (t167 != -8064) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1449 = -1164936LL;
	volatile uint16_t x1450 = 112U;
	int32_t x1451 = INT32_MIN;
	int64_t x1452 = INT64_MAX;

    t168 = (x1449*(x1450>>(x1451!=x1452)));

    if (t168 != -65236416LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1453 = -1;
	uint32_t x1454 = 71929U;
	volatile uint8_t x1455 = 2U;
	int64_t x1456 = 1156145617357698098LL;

    t169 = (x1453*(x1454>>(x1455!=x1456)));

    if (t169 != 4294931332U) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x1459 = 704U;
	uint64_t x1460 = 1786531LLU;
	int64_t t170 = 44237835954778351LL;

    t170 = (x1457*(x1458>>(x1459!=x1460)));

    if (t170 != -110875875030495024LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1465 = -1;
	uint8_t x1466 = 41U;
	volatile uint32_t x1467 = 35U;
	static int32_t x1468 = INT32_MAX;
	int32_t t171 = -78138;

    t171 = (x1465*(x1466>>(x1467!=x1468)));

    if (t171 != -20) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x1469 = -1687LL;
	uint16_t x1471 = 1U;
	volatile int64_t t172 = -6641797636LL;

    t172 = (x1469*(x1470>>(x1471!=x1472)));

    if (t172 != -21931LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1493 = UINT8_MAX;
	uint16_t x1494 = UINT16_MAX;
	static volatile int8_t x1495 = -1;

    t173 = (x1493*(x1494>>(x1495!=x1496)));

    if (t173 != 16711425) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x1501 = INT64_MIN;
	uint64_t x1502 = UINT64_MAX;
	static uint64_t x1503 = 119001251134LLU;
	int16_t x1504 = -1;
	volatile uint64_t t174 = 16602LLU;

    t174 = (x1501*(x1502>>(x1503!=x1504)));

    if (t174 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1505 = 7LLU;
	volatile int32_t x1506 = 2075232;
	static int8_t x1507 = INT8_MAX;
	uint64_t t175 = 27008586LLU;

    t175 = (x1505*(x1506>>(x1507!=x1508)));

    if (t175 != 7263312LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1509 = INT8_MAX;
	uint32_t x1510 = 62613U;
	uint64_t x1511 = UINT64_MAX;
	int16_t x1512 = 0;

    t176 = (x1509*(x1510>>(x1511!=x1512)));

    if (t176 != 3975862U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1513 = UINT32_MAX;
	volatile uint16_t x1514 = 1U;
	static int8_t x1515 = -1;
	static uint16_t x1516 = 0U;
	volatile uint32_t t177 = 181U;

    t177 = (x1513*(x1514>>(x1515!=x1516)));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x1518 = 0U;
	int32_t x1519 = INT32_MIN;
	volatile int64_t x1520 = 7LL;

    t178 = (x1517*(x1518>>(x1519!=x1520)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x1529 = UINT32_MAX;
	volatile uint32_t x1530 = 1958U;
	volatile uint64_t x1531 = 108620617LLU;
	volatile int64_t x1532 = 5940LL;
	uint32_t t179 = 13447U;

    t179 = (x1529*(x1530>>(x1531!=x1532)));

    if (t179 != 4294966317U) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x1537 = 222291LLU;
	static int16_t x1538 = 5121;
	static int8_t x1539 = INT8_MIN;
	static volatile uint32_t x1540 = 20U;
	volatile uint64_t t180 = 506832474329LLU;

    t180 = (x1537*(x1538>>(x1539!=x1540)));

    if (t180 != 569064960LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint32_t x1541 = 215558U;
	uint32_t x1542 = UINT32_MAX;
	int32_t x1543 = -1;
	volatile uint32_t t181 = 137352U;

    t181 = (x1541*(x1542>>(x1543!=x1544)));

    if (t181 != 4294751738U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1547 = 1U;
	int32_t x1548 = -5;
	int32_t t182 = -33526913;

    t182 = (x1545*(x1546>>(x1547!=x1548)));

    if (t182 != 4128705) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x1553 = INT8_MAX;
	uint16_t x1554 = 107U;
	volatile int64_t x1556 = INT64_MIN;
	static volatile int32_t t183 = -5;

    t183 = (x1553*(x1554>>(x1555!=x1556)));

    if (t183 != 6731) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x1557 = INT32_MIN;
	uint64_t x1558 = UINT64_MAX;
	volatile int16_t x1559 = -1;
	int32_t x1560 = INT32_MAX;

    t184 = (x1557*(x1558>>(x1559!=x1560)));

    if (t184 != 2147483648LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1562 = 0U;
	static volatile int8_t x1563 = INT8_MAX;
	int64_t t185 = -193183617065165LL;

    t185 = (x1561*(x1562>>(x1563!=x1564)));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x1565 = -1;
	uint16_t x1566 = 1646U;
	uint64_t x1567 = 386848195348009LLU;
	int16_t x1568 = INT16_MIN;
	static int32_t t186 = -42406747;

    t186 = (x1565*(x1566>>(x1567!=x1568)));

    if (t186 != -823) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x1585 = -1;
	uint32_t x1586 = 57240U;
	volatile int16_t x1587 = INT16_MIN;
	static int16_t x1588 = INT16_MIN;
	uint32_t t187 = 4804245U;

    t187 = (x1585*(x1586>>(x1587!=x1588)));

    if (t187 != 4294910056U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x1590 = 144651;
	volatile uint32_t x1591 = 1U;
	uint8_t x1592 = 7U;

    t188 = (x1589*(x1590>>(x1591!=x1592)));

    if (t188 != 4294894971U) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x1593 = INT16_MIN;
	static uint64_t x1594 = UINT64_MAX;
	volatile int8_t x1595 = -1;
	int32_t x1596 = -1;
	static uint64_t t189 = 6750LLU;

    t189 = (x1593*(x1594>>(x1595!=x1596)));

    if (t189 != 32768LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1609 = -1;
	static int32_t x1611 = -1017526743;
	static int8_t x1612 = 0;
	uint64_t t190 = 22177LLU;

    t190 = (x1609*(x1610>>(x1611!=x1612)));

    if (t190 != 18446743657093812457LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1617 = -1LL;
	uint32_t x1618 = 64681733U;
	static int32_t x1619 = -1;
	int64_t t191 = 243225110801LL;

    t191 = (x1617*(x1618>>(x1619!=x1620)));

    if (t191 != -32340866LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x1625 = INT16_MIN;
	uint16_t x1626 = 3394U;
	int32_t x1627 = INT32_MAX;
	static int32_t t192 = 4;

    t192 = (x1625*(x1626>>(x1627!=x1628)));

    if (t192 != -55607296) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x1630 = UINT32_MAX;
	volatile int64_t x1632 = INT64_MIN;

    t193 = (x1629*(x1630>>(x1631!=x1632)));

    if (t193 != 4294967282U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1633 = INT32_MIN;
	uint64_t x1634 = UINT64_MAX;
	int64_t x1635 = -1LL;
	int32_t x1636 = 1;
	volatile uint64_t t194 = 137605071465LLU;

    t194 = (x1633*(x1634>>(x1635!=x1636)));

    if (t194 != 2147483648LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1649 = 15729753957858539LLU;
	uint8_t x1650 = 1U;
	int32_t x1651 = -9002077;
	uint64_t t195 = 3269038358621727282LLU;

    t195 = (x1649*(x1650>>(x1651!=x1652)));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1653 = 1;
	int32_t x1655 = INT32_MAX;
	int64_t x1656 = INT64_MIN;

    t196 = (x1653*(x1654>>(x1655!=x1656)));

    if (t196 != 127) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1661 = 1223U;
	static int16_t x1662 = 4551;
	volatile int32_t x1663 = INT32_MAX;
	volatile uint64_t x1664 = 49794LLU;
	static int32_t t197 = -1908;

    t197 = (x1661*(x1662>>(x1663!=x1664)));

    if (t197 != 2782325) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1673 = 848U;
	int64_t x1675 = 498579016880LL;
	uint64_t t198 = 13972042856663379LLU;

    t198 = (x1673*(x1674>>(x1675!=x1676)));

    if (t198 != 1855575796548538016LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x1677 = INT8_MAX;
	int16_t x1678 = INT16_MAX;
	static int64_t x1679 = 95948460547LL;
	static int32_t t199 = -386290684;

    t199 = (x1677*(x1678>>(x1679!=x1680)));

    if (t199 != 2080641) { NG(); } else { ; }
	
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

