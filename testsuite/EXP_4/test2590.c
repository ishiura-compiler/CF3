
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

volatile int32_t x1 = INT32_MIN;
uint8_t x3 = 17U;
int16_t x11 = INT16_MIN;
uint32_t x32 = UINT32_MAX;
volatile uint32_t t3 = 12U;
int16_t x38 = -1;
int16_t x41 = 2580;
uint8_t x44 = UINT8_MAX;
volatile int64_t x57 = INT64_MIN;
int32_t x79 = 2;
volatile int16_t x81 = INT16_MIN;
volatile int16_t x95 = INT16_MIN;
int32_t t14 = -158;
int32_t x104 = INT32_MIN;
uint32_t x120 = 2800U;
int32_t t18 = -123268546;
uint32_t x126 = UINT32_MAX;
int16_t x127 = INT16_MAX;
int64_t x153 = -4328470872939534044LL;
static uint32_t x159 = 64U;
int8_t x168 = 7;
uint16_t x171 = 22608U;
static int64_t x173 = INT64_MAX;
volatile uint64_t t29 = 125925117LLU;
int64_t x190 = INT64_MIN;
volatile int64_t t30 = -41849324394922383LL;
uint32_t x194 = 57377532U;
int16_t x195 = -1;
int8_t x198 = INT8_MAX;
static uint16_t x201 = 652U;
int64_t x207 = -6414905248LL;
static volatile int16_t x209 = 50;
int8_t x212 = 62;
volatile int8_t x213 = -1;
int64_t x226 = -1LL;
volatile int64_t t40 = -253LL;
int8_t x241 = -1;
uint64_t x244 = UINT64_MAX;
static int16_t x258 = INT16_MAX;
int64_t x260 = 33255120LL;
int64_t x269 = 470918774184409LL;
volatile int32_t x276 = 0;
volatile int64_t t49 = -6932367892LL;
int64_t x281 = 6464090220613284LL;
int16_t x284 = INT16_MIN;
static int64_t t50 = -241457951LL;
volatile uint32_t t52 = 29842186U;
int16_t x307 = INT16_MIN;
uint16_t x328 = 746U;
int64_t t56 = -5546950497741547LL;
volatile uint8_t x337 = 24U;
uint64_t x338 = UINT64_MAX;
static volatile int32_t x339 = -16;
uint8_t x341 = UINT8_MAX;
int64_t t60 = -127928450169LL;
volatile int32_t x345 = INT32_MAX;
uint8_t x351 = 6U;
uint32_t x356 = 1667064U;
uint32_t t63 = 1218959U;
volatile uint8_t x362 = 24U;
uint32_t x364 = UINT32_MAX;
uint32_t t64 = 770U;
volatile int8_t x368 = INT8_MIN;
static uint8_t x376 = UINT8_MAX;
uint64_t x382 = 220719498678536310LLU;
int32_t x383 = INT32_MAX;
int64_t t68 = -293LL;
int64_t x389 = -1LL;
uint8_t x392 = 3U;
volatile uint8_t x406 = 38U;
uint8_t x408 = 22U;
int16_t x423 = -10;
static uint32_t t74 = 119U;
int64_t x426 = INT64_MIN;
volatile int32_t x428 = INT32_MAX;
int64_t x437 = -461212946089598876LL;
int8_t x443 = INT8_MIN;
int32_t x444 = -1492;
static int32_t t78 = -11932;
int8_t x445 = INT8_MIN;
int64_t x461 = INT64_MAX;
int32_t x465 = 44752777;
uint64_t x467 = UINT64_MAX;
volatile uint64_t x472 = 7679370LLU;
volatile uint64_t t83 = 51284566627LLU;
volatile int64_t x475 = -476527LL;
int64_t x499 = -1LL;
uint32_t x503 = 2987529U;
volatile int64_t x516 = -1LL;
volatile uint64_t x522 = UINT64_MAX;
static int8_t x525 = -1;
int32_t x528 = -1;
uint32_t t93 = 42676346U;
int16_t x529 = INT16_MAX;
uint32_t x561 = 16857842U;
uint8_t x562 = UINT8_MAX;
int16_t x578 = 89;
int16_t x583 = 2;
static uint64_t x595 = UINT64_MAX;
uint64_t t106 = 376LLU;
uint32_t x612 = 19U;
int32_t t109 = 1;
uint16_t x621 = UINT16_MAX;
int8_t x622 = -1;
volatile uint64_t x629 = 1267041993270099720LLU;
int8_t x630 = 0;
int8_t x632 = INT8_MAX;
static uint8_t x638 = UINT8_MAX;
static int16_t x648 = INT16_MIN;
uint64_t x650 = 38815LLU;
int16_t x652 = -2;
int64_t x657 = 9LL;
volatile int64_t t118 = 696041LL;
uint32_t x662 = 68375U;
uint32_t x664 = 1950378U;
int16_t x682 = -1;
int64_t x686 = -32LL;
int8_t x688 = -1;
volatile uint8_t x697 = UINT8_MAX;
static volatile int32_t x705 = 122;
static uint64_t x706 = 2618748549LLU;
int16_t x711 = -1;
int8_t x745 = -1;
int16_t x750 = INT16_MAX;
int8_t x761 = -1;
int64_t t134 = -15331237964956LL;
uint8_t x775 = UINT8_MAX;
int16_t x780 = -15;
uint64_t t137 = 22561014751889LLU;
int16_t x781 = INT16_MIN;
uint16_t x794 = UINT16_MAX;
static volatile uint32_t t140 = 182U;
static int32_t x799 = -863;
volatile int32_t t141 = 66032;
int16_t x803 = -1;
uint32_t x804 = 1U;
uint8_t x807 = 0U;
uint32_t x812 = 1916175U;
static volatile uint64_t x816 = 344392177LLU;
uint16_t x820 = 31U;
int64_t x822 = 44LL;
int64_t t149 = 448787925LL;
volatile int16_t x846 = -6004;
uint8_t x847 = 18U;
int8_t x848 = INT8_MAX;
uint16_t x853 = 188U;
int32_t x854 = -1;
static int32_t t152 = 305;
static uint16_t x861 = UINT16_MAX;
volatile int16_t x866 = INT16_MAX;
int8_t x868 = -59;
int16_t x872 = INT16_MIN;
volatile int32_t x876 = INT32_MAX;
volatile uint64_t t156 = 1242288621LLU;
int32_t t158 = 32654773;
static int32_t x902 = INT32_MIN;
volatile int8_t x903 = INT8_MAX;
int64_t x904 = -2LL;
int8_t x920 = INT8_MIN;
uint64_t x925 = UINT64_MAX;
uint32_t x932 = UINT32_MAX;
int16_t x935 = -13432;
uint32_t x937 = 667876U;
int8_t x944 = -1;
volatile uint16_t x949 = UINT16_MAX;
volatile int16_t x965 = INT16_MIN;
uint64_t x969 = 1070724354924834067LLU;
static volatile int16_t x987 = INT16_MIN;
int64_t x1000 = -83926323652899LL;
static volatile int64_t x1002 = 2520853853LL;
volatile uint64_t t179 = 1LLU;
int8_t x1011 = INT8_MIN;
int32_t x1012 = 1;
int64_t x1025 = 102678LL;
uint32_t x1030 = 55623U;
int8_t x1031 = 0;
static int8_t x1032 = -1;
volatile uint64_t x1033 = 61481LLU;
int32_t x1034 = 25017550;
int8_t x1039 = -1;
int64_t x1040 = -7694799578LL;
static uint32_t t188 = 661520308U;
uint64_t t189 = 17471919253968LLU;
static int32_t x1065 = INT32_MAX;
int16_t x1082 = INT16_MIN;
int32_t x1085 = INT32_MAX;
int32_t x1088 = INT32_MAX;
uint8_t x1101 = 1U;
int64_t x1107 = -93971441LL;
volatile uint16_t x1108 = UINT16_MAX;


