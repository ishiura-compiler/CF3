#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
static volatile uint16_t x3 = 3U;
static int64_t x4 = -1LL;
int8_t x11 = INT8_MIN;
uint16_t x12 = 31307U;
int8_t x23 = 5;
static int16_t x24 = INT16_MIN;
int32_t t4 = 3;
int8_t x25 = -1;
static volatile int16_t x29 = -11;
int32_t x36 = 824;
int32_t x56 = INT32_MIN;
int32_t t11 = 12192981;
uint32_t x61 = 140U;
static int8_t x64 = -1;
static int8_t x65 = -42;
int64_t x68 = INT64_MIN;
volatile int32_t t14 = -547058;
int64_t x73 = INT64_MAX;
uint8_t x88 = 26U;
int32_t x98 = INT32_MAX;
volatile int8_t x99 = -7;
uint64_t x104 = 720184678566528LLU;
uint64_t x108 = UINT64_MAX;
static int32_t t22 = 21821;
int32_t x114 = 5546;
static uint64_t x124 = UINT64_MAX;
int16_t x133 = 5333;
static volatile int32_t x135 = -1;
int32_t t28 = 731240;
static int8_t x137 = INT8_MIN;
static uint64_t x139 = 1940298382LLU;
volatile int32_t t30 = -201019;
int8_t x152 = 1;
int16_t x156 = INT16_MIN;
volatile uint16_t x157 = UINT16_MAX;
volatile uint64_t x159 = 998510128420288535LLU;
static int32_t t34 = 105;
volatile uint16_t x170 = 283U;
static uint8_t x171 = 10U;
volatile int8_t x187 = INT8_MIN;
int32_t x201 = -1;
volatile int32_t x204 = INT32_MIN;
uint32_t x219 = 8043U;
static int32_t x229 = -49;
int64_t x230 = INT64_MAX;
int8_t x231 = INT8_MIN;
int64_t x232 = INT64_MIN;
uint32_t x249 = 2276395U;
int8_t x252 = 5;
uint16_t x253 = 20U;
volatile int32_t t48 = -16228831;
int16_t x270 = 26;
volatile int32_t t49 = 814322745;
volatile uint32_t x278 = 5542280U;
uint8_t x281 = 1U;
int8_t x286 = 28;
uint32_t x290 = 42378120U;
int8_t x291 = -1;
int8_t x305 = INT8_MIN;
int64_t x308 = INT64_MAX;
int8_t x312 = 3;
int32_t x323 = 19;
int16_t x324 = -1;
static int32_t t58 = -21;
int32_t x335 = -1;
static volatile int32_t t61 = 14198773;
static int16_t x359 = -1;
uint16_t x362 = 20880U;
static uint32_t x365 = UINT32_MAX;
static volatile int32_t x368 = INT32_MAX;
uint8_t x372 = UINT8_MAX;
int32_t t69 = -1608133;
static int16_t x378 = INT16_MIN;
int64_t x379 = -59LL;
uint32_t x380 = 8638922U;
int8_t x382 = INT8_MIN;
int64_t x384 = -1LL;
int32_t x387 = INT32_MIN;
volatile int32_t t73 = -11908396;
int32_t x390 = -1;
volatile int16_t x392 = -140;
static int64_t x397 = INT64_MAX;
int32_t x398 = INT32_MIN;
uint32_t x400 = UINT32_MAX;
static volatile int32_t t75 = -130;
int16_t x403 = 1223;
int64_t x405 = 12LL;
static uint16_t x410 = 18U;
int32_t t79 = -4680476;
uint8_t x420 = 0U;
int8_t x444 = -39;
int32_t t85 = -628323548;
static int32_t x451 = 270003119;
uint32_t x457 = 223016689U;
static int32_t x464 = -1;
int32_t x467 = -394;
int32_t x472 = INT32_MAX;
int32_t x475 = -50106;
uint8_t x499 = 45U;
volatile int32_t x500 = INT32_MIN;
int64_t x521 = INT64_MIN;
int32_t x523 = 7;
int32_t t97 = -22483988;
static int32_t x526 = INT32_MAX;
static uint16_t x527 = 3U;


