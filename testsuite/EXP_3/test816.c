
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

static uint64_t x4 = UINT64_MAX;
int16_t x8 = INT16_MIN;
int32_t x11 = -462138;
volatile int16_t x12 = INT16_MIN;
int64_t t2 = 13648658798863870LL;
int8_t x15 = INT8_MAX;
uint32_t x16 = 322839251U;
static int8_t x18 = INT8_MIN;
uint16_t x19 = 10967U;
volatile uint16_t x20 = UINT16_MAX;
uint8_t x31 = 17U;
int8_t x56 = 2;
int16_t x59 = INT16_MAX;
volatile int64_t t7 = -2LL;
int16_t x75 = INT16_MAX;
int32_t x83 = INT32_MIN;
int16_t x85 = -1;
int16_t x88 = 5754;
volatile int32_t t12 = 1;
static volatile int32_t x116 = -6440326;
volatile int64_t x128 = INT64_MIN;
uint32_t x132 = 1208U;
uint64_t x153 = 448167887201LLU;
int64_t x172 = INT64_MIN;
int64_t t22 = -51LL;
int8_t x182 = INT8_MIN;
int8_t x183 = -1;
int64_t x198 = -1LL;
volatile uint64_t t27 = 481290437007LLU;
volatile int32_t t29 = -9639770;
int16_t x258 = -23;
int64_t x259 = INT64_MAX;
int64_t x279 = INT64_MAX;
int32_t x289 = INT32_MIN;
static uint32_t x290 = 473U;
uint32_t x311 = UINT32_MAX;
int16_t x323 = INT16_MIN;
static int32_t t36 = 68103192;
static int64_t x330 = INT64_MAX;
uint16_t x342 = 63U;
volatile uint64_t t39 = 264324115076230LLU;
uint16_t x350 = UINT16_MAX;
static int8_t x352 = INT8_MIN;
volatile int64_t t41 = 250095933663LL;
int16_t x382 = INT16_MIN;
int16_t x384 = -5874;
static int64_t x389 = -3031335125670LL;
int32_t x392 = INT32_MAX;
volatile int64_t t45 = 3055LL;
volatile int16_t x407 = -1;
uint32_t t49 = 22192701U;
uint64_t x431 = 3698909860540LLU;
uint32_t x450 = 929318172U;
uint64_t t52 = 192484257259426LLU;
uint64_t x459 = 558873LLU;
volatile uint64_t x485 = 283189430LLU;
volatile uint64_t t56 = 10906091180830LLU;
static volatile int64_t t57 = 61983LL;
static uint16_t x493 = UINT16_MAX;
uint32_t x499 = 352U;
volatile uint16_t x514 = 15U;
volatile uint64_t t62 = 22LLU;
uint32_t x537 = 7227366U;
int16_t x539 = -1;
volatile uint8_t x543 = UINT8_MAX;
int8_t x549 = INT8_MIN;
int64_t x551 = 1816887056LL;
int64_t x556 = INT64_MAX;
volatile int32_t x558 = INT32_MIN;
volatile int64_t x559 = INT64_MIN;
int32_t x562 = -17024666;
static int8_t x563 = -1;
static int16_t x568 = INT16_MIN;
volatile uint64_t t72 = 13LLU;
int16_t x580 = INT16_MIN;
int32_t x591 = -2054364;
uint64_t x592 = 113478399050743LLU;
uint64_t x594 = 62166231323923583LLU;
static int8_t x598 = INT8_MIN;
uint8_t x599 = 6U;
static int16_t x634 = -12;
int64_t x640 = 22761LL;
uint32_t x641 = UINT32_MAX;
static int16_t x658 = INT16_MIN;
int64_t t85 = 543LL;
int8_t x666 = 7;
uint8_t x668 = 57U;
uint8_t x674 = 6U;
int32_t x686 = -1;
int64_t t90 = -428320199413330LL;
uint8_t x699 = 1U;
int32_t x726 = -77024;
int16_t x738 = -15889;
int32_t x743 = -1;
int8_t x745 = INT8_MAX;
int8_t x751 = INT8_MIN;
int16_t x756 = INT16_MIN;
int16_t x777 = INT16_MIN;
uint32_t x784 = UINT32_MAX;
volatile uint64_t t104 = 26934792201LLU;
int16_t x795 = INT16_MIN;
int32_t t106 = -1;
volatile uint32_t t107 = 10274U;
static volatile int16_t x806 = INT16_MIN;
volatile uint64_t x811 = 2996092792383LLU;
uint64_t t109 = 496129338920831LLU;
int64_t x825 = -1LL;
uint32_t x826 = 99298977U;
uint8_t x831 = 20U;
uint32_t t112 = 3290U;
uint64_t x840 = 36901833LLU;
uint32_t x847 = UINT32_MAX;
static uint64_t t117 = 4253734557725176445LLU;
static uint8_t x861 = 62U;
uint32_t x867 = 2U;
volatile int16_t x870 = 345;
int32_t x883 = INT32_MAX;
uint64_t t122 = 30453829021166701LLU;
uint64_t t123 = 16252394143259492LLU;
int8_t x889 = 0;
int16_t x892 = INT16_MAX;
uint8_t x907 = 1U;
int16_t x911 = INT16_MIN;
int32_t x913 = -2487;
static int32_t x918 = 44819327;
static volatile uint64_t t130 = 11381LLU;
uint16_t x938 = 1489U;
uint32_t x942 = UINT32_MAX;
static int64_t x956 = 263525731330LL;
uint32_t x973 = UINT32_MAX;
int64_t t137 = -37371LL;
int32_t x977 = -1;
int32_t x978 = -1;
int32_t x981 = -14509866;
volatile uint32_t x983 = UINT32_MAX;
int32_t x992 = INT32_MIN;
int64_t x998 = -1LL;
int32_t x999 = 3;
volatile int64_t t141 = -784LL;
uint64_t t142 = 66168887982938798LLU;
uint32_t t147 = 286254U;
volatile int32_t t149 = -4;
uint16_t x1053 = 22013U;
volatile uint64_t t150 = 6406LLU;
uint64_t x1061 = UINT64_MAX;
uint64_t t152 = 175LLU;
int16_t x1070 = INT16_MIN;
int64_t x1071 = INT64_MIN;
int64_t t153 = 2754181151LL;
int32_t x1080 = INT32_MIN;
static volatile int16_t x1085 = -3007;
int16_t x1097 = -1;
int32_t x1099 = -1;
int32_t x1107 = -1;
volatile uint64_t t157 = 1029027478217431850LLU;
static int8_t x1130 = -2;
int8_t x1131 = INT8_MIN;
static int32_t t159 = -12061;
static uint8_t x1151 = UINT8_MAX;
volatile int64_t x1152 = 1915866LL;
int64_t t163 = -99459593LL;
static uint32_t x1176 = UINT32_MAX;
static int64_t x1182 = INT64_MAX;
uint64_t x1186 = 572133207129LLU;
uint32_t x1187 = UINT32_MAX;
static int16_t x1198 = -1;
static uint16_t x1207 = UINT16_MAX;
static int64_t x1208 = INT64_MIN;
uint32_t x1217 = 15U;
int64_t x1224 = -92664LL;
int16_t x1228 = 121;
int8_t x1230 = INT8_MIN;
static int8_t x1244 = -10;
static uint8_t x1253 = 93U;
static uint64_t x1274 = 941614392026898168LLU;
int32_t x1276 = INT32_MIN;
uint64_t t181 = 1994429883989LLU;
volatile int32_t t183 = -6;
int8_t x1301 = INT8_MAX;
int32_t t185 = -8274569;
int32_t x1326 = INT32_MIN;
int32_t x1335 = INT32_MIN;
int64_t t189 = 2207103938853750132LL;
int64_t t191 = -873047455LL;
volatile int32_t x1364 = 916590636;
uint8_t x1373 = 1U;
uint64_t x1378 = 613313297LLU;
uint64_t x1388 = 815LLU;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	uint64_t x2 = UINT64_MAX;
	volatile int32_t x3 = INT32_MAX;
	uint64_t t0 = 196LLU;

    t0 = ((x1*x2)/(x3%x4));

    if (t0 != 8589934595LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 35U;
	int8_t x6 = -1;
	int32_t x7 = 55461;
	static int32_t t1 = 9390415;

    t1 = ((x5*x6)/(x7%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = 1LL;
	static int64_t x10 = INT64_MIN;

    t2 = ((x9*x10)/(x11%x12));

    if (t2 != 2723972840181564LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	volatile int8_t x14 = -12;
	static uint32_t t3 = 492U;

    t3 = ((x13*x14)/(x15%x16));

    if (t3 != 3096U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	int32_t t4 = 65131;

    t4 = ((x17*x18)/(x19%x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x29 = 1LL;
	int64_t x30 = 6576660043LL;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t5 = 37815721LLU;

    t5 = ((x29*x30)/(x31%x32));

    if (t5 != 386862355LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x53 = 1;
	int16_t x54 = INT16_MIN;
	int32_t x55 = -1;
	static int32_t t6 = 814;

    t6 = ((x53*x54)/(x55%x56));

    if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x57 = -1LL;
	int16_t x58 = -19;
	int32_t x60 = 458651;

    t7 = ((x57*x58)/(x59%x60));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x61 = -52;
	uint8_t x62 = UINT8_MAX;
	static volatile uint64_t x63 = 83664777088743LLU;
	volatile int16_t x64 = 93;
	static volatile uint64_t t8 = 39155LLU;

    t8 = ((x61*x62)/(x63%x64));

    if (t8 != 267344117010283164LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x65 = UINT8_MAX;
	volatile uint16_t x66 = 0U;
	uint16_t x67 = 47U;
	int32_t x68 = -11542531;
	int32_t t9 = 60899810;

    t9 = ((x65*x66)/(x67%x68));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x73 = 1U;
	volatile int32_t x74 = INT32_MIN;
	uint32_t x76 = UINT32_MAX;
	volatile uint32_t t10 = 28U;

    t10 = ((x73*x74)/(x75%x76));

    if (t10 != 65538U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x81 = 38U;
	uint64_t x82 = 45978402838LLU;
	static int64_t x84 = 131534373LL;
	volatile uint64_t t11 = 435245184209589864LLU;

    t11 = ((x81*x82)/(x83%x84));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x86 = INT8_MAX;
	int8_t x87 = INT8_MIN;

    t12 = ((x85*x86)/(x87%x88));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x93 = 3LLU;
	static uint16_t x94 = UINT16_MAX;
	int8_t x95 = -1;
	uint64_t x96 = 4192081952369311144LLU;
	volatile uint64_t t13 = 267079120296138048LLU;

    t13 = ((x93*x94)/(x95%x96));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x101 = INT16_MAX;
	volatile int16_t x102 = -5;
	volatile int16_t x103 = -1;
	int8_t x104 = -15;
	volatile int32_t t14 = 4960;

    t14 = ((x101*x102)/(x103%x104));

    if (t14 != 163835) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x113 = 123843631LLU;
	static uint16_t x114 = 18519U;
	int16_t x115 = -1;
	static volatile uint64_t t15 = 249LLU;

    t15 = ((x113*x114)/(x115%x116));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x121 = INT8_MIN;
	int64_t x122 = -1LL;
	static int32_t x123 = 682;
	volatile int32_t x124 = INT32_MIN;
	volatile int64_t t16 = -1563LL;

    t16 = ((x121*x122)/(x123%x124));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x125 = 45146721444LL;
	uint32_t x126 = 534544U;
	volatile int32_t x127 = INT32_MAX;
	static volatile int64_t t17 = -1667232141212297LL;

    t17 = ((x125*x126)/(x127%x128));

    if (t17 != 11237761LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x129 = INT16_MIN;
	uint8_t x130 = 109U;
	int32_t x131 = 197232707;
	uint32_t t18 = 889567U;

    t18 = ((x129*x130)/(x131%x132));

    if (t18 != 32758744U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x154 = 21U;
	volatile int32_t x155 = -1259915;
	uint64_t x156 = UINT64_MAX;
	volatile uint64_t t19 = 173864573357140101LLU;

    t19 = ((x153*x154)/(x155%x156));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x157 = 52LL;
	volatile int8_t x158 = 29;
	uint8_t x159 = 8U;
	int16_t x160 = 6;
	volatile int64_t t20 = 368909768784487LL;

    t20 = ((x157*x158)/(x159%x160));

    if (t20 != 754LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x161 = -1581984802LL;
	uint64_t x162 = 450784300LLU;
	int64_t x163 = -2LL;
	uint16_t x164 = 58U;
	volatile uint64_t t21 = 862799LLU;

    t21 = ((x161*x162)/(x163%x164));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x169 = 416U;
	volatile int8_t x170 = -25;
	int16_t x171 = -13;

    t22 = ((x169*x170)/(x171%x172));

    if (t22 != -330381299LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x181 = INT16_MIN;
	int16_t x184 = INT16_MIN;
	int32_t t23 = 33027320;

    t23 = ((x181*x182)/(x183%x184));

    if (t23 != -4194304) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x185 = -1;
	static uint8_t x186 = UINT8_MAX;
	uint16_t x187 = 28523U;
	static volatile int64_t x188 = -282158711822448LL;
	volatile int64_t t24 = -185603150593LL;

    t24 = ((x185*x186)/(x187%x188));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x197 = INT16_MAX;
	int8_t x199 = -56;
	volatile int32_t x200 = INT32_MIN;
	volatile int64_t t25 = -105319LL;

    t25 = ((x197*x198)/(x199%x200));

    if (t25 != 585LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x209 = -162;
	int8_t x210 = 1;
	static uint32_t x211 = UINT32_MAX;
	int8_t x212 = INT8_MIN;
	uint32_t t26 = 0U;

    t26 = ((x209*x210)/(x211%x212));

    if (t26 != 33818638U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x217 = INT8_MAX;
	int8_t x218 = -56;
	uint64_t x219 = 54863161882506732LLU;
	int64_t x220 = INT64_MIN;

    t27 = ((x217*x218)/(x219%x220));

    if (t27 != 336LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x237 = 1U;
	static uint8_t x238 = UINT8_MAX;
	uint32_t x239 = 36U;
	int32_t x240 = INT32_MIN;
	volatile uint32_t t28 = 3U;

    t28 = ((x237*x238)/(x239%x240));

    if (t28 != 7U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x249 = -3;
	static uint8_t x250 = 12U;
	int32_t x251 = -1;
	volatile uint16_t x252 = UINT16_MAX;

    t29 = ((x249*x250)/(x251%x252));

    if (t29 != 36) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x257 = 0LLU;
	uint16_t x260 = 209U;
	static volatile uint64_t t30 = 10LLU;

    t30 = ((x257*x258)/(x259%x260));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x277 = 11U;
	int8_t x278 = 0;
	volatile int8_t x280 = INT8_MIN;
	volatile int64_t t31 = -4791226765090210LL;

    t31 = ((x277*x278)/(x279%x280));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x285 = 7U;
	int8_t x286 = 0;
	uint64_t x287 = 10128561LLU;
	uint64_t x288 = 52193934LLU;
	volatile uint64_t t32 = 3637205484137LLU;

    t32 = ((x285*x286)/(x287%x288));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x291 = 894069241181553110LLU;
	uint16_t x292 = 18U;
	uint64_t t33 = 210524940311LLU;

    t33 = ((x289*x290)/(x291%x292));

    if (t33 != 153391689LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x309 = UINT8_MAX;
	volatile int8_t x310 = INT8_MAX;
	int32_t x312 = -3;
	volatile uint32_t t34 = 3571960U;

    t34 = ((x309*x310)/(x311%x312));

    if (t34 != 16192U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x313 = -36;
	uint16_t x314 = 86U;
	volatile uint64_t x315 = 20732430LLU;
	static int32_t x316 = INT32_MAX;
	uint64_t t35 = 838371573457LLU;

    t35 = ((x313*x314)/(x315%x316));

    if (t35 != 889753110161LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x321 = 3U;
	volatile int8_t x322 = 0;
	uint8_t x324 = UINT8_MAX;

    t36 = ((x321*x322)/(x323%x324));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x329 = UINT64_MAX;
	int16_t x331 = INT16_MIN;
	int64_t x332 = INT64_MIN;
	volatile uint64_t t37 = 154909LLU;

    t37 = ((x329*x330)/(x331%x332));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x337 = INT16_MAX;
	uint16_t x338 = 30966U;
	static int64_t x339 = INT64_MAX;
	static int32_t x340 = INT32_MIN;
	volatile int64_t t38 = -443355508264369LL;

    t38 = ((x337*x338)/(x339%x340));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x341 = 951U;
	static volatile int32_t x343 = -6955697;
	uint64_t x344 = 2143206011243014143LLU;

    t39 = ((x341*x342)/(x343%x344));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x345 = -1LL;
	uint8_t x346 = 1U;
	int32_t x347 = INT32_MIN;
	uint16_t x348 = UINT16_MAX;
	int64_t t40 = -29LL;

    t40 = ((x345*x346)/(x347%x348));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x349 = UINT32_MAX;
	static int64_t x351 = 14471801775LL;

    t41 = ((x349*x350)/(x351%x352));

    if (t41 != 91380888LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x353 = -1LL;
	int64_t x354 = 1LL;
	uint8_t x355 = UINT8_MAX;
	uint32_t x356 = 121U;
	volatile int64_t t42 = -193590432831LL;

    t42 = ((x353*x354)/(x355%x356));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x361 = INT8_MIN;
	uint32_t x362 = UINT32_MAX;
	int32_t x363 = INT32_MIN;
	int32_t x364 = -2789772;
	volatile uint32_t t43 = 412691U;

    t43 = ((x361*x362)/(x363%x364));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x381 = UINT32_MAX;
	int64_t x383 = -2065292169636808LL;
	volatile int64_t t44 = 1749573767LL;

    t44 = ((x381*x382)/(x383%x384));

    if (t44 != -51LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x390 = 47U;
	int16_t x391 = 1376;

    t45 = ((x389*x390)/(x391%x392));

    if (t45 != -103541243391LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int16_t x401 = INT16_MIN;
	int16_t x402 = -5;
	uint64_t x403 = UINT64_MAX;
	int64_t x404 = 1556797LL;
	uint64_t t46 = 3209899LLU;

    t46 = ((x401*x402)/(x403%x404));

    if (t46 != 5LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x405 = 15544U;
	volatile int8_t x406 = INT8_MAX;
	int16_t x408 = 253;
	volatile int32_t t47 = 0;

    t47 = ((x405*x406)/(x407%x408));

    if (t47 != -1974088) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x409 = -1;
	volatile int16_t x410 = 1;
	int64_t x411 = -3286124709LL;
	volatile uint8_t x412 = UINT8_MAX;
	int64_t t48 = -8241022286631LL;

    t48 = ((x409*x410)/(x411%x412));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x425 = 3093474U;
	static uint32_t x426 = 1962851U;
	uint16_t x427 = 18416U;
	int8_t x428 = INT8_MAX;

    t49 = ((x425*x426)/(x427%x428));

    if (t49 != 3239745126U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x429 = 2050606498U;
	volatile uint64_t x430 = 5208697LLU;
	int16_t x432 = 1443;
	uint64_t t50 = 176673449610293LLU;

    t50 = ((x429*x430)/(x431%x432));

    if (t50 != 10554335883708LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x449 = 1153;
	uint32_t x451 = 8242912U;
	uint8_t x452 = UINT8_MAX;
	volatile uint32_t t51 = 1484704U;

    t51 = ((x449*x450)/(x451%x452));

    if (t51 != 55594476U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x453 = INT16_MIN;
	static uint64_t x454 = 8LLU;
	static uint32_t x455 = UINT32_MAX;
	int32_t x456 = -28187704;

    t52 = ((x453*x454)/(x455%x456));

    if (t52 != 654425231942LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x457 = -1;
	int8_t x458 = -1;
	int32_t x460 = 2636839;
	static volatile uint64_t t53 = 33611623086962LLU;

    t53 = ((x457*x458)/(x459%x460));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x477 = -1;
	int64_t x478 = 3585976042LL;
	int16_t x479 = INT16_MIN;
	int64_t x480 = INT64_MIN;
	volatile int64_t t54 = -1850LL;

    t54 = ((x477*x478)/(x479%x480));

    if (t54 != 109435LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x481 = 0U;
	uint32_t x482 = UINT32_MAX;
	int64_t x483 = -264389998LL;
	int64_t x484 = INT64_MIN;
	volatile int64_t t55 = -51913LL;

    t55 = ((x481*x482)/(x483%x484));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x486 = UINT8_MAX;
	int8_t x487 = INT8_MIN;
	uint64_t x488 = 209574292841LLU;

    t56 = ((x485*x486)/(x487%x488));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x489 = UINT16_MAX;
	int32_t x490 = -1;
	volatile int16_t x491 = INT16_MIN;
	static int64_t x492 = INT64_MIN;

    t57 = ((x489*x490)/(x491%x492));

    if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x494 = 114859753686LL;
	static uint8_t x495 = 74U;
	static int64_t x496 = INT64_MAX;
	int64_t t58 = 2270210867096607170LL;

    t58 = ((x493*x494)/(x495%x496));

    if (t58 != 101720729159621LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x497 = INT8_MAX;
	volatile uint16_t x498 = UINT16_MAX;
	int16_t x500 = -30;
	uint32_t t59 = 3U;

    t59 = ((x497*x498)/(x499%x500));

    if (t59 != 23644U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x513 = 5U;
	uint16_t x515 = 3U;
	volatile uint16_t x516 = 4012U;
	int32_t t60 = 0;

    t60 = ((x513*x514)/(x515%x516));

    if (t60 != 25) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x521 = -63;
	uint8_t x522 = 13U;
	int16_t x523 = -1;
	uint8_t x524 = UINT8_MAX;
	static int32_t t61 = -7752886;

    t61 = ((x521*x522)/(x523%x524));

    if (t61 != 819) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x525 = INT32_MAX;
	uint64_t x526 = 10413135042561LLU;
	static int32_t x527 = -12;
	static uint64_t x528 = UINT64_MAX;

    t62 = ((x525*x526)/(x527%x528));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x533 = INT64_MIN;
	int8_t x534 = 0;
	int32_t x535 = INT32_MIN;
	uint32_t x536 = 11U;
	volatile int64_t t63 = 5157LL;

    t63 = ((x533*x534)/(x535%x536));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x538 = 24U;
	int32_t x540 = INT32_MIN;
	volatile uint32_t t64 = 374912635U;

    t64 = ((x537*x538)/(x539%x540));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x541 = INT8_MAX;
	int8_t x542 = -1;
	volatile int8_t x544 = INT8_MIN;
	volatile int32_t t65 = 3375;

    t65 = ((x541*x542)/(x543%x544));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x550 = 301331936660LLU;
	volatile uint64_t x552 = UINT64_MAX;
	volatile uint64_t t66 = 93231750330003LLU;

    t66 = ((x549*x550)/(x551%x552));

    if (t66 != 10152918114LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x553 = UINT32_MAX;
	int32_t x554 = INT32_MAX;
	int64_t x555 = INT64_MIN;
	volatile int64_t t67 = -984975LL;

    t67 = ((x553*x554)/(x555%x556));

    if (t67 != -2147483649LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x557 = 4696271LLU;
	uint64_t x560 = 999214380958632716LLU;
	uint64_t t68 = 13686796303562LLU;

    t68 = ((x557*x558)/(x559%x560));

    if (t68 != 80LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x561 = 62U;
	uint16_t x564 = UINT16_MAX;
	volatile uint32_t t69 = 237U;

    t69 = ((x561*x562)/(x563%x564));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x565 = UINT64_MAX;
	uint16_t x566 = UINT16_MAX;
	uint64_t x567 = 1802468103308LLU;
	uint64_t t70 = 6992051678LLU;

    t70 = ((x565*x566)/(x567%x568));

    if (t70 != 10234158LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x569 = 929453U;
	int64_t x570 = -66217561LL;
	uint64_t x571 = 3920749803113895900LLU;
	volatile uint16_t x572 = 8U;
	volatile uint64_t t71 = 461613887LLU;

    t71 = ((x569*x570)/(x571%x572));

    if (t71 != 4611670631899706870LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x573 = 1930694395LL;
	int64_t x574 = -1LL;
	uint64_t x575 = 45192053409LLU;
	uint64_t x576 = 166LLU;

    t72 = ((x573*x574)/(x575%x576));

    if (t72 != 186330748199786436LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x577 = 80U;
	int16_t x578 = INT16_MAX;
	static volatile uint8_t x579 = 15U;
	int32_t t73 = 8210101;

    t73 = ((x577*x578)/(x579%x580));

    if (t73 != 174757) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x589 = UINT64_MAX;
	int16_t x590 = -346;
	static uint64_t t74 = 6273143LLU;

    t74 = ((x589*x590)/(x591%x592));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x593 = 3LLU;
	uint8_t x595 = 1U;
	static int32_t x596 = -2293;
	volatile uint64_t t75 = 47391854400310073LLU;

    t75 = ((x593*x594)/(x595%x596));

    if (t75 != 186498693971770749LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x597 = 24824U;
	int16_t x600 = -292;
	uint32_t t76 = 3U;

    t76 = ((x597*x598)/(x599%x600));

    if (t76 != 715298304U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x609 = 465751869LLU;
	uint64_t x610 = UINT64_MAX;
	int32_t x611 = 214364754;
	uint8_t x612 = 28U;
	uint64_t t77 = 16472773LLU;

    t77 = ((x609*x610)/(x611%x612));

    if (t77 != 9223372036621899873LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x613 = 51988U;
	int16_t x614 = INT16_MAX;
	int16_t x615 = INT16_MAX;
	int32_t x616 = INT32_MAX;
	volatile uint32_t t78 = 0U;

    t78 = ((x613*x614)/(x615%x616));

    if (t78 != 51988U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x625 = INT16_MIN;
	volatile int64_t x626 = -1LL;
	static int8_t x627 = -3;
	volatile int16_t x628 = INT16_MIN;
	volatile int64_t t79 = -578386315806827818LL;

    t79 = ((x625*x626)/(x627%x628));

    if (t79 != -10922LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x633 = 5774;
	static int64_t x635 = INT64_MIN;
	static uint16_t x636 = 31U;
	int64_t t80 = 12798787832097176LL;

    t80 = ((x633*x634)/(x635%x636));

    if (t80 != 8661LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x637 = INT64_MAX;
	uint64_t x638 = UINT64_MAX;
	volatile int16_t x639 = INT16_MAX;
	static uint64_t t81 = 5953211848946635795LLU;

    t81 = ((x637*x638)/(x639%x640));

    if (t81 != 921784133205554LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x642 = INT8_MAX;
	uint32_t x643 = UINT32_MAX;
	volatile uint16_t x644 = 11287U;
	uint32_t t82 = 1359882U;

    t82 = ((x641*x642)/(x643%x644));

    if (t82 != 1024074U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x645 = 1U;
	int8_t x646 = -1;
	int8_t x647 = -3;
	uint32_t x648 = 445U;
	volatile uint32_t t83 = 2783226U;

    t83 = ((x645*x646)/(x647%x648));

    if (t83 != 10791375U) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x653 = -114;
	int16_t x654 = -1;
	int8_t x655 = INT8_MAX;
	volatile uint64_t x656 = UINT64_MAX;
	uint64_t t84 = 3LLU;

    t84 = ((x653*x654)/(x655%x656));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x657 = 111951131069LL;
	int32_t x659 = 32488;
	static int16_t x660 = INT16_MIN;

    t85 = ((x657*x658)/(x659%x660));

    if (t85 != -112915989376LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x661 = INT8_MIN;
	volatile int16_t x662 = -806;
	int8_t x663 = INT8_MIN;
	volatile uint32_t x664 = 283537U;
	volatile uint32_t t86 = 1370852264U;

    t86 = ((x661*x662)/(x663%x664));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x665 = 38U;
	int64_t x667 = INT64_MIN;
	volatile int64_t t87 = 1LL;

    t87 = ((x665*x666)/(x667%x668));

    if (t87 != -4LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x673 = -591977282LL;
	static int8_t x675 = -1;
	static int16_t x676 = INT16_MAX;
	volatile int64_t t88 = 33362252445801LL;

    t88 = ((x673*x674)/(x675%x676));

    if (t88 != 3551863692LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x681 = 14882;
	uint64_t x682 = 36036503163LLU;
	volatile int16_t x683 = INT16_MIN;
	uint32_t x684 = UINT32_MAX;
	static volatile uint64_t t89 = 260072488790751LLU;

    t89 = ((x681*x682)/(x683%x684));

    if (t89 != 124866LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x685 = -1;
	int64_t x687 = INT64_MIN;
	static int32_t x688 = INT32_MAX;

    t90 = ((x685*x686)/(x687%x688));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x697 = 16U;
	uint32_t x698 = 0U;
	static uint32_t x700 = 48370199U;
	uint32_t t91 = 334U;

    t91 = ((x697*x698)/(x699%x700));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x717 = -87;
	static uint64_t x718 = 1883695LLU;
	uint64_t x719 = 327307683LLU;
	int64_t x720 = INT64_MIN;
	uint64_t t92 = 4177735770180612843LLU;

    t92 = ((x717*x718)/(x719%x720));

    if (t92 != 56359031674LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x725 = -579LL;
	int32_t x727 = INT32_MAX;
	static int16_t x728 = INT16_MAX;
	static int64_t t93 = -178956LL;

    t93 = ((x725*x726)/(x727%x728));

    if (t93 != 44596896LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x733 = UINT8_MAX;
	uint32_t x734 = 85855073U;
	int16_t x735 = INT16_MIN;
	uint64_t x736 = 24801045LLU;
	static volatile uint64_t t94 = 390887301065446LLU;

    t94 = ((x733*x734)/(x735%x736));

    if (t94 != 43LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x737 = -324822LL;
	uint64_t x739 = 94083LLU;
	volatile uint32_t x740 = UINT32_MAX;
	uint64_t t95 = 151LLU;

    t95 = ((x737*x738)/(x739%x740));

    if (t95 != 54856LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x741 = -1;
	int8_t x742 = 0;
	uint8_t x744 = UINT8_MAX;
	int32_t t96 = 13072;

    t96 = ((x741*x742)/(x743%x744));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x746 = UINT64_MAX;
	uint16_t x747 = 7U;
	int64_t x748 = INT64_MIN;
	volatile uint64_t t97 = 263066114098471186LLU;

    t97 = ((x745*x746)/(x747%x748));

    if (t97 != 2635249153387078784LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x749 = INT32_MAX;
	uint32_t x750 = UINT32_MAX;
	volatile int8_t x752 = INT8_MAX;
	static volatile uint32_t t98 = 8148576U;

    t98 = ((x749*x750)/(x751%x752));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x753 = -1;
	volatile int8_t x754 = -29;
	static uint16_t x755 = 19U;
	int32_t t99 = 244;

    t99 = ((x753*x754)/(x755%x756));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x757 = -66738932726703563LL;
	uint8_t x758 = 15U;
	uint16_t x759 = UINT16_MAX;
	static volatile int64_t x760 = 125735618320LL;
	volatile int64_t t100 = -338732021516LL;

    t100 = ((x757*x758)/(x759%x760));

    if (t100 != -15275562537583LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x765 = UINT16_MAX;
	int16_t x766 = -1348;
	int16_t x767 = -1;
	volatile int8_t x768 = INT8_MIN;
	static int32_t t101 = -37636;

    t101 = ((x765*x766)/(x767%x768));

    if (t101 != 88341180) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x778 = 14U;
	uint32_t x779 = 875U;
	uint16_t x780 = UINT16_MAX;
	volatile uint32_t t102 = 292631989U;

    t102 = ((x777*x778)/(x779%x780));

    if (t102 != 4908009U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x781 = 131082347LL;
	static int16_t x782 = 1;
	int64_t x783 = -1LL;
	static volatile int64_t t103 = -52054843748LL;

    t103 = ((x781*x782)/(x783%x784));

    if (t103 != -131082347LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x785 = INT16_MIN;
	uint64_t x786 = UINT64_MAX;
	volatile int32_t x787 = -1;
	int8_t x788 = INT8_MIN;

    t104 = ((x785*x786)/(x787%x788));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x793 = -6133;
	int8_t x794 = INT8_MAX;
	static uint8_t x796 = UINT8_MAX;
	int32_t t105 = -85939025;

    t105 = ((x793*x794)/(x795%x796));

    if (t105 != 6085) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x797 = 19032U;
	int8_t x798 = 1;
	int16_t x799 = 76;
	volatile int32_t x800 = -456837;

    t106 = ((x797*x798)/(x799%x800));

    if (t106 != 250) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x801 = 1;
	int32_t x802 = INT32_MIN;
	uint32_t x803 = 3U;
	uint16_t x804 = UINT16_MAX;

    t107 = ((x801*x802)/(x803%x804));

    if (t107 != 715827882U) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x805 = -957;
	uint8_t x807 = 43U;
	uint16_t x808 = 7113U;
	static int32_t t108 = 32268853;

    t108 = ((x805*x806)/(x807%x808));

    if (t108 != 729278) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x809 = -1;
	uint32_t x810 = 13U;
	uint8_t x812 = 125U;

    t109 = ((x809*x810)/(x811%x812));

    if (t109 != 536870910LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x821 = 0U;
	int8_t x822 = -1;
	uint16_t x823 = 29892U;
	uint64_t x824 = 160621LLU;
	uint64_t t110 = 2399LLU;

    t110 = ((x821*x822)/(x823%x824));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint8_t x827 = UINT8_MAX;
	volatile uint16_t x828 = UINT16_MAX;
	volatile int64_t t111 = -18254018LL;

    t111 = ((x825*x826)/(x827%x828));

    if (t111 != -389407LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x829 = UINT16_MAX;
	static uint32_t x830 = UINT32_MAX;
	int8_t x832 = INT8_MIN;

    t112 = ((x829*x830)/(x831%x832));

    if (t112 != 214745088U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x833 = INT8_MIN;
	uint64_t x834 = UINT64_MAX;
	static volatile uint16_t x835 = 218U;
	int32_t x836 = INT32_MAX;
	uint64_t t113 = 4397335195534498555LLU;

    t113 = ((x833*x834)/(x835%x836));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x837 = UINT64_MAX;
	uint8_t x838 = UINT8_MAX;
	static uint16_t x839 = 29U;
	static volatile uint64_t t114 = 3073437249375055743LLU;

    t114 = ((x837*x838)/(x839%x840));

    if (t114 != 636094623231363840LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x841 = -8;
	static uint16_t x842 = 25835U;
	uint16_t x843 = 88U;
	uint64_t x844 = 6787LLU;
	volatile uint64_t t115 = 9LLU;

    t115 = ((x841*x842)/(x843%x844));

    if (t115 != 209622091746697101LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x845 = INT8_MIN;
	volatile int8_t x846 = INT8_MAX;
	int8_t x848 = INT8_MIN;
	static uint32_t t116 = 419U;

    t116 = ((x845*x846)/(x847%x848));

    if (t116 != 33818512U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x853 = 526971103402LLU;
	static int64_t x854 = -2LL;
	uint8_t x855 = 1U;
	int32_t x856 = 6269106;

    t117 = ((x853*x854)/(x855%x856));

    if (t117 != 18446743019767344812LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int32_t x857 = 30460309;
	static volatile int16_t x858 = 12;
	static int8_t x859 = INT8_MAX;
	uint32_t x860 = 47698892U;
	static uint32_t t118 = 22923U;

    t118 = ((x857*x858)/(x859%x860));

    if (t118 != 2878139U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x862 = 1146196747507796LLU;
	int32_t x863 = 1;
	int32_t x864 = INT32_MAX;
	uint64_t t119 = 14712LLU;

    t119 = ((x861*x862)/(x863%x864));

    if (t119 != 71064198345483352LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x865 = 13563LL;
	int16_t x866 = -1;
	int32_t x868 = -381696;
	static int64_t t120 = 3782524744LL;

    t120 = ((x865*x866)/(x867%x868));

    if (t120 != -6781LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int16_t x869 = INT16_MAX;
	static uint16_t x871 = 568U;
	static volatile int64_t x872 = INT64_MIN;
	int64_t t121 = 615135973280LL;

    t121 = ((x869*x870)/(x871%x872));

    if (t121 != 19902LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x881 = 5;
	uint8_t x882 = 1U;
	static uint64_t x884 = UINT64_MAX;

    t122 = ((x881*x882)/(x883%x884));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x885 = -16591886LL;
	int32_t x886 = INT32_MIN;
	static uint16_t x887 = 5U;
	uint64_t x888 = 2LLU;

    t123 = ((x885*x886)/(x887%x888));

    if (t123 != 35630803874480128LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x890 = 0LL;
	volatile int32_t x891 = INT32_MIN;
	volatile int64_t t124 = -3782LL;

    t124 = ((x889*x890)/(x891%x892));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x893 = -1LL;
	static int32_t x894 = INT32_MIN;
	uint8_t x895 = 1U;
	int32_t x896 = INT32_MIN;
	volatile int64_t t125 = 20556325LL;

    t125 = ((x893*x894)/(x895%x896));

    if (t125 != 2147483648LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x897 = INT16_MIN;
	int32_t x898 = -35;
	uint32_t x899 = 1U;
	static volatile uint8_t x900 = UINT8_MAX;
	uint32_t t126 = 4227163U;

    t126 = ((x897*x898)/(x899%x900));

    if (t126 != 1146880U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x905 = INT8_MIN;
	int16_t x906 = INT16_MIN;
	volatile int32_t x908 = -9368;
	static int32_t t127 = -623814788;

    t127 = ((x905*x906)/(x907%x908));

    if (t127 != 4194304) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x909 = 21;
	int64_t x910 = -84LL;
	uint16_t x912 = UINT16_MAX;
	static int64_t t128 = -13LL;

    t128 = ((x909*x910)/(x911%x912));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x914 = INT8_MIN;
	uint32_t x915 = 53094845U;
	uint64_t x916 = 67905158923LLU;
	uint64_t t129 = 306913LLU;

    t129 = ((x913*x914)/(x915%x916));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x917 = -20;
	uint64_t x919 = 60LLU;
	static int16_t x920 = INT16_MIN;

    t130 = ((x917*x918)/(x919%x920));

    if (t130 != 307445734546886084LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x925 = INT16_MIN;
	int32_t x926 = -1;
	int8_t x927 = -1;
	int16_t x928 = -113;
	int32_t t131 = -52668;

    t131 = ((x925*x926)/(x927%x928));

    if (t131 != -32768) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x929 = -4146969383LL;
	volatile int8_t x930 = INT8_MAX;
	static int8_t x931 = INT8_MIN;
	uint8_t x932 = UINT8_MAX;
	int64_t t132 = 26LL;

    t132 = ((x929*x930)/(x931%x932));

    if (t132 != 4114571184LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint16_t x933 = 1975U;
	uint8_t x934 = UINT8_MAX;
	static volatile int64_t x935 = INT64_MIN;
	volatile int8_t x936 = 37;
	int64_t t133 = -238LL;

    t133 = ((x933*x934)/(x935%x936));

    if (t133 != -83937LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x937 = 16654086U;
	volatile uint8_t x939 = UINT8_MAX;
	static int16_t x940 = INT16_MAX;
	uint32_t t134 = 31088U;

    t134 = ((x937*x938)/(x939%x940));

    if (t134 != 13031755U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x941 = INT32_MIN;
	int16_t x943 = -619;
	static uint16_t x944 = 4U;
	uint32_t t135 = 3334297U;

    t135 = ((x941*x942)/(x943%x944));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x953 = 12679824LLU;
	volatile int8_t x954 = 0;
	int8_t x955 = -8;
	volatile uint64_t t136 = 161952LLU;

    t136 = ((x953*x954)/(x955%x956));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint32_t x974 = 179546002U;
	volatile int64_t x975 = -73176929LL;
	volatile int32_t x976 = INT32_MIN;

    t137 = ((x973*x974)/(x975%x976));

    if (t137 != -56LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x979 = UINT16_MAX;
	static int8_t x980 = INT8_MIN;
	static volatile int32_t t138 = -5593;

    t138 = ((x977*x978)/(x979%x980));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x982 = 90;
	int16_t x984 = INT16_MIN;
	uint32_t t139 = 3285359U;

    t139 = ((x981*x982)/(x983%x984));

    if (t139 != 91222U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x989 = 338535360033892509LLU;
	int8_t x990 = INT8_MAX;
	volatile uint8_t x991 = 114U;
	uint64_t t140 = 748691716568730LLU;

    t140 = ((x989*x990)/(x991%x992));

    if (t140 != 53513180498993380LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x997 = INT32_MIN;
	int32_t x1000 = 3334;

    t141 = ((x997*x998)/(x999%x1000));

    if (t141 != 715827882LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x1001 = 2415287328471788237LLU;
	static int32_t x1002 = INT32_MIN;
	int8_t x1003 = INT8_MIN;
	uint16_t x1004 = UINT16_MAX;

    t142 = ((x1001*x1002)/(x1003%x1004));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x1005 = INT16_MAX;
	uint32_t x1006 = 137845386U;
	volatile int16_t x1007 = INT16_MAX;
	static volatile uint16_t x1008 = UINT16_MAX;
	static volatile uint32_t t143 = 1014U;

    t143 = ((x1005*x1006)/(x1007%x1008));

    if (t143 != 84509U) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x1009 = 1412U;
	int64_t x1010 = -1898597011026914LL;
	int16_t x1011 = -15388;
	uint16_t x1012 = 32009U;
	int64_t t144 = -17047438463601LL;

    t144 = ((x1009*x1010)/(x1011%x1012));

    if (t144 != 174214906392643LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x1017 = INT8_MAX;
	volatile uint32_t x1018 = 356089U;
	uint16_t x1019 = 9U;
	uint16_t x1020 = 2U;
	volatile uint32_t t145 = 152U;

    t145 = ((x1017*x1018)/(x1019%x1020));

    if (t145 != 45223303U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x1029 = -1;
	static uint64_t x1030 = 80604LLU;
	int64_t x1031 = -1LL;
	int32_t x1032 = INT32_MIN;
	uint64_t t146 = 3681618393LLU;

    t146 = ((x1029*x1030)/(x1031%x1032));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x1033 = 6U;
	int8_t x1034 = -1;
	int32_t x1035 = -293909589;
	static uint32_t x1036 = UINT32_MAX;

    t147 = ((x1033*x1034)/(x1035%x1036));

    if (t147 != 1U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x1037 = 7U;
	static uint8_t x1038 = 3U;
	static uint8_t x1039 = UINT8_MAX;
	uint64_t x1040 = UINT64_MAX;
	static uint64_t t148 = 63391782470729074LLU;

    t148 = ((x1037*x1038)/(x1039%x1040));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x1045 = 7U;
	int8_t x1046 = INT8_MAX;
	static int8_t x1047 = INT8_MAX;
	int32_t x1048 = 3200621;

    t149 = ((x1045*x1046)/(x1047%x1048));

    if (t149 != 7) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x1054 = UINT64_MAX;
	static uint32_t x1055 = 845U;
	volatile uint64_t x1056 = UINT64_MAX;

    t150 = ((x1053*x1054)/(x1055%x1056));

    if (t150 != 21830466359419561LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x1057 = INT64_MAX;
	volatile int16_t x1058 = 0;
	int8_t x1059 = 20;
	int8_t x1060 = INT8_MAX;
	static int64_t t151 = -1960LL;

    t151 = ((x1057*x1058)/(x1059%x1060));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x1062 = -10982218369030LL;
	volatile int8_t x1063 = 13;
	int8_t x1064 = INT8_MIN;

    t152 = ((x1061*x1062)/(x1063%x1064));

    if (t152 != 844786028386LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x1069 = UINT8_MAX;
	int8_t x1072 = -12;

    t153 = ((x1069*x1070)/(x1071%x1072));

    if (t153 != 1044480LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x1077 = UINT8_MAX;
	int8_t x1078 = INT8_MIN;
	uint16_t x1079 = 286U;
	volatile int32_t t154 = 27;

    t154 = ((x1077*x1078)/(x1079%x1080));

    if (t154 != -114) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x1086 = -1LL;
	uint16_t x1087 = 6320U;
	int16_t x1088 = INT16_MIN;
	int64_t t155 = -181010LL;

    t155 = ((x1085*x1086)/(x1087%x1088));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x1098 = INT16_MIN;
	int8_t x1100 = INT8_MAX;
	int32_t t156 = 3;

    t156 = ((x1097*x1098)/(x1099%x1100));

    if (t156 != -32768) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x1105 = UINT16_MAX;
	uint64_t x1106 = 29666304LLU;
	int8_t x1108 = INT8_MAX;

    t157 = ((x1105*x1106)/(x1107%x1108));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1121 = -24;
	int8_t x1122 = 0;
	volatile uint16_t x1123 = UINT16_MAX;
	int8_t x1124 = 20;
	static volatile int32_t t158 = -1;

    t158 = ((x1121*x1122)/(x1123%x1124));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1129 = -648839;
	static int16_t x1132 = INT16_MIN;

    t159 = ((x1129*x1130)/(x1131%x1132));

    if (t159 != -10138) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1137 = -479;
	int32_t x1138 = -1097883;
	static uint32_t x1139 = 57U;
	int64_t x1140 = INT64_MAX;
	int64_t t160 = -2691813540659LL;

    t160 = ((x1137*x1138)/(x1139%x1140));

    if (t160 != 9226069LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1149 = -5825;
	static uint16_t x1150 = 1838U;
	int64_t t161 = 62706987540565LL;

    t161 = ((x1149*x1150)/(x1151%x1152));

    if (t161 != -41985LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x1153 = -353LL;
	uint32_t x1154 = 36977870U;
	static int8_t x1155 = INT8_MIN;
	int32_t x1156 = INT32_MIN;
	volatile int64_t t162 = 955461LL;

    t162 = ((x1153*x1154)/(x1155%x1156));

    if (t162 != 101978032LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x1157 = INT8_MAX;
	int32_t x1158 = -1;
	int64_t x1159 = -1LL;
	int64_t x1160 = 526790LL;

    t163 = ((x1157*x1158)/(x1159%x1160));

    if (t163 != 127LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x1173 = UINT64_MAX;
	volatile int64_t x1174 = INT64_MAX;
	uint8_t x1175 = 19U;
	uint64_t t164 = 4354832487LLU;

    t164 = ((x1173*x1174)/(x1175%x1176));

    if (t164 != 485440633518672411LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x1181 = 0;
	uint8_t x1183 = 6U;
	static int32_t x1184 = INT32_MIN;
	volatile int64_t t165 = 1571LL;

    t165 = ((x1181*x1182)/(x1183%x1184));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x1185 = 42717257907LLU;
	uint16_t x1188 = 25U;
	uint64_t t166 = 929481563233LLU;

    t166 = ((x1185*x1186)/(x1187%x1188));

    if (t166 != 823630624854883970LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1197 = 50U;
	static int8_t x1199 = -1;
	volatile uint8_t x1200 = 2U;
	volatile int32_t t167 = 319902860;

    t167 = ((x1197*x1198)/(x1199%x1200));

    if (t167 != 50) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1205 = 30289653LLU;
	static int64_t x1206 = -1LL;
	volatile uint64_t t168 = 778LLU;

    t168 = ((x1205*x1206)/(x1207%x1208));

    if (t168 != 281479271743026LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x1218 = 13407U;
	volatile int8_t x1219 = INT8_MIN;
	int8_t x1220 = INT8_MAX;
	uint32_t t169 = 557174795U;

    t169 = ((x1217*x1218)/(x1219%x1220));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1221 = 177;
	volatile uint32_t x1222 = UINT32_MAX;
	uint32_t x1223 = 7062U;
	volatile int64_t t170 = 195LL;

    t170 = ((x1221*x1222)/(x1223%x1224));

    if (t170 != 608179LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x1225 = INT16_MIN;
	static int16_t x1226 = 2;
	int8_t x1227 = -1;
	int32_t t171 = -1426;

    t171 = ((x1225*x1226)/(x1227%x1228));

    if (t171 != 65536) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x1229 = -1LL;
	int16_t x1231 = INT16_MIN;
	uint8_t x1232 = 40U;
	volatile int64_t t172 = -46291744157706455LL;

    t172 = ((x1229*x1230)/(x1231%x1232));

    if (t172 != -16LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1233 = 99343LLU;
	int8_t x1234 = -1;
	int8_t x1235 = INT8_MIN;
	volatile uint8_t x1236 = 14U;
	static volatile uint64_t t173 = 14857536LLU;

    t173 = ((x1233*x1234)/(x1235%x1236));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x1237 = 106;
	int16_t x1238 = 1;
	int32_t x1239 = 236;
	volatile uint32_t x1240 = 47025387U;
	uint32_t t174 = 39598U;

    t174 = ((x1237*x1238)/(x1239%x1240));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x1241 = INT16_MIN;
	int16_t x1242 = INT16_MIN;
	int16_t x1243 = 1;
	int32_t t175 = -93613;

    t175 = ((x1241*x1242)/(x1243%x1244));

    if (t175 != 1073741824) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1249 = -1LL;
	uint64_t x1250 = UINT64_MAX;
	int64_t x1251 = -1LL;
	volatile int64_t x1252 = 2699144682502467435LL;
	static volatile uint64_t t176 = 920602837354223LLU;

    t176 = ((x1249*x1250)/(x1251%x1252));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x1254 = UINT64_MAX;
	volatile uint16_t x1255 = UINT16_MAX;
	int64_t x1256 = INT64_MIN;
	volatile uint64_t t177 = 83LLU;

    t177 = ((x1253*x1254)/(x1255%x1256));

    if (t177 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1261 = UINT8_MAX;
	uint64_t x1262 = 15627LLU;
	uint64_t x1263 = UINT64_MAX;
	int64_t x1264 = -7720192869LL;
	volatile uint64_t t178 = 373568558862153913LLU;

    t178 = ((x1261*x1262)/(x1263%x1264));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1265 = INT8_MIN;
	volatile uint16_t x1266 = UINT16_MAX;
	int32_t x1267 = -7;
	uint8_t x1268 = UINT8_MAX;
	int32_t t179 = -459820;

    t179 = ((x1265*x1266)/(x1267%x1268));

    if (t179 != 1198354) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x1269 = UINT64_MAX;
	int8_t x1270 = -1;
	uint16_t x1271 = 65U;
	uint16_t x1272 = UINT16_MAX;
	static volatile uint64_t t180 = 526020232691358LLU;

    t180 = ((x1269*x1270)/(x1271%x1272));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1273 = 21;
	int8_t x1275 = -1;

    t181 = ((x1273*x1274)/(x1275%x1276));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1281 = 1LL;
	volatile int16_t x1282 = -1;
	static volatile uint64_t x1283 = 118927800LLU;
	int16_t x1284 = 51;
	static uint64_t t182 = 62LLU;

    t182 = ((x1281*x1282)/(x1283%x1284));

    if (t182 != 558992244657865200LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x1285 = -1;
	volatile int16_t x1286 = -26;
	int16_t x1287 = INT16_MIN;
	static int32_t x1288 = 404234514;

    t183 = ((x1285*x1286)/(x1287%x1288));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x1302 = UINT8_MAX;
	volatile int64_t x1303 = INT64_MAX;
	int64_t x1304 = INT64_MIN;
	volatile int64_t t184 = 467239938557678991LL;

    t184 = ((x1301*x1302)/(x1303%x1304));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x1309 = INT16_MAX;
	int8_t x1310 = INT8_MIN;
	volatile int32_t x1311 = -1;
	static int16_t x1312 = 4442;

    t185 = ((x1309*x1310)/(x1311%x1312));

    if (t185 != 4194176) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1317 = INT32_MIN;
	uint64_t x1318 = UINT64_MAX;
	int8_t x1319 = INT8_MAX;
	int32_t x1320 = INT32_MIN;
	uint64_t t186 = 83411LLU;

    t186 = ((x1317*x1318)/(x1319%x1320));

    if (t186 != 16909320LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1321 = 253;
	uint64_t x1322 = 2980LLU;
	static uint64_t x1323 = 3LLU;
	static int32_t x1324 = INT32_MIN;
	uint64_t t187 = 34317802011202LLU;

    t187 = ((x1321*x1322)/(x1323%x1324));

    if (t187 != 251313LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x1325 = 16U;
	volatile int32_t x1327 = INT32_MIN;
	static int64_t x1328 = INT64_MIN;
	static volatile int64_t t188 = -14426LL;

    t188 = ((x1325*x1326)/(x1327%x1328));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1333 = 582690LL;
	static uint16_t x1334 = UINT16_MAX;
	int16_t x1336 = -24;

    t189 = ((x1333*x1334)/(x1335%x1336));

    if (t189 != -4773323643LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x1337 = UINT16_MAX;
	volatile int8_t x1338 = -30;
	uint16_t x1339 = 305U;
	uint16_t x1340 = 16684U;
	static int32_t t190 = 10206541;

    t190 = ((x1337*x1338)/(x1339%x1340));

    if (t190 != -6446) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint16_t x1349 = 5318U;
	uint8_t x1350 = 99U;
	static volatile int64_t x1351 = INT64_MAX;
	uint32_t x1352 = 13U;

    t191 = ((x1349*x1350)/(x1351%x1352));

    if (t191 != 75211LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x1353 = UINT8_MAX;
	int16_t x1354 = 1741;
	int32_t x1355 = 19594513;
	static uint64_t x1356 = 7867885864604LLU;
	volatile uint64_t t192 = 184817176102LLU;

    t192 = ((x1353*x1354)/(x1355%x1356));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1361 = 41;
	int8_t x1362 = INT8_MIN;
	volatile uint8_t x1363 = UINT8_MAX;
	volatile int32_t t193 = -1;

    t193 = ((x1361*x1362)/(x1363%x1364));

    if (t193 != -20) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1369 = 359626527LLU;
	volatile int16_t x1370 = INT16_MIN;
	static int32_t x1371 = INT32_MIN;
	uint16_t x1372 = 9U;
	volatile uint64_t t194 = 81958953461232005LLU;

    t194 = ((x1369*x1370)/(x1371%x1372));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1374 = 981534611939173LL;
	uint16_t x1375 = 448U;
	int32_t x1376 = INT32_MAX;
	int64_t t195 = -2934629000929348168LL;

    t195 = ((x1373*x1374)/(x1375%x1376));

    if (t195 != 2190925473078LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x1377 = 90LL;
	uint32_t x1379 = 5U;
	int64_t x1380 = -225469629823400121LL;
	static uint64_t t196 = 2106706216035LLU;

    t196 = ((x1377*x1378)/(x1379%x1380));

    if (t196 != 11039639346LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1381 = -1;
	int16_t x1382 = INT16_MIN;
	uint8_t x1383 = 1U;
	int32_t x1384 = INT32_MAX;
	int32_t t197 = 12900;

    t197 = ((x1381*x1382)/(x1383%x1384));

    if (t197 != 32768) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1385 = -1LL;
	int8_t x1386 = -1;
	int8_t x1387 = INT8_MIN;
	uint64_t t198 = 109125LLU;

    t198 = ((x1385*x1386)/(x1387%x1388));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint8_t x1397 = UINT8_MAX;
	volatile int16_t x1398 = 1;
	int32_t x1399 = -1;
	static int8_t x1400 = INT8_MIN;
	static int32_t t199 = 754;

    t199 = ((x1397*x1398)/(x1399%x1400));

    if (t199 != -255) { NG(); } else { ; }
	
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