void f0(void) {
    	static uint8_t x2 = 20U;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 75707LLU;

    t0 = (x1^(x2*(x3^x4)));

    if (t0 != 2147483288LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x9 = 1U;
	volatile uint8_t x10 = 57U;
	volatile int64_t x12 = -1LL;
	volatile int64_t t1 = 7176LL;

    t1 = (x9^(x10*(x11^x12)));

    if (t1 != 1867718LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x25 = INT32_MAX;
	static int16_t x26 = INT16_MIN;
	volatile int16_t x27 = INT16_MIN;
	int8_t x28 = 17;
	volatile int32_t t2 = -4001047;

    t2 = (x25^(x26*(x27^x28)));

    if (t2 != 1074298879) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x29 = INT8_MIN;
	uint16_t x30 = 19U;
	int8_t x31 = INT8_MAX;

    t3 = (x29^(x30*(x31^x32)));

    if (t3 != 2304U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x37 = -59;
	static uint8_t x39 = 4U;
	volatile int8_t x40 = INT8_MAX;
	volatile int32_t t4 = -779521;

    t4 = (x37^(x38*(x39^x40)));

    if (t4 != 64) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x42 = 43U;
	int16_t x43 = INT16_MIN;
	int32_t t5 = 0;

    t5 = (x41^(x42*(x43^x44)));

    if (t5 != -1400639) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x45 = 377605965LLU;
	int64_t x46 = -1LL;
	uint64_t x47 = 1963174481619575986LLU;
	int8_t x48 = -1;
	volatile uint64_t t6 = 30033419100742LLU;

    t6 = (x45^(x46*(x47^x48)));

    if (t6 != 1963174481996950526LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x53 = INT8_MIN;
	int32_t x54 = INT32_MIN;
	volatile uint16_t x55 = 22U;
	int64_t x56 = -15546LL;
	volatile int64_t t7 = 28634435866340LL;

    t7 = (x53^(x54*(x55^x56)));

    if (t7 != -33363305955456LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x58 = 47729178U;
	static volatile int64_t x59 = 65367LL;
	int8_t x60 = 0;
	int64_t t8 = 450789595147217556LL;

    t8 = (x57^(x58*(x59^x60)));

    if (t8 != -9223368916941597482LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x61 = INT16_MIN;
	int8_t x62 = INT8_MIN;
	static uint32_t x63 = UINT32_MAX;
	uint64_t x64 = 57251157062732585LLU;
	volatile uint64_t t9 = 68LLU;

    t9 = (x61^(x62*(x63^x64)));

    if (t9 != 7328147830421984512LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x65 = -2073;
	int64_t x66 = -1LL;
	volatile int16_t x67 = -2;
	int32_t x68 = INT32_MAX;
	int64_t t10 = 68624773LL;

    t10 = (x65^(x66*(x67^x68)));

    if (t10 != -2147481576LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x69 = INT32_MAX;
	static int64_t x70 = 110758894132352LL;
	int32_t x71 = -1;
	static uint64_t x72 = 20655746372LLU;
	uint64_t t11 = 1610699988978969LLU;

    t11 = (x69^(x70*(x71^x72)));

    if (t11 != 12914501858655825535LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x77 = INT8_MIN;
	int16_t x78 = -11;
	uint16_t x80 = UINT16_MAX;
	int32_t t12 = 21246902;

    t12 = (x77^(x78*(x79^x80)));

    if (t12 != 720801) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x82 = 5U;
	uint32_t x83 = 864U;
	volatile uint8_t x84 = 1U;
	static volatile uint32_t t13 = 114839658U;

    t13 = (x81^(x82*(x83^x84)));

    if (t13 != 4294938853U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x93 = -1;
	int16_t x94 = -3;
	int16_t x96 = INT16_MIN;

    t14 = (x93^(x94*(x95^x96)));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x101 = 1;
	int8_t x102 = -1;
	volatile uint32_t x103 = 0U;
	volatile uint32_t t15 = 26111U;

    t15 = (x101^(x102*(x103^x104)));

    if (t15 != 2147483649U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x105 = UINT8_MAX;
	int8_t x106 = -1;
	static int16_t x107 = INT16_MIN;
	volatile int8_t x108 = -6;
	int32_t t16 = -1;

    t16 = (x105^(x106*(x107^x108)));

    if (t16 != -32519) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x117 = 8U;
	int8_t x118 = 1;
	volatile int32_t x119 = -239815630;
	uint32_t t17 = 86597424U;

    t17 = (x117^(x118*(x119^x120)));

    if (t17 != 4055154378U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x121 = UINT8_MAX;
	static int32_t x122 = -7317;
	static int32_t x123 = INT32_MIN;
	int32_t x124 = INT32_MAX;

    t18 = (x121^(x122*(x123^x124)));

    if (t18 != 7274) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x125 = INT64_MIN;
	int16_t x128 = 3774;
	volatile int64_t t19 = 658752339834300345LL;

    t19 = (x125^(x126*(x127^x128)));

    if (t19 != -9223372032559837505LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x129 = -1;
	uint16_t x130 = 147U;
	static uint8_t x131 = UINT8_MAX;
	static int64_t x132 = -1LL;
	static volatile int64_t t20 = -53LL;

    t20 = (x129^(x130*(x131^x132)));

    if (t20 != 37631LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x133 = -1;
	static int16_t x134 = INT16_MAX;
	int8_t x135 = INT8_MIN;
	volatile int16_t x136 = INT16_MAX;
	volatile int32_t t21 = 1640;

    t21 = (x133^(x134*(x135^x136)));

    if (t21 != 1069547646) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x137 = 6044007434721LL;
	int16_t x138 = 1657;
	uint16_t x139 = UINT16_MAX;
	int8_t x140 = 5;
	volatile int64_t t22 = 619213493295905LL;

    t22 = (x137^(x138*(x139^x140)));

    if (t22 != 6044035207371LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x154 = UINT8_MAX;
	uint8_t x155 = UINT8_MAX;
	uint32_t x156 = UINT32_MAX;
	int64_t t23 = 15834161913966LL;

    t23 = (x153^(x154*(x155^x156)));

    if (t23 != -4328470873939941340LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x157 = 34;
	volatile int32_t x158 = -1;
	int16_t x160 = INT16_MIN;
	uint32_t t24 = 33U;

    t24 = (x157^(x158*(x159^x160)));

    if (t24 != 32738U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x165 = INT64_MAX;
	volatile int64_t x166 = 695LL;
	int32_t x167 = 30024325;
	volatile int64_t t25 = 156LL;

    t25 = (x165^(x166*(x167^x168)));

    if (t25 != 9223372015987872017LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x169 = -1;
	int64_t x170 = -8687765LL;
	static uint32_t x172 = 43320708U;
	static int64_t t26 = -3284LL;

    t26 = (x169^(x170*(x171^x172)));

    if (t26 != 376556543728739LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x174 = INT8_MAX;
	int32_t x175 = 6019;
	volatile uint16_t x176 = 1U;
	int64_t t27 = -14LL;

    t27 = (x173^(x174*(x175^x176)));

    if (t27 != 9223372036854011521LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x181 = INT64_MAX;
	volatile int64_t x182 = -1LL;
	int32_t x183 = -1;
	int32_t x184 = INT32_MAX;
	volatile int64_t t28 = 493394189886862LL;

    t28 = (x181^(x182*(x183^x184)));

    if (t28 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x185 = 7325392494390404LLU;
	int32_t x186 = INT32_MIN;
	int32_t x187 = -224839;
	static volatile uint32_t x188 = 54U;

    t29 = (x185^(x186*(x187^x188)));

    if (t29 != 7325390346906756LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x189 = 0U;
	static uint16_t x191 = UINT16_MAX;
	static uint16_t x192 = UINT16_MAX;

    t30 = (x189^(x190*(x191^x192)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x193 = 17U;
	uint64_t x196 = 2868071486LLU;
	volatile uint64_t t31 = 1401LLU;

    t31 = (x193^(x194*(x195^x196)));

    if (t31 != 18282181210185921517LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x197 = INT32_MIN;
	static uint64_t x199 = 1600519LLU;
	volatile uint16_t x200 = 1702U;
	volatile uint64_t t32 = 2200150856962536LLU;

    t32 = (x197^(x198*(x199^x200)));

    if (t32 != 18446744071765288415LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x202 = INT8_MIN;
	static int8_t x203 = INT8_MIN;
	volatile int8_t x204 = -1;
	static int32_t t33 = 10011583;

    t33 = (x201^(x202*(x203^x204)));

    if (t33 != -15860) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x205 = INT32_MAX;
	int16_t x206 = 4375;
	uint8_t x208 = 4U;
	static volatile int64_t t34 = 12205704471657072LL;

    t34 = (x205^(x206*(x207^x208)));

    if (t34 != -28063569665277LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x210 = 8LLU;
	volatile int64_t x211 = 1303767874817814739LL;
	uint64_t t35 = 263886LLU;

    t35 = (x209^(x210*(x211^x212)));

    if (t35 != 10430142998542518106LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x214 = INT32_MAX;
	int16_t x215 = INT16_MIN;
	volatile uint32_t x216 = 6218131U;
	volatile uint32_t t36 = 253U;

    t36 = (x213^(x214*(x215^x216)));

    if (t36 != 2141282706U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x217 = INT32_MIN;
	uint32_t x218 = 207768U;
	uint64_t x219 = 5931568618826LLU;
	int8_t x220 = 18;
	uint64_t t37 = 4564262338480547045LLU;

    t37 = (x217^(x218*(x219^x220)));

    if (t37 != 17214353923429446720LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x225 = UINT64_MAX;
	int16_t x227 = INT16_MAX;
	int32_t x228 = INT32_MIN;
	static volatile uint64_t t38 = 97819504LLU;

    t38 = (x225^(x226*(x227^x228)));

    if (t38 != 18446744071562100734LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x229 = INT64_MIN;
	static volatile int8_t x230 = 0;
	int8_t x231 = INT8_MIN;
	uint8_t x232 = 2U;
	static volatile int64_t t39 = INT64_MIN;

    t39 = (x229^(x230*(x231^x232)));

    if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x233 = -37064;
	static int8_t x234 = 1;
	int64_t x235 = -1LL;
	int16_t x236 = -176;

    t40 = (x233^(x234*(x235^x236)));

    if (t40 != -36969LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x237 = -12665LL;
	uint32_t x238 = UINT32_MAX;
	int16_t x239 = INT16_MAX;
	int32_t x240 = INT32_MIN;
	int64_t t41 = 1LL;

    t41 = (x237^(x238*(x239^x240)));

    if (t41 != -2147463546LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x242 = -1LL;
	volatile int64_t x243 = -10LL;
	volatile uint64_t t42 = 21560LLU;

    t42 = (x241^(x242*(x243^x244)));

    if (t42 != 8LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x249 = INT8_MIN;
	static int64_t x250 = INT64_MIN;
	static uint64_t x251 = UINT64_MAX;
	uint64_t x252 = 38LLU;
	volatile uint64_t t43 = 429645416LLU;

    t43 = (x249^(x250*(x251^x252)));

    if (t43 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x253 = 1LLU;
	int32_t x254 = INT32_MAX;
	int8_t x255 = INT8_MIN;
	int8_t x256 = INT8_MAX;
	static volatile uint64_t t44 = 8158612269LLU;

    t44 = (x253^(x254*(x255^x256)));

    if (t44 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x257 = INT32_MIN;
	uint16_t x259 = 190U;
	int64_t t45 = -1330LL;

    t45 = (x257^(x258*(x259^x260)));

    if (t45 != -1090028596846LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x261 = 9110610322983443936LLU;
	int8_t x262 = -57;
	int16_t x263 = INT16_MIN;
	static int32_t x264 = -1;
	volatile uint64_t t46 = 8711182045671LLU;

    t46 = (x261^(x262*(x263^x264)));

    if (t46 != 9336133750725860825LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x265 = 30;
	int16_t x266 = -12;
	int16_t x267 = -2;
	int16_t x268 = INT16_MAX;
	volatile int32_t t47 = -43622104;

    t47 = (x265^(x266*(x267^x268)));

    if (t47 != 393194) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x270 = INT32_MAX;
	int32_t x271 = 20;
	uint64_t x272 = 18871994LLU;
	volatile uint64_t t48 = 1145151711845144971LLU;

    t48 = (x269^(x270*(x271^x272)));

    if (t48 != 40065218769899659LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x273 = -64967950LL;
	uint8_t x274 = 7U;
	static int64_t x275 = -1LL;

    t49 = (x273^(x274*(x275^x276)));

    if (t49 != 64967947LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x282 = 73U;
	uint32_t x283 = 106822214U;

    t50 = (x281^(x282*(x283^x284)));

    if (t50 != 6464090703762258LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x289 = -1;
	volatile int16_t x290 = 215;
	int8_t x291 = -1;
	static int8_t x292 = INT8_MAX;
	volatile int32_t t51 = 0;

    t51 = (x289^(x290*(x291^x292)));

    if (t51 != 27519) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x293 = 2517131U;
	int8_t x294 = INT8_MAX;
	int16_t x295 = INT16_MIN;
	uint8_t x296 = 20U;

    t52 = (x293^(x294*(x295^x296)));

    if (t52 != 4293321063U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x301 = INT8_MAX;
	uint32_t x302 = 8865U;
	int16_t x303 = INT16_MIN;
	int16_t x304 = INT16_MIN;
	static volatile uint32_t t53 = 3202U;

    t53 = (x301^(x302*(x303^x304)));

    if (t53 != 127U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x305 = INT64_MAX;
	uint32_t x306 = 138178558U;
	static int32_t x308 = INT32_MIN;
	volatile int64_t t54 = 346521LL;

    t54 = (x305^(x306*(x307^x308)));

    if (t54 != 9223372033499267071LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x309 = INT64_MAX;
	int16_t x310 = 2610;
	volatile uint32_t x311 = 729U;
	uint16_t x312 = 7U;
	static volatile int64_t t55 = -932678LL;

    t55 = (x309^(x310*(x311^x312)));

    if (t55 != 9223372036852860067LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x325 = -1LL;
	volatile int16_t x326 = -1;
	uint32_t x327 = 25U;

    t56 = (x325^(x326*(x327^x328)));

    if (t56 != -4294966542LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x329 = UINT32_MAX;
	int8_t x330 = INT8_MIN;
	static volatile int64_t x331 = 3505591797975318LL;
	int8_t x332 = 1;
	static int64_t t57 = -4304738089173LL;

    t57 = (x329^(x330*(x331^x332)));

    if (t57 != -448715746507977857LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x333 = -1;
	int16_t x334 = INT16_MAX;
	int32_t x335 = INT32_MAX;
	uint32_t x336 = 4U;
	volatile uint32_t t58 = 11067793U;

    t58 = (x333^(x334*(x335^x336)));

    if (t58 != 2147647482U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x340 = UINT8_MAX;
	uint64_t t59 = 1450547LLU;

    t59 = (x337^(x338*(x339^x340)));

    if (t59 != 233LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x342 = 6U;
	int64_t x343 = -1LL;
	static uint16_t x344 = 18448U;

    t60 = (x341^(x342*(x343^x344)));

    if (t60 != -110747LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x346 = 290;
	volatile int32_t x347 = -33533050;
	volatile int64_t x348 = -7537289LL;
	volatile int64_t t61 = 0LL;

    t61 = (x345^(x346*(x347^x348)));

    if (t61 != 7493243645LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x349 = INT32_MIN;
	int32_t x350 = -17;
	uint64_t x352 = 7848333066705LLU;
	static volatile uint64_t t62 = 4067237308697255585LLU;

    t62 = (x349^(x350*(x351^x352)));

    if (t62 != 133422508482745LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x353 = 1;
	volatile int32_t x354 = INT32_MIN;
	uint32_t x355 = 367U;

    t63 = (x353^(x354*(x355^x356)));

    if (t63 != 2147483649U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x361 = INT8_MAX;
	static int16_t x363 = INT16_MIN;

    t64 = (x361^(x362*(x363^x364)));

    if (t64 != 786327U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x365 = 2;
	volatile int8_t x366 = INT8_MAX;
	uint16_t x367 = 0U;
	volatile int32_t t65 = 6;

    t65 = (x365^(x366*(x367^x368)));

    if (t65 != -16254) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x373 = -1;
	static int64_t x374 = 315331850910LL;
	static int8_t x375 = INT8_MIN;
	int64_t t66 = 300654827723137388LL;

    t66 = (x373^(x374*(x375^x376)));

    if (t66 != 40677808767389LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x381 = UINT8_MAX;
	int8_t x384 = 44;
	volatile uint64_t t67 = 29002444364835LLU;

    t67 = (x381^(x382*(x383^x384)));

    if (t67 != 17223840382750294973LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x385 = INT16_MIN;
	int64_t x386 = -7500168425LL;
	uint32_t x387 = 2348U;
	int32_t x388 = 2855706;

    t68 = (x385^(x386*(x387^x388)));

    if (t68 != 21431926278847706LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x390 = -24804832LL;
	int8_t x391 = -63;
	volatile int64_t t69 = 10402LL;

    t69 = (x389^(x390*(x391^x392)));

    if (t69 != -1537899585LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x393 = -1;
	volatile int64_t x394 = 6016LL;
	int16_t x395 = 826;
	int16_t x396 = -1;
	int64_t t70 = -17631LL;

    t70 = (x393^(x394*(x395^x396)));

    if (t70 != 4975231LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x405 = INT32_MIN;
	int8_t x407 = -1;
	volatile int32_t t71 = -21716;

    t71 = (x405^(x406*(x407^x408)));

    if (t71 != 2147482774) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x413 = -4284832198710LL;
	int32_t x414 = -1;
	int32_t x415 = -1843;
	volatile uint32_t x416 = UINT32_MAX;
	volatile int64_t t72 = 130459111910251035LL;

    t72 = (x413^(x414*(x415^x416)));

    if (t72 != -4283627555068LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x417 = 4343;
	int16_t x418 = INT16_MAX;
	uint16_t x419 = 25U;
	int64_t x420 = -1LL;
	int64_t t73 = -3LL;

    t73 = (x417^(x418*(x419^x420)));

    if (t73 != -847635LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x421 = UINT32_MAX;
	volatile uint8_t x422 = 11U;
	int8_t x424 = 0;

    t74 = (x421^(x422*(x423^x424)));

    if (t74 != 109U) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x425 = -1;
	static uint64_t x427 = UINT64_MAX;
	volatile uint64_t t75 = UINT64_MAX;

    t75 = (x425^(x426*(x427^x428)));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x433 = -1;
	int16_t x434 = INT16_MIN;
	volatile int32_t x435 = INT32_MAX;
	uint64_t x436 = UINT64_MAX;
	uint64_t t76 = 3LLU;

    t76 = (x433^(x434*(x435^x436)));

    if (t76 != 18446673704965373951LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x438 = INT8_MIN;
	static int32_t x439 = INT32_MIN;
	int32_t x440 = INT32_MIN;
	int64_t t77 = -147043633LL;

    t77 = (x437^(x438*(x439^x440)));

    if (t77 != -461212946089598876LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x441 = 2041;
	volatile int8_t x442 = -4;

    t78 = (x441^(x442*(x443^x444)));

    if (t78 != -4439) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x446 = INT16_MIN;
	static int16_t x447 = 3;
	uint16_t x448 = 128U;
	volatile int32_t t79 = -196813;

    t79 = (x445^(x446*(x447^x448)));

    if (t79 != 4292480) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x449 = -6;
	volatile uint8_t x450 = 16U;
	int16_t x451 = INT16_MIN;
	static uint16_t x452 = 2218U;
	int32_t t80 = -3245287;

    t80 = (x449^(x450*(x451^x452)));

    if (t80 != 488794) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x462 = 2;
	uint8_t x463 = 4U;
	volatile uint64_t x464 = 232380670LLU;
	static volatile uint64_t t81 = 6808301180LLU;

    t81 = (x461^(x462*(x463^x464)));

    if (t81 != 9223372036390014475LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x466 = INT16_MIN;
	volatile uint16_t x468 = UINT16_MAX;
	uint64_t t82 = 46893858994726850LLU;

    t82 = (x465^(x466*(x467^x468)));

    if (t82 != 2192236425LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x469 = UINT64_MAX;
	int16_t x470 = INT16_MIN;
	static uint8_t x471 = 1U;

    t83 = (x469^(x470*(x471^x472)));

    if (t83 != 251637628927LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x473 = 2U;
	static uint16_t x474 = 2U;
	static volatile int32_t x476 = -5418;
	volatile int64_t t84 = -91235562864LL;

    t84 = (x473^(x474*(x475^x476)));

    if (t84 != 958604LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x489 = INT64_MIN;
	static volatile int16_t x490 = INT16_MIN;
	int16_t x491 = -4;
	static uint32_t x492 = 3U;
	volatile int64_t t85 = 10566948810932752LL;

    t85 = (x489^(x490*(x491^x492)));

    if (t85 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x493 = -1;
	volatile uint32_t x494 = UINT32_MAX;
	int32_t x495 = -1;
	int16_t x496 = 15592;
	volatile uint32_t t86 = 0U;

    t86 = (x493^(x494*(x495^x496)));

    if (t86 != 4294951702U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x497 = -3;
	static volatile int8_t x498 = 0;
	int64_t x500 = INT64_MIN;
	volatile int64_t t87 = 9392273787053LL;

    t87 = (x497^(x498*(x499^x500)));

    if (t87 != -3LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x501 = -1;
	static volatile int32_t x502 = -1;
	int8_t x504 = INT8_MIN;
	static volatile uint32_t t88 = 3U;

    t88 = (x501^(x502*(x503^x504)));

    if (t88 != 4291979656U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x505 = INT8_MIN;
	static uint32_t x506 = 1U;
	int16_t x507 = -3705;
	uint8_t x508 = UINT8_MAX;
	volatile uint32_t t89 = 158182U;

    t89 = (x505^(x506*(x507^x508)));

    if (t89 != 3832U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x513 = -1;
	int16_t x514 = 14;
	int64_t x515 = -1LL;
	int64_t t90 = -87030640520966LL;

    t90 = (x513^(x514*(x515^x516)));

    if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x517 = INT32_MAX;
	int64_t x518 = -1LL;
	uint16_t x519 = UINT16_MAX;
	uint32_t x520 = UINT32_MAX;
	static int64_t t91 = 1069793892LL;

    t91 = (x517^(x518*(x519^x520)));

    if (t91 != -2147549185LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x521 = INT32_MIN;
	int16_t x523 = INT16_MIN;
	int32_t x524 = INT32_MIN;
	static uint64_t t92 = 146027160623033LLU;

    t92 = (x521^(x522*(x523^x524)));

    if (t92 != 32768LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x526 = 8290425U;
	static uint16_t x527 = 9U;

    t93 = (x525^(x526*(x527^x528)));

    if (t93 != 82904249U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x530 = 79048398146138999LL;
	volatile int8_t x531 = 33;
	int8_t x532 = -1;
	int64_t t94 = 14322152264227LL;

    t94 = (x529^(x530*(x531^x532)));

    if (t94 != -2687645536968714803LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x533 = 1878U;
	static uint8_t x534 = 33U;
	int8_t x535 = -1;
	int8_t x536 = -1;
	volatile int32_t t95 = -28339911;

    t95 = (x533^(x534*(x535^x536)));

    if (t95 != 1878) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x549 = INT8_MIN;
	uint64_t x550 = 7226LLU;
	uint64_t x551 = UINT64_MAX;
	int16_t x552 = -113;
	volatile uint64_t t96 = 477849478580LLU;

    t96 = (x549^(x550*(x551^x552)));

    if (t96 != 18446744073708742368LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x557 = INT16_MAX;
	int8_t x558 = INT8_MAX;
	uint32_t x559 = 10513886U;
	int32_t x560 = -1;
	static uint32_t t97 = 216399U;

    t97 = (x557^(x558*(x559^x560)));

    if (t97 != 2959671712U) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x563 = 1501U;
	volatile uint32_t x564 = 47594U;
	static uint32_t t98 = 871337697U;

    t98 = (x561^(x562*(x563^x564)));

    if (t98 != 28983355U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x565 = -1497;
	static volatile uint16_t x566 = UINT16_MAX;
	uint64_t x567 = 3LLU;
	int16_t x568 = INT16_MAX;
	volatile uint64_t t99 = 431070139456112LLU;

    t99 = (x565^(x566*(x567^x568)));

    if (t99 != 18446744071562361379LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x569 = INT16_MIN;
	uint8_t x570 = 3U;
	uint64_t x571 = 34910LLU;
	int8_t x572 = -1;
	uint64_t t100 = 423459905868081945LLU;

    t100 = (x569^(x570*(x571^x572)));

    if (t100 != 124643LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x577 = -1;
	int8_t x579 = -1;
	uint64_t x580 = UINT64_MAX;
	uint64_t t101 = UINT64_MAX;

    t101 = (x577^(x578*(x579^x580)));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x581 = 2771981LLU;
	int32_t x582 = 0;
	uint64_t x584 = UINT64_MAX;
	volatile uint64_t t102 = 58296772LLU;

    t102 = (x581^(x582*(x583^x584)));

    if (t102 != 2771981LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x585 = INT32_MIN;
	int8_t x586 = INT8_MIN;
	static volatile int8_t x587 = 9;
	static int32_t x588 = -21;
	int32_t t103 = 127633;

    t103 = (x585^(x586*(x587^x588)));

    if (t103 != -2147479808) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x593 = UINT32_MAX;
	int16_t x594 = -1;
	static uint8_t x596 = 13U;
	uint64_t t104 = 14LLU;

    t104 = (x593^(x594*(x595^x596)));

    if (t104 != 4294967281LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x597 = INT64_MAX;
	int8_t x598 = INT8_MIN;
	int8_t x599 = INT8_MIN;
	int8_t x600 = INT8_MAX;
	int64_t t105 = -989513LL;

    t105 = (x597^(x598*(x599^x600)));

    if (t105 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x601 = INT16_MIN;
	uint16_t x602 = 1U;
	uint64_t x603 = 128494961LLU;
	int32_t x604 = INT32_MIN;

    t106 = (x601^(x602*(x603^x604)));

    if (t106 != 2018979185LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x605 = INT32_MIN;
	int16_t x606 = -1;
	uint8_t x607 = 4U;
	volatile int16_t x608 = -1;
	static volatile int32_t t107 = 342;

    t107 = (x605^(x606*(x607^x608)));

    if (t107 != -2147483643) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x609 = -9;
	int8_t x610 = INT8_MAX;
	static int32_t x611 = INT32_MIN;
	uint32_t t108 = 10895U;

    t108 = (x609^(x610*(x611^x612)));

    if (t108 != 2147481242U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x613 = UINT8_MAX;
	int32_t x614 = -7459;
	int8_t x615 = INT8_MIN;
	volatile int32_t x616 = -1;

    t109 = (x613^(x614*(x615^x616)));

    if (t109 != -947364) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x623 = INT64_MAX;
	int8_t x624 = INT8_MIN;
	int64_t t110 = -93045503LL;

    t110 = (x621^(x622*(x623^x624)));

    if (t110 != 9223372036854710398LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x631 = INT64_MIN;
	static volatile uint64_t t111 = 52105711938LLU;

    t111 = (x629^(x630*(x631^x632)));

    if (t111 != 1267041993270099720LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x633 = UINT8_MAX;
	static int64_t x634 = -1LL;
	volatile int32_t x635 = -1;
	volatile int64_t x636 = -1829LL;
	int64_t t112 = 1787339LL;

    t112 = (x633^(x634*(x635^x636)));

    if (t112 != -2013LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x637 = 3848U;
	int16_t x639 = -16;
	static int32_t x640 = -522;
	int32_t t113 = -18;

    t113 = (x637^(x638*(x639^x640)));

    if (t113 != 134386) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x641 = INT8_MIN;
	int32_t x642 = -1;
	uint32_t x643 = 311905U;
	volatile int8_t x644 = -2;
	uint32_t t114 = 7894U;

    t114 = (x641^(x642*(x643^x644)));

    if (t114 != 4294655457U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x645 = 0U;
	int32_t x646 = INT32_MIN;
	int64_t x647 = 2303330461LL;
	int64_t t115 = -1818LL;

    t115 = (x645^(x646*(x647^x648)));

    if (t115 != 4946425399279091712LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x649 = INT8_MIN;
	static int8_t x651 = 1;
	uint64_t t116 = 876723LLU;

    t116 = (x649^(x650*(x651^x652)));

    if (t116 != 38881LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x653 = INT32_MIN;
	static int16_t x654 = INT16_MAX;
	static int16_t x655 = INT16_MIN;
	volatile uint32_t x656 = UINT32_MAX;
	volatile uint32_t t117 = 74U;

    t117 = (x653^(x654*(x655^x656)));

    if (t117 != 3221159937U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x658 = 27;
	int8_t x659 = INT8_MIN;
	volatile int8_t x660 = -1;

    t118 = (x657^(x658*(x659^x660)));

    if (t118 != 3436LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x661 = INT32_MAX;
	int32_t x663 = 11383;
	volatile uint32_t t119 = 0U;

    t119 = (x661^(x662*(x663^x664)));

    if (t119 != 1160710948U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x669 = -16;
	volatile int64_t x670 = -1LL;
	static int8_t x671 = INT8_MIN;
	int16_t x672 = INT16_MIN;
	int64_t t120 = -23LL;

    t120 = (x669^(x670*(x671^x672)));

    if (t120 != 32624LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x681 = INT64_MIN;
	volatile uint16_t x683 = 2629U;
	uint16_t x684 = UINT16_MAX;
	static int64_t t121 = -6017407LL;

    t121 = (x681^(x682*(x683^x684)));

    if (t121 != 9223372036854712902LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x685 = -1;
	int8_t x687 = -1;
	volatile int64_t t122 = -103699506777265333LL;

    t122 = (x685^(x686*(x687^x688)));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x689 = INT8_MIN;
	static int8_t x690 = -1;
	volatile uint32_t x691 = 23610U;
	int64_t x692 = -1LL;
	volatile int64_t t123 = -627LL;

    t123 = (x689^(x690*(x691^x692)));

    if (t123 != -23621LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x693 = UINT64_MAX;
	uint32_t x694 = 90508029U;
	uint8_t x695 = 10U;
	static uint32_t x696 = 508U;
	volatile uint64_t t124 = 1275274667LLU;

    t124 = (x693^(x694*(x695^x696)));

    if (t124 != 18446744071224194017LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x698 = -24125524048993LL;
	int16_t x699 = INT16_MIN;
	int64_t x700 = -1LL;
	int64_t t125 = 3375470LL;

    t125 = (x697^(x698*(x699^x700)));

    if (t125 != -790521046513353570LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x701 = 7433LLU;
	uint64_t x702 = 14119891LLU;
	int16_t x703 = INT16_MIN;
	uint8_t x704 = 57U;
	volatile uint64_t t126 = 42729942719LLU;

    t126 = (x701^(x702*(x703^x704)));

    if (t126 != 18446743611833799922LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x707 = -1;
	int8_t x708 = INT8_MAX;
	volatile uint64_t t127 = 7436406LLU;

    t127 = (x705^(x706*(x707^x708)));

    if (t127 != 18446743738509737466LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x709 = 1U;
	int16_t x710 = 1837;
	int8_t x712 = -1;
	int32_t t128 = -14;

    t128 = (x709^(x710*(x711^x712)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x725 = INT8_MIN;
	int16_t x726 = INT16_MIN;
	uint32_t x727 = UINT32_MAX;
	int64_t x728 = -1LL;
	int64_t t129 = 64060LL;

    t129 = (x725^(x726*(x727^x728)));

    if (t129 != -140737488355456LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x729 = 22U;
	int8_t x730 = 1;
	int8_t x731 = -8;
	int32_t x732 = 108957;
	volatile int32_t t130 = 0;

    t130 = (x729^(x730*(x731^x732)));

    if (t130 != -108941) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x746 = INT16_MIN;
	volatile int16_t x747 = INT16_MIN;
	volatile int8_t x748 = INT8_MAX;
	int32_t t131 = 1245;

    t131 = (x745^(x746*(x747^x748)));

    if (t131 != -1069580289) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x749 = 15396143LL;
	int32_t x751 = -140051936;
	uint32_t x752 = 647959927U;
	static volatile int64_t t132 = -5759577LL;

    t132 = (x749^(x750*(x751^x752)));

    if (t132 != 647724422LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x757 = 120U;
	static uint8_t x758 = 10U;
	int8_t x759 = -3;
	static int8_t x760 = 1;
	volatile int32_t t133 = -324;

    t133 = (x757^(x758*(x759^x760)));

    if (t133 != -96) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x762 = INT64_MIN;
	uint32_t x763 = UINT32_MAX;
	int8_t x764 = -1;

    t134 = (x761^(x762*(x763^x764)));

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x769 = INT32_MIN;
	int32_t x770 = -1;
	int8_t x771 = -1;
	int32_t x772 = -1;
	volatile int32_t t135 = INT32_MIN;

    t135 = (x769^(x770*(x771^x772)));

    if (t135 != INT32_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x773 = -1;
	uint64_t x774 = 1157LLU;
	uint32_t x776 = 590026U;
	volatile uint64_t t136 = 20622182335LLU;

    t136 = (x773^(x774*(x775^x776)));

    if (t136 != 18446744073027063926LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x777 = 115LLU;
	uint8_t x778 = 24U;
	int16_t x779 = INT16_MIN;

    t137 = (x777^(x778*(x779^x780)));

    if (t137 != 786155LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x782 = -15;
	static int8_t x783 = 0;
	volatile int32_t x784 = -1;
	int32_t t138 = -14472;

    t138 = (x781^(x782*(x783^x784)));

    if (t138 != -32753) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x785 = -1LL;
	uint16_t x786 = UINT16_MAX;
	uint32_t x787 = UINT32_MAX;
	int8_t x788 = -10;
	int64_t t139 = 928308673545199LL;

    t139 = (x785^(x786*(x787^x788)));

    if (t139 != -589816LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x793 = UINT16_MAX;
	static uint32_t x795 = 135363U;
	static int16_t x796 = INT16_MIN;

    t140 = (x793^(x794*(x795^x796)));

    if (t140 != 2428866754U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x797 = INT8_MIN;
	static int8_t x798 = -1;
	static int16_t x800 = -1;

    t141 = (x797^(x798*(x799^x800)));

    if (t141 != 802) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x801 = -753;
	int32_t x802 = 929907427;
	uint32_t t142 = 1U;

    t142 = (x801^(x802*(x803^x804)));

    if (t142 != 1859815221U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x805 = INT16_MIN;
	static uint8_t x806 = 13U;
	int16_t x808 = INT16_MIN;
	volatile int32_t t143 = 0;

    t143 = (x805^(x806*(x807^x808)));

    if (t143 != 393216) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x809 = -2356LL;
	uint64_t x810 = 0LLU;
	int16_t x811 = INT16_MIN;
	static uint64_t t144 = 674448069635LLU;

    t144 = (x809^(x810*(x811^x812)));

    if (t144 != 18446744073709549260LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x813 = -1LL;
	uint8_t x814 = 75U;
	uint64_t x815 = 372981223LLU;
	volatile uint64_t t145 = 37807792857LLU;

    t145 = (x813^(x814*(x815^x816)));

    if (t145 != 18446744070267757965LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x817 = 207LLU;
	int8_t x818 = 1;
	static int64_t x819 = INT64_MIN;
	uint64_t t146 = 1LLU;

    t146 = (x817^(x818*(x819^x820)));

    if (t146 != 9223372036854776016LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x821 = UINT32_MAX;
	static volatile int16_t x823 = INT16_MAX;
	int64_t x824 = -1LL;
	static int64_t t147 = 262316643639LL;

    t147 = (x821^(x822*(x823^x824)));

    if (t147 != -4293525505LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x825 = -1;
	volatile uint16_t x826 = 7U;
	int16_t x827 = INT16_MIN;
	volatile uint8_t x828 = 4U;
	volatile int32_t t148 = 1083;

    t148 = (x825^(x826*(x827^x828)));

    if (t148 != 229347) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x833 = 5LL;
	static int8_t x834 = -1;
	volatile uint8_t x835 = 4U;
	static uint8_t x836 = 18U;

    t149 = (x833^(x834*(x835^x836)));

    if (t149 != -17LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x837 = 74U;
	static int32_t x838 = 178;
	static int16_t x839 = -1;
	int64_t x840 = -3773721526LL;
	int64_t t150 = -6222LL;

    t150 = (x837^(x838*(x839^x840)));

    if (t150 != 671722431376LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x845 = -1;
	int32_t t151 = 1233652;

    t151 = (x845^(x846*(x847^x848)));

    if (t151 != 654435) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x855 = INT32_MAX;
	volatile uint16_t x856 = UINT16_MAX;

    t152 = (x853^(x854*(x855^x856)));

    if (t152 != -2147417924) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x862 = 1007541107;
	uint64_t x863 = 338LLU;
	static int64_t x864 = INT64_MAX;
	uint64_t t153 = 6990962379832LLU;

    t153 = (x861^(x862*(x863^x864)));

    if (t153 != 9223371695298353480LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x865 = UINT32_MAX;
	int16_t x867 = INT16_MIN;
	uint32_t t154 = 20354175U;

    t154 = (x865^(x866*(x867^x868)));

    if (t154 != 3223191492U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x869 = INT32_MIN;
	static volatile int64_t x870 = -1LL;
	int8_t x871 = INT8_MIN;
	int64_t t155 = 57662LL;

    t155 = (x869^(x870*(x871^x872)));

    if (t155 != 2147451008LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x873 = 177539863924839LLU;
	static uint32_t x874 = 119U;
	static int8_t x875 = INT8_MIN;

    t156 = (x873^(x874*(x875^x876)));

    if (t156 != 177537716448110LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x885 = UINT8_MAX;
	uint32_t x886 = UINT32_MAX;
	static int32_t x887 = INT32_MIN;
	int8_t x888 = INT8_MIN;
	volatile uint32_t t157 = 28378070U;

    t157 = (x885^(x886*(x887^x888)));

    if (t157 != 2147483775U) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x889 = -31677;
	int8_t x890 = -4;
	int32_t x891 = INT32_MAX;
	volatile int32_t x892 = INT32_MIN;

    t158 = (x889^(x890*(x891^x892)));

    if (t158 != -31673) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x897 = INT64_MIN;
	int8_t x898 = -1;
	volatile int32_t x899 = INT32_MIN;
	uint64_t x900 = 936693917946LLU;
	uint64_t t159 = 301LLU;

    t159 = (x897^(x898*(x899^x900)));

    if (t159 != 9223372974914082566LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x901 = 23695U;
	int64_t t160 = -968LL;

    t160 = (x901^(x902*(x903^x904)));

    if (t160 != 272730446991LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x905 = 212494434U;
	int16_t x906 = INT16_MIN;
	int8_t x907 = 0;
	volatile int64_t x908 = 0LL;
	int64_t t161 = 94211106LL;

    t161 = (x905^(x906*(x907^x908)));

    if (t161 != 212494434LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x917 = 1U;
	volatile int64_t x918 = -1LL;
	int64_t x919 = INT64_MAX;
	int64_t t162 = -37LL;

    t162 = (x917^(x918*(x919^x920)));

    if (t162 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x926 = 14357LLU;
	int64_t x927 = -1LL;
	uint16_t x928 = 31U;
	static volatile uint64_t t163 = 57978LLU;

    t163 = (x925^(x926*(x927^x928)));

    if (t163 != 459423LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x929 = 1U;
	uint16_t x930 = 22U;
	uint16_t x931 = UINT16_MAX;
	uint32_t t164 = 151932U;

    t164 = (x929^(x930*(x931^x932)));

    if (t164 != 4293525505U) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x933 = -1;
	int8_t x934 = -1;
	int32_t x936 = -1;
	volatile int32_t t165 = 2;

    t165 = (x933^(x934*(x935^x936)));

    if (t165 != 13430) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x938 = INT16_MIN;
	int64_t x939 = 1154LL;
	int8_t x940 = INT8_MIN;
	static volatile int64_t t166 = -104595091LL;

    t166 = (x937^(x938*(x939^x940)));

    if (t166 != 41234660LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x941 = UINT64_MAX;
	uint64_t x942 = 147584866031125LLU;
	int16_t x943 = INT16_MAX;
	volatile uint64_t t167 = 0LLU;

    t167 = (x941^(x942*(x943^x944)));

    if (t167 != 4836060890107903999LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x945 = INT64_MIN;
	int8_t x946 = -1;
	int8_t x947 = 0;
	int16_t x948 = INT16_MIN;
	volatile int64_t t168 = 28735124LL;

    t168 = (x945^(x946*(x947^x948)));

    if (t168 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x950 = -1;
	int16_t x951 = 1;
	int64_t x952 = INT64_MAX;
	volatile int64_t t169 = -23613364113313109LL;

    t169 = (x949^(x950*(x951^x952)));

    if (t169 != -9223372036854710275LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x961 = INT64_MIN;
	uint64_t x962 = 58399835208320063LLU;
	static uint64_t x963 = 35570223LLU;
	static uint8_t x964 = UINT8_MAX;
	static uint64_t t170 = 2924289LLU;

    t170 = (x961^(x962*(x963^x964)));

    if (t170 != 7490384195173560624LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x966 = INT64_MIN;
	static int64_t x967 = INT64_MAX;
	uint64_t x968 = UINT64_MAX;
	volatile uint64_t t171 = 5LLU;

    t171 = (x965^(x966*(x967^x968)));

    if (t171 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x970 = 552LL;
	int16_t x971 = -6;
	int64_t x972 = 509941949392LL;
	uint64_t t172 = 150034769LLU;

    t172 = (x969^(x970*(x971^x972)));

    if (t172 != 17376301180836763523LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x973 = UINT8_MAX;
	uint16_t x974 = UINT16_MAX;
	volatile uint64_t x975 = 436LLU;
	int32_t x976 = INT32_MAX;
	static volatile uint64_t t173 = 13632828444286LLU;

    t173 = (x973^(x974*(x975^x976)));

    if (t173 != 140735312232778LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x977 = INT32_MIN;
	volatile uint32_t x978 = 69827U;
	static int16_t x979 = -24;
	uint8_t x980 = 2U;
	volatile uint32_t t174 = 30U;

    t174 = (x977^(x978*(x979^x980)));

    if (t174 != 2145947454U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x985 = INT16_MIN;
	volatile int16_t x986 = -1;
	int64_t x988 = INT64_MIN;
	int64_t t175 = 212500170240LL;

    t175 = (x985^(x986*(x987^x988)));

    if (t175 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int8_t x989 = INT8_MIN;
	uint8_t x990 = UINT8_MAX;
	int32_t x991 = -1;
	int32_t x992 = 40;
	volatile int32_t t176 = -63370;

    t176 = (x989^(x990*(x991^x992)));

    if (t176 != 10409) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x993 = -1;
	static volatile int32_t x994 = -1;
	static volatile uint16_t x995 = 57U;
	static int16_t x996 = -214;
	static volatile int32_t t177 = 7087;

    t177 = (x993^(x994*(x995^x996)));

    if (t177 != -238) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x997 = 55717009236034355LLU;
	uint8_t x998 = 15U;
	int32_t x999 = -1;
	static volatile uint64_t t178 = 1LLU;

    t178 = (x997^(x998*(x999^x1000)));

    if (t178 != 54477117480971213LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1001 = -19;
	static uint64_t x1003 = 176248617LLU;
	static uint64_t x1004 = 114006298852LLU;

    t179 = (x1001^(x1002*(x1003^x1004)));

    if (t179 != 8156269450862453140LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1005 = INT8_MIN;
	static int64_t x1006 = 74476683581LL;
	int16_t x1007 = 15;
	static int16_t x1008 = INT16_MIN;
	volatile int64_t t180 = -716105089733924LL;

    t180 = (x1005^(x1006*(x1007^x1008)));

    if (t180 != 2439334817328403LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1009 = 10LLU;
	uint8_t x1010 = 3U;
	volatile uint64_t t181 = 26LLU;

    t181 = (x1009^(x1010*(x1011^x1012)));

    if (t181 != 18446744073709551241LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1013 = INT8_MIN;
	uint64_t x1014 = 4821379621381867288LLU;
	uint64_t x1015 = 13519136725LLU;
	int16_t x1016 = INT16_MIN;
	volatile uint64_t t182 = 21010LLU;

    t182 = (x1013^(x1014*(x1015^x1016)));

    if (t182 != 14764921982620758392LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1017 = INT32_MIN;
	int32_t x1018 = -1;
	static int16_t x1019 = 56;
	uint16_t x1020 = 319U;
	int32_t t183 = 704062;

    t183 = (x1017^(x1018*(x1019^x1020)));

    if (t183 != 2147483385) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1026 = 927877LLU;
	static int64_t x1027 = INT64_MAX;
	uint8_t x1028 = 111U;
	volatile uint64_t t184 = 184LLU;

    t184 = (x1025^(x1026*(x1027^x1028)));

    if (t184 != 9223372036750955718LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1029 = INT64_MIN;
	volatile int64_t t185 = 38901LL;

    t185 = (x1029^(x1030*(x1031^x1032)));

    if (t185 != -9223372032559864135LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1035 = 3LL;
	uint32_t x1036 = 191357979U;
	uint64_t t186 = 188736604418723635LLU;

    t186 = (x1033^(x1034*(x1035^x1036)));

    if (t186 != 4787307732523897LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1037 = UINT16_MAX;
	int8_t x1038 = -1;
	int64_t t187 = -223555121LL;

    t187 = (x1037^(x1038*(x1039^x1040)));

    if (t187 != -7694822696LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1041 = INT8_MIN;
	int32_t x1042 = INT32_MIN;
	static int16_t x1043 = INT16_MIN;
	static uint32_t x1044 = 443208U;

    t188 = (x1041^(x1042*(x1043^x1044)));

    if (t188 != 4294967168U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1045 = UINT32_MAX;
	static int16_t x1046 = -1;
	static uint64_t x1047 = 21LLU;
	int32_t x1048 = INT32_MIN;

    t189 = (x1045^(x1046*(x1047^x1048)));

    if (t189 != 2147483668LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1049 = -1LL;
	int8_t x1050 = -1;
	uint64_t x1051 = 7296LLU;
	int32_t x1052 = INT32_MIN;
	uint64_t t190 = 154LLU;

    t190 = (x1049^(x1050*(x1051^x1052)));

    if (t190 != 18446744071562075263LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x1061 = -1LL;
	volatile uint64_t x1062 = 98570LLU;
	int8_t x1063 = INT8_MAX;
	int32_t x1064 = 0;
	volatile uint64_t t191 = 503412LLU;

    t191 = (x1061^(x1062*(x1063^x1064)));

    if (t191 != 18446744073697033225LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x1066 = UINT64_MAX;
	int16_t x1067 = -1;
	int32_t x1068 = INT32_MIN;
	uint64_t t192 = 1708894377LLU;

    t192 = (x1065^(x1066*(x1067^x1068)));

    if (t192 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1077 = 92021316871LLU;
	uint32_t x1078 = 14U;
	int8_t x1079 = INT8_MIN;
	static int8_t x1080 = 4;
	volatile uint64_t t193 = 25846LLU;

    t193 = (x1077^(x1078*(x1079^x1080)));

    if (t193 != 92662277183LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x1081 = INT16_MIN;
	static int64_t x1083 = -254214641LL;
	uint8_t x1084 = 0U;
	volatile int64_t t194 = 126460LL;

    t194 = (x1081^(x1082*(x1083^x1084)));

    if (t194 != -8330105389056LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1086 = UINT32_MAX;
	int64_t x1087 = 23393LL;
	volatile int64_t t195 = 1449LL;

    t195 = (x1085^(x1086*(x1087^x1088)));

    if (t195 != 9223271560389829789LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x1089 = 3478U;
	static int16_t x1090 = 57;
	int16_t x1091 = INT16_MAX;
	uint8_t x1092 = UINT8_MAX;
	volatile uint32_t t196 = 8225696U;

    t196 = (x1089^(x1090*(x1091^x1092)));

    if (t196 != 1854102U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x1097 = UINT64_MAX;
	int8_t x1098 = INT8_MIN;
	volatile uint8_t x1099 = UINT8_MAX;
	static volatile uint8_t x1100 = 27U;
	volatile uint64_t t197 = 4280865819583614836LLU;

    t197 = (x1097^(x1098*(x1099^x1100)));

    if (t197 != 29183LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x1102 = UINT32_MAX;
	volatile int64_t x1103 = -335682LL;
	uint16_t x1104 = 222U;
	int64_t t198 = 14912165LL;

    t198 = (x1101^(x1102*(x1103^x1104)));

    if (t198 != -1442146938445919LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x1105 = -1;
	static int16_t x1106 = INT16_MAX;
	int64_t t199 = 6336015253946LL;

    t199 = (x1105^(x1106*(x1107^x1108)));

    if (t199 != 3077485552623LL) { NG(); } else { ; }
	
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