void f0(void) {
	uint64_t x1 = 956403LLU;
	volatile int32_t t0 = -12194251;

	t0 = ((x1/(x2&x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x9 = 9891559U;
	uint64_t x10 = UINT64_MAX;
	int32_t t1 = 99206936;

	t1 = ((x9/(x10&x11))<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = -1;
	int64_t x14 = INT64_MAX;
	int16_t x15 = -56;
	static int32_t x16 = INT32_MIN;
	volatile int32_t t2 = -190;

	t2 = ((x13/(x14&x15))<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 85881080897LLU;
	int8_t x18 = -1;
	static volatile uint16_t x19 = UINT16_MAX;
	int32_t x20 = INT32_MAX;
	static volatile int32_t t3 = -1234;

	t3 = ((x17/(x18&x19))<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	static int8_t x22 = INT8_MAX;

	t4 = ((x21/(x22&x23))<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x26 = 1470783446861030084LL;
	static volatile int32_t x27 = -1;
	uint32_t x28 = 10237U;
	volatile int32_t t5 = -4721;

	t5 = ((x25/(x26&x27))<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x30 = 21383715155LLU;
	int32_t x31 = INT32_MAX;
	static int32_t x32 = 7456;
	volatile int32_t t6 = -120792;

	t6 = ((x29/(x30&x31))<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 59U;
	uint16_t x34 = 2046U;
	int8_t x35 = INT8_MIN;
	volatile int32_t t7 = -8;

	t7 = ((x33/(x34&x35))<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	uint64_t x38 = UINT64_MAX;
	int16_t x39 = INT16_MIN;
	int8_t x40 = -1;
	int32_t t8 = -1666;

	t8 = ((x37/(x38&x39))<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x41 = UINT8_MAX;
	int64_t x42 = INT64_MIN;
	volatile int32_t x43 = INT32_MIN;
	static volatile int32_t x44 = INT32_MIN;
	volatile int32_t t9 = 1693;

	t9 = ((x41/(x42&x43))<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 1639;
	static volatile int32_t x46 = 692;
	int8_t x47 = INT8_MAX;
	int8_t x48 = INT8_MIN;
	int32_t t10 = -8716;

	t10 = ((x45/(x46&x47))<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = -1LL;
	int8_t x54 = INT8_MIN;
	static uint16_t x55 = UINT16_MAX;

	t11 = ((x53/(x54&x55))<=x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x62 = 1U;
	int8_t x63 = 35;
	volatile int32_t t12 = -38410479;

	t12 = ((x61/(x62&x63))<=x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x66 = 7463264U;
	volatile int8_t x67 = INT8_MAX;
	static int32_t t13 = -1;

	t13 = ((x65/(x66&x67))<=x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = -1LL;
	int64_t x70 = 58LL;
	int16_t x71 = -1;
	uint16_t x72 = 12241U;

	t14 = ((x69/(x70&x71))<=x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x74 = 28U;
	int8_t x75 = 30;
	volatile int32_t x76 = -1;
	volatile int32_t t15 = 0;

	t15 = ((x73/(x74&x75))<=x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MIN;
	int8_t x78 = INT8_MAX;
	int32_t x79 = -1;
	int32_t x80 = INT32_MIN;
	volatile int32_t t16 = -6552737;

	t16 = ((x77/(x78&x79))<=x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 1264U;
	volatile uint16_t x82 = 12292U;
	static uint8_t x83 = 29U;
	uint32_t x84 = 23113U;
	int32_t t17 = 8;

	t17 = ((x81/(x82&x83))<=x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = -3190;
	uint64_t x86 = 4100338433393LLU;
	static uint8_t x87 = 55U;
	int32_t t18 = -1791944;

	t18 = ((x85/(x86&x87))<=x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x89 = 0;
	uint64_t x90 = UINT64_MAX;
	int16_t x91 = 3321;
	int64_t x92 = -5958208757801287LL;
	int32_t t19 = 3544913;

	t19 = ((x89/(x90&x91))<=x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x97 = -9126981;
	int32_t x100 = INT32_MAX;
	volatile int32_t t20 = 929657;

	t20 = ((x97/(x98&x99))<=x100);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = -10;
	int64_t x102 = -1LL;
	int16_t x103 = INT16_MIN;
	int32_t t21 = -17279;

	t21 = ((x101/(x102&x103))<=x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x105 = -23;
	uint32_t x106 = 115U;
	int32_t x107 = -1;

	t22 = ((x105/(x106&x107))<=x108);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x109 = 9U;
	uint32_t x110 = UINT32_MAX;
	int8_t x111 = INT8_MIN;
	static volatile int32_t x112 = INT32_MIN;
	int32_t t23 = -15529;

	t23 = ((x109/(x110&x111))<=x112);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x113 = 122420854LLU;
	uint64_t x115 = 13029LLU;
	static int32_t x116 = 12;
	volatile int32_t t24 = 344731584;

	t24 = ((x113/(x114&x115))<=x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = 1LL;
	uint16_t x122 = UINT16_MAX;
	int16_t x123 = INT16_MIN;
	volatile int32_t t25 = -306914108;

	t25 = ((x121/(x122&x123))<=x124);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x125 = 871094848U;
	static uint32_t x126 = 639U;
	int64_t x127 = INT64_MAX;
	int32_t x128 = 10292270;
	int32_t t26 = 709;

	t26 = ((x125/(x126&x127))<=x128);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x129 = 58739U;
	int32_t x130 = INT32_MAX;
	static uint8_t x131 = 10U;
	uint64_t x132 = 2753696456311710LLU;
	static volatile int32_t t27 = 0;

	t27 = ((x129/(x130&x131))<=x132);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x134 = 1883748U;
	int64_t x136 = -19888244LL;

	t28 = ((x133/(x134&x135))<=x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x138 = -1;
	int8_t x140 = INT8_MIN;
	static int32_t t29 = 312;

	t29 = ((x137/(x138&x139))<=x140);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x141 = INT8_MIN;
	int32_t x142 = -1;
	volatile uint8_t x143 = UINT8_MAX;
	static int32_t x144 = -1;

	t30 = ((x141/(x142&x143))<=x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x145 = 340156019087266311LL;
	int32_t x146 = -32213;
	int16_t x147 = INT16_MIN;
	static uint64_t x148 = UINT64_MAX;
	static volatile int32_t t31 = -37;

	t31 = ((x145/(x146&x147))<=x148);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MAX;
	static int32_t x150 = -1;
	static int8_t x151 = -1;
	int32_t t32 = -425537;

	t32 = ((x149/(x150&x151))<=x152);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x153 = 486827LLU;
	uint16_t x154 = 757U;
	int8_t x155 = -15;
	int32_t t33 = 2;

	t33 = ((x153/(x154&x155))<=x156);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x158 = UINT64_MAX;
	int32_t x160 = INT32_MIN;

	t34 = ((x157/(x158&x159))<=x160);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x165 = 5;
	static uint32_t x166 = 6609532U;
	int32_t x167 = 3083;
	volatile int32_t x168 = INT32_MAX;
	int32_t t35 = 710275382;

	t35 = ((x165/(x166&x167))<=x168);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x169 = 5U;
	uint16_t x172 = 2U;
	volatile int32_t t36 = 3;

	t36 = ((x169/(x170&x171))<=x172);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x177 = UINT32_MAX;
	uint16_t x178 = UINT16_MAX;
	uint16_t x179 = 2U;
	int16_t x180 = INT16_MIN;
	int32_t t37 = -896144242;

	t37 = ((x177/(x178&x179))<=x180);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = -1;
	int8_t x182 = 1;
	int32_t x183 = -1;
	int32_t x184 = INT32_MAX;
	int32_t t38 = -1;

	t38 = ((x181/(x182&x183))<=x184);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = INT8_MIN;
	uint64_t x186 = UINT64_MAX;
	uint32_t x188 = UINT32_MAX;
	static int32_t t39 = -878;

	t39 = ((x185/(x186&x187))<=x188);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = 2943U;
	uint32_t x194 = 3U;
	int64_t x195 = 3330774426LL;
	uint32_t x196 = UINT32_MAX;
	volatile int32_t t40 = -22;

	t40 = ((x193/(x194&x195))<=x196);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x202 = 85;
	int64_t x203 = -2588255819788LL;
	int32_t t41 = 49710;

	t41 = ((x201/(x202&x203))<=x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x205 = INT16_MAX;
	uint64_t x206 = 54499LLU;
	uint16_t x207 = 5U;
	uint16_t x208 = 91U;
	volatile int32_t t42 = 5815;

	t42 = ((x205/(x206&x207))<=x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x217 = 8;
	int16_t x218 = 301;
	int64_t x220 = INT64_MIN;
	volatile int32_t t43 = 180;

	t43 = ((x217/(x218&x219))<=x220);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x221 = 2U;
	int8_t x222 = INT8_MAX;
	static volatile uint32_t x223 = UINT32_MAX;
	static int8_t x224 = 0;
	static int32_t t44 = -31122267;

	t44 = ((x221/(x222&x223))<=x224);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t t45 = 22299;

	t45 = ((x229/(x230&x231))<=x232);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x233 = 1695U;
	volatile uint16_t x234 = UINT16_MAX;
	static volatile uint8_t x235 = 5U;
	uint8_t x236 = 16U;
	volatile int32_t t46 = 0;

	t46 = ((x233/(x234&x235))<=x236);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x250 = 1486;
	static int16_t x251 = -1;
	static int32_t t47 = -6;

	t47 = ((x249/(x250&x251))<=x252);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x254 = 1;
	static uint64_t x255 = UINT64_MAX;
	static int8_t x256 = -1;

	t48 = ((x253/(x254&x255))<=x256);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x269 = INT8_MIN;
	int32_t x271 = -176829;
	uint64_t x272 = UINT64_MAX;

	t49 = ((x269/(x270&x271))<=x272);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x273 = UINT64_MAX;
	volatile int32_t x274 = 18271883;
	static uint16_t x275 = UINT16_MAX;
	int16_t x276 = INT16_MIN;
	volatile int32_t t50 = 254;

	t50 = ((x273/(x274&x275))<=x276);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x277 = UINT8_MAX;
	uint64_t x279 = 9483LLU;
	int64_t x280 = -9114LL;
	volatile int32_t t51 = -7;

	t51 = ((x277/(x278&x279))<=x280);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x282 = -1;
	uint8_t x283 = 1U;
	volatile uint16_t x284 = UINT16_MAX;
	volatile int32_t t52 = -1;

	t52 = ((x281/(x282&x283))<=x284);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x285 = 1387U;
	uint32_t x287 = 285154590U;
	static volatile int64_t x288 = INT64_MAX;
	static int32_t t53 = -390274;

	t53 = ((x285/(x286&x287))<=x288);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x289 = 17U;
	static int16_t x292 = -15959;
	static int32_t t54 = -928310;

	t54 = ((x289/(x290&x291))<=x292);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int8_t x302 = -1;
	int32_t x303 = INT32_MIN;
	int16_t x304 = -1;
	int32_t t55 = 80791;

	t55 = ((x301/(x302&x303))<=x304);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x306 = UINT16_MAX;
	volatile uint64_t x307 = UINT64_MAX;
	int32_t t56 = 920958386;

	t56 = ((x305/(x306&x307))<=x308);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x309 = -1;
	uint16_t x310 = 7U;
	int8_t x311 = -2;
	volatile int32_t t57 = -24804332;

	t57 = ((x309/(x310&x311))<=x312);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x321 = INT16_MIN;
	int64_t x322 = 2054887546708249LL;

	t58 = ((x321/(x322&x323))<=x324);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x329 = 62U;
	int16_t x330 = INT16_MIN;
	static int16_t x331 = INT16_MIN;
	int16_t x332 = -1;
	int32_t t59 = -722;

	t59 = ((x329/(x330&x331))<=x332);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x333 = UINT8_MAX;
	static uint64_t x334 = 1476LLU;
	int16_t x336 = 12175;
	volatile int32_t t60 = 26558009;

	t60 = ((x333/(x334&x335))<=x336);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x337 = INT16_MAX;
	uint64_t x338 = 209140048069LLU;
	int64_t x339 = INT64_MAX;
	int8_t x340 = -1;

	t61 = ((x337/(x338&x339))<=x340);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x341 = INT64_MIN;
	static volatile uint32_t x342 = 1053584237U;
	volatile int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MAX;
	static volatile int32_t t62 = -741244;

	t62 = ((x341/(x342&x343))<=x344);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x345 = 302204975;
	int8_t x346 = INT8_MIN;
	int64_t x347 = INT64_MIN;
	int16_t x348 = -13;
	int32_t t63 = -430;

	t63 = ((x345/(x346&x347))<=x348);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x349 = INT16_MAX;
	int32_t x350 = -1;
	int32_t x351 = -1;
	int8_t x352 = 7;
	int32_t t64 = 14193;

	t64 = ((x349/(x350&x351))<=x352);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x353 = 975;
	int64_t x354 = INT64_MAX;
	uint16_t x355 = 10U;
	volatile int32_t x356 = -7767735;
	int32_t t65 = -877504;

	t65 = ((x353/(x354&x355))<=x356);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x357 = -1;
	int8_t x358 = -10;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t66 = 140913767;

	t66 = ((x357/(x358&x359))<=x360);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x361 = -1644324834199439535LL;
	static volatile uint64_t x363 = 63LLU;
	int16_t x364 = -1;
	int32_t t67 = 20263;

	t67 = ((x361/(x362&x363))<=x364);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x366 = 153406012U;
	uint64_t x367 = UINT64_MAX;
	volatile int32_t t68 = 0;

	t68 = ((x365/(x366&x367))<=x368);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x369 = 237U;
	int16_t x370 = 7;
	static uint16_t x371 = 21853U;

	t69 = ((x369/(x370&x371))<=x372);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x373 = INT64_MAX;
	volatile int64_t x374 = -1LL;
	int32_t x375 = INT32_MAX;
	static volatile uint8_t x376 = UINT8_MAX;
	int32_t t70 = 1;

	t70 = ((x373/(x374&x375))<=x376);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x377 = UINT32_MAX;
	volatile int32_t t71 = 10714742;

	t71 = ((x377/(x378&x379))<=x380);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x381 = INT64_MIN;
	int16_t x383 = INT16_MAX;
	volatile int32_t t72 = 60842;

	t72 = ((x381/(x382&x383))<=x384);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x385 = INT32_MAX;
	int64_t x386 = -1LL;
	int16_t x388 = -1;

	t73 = ((x385/(x386&x387))<=x388);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x389 = 2470517408422519411LL;
	uint32_t x391 = 7039U;
	volatile int32_t t74 = -12900695;

	t74 = ((x389/(x390&x391))<=x392);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x399 = -97;

	t75 = ((x397/(x398&x399))<=x400);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x401 = 1797;
	uint32_t x402 = 451U;
	uint8_t x404 = UINT8_MAX;
	volatile int32_t t76 = 126491832;

	t76 = ((x401/(x402&x403))<=x404);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x406 = INT8_MAX;
	volatile uint32_t x407 = 116460778U;
	uint32_t x408 = 61376534U;
	volatile int32_t t77 = 1137711;

	t77 = ((x405/(x406&x407))<=x408);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x409 = INT16_MIN;
	static volatile uint64_t x411 = 150798425LLU;
	int16_t x412 = -775;
	volatile int32_t t78 = 1635196;

	t78 = ((x409/(x410&x411))<=x412);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x413 = UINT8_MAX;
	int32_t x414 = -3;
	int64_t x415 = -1LL;
	uint16_t x416 = 1494U;

	t79 = ((x413/(x414&x415))<=x416);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x417 = 15U;
	uint64_t x418 = 27253097414LLU;
	static int64_t x419 = 40870823LL;
	volatile int32_t t80 = -40695;

	t80 = ((x417/(x418&x419))<=x420);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x421 = 132U;
	static uint64_t x422 = 6845514864LLU;
	int32_t x423 = INT32_MAX;
	int16_t x424 = -20;
	int32_t t81 = 68;

	t81 = ((x421/(x422&x423))<=x424);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x425 = 849250844;
	volatile uint64_t x426 = 875716730444370732LLU;
	uint8_t x427 = UINT8_MAX;
	int32_t x428 = INT32_MIN;
	volatile int32_t t82 = -7832;

	t82 = ((x425/(x426&x427))<=x428);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x433 = 1720;
	static volatile int64_t x434 = -231LL;
	int64_t x435 = -1LL;
	int16_t x436 = 0;
	int32_t t83 = -199;

	t83 = ((x433/(x434&x435))<=x436);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x441 = INT64_MIN;
	int16_t x442 = 8692;
	int8_t x443 = INT8_MIN;
	volatile int32_t t84 = -242837811;

	t84 = ((x441/(x442&x443))<=x444);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x445 = 46140258040LLU;
	volatile int64_t x446 = INT64_MAX;
	uint64_t x447 = UINT64_MAX;
	int16_t x448 = INT16_MIN;

	t85 = ((x445/(x446&x447))<=x448);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x449 = INT8_MAX;
	uint32_t x450 = UINT32_MAX;
	uint64_t x452 = 372814LLU;
	int32_t t86 = 224240;

	t86 = ((x449/(x450&x451))<=x452);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x458 = -1LL;
	int16_t x459 = INT16_MIN;
	static int32_t x460 = INT32_MAX;
	volatile int32_t t87 = 60098;

	t87 = ((x457/(x458&x459))<=x460);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x461 = INT8_MIN;
	uint64_t x462 = UINT64_MAX;
	int8_t x463 = INT8_MIN;
	volatile int32_t t88 = 0;

	t88 = ((x461/(x462&x463))<=x464);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x465 = UINT32_MAX;
	static int64_t x466 = INT64_MIN;
	static int64_t x468 = -192115320LL;
	volatile int32_t t89 = -38361483;

	t89 = ((x465/(x466&x467))<=x468);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x469 = 10;
	volatile uint64_t x470 = 1LLU;
	int16_t x471 = -1;
	int32_t t90 = 963245;

	t90 = ((x469/(x470&x471))<=x472);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x473 = 8624382978643LL;
	int16_t x474 = INT16_MIN;
	uint64_t x476 = UINT64_MAX;
	static int32_t t91 = 329;

	t91 = ((x473/(x474&x475))<=x476);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x477 = INT16_MIN;
	int64_t x478 = INT64_MAX;
	int64_t x479 = -1LL;
	uint8_t x480 = 81U;
	int32_t t92 = -690;

	t92 = ((x477/(x478&x479))<=x480);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x485 = INT32_MIN;
	uint64_t x486 = 12052610737LLU;
	static int8_t x487 = -1;
	int8_t x488 = -1;
	static volatile int32_t t93 = 14077141;

	t93 = ((x485/(x486&x487))<=x488);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x493 = -1;
	int64_t x494 = -1LL;
	int8_t x495 = -1;
	static int32_t x496 = INT32_MAX;
	static int32_t t94 = 498;

	t94 = ((x493/(x494&x495))<=x496);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x497 = UINT64_MAX;
	int32_t x498 = 10;
	volatile int32_t t95 = -6;

	t95 = ((x497/(x498&x499))<=x500);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x517 = 2U;
	int16_t x518 = INT16_MAX;
	int8_t x519 = -1;
	int16_t x520 = -1;
	volatile int32_t t96 = 514067993;

	t96 = ((x517/(x518&x519))<=x520);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x522 = 3;
	int8_t x524 = INT8_MIN;

	t97 = ((x521/(x522&x523))<=x524);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x525 = INT16_MIN;
	volatile uint8_t x528 = 7U;
	static volatile int32_t t98 = 1066168239;

	t98 = ((x525/(x526&x527))<=x528);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x529 = INT16_MAX;
	static uint64_t x530 = 441790301236662LLU;
	static uint8_t x531 = UINT8_MAX;
	volatile uint32_t x532 = 31610U;
	static int32_t t99 = 7079142;

	t99 = ((x529/(x530&x531))<=x532);

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

