
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

int64_t x7 = INT64_MIN;
int8_t x11 = 0;
int64_t t1 = 9775LL;
volatile int32_t t3 = 120;
static volatile uint32_t t5 = 59254120U;
uint16_t x106 = 11013U;
int16_t x108 = 1;
int32_t t11 = -1;
static uint64_t x235 = UINT64_MAX;
static int64_t x236 = -1LL;
int64_t x238 = 3436889255281246LL;
int16_t x301 = 215;
uint8_t x303 = 5U;
static uint32_t x316 = 2U;
int64_t x350 = 105235561LL;
uint32_t x354 = 252569U;
int16_t x356 = -5082;
uint64_t t19 = 1844625LLU;
uint8_t x402 = UINT8_MAX;
uint32_t x403 = 4U;
int8_t x404 = INT8_MAX;
int16_t x408 = INT16_MIN;
uint8_t x427 = 2U;
int64_t x436 = INT64_MAX;
int32_t x461 = -3503588;
volatile int64_t t25 = 412430288LL;
static int64_t x539 = 5543375401490502LL;
int32_t x560 = INT32_MIN;
volatile uint32_t x585 = UINT32_MAX;
static int8_t x586 = 28;
int64_t x587 = INT64_MIN;
int8_t x591 = INT8_MIN;
volatile int64_t t30 = 1088209543859366LL;
uint16_t x674 = 2398U;
int64_t t32 = -1LL;
uint8_t x689 = UINT8_MAX;
static uint8_t x738 = 21U;
uint32_t x805 = 14648U;
static uint8_t x815 = UINT8_MAX;
uint16_t x831 = 0U;
volatile int64_t t40 = 1429135243642LL;
int32_t x865 = 41472967;
volatile int8_t x879 = 0;
int64_t x965 = INT64_MAX;
volatile uint64_t t48 = 5823293518053284LLU;
uint64_t x1101 = 1795LLU;
int16_t x1103 = -1;
volatile int16_t x1131 = INT16_MIN;
static int8_t x1132 = 8;
volatile int16_t x1135 = -1;
static int32_t t52 = 21;
volatile int32_t x1149 = INT32_MAX;
int8_t x1150 = 2;
int32_t t55 = -57178852;
static int8_t x1357 = 12;
int8_t x1360 = 30;
static uint8_t x1438 = 14U;
static int16_t x1440 = -1;
uint32_t x1486 = UINT32_MAX;
volatile uint8_t x1513 = 97U;
int32_t x1515 = INT32_MAX;
uint32_t x1554 = 45312U;
uint8_t x1573 = 2U;
volatile int64_t x1575 = INT64_MIN;
volatile uint64_t t67 = 4762073553772LLU;
int8_t x1636 = INT8_MAX;
static uint8_t x1674 = UINT8_MAX;
int8_t x1711 = INT8_MIN;
uint32_t t71 = 11990U;
uint32_t x1749 = 168U;
int16_t x1752 = -1;
volatile int16_t x1781 = INT16_MIN;
uint16_t x1806 = 5882U;
int32_t x1808 = INT32_MAX;
static int32_t t78 = 86229;
int8_t x1895 = 2;
int16_t x1921 = -1;
uint16_t x1922 = 36U;
volatile int32_t t80 = 10914;
volatile int32_t x1925 = 1;
static int8_t x1928 = 1;
int16_t x1951 = INT16_MIN;
volatile uint64_t t82 = 4LLU;
int16_t x1989 = -235;
uint16_t x1990 = 28794U;
static volatile int64_t x2003 = INT64_MIN;
int64_t t85 = -573787906982087660LL;
static uint32_t x2069 = 10880075U;
int32_t x2072 = -1;
volatile uint16_t x2089 = 30U;
int64_t x2090 = INT64_MAX;
static int16_t x2091 = 1;
static volatile int32_t t90 = 2;
uint64_t x2119 = UINT64_MAX;
volatile int8_t x2201 = 5;
volatile int32_t x2204 = INT32_MAX;
int8_t x2253 = INT8_MIN;
static int32_t x2292 = -2;
uint64_t t96 = 10016002485202LLU;
uint64_t x2297 = UINT64_MAX;
volatile int16_t x2299 = 1;
int32_t x2489 = -1;
uint32_t x2610 = 290029605U;
volatile int64_t t108 = 12247307LL;
volatile uint32_t x2643 = UINT32_MAX;
uint8_t x2644 = 43U;
static volatile int64_t t111 = 2LL;
static int16_t x2652 = INT16_MAX;
uint16_t x2690 = 10564U;
uint32_t x2705 = UINT32_MAX;
uint32_t t114 = 923U;
int32_t x2713 = -1;
volatile uint64_t t115 = 15703LLU;
int8_t x2761 = INT8_MIN;
int64_t x2764 = INT64_MIN;
volatile int32_t t117 = 137;
uint32_t x2785 = 264U;
int8_t x2787 = -1;
uint32_t t118 = 3264U;
int64_t x2798 = 193824LL;
int16_t x2799 = INT16_MIN;
static uint32_t t121 = 24U;
uint32_t x2978 = UINT32_MAX;
volatile int32_t x2980 = -1;
uint16_t x3011 = 649U;
int16_t x3049 = INT16_MAX;
uint64_t x3051 = 432090295LLU;
static uint64_t x3052 = 4LLU;
volatile int8_t x3060 = -1;
volatile uint64_t t130 = 41LLU;
uint64_t x3204 = 195221LLU;
static int32_t x3212 = -1;
int64_t t133 = -58430514895478LL;
int32_t x3307 = INT32_MIN;
volatile int64_t x3319 = INT64_MIN;
int8_t x3320 = INT8_MIN;
static uint32_t x3323 = UINT32_MAX;
int64_t x3349 = INT64_MAX;
int32_t x3378 = 1825063;
int32_t x3379 = 2;
volatile int32_t t142 = -188;
volatile int64_t x3493 = INT64_MAX;
uint64_t t144 = 71952805392786314LLU;
int32_t x3503 = INT32_MIN;
int64_t x3504 = -1LL;
volatile int8_t x3525 = -1;
int32_t t147 = 595;
volatile uint64_t x3689 = UINT64_MAX;
uint8_t x3690 = UINT8_MAX;
int32_t x3743 = -1;
uint8_t x3752 = 3U;
int64_t x3806 = 432627936LL;
int16_t x3837 = INT16_MIN;
int16_t x3840 = -1;
int16_t x3853 = INT16_MIN;
uint16_t x3854 = 6U;
static int64_t t160 = 20495657LL;
volatile uint64_t x3911 = 30157615087LLU;
uint32_t x3936 = UINT32_MAX;
static int64_t x3969 = 1323039835750005036LL;
uint16_t x3972 = UINT16_MAX;
static int32_t x4059 = -1;
uint8_t x4060 = 1U;
uint32_t x4061 = UINT32_MAX;
int8_t x4064 = -1;
uint32_t t166 = 906112U;
int32_t t170 = 11;
int32_t x4183 = -3;
int8_t x4193 = INT8_MIN;
static uint16_t x4194 = 2498U;
int32_t t173 = 411527953;
static uint64_t x4210 = 108567759156936050LLU;
uint64_t t174 = 15194LLU;
volatile uint16_t x4231 = 1U;
int16_t x4237 = -1;
static int8_t x4253 = -19;
int8_t x4254 = INT8_MAX;
uint32_t x4270 = UINT32_MAX;
volatile uint32_t t178 = 83U;
int16_t x4334 = 3735;
int8_t x4362 = INT8_MAX;
uint16_t x4363 = 13U;
volatile int32_t t183 = -229353;
int32_t x4378 = INT32_MAX;
int32_t x4379 = INT32_MIN;
uint8_t x4382 = 101U;
static uint8_t x4384 = UINT8_MAX;
int64_t x4424 = -1LL;
uint8_t x4430 = 2U;
int64_t t187 = 1798272150465261814LL;
int64_t x4455 = INT64_MIN;
uint8_t x4458 = 47U;
uint16_t x4459 = 4U;
volatile int32_t t189 = -10780240;
volatile int64_t x4503 = INT64_MIN;
volatile int16_t x4520 = INT16_MIN;
volatile int64_t t191 = 18234041330190LL;
int32_t x4525 = INT32_MIN;
int32_t t192 = 199914;
uint64_t x4598 = 84254973624708LLU;
uint32_t x4606 = UINT32_MAX;
static volatile uint32_t t197 = 123508651U;
volatile int8_t x4696 = 1;


