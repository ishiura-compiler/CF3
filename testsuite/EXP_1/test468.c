#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x17 = 2U;
int8_t x20 = -1;
int32_t t1 = -13753;
static volatile uint64_t x30 = 7LLU;
static int64_t x31 = -1LL;
uint8_t x32 = UINT8_MAX;
volatile uint16_t x34 = 3U;
int8_t x35 = 12;
int8_t x41 = 51;
volatile int8_t x46 = -2;
int32_t x52 = INT32_MIN;
int64_t x56 = INT64_MIN;
int64_t t8 = INT64_MIN;
volatile uint64_t x57 = 943861892482992702LLU;
uint64_t x60 = UINT64_MAX;
int16_t x66 = 1866;
volatile int32_t x68 = -1;
int8_t x75 = INT8_MIN;
volatile int32_t t14 = -2345695;
int16_t x103 = INT16_MIN;
static uint8_t x104 = UINT8_MAX;
volatile int32_t t17 = 50610;
uint32_t x105 = 786461U;
volatile int64_t x107 = INT64_MIN;
int16_t x117 = 0;
uint64_t x118 = UINT64_MAX;
static uint32_t x119 = UINT32_MAX;
static volatile int32_t t21 = 421252563;
volatile int8_t x121 = INT8_MIN;
volatile int16_t x131 = 115;
int8_t x136 = -21;
int16_t x148 = -1;
int16_t x150 = -1;
int32_t x151 = -1039748;
int16_t x153 = 4507;
volatile int64_t x157 = -1LL;
uint32_t x158 = UINT32_MAX;
volatile int32_t t31 = -120313304;
static int8_t x173 = INT8_MIN;
int8_t x204 = INT8_MAX;
int32_t t37 = 0;
uint64_t x205 = UINT64_MAX;
int64_t x206 = -13066LL;
int16_t x211 = INT16_MIN;
int8_t x212 = -23;
volatile int32_t t39 = 21284689;
int32_t x217 = INT32_MAX;
volatile uint64_t x237 = 453480482273652LLU;
static uint16_t x238 = 2U;
int8_t x247 = -1;
int16_t x248 = -1;
volatile int32_t t43 = 132;
uint32_t x249 = 46566045U;
static int64_t x252 = -811LL;
uint8_t x257 = 0U;
static volatile int16_t x259 = INT16_MAX;
volatile int32_t t49 = 86;
uint16_t x280 = UINT16_MAX;
static int16_t x282 = 301;
uint64_t x291 = 587772636974LLU;
int32_t t52 = -1230;
uint32_t t53 = 13709U;
int32_t x300 = INT32_MAX;
static int64_t x303 = -1LL;
static uint64_t x313 = UINT64_MAX;
int32_t x325 = -12621;
volatile int64_t x327 = 10858181LL;
uint8_t x328 = UINT8_MAX;
uint32_t x330 = 1764U;
int8_t x345 = 14;
int32_t t62 = 10;
uint8_t x349 = 108U;
static int8_t x351 = -27;
int64_t t64 = 13442LL;
int64_t x375 = -9163209773659LL;
uint8_t x383 = 0U;
volatile int64_t x384 = INT64_MAX;
int64_t x388 = INT64_MIN;
int64_t t71 = INT64_MIN;
uint32_t t72 = 1U;
static int32_t x398 = 1027;
int32_t x400 = INT32_MIN;
static int16_t x408 = 214;
volatile int32_t x412 = INT32_MIN;
uint32_t x413 = 1745022156U;
uint8_t x416 = UINT8_MAX;
static int16_t x423 = INT16_MIN;
int32_t x426 = -1;
int64_t x432 = 751594LL;
int64_t x435 = -1LL;
static volatile uint8_t x438 = 0U;
uint16_t x442 = 17938U;
static volatile int64_t x443 = 681566LL;
static int64_t x444 = -39098LL;
static int32_t t83 = 235970518;
volatile int16_t x454 = INT16_MAX;
uint16_t x455 = UINT16_MAX;
static uint64_t x465 = 2991511856488LLU;
uint32_t x472 = 15189U;
volatile uint32_t t90 = 19453U;
uint64_t x489 = UINT64_MAX;
int16_t x491 = INT16_MIN;
int8_t x493 = -1;
volatile int64_t t93 = -17LL;
int16_t x510 = INT16_MIN;
int16_t x514 = 0;
volatile int16_t x516 = INT16_MAX;
int8_t x526 = INT8_MIN;
int8_t x532 = 7;


