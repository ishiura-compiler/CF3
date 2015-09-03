#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 16;
int32_t t4 = -1328141;
int32_t t5 = -80554004;
static uint64_t x29 = 1LLU;
int8_t x31 = -1;
int64_t x34 = -1LL;
static volatile uint32_t x42 = 2399696U;
uint16_t x45 = 234U;
int32_t x49 = -8153053;
uint32_t x51 = 20U;
int8_t x61 = 19;
uint64_t x63 = 62046187LLU;
static volatile int64_t x64 = INT64_MIN;
volatile int16_t x66 = INT16_MIN;
int16_t x67 = -1;
int8_t x69 = -30;
int64_t x75 = INT64_MIN;
static int64_t x81 = 101850LL;
volatile uint32_t x88 = 108380133U;
int8_t x91 = INT8_MIN;
int32_t t20 = -4;
volatile int16_t x94 = INT16_MIN;
static volatile uint16_t x98 = UINT16_MAX;
static uint8_t x100 = 63U;
static int32_t t23 = -262;
uint16_t x109 = 83U;
int16_t x125 = -866;
volatile int64_t x130 = -1LL;
int16_t x135 = 73;
int8_t x154 = -59;
int64_t x166 = INT64_MIN;
uint8_t x169 = 3U;
int32_t x172 = 774168635;
int16_t x173 = -1;
volatile int16_t x174 = INT16_MAX;
int8_t x178 = INT8_MIN;
uint64_t x180 = 7881107LLU;
int32_t x181 = -1;
uint16_t x188 = 17074U;
int64_t x196 = INT64_MIN;
int64_t x201 = -1LL;
uint32_t x208 = 42485U;
uint16_t x209 = 1U;
uint8_t x210 = 13U;
volatile int32_t t47 = -873290114;
uint32_t x216 = UINT32_MAX;
uint64_t x218 = UINT64_MAX;
int8_t x221 = -1;
static int32_t x222 = -13121;
int64_t x229 = INT64_MAX;
uint8_t x230 = 73U;
uint8_t x231 = 1U;
static int16_t x232 = 7;
uint16_t x237 = 1799U;
static volatile int32_t t55 = -4718;
volatile uint64_t x246 = UINT64_MAX;
int16_t x247 = -1;
static int32_t x248 = 1;
volatile int32_t t56 = 0;
static int8_t x250 = INT8_MIN;
static volatile int32_t t59 = 309;
volatile uint8_t x262 = UINT8_MAX;
static volatile int32_t t60 = 35942033;
int8_t x265 = INT8_MIN;
static int64_t x272 = INT64_MAX;
int64_t x275 = INT64_MIN;
volatile int32_t t65 = 27;
int16_t x305 = INT16_MIN;
uint32_t x308 = UINT32_MAX;
volatile int32_t t71 = -3696971;
int16_t x313 = INT16_MIN;
static int8_t x314 = INT8_MAX;
int64_t x319 = INT64_MIN;
uint64_t x320 = UINT64_MAX;
volatile uint32_t x322 = UINT32_MAX;
static int32_t t75 = 23;
uint8_t x335 = 14U;
int32_t t78 = -12;
int64_t x342 = INT64_MAX;
volatile int16_t x344 = 15;
int32_t t80 = -7436230;
static uint64_t x351 = UINT64_MAX;
volatile uint32_t x354 = UINT32_MAX;
int32_t x359 = -1;
volatile int16_t x366 = INT16_MIN;
static int64_t x368 = -1LL;
int64_t x373 = -1LL;
int8_t x374 = -5;
static int32_t t89 = -1;
static int16_t x383 = INT16_MIN;
volatile uint8_t x384 = UINT8_MAX;
int32_t t90 = -1742;
uint64_t x385 = 64048292118156LLU;
int8_t x386 = INT8_MAX;
volatile int64_t x395 = INT64_MIN;
volatile int32_t x400 = INT32_MAX;
volatile int8_t x408 = INT8_MIN;
uint32_t x414 = 715593U;
volatile int32_t t98 = 43;
static uint64_t x418 = UINT64_MAX;


