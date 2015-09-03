#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -1;
int16_t x6 = 486;
volatile int32_t t3 = -2;
int64_t x27 = INT64_MIN;
static int32_t x30 = -7577593;
int64_t x37 = -1711984851445539LL;
static int32_t t8 = 657211676;
int8_t x47 = INT8_MIN;
int8_t x49 = -26;
int32_t x51 = -3699446;
int16_t x52 = 10;
int64_t x54 = -1LL;
uint16_t x61 = 9396U;
volatile int16_t x65 = INT16_MIN;
volatile int32_t t16 = -1;
int8_t x83 = -1;
int16_t x84 = -1;
int64_t x87 = INT64_MAX;
int8_t x90 = INT8_MAX;
static int32_t x92 = -91;
int32_t t19 = -290452761;
volatile int32_t t20 = 82144;
uint8_t x104 = UINT8_MAX;
int64_t x116 = INT64_MAX;
uint16_t x125 = UINT16_MAX;
int32_t t28 = 307797169;
static int16_t x135 = INT16_MAX;
static int64_t x140 = INT64_MIN;
int32_t t30 = -86;
static int16_t x142 = -2271;
uint16_t x151 = 15245U;
volatile uint8_t x156 = 7U;
static volatile int32_t t36 = -2833;
uint8_t x167 = UINT8_MAX;
volatile int32_t t39 = -1;
volatile int32_t x192 = INT32_MIN;
volatile int32_t t40 = -59;
int8_t x198 = INT8_MIN;
int32_t x201 = -3428401;
int32_t t43 = -31;
int8_t x205 = -1;
int8_t x209 = -1;
volatile int8_t x213 = -1;
int8_t x215 = 25;
int8_t x219 = INT8_MIN;
static uint32_t x223 = 13749747U;
static uint64_t x233 = 681LLU;
int32_t x234 = -1;
uint8_t x236 = UINT8_MAX;
int8_t x237 = -1;
volatile int32_t t52 = -1966;
int64_t x262 = 452LL;
uint8_t x267 = 1U;
volatile int32_t t55 = -786;
int32_t x269 = -2027;
int8_t x274 = INT8_MIN;
int32_t x279 = -97;
int32_t x282 = 216;
int8_t x284 = 0;
static volatile int32_t t59 = -994860050;
uint32_t x289 = UINT32_MAX;
volatile int8_t x290 = INT8_MIN;
uint16_t x292 = 2U;
int32_t t61 = 1734925;
int8_t x293 = -1;
uint16_t x308 = UINT16_MAX;
uint16_t x309 = 62U;
static int64_t x312 = 1LL;
int16_t x315 = INT16_MIN;
volatile int16_t x317 = INT16_MIN;
uint16_t x321 = UINT16_MAX;
int16_t x323 = -1;
uint32_t x332 = 39464818U;
int8_t x342 = -1;
volatile int32_t t70 = -117525;
volatile int8_t x345 = INT8_MAX;
static volatile int32_t t71 = -1045399;
static int8_t x349 = INT8_MAX;
static int64_t x352 = INT64_MIN;
static int8_t x359 = INT8_MAX;
int64_t x363 = -1030445253624322658LL;
uint32_t x366 = 10069U;
static int16_t x370 = -10;
volatile int16_t x372 = INT16_MIN;
int64_t x378 = 0LL;
int8_t x393 = 1;
int8_t x402 = INT8_MAX;
static int32_t t83 = -104;
static int8_t x406 = -1;
static int32_t x408 = -1;
int64_t x409 = -1LL;
int32_t x410 = INT32_MIN;
int64_t x411 = -1LL;
static uint64_t x417 = 15304823132LLU;
uint32_t x423 = UINT32_MAX;
uint32_t x428 = 37342U;
int32_t x429 = 2823;
volatile int32_t t90 = 80;
static int8_t x436 = INT8_MIN;
int32_t t91 = 2917;
int8_t x441 = 1;
uint64_t x461 = 7LLU;
uint8_t x467 = 18U;
volatile int8_t x468 = INT8_MIN;
volatile int64_t x471 = -53667318640LL;
int64_t x479 = INT64_MAX;
int32_t t99 = 0;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	uint16_t x2 = 4U;
	int64_t x4 = INT64_MAX;
	static int32_t t0 = -81477922;

	t0 = (((x1*x2)<x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static int32_t x7 = INT32_MAX;
	int64_t x8 = -1LL;
	static volatile int32_t t1 = 29892;

	t1 = (((x5*x6)<x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	uint32_t x10 = 220704U;
	int32_t x11 = INT32_MIN;
	int64_t x12 = 98810864342LL;
	volatile int32_t t2 = 344;

	t2 = (((x9*x10)<x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static uint16_t x14 = UINT16_MAX;
	uint16_t x15 = 0U;
	int32_t x16 = 304918867;

	t3 = (((x13*x14)<x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -1;
	volatile int8_t x26 = INT8_MAX;
	int64_t x28 = -139LL;
	static volatile int32_t t4 = 0;

	t4 = (((x25*x26)<x27)<=x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	volatile uint16_t x31 = UINT16_MAX;
	static uint64_t x32 = 8175420425LLU;
	static volatile int32_t t5 = 384921;

	t5 = (((x29*x30)<x31)<=x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x33 = 6502198U;
	static uint32_t x34 = UINT32_MAX;
	int64_t x35 = INT64_MAX;
	static uint16_t x36 = 3U;
	static volatile int32_t t6 = 1570;

	t6 = (((x33*x34)<x35)<=x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x38 = 3138278422304135LLU;
	uint8_t x39 = UINT8_MAX;
	int32_t x40 = INT32_MIN;
	int32_t t7 = 0;

	t7 = (((x37*x38)<x39)<=x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = UINT8_MAX;
	uint64_t x42 = 46541959202903201LLU;
	uint32_t x43 = UINT32_MAX;
	static int64_t x44 = INT64_MIN;

	t8 = (((x41*x42)<x43)<=x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = INT32_MAX;
	int32_t x46 = -1;
	uint64_t x48 = 57251437LLU;
	static volatile int32_t t9 = -126118896;

	t9 = (((x45*x46)<x47)<=x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x50 = UINT64_MAX;
	volatile int32_t t10 = 7;

	t10 = (((x49*x50)<x51)<=x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x53 = INT32_MIN;
	uint8_t x55 = 15U;
	volatile int8_t x56 = -1;
	volatile int32_t t11 = 0;

	t11 = (((x53*x54)<x55)<=x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x57 = UINT8_MAX;
	uint8_t x58 = 29U;
	uint64_t x59 = UINT64_MAX;
	int32_t x60 = 394103822;
	int32_t t12 = 82385;

	t12 = (((x57*x58)<x59)<=x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x62 = 97U;
	uint16_t x63 = 1U;
	static int64_t x64 = INT64_MAX;
	volatile int32_t t13 = 21988937;

	t13 = (((x61*x62)<x63)<=x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x66 = INT16_MIN;
	volatile int16_t x67 = -9;
	static volatile int64_t x68 = INT64_MIN;
	int32_t t14 = 102805;

	t14 = (((x65*x66)<x67)<=x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 1982LLU;
	int8_t x70 = INT8_MAX;
	static int64_t x71 = INT64_MAX;
	int32_t x72 = 1380115;
	static volatile int32_t t15 = 46622824;

	t15 = (((x69*x70)<x71)<=x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = 212159097947906LL;
	static int16_t x74 = -1;
	uint64_t x75 = 6713021710342LLU;
	int64_t x76 = -62LL;

	t16 = (((x73*x74)<x75)<=x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = UINT64_MAX;
	int8_t x82 = INT8_MAX;
	volatile int32_t t17 = -3127;

	t17 = (((x81*x82)<x83)<=x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x85 = INT32_MIN;
	uint32_t x86 = 55U;
	uint32_t x88 = 31962338U;
	static volatile int32_t t18 = 7;

	t18 = (((x85*x86)<x87)<=x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = -50798747912688LL;
	static volatile int64_t x91 = -1LL;

	t19 = (((x89*x90)<x91)<=x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = -7;
	int8_t x94 = INT8_MIN;
	int16_t x95 = 1;
	uint32_t x96 = UINT32_MAX;

	t20 = (((x93*x94)<x95)<=x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x97 = UINT16_MAX;
	int64_t x98 = -1LL;
	uint8_t x99 = 23U;
	static int8_t x100 = INT8_MIN;
	static volatile int32_t t21 = 2;

	t21 = (((x97*x98)<x99)<=x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MAX;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = -3;
	volatile int32_t t22 = -14802560;

	t22 = (((x101*x102)<x103)<=x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x105 = INT8_MIN;
	int8_t x106 = 48;
	uint64_t x107 = 2674328496790944LLU;
	static uint8_t x108 = 66U;
	int32_t t23 = -425974;

	t23 = (((x105*x106)<x107)<=x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = 645855996132837LLU;
	int8_t x110 = INT8_MIN;
	uint8_t x111 = UINT8_MAX;
	volatile int64_t x112 = INT64_MIN;
	volatile int32_t t24 = -12882;

	t24 = (((x109*x110)<x111)<=x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = -1;
	uint16_t x114 = 7U;
	int64_t x115 = -53707285026LL;
	static int32_t t25 = -59224548;

	t25 = (((x113*x114)<x115)<=x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = INT16_MAX;
	static int16_t x118 = -1;
	int64_t x119 = 518259283165LL;
	int16_t x120 = INT16_MAX;
	volatile int32_t t26 = -29343003;

	t26 = (((x117*x118)<x119)<=x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x126 = 60162492963187LLU;
	volatile uint16_t x127 = UINT16_MAX;
	int8_t x128 = INT8_MAX;
	static int32_t t27 = 34474;

	t27 = (((x125*x126)<x127)<=x128);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = 80U;
	volatile int16_t x130 = 7;
	int8_t x131 = -1;
	int32_t x132 = -2785160;

	t28 = (((x129*x130)<x131)<=x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = INT32_MIN;
	volatile uint64_t x134 = 91694LLU;
	int64_t x136 = INT64_MIN;
	volatile int32_t t29 = -117800824;

	t29 = (((x133*x134)<x135)<=x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MAX;
	int8_t x138 = 1;
	int8_t x139 = -1;

	t30 = (((x137*x138)<x139)<=x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = -178;
	int32_t x143 = INT32_MIN;
	int64_t x144 = 6083388479665896LL;
	int32_t t31 = 81906;

	t31 = (((x141*x142)<x143)<=x144);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = -1;
	int8_t x146 = 1;
	static uint16_t x147 = 3U;
	int8_t x148 = -1;
	volatile int32_t t32 = 2534784;

	t32 = (((x145*x146)<x147)<=x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x149 = UINT16_MAX;
	static volatile uint16_t x150 = 7U;
	int32_t x152 = INT32_MIN;
	int32_t t33 = -28203058;

	t33 = (((x149*x150)<x151)<=x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = INT32_MIN;
	uint32_t x154 = 90243U;
	int64_t x155 = INT64_MAX;
	volatile int32_t t34 = -81;

	t34 = (((x153*x154)<x155)<=x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x157 = 480221726LLU;
	volatile int32_t x158 = -1;
	static uint64_t x159 = 1806293946607LLU;
	uint64_t x160 = 3158024532276LLU;
	volatile int32_t t35 = -376;

	t35 = (((x157*x158)<x159)<=x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x161 = UINT64_MAX;
	volatile int64_t x162 = INT64_MAX;
	volatile int8_t x163 = INT8_MIN;
	uint8_t x164 = 17U;

	t36 = (((x161*x162)<x163)<=x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x165 = 0U;
	static volatile uint16_t x166 = UINT16_MAX;
	int8_t x168 = -1;
	int32_t t37 = 5994846;

	t37 = (((x165*x166)<x167)<=x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = 1;
	uint16_t x174 = 62U;
	static uint16_t x175 = 1697U;
	int64_t x176 = INT64_MIN;
	volatile int32_t t38 = 395099;

	t38 = (((x173*x174)<x175)<=x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x181 = -1324;
	volatile uint8_t x182 = 7U;
	volatile int8_t x183 = INT8_MIN;
	static int32_t x184 = -183;

	t39 = (((x181*x182)<x183)<=x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x189 = INT8_MIN;
	int32_t x190 = -1;
	uint8_t x191 = 61U;

	t40 = (((x189*x190)<x191)<=x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x193 = 5U;
	int16_t x194 = INT16_MIN;
	static volatile int8_t x195 = 60;
	volatile int32_t x196 = 37220;
	int32_t t41 = -858918;

	t41 = (((x193*x194)<x195)<=x196);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = INT16_MIN;
	volatile uint32_t x199 = UINT32_MAX;
	int32_t x200 = INT32_MIN;
	volatile int32_t t42 = 64782864;

	t42 = (((x197*x198)<x199)<=x200);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x202 = 1;
	int16_t x203 = INT16_MIN;
	int8_t x204 = INT8_MIN;

	t43 = (((x201*x202)<x203)<=x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x206 = -1LL;
	volatile int8_t x207 = -1;
	int64_t x208 = INT64_MAX;
	volatile int32_t t44 = -1049;

	t44 = (((x205*x206)<x207)<=x208);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x210 = 0;
	volatile int32_t x211 = INT32_MIN;
	volatile int32_t x212 = 118439;
	int32_t t45 = -1;

	t45 = (((x209*x210)<x211)<=x212);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x214 = 1;
	static int64_t x216 = 1946643682547LL;
	int32_t t46 = -977;

	t46 = (((x213*x214)<x215)<=x216);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x217 = INT8_MAX;
	volatile uint16_t x218 = UINT16_MAX;
	volatile int32_t x220 = INT32_MIN;
	int32_t t47 = 7095;

	t47 = (((x217*x218)<x219)<=x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x221 = UINT16_MAX;
	int64_t x222 = 12440LL;
	int32_t x224 = INT32_MIN;
	int32_t t48 = 1;

	t48 = (((x221*x222)<x223)<=x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x229 = 593550269U;
	uint32_t x230 = 41600U;
	int64_t x231 = -1LL;
	int8_t x232 = -1;
	static int32_t t49 = -49;

	t49 = (((x229*x230)<x231)<=x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x235 = -1LL;
	int32_t t50 = 85529;

	t50 = (((x233*x234)<x235)<=x236);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x238 = 0;
	int8_t x239 = INT8_MIN;
	volatile uint32_t x240 = 489474U;
	int32_t t51 = -1305;

	t51 = (((x237*x238)<x239)<=x240);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x245 = INT64_MAX;
	volatile int64_t x246 = -1LL;
	int16_t x247 = -1;
	int32_t x248 = 210360465;

	t52 = (((x245*x246)<x247)<=x248);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x253 = -512425900;
	volatile int8_t x254 = 2;
	int8_t x255 = -39;
	volatile int8_t x256 = INT8_MIN;
	volatile int32_t t53 = 7838446;

	t53 = (((x253*x254)<x255)<=x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x261 = 1;
	int64_t x263 = INT64_MAX;
	int8_t x264 = INT8_MAX;
	volatile int32_t t54 = 90503;

	t54 = (((x261*x262)<x263)<=x264);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x265 = INT16_MIN;
	static uint32_t x266 = 1U;
	uint64_t x268 = 1195597729562699LLU;

	t55 = (((x265*x266)<x267)<=x268);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x270 = INT8_MIN;
	uint16_t x271 = 150U;
	uint64_t x272 = 780256LLU;
	volatile int32_t t56 = 165;

	t56 = (((x269*x270)<x271)<=x272);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x273 = 1U;
	int8_t x275 = INT8_MIN;
	int64_t x276 = INT64_MIN;
	volatile int32_t t57 = 218;

	t57 = (((x273*x274)<x275)<=x276);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x277 = -1;
	volatile int64_t x278 = INT64_MAX;
	int16_t x280 = INT16_MIN;
	volatile int32_t t58 = -413;

	t58 = (((x277*x278)<x279)<=x280);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = INT8_MIN;
	int64_t x283 = -32735660398LL;

	t59 = (((x281*x282)<x283)<=x284);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x285 = 106601554063LLU;
	uint32_t x286 = 10936U;
	volatile uint32_t x287 = 101255708U;
	int8_t x288 = 0;
	int32_t t60 = -990270;

	t60 = (((x285*x286)<x287)<=x288);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x291 = -680;

	t61 = (((x289*x290)<x291)<=x292);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x294 = UINT64_MAX;
	int8_t x295 = -1;
	uint32_t x296 = 1U;
	volatile int32_t t62 = 1222;

	t62 = (((x293*x294)<x295)<=x296);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x305 = 1;
	volatile int32_t x306 = INT32_MIN;
	int32_t x307 = -4153;
	static int32_t t63 = -89;

	t63 = (((x305*x306)<x307)<=x308);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x310 = 90585262U;
	int32_t x311 = -1;
	volatile int32_t t64 = 0;

	t64 = (((x309*x310)<x311)<=x312);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x313 = 15U;
	int16_t x314 = -1;
	int8_t x316 = -3;
	volatile int32_t t65 = -12934208;

	t65 = (((x313*x314)<x315)<=x316);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x318 = 1684999771LL;
	static int32_t x319 = 329;
	int64_t x320 = 6596LL;
	volatile int32_t t66 = 109;

	t66 = (((x317*x318)<x319)<=x320);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x322 = -1LL;
	volatile uint64_t x324 = UINT64_MAX;
	int32_t t67 = -34043308;

	t67 = (((x321*x322)<x323)<=x324);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x325 = 135519312U;
	int32_t x326 = -1;
	int16_t x327 = INT16_MIN;
	uint64_t x328 = 17LLU;
	int32_t t68 = 1162;

	t68 = (((x325*x326)<x327)<=x328);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x329 = 131155145U;
	int16_t x330 = INT16_MAX;
	static int16_t x331 = INT16_MIN;
	static int32_t t69 = 215829959;

	t69 = (((x329*x330)<x331)<=x332);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x341 = 624029075U;
	int32_t x343 = -1;
	int8_t x344 = INT8_MIN;

	t70 = (((x341*x342)<x343)<=x344);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x346 = INT8_MIN;
	int16_t x347 = -1;
	static int16_t x348 = 231;

	t71 = (((x345*x346)<x347)<=x348);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x350 = INT16_MIN;
	int16_t x351 = INT16_MIN;
	volatile int32_t t72 = 276399;

	t72 = (((x349*x350)<x351)<=x352);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x353 = 3U;
	int8_t x354 = -1;
	volatile int16_t x355 = INT16_MIN;
	int32_t x356 = 2;
	volatile int32_t t73 = -2;

	t73 = (((x353*x354)<x355)<=x356);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x357 = 201008897U;
	int16_t x358 = INT16_MAX;
	int64_t x360 = 3452718LL;
	int32_t t74 = -5;

	t74 = (((x357*x358)<x359)<=x360);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x361 = INT64_MIN;
	uint64_t x362 = UINT64_MAX;
	static volatile uint8_t x364 = 0U;
	static volatile int32_t t75 = 13;

	t75 = (((x361*x362)<x363)<=x364);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x365 = 2140LLU;
	int64_t x367 = INT64_MIN;
	int8_t x368 = INT8_MAX;
	static int32_t t76 = -1;

	t76 = (((x365*x366)<x367)<=x368);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x369 = -88905614642LL;
	volatile int64_t x371 = 25LL;
	int32_t t77 = 106101025;

	t77 = (((x369*x370)<x371)<=x372);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x373 = UINT32_MAX;
	uint32_t x374 = 44U;
	uint64_t x375 = UINT64_MAX;
	static volatile int16_t x376 = INT16_MIN;
	int32_t t78 = -14224;

	t78 = (((x373*x374)<x375)<=x376);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x377 = 21318U;
	int8_t x379 = 9;
	int16_t x380 = 1475;
	volatile int32_t t79 = 8015;

	t79 = (((x377*x378)<x379)<=x380);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x385 = UINT16_MAX;
	volatile int16_t x386 = 6;
	uint8_t x387 = 7U;
	uint64_t x388 = 3416360526132LLU;
	static int32_t t80 = -1544;

	t80 = (((x385*x386)<x387)<=x388);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x389 = INT8_MIN;
	int64_t x390 = -1448163139252LL;
	static uint16_t x391 = 115U;
	uint16_t x392 = 1956U;
	int32_t t81 = 138672065;

	t81 = (((x389*x390)<x391)<=x392);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x394 = 80U;
	uint16_t x395 = 12U;
	int32_t x396 = INT32_MIN;
	int32_t t82 = 0;

	t82 = (((x393*x394)<x395)<=x396);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x401 = UINT8_MAX;
	static volatile int8_t x403 = INT8_MIN;
	uint64_t x404 = 20396206058LLU;

	t83 = (((x401*x402)<x403)<=x404);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x405 = INT64_MAX;
	int16_t x407 = -1;
	int32_t t84 = 374138;

	t84 = (((x405*x406)<x407)<=x408);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x412 = INT32_MAX;
	int32_t t85 = -27;

	t85 = (((x409*x410)<x411)<=x412);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x413 = -1;
	static int16_t x414 = INT16_MIN;
	uint64_t x415 = 14424LLU;
	int8_t x416 = INT8_MIN;
	volatile int32_t t86 = -828492223;

	t86 = (((x413*x414)<x415)<=x416);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x418 = 21U;
	int16_t x419 = -1;
	static int64_t x420 = 2065161448972034LL;
	static int32_t t87 = -1;

	t87 = (((x417*x418)<x419)<=x420);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x421 = 358922;
	int8_t x422 = INT8_MAX;
	volatile int32_t x424 = INT32_MAX;
	volatile int32_t t88 = 0;

	t88 = (((x421*x422)<x423)<=x424);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x425 = -15;
	volatile uint64_t x426 = 13LLU;
	static int16_t x427 = -1;
	int32_t t89 = 1428;

	t89 = (((x425*x426)<x427)<=x428);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x430 = 474LL;
	uint16_t x431 = UINT16_MAX;
	volatile uint64_t x432 = 519569212649027LLU;

	t90 = (((x429*x430)<x431)<=x432);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x433 = INT16_MIN;
	volatile int8_t x434 = -1;
	volatile int16_t x435 = -157;

	t91 = (((x433*x434)<x435)<=x436);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x437 = INT32_MAX;
	uint32_t x438 = 677U;
	static volatile uint16_t x439 = 38U;
	int16_t x440 = -155;
	volatile int32_t t92 = 889151227;

	t92 = (((x437*x438)<x439)<=x440);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x442 = 3248915U;
	int16_t x443 = -206;
	int16_t x444 = -87;
	volatile int32_t t93 = 0;

	t93 = (((x441*x442)<x443)<=x444);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x449 = INT16_MIN;
	volatile int64_t x450 = -1LL;
	int16_t x451 = 53;
	int8_t x452 = -3;
	int32_t t94 = -2213601;

	t94 = (((x449*x450)<x451)<=x452);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x453 = INT8_MIN;
	int64_t x454 = -1LL;
	int8_t x455 = INT8_MAX;
	int8_t x456 = INT8_MIN;
	volatile int32_t t95 = 567;

	t95 = (((x453*x454)<x455)<=x456);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x462 = 1U;
	static int8_t x463 = -1;
	volatile int32_t x464 = INT32_MIN;
	int32_t t96 = -333389;

	t96 = (((x461*x462)<x463)<=x464);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x465 = INT16_MIN;
	static uint64_t x466 = 1115950LLU;
	static volatile int32_t t97 = -1;

	t97 = (((x465*x466)<x467)<=x468);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x469 = 59247097814875LLU;
	volatile uint8_t x470 = 9U;
	int32_t x472 = INT32_MAX;
	int32_t t98 = 6;

	t98 = (((x469*x470)<x471)<=x472);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x477 = UINT64_MAX;
	static int64_t x478 = INT64_MAX;
	uint64_t x480 = UINT64_MAX;

	t99 = (((x477*x478)<x479)<=x480);

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

