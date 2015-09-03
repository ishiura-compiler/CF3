#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 873623U;
int16_t x16 = -1;
int8_t x18 = 0;
static int32_t t3 = 176924747;
int16_t x26 = -5;
int16_t x27 = INT16_MAX;
uint32_t x29 = 1924U;
int64_t x37 = INT64_MIN;
int64_t x40 = 25217540451754996LL;
int32_t t8 = 27192;
static int64_t x46 = INT64_MIN;
int32_t x51 = INT32_MIN;
uint16_t x57 = UINT16_MAX;
int64_t x58 = 84LL;
int16_t x63 = INT16_MAX;
volatile int16_t x64 = -1;
int16_t x69 = INT16_MIN;
static volatile int16_t x71 = INT16_MIN;
static volatile int32_t t14 = 490866;
uint16_t x87 = 5U;
int32_t t18 = -210227697;
int32_t t20 = 77328;
static uint16_t x98 = 384U;
int32_t t23 = 1224;
int16_t x126 = -1;
static int8_t x128 = INT8_MIN;
int32_t t26 = 0;
volatile int64_t x136 = -15LL;
uint16_t x139 = UINT16_MAX;
volatile int8_t x142 = INT8_MIN;
uint32_t x151 = UINT32_MAX;
int32_t x152 = INT32_MAX;
static volatile int32_t x153 = INT32_MAX;
volatile int32_t t34 = 13740211;
int64_t x169 = -1LL;
static volatile uint32_t x171 = UINT32_MAX;
int32_t x183 = INT32_MAX;
int64_t x194 = INT64_MIN;
uint16_t x196 = UINT16_MAX;
static volatile uint64_t x210 = 10476839851015LLU;
uint16_t x217 = 2U;
volatile uint16_t x220 = 96U;
uint16_t x225 = 1869U;
int8_t x228 = INT8_MIN;
volatile int16_t x238 = INT16_MIN;
volatile uint32_t x242 = 356U;
int32_t t52 = 104728;
uint32_t x246 = 49879U;
int64_t x252 = -1LL;
uint64_t x253 = 226502132LLU;
int32_t x256 = INT32_MIN;
uint32_t x259 = 2794657U;
uint16_t x272 = 181U;
int16_t x277 = INT16_MIN;
volatile uint32_t x278 = UINT32_MAX;
static int64_t x281 = INT64_MIN;
volatile int8_t x284 = INT8_MAX;
int64_t x287 = INT64_MIN;
int32_t t63 = -1;
uint64_t x290 = 2LLU;
uint8_t x297 = 9U;
int32_t x304 = INT32_MIN;
int8_t x309 = -2;
static int16_t x316 = INT16_MAX;
static volatile int32_t t69 = 12;
int16_t x322 = INT16_MIN;
int32_t t73 = 9227;
uint64_t x344 = 2578119736793753LLU;
int8_t x345 = -11;
volatile uint32_t x346 = 22902920U;
uint32_t x347 = UINT32_MAX;
volatile int32_t t77 = 0;
uint64_t x354 = UINT64_MAX;
volatile int32_t t78 = -446126198;
int32_t x357 = -4;
static int8_t x363 = INT8_MIN;
int64_t x364 = -109430185254712LL;
int64_t x375 = INT64_MIN;
static volatile uint32_t x378 = 28402U;
static uint64_t x385 = UINT64_MAX;
static volatile int64_t x388 = INT64_MAX;
int16_t x389 = -1;
int64_t x392 = INT64_MAX;
int32_t t87 = -319425;
static uint16_t x407 = UINT16_MAX;
volatile int32_t t90 = 460;
int16_t x412 = INT16_MAX;
volatile int32_t t92 = 416;
uint8_t x418 = 0U;
volatile int16_t x421 = INT16_MIN;
volatile int64_t x424 = INT64_MIN;
int32_t t96 = -18;
uint16_t x439 = UINT16_MAX;
uint16_t x443 = 12150U;
uint8_t x444 = UINT8_MAX;


