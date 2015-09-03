#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x3 = 60U;
int8_t x13 = -1;
int32_t x15 = -1335855;
volatile int32_t x18 = INT32_MAX;
int64_t x19 = INT64_MIN;
int16_t x29 = INT16_MIN;
int32_t t8 = 780738239;
static int64_t x37 = -1LL;
static volatile int32_t t10 = -1;
int32_t x49 = 158;
volatile int32_t t12 = -269;
int64_t x64 = INT64_MIN;
int16_t x85 = -1;
int32_t t20 = 1;
int16_t x94 = -1;
uint16_t x95 = 3U;
volatile uint64_t x98 = UINT64_MAX;
uint8_t x102 = UINT8_MAX;
int8_t x105 = -3;
volatile int32_t x108 = -1;
uint8_t x109 = 1U;
int8_t x113 = INT8_MAX;
volatile uint8_t x116 = 9U;
static volatile int32_t x117 = -1;
static int8_t x126 = -1;
int32_t t29 = 72866177;
uint32_t x131 = 703384374U;
int32_t x132 = INT32_MIN;
static int32_t t31 = -818664;
static int8_t x141 = 0;
int16_t x143 = 7464;
int64_t x146 = INT64_MIN;
int8_t x149 = INT8_MAX;
int8_t x151 = 1;
volatile int32_t t37 = 23297;
volatile int16_t x161 = 3;
volatile int16_t x163 = 39;
int8_t x165 = INT8_MIN;
int8_t x168 = INT8_MAX;
volatile int32_t t39 = -3694505;
static int64_t x169 = INT64_MIN;
int32_t t40 = -459;
static uint32_t x175 = UINT32_MAX;
uint64_t x176 = 3LLU;
volatile int32_t t42 = -418410716;
int64_t x188 = INT64_MIN;
int16_t x189 = -1;
uint16_t x191 = 30U;
static int32_t t45 = -18271121;
int16_t x201 = -1;
int16_t x206 = -1;
int32_t x208 = INT32_MAX;
int32_t x209 = -186;
static int8_t x216 = INT8_MIN;
int8_t x219 = -1;
int32_t x226 = -194563;
static int8_t x233 = -2;
uint16_t x234 = 3U;
int16_t x235 = INT16_MIN;
static int32_t t57 = 32527;
int64_t x246 = INT64_MIN;
int8_t x256 = 0;
static volatile int32_t x259 = INT32_MIN;
int32_t t62 = 0;
static volatile int64_t x266 = -1LL;
uint64_t x269 = UINT64_MAX;
int64_t x273 = INT64_MIN;
int8_t x281 = INT8_MIN;
static volatile int32_t x291 = -45;
volatile int32_t x301 = -5;
int8_t x307 = -3;
int16_t x310 = INT16_MIN;
static uint16_t x311 = UINT16_MAX;
int32_t t75 = -6342780;
int16_t x322 = -1;
static int64_t x338 = INT64_MIN;
int64_t x342 = INT64_MIN;
int32_t x348 = INT32_MIN;
uint32_t x350 = 320U;
volatile int8_t x351 = -2;
volatile int16_t x354 = -1;
int32_t t84 = 83;
int16_t x359 = INT16_MIN;
static int64_t x360 = 5LL;
static int16_t x361 = 832;
int32_t t86 = 1839275;
static int16_t x368 = 2485;
volatile int32_t t87 = -28783;
int64_t x369 = INT64_MIN;
uint32_t x372 = UINT32_MAX;
volatile uint16_t x374 = 3U;
int64_t x399 = 2LL;
uint64_t x404 = UINT64_MAX;
int16_t x409 = INT16_MIN;
int32_t x410 = INT32_MIN;
uint16_t x411 = UINT16_MAX;
int8_t x412 = INT8_MIN;
volatile int64_t x417 = 240704506366680LL;
int32_t x418 = -1;
volatile int32_t x420 = -1;
uint16_t x425 = 0U;
static volatile uint64_t x426 = UINT64_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static uint16_t x2 = 507U;
	int32_t x4 = -1;
	static volatile int32_t t0 = -400657;

	t0 = ((x1-(x2%x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -120;
	int32_t x6 = -3715;
	int32_t x7 = INT32_MIN;
	volatile uint8_t x8 = UINT8_MAX;
	int32_t t1 = -1382;

	t1 = ((x5-(x6%x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int8_t x10 = -2;
	volatile uint64_t x11 = 76573748LLU;
	int16_t x12 = INT16_MAX;
	static int32_t t2 = -74097;

	t2 = ((x9-(x10%x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x14 = 28;
	int16_t x16 = 27;
	volatile int32_t t3 = 15486;

	t3 = ((x13-(x14%x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 20481216LLU;
	int16_t x20 = -63;
	static int32_t t4 = 545487;

	t4 = ((x17-(x18%x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 686030532U;
	static int32_t x22 = -1049077525;
	int8_t x23 = -1;
	int8_t x24 = 5;
	volatile int32_t t5 = -28880;

	t5 = ((x21-(x22%x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 855356941393650LLU;
	int8_t x26 = -1;
	int32_t x27 = -1;
	int32_t x28 = -1;
	int32_t t6 = 115;

	t6 = ((x25-(x26%x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x30 = -1;
	uint32_t x31 = UINT32_MAX;
	uint32_t x32 = UINT32_MAX;
	volatile int32_t t7 = -160395;

	t7 = ((x29-(x30%x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	uint32_t x34 = UINT32_MAX;
	int16_t x35 = INT16_MAX;
	static volatile int8_t x36 = 2;

	t8 = ((x33-(x34%x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	uint8_t x39 = 1U;
	int64_t x40 = 115183738051035575LL;
	int32_t t9 = -43028839;

	t9 = ((x37-(x38%x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 1038355U;
	int8_t x42 = -1;
	int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MAX;

	t10 = ((x41-(x42%x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int32_t x46 = INT32_MAX;
	uint16_t x47 = 4U;
	static volatile int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -3;

	t11 = ((x45-(x46%x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 4U;
	static volatile int64_t x51 = INT64_MAX;
	int16_t x52 = INT16_MIN;

	t12 = ((x49-(x50%x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = -1;
	static uint16_t x58 = 1201U;
	static uint32_t x59 = 30535U;
	int8_t x60 = 1;
	int32_t t13 = -23506867;

	t13 = ((x57-(x58%x59))==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = INT64_MIN;
	int16_t x62 = INT16_MAX;
	int16_t x63 = INT16_MAX;
	static int32_t t14 = 141;

	t14 = ((x61-(x62%x63))==x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	uint16_t x66 = 5730U;
	volatile int64_t x67 = -1LL;
	static uint16_t x68 = 3U;
	volatile int32_t t15 = 418523088;

	t15 = ((x65-(x66%x67))==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 2LLU;
	static int8_t x70 = INT8_MIN;
	uint8_t x71 = 15U;
	int32_t x72 = -1334806;
	volatile int32_t t16 = -233015487;

	t16 = ((x69-(x70%x71))==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x77 = 99U;
	volatile uint16_t x78 = UINT16_MAX;
	int64_t x79 = INT64_MAX;
	volatile int8_t x80 = 1;
	int32_t t17 = 0;

	t17 = ((x77-(x78%x79))==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 1582U;
	int64_t x82 = 0LL;
	int64_t x83 = INT64_MAX;
	uint32_t x84 = 1672912954U;
	volatile int32_t t18 = -17428;

	t18 = ((x81-(x82%x83))==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x86 = 13941;
	int8_t x87 = 7;
	int8_t x88 = INT8_MIN;
	int32_t t19 = 1;

	t19 = ((x85-(x86%x87))==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = UINT32_MAX;
	int8_t x90 = -1;
	static uint64_t x91 = 2832276914494301LLU;
	int16_t x92 = -1555;

	t20 = ((x89-(x90%x91))==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	int16_t x96 = -1;
	volatile int32_t t21 = -107729254;

	t21 = ((x93-(x94%x95))==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -1;
	int64_t x99 = INT64_MIN;
	volatile int64_t x100 = INT64_MIN;
	static volatile int32_t t22 = 2587;

	t22 = ((x97-(x98%x99))==x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = 50;
	volatile int8_t x103 = INT8_MIN;
	int32_t x104 = 119499;
	volatile int32_t t23 = 14644;

	t23 = ((x101-(x102%x103))==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x106 = 9U;
	uint32_t x107 = UINT32_MAX;
	static int32_t t24 = -7699;

	t24 = ((x105-(x106%x107))==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x110 = 6U;
	int16_t x111 = INT16_MIN;
	int8_t x112 = -1;
	int32_t t25 = 0;

	t25 = ((x109-(x110%x111))==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x114 = INT16_MIN;
	int16_t x115 = -1;
	int32_t t26 = 766500;

	t26 = ((x113-(x114%x115))==x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x118 = 1;
	volatile uint64_t x119 = 367958551LLU;
	int32_t x120 = -496;
	volatile int32_t t27 = -4;

	t27 = ((x117-(x118%x119))==x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -1;
	int16_t x122 = INT16_MIN;
	int16_t x123 = -1;
	int64_t x124 = -1LL;
	int32_t t28 = 1;

	t28 = ((x121-(x122%x123))==x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = -1;
	uint8_t x127 = UINT8_MAX;
	static volatile uint8_t x128 = UINT8_MAX;

	t29 = ((x125-(x126%x127))==x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	static uint32_t x130 = 1933470U;
	int32_t t30 = -1;

	t30 = ((x129-(x130%x131))==x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x133 = INT64_MIN;
	static volatile int8_t x134 = -1;
	volatile int64_t x135 = INT64_MAX;
	volatile uint16_t x136 = 8U;

	t31 = ((x133-(x134%x135))==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MIN;
	uint64_t x138 = UINT64_MAX;
	int64_t x139 = INT64_MIN;
	static uint32_t x140 = UINT32_MAX;
	volatile int32_t t32 = -36514;

	t32 = ((x137-(x138%x139))==x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x142 = INT32_MIN;
	static uint16_t x144 = 2271U;
	volatile int32_t t33 = -7;

	t33 = ((x141-(x142%x143))==x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = 7900U;
	int64_t x147 = INT64_MIN;
	int16_t x148 = -1;
	volatile int32_t t34 = -47483;

	t34 = ((x145-(x146%x147))==x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x150 = -1;
	int8_t x152 = -1;
	static int32_t t35 = -7166001;

	t35 = ((x149-(x150%x151))==x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x153 = -17;
	int8_t x154 = INT8_MIN;
	int16_t x155 = INT16_MIN;
	int64_t x156 = INT64_MIN;
	int32_t t36 = 8401;

	t36 = ((x153-(x154%x155))==x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = 3444U;
	static uint64_t x158 = 43435789205689LLU;
	volatile int64_t x159 = INT64_MAX;
	volatile int8_t x160 = -1;

	t37 = ((x157-(x158%x159))==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x162 = -1;
	volatile int8_t x164 = -3;
	volatile int32_t t38 = 13415;

	t38 = ((x161-(x162%x163))==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x166 = 28U;
	volatile int32_t x167 = -1;

	t39 = ((x165-(x166%x167))==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x170 = UINT32_MAX;
	uint16_t x171 = 5U;
	static uint16_t x172 = 6U;

	t40 = ((x169-(x170%x171))==x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -998952;
	int16_t x174 = -1;
	static volatile int32_t t41 = 92219;

	t41 = ((x173-(x174%x175))==x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x177 = -69119;
	uint16_t x178 = 1607U;
	uint64_t x179 = 3842327337784450577LLU;
	static volatile int64_t x180 = INT64_MAX;

	t42 = ((x177-(x178%x179))==x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x181 = -1454746;
	static int16_t x182 = 56;
	int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MIN;
	int32_t t43 = 176427210;

	t43 = ((x181-(x182%x183))==x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x185 = 12U;
	static uint8_t x186 = 12U;
	int8_t x187 = INT8_MAX;
	int32_t t44 = -24;

	t44 = ((x185-(x186%x187))==x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x190 = -1;
	int16_t x192 = -7484;

	t45 = ((x189-(x190%x191))==x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x193 = UINT32_MAX;
	int8_t x194 = -1;
	int64_t x195 = -9127LL;
	int32_t x196 = INT32_MAX;
	volatile int32_t t46 = 18;

	t46 = ((x193-(x194%x195))==x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = UINT16_MAX;
	int16_t x198 = INT16_MAX;
	volatile int16_t x199 = -385;
	int64_t x200 = 15LL;
	volatile int32_t t47 = 64948;

	t47 = ((x197-(x198%x199))==x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x202 = INT16_MAX;
	static uint8_t x203 = UINT8_MAX;
	uint8_t x204 = UINT8_MAX;
	volatile int32_t t48 = -477124399;

	t48 = ((x201-(x202%x203))==x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x205 = 120U;
	int32_t x207 = INT32_MIN;
	int32_t t49 = 189333444;

	t49 = ((x205-(x206%x207))==x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x210 = INT8_MIN;
	int8_t x211 = INT8_MAX;
	static uint64_t x212 = UINT64_MAX;
	volatile int32_t t50 = -1;

	t50 = ((x209-(x210%x211))==x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x213 = 113U;
	uint16_t x214 = 1U;
	int32_t x215 = INT32_MIN;
	int32_t t51 = -7352;

	t51 = ((x213-(x214%x215))==x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = 0;
	int16_t x218 = -3845;
	int16_t x220 = INT16_MAX;
	int32_t t52 = -461;

	t52 = ((x217-(x218%x219))==x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MIN;
	static int16_t x222 = INT16_MAX;
	uint32_t x223 = UINT32_MAX;
	static int16_t x224 = -1;
	volatile int32_t t53 = -12512;

	t53 = ((x221-(x222%x223))==x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x225 = INT64_MIN;
	int32_t x227 = -1;
	int64_t x228 = -1LL;
	volatile int32_t t54 = -50405164;

	t54 = ((x225-(x226%x227))==x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x229 = 195556427662433064LLU;
	uint8_t x230 = 50U;
	uint32_t x231 = 617728U;
	int8_t x232 = 2;
	int32_t t55 = 0;

	t55 = ((x229-(x230%x231))==x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x236 = UINT16_MAX;
	int32_t t56 = 0;

	t56 = ((x233-(x234%x235))==x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = INT8_MIN;
	int8_t x238 = -9;
	int64_t x239 = 51180643675125LL;
	static volatile uint64_t x240 = 117967848055091LLU;

	t57 = ((x237-(x238%x239))==x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x241 = -1;
	static uint64_t x242 = 137LLU;
	uint8_t x243 = UINT8_MAX;
	int8_t x244 = -1;
	volatile int32_t t58 = 15;

	t58 = ((x241-(x242%x243))==x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MAX;
	int32_t x247 = -22;
	uint16_t x248 = 598U;
	volatile int32_t t59 = -22525;

	t59 = ((x245-(x246%x247))==x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MIN;
	int32_t x250 = 30;
	int8_t x251 = 15;
	int8_t x252 = -1;
	static int32_t t60 = -794872;

	t60 = ((x249-(x250%x251))==x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x253 = UINT16_MAX;
	uint8_t x254 = UINT8_MAX;
	int64_t x255 = INT64_MIN;
	int32_t t61 = 549;

	t61 = ((x253-(x254%x255))==x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = INT8_MAX;
	int16_t x258 = -242;
	int32_t x260 = INT32_MAX;

	t62 = ((x257-(x258%x259))==x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x261 = UINT16_MAX;
	uint16_t x262 = 43U;
	volatile uint8_t x263 = 4U;
	uint64_t x264 = 17025211857319LLU;
	int32_t t63 = 19900;

	t63 = ((x261-(x262%x263))==x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	uint8_t x267 = UINT8_MAX;
	static int64_t x268 = INT64_MAX;
	int32_t t64 = 11643202;

	t64 = ((x265-(x266%x267))==x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x270 = UINT32_MAX;
	volatile int64_t x271 = INT64_MIN;
	uint32_t x272 = UINT32_MAX;
	volatile int32_t t65 = -79627537;

	t65 = ((x269-(x270%x271))==x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x274 = -709;
	volatile int32_t x275 = INT32_MAX;
	int16_t x276 = -755;
	int32_t t66 = 665524;

	t66 = ((x273-(x274%x275))==x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = -1LL;
	volatile uint32_t x278 = UINT32_MAX;
	int8_t x279 = INT8_MIN;
	uint16_t x280 = 16U;
	int32_t t67 = 14358040;

	t67 = ((x277-(x278%x279))==x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x282 = 13;
	uint8_t x283 = 39U;
	volatile uint64_t x284 = UINT64_MAX;
	int32_t t68 = -21;

	t68 = ((x281-(x282%x283))==x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x285 = INT8_MAX;
	static uint8_t x286 = 1U;
	volatile int16_t x287 = INT16_MAX;
	uint16_t x288 = UINT16_MAX;
	int32_t t69 = 366455936;

	t69 = ((x285-(x286%x287))==x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x289 = INT32_MIN;
	volatile uint32_t x290 = 1565634957U;
	uint8_t x292 = 7U;
	int32_t t70 = -828589404;

	t70 = ((x289-(x290%x291))==x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = -1;
	volatile int8_t x294 = INT8_MIN;
	static int8_t x295 = INT8_MAX;
	int16_t x296 = INT16_MIN;
	volatile int32_t t71 = -519222903;

	t71 = ((x293-(x294%x295))==x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x297 = 121U;
	static uint16_t x298 = 84U;
	uint8_t x299 = 6U;
	int64_t x300 = INT64_MIN;
	int32_t t72 = -45;

	t72 = ((x297-(x298%x299))==x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x302 = INT8_MIN;
	volatile int8_t x303 = 23;
	int16_t x304 = -1;
	int32_t t73 = -2041;

	t73 = ((x301-(x302%x303))==x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x305 = 432844U;
	uint8_t x306 = 1U;
	int16_t x308 = INT16_MIN;
	volatile int32_t t74 = 6787;

	t74 = ((x305-(x306%x307))==x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = -22;
	uint16_t x312 = 11U;

	t75 = ((x309-(x310%x311))==x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x321 = INT32_MIN;
	int8_t x323 = INT8_MIN;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t76 = 16;

	t76 = ((x321-(x322%x323))==x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x325 = -1;
	static int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	volatile uint32_t x328 = UINT32_MAX;
	int32_t t77 = -118919;

	t77 = ((x325-(x326%x327))==x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MAX;
	int64_t x330 = -1LL;
	int8_t x331 = INT8_MIN;
	uint32_t x332 = 62259U;
	volatile int32_t t78 = 272016911;

	t78 = ((x329-(x330%x331))==x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x333 = 23U;
	static int64_t x334 = -1LL;
	uint8_t x335 = 1U;
	int64_t x336 = -1LL;
	static volatile int32_t t79 = 1;

	t79 = ((x333-(x334%x335))==x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x337 = 12987;
	int8_t x339 = -1;
	volatile uint16_t x340 = 532U;
	volatile int32_t t80 = -215;

	t80 = ((x337-(x338%x339))==x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x341 = 41U;
	static volatile uint8_t x343 = UINT8_MAX;
	int16_t x344 = -1;
	static int32_t t81 = 97015;

	t81 = ((x341-(x342%x343))==x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x345 = 0;
	static int64_t x346 = -23913LL;
	int64_t x347 = -1LL;
	int32_t t82 = 0;

	t82 = ((x345-(x346%x347))==x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x349 = -70;
	int16_t x352 = 10;
	int32_t t83 = 23;

	t83 = ((x349-(x350%x351))==x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x353 = UINT8_MAX;
	int8_t x355 = -1;
	uint8_t x356 = 0U;

	t84 = ((x353-(x354%x355))==x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x357 = 32U;
	int8_t x358 = -27;
	volatile int32_t t85 = 258383754;

	t85 = ((x357-(x358%x359))==x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x362 = INT32_MIN;
	int8_t x363 = -22;
	int32_t x364 = INT32_MIN;

	t86 = ((x361-(x362%x363))==x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x365 = 45U;
	uint8_t x366 = UINT8_MAX;
	int8_t x367 = -1;

	t87 = ((x365-(x366%x367))==x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x370 = -1;
	int8_t x371 = INT8_MAX;
	int32_t t88 = 22306;

	t88 = ((x369-(x370%x371))==x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x373 = 98U;
	int64_t x375 = -3058LL;
	volatile int32_t x376 = 27827;
	static int32_t t89 = 237;

	t89 = ((x373-(x374%x375))==x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = INT8_MIN;
	static volatile int32_t x378 = INT32_MAX;
	int32_t x379 = -1;
	volatile uint64_t x380 = 1209LLU;
	volatile int32_t t90 = 11259755;

	t90 = ((x377-(x378%x379))==x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x393 = UINT64_MAX;
	uint32_t x394 = 30U;
	uint16_t x395 = 5U;
	uint8_t x396 = 13U;
	volatile int32_t t91 = -14;

	t91 = ((x393-(x394%x395))==x396);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x397 = INT16_MIN;
	int64_t x398 = INT64_MIN;
	volatile int32_t x400 = -26359337;
	int32_t t92 = 173229;

	t92 = ((x397-(x398%x399))==x400);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = INT8_MIN;
	static int16_t x402 = -1;
	int16_t x403 = INT16_MIN;
	volatile int32_t t93 = 2232;

	t93 = ((x401-(x402%x403))==x404);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x405 = INT64_MAX;
	uint8_t x406 = 0U;
	int16_t x407 = INT16_MAX;
	int64_t x408 = -39204769061307334LL;
	static volatile int32_t t94 = 8;

	t94 = ((x405-(x406%x407))==x408);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t t95 = 4;

	t95 = ((x409-(x410%x411))==x412);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x413 = INT32_MIN;
	uint32_t x414 = UINT32_MAX;
	int64_t x415 = -1LL;
	uint8_t x416 = UINT8_MAX;
	static volatile int32_t t96 = 195709;

	t96 = ((x413-(x414%x415))==x416);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x419 = 15136U;
	volatile int32_t t97 = -508656541;

	t97 = ((x417-(x418%x419))==x420);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x421 = 72271407619LLU;
	uint8_t x422 = UINT8_MAX;
	volatile int32_t x423 = -1881717;
	int16_t x424 = -99;
	volatile int32_t t98 = 1;

	t98 = ((x421-(x422%x423))==x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x427 = UINT16_MAX;
	uint32_t x428 = 10120U;
	volatile int32_t t99 = 897;

	t99 = ((x425-(x426%x427))==x428);

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

