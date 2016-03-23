
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

static uint32_t x2 = 16U;
int16_t x4 = INT16_MIN;
uint8_t x16 = 0U;
uint16_t x29 = 3234U;
int32_t x31 = -7878957;
int32_t x37 = 106152;
int32_t t4 = -29422;
int32_t t6 = -222567;
int16_t x58 = INT16_MAX;
volatile int64_t x61 = 297555668203974307LL;
int64_t x62 = 1801LL;
int64_t x69 = INT64_MAX;
int8_t x72 = INT8_MIN;
volatile int64_t x87 = INT64_MIN;
int32_t x93 = INT32_MAX;
int64_t x94 = INT64_MIN;
int8_t x95 = INT8_MAX;
volatile int32_t t13 = 1098;
volatile uint16_t x98 = 4U;
int64_t x100 = INT64_MAX;
uint8_t x105 = 127U;
static uint8_t x108 = 38U;
uint8_t x111 = UINT8_MAX;
int32_t t16 = 26549565;
uint64_t x113 = 504923855LLU;
uint32_t x114 = UINT32_MAX;
volatile int8_t x121 = INT8_MAX;
int16_t x124 = INT16_MIN;
volatile int64_t x153 = 125331017605LL;
int32_t x154 = INT32_MIN;
volatile uint16_t x159 = UINT16_MAX;
uint16_t x169 = 1191U;
int32_t x172 = INT32_MIN;
volatile int32_t t24 = 3;
int64_t x194 = INT64_MIN;
static int64_t x198 = INT64_MIN;
int32_t t28 = 464764;
int64_t x222 = INT64_MAX;
volatile int32_t x223 = INT32_MIN;
int16_t x224 = -945;
volatile int32_t t29 = 1;
int16_t x229 = 6;
int16_t x232 = INT16_MIN;
int32_t t33 = -1482483;
static uint8_t x249 = 7U;
int16_t x251 = INT16_MAX;
int8_t x262 = INT8_MAX;
int32_t x263 = 118;
int16_t x283 = -1;
volatile int32_t t38 = -95673;
uint16_t x292 = 365U;
int64_t x304 = 27036187977149800LL;
volatile uint8_t x325 = UINT8_MAX;
uint16_t x328 = 1U;
static int32_t x331 = INT32_MAX;
static int8_t x346 = INT8_MAX;
uint8_t x347 = 4U;
int32_t t48 = -55703;
int32_t t49 = 7;
uint16_t x353 = 7U;
int64_t x358 = -1LL;
uint64_t x362 = 110462900651LLU;
uint16_t x364 = UINT16_MAX;
int16_t x370 = -1;
int16_t x372 = INT16_MAX;
static int8_t x374 = 57;
volatile int32_t t55 = 54;
int32_t t56 = -13536;
int32_t x390 = INT32_MIN;
int8_t x404 = INT8_MIN;
int32_t t60 = 535;
static volatile int16_t x438 = 2;
volatile int32_t x439 = -75;
static int64_t x440 = 869819069LL;
static int8_t x446 = INT8_MIN;
volatile int32_t x470 = INT32_MIN;
volatile int16_t x472 = 16;
uint32_t x490 = 3438760U;
int8_t x491 = INT8_MAX;
static volatile int64_t x492 = INT64_MIN;
uint32_t x496 = 1305059U;
uint64_t x497 = 24938791809LLU;
uint8_t x500 = 10U;
uint8_t x501 = 121U;
uint64_t x502 = 122806540LLU;
int16_t x503 = INT16_MIN;
int16_t x512 = -441;
static volatile int32_t t74 = -13427;
int16_t x553 = INT16_MAX;
int32_t x554 = INT32_MAX;
static int32_t t78 = -382;
static volatile int32_t t79 = -724007249;
int16_t x564 = 1;
uint16_t x569 = UINT16_MAX;
int32_t t82 = -676602;
int32_t t86 = 4652174;
int16_t x601 = INT16_MAX;
int8_t x613 = INT8_MAX;
uint16_t x614 = UINT16_MAX;
int16_t x619 = -1;
static int16_t x622 = INT16_MIN;
static volatile int8_t x632 = INT8_MIN;
uint32_t x633 = 31664U;
int8_t x637 = INT8_MAX;
static int32_t t94 = 9506931;
int16_t x649 = INT16_MAX;
int8_t x670 = INT8_MIN;
int16_t x673 = INT16_MAX;
static int32_t x696 = -30210967;
static int16_t x697 = 820;
static int32_t x704 = -252139456;
static volatile int16_t x706 = INT16_MIN;
volatile int32_t t104 = -321022;
volatile uint8_t x718 = 5U;
static volatile int32_t x719 = -1;
uint64_t x738 = UINT64_MAX;
int32_t t107 = 1518009;
volatile int32_t x744 = -434268;
uint32_t x758 = 324553013U;
int64_t x760 = INT64_MAX;
int32_t t110 = -1;
uint8_t x761 = 13U;
uint32_t x766 = 104U;
static int64_t x767 = INT64_MAX;
uint16_t x781 = 9U;
uint32_t x784 = 838367U;
static int32_t t113 = 91008;
uint32_t x786 = 5927U;
static volatile uint64_t x789 = 5953472367LLU;
volatile int32_t x791 = INT32_MIN;
int32_t t115 = -44;
static int8_t x799 = 1;
int32_t t116 = 307419027;
int32_t t117 = 1186;
static int32_t x807 = INT32_MAX;
volatile int32_t t118 = 2;
volatile uint32_t x811 = 22U;
volatile int32_t t121 = 5693;
uint8_t x833 = 0U;
volatile int64_t x841 = 9819587585LL;
uint32_t x842 = UINT32_MAX;
volatile int16_t x864 = 3845;
static uint16_t x870 = 2U;
uint64_t x871 = 425198919LLU;
volatile int16_t x876 = -1;
int32_t x878 = INT32_MAX;
static uint64_t x885 = 170080363728LLU;
uint8_t x908 = 64U;
int8_t x928 = -1;
volatile uint16_t x942 = 31132U;
int64_t x963 = -1LL;
int32_t t137 = -32678871;
volatile int32_t t138 = -1;
int32_t t139 = 16226539;
static int32_t x1001 = INT32_MAX;
volatile int16_t x1008 = INT16_MIN;
int64_t x1012 = INT64_MIN;
uint64_t x1013 = 56283725149066867LLU;
int32_t x1016 = INT32_MIN;
int32_t x1017 = 16632470;
int8_t x1031 = -1;
uint64_t x1055 = 12491476913221LLU;
int32_t x1079 = -57;
uint16_t x1085 = 1539U;
int16_t x1091 = INT16_MAX;
uint64_t x1097 = UINT64_MAX;
static int16_t x1098 = INT16_MAX;
int32_t t157 = -43274;
static int32_t x1107 = 2;
int32_t x1110 = -1;
int8_t x1115 = 1;
int32_t x1116 = INT32_MAX;
int16_t x1137 = INT16_MAX;
static int64_t x1138 = 4645691977LL;
static uint64_t x1142 = 3491343099LLU;
volatile int32_t t164 = -264964927;
int64_t x1174 = 16273LL;
int32_t x1175 = INT32_MIN;
volatile int64_t x1182 = INT64_MAX;
int32_t t167 = -361;
int32_t t168 = -26;
static volatile int32_t t172 = -2459;
int8_t x1220 = INT8_MAX;
static int32_t t173 = 77298609;
volatile int32_t t174 = 4;
uint8_t x1227 = UINT8_MAX;
uint64_t x1232 = UINT64_MAX;
volatile int32_t t177 = 1;
volatile uint64_t x1240 = 8414862820350LLU;
static int16_t x1258 = INT16_MAX;
volatile int64_t x1279 = 93695110039LL;
int64_t x1285 = INT64_MAX;
uint16_t x1288 = 11251U;
uint32_t x1295 = 781086431U;
uint8_t x1305 = 22U;
int32_t t190 = -29;
static int32_t x1347 = INT32_MAX;
volatile int16_t x1352 = -1;
int32_t x1353 = 29;
int8_t x1355 = -24;