void f0(void) {
	static int64_t x2 = -1LL;
	volatile int32_t x3 = -4212;
	static int16_t x4 = -97;
	volatile int32_t t0 = 0;

	t0 = ((x1<=(x2+x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -6203845390524LL;
	int8_t x6 = 37;
	uint64_t x7 = 817557926LLU;
	int32_t x8 = -2722;
	int32_t t1 = -346363570;

	t1 = ((x5<=(x6+x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = INT16_MIN;
	static uint64_t x14 = 14942359LLU;
	uint32_t x15 = 470U;
	volatile int32_t t2 = -12451115;

	t2 = ((x13<=(x14+x15))<x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = INT16_MIN;
	int64_t x19 = INT64_MAX;
	int8_t x20 = INT8_MIN;

	t3 = ((x17<=(x18+x19))<x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MAX;
	uint16_t x22 = 25U;
	static volatile int8_t x23 = INT8_MIN;
	int8_t x24 = INT8_MAX;
	int32_t t4 = -44006358;

	t4 = ((x21<=(x22+x23))<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x25 = INT8_MIN;
	volatile int16_t x28 = INT16_MAX;
	volatile int32_t t5 = 1;

	t5 = ((x25<=(x26+x27))<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x30 = -475809217;
	static int64_t x31 = -1473LL;
	volatile int32_t x32 = 6945589;
	volatile int32_t t6 = 1024181927;

	t6 = ((x29<=(x30+x31))<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x38 = INT8_MIN;
	uint16_t x39 = 27436U;
	int32_t t7 = -5702222;

	t7 = ((x37<=(x38+x39))<x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x41 = INT16_MIN;
	int64_t x42 = 0LL;
	static int8_t x43 = -1;
	volatile int8_t x44 = INT8_MIN;

	t8 = ((x41<=(x42+x43))<x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x45 = INT32_MIN;
	static volatile int16_t x47 = 481;
	int32_t x48 = -38505270;
	volatile int32_t t9 = 115;

	t9 = ((x45<=(x46+x47))<x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MAX;
	int64_t x52 = INT64_MAX;
	volatile int32_t t10 = -187;

	t10 = ((x49<=(x50+x51))<x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x59 = 17559996LLU;
	uint16_t x60 = 310U;
	static volatile int32_t t11 = -54575255;

	t11 = ((x57<=(x58+x59))<x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = INT16_MAX;
	int8_t x62 = INT8_MIN;
	int32_t t12 = 1;

	t12 = ((x61<=(x62+x63))<x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x65 = -9877696;
	static volatile uint32_t x66 = UINT32_MAX;
	uint32_t x67 = UINT32_MAX;
	int64_t x68 = INT64_MAX;
	volatile int32_t t13 = 11;

	t13 = ((x65<=(x66+x67))<x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x70 = INT16_MIN;
	int8_t x72 = INT8_MIN;

	t14 = ((x69<=(x70+x71))<x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 84024U;
	volatile int16_t x74 = -52;
	static int16_t x75 = -1;
	int32_t x76 = -1;
	volatile int32_t t15 = 774249;

	t15 = ((x73<=(x74+x75))<x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = 0;
	int8_t x78 = INT8_MAX;
	static volatile int8_t x79 = 7;
	int64_t x80 = INT64_MAX;
	int32_t t16 = 43216553;

	t16 = ((x77<=(x78+x79))<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x81 = INT8_MIN;
	int32_t x82 = 865208;
	volatile uint8_t x83 = UINT8_MAX;
	static int8_t x84 = 0;
	volatile int32_t t17 = 1;

	t17 = ((x81<=(x82+x83))<x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -1;
	volatile int8_t x86 = INT8_MAX;
	int8_t x88 = 26;

	t18 = ((x85<=(x86+x87))<x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = 12;
	static int16_t x90 = INT16_MIN;
	int8_t x91 = INT8_MIN;
	int16_t x92 = -54;
	static int32_t t19 = -211;

	t19 = ((x89<=(x90+x91))<x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x93 = UINT8_MAX;
	int8_t x94 = INT8_MIN;
	int8_t x95 = -1;
	int16_t x96 = INT16_MIN;

	t20 = ((x93<=(x94+x95))<x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MIN;
	int64_t x99 = INT64_MIN;
	uint8_t x100 = 80U;
	volatile int32_t t21 = -1984;

	t21 = ((x97<=(x98+x99))<x100);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x101 = 15163LLU;
	int8_t x102 = INT8_MIN;
	volatile uint32_t x103 = 13667U;
	uint32_t x104 = 33104332U;
	volatile int32_t t22 = 1021;

	t22 = ((x101<=(x102+x103))<x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = 1;
	uint32_t x110 = UINT32_MAX;
	volatile uint8_t x111 = 0U;
	int16_t x112 = INT16_MIN;

	t23 = ((x109<=(x110+x111))<x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = INT64_MIN;
	volatile uint16_t x118 = UINT16_MAX;
	int8_t x119 = INT8_MIN;
	uint32_t x120 = 1893024612U;
	volatile int32_t t24 = -199086822;

	t24 = ((x117<=(x118+x119))<x120);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = -105995;
	uint16_t x122 = 15661U;
	int16_t x123 = -63;
	volatile uint64_t x124 = 48687240147LLU;
	volatile int32_t t25 = -207471161;

	t25 = ((x121<=(x122+x123))<x124);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = 1LL;
	int8_t x127 = -18;

	t26 = ((x125<=(x126+x127))<x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x133 = INT64_MAX;
	uint64_t x134 = 122LLU;
	static int32_t x135 = -12;
	volatile int32_t t27 = -226096936;

	t27 = ((x133<=(x134+x135))<x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = INT16_MIN;
	int64_t x138 = -3326452013217157LL;
	int32_t x140 = INT32_MAX;
	static int32_t t28 = 1;

	t28 = ((x137<=(x138+x139))<x140);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x141 = INT64_MIN;
	int8_t x143 = INT8_MIN;
	int64_t x144 = INT64_MIN;
	volatile int32_t t29 = -775;

	t29 = ((x141<=(x142+x143))<x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = 5;
	volatile int8_t x146 = INT8_MAX;
	uint32_t x147 = 5189U;
	uint32_t x148 = UINT32_MAX;
	static int32_t t30 = -12;

	t30 = ((x145<=(x146+x147))<x148);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = -1;
	static int64_t x150 = -1LL;
	int32_t t31 = -37;

	t31 = ((x149<=(x150+x151))<x152);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x154 = UINT16_MAX;
	int32_t x155 = -1;
	static volatile uint32_t x156 = 64U;
	volatile int32_t t32 = 43;

	t32 = ((x153<=(x154+x155))<x156);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = -40LL;
	static int64_t x158 = INT64_MIN;
	uint16_t x159 = 3309U;
	int16_t x160 = INT16_MAX;
	volatile int32_t t33 = -430077;

	t33 = ((x157<=(x158+x159))<x160);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x161 = 23727365;
	int16_t x162 = -1;
	int16_t x163 = -18;
	int64_t x164 = INT64_MIN;

	t34 = ((x161<=(x162+x163))<x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = INT16_MIN;
	int32_t x166 = INT32_MIN;
	uint8_t x167 = 0U;
	int8_t x168 = INT8_MIN;
	int32_t t35 = -1;

	t35 = ((x165<=(x166+x167))<x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x170 = 48U;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t36 = 4;

	t36 = ((x169<=(x170+x171))<x172);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x173 = -1;
	static int64_t x174 = INT64_MIN;
	volatile uint16_t x175 = 1U;
	int64_t x176 = INT64_MIN;
	volatile int32_t t37 = -6340;

	t37 = ((x173<=(x174+x175))<x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x177 = -7;
	int32_t x178 = -60080968;
	volatile uint16_t x179 = 5U;
	uint32_t x180 = UINT32_MAX;
	volatile int32_t t38 = -38683;

	t38 = ((x177<=(x178+x179))<x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x181 = INT8_MAX;
	volatile uint32_t x182 = UINT32_MAX;
	int32_t x184 = 161;
	static volatile int32_t t39 = 3190;

	t39 = ((x181<=(x182+x183))<x184);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = INT32_MIN;
	uint32_t x195 = 15928U;
	int32_t t40 = 0;

	t40 = ((x193<=(x194+x195))<x196);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = INT8_MAX;
	static uint16_t x198 = 29U;
	static uint16_t x199 = 11U;
	uint32_t x200 = 3904981U;
	volatile int32_t t41 = -3;

	t41 = ((x197<=(x198+x199))<x200);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = INT8_MAX;
	static int32_t x202 = INT32_MIN;
	int64_t x203 = -1LL;
	static uint8_t x204 = UINT8_MAX;
	int32_t t42 = 14970;

	t42 = ((x201<=(x202+x203))<x204);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x205 = 23LLU;
	volatile int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = 1U;
	volatile int32_t t43 = -1;

	t43 = ((x205<=(x206+x207))<x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x209 = -1;
	uint8_t x211 = 23U;
	uint64_t x212 = UINT64_MAX;
	static volatile int32_t t44 = -253325071;

	t44 = ((x209<=(x210+x211))<x212);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x213 = INT32_MIN;
	int8_t x214 = -1;
	uint32_t x215 = 45322939U;
	int32_t x216 = INT32_MIN;
	int32_t t45 = 59;

	t45 = ((x213<=(x214+x215))<x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x218 = 26U;
	int16_t x219 = INT16_MIN;
	volatile int32_t t46 = -661;

	t46 = ((x217<=(x218+x219))<x220);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x221 = 41078124LL;
	volatile uint8_t x222 = UINT8_MAX;
	static int8_t x223 = INT8_MIN;
	static int16_t x224 = INT16_MAX;
	volatile int32_t t47 = 7042;

	t47 = ((x221<=(x222+x223))<x224);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x226 = UINT8_MAX;
	static int16_t x227 = INT16_MIN;
	static int32_t t48 = -8897;

	t48 = ((x225<=(x226+x227))<x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x229 = 12803871978915209LLU;
	uint64_t x230 = UINT64_MAX;
	uint8_t x231 = 0U;
	static volatile int64_t x232 = INT64_MIN;
	volatile int32_t t49 = -11358603;

	t49 = ((x229<=(x230+x231))<x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x233 = UINT8_MAX;
	uint16_t x234 = 1U;
	uint8_t x235 = 50U;
	int32_t x236 = -1;
	volatile int32_t t50 = 7175;

	t50 = ((x233<=(x234+x235))<x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x237 = INT16_MAX;
	static uint32_t x239 = 1900731376U;
	uint16_t x240 = 29164U;
	volatile int32_t t51 = 31;

	t51 = ((x237<=(x238+x239))<x240);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x241 = INT32_MAX;
	volatile uint32_t x243 = 2837016U;
	int64_t x244 = INT64_MAX;

	t52 = ((x241<=(x242+x243))<x244);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x245 = 2028687LLU;
	uint32_t x247 = UINT32_MAX;
	uint8_t x248 = 24U;
	int32_t t53 = -246;

	t53 = ((x245<=(x246+x247))<x248);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = -30;
	int32_t x250 = INT32_MAX;
	int16_t x251 = -1;
	volatile int32_t t54 = -124;

	t54 = ((x249<=(x250+x251))<x252);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x254 = -4559;
	static volatile int8_t x255 = 7;
	static volatile int32_t t55 = 22344397;

	t55 = ((x253<=(x254+x255))<x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x257 = INT8_MIN;
	uint32_t x258 = 251U;
	uint16_t x260 = 4889U;
	volatile int32_t t56 = 0;

	t56 = ((x257<=(x258+x259))<x260);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x261 = -171;
	uint8_t x262 = 101U;
	volatile int64_t x263 = 4523108654993LL;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t57 = 59860147;

	t57 = ((x261<=(x262+x263))<x264);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x265 = UINT8_MAX;
	int64_t x266 = -71790480141LL;
	static uint8_t x267 = 14U;
	int16_t x268 = INT16_MIN;
	volatile int32_t t58 = 0;

	t58 = ((x265<=(x266+x267))<x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x269 = 0U;
	int8_t x270 = INT8_MIN;
	int16_t x271 = INT16_MAX;
	static int32_t t59 = -194422;

	t59 = ((x269<=(x270+x271))<x272);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x273 = INT64_MIN;
	int64_t x274 = -1LL;
	int16_t x275 = INT16_MIN;
	uint32_t x276 = UINT32_MAX;
	int32_t t60 = 746001838;

	t60 = ((x273<=(x274+x275))<x276);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x279 = 47;
	volatile int8_t x280 = -1;
	volatile int32_t t61 = 13;

	t61 = ((x277<=(x278+x279))<x280);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x282 = INT8_MIN;
	int64_t x283 = 3527838LL;
	static int32_t t62 = 299418;

	t62 = ((x281<=(x282+x283))<x284);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = 3;
	int8_t x286 = INT8_MAX;
	uint8_t x288 = 24U;

	t63 = ((x285<=(x286+x287))<x288);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = INT8_MAX;
	static int64_t x291 = INT64_MIN;
	volatile uint16_t x292 = 2280U;
	int32_t t64 = 45;

	t64 = ((x289<=(x290+x291))<x292);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x293 = UINT64_MAX;
	int64_t x294 = -31887LL;
	volatile int16_t x295 = -1;
	uint16_t x296 = UINT16_MAX;
	int32_t t65 = 1;

	t65 = ((x293<=(x294+x295))<x296);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x298 = INT8_MIN;
	uint16_t x299 = 126U;
	static int64_t x300 = -1LL;
	int32_t t66 = -1608715;

	t66 = ((x297<=(x298+x299))<x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x301 = -5;
	int64_t x302 = INT64_MIN;
	uint8_t x303 = 35U;
	int32_t t67 = -16801;

	t67 = ((x301<=(x302+x303))<x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x310 = INT16_MIN;
	int64_t x311 = -1LL;
	uint16_t x312 = 2U;
	volatile int32_t t68 = -37466;

	t68 = ((x309<=(x310+x311))<x312);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x313 = 3605U;
	static volatile int64_t x314 = INT64_MIN;
	int64_t x315 = 0LL;

	t69 = ((x313<=(x314+x315))<x316);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x321 = -1;
	volatile int16_t x323 = INT16_MAX;
	volatile int32_t x324 = INT32_MAX;
	static int32_t t70 = -1331847;

	t70 = ((x321<=(x322+x323))<x324);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x325 = UINT16_MAX;
	uint64_t x326 = 963129719020LLU;
	uint32_t x327 = UINT32_MAX;
	volatile uint64_t x328 = 134921386822LLU;
	volatile int32_t t71 = 62365;

	t71 = ((x325<=(x326+x327))<x328);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x329 = 0U;
	volatile uint64_t x330 = 764015008021LLU;
	int8_t x331 = INT8_MIN;
	static uint64_t x332 = 41125827429LLU;
	static volatile int32_t t72 = -7;

	t72 = ((x329<=(x330+x331))<x332);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x333 = 0U;
	int16_t x334 = INT16_MIN;
	static uint64_t x335 = UINT64_MAX;
	uint8_t x336 = UINT8_MAX;

	t73 = ((x333<=(x334+x335))<x336);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x337 = INT32_MIN;
	volatile uint16_t x338 = UINT16_MAX;
	static int8_t x339 = -1;
	volatile int64_t x340 = -505932405809LL;
	static volatile int32_t t74 = 216;

	t74 = ((x337<=(x338+x339))<x340);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x341 = 10105U;
	int16_t x342 = 6828;
	static uint16_t x343 = 6774U;
	volatile int32_t t75 = 0;

	t75 = ((x341<=(x342+x343))<x344);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x348 = 0U;
	volatile int32_t t76 = -26;

	t76 = ((x345<=(x346+x347))<x348);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x349 = INT32_MAX;
	static int64_t x350 = -1LL;
	volatile uint32_t x351 = 4U;
	uint8_t x352 = UINT8_MAX;

	t77 = ((x349<=(x350+x351))<x352);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x353 = INT8_MIN;
	uint16_t x355 = UINT16_MAX;
	int32_t x356 = INT32_MAX;

	t78 = ((x353<=(x354+x355))<x356);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x358 = UINT16_MAX;
	static volatile uint32_t x359 = 22U;
	volatile int64_t x360 = INT64_MAX;
	static volatile int32_t t79 = 19426;

	t79 = ((x357<=(x358+x359))<x360);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x361 = INT16_MIN;
	static int64_t x362 = -8442725508LL;
	int32_t t80 = 21;

	t80 = ((x361<=(x362+x363))<x364);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = INT16_MAX;
	int32_t x366 = INT32_MIN;
	volatile uint8_t x367 = UINT8_MAX;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t81 = -28834;

	t81 = ((x365<=(x366+x367))<x368);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x369 = -6005LL;
	int32_t x370 = INT32_MIN;
	volatile uint64_t x371 = 183130053904LLU;
	int8_t x372 = -40;
	volatile int32_t t82 = 19652;

	t82 = ((x369<=(x370+x371))<x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x373 = 1U;
	static volatile uint8_t x374 = 1U;
	int16_t x376 = -1;
	int32_t t83 = 159652;

	t83 = ((x373<=(x374+x375))<x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x377 = 944648681199LL;
	int64_t x379 = INT64_MIN;
	uint8_t x380 = UINT8_MAX;
	int32_t t84 = -93002528;

	t84 = ((x377<=(x378+x379))<x380);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x381 = 3766U;
	volatile uint32_t x382 = 8840840U;
	int8_t x383 = -1;
	int8_t x384 = INT8_MIN;
	int32_t t85 = -78;

	t85 = ((x381<=(x382+x383))<x384);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x386 = 0;
	static int64_t x387 = -293543761LL;
	volatile int32_t t86 = 48191;

	t86 = ((x385<=(x386+x387))<x388);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x390 = UINT8_MAX;
	uint32_t x391 = 446U;

	t87 = ((x389<=(x390+x391))<x392);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x393 = 916;
	int64_t x394 = 9667399559LL;
	uint16_t x395 = UINT16_MAX;
	static uint64_t x396 = 137639474LLU;
	volatile int32_t t88 = 558218;

	t88 = ((x393<=(x394+x395))<x396);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x397 = 44;
	volatile int8_t x398 = INT8_MIN;
	int8_t x399 = -1;
	static int16_t x400 = -1096;
	static volatile int32_t t89 = 5028403;

	t89 = ((x397<=(x398+x399))<x400);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x405 = -1;
	int64_t x406 = -9055486371693LL;
	volatile int16_t x408 = INT16_MIN;

	t90 = ((x405<=(x406+x407))<x408);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x409 = 20U;
	uint16_t x410 = UINT16_MAX;
	volatile uint64_t x411 = 77004LLU;
	int32_t t91 = -5483;

	t91 = ((x409<=(x410+x411))<x412);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x413 = INT16_MIN;
	volatile uint16_t x414 = 12640U;
	uint32_t x415 = UINT32_MAX;
	static int32_t x416 = INT32_MAX;

	t92 = ((x413<=(x414+x415))<x416);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x417 = 74U;
	int8_t x419 = -29;
	volatile int32_t x420 = -1;
	volatile int32_t t93 = -989096;

	t93 = ((x417<=(x418+x419))<x420);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x422 = -656;
	uint8_t x423 = UINT8_MAX;
	int32_t t94 = 28143;

	t94 = ((x421<=(x422+x423))<x424);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x425 = 1U;
	int8_t x426 = INT8_MIN;
	uint64_t x427 = UINT64_MAX;
	int16_t x428 = INT16_MAX;
	volatile int32_t t95 = -1;

	t95 = ((x425<=(x426+x427))<x428);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x433 = -1;
	int16_t x434 = INT16_MAX;
	int16_t x435 = -1;
	int64_t x436 = 34027116289LL;

	t96 = ((x433<=(x434+x435))<x436);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x437 = UINT64_MAX;
	uint64_t x438 = UINT64_MAX;
	volatile int32_t x440 = INT32_MAX;
	int32_t t97 = -2406918;

	t97 = ((x437<=(x438+x439))<x440);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x441 = -1;
	int64_t x442 = INT64_MIN;
	volatile int32_t t98 = -93;

	t98 = ((x441<=(x442+x443))<x444);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x453 = 1U;
	static int32_t x454 = -219;
	static volatile int16_t x455 = -1;
	volatile uint32_t x456 = 1018378U;
	volatile int32_t t99 = 26185374;

	t99 = ((x453<=(x454+x455))<x456);

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

