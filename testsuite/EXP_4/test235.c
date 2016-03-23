
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

static uint8_t x2 = 0U;
int8_t x121 = 1;
uint64_t x124 = 15053984LLU;
uint16_t x146 = UINT16_MAX;
int8_t x147 = 0;
uint64_t x148 = 0LLU;
int16_t x161 = INT16_MAX;
volatile int32_t x164 = -1;
uint64_t t4 = 1115171590184973LLU;
int16_t x232 = INT16_MIN;
static volatile int32_t t7 = 61380;
int64_t x411 = 3LL;
volatile int64_t x433 = INT64_MAX;
volatile uint32_t x441 = UINT32_MAX;
int32_t x613 = 3;
volatile int32_t x614 = INT32_MIN;
uint8_t x685 = 38U;
int32_t t13 = 7;
static volatile int32_t x774 = 0;
static int64_t x834 = INT64_MIN;
static int16_t x836 = INT16_MAX;
volatile int64_t x860 = -1LL;
uint64_t x957 = 22082240574362LLU;
static int64_t x958 = INT64_MAX;
int16_t x959 = -1;
volatile uint64_t t18 = 134860336LLU;
uint64_t x975 = UINT64_MAX;
static volatile int64_t x1207 = INT64_MIN;
int8_t x1259 = -1;
uint64_t x1281 = 14LLU;
volatile int8_t x1283 = 1;
uint8_t x1287 = 0U;
static int32_t t23 = -7209941;
static uint8_t x1361 = 55U;
int32_t x1362 = -1;
uint64_t x1743 = UINT64_MAX;
int16_t x2008 = -1;
int32_t t29 = 13;
int32_t x2228 = INT32_MIN;
uint32_t x2271 = UINT32_MAX;
uint64_t x2407 = UINT64_MAX;
uint32_t x2662 = 2032921179U;
int32_t x2777 = INT32_MAX;
static volatile int32_t t35 = INT32_MAX;
uint8_t x3250 = 0U;
static int64_t x3431 = INT64_MIN;
volatile uint32_t x3663 = UINT32_MAX;
int32_t x3746 = 115;
uint64_t x3751 = 43613LLU;
int64_t x3756 = -1LL;
uint64_t x3801 = 1357083404939221LLU;
int16_t x3822 = -1;
volatile uint64_t t51 = 893754796075LLU;
uint8_t x3947 = UINT8_MAX;
uint8_t x3948 = UINT8_MAX;
uint32_t t53 = 44906U;
static uint16_t x4262 = UINT16_MAX;
static int8_t x4264 = 0;
int64_t x4336 = -1LL;
static volatile int32_t x4446 = INT32_MAX;
static int8_t x4448 = INT8_MIN;
int16_t x4657 = INT16_MAX;
static volatile int16_t x4660 = -1;
volatile uint32_t x4717 = UINT32_MAX;
volatile uint16_t x4778 = UINT16_MAX;
volatile int16_t x4780 = INT16_MIN;
volatile uint32_t t65 = UINT32_MAX;
static int64_t x4998 = INT64_MIN;
volatile uint64_t x5087 = UINT64_MAX;
volatile int8_t x5325 = 61;
static uint64_t x5327 = UINT64_MAX;
volatile int8_t x5328 = 12;
uint64_t x5329 = 371292LLU;
int64_t x5815 = -1LL;
uint16_t x6009 = 62U;
volatile int8_t x6010 = INT8_MIN;
volatile int32_t t74 = -25;
int16_t x6050 = -1;
uint16_t x6386 = 0U;
uint32_t x6387 = UINT32_MAX;
int32_t t77 = 392476895;
volatile uint16_t x6396 = 14U;
uint8_t x6772 = 5U;
int32_t t79 = 650;
uint64_t x6855 = 4LLU;
static volatile int32_t t81 = 1;
static int8_t x6935 = INT8_MAX;
volatile int64_t x7014 = -1LL;
uint64_t x7015 = UINT64_MAX;
volatile uint32_t t84 = 4765293U;
uint8_t x7317 = 2U;
int32_t t87 = -467982;
int64_t x7375 = -1LL;
volatile int32_t x7376 = -1;
volatile uint32_t t88 = 2U;
uint16_t x7489 = 1391U;
static int16_t x7490 = -1733;
int16_t x7491 = -1;
static int64_t x7719 = -1LL;
volatile int32_t t93 = -3;
int16_t x7959 = -1;
int64_t x7969 = INT64_MAX;
uint64_t x8108 = UINT64_MAX;
int64_t x8298 = INT64_MIN;
uint8_t x8397 = 4U;
static uint64_t t101 = UINT64_MAX;
int64_t x8697 = INT64_MAX;
volatile int64_t t104 = INT64_MAX;
volatile int8_t x8731 = -1;
int8_t x8786 = 0;
int8_t x8865 = INT8_MAX;
static uint8_t x8866 = 0U;
volatile uint32_t t112 = 31096151U;
int64_t x9105 = 24141LL;
int64_t x9254 = -84476280LL;
int16_t x9255 = INT16_MIN;
int16_t x9256 = INT16_MIN;
static uint32_t x9313 = UINT32_MAX;
int16_t x9364 = -1;
int64_t x9445 = INT64_MAX;
uint32_t x9456 = 390640U;
volatile int8_t x9467 = INT8_MIN;
int8_t x9468 = INT8_MIN;
uint64_t t123 = UINT64_MAX;
int8_t x9528 = INT8_MIN;
uint32_t x9544 = UINT32_MAX;
int16_t x9573 = 3;
int64_t x9575 = INT64_MAX;
volatile uint32_t x9599 = 716249666U;
static int32_t t127 = -2;
uint64_t t128 = 7733051856850LLU;
static uint8_t x9737 = 83U;
volatile uint16_t x9937 = UINT16_MAX;
int64_t x10169 = 34LL;
static volatile int64_t t133 = -204465505181099LL;
static volatile uint64_t x10273 = 6009027482694238LLU;
static uint16_t x10609 = 58U;
uint64_t x10834 = UINT64_MAX;
volatile uint8_t x10862 = 0U;
int8_t x10864 = INT8_MIN;
uint64_t x10867 = UINT64_MAX;
static uint64_t x10868 = UINT64_MAX;
static uint64_t t142 = UINT64_MAX;
volatile uint64_t x11291 = UINT64_MAX;
int64_t t145 = INT64_MAX;
uint32_t x11293 = 15906U;
volatile int8_t x11294 = 0;
int16_t x11312 = INT16_MIN;
uint64_t t148 = 52160948114603927LLU;
static uint16_t x11455 = 1U;
volatile int16_t x11508 = -1;
volatile uint32_t x11613 = 1778126U;
int16_t x11616 = INT16_MIN;
uint32_t x11641 = 1940148280U;
uint16_t x11642 = 76U;
uint32_t t153 = 18837439U;
static uint8_t x11890 = 0U;
volatile int64_t x11937 = 973146101954529980LL;
uint16_t x12136 = UINT16_MAX;
volatile uint8_t x12177 = 46U;
volatile uint8_t x12178 = 50U;
int32_t x12179 = -1;
int8_t x12294 = 0;
int8_t x12296 = 37;
volatile int32_t t160 = 77189;
static int8_t x12379 = INT8_MIN;
int16_t x12548 = -1;
static volatile int32_t t165 = -2448;
uint64_t x12857 = 7939615961LLU;
int64_t x12858 = INT64_MIN;
uint32_t x12987 = UINT32_MAX;
volatile int8_t x13428 = INT8_MIN;
static int32_t t173 = 39759;
static int32_t t175 = 183;
int8_t x13962 = 0;
uint8_t x14009 = 60U;
uint8_t x14010 = 0U;
int8_t x14011 = 2;
int8_t x14195 = -1;
uint32_t x14273 = 1988U;
int8_t x14274 = 0;
static volatile int8_t x14275 = -1;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	volatile int64_t x3 = 111411309LL;
	int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = -1044674;

    t0 = (x1>>(x2*(x3-x4)));

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x122 = 0;
	volatile uint64_t x123 = 327541264166220LLU;
	int32_t t1 = 346904751;

    t1 = (x121>>(x122*(x123-x124)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x145 = 3342U;
	static int32_t t2 = 409;

    t2 = (x145>>(x146*(x147-x148)));

    if (t2 != 3342) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x162 = 638465U;
	uint64_t x163 = UINT64_MAX;
	int32_t t3 = 7;

    t3 = (x161>>(x162*(x163-x164)));

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint64_t x201 = 7732LLU;
	int64_t x202 = INT64_MIN;
	uint64_t x203 = 21066117534634088LLU;
	int8_t x204 = 28;

    t4 = (x201>>(x202*(x203-x204)));

    if (t4 != 7732LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x229 = 1U;
	int64_t x230 = INT64_MIN;
	static int16_t x231 = INT16_MIN;
	volatile int32_t t5 = 18995;

    t5 = (x229>>(x230*(x231-x232)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x313 = UINT32_MAX;
	volatile int8_t x314 = 0;
	int8_t x315 = 16;
	volatile int16_t x316 = -26;
	volatile uint32_t t6 = UINT32_MAX;

    t6 = (x313>>(x314*(x315-x316)));

    if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x321 = UINT16_MAX;
	static int16_t x322 = -1;
	volatile uint32_t x323 = 1U;
	static uint32_t x324 = 28U;

    t7 = (x321>>(x322*(x323-x324)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint64_t x409 = 12565051493606434LLU;
	uint16_t x410 = 6U;
	int8_t x412 = -1;
	volatile uint64_t t8 = 6026LLU;

    t8 = (x409>>(x410*(x411-x412)));

    if (t8 != 748935430LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int32_t x434 = INT32_MIN;
	static int16_t x435 = INT16_MAX;
	int16_t x436 = INT16_MAX;
	volatile int64_t t9 = INT64_MAX;

    t9 = (x433>>(x434*(x435-x436)));

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x442 = UINT32_MAX;
	static int16_t x443 = -1;
	volatile int8_t x444 = -1;
	static volatile uint32_t t10 = UINT32_MAX;

    t10 = (x441>>(x442*(x443-x444)));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x517 = 462916LLU;
	uint32_t x518 = UINT32_MAX;
	volatile int16_t x519 = -1;
	int32_t x520 = -1;
	static volatile uint64_t t11 = 6471LLU;

    t11 = (x517>>(x518*(x519-x520)));

    if (t11 != 462916LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x615 = INT8_MAX;
	int8_t x616 = INT8_MAX;
	int32_t t12 = -153;

    t12 = (x613>>(x614*(x615-x616)));

    if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x686 = INT64_MIN;
	int32_t x687 = -9;
	volatile uint64_t x688 = UINT64_MAX;

    t13 = (x685>>(x686*(x687-x688)));

    if (t13 != 38) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x773 = 530217418;
	uint32_t x775 = 14U;
	int64_t x776 = -5LL;
	int32_t t14 = -4;

    t14 = (x773>>(x774*(x775-x776)));

    if (t14 != 530217418) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x789 = UINT32_MAX;
	int8_t x790 = -8;
	uint64_t x791 = UINT64_MAX;
	int16_t x792 = 1;
	uint32_t t15 = 3661722U;

    t15 = (x789>>(x790*(x791-x792)));

    if (t15 != 65535U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x833 = 6U;
	uint64_t x835 = UINT64_MAX;
	int32_t t16 = -3167916;

    t16 = (x833>>(x834*(x835-x836)));

    if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x857 = 7329U;
	volatile uint32_t x858 = UINT32_MAX;
	int64_t x859 = -1LL;
	int32_t t17 = -19943;

    t17 = (x857>>(x858*(x859-x860)));

    if (t17 != 7329) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x960 = -1;

    t18 = (x957>>(x958*(x959-x960)));

    if (t18 != 22082240574362LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x973 = UINT16_MAX;
	volatile int32_t x974 = INT32_MAX;
	volatile int8_t x976 = -1;
	int32_t t19 = 12836311;

    t19 = (x973>>(x974*(x975-x976)));

    if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x1205 = 12034LLU;
	int8_t x1206 = -62;
	static int64_t x1208 = INT64_MIN;
	uint64_t t20 = 4255584776LLU;

    t20 = (x1205>>(x1206*(x1207-x1208)));

    if (t20 != 12034LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x1257 = 3U;
	uint64_t x1258 = UINT64_MAX;
	int16_t x1260 = 1;
	int32_t t21 = -30880;

    t21 = (x1257>>(x1258*(x1259-x1260)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x1282 = -1;
	volatile uint8_t x1284 = 3U;
	volatile uint64_t t22 = 157205720918256LLU;

    t22 = (x1281>>(x1282*(x1283-x1284)));

    if (t22 != 3LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x1285 = 88U;
	int8_t x1286 = 0;
	uint8_t x1288 = UINT8_MAX;

    t23 = (x1285>>(x1286*(x1287-x1288)));

    if (t23 != 88) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x1363 = -13;
	int16_t x1364 = 11;
	volatile int32_t t24 = 610275956;

    t24 = (x1361>>(x1362*(x1363-x1364)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x1741 = 957168;
	uint64_t x1742 = 12753724LLU;
	volatile int64_t x1744 = -1LL;
	volatile int32_t t25 = 114711;

    t25 = (x1741>>(x1742*(x1743-x1744)));

    if (t25 != 957168) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1889 = INT8_MAX;
	int64_t x1890 = INT64_MIN;
	static uint64_t x1891 = UINT64_MAX;
	static int32_t x1892 = -1;
	int32_t t26 = 321686363;

    t26 = (x1889>>(x1890*(x1891-x1892)));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x1957 = INT8_MAX;
	uint16_t x1958 = 7261U;
	static int8_t x1959 = INT8_MIN;
	int8_t x1960 = INT8_MIN;
	int32_t t27 = -5;

    t27 = (x1957>>(x1958*(x1959-x1960)));

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x2005 = INT8_MAX;
	volatile int8_t x2006 = INT8_MIN;
	uint32_t x2007 = UINT32_MAX;
	static volatile int32_t t28 = 66;

    t28 = (x2005>>(x2006*(x2007-x2008)));

    if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x2145 = INT16_MAX;
	int16_t x2146 = 4;
	uint16_t x2147 = 2U;
	int16_t x2148 = -1;

    t29 = (x2145>>(x2146*(x2147-x2148)));

    if (t29 != 7) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x2225 = 1390;
	int32_t x2226 = INT32_MAX;
	uint32_t x2227 = UINT32_MAX;
	static volatile int32_t t30 = -44890;

    t30 = (x2225>>(x2226*(x2227-x2228)));

    if (t30 != 695) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x2269 = INT64_MAX;
	uint8_t x2270 = 0U;
	int64_t x2272 = INT64_MAX;
	volatile int64_t t31 = INT64_MAX;

    t31 = (x2269>>(x2270*(x2271-x2272)));

    if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x2405 = INT16_MAX;
	int8_t x2406 = INT8_MIN;
	int32_t x2408 = -1;
	volatile int32_t t32 = -4261422;

    t32 = (x2405>>(x2406*(x2407-x2408)));

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint32_t x2497 = 22775U;
	int64_t x2498 = 353815897577LL;
	volatile int32_t x2499 = -1;
	uint32_t x2500 = UINT32_MAX;
	uint32_t t33 = 2799673U;

    t33 = (x2497>>(x2498*(x2499-x2500)));

    if (t33 != 22775U) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint16_t x2661 = 15495U;
	static int64_t x2663 = -1LL;
	int32_t x2664 = -1;
	volatile int32_t t34 = 0;

    t34 = (x2661>>(x2662*(x2663-x2664)));

    if (t34 != 15495) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x2778 = INT32_MIN;
	uint16_t x2779 = 211U;
	uint32_t x2780 = UINT32_MAX;

    t35 = (x2777>>(x2778*(x2779-x2780)));

    if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x2865 = 1U;
	static int64_t x2866 = -434884395640510LL;
	volatile uint64_t x2867 = UINT64_MAX;
	int32_t x2868 = -1;
	volatile int32_t t36 = 256;

    t36 = (x2865>>(x2866*(x2867-x2868)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x3065 = 1U;
	static int32_t x3066 = INT32_MIN;
	uint32_t x3067 = 29701U;
	uint16_t x3068 = UINT16_MAX;
	int32_t t37 = -12;

    t37 = (x3065>>(x3066*(x3067-x3068)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x3073 = UINT16_MAX;
	static uint8_t x3074 = 0U;
	static uint8_t x3075 = 2U;
	volatile uint32_t x3076 = 8004959U;
	volatile int32_t t38 = -171777;

    t38 = (x3073>>(x3074*(x3075-x3076)));

    if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x3249 = 0U;
	uint8_t x3251 = 3U;
	static int64_t x3252 = INT64_MAX;
	volatile int32_t t39 = 53381295;

    t39 = (x3249>>(x3250*(x3251-x3252)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x3293 = INT32_MAX;
	static int64_t x3294 = -350461457006833339LL;
	int32_t x3295 = INT32_MAX;
	int32_t x3296 = INT32_MAX;
	int32_t t40 = INT32_MAX;

    t40 = (x3293>>(x3294*(x3295-x3296)));

    if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x3333 = UINT16_MAX;
	int8_t x3334 = INT8_MIN;
	static volatile int32_t x3335 = INT32_MAX;
	static int32_t x3336 = INT32_MAX;
	static int32_t t41 = -86712400;

    t41 = (x3333>>(x3334*(x3335-x3336)));

    if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x3421 = UINT16_MAX;
	static uint8_t x3422 = 0U;
	int8_t x3423 = -1;
	static int64_t x3424 = 958410085025779489LL;
	volatile int32_t t42 = 796;

    t42 = (x3421>>(x3422*(x3423-x3424)));

    if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x3429 = INT64_MAX;
	volatile uint32_t x3430 = UINT32_MAX;
	int64_t x3432 = INT64_MIN;
	int64_t t43 = INT64_MAX;

    t43 = (x3429>>(x3430*(x3431-x3432)));

    if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x3661 = INT64_MAX;
	uint16_t x3662 = 752U;
	static int16_t x3664 = -1;
	int64_t t44 = INT64_MAX;

    t44 = (x3661>>(x3662*(x3663-x3664)));

    if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x3677 = UINT64_MAX;
	uint8_t x3678 = UINT8_MAX;
	uint32_t x3679 = 13U;
	int16_t x3680 = 13;
	uint64_t t45 = UINT64_MAX;

    t45 = (x3677>>(x3678*(x3679-x3680)));

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x3745 = INT64_MAX;
	volatile int8_t x3747 = INT8_MAX;
	int8_t x3748 = INT8_MAX;
	int64_t t46 = INT64_MAX;

    t46 = (x3745>>(x3746*(x3747-x3748)));

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x3749 = INT8_MAX;
	int64_t x3750 = INT64_MIN;
	int32_t x3752 = 9789;
	volatile int32_t t47 = 1775001;

    t47 = (x3749>>(x3750*(x3751-x3752)));

    if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x3753 = INT8_MAX;
	uint64_t x3754 = 56928531599180756LLU;
	int8_t x3755 = -1;
	int32_t t48 = -633888;

    t48 = (x3753>>(x3754*(x3755-x3756)));

    if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x3793 = 545476707701893934LL;
	static uint32_t x3794 = 0U;
	int16_t x3795 = -1236;
	uint32_t x3796 = 16U;
	static int64_t t49 = -1LL;

    t49 = (x3793>>(x3794*(x3795-x3796)));

    if (t49 != 545476707701893934LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x3802 = 20U;
	int32_t x3803 = INT32_MAX;
	uint32_t x3804 = UINT32_MAX;
	uint64_t t50 = 3756827104413092LLU;

    t50 = (x3801>>(x3802*(x3803-x3804)));

    if (t50 != 1357083404939221LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x3821 = 2940871471LLU;
	int8_t x3823 = -40;
	static int16_t x3824 = -1;

    t51 = (x3821>>(x3822*(x3823-x3824)));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x3945 = 263748237634593192LL;
	volatile uint16_t x3946 = UINT16_MAX;
	int64_t t52 = 274365LL;

    t52 = (x3945>>(x3946*(x3947-x3948)));

    if (t52 != 263748237634593192LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x4049 = 21U;
	int16_t x4050 = -1;
	int64_t x4051 = -1LL;
	static int64_t x4052 = -1LL;

    t53 = (x4049>>(x4050*(x4051-x4052)));

    if (t53 != 21U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x4125 = INT8_MAX;
	static uint8_t x4126 = 36U;
	volatile uint64_t x4127 = UINT64_MAX;
	uint64_t x4128 = UINT64_MAX;
	int32_t t54 = -24104;

    t54 = (x4125>>(x4126*(x4127-x4128)));

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint32_t x4149 = UINT32_MAX;
	static uint8_t x4150 = UINT8_MAX;
	int64_t x4151 = -1LL;
	int32_t x4152 = -1;
	volatile uint32_t t55 = UINT32_MAX;

    t55 = (x4149>>(x4150*(x4151-x4152)));

    if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x4261 = 7;
	uint16_t x4263 = 0U;
	int32_t t56 = 29;

    t56 = (x4261>>(x4262*(x4263-x4264)));

    if (t56 != 7) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x4333 = 116U;
	int16_t x4334 = -1294;
	static int32_t x4335 = -1;
	int32_t t57 = 921186327;

    t57 = (x4333>>(x4334*(x4335-x4336)));

    if (t57 != 116) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x4437 = UINT8_MAX;
	static int8_t x4438 = 0;
	static volatile int64_t x4439 = -1LL;
	volatile uint16_t x4440 = 0U;
	int32_t t58 = -8644148;

    t58 = (x4437>>(x4438*(x4439-x4440)));

    if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x4445 = 12731476956813LL;
	int8_t x4447 = INT8_MIN;
	static volatile int64_t t59 = 65LL;

    t59 = (x4445>>(x4446*(x4447-x4448)));

    if (t59 != 12731476956813LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x4453 = 2U;
	volatile int64_t x4454 = INT64_MIN;
	static uint64_t x4455 = 2125855LLU;
	uint16_t x4456 = 5U;
	static int32_t t60 = 42109205;

    t60 = (x4453>>(x4454*(x4455-x4456)));

    if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x4645 = 20818365U;
	int8_t x4646 = 0;
	int16_t x4647 = INT16_MIN;
	static int64_t x4648 = INT64_MIN;
	uint32_t t61 = 99U;

    t61 = (x4645>>(x4646*(x4647-x4648)));

    if (t61 != 20818365U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x4658 = 0U;
	static int16_t x4659 = 661;
	int32_t t62 = -217116075;

    t62 = (x4657>>(x4658*(x4659-x4660)));

    if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x4718 = -1LL;
	volatile int32_t x4719 = -8;
	int32_t x4720 = -1;
	volatile uint32_t t63 = 70U;

    t63 = (x4717>>(x4718*(x4719-x4720)));

    if (t63 != 33554431U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x4777 = 12U;
	int16_t x4779 = INT16_MIN;
	uint32_t t64 = 737864U;

    t64 = (x4777>>(x4778*(x4779-x4780)));

    if (t64 != 12U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x4945 = UINT32_MAX;
	uint8_t x4946 = 0U;
	static volatile int16_t x4947 = 6238;
	int16_t x4948 = INT16_MAX;

    t65 = (x4945>>(x4946*(x4947-x4948)));

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x4997 = INT32_MAX;
	int8_t x4999 = INT8_MIN;
	static volatile int8_t x5000 = INT8_MIN;
	static volatile int32_t t66 = INT32_MAX;

    t66 = (x4997>>(x4998*(x4999-x5000)));

    if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x5061 = 11070U;
	static uint16_t x5062 = 295U;
	int16_t x5063 = -1;
	static int32_t x5064 = -1;
	int32_t t67 = 758962417;

    t67 = (x5061>>(x5062*(x5063-x5064)));

    if (t67 != 11070) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x5085 = 4111LLU;
	uint8_t x5086 = 2U;
	static int64_t x5088 = INT64_MAX;
	uint64_t t68 = 672LLU;

    t68 = (x5085>>(x5086*(x5087-x5088)));

    if (t68 != 4111LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x5326 = 0;
	volatile int32_t t69 = 8688;

    t69 = (x5325>>(x5326*(x5327-x5328)));

    if (t69 != 61) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x5330 = INT16_MAX;
	int16_t x5331 = INT16_MIN;
	int16_t x5332 = INT16_MIN;
	uint64_t t70 = 117616LLU;

    t70 = (x5329>>(x5330*(x5331-x5332)));

    if (t70 != 371292LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x5381 = INT8_MAX;
	volatile int64_t x5382 = -48660101918LL;
	int8_t x5383 = INT8_MIN;
	int8_t x5384 = INT8_MIN;
	int32_t t71 = -115019;

    t71 = (x5381>>(x5382*(x5383-x5384)));

    if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x5453 = INT16_MAX;
	volatile int32_t x5454 = INT32_MIN;
	int32_t x5455 = INT32_MIN;
	static uint32_t x5456 = 7791338U;
	volatile int32_t t72 = 2;

    t72 = (x5453>>(x5454*(x5455-x5456)));

    if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x5813 = 94879962772525084LLU;
	uint8_t x5814 = UINT8_MAX;
	uint64_t x5816 = UINT64_MAX;
	volatile uint64_t t73 = 369647033LLU;

    t73 = (x5813>>(x5814*(x5815-x5816)));

    if (t73 != 94879962772525084LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x6011 = UINT64_MAX;
	int16_t x6012 = -1;

    t74 = (x6009>>(x6010*(x6011-x6012)));

    if (t74 != 62) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x6049 = 28U;
	volatile uint8_t x6051 = 32U;
	uint8_t x6052 = 37U;
	volatile int32_t t75 = 1030225962;

    t75 = (x6049>>(x6050*(x6051-x6052)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x6353 = 584U;
	int16_t x6354 = -783;
	int16_t x6355 = 0;
	uint16_t x6356 = 0U;
	static volatile int32_t t76 = 7;

    t76 = (x6353>>(x6354*(x6355-x6356)));

    if (t76 != 584) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x6385 = UINT16_MAX;
	uint16_t x6388 = 164U;

    t77 = (x6385>>(x6386*(x6387-x6388)));

    if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint16_t x6393 = 1560U;
	int8_t x6394 = -1;
	static int8_t x6395 = -1;
	int32_t t78 = 50228056;

    t78 = (x6393>>(x6394*(x6395-x6396)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x6769 = 59U;
	int16_t x6770 = -1;
	uint16_t x6771 = 1U;

    t79 = (x6769>>(x6770*(x6771-x6772)));

    if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x6845 = 308U;
	volatile int32_t x6846 = -33961;
	int64_t x6847 = INT64_MAX;
	volatile int64_t x6848 = INT64_MAX;
	volatile int32_t t80 = 10;

    t80 = (x6845>>(x6846*(x6847-x6848)));

    if (t80 != 308) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x6853 = 14;
	int64_t x6854 = INT64_MIN;
	int8_t x6856 = INT8_MIN;

    t81 = (x6853>>(x6854*(x6855-x6856)));

    if (t81 != 14) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x6909 = 1U;
	uint64_t x6910 = UINT64_MAX;
	int8_t x6911 = INT8_MIN;
	int8_t x6912 = INT8_MIN;
	volatile int32_t t82 = 2;

    t82 = (x6909>>(x6910*(x6911-x6912)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x6933 = UINT8_MAX;
	static uint8_t x6934 = 0U;
	int32_t x6936 = -1;
	static int32_t t83 = 352916823;

    t83 = (x6933>>(x6934*(x6935-x6936)));

    if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x7013 = 35U;
	int16_t x7016 = -1;

    t84 = (x7013>>(x7014*(x7015-x7016)));

    if (t84 != 35U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x7033 = 1612328U;
	static int8_t x7034 = 2;
	int16_t x7035 = -1;
	static uint64_t x7036 = UINT64_MAX;
	uint32_t t85 = 0U;

    t85 = (x7033>>(x7034*(x7035-x7036)));

    if (t85 != 1612328U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x7037 = 6;
	static int64_t x7038 = -1LL;
	volatile uint16_t x7039 = 9U;
	uint16_t x7040 = 37U;
	volatile int32_t t86 = -27;

    t86 = (x7037>>(x7038*(x7039-x7040)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x7318 = 0LLU;
	uint16_t x7319 = 31U;
	int16_t x7320 = INT16_MIN;

    t87 = (x7317>>(x7318*(x7319-x7320)));

    if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x7373 = 107008U;
	int8_t x7374 = INT8_MAX;

    t88 = (x7373>>(x7374*(x7375-x7376)));

    if (t88 != 107008U) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x7377 = 578313245U;
	uint16_t x7378 = UINT16_MAX;
	static uint32_t x7379 = UINT32_MAX;
	static volatile int16_t x7380 = -1;
	uint32_t t89 = 41999U;

    t89 = (x7377>>(x7378*(x7379-x7380)));

    if (t89 != 578313245U) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint16_t x7485 = UINT16_MAX;
	int8_t x7486 = INT8_MIN;
	static int32_t x7487 = -1;
	uint32_t x7488 = UINT32_MAX;
	volatile int32_t t90 = -2422552;

    t90 = (x7485>>(x7486*(x7487-x7488)));

    if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x7492 = UINT32_MAX;
	volatile int32_t t91 = -370347;

    t91 = (x7489>>(x7490*(x7491-x7492)));

    if (t91 != 1391) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x7717 = 0;
	uint16_t x7718 = 0U;
	int64_t x7720 = INT64_MAX;
	int32_t t92 = -68;

    t92 = (x7717>>(x7718*(x7719-x7720)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x7853 = 1;
	volatile int64_t x7854 = INT64_MAX;
	volatile int16_t x7855 = -1;
	int16_t x7856 = -1;

    t93 = (x7853>>(x7854*(x7855-x7856)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x7901 = 27U;
	uint32_t x7902 = 4143U;
	uint64_t x7903 = UINT64_MAX;
	static volatile int32_t x7904 = -1;
	volatile int32_t t94 = 52;

    t94 = (x7901>>(x7902*(x7903-x7904)));

    if (t94 != 27) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x7957 = 4U;
	static uint16_t x7958 = 4541U;
	int32_t x7960 = -1;
	volatile int32_t t95 = 510310;

    t95 = (x7957>>(x7958*(x7959-x7960)));

    if (t95 != 4) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x7970 = -1;
	int64_t x7971 = -1LL;
	static int32_t x7972 = -1;
	static volatile int64_t t96 = INT64_MAX;

    t96 = (x7969>>(x7970*(x7971-x7972)));

    if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x8105 = 0;
	uint8_t x8106 = 10U;
	uint64_t x8107 = UINT64_MAX;
	int32_t t97 = -3;

    t97 = (x8105>>(x8106*(x8107-x8108)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x8181 = 2;
	int64_t x8182 = INT64_MIN;
	volatile uint16_t x8183 = 0U;
	uint64_t x8184 = 42873656LLU;
	int32_t t98 = -26496;

    t98 = (x8181>>(x8182*(x8183-x8184)));

    if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x8297 = 1816818U;
	int64_t x8299 = INT64_MAX;
	uint64_t x8300 = UINT64_MAX;
	uint32_t t99 = 120U;

    t99 = (x8297>>(x8298*(x8299-x8300)));

    if (t99 != 1816818U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x8398 = 0U;
	uint16_t x8399 = 0U;
	volatile int16_t x8400 = 4203;
	static volatile int32_t t100 = 22882414;

    t100 = (x8397>>(x8398*(x8399-x8400)));

    if (t100 != 4) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x8457 = UINT64_MAX;
	int64_t x8458 = 0LL;
	int16_t x8459 = -1;
	int32_t x8460 = -1;

    t101 = (x8457>>(x8458*(x8459-x8460)));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x8497 = 29U;
	int32_t x8498 = INT32_MAX;
	uint64_t x8499 = UINT64_MAX;
	int64_t x8500 = -1LL;
	uint32_t t102 = 12265399U;

    t102 = (x8497>>(x8498*(x8499-x8500)));

    if (t102 != 29U) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x8609 = INT8_MAX;
	static int16_t x8610 = -1;
	int32_t x8611 = 2;
	int8_t x8612 = 6;
	int32_t t103 = 0;

    t103 = (x8609>>(x8610*(x8611-x8612)));

    if (t103 != 7) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x8698 = 0U;
	volatile int16_t x8699 = INT16_MIN;
	volatile int16_t x8700 = INT16_MIN;

    t104 = (x8697>>(x8698*(x8699-x8700)));

    if (t104 != INT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x8729 = UINT64_MAX;
	static int64_t x8730 = INT64_MIN;
	uint32_t x8732 = UINT32_MAX;
	uint64_t t105 = UINT64_MAX;

    t105 = (x8729>>(x8730*(x8731-x8732)));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x8733 = UINT32_MAX;
	int64_t x8734 = 0LL;
	int8_t x8735 = 0;
	int8_t x8736 = INT8_MIN;
	uint32_t t106 = UINT32_MAX;

    t106 = (x8733>>(x8734*(x8735-x8736)));

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x8785 = 273501219U;
	int64_t x8787 = INT64_MAX;
	int64_t x8788 = 654161LL;
	uint32_t t107 = 5864U;

    t107 = (x8785>>(x8786*(x8787-x8788)));

    if (t107 != 273501219U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x8805 = INT32_MAX;
	int16_t x8806 = 1;
	int8_t x8807 = 1;
	int32_t x8808 = -1;
	int32_t t108 = 4;

    t108 = (x8805>>(x8806*(x8807-x8808)));

    if (t108 != 536870911) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x8867 = -2168918196LL;
	static uint16_t x8868 = 2689U;
	static volatile int32_t t109 = -250445569;

    t109 = (x8865>>(x8866*(x8867-x8868)));

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int16_t x8901 = INT16_MAX;
	static uint32_t x8902 = 0U;
	uint64_t x8903 = 18863617286287LLU;
	uint32_t x8904 = 162554U;
	static int32_t t110 = 0;

    t110 = (x8901>>(x8902*(x8903-x8904)));

    if (t110 != 32767) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x9009 = INT16_MAX;
	static uint16_t x9010 = 0U;
	int16_t x9011 = -1;
	int8_t x9012 = 0;
	volatile int32_t t111 = 1718;

    t111 = (x9009>>(x9010*(x9011-x9012)));

    if (t111 != 32767) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x9057 = 201744951U;
	static uint8_t x9058 = 0U;
	uint16_t x9059 = UINT16_MAX;
	int8_t x9060 = -1;

    t112 = (x9057>>(x9058*(x9059-x9060)));

    if (t112 != 201744951U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x9089 = UINT64_MAX;
	int64_t x9090 = INT64_MIN;
	int64_t x9091 = -1LL;
	static int64_t x9092 = -1LL;
	static uint64_t t113 = UINT64_MAX;

    t113 = (x9089>>(x9090*(x9091-x9092)));

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x9106 = INT64_MIN;
	int16_t x9107 = INT16_MIN;
	static uint64_t x9108 = 15295007403033670LLU;
	volatile int64_t t114 = 32976292LL;

    t114 = (x9105>>(x9106*(x9107-x9108)));

    if (t114 != 24141LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x9253 = 2771U;
	int32_t t115 = 644;

    t115 = (x9253>>(x9254*(x9255-x9256)));

    if (t115 != 2771) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x9314 = INT64_MIN;
	volatile int32_t x9315 = -1;
	int16_t x9316 = -1;
	volatile uint32_t t116 = UINT32_MAX;

    t116 = (x9313>>(x9314*(x9315-x9316)));

    if (t116 != UINT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x9361 = 5LLU;
	uint8_t x9362 = 6U;
	uint32_t x9363 = UINT32_MAX;
	volatile uint64_t t117 = 3599LLU;

    t117 = (x9361>>(x9362*(x9363-x9364)));

    if (t117 != 5LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x9381 = INT8_MAX;
	int64_t x9382 = -35924247230LL;
	int8_t x9383 = -1;
	uint32_t x9384 = UINT32_MAX;
	volatile int32_t t118 = 109823972;

    t118 = (x9381>>(x9382*(x9383-x9384)));

    if (t118 != 127) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x9425 = 1U;
	int16_t x9426 = INT16_MIN;
	volatile int32_t x9427 = -1;
	static int8_t x9428 = -1;
	volatile uint32_t t119 = 7296693U;

    t119 = (x9425>>(x9426*(x9427-x9428)));

    if (t119 != 1U) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x9441 = 30648LLU;
	int8_t x9442 = 0;
	uint8_t x9443 = UINT8_MAX;
	int16_t x9444 = INT16_MIN;
	uint64_t t120 = 84177268687013291LLU;

    t120 = (x9441>>(x9442*(x9443-x9444)));

    if (t120 != 30648LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint16_t x9446 = 29388U;
	int32_t x9447 = -1;
	uint64_t x9448 = UINT64_MAX;
	int64_t t121 = INT64_MAX;

    t121 = (x9445>>(x9446*(x9447-x9448)));

    if (t121 != INT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x9453 = 29682478U;
	static int16_t x9454 = 0;
	int32_t x9455 = 26907;
	uint32_t t122 = 1U;

    t122 = (x9453>>(x9454*(x9455-x9456)));

    if (t122 != 29682478U) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x9465 = UINT64_MAX;
	uint16_t x9466 = UINT16_MAX;

    t123 = (x9465>>(x9466*(x9467-x9468)));

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x9525 = 37U;
	int16_t x9526 = 0;
	int32_t x9527 = -1;
	int32_t t124 = 0;

    t124 = (x9525>>(x9526*(x9527-x9528)));

    if (t124 != 37) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x9541 = 7234622234925051LLU;
	int16_t x9542 = -1;
	int32_t x9543 = -1;
	volatile uint64_t t125 = 16274536269549437LLU;

    t125 = (x9541>>(x9542*(x9543-x9544)));

    if (t125 != 7234622234925051LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x9574 = INT16_MAX;
	int64_t x9576 = INT64_MAX;
	int32_t t126 = 74130;

    t126 = (x9573>>(x9574*(x9575-x9576)));

    if (t126 != 3) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x9597 = 0U;
	int8_t x9598 = 0;
	int8_t x9600 = 1;

    t127 = (x9597>>(x9598*(x9599-x9600)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x9685 = 12856095417LLU;
	volatile uint32_t x9686 = 0U;
	int8_t x9687 = -1;
	int16_t x9688 = -1;

    t128 = (x9685>>(x9686*(x9687-x9688)));

    if (t128 != 12856095417LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x9738 = 180;
	int8_t x9739 = -1;
	int32_t x9740 = -1;
	volatile int32_t t129 = -20043271;

    t129 = (x9737>>(x9738*(x9739-x9740)));

    if (t129 != 83) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x9938 = INT64_MIN;
	int8_t x9939 = INT8_MAX;
	uint64_t x9940 = UINT64_MAX;
	volatile int32_t t130 = 43261;

    t130 = (x9937>>(x9938*(x9939-x9940)));

    if (t130 != 65535) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x10165 = INT8_MAX;
	int64_t x10166 = INT64_MAX;
	static int8_t x10167 = -1;
	uint32_t x10168 = UINT32_MAX;
	int32_t t131 = -2;

    t131 = (x10165>>(x10166*(x10167-x10168)));

    if (t131 != 127) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x10170 = INT8_MIN;
	int16_t x10171 = INT16_MAX;
	int16_t x10172 = INT16_MAX;
	volatile int64_t t132 = 53483LL;

    t132 = (x10169>>(x10170*(x10171-x10172)));

    if (t132 != 34LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x10213 = 13369524LL;
	static uint32_t x10214 = 62517525U;
	static volatile int8_t x10215 = INT8_MIN;
	int8_t x10216 = INT8_MIN;

    t133 = (x10213>>(x10214*(x10215-x10216)));

    if (t133 != 13369524LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x10274 = INT8_MIN;
	volatile uint16_t x10275 = UINT16_MAX;
	uint16_t x10276 = UINT16_MAX;
	static uint64_t t134 = 6024453993383349565LLU;

    t134 = (x10273>>(x10274*(x10275-x10276)));

    if (t134 != 6009027482694238LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x10281 = UINT8_MAX;
	static uint32_t x10282 = 5U;
	static volatile int8_t x10283 = -1;
	static int8_t x10284 = -1;
	int32_t t135 = -6;

    t135 = (x10281>>(x10282*(x10283-x10284)));

    if (t135 != 255) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x10353 = 1;
	uint64_t x10354 = UINT64_MAX;
	int16_t x10355 = -2;
	volatile uint8_t x10356 = 9U;
	static int32_t t136 = 0;

    t136 = (x10353>>(x10354*(x10355-x10356)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x10421 = 201726882368207LL;
	int8_t x10422 = INT8_MAX;
	int32_t x10423 = INT32_MIN;
	int32_t x10424 = INT32_MIN;
	volatile int64_t t137 = 1844LL;

    t137 = (x10421>>(x10422*(x10423-x10424)));

    if (t137 != 201726882368207LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x10610 = -1LL;
	int64_t x10611 = -1LL;
	int8_t x10612 = -1;
	int32_t t138 = 2125;

    t138 = (x10609>>(x10610*(x10611-x10612)));

    if (t138 != 58) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x10685 = 134337U;
	static uint16_t x10686 = UINT16_MAX;
	static int16_t x10687 = -1;
	uint64_t x10688 = UINT64_MAX;
	volatile uint32_t t139 = 0U;

    t139 = (x10685>>(x10686*(x10687-x10688)));

    if (t139 != 134337U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x10833 = 1367U;
	volatile int32_t x10835 = -1;
	int32_t x10836 = -1;
	uint32_t t140 = 14U;

    t140 = (x10833>>(x10834*(x10835-x10836)));

    if (t140 != 1367U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x10861 = UINT64_MAX;
	int8_t x10863 = INT8_MIN;
	uint64_t t141 = UINT64_MAX;

    t141 = (x10861>>(x10862*(x10863-x10864)));

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x10865 = UINT64_MAX;
	int8_t x10866 = INT8_MAX;

    t142 = (x10865>>(x10866*(x10867-x10868)));

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x11001 = 416247383LLU;
	static int16_t x11002 = -1;
	int32_t x11003 = -3;
	uint64_t x11004 = UINT64_MAX;
	static uint64_t t143 = 19578713672991802LLU;

    t143 = (x11001>>(x11002*(x11003-x11004)));

    if (t143 != 104061845LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x11057 = UINT16_MAX;
	uint8_t x11058 = 0U;
	uint32_t x11059 = UINT32_MAX;
	uint32_t x11060 = 876U;
	int32_t t144 = -15392479;

    t144 = (x11057>>(x11058*(x11059-x11060)));

    if (t144 != 65535) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x11289 = INT64_MAX;
	uint16_t x11290 = 1U;
	static volatile int16_t x11292 = -1;

    t145 = (x11289>>(x11290*(x11291-x11292)));

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x11295 = -44468;
	static uint8_t x11296 = 34U;
	volatile uint32_t t146 = 858U;

    t146 = (x11293>>(x11294*(x11295-x11296)));

    if (t146 != 15906U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x11309 = 20U;
	volatile int16_t x11310 = 0;
	int16_t x11311 = INT16_MAX;
	volatile uint32_t t147 = 148U;

    t147 = (x11309>>(x11310*(x11311-x11312)));

    if (t147 != 20U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x11357 = 61101407LLU;
	static volatile uint8_t x11358 = 0U;
	uint64_t x11359 = 3506709826252800896LLU;
	uint64_t x11360 = 6874720765870LLU;

    t148 = (x11357>>(x11358*(x11359-x11360)));

    if (t148 != 61101407LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x11453 = INT16_MAX;
	static int8_t x11454 = 0;
	int64_t x11456 = INT64_MAX;
	int32_t t149 = 1896207;

    t149 = (x11453>>(x11454*(x11455-x11456)));

    if (t149 != 32767) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x11505 = 5990814782084LLU;
	int32_t x11506 = INT32_MIN;
	static int32_t x11507 = -1;
	uint64_t t150 = 1334284144562LLU;

    t150 = (x11505>>(x11506*(x11507-x11508)));

    if (t150 != 5990814782084LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x11549 = UINT64_MAX;
	int8_t x11550 = INT8_MAX;
	static int64_t x11551 = INT64_MIN;
	static int64_t x11552 = INT64_MIN;
	volatile uint64_t t151 = UINT64_MAX;

    t151 = (x11549>>(x11550*(x11551-x11552)));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x11614 = INT32_MAX;
	static int16_t x11615 = INT16_MIN;
	volatile uint32_t t152 = 53627926U;

    t152 = (x11613>>(x11614*(x11615-x11616)));

    if (t152 != 1778126U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x11643 = UINT32_MAX;
	volatile int8_t x11644 = -1;

    t153 = (x11641>>(x11642*(x11643-x11644)));

    if (t153 != 1940148280U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x11729 = INT32_MAX;
	static int32_t x11730 = -1;
	volatile int8_t x11731 = -1;
	static int8_t x11732 = -1;
	int32_t t154 = INT32_MAX;

    t154 = (x11729>>(x11730*(x11731-x11732)));

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x11889 = 204106LLU;
	int16_t x11891 = -2082;
	uint32_t x11892 = 158U;
	volatile uint64_t t155 = 51546440318356LLU;

    t155 = (x11889>>(x11890*(x11891-x11892)));

    if (t155 != 204106LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x11938 = 0U;
	uint16_t x11939 = 12U;
	uint32_t x11940 = 110922U;
	int64_t t156 = 1454294033292877322LL;

    t156 = (x11937>>(x11938*(x11939-x11940)));

    if (t156 != 973146101954529980LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x12133 = 7;
	static int8_t x12134 = -22;
	uint16_t x12135 = UINT16_MAX;
	volatile int32_t t157 = 55409;

    t157 = (x12133>>(x12134*(x12135-x12136)));

    if (t157 != 7) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x12169 = INT16_MAX;
	int64_t x12170 = -1LL;
	static int32_t x12171 = -1;
	int64_t x12172 = -1LL;
	static int32_t t158 = -707739244;

    t158 = (x12169>>(x12170*(x12171-x12172)));

    if (t158 != 32767) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x12180 = -1;
	volatile int32_t t159 = 191;

    t159 = (x12177>>(x12178*(x12179-x12180)));

    if (t159 != 46) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x12293 = 5U;
	int8_t x12295 = INT8_MIN;

    t160 = (x12293>>(x12294*(x12295-x12296)));

    if (t160 != 5) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x12377 = INT32_MAX;
	uint16_t x12378 = UINT16_MAX;
	int8_t x12380 = INT8_MIN;
	volatile int32_t t161 = INT32_MAX;

    t161 = (x12377>>(x12378*(x12379-x12380)));

    if (t161 != INT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x12417 = 1418U;
	int8_t x12418 = INT8_MIN;
	uint64_t x12419 = UINT64_MAX;
	int64_t x12420 = -1LL;
	int32_t t162 = 3956832;

    t162 = (x12417>>(x12418*(x12419-x12420)));

    if (t162 != 1418) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x12521 = 159319411268186LL;
	int64_t x12522 = INT64_MIN;
	int16_t x12523 = -1;
	int32_t x12524 = -1;
	volatile int64_t t163 = 51028813LL;

    t163 = (x12521>>(x12522*(x12523-x12524)));

    if (t163 != 159319411268186LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x12545 = UINT64_MAX;
	uint64_t x12546 = UINT64_MAX;
	uint32_t x12547 = UINT32_MAX;
	static uint64_t t164 = UINT64_MAX;

    t164 = (x12545>>(x12546*(x12547-x12548)));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x12705 = 10U;
	static int32_t x12706 = 0;
	int64_t x12707 = 4707360LL;
	static volatile int8_t x12708 = INT8_MIN;

    t165 = (x12705>>(x12706*(x12707-x12708)));

    if (t165 != 10) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x12817 = UINT8_MAX;
	int8_t x12818 = 4;
	static int32_t x12819 = INT32_MIN;
	volatile int32_t x12820 = INT32_MIN;
	volatile int32_t t166 = -320239;

    t166 = (x12817>>(x12818*(x12819-x12820)));

    if (t166 != 255) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x12859 = INT8_MIN;
	int8_t x12860 = INT8_MIN;
	uint64_t t167 = 176LLU;

    t167 = (x12857>>(x12858*(x12859-x12860)));

    if (t167 != 7939615961LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x12917 = INT64_MAX;
	uint8_t x12918 = 3U;
	static int16_t x12919 = 7;
	volatile uint64_t x12920 = UINT64_MAX;
	volatile int64_t t168 = -3901974151LL;

    t168 = (x12917>>(x12918*(x12919-x12920)));

    if (t168 != 549755813887LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x12985 = INT32_MAX;
	int8_t x12986 = -1;
	int8_t x12988 = -1;
	volatile int32_t t169 = INT32_MAX;

    t169 = (x12985>>(x12986*(x12987-x12988)));

    if (t169 != INT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x13001 = 815239871U;
	static volatile int64_t x13002 = -1LL;
	int8_t x13003 = -3;
	static volatile uint64_t x13004 = 3LLU;
	uint32_t t170 = 463U;

    t170 = (x13001>>(x13002*(x13003-x13004)));

    if (t170 != 12738122U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x13105 = 8664U;
	int64_t x13106 = INT64_MIN;
	uint64_t x13107 = 809993994178LLU;
	volatile int64_t x13108 = INT64_MIN;
	volatile int32_t t171 = 292;

    t171 = (x13105>>(x13106*(x13107-x13108)));

    if (t171 != 8664) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x13425 = INT64_MAX;
	uint16_t x13426 = 1727U;
	int8_t x13427 = INT8_MIN;
	int64_t t172 = INT64_MAX;

    t172 = (x13425>>(x13426*(x13427-x13428)));

    if (t172 != INT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x13493 = UINT16_MAX;
	static uint64_t x13494 = UINT64_MAX;
	uint64_t x13495 = UINT64_MAX;
	uint16_t x13496 = 30U;

    t173 = (x13493>>(x13494*(x13495-x13496)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x13513 = 449U;
	static volatile uint64_t x13514 = UINT64_MAX;
	volatile int16_t x13515 = INT16_MAX;
	int16_t x13516 = INT16_MAX;
	volatile uint32_t t174 = 119171U;

    t174 = (x13513>>(x13514*(x13515-x13516)));

    if (t174 != 449U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x13621 = INT16_MAX;
	uint32_t x13622 = 243033U;
	uint64_t x13623 = UINT64_MAX;
	int32_t x13624 = -1;

    t175 = (x13621>>(x13622*(x13623-x13624)));

    if (t175 != 32767) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x13961 = 20;
	static uint8_t x13963 = 0U;
	int64_t x13964 = 70388827LL;
	int32_t t176 = -60400;

    t176 = (x13961>>(x13962*(x13963-x13964)));

    if (t176 != 20) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x13985 = 0;
	volatile int64_t x13986 = 0LL;
	int32_t x13987 = INT32_MAX;
	int64_t x13988 = INT64_MAX;
	static int32_t t177 = -2555;

    t177 = (x13985>>(x13986*(x13987-x13988)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x13997 = INT64_MAX;
	int8_t x13998 = 0;
	uint32_t x13999 = 3995U;
	uint16_t x14000 = UINT16_MAX;
	int64_t t178 = INT64_MAX;

    t178 = (x13997>>(x13998*(x13999-x14000)));

    if (t178 != INT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x14012 = -1;
	volatile int32_t t179 = 17547;

    t179 = (x14009>>(x14010*(x14011-x14012)));

    if (t179 != 60) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x14193 = INT8_MAX;
	int8_t x14194 = INT8_MAX;
	int16_t x14196 = -1;
	static int32_t t180 = -109;

    t180 = (x14193>>(x14194*(x14195-x14196)));

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x14221 = UINT16_MAX;
	volatile uint32_t x14222 = 3555234U;
	static volatile int16_t x14223 = INT16_MIN;
	int16_t x14224 = INT16_MIN;
	int32_t t181 = -405;

    t181 = (x14221>>(x14222*(x14223-x14224)));

    if (t181 != 65535) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x14276 = UINT16_MAX;
	uint32_t t182 = 479138U;

    t182 = (x14273>>(x14274*(x14275-x14276)));

    if (t182 != 1988U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x14345 = INT16_MAX;
	volatile int8_t x14346 = 0;
	int16_t x14347 = INT16_MAX;
	uint16_t x14348 = 127U;
	volatile int32_t t183 = 261488628;

    t183 = (x14345>>(x14346*(x14347-x14348)));

    if (t183 != 32767) { NG(); } else { ; }
	
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


    return 0;
}

