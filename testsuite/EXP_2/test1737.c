#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = 365670109958LLU;
static uint16_t x9 = UINT16_MAX;
volatile uint16_t x16 = 21857U;
int16_t x20 = INT16_MIN;
uint64_t x26 = 46LLU;
int8_t x29 = INT8_MAX;
int32_t x34 = INT32_MAX;
volatile int32_t x40 = 5732;
int8_t x51 = INT8_MAX;
int32_t t11 = 1554296;
static int8_t x72 = -6;
volatile int64_t x73 = INT64_MAX;
int8_t x75 = INT8_MIN;
int32_t t18 = -46249;
uint16_t x87 = UINT16_MAX;
uint32_t x93 = 4232U;
int16_t x96 = INT16_MIN;
int32_t x100 = INT32_MAX;
static int32_t x103 = -59339;
volatile int64_t x106 = 106026467695422903LL;
volatile int16_t x114 = 3;
uint32_t x120 = UINT32_MAX;
int8_t x125 = INT8_MIN;
static int16_t x128 = -1;
uint64_t x134 = UINT64_MAX;
int16_t x141 = INT16_MIN;
int32_t t32 = -1;
uint32_t x153 = UINT32_MAX;
uint32_t x154 = UINT32_MAX;
int32_t x160 = INT32_MIN;
int8_t x163 = INT8_MAX;
int8_t x164 = -1;
uint32_t x170 = UINT32_MAX;
int64_t x181 = INT64_MAX;
uint64_t x195 = 1340511518LLU;
static int32_t t42 = 1;
static int16_t x197 = 2607;
static volatile int32_t t43 = 6;
int32_t x203 = -1;
int32_t t44 = 5339919;
int8_t x206 = -1;
static int64_t x207 = INT64_MIN;
int32_t t46 = -9846692;
int8_t x227 = -3;
volatile int32_t t49 = -489;
int16_t x230 = 9087;
int32_t t50 = -387;
volatile uint32_t x233 = UINT32_MAX;
uint32_t x238 = UINT32_MAX;
static uint64_t x246 = 181496LLU;
int32_t x249 = -1;
volatile int16_t x250 = 50;
uint16_t x251 = 25U;
static int32_t x252 = 663293542;
int32_t t55 = -63;
volatile uint32_t x255 = UINT32_MAX;
int32_t x268 = INT32_MIN;
int8_t x272 = 0;
volatile int32_t t59 = 914;
int32_t x281 = -208;
int32_t x286 = INT32_MAX;
int32_t x291 = INT32_MAX;
uint16_t x293 = 4154U;
static int16_t x301 = INT16_MAX;
int64_t x306 = -122LL;
uint64_t x307 = 33731LLU;
int32_t x308 = INT32_MIN;
static int64_t x312 = INT64_MAX;
static volatile int32_t t69 = 977309;
int32_t x320 = INT32_MIN;
volatile int32_t t71 = 200299339;
uint8_t x325 = 7U;
volatile int16_t x329 = INT16_MIN;
volatile int16_t x331 = -1;
int8_t x334 = 7;
uint64_t x335 = 1408451LLU;
int64_t x338 = -6LL;
int32_t x341 = -24313022;
int16_t x343 = 3011;
static int64_t x344 = 771168LL;
volatile int32_t t76 = 522062683;
uint64_t x351 = 1711927555LLU;
volatile int32_t t77 = -3820;
volatile int32_t x355 = 101;
volatile int64_t x371 = INT64_MAX;
volatile int32_t t81 = 0;
static int16_t x375 = INT16_MIN;
int32_t t83 = 760;
volatile int32_t t84 = -2;
uint64_t x391 = 28110259LLU;
volatile int32_t x392 = INT32_MAX;
int32_t t86 = -30;
static volatile int32_t x396 = INT32_MIN;
int8_t x406 = INT8_MIN;
int8_t x417 = -1;
volatile int32_t t93 = 265773083;
volatile int16_t x433 = -1;
volatile int32_t t94 = -14984677;
int32_t t95 = -10965;
volatile int32_t t96 = 196650;
uint32_t x457 = 241338692U;
uint32_t x458 = 31U;
int8_t x460 = INT8_MIN;
uint16_t x462 = UINT16_MAX;
uint16_t x464 = 0U;
int64_t x467 = -1LL;
volatile uint8_t x468 = UINT8_MAX;
int32_t t99 = -159080248;