void f0(void) {
    	uint8_t x5 = 78U;
	int32_t x6 = 67067033;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t0 = 3341;

    t0 = (x5%(x6>>(x7%x8)));

    if (t0 != 78) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x9 = 64898875395493192LL;
	uint16_t x10 = 1795U;
	static volatile int64_t x12 = 3453LL;

    t1 = (x9%(x10>>(x11%x12)));

    if (t1 != 202LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x29 = 13559026LLU;
	uint32_t x30 = UINT32_MAX;
	int16_t x31 = INT16_MIN;
	int8_t x32 = -1;
	uint64_t t2 = 12624666327394015LLU;

    t2 = (x29%(x30>>(x31%x32)));

    if (t2 != 13559026LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x69 = INT32_MAX;
	int8_t x70 = INT8_MAX;
	uint64_t x71 = UINT64_MAX;
	uint8_t x72 = UINT8_MAX;

    t3 = (x69%(x70>>(x71%x72)));

    if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x77 = -5688805711LL;
	volatile int64_t x78 = 816133LL;
	int16_t x79 = INT16_MAX;
	static int8_t x80 = -1;
	volatile int64_t t4 = 5730LL;

    t4 = (x77%(x78>>(x79%x80)));

    if (t4 != -358701LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x85 = INT32_MAX;
	static volatile uint32_t x86 = UINT32_MAX;
	uint16_t x87 = 1U;
	int32_t x88 = INT32_MAX;

    t5 = (x85%(x86>>(x87%x88)));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x89 = 0U;
	uint64_t x90 = 49136LLU;
	uint8_t x91 = 94U;
	uint16_t x92 = 1U;
	uint64_t t6 = 2655748424156LLU;

    t6 = (x89%(x90>>(x91%x92)));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x93 = 191U;
	static uint32_t x94 = 9U;
	volatile uint32_t x95 = 994710703U;
	uint8_t x96 = 1U;
	volatile uint32_t t7 = 5556121U;

    t7 = (x93%(x94>>(x95%x96)));

    if (t7 != 2U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x97 = 3U;
	int32_t x98 = 392;
	volatile uint64_t x99 = 7LLU;
	int8_t x100 = INT8_MAX;
	volatile int32_t t8 = 161694;

    t8 = (x97%(x98>>(x99%x100)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x105 = UINT64_MAX;
	static int8_t x107 = INT8_MIN;
	volatile uint64_t t9 = 7834926826028806LLU;

    t9 = (x105%(x106>>(x107%x108)));

    if (t9 != 3384LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x149 = -103601210;
	int16_t x150 = INT16_MAX;
	int16_t x151 = 1;
	int64_t x152 = INT64_MIN;
	volatile int32_t t10 = 1377915;

    t10 = (x149%(x150>>(x151%x152)));

    if (t10 != -11501) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x169 = INT16_MAX;
	volatile int32_t x170 = INT32_MAX;
	int64_t x171 = INT64_MIN;
	int64_t x172 = INT64_MIN;

    t11 = (x169%(x170>>(x171%x172)));

    if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x217 = -1;
	uint64_t x218 = 30LLU;
	int8_t x219 = 0;
	int16_t x220 = -1;
	volatile uint64_t t12 = 10849438364314914LLU;

    t12 = (x217%(x218>>(x219%x220)));

    if (t12 != 15LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x233 = 13268;
	uint32_t x234 = UINT32_MAX;
	uint32_t t13 = 544064U;

    t13 = (x233%(x234>>(x235%x236)));

    if (t13 != 13268U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x237 = -6;
	volatile int32_t x239 = 864715;
	static volatile int32_t x240 = 1;
	volatile int64_t t14 = 6LL;

    t14 = (x237%(x238>>(x239%x240)));

    if (t14 != -6LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x302 = 82U;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t15 = 711;

    t15 = (x301%(x302>>(x303%x304)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x313 = INT8_MIN;
	int16_t x314 = INT16_MAX;
	int16_t x315 = -642;
	volatile int32_t t16 = 7;

    t16 = (x313%(x314>>(x315%x316)));

    if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x349 = -13091;
	uint16_t x351 = 1U;
	volatile uint64_t x352 = UINT64_MAX;
	int64_t t17 = 382878LL;

    t17 = (x349%(x350>>(x351%x352)));

    if (t17 != -13091LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x353 = 632947498U;
	volatile uint16_t x355 = 1U;
	uint32_t t18 = 194635U;

    t18 = (x353%(x354>>(x355%x356)));

    if (t18 != 12090U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x365 = INT8_MAX;
	volatile uint64_t x366 = UINT64_MAX;
	uint16_t x367 = 62U;
	uint64_t x368 = 772911092LLU;

    t19 = (x365%(x366>>(x367%x368)));

    if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x401 = INT32_MAX;
	int32_t t20 = 35767769;

    t20 = (x401%(x402>>(x403%x404)));

    if (t20 != 7) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x405 = 846U;
	uint8_t x406 = UINT8_MAX;
	int16_t x407 = 0;
	int32_t t21 = 22809934;

    t21 = (x405%(x406>>(x407%x408)));

    if (t21 != 81) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x425 = 909955LLU;
	uint64_t x426 = 369175411LLU;
	uint64_t x428 = 1410684487654596375LLU;
	volatile uint64_t t22 = 47844141599496LLU;

    t22 = (x425%(x426>>(x427%x428)));

    if (t22 != 909955LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x433 = 992059LL;
	int16_t x434 = 1341;
	int64_t x435 = INT64_MAX;
	static volatile int64_t t23 = -122696435LL;

    t23 = (x433%(x434>>(x435%x436)));

    if (t23 != 1060LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x462 = 21041U;
	static volatile int16_t x463 = INT16_MAX;
	volatile int8_t x464 = -1;
	volatile uint32_t t24 = 25U;

    t24 = (x461%(x462>>(x463%x464)));

    if (t24 != 4471U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x505 = -251695558118640486LL;
	uint16_t x506 = UINT16_MAX;
	uint8_t x507 = 13U;
	static int8_t x508 = -1;

    t25 = (x505%(x506>>(x507%x508)));

    if (t25 != -36831LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x529 = INT64_MIN;
	uint16_t x530 = 3U;
	int64_t x531 = INT64_MIN;
	volatile int16_t x532 = -1;
	int64_t t26 = -3250989553051LL;

    t26 = (x529%(x530>>(x531%x532)));

    if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x537 = -17;
	int64_t x538 = INT64_MAX;
	uint8_t x540 = 45U;
	static int64_t t27 = 1334043427LL;

    t27 = (x537%(x538>>(x539%x540)));

    if (t27 != -17LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x557 = INT16_MIN;
	int32_t x558 = 23;
	static volatile int32_t x559 = INT32_MIN;
	volatile int32_t t28 = 0;

    t28 = (x557%(x558>>(x559%x560)));

    if (t28 != -16) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x588 = 1U;
	uint32_t t29 = 1884120093U;

    t29 = (x585%(x586>>(x587%x588)));

    if (t29 != 3U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x589 = -1LL;
	static uint32_t x590 = 147U;
	int32_t x592 = -1;

    t30 = (x589%(x590>>(x591%x592)));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x617 = INT8_MAX;
	static uint16_t x618 = 11U;
	static uint16_t x619 = 1U;
	int32_t x620 = -80;
	volatile int32_t t31 = 657559;

    t31 = (x617%(x618>>(x619%x620)));

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x673 = INT64_MIN;
	int8_t x675 = INT8_MIN;
	uint32_t x676 = 4U;

    t32 = (x673%(x674>>(x675%x676)));

    if (t32 != -360LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x690 = INT16_MAX;
	int16_t x691 = 1728;
	uint32_t x692 = 3U;
	int32_t t33 = 325802834;

    t33 = (x689%(x690>>(x691%x692)));

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x737 = INT8_MAX;
	uint64_t x739 = 11134608LLU;
	static uint16_t x740 = 2U;
	static int32_t t34 = -104551;

    t34 = (x737%(x738>>(x739%x740)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x741 = INT8_MAX;
	uint16_t x742 = UINT16_MAX;
	uint32_t x743 = 840U;
	uint16_t x744 = 12U;
	static int32_t t35 = 976;

    t35 = (x741%(x742>>(x743%x744)));

    if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x761 = 79U;
	int64_t x762 = INT64_MAX;
	volatile int8_t x763 = 1;
	int16_t x764 = INT16_MIN;
	volatile int64_t t36 = -1665416275278251LL;

    t36 = (x761%(x762>>(x763%x764)));

    if (t36 != 79LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x806 = 4146124LLU;
	uint8_t x807 = 1U;
	uint8_t x808 = 3U;
	uint64_t t37 = 1289430280279LLU;

    t37 = (x805%(x806>>(x807%x808)));

    if (t37 != 14648LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x813 = UINT16_MAX;
	static volatile int16_t x814 = INT16_MAX;
	static int8_t x816 = -1;
	volatile int32_t t38 = -23816060;

    t38 = (x813%(x814>>(x815%x816)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x829 = INT32_MIN;
	int8_t x830 = INT8_MAX;
	int8_t x832 = INT8_MIN;
	volatile int32_t t39 = 1546694;

    t39 = (x829%(x830>>(x831%x832)));

    if (t39 != -8) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x857 = UINT16_MAX;
	int64_t x858 = 1421795LL;
	volatile uint32_t x859 = UINT32_MAX;
	int8_t x860 = -2;

    t40 = (x857%(x858>>(x859%x860)));

    if (t40 != 65535LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x866 = UINT16_MAX;
	int8_t x867 = -1;
	int32_t x868 = -1;
	static int32_t t41 = 897;

    t41 = (x865%(x866>>(x867%x868)));

    if (t41 != 54847) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x877 = -2LL;
	static volatile uint16_t x878 = 18828U;
	uint64_t x880 = 153511156686025LLU;
	volatile int64_t t42 = 46464LL;

    t42 = (x877%(x878>>(x879%x880)));

    if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x897 = INT16_MIN;
	uint32_t x898 = 2800073U;
	uint64_t x899 = 2LLU;
	volatile int16_t x900 = INT16_MIN;
	volatile uint32_t t43 = 9795861U;

    t43 = (x897%(x898>>(x899%x900)));

    if (t43 != 324098U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x925 = INT8_MIN;
	int64_t x926 = 4171813947LL;
	uint16_t x927 = 4U;
	int16_t x928 = 1;
	static int64_t t44 = -79366743LL;

    t44 = (x925%(x926>>(x927%x928)));

    if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x933 = 843U;
	volatile uint64_t x934 = 67061878527523LLU;
	static uint8_t x935 = 0U;
	static uint64_t x936 = 77LLU;
	uint64_t t45 = 25123497203933053LLU;

    t45 = (x933%(x934>>(x935%x936)));

    if (t45 != 843LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x966 = 77U;
	int64_t x967 = INT64_MIN;
	int32_t x968 = INT32_MIN;
	volatile int64_t t46 = -763114404079931853LL;

    t46 = (x965%(x966>>(x967%x968)));

    if (t46 != 7LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x989 = INT8_MIN;
	int16_t x990 = 3954;
	static int32_t x991 = INT32_MAX;
	int8_t x992 = INT8_MAX;
	volatile int32_t t47 = 3852519;

    t47 = (x989%(x990>>(x991%x992)));

    if (t47 != -8) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x1037 = 1131869767LLU;
	static volatile uint64_t x1038 = 27057411498382267LLU;
	uint16_t x1039 = 1795U;
	int64_t x1040 = -1LL;

    t48 = (x1037%(x1038>>(x1039%x1040)));

    if (t48 != 1131869767LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x1102 = UINT64_MAX;
	int16_t x1104 = -1;
	static volatile uint64_t t49 = 3138941LLU;

    t49 = (x1101%(x1102>>(x1103%x1104)));

    if (t49 != 1795LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x1129 = 3U;
	uint16_t x1130 = 7U;
	int32_t t50 = -11;

    t50 = (x1129%(x1130>>(x1131%x1132)));

    if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x1133 = INT64_MIN;
	volatile int32_t x1134 = INT32_MAX;
	uint64_t x1136 = UINT64_MAX;
	static volatile int64_t t51 = 99812LL;

    t51 = (x1133%(x1134>>(x1135%x1136)));

    if (t51 != -2LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x1145 = INT32_MIN;
	int8_t x1146 = 24;
	static int8_t x1147 = INT8_MIN;
	int16_t x1148 = -2;

    t52 = (x1145%(x1146>>(x1147%x1148)));

    if (t52 != -8) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x1151 = UINT16_MAX;
	uint16_t x1152 = UINT16_MAX;
	volatile int32_t t53 = -93143;

    t53 = (x1149%(x1150>>(x1151%x1152)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x1185 = INT64_MIN;
	volatile uint32_t x1186 = 1794447U;
	static int16_t x1187 = -1;
	int8_t x1188 = -1;
	int64_t t54 = -22518LL;

    t54 = (x1185%(x1186>>(x1187%x1188)));

    if (t54 != -518453LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x1193 = INT8_MAX;
	volatile uint8_t x1194 = 71U;
	int64_t x1195 = -32076575914LL;
	volatile int16_t x1196 = -1;

    t55 = (x1193%(x1194>>(x1195%x1196)));

    if (t55 != 56) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x1197 = 2;
	uint8_t x1198 = 1U;
	uint64_t x1199 = UINT64_MAX;
	int16_t x1200 = -1;
	int32_t t56 = 3283596;

    t56 = (x1197%(x1198>>(x1199%x1200)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x1249 = 36U;
	int64_t x1250 = INT64_MAX;
	volatile uint8_t x1251 = 22U;
	uint8_t x1252 = 1U;
	volatile int64_t t57 = -692079130LL;

    t57 = (x1249%(x1250>>(x1251%x1252)));

    if (t57 != 36LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x1329 = 3571;
	uint32_t x1330 = UINT32_MAX;
	static uint8_t x1331 = 6U;
	int32_t x1332 = 2;
	uint32_t t58 = 165201U;

    t58 = (x1329%(x1330>>(x1331%x1332)));

    if (t58 != 3571U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x1349 = INT32_MIN;
	static uint16_t x1350 = 2U;
	volatile int16_t x1351 = 0;
	uint8_t x1352 = UINT8_MAX;
	volatile int32_t t59 = 21;

    t59 = (x1349%(x1350>>(x1351%x1352)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x1358 = 1651990;
	uint64_t x1359 = UINT64_MAX;
	volatile int32_t t60 = -5;

    t60 = (x1357%(x1358>>(x1359%x1360)));

    if (t60 != 12) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x1437 = UINT8_MAX;
	volatile int8_t x1439 = -1;
	int32_t t61 = -71412159;

    t61 = (x1437%(x1438>>(x1439%x1440)));

    if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x1485 = 77U;
	int32_t x1487 = INT32_MIN;
	static int32_t x1488 = INT32_MIN;
	static volatile uint32_t t62 = 13923U;

    t62 = (x1485%(x1486>>(x1487%x1488)));

    if (t62 != 77U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x1514 = 1117503697832063LLU;
	int16_t x1516 = 7;
	volatile uint64_t t63 = 37931755948415LLU;

    t63 = (x1513%(x1514>>(x1515%x1516)));

    if (t63 != 97LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x1537 = -1;
	uint8_t x1538 = 23U;
	uint8_t x1539 = 3U;
	int8_t x1540 = INT8_MIN;
	static int32_t t64 = -1034804;

    t64 = (x1537%(x1538>>(x1539%x1540)));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x1553 = 16;
	uint16_t x1555 = UINT16_MAX;
	static int16_t x1556 = -1;
	volatile uint32_t t65 = 15U;

    t65 = (x1553%(x1554>>(x1555%x1556)));

    if (t65 != 16U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x1569 = UINT64_MAX;
	volatile int16_t x1570 = INT16_MAX;
	int32_t x1571 = INT32_MIN;
	volatile uint32_t x1572 = 5U;
	volatile uint64_t t66 = 82LLU;

    t66 = (x1569%(x1570>>(x1571%x1572)));

    if (t66 != 15LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x1574 = 16345647046749LLU;
	uint32_t x1576 = 4U;

    t67 = (x1573%(x1574>>(x1575%x1576)));

    if (t67 != 2LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int32_t x1613 = INT32_MIN;
	uint64_t x1614 = UINT64_MAX;
	uint64_t x1615 = UINT64_MAX;
	int32_t x1616 = -1;
	volatile uint64_t t68 = 15148587473LLU;

    t68 = (x1613%(x1614>>(x1615%x1616)));

    if (t68 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x1633 = INT16_MAX;
	uint8_t x1634 = 118U;
	uint64_t x1635 = UINT64_MAX;
	volatile int32_t t69 = -9975068;

    t69 = (x1633%(x1634>>(x1635%x1636)));

    if (t69 != 22) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x1673 = -1;
	int16_t x1675 = 1;
	uint32_t x1676 = UINT32_MAX;
	int32_t t70 = 534436588;

    t70 = (x1673%(x1674>>(x1675%x1676)));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x1709 = UINT32_MAX;
	uint16_t x1710 = 639U;
	static int8_t x1712 = INT8_MIN;

    t71 = (x1709%(x1710>>(x1711%x1712)));

    if (t71 != 363U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x1725 = 1U;
	int64_t x1726 = INT64_MAX;
	uint16_t x1727 = UINT16_MAX;
	volatile int64_t x1728 = -1LL;
	volatile int64_t t72 = 7413332763160LL;

    t72 = (x1725%(x1726>>(x1727%x1728)));

    if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x1750 = 913689362711533LLU;
	int16_t x1751 = INT16_MIN;
	volatile uint64_t t73 = 436251538LLU;

    t73 = (x1749%(x1750>>(x1751%x1752)));

    if (t73 != 168LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x1757 = -10;
	int32_t x1758 = INT32_MAX;
	volatile int16_t x1759 = 70;
	static uint8_t x1760 = 8U;
	int32_t t74 = 1;

    t74 = (x1757%(x1758>>(x1759%x1760)));

    if (t74 != -10) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x1765 = UINT64_MAX;
	uint64_t x1766 = UINT64_MAX;
	uint64_t x1767 = UINT64_MAX;
	uint8_t x1768 = 4U;
	static volatile uint64_t t75 = 10LLU;

    t75 = (x1765%(x1766>>(x1767%x1768)));

    if (t75 != 7LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x1782 = UINT32_MAX;
	volatile uint16_t x1783 = UINT16_MAX;
	int32_t x1784 = -1;
	uint32_t t76 = 4284U;

    t76 = (x1781%(x1782>>(x1783%x1784)));

    if (t76 != 4294934528U) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x1805 = 60;
	uint32_t x1807 = UINT32_MAX;
	int32_t t77 = -1638;

    t77 = (x1805%(x1806>>(x1807%x1808)));

    if (t77 != 60) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x1845 = UINT16_MAX;
	int8_t x1846 = INT8_MAX;
	static int8_t x1847 = -1;
	uint64_t x1848 = UINT64_MAX;

    t78 = (x1845%(x1846>>(x1847%x1848)));

    if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x1893 = -1;
	uint16_t x1894 = 28U;
	uint8_t x1896 = 7U;
	volatile int32_t t79 = -906563550;

    t79 = (x1893%(x1894>>(x1895%x1896)));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x1923 = 112U;
	int8_t x1924 = 27;

    t80 = (x1921%(x1922>>(x1923%x1924)));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x1926 = 22005U;
	static int8_t x1927 = INT8_MAX;
	int32_t t81 = 33380609;

    t81 = (x1925%(x1926>>(x1927%x1928)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x1949 = 762129LL;
	uint64_t x1950 = UINT64_MAX;
	static int16_t x1952 = INT16_MIN;

    t82 = (x1949%(x1950>>(x1951%x1952)));

    if (t82 != 762129LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x1991 = -31306670899551208LL;
	volatile uint8_t x1992 = 7U;
	int32_t t83 = 9773006;

    t83 = (x1989%(x1990>>(x1991%x1992)));

    if (t83 != -235) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x2001 = INT32_MAX;
	volatile int16_t x2002 = INT16_MAX;
	int16_t x2004 = -1;
	volatile int32_t t84 = -28894;

    t84 = (x2001%(x2002>>(x2003%x2004)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x2013 = INT64_MAX;
	int16_t x2014 = INT16_MAX;
	static uint64_t x2015 = 1LLU;
	uint64_t x2016 = 646LLU;

    t85 = (x2013%(x2014>>(x2015%x2016)));

    if (t85 != 127LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x2017 = 389LLU;
	uint32_t x2018 = 706U;
	uint16_t x2019 = 189U;
	uint8_t x2020 = 15U;
	volatile uint64_t t86 = 5961236751705381340LLU;

    t86 = (x2017%(x2018>>(x2019%x2020)));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x2070 = UINT8_MAX;
	uint64_t x2071 = UINT64_MAX;
	volatile uint32_t t87 = 468518U;

    t87 = (x2069%(x2070>>(x2071%x2072)));

    if (t87 != 245U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x2073 = INT8_MIN;
	static int8_t x2074 = 4;
	volatile int32_t x2075 = INT32_MIN;
	static int16_t x2076 = INT16_MIN;
	int32_t t88 = -809855637;

    t88 = (x2073%(x2074>>(x2075%x2076)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x2092 = -1;
	static int64_t t89 = 182368255129LL;

    t89 = (x2089%(x2090>>(x2091%x2092)));

    if (t89 != 30LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x2109 = 10U;
	uint8_t x2110 = 2U;
	int64_t x2111 = 170371080621651137LL;
	volatile uint16_t x2112 = 2U;

    t90 = (x2109%(x2110>>(x2111%x2112)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x2117 = 1U;
	int8_t x2118 = 7;
	uint8_t x2120 = 3U;
	int32_t t91 = 1;

    t91 = (x2117%(x2118>>(x2119%x2120)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x2129 = 7278LLU;
	int32_t x2130 = INT32_MAX;
	uint16_t x2131 = UINT16_MAX;
	int16_t x2132 = -11;
	uint64_t t92 = 7275342LLU;

    t92 = (x2129%(x2130>>(x2131%x2132)));

    if (t92 != 7278LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x2202 = UINT8_MAX;
	uint8_t x2203 = 7U;
	int32_t t93 = 129120331;

    t93 = (x2201%(x2202>>(x2203%x2204)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x2254 = 96LLU;
	int8_t x2255 = 6;
	static int32_t x2256 = INT32_MAX;
	uint64_t t94 = 3217729283952083LLU;

    t94 = (x2253%(x2254>>(x2255%x2256)));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x2269 = INT32_MIN;
	static uint16_t x2270 = 5969U;
	static volatile int8_t x2271 = 1;
	int8_t x2272 = -10;
	volatile int32_t t95 = -472;

    t95 = (x2269%(x2270>>(x2271%x2272)));

    if (t95 != -304) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x2289 = INT8_MIN;
	static uint64_t x2290 = UINT64_MAX;
	uint16_t x2291 = 0U;

    t96 = (x2289%(x2290>>(x2291%x2292)));

    if (t96 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x2298 = 1574689052LLU;
	volatile int32_t x2300 = -1;
	volatile uint64_t t97 = 1037898398LLU;

    t97 = (x2297%(x2298>>(x2299%x2300)));

    if (t97 != 1240524811LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x2317 = INT64_MAX;
	volatile uint64_t x2318 = UINT64_MAX;
	volatile uint8_t x2319 = 53U;
	static volatile int8_t x2320 = INT8_MAX;
	uint64_t t98 = 901243735623LLU;

    t98 = (x2317%(x2318>>(x2319%x2320)));

    if (t98 != 255LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x2377 = 29;
	uint32_t x2378 = 11918U;
	uint64_t x2379 = UINT64_MAX;
	int8_t x2380 = -1;
	uint32_t t99 = 7769U;

    t99 = (x2377%(x2378>>(x2379%x2380)));

    if (t99 != 29U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x2449 = INT32_MAX;
	int64_t x2450 = INT64_MAX;
	uint8_t x2451 = 14U;
	int16_t x2452 = INT16_MIN;
	int64_t t100 = 893631891600LL;

    t100 = (x2449%(x2450>>(x2451%x2452)));

    if (t100 != 2147483647LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x2465 = INT64_MIN;
	static uint8_t x2466 = 7U;
	uint8_t x2467 = UINT8_MAX;
	volatile int8_t x2468 = -1;
	int64_t t101 = 1364448534545440LL;

    t101 = (x2465%(x2466>>(x2467%x2468)));

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x2490 = 6;
	static int64_t x2491 = -1LL;
	static int16_t x2492 = -1;
	static volatile int32_t t102 = -121308652;

    t102 = (x2489%(x2490>>(x2491%x2492)));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x2541 = 9;
	uint8_t x2542 = UINT8_MAX;
	int8_t x2543 = 7;
	int32_t x2544 = -1;
	int32_t t103 = 366;

    t103 = (x2541%(x2542>>(x2543%x2544)));

    if (t103 != 9) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x2569 = 46759LL;
	int32_t x2570 = INT32_MAX;
	int64_t x2571 = INT64_MAX;
	static volatile uint16_t x2572 = 1U;
	volatile int64_t t104 = 10231940467209557LL;

    t104 = (x2569%(x2570>>(x2571%x2572)));

    if (t104 != 46759LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x2577 = 124U;
	uint8_t x2578 = UINT8_MAX;
	uint8_t x2579 = 1U;
	int16_t x2580 = INT16_MAX;
	volatile int32_t t105 = -771194378;

    t105 = (x2577%(x2578>>(x2579%x2580)));

    if (t105 != 124) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x2609 = 24U;
	uint16_t x2611 = 612U;
	uint16_t x2612 = 39U;
	uint32_t t106 = 28U;

    t106 = (x2609%(x2610>>(x2611%x2612)));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x2621 = INT8_MIN;
	int64_t x2622 = INT64_MAX;
	uint32_t x2623 = 0U;
	uint64_t x2624 = UINT64_MAX;
	int64_t t107 = 45269728779667LL;

    t107 = (x2621%(x2622>>(x2623%x2624)));

    if (t107 != -128LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x2625 = INT64_MIN;
	uint32_t x2626 = UINT32_MAX;
	int16_t x2627 = INT16_MAX;
	static volatile int8_t x2628 = INT8_MAX;

    t108 = (x2625%(x2626>>(x2627%x2628)));

    if (t108 != -2LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x2637 = UINT64_MAX;
	uint64_t x2638 = 1067014220284555LLU;
	static int8_t x2639 = -54;
	int8_t x2640 = -1;
	volatile uint64_t t109 = 4463786293124LLU;

    t109 = (x2637%(x2638>>(x2639%x2640)));

    if (t109 != 202233430164775LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x2641 = INT64_MIN;
	volatile int64_t x2642 = INT64_MAX;
	volatile int64_t t110 = -973LL;

    t110 = (x2641%(x2642>>(x2643%x2644)));

    if (t110 != -32768LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x2645 = 79U;
	int64_t x2646 = INT64_MAX;
	int32_t x2647 = 1062;
	static int32_t x2648 = -1;

    t111 = (x2645%(x2646>>(x2647%x2648)));

    if (t111 != 79LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x2649 = INT8_MAX;
	uint64_t x2650 = 700408088143LLU;
	uint32_t x2651 = 3U;
	volatile uint64_t t112 = 396009522653575LLU;

    t112 = (x2649%(x2650>>(x2651%x2652)));

    if (t112 != 127LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x2689 = INT8_MAX;
	static volatile uint8_t x2691 = UINT8_MAX;
	volatile int16_t x2692 = 28;
	int32_t t113 = 197;

    t113 = (x2689%(x2690>>(x2691%x2692)));

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x2706 = 55;
	volatile int16_t x2707 = INT16_MIN;
	int8_t x2708 = INT8_MIN;

    t114 = (x2705%(x2706>>(x2707%x2708)));

    if (t114 != 25U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x2714 = 40129045578LLU;
	int8_t x2715 = -1;
	static int16_t x2716 = -1;

    t115 = (x2713%(x2714>>(x2715%x2716)));

    if (t115 != 791639439LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x2749 = INT32_MIN;
	int32_t x2750 = INT32_MAX;
	static uint32_t x2751 = UINT32_MAX;
	static int16_t x2752 = -1;
	volatile int32_t t116 = 519392;

    t116 = (x2749%(x2750>>(x2751%x2752)));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x2762 = INT32_MAX;
	int8_t x2763 = 0;

    t117 = (x2761%(x2762>>(x2763%x2764)));

    if (t117 != -128) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x2786 = UINT8_MAX;
	int32_t x2788 = 1;

    t118 = (x2785%(x2786>>(x2787%x2788)));

    if (t118 != 9U) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x2797 = INT64_MIN;
	static int8_t x2800 = 4;
	volatile int64_t t119 = -57096LL;

    t119 = (x2797%(x2798>>(x2799%x2800)));

    if (t119 != -32768LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x2817 = 8U;
	static int64_t x2818 = 24671837532836LL;
	int32_t x2819 = 25053104;
	int32_t x2820 = -7;
	volatile int64_t t120 = -55868704710LL;

    t120 = (x2817%(x2818>>(x2819%x2820)));

    if (t120 != 8LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x2873 = 1U;
	uint32_t x2874 = 13937426U;
	int32_t x2875 = 1;
	static volatile int64_t x2876 = -1LL;

    t121 = (x2873%(x2874>>(x2875%x2876)));

    if (t121 != 1U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x2977 = 0U;
	volatile uint32_t x2979 = UINT32_MAX;
	static volatile uint32_t t122 = 97423U;

    t122 = (x2977%(x2978>>(x2979%x2980)));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint8_t x2989 = 74U;
	uint32_t x2990 = UINT32_MAX;
	uint8_t x2991 = 3U;
	int64_t x2992 = -1LL;
	volatile uint32_t t123 = 172701562U;

    t123 = (x2989%(x2990>>(x2991%x2992)));

    if (t123 != 74U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x3001 = INT32_MIN;
	uint64_t x3002 = UINT64_MAX;
	int8_t x3003 = 3;
	static volatile uint16_t x3004 = 189U;
	uint64_t t124 = 31LLU;

    t124 = (x3001%(x3002>>(x3003%x3004)));

    if (t124 != 2305843007066210311LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x3009 = INT8_MAX;
	volatile uint32_t x3010 = 23075411U;
	uint64_t x3012 = 7LLU;
	volatile uint32_t t125 = 188562U;

    t125 = (x3009%(x3010>>(x3011%x3012)));

    if (t125 != 127U) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x3021 = 1;
	static uint32_t x3022 = UINT32_MAX;
	int16_t x3023 = 1;
	volatile int8_t x3024 = INT8_MIN;
	uint32_t t126 = 822594U;

    t126 = (x3021%(x3022>>(x3023%x3024)));

    if (t126 != 1U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x3050 = 392019LL;
	static int64_t t127 = -5119472LL;

    t127 = (x3049%(x3050>>(x3051%x3052)));

    if (t127 != 32767LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x3057 = INT32_MIN;
	uint64_t x3058 = 131724LLU;
	int64_t x3059 = -1866078154398LL;
	volatile uint64_t t128 = 3930989036919058506LLU;

    t128 = (x3057%(x3058>>(x3059%x3060)));

    if (t128 != 58244LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x3085 = INT16_MAX;
	static uint64_t x3086 = UINT64_MAX;
	uint8_t x3087 = 3U;
	uint16_t x3088 = UINT16_MAX;
	static volatile uint64_t t129 = 1037635724889552630LLU;

    t129 = (x3085%(x3086>>(x3087%x3088)));

    if (t129 != 32767LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x3089 = 4LLU;
	uint16_t x3090 = UINT16_MAX;
	int8_t x3091 = INT8_MAX;
	int8_t x3092 = INT8_MAX;

    t130 = (x3089%(x3090>>(x3091%x3092)));

    if (t130 != 4LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x3185 = 369LL;
	uint32_t x3186 = 15U;
	volatile uint16_t x3187 = 28777U;
	volatile int8_t x3188 = -1;
	int64_t t131 = 318LL;

    t131 = (x3185%(x3186>>(x3187%x3188)));

    if (t131 != 9LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x3201 = INT64_MAX;
	int16_t x3202 = INT16_MAX;
	int32_t x3203 = 0;
	int64_t t132 = 498LL;

    t132 = (x3201%(x3202>>(x3203%x3204)));

    if (t132 != 7LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x3209 = 55612333447930LL;
	int64_t x3210 = 756034629087031650LL;
	volatile int8_t x3211 = INT8_MAX;

    t133 = (x3209%(x3210>>(x3211%x3212)));

    if (t133 != 55612333447930LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x3233 = UINT32_MAX;
	static int32_t x3234 = 23107885;
	int8_t x3235 = 10;
	int8_t x3236 = 3;
	static volatile uint32_t t134 = 144080U;

    t134 = (x3233%(x3234>>(x3235%x3236)));

    if (t134 != 8454813U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x3305 = -1LL;
	uint32_t x3306 = 92599496U;
	int32_t x3308 = INT32_MIN;
	volatile int64_t t135 = 32770LL;

    t135 = (x3305%(x3306>>(x3307%x3308)));

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x3313 = 19733U;
	uint64_t x3314 = 5334937736792LLU;
	int8_t x3315 = 0;
	volatile uint64_t x3316 = UINT64_MAX;
	static uint64_t t136 = 4108956620825745LLU;

    t136 = (x3313%(x3314>>(x3315%x3316)));

    if (t136 != 19733LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x3317 = 11011312U;
	static uint16_t x3318 = 77U;
	uint32_t t137 = 57835U;

    t137 = (x3317%(x3318>>(x3319%x3320)));

    if (t137 != 4U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x3321 = UINT8_MAX;
	int8_t x3322 = INT8_MAX;
	static int64_t x3324 = -1LL;
	volatile int32_t t138 = 273900;

    t138 = (x3321%(x3322>>(x3323%x3324)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x3350 = INT64_MAX;
	volatile int16_t x3351 = INT16_MIN;
	int8_t x3352 = -1;
	static int64_t t139 = -1689979084LL;

    t139 = (x3349%(x3350>>(x3351%x3352)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x3361 = 0;
	uint32_t x3362 = 508620260U;
	int64_t x3363 = -1LL;
	int64_t x3364 = -1LL;
	volatile uint32_t t140 = 1U;

    t140 = (x3361%(x3362>>(x3363%x3364)));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x3377 = INT16_MIN;
	uint16_t x3380 = UINT16_MAX;
	int32_t t141 = 8;

    t141 = (x3377%(x3378>>(x3379%x3380)));

    if (t141 != -32768) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x3429 = INT8_MAX;
	int8_t x3430 = INT8_MAX;
	static int16_t x3431 = INT16_MIN;
	static int8_t x3432 = 1;

    t142 = (x3429%(x3430>>(x3431%x3432)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x3453 = INT32_MIN;
	uint32_t x3454 = 61799U;
	static volatile uint16_t x3455 = 170U;
	int64_t x3456 = -1LL;
	uint32_t t143 = 233441006U;

    t143 = (x3453%(x3454>>(x3455%x3456)));

    if (t143 != 30197U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x3494 = 59157LLU;
	volatile int16_t x3495 = -1;
	int32_t x3496 = -1;

    t144 = (x3493%(x3494>>(x3495%x3496)));

    if (t144 != 19789LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x3501 = -1LL;
	uint16_t x3502 = 1427U;
	int64_t t145 = 215372729034LL;

    t145 = (x3501%(x3502>>(x3503%x3504)));

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x3513 = -1;
	uint64_t x3514 = 33508911403813896LLU;
	uint8_t x3515 = 14U;
	static uint64_t x3516 = UINT64_MAX;
	volatile uint64_t t146 = 200433LLU;

    t146 = (x3513%(x3514>>(x3515%x3516)));

    if (t146 != 401381035550LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x3526 = 2;
	volatile int32_t x3527 = INT32_MAX;
	volatile int32_t x3528 = -1;

    t147 = (x3525%(x3526>>(x3527%x3528)));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x3545 = INT32_MAX;
	uint16_t x3546 = UINT16_MAX;
	volatile int16_t x3547 = 2;
	int32_t x3548 = 346047465;
	volatile int32_t t148 = 0;

    t148 = (x3545%(x3546>>(x3547%x3548)));

    if (t148 != 7) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x3557 = INT8_MIN;
	volatile uint32_t x3558 = 1315U;
	uint16_t x3559 = 6U;
	static volatile int8_t x3560 = -14;
	volatile uint32_t t149 = 178835649U;

    t149 = (x3557%(x3558>>(x3559%x3560)));

    if (t149 != 8U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x3645 = 116538454934LLU;
	static uint32_t x3646 = 2160U;
	uint64_t x3647 = UINT64_MAX;
	int64_t x3648 = INT64_MAX;
	volatile uint64_t t150 = 374069105707320LLU;

    t150 = (x3645%(x3646>>(x3647%x3648)));

    if (t150 != 854LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x3691 = -6581041;
	int32_t x3692 = -1;
	uint64_t t151 = 1LLU;

    t151 = (x3689%(x3690>>(x3691%x3692)));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x3741 = -110532LL;
	int64_t x3742 = INT64_MAX;
	uint64_t x3744 = UINT64_MAX;
	volatile int64_t t152 = -395114012936228962LL;

    t152 = (x3741%(x3742>>(x3743%x3744)));

    if (t152 != -110532LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint8_t x3749 = 19U;
	uint32_t x3750 = 57527071U;
	uint64_t x3751 = 536385153516768494LLU;
	volatile uint32_t t153 = 6651400U;

    t153 = (x3749%(x3750>>(x3751%x3752)));

    if (t153 != 19U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x3781 = INT64_MAX;
	volatile uint32_t x3782 = UINT32_MAX;
	int16_t x3783 = 1;
	int64_t x3784 = INT64_MAX;
	volatile int64_t t154 = 15812LL;

    t154 = (x3781%(x3782>>(x3783%x3784)));

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x3805 = 14244;
	int64_t x3807 = INT64_MIN;
	int8_t x3808 = -1;
	int64_t t155 = 46728544418317LL;

    t155 = (x3805%(x3806>>(x3807%x3808)));

    if (t155 != 14244LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x3813 = INT64_MIN;
	volatile int64_t x3814 = 13194LL;
	int32_t x3815 = INT32_MIN;
	int64_t x3816 = -1LL;
	volatile int64_t t156 = 896110684233690LL;

    t156 = (x3813%(x3814>>(x3815%x3816)));

    if (t156 != -1412LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x3838 = 5U;
	int32_t x3839 = -2785864;
	volatile int32_t t157 = 5680575;

    t157 = (x3837%(x3838>>(x3839%x3840)));

    if (t157 != -3) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x3855 = 2U;
	int8_t x3856 = -1;
	int32_t t158 = -1201660;

    t158 = (x3853%(x3854>>(x3855%x3856)));

    if (t158 != -2) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int32_t x3857 = INT32_MAX;
	uint16_t x3858 = UINT16_MAX;
	int8_t x3859 = INT8_MIN;
	int16_t x3860 = -1;
	static int32_t t159 = 9464;

    t159 = (x3857%(x3858>>(x3859%x3860)));

    if (t159 != 32767) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x3897 = INT64_MIN;
	int32_t x3898 = 906;
	static int32_t x3899 = INT32_MIN;
	int32_t x3900 = INT32_MIN;

    t160 = (x3897%(x3898>>(x3899%x3900)));

    if (t160 != -8LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x3909 = 6317164U;
	volatile int32_t x3910 = INT32_MAX;
	volatile uint32_t x3912 = 118U;
	static volatile uint32_t t161 = 20158835U;

    t161 = (x3909%(x3910>>(x3911%x3912)));

    if (t161 != 28U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x3933 = -48;
	uint32_t x3934 = 542901415U;
	volatile uint8_t x3935 = 3U;
	volatile uint32_t t162 = 15U;

    t162 = (x3933%(x3934>>(x3935%x3936)));

    if (t162 != 19618660U) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x3961 = -3787204787946LL;
	uint32_t x3962 = 12892458U;
	int16_t x3963 = INT16_MAX;
	int16_t x3964 = INT16_MAX;
	int64_t t163 = -666497826183230748LL;

    t163 = (x3961%(x3962>>(x3963%x3964)));

    if (t163 != -6573072LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x3970 = 102559LLU;
	volatile uint64_t x3971 = UINT64_MAX;
	volatile uint64_t t164 = 46668LLU;

    t164 = (x3969%(x3970>>(x3971%x3972)));

    if (t164 != 89977LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x4057 = -13LL;
	uint32_t x4058 = UINT32_MAX;
	volatile int64_t t165 = -1854950LL;

    t165 = (x4057%(x4058>>(x4059%x4060)));

    if (t165 != -13LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x4062 = 172U;
	uint16_t x4063 = 186U;

    t166 = (x4061%(x4062>>(x4063%x4064)));

    if (t166 != 15U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x4069 = -1;
	volatile uint64_t x4070 = 67920LLU;
	static int32_t x4071 = INT32_MAX;
	static int16_t x4072 = -1;
	volatile uint64_t t167 = 4LLU;

    t167 = (x4069%(x4070>>(x4071%x4072)));

    if (t167 != 31935LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x4089 = -1;
	int8_t x4090 = INT8_MAX;
	int64_t x4091 = INT64_MAX;
	volatile int32_t x4092 = -1;
	volatile int32_t t168 = -30674;

    t168 = (x4089%(x4090>>(x4091%x4092)));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x4105 = 226019777U;
	uint32_t x4106 = UINT32_MAX;
	uint32_t x4107 = 30U;
	uint64_t x4108 = 115796448396117LLU;
	volatile uint32_t t169 = 106635005U;

    t169 = (x4105%(x4106>>(x4107%x4108)));

    if (t169 != 2U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x4161 = 18U;
	static uint8_t x4162 = 43U;
	static uint64_t x4163 = UINT64_MAX;
	int32_t x4164 = -1;

    t170 = (x4161%(x4162>>(x4163%x4164)));

    if (t170 != 18) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x4181 = 0;
	static uint32_t x4182 = UINT32_MAX;
	int32_t x4184 = -1;
	uint32_t t171 = 2020773705U;

    t171 = (x4181%(x4182>>(x4183%x4184)));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x4185 = -12;
	volatile uint16_t x4186 = 15U;
	int32_t x4187 = -171;
	static int32_t x4188 = -1;
	int32_t t172 = 808295;

    t172 = (x4185%(x4186>>(x4187%x4188)));

    if (t172 != -12) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x4195 = INT64_MAX;
	int16_t x4196 = -1;

    t173 = (x4193%(x4194>>(x4195%x4196)));

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x4209 = 65U;
	volatile int32_t x4211 = INT32_MIN;
	static int32_t x4212 = -4;

    t174 = (x4209%(x4210>>(x4211%x4212)));

    if (t174 != 65LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x4229 = UINT64_MAX;
	volatile int8_t x4230 = INT8_MAX;
	uint64_t x4232 = UINT64_MAX;
	volatile uint64_t t175 = 2866610LLU;

    t175 = (x4229%(x4230>>(x4231%x4232)));

    if (t175 != 15LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x4238 = 10523307989636224LL;
	int32_t x4239 = INT32_MIN;
	int16_t x4240 = -1;
	static int64_t t176 = -4974386848183LL;

    t176 = (x4237%(x4238>>(x4239%x4240)));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x4255 = 31432601LLU;
	uint8_t x4256 = 5U;
	static int32_t t177 = -39;

    t177 = (x4253%(x4254>>(x4255%x4256)));

    if (t177 != -19) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x4269 = -1;
	static int8_t x4271 = INT8_MIN;
	int64_t x4272 = -1LL;

    t178 = (x4269%(x4270>>(x4271%x4272)));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x4293 = INT16_MAX;
	uint16_t x4294 = UINT16_MAX;
	static uint8_t x4295 = 14U;
	volatile int64_t x4296 = 260979LL;
	volatile int32_t t179 = 1;

    t179 = (x4293%(x4294>>(x4295%x4296)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int8_t x4317 = INT8_MIN;
	volatile int32_t x4318 = INT32_MAX;
	uint8_t x4319 = UINT8_MAX;
	static int8_t x4320 = INT8_MAX;
	int32_t t180 = -970403;

    t180 = (x4317%(x4318>>(x4319%x4320)));

    if (t180 != -128) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x4333 = -1;
	int16_t x4335 = -21;
	static volatile int32_t x4336 = -1;
	int32_t t181 = 0;

    t181 = (x4333%(x4334>>(x4335%x4336)));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x4361 = UINT64_MAX;
	int64_t x4364 = -1LL;
	static uint64_t t182 = 24466LLU;

    t182 = (x4361%(x4362>>(x4363%x4364)));

    if (t182 != 1LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x4369 = -1;
	uint16_t x4370 = UINT16_MAX;
	int8_t x4371 = 7;
	int8_t x4372 = INT8_MIN;

    t183 = (x4369%(x4370>>(x4371%x4372)));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x4377 = 36206145654LLU;
	int16_t x4380 = INT16_MIN;
	volatile uint64_t t184 = 6203206079LLU;

    t184 = (x4377%(x4378>>(x4379%x4380)));

    if (t184 != 1846407302LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x4381 = -1;
	uint8_t x4383 = 6U;
	static volatile int32_t t185 = 308;

    t185 = (x4381%(x4382>>(x4383%x4384)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x4421 = 42U;
	uint16_t x4422 = 234U;
	int32_t x4423 = 301296083;
	static int32_t t186 = -44;

    t186 = (x4421%(x4422>>(x4423%x4424)));

    if (t186 != 42) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x4429 = -1LL;
	uint16_t x4431 = 902U;
	volatile int64_t x4432 = -1LL;

    t187 = (x4429%(x4430>>(x4431%x4432)));

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x4453 = -2;
	int16_t x4454 = 6414;
	int8_t x4456 = -1;
	volatile int32_t t188 = -32939259;

    t188 = (x4453%(x4454>>(x4455%x4456)));

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x4457 = INT8_MAX;
	static int32_t x4460 = 394184407;

    t189 = (x4457%(x4458>>(x4459%x4460)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x4501 = 2267LLU;
	int8_t x4502 = INT8_MAX;
	int8_t x4504 = -1;
	uint64_t t190 = 27330795LLU;

    t190 = (x4501%(x4502>>(x4503%x4504)));

    if (t190 != 108LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x4517 = INT64_MIN;
	int64_t x4518 = INT64_MAX;
	uint8_t x4519 = 23U;

    t191 = (x4517%(x4518>>(x4519%x4520)));

    if (t191 != -8388608LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x4526 = 83364235;
	volatile int16_t x4527 = -55;
	int8_t x4528 = -1;

    t192 = (x4525%(x4526>>(x4527%x4528)));

    if (t192 != -63377773) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x4581 = -1;
	int8_t x4582 = INT8_MAX;
	volatile uint64_t x4583 = 395643LLU;
	volatile int8_t x4584 = 13;
	int32_t t193 = 28809215;

    t193 = (x4581%(x4582>>(x4583%x4584)));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x4597 = INT32_MIN;
	uint16_t x4599 = UINT16_MAX;
	int16_t x4600 = INT16_MAX;
	uint64_t t194 = 629666915008LLU;

    t194 = (x4597%(x4598>>(x4599%x4600)));

    if (t194 != 2273655310802LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x4605 = UINT16_MAX;
	int8_t x4607 = -1;
	volatile int64_t x4608 = -1LL;
	uint32_t t195 = 17U;

    t195 = (x4605%(x4606>>(x4607%x4608)));

    if (t195 != 65535U) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x4669 = -1;
	int32_t x4670 = INT32_MAX;
	static int8_t x4671 = 2;
	volatile int64_t x4672 = 14LL;
	volatile int32_t t196 = -1;

    t196 = (x4669%(x4670>>(x4671%x4672)));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x4677 = 3U;
	uint32_t x4678 = 1070649632U;
	uint32_t x4679 = 5U;
	volatile int32_t x4680 = -154399;

    t197 = (x4677%(x4678>>(x4679%x4680)));

    if (t197 != 3U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x4693 = -8685;
	static uint64_t x4694 = 40722140843278078LLU;
	volatile int16_t x4695 = -1;
	volatile uint64_t t198 = 0LLU;

    t198 = (x4693%(x4694>>(x4695%x4696)));

    if (t198 != 40336412547851675LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x4705 = 0;
	uint32_t x4706 = 834795963U;
	int16_t x4707 = -1;
	int64_t x4708 = -1LL;
	uint32_t t199 = 5305U;

    t199 = (x4705%(x4706>>(x4707%x4708)));

    if (t199 != 0U) { NG(); } else { ; }
	
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

