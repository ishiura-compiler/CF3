
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

int8_t x2 = -1;
int32_t x3 = INT32_MIN;
uint64_t x5 = 375LLU;
int64_t x6 = INT64_MAX;
static uint8_t x7 = UINT8_MAX;
uint16_t x8 = 1U;
volatile uint64_t t1 = 3845872605209181948LLU;
int32_t t2 = -36224;
int64_t x15 = -1LL;
volatile int16_t x17 = 2;
volatile uint64_t x18 = UINT64_MAX;
int64_t x20 = -1LL;
int8_t x21 = -1;
volatile int32_t x29 = 0;
uint32_t x31 = 14U;
int32_t x36 = -1;
static volatile int32_t t7 = -1027667;
uint16_t x40 = 0U;
int16_t x41 = 10429;
uint8_t x42 = 8U;
uint8_t x51 = 31U;
volatile int32_t t10 = 1;
static int16_t x53 = -1;
static volatile int32_t t11 = 0;
int8_t x63 = INT8_MIN;
volatile uint64_t t12 = 8076071050955LLU;
static int8_t x65 = INT8_MIN;
int8_t x67 = 0;
static uint64_t x68 = UINT64_MAX;
int64_t x69 = -1LL;
static volatile uint8_t x70 = UINT8_MAX;
uint8_t x71 = 41U;
int64_t x79 = -1LL;
volatile int64_t x81 = -1LL;
uint8_t x84 = 85U;
int8_t x87 = INT8_MAX;
int16_t x91 = -1;
int64_t x92 = 12544426639LL;
int64_t x95 = 14597850448LL;
uint64_t x99 = 11560233037737LLU;
uint8_t x109 = 0U;
volatile int16_t x112 = -1;
int32_t t23 = 874;
uint8_t x123 = 0U;
static int16_t x125 = INT16_MIN;
static int8_t x130 = -1;
int64_t x134 = 28377955315252LL;
volatile int8_t x142 = -3;
int16_t x164 = INT16_MAX;
int32_t x173 = INT32_MAX;
volatile int16_t x183 = INT16_MIN;
int32_t t38 = 1111;
volatile uint16_t x198 = 172U;
uint64_t x203 = 3076LLU;
int8_t x204 = -1;
volatile int32_t x213 = INT32_MAX;
int64_t x221 = -4LL;
volatile int64_t t46 = 2673798919316LL;
int16_t x228 = -1;
int8_t x229 = -57;
int32_t x231 = INT32_MIN;
static volatile uint8_t x249 = 1U;
volatile int16_t x255 = INT16_MAX;
uint16_t x258 = UINT16_MAX;
volatile int64_t x262 = -1LL;
int64_t t55 = -742107439LL;
uint16_t x265 = UINT16_MAX;
static int64_t x266 = -28864931838098LL;
int16_t x269 = -13936;
int32_t x275 = INT32_MIN;
static int32_t x278 = INT32_MIN;
int16_t x280 = -1;
static uint32_t x290 = 237777216U;
int64_t x292 = 515183745426738303LL;
volatile uint32_t t61 = 600923U;
int8_t x301 = INT8_MIN;
uint64_t x303 = 18LLU;
volatile int8_t x308 = 0;
int16_t x314 = -1;
volatile int16_t x316 = INT16_MAX;
static uint64_t x337 = 2024229464LLU;
uint64_t x339 = 1034218724LLU;
uint64_t t69 = 94723209513654LLU;
static uint16_t x341 = 26162U;
volatile int64_t t71 = -26734LL;
uint32_t x349 = 411002U;
int16_t x351 = INT16_MIN;
uint32_t x353 = 35642687U;
int32_t x356 = -1;
uint32_t t73 = 1533574110U;
int64_t x357 = -108756LL;
int64_t x359 = INT64_MAX;
uint32_t x361 = 4U;
uint32_t t75 = 2889399U;
volatile int64_t t77 = 5LL;
int32_t x373 = INT32_MIN;
int16_t x376 = -1;
volatile int32_t x381 = 231592;
uint16_t x392 = UINT16_MAX;
int64_t x396 = INT64_MAX;
static int64_t t83 = 14601176879652864LL;
int32_t x397 = -131672439;
uint8_t x406 = 7U;
int8_t x409 = INT8_MIN;
static uint8_t x410 = UINT8_MAX;
uint16_t x424 = UINT16_MAX;
static int64_t x427 = -29853515LL;
volatile int64_t x432 = 6732956746LL;
int64_t t92 = 1LL;
uint8_t x443 = 1U;
int64_t x452 = -1LL;
int16_t x466 = INT16_MAX;
int16_t x473 = INT16_MIN;
static uint64_t x476 = UINT64_MAX;
int32_t x478 = -15095013;
volatile int8_t x479 = INT8_MAX;
volatile uint16_t x480 = 0U;
int8_t x486 = INT8_MIN;
uint32_t x487 = 352U;
volatile int64_t x489 = -1LL;
int64_t x491 = -183373642617797LL;
uint8_t x494 = UINT8_MAX;
int16_t x497 = INT16_MAX;
uint32_t x499 = 7994169U;
static volatile uint64_t t107 = 68928088324970546LLU;
int16_t x511 = 0;
volatile int64_t t110 = 4300160777770LL;
int32_t x525 = INT32_MIN;
int16_t x527 = 12319;
int16_t x529 = -1;
int8_t x534 = 8;
int32_t x536 = INT32_MIN;
static int16_t x537 = 31;
static int32_t t117 = -681;
uint64_t x549 = UINT64_MAX;
static int16_t x553 = -1429;
volatile uint64_t x567 = 3LLU;
int16_t x574 = INT16_MAX;
int8_t x575 = 1;
static volatile int32_t t122 = 12;
static int8_t x579 = INT8_MIN;
static uint64_t x580 = 25890369918209037LLU;
uint64_t x583 = 7583167885LLU;
static uint8_t x592 = 124U;
uint64_t t126 = 351088LLU;
int8_t x601 = INT8_MIN;
uint8_t x603 = UINT8_MAX;
volatile int16_t x604 = INT16_MIN;
volatile int32_t t129 = 50959;
static uint32_t x606 = 2722U;
static volatile int32_t x614 = INT32_MIN;
uint64_t x617 = UINT64_MAX;
uint8_t x620 = UINT8_MAX;
int8_t x621 = -11;
static int32_t t133 = 48768266;
volatile int8_t x627 = INT8_MAX;
uint32_t x632 = UINT32_MAX;
int32_t x637 = 116;
int64_t x640 = INT64_MIN;
uint16_t x646 = UINT16_MAX;
static int16_t x647 = -2481;
int8_t x648 = INT8_MIN;
volatile int32_t t138 = 104500;
volatile int64_t t139 = -400LL;
volatile int8_t x656 = INT8_MIN;
volatile uint32_t t142 = 1668497801U;
int8_t x666 = 0;
int8_t x668 = INT8_MIN;
static int32_t t146 = 14;
volatile int32_t t147 = 64238250;
int64_t x694 = INT64_MIN;
int32_t x696 = INT32_MAX;
int64_t t149 = 1900641505811LL;
volatile int32_t t156 = 2915823;
volatile int8_t x739 = -1;
uint8_t x742 = 63U;
static uint64_t t160 = 2LLU;
volatile int8_t x757 = INT8_MIN;
int16_t x764 = 0;
uint8_t x767 = UINT8_MAX;
uint8_t x772 = UINT8_MAX;
int32_t t164 = 160370730;
int64_t x774 = -29370595217213LL;
uint32_t x776 = 0U;
volatile int64_t t165 = 1387922359LL;
uint16_t x784 = 14400U;
volatile int32_t t169 = -199342;
int64_t x798 = INT64_MAX;
static volatile uint64_t x815 = UINT64_MAX;
int64_t t174 = 8958786872646375LL;
int64_t x829 = 264176653LL;
uint16_t x832 = 876U;
static uint8_t x837 = 2U;
int32_t t179 = 625489;
int16_t x846 = INT16_MAX;
uint64_t x850 = 12326064078LLU;
uint64_t t182 = 35LLU;
int8_t x854 = INT8_MAX;
static int32_t t183 = -50609;
volatile int8_t x858 = INT8_MIN;
static int8_t x860 = -1;
volatile int32_t t184 = -365401;
uint8_t x862 = 105U;
int32_t t185 = -68;
static uint64_t t186 = 0LLU;
volatile uint16_t x872 = 21311U;
static uint32_t t191 = 6U;
int32_t x891 = -1;
int16_t x898 = INT16_MAX;
uint8_t x900 = 2U;
int64_t t196 = -1842153944LL;
volatile int32_t t198 = -142;
volatile uint64_t t199 = 23LLU;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	uint64_t x4 = UINT64_MAX;
	int32_t t0 = -608;

    t0 = ((x1+x2)*(x3==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    

    t1 = ((x5+x6)*(x7==x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = -1;
	int16_t x10 = -1;
	uint32_t x11 = 14941580U;
	int16_t x12 = -14549;

    t2 = ((x9+x10)*(x11==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 216451941U;
	volatile int64_t x14 = INT64_MIN;
	static int64_t x16 = INT64_MAX;
	volatile int64_t t3 = 1947386881788LL;

    t3 = ((x13+x14)*(x15==x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x19 = 17219279LLU;
	uint64_t t4 = 66158340437982LLU;

    t4 = ((x17+x18)*(x19==x20));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x22 = UINT8_MAX;
	uint32_t x23 = UINT32_MAX;
	int8_t x24 = INT8_MIN;
	int32_t t5 = 53251;

    t5 = ((x21+x22)*(x23==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x30 = INT8_MIN;
	int32_t x32 = INT32_MAX;
	int32_t t6 = -16842;

    t6 = ((x29+x30)*(x31==x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = -1;
	static int16_t x34 = INT16_MIN;
	static volatile int16_t x35 = 1309;

    t7 = ((x33+x34)*(x35==x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = INT32_MIN;
	int32_t x38 = 7;
	volatile uint8_t x39 = 92U;
	static int32_t t8 = 22430380;

    t8 = ((x37+x38)*(x39==x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x43 = -1;
	static uint16_t x44 = 7U;
	volatile int32_t t9 = -7547684;

    t9 = ((x41+x42)*(x43==x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int16_t x49 = 6;
	volatile int32_t x50 = INT32_MIN;
	volatile int8_t x52 = INT8_MIN;

    t10 = ((x49+x50)*(x51==x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x54 = INT16_MIN;
	static uint32_t x55 = 275307U;
	int16_t x56 = -7;

    t11 = ((x53+x54)*(x55==x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x61 = 4891776155095LLU;
	static int32_t x62 = INT32_MIN;
	uint32_t x64 = 70652718U;

    t12 = ((x61+x62)*(x63==x64));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x66 = 0;
	static volatile int32_t t13 = -291398;

    t13 = ((x65+x66)*(x67==x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x72 = 39263LL;
	volatile int64_t t14 = 475649LL;

    t14 = ((x69+x70)*(x71==x72));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x77 = 211U;
	int16_t x78 = -3;
	int8_t x80 = 34;
	uint32_t t15 = 17102070U;

    t15 = ((x77+x78)*(x79==x80));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x82 = 5325LLU;
	uint8_t x83 = UINT8_MAX;
	uint64_t t16 = 964291907945LLU;

    t16 = ((x81+x82)*(x83==x84));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x85 = -1;
	static uint64_t x86 = UINT64_MAX;
	int64_t x88 = 41081217075LL;
	static volatile uint64_t t17 = 277442275507LLU;

    t17 = ((x85+x86)*(x87==x88));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x89 = 22042475U;
	volatile uint8_t x90 = 16U;
	volatile uint32_t t18 = 1817U;

    t18 = ((x89+x90)*(x91==x92));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x93 = 142U;
	uint16_t x94 = UINT16_MAX;
	int8_t x96 = INT8_MAX;
	volatile uint32_t t19 = 64576U;

    t19 = ((x93+x94)*(x95==x96));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x97 = INT8_MAX;
	int16_t x98 = INT16_MIN;
	uint64_t x100 = UINT64_MAX;
	volatile int32_t t20 = -6873;

    t20 = ((x97+x98)*(x99==x100));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x105 = 1567533163U;
	int64_t x106 = INT64_MIN;
	volatile int32_t x107 = -1;
	int32_t x108 = -1;
	volatile int64_t t21 = 304852LL;

    t21 = ((x105+x106)*(x107==x108));

    if (t21 != -9223372035287242645LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x110 = INT8_MAX;
	volatile int64_t x111 = -1LL;
	int32_t t22 = -1289882;

    t22 = ((x109+x110)*(x111==x112));

    if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x113 = UINT16_MAX;
	static int8_t x114 = 1;
	volatile uint8_t x115 = 1U;
	uint16_t x116 = 9065U;

    t23 = ((x113+x114)*(x115==x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x121 = 46;
	uint16_t x122 = UINT16_MAX;
	volatile uint8_t x124 = 100U;
	int32_t t24 = 216711383;

    t24 = ((x121+x122)*(x123==x124));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint32_t x126 = 8412U;
	int32_t x127 = INT32_MIN;
	int32_t x128 = -14779;
	uint32_t t25 = 908620596U;

    t25 = ((x125+x126)*(x127==x128));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x129 = INT8_MAX;
	int64_t x131 = 4771333655747206LL;
	uint8_t x132 = UINT8_MAX;
	static int32_t t26 = 497;

    t26 = ((x129+x130)*(x131==x132));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x133 = -1LL;
	int32_t x135 = INT32_MIN;
	int64_t x136 = -164722643LL;
	int64_t t27 = -7032180129999LL;

    t27 = ((x133+x134)*(x135==x136));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x137 = UINT32_MAX;
	int64_t x138 = 129LL;
	int8_t x139 = INT8_MIN;
	static uint16_t x140 = UINT16_MAX;
	volatile int64_t t28 = -613LL;

    t28 = ((x137+x138)*(x139==x140));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x141 = INT16_MIN;
	int16_t x143 = -1;
	static int8_t x144 = -29;
	static int32_t t29 = 5430958;

    t29 = ((x141+x142)*(x143==x144));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x145 = 0U;
	static volatile int8_t x146 = INT8_MIN;
	volatile int64_t x147 = -1LL;
	int16_t x148 = INT16_MAX;
	volatile uint32_t t30 = 95216957U;

    t30 = ((x145+x146)*(x147==x148));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x149 = INT32_MIN;
	uint8_t x150 = UINT8_MAX;
	uint16_t x151 = UINT16_MAX;
	uint16_t x152 = 718U;
	static int32_t t31 = -156;

    t31 = ((x149+x150)*(x151==x152));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x153 = INT8_MAX;
	int16_t x154 = -55;
	int8_t x155 = INT8_MIN;
	int32_t x156 = INT32_MIN;
	volatile int32_t t32 = -103;

    t32 = ((x153+x154)*(x155==x156));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x157 = 14331U;
	uint8_t x158 = UINT8_MAX;
	static uint16_t x159 = 14U;
	uint64_t x160 = UINT64_MAX;
	int32_t t33 = -4644369;

    t33 = ((x157+x158)*(x159==x160));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x161 = 567958877809558311LLU;
	volatile int8_t x162 = 8;
	static int8_t x163 = INT8_MIN;
	static volatile uint64_t t34 = 1045888742597967LLU;

    t34 = ((x161+x162)*(x163==x164));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x165 = -1LL;
	volatile uint32_t x166 = 12U;
	int16_t x167 = -111;
	uint64_t x168 = UINT64_MAX;
	volatile int64_t t35 = -166LL;

    t35 = ((x165+x166)*(x167==x168));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x174 = -1;
	int32_t x175 = -1;
	int16_t x176 = INT16_MIN;
	static volatile int32_t t36 = -25039;

    t36 = ((x173+x174)*(x175==x176));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x181 = UINT8_MAX;
	volatile uint64_t x182 = 1319443872966802LLU;
	int8_t x184 = 2;
	uint64_t t37 = 2732811LLU;

    t37 = ((x181+x182)*(x183==x184));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x185 = INT8_MIN;
	uint16_t x186 = 0U;
	int8_t x187 = -1;
	uint32_t x188 = 14669U;

    t38 = ((x185+x186)*(x187==x188));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x189 = INT8_MIN;
	volatile uint8_t x190 = 31U;
	int8_t x191 = 2;
	volatile int32_t x192 = -1;
	int32_t t39 = -8;

    t39 = ((x189+x190)*(x191==x192));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x193 = 13U;
	volatile int16_t x194 = INT16_MAX;
	int8_t x195 = INT8_MIN;
	uint8_t x196 = 3U;
	int32_t t40 = -1041179293;

    t40 = ((x193+x194)*(x195==x196));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x197 = -1;
	int32_t x199 = INT32_MAX;
	volatile uint64_t x200 = UINT64_MAX;
	int32_t t41 = -196526;

    t41 = ((x197+x198)*(x199==x200));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x201 = UINT32_MAX;
	volatile int8_t x202 = INT8_MAX;
	uint32_t t42 = 3559445U;

    t42 = ((x201+x202)*(x203==x204));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x205 = -1LL;
	static int64_t x206 = -1LL;
	static uint16_t x207 = 1U;
	int8_t x208 = INT8_MAX;
	static int64_t t43 = 40256200851LL;

    t43 = ((x205+x206)*(x207==x208));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x214 = -1LL;
	static int32_t x215 = -1;
	uint8_t x216 = 9U;
	volatile int64_t t44 = -242LL;

    t44 = ((x213+x214)*(x215==x216));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x217 = -804811;
	volatile uint32_t x218 = UINT32_MAX;
	int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MIN;
	volatile uint32_t t45 = 130913098U;

    t45 = ((x217+x218)*(x219==x220));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x222 = 506648020;
	volatile uint8_t x223 = 19U;
	int32_t x224 = -220351;

    t46 = ((x221+x222)*(x223==x224));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x225 = 68U;
	int16_t x226 = -89;
	int32_t x227 = INT32_MIN;
	int32_t t47 = -3345;

    t47 = ((x225+x226)*(x227==x228));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x230 = INT8_MIN;
	uint32_t x232 = 14U;
	int32_t t48 = -4097743;

    t48 = ((x229+x230)*(x231==x232));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x237 = UINT64_MAX;
	static uint32_t x238 = UINT32_MAX;
	uint8_t x239 = 21U;
	uint32_t x240 = 2968U;
	uint64_t t49 = 1600214141357LLU;

    t49 = ((x237+x238)*(x239==x240));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x241 = -1;
	int8_t x242 = INT8_MIN;
	uint8_t x243 = UINT8_MAX;
	volatile int64_t x244 = INT64_MAX;
	static volatile int32_t t50 = 716;

    t50 = ((x241+x242)*(x243==x244));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x245 = INT64_MAX;
	volatile uint64_t x246 = 1887017LLU;
	static volatile int32_t x247 = INT32_MIN;
	int8_t x248 = INT8_MIN;
	volatile uint64_t t51 = 30284LLU;

    t51 = ((x245+x246)*(x247==x248));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MIN;
	int32_t x252 = INT32_MIN;
	volatile int32_t t52 = 127336;

    t52 = ((x249+x250)*(x251==x252));

    if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x253 = -1;
	volatile int16_t x254 = -2;
	volatile int64_t x256 = INT64_MAX;
	int32_t t53 = 1;

    t53 = ((x253+x254)*(x255==x256));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x257 = INT16_MIN;
	static int16_t x259 = -1;
	uint16_t x260 = 7067U;
	int32_t t54 = -2315446;

    t54 = ((x257+x258)*(x259==x260));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x261 = -26;
	static int8_t x263 = INT8_MIN;
	static int32_t x264 = INT32_MIN;

    t55 = ((x261+x262)*(x263==x264));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x267 = INT16_MAX;
	volatile int8_t x268 = INT8_MIN;
	volatile int64_t t56 = -36296121LL;

    t56 = ((x265+x266)*(x267==x268));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x270 = -1872708272LL;
	static volatile int16_t x271 = 95;
	int16_t x272 = 120;
	static int64_t t57 = 3572LL;

    t57 = ((x269+x270)*(x271==x272));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x273 = -1;
	int16_t x274 = 1724;
	static volatile int64_t x276 = INT64_MIN;
	volatile int32_t t58 = -15302;

    t58 = ((x273+x274)*(x275==x276));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x277 = INT64_MAX;
	int32_t x279 = 57;
	volatile int64_t t59 = -4398029297571387514LL;

    t59 = ((x277+x278)*(x279==x280));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x281 = 9395396004089705LL;
	uint8_t x282 = UINT8_MAX;
	volatile int64_t x283 = -1LL;
	int32_t x284 = -6228;
	static volatile int64_t t60 = 95174LL;

    t60 = ((x281+x282)*(x283==x284));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x289 = -293;
	int8_t x291 = -2;

    t61 = ((x289+x290)*(x291==x292));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x297 = -1LL;
	static uint8_t x298 = 1U;
	int64_t x299 = -1LL;
	static int64_t x300 = INT64_MIN;
	volatile int64_t t62 = 89515LL;

    t62 = ((x297+x298)*(x299==x300));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x302 = INT32_MAX;
	int64_t x304 = INT64_MAX;
	int32_t t63 = 370;

    t63 = ((x301+x302)*(x303==x304));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x305 = 7607U;
	int64_t x306 = -71LL;
	int64_t x307 = 4166048972409626386LL;
	static volatile int64_t t64 = -16432219009LL;

    t64 = ((x305+x306)*(x307==x308));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x313 = UINT8_MAX;
	int64_t x315 = -216LL;
	int32_t t65 = 1628123;

    t65 = ((x313+x314)*(x315==x316));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x321 = INT32_MIN;
	int64_t x322 = 52LL;
	volatile uint8_t x323 = 57U;
	static uint16_t x324 = 179U;
	volatile int64_t t66 = -967525812702LL;

    t66 = ((x321+x322)*(x323==x324));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x325 = 1379U;
	int16_t x326 = INT16_MIN;
	uint8_t x327 = 1U;
	volatile int32_t x328 = -1;
	static uint32_t t67 = 40401U;

    t67 = ((x325+x326)*(x327==x328));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x329 = 48U;
	static int32_t x330 = INT32_MIN;
	int16_t x331 = INT16_MIN;
	uint64_t x332 = 565587589589LLU;
	volatile uint32_t t68 = 13377U;

    t68 = ((x329+x330)*(x331==x332));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x338 = -294;
	int16_t x340 = INT16_MIN;

    t69 = ((x337+x338)*(x339==x340));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x342 = UINT32_MAX;
	int8_t x343 = -51;
	int8_t x344 = -1;
	uint32_t t70 = 530552015U;

    t70 = ((x341+x342)*(x343==x344));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x345 = 2U;
	int64_t x346 = -1LL;
	int8_t x347 = 4;
	int32_t x348 = -4;

    t71 = ((x345+x346)*(x347==x348));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x350 = UINT16_MAX;
	volatile int8_t x352 = -1;
	uint32_t t72 = 8998U;

    t72 = ((x349+x350)*(x351==x352));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x354 = 6409;
	int16_t x355 = -3;

    t73 = ((x353+x354)*(x355==x356));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x358 = 66204LLU;
	volatile int16_t x360 = -1;
	uint64_t t74 = 16486106867537LLU;

    t74 = ((x357+x358)*(x359==x360));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x362 = -1;
	int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MIN;

    t75 = ((x361+x362)*(x363==x364));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x365 = UINT16_MAX;
	volatile int8_t x366 = INT8_MIN;
	int64_t x367 = 40423023LL;
	int16_t x368 = INT16_MIN;
	volatile int32_t t76 = 544478497;

    t76 = ((x365+x366)*(x367==x368));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x369 = 1;
	int64_t x370 = INT64_MIN;
	uint64_t x371 = UINT64_MAX;
	int16_t x372 = INT16_MIN;

    t77 = ((x369+x370)*(x371==x372));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x374 = 2316116755971310471LLU;
	volatile uint8_t x375 = UINT8_MAX;
	volatile uint64_t t78 = 0LLU;

    t78 = ((x373+x374)*(x375==x376));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x377 = -1LL;
	uint64_t x378 = 16677163112273894LLU;
	int32_t x379 = INT32_MIN;
	int64_t x380 = -25364707523210LL;
	uint64_t t79 = 52LLU;

    t79 = ((x377+x378)*(x379==x380));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x382 = 3U;
	int8_t x383 = INT8_MIN;
	uint64_t x384 = 480352847199441417LLU;
	int32_t t80 = -3881407;

    t80 = ((x381+x382)*(x383==x384));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x385 = UINT32_MAX;
	volatile uint16_t x386 = 9312U;
	int16_t x387 = INT16_MIN;
	uint64_t x388 = 579933875182724LLU;
	uint32_t t81 = 1834256U;

    t81 = ((x385+x386)*(x387==x388));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x389 = UINT8_MAX;
	int32_t x390 = INT32_MIN;
	volatile uint16_t x391 = 2525U;
	int32_t t82 = 5;

    t82 = ((x389+x390)*(x391==x392));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x393 = 2U;
	volatile int64_t x394 = -49LL;
	int32_t x395 = -16981887;

    t83 = ((x393+x394)*(x395==x396));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x398 = -1LL;
	static uint8_t x399 = 18U;
	int64_t x400 = INT64_MAX;
	volatile int64_t t84 = 72561658LL;

    t84 = ((x397+x398)*(x399==x400));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x401 = -1LL;
	int8_t x402 = 34;
	uint8_t x403 = 13U;
	static int64_t x404 = 799LL;
	static volatile int64_t t85 = 84571065216LL;

    t85 = ((x401+x402)*(x403==x404));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x405 = -1;
	int64_t x407 = INT64_MAX;
	uint32_t x408 = 189699597U;
	int32_t t86 = -988;

    t86 = ((x405+x406)*(x407==x408));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x411 = INT8_MIN;
	int64_t x412 = 63697751333977LL;
	int32_t t87 = -991045827;

    t87 = ((x409+x410)*(x411==x412));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x413 = UINT64_MAX;
	volatile int32_t x414 = 1566;
	volatile int16_t x415 = INT16_MIN;
	int32_t x416 = -261246422;
	uint64_t t88 = 24145LLU;

    t88 = ((x413+x414)*(x415==x416));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x417 = UINT8_MAX;
	int32_t x418 = 1;
	int16_t x419 = -1;
	static volatile int16_t x420 = INT16_MIN;
	int32_t t89 = -371789;

    t89 = ((x417+x418)*(x419==x420));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x421 = -1;
	int16_t x422 = -10;
	int64_t x423 = -2518297631LL;
	static volatile int32_t t90 = -27;

    t90 = ((x421+x422)*(x423==x424));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x425 = 66427167610LLU;
	int8_t x426 = 11;
	int32_t x428 = INT32_MIN;
	static volatile uint64_t t91 = 10286873230387LLU;

    t91 = ((x425+x426)*(x427==x428));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x429 = 112342625LL;
	static int8_t x430 = INT8_MIN;
	static int32_t x431 = INT32_MAX;

    t92 = ((x429+x430)*(x431==x432));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x433 = -29;
	uint8_t x434 = 55U;
	uint64_t x435 = 119038664612055LLU;
	static uint64_t x436 = UINT64_MAX;
	volatile int32_t t93 = 364;

    t93 = ((x433+x434)*(x435==x436));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x437 = 2;
	int32_t x438 = -1;
	int8_t x439 = INT8_MAX;
	uint16_t x440 = 2754U;
	static int32_t t94 = -4;

    t94 = ((x437+x438)*(x439==x440));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x441 = -1LL;
	volatile uint32_t x442 = 13U;
	int32_t x444 = -14;
	volatile int64_t t95 = 1818LL;

    t95 = ((x441+x442)*(x443==x444));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x445 = UINT32_MAX;
	int8_t x446 = INT8_MIN;
	int8_t x447 = 41;
	volatile int16_t x448 = INT16_MAX;
	uint32_t t96 = 2623304U;

    t96 = ((x445+x446)*(x447==x448));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x449 = INT16_MAX;
	int64_t x450 = INT64_MIN;
	int8_t x451 = 19;
	volatile int64_t t97 = -1LL;

    t97 = ((x449+x450)*(x451==x452));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x461 = 186010LLU;
	volatile int16_t x462 = 45;
	volatile uint64_t x463 = 92559179553160LLU;
	static int16_t x464 = -1;
	static uint64_t t98 = 7LLU;

    t98 = ((x461+x462)*(x463==x464));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x465 = -868;
	uint8_t x467 = 0U;
	int8_t x468 = -3;
	int32_t t99 = 260945707;

    t99 = ((x465+x466)*(x467==x468));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x469 = 1;
	int16_t x470 = -1581;
	uint64_t x471 = UINT64_MAX;
	int64_t x472 = INT64_MAX;
	int32_t t100 = 0;

    t100 = ((x469+x470)*(x471==x472));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x474 = 9544264827LL;
	int64_t x475 = INT64_MIN;
	int64_t t101 = -2393442657092981339LL;

    t101 = ((x473+x474)*(x475==x476));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x477 = 2668621272LL;
	static volatile int64_t t102 = 5135806872LL;

    t102 = ((x477+x478)*(x479==x480));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x485 = 734U;
	int32_t x488 = -1;
	int32_t t103 = -113876087;

    t103 = ((x485+x486)*(x487==x488));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x490 = -10;
	int8_t x492 = INT8_MIN;
	volatile int64_t t104 = 0LL;

    t104 = ((x489+x490)*(x491==x492));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x493 = 15U;
	int8_t x495 = 4;
	int32_t x496 = INT32_MIN;
	int32_t t105 = -120;

    t105 = ((x493+x494)*(x495==x496));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x498 = 9729;
	int64_t x500 = 8015599231235534LL;
	int32_t t106 = 0;

    t106 = ((x497+x498)*(x499==x500));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x505 = UINT64_MAX;
	int64_t x506 = INT64_MIN;
	uint64_t x507 = 32198506762935286LLU;
	int16_t x508 = INT16_MIN;

    t107 = ((x505+x506)*(x507==x508));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x509 = -510;
	uint32_t x510 = UINT32_MAX;
	uint64_t x512 = 775874129002381696LLU;
	volatile uint32_t t108 = 1575173U;

    t108 = ((x509+x510)*(x511==x512));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x513 = UINT16_MAX;
	int16_t x514 = INT16_MAX;
	int8_t x515 = INT8_MIN;
	static int8_t x516 = 0;
	volatile int32_t t109 = -92;

    t109 = ((x513+x514)*(x515==x516));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x517 = 2803172U;
	int64_t x518 = 128089941629306258LL;
	uint16_t x519 = 25261U;
	int32_t x520 = 2;

    t110 = ((x517+x518)*(x519==x520));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x521 = INT32_MIN;
	int32_t x522 = 101943;
	volatile int32_t x523 = INT32_MAX;
	int16_t x524 = INT16_MIN;
	static int32_t t111 = 24290;

    t111 = ((x521+x522)*(x523==x524));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x526 = INT16_MAX;
	static volatile int32_t x528 = -1;
	int32_t t112 = -161;

    t112 = ((x525+x526)*(x527==x528));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x530 = 15U;
	int32_t x531 = INT32_MAX;
	volatile int16_t x532 = INT16_MIN;
	static volatile uint32_t t113 = 7252U;

    t113 = ((x529+x530)*(x531==x532));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int64_t x533 = 985480164LL;
	int16_t x535 = -1;
	volatile int64_t t114 = 20818LL;

    t114 = ((x533+x534)*(x535==x536));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x538 = -1;
	static uint8_t x539 = UINT8_MAX;
	static int64_t x540 = INT64_MIN;
	volatile int32_t t115 = -34708020;

    t115 = ((x537+x538)*(x539==x540));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x541 = 25U;
	uint8_t x542 = 2U;
	int8_t x543 = 1;
	int64_t x544 = INT64_MIN;
	int32_t t116 = -73958982;

    t116 = ((x541+x542)*(x543==x544));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x545 = 7U;
	volatile uint16_t x546 = 84U;
	volatile uint64_t x547 = 974LLU;
	int8_t x548 = INT8_MIN;

    t117 = ((x545+x546)*(x547==x548));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x550 = INT16_MIN;
	volatile int16_t x551 = 73;
	uint8_t x552 = 40U;
	uint64_t t118 = 6418455851681494138LLU;

    t118 = ((x549+x550)*(x551==x552));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x554 = UINT32_MAX;
	int32_t x555 = -90551;
	volatile uint64_t x556 = 146302875657LLU;
	static uint32_t t119 = 33U;

    t119 = ((x553+x554)*(x555==x556));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x557 = INT8_MIN;
	uint8_t x558 = UINT8_MAX;
	uint16_t x559 = UINT16_MAX;
	int16_t x560 = INT16_MAX;
	static volatile int32_t t120 = -100427;

    t120 = ((x557+x558)*(x559==x560));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x565 = 25;
	int8_t x566 = 1;
	uint16_t x568 = UINT16_MAX;
	volatile int32_t t121 = 113004180;

    t121 = ((x565+x566)*(x567==x568));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x573 = 95U;
	int16_t x576 = INT16_MIN;

    t122 = ((x573+x574)*(x575==x576));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x577 = 1019539LLU;
	static volatile int32_t x578 = INT32_MIN;
	static uint64_t t123 = 66794993439951406LLU;

    t123 = ((x577+x578)*(x579==x580));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x581 = UINT8_MAX;
	volatile int16_t x582 = INT16_MIN;
	static int64_t x584 = INT64_MIN;
	int32_t t124 = 6;

    t124 = ((x581+x582)*(x583==x584));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x585 = INT8_MIN;
	uint64_t x586 = UINT64_MAX;
	uint64_t x587 = 51428LLU;
	int8_t x588 = -1;
	volatile uint64_t t125 = 186LLU;

    t125 = ((x585+x586)*(x587==x588));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x589 = 8619957666LLU;
	int32_t x590 = 382111526;
	uint16_t x591 = 6U;

    t126 = ((x589+x590)*(x591==x592));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x593 = INT32_MAX;
	uint8_t x594 = 0U;
	int32_t x595 = -107;
	int8_t x596 = INT8_MIN;
	int32_t t127 = 0;

    t127 = ((x593+x594)*(x595==x596));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x597 = 10684U;
	uint8_t x598 = UINT8_MAX;
	static volatile int64_t x599 = INT64_MIN;
	int8_t x600 = INT8_MAX;
	int32_t t128 = 516895386;

    t128 = ((x597+x598)*(x599==x600));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x602 = -49;

    t129 = ((x601+x602)*(x603==x604));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x605 = 6067986LLU;
	static int8_t x607 = -2;
	int64_t x608 = INT64_MAX;
	uint64_t t130 = 2224LLU;

    t130 = ((x605+x606)*(x607==x608));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x613 = UINT8_MAX;
	int16_t x615 = -3018;
	volatile uint64_t x616 = UINT64_MAX;
	int32_t t131 = -1;

    t131 = ((x613+x614)*(x615==x616));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x618 = INT8_MAX;
	int32_t x619 = INT32_MAX;
	volatile uint64_t t132 = 2038291LLU;

    t132 = ((x617+x618)*(x619==x620));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x622 = INT16_MIN;
	volatile uint64_t x623 = 575803787LLU;
	static int64_t x624 = -2069LL;

    t133 = ((x621+x622)*(x623==x624));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x625 = -1;
	static int16_t x626 = 8;
	static volatile int64_t x628 = INT64_MIN;
	volatile int32_t t134 = -42538437;

    t134 = ((x625+x626)*(x627==x628));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x629 = INT8_MAX;
	int16_t x630 = 60;
	static int32_t x631 = -59523578;
	int32_t t135 = -377;

    t135 = ((x629+x630)*(x631==x632));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x638 = 246876461846977LL;
	int32_t x639 = 29546;
	int64_t t136 = 443LL;

    t136 = ((x637+x638)*(x639==x640));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x641 = 64070;
	int16_t x642 = INT16_MIN;
	volatile int8_t x643 = 3;
	int64_t x644 = INT64_MIN;
	volatile int32_t t137 = 231;

    t137 = ((x641+x642)*(x643==x644));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x645 = 10U;

    t138 = ((x645+x646)*(x647==x648));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x649 = INT64_MAX;
	volatile int64_t x650 = INT64_MIN;
	int64_t x651 = -1LL;
	volatile int8_t x652 = INT8_MIN;

    t139 = ((x649+x650)*(x651==x652));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x653 = 261;
	uint8_t x654 = UINT8_MAX;
	int16_t x655 = INT16_MIN;
	int32_t t140 = 283;

    t140 = ((x653+x654)*(x655==x656));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x657 = INT16_MAX;
	static volatile uint8_t x658 = 3U;
	int8_t x659 = INT8_MAX;
	static int8_t x660 = -1;
	static volatile int32_t t141 = -3752;

    t141 = ((x657+x658)*(x659==x660));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x661 = UINT32_MAX;
	int32_t x662 = INT32_MIN;
	int8_t x663 = INT8_MAX;
	int8_t x664 = INT8_MAX;

    t142 = ((x661+x662)*(x663==x664));

    if (t142 != 2147483647U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x665 = 389;
	static int32_t x667 = INT32_MIN;
	int32_t t143 = -8643;

    t143 = ((x665+x666)*(x667==x668));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x669 = UINT16_MAX;
	volatile uint16_t x670 = 17U;
	volatile uint16_t x671 = 3414U;
	uint32_t x672 = UINT32_MAX;
	static volatile int32_t t144 = 106;

    t144 = ((x669+x670)*(x671==x672));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x673 = UINT64_MAX;
	volatile int32_t x674 = -1;
	uint16_t x675 = 2935U;
	uint64_t x676 = 10873189LLU;
	volatile uint64_t t145 = 429LLU;

    t145 = ((x673+x674)*(x675==x676));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x677 = -4515;
	int32_t x678 = -1;
	int64_t x679 = 273378629387536LL;
	int8_t x680 = 1;

    t146 = ((x677+x678)*(x679==x680));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x685 = -1;
	int8_t x686 = INT8_MIN;
	int64_t x687 = INT64_MIN;
	int16_t x688 = -1132;

    t147 = ((x685+x686)*(x687==x688));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x689 = -25;
	uint16_t x690 = 705U;
	int64_t x691 = 1594LL;
	uint32_t x692 = 2U;
	volatile int32_t t148 = -78832;

    t148 = ((x689+x690)*(x691==x692));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x693 = INT8_MAX;
	uint8_t x695 = 37U;

    t149 = ((x693+x694)*(x695==x696));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x701 = 230258LL;
	uint64_t x702 = 34389180LLU;
	static int8_t x703 = INT8_MAX;
	int32_t x704 = -1;
	static uint64_t t150 = 447779LLU;

    t150 = ((x701+x702)*(x703==x704));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x705 = INT8_MIN;
	int16_t x706 = -1;
	int64_t x707 = INT64_MIN;
	static int8_t x708 = INT8_MAX;
	volatile int32_t t151 = -406364;

    t151 = ((x705+x706)*(x707==x708));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x709 = INT32_MIN;
	uint64_t x710 = 9166303LLU;
	volatile int8_t x711 = -1;
	int64_t x712 = INT64_MIN;
	uint64_t t152 = 518760045356LLU;

    t152 = ((x709+x710)*(x711==x712));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x713 = 4671832LLU;
	int16_t x714 = INT16_MIN;
	volatile int64_t x715 = 12118LL;
	uint32_t x716 = 12U;
	volatile uint64_t t153 = 2339LLU;

    t153 = ((x713+x714)*(x715==x716));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x717 = -1LL;
	int32_t x718 = INT32_MAX;
	int16_t x719 = 4;
	uint8_t x720 = 34U;
	int64_t t154 = 20186369923191092LL;

    t154 = ((x717+x718)*(x719==x720));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x725 = INT32_MIN;
	int32_t x726 = INT32_MAX;
	volatile int16_t x727 = INT16_MIN;
	static uint16_t x728 = 1U;
	int32_t t155 = 258;

    t155 = ((x725+x726)*(x727==x728));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x729 = 957;
	int8_t x730 = -3;
	int64_t x731 = INT64_MIN;
	static volatile uint16_t x732 = 1881U;

    t156 = ((x729+x730)*(x731==x732));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x733 = UINT64_MAX;
	int16_t x734 = INT16_MAX;
	volatile int8_t x735 = -1;
	int8_t x736 = INT8_MIN;
	volatile uint64_t t157 = 74747532LLU;

    t157 = ((x733+x734)*(x735==x736));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x737 = -12;
	static int32_t x738 = -331303387;
	int64_t x740 = INT64_MAX;
	volatile int32_t t158 = 5971567;

    t158 = ((x737+x738)*(x739==x740));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x741 = 412518501;
	int64_t x743 = -1LL;
	static int8_t x744 = -1;
	volatile int32_t t159 = 1;

    t159 = ((x741+x742)*(x743==x744));

    if (t159 != 412518564) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x753 = 184553125909822782LLU;
	static int8_t x754 = INT8_MIN;
	volatile uint16_t x755 = 2U;
	uint8_t x756 = 5U;

    t160 = ((x753+x754)*(x755==x756));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x758 = -1;
	static int64_t x759 = -90LL;
	int8_t x760 = -1;
	static volatile int32_t t161 = -397218458;

    t161 = ((x757+x758)*(x759==x760));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x761 = INT8_MIN;
	int16_t x762 = INT16_MAX;
	uint32_t x763 = UINT32_MAX;
	volatile int32_t t162 = 1468588;

    t162 = ((x761+x762)*(x763==x764));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x765 = -6311;
	static volatile int8_t x766 = INT8_MAX;
	volatile uint32_t x768 = 10770U;
	volatile int32_t t163 = -97;

    t163 = ((x765+x766)*(x767==x768));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x769 = -4;
	int8_t x770 = INT8_MAX;
	static int32_t x771 = INT32_MIN;

    t164 = ((x769+x770)*(x771==x772));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x773 = 90U;
	volatile int16_t x775 = -1;

    t165 = ((x773+x774)*(x775==x776));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x777 = -1;
	uint16_t x778 = 108U;
	int8_t x779 = INT8_MAX;
	volatile uint32_t x780 = UINT32_MAX;
	volatile int32_t t166 = -4025;

    t166 = ((x777+x778)*(x779==x780));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x781 = 677U;
	uint16_t x782 = 5457U;
	int32_t x783 = INT32_MIN;
	static volatile int32_t t167 = 0;

    t167 = ((x781+x782)*(x783==x784));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x785 = 199978730688459LLU;
	static int32_t x786 = INT32_MAX;
	int8_t x787 = -1;
	volatile int16_t x788 = -1;
	volatile uint64_t t168 = 66487736802LLU;

    t168 = ((x785+x786)*(x787==x788));

    if (t168 != 199980878172106LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x789 = 1;
	int8_t x790 = INT8_MIN;
	uint8_t x791 = UINT8_MAX;
	static int8_t x792 = 0;

    t169 = ((x789+x790)*(x791==x792));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x793 = 2U;
	int64_t x794 = INT64_MIN;
	static int32_t x795 = -35660430;
	static int64_t x796 = INT64_MIN;
	static volatile int64_t t170 = 17134345011LL;

    t170 = ((x793+x794)*(x795==x796));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x797 = INT16_MIN;
	static int32_t x799 = 0;
	volatile int16_t x800 = -817;
	volatile int64_t t171 = 119023LL;

    t171 = ((x797+x798)*(x799==x800));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x801 = INT32_MAX;
	int32_t x802 = INT32_MIN;
	int32_t x803 = -130815;
	static int8_t x804 = INT8_MAX;
	static int32_t t172 = -27114;

    t172 = ((x801+x802)*(x803==x804));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x809 = 881U;
	int8_t x810 = INT8_MIN;
	static int8_t x811 = INT8_MIN;
	static volatile int64_t x812 = -1LL;
	volatile int32_t t173 = -6526;

    t173 = ((x809+x810)*(x811==x812));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x813 = -1LL;
	volatile int32_t x814 = INT32_MAX;
	int8_t x816 = -1;

    t174 = ((x813+x814)*(x815==x816));

    if (t174 != 2147483646LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x817 = -1;
	int16_t x818 = INT16_MAX;
	int16_t x819 = INT16_MIN;
	int16_t x820 = 5088;
	static volatile int32_t t175 = 0;

    t175 = ((x817+x818)*(x819==x820));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x821 = INT16_MIN;
	uint64_t x822 = 20550509721328384LLU;
	int32_t x823 = INT32_MAX;
	int16_t x824 = 4724;
	volatile uint64_t t176 = 23381LLU;

    t176 = ((x821+x822)*(x823==x824));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x825 = 7520U;
	int32_t x826 = INT32_MIN;
	int32_t x827 = INT32_MAX;
	uint32_t x828 = UINT32_MAX;
	volatile uint32_t t177 = 54505826U;

    t177 = ((x825+x826)*(x827==x828));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x830 = 11;
	int64_t x831 = -9551LL;
	int64_t t178 = 29191700LL;

    t178 = ((x829+x830)*(x831==x832));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x838 = -1;
	uint32_t x839 = 11U;
	volatile int8_t x840 = -1;

    t179 = ((x837+x838)*(x839==x840));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x841 = -166475023171LL;
	uint32_t x842 = 123044680U;
	volatile int8_t x843 = -1;
	uint64_t x844 = UINT64_MAX;
	int64_t t180 = -2166514834009LL;

    t180 = ((x841+x842)*(x843==x844));

    if (t180 != -166351978491LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x845 = INT16_MIN;
	static int32_t x847 = -1;
	int8_t x848 = -47;
	volatile int32_t t181 = 116368280;

    t181 = ((x845+x846)*(x847==x848));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x849 = 10316U;
	int64_t x851 = INT64_MIN;
	int16_t x852 = 46;

    t182 = ((x849+x850)*(x851==x852));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x853 = UINT16_MAX;
	static int32_t x855 = INT32_MIN;
	volatile int16_t x856 = INT16_MIN;

    t183 = ((x853+x854)*(x855==x856));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x857 = UINT8_MAX;
	int32_t x859 = INT32_MIN;

    t184 = ((x857+x858)*(x859==x860));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x861 = INT8_MIN;
	uint16_t x863 = UINT16_MAX;
	uint8_t x864 = UINT8_MAX;

    t185 = ((x861+x862)*(x863==x864));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x865 = 2755U;
	uint64_t x866 = 14913157349LLU;
	uint8_t x867 = 7U;
	int16_t x868 = INT16_MIN;

    t186 = ((x865+x866)*(x867==x868));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x869 = INT8_MIN;
	static volatile int16_t x870 = INT16_MIN;
	static uint64_t x871 = 40652578003252LLU;
	static int32_t t187 = -667389932;

    t187 = ((x869+x870)*(x871==x872));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x873 = 107771641U;
	int32_t x874 = INT32_MIN;
	int64_t x875 = INT64_MIN;
	int16_t x876 = 6;
	uint32_t t188 = 19U;

    t188 = ((x873+x874)*(x875==x876));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x877 = INT16_MAX;
	int16_t x878 = -1;
	int8_t x879 = 61;
	static volatile int64_t x880 = INT64_MIN;
	int32_t t189 = 371200343;

    t189 = ((x877+x878)*(x879==x880));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x881 = 309043448;
	static int64_t x882 = INT64_MIN;
	int8_t x883 = -14;
	uint64_t x884 = UINT64_MAX;
	volatile int64_t t190 = 1624LL;

    t190 = ((x881+x882)*(x883==x884));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x885 = 3643U;
	static uint32_t x886 = 86640229U;
	int16_t x887 = INT16_MIN;
	int16_t x888 = -1;

    t191 = ((x885+x886)*(x887==x888));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x889 = 27;
	uint64_t x890 = 4146414442839LLU;
	uint16_t x892 = UINT16_MAX;
	uint64_t t192 = 7036426849LLU;

    t192 = ((x889+x890)*(x891==x892));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x893 = -1;
	volatile uint32_t x894 = 121U;
	int64_t x895 = 0LL;
	uint16_t x896 = 10U;
	uint32_t t193 = 4073628U;

    t193 = ((x893+x894)*(x895==x896));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x897 = 67095U;
	uint64_t x899 = 622LLU;
	uint32_t t194 = 470U;

    t194 = ((x897+x898)*(x899==x900));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x901 = 6030810U;
	int32_t x902 = 2;
	int8_t x903 = -1;
	int8_t x904 = -1;
	uint32_t t195 = 1U;

    t195 = ((x901+x902)*(x903==x904));

    if (t195 != 6030812U) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x905 = 5248U;
	int64_t x906 = -1LL;
	int64_t x907 = INT64_MIN;
	int16_t x908 = -1;

    t196 = ((x905+x906)*(x907==x908));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x913 = 2;
	static int64_t x914 = INT64_MIN;
	volatile uint16_t x915 = 3U;
	volatile int32_t x916 = INT32_MAX;
	volatile int64_t t197 = -34023LL;

    t197 = ((x913+x914)*(x915==x916));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x925 = -1;
	int8_t x926 = INT8_MIN;
	uint16_t x927 = 12540U;
	uint16_t x928 = 0U;

    t198 = ((x925+x926)*(x927==x928));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x929 = UINT64_MAX;
	static int32_t x930 = -18759;
	volatile int64_t x931 = INT64_MAX;
	volatile int64_t x932 = -1LL;

    t199 = ((x929+x930)*(x931==x932));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