void f0(void) {
	uint16_t x1 = 16195U;
	int16_t x2 = INT16_MAX;
	static volatile int8_t x3 = 3;
	int32_t x4 = -1;
	volatile int32_t t0 = 8;

	t0 = ((x1/(x2&x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = UINT32_MAX;
	volatile uint32_t x7 = UINT32_MAX;
	volatile uint8_t x8 = 22U;
	volatile int32_t t1 = -20645474;

	t1 = ((x5/(x6&x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -924856489310LL;
	static uint16_t x11 = UINT16_MAX;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = -155908;

	t2 = ((x9/(x10&x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = 178433;
	static volatile int8_t x14 = INT8_MIN;
	uint64_t x15 = 212LLU;
	int32_t t3 = 22948;

	t3 = ((x13/(x14&x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 491474797816LLU;
	int16_t x18 = 1;
	volatile int8_t x19 = INT8_MAX;
	static volatile int32_t t4 = 225;

	t4 = ((x17/(x18&x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	static int16_t x22 = 285;
	uint32_t x23 = UINT32_MAX;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 1;

	t5 = ((x21/(x22&x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 49U;
	int16_t x27 = -1;
	int8_t x28 = -1;
	volatile int32_t t6 = -98;

	t6 = ((x25/(x26&x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x30 = UINT8_MAX;
	int16_t x31 = -126;
	int32_t x32 = 124518080;
	int32_t t7 = 1;

	t7 = ((x29/(x30&x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = 8101;
	volatile uint8_t x35 = UINT8_MAX;
	int16_t x36 = INT16_MIN;
	static int32_t t8 = 97;

	t8 = ((x33/(x34&x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int32_t x38 = -1;
	int16_t x39 = INT16_MIN;
	volatile int32_t t9 = -59895;

	t9 = ((x37/(x38&x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	uint16_t x42 = UINT16_MAX;
	uint64_t x43 = 396180712733247935LLU;
	uint32_t x44 = 3591357U;
	int32_t t10 = 1482;

	t10 = ((x41/(x42&x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = INT32_MAX;
	int8_t x50 = -1;
	uint64_t x52 = 7494186720107543LLU;

	t11 = ((x49/(x50&x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	int64_t x54 = INT64_MIN;
	static int8_t x55 = -1;
	static volatile uint8_t x56 = UINT8_MAX;
	volatile int32_t t12 = -7118383;

	t12 = ((x53/(x54&x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	static int8_t x62 = -1;
	uint16_t x63 = 18030U;
	volatile int8_t x64 = -1;
	static int32_t t13 = 36174375;

	t13 = ((x61/(x62&x63))==x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x65 = 397923822851117282LLU;
	uint32_t x66 = UINT32_MAX;
	uint32_t x67 = 27U;
	uint16_t x68 = 981U;
	int32_t t14 = 26;

	t14 = ((x65/(x66&x67))==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x69 = -1LL;
	int16_t x70 = 13667;
	int32_t x71 = 31963080;
	int32_t t15 = -1152693;

	t15 = ((x69/(x70&x71))==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x74 = INT16_MIN;
	volatile int16_t x76 = -1;
	int32_t t16 = 1192;

	t16 = ((x73/(x74&x75))==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -27781730;
	int64_t x78 = -1LL;
	volatile int64_t x79 = INT64_MIN;
	int64_t x80 = 4736108309LL;
	static volatile int32_t t17 = 693;

	t17 = ((x77/(x78&x79))==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = 53738245LL;
	int16_t x82 = -7;
	uint32_t x83 = 219U;
	uint64_t x84 = UINT64_MAX;

	t18 = ((x81/(x82&x83))==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x85 = 1U;
	static int8_t x86 = -1;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t19 = 475720;

	t19 = ((x85/(x86&x87))==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = -1LL;
	uint32_t x91 = 151U;
	uint16_t x92 = 20U;
	int32_t t20 = -293892;

	t20 = ((x89/(x90&x91))==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x94 = INT32_MIN;
	int64_t x95 = 7018029285942LL;
	volatile int32_t t21 = 60304;

	t21 = ((x93/(x94&x95))==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = UINT16_MAX;
	static int32_t x98 = -1;
	int16_t x99 = INT16_MIN;
	int32_t t22 = -189808;

	t22 = ((x97/(x98&x99))==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MAX;
	int16_t x102 = INT16_MIN;
	int8_t x104 = -9;
	volatile int32_t t23 = 1;

	t23 = ((x101/(x102&x103))==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -2129;
	int8_t x107 = INT8_MIN;
	volatile int64_t x108 = INT64_MIN;
	int32_t t24 = -458;

	t24 = ((x105/(x106&x107))==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x109 = INT32_MAX;
	uint16_t x110 = 20U;
	int64_t x111 = INT64_MAX;
	volatile uint64_t x112 = 3LLU;
	int32_t t25 = 113794721;

	t25 = ((x109/(x110&x111))==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x113 = INT32_MAX;
	uint8_t x115 = 2U;
	uint64_t x116 = 23508594LLU;
	int32_t t26 = -4480;

	t26 = ((x113/(x114&x115))==x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = -1LL;
	volatile int8_t x118 = INT8_MIN;
	static uint16_t x119 = 27172U;
	volatile int32_t t27 = 0;

	t27 = ((x117/(x118&x119))==x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 12U;
	volatile int64_t x122 = -1LL;
	volatile uint16_t x123 = UINT16_MAX;
	uint16_t x124 = 2219U;
	volatile int32_t t28 = -5561053;

	t28 = ((x121/(x122&x123))==x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x126 = 55554LLU;
	uint8_t x127 = UINT8_MAX;
	volatile int32_t t29 = -332;

	t29 = ((x125/(x126&x127))==x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = 7;
	int64_t x130 = -97306569608126699LL;
	int16_t x131 = 1241;
	int8_t x132 = INT8_MIN;
	int32_t t30 = 7015144;

	t30 = ((x129/(x130&x131))==x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = 506;
	int8_t x135 = INT8_MAX;
	uint64_t x136 = 44LLU;
	int32_t t31 = -90;

	t31 = ((x133/(x134&x135))==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x142 = INT32_MIN;
	int16_t x143 = -1;
	uint64_t x144 = 992292LLU;

	t32 = ((x141/(x142&x143))==x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x145 = INT32_MAX;
	int8_t x146 = INT8_MIN;
	static uint32_t x147 = 190U;
	int32_t x148 = 7;
	static volatile int32_t t33 = 107810;

	t33 = ((x145/(x146&x147))==x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x155 = -1LL;
	volatile int32_t x156 = 311654269;
	int32_t t34 = 31;

	t34 = ((x153/(x154&x155))==x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MIN;
	volatile uint64_t x158 = UINT64_MAX;
	int64_t x159 = 13200LL;
	volatile int32_t t35 = 3457063;

	t35 = ((x157/(x158&x159))==x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = 11944;
	int16_t x162 = INT16_MAX;
	volatile int32_t t36 = 151;

	t36 = ((x161/(x162&x163))==x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x169 = 7269U;
	uint32_t x171 = 1671783947U;
	int16_t x172 = INT16_MIN;
	volatile int32_t t37 = 4184;

	t37 = ((x169/(x170&x171))==x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x173 = INT64_MIN;
	volatile int16_t x174 = -1;
	static uint32_t x175 = UINT32_MAX;
	uint16_t x176 = 5715U;
	int32_t t38 = -2843633;

	t38 = ((x173/(x174&x175))==x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = INT16_MAX;
	volatile uint32_t x178 = UINT32_MAX;
	static volatile int32_t x179 = INT32_MIN;
	uint64_t x180 = 78292LLU;
	static volatile int32_t t39 = -22784;

	t39 = ((x177/(x178&x179))==x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x182 = 1U;
	int32_t x183 = 1;
	volatile uint8_t x184 = 17U;
	static volatile int32_t t40 = -8228745;

	t40 = ((x181/(x182&x183))==x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x189 = 13U;
	uint64_t x190 = UINT64_MAX;
	int32_t x191 = INT32_MIN;
	volatile uint16_t x192 = UINT16_MAX;
	int32_t t41 = 8989;

	t41 = ((x189/(x190&x191))==x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x193 = 52U;
	int8_t x194 = INT8_MIN;
	static volatile uint32_t x196 = 773198U;

	t42 = ((x193/(x194&x195))==x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x198 = -6;
	static volatile int32_t x199 = -25;
	volatile uint8_t x200 = 50U;

	t43 = ((x197/(x198&x199))==x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x201 = UINT32_MAX;
	uint8_t x202 = 84U;
	volatile int64_t x204 = INT64_MAX;

	t44 = ((x201/(x202&x203))==x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = INT64_MAX;
	int64_t x208 = -1LL;
	int32_t t45 = 987;

	t45 = ((x205/(x206&x207))==x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x209 = INT64_MIN;
	uint8_t x210 = UINT8_MAX;
	static volatile int32_t x211 = 722486914;
	int16_t x212 = INT16_MAX;

	t46 = ((x209/(x210&x211))==x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x217 = 13U;
	int32_t x218 = 130837;
	static int16_t x219 = INT16_MAX;
	uint16_t x220 = 2734U;
	volatile int32_t t47 = 803696;

	t47 = ((x217/(x218&x219))==x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x221 = INT32_MAX;
	static int8_t x222 = INT8_MIN;
	uint64_t x223 = 14802LLU;
	static int16_t x224 = INT16_MIN;
	static volatile int32_t t48 = -68;

	t48 = ((x221/(x222&x223))==x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x225 = -1LL;
	uint8_t x226 = 42U;
	int16_t x228 = INT16_MAX;

	t49 = ((x225/(x226&x227))==x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = INT8_MIN;
	uint32_t x231 = 73U;
	volatile int64_t x232 = 8898783787674434LL;

	t50 = ((x229/(x230&x231))==x232);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x234 = INT8_MIN;
	volatile int64_t x235 = 64499266592751217LL;
	int16_t x236 = INT16_MIN;
	int32_t t51 = -15395163;

	t51 = ((x233/(x234&x235))==x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x237 = INT16_MIN;
	int32_t x239 = -78651;
	static int8_t x240 = -1;
	volatile int32_t t52 = -44;

	t52 = ((x237/(x238&x239))==x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x241 = -1;
	static volatile int32_t x242 = INT32_MIN;
	int8_t x243 = INT8_MIN;
	uint64_t x244 = 94030065660231238LLU;
	volatile int32_t t53 = 0;

	t53 = ((x241/(x242&x243))==x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x245 = UINT16_MAX;
	volatile uint8_t x247 = UINT8_MAX;
	volatile int32_t x248 = INT32_MIN;
	int32_t t54 = 3893412;

	t54 = ((x245/(x246&x247))==x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {


	t55 = ((x249/(x250&x251))==x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x253 = 6764700640LL;
	int8_t x254 = INT8_MAX;
	volatile uint8_t x256 = UINT8_MAX;
	static volatile int32_t t56 = -439088;

	t56 = ((x253/(x254&x255))==x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x261 = 1377542089150LL;
	uint16_t x262 = UINT16_MAX;
	volatile uint64_t x263 = 13975LLU;
	int32_t x264 = -1;
	volatile int32_t t57 = -6;

	t57 = ((x261/(x262&x263))==x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x265 = UINT16_MAX;
	uint64_t x266 = 11735893405LLU;
	uint64_t x267 = 14961109046840278LLU;
	int32_t t58 = 0;

	t58 = ((x265/(x266&x267))==x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x269 = INT16_MIN;
	static uint32_t x270 = 1739708U;
	volatile int64_t x271 = INT64_MAX;

	t59 = ((x269/(x270&x271))==x272);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x273 = -1;
	uint64_t x274 = 1703LLU;
	volatile int32_t x275 = 350149793;
	int8_t x276 = -3;
	static int32_t t60 = 613562360;

	t60 = ((x273/(x274&x275))==x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = -22367603LL;
	volatile uint8_t x278 = UINT8_MAX;
	int16_t x279 = -1;
	volatile uint16_t x280 = 10U;
	int32_t t61 = -4184060;

	t61 = ((x277/(x278&x279))==x280);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x282 = UINT64_MAX;
	int64_t x283 = -1022LL;
	int8_t x284 = INT8_MAX;
	volatile int32_t t62 = 14;

	t62 = ((x281/(x282&x283))==x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x285 = UINT32_MAX;
	static int16_t x287 = 273;
	int64_t x288 = 3LL;
	static int32_t t63 = 181362618;

	t63 = ((x285/(x286&x287))==x288);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x289 = INT32_MIN;
	uint8_t x290 = 125U;
	uint64_t x292 = 7143846LLU;
	static int32_t t64 = -1330700;

	t64 = ((x289/(x290&x291))==x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x294 = 96511;
	static int16_t x295 = -1;
	int32_t x296 = INT32_MAX;
	volatile int32_t t65 = 0;

	t65 = ((x293/(x294&x295))==x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = 7497;
	int32_t x298 = INT32_MIN;
	int32_t x299 = INT32_MIN;
	int8_t x300 = INT8_MIN;
	volatile int32_t t66 = -834003592;

	t66 = ((x297/(x298&x299))==x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x302 = UINT16_MAX;
	uint8_t x303 = 72U;
	static uint8_t x304 = UINT8_MAX;
	volatile int32_t t67 = 0;

	t67 = ((x301/(x302&x303))==x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x305 = INT8_MIN;
	int32_t t68 = 15938340;

	t68 = ((x305/(x306&x307))==x308);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x309 = INT64_MIN;
	uint64_t x310 = UINT64_MAX;
	volatile int64_t x311 = INT64_MIN;

	t69 = ((x309/(x310&x311))==x312);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x313 = INT32_MIN;
	uint8_t x314 = 15U;
	uint16_t x315 = UINT16_MAX;
	static volatile int8_t x316 = INT8_MAX;
	int32_t t70 = -289186;

	t70 = ((x313/(x314&x315))==x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = -6307418096LL;
	static int16_t x318 = -511;
	static uint16_t x319 = 2818U;

	t71 = ((x317/(x318&x319))==x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x326 = INT16_MIN;
	static int64_t x327 = -1LL;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t72 = -181;

	t72 = ((x325/(x326&x327))==x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x330 = UINT16_MAX;
	volatile uint32_t x332 = 1209U;
	int32_t t73 = 2140091;

	t73 = ((x329/(x330&x331))==x332);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x333 = -1LL;
	int16_t x336 = INT16_MIN;
	volatile int32_t t74 = 149315470;

	t74 = ((x333/(x334&x335))==x336);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x337 = INT32_MIN;
	volatile int16_t x339 = 3778;
	volatile int16_t x340 = -605;
	volatile int32_t t75 = -4;

	t75 = ((x337/(x338&x339))==x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x342 = -2;

	t76 = ((x341/(x342&x343))==x344);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x349 = INT64_MAX;
	uint16_t x350 = 6549U;
	static int32_t x352 = INT32_MIN;

	t77 = ((x349/(x350&x351))==x352);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x353 = 68U;
	int8_t x354 = INT8_MAX;
	static volatile uint8_t x356 = UINT8_MAX;
	static volatile int32_t t78 = -708546798;

	t78 = ((x353/(x354&x355))==x356);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x357 = 323U;
	int64_t x358 = -409LL;
	int8_t x359 = INT8_MAX;
	static volatile int8_t x360 = INT8_MAX;
	volatile int32_t t79 = 2;

	t79 = ((x357/(x358&x359))==x360);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x365 = -1;
	volatile uint16_t x366 = UINT16_MAX;
	int8_t x367 = 2;
	int16_t x368 = INT16_MIN;
	volatile int32_t t80 = -9805;

	t80 = ((x365/(x366&x367))==x368);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x369 = INT16_MIN;
	uint64_t x370 = UINT64_MAX;
	uint16_t x372 = UINT16_MAX;

	t81 = ((x369/(x370&x371))==x372);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x373 = 4U;
	static int16_t x374 = -632;
	int16_t x376 = INT16_MIN;
	int32_t t82 = 115754085;

	t82 = ((x373/(x374&x375))==x376);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x377 = 13022654304321LL;
	static volatile int64_t x378 = INT64_MIN;
	int64_t x379 = INT64_MIN;
	uint8_t x380 = UINT8_MAX;

	t83 = ((x377/(x378&x379))==x380);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x381 = INT64_MIN;
	volatile int32_t x382 = INT32_MIN;
	static volatile int8_t x383 = INT8_MIN;
	int32_t x384 = INT32_MIN;

	t84 = ((x381/(x382&x383))==x384);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x385 = INT8_MAX;
	int64_t x386 = -1LL;
	uint32_t x387 = 246U;
	uint32_t x388 = 45611663U;
	volatile int32_t t85 = -16593073;

	t85 = ((x385/(x386&x387))==x388);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x389 = 11;
	uint64_t x390 = 3LLU;

	t86 = ((x389/(x390&x391))==x392);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x393 = INT8_MAX;
	uint64_t x394 = 1942592LLU;
	int16_t x395 = INT16_MIN;
	int32_t t87 = -30839;

	t87 = ((x393/(x394&x395))==x396);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x397 = -1;
	int32_t x398 = 489818;
	static uint32_t x399 = 105U;
	volatile int32_t x400 = 1;
	static volatile int32_t t88 = 0;

	t88 = ((x397/(x398&x399))==x400);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x401 = 89309987LLU;
	uint64_t x402 = 63931866847LLU;
	static int16_t x403 = INT16_MAX;
	int16_t x404 = INT16_MIN;
	volatile int32_t t89 = 46;

	t89 = ((x401/(x402&x403))==x404);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x405 = INT16_MAX;
	int64_t x407 = -1LL;
	int64_t x408 = INT64_MAX;
	int32_t t90 = 132617546;

	t90 = ((x405/(x406&x407))==x408);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x418 = INT16_MIN;
	int16_t x419 = INT16_MIN;
	volatile uint8_t x420 = 14U;
	int32_t t91 = -7;

	t91 = ((x417/(x418&x419))==x420);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x421 = 6051861969397212572LLU;
	static int64_t x422 = -15276663LL;
	int8_t x423 = -14;
	static uint16_t x424 = 3193U;
	int32_t t92 = -3;

	t92 = ((x421/(x422&x423))==x424);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x429 = INT16_MIN;
	static int32_t x430 = INT32_MIN;
	int8_t x431 = INT8_MIN;
	volatile uint64_t x432 = 5836392365429611777LLU;

	t93 = ((x429/(x430&x431))==x432);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x434 = INT8_MIN;
	uint8_t x435 = UINT8_MAX;
	uint32_t x436 = 206U;

	t94 = ((x433/(x434&x435))==x436);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x437 = INT16_MIN;
	int16_t x438 = INT16_MAX;
	static volatile uint16_t x439 = 1U;
	int32_t x440 = INT32_MIN;

	t95 = ((x437/(x438&x439))==x440);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x453 = 1123U;
	int64_t x454 = -3561LL;
	int8_t x455 = INT8_MAX;
	uint64_t x456 = 343630898882LLU;

	t96 = ((x453/(x454&x455))==x456);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x459 = 536U;
	int32_t t97 = 780895104;

	t97 = ((x457/(x458&x459))==x460);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x461 = 108U;
	int16_t x463 = INT16_MAX;
	int32_t t98 = -76;

	t98 = ((x461/(x462&x463))==x464);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x465 = UINT64_MAX;
	volatile uint16_t x466 = 548U;

	t99 = ((x465/(x466&x467))==x468);

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

