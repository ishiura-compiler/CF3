#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
volatile int32_t t0 = -49723;
uint32_t x12 = 50288U;
volatile int16_t x16 = INT16_MIN;
static int32_t t3 = -353575;
int32_t t4 = 824408271;
int16_t x28 = 47;
uint16_t x29 = 265U;
int8_t x34 = INT8_MAX;
int8_t x36 = INT8_MIN;
static volatile int32_t t8 = 31401;
static uint64_t x38 = 480693579542969134LLU;
volatile int8_t x40 = INT8_MAX;
int64_t x44 = INT64_MIN;
volatile int64_t x64 = -1LL;
int32_t t13 = 368745496;
int32_t x68 = -1;
int32_t t14 = 372;
uint32_t x86 = UINT32_MAX;
int32_t x87 = INT32_MAX;
static volatile int32_t t18 = 576672;
uint16_t x89 = UINT16_MAX;
static uint64_t x91 = 31LLU;
static volatile int16_t x92 = -1;
int8_t x94 = INT8_MIN;
uint16_t x97 = 1U;
static volatile int64_t x99 = -1LL;
int64_t x111 = 1945084218621LL;
volatile uint32_t x122 = 12363444U;
int8_t x134 = 1;
int64_t x139 = -699470556988706LL;
int32_t t30 = 24;
volatile int32_t x143 = 62124;
static int8_t x145 = INT8_MAX;
volatile uint8_t x147 = 0U;
static volatile uint32_t x149 = 724045480U;
volatile uint8_t x151 = 60U;
int16_t x153 = INT16_MIN;
static uint64_t x154 = 7LLU;
static volatile int16_t x155 = 0;
int8_t x156 = -1;
volatile int32_t t34 = 1199;
int16_t x157 = INT16_MAX;
static int32_t x158 = INT32_MAX;
int16_t x161 = -1;
static volatile int32_t t36 = -7;
uint8_t x168 = UINT8_MAX;
int32_t t38 = 1244449;
uint32_t x173 = 22445U;
uint8_t x174 = UINT8_MAX;
int64_t x175 = 5258522447288LL;
int8_t x187 = INT8_MAX;
volatile uint32_t x192 = UINT32_MAX;
int16_t x196 = INT16_MIN;
volatile int32_t t45 = -1568;
static volatile int32_t t46 = -3210;
int32_t t47 = -47101017;
volatile int8_t x211 = 2;
volatile int16_t x215 = INT16_MIN;
volatile int32_t t50 = 19;
int8_t x225 = 2;
int8_t x228 = -5;
static int8_t x229 = INT8_MIN;
int8_t x234 = -1;
volatile int32_t x235 = -1;
volatile int16_t x236 = INT16_MIN;
int32_t x247 = INT32_MIN;
static int32_t x264 = INT32_MIN;
uint16_t x267 = 14U;
int32_t t60 = -37140;
int64_t x269 = INT64_MAX;
int16_t x279 = -1;
volatile int64_t x280 = -1LL;
uint32_t x283 = 13U;
static volatile int64_t x284 = INT64_MIN;
int32_t x287 = -215;
volatile int32_t t66 = 176456;
int8_t x297 = 1;
int8_t x302 = INT8_MAX;
static volatile int32_t t69 = -23126680;
int16_t x311 = INT16_MIN;
static uint64_t x312 = 2024488540169950620LLU;
uint8_t x315 = 11U;
uint8_t x316 = 0U;
static int8_t x317 = -1;
int32_t t74 = 6280970;
static volatile uint8_t x326 = 21U;
volatile int16_t x327 = -3927;
uint32_t x329 = 1002607U;
uint16_t x332 = 27U;
int16_t x337 = INT16_MIN;
volatile int16_t x338 = INT16_MIN;
int32_t x342 = INT32_MIN;
int16_t x344 = INT16_MIN;
int32_t t78 = -59;
int64_t x345 = -1LL;
uint8_t x346 = 4U;
int32_t x349 = -1031;
int16_t x355 = 3364;
static uint32_t x363 = 9123697U;
uint64_t x365 = UINT64_MAX;
static volatile int32_t x371 = -1;
int16_t x379 = INT16_MAX;
int16_t x383 = -211;
int32_t t87 = -218563846;
int64_t x400 = INT64_MIN;
volatile int32_t t90 = -3;
static int8_t x405 = -1;
int8_t x407 = -1;
static int8_t x409 = INT8_MIN;
volatile int64_t x410 = -427095229LL;
static int32_t x417 = INT32_MAX;
int8_t x420 = INT8_MAX;
volatile int32_t x427 = -1;
static int32_t x437 = INT32_MIN;
static int32_t x441 = -60742;
uint16_t x446 = 2U;
uint32_t x448 = 79U;


