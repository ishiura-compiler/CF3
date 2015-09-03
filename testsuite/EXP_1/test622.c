#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = 47;
int32_t t1 = 488;
volatile uint16_t x10 = 89U;
int8_t x16 = -11;
int16_t x24 = INT16_MIN;
int32_t x27 = -1;
int16_t x29 = 7983;
static int64_t x30 = INT64_MIN;
int8_t x43 = 1;
static int8_t x46 = -1;
int64_t x48 = INT64_MAX;
uint64_t x52 = 12303423430LLU;
volatile uint64_t t12 = 89541LLU;
static int8_t x53 = 7;
volatile uint16_t x55 = UINT16_MAX;
int16_t x61 = -155;
int32_t x63 = 0;
int8_t x74 = INT8_MIN;
volatile int16_t x75 = INT16_MIN;
volatile uint64_t x79 = 3894032LLU;
volatile uint32_t t20 = 18U;
volatile int8_t x90 = -1;
volatile int32_t t23 = -725791;
int16_t x105 = INT16_MIN;
int16_t x112 = INT16_MIN;
int16_t x113 = -1;
static int64_t t28 = 340101464624LL;
static int64_t x121 = INT64_MIN;
int32_t x125 = INT32_MIN;
static uint32_t x127 = 3181579U;
static uint8_t x132 = UINT8_MAX;
int32_t x136 = INT32_MIN;
volatile int64_t t34 = -14LL;
int16_t x163 = 19;
uint8_t x164 = UINT8_MAX;
static volatile int32_t t40 = 446697;
int16_t x173 = INT16_MIN;
uint32_t x178 = UINT32_MAX;
int32_t t42 = 35;
volatile int64_t t43 = -24LL;
int32_t x190 = INT32_MAX;
int32_t x193 = INT32_MIN;
int16_t x208 = INT16_MIN;
static int32_t x212 = -1;
volatile int32_t t49 = -5;
static int32_t x214 = INT32_MIN;
volatile int32_t t52 = -420;
uint8_t x237 = UINT8_MAX;
int8_t x242 = INT8_MAX;
volatile int64_t x243 = -1LL;
int8_t x252 = INT8_MAX;
static int32_t x256 = 6109;
volatile int32_t x263 = INT32_MIN;
static int16_t x264 = INT16_MIN;
static int8_t x265 = 62;
uint32_t x266 = 573378U;
volatile uint64_t t63 = 620546853174351LLU;
int64_t x269 = -28841476LL;
int64_t x271 = 1746280248073983LL;
int32_t x275 = INT32_MAX;
static int8_t x276 = INT8_MIN;
uint8_t x286 = 1U;
int64_t x293 = INT64_MIN;
static int32_t x296 = INT32_MIN;
static volatile int8_t x300 = INT8_MAX;
static volatile uint64_t x323 = 0LLU;
static int32_t x326 = INT32_MIN;
static volatile int16_t x328 = 13;
volatile int16_t x339 = 1;
static int16_t x340 = -1826;
uint8_t x345 = UINT8_MAX;
uint32_t t83 = 2U;
uint64_t x352 = UINT64_MAX;
uint64_t t84 = 24712527245092275LLU;
uint16_t x357 = UINT16_MAX;
int64_t x359 = -907656077425972208LL;
int64_t x360 = -909445562607317807LL;
uint32_t x361 = UINT32_MAX;
static uint8_t x365 = 0U;
uint16_t x374 = UINT16_MAX;
static volatile int8_t x375 = -1;
int8_t x384 = INT8_MIN;
int8_t x385 = INT8_MIN;
uint8_t x386 = UINT8_MAX;
int8_t x387 = -12;
int32_t x393 = INT32_MIN;
static uint8_t x401 = UINT8_MAX;
static uint16_t x407 = UINT16_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int32_t x3 = 0;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -99873;

	t0 = (((x1/x2)<x3)&x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int8_t x6 = INT8_MIN;
	int32_t x7 = INT32_MIN;
	uint8_t x8 = 12U;

	t1 = (((x5/x6)<x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	int64_t x11 = INT64_MIN;
	static volatile int8_t x12 = INT8_MAX;
	int32_t t2 = 93136;

	t2 = (((x9/x10)<x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 969223U;
	int32_t x14 = INT32_MIN;
	uint32_t x15 = UINT32_MAX;
	static int32_t t3 = -1699;

	t3 = (((x13/x14)<x15)&x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 14U;
	uint64_t x18 = 23636439595173LLU;
	volatile uint8_t x19 = 12U;
	uint8_t x20 = 57U;
	volatile int32_t t4 = -3;

	t4 = (((x17/x18)<x19)&x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile int64_t x22 = 491762LL;
	int32_t x23 = 886041480;
	volatile int32_t t5 = 197250;

	t5 = (((x21/x22)<x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MAX;
	uint8_t x26 = 2U;
	static int16_t x28 = INT16_MIN;
	int32_t t6 = 4387380;

	t6 = (((x25/x26)<x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x31 = -7784377;
	uint8_t x32 = 1U;
	static int32_t t7 = -220088;

	t7 = (((x29/x30)<x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	volatile int8_t x34 = 9;
	static uint8_t x35 = 0U;
	uint32_t x36 = 0U;
	static volatile uint32_t t8 = 21U;

	t8 = (((x33/x34)<x35)&x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = 834230LL;
	volatile int32_t x38 = INT32_MIN;
	int32_t x39 = -1;
	static volatile int8_t x40 = -17;
	int32_t t9 = -11929;

	t9 = (((x37/x38)<x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -7;
	volatile uint8_t x42 = 1U;
	static int64_t x44 = INT64_MIN;
	int64_t t10 = -2LL;

	t10 = (((x41/x42)<x43)&x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	uint16_t x47 = 1869U;
	int64_t t11 = 458410LL;

	t11 = (((x45/x46)<x47)&x48);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = UINT8_MAX;
	uint32_t x50 = 1228U;
	int8_t x51 = 3;

	t12 = (((x49/x50)<x51)&x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = 231661;
	uint64_t x56 = 1332006183932743LLU;
	uint64_t t13 = 12999768805LLU;

	t13 = (((x53/x54)<x55)&x56);

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -22;
	int16_t x58 = INT16_MAX;
	static uint8_t x59 = 1U;
	static volatile int16_t x60 = 1;
	int32_t t14 = -33398;

	t14 = (((x57/x58)<x59)&x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = INT32_MIN;
	static int64_t x64 = INT64_MIN;
	volatile int64_t t15 = -141295257LL;

	t15 = (((x61/x62)<x63)&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int32_t x66 = -20845;
	static int32_t x67 = INT32_MIN;
	int64_t x68 = 301674LL;
	volatile int64_t t16 = -1937LL;

	t16 = (((x65/x66)<x67)&x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 0;
	volatile int32_t x70 = INT32_MIN;
	int64_t x71 = -363419LL;
	static volatile uint16_t x72 = 477U;
	volatile int32_t t17 = 1;

	t17 = (((x69/x70)<x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	volatile int64_t x76 = INT64_MIN;
	volatile int64_t t18 = -727023755LL;

	t18 = (((x73/x74)<x75)&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	volatile int16_t x78 = -3189;
	volatile int8_t x80 = 26;
	volatile int32_t t19 = -307201;

	t19 = (((x77/x78)<x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x81 = 15347U;
	int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MIN;
	volatile uint32_t x84 = 296190211U;

	t20 = (((x81/x82)<x83)&x84);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x85 = 3U;
	int16_t x86 = INT16_MIN;
	static volatile uint32_t x87 = 1827U;
	static int64_t x88 = 871742960LL;
	volatile int64_t t21 = 1200932981LL;

	t21 = (((x85/x86)<x87)&x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MIN;
	volatile int64_t t22 = -61978300LL;

	t22 = (((x89/x90)<x91)&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint16_t x94 = 1812U;
	int16_t x95 = INT16_MIN;
	static volatile uint16_t x96 = 692U;

	t23 = (((x93/x94)<x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 371U;
	static uint64_t x98 = UINT64_MAX;
	static int8_t x99 = INT8_MAX;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t24 = 3;

	t24 = (((x97/x98)<x99)&x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	volatile uint32_t x102 = 810086U;
	int8_t x103 = INT8_MAX;
	volatile uint16_t x104 = 11U;
	volatile int32_t t25 = -565491;

	t25 = (((x101/x102)<x103)&x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = INT8_MIN;
	volatile int16_t x107 = -94;
	int8_t x108 = INT8_MIN;
	int32_t t26 = 1213;

	t26 = (((x105/x106)<x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	int32_t x110 = -391269144;
	uint16_t x111 = UINT16_MAX;
	static int32_t t27 = -16088;

	t27 = (((x109/x110)<x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MIN;
	int16_t x115 = INT16_MIN;
	int64_t x116 = INT64_MAX;

	t28 = (((x113/x114)<x115)&x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = 316527LL;
	int64_t x118 = INT64_MAX;
	int16_t x119 = INT16_MIN;
	int8_t x120 = INT8_MIN;
	static int32_t t29 = 119196603;

	t29 = (((x117/x118)<x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x122 = 116443109376520854LLU;
	uint8_t x123 = UINT8_MAX;
	int8_t x124 = INT8_MIN;
	volatile int32_t t30 = 531350082;

	t30 = (((x121/x122)<x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x126 = -25;
	volatile int64_t x128 = -36260868712659LL;
	int64_t t31 = 3124540113485322264LL;

	t31 = (((x125/x126)<x127)&x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	uint64_t x130 = UINT64_MAX;
	volatile uint64_t x131 = 16288160656390LLU;
	int32_t t32 = -1683010;

	t32 = (((x129/x130)<x131)&x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 90U;
	static int32_t x134 = INT32_MIN;
	int16_t x135 = -14;
	volatile int32_t t33 = 104033519;

	t33 = (((x133/x134)<x135)&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x137 = 13679229601656LLU;
	int32_t x138 = -24384;
	int64_t x139 = INT64_MIN;
	static int64_t x140 = INT64_MAX;

	t34 = (((x137/x138)<x139)&x140);

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	volatile int32_t x142 = -85820606;
	volatile int16_t x143 = INT16_MIN;
	uint32_t x144 = 168U;
	uint32_t t35 = 12U;

	t35 = (((x141/x142)<x143)&x144);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 43060365U;
	int8_t x146 = INT8_MAX;
	static int64_t x147 = INT64_MAX;
	uint64_t x148 = 123251306566LLU;
	static uint64_t t36 = 2LLU;

	t36 = (((x145/x146)<x147)&x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	volatile int64_t x150 = -1LL;
	uint64_t x151 = 5406198776306LLU;
	int32_t x152 = 1;
	int32_t t37 = -11590;

	t37 = (((x149/x150)<x151)&x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 0U;
	int16_t x154 = -1;
	int8_t x155 = INT8_MAX;
	volatile int32_t x156 = INT32_MAX;
	volatile int32_t t38 = -16;

	t38 = (((x153/x154)<x155)&x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MIN;
	uint16_t x162 = 1252U;
	volatile int32_t t39 = -1;

	t39 = (((x161/x162)<x163)&x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = INT32_MAX;
	int64_t x170 = -1LL;
	volatile int64_t x171 = INT64_MIN;
	int32_t x172 = INT32_MAX;

	t40 = (((x169/x170)<x171)&x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x174 = INT16_MIN;
	int64_t x175 = INT64_MAX;
	static uint16_t x176 = 945U;
	static int32_t t41 = 14300656;

	t41 = (((x173/x174)<x175)&x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = -1;
	int8_t x179 = INT8_MAX;
	static int16_t x180 = 31;

	t42 = (((x177/x178)<x179)&x180);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x181 = 26LL;
	int8_t x182 = INT8_MIN;
	volatile int8_t x183 = INT8_MIN;
	static int64_t x184 = INT64_MAX;

	t43 = (((x181/x182)<x183)&x184);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x185 = 452U;
	int32_t x186 = INT32_MIN;
	static int32_t x187 = -30;
	static uint32_t x188 = 4990U;
	uint32_t t44 = 17U;

	t44 = (((x185/x186)<x187)&x188);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = -3891;
	int16_t x191 = -1;
	volatile uint8_t x192 = 0U;
	volatile int32_t t45 = -249214690;

	t45 = (((x189/x190)<x191)&x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x194 = INT32_MAX;
	volatile uint8_t x195 = 1U;
	int8_t x196 = -1;
	volatile int32_t t46 = 22704666;

	t46 = (((x193/x194)<x195)&x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = 26;
	uint8_t x202 = 5U;
	static int64_t x203 = INT64_MAX;
	uint16_t x204 = 1U;
	int32_t t47 = 188;

	t47 = (((x201/x202)<x203)&x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = 0;
	int16_t x206 = INT16_MIN;
	int32_t x207 = INT32_MIN;
	static volatile int32_t t48 = -2659105;

	t48 = (((x205/x206)<x207)&x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x209 = 18U;
	volatile int8_t x210 = -2;
	uint8_t x211 = 4U;

	t49 = (((x209/x210)<x211)&x212);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x213 = 0U;
	uint32_t x215 = 215U;
	static int32_t x216 = INT32_MIN;
	static volatile int32_t t50 = 82;

	t50 = (((x213/x214)<x215)&x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = 6;
	volatile int16_t x218 = INT16_MIN;
	uint8_t x219 = 15U;
	volatile int64_t x220 = -1LL;
	volatile int64_t t51 = -885LL;

	t51 = (((x217/x218)<x219)&x220);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x221 = -1;
	static volatile int32_t x222 = INT32_MIN;
	int64_t x223 = INT64_MIN;
	int16_t x224 = -8542;

	t52 = (((x221/x222)<x223)&x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x225 = 95568U;
	static int32_t x226 = -1;
	int16_t x227 = -869;
	int64_t x228 = INT64_MIN;
	int64_t t53 = -4181562612LL;

	t53 = (((x225/x226)<x227)&x228);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MAX;
	int64_t x230 = 4525611834485355LL;
	int16_t x231 = 3;
	static int64_t x232 = -1LL;
	volatile int64_t t54 = 43031576793929LL;

	t54 = (((x229/x230)<x231)&x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x233 = 99U;
	uint64_t x234 = 481927910226LLU;
	static int8_t x235 = 47;
	int64_t x236 = INT64_MIN;
	volatile int64_t t55 = 209742773632246176LL;

	t55 = (((x233/x234)<x235)&x236);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x238 = 3U;
	volatile uint16_t x239 = UINT16_MAX;
	int16_t x240 = 22;
	volatile int32_t t56 = 156;

	t56 = (((x237/x238)<x239)&x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = INT8_MIN;
	int16_t x244 = INT16_MIN;
	static volatile int32_t t57 = -3;

	t57 = (((x241/x242)<x243)&x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = INT8_MIN;
	static int8_t x246 = INT8_MAX;
	uint32_t x247 = 33178586U;
	static volatile uint32_t x248 = 73U;
	uint32_t t58 = 221246966U;

	t58 = (((x245/x246)<x247)&x248);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x249 = -31;
	static uint8_t x250 = 6U;
	uint8_t x251 = 3U;
	volatile int32_t t59 = -429798660;

	t59 = (((x249/x250)<x251)&x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x253 = 14;
	uint8_t x254 = UINT8_MAX;
	uint32_t x255 = 7754U;
	volatile int32_t t60 = -499185737;

	t60 = (((x253/x254)<x255)&x256);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x257 = 1943U;
	uint16_t x258 = 10066U;
	uint64_t x259 = 3116371732LLU;
	static uint8_t x260 = 0U;
	volatile int32_t t61 = 25;

	t61 = (((x257/x258)<x259)&x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x261 = 1U;
	int8_t x262 = 1;
	static volatile int32_t t62 = -123925;

	t62 = (((x261/x262)<x263)&x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x267 = INT32_MIN;
	uint64_t x268 = 882644467369558386LLU;

	t63 = (((x265/x266)<x267)&x268);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x270 = 19U;
	int16_t x272 = INT16_MIN;
	volatile int32_t t64 = -712566110;

	t64 = (((x269/x270)<x271)&x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = INT32_MIN;
	static uint16_t x274 = 174U;
	volatile int32_t t65 = -78;

	t65 = (((x273/x274)<x275)&x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x277 = 1017124U;
	int16_t x278 = -1;
	int16_t x279 = INT16_MIN;
	static uint32_t x280 = 938706U;
	static volatile uint32_t t66 = 13507U;

	t66 = (((x277/x278)<x279)&x280);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = 60U;
	uint8_t x282 = UINT8_MAX;
	static int16_t x283 = -2774;
	static uint64_t x284 = 0LLU;
	volatile uint64_t t67 = 14730325262444725LLU;

	t67 = (((x281/x282)<x283)&x284);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = INT64_MIN;
	static uint64_t x287 = 129102505553LLU;
	int32_t x288 = 1649;
	volatile int32_t t68 = -1;

	t68 = (((x285/x286)<x287)&x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = INT8_MIN;
	int8_t x290 = 2;
	int16_t x291 = INT16_MIN;
	volatile int32_t x292 = -1;
	volatile int32_t t69 = -196;

	t69 = (((x289/x290)<x291)&x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x294 = UINT8_MAX;
	int8_t x295 = INT8_MAX;
	volatile int32_t t70 = -7598;

	t70 = (((x293/x294)<x295)&x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x297 = -11;
	uint64_t x298 = 7341624623438LLU;
	uint64_t x299 = 14483284332LLU;
	static int32_t t71 = -1;

	t71 = (((x297/x298)<x299)&x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x301 = 31U;
	volatile uint64_t x302 = 163LLU;
	int32_t x303 = INT32_MAX;
	volatile uint8_t x304 = 23U;
	int32_t t72 = 6166884;

	t72 = (((x301/x302)<x303)&x304);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x305 = UINT64_MAX;
	volatile uint8_t x306 = 37U;
	volatile uint32_t x307 = UINT32_MAX;
	volatile uint32_t x308 = UINT32_MAX;
	volatile uint32_t t73 = 16070U;

	t73 = (((x305/x306)<x307)&x308);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = 11;
	int16_t x310 = -1;
	int8_t x311 = INT8_MAX;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t74 = 26;

	t74 = (((x309/x310)<x311)&x312);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x313 = INT64_MIN;
	static uint32_t x314 = 62471390U;
	static int16_t x315 = INT16_MAX;
	uint8_t x316 = 1U;
	volatile int32_t t75 = 11175234;

	t75 = (((x313/x314)<x315)&x316);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x317 = -2;
	volatile int32_t x318 = -1;
	uint8_t x319 = 1U;
	volatile int64_t x320 = INT64_MAX;
	int64_t t76 = -806945293511372LL;

	t76 = (((x317/x318)<x319)&x320);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x321 = UINT32_MAX;
	int64_t x322 = INT64_MIN;
	uint8_t x324 = 6U;
	volatile int32_t t77 = 1;

	t77 = (((x321/x322)<x323)&x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x325 = 6U;
	volatile int32_t x327 = -1;
	volatile int32_t t78 = 10602282;

	t78 = (((x325/x326)<x327)&x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = -1LL;
	uint32_t x330 = 254451U;
	int64_t x331 = INT64_MIN;
	static int8_t x332 = INT8_MAX;
	static volatile int32_t t79 = 3803666;

	t79 = (((x329/x330)<x331)&x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = -1LL;
	uint32_t x334 = 54U;
	int16_t x335 = INT16_MAX;
	int8_t x336 = INT8_MAX;
	static volatile int32_t t80 = 44819861;

	t80 = (((x333/x334)<x335)&x336);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = INT64_MIN;
	static int64_t x338 = 82141210811143614LL;
	static int32_t t81 = -822755;

	t81 = (((x337/x338)<x339)&x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = INT16_MIN;
	int32_t x342 = INT32_MAX;
	int32_t x343 = 12919381;
	static int8_t x344 = INT8_MIN;
	int32_t t82 = -440;

	t82 = (((x341/x342)<x343)&x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x346 = 13710U;
	int32_t x347 = -1;
	static uint32_t x348 = 880U;

	t83 = (((x345/x346)<x347)&x348);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = INT64_MAX;
	uint16_t x350 = UINT16_MAX;
	volatile int64_t x351 = INT64_MIN;

	t84 = (((x349/x350)<x351)&x352);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x353 = 28U;
	static volatile int16_t x354 = INT16_MAX;
	int8_t x355 = -1;
	int64_t x356 = INT64_MAX;
	volatile int64_t t85 = -36890679012377LL;

	t85 = (((x353/x354)<x355)&x356);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x358 = 95943009603LLU;
	int64_t t86 = 15290803222592LL;

	t86 = (((x357/x358)<x359)&x360);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x362 = INT8_MIN;
	int64_t x363 = -1LL;
	volatile int64_t x364 = INT64_MAX;
	volatile int64_t t87 = 83834765685737LL;

	t87 = (((x361/x362)<x363)&x364);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x366 = INT8_MIN;
	int16_t x367 = 0;
	uint32_t x368 = 60345U;
	uint32_t t88 = 118962008U;

	t88 = (((x365/x366)<x367)&x368);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x369 = -1;
	int8_t x370 = INT8_MIN;
	int16_t x371 = INT16_MAX;
	volatile int8_t x372 = INT8_MIN;
	volatile int32_t t89 = -12439;

	t89 = (((x369/x370)<x371)&x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x373 = -7;
	int64_t x376 = INT64_MIN;
	int64_t t90 = -1957602370LL;

	t90 = (((x373/x374)<x375)&x376);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x377 = INT8_MAX;
	static volatile int64_t x378 = INT64_MIN;
	int16_t x379 = INT16_MIN;
	static volatile int8_t x380 = INT8_MAX;
	volatile int32_t t91 = 1006788;

	t91 = (((x377/x378)<x379)&x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x381 = 842U;
	int32_t x382 = -1;
	int64_t x383 = INT64_MIN;
	static volatile int32_t t92 = -2212;

	t92 = (((x381/x382)<x383)&x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x388 = UINT32_MAX;
	uint32_t t93 = 32U;

	t93 = (((x385/x386)<x387)&x388);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x389 = -5900;
	static uint32_t x390 = 147694143U;
	int8_t x391 = -1;
	volatile int32_t x392 = INT32_MIN;
	int32_t t94 = -1;

	t94 = (((x389/x390)<x391)&x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x394 = UINT8_MAX;
	int16_t x395 = INT16_MIN;
	static int32_t x396 = 431;
	volatile int32_t t95 = -59;

	t95 = (((x393/x394)<x395)&x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = -1;
	volatile int32_t x398 = 700934;
	uint32_t x399 = UINT32_MAX;
	int16_t x400 = 9;
	volatile int32_t t96 = -3;

	t96 = (((x397/x398)<x399)&x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x402 = 68555675911633LL;
	int16_t x403 = INT16_MIN;
	volatile int32_t x404 = INT32_MIN;
	int32_t t97 = -600825106;

	t97 = (((x401/x402)<x403)&x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x405 = 16U;
	uint8_t x406 = UINT8_MAX;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t98 = 111641;

	t98 = (((x405/x406)<x407)&x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = INT64_MIN;
	int8_t x410 = INT8_MAX;
	int8_t x411 = -1;
	int8_t x412 = INT8_MIN;
	volatile int32_t t99 = 1;

	t99 = (((x409/x410)<x411)&x412);

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

