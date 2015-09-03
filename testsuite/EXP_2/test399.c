#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x4 = -1;
int32_t t2 = -12925;
volatile uint8_t x29 = 17U;
int32_t t3 = 11762;
uint8_t x34 = 1U;
static int16_t x36 = 9;
volatile int32_t t4 = -9134;
volatile int64_t x44 = INT64_MAX;
uint8_t x47 = 1U;
int32_t x49 = INT32_MIN;
volatile int16_t x52 = INT16_MIN;
static int32_t x58 = 42281;
uint32_t x60 = UINT32_MAX;
static volatile int32_t t8 = -857471440;
static volatile uint16_t x61 = 1U;
uint16_t x65 = 216U;
int16_t x66 = 16023;
int32_t t11 = -255;
static int8_t x82 = INT8_MIN;
static volatile int32_t x83 = -144551;
static int64_t x84 = INT64_MIN;
int32_t t13 = -6605636;
int64_t x85 = INT64_MIN;
int32_t x90 = -1;
uint8_t x93 = UINT8_MAX;
int16_t x105 = -1;
int64_t x109 = INT64_MIN;
int8_t x113 = INT8_MIN;
uint32_t x118 = UINT32_MAX;
int8_t x123 = -10;
volatile uint16_t x141 = 636U;
int16_t x143 = INT16_MIN;
int32_t x144 = INT32_MAX;
volatile int32_t t24 = -8448422;
volatile uint16_t x147 = UINT16_MAX;
uint8_t x153 = UINT8_MAX;
volatile int32_t x154 = -1;
int8_t x159 = INT8_MIN;
volatile uint64_t x161 = 5408007057083LLU;
int32_t t28 = 0;
volatile int8_t x167 = INT8_MIN;
static int8_t x192 = INT8_MIN;
uint16_t x204 = UINT16_MAX;
static uint64_t x212 = 4092128683501LLU;
static int8_t x219 = INT8_MAX;
int16_t x220 = 4721;
int32_t x234 = 14376;
int16_t x236 = -14;
uint16_t x242 = 4U;
volatile int32_t t40 = 209145;
static volatile int8_t x247 = 6;
volatile int32_t t43 = 0;
int8_t x264 = -1;
int32_t t44 = -2486;
static uint8_t x266 = UINT8_MAX;
uint8_t x275 = 90U;
volatile int32_t t46 = 1070403388;
int32_t x284 = INT32_MIN;
int8_t x289 = INT8_MAX;
int8_t x292 = 14;
volatile int16_t x293 = INT16_MAX;
int8_t x303 = INT8_MAX;
volatile uint64_t x306 = 2001798603LLU;
volatile int32_t t52 = -411027;
uint32_t x316 = 3U;
static uint16_t x321 = 3787U;
int64_t x324 = INT64_MIN;
volatile int32_t t55 = -373;
int32_t x328 = INT32_MAX;
volatile uint32_t x330 = UINT32_MAX;
uint32_t x331 = 86U;
int16_t x344 = INT16_MIN;
static volatile int32_t t60 = -129159;
uint8_t x347 = UINT8_MAX;
uint8_t x353 = 0U;
int32_t x354 = -122110;
volatile int32_t t66 = -4754;
uint8_t x378 = 10U;
int8_t x379 = INT8_MAX;
static int16_t x392 = INT16_MIN;
volatile int32_t t71 = 1;
int16_t x396 = -59;
static volatile int8_t x398 = INT8_MAX;
int32_t t74 = 69017;
uint8_t x420 = 6U;
volatile int8_t x421 = -22;
int8_t x431 = INT8_MIN;
static volatile int16_t x432 = INT16_MIN;
int32_t x433 = INT32_MAX;
uint64_t x434 = 8163238819216713LLU;
static int8_t x445 = -4;
int32_t x449 = INT32_MIN;
uint32_t x450 = 3U;
static int32_t t82 = 1025446974;
int64_t x461 = INT64_MIN;
int32_t t84 = -10;
volatile int32_t t87 = -18924875;
static int32_t t91 = -55609;
static volatile uint16_t x509 = 1U;
static uint8_t x533 = UINT8_MAX;
uint16_t x535 = 24U;
uint32_t x546 = 57565U;
int32_t x547 = -1;
volatile uint8_t x551 = 2U;
uint16_t x558 = 711U;


