
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

int16_t x2 = -1;
int8_t x9 = INT8_MAX;
uint8_t x12 = UINT8_MAX;
int8_t x14 = 2;
volatile int64_t t2 = -428684329824LL;
uint32_t x35 = UINT32_MAX;
volatile uint64_t x39 = 80187984347537285LLU;
static int32_t x52 = INT32_MIN;
static uint64_t x70 = 62861002351LLU;
uint8_t x79 = 3U;
uint64_t x88 = 1692304982653765LLU;
uint64_t t13 = 805864782542727005LLU;
int32_t x93 = INT32_MIN;
uint8_t x101 = UINT8_MAX;
uint16_t x109 = 7U;
volatile uint16_t x116 = UINT16_MAX;
int16_t x121 = -1;
static int16_t x122 = INT16_MIN;
volatile int8_t x123 = INT8_MIN;
int32_t x124 = -1;
uint64_t x125 = 8737589177249LLU;
int32_t x128 = INT32_MIN;
uint16_t x137 = 318U;
volatile uint64_t x139 = 2009190781LLU;
uint16_t x144 = 0U;
uint16_t x145 = UINT16_MAX;
uint32_t t26 = 2095U;
int8_t x157 = INT8_MIN;
static uint64_t t27 = 162444009207LLU;
uint8_t x166 = UINT8_MAX;
uint32_t x169 = 13U;
uint32_t x170 = 32912061U;
static int32_t x174 = -1;
uint8_t x179 = 3U;
uint8_t x193 = UINT8_MAX;
int16_t x194 = INT16_MIN;
uint64_t x206 = UINT64_MAX;
uint64_t t34 = 197LLU;
uint16_t x210 = 308U;
int64_t x215 = INT64_MIN;
volatile uint64_t t36 = 27789LLU;
volatile int32_t t38 = -335142;
volatile uint8_t x229 = 97U;
volatile uint32_t x231 = 44U;
int16_t x232 = INT16_MAX;
uint64_t x260 = 3LLU;
volatile uint64_t t46 = 1194630098LLU;
volatile int16_t x267 = -1;
int8_t x268 = -1;
int16_t x273 = INT16_MIN;
volatile int16_t x274 = -1;
static int16_t x277 = INT16_MIN;
uint16_t x278 = 264U;
uint64_t x280 = 1399312667334412LLU;
int16_t x281 = -1;
int8_t x286 = -31;
int64_t x294 = INT64_MIN;
int16_t x295 = -40;
int16_t x302 = INT16_MIN;
int32_t x304 = 43529374;
uint32_t x312 = 2U;
int8_t x314 = INT8_MIN;
uint64_t x332 = UINT64_MAX;
volatile int64_t t62 = -4122074845LL;
volatile int8_t x345 = INT8_MAX;
int16_t x349 = INT16_MIN;
int32_t t64 = -390;
uint8_t x353 = UINT8_MAX;
int64_t t65 = 2LL;
uint16_t x357 = 12U;
volatile uint8_t x372 = UINT8_MAX;
static volatile int32_t t69 = 31158;
uint32_t x378 = UINT32_MAX;
int32_t x379 = -1;
int64_t x382 = -37LL;
int8_t x387 = INT8_MAX;
uint64_t x398 = UINT64_MAX;
uint8_t x402 = 0U;
int8_t x403 = 1;
volatile int32_t t76 = -1;
volatile uint8_t x421 = UINT8_MAX;
static int16_t x425 = -1;
uint32_t x426 = 1242U;
int8_t x428 = -1;
int16_t x435 = INT16_MIN;
uint32_t x440 = 509061U;
int8_t x450 = -2;
volatile int8_t x452 = -1;
int64_t x465 = -2LL;
uint16_t x468 = 893U;
int64_t x470 = 1929346263727901LL;
volatile int64_t t88 = 200LL;
int32_t x485 = -260949076;
static volatile uint16_t x505 = UINT16_MAX;
volatile uint64_t t94 = 3120LLU;
int16_t x514 = -1;
uint32_t x527 = UINT32_MAX;
uint8_t x530 = 112U;
uint8_t x537 = 2U;
int32_t x552 = INT32_MIN;
volatile int32_t t101 = -659491;
uint32_t x553 = UINT32_MAX;
int64_t x555 = -3LL;
int64_t x565 = INT64_MIN;
volatile uint64_t t104 = 159748280112LLU;
uint16_t x569 = 0U;
uint32_t x571 = 9169U;
int32_t x580 = INT32_MAX;
volatile uint32_t x590 = UINT32_MAX;
uint16_t x595 = UINT16_MAX;
static uint64_t t109 = 45871966827LLU;
static volatile uint64_t t111 = 340832LLU;
static volatile int8_t x611 = INT8_MAX;
int8_t x612 = INT8_MIN;
int32_t x617 = -1;
uint32_t x618 = 9U;
uint32_t t115 = 7U;
int16_t x623 = INT16_MIN;
int16_t x624 = -1;
int64_t x631 = 1151550473829814LL;
uint64_t x632 = 2153896LLU;
int64_t x634 = 1LL;
uint8_t x636 = 12U;
int16_t x638 = -1;
int64_t t120 = 1955348499788LL;
uint64_t t121 = UINT64_MAX;
volatile int64_t t122 = -22651158167LL;
volatile int64_t x660 = -69781157LL;
uint64_t t126 = 1283264701LLU;
int64_t t127 = -2193804470303736LL;
uint32_t t128 = 3806374U;
static int32_t x690 = 0;
int32_t x691 = -22;
volatile int64_t t131 = INT64_MAX;
static volatile uint32_t x718 = 108944065U;
volatile int8_t x722 = INT8_MIN;
int8_t x724 = -1;
volatile int64_t t137 = -657861LL;
int16_t x730 = -7608;
int16_t x731 = -1;
int32_t t138 = 1;
int8_t x736 = -3;
volatile uint32_t t139 = 1919561401U;
volatile int16_t x739 = INT16_MAX;
int16_t x742 = 3;
uint32_t x743 = 10U;
int64_t x756 = INT64_MAX;
volatile int32_t t143 = 15373903;
volatile int64_t t144 = -60254LL;
int16_t x768 = INT16_MAX;
volatile int64_t t145 = -6796LL;
volatile int32_t t146 = -89851262;
int8_t x777 = -1;
int16_t x791 = INT16_MIN;
uint8_t x792 = UINT8_MAX;
uint8_t x798 = UINT8_MAX;
static int32_t x802 = 1812;
volatile int64_t t150 = -211494400984LL;
int16_t x810 = 0;
uint32_t x814 = UINT32_MAX;
static volatile uint64_t t153 = 2000001694221801LLU;
volatile int8_t x826 = INT8_MAX;
int8_t x836 = 16;
static int16_t x839 = INT16_MAX;
int16_t x841 = -89;
volatile int64_t t157 = INT64_MIN;
static volatile int64_t x847 = -1LL;
int32_t x851 = INT32_MIN;
uint16_t x854 = 45U;
volatile int64_t t163 = 3852LL;
int64_t x874 = -1LL;
static int16_t x875 = -1;
uint16_t x882 = 3427U;
int32_t x903 = INT32_MAX;
int16_t x904 = INT16_MIN;
volatile int64_t x907 = INT64_MIN;
volatile uint64_t t169 = 6LLU;
int8_t x914 = INT8_MIN;
volatile uint32_t t170 = 394448829U;
int16_t x925 = 13;
uint8_t x929 = UINT8_MAX;
int16_t x932 = -1;
int16_t x936 = -14763;
volatile uint8_t x937 = 1U;
static volatile uint64_t x938 = 13570644015917LLU;
uint32_t x947 = 239653818U;
int16_t x951 = INT16_MIN;
volatile int8_t x954 = INT8_MAX;
int64_t x955 = INT64_MIN;
int64_t t179 = 0LL;
uint32_t x963 = UINT32_MAX;
uint64_t x969 = 55149511LLU;
static uint64_t x979 = 76LLU;
uint64_t x981 = 26220LLU;
int8_t x984 = INT8_MIN;
static int8_t x985 = -1;
int8_t x987 = INT8_MAX;
volatile int32_t t187 = 32347745;
uint8_t x993 = 2U;
int8_t x1013 = INT8_MIN;
uint16_t x1019 = 8759U;
static int16_t x1020 = INT16_MIN;
volatile int32_t t193 = -4736105;
int16_t x1021 = INT16_MAX;
uint16_t x1026 = 1288U;
volatile int8_t x1030 = -1;
int32_t t196 = -7969561;
int8_t x1034 = INT8_MIN;
uint16_t x1035 = 3517U;
int16_t x1036 = INT16_MAX;
int32_t x1043 = -1;
volatile uint32_t t199 = 1101333U;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	int32_t x3 = INT32_MAX;
	int64_t x4 = INT64_MIN;
	int64_t t0 = INT64_MIN;

    t0 = (((x1*x2)/x3)^x4);

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x10 = INT16_MIN;
	int8_t x11 = INT8_MAX;
	int32_t t1 = -5;

    t1 = (((x9*x10)/x11)^x12);

    if (t1 != -32513) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = -59044188340LL;
	int64_t x15 = -8LL;
	volatile int16_t x16 = 2;

    t2 = (((x13*x14)/x15)^x16);

    if (t2 != 14761047087LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x33 = 0U;
	uint32_t x34 = UINT32_MAX;
	int8_t x36 = INT8_MIN;
	volatile uint32_t t3 = 1854488U;

    t3 = (((x33*x34)/x35)^x36);

    if (t3 != 4294967168U) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x37 = UINT64_MAX;
	static uint8_t x38 = 57U;
	int8_t x40 = -1;
	volatile uint64_t t4 = 781200410016LLU;

    t4 = (((x37*x38)/x39)^x40);

    if (t4 != 18446744073709551385LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x41 = 131603990LL;
	uint64_t x42 = UINT64_MAX;
	int64_t x43 = -1LL;
	static int16_t x44 = -51;
	uint64_t t5 = 4LLU;

    t5 = (((x41*x42)/x43)^x44);

    if (t5 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x45 = 2;
	int8_t x46 = INT8_MIN;
	int32_t x47 = -1774;
	uint32_t x48 = 1932867958U;
	static uint32_t t6 = 38U;

    t6 = (((x45*x46)/x47)^x48);

    if (t6 != 1932867958U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x49 = UINT8_MAX;
	static uint8_t x50 = UINT8_MAX;
	int32_t x51 = -1;
	int32_t t7 = 3340;

    t7 = (((x49*x50)/x51)^x52);

    if (t7 != 2147418623) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x57 = 36;
	volatile uint16_t x58 = UINT16_MAX;
	uint64_t x59 = 461408LLU;
	volatile uint16_t x60 = 0U;
	volatile uint64_t t8 = 156931832299LLU;

    t8 = (((x57*x58)/x59)^x60);

    if (t8 != 5LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x61 = -2734LL;
	uint16_t x62 = UINT16_MAX;
	int32_t x63 = INT32_MIN;
	static uint32_t x64 = 258271466U;
	int64_t t9 = -148LL;

    t9 = (((x61*x62)/x63)^x64);

    if (t9 != 258271466LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x69 = 3980U;
	uint32_t x71 = 125269U;
	uint16_t x72 = UINT16_MAX;
	volatile uint64_t t10 = 21839959327LLU;

    t10 = (((x69*x70)/x71)^x72);

    if (t10 != 1997157315LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x77 = INT16_MAX;
	int64_t x78 = -66946793713464LL;
	static volatile int64_t x80 = INT64_MAX;
	int64_t t11 = 516654155219LL;

    t11 = (((x77*x78)/x79)^x80);

    if (t11 != -8492156840318417513LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x81 = 1;
	static int8_t x82 = INT8_MIN;
	static int8_t x83 = INT8_MIN;
	static int8_t x84 = 7;
	volatile int32_t t12 = 10521076;

    t12 = (((x81*x82)/x83)^x84);

    if (t12 != 6) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x85 = INT16_MIN;
	int16_t x86 = INT16_MIN;
	uint16_t x87 = 7265U;

    t13 = (((x85*x86)/x87)^x88);

    if (t13 != 1692304982538769LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x89 = -12367229LL;
	uint8_t x90 = UINT8_MAX;
	int32_t x91 = -1;
	int8_t x92 = INT8_MAX;
	volatile int64_t t14 = 276340224244268LL;

    t14 = (((x89*x90)/x91)^x92);

    if (t14 != 3153643516LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x94 = 6LLU;
	volatile int64_t x95 = INT64_MIN;
	volatile int8_t x96 = -1;
	uint64_t t15 = 444296LLU;

    t15 = (((x93*x94)/x95)^x96);

    if (t15 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x97 = -7;
	int32_t x98 = 10;
	static int64_t x99 = INT64_MAX;
	int8_t x100 = -36;
	int64_t t16 = -27LL;

    t16 = (((x97*x98)/x99)^x100);

    if (t16 != -36LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x102 = INT8_MIN;
	uint32_t x103 = UINT32_MAX;
	volatile int64_t x104 = INT64_MIN;
	int64_t t17 = INT64_MIN;

    t17 = (((x101*x102)/x103)^x104);

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x105 = 66U;
	static uint16_t x106 = UINT16_MAX;
	uint16_t x107 = 54U;
	static uint64_t x108 = UINT64_MAX;
	volatile uint64_t t18 = 4990952LLU;

    t18 = (((x105*x106)/x107)^x108);

    if (t18 != 18446744073709471517LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x110 = -3037;
	uint32_t x111 = 4198U;
	volatile uint64_t x112 = 44644635LLU;
	volatile uint64_t t19 = 6745673922LLU;

    t19 = (((x109*x110)/x111)^x112);

    if (t19 != 44475758LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x113 = UINT32_MAX;
	uint8_t x114 = 4U;
	int64_t x115 = INT64_MIN;
	volatile int64_t t20 = 7549238LL;

    t20 = (((x113*x114)/x115)^x116);

    if (t20 != 65535LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t t21 = -19125;

    t21 = (((x121*x122)/x123)^x124);

    if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x126 = 26194825U;
	static int32_t x127 = 10444982;
	volatile uint64_t t22 = 199LLU;

    t22 = (((x125*x126)/x127)^x128);

    if (t22 != 18446743352585600877LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x133 = INT64_MIN;
	uint64_t x134 = UINT64_MAX;
	int64_t x135 = INT64_MIN;
	int16_t x136 = 4;
	volatile uint64_t t23 = 125LLU;

    t23 = (((x133*x134)/x135)^x136);

    if (t23 != 5LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x138 = 592U;
	int8_t x140 = INT8_MAX;
	uint64_t t24 = 1855659096952160512LLU;

    t24 = (((x137*x138)/x139)^x140);

    if (t24 != 127LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x141 = INT8_MAX;
	int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MAX;
	volatile int32_t t25 = 32152529;

    t25 = (((x141*x142)/x143)^x144);

    if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x146 = 482U;
	static uint32_t x147 = 862U;
	int16_t x148 = INT16_MAX;

    t26 = (((x145*x146)/x147)^x148);

    if (t26 != 61659U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x158 = -1;
	uint64_t x159 = 99LLU;
	int64_t x160 = INT64_MAX;

    t27 = (((x157*x158)/x159)^x160);

    if (t27 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x165 = -704;
	int8_t x167 = INT8_MIN;
	volatile int32_t x168 = -1;
	volatile int32_t t28 = -25505598;

    t28 = (((x165*x166)/x167)^x168);

    if (t28 != -1403) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x171 = INT8_MAX;
	static volatile int16_t x172 = INT16_MAX;
	volatile uint32_t t29 = 16562778U;

    t29 = (((x169*x170)/x171)^x172);

    if (t29 != 3348488U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x173 = INT8_MIN;
	volatile int16_t x175 = -1;
	int16_t x176 = -1;
	volatile int32_t t30 = -22307;

    t30 = (((x173*x174)/x175)^x176);

    if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x177 = 2254U;
	uint64_t x178 = UINT64_MAX;
	uint8_t x180 = 120U;
	uint64_t t31 = 18873546LLU;

    t31 = (((x177*x178)/x179)^x180);

    if (t31 != 6148914691236516382LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x181 = INT8_MIN;
	static int16_t x182 = -1;
	static int16_t x183 = INT16_MIN;
	int32_t x184 = -1;
	static int32_t t32 = 0;

    t32 = (((x181*x182)/x183)^x184);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x195 = 35U;
	uint64_t x196 = UINT64_MAX;
	uint64_t t33 = 3742826287185LLU;

    t33 = (((x193*x194)/x195)^x196);

    if (t33 != 238737LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x205 = 255094053U;
	volatile int64_t x207 = INT64_MIN;
	uint16_t x208 = 112U;

    t34 = (((x205*x206)/x207)^x208);

    if (t34 != 113LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x209 = 215U;
	int64_t x211 = 7384370726LL;
	static int16_t x212 = INT16_MIN;
	int64_t t35 = 7LL;

    t35 = (((x209*x210)/x211)^x212);

    if (t35 != -32768LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x213 = -149472;
	uint64_t x214 = 1402120LLU;
	uint64_t x216 = 45275LLU;

    t36 = (((x213*x214)/x215)^x216);

    if (t36 != 45274LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x221 = -1;
	int8_t x222 = INT8_MIN;
	uint8_t x223 = UINT8_MAX;
	int16_t x224 = INT16_MIN;
	int32_t t37 = 41555;

    t37 = (((x221*x222)/x223)^x224);

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x225 = INT8_MAX;
	static volatile uint16_t x226 = 3510U;
	int8_t x227 = 7;
	uint16_t x228 = UINT16_MAX;

    t38 = (((x225*x226)/x227)^x228);

    if (t38 != 1854) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x230 = INT16_MAX;
	volatile uint32_t t39 = 275004U;

    t39 = (((x229*x230)/x231)^x232);

    if (t39 != 91603U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x233 = 3293294624485543LLU;
	volatile uint32_t x234 = 780U;
	static int64_t x235 = INT64_MIN;
	static int32_t x236 = -10;
	static volatile uint64_t t40 = 1481221985730281074LLU;

    t40 = (((x233*x234)/x235)^x236);

    if (t40 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x237 = 4922U;
	uint8_t x238 = 26U;
	int32_t x239 = -1649;
	int8_t x240 = 7;
	int32_t t41 = -5631459;

    t41 = (((x237*x238)/x239)^x240);

    if (t41 != -76) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x241 = INT16_MAX;
	int8_t x242 = 29;
	volatile int64_t x243 = -28770658522109LL;
	int16_t x244 = INT16_MAX;
	volatile int64_t t42 = -5447889197LL;

    t42 = (((x241*x242)/x243)^x244);

    if (t42 != 32767LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x245 = 23U;
	int32_t x246 = -1;
	int64_t x247 = 40606602LL;
	volatile int16_t x248 = INT16_MIN;
	int64_t t43 = -6893945358800LL;

    t43 = (((x245*x246)/x247)^x248);

    if (t43 != -32768LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x249 = 5659U;
	int8_t x250 = INT8_MIN;
	static int32_t x251 = INT32_MIN;
	uint64_t x252 = 13868517305LLU;
	volatile uint64_t t44 = 17367052LLU;

    t44 = (((x249*x250)/x251)^x252);

    if (t44 != 13868517305LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x253 = -366684994LL;
	int32_t x254 = INT32_MAX;
	uint8_t x255 = UINT8_MAX;
	uint32_t x256 = 128272552U;
	int64_t t45 = 11483786LL;

    t45 = (((x253*x254)/x255)^x256);

    if (t45 != -3088039219590842LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x257 = -1;
	uint16_t x258 = 483U;
	volatile int8_t x259 = INT8_MIN;

    t46 = (((x257*x258)/x259)^x260);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x265 = 9U;
	uint16_t x266 = 333U;
	int32_t t47 = -55507;

    t47 = (((x265*x266)/x267)^x268);

    if (t47 != 2996) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x275 = 37;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t48 = -1;

    t48 = (((x273*x274)/x275)^x276);

    if (t48 != 64650) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x279 = INT32_MIN;
	volatile uint64_t t49 = 52675392005LLU;

    t49 = (((x277*x278)/x279)^x280);

    if (t49 != 1399312667334412LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x282 = -5;
	volatile int64_t x283 = INT64_MAX;
	int64_t x284 = -1LL;
	volatile int64_t t50 = 1LL;

    t50 = (((x281*x282)/x283)^x284);

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x285 = INT8_MIN;
	uint16_t x287 = 2632U;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t51 = -113221;

    t51 = (((x285*x286)/x287)^x288);

    if (t51 != 65534) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x289 = -1;
	uint64_t x290 = 38815816689LLU;
	volatile uint16_t x291 = 143U;
	int64_t x292 = INT64_MIN;
	uint64_t t52 = 5738747917947434456LLU;

    t52 = (((x289*x290)/x291)^x292);

    if (t52 != 9352370246888997730LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x293 = 48964632687611LLU;
	uint8_t x296 = 100U;
	uint64_t t53 = 5227567885621379030LLU;

    t53 = (((x293*x294)/x295)^x296);

    if (t53 != 100LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x301 = 537U;
	static volatile uint64_t x303 = 127816LLU;
	volatile uint64_t t54 = 33034LLU;

    t54 = (((x301*x302)/x303)^x304);

    if (t54 != 43562535LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x305 = 3470U;
	volatile int32_t x306 = 1;
	int8_t x307 = -1;
	int32_t x308 = INT32_MAX;
	volatile int32_t t55 = -1;

    t55 = (((x305*x306)/x307)^x308);

    if (t55 != -2147480179) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x309 = UINT64_MAX;
	volatile int8_t x310 = INT8_MIN;
	volatile int16_t x311 = INT16_MAX;
	uint64_t t56 = 625445LLU;

    t56 = (((x309*x310)/x311)^x312);

    if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x313 = UINT16_MAX;
	static int32_t x315 = 40986676;
	static int8_t x316 = -1;
	int32_t t57 = 59;

    t57 = (((x313*x314)/x315)^x316);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x317 = 247;
	uint8_t x318 = UINT8_MAX;
	int16_t x319 = 30;
	int64_t x320 = -798255LL;
	static int64_t t58 = -32575510835LL;

    t58 = (((x317*x318)/x319)^x320);

    if (t58 != -796190LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x325 = 7U;
	volatile uint32_t x326 = UINT32_MAX;
	uint8_t x327 = 17U;
	static int32_t x328 = INT32_MIN;
	volatile uint32_t t59 = 217U;

    t59 = (((x325*x326)/x327)^x328);

    if (t59 != 2400128782U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x329 = -1LL;
	int32_t x330 = INT32_MAX;
	uint16_t x331 = 1U;
	volatile uint64_t t60 = 1495LLU;

    t60 = (((x329*x330)/x331)^x332);

    if (t60 != 2147483646LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x333 = 844555U;
	int32_t x334 = -1;
	uint8_t x335 = 50U;
	static int64_t x336 = INT64_MIN;
	int64_t t61 = 18616071LL;

    t61 = (((x333*x334)/x335)^x336);

    if (t61 != -9223372036768893354LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x341 = -1;
	volatile int16_t x342 = -1;
	int64_t x343 = INT64_MIN;
	int16_t x344 = 0;

    t62 = (((x341*x342)/x343)^x344);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MAX;
	static int16_t x348 = INT16_MAX;
	volatile int32_t t63 = -125096;

    t63 = (((x345*x346)/x347)^x348);

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int32_t x350 = -1;
	uint16_t x351 = UINT16_MAX;
	int16_t x352 = -228;

    t64 = (((x349*x350)/x351)^x352);

    if (t64 != -228) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x354 = 3242U;
	int64_t x355 = INT64_MAX;
	static volatile int8_t x356 = -1;

    t65 = (((x353*x354)/x355)^x356);

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x358 = 52U;
	static int16_t x359 = -1;
	int16_t x360 = 0;
	volatile int32_t t66 = -1865;

    t66 = (((x357*x358)/x359)^x360);

    if (t66 != -624) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x361 = -15164197;
	volatile int64_t x362 = 1LL;
	int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MIN;
	static volatile int64_t t67 = 135151LL;

    t67 = (((x361*x362)/x363)^x364);

    if (t67 != -2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x369 = -1;
	uint32_t x370 = UINT32_MAX;
	static uint8_t x371 = 52U;
	static uint32_t t68 = 618062386U;

    t68 = (((x369*x370)/x371)^x372);

    if (t68 != 255U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x373 = 7U;
	static int16_t x374 = INT16_MIN;
	int32_t x375 = 2372166;
	int8_t x376 = -38;

    t69 = (((x373*x374)/x375)^x376);

    if (t69 != -38) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x377 = -1LL;
	int8_t x380 = INT8_MIN;
	static int64_t t70 = -996LL;

    t70 = (((x377*x378)/x379)^x380);

    if (t70 != -4294967169LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x381 = -1;
	int32_t x383 = -1;
	static uint8_t x384 = 2U;
	int64_t t71 = 760652743972230LL;

    t71 = (((x381*x382)/x383)^x384);

    if (t71 != -39LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x385 = 1142235619489436LLU;
	int32_t x386 = -1;
	uint32_t x388 = UINT32_MAX;
	volatile uint64_t t72 = 5883LLU;

    t72 = (((x385*x386)/x387)^x388);

    if (t72 != 145240963207286668LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x389 = -59;
	static uint8_t x390 = 6U;
	int16_t x391 = INT16_MIN;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t73 = -1;

    t73 = (((x389*x390)/x391)^x392);

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x393 = -59;
	static int16_t x394 = INT16_MIN;
	static uint8_t x395 = UINT8_MAX;
	uint64_t x396 = 0LLU;
	static uint64_t t74 = 24698188716864636LLU;

    t74 = (((x393*x394)/x395)^x396);

    if (t74 != 7581LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x397 = -1;
	static int64_t x399 = -1LL;
	int64_t x400 = -20358996LL;
	uint64_t t75 = 231503474061107LLU;

    t75 = (((x397*x398)/x399)^x400);

    if (t75 != 18446744073689192620LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x401 = -24;
	int16_t x404 = -1;

    t76 = (((x401*x402)/x403)^x404);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x409 = 53U;
	int32_t x410 = 9979;
	uint64_t x411 = 1282LLU;
	int16_t x412 = INT16_MAX;
	static uint64_t t77 = 598233766LLU;

    t77 = (((x409*x410)/x411)^x412);

    if (t77 != 32355LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x413 = -1;
	volatile uint32_t x414 = 1755U;
	static uint64_t x415 = UINT64_MAX;
	volatile uint64_t x416 = 1538543536LLU;
	volatile uint64_t t78 = 15991LLU;

    t78 = (((x413*x414)/x415)^x416);

    if (t78 != 1538543536LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x422 = 248U;
	uint32_t x423 = UINT32_MAX;
	int32_t x424 = -113900472;
	static volatile uint32_t t79 = 402293908U;

    t79 = (((x421*x422)/x423)^x424);

    if (t79 != 4181066824U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x427 = INT32_MIN;
	uint32_t t80 = 142170U;

    t80 = (((x425*x426)/x427)^x428);

    if (t80 != 4294967294U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x433 = -1;
	int8_t x434 = INT8_MIN;
	volatile uint16_t x436 = UINT16_MAX;
	volatile int32_t t81 = -1408;

    t81 = (((x433*x434)/x435)^x436);

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x437 = 3428U;
	int32_t x438 = -245339;
	static volatile int8_t x439 = INT8_MAX;
	volatile uint32_t t82 = 2372267U;

    t82 = (((x437*x438)/x439)^x440);

    if (t82 != 26818695U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x441 = -35;
	int16_t x442 = -1;
	int32_t x443 = INT32_MIN;
	int8_t x444 = -1;
	volatile int32_t t83 = 17738659;

    t83 = (((x441*x442)/x443)^x444);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x445 = 7LLU;
	volatile int64_t x446 = INT64_MIN;
	uint32_t x447 = 1U;
	int32_t x448 = INT32_MIN;
	uint64_t t84 = 236821740LLU;

    t84 = (((x445*x446)/x447)^x448);

    if (t84 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x449 = INT8_MAX;
	volatile int32_t x451 = INT32_MAX;
	static volatile int32_t t85 = -5166;

    t85 = (((x449*x450)/x451)^x452);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x457 = -1;
	uint64_t x458 = UINT64_MAX;
	volatile int16_t x459 = INT16_MIN;
	volatile int64_t x460 = -1LL;
	uint64_t t86 = UINT64_MAX;

    t86 = (((x457*x458)/x459)^x460);

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x466 = -1;
	volatile int64_t x467 = INT64_MAX;
	int64_t t87 = 7960LL;

    t87 = (((x465*x466)/x467)^x468);

    if (t87 != 893LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x469 = -1;
	int64_t x471 = INT64_MIN;
	int64_t x472 = -1LL;

    t88 = (((x469*x470)/x471)^x472);

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x486 = 535U;
	int8_t x487 = INT8_MIN;
	int32_t x488 = INT32_MIN;
	volatile uint32_t t89 = 24437U;

    t89 = (((x485*x486)/x487)^x488);

    if (t89 != 2147483648U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x489 = INT16_MIN;
	uint32_t x490 = 504U;
	int32_t x491 = -6;
	int16_t x492 = INT16_MIN;
	volatile uint32_t t90 = 31961548U;

    t90 = (((x489*x490)/x491)^x492);

    if (t90 != 4294934528U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x493 = INT32_MAX;
	int32_t x494 = -1;
	uint16_t x495 = UINT16_MAX;
	uint16_t x496 = 13U;
	static volatile int32_t t91 = -926792967;

    t91 = (((x493*x494)/x495)^x496);

    if (t91 != -32755) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x497 = 6;
	volatile int16_t x498 = -223;
	uint8_t x499 = 31U;
	uint64_t x500 = 67583615797567623LLU;
	volatile uint64_t t92 = 224LLU;

    t92 = (((x497*x498)/x499)^x500);

    if (t92 != 18379160457911983954LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x501 = 244950U;
	static int8_t x502 = 0;
	static int8_t x503 = -25;
	static uint32_t x504 = 0U;
	volatile uint32_t t93 = 1323731395U;

    t93 = (((x501*x502)/x503)^x504);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x506 = 835551256LLU;
	static int16_t x507 = INT16_MAX;
	static uint16_t x508 = 37U;

    t94 = (((x505*x506)/x507)^x508);

    if (t94 != 1671128046LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x513 = -3406;
	int64_t x515 = INT64_MIN;
	volatile int16_t x516 = INT16_MAX;
	volatile int64_t t95 = 32747690206241226LL;

    t95 = (((x513*x514)/x515)^x516);

    if (t95 != 32767LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x525 = UINT32_MAX;
	int8_t x526 = INT8_MIN;
	uint16_t x528 = 29U;
	volatile uint32_t t96 = 3097759U;

    t96 = (((x525*x526)/x527)^x528);

    if (t96 != 29U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x529 = UINT16_MAX;
	static uint64_t x531 = 43088643793523389LLU;
	volatile uint32_t x532 = 87U;
	static volatile uint64_t t97 = 468446295LLU;

    t97 = (((x529*x530)/x531)^x532);

    if (t97 != 87LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x533 = 3U;
	int8_t x534 = 4;
	int8_t x535 = INT8_MAX;
	int16_t x536 = 317;
	volatile int32_t t98 = -917;

    t98 = (((x533*x534)/x535)^x536);

    if (t98 != 317) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x538 = 51U;
	static uint32_t x539 = 7U;
	uint32_t x540 = 105U;
	uint32_t t99 = 15403619U;

    t99 = (((x537*x538)/x539)^x540);

    if (t99 != 103U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x545 = INT64_MIN;
	volatile int32_t x546 = 0;
	int16_t x547 = INT16_MIN;
	int8_t x548 = INT8_MIN;
	volatile int64_t t100 = 958721857LL;

    t100 = (((x545*x546)/x547)^x548);

    if (t100 != -128LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x549 = UINT16_MAX;
	int8_t x550 = INT8_MIN;
	int16_t x551 = INT16_MIN;

    t101 = (((x549*x550)/x551)^x552);

    if (t101 != -2147483393) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x554 = INT16_MIN;
	int8_t x556 = INT8_MIN;
	static int64_t t102 = 458209055398065LL;

    t102 = (((x553*x554)/x555)^x556);

    if (t102 != 10966LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x557 = -188841000501538LL;
	volatile uint8_t x558 = UINT8_MAX;
	int16_t x559 = INT16_MIN;
	int64_t x560 = 16498571275570LL;
	static int64_t t103 = 0LL;

    t103 = (((x557*x558)/x559)^x560);

    if (t103 != 15768822185394LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x566 = 0U;
	uint64_t x567 = UINT64_MAX;
	static uint64_t x568 = 2874LLU;

    t104 = (((x565*x566)/x567)^x568);

    if (t104 != 2874LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x570 = UINT8_MAX;
	uint8_t x572 = 67U;
	uint32_t t105 = 30U;

    t105 = (((x569*x570)/x571)^x572);

    if (t105 != 67U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x573 = UINT64_MAX;
	int8_t x574 = -21;
	uint64_t x575 = 1907LLU;
	static uint16_t x576 = 9U;
	static uint64_t t106 = 76231LLU;

    t106 = (((x573*x574)/x575)^x576);

    if (t106 != 9LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x577 = -1;
	volatile int16_t x578 = INT16_MAX;
	uint16_t x579 = 4509U;
	static volatile int32_t t107 = -439359;

    t107 = (((x577*x578)/x579)^x580);

    if (t107 != -2147483642) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x589 = -1424;
	volatile uint8_t x591 = 1U;
	int16_t x592 = INT16_MIN;
	static volatile uint32_t t108 = 16470482U;

    t108 = (((x589*x590)/x591)^x592);

    if (t108 != 4294935952U) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x593 = UINT64_MAX;
	uint64_t x594 = UINT64_MAX;
	int64_t x596 = INT64_MAX;

    t109 = (((x593*x594)/x595)^x596);

    if (t109 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x597 = -1;
	int32_t x598 = -1;
	volatile int64_t x599 = INT64_MIN;
	int8_t x600 = 14;
	int64_t t110 = 1339LL;

    t110 = (((x597*x598)/x599)^x600);

    if (t110 != 14LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x601 = 12078235402LL;
	volatile uint64_t x602 = 0LLU;
	int32_t x603 = -1;
	int64_t x604 = -574633LL;

    t111 = (((x601*x602)/x603)^x604);

    if (t111 != 18446744073708976983LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x605 = 584;
	uint32_t x606 = 4157620U;
	int8_t x607 = -1;
	static int16_t x608 = -2;
	static volatile uint32_t t112 = 378327786U;

    t112 = (((x605*x606)/x607)^x608);

    if (t112 != 4294967294U) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x609 = 27U;
	int8_t x610 = INT8_MIN;
	volatile int32_t t113 = -154909649;

    t113 = (((x609*x610)/x611)^x612);

    if (t113 != 101) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x613 = INT32_MIN;
	uint32_t x614 = 0U;
	volatile uint8_t x615 = UINT8_MAX;
	static volatile int32_t x616 = INT32_MIN;
	volatile uint32_t t114 = 304159560U;

    t114 = (((x613*x614)/x615)^x616);

    if (t114 != 2147483648U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x619 = INT16_MIN;
	uint8_t x620 = 1U;

    t115 = (((x617*x618)/x619)^x620);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x621 = INT8_MIN;
	static int16_t x622 = INT16_MIN;
	volatile int32_t t116 = -109262;

    t116 = (((x621*x622)/x623)^x624);

    if (t116 != 127) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int32_t x629 = 0;
	int16_t x630 = INT16_MIN;
	uint64_t t117 = 14152935072LLU;

    t117 = (((x629*x630)/x631)^x632);

    if (t117 != 2153896LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x633 = -248;
	uint64_t x635 = 380275217611178LLU;
	uint64_t t118 = 6037036140537LLU;

    t118 = (((x633*x634)/x635)^x636);

    if (t118 != 48496LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x637 = -1;
	int32_t x639 = INT32_MAX;
	int64_t x640 = -1LL;
	volatile int64_t t119 = -147385634680958702LL;

    t119 = (((x637*x638)/x639)^x640);

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x641 = 0;
	static int64_t x642 = -1LL;
	static int64_t x643 = INT64_MAX;
	int8_t x644 = INT8_MIN;

    t120 = (((x641*x642)/x643)^x644);

    if (t120 != -128LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x645 = 103895635093447017LLU;
	int16_t x646 = INT16_MAX;
	int8_t x647 = -6;
	volatile int16_t x648 = -1;

    t121 = (((x645*x646)/x647)^x648);

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x649 = INT64_MAX;
	int8_t x650 = -1;
	int64_t x651 = INT64_MIN;
	volatile uint8_t x652 = UINT8_MAX;

    t122 = (((x649*x650)/x651)^x652);

    if (t122 != 255LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x653 = 66U;
	int32_t x654 = 3842506;
	uint64_t x655 = UINT64_MAX;
	int32_t x656 = INT32_MIN;
	static volatile uint64_t t123 = 9614655193502817LLU;

    t123 = (((x653*x654)/x655)^x656);

    if (t123 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x657 = 12U;
	volatile uint64_t x658 = 28559562LLU;
	int64_t x659 = INT64_MIN;
	volatile uint64_t t124 = 102652961070718525LLU;

    t124 = (((x657*x658)/x659)^x660);

    if (t124 != 18446744073639770459LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x665 = INT16_MIN;
	volatile int16_t x666 = INT16_MIN;
	int8_t x667 = -1;
	uint32_t x668 = 11U;
	static uint32_t t125 = 95980U;

    t125 = (((x665*x666)/x667)^x668);

    if (t125 != 3221225483U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x669 = -1;
	uint8_t x670 = 107U;
	uint64_t x671 = UINT64_MAX;
	uint8_t x672 = 29U;

    t126 = (((x669*x670)/x671)^x672);

    if (t126 != 29LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x673 = INT8_MIN;
	int8_t x674 = 2;
	int64_t x675 = 86578831346113545LL;
	int8_t x676 = -1;

    t127 = (((x673*x674)/x675)^x676);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x681 = UINT32_MAX;
	volatile int8_t x682 = -1;
	volatile uint32_t x683 = 15277U;
	static int8_t x684 = INT8_MAX;

    t128 = (((x681*x682)/x683)^x684);

    if (t128 != 127U) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x685 = UINT64_MAX;
	uint8_t x686 = UINT8_MAX;
	static int8_t x687 = INT8_MAX;
	int16_t x688 = -7;
	volatile uint64_t t129 = 6326338750179LLU;

    t129 = (((x685*x686)/x687)^x688);

    if (t129 != 18301494120373255929LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x689 = INT64_MAX;
	volatile uint32_t x692 = 275200565U;
	int64_t t130 = 55022803LL;

    t130 = (((x689*x690)/x691)^x692);

    if (t130 != 275200565LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x693 = INT8_MAX;
	uint8_t x694 = 2U;
	int8_t x695 = INT8_MIN;
	int64_t x696 = INT64_MIN;

    t131 = (((x693*x694)/x695)^x696);

    if (t131 != INT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x697 = INT8_MIN;
	int32_t x698 = -1;
	int8_t x699 = -27;
	uint16_t x700 = 2524U;
	int32_t t132 = 7864;

    t132 = (((x697*x698)/x699)^x700);

    if (t132 != -2528) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x705 = 4U;
	int64_t x706 = -26LL;
	uint64_t x707 = UINT64_MAX;
	int64_t x708 = -1LL;
	volatile uint64_t t133 = UINT64_MAX;

    t133 = (((x705*x706)/x707)^x708);

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x713 = -7215504529LL;
	uint16_t x714 = 107U;
	static volatile uint64_t x715 = UINT64_MAX;
	int32_t x716 = -27;
	uint64_t t134 = 241359595LLU;

    t134 = (((x713*x714)/x715)^x716);

    if (t134 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x717 = -1;
	static uint64_t x719 = 86910LLU;
	int32_t x720 = -1;
	volatile uint64_t t135 = 1LLU;

    t135 = (((x717*x718)/x719)^x720);

    if (t135 != 18446744073709503450LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x721 = -1;
	uint64_t x723 = 259889552005LLU;
	volatile uint64_t t136 = UINT64_MAX;

    t136 = (((x721*x722)/x723)^x724);

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x725 = -11;
	int8_t x726 = -1;
	int64_t x727 = -96315076291552565LL;
	uint32_t x728 = 1964U;

    t137 = (((x725*x726)/x727)^x728);

    if (t137 != 1964LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x729 = INT8_MAX;
	int16_t x732 = -1;

    t138 = (((x729*x730)/x731)^x732);

    if (t138 != -966217) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x733 = INT8_MIN;
	uint32_t x734 = 2188146U;
	int32_t x735 = INT32_MIN;

    t139 = (((x733*x734)/x735)^x736);

    if (t139 != 4294967292U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x737 = 31U;
	uint32_t x738 = 7U;
	static int64_t x740 = INT64_MIN;
	volatile int64_t t140 = INT64_MIN;

    t140 = (((x737*x738)/x739)^x740);

    if (t140 != INT64_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x741 = INT8_MAX;
	uint16_t x744 = 8U;
	uint32_t t141 = 64940277U;

    t141 = (((x741*x742)/x743)^x744);

    if (t141 != 46U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x753 = UINT32_MAX;
	int16_t x754 = 0;
	int64_t x755 = 247626154680LL;
	int64_t t142 = INT64_MAX;

    t142 = (((x753*x754)/x755)^x756);

    if (t142 != INT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x757 = 1U;
	uint16_t x758 = UINT16_MAX;
	static int8_t x759 = 1;
	int32_t x760 = INT32_MIN;

    t143 = (((x757*x758)/x759)^x760);

    if (t143 != -2147418113) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x761 = -1LL;
	volatile int64_t x762 = -1LL;
	volatile uint16_t x763 = 1U;
	int8_t x764 = INT8_MAX;

    t144 = (((x761*x762)/x763)^x764);

    if (t144 != 126LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x765 = -1LL;
	volatile int32_t x766 = INT32_MIN;
	static int8_t x767 = -1;

    t145 = (((x765*x766)/x767)^x768);

    if (t145 != -2147450881LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x773 = -1;
	int32_t x774 = 31174296;
	int8_t x775 = INT8_MAX;
	volatile uint16_t x776 = 709U;

    t146 = (((x773*x774)/x775)^x776);

    if (t146 != -244765) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x778 = UINT8_MAX;
	int32_t x779 = -564380;
	uint32_t x780 = 9230U;
	uint32_t t147 = 30U;

    t147 = (((x777*x778)/x779)^x780);

    if (t147 != 9230U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x789 = 34329LLU;
	volatile int16_t x790 = INT16_MIN;
	volatile uint64_t t148 = 11614397685827085LLU;

    t148 = (((x789*x790)/x791)^x792);

    if (t148 != 255LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x797 = 8905048982LLU;
	int8_t x799 = INT8_MIN;
	int8_t x800 = 1;
	static uint64_t t149 = 549846468LLU;

    t149 = (((x797*x798)/x799)^x800);

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x801 = 2617LL;
	uint16_t x803 = UINT16_MAX;
	volatile uint32_t x804 = 204253U;

    t150 = (((x801*x802)/x803)^x804);

    if (t150 != 204181LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x809 = -68LL;
	uint8_t x811 = 107U;
	int64_t x812 = -1LL;
	volatile int64_t t151 = -297202847874416LL;

    t151 = (((x809*x810)/x811)^x812);

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x813 = INT8_MAX;
	static int8_t x815 = -1;
	int8_t x816 = INT8_MIN;
	uint32_t t152 = 48774376U;

    t152 = (((x813*x814)/x815)^x816);

    if (t152 != 4294967168U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x817 = UINT64_MAX;
	int8_t x818 = INT8_MIN;
	uint16_t x819 = 368U;
	static uint8_t x820 = 33U;

    t153 = (((x817*x818)/x819)^x820);

    if (t153 != 33LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x825 = 7U;
	uint32_t x827 = 768737981U;
	int64_t x828 = INT64_MAX;
	volatile int64_t t154 = INT64_MAX;

    t154 = (((x825*x826)/x827)^x828);

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x833 = 1U;
	int64_t x834 = INT64_MIN;
	uint16_t x835 = 10U;
	volatile int64_t t155 = 3550302734111LL;

    t155 = (((x833*x834)/x835)^x836);

    if (t155 != -922337203685477596LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x837 = INT32_MIN;
	uint64_t x838 = 92281LLU;
	static volatile uint8_t x840 = 27U;
	volatile uint64_t t156 = 541033906976064859LLU;

    t156 = (((x837*x838)/x839)^x840);

    if (t156 != 562961085902595LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x842 = 27;
	int32_t x843 = INT32_MIN;
	static volatile int64_t x844 = INT64_MIN;

    t157 = (((x841*x842)/x843)^x844);

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x845 = 213U;
	volatile uint16_t x846 = 1U;
	int64_t x848 = -1LL;
	volatile int64_t t158 = -2882359906LL;

    t158 = (((x845*x846)/x847)^x848);

    if (t158 != 212LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x849 = 6807LLU;
	uint64_t x850 = 260197940LLU;
	int64_t x852 = -19535LL;
	uint64_t t159 = 69599108LLU;

    t159 = (((x849*x850)/x851)^x852);

    if (t159 != 18446744073709532081LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x853 = -55783;
	int16_t x855 = -1;
	int16_t x856 = 13187;
	static volatile int32_t t160 = -212;

    t160 = (((x853*x854)/x855)^x856);

    if (t160 != 2522648) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x861 = INT8_MIN;
	int16_t x862 = INT16_MIN;
	static int16_t x863 = INT16_MIN;
	int16_t x864 = INT16_MAX;
	volatile int32_t t161 = 3902782;

    t161 = (((x861*x862)/x863)^x864);

    if (t161 != -32641) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x865 = -1;
	int8_t x866 = INT8_MAX;
	uint32_t x867 = UINT32_MAX;
	static volatile uint16_t x868 = UINT16_MAX;
	static volatile uint32_t t162 = 26331U;

    t162 = (((x865*x866)/x867)^x868);

    if (t162 != 65535U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x869 = UINT16_MAX;
	static int64_t x870 = -1LL;
	static volatile int64_t x871 = INT64_MIN;
	static int16_t x872 = INT16_MAX;

    t163 = (((x869*x870)/x871)^x872);

    if (t163 != 32767LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x873 = INT8_MIN;
	uint8_t x876 = 45U;
	int64_t t164 = -885LL;

    t164 = (((x873*x874)/x875)^x876);

    if (t164 != -83LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x877 = UINT32_MAX;
	int8_t x878 = -3;
	int8_t x879 = INT8_MIN;
	volatile uint8_t x880 = 5U;
	uint32_t t165 = 516706U;

    t165 = (((x877*x878)/x879)^x880);

    if (t165 != 5U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x881 = 6855;
	int8_t x883 = -1;
	static int16_t x884 = -39;
	int32_t t166 = 3639849;

    t166 = (((x881*x882)/x883)^x884);

    if (t166 != 23492050) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x897 = INT8_MAX;
	uint64_t x898 = UINT64_MAX;
	volatile int64_t x899 = INT64_MAX;
	static uint64_t x900 = UINT64_MAX;
	uint64_t t167 = 5424695858LLU;

    t167 = (((x897*x898)/x899)^x900);

    if (t167 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x901 = -1;
	int8_t x902 = INT8_MIN;
	static int32_t t168 = -108566833;

    t168 = (((x901*x902)/x903)^x904);

    if (t168 != -32768) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x905 = INT8_MIN;
	uint64_t x906 = 245167720672905561LLU;
	uint64_t x908 = 97367731140676982LLU;

    t169 = (((x905*x906)/x907)^x908);

    if (t169 != 97367731140676982LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint32_t x913 = 30521749U;
	int32_t x915 = INT32_MAX;
	static uint8_t x916 = 12U;

    t170 = (((x913*x914)/x915)^x916);

    if (t170 != 12U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x917 = -32;
	volatile int16_t x918 = INT16_MIN;
	volatile int16_t x919 = -59;
	int64_t x920 = INT64_MIN;
	volatile int64_t t171 = -158LL;

    t171 = (((x917*x918)/x919)^x920);

    if (t171 != 9223372036854758036LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x926 = -305;
	volatile int64_t x927 = INT64_MIN;
	uint64_t x928 = 1850166LLU;
	uint64_t t172 = 32192643LLU;

    t172 = (((x925*x926)/x927)^x928);

    if (t172 != 1850166LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x930 = 42983835U;
	int8_t x931 = INT8_MIN;
	uint32_t t173 = UINT32_MAX;

    t173 = (((x929*x930)/x931)^x932);

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x933 = -1;
	static uint32_t x934 = UINT32_MAX;
	int16_t x935 = -82;
	uint32_t t174 = 203U;

    t174 = (((x933*x934)/x935)^x936);

    if (t174 != 4294952533U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x939 = INT8_MIN;
	int64_t x940 = -34790490295684LL;
	volatile uint64_t t175 = 2922429LLU;

    t175 = (((x937*x938)/x939)^x940);

    if (t175 != 18446709283219255932LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x941 = UINT16_MAX;
	uint16_t x942 = 755U;
	uint64_t x943 = 601LLU;
	int64_t x944 = INT64_MIN;
	uint64_t t176 = 69236LLU;

    t176 = (((x941*x942)/x943)^x944);

    if (t176 != 9223372036854858135LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x945 = -1LL;
	volatile int8_t x946 = INT8_MIN;
	int8_t x948 = INT8_MIN;
	int64_t t177 = -658802LL;

    t177 = (((x945*x946)/x947)^x948);

    if (t177 != -128LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x949 = INT8_MIN;
	int64_t x950 = -1LL;
	static uint16_t x952 = UINT16_MAX;
	static int64_t t178 = -16382990946LL;

    t178 = (((x949*x950)/x951)^x952);

    if (t178 != 65535LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x953 = 42;
	uint32_t x956 = UINT32_MAX;

    t179 = (((x953*x954)/x955)^x956);

    if (t179 != 4294967295LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x957 = UINT8_MAX;
	int64_t x958 = -1LL;
	uint32_t x959 = 2994436U;
	static volatile uint32_t x960 = 3U;
	volatile int64_t t180 = -39868709LL;

    t180 = (((x957*x958)/x959)^x960);

    if (t180 != 3LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x961 = 0;
	int8_t x962 = -1;
	static volatile int32_t x964 = INT32_MIN;
	uint32_t t181 = 1479677165U;

    t181 = (((x961*x962)/x963)^x964);

    if (t181 != 2147483648U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x965 = 11749U;
	volatile uint16_t x966 = 21U;
	uint16_t x967 = 405U;
	int64_t x968 = INT64_MIN;
	static volatile int64_t t182 = 210LL;

    t182 = (((x965*x966)/x967)^x968);

    if (t182 != -9223372036854775199LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x970 = INT32_MIN;
	int64_t x971 = INT64_MAX;
	int64_t x972 = 851275918609LL;
	static volatile uint64_t t183 = 4081LLU;

    t183 = (((x969*x970)/x971)^x972);

    if (t183 != 851275918608LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x973 = INT8_MAX;
	int64_t x974 = 127377986166230LL;
	uint32_t x975 = UINT32_MAX;
	static int8_t x976 = INT8_MIN;
	int64_t t184 = -229LL;

    t184 = (((x973*x974)/x975)^x976);

    if (t184 != -3766426LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x977 = 2LLU;
	volatile int32_t x978 = -1;
	int8_t x980 = INT8_MIN;
	volatile uint64_t t185 = 1037LLU;

    t185 = (((x977*x978)/x979)^x980);

    if (t185 != 18204023756950215309LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x982 = 56601571U;
	uint64_t x983 = 64748505LLU;
	volatile uint64_t t186 = 655645710337602154LLU;

    t186 = (((x981*x982)/x983)^x984);

    if (t186 != 18446744073709528584LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x986 = INT16_MAX;
	int32_t x988 = INT32_MAX;

    t187 = (((x985*x986)/x987)^x988);

    if (t187 != -2147483391) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x989 = INT16_MIN;
	static int16_t x990 = INT16_MIN;
	static int16_t x991 = 94;
	uint32_t x992 = 92052688U;
	volatile uint32_t t188 = 13769326U;

    t188 = (((x989*x990)/x991)^x992);

    if (t188 != 97702033U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x994 = INT8_MIN;
	uint64_t x995 = UINT64_MAX;
	volatile int32_t x996 = INT32_MIN;
	static volatile uint64_t t189 = 14770220620412LLU;

    t189 = (((x993*x994)/x995)^x996);

    if (t189 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int8_t x1001 = -1;
	int8_t x1002 = INT8_MAX;
	int16_t x1003 = 11;
	uint64_t x1004 = UINT64_MAX;
	volatile uint64_t t190 = 158748017LLU;

    t190 = (((x1001*x1002)/x1003)^x1004);

    if (t190 != 10LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x1005 = 1;
	int16_t x1006 = INT16_MAX;
	int64_t x1007 = -182981497455139994LL;
	uint64_t x1008 = 3585774855237151LLU;
	volatile uint64_t t191 = 1354978201LLU;

    t191 = (((x1005*x1006)/x1007)^x1008);

    if (t191 != 3585774855237151LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1014 = 6538002851LL;
	uint32_t x1015 = 187159351U;
	uint8_t x1016 = 58U;
	int64_t t192 = 183882LL;

    t192 = (((x1013*x1014)/x1015)^x1016);

    if (t192 != -4429LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1017 = -74;
	static int16_t x1018 = -1;

    t193 = (((x1017*x1018)/x1019)^x1020);

    if (t193 != -32768) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1022 = -1;
	int16_t x1023 = -149;
	uint64_t x1024 = 130459422688512859LLU;
	static volatile uint64_t t194 = 16398LLU;

    t194 = (((x1021*x1022)/x1023)^x1024);

    if (t194 != 130459422688512896LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1025 = 14U;
	uint16_t x1027 = UINT16_MAX;
	uint32_t x1028 = UINT32_MAX;
	volatile uint32_t t195 = UINT32_MAX;

    t195 = (((x1025*x1026)/x1027)^x1028);

    if (t195 != UINT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1029 = INT8_MAX;
	int32_t x1031 = INT32_MIN;
	static int16_t x1032 = -1804;

    t196 = (((x1029*x1030)/x1031)^x1032);

    if (t196 != -1804) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1033 = -235;
	volatile int32_t t197 = -342752758;

    t197 = (((x1033*x1034)/x1035)^x1036);

    if (t197 != 32759) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1037 = 134U;
	static int8_t x1038 = INT8_MIN;
	static int8_t x1039 = -12;
	int16_t x1040 = INT16_MIN;
	volatile int32_t t198 = 23291433;

    t198 = (((x1037*x1038)/x1039)^x1040);

    if (t198 != -31339) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1041 = INT8_MIN;
	volatile uint32_t x1042 = 12U;
	static int32_t x1044 = -470580354;

    t199 = (((x1041*x1042)/x1043)^x1044);

    if (t199 != 3824386942U) { NG(); } else { ; }
	
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