void f0(void) {
    	uint64_t x1 = 62648LLU;
	uint32_t x3 = 25U;
	volatile int32_t t0 = 1;

    t0 = ((x1<<(x2==x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = UINT64_MAX;
	uint64_t x10 = 507815618544LLU;
	int16_t x11 = -1;
	static int16_t x12 = 22;
	int32_t t1 = 995;

    t1 = ((x9<<(x10==x11))==x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x13 = UINT16_MAX;
	uint16_t x14 = 158U;
	int64_t x15 = -1LL;
	volatile int32_t t2 = -3724365;

    t2 = ((x13<<(x14==x15))==x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x30 = -1;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t3 = -12772;

    t3 = ((x29<<(x30==x31))==x32);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x38 = 6318880347271LL;
	int64_t x39 = 122237LL;
	static uint8_t x40 = 2U;

    t4 = ((x37<<(x38==x39))==x40);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x41 = INT16_MAX;
	int64_t x42 = 6077213072591LL;
	int64_t x43 = INT64_MIN;
	volatile uint64_t x44 = UINT64_MAX;
	volatile int32_t t5 = -24450;

    t5 = ((x41<<(x42==x43))==x44);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x45 = INT64_MAX;
	int8_t x46 = 0;
	int16_t x47 = INT16_MIN;
	uint64_t x48 = UINT64_MAX;

    t6 = ((x45<<(x46==x47))==x48);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x49 = UINT8_MAX;
	int8_t x50 = INT8_MIN;
	int32_t x51 = INT32_MIN;
	volatile int8_t x52 = INT8_MIN;
	int32_t t7 = 1;

    t7 = ((x49<<(x50==x51))==x52);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x57 = UINT8_MAX;
	static int16_t x59 = -1;
	static uint8_t x60 = 124U;
	static volatile int32_t t8 = 728604025;

    t8 = ((x57<<(x58==x59))==x60);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x63 = UINT32_MAX;
	int64_t x64 = INT64_MAX;
	volatile int32_t t9 = 572823639;

    t9 = ((x61<<(x62==x63))==x64);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x70 = 78U;
	int64_t x71 = 1LL;
	int32_t t10 = 7691;

    t10 = ((x69<<(x70==x71))==x72);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x77 = INT8_MAX;
	int64_t x78 = INT64_MIN;
	uint16_t x79 = 4824U;
	int16_t x80 = INT16_MAX;
	volatile int32_t t11 = 260419853;

    t11 = ((x77<<(x78==x79))==x80);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x85 = 1;
	uint16_t x86 = 1355U;
	volatile int16_t x88 = -1;
	int32_t t12 = 1;

    t12 = ((x85<<(x86==x87))==x88);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x96 = 56271248945LLU;

    t13 = ((x93<<(x94==x95))==x96);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x97 = INT8_MAX;
	uint64_t x99 = UINT64_MAX;
	volatile int32_t t14 = 523;

    t14 = ((x97<<(x98==x99))==x100);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x106 = 304;
	int16_t x107 = -1;
	volatile int32_t t15 = 257505;

    t15 = ((x105<<(x106==x107))==x108);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x109 = 9090U;
	uint32_t x110 = 40287U;
	static uint64_t x112 = 4878667770905649LLU;

    t16 = ((x109<<(x110==x111))==x112);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int16_t x115 = -1;
	uint8_t x116 = 4U;
	int32_t t17 = 22613;

    t17 = ((x113<<(x114==x115))==x116);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x122 = -1;
	static int64_t x123 = -1LL;
	int32_t t18 = -3268;

    t18 = ((x121<<(x122==x123))==x124);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x141 = INT16_MAX;
	static int8_t x142 = INT8_MIN;
	uint8_t x143 = UINT8_MAX;
	volatile uint64_t x144 = UINT64_MAX;
	volatile int32_t t19 = -364770;

    t19 = ((x141<<(x142==x143))==x144);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x149 = UINT64_MAX;
	static uint32_t x150 = 1668225U;
	uint64_t x151 = UINT64_MAX;
	volatile int64_t x152 = 271362LL;
	int32_t t20 = -38152;

    t20 = ((x149<<(x150==x151))==x152);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x155 = -1;
	int16_t x156 = 0;
	volatile int32_t t21 = 24758191;

    t21 = ((x153<<(x154==x155))==x156);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x157 = 20;
	static uint16_t x158 = UINT16_MAX;
	int8_t x160 = INT8_MIN;
	volatile int32_t t22 = 42575137;

    t22 = ((x157<<(x158==x159))==x160);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x161 = 4653698567084457717LLU;
	volatile int32_t x162 = -22787;
	uint64_t x163 = UINT64_MAX;
	uint8_t x164 = UINT8_MAX;
	int32_t t23 = 191;

    t23 = ((x161<<(x162==x163))==x164);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x170 = 52U;
	int64_t x171 = INT64_MAX;

    t24 = ((x169<<(x170==x171))==x172);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x193 = INT16_MAX;
	int16_t x195 = INT16_MIN;
	uint64_t x196 = 17082229798LLU;
	volatile int32_t t25 = 11305034;

    t25 = ((x193<<(x194==x195))==x196);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x197 = 57;
	static uint16_t x199 = UINT16_MAX;
	uint32_t x200 = 4972203U;
	int32_t t26 = 4;

    t26 = ((x197<<(x198==x199))==x200);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x213 = 449460349;
	int32_t x214 = INT32_MIN;
	volatile int8_t x215 = -3;
	int32_t x216 = -134772;
	int32_t t27 = 0;

    t27 = ((x213<<(x214==x215))==x216);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x217 = 3;
	uint8_t x218 = 19U;
	volatile int8_t x219 = -1;
	int16_t x220 = INT16_MIN;

    t28 = ((x217<<(x218==x219))==x220);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x221 = UINT64_MAX;

    t29 = ((x221<<(x222==x223))==x224);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x225 = INT64_MAX;
	int32_t x226 = INT32_MIN;
	static uint16_t x227 = UINT16_MAX;
	static int8_t x228 = -2;
	static volatile int32_t t30 = 357;

    t30 = ((x225<<(x226==x227))==x228);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x230 = UINT16_MAX;
	int16_t x231 = INT16_MAX;
	static volatile int32_t t31 = 757;

    t31 = ((x229<<(x230==x231))==x232);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x233 = 2007815723U;
	uint8_t x234 = 103U;
	static int16_t x235 = INT16_MIN;
	int16_t x236 = -1;
	volatile int32_t t32 = -967678832;

    t32 = ((x233<<(x234==x235))==x236);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x241 = UINT8_MAX;
	uint64_t x242 = UINT64_MAX;
	int64_t x243 = -1LL;
	int64_t x244 = INT64_MAX;

    t33 = ((x241<<(x242==x243))==x244);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x245 = 3U;
	int8_t x246 = INT8_MIN;
	volatile uint16_t x247 = 6239U;
	static uint8_t x248 = 2U;
	volatile int32_t t34 = 25;

    t34 = ((x245<<(x246==x247))==x248);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x250 = -1;
	static uint8_t x252 = UINT8_MAX;
	int32_t t35 = 535717328;

    t35 = ((x249<<(x250==x251))==x252);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x261 = INT8_MAX;
	int8_t x264 = INT8_MIN;
	int32_t t36 = -3140;

    t36 = ((x261<<(x262==x263))==x264);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x277 = 84LLU;
	uint64_t x278 = 4425793935457LLU;
	volatile int8_t x279 = INT8_MIN;
	int32_t x280 = INT32_MIN;
	static volatile int32_t t37 = 3;

    t37 = ((x277<<(x278==x279))==x280);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x281 = INT16_MAX;
	uint32_t x282 = UINT32_MAX;
	volatile int64_t x284 = INT64_MIN;

    t38 = ((x281<<(x282==x283))==x284);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x289 = UINT64_MAX;
	int16_t x290 = -1;
	volatile uint64_t x291 = 42496320LLU;
	volatile int32_t t39 = -128419811;

    t39 = ((x289<<(x290==x291))==x292);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x293 = UINT16_MAX;
	int32_t x294 = INT32_MIN;
	static int16_t x295 = INT16_MIN;
	uint16_t x296 = 2U;
	int32_t t40 = 93155;

    t40 = ((x293<<(x294==x295))==x296);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x301 = INT64_MAX;
	int16_t x302 = -1;
	static int64_t x303 = INT64_MIN;
	int32_t t41 = 1;

    t41 = ((x301<<(x302==x303))==x304);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x305 = INT16_MAX;
	static volatile uint8_t x306 = 89U;
	static int64_t x307 = INT64_MAX;
	uint32_t x308 = 143U;
	volatile int32_t t42 = -3154866;

    t42 = ((x305<<(x306==x307))==x308);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x309 = UINT64_MAX;
	int8_t x310 = -43;
	int8_t x311 = -8;
	volatile int64_t x312 = -260490434553651LL;
	static volatile int32_t t43 = -712;

    t43 = ((x309<<(x310==x311))==x312);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x317 = 6800U;
	uint64_t x318 = UINT64_MAX;
	uint16_t x319 = 100U;
	uint16_t x320 = UINT16_MAX;
	static int32_t t44 = -2182;

    t44 = ((x317<<(x318==x319))==x320);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x326 = 16119407744414LL;
	static int8_t x327 = -1;
	int32_t t45 = 850905;

    t45 = ((x325<<(x326==x327))==x328);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x329 = UINT64_MAX;
	volatile int8_t x330 = INT8_MIN;
	volatile uint8_t x332 = 24U;
	static volatile int32_t t46 = -325942;

    t46 = ((x329<<(x330==x331))==x332);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x333 = 4U;
	int8_t x334 = INT8_MIN;
	int32_t x335 = INT32_MAX;
	int8_t x336 = -1;
	volatile int32_t t47 = -115439922;

    t47 = ((x333<<(x334==x335))==x336);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x345 = INT8_MAX;
	int32_t x348 = 90777700;

    t48 = ((x345<<(x346==x347))==x348);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x349 = INT8_MAX;
	static uint8_t x350 = 0U;
	volatile uint8_t x351 = 108U;
	int16_t x352 = INT16_MIN;

    t49 = ((x349<<(x350==x351))==x352);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x354 = INT32_MIN;
	int32_t x355 = INT32_MIN;
	int16_t x356 = 1;
	int32_t t50 = -487086648;

    t50 = ((x353<<(x354==x355))==x356);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x357 = 3LL;
	int16_t x359 = INT16_MIN;
	static uint32_t x360 = UINT32_MAX;
	static volatile int32_t t51 = -91449;

    t51 = ((x357<<(x358==x359))==x360);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x361 = INT64_MAX;
	static int16_t x363 = INT16_MAX;
	int32_t t52 = 17991;

    t52 = ((x361<<(x362==x363))==x364);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x369 = 50U;
	uint8_t x371 = 1U;
	int32_t t53 = 19000;

    t53 = ((x369<<(x370==x371))==x372);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x373 = UINT64_MAX;
	int32_t x375 = INT32_MAX;
	volatile uint8_t x376 = 13U;
	int32_t t54 = -3192667;

    t54 = ((x373<<(x374==x375))==x376);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint64_t x381 = UINT64_MAX;
	int8_t x382 = 2;
	volatile int64_t x383 = INT64_MIN;
	uint16_t x384 = UINT16_MAX;

    t55 = ((x381<<(x382==x383))==x384);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x385 = 2481U;
	uint64_t x386 = 1319241520LLU;
	volatile int32_t x387 = -46270;
	static volatile uint64_t x388 = UINT64_MAX;

    t56 = ((x385<<(x386==x387))==x388);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x389 = INT8_MAX;
	int8_t x391 = -1;
	static volatile int8_t x392 = 1;
	volatile int32_t t57 = 201408;

    t57 = ((x389<<(x390==x391))==x392);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x397 = INT64_MAX;
	volatile uint32_t x398 = 2876785U;
	uint8_t x399 = UINT8_MAX;
	uint16_t x400 = 0U;
	volatile int32_t t58 = -2258946;

    t58 = ((x397<<(x398==x399))==x400);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x401 = 5147U;
	int16_t x402 = INT16_MIN;
	static volatile uint32_t x403 = 426U;
	int32_t t59 = -10432743;

    t59 = ((x401<<(x402==x403))==x404);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x413 = 63U;
	static int16_t x414 = -1;
	int32_t x415 = INT32_MAX;
	int32_t x416 = INT32_MAX;

    t60 = ((x413<<(x414==x415))==x416);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x421 = INT32_MAX;
	volatile int64_t x422 = INT64_MAX;
	int32_t x423 = INT32_MIN;
	volatile uint64_t x424 = 2LLU;
	static volatile int32_t t61 = 0;

    t61 = ((x421<<(x422==x423))==x424);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x437 = 164962U;
	volatile int32_t t62 = -4;

    t62 = ((x437<<(x438==x439))==x440);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x441 = INT64_MAX;
	uint8_t x442 = UINT8_MAX;
	int64_t x443 = INT64_MIN;
	int32_t x444 = -1;
	static volatile int32_t t63 = -6300221;

    t63 = ((x441<<(x442==x443))==x444);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x445 = 5LLU;
	static int64_t x447 = -25329537421536LL;
	int64_t x448 = -1LL;
	int32_t t64 = -98542;

    t64 = ((x445<<(x446==x447))==x448);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x453 = UINT8_MAX;
	int8_t x454 = -1;
	uint64_t x455 = 792730494487LLU;
	uint64_t x456 = 303287711857LLU;
	int32_t t65 = -380;

    t65 = ((x453<<(x454==x455))==x456);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x469 = 0U;
	int8_t x471 = INT8_MIN;
	static volatile int32_t t66 = -3;

    t66 = ((x469<<(x470==x471))==x472);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x489 = UINT8_MAX;
	int32_t t67 = 3193;

    t67 = ((x489<<(x490==x491))==x492);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x493 = INT16_MAX;
	int16_t x494 = INT16_MIN;
	static int8_t x495 = INT8_MAX;
	volatile int32_t t68 = -24041410;

    t68 = ((x493<<(x494==x495))==x496);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x498 = -6;
	uint64_t x499 = 965482848LLU;
	volatile int32_t t69 = 1630011;

    t69 = ((x497<<(x498==x499))==x500);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x504 = 18603046LLU;
	volatile int32_t t70 = 3785;

    t70 = ((x501<<(x502==x503))==x504);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x509 = 7U;
	int16_t x510 = 1;
	uint64_t x511 = 281210226691281LLU;
	volatile int32_t t71 = -20;

    t71 = ((x509<<(x510==x511))==x512);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x513 = 4U;
	int8_t x514 = INT8_MIN;
	int32_t x515 = -1;
	int32_t x516 = 1;
	int32_t t72 = 383958681;

    t72 = ((x513<<(x514==x515))==x516);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x517 = UINT64_MAX;
	static volatile int16_t x518 = -1;
	int8_t x519 = -1;
	volatile uint16_t x520 = 1U;
	volatile int32_t t73 = -915967048;

    t73 = ((x517<<(x518==x519))==x520);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x521 = 6274188465232596LLU;
	uint16_t x522 = 0U;
	int16_t x523 = -1;
	uint8_t x524 = 1U;

    t74 = ((x521<<(x522==x523))==x524);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x525 = 47U;
	int64_t x526 = -1LL;
	volatile int16_t x527 = INT16_MIN;
	uint32_t x528 = 3U;
	int32_t t75 = 0;

    t75 = ((x525<<(x526==x527))==x528);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x537 = INT64_MAX;
	uint8_t x538 = 8U;
	uint16_t x539 = 1U;
	volatile int16_t x540 = INT16_MAX;
	volatile int32_t t76 = -3684393;

    t76 = ((x537<<(x538==x539))==x540);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x549 = 10;
	volatile int32_t x550 = -1;
	uint64_t x551 = 94LLU;
	volatile int32_t x552 = -1;
	static volatile int32_t t77 = 313121;

    t77 = ((x549<<(x550==x551))==x552);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x555 = 0U;
	static int32_t x556 = -1062829;

    t78 = ((x553<<(x554==x555))==x556);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x557 = 46044708LLU;
	int64_t x558 = INT64_MAX;
	static uint8_t x559 = UINT8_MAX;
	uint32_t x560 = 182107341U;

    t79 = ((x557<<(x558==x559))==x560);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x561 = INT16_MAX;
	static uint64_t x562 = 2966539481LLU;
	volatile int8_t x563 = INT8_MIN;
	int32_t t80 = -69;

    t80 = ((x561<<(x562==x563))==x564);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x570 = 435628772U;
	int32_t x571 = INT32_MAX;
	int32_t x572 = -249;
	static int32_t t81 = -1752;

    t81 = ((x569<<(x570==x571))==x572);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x577 = 7;
	int8_t x578 = INT8_MIN;
	int64_t x579 = -154732161892118LL;
	int8_t x580 = -42;

    t82 = ((x577<<(x578==x579))==x580);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x581 = 0U;
	uint32_t x582 = UINT32_MAX;
	volatile int16_t x583 = INT16_MIN;
	int8_t x584 = INT8_MIN;
	int32_t t83 = 71;

    t83 = ((x581<<(x582==x583))==x584);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x585 = 29006130U;
	int8_t x586 = 16;
	int8_t x587 = -1;
	uint64_t x588 = 27149982744299LLU;
	static volatile int32_t t84 = -56;

    t84 = ((x585<<(x586==x587))==x588);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x589 = 96U;
	volatile int32_t x590 = 131794174;
	uint16_t x591 = 1U;
	uint64_t x592 = UINT64_MAX;
	int32_t t85 = 331;

    t85 = ((x589<<(x590==x591))==x592);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x593 = 5U;
	volatile int32_t x594 = -38688;
	static int8_t x595 = INT8_MIN;
	static volatile uint32_t x596 = 1738407372U;

    t86 = ((x593<<(x594==x595))==x596);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x602 = -489;
	static int16_t x603 = INT16_MIN;
	volatile int8_t x604 = 15;
	volatile int32_t t87 = -957608;

    t87 = ((x601<<(x602==x603))==x604);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x605 = 1762U;
	uint32_t x606 = UINT32_MAX;
	int32_t x607 = -1;
	volatile int64_t x608 = INT64_MIN;
	int32_t t88 = 70;

    t88 = ((x605<<(x606==x607))==x608);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x615 = -1;
	volatile int16_t x616 = INT16_MIN;
	int32_t t89 = 95551298;

    t89 = ((x613<<(x614==x615))==x616);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x617 = UINT32_MAX;
	volatile int64_t x618 = INT64_MIN;
	int16_t x620 = INT16_MIN;
	volatile int32_t t90 = -548913;

    t90 = ((x617<<(x618==x619))==x620);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x621 = UINT8_MAX;
	volatile uint64_t x623 = 988296760333LLU;
	static int64_t x624 = INT64_MAX;
	int32_t t91 = -1915860;

    t91 = ((x621<<(x622==x623))==x624);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x629 = 64173681385530LL;
	int16_t x630 = -1998;
	int32_t x631 = -1;
	volatile int32_t t92 = -7;

    t92 = ((x629<<(x630==x631))==x632);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x634 = -1;
	volatile int32_t x635 = INT32_MIN;
	volatile int64_t x636 = INT64_MIN;
	int32_t t93 = -23;

    t93 = ((x633<<(x634==x635))==x636);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x638 = 77LL;
	volatile int64_t x639 = INT64_MIN;
	int64_t x640 = INT64_MAX;

    t94 = ((x637<<(x638==x639))==x640);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x650 = INT8_MIN;
	volatile int64_t x651 = 2770LL;
	uint64_t x652 = 63727947LLU;
	int32_t t95 = 2;

    t95 = ((x649<<(x650==x651))==x652);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x669 = 250383U;
	volatile int16_t x671 = INT16_MAX;
	volatile uint32_t x672 = 1U;
	volatile int32_t t96 = 173;

    t96 = ((x669<<(x670==x671))==x672);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x674 = -4363;
	int8_t x675 = -1;
	uint16_t x676 = 1U;
	static volatile int32_t t97 = 2619062;

    t97 = ((x673<<(x674==x675))==x676);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x681 = UINT64_MAX;
	static int16_t x682 = INT16_MAX;
	uint64_t x683 = UINT64_MAX;
	uint64_t x684 = 720880227LLU;
	static int32_t t98 = 37290612;

    t98 = ((x681<<(x682==x683))==x684);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x685 = 0U;
	static uint64_t x686 = 1117285418091LLU;
	int64_t x687 = INT64_MIN;
	volatile int64_t x688 = INT64_MIN;
	int32_t t99 = 8701;

    t99 = ((x685<<(x686==x687))==x688);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x693 = UINT16_MAX;
	int8_t x694 = INT8_MAX;
	int64_t x695 = INT64_MIN;
	volatile int32_t t100 = -88197;

    t100 = ((x693<<(x694==x695))==x696);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x698 = INT8_MAX;
	uint16_t x699 = UINT16_MAX;
	uint32_t x700 = UINT32_MAX;
	volatile int32_t t101 = 48971;

    t101 = ((x697<<(x698==x699))==x700);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x701 = 3794894699217167LLU;
	int16_t x702 = INT16_MAX;
	static int8_t x703 = -1;
	int32_t t102 = 1038345;

    t102 = ((x701<<(x702==x703))==x704);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x705 = 24U;
	volatile uint16_t x707 = 28U;
	int16_t x708 = 5;
	volatile int32_t t103 = 38018;

    t103 = ((x705<<(x706==x707))==x708);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x713 = 726543164726378LL;
	int32_t x714 = INT32_MIN;
	static int32_t x715 = -4328752;
	uint64_t x716 = UINT64_MAX;

    t104 = ((x713<<(x714==x715))==x716);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x717 = UINT8_MAX;
	int8_t x720 = INT8_MIN;
	volatile int32_t t105 = -8969;

    t105 = ((x717<<(x718==x719))==x720);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x725 = 3300;
	static volatile uint8_t x726 = 121U;
	uint8_t x727 = UINT8_MAX;
	int64_t x728 = -1LL;
	int32_t t106 = 143;

    t106 = ((x725<<(x726==x727))==x728);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x737 = INT8_MAX;
	static volatile uint64_t x739 = 2105883LLU;
	static int64_t x740 = INT64_MIN;

    t107 = ((x737<<(x738==x739))==x740);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x741 = INT64_MAX;
	volatile uint32_t x742 = 718894247U;
	uint16_t x743 = 33U;
	static int32_t t108 = -6694904;

    t108 = ((x741<<(x742==x743))==x744);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint16_t x753 = 52U;
	uint64_t x754 = 28149797465LLU;
	volatile int32_t x755 = -29748034;
	static uint32_t x756 = 8U;
	int32_t t109 = 0;

    t109 = ((x753<<(x754==x755))==x756);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x757 = 99U;
	int64_t x759 = INT64_MIN;

    t110 = ((x757<<(x758==x759))==x760);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x762 = INT32_MAX;
	int64_t x763 = -1LL;
	int32_t x764 = INT32_MIN;
	volatile int32_t t111 = -1037;

    t111 = ((x761<<(x762==x763))==x764);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x765 = 13U;
	static uint16_t x768 = UINT16_MAX;
	volatile int32_t t112 = 38362;

    t112 = ((x765<<(x766==x767))==x768);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x782 = -1627166019LL;
	static int8_t x783 = INT8_MIN;

    t113 = ((x781<<(x782==x783))==x784);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x785 = 23U;
	static int16_t x787 = -63;
	static volatile uint64_t x788 = 1761933022001076LLU;
	int32_t t114 = 50682682;

    t114 = ((x785<<(x786==x787))==x788);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x790 = UINT64_MAX;
	uint32_t x792 = UINT32_MAX;

    t115 = ((x789<<(x790==x791))==x792);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x797 = 115;
	uint8_t x798 = 44U;
	static int64_t x800 = -1033273346LL;

    t116 = ((x797<<(x798==x799))==x800);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x801 = 64099528U;
	int32_t x802 = -68378;
	int64_t x803 = -1650704758LL;
	int64_t x804 = INT64_MIN;

    t117 = ((x801<<(x802==x803))==x804);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x805 = UINT8_MAX;
	volatile uint64_t x806 = 1650147LLU;
	int8_t x808 = 13;

    t118 = ((x805<<(x806==x807))==x808);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x809 = UINT8_MAX;
	volatile int16_t x810 = INT16_MIN;
	uint32_t x812 = UINT32_MAX;
	volatile int32_t t119 = -61;

    t119 = ((x809<<(x810==x811))==x812);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x813 = 14U;
	static volatile uint64_t x814 = UINT64_MAX;
	volatile int64_t x815 = INT64_MAX;
	uint16_t x816 = 169U;
	volatile int32_t t120 = -2483058;

    t120 = ((x813<<(x814==x815))==x816);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x821 = 3482692LL;
	static uint16_t x822 = 3U;
	uint32_t x823 = 0U;
	static uint16_t x824 = 2143U;

    t121 = ((x821<<(x822==x823))==x824);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x829 = 47;
	volatile int64_t x830 = -1084052100621LL;
	uint16_t x831 = UINT16_MAX;
	volatile int8_t x832 = INT8_MIN;
	volatile int32_t t122 = -56;

    t122 = ((x829<<(x830==x831))==x832);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x834 = UINT16_MAX;
	uint8_t x835 = 0U;
	int64_t x836 = -1LL;
	volatile int32_t t123 = -1;

    t123 = ((x833<<(x834==x835))==x836);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x837 = UINT16_MAX;
	int32_t x838 = INT32_MIN;
	int64_t x839 = 30070LL;
	uint8_t x840 = 119U;
	static volatile int32_t t124 = 41463267;

    t124 = ((x837<<(x838==x839))==x840);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x843 = INT16_MIN;
	int32_t x844 = INT32_MIN;
	static volatile int32_t t125 = -33;

    t125 = ((x841<<(x842==x843))==x844);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x861 = 1856320595057317LLU;
	int16_t x862 = -48;
	uint64_t x863 = UINT64_MAX;
	static int32_t t126 = 8284988;

    t126 = ((x861<<(x862==x863))==x864);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x869 = 4114;
	uint64_t x872 = 213182233762LLU;
	int32_t t127 = -77;

    t127 = ((x869<<(x870==x871))==x872);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x873 = INT32_MAX;
	uint16_t x874 = UINT16_MAX;
	volatile int64_t x875 = INT64_MIN;
	int32_t t128 = -1581;

    t128 = ((x873<<(x874==x875))==x876);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x877 = UINT32_MAX;
	uint64_t x879 = 26783866LLU;
	int32_t x880 = INT32_MIN;
	volatile int32_t t129 = 10187989;

    t129 = ((x877<<(x878==x879))==x880);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x881 = 253002LLU;
	int64_t x882 = -960427169183LL;
	uint32_t x883 = 4324U;
	int16_t x884 = 7;
	int32_t t130 = -744651082;

    t130 = ((x881<<(x882==x883))==x884);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x886 = 107U;
	uint8_t x887 = UINT8_MAX;
	volatile int32_t x888 = -1;
	int32_t t131 = -766239080;

    t131 = ((x885<<(x886==x887))==x888);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x901 = UINT32_MAX;
	int32_t x902 = 257743;
	volatile int64_t x903 = INT64_MAX;
	int32_t x904 = -1;
	volatile int32_t t132 = -15972;

    t132 = ((x901<<(x902==x903))==x904);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x905 = 4;
	int16_t x906 = -1;
	int16_t x907 = INT16_MIN;
	volatile int32_t t133 = -26;

    t133 = ((x905<<(x906==x907))==x908);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x917 = UINT16_MAX;
	int8_t x918 = INT8_MIN;
	int64_t x919 = -3LL;
	static int16_t x920 = -1;
	int32_t t134 = 0;

    t134 = ((x917<<(x918==x919))==x920);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x925 = 309U;
	uint64_t x926 = 7LLU;
	uint16_t x927 = 30U;
	volatile int32_t t135 = -4;

    t135 = ((x925<<(x926==x927))==x928);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x941 = 1U;
	int16_t x943 = INT16_MAX;
	int8_t x944 = INT8_MIN;
	volatile int32_t t136 = -747;

    t136 = ((x941<<(x942==x943))==x944);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x961 = 7072LL;
	volatile int32_t x962 = 6811;
	uint64_t x964 = 6914546278255LLU;

    t137 = ((x961<<(x962==x963))==x964);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x965 = 8;
	int8_t x966 = 41;
	int32_t x967 = 12;
	volatile int16_t x968 = INT16_MIN;

    t138 = ((x965<<(x966==x967))==x968);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x993 = 1U;
	uint32_t x994 = 6743U;
	static volatile int32_t x995 = -1;
	uint32_t x996 = 69U;

    t139 = ((x993<<(x994==x995))==x996);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x1002 = INT32_MIN;
	int16_t x1003 = INT16_MIN;
	int8_t x1004 = -1;
	int32_t t140 = -942;

    t140 = ((x1001<<(x1002==x1003))==x1004);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x1005 = 184U;
	int32_t x1006 = 5134;
	volatile int32_t x1007 = INT32_MIN;
	int32_t t141 = -16286;

    t141 = ((x1005<<(x1006==x1007))==x1008);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x1009 = 0;
	int64_t x1010 = INT64_MIN;
	int64_t x1011 = INT64_MIN;
	int32_t t142 = -1476883;

    t142 = ((x1009<<(x1010==x1011))==x1012);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x1014 = 261387377U;
	volatile int32_t x1015 = INT32_MIN;
	volatile int32_t t143 = -7848;

    t143 = ((x1013<<(x1014==x1015))==x1016);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x1018 = 13787LL;
	int32_t x1019 = INT32_MAX;
	static uint64_t x1020 = 21081LLU;
	int32_t t144 = 28202095;

    t144 = ((x1017<<(x1018==x1019))==x1020);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x1021 = 13444674;
	uint32_t x1022 = UINT32_MAX;
	int8_t x1023 = INT8_MAX;
	int8_t x1024 = 4;
	volatile int32_t t145 = -1;

    t145 = ((x1021<<(x1022==x1023))==x1024);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x1025 = 0;
	int8_t x1026 = 6;
	static int64_t x1027 = -1LL;
	static int16_t x1028 = 221;
	int32_t t146 = 55331;

    t146 = ((x1025<<(x1026==x1027))==x1028);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1029 = INT8_MAX;
	static uint64_t x1030 = 274007210LLU;
	int32_t x1032 = 967252996;
	static volatile int32_t t147 = 26995;

    t147 = ((x1029<<(x1030==x1031))==x1032);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1049 = INT64_MAX;
	uint16_t x1050 = 0U;
	int8_t x1051 = INT8_MIN;
	int8_t x1052 = 7;
	volatile int32_t t148 = 113;

    t148 = ((x1049<<(x1050==x1051))==x1052);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x1053 = UINT64_MAX;
	uint16_t x1054 = 1842U;
	volatile int16_t x1056 = 1;
	int32_t t149 = -14037;

    t149 = ((x1053<<(x1054==x1055))==x1056);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x1057 = 2U;
	int8_t x1058 = -1;
	volatile int32_t x1059 = 491313138;
	static uint16_t x1060 = 604U;
	static int32_t t150 = -268;

    t150 = ((x1057<<(x1058==x1059))==x1060);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1061 = INT8_MAX;
	static volatile int8_t x1062 = 1;
	static int16_t x1063 = 0;
	int32_t x1064 = INT32_MIN;
	int32_t t151 = -1557616;

    t151 = ((x1061<<(x1062==x1063))==x1064);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1069 = INT8_MAX;
	static volatile uint16_t x1070 = 3U;
	int32_t x1071 = -1;
	int8_t x1072 = -1;
	static int32_t t152 = 1;

    t152 = ((x1069<<(x1070==x1071))==x1072);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x1077 = 1U;
	int64_t x1078 = 752415349714LL;
	static int16_t x1080 = INT16_MAX;
	volatile int32_t t153 = 10;

    t153 = ((x1077<<(x1078==x1079))==x1080);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int32_t x1086 = -1;
	int64_t x1087 = -8233804921LL;
	static int64_t x1088 = INT64_MAX;
	static volatile int32_t t154 = -528621117;

    t154 = ((x1085<<(x1086==x1087))==x1088);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1089 = 7204615594LLU;
	int16_t x1090 = INT16_MIN;
	int32_t x1092 = 0;
	int32_t t155 = 22;

    t155 = ((x1089<<(x1090==x1091))==x1092);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x1093 = INT64_MAX;
	volatile int16_t x1094 = INT16_MAX;
	static int64_t x1095 = INT64_MIN;
	static uint16_t x1096 = 4U;
	static int32_t t156 = 187;

    t156 = ((x1093<<(x1094==x1095))==x1096);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1099 = INT8_MIN;
	uint16_t x1100 = 1U;

    t157 = ((x1097<<(x1098==x1099))==x1100);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1105 = INT64_MAX;
	volatile uint16_t x1106 = 619U;
	int8_t x1108 = 10;
	static volatile int32_t t158 = 1;

    t158 = ((x1105<<(x1106==x1107))==x1108);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1109 = INT8_MAX;
	int64_t x1111 = INT64_MIN;
	int8_t x1112 = INT8_MIN;
	int32_t t159 = 116575983;

    t159 = ((x1109<<(x1110==x1111))==x1112);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x1113 = 22U;
	int32_t x1114 = INT32_MAX;
	int32_t t160 = 5;

    t160 = ((x1113<<(x1114==x1115))==x1116);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x1139 = 54U;
	int16_t x1140 = -163;
	int32_t t161 = 135;

    t161 = ((x1137<<(x1138==x1139))==x1140);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x1141 = 616U;
	static int8_t x1143 = INT8_MIN;
	int16_t x1144 = INT16_MAX;
	volatile int32_t t162 = -14;

    t162 = ((x1141<<(x1142==x1143))==x1144);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1149 = UINT16_MAX;
	int64_t x1150 = INT64_MAX;
	int32_t x1151 = INT32_MIN;
	int8_t x1152 = -1;
	volatile int32_t t163 = 3;

    t163 = ((x1149<<(x1150==x1151))==x1152);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x1165 = UINT16_MAX;
	uint64_t x1166 = UINT64_MAX;
	uint8_t x1167 = 97U;
	uint16_t x1168 = 26359U;

    t164 = ((x1165<<(x1166==x1167))==x1168);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x1169 = 187564U;
	uint16_t x1170 = UINT16_MAX;
	static int64_t x1171 = -1LL;
	int32_t x1172 = -996795;
	volatile int32_t t165 = 28;

    t165 = ((x1169<<(x1170==x1171))==x1172);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x1173 = 5109U;
	static uint64_t x1176 = UINT64_MAX;
	volatile int32_t t166 = 15277;

    t166 = ((x1173<<(x1174==x1175))==x1176);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1181 = 392U;
	volatile int32_t x1183 = INT32_MAX;
	static int16_t x1184 = INT16_MAX;

    t167 = ((x1181<<(x1182==x1183))==x1184);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1185 = UINT8_MAX;
	static int8_t x1186 = 4;
	static volatile int8_t x1187 = -1;
	uint32_t x1188 = 108359548U;

    t168 = ((x1185<<(x1186==x1187))==x1188);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1193 = INT32_MAX;
	static int32_t x1194 = INT32_MIN;
	uint8_t x1195 = 70U;
	volatile int64_t x1196 = INT64_MIN;
	volatile int32_t t169 = -780027;

    t169 = ((x1193<<(x1194==x1195))==x1196);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1201 = 60493LLU;
	static int64_t x1202 = INT64_MAX;
	uint8_t x1203 = 10U;
	uint32_t x1204 = 3516481U;
	int32_t t170 = -94;

    t170 = ((x1201<<(x1202==x1203))==x1204);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1209 = UINT32_MAX;
	int32_t x1210 = -8889;
	int64_t x1211 = 3183LL;
	static int16_t x1212 = -16380;
	static volatile int32_t t171 = -24;

    t171 = ((x1209<<(x1210==x1211))==x1212);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x1213 = 280414403540LLU;
	static int32_t x1214 = -1;
	volatile int8_t x1215 = -1;
	static int64_t x1216 = INT64_MAX;

    t172 = ((x1213<<(x1214==x1215))==x1216);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint16_t x1217 = 64U;
	int32_t x1218 = -1;
	static uint32_t x1219 = UINT32_MAX;

    t173 = ((x1217<<(x1218==x1219))==x1220);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1221 = 1U;
	static int8_t x1222 = 5;
	int32_t x1223 = -1;
	uint16_t x1224 = 60U;

    t174 = ((x1221<<(x1222==x1223))==x1224);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1225 = 319600401971LL;
	uint8_t x1226 = 2U;
	static int8_t x1228 = -1;
	volatile int32_t t175 = 8032737;

    t175 = ((x1225<<(x1226==x1227))==x1228);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1229 = 41LL;
	uint16_t x1230 = UINT16_MAX;
	volatile int8_t x1231 = INT8_MIN;
	volatile int32_t t176 = -418225736;

    t176 = ((x1229<<(x1230==x1231))==x1232);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1233 = INT32_MAX;
	int64_t x1234 = -1LL;
	volatile uint8_t x1235 = 0U;
	static uint8_t x1236 = 1U;

    t177 = ((x1233<<(x1234==x1235))==x1236);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1237 = UINT64_MAX;
	int16_t x1238 = -1;
	static volatile int8_t x1239 = -1;
	volatile int32_t t178 = 1157;

    t178 = ((x1237<<(x1238==x1239))==x1240);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1241 = INT16_MAX;
	uint8_t x1242 = 1U;
	int8_t x1243 = 3;
	volatile int16_t x1244 = INT16_MAX;
	volatile int32_t t179 = -1061343;

    t179 = ((x1241<<(x1242==x1243))==x1244);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1245 = 2U;
	uint16_t x1246 = 0U;
	int64_t x1247 = 756489050LL;
	int8_t x1248 = INT8_MIN;
	static volatile int32_t t180 = 1;

    t180 = ((x1245<<(x1246==x1247))==x1248);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1253 = 2842U;
	uint16_t x1254 = UINT16_MAX;
	int64_t x1255 = INT64_MAX;
	int64_t x1256 = INT64_MIN;
	static volatile int32_t t181 = -1;

    t181 = ((x1253<<(x1254==x1255))==x1256);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x1257 = 624764;
	int8_t x1259 = INT8_MIN;
	static uint32_t x1260 = 9U;
	volatile int32_t t182 = 7439;

    t182 = ((x1257<<(x1258==x1259))==x1260);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x1261 = 8759004332583054LLU;
	int8_t x1262 = -1;
	static int32_t x1263 = INT32_MIN;
	volatile int32_t x1264 = INT32_MIN;
	int32_t t183 = 451625;

    t183 = ((x1261<<(x1262==x1263))==x1264);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1273 = 4071U;
	int32_t x1274 = INT32_MAX;
	volatile uint16_t x1275 = 442U;
	static int16_t x1276 = INT16_MIN;
	int32_t t184 = 1299;

    t184 = ((x1273<<(x1274==x1275))==x1276);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1277 = INT64_MAX;
	uint8_t x1278 = 87U;
	static int8_t x1280 = -1;
	int32_t t185 = 648949567;

    t185 = ((x1277<<(x1278==x1279))==x1280);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint8_t x1281 = UINT8_MAX;
	int64_t x1282 = INT64_MIN;
	volatile int8_t x1283 = INT8_MIN;
	uint32_t x1284 = UINT32_MAX;
	int32_t t186 = 712247211;

    t186 = ((x1281<<(x1282==x1283))==x1284);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x1286 = INT32_MIN;
	int64_t x1287 = INT64_MAX;
	int32_t t187 = 3233397;

    t187 = ((x1285<<(x1286==x1287))==x1288);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1289 = 0;
	static volatile uint8_t x1290 = 50U;
	volatile uint8_t x1291 = UINT8_MAX;
	uint16_t x1292 = 15538U;
	volatile int32_t t188 = 79;

    t188 = ((x1289<<(x1290==x1291))==x1292);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1293 = 57U;
	uint16_t x1294 = 23U;
	int64_t x1296 = INT64_MIN;
	static volatile int32_t t189 = -873;

    t189 = ((x1293<<(x1294==x1295))==x1296);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1306 = INT16_MIN;
	volatile uint64_t x1307 = UINT64_MAX;
	int32_t x1308 = 3;

    t190 = ((x1305<<(x1306==x1307))==x1308);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x1309 = 1684614U;
	static uint64_t x1310 = 946012171304696475LLU;
	volatile int64_t x1311 = INT64_MIN;
	static int16_t x1312 = INT16_MIN;
	volatile int32_t t191 = -15131;

    t191 = ((x1309<<(x1310==x1311))==x1312);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1313 = INT8_MAX;
	static volatile int64_t x1314 = -8967773486060584LL;
	static uint32_t x1315 = 7614U;
	int16_t x1316 = 1827;
	static volatile int32_t t192 = -49764;

    t192 = ((x1313<<(x1314==x1315))==x1316);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x1329 = 1;
	volatile int8_t x1330 = INT8_MIN;
	uint32_t x1331 = UINT32_MAX;
	int16_t x1332 = INT16_MIN;
	volatile int32_t t193 = -1032614678;

    t193 = ((x1329<<(x1330==x1331))==x1332);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x1333 = 2487U;
	int64_t x1334 = INT64_MIN;
	static int32_t x1335 = 5783;
	uint32_t x1336 = 66286453U;
	int32_t t194 = -553;

    t194 = ((x1333<<(x1334==x1335))==x1336);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1341 = UINT16_MAX;
	uint16_t x1342 = 16U;
	int16_t x1343 = INT16_MIN;
	int8_t x1344 = -1;
	volatile int32_t t195 = 0;

    t195 = ((x1341<<(x1342==x1343))==x1344);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x1345 = UINT16_MAX;
	int32_t x1346 = INT32_MIN;
	uint8_t x1348 = UINT8_MAX;
	static int32_t t196 = 1412372;

    t196 = ((x1345<<(x1346==x1347))==x1348);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1349 = 15U;
	volatile int8_t x1350 = INT8_MAX;
	int8_t x1351 = INT8_MIN;
	int32_t t197 = 0;

    t197 = ((x1349<<(x1350==x1351))==x1352);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1354 = UINT16_MAX;
	int64_t x1356 = INT64_MAX;
	static int32_t t198 = 359765587;

    t198 = ((x1353<<(x1354==x1355))==x1356);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1361 = UINT16_MAX;
	int32_t x1362 = INT32_MIN;
	static uint32_t x1363 = UINT32_MAX;
	int16_t x1364 = -1;
	volatile int32_t t199 = -63323838;

    t199 = ((x1361<<(x1362==x1363))==x1364);

    if (t199 != 0) { NG(); } else { ; }
	
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