void f0(void) {
	int32_t x1 = -4089637;
	int8_t x2 = INT8_MAX;
	int64_t x4 = -1LL;

	t0 = (x1<=((x2+x3)^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	int16_t x6 = INT16_MIN;
	int8_t x7 = -23;
	uint16_t x8 = 1U;
	volatile int32_t t1 = -414443;

	t1 = (x5<=((x6+x7)^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	uint32_t x10 = UINT32_MAX;
	uint64_t x11 = UINT64_MAX;
	static volatile int32_t t2 = 24941736;

	t2 = (x9<=((x10+x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 131;
	int32_t x14 = 187082;
	uint16_t x15 = 6070U;

	t3 = (x13<=((x14+x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -349863613;
	int32_t x18 = -1;
	int8_t x19 = INT8_MIN;
	static int16_t x20 = -1;

	t4 = (x17<=((x18+x19)^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	uint32_t x22 = 12U;
	uint8_t x23 = UINT8_MAX;
	volatile int64_t x24 = -16962LL;
	volatile int32_t t5 = -18218330;

	t5 = (x21<=((x22+x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -111;
	int16_t x26 = INT16_MAX;
	uint64_t x27 = 3527292076LLU;
	volatile int32_t t6 = 1290;

	t6 = (x25<=((x26+x27)^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x30 = -1;
	int64_t x31 = -1LL;
	volatile int64_t x32 = INT64_MAX;
	volatile int32_t t7 = -4192712;

	t7 = (x29<=((x30+x31)^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static volatile uint8_t x35 = UINT8_MAX;

	t8 = (x33<=((x34+x35)^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = 256817234;
	int16_t x39 = -1011;
	int32_t t9 = -6;

	t9 = (x37<=((x38+x39)^x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 2U;
	int8_t x42 = INT8_MAX;
	int16_t x43 = INT16_MIN;
	int32_t t10 = -48673170;

	t10 = (x41<=((x42+x43)^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 46U;
	int32_t x50 = INT32_MAX;
	volatile uint64_t x51 = 201167284806384LLU;
	volatile uint64_t x52 = 17547496LLU;
	int32_t t11 = -756;

	t11 = (x49<=((x50+x51)^x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	volatile uint64_t x54 = 29LLU;
	int32_t x55 = INT32_MIN;
	uint8_t x56 = 25U;
	int32_t t12 = -487383851;

	t12 = (x53<=((x54+x55)^x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x61 = 57;
	int64_t x62 = 3347300906563LL;
	static int32_t x63 = INT32_MIN;

	t13 = (x61<=((x62+x63)^x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x65 = 53U;
	int8_t x66 = 36;
	int16_t x67 = 42;

	t14 = (x65<=((x66+x67)^x68));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	int8_t x70 = -1;
	volatile int64_t x71 = INT64_MAX;
	static int32_t x72 = INT32_MIN;
	int32_t t15 = -531386;

	t15 = (x69<=((x70+x71)^x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x73 = 2515LL;
	static uint16_t x74 = 22448U;
	volatile int32_t x75 = -6;
	uint16_t x76 = 4081U;
	volatile int32_t t16 = 31;

	t16 = (x73<=((x74+x75)^x76));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x81 = INT32_MIN;
	int32_t x82 = 3;
	int8_t x83 = -8;
	int8_t x84 = 2;
	static volatile int32_t t17 = 24;

	t17 = (x81<=((x82+x83)^x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	uint16_t x88 = UINT16_MAX;

	t18 = (x85<=((x86+x87)^x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x90 = -1;
	volatile int32_t t19 = -2;

	t19 = (x89<=((x90+x91)^x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x93 = 4587LLU;
	static uint8_t x95 = 22U;
	int8_t x96 = INT8_MAX;
	static volatile int32_t t20 = 30231;

	t20 = (x93<=((x94+x95)^x96));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x98 = 0;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t21 = -80950;

	t21 = (x97<=((x98+x99)^x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	int64_t x102 = INT64_MIN;
	uint8_t x103 = 5U;
	int16_t x104 = INT16_MIN;
	int32_t t22 = 995;

	t22 = (x101<=((x102+x103)^x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = -29888;
	int8_t x106 = INT8_MIN;
	static int64_t x107 = 105476247LL;
	int32_t x108 = -1;
	static volatile int32_t t23 = 147;

	t23 = (x105<=((x106+x107)^x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x109 = INT16_MAX;
	uint32_t x110 = 5U;
	uint8_t x112 = 47U;
	static volatile int32_t t24 = 67;

	t24 = (x109<=((x110+x111)^x112));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x117 = -1LL;
	int64_t x118 = INT64_MIN;
	volatile int32_t x119 = 2;
	static int16_t x120 = -1;
	volatile int32_t t25 = 3;

	t25 = (x117<=((x118+x119)^x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = INT16_MIN;
	int16_t x123 = -4;
	static int8_t x124 = INT8_MAX;
	int32_t t26 = 23856871;

	t26 = (x121<=((x122+x123)^x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x125 = INT64_MAX;
	uint8_t x126 = 0U;
	uint32_t x127 = 933183081U;
	int8_t x128 = 0;
	volatile int32_t t27 = 1;

	t27 = (x125<=((x126+x127)^x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = INT32_MIN;
	volatile int8_t x130 = INT8_MAX;
	int8_t x131 = INT8_MAX;
	uint16_t x132 = 1U;
	static int32_t t28 = 6982;

	t28 = (x129<=((x130+x131)^x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x133 = INT64_MIN;
	static volatile int8_t x135 = INT8_MIN;
	volatile int32_t x136 = INT32_MIN;
	volatile int32_t t29 = 8;

	t29 = (x133<=((x134+x135)^x136));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x137 = INT32_MIN;
	uint32_t x138 = 108U;
	uint64_t x140 = 905506LLU;

	t30 = (x137<=((x138+x139)^x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x141 = 587765;
	uint16_t x142 = 21U;
	int64_t x144 = INT64_MIN;
	int32_t t31 = 128811325;

	t31 = (x141<=((x142+x143)^x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x146 = -2;
	int32_t x148 = INT32_MIN;
	volatile int32_t t32 = 3697;

	t32 = (x145<=((x146+x147)^x148));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x150 = 2;
	uint64_t x152 = 13049246165LLU;
	int32_t t33 = -60700;

	t33 = (x149<=((x150+x151)^x152));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {


	t34 = (x153<=((x154+x155)^x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MIN;
	int32_t t35 = 3237123;

	t35 = (x157<=((x158+x159)^x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x162 = 1;
	int16_t x163 = -1;
	static int32_t x164 = INT32_MIN;

	t36 = (x161<=((x162+x163)^x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x165 = 851U;
	int64_t x166 = INT64_MAX;
	int8_t x167 = INT8_MIN;
	int32_t t37 = 4;

	t37 = (x165<=((x166+x167)^x168));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = INT8_MIN;
	static uint16_t x170 = 55U;
	static uint8_t x171 = UINT8_MAX;
	static volatile int64_t x172 = INT64_MAX;

	t38 = (x169<=((x170+x171)^x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x176 = 14475LL;
	volatile int32_t t39 = 9;

	t39 = (x173<=((x174+x175)^x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MIN;
	static uint64_t x178 = UINT64_MAX;
	uint32_t x179 = 190352900U;
	int32_t x180 = INT32_MIN;
	int32_t t40 = -11630163;

	t40 = (x177<=((x178+x179)^x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 125U;
	int8_t x182 = -1;
	uint8_t x183 = UINT8_MAX;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t41 = -905465616;

	t41 = (x181<=((x182+x183)^x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = -749287LL;
	uint32_t x186 = 21U;
	volatile uint64_t x188 = 3807LLU;
	volatile int32_t t42 = -150;

	t42 = (x185<=((x186+x187)^x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = -926045LL;
	int64_t x190 = -1LL;
	uint32_t x191 = 211020U;
	int32_t t43 = -152;

	t43 = (x189<=((x190+x191)^x192));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = INT32_MIN;
	int32_t x194 = -1;
	int16_t x195 = 6292;
	volatile int32_t t44 = -138879;

	t44 = (x193<=((x194+x195)^x196));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x197 = 13U;
	static uint16_t x198 = UINT16_MAX;
	volatile uint64_t x199 = UINT64_MAX;
	static int32_t x200 = INT32_MAX;

	t45 = (x197<=((x198+x199)^x200));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = INT64_MIN;
	static int16_t x202 = INT16_MAX;
	static uint32_t x203 = 203012U;
	volatile uint16_t x204 = 7545U;

	t46 = (x201<=((x202+x203)^x204));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = 31U;
	static int64_t x206 = -1LL;
	volatile int8_t x207 = -1;
	uint8_t x208 = 5U;

	t47 = (x205<=((x206+x207)^x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x209 = UINT8_MAX;
	volatile int16_t x210 = INT16_MIN;
	volatile int64_t x212 = 12230399191889LL;
	volatile int32_t t48 = 8187686;

	t48 = (x209<=((x210+x211)^x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x213 = INT64_MIN;
	int8_t x214 = INT8_MIN;
	int32_t x216 = INT32_MIN;
	volatile int32_t t49 = 163530;

	t49 = (x213<=((x214+x215)^x216));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x221 = INT64_MAX;
	static uint64_t x222 = 398959695615707465LLU;
	static int8_t x223 = 0;
	static int32_t x224 = 6118;

	t50 = (x221<=((x222+x223)^x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x226 = -1;
	uint16_t x227 = 152U;
	volatile int32_t t51 = -260;

	t51 = (x225<=((x226+x227)^x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x230 = 87626127439332LLU;
	int64_t x231 = INT64_MIN;
	uint16_t x232 = 61U;
	volatile int32_t t52 = -2;

	t52 = (x229<=((x230+x231)^x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = 5252U;
	volatile int32_t t53 = -42923;

	t53 = (x233<=((x234+x235)^x236));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x241 = INT32_MIN;
	static volatile int16_t x242 = INT16_MIN;
	volatile int8_t x243 = INT8_MIN;
	int64_t x244 = INT64_MIN;
	volatile int32_t t54 = -5180;

	t54 = (x241<=((x242+x243)^x244));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x245 = -10324993820047855LL;
	int8_t x246 = 3;
	int32_t x248 = INT32_MIN;
	volatile int32_t t55 = 738;

	t55 = (x245<=((x246+x247)^x248));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = INT8_MAX;
	int8_t x250 = INT8_MIN;
	int16_t x251 = -1;
	static int8_t x252 = INT8_MAX;
	int32_t t56 = -1;

	t56 = (x249<=((x250+x251)^x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x253 = INT64_MAX;
	volatile int64_t x254 = -83697199LL;
	int64_t x255 = 2386642530LL;
	uint16_t x256 = 3U;
	volatile int32_t t57 = 1;

	t57 = (x253<=((x254+x255)^x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = INT32_MIN;
	int32_t x258 = INT32_MIN;
	static volatile uint16_t x259 = 24929U;
	int64_t x260 = -1LL;
	int32_t t58 = 60;

	t58 = (x257<=((x258+x259)^x260));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x261 = -19982;
	volatile int64_t x262 = 4434907LL;
	int16_t x263 = -4;
	static volatile int32_t t59 = -22;

	t59 = (x261<=((x262+x263)^x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x265 = UINT32_MAX;
	int8_t x266 = INT8_MIN;
	int8_t x268 = -1;

	t60 = (x265<=((x266+x267)^x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x270 = UINT8_MAX;
	uint16_t x271 = UINT16_MAX;
	static int8_t x272 = 47;
	volatile int32_t t61 = 0;

	t61 = (x269<=((x270+x271)^x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x273 = INT16_MIN;
	uint64_t x274 = UINT64_MAX;
	static int8_t x275 = INT8_MIN;
	static volatile int8_t x276 = INT8_MIN;
	int32_t t62 = 51668869;

	t62 = (x273<=((x274+x275)^x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = INT8_MAX;
	int32_t x278 = -20519872;
	int32_t t63 = -1;

	t63 = (x277<=((x278+x279)^x280));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x281 = INT32_MIN;
	int32_t x282 = -625776;
	volatile int32_t t64 = 0;

	t64 = (x281<=((x282+x283)^x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = -51;
	volatile int16_t x286 = 1;
	int32_t x288 = -1;
	static int32_t t65 = -13938;

	t65 = (x285<=((x286+x287)^x288));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x289 = -1;
	volatile int16_t x290 = -1;
	int16_t x291 = 0;
	int8_t x292 = INT8_MIN;

	t66 = (x289<=((x290+x291)^x292));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x293 = INT32_MIN;
	int64_t x294 = -1LL;
	int32_t x295 = 6211567;
	int32_t x296 = 1581170;
	volatile int32_t t67 = 261686180;

	t67 = (x293<=((x294+x295)^x296));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x298 = 203U;
	static int8_t x299 = -1;
	volatile uint8_t x300 = UINT8_MAX;
	int32_t t68 = -2204;

	t68 = (x297<=((x298+x299)^x300));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x301 = 40;
	int16_t x303 = 395;
	volatile uint16_t x304 = 1289U;

	t69 = (x301<=((x302+x303)^x304));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x305 = UINT8_MAX;
	static int8_t x306 = INT8_MIN;
	int16_t x307 = -1;
	uint8_t x308 = UINT8_MAX;
	static volatile int32_t t70 = 1;

	t70 = (x305<=((x306+x307)^x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x309 = 67U;
	static uint64_t x310 = UINT64_MAX;
	int32_t t71 = 4;

	t71 = (x309<=((x310+x311)^x312));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = INT8_MAX;
	uint8_t x314 = UINT8_MAX;
	volatile int32_t t72 = 55;

	t72 = (x313<=((x314+x315)^x316));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x318 = 15U;
	uint8_t x319 = UINT8_MAX;
	static int8_t x320 = INT8_MIN;
	int32_t t73 = 5;

	t73 = (x317<=((x318+x319)^x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = -11706234;
	uint16_t x322 = 2318U;
	int64_t x323 = -2281471504LL;
	static uint8_t x324 = 0U;

	t74 = (x321<=((x322+x323)^x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = INT16_MIN;
	int16_t x328 = -1;
	int32_t t75 = 6533582;

	t75 = (x325<=((x326+x327)^x328));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x330 = 119;
	static uint32_t x331 = UINT32_MAX;
	static int32_t t76 = -6;

	t76 = (x329<=((x330+x331)^x332));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x339 = -1;
	int64_t x340 = 24675345LL;
	int32_t t77 = -1;

	t77 = (x337<=((x338+x339)^x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x341 = 248U;
	uint64_t x343 = 37008596696940111LLU;

	t78 = (x341<=((x342+x343)^x344));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x347 = INT32_MIN;
	int64_t x348 = -45089818589537LL;
	int32_t t79 = -6465111;

	t79 = (x345<=((x346+x347)^x348));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x350 = 747;
	int8_t x351 = INT8_MIN;
	int32_t x352 = -1;
	int32_t t80 = 104741;

	t80 = (x349<=((x350+x351)^x352));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = INT64_MAX;
	int64_t x354 = -1LL;
	int16_t x356 = 0;
	int32_t t81 = -2557947;

	t81 = (x353<=((x354+x355)^x356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x361 = 15U;
	int16_t x362 = INT16_MIN;
	int16_t x364 = 380;
	volatile int32_t t82 = 1;

	t82 = (x361<=((x362+x363)^x364));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x366 = -1LL;
	uint64_t x367 = UINT64_MAX;
	uint16_t x368 = 15934U;
	int32_t t83 = 1;

	t83 = (x365<=((x366+x367)^x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x369 = -180735333;
	volatile int64_t x370 = 14272129770623309LL;
	static int16_t x372 = INT16_MAX;
	static volatile int32_t t84 = 291244;

	t84 = (x369<=((x370+x371)^x372));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x373 = -1;
	int32_t x374 = -7;
	uint8_t x375 = UINT8_MAX;
	int16_t x376 = INT16_MAX;
	volatile int32_t t85 = 18358;

	t85 = (x373<=((x374+x375)^x376));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x377 = UINT8_MAX;
	static int16_t x378 = INT16_MAX;
	uint8_t x380 = 116U;
	volatile int32_t t86 = 174726621;

	t86 = (x377<=((x378+x379)^x380));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x381 = 313U;
	volatile uint32_t x382 = 773U;
	static volatile int32_t x384 = 7488116;

	t87 = (x381<=((x382+x383)^x384));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = INT32_MIN;
	uint16_t x390 = 4644U;
	int64_t x391 = 8735147540508272LL;
	static int32_t x392 = INT32_MIN;
	int32_t t88 = -11790;

	t88 = (x389<=((x390+x391)^x392));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x393 = -138241830512511LL;
	static uint64_t x394 = 777057331LLU;
	uint64_t x395 = 14722307433574491LLU;
	int16_t x396 = 0;
	int32_t t89 = -257494748;

	t89 = (x393<=((x394+x395)^x396));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x397 = 15U;
	int16_t x398 = INT16_MIN;
	int16_t x399 = -87;

	t90 = (x397<=((x398+x399)^x400));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x406 = 48;
	int16_t x408 = INT16_MIN;
	static int32_t t91 = 60121;

	t91 = (x405<=((x406+x407)^x408));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x411 = INT16_MAX;
	int16_t x412 = INT16_MAX;
	int32_t t92 = 99;

	t92 = (x409<=((x410+x411)^x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x413 = INT16_MAX;
	uint32_t x414 = 13U;
	int64_t x415 = INT64_MIN;
	int32_t x416 = -1941;
	static volatile int32_t t93 = -23;

	t93 = (x413<=((x414+x415)^x416));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x418 = 5;
	volatile uint64_t x419 = 31139761LLU;
	int32_t t94 = 348806;

	t94 = (x417<=((x418+x419)^x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x425 = -9;
	volatile int8_t x426 = -1;
	uint8_t x428 = 26U;
	volatile int32_t t95 = -355516390;

	t95 = (x425<=((x426+x427)^x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x429 = UINT8_MAX;
	static int32_t x430 = -1;
	static volatile uint32_t x431 = 139U;
	volatile int16_t x432 = 2;
	static volatile int32_t t96 = -7211901;

	t96 = (x429<=((x430+x431)^x432));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x438 = INT32_MIN;
	uint16_t x439 = 558U;
	static uint64_t x440 = UINT64_MAX;
	volatile int32_t t97 = 18774;

	t97 = (x437<=((x438+x439)^x440));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x442 = 15777855LLU;
	int8_t x443 = -26;
	uint8_t x444 = UINT8_MAX;
	int32_t t98 = 148921;

	t98 = (x441<=((x442+x443)^x444));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x445 = INT64_MIN;
	int32_t x447 = -1;
	volatile int32_t t99 = 0;

	t99 = (x445<=((x446+x447)^x448));

	if (t99 != 1) { NG(); } else { ; }
	
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


    return 0;
}