void f0(void) {
	int8_t x18 = 30;
	int64_t x19 = INT64_MAX;
	volatile int32_t t0 = -497066;

	t0 = (((x17*x18)<=x19)^x20);

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x25 = -2084051LL;
	int32_t x26 = INT32_MIN;
	volatile int64_t x27 = INT64_MIN;
	int32_t x28 = -1;

	t1 = (((x25*x26)<=x27)^x28);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x29 = -1430LL;
	volatile int32_t t2 = 431030;

	t2 = (((x29*x30)<=x31)^x32);

	if (t2 != 254) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x33 = 0;
	int8_t x36 = 14;
	static int32_t t3 = -1426;

	t3 = (((x33*x34)<=x35)^x36);

	if (t3 != 15) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x37 = -1;
	int8_t x38 = INT8_MIN;
	static int16_t x39 = INT16_MAX;
	uint32_t x40 = UINT32_MAX;
	uint32_t t4 = 3815195U;

	t4 = (((x37*x38)<=x39)^x40);

	if (t4 != 4294967294U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x42 = UINT64_MAX;
	volatile int64_t x43 = 341006558006LL;
	volatile uint32_t x44 = 110U;
	volatile uint32_t t5 = 12U;

	t5 = (((x41*x42)<=x43)^x44);

	if (t5 != 110U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x45 = -3205980656LL;
	uint32_t x47 = UINT32_MAX;
	int16_t x48 = INT16_MAX;
	static volatile int32_t t6 = 2;

	t6 = (((x45*x46)<=x47)^x48);

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x49 = UINT8_MAX;
	int8_t x50 = INT8_MIN;
	volatile uint8_t x51 = 6U;
	int32_t t7 = 1037000140;

	t7 = (((x49*x50)<=x51)^x52);

	if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x53 = 5280U;
	int8_t x54 = -1;
	static uint64_t x55 = 119LLU;

	t8 = (((x53*x54)<=x55)^x56);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x58 = 9397U;
	int64_t x59 = INT64_MIN;
	static uint64_t t9 = UINT64_MAX;

	t9 = (((x57*x58)<=x59)^x60);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x61 = INT8_MAX;
	int16_t x62 = INT16_MIN;
	int32_t x63 = INT32_MAX;
	uint32_t x64 = UINT32_MAX;
	uint32_t t10 = 121544304U;

	t10 = (((x61*x62)<=x63)^x64);

	if (t10 != 4294967294U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x65 = 112U;
	int64_t x67 = INT64_MAX;
	int32_t t11 = -1824;

	t11 = (((x65*x66)<=x67)^x68);

	if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x69 = UINT64_MAX;
	int64_t x70 = -3235166185488164LL;
	int16_t x71 = INT16_MIN;
	volatile int64_t x72 = INT64_MAX;
	volatile int64_t t12 = 302187079LL;

	t12 = (((x69*x70)<=x71)^x72);

	if (t12 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x73 = 247098LLU;
	volatile int64_t x74 = INT64_MIN;
	volatile int64_t x76 = INT64_MAX;
	int64_t t13 = -555609130676438LL;

	t13 = (((x73*x74)<=x75)^x76);

	if (t13 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x77 = 19;
	static int64_t x78 = -1LL;
	int64_t x79 = 12LL;
	int8_t x80 = INT8_MIN;

	t14 = (((x77*x78)<=x79)^x80);

	if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = -1;
	volatile uint64_t x82 = 14480238892LLU;
	static int8_t x83 = -38;
	static volatile uint16_t x84 = 704U;
	static volatile int32_t t15 = 62;

	t15 = (((x81*x82)<=x83)^x84);

	if (t15 != 705) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x85 = 2U;
	uint8_t x86 = 7U;
	uint8_t x87 = UINT8_MAX;
	static int8_t x88 = INT8_MIN;
	static int32_t t16 = 34958;

	t16 = (((x85*x86)<=x87)^x88);

	if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x101 = 138485436U;
	int32_t x102 = -380985298;

	t17 = (((x101*x102)<=x103)^x104);

	if (t17 != 254) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x106 = 1733U;
	uint8_t x108 = UINT8_MAX;
	int32_t t18 = 260379;

	t18 = (((x105*x106)<=x107)^x108);

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x109 = UINT64_MAX;
	int32_t x110 = INT32_MIN;
	int64_t x111 = INT64_MIN;
	int64_t x112 = INT64_MIN;
	int64_t t19 = -1584849521390926485LL;

	t19 = (((x109*x110)<=x111)^x112);

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = -26;
	uint64_t x114 = 158270635LLU;
	uint16_t x115 = 1945U;
	int64_t x116 = 619555720414890LL;
	int64_t t20 = -188720125892LL;

	t20 = (((x113*x114)<=x115)^x116);

	if (t20 != 619555720414890LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x120 = -1;

	t21 = (((x117*x118)<=x119)^x120);

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x122 = 1532164U;
	uint32_t x123 = UINT32_MAX;
	int32_t x124 = -1;
	int32_t t22 = -62;

	t22 = (((x121*x122)<=x123)^x124);

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x125 = 6059074318LLU;
	int32_t x126 = -7325;
	uint32_t x127 = UINT32_MAX;
	static volatile int8_t x128 = INT8_MIN;
	static volatile int32_t t23 = -18;

	t23 = (((x125*x126)<=x127)^x128);

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x129 = 40U;
	uint32_t x130 = UINT32_MAX;
	int32_t x132 = 226864233;
	static int32_t t24 = -1619383;

	t24 = (((x129*x130)<=x131)^x132);

	if (t24 != 226864233) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x133 = INT8_MAX;
	static uint64_t x134 = UINT64_MAX;
	int16_t x135 = INT16_MIN;
	volatile int32_t t25 = 747184302;

	t25 = (((x133*x134)<=x135)^x136);

	if (t25 != -21) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x145 = 1;
	uint32_t x146 = 28415U;
	int16_t x147 = INT16_MAX;
	int32_t t26 = -6;

	t26 = (((x145*x146)<=x147)^x148);

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x149 = INT64_MAX;
	static int16_t x152 = -1;
	static volatile int32_t t27 = 39890613;

	t27 = (((x149*x150)<=x151)^x152);

	if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x154 = 90LLU;
	int64_t x155 = INT64_MAX;
	static volatile int16_t x156 = -1;
	static int32_t t28 = -1;

	t28 = (((x153*x154)<=x155)^x156);

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x159 = 4U;
	int16_t x160 = -1;
	volatile int32_t t29 = 85;

	t29 = (((x157*x158)<=x159)^x160);

	if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x165 = 7660U;
	uint64_t x166 = 452213624048LLU;
	static int16_t x167 = -27;
	int8_t x168 = INT8_MIN;
	volatile int32_t t30 = 4581;

	t30 = (((x165*x166)<=x167)^x168);

	if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x169 = 5U;
	int16_t x170 = -1;
	int16_t x171 = -1;
	volatile int8_t x172 = -1;

	t31 = (((x169*x170)<=x171)^x172);

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x174 = -1LL;
	uint8_t x175 = UINT8_MAX;
	volatile uint64_t x176 = 13350297285LLU;
	static uint64_t t32 = 31454LLU;

	t32 = (((x173*x174)<=x175)^x176);

	if (t32 != 13350297284LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x177 = -852666543;
	uint32_t x178 = UINT32_MAX;
	int16_t x179 = INT16_MIN;
	volatile int16_t x180 = -1;
	int32_t t33 = 33359;

	t33 = (((x177*x178)<=x179)^x180);

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x181 = -3556904;
	static uint32_t x182 = 51395639U;
	int8_t x183 = -19;
	int32_t x184 = 0;
	volatile int32_t t34 = -230168462;

	t34 = (((x181*x182)<=x183)^x184);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x189 = INT32_MIN;
	uint32_t x190 = UINT32_MAX;
	volatile uint8_t x191 = UINT8_MAX;
	int8_t x192 = -1;
	volatile int32_t t35 = -243;

	t35 = (((x189*x190)<=x191)^x192);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MAX;
	uint16_t x196 = 6U;
	int32_t t36 = -189;

	t36 = (((x193*x194)<=x195)^x196);

	if (t36 != 7) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x201 = 1LLU;
	uint32_t x202 = 8295375U;
	static int32_t x203 = INT32_MAX;

	t37 = (((x201*x202)<=x203)^x204);

	if (t37 != 126) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x207 = INT64_MAX;
	int8_t x208 = -2;
	volatile int32_t t38 = -203932;

	t38 = (((x205*x206)<=x207)^x208);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x209 = UINT16_MAX;
	volatile int8_t x210 = 3;

	t39 = (((x209*x210)<=x211)^x212);

	if (t39 != -23) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x218 = -1;
	static int32_t x219 = 4099372;
	int32_t x220 = INT32_MIN;
	volatile int32_t t40 = 405221200;

	t40 = (((x217*x218)<=x219)^x220);

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x239 = -1;
	int64_t x240 = -376909LL;
	static volatile int64_t t41 = -218919992841488LL;

	t41 = (((x237*x238)<=x239)^x240);

	if (t41 != -376910LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x241 = -1;
	volatile int32_t x242 = INT32_MAX;
	int16_t x243 = -1;
	int64_t x244 = INT64_MAX;
	volatile int64_t t42 = -6874243506989780LL;

	t42 = (((x241*x242)<=x243)^x244);

	if (t42 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x245 = INT16_MAX;
	uint8_t x246 = 41U;

	t43 = (((x245*x246)<=x247)^x248);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x250 = INT32_MAX;
	uint64_t x251 = UINT64_MAX;
	static int64_t t44 = -1455036344721713LL;

	t44 = (((x249*x250)<=x251)^x252);

	if (t44 != -812LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x253 = 309082012U;
	volatile uint32_t x254 = 501134U;
	static int8_t x255 = 0;
	int64_t x256 = INT64_MIN;
	volatile int64_t t45 = INT64_MIN;

	t45 = (((x253*x254)<=x255)^x256);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x258 = 4U;
	static int32_t x260 = 31684899;
	volatile int32_t t46 = 17355;

	t46 = (((x257*x258)<=x259)^x260);

	if (t46 != 31684898) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x261 = 25U;
	int32_t x262 = -47862;
	volatile int64_t x263 = 3983808723546344384LL;
	uint16_t x264 = 27632U;
	int32_t t47 = -821794;

	t47 = (((x261*x262)<=x263)^x264);

	if (t47 != 27633) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x269 = INT16_MAX;
	volatile uint32_t x270 = 3U;
	volatile int16_t x271 = INT16_MIN;
	static int32_t x272 = INT32_MIN;
	int32_t t48 = -1;

	t48 = (((x269*x270)<=x271)^x272);

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x273 = 2U;
	volatile int64_t x274 = -1LL;
	int16_t x275 = -1;
	int8_t x276 = INT8_MIN;

	t49 = (((x273*x274)<=x275)^x276);

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x277 = 0U;
	uint16_t x278 = 29U;
	int32_t x279 = -1053713320;
	static volatile int32_t t50 = -68;

	t50 = (((x277*x278)<=x279)^x280);

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x281 = -1;
	static int8_t x283 = INT8_MIN;
	int8_t x284 = INT8_MIN;
	static volatile int32_t t51 = -2261;

	t51 = (((x281*x282)<=x283)^x284);

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x289 = INT16_MIN;
	int8_t x290 = INT8_MIN;
	int32_t x292 = INT32_MIN;

	t52 = (((x289*x290)<=x291)^x292);

	if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x293 = -1;
	int16_t x294 = INT16_MIN;
	int64_t x295 = -1LL;
	uint32_t x296 = 128173U;

	t53 = (((x293*x294)<=x295)^x296);

	if (t53 != 128173U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x297 = -100732739;
	static int32_t x298 = -1;
	uint64_t x299 = 2266029277650713LLU;
	int32_t t54 = 857037283;

	t54 = (((x297*x298)<=x299)^x300);

	if (t54 != 2147483646) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x301 = -1LL;
	static volatile int32_t x302 = INT32_MIN;
	uint64_t x304 = UINT64_MAX;
	uint64_t t55 = UINT64_MAX;

	t55 = (((x301*x302)<=x303)^x304);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x309 = 288812286255154LLU;
	volatile int64_t x310 = -1LL;
	static int8_t x311 = -23;
	uint32_t x312 = 15818625U;
	uint32_t t56 = 1007478749U;

	t56 = (((x309*x310)<=x311)^x312);

	if (t56 != 15818624U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x314 = INT16_MIN;
	int32_t x315 = INT32_MAX;
	static uint8_t x316 = UINT8_MAX;
	volatile int32_t t57 = -15753;

	t57 = (((x313*x314)<=x315)^x316);

	if (t57 != 254) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x321 = 1U;
	int64_t x322 = -1468959274341172340LL;
	static int32_t x323 = 55549505;
	int16_t x324 = -1;
	volatile int32_t t58 = 134125;

	t58 = (((x321*x322)<=x323)^x324);

	if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x326 = INT8_MAX;
	volatile int32_t t59 = -993;

	t59 = (((x325*x326)<=x327)^x328);

	if (t59 != 254) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x329 = INT8_MAX;
	uint16_t x331 = 1007U;
	uint64_t x332 = 5LLU;
	static uint64_t t60 = 256891606396854824LLU;

	t60 = (((x329*x330)<=x331)^x332);

	if (t60 != 5LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x337 = 453138097080LLU;
	int32_t x338 = INT32_MIN;
	int32_t x339 = -127;
	uint64_t x340 = UINT64_MAX;
	uint64_t t61 = 11081LLU;

	t61 = (((x337*x338)<=x339)^x340);

	if (t61 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x346 = 275U;
	static int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MAX;

	t62 = (((x345*x346)<=x347)^x348);

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x350 = 13611104LL;
	int64_t x352 = INT64_MAX;
	volatile int64_t t63 = INT64_MAX;

	t63 = (((x349*x350)<=x351)^x352);

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x353 = 19567U;
	uint8_t x354 = 0U;
	int16_t x355 = -196;
	volatile int64_t x356 = -1LL;

	t64 = (((x353*x354)<=x355)^x356);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x361 = UINT8_MAX;
	uint8_t x362 = 0U;
	int64_t x363 = INT64_MAX;
	volatile int32_t x364 = INT32_MAX;
	volatile int32_t t65 = 4445;

	t65 = (((x361*x362)<=x363)^x364);

	if (t65 != 2147483646) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x365 = UINT32_MAX;
	int32_t x366 = -22981;
	uint16_t x367 = 8190U;
	uint8_t x368 = 1U;
	static int32_t t66 = -96031;

	t66 = (((x365*x366)<=x367)^x368);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x369 = 119;
	int8_t x370 = INT8_MIN;
	volatile int64_t x371 = INT64_MIN;
	uint16_t x372 = 1085U;
	volatile int32_t t67 = 29671721;

	t67 = (((x369*x370)<=x371)^x372);

	if (t67 != 1085) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x373 = -1;
	static int64_t x374 = -1LL;
	static int64_t x376 = INT64_MIN;
	int64_t t68 = INT64_MIN;

	t68 = (((x373*x374)<=x375)^x376);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x377 = -725;
	int8_t x378 = INT8_MIN;
	static int32_t x379 = 82624;
	volatile int64_t x380 = -393861LL;
	volatile int64_t t69 = -177764718400802385LL;

	t69 = (((x377*x378)<=x379)^x380);

	if (t69 != -393861LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x381 = UINT64_MAX;
	volatile uint64_t x382 = 456951163414435422LLU;
	volatile int64_t t70 = INT64_MAX;

	t70 = (((x381*x382)<=x383)^x384);

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x385 = UINT64_MAX;
	volatile uint8_t x386 = 13U;
	int16_t x387 = INT16_MAX;

	t71 = (((x385*x386)<=x387)^x388);

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x389 = -1;
	static int16_t x390 = -8;
	volatile int32_t x391 = -61505972;
	uint32_t x392 = 1U;

	t72 = (((x389*x390)<=x391)^x392);

	if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x397 = INT8_MAX;
	int64_t x399 = -1LL;
	int32_t t73 = INT32_MIN;

	t73 = (((x397*x398)<=x399)^x400);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x405 = UINT16_MAX;
	int32_t x406 = -1;
	uint16_t x407 = UINT16_MAX;
	volatile int32_t t74 = 8;

	t74 = (((x405*x406)<=x407)^x408);

	if (t74 != 215) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x409 = 0U;
	int16_t x410 = -1;
	int32_t x411 = -1;
	volatile int32_t t75 = INT32_MIN;

	t75 = (((x409*x410)<=x411)^x412);

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x414 = 1U;
	uint32_t x415 = 9492U;
	static volatile int32_t t76 = 187145;

	t76 = (((x413*x414)<=x415)^x416);

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x421 = INT8_MAX;
	uint64_t x422 = 5183LLU;
	uint16_t x424 = 21545U;
	volatile int32_t t77 = -6364834;

	t77 = (((x421*x422)<=x423)^x424);

	if (t77 != 21544) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x425 = UINT32_MAX;
	static int64_t x427 = 25854LL;
	static volatile int64_t x428 = 15277LL;
	int64_t t78 = -107049352LL;

	t78 = (((x425*x426)<=x427)^x428);

	if (t78 != 15276LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x429 = 8814LL;
	int32_t x430 = INT32_MIN;
	int32_t x431 = INT32_MIN;
	int64_t t79 = -21306240LL;

	t79 = (((x429*x430)<=x431)^x432);

	if (t79 != 751595LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x433 = 2U;
	int32_t x434 = 8180;
	int8_t x436 = INT8_MIN;
	int32_t t80 = 133073;

	t80 = (((x433*x434)<=x435)^x436);

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x437 = 274U;
	static int32_t x439 = 14;
	int8_t x440 = INT8_MIN;
	static volatile int32_t t81 = 93;

	t81 = (((x437*x438)<=x439)^x440);

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x441 = INT8_MIN;
	volatile int64_t t82 = -42016466LL;

	t82 = (((x441*x442)<=x443)^x444);

	if (t82 != -39097LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x445 = -21;
	static volatile uint64_t x446 = UINT64_MAX;
	static volatile uint8_t x447 = UINT8_MAX;
	volatile uint16_t x448 = UINT16_MAX;

	t83 = (((x445*x446)<=x447)^x448);

	if (t83 != 65534) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x449 = -81;
	int8_t x450 = -9;
	volatile uint64_t x451 = UINT64_MAX;
	static int16_t x452 = 5178;
	int32_t t84 = -721884;

	t84 = (((x449*x450)<=x451)^x452);

	if (t84 != 5179) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x453 = 0U;
	int16_t x456 = INT16_MIN;
	static int32_t t85 = -4032;

	t85 = (((x453*x454)<=x455)^x456);

	if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x457 = -1;
	static int8_t x458 = INT8_MIN;
	uint8_t x459 = UINT8_MAX;
	uint64_t x460 = 10LLU;
	uint64_t t86 = 158LLU;

	t86 = (((x457*x458)<=x459)^x460);

	if (t86 != 11LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x461 = 89U;
	int64_t x462 = 387985LL;
	volatile int16_t x463 = 51;
	int16_t x464 = INT16_MIN;
	int32_t t87 = -22133;

	t87 = (((x461*x462)<=x463)^x464);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x466 = INT8_MIN;
	int8_t x467 = INT8_MAX;
	int8_t x468 = INT8_MIN;
	int32_t t88 = -84;

	t88 = (((x465*x466)<=x467)^x468);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x469 = 9144LLU;
	int64_t x470 = -211180928905LL;
	uint8_t x471 = 5U;
	uint32_t t89 = 31U;

	t89 = (((x469*x470)<=x471)^x472);

	if (t89 != 15189U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x477 = 35U;
	volatile int32_t x478 = INT32_MIN;
	uint32_t x479 = UINT32_MAX;
	uint32_t x480 = UINT32_MAX;

	t90 = (((x477*x478)<=x479)^x480);

	if (t90 != 4294967294U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x481 = 299LLU;
	int64_t x482 = INT64_MIN;
	int32_t x483 = -147975652;
	volatile int64_t x484 = INT64_MIN;
	int64_t t91 = 1529LL;

	t91 = (((x481*x482)<=x483)^x484);

	if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x490 = INT64_MAX;
	static int32_t x492 = INT32_MAX;
	volatile int32_t t92 = -40758595;

	t92 = (((x489*x490)<=x491)^x492);

	if (t92 != 2147483646) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x494 = INT8_MIN;
	volatile int16_t x495 = INT16_MIN;
	int64_t x496 = -3800LL;

	t93 = (((x493*x494)<=x495)^x496);

	if (t93 != -3800LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x501 = 1;
	static int16_t x502 = INT16_MAX;
	volatile int64_t x503 = INT64_MIN;
	int8_t x504 = 1;
	static int32_t t94 = -7;

	t94 = (((x501*x502)<=x503)^x504);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x505 = 0U;
	int64_t x506 = INT64_MIN;
	int8_t x507 = -7;
	volatile int64_t x508 = 0LL;
	int64_t t95 = -271440457662714LL;

	t95 = (((x505*x506)<=x507)^x508);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x509 = -1909;
	int8_t x511 = 0;
	static int64_t x512 = INT64_MIN;
	int64_t t96 = INT64_MIN;

	t96 = (((x509*x510)<=x511)^x512);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x513 = -1;
	int64_t x515 = INT64_MIN;
	static int32_t t97 = 26788;

	t97 = (((x513*x514)<=x515)^x516);

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x525 = -82781;
	volatile uint16_t x527 = 167U;
	int64_t x528 = -1LL;
	static int64_t t98 = 254542443LL;

	t98 = (((x525*x526)<=x527)^x528);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x529 = -1;
	static uint8_t x530 = 39U;
	int64_t x531 = 110289LL;
	volatile int32_t t99 = -756667;

	t99 = (((x529*x530)<=x531)^x532);

	if (t99 != 6) { NG(); } else { ; }
	
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