void f0(void) {
	uint32_t x1 = 3273435U;
	int8_t x2 = INT8_MAX;
	int64_t x3 = INT64_MIN;
	int16_t x4 = -1;
	int32_t t0 = 0;

	t0 = (((x1/x2)&x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 1;
	int64_t x6 = INT64_MIN;
	int16_t x7 = -1292;
	volatile int64_t x8 = INT64_MAX;

	t1 = (((x5/x6)&x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	volatile int32_t x10 = -12;
	int16_t x11 = INT16_MAX;
	int32_t x12 = 0;
	int32_t t2 = 2131;

	t2 = (((x9/x10)&x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	uint16_t x18 = UINT16_MAX;
	int32_t x19 = INT32_MIN;
	static volatile uint16_t x20 = 24U;
	volatile int32_t t3 = -54330;

	t3 = (((x17/x18)&x19)==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x21 = 13U;
	volatile int8_t x22 = -7;
	uint64_t x23 = 6033341941LLU;
	int16_t x24 = INT16_MIN;

	t4 = (((x21/x22)&x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = 64;
	int16_t x26 = INT16_MIN;
	int16_t x27 = 0;
	static int32_t x28 = INT32_MIN;

	t5 = (((x25/x26)&x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x30 = -1;
	int16_t x32 = -1;
	static volatile int32_t t6 = 2076807;

	t6 = (((x29/x30)&x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	uint32_t x35 = 237866U;
	uint16_t x36 = 1U;
	int32_t t7 = -50090305;

	t7 = (((x33/x34)&x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = INT8_MIN;
	int32_t x38 = -1011385386;
	int32_t x39 = INT32_MAX;
	static int16_t x40 = 2;
	int32_t t8 = 790475218;

	t8 = (((x37/x38)&x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = INT32_MAX;
	int32_t x43 = -1;
	static int64_t x44 = 33309634LL;
	int32_t t9 = -4;

	t9 = (((x41/x42)&x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x46 = 740773304734LL;
	static volatile int64_t x47 = INT64_MAX;
	int16_t x48 = -1;
	int32_t t10 = -30485;

	t10 = (((x45/x46)&x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = -9;
	int8_t x52 = INT8_MIN;
	int32_t t11 = -600107391;

	t11 = (((x49/x50)&x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x53 = INT32_MIN;
	volatile int64_t x54 = INT64_MIN;
	int32_t x55 = -86179;
	int8_t x56 = INT8_MIN;
	int32_t t12 = 0;

	t12 = (((x53/x54)&x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x62 = INT64_MIN;
	int32_t t13 = 181544362;

	t13 = (((x61/x62)&x63)==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 52U;
	volatile int32_t x68 = 11079499;
	volatile int32_t t14 = -750287;

	t14 = (((x65/x66)&x67)==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x70 = INT8_MIN;
	uint64_t x71 = 63415295LLU;
	uint16_t x72 = 0U;
	static volatile int32_t t15 = -15743265;

	t15 = (((x69/x70)&x71)==x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x73 = INT8_MIN;
	int8_t x74 = INT8_MAX;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t16 = -30;

	t16 = (((x73/x74)&x75)==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 1U;
	volatile int32_t x78 = INT32_MIN;
	static int8_t x79 = INT8_MIN;
	static uint16_t x80 = 12696U;
	static int32_t t17 = -1;

	t17 = (((x77/x78)&x79)==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x82 = -1;
	uint32_t x83 = 1U;
	uint8_t x84 = 44U;
	volatile int32_t t18 = 4;

	t18 = (((x81/x82)&x83)==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MAX;
	uint16_t x86 = 427U;
	int8_t x87 = -1;
	int32_t t19 = 1502854;

	t19 = (((x85/x86)&x87)==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = INT64_MIN;
	int16_t x90 = INT16_MIN;
	int64_t x92 = -5347LL;

	t20 = (((x89/x90)&x91)==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x93 = INT8_MIN;
	int32_t x95 = INT32_MAX;
	static uint32_t x96 = 5U;
	int32_t t21 = -23;

	t21 = (((x93/x94)&x95)==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x97 = 0;
	volatile uint32_t x99 = 193701U;
	static int32_t t22 = 123;

	t22 = (((x97/x98)&x99)==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = -15;
	static uint8_t x102 = 13U;
	int8_t x103 = INT8_MIN;
	int32_t x104 = INT32_MAX;

	t23 = (((x101/x102)&x103)==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = -1;
	int32_t x106 = INT32_MAX;
	uint32_t x107 = 43856U;
	int16_t x108 = 2220;
	int32_t t24 = -3041;

	t24 = (((x105/x106)&x107)==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x110 = UINT8_MAX;
	int8_t x111 = INT8_MIN;
	uint64_t x112 = UINT64_MAX;
	volatile int32_t t25 = -1;

	t25 = (((x109/x110)&x111)==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x113 = INT32_MIN;
	int16_t x114 = 20;
	static volatile int8_t x115 = -1;
	int8_t x116 = -1;
	static volatile int32_t t26 = -428350;

	t26 = (((x113/x114)&x115)==x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x117 = INT8_MAX;
	volatile uint64_t x118 = 8748964LLU;
	uint8_t x119 = 63U;
	int16_t x120 = INT16_MIN;
	int32_t t27 = -146833744;

	t27 = (((x117/x118)&x119)==x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = UINT32_MAX;
	uint64_t x122 = 477954129435LLU;
	int16_t x123 = -311;
	static int32_t x124 = -488667;
	int32_t t28 = 122;

	t28 = (((x121/x122)&x123)==x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x126 = INT64_MIN;
	volatile int32_t x127 = -1;
	int64_t x128 = -1LL;
	volatile int32_t t29 = 942;

	t29 = (((x125/x126)&x127)==x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x129 = 105U;
	uint32_t x131 = 133389118U;
	int64_t x132 = INT64_MIN;
	static int32_t t30 = -7023580;

	t30 = (((x129/x130)&x131)==x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = -153;
	volatile uint8_t x134 = 2U;
	static uint8_t x136 = 17U;
	volatile int32_t t31 = 29636;

	t31 = (((x133/x134)&x135)==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = 302512782441898LL;
	int16_t x142 = 40;
	static int32_t x143 = INT32_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t32 = 4390313;

	t32 = (((x141/x142)&x143)==x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = 16033U;
	volatile int8_t x146 = INT8_MIN;
	static volatile int32_t x147 = -563422;
	volatile uint16_t x148 = UINT16_MAX;
	int32_t t33 = 1039452778;

	t33 = (((x145/x146)&x147)==x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x149 = 79U;
	volatile uint8_t x150 = 1U;
	static int64_t x151 = INT64_MIN;
	int16_t x152 = INT16_MAX;
	int32_t t34 = 43389694;

	t34 = (((x149/x150)&x151)==x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x153 = INT64_MIN;
	volatile int32_t x155 = INT32_MIN;
	int64_t x156 = INT64_MIN;
	int32_t t35 = 22209;

	t35 = (((x153/x154)&x155)==x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = 407LL;
	int16_t x158 = -241;
	int32_t x159 = INT32_MIN;
	int16_t x160 = INT16_MAX;
	int32_t t36 = 497;

	t36 = (((x157/x158)&x159)==x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = INT64_MAX;
	volatile uint32_t x167 = UINT32_MAX;
	int16_t x168 = -1;
	static int32_t t37 = -2590;

	t37 = (((x165/x166)&x167)==x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x170 = -123;
	uint16_t x171 = 0U;
	int32_t t38 = 979592116;

	t38 = (((x169/x170)&x171)==x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x175 = 739;
	static int32_t x176 = INT32_MIN;
	int32_t t39 = 267762;

	t39 = (((x173/x174)&x175)==x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -1;
	volatile int32_t x179 = -69473;
	int32_t t40 = 99328;

	t40 = (((x177/x178)&x179)==x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x182 = 302302U;
	volatile uint8_t x183 = 2U;
	static volatile int8_t x184 = -1;
	volatile int32_t t41 = 129793337;

	t41 = (((x181/x182)&x183)==x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = -1;
	int16_t x186 = INT16_MAX;
	int32_t x187 = -1;
	volatile int32_t t42 = 1520;

	t42 = (((x185/x186)&x187)==x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x189 = -913;
	int8_t x190 = -12;
	volatile int8_t x191 = INT8_MIN;
	int16_t x192 = 3;
	volatile int32_t t43 = -901333299;

	t43 = (((x189/x190)&x191)==x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x193 = UINT64_MAX;
	int16_t x194 = 1;
	static volatile uint8_t x195 = 11U;
	volatile int32_t t44 = 45;

	t44 = (((x193/x194)&x195)==x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x202 = -1;
	volatile int64_t x203 = INT64_MIN;
	volatile int64_t x204 = -1LL;
	volatile int32_t t45 = 28383998;

	t45 = (((x201/x202)&x203)==x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x205 = -1;
	int16_t x206 = INT16_MIN;
	uint16_t x207 = UINT16_MAX;
	static volatile int32_t t46 = 221;

	t46 = (((x205/x206)&x207)==x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x211 = -687655273635098LL;
	uint8_t x212 = UINT8_MAX;

	t47 = (((x209/x210)&x211)==x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = INT32_MAX;
	static volatile int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MIN;
	volatile int32_t t48 = -289;

	t48 = (((x213/x214)&x215)==x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x217 = 772U;
	int16_t x219 = -1;
	static uint64_t x220 = 191401171343LLU;
	volatile int32_t t49 = -7087;

	t49 = (((x217/x218)&x219)==x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x223 = -2752493266604951340LL;
	int64_t x224 = -1414350LL;
	volatile int32_t t50 = 15;

	t50 = (((x221/x222)&x223)==x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x225 = 2896U;
	volatile int32_t x226 = 3287034;
	int32_t x227 = INT32_MIN;
	uint16_t x228 = 22917U;
	static volatile int32_t t51 = -909818774;

	t51 = (((x225/x226)&x227)==x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t t52 = -336067;

	t52 = (((x229/x230)&x231)==x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x233 = 139U;
	volatile int32_t x234 = -1;
	int8_t x235 = 3;
	int32_t x236 = 93610;
	static int32_t t53 = 3336331;

	t53 = (((x233/x234)&x235)==x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x238 = 14616LLU;
	int64_t x239 = -1LL;
	volatile uint8_t x240 = UINT8_MAX;
	int32_t t54 = -175;

	t54 = (((x237/x238)&x239)==x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x241 = -1;
	int32_t x242 = INT32_MIN;
	int64_t x243 = 72055LL;
	static uint32_t x244 = UINT32_MAX;

	t55 = (((x241/x242)&x243)==x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = -1;

	t56 = (((x245/x246)&x247)==x248);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x249 = INT8_MIN;
	uint16_t x251 = 3426U;
	static int64_t x252 = -3844769779450831LL;
	int32_t t57 = 7050;

	t57 = (((x249/x250)&x251)==x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x253 = INT16_MIN;
	int16_t x254 = -1;
	int8_t x255 = INT8_MIN;
	static uint32_t x256 = 208277980U;
	int32_t t58 = 225173;

	t58 = (((x253/x254)&x255)==x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x257 = INT8_MIN;
	uint8_t x258 = UINT8_MAX;
	static int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;

	t59 = (((x257/x258)&x259)==x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = 1;
	uint16_t x263 = UINT16_MAX;
	int32_t x264 = 231162050;

	t60 = (((x261/x262)&x263)==x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x266 = -1;
	int8_t x267 = INT8_MAX;
	int32_t x268 = INT32_MIN;
	int32_t t61 = 0;

	t61 = (((x265/x266)&x267)==x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = -984411;
	static int64_t x270 = -20178LL;
	int8_t x271 = 5;
	int32_t t62 = -16117;

	t62 = (((x269/x270)&x271)==x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = INT8_MIN;
	uint8_t x274 = 8U;
	static uint64_t x276 = 315899LLU;
	volatile int32_t t63 = 5380994;

	t63 = (((x273/x274)&x275)==x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = INT64_MIN;
	volatile int32_t x278 = INT32_MIN;
	uint16_t x279 = 54U;
	int32_t x280 = INT32_MAX;
	int32_t t64 = -4716922;

	t64 = (((x277/x278)&x279)==x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x281 = INT32_MIN;
	static int64_t x282 = 2110064151268LL;
	volatile int64_t x283 = 6497LL;
	volatile uint32_t x284 = 632U;

	t65 = (((x281/x282)&x283)==x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x285 = 1750U;
	uint64_t x286 = 482615040LLU;
	int32_t x287 = INT32_MIN;
	int8_t x288 = INT8_MAX;
	volatile int32_t t66 = 16464499;

	t66 = (((x285/x286)&x287)==x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = -1;
	int32_t x290 = 5850354;
	static int32_t x291 = INT32_MIN;
	int32_t x292 = INT32_MIN;
	int32_t t67 = -900987010;

	t67 = (((x289/x290)&x291)==x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x293 = 10LLU;
	uint64_t x294 = UINT64_MAX;
	uint64_t x295 = 88273199LLU;
	int64_t x296 = INT64_MIN;
	volatile int32_t t68 = -6438;

	t68 = (((x293/x294)&x295)==x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = INT8_MAX;
	uint16_t x298 = UINT16_MAX;
	int64_t x299 = -11LL;
	volatile int16_t x300 = INT16_MAX;
	volatile int32_t t69 = 335130188;

	t69 = (((x297/x298)&x299)==x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x301 = UINT32_MAX;
	uint32_t x302 = UINT32_MAX;
	int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MIN;
	volatile int32_t t70 = 50;

	t70 = (((x301/x302)&x303)==x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MIN;

	t71 = (((x305/x306)&x307)==x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = INT32_MIN;
	int64_t x310 = INT64_MAX;
	int64_t x311 = INT64_MAX;
	int32_t x312 = INT32_MIN;
	int32_t t72 = -469;

	t72 = (((x309/x310)&x311)==x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x315 = 213892406U;
	int32_t x316 = INT32_MIN;
	int32_t t73 = 3152918;

	t73 = (((x313/x314)&x315)==x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x317 = -1;
	volatile uint64_t x318 = UINT64_MAX;
	volatile int32_t t74 = -1;

	t74 = (((x317/x318)&x319)==x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x321 = INT64_MIN;
	static int16_t x323 = INT16_MAX;
	uint8_t x324 = 107U;

	t75 = (((x321/x322)&x323)==x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x325 = -1;
	int64_t x326 = INT64_MIN;
	static int16_t x327 = INT16_MIN;
	int64_t x328 = -1LL;
	volatile int32_t t76 = -80596;

	t76 = (((x325/x326)&x327)==x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x329 = 193805U;
	static uint32_t x330 = 1801921U;
	int16_t x331 = INT16_MAX;
	int16_t x332 = -453;
	static volatile int32_t t77 = -1;

	t77 = (((x329/x330)&x331)==x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = -22253LL;
	volatile int64_t x334 = INT64_MAX;
	uint16_t x336 = 475U;

	t78 = (((x333/x334)&x335)==x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x337 = UINT64_MAX;
	int32_t x338 = INT32_MAX;
	volatile uint32_t x339 = 24451969U;
	static int64_t x340 = 38LL;
	volatile int32_t t79 = -4510499;

	t79 = (((x337/x338)&x339)==x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x341 = 4978;
	int16_t x343 = INT16_MIN;

	t80 = (((x341/x342)&x343)==x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x345 = -445;
	uint32_t x346 = 97U;
	int16_t x347 = -1;
	volatile uint64_t x348 = 19072LLU;
	int32_t t81 = 1;

	t81 = (((x345/x346)&x347)==x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x349 = 3131U;
	int32_t x350 = INT32_MAX;
	static int8_t x352 = INT8_MAX;
	volatile int32_t t82 = -1344409;

	t82 = (((x349/x350)&x351)==x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x353 = 14U;
	volatile int64_t x355 = INT64_MAX;
	int64_t x356 = -2885131046793344LL;
	volatile int32_t t83 = 572025;

	t83 = (((x353/x354)&x355)==x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x357 = 7;
	volatile uint32_t x358 = 241233U;
	int32_t x360 = INT32_MIN;
	int32_t t84 = -142174;

	t84 = (((x357/x358)&x359)==x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = -213865;
	static uint8_t x362 = UINT8_MAX;
	uint16_t x363 = 345U;
	int16_t x364 = -1;
	volatile int32_t t85 = 8;

	t85 = (((x361/x362)&x363)==x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x365 = 399900890U;
	uint32_t x367 = UINT32_MAX;
	volatile int32_t t86 = 1821467;

	t86 = (((x365/x366)&x367)==x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = INT16_MIN;
	static uint8_t x370 = 50U;
	volatile uint64_t x371 = UINT64_MAX;
	int32_t x372 = -60936574;
	int32_t t87 = 10;

	t87 = (((x369/x370)&x371)==x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x375 = INT32_MIN;
	volatile int64_t x376 = INT64_MIN;
	int32_t t88 = -4145459;

	t88 = (((x373/x374)&x375)==x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x377 = 4LLU;
	uint16_t x378 = 28U;
	static int64_t x379 = INT64_MIN;
	uint32_t x380 = 1464082246U;

	t89 = (((x377/x378)&x379)==x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = -1;
	int64_t x382 = -45069LL;

	t90 = (((x381/x382)&x383)==x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x387 = 17486U;
	uint32_t x388 = 941991U;
	volatile int32_t t91 = -101;

	t91 = (((x385/x386)&x387)==x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x389 = 122649U;
	int16_t x390 = INT16_MAX;
	volatile uint8_t x391 = 0U;
	volatile uint32_t x392 = UINT32_MAX;
	int32_t t92 = -3193;

	t92 = (((x389/x390)&x391)==x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x393 = UINT32_MAX;
	int64_t x394 = INT64_MAX;
	int8_t x396 = -1;
	int32_t t93 = 1559774;

	t93 = (((x393/x394)&x395)==x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x397 = 11U;
	volatile int32_t x398 = INT32_MIN;
	volatile int64_t x399 = INT64_MIN;
	int32_t t94 = -79379882;

	t94 = (((x397/x398)&x399)==x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x401 = -285818LL;
	static volatile int8_t x402 = INT8_MIN;
	uint16_t x403 = UINT16_MAX;
	int64_t x404 = INT64_MIN;
	volatile int32_t t95 = 534774090;

	t95 = (((x401/x402)&x403)==x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x405 = INT64_MIN;
	volatile uint16_t x406 = 1U;
	static volatile uint8_t x407 = 29U;
	volatile int32_t t96 = 190186495;

	t96 = (((x405/x406)&x407)==x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x409 = UINT64_MAX;
	int16_t x410 = -1;
	static int64_t x411 = -1LL;
	uint32_t x412 = 640607U;
	static volatile int32_t t97 = -716;

	t97 = (((x409/x410)&x411)==x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x413 = 1;
	int8_t x415 = -1;
	int16_t x416 = INT16_MAX;

	t98 = (((x413/x414)&x415)==x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = 494;
	int16_t x419 = 4;
	volatile int32_t x420 = -1;
	int32_t t99 = -424708;

	t99 = (((x417/x418)&x419)==x420);

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