void f0(void) {
	volatile uint32_t x1 = 159U;
	uint64_t x2 = 213008265LLU;
	uint32_t x3 = 5676082U;
	volatile int32_t t0 = -11694578;

	t0 = ((x1%(x2*x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x17 = 2208U;
	static int8_t x18 = -2;
	int64_t x19 = 15LL;
	uint64_t x20 = 68338000643506LLU;
	static volatile int32_t t1 = 3835;

	t1 = ((x17%(x18*x19))<x20);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x25 = UINT64_MAX;
	volatile int32_t x26 = 297298;
	uint8_t x27 = UINT8_MAX;
	static int16_t x28 = 1164;

	t2 = ((x25%(x26*x27))<x28);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x30 = INT8_MIN;
	volatile int16_t x31 = INT16_MIN;
	uint64_t x32 = 107819269922LLU;

	t3 = ((x29%(x30*x31))<x32);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x33 = 19104U;
	int8_t x35 = INT8_MIN;

	t4 = ((x33%(x34*x35))<x36);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x41 = INT64_MIN;
	static int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MAX;
	int32_t t5 = 191;

	t5 = ((x41%(x42*x43))<x44);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = -1;
	static int16_t x46 = INT16_MIN;
	uint16_t x48 = 4U;
	int32_t t6 = 1579;

	t6 = ((x45%(x46*x47))<x48);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x50 = INT16_MAX;
	volatile int64_t x51 = -3067269828LL;
	static volatile int32_t t7 = 0;

	t7 = ((x49%(x50*x51))<x52);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x57 = INT8_MAX;
	uint64_t x59 = 8930113039285000670LLU;

	t8 = ((x57%(x58*x59))<x60);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x62 = 278;
	uint32_t x63 = 6U;
	volatile int8_t x64 = 6;
	volatile int32_t t9 = -2508;

	t9 = ((x61%(x62*x63))<x64);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x67 = 632337LLU;
	uint64_t x68 = UINT64_MAX;
	static volatile int32_t t10 = 2565409;

	t10 = ((x65%(x66*x67))<x68);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = INT32_MIN;
	static int32_t x70 = 404;
	uint8_t x71 = UINT8_MAX;
	int32_t x72 = INT32_MIN;

	t11 = ((x69%(x70*x71))<x72);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x73 = INT64_MIN;
	uint64_t x74 = 7149876722696101LLU;
	int8_t x75 = INT8_MIN;
	volatile int64_t x76 = 1425903LL;
	int32_t t12 = 16;

	t12 = ((x73%(x74*x75))<x76);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x81 = INT8_MAX;

	t13 = ((x81%(x82*x83))<x84);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x86 = UINT8_MAX;
	volatile int8_t x87 = INT8_MAX;
	int32_t x88 = INT32_MAX;
	int32_t t14 = 673446030;

	t14 = ((x85%(x86*x87))<x88);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x89 = 22167216U;
	volatile int16_t x91 = INT16_MIN;
	int16_t x92 = -46;
	volatile int32_t t15 = -427987157;

	t15 = ((x89%(x90*x91))<x92);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x94 = 19743U;
	uint64_t x95 = UINT64_MAX;
	static volatile int16_t x96 = INT16_MIN;
	volatile int32_t t16 = 471;

	t16 = ((x93%(x94*x95))<x96);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x97 = UINT64_MAX;
	static int8_t x98 = INT8_MAX;
	static int16_t x99 = INT16_MAX;
	static int64_t x100 = INT64_MIN;
	static int32_t t17 = -1891149;

	t17 = ((x97%(x98*x99))<x100);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x106 = 1U;
	int16_t x107 = 3988;
	int32_t x108 = -973396105;
	volatile int32_t t18 = -3224;

	t18 = ((x105%(x106*x107))<x108);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x110 = 479U;
	int32_t x111 = -942755;
	static int8_t x112 = 1;
	int32_t t19 = 66627104;

	t19 = ((x109%(x110*x111))<x112);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x114 = INT32_MAX;
	uint64_t x115 = 6044LLU;
	volatile int32_t x116 = -258;
	int32_t t20 = -26289238;

	t20 = ((x113%(x114*x115))<x116);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x117 = -1;
	uint32_t x119 = 37U;
	int8_t x120 = INT8_MIN;
	volatile int32_t t21 = 1855;

	t21 = ((x117%(x118*x119))<x120);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x121 = INT32_MIN;
	static int32_t x122 = 12678025;
	int32_t x124 = INT32_MIN;
	volatile int32_t t22 = 2;

	t22 = ((x121%(x122*x123))<x124);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x133 = UINT32_MAX;
	int64_t x134 = -4240904LL;
	uint16_t x135 = 4677U;
	static uint32_t x136 = UINT32_MAX;
	volatile int32_t t23 = -2478647;

	t23 = ((x133%(x134*x135))<x136);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x142 = 14U;

	t24 = ((x141%(x142*x143))<x144);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x145 = 1220915684149312833LL;
	int16_t x146 = INT16_MAX;
	int16_t x148 = INT16_MAX;
	int32_t t25 = 20;

	t25 = ((x145%(x146*x147))<x148);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x155 = INT8_MIN;
	uint8_t x156 = UINT8_MAX;
	int32_t t26 = 475;

	t26 = ((x153%(x154*x155))<x156);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x157 = 1965857U;
	volatile uint64_t x158 = 15690367091249884LLU;
	uint32_t x160 = UINT32_MAX;
	int32_t t27 = -944;

	t27 = ((x157%(x158*x159))<x160);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x162 = 44U;
	int8_t x163 = INT8_MIN;
	uint32_t x164 = 92602U;

	t28 = ((x161%(x162*x163))<x164);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x165 = 851985237U;
	volatile uint8_t x166 = UINT8_MAX;
	static int16_t x168 = INT16_MIN;
	static volatile int32_t t29 = 10315;

	t29 = ((x165%(x166*x167))<x168);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x181 = INT32_MIN;
	volatile int32_t x182 = -1;
	volatile int64_t x183 = -1LL;
	uint32_t x184 = 231924558U;
	volatile int32_t t30 = -123146;

	t30 = ((x181%(x182*x183))<x184);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = -9408;
	static int32_t x187 = -1;
	volatile uint32_t x188 = 1U;
	int32_t t31 = -146876;

	t31 = ((x185%(x186*x187))<x188);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x189 = 20;
	volatile uint8_t x190 = 5U;
	uint64_t x191 = UINT64_MAX;
	int32_t t32 = 15788;

	t32 = ((x189%(x190*x191))<x192);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x193 = 25U;
	int64_t x194 = 3687847993LL;
	volatile int16_t x195 = -1;
	int8_t x196 = -1;
	volatile int32_t t33 = 1721558;

	t33 = ((x193%(x194*x195))<x196);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x201 = UINT8_MAX;
	uint64_t x202 = UINT64_MAX;
	volatile uint16_t x203 = 10U;
	int32_t t34 = 165;

	t34 = ((x201%(x202*x203))<x204);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x205 = -59;
	int8_t x206 = INT8_MIN;
	uint16_t x207 = 620U;
	int32_t x208 = INT32_MIN;
	static volatile int32_t t35 = -233;

	t35 = ((x205%(x206*x207))<x208);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x209 = -1;
	static int16_t x210 = 12008;
	uint16_t x211 = 214U;
	volatile int32_t t36 = 15;

	t36 = ((x209%(x210*x211))<x212);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x217 = INT16_MIN;
	volatile uint16_t x218 = 1U;
	volatile int32_t t37 = -63;

	t37 = ((x217%(x218*x219))<x220);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x225 = INT16_MAX;
	uint32_t x226 = UINT32_MAX;
	int16_t x227 = -1;
	int16_t x228 = -895;
	int32_t t38 = 1683;

	t38 = ((x225%(x226*x227))<x228);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x233 = INT16_MAX;
	uint32_t x235 = 359767U;
	int32_t t39 = 3009;

	t39 = ((x233%(x234*x235))<x236);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x241 = UINT64_MAX;
	int64_t x243 = -1LL;
	volatile int32_t x244 = INT32_MAX;

	t40 = ((x241%(x242*x243))<x244);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x245 = 91414368552435977LLU;
	int64_t x246 = -4LL;
	uint32_t x248 = 433U;
	volatile int32_t t41 = -1250610;

	t41 = ((x245%(x246*x247))<x248);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x249 = 219962626680287LLU;
	uint16_t x250 = 4012U;
	int8_t x251 = -1;
	static uint32_t x252 = 1695431902U;
	volatile int32_t t42 = -19;

	t42 = ((x249%(x250*x251))<x252);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x253 = -1;
	int64_t x254 = 5LL;
	volatile uint64_t x255 = 5LLU;
	uint8_t x256 = UINT8_MAX;

	t43 = ((x253%(x254*x255))<x256);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x261 = UINT32_MAX;
	static volatile uint16_t x262 = 8U;
	uint8_t x263 = UINT8_MAX;

	t44 = ((x261%(x262*x263))<x264);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x265 = 1890880;
	int16_t x267 = 29;
	int8_t x268 = 1;
	int32_t t45 = -3;

	t45 = ((x265%(x266*x267))<x268);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x273 = INT8_MAX;
	uint64_t x274 = UINT64_MAX;
	volatile int64_t x276 = 28416161855542LL;

	t46 = ((x273%(x274*x275))<x276);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x281 = INT8_MIN;
	static volatile int64_t x282 = 30657157638822LL;
	static volatile uint32_t x283 = 1U;
	volatile int32_t t47 = 1;

	t47 = ((x281%(x282*x283))<x284);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x290 = 930U;
	volatile int16_t x291 = INT16_MAX;
	volatile int32_t t48 = -70423191;

	t48 = ((x289%(x290*x291))<x292);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x294 = 903693U;
	static int16_t x295 = -1;
	int8_t x296 = INT8_MIN;
	int32_t t49 = 335130;

	t49 = ((x293%(x294*x295))<x296);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x297 = 5U;
	int32_t x298 = INT32_MIN;
	static uint64_t x299 = 351657400110092LLU;
	uint16_t x300 = 21523U;
	volatile int32_t t50 = -164491;

	t50 = ((x297%(x298*x299))<x300);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x301 = 10U;
	uint16_t x302 = 9361U;
	int8_t x304 = -1;
	volatile int32_t t51 = -6680;

	t51 = ((x301%(x302*x303))<x304);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x305 = -1;
	static int64_t x307 = 625LL;
	uint16_t x308 = 22069U;

	t52 = ((x305%(x306*x307))<x308);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x309 = INT8_MAX;
	volatile int32_t x310 = -1;
	int16_t x311 = -1;
	int32_t x312 = INT32_MAX;
	volatile int32_t t53 = 12963234;

	t53 = ((x309%(x310*x311))<x312);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x313 = 141;
	int64_t x314 = -1435239LL;
	uint16_t x315 = 1765U;
	static volatile int32_t t54 = -493881;

	t54 = ((x313%(x314*x315))<x316);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x322 = 1245148U;
	volatile uint16_t x323 = UINT16_MAX;

	t55 = ((x321%(x322*x323))<x324);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x325 = -1LL;
	static int32_t x326 = -11;
	int64_t x327 = 103587357625191413LL;
	volatile int32_t t56 = 9;

	t56 = ((x325%(x326*x327))<x328);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x329 = 62693111140LLU;
	static volatile uint8_t x332 = 10U;
	volatile int32_t t57 = -9;

	t57 = ((x329%(x330*x331))<x332);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x333 = 2100827923629467766LLU;
	uint32_t x334 = 98U;
	volatile int16_t x335 = -3112;
	uint64_t x336 = 4057252539LLU;
	volatile int32_t t58 = -3889;

	t58 = ((x333%(x334*x335))<x336);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x337 = INT32_MIN;
	int64_t x338 = 1LL;
	int64_t x339 = INT64_MIN;
	uint32_t x340 = 553885531U;
	static volatile int32_t t59 = -9;

	t59 = ((x337%(x338*x339))<x340);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x341 = -337393017;
	uint8_t x342 = 62U;
	uint64_t x343 = 127977997LLU;

	t60 = ((x341%(x342*x343))<x344);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x345 = 112U;
	int32_t x346 = -874613;
	int32_t x348 = -12667294;
	int32_t t61 = 874831;

	t61 = ((x345%(x346*x347))<x348);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x349 = UINT8_MAX;
	volatile int64_t x350 = INT64_MAX;
	uint64_t x351 = UINT64_MAX;
	volatile int32_t x352 = INT32_MIN;
	volatile int32_t t62 = 5;

	t62 = ((x349%(x350*x351))<x352);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x355 = -22;
	int32_t x356 = -1;
	int32_t t63 = -24186;

	t63 = ((x353%(x354*x355))<x356);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x361 = INT64_MIN;
	static volatile int16_t x362 = 15;
	volatile int16_t x363 = INT16_MAX;
	static uint32_t x364 = 2U;
	volatile int32_t t64 = 2;

	t64 = ((x361%(x362*x363))<x364);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x365 = INT16_MIN;
	int8_t x366 = -3;
	int16_t x367 = INT16_MAX;
	uint32_t x368 = UINT32_MAX;
	int32_t t65 = -86372;

	t65 = ((x365%(x366*x367))<x368);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x369 = INT64_MIN;
	static int8_t x370 = INT8_MIN;
	uint8_t x371 = 10U;
	static volatile uint16_t x372 = UINT16_MAX;

	t66 = ((x369%(x370*x371))<x372);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x373 = -25;
	int32_t x374 = -1;
	uint32_t x375 = 789U;
	uint16_t x376 = 36U;
	int32_t t67 = 120326448;

	t67 = ((x373%(x374*x375))<x376);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x377 = UINT16_MAX;
	uint16_t x380 = 2U;
	int32_t t68 = -7284;

	t68 = ((x377%(x378*x379))<x380);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x381 = INT64_MAX;
	int8_t x382 = INT8_MAX;
	volatile int32_t x383 = 199460;
	int32_t x384 = INT32_MIN;
	volatile int32_t t69 = -252931;

	t69 = ((x381%(x382*x383))<x384);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x385 = 173912809U;
	static uint64_t x386 = 165247LLU;
	static uint64_t x387 = 1LLU;
	int64_t x388 = -1LL;
	volatile int32_t t70 = -133559607;

	t70 = ((x385%(x386*x387))<x388);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x389 = INT8_MIN;
	int8_t x390 = 1;
	int8_t x391 = INT8_MIN;

	t71 = ((x389%(x390*x391))<x392);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x393 = -1;
	volatile int8_t x394 = INT8_MIN;
	uint64_t x395 = UINT64_MAX;
	int32_t t72 = -262236240;

	t72 = ((x393%(x394*x395))<x396);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x397 = -11;
	int32_t x399 = 206983;
	volatile int32_t x400 = INT32_MIN;
	int32_t t73 = 20770493;

	t73 = ((x397%(x398*x399))<x400);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x405 = INT8_MIN;
	uint32_t x406 = 169527623U;
	static volatile int16_t x407 = 266;
	static volatile uint32_t x408 = 11423455U;

	t74 = ((x405%(x406*x407))<x408);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x417 = -1;
	uint8_t x418 = 17U;
	static int16_t x419 = -28;
	int32_t t75 = 0;

	t75 = ((x417%(x418*x419))<x420);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x422 = 2794U;
	static uint16_t x423 = 457U;
	static int64_t x424 = -106434224404399LL;
	int32_t t76 = 239644715;

	t76 = ((x421%(x422*x423))<x424);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x425 = 0;
	int16_t x426 = 4;
	volatile int16_t x427 = INT16_MIN;
	uint16_t x428 = UINT16_MAX;
	int32_t t77 = 704728;

	t77 = ((x425%(x426*x427))<x428);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x429 = UINT16_MAX;
	static uint8_t x430 = 46U;
	static volatile int32_t t78 = 5638;

	t78 = ((x429%(x430*x431))<x432);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x435 = -1;
	static int32_t x436 = 9365692;
	int32_t t79 = 107581;

	t79 = ((x433%(x434*x435))<x436);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x437 = -1;
	static volatile uint32_t x438 = UINT32_MAX;
	volatile int16_t x439 = INT16_MAX;
	volatile uint8_t x440 = 122U;
	volatile int32_t t80 = -421595;

	t80 = ((x437%(x438*x439))<x440);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x446 = INT16_MAX;
	static int64_t x447 = -1LL;
	static int32_t x448 = INT32_MIN;
	volatile int32_t t81 = -91488;

	t81 = ((x445%(x446*x447))<x448);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x451 = -3443;
	int32_t x452 = INT32_MIN;

	t82 = ((x449%(x450*x451))<x452);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x457 = 2LL;
	uint64_t x458 = 1723890938847315LLU;
	int8_t x459 = INT8_MIN;
	int64_t x460 = -24LL;
	static int32_t t83 = 143961;

	t83 = ((x457%(x458*x459))<x460);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x462 = INT32_MIN;
	uint64_t x463 = UINT64_MAX;
	int32_t x464 = INT32_MIN;

	t84 = ((x461%(x462*x463))<x464);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x465 = INT32_MIN;
	static int8_t x466 = INT8_MIN;
	static uint64_t x467 = UINT64_MAX;
	uint16_t x468 = UINT16_MAX;
	int32_t t85 = 314567634;

	t85 = ((x465%(x466*x467))<x468);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x473 = 451LLU;
	static uint32_t x474 = UINT32_MAX;
	int32_t x475 = -5;
	int8_t x476 = -1;
	static int32_t t86 = 499811714;

	t86 = ((x473%(x474*x475))<x476);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x485 = INT16_MIN;
	static uint64_t x486 = 38LLU;
	static int32_t x487 = -1;
	int64_t x488 = INT64_MIN;

	t87 = ((x485%(x486*x487))<x488);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x489 = 18;
	uint8_t x490 = 5U;
	volatile int32_t x491 = -1408;
	uint8_t x492 = UINT8_MAX;
	volatile int32_t t88 = -4686;

	t88 = ((x489%(x490*x491))<x492);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x493 = UINT64_MAX;
	int64_t x494 = -22801271270313LL;
	volatile int8_t x495 = 1;
	volatile uint32_t x496 = UINT32_MAX;
	static int32_t t89 = 1;

	t89 = ((x493%(x494*x495))<x496);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x497 = INT8_MAX;
	int8_t x498 = INT8_MAX;
	static volatile int32_t x499 = -1;
	int32_t x500 = INT32_MIN;
	int32_t t90 = 700902;

	t90 = ((x497%(x498*x499))<x500);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x505 = UINT64_MAX;
	volatile uint16_t x506 = 1479U;
	uint32_t x507 = 47042U;
	int32_t x508 = INT32_MAX;

	t91 = ((x505%(x506*x507))<x508);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x510 = -1;
	static int32_t x511 = INT32_MAX;
	int8_t x512 = -1;
	static int32_t t92 = -22;

	t92 = ((x509%(x510*x511))<x512);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x513 = INT32_MIN;
	uint64_t x514 = 893LLU;
	int32_t x515 = 150;
	int64_t x516 = -1LL;
	int32_t t93 = 5992744;

	t93 = ((x513%(x514*x515))<x516);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x517 = INT32_MIN;
	int8_t x518 = -2;
	uint16_t x519 = 8U;
	volatile int8_t x520 = INT8_MIN;
	volatile int32_t t94 = 1;

	t94 = ((x517%(x518*x519))<x520);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x534 = INT8_MAX;
	volatile int16_t x536 = 1;
	volatile int32_t t95 = 304;

	t95 = ((x533%(x534*x535))<x536);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x545 = 6857;
	int32_t x548 = INT32_MIN;
	int32_t t96 = 60086;

	t96 = ((x545%(x546*x547))<x548);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x549 = -1;
	volatile uint32_t x550 = 1996688085U;
	volatile int64_t x552 = INT64_MIN;
	volatile int32_t t97 = 176503499;

	t97 = ((x549%(x550*x551))<x552);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x553 = UINT8_MAX;
	uint64_t x554 = 98141630LLU;
	uint16_t x555 = UINT16_MAX;
	int64_t x556 = -1LL;
	volatile int32_t t98 = 1;

	t98 = ((x553%(x554*x555))<x556);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x557 = 12619;
	static volatile int16_t x559 = -8;
	int64_t x560 = -1LL;
	volatile int32_t t99 = 106;

	t99 = ((x557%(x558*x559))<x560);

	if (t99 != 0) { NG(); } else { ; }
	
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

