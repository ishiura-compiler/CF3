#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
volatile int64_t x7 = INT64_MIN;
volatile int64_t x12 = -558092LL;
int64_t t2 = 6809104LL;
static int32_t x14 = -4373;
volatile uint64_t x16 = 1317151882658588773LLU;
int64_t x27 = 22553112954680557LL;
volatile int32_t x33 = -1;
int8_t x34 = INT8_MAX;
volatile uint32_t t8 = 8U;
static uint8_t x43 = 7U;
volatile uint16_t x50 = UINT16_MAX;
int32_t x51 = INT32_MIN;
int16_t x55 = INT16_MIN;
static int32_t x59 = INT32_MIN;
static uint8_t x63 = UINT8_MAX;
static volatile int32_t t17 = -10083581;
int32_t x79 = INT32_MAX;
static uint64_t x80 = UINT64_MAX;
int16_t x82 = -58;
volatile int32_t x96 = 101;
static int32_t t22 = -4;
static int32_t t23 = -3811;
static int8_t x110 = 26;
static int8_t x115 = INT8_MAX;
volatile uint64_t x118 = UINT64_MAX;
int8_t x125 = 0;
static int64_t x127 = -1LL;
int64_t x134 = INT64_MAX;
volatile int32_t x139 = -1;
static volatile int32_t t31 = 8967;
volatile int64_t x143 = 28LL;
volatile uint32_t t32 = 20589U;
static uint64_t x146 = UINT64_MAX;
int32_t t33 = 1336859;
static uint32_t x158 = 59802U;
int64_t x163 = INT64_MAX;
static volatile int64_t x171 = 441445321476664605LL;
static volatile int32_t t39 = 0;
static volatile int16_t x187 = -6940;
int8_t x198 = INT8_MAX;
int16_t x200 = INT16_MIN;
static volatile int8_t x201 = -12;
uint16_t x204 = 125U;
int8_t x209 = -51;
static uint32_t x213 = UINT32_MAX;
static int8_t x215 = -1;
int16_t x217 = -1;
int16_t x218 = INT16_MAX;
int16_t x219 = -56;
volatile int64_t t49 = -3133565150LL;
uint16_t x222 = 99U;
volatile int64_t x224 = -3353033845267LL;
int64_t t50 = 54327802152LL;
int32_t x229 = 1;
int8_t x241 = INT8_MIN;
static uint64_t x248 = 247LLU;
int16_t x253 = INT16_MAX;
int8_t x256 = INT8_MAX;
int16_t x260 = -274;
volatile int64_t x261 = INT64_MIN;
volatile int32_t t59 = 411816882;
static volatile int32_t t61 = 232143;
static volatile uint64_t x289 = UINT64_MAX;
int16_t x296 = -194;
int32_t t65 = -12518;
static int32_t t69 = 656478;
uint16_t x330 = 34U;
static int8_t x334 = INT8_MIN;
volatile int32_t t72 = -231210590;
volatile uint32_t x337 = 27U;
static int8_t x339 = INT8_MIN;
volatile uint8_t x342 = 6U;
volatile int8_t x351 = INT8_MIN;
static int64_t x353 = -61898416LL;
static uint64_t x354 = 13483595704762LLU;
int32_t x355 = 455059;
int64_t x357 = -1LL;
uint16_t x358 = 895U;
int32_t x365 = INT32_MAX;
uint8_t x366 = 28U;
int16_t x378 = -1;
volatile int8_t x387 = INT8_MIN;
uint16_t x388 = UINT16_MAX;
static int64_t x395 = INT64_MAX;
uint64_t x397 = 66610230463141LLU;
int64_t x398 = -1LL;
int8_t x404 = INT8_MIN;
int32_t x405 = -1;
int64_t x407 = INT64_MIN;
volatile int32_t x408 = INT32_MAX;
static int32_t t88 = 1211106;
int32_t x410 = INT32_MIN;
volatile int32_t t91 = -8072;
int64_t t92 = -5LL;
static int16_t x425 = -1;
uint16_t x433 = UINT16_MAX;
uint64_t x434 = 29884522LLU;
static int16_t x437 = INT16_MIN;
static int8_t x439 = INT8_MIN;
static int32_t t96 = 3236485;
static int8_t x444 = -1;


void f0(void) {
	static int32_t x2 = INT32_MAX;
	uint32_t x3 = 49001722U;
	static uint64_t x4 = 253282758993LLU;
	volatile uint64_t t0 = 62924890283600172LLU;

	t0 = ((x1<(x2+x3))/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile int64_t x6 = 932183LL;
	int8_t x8 = 54;
	int32_t t1 = -2838292;

	t1 = ((x5<(x6+x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	volatile int16_t x10 = INT16_MIN;
	uint64_t x11 = 8133271746LLU;

	t2 = ((x9<(x10+x11))/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint8_t x15 = 66U;
	uint64_t t3 = 8356329827668LLU;

	t3 = ((x13<(x14+x15))/x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 521419745673LLU;
	int32_t x18 = INT32_MIN;
	int16_t x19 = 0;
	int16_t x20 = INT16_MIN;
	static volatile int32_t t4 = 17;

	t4 = ((x17<(x18+x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 45U;
	int8_t x22 = INT8_MIN;
	volatile int64_t x23 = -1LL;
	volatile uint32_t x24 = 100U;
	volatile uint32_t t5 = 2024149885U;

	t5 = ((x21<(x22+x23))/x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -1;
	int64_t x26 = 82901528022426149LL;
	int16_t x28 = -6;
	static volatile int32_t t6 = 43617680;

	t6 = ((x25<(x26+x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 27457697911LLU;
	volatile int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MAX;
	uint16_t x32 = 5011U;
	volatile int32_t t7 = 100108;

	t7 = ((x29<(x30+x31))/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x35 = -1;
	uint32_t x36 = 1U;

	t8 = ((x33<(x34+x35))/x36);

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 253U;
	uint64_t x42 = UINT64_MAX;
	int32_t x44 = INT32_MIN;
	volatile int32_t t9 = -111;

	t9 = ((x41<(x42+x43))/x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	volatile int64_t x46 = -61857278468LL;
	static uint16_t x47 = 5613U;
	int64_t x48 = INT64_MIN;
	int64_t t10 = 516LL;

	t10 = ((x45<(x46+x47))/x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = INT32_MIN;
	int32_t x52 = INT32_MAX;
	volatile int32_t t11 = 0;

	t11 = ((x49<(x50+x51))/x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = -390111LL;
	static int16_t x54 = -1;
	static int32_t x56 = INT32_MIN;
	int32_t t12 = 10;

	t12 = ((x53<(x54+x55))/x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = 1;
	static uint64_t x58 = 2954130910294753496LLU;
	uint16_t x60 = UINT16_MAX;
	int32_t t13 = -40309;

	t13 = ((x57<(x58+x59))/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 16;
	int64_t x62 = -27785830LL;
	volatile int64_t x64 = 1LL;
	volatile int64_t t14 = 1016123LL;

	t14 = ((x61<(x62+x63))/x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 23;
	int8_t x66 = -1;
	int8_t x67 = INT8_MIN;
	static volatile uint16_t x68 = 5290U;
	int32_t t15 = -105381;

	t15 = ((x65<(x66+x67))/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 1U;
	int8_t x70 = 0;
	int16_t x71 = -1;
	int32_t x72 = -1;
	volatile int32_t t16 = -415452;

	t16 = ((x69<(x70+x71))/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x73 = 48U;
	static int16_t x74 = INT16_MAX;
	int16_t x75 = -1;
	volatile uint8_t x76 = UINT8_MAX;

	t17 = ((x73<(x74+x75))/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	int8_t x78 = -1;
	static volatile uint64_t t18 = 101LLU;

	t18 = ((x77<(x78+x79))/x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = -3;
	static volatile int32_t x83 = -6497382;
	int8_t x84 = INT8_MIN;
	volatile int32_t t19 = -1;

	t19 = ((x81<(x82+x83))/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = -1;
	uint16_t x94 = 619U;
	static volatile int16_t x95 = INT16_MAX;
	volatile int32_t t20 = 56093834;

	t20 = ((x93<(x94+x95))/x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MIN;
	int8_t x98 = INT8_MIN;
	int16_t x99 = INT16_MIN;
	static int8_t x100 = INT8_MIN;
	static volatile int32_t t21 = -2585;

	t21 = ((x97<(x98+x99))/x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = 17581676U;
	static volatile int32_t x102 = INT32_MIN;
	uint64_t x103 = 672324823577717LLU;
	volatile uint16_t x104 = 5U;

	t22 = ((x101<(x102+x103))/x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x105 = UINT32_MAX;
	uint64_t x106 = 534341846098857LLU;
	int16_t x107 = -11208;
	uint16_t x108 = 2U;

	t23 = ((x105<(x106+x107))/x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = 1U;
	static int32_t x111 = -1;
	volatile int8_t x112 = INT8_MAX;
	volatile int32_t t24 = 194;

	t24 = ((x109<(x110+x111))/x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = INT64_MAX;
	int8_t x114 = INT8_MIN;
	static volatile int64_t x116 = INT64_MAX;
	int64_t t25 = 22179302850736125LL;

	t25 = ((x113<(x114+x115))/x116);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = UINT16_MAX;
	int16_t x119 = 1536;
	volatile int64_t x120 = INT64_MAX;
	static volatile int64_t t26 = 25704810922720LL;

	t26 = ((x117<(x118+x119))/x120);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x121 = 21066U;
	uint64_t x122 = UINT64_MAX;
	int16_t x123 = -4;
	int32_t x124 = -22791;
	volatile int32_t t27 = 1;

	t27 = ((x121<(x122+x123))/x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x126 = INT64_MAX;
	uint8_t x128 = 122U;
	int32_t t28 = 2370704;

	t28 = ((x125<(x126+x127))/x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = 9253U;
	int16_t x130 = -3352;
	int16_t x131 = INT16_MAX;
	uint64_t x132 = 4917728778485LLU;
	static uint64_t t29 = 65199315523251LLU;

	t29 = ((x129<(x130+x131))/x132);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MAX;
	int32_t x135 = INT32_MIN;
	uint8_t x136 = 84U;
	int32_t t30 = 0;

	t30 = ((x133<(x134+x135))/x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 0U;
	uint64_t x138 = 60812061058LLU;
	int32_t x140 = -19967122;

	t31 = ((x137<(x138+x139))/x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = INT32_MIN;
	uint8_t x142 = 27U;
	static volatile uint32_t x144 = 77334U;

	t32 = ((x141<(x142+x143))/x144);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = -1LL;
	int16_t x147 = -1;
	uint8_t x148 = 20U;

	t33 = ((x145<(x146+x147))/x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = INT8_MIN;
	volatile int8_t x154 = INT8_MAX;
	volatile int32_t x155 = -492175;
	uint32_t x156 = UINT32_MAX;
	static uint32_t t34 = 2U;

	t34 = ((x153<(x154+x155))/x156);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = -34;
	static uint64_t x159 = 11951639950LLU;
	volatile int64_t x160 = INT64_MAX;
	static volatile int64_t t35 = 56238466181454199LL;

	t35 = ((x157<(x158+x159))/x160);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = 23830402504011LL;
	int16_t x162 = -1;
	int16_t x164 = 7172;
	int32_t t36 = -97;

	t36 = ((x161<(x162+x163))/x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x165 = 6U;
	int8_t x166 = -21;
	int32_t x167 = -1;
	uint32_t x168 = 27764229U;
	volatile uint32_t t37 = 11923137U;

	t37 = ((x165<(x166+x167))/x168);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = 21737;
	int16_t x170 = INT16_MAX;
	uint16_t x172 = 1066U;
	volatile int32_t t38 = 456272;

	t38 = ((x169<(x170+x171))/x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x173 = 69U;
	volatile int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MAX;
	int8_t x176 = -1;

	t39 = ((x173<(x174+x175))/x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -130;
	uint8_t x178 = 44U;
	uint64_t x179 = UINT64_MAX;
	int16_t x180 = INT16_MIN;
	volatile int32_t t40 = -2609;

	t40 = ((x177<(x178+x179))/x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x185 = 117657927U;
	int16_t x186 = 3;
	uint32_t x188 = UINT32_MAX;
	static uint32_t t41 = 20100133U;

	t41 = ((x185<(x186+x187))/x188);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = INT8_MIN;
	static int16_t x190 = -41;
	volatile int16_t x191 = INT16_MAX;
	static int64_t x192 = -1LL;
	static volatile int64_t t42 = 4547284395731LL;

	t42 = ((x189<(x190+x191))/x192);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 197U;
	int8_t x194 = -25;
	int8_t x195 = 0;
	int16_t x196 = INT16_MAX;
	volatile int32_t t43 = 13;

	t43 = ((x193<(x194+x195))/x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = 125117463490735LL;
	int8_t x199 = INT8_MIN;
	volatile int32_t t44 = -3341;

	t44 = ((x197<(x198+x199))/x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x202 = UINT32_MAX;
	uint32_t x203 = 323U;
	static volatile int32_t t45 = -130196;

	t45 = ((x201<(x202+x203))/x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = 7021184161477LL;
	int16_t x206 = INT16_MAX;
	volatile uint16_t x207 = UINT16_MAX;
	volatile int8_t x208 = -1;
	int32_t t46 = 8;

	t46 = ((x205<(x206+x207))/x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x210 = 3U;
	static int32_t x211 = -1;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t47 = 386558;

	t47 = ((x209<(x210+x211))/x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x214 = UINT32_MAX;
	static volatile uint64_t x216 = 1378LLU;
	uint64_t t48 = 3029853360125975LLU;

	t48 = ((x213<(x214+x215))/x216);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x220 = -488LL;

	t49 = ((x217<(x218+x219))/x220);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = -1;
	uint32_t x223 = 424U;

	t50 = ((x221<(x222+x223))/x224);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x225 = 1;
	int8_t x226 = 6;
	int8_t x227 = -1;
	static uint32_t x228 = UINT32_MAX;
	static uint32_t t51 = 35920465U;

	t51 = ((x225<(x226+x227))/x228);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x230 = INT16_MIN;
	volatile uint8_t x231 = 1U;
	int8_t x232 = 7;
	int32_t t52 = -4;

	t52 = ((x229<(x230+x231))/x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = UINT8_MAX;
	volatile int32_t x234 = -1;
	volatile uint8_t x235 = 2U;
	int16_t x236 = INT16_MIN;
	int32_t t53 = -1031320;

	t53 = ((x233<(x234+x235))/x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = -1;
	uint16_t x238 = UINT16_MAX;
	static volatile uint32_t x239 = 926265369U;
	int32_t x240 = INT32_MIN;
	volatile int32_t t54 = 36;

	t54 = ((x237<(x238+x239))/x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x242 = -399578218;
	volatile int8_t x243 = -4;
	uint8_t x244 = 1U;
	static volatile int32_t t55 = -82795911;

	t55 = ((x241<(x242+x243))/x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x245 = 100U;
	int8_t x246 = -1;
	int16_t x247 = -1;
	volatile uint64_t t56 = 1913146LLU;

	t56 = ((x245<(x246+x247))/x248);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x254 = INT64_MIN;
	static uint16_t x255 = 6680U;
	int32_t t57 = -171157;

	t57 = ((x253<(x254+x255))/x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x257 = 2U;
	volatile int8_t x258 = -1;
	static int16_t x259 = 7;
	static int32_t t58 = 4;

	t58 = ((x257<(x258+x259))/x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x262 = -1;
	static uint8_t x263 = 3U;
	uint8_t x264 = UINT8_MAX;

	t59 = ((x261<(x262+x263))/x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = INT8_MAX;
	int16_t x270 = INT16_MAX;
	uint16_t x271 = 2U;
	int64_t x272 = INT64_MIN;
	volatile int64_t t60 = 969195367850843928LL;

	t60 = ((x269<(x270+x271))/x272);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x277 = -1;
	int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MAX;
	int8_t x280 = -1;

	t61 = ((x277<(x278+x279))/x280);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x285 = -17086968060391199LL;
	volatile int8_t x286 = 13;
	int64_t x287 = -9395576335353844LL;
	int16_t x288 = -1;
	int32_t t62 = 904;

	t62 = ((x285<(x286+x287))/x288);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x290 = 0;
	volatile int64_t x291 = INT64_MIN;
	int16_t x292 = -1;
	volatile int32_t t63 = -5;

	t63 = ((x289<(x290+x291))/x292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x293 = INT32_MAX;
	int32_t x294 = -1;
	int32_t x295 = INT32_MAX;
	volatile int32_t t64 = 318760991;

	t64 = ((x293<(x294+x295))/x296);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = -281;
	int64_t x298 = -483LL;
	static int16_t x299 = INT16_MIN;
	int8_t x300 = INT8_MIN;

	t65 = ((x297<(x298+x299))/x300);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = -33;
	int32_t x303 = INT32_MAX;
	volatile int16_t x304 = -1;
	int32_t t66 = -7;

	t66 = ((x301<(x302+x303))/x304);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = INT16_MIN;
	int64_t x310 = INT64_MIN;
	uint16_t x311 = 1U;
	int64_t x312 = INT64_MAX;
	volatile int64_t t67 = 529859LL;

	t67 = ((x309<(x310+x311))/x312);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x313 = INT32_MIN;
	static volatile int16_t x314 = -494;
	int64_t x315 = INT64_MAX;
	static int32_t x316 = 45;
	volatile int32_t t68 = -2417;

	t68 = ((x313<(x314+x315))/x316);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x317 = INT64_MIN;
	static uint8_t x318 = 6U;
	uint8_t x319 = UINT8_MAX;
	int8_t x320 = -1;

	t69 = ((x317<(x318+x319))/x320);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x321 = INT8_MIN;
	volatile int64_t x322 = 50990LL;
	int32_t x323 = -1;
	int8_t x324 = -1;
	static int32_t t70 = -235179296;

	t70 = ((x321<(x322+x323))/x324);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x329 = INT8_MAX;
	static int16_t x331 = -1;
	uint16_t x332 = UINT16_MAX;
	int32_t t71 = 108551;

	t71 = ((x329<(x330+x331))/x332);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = -7545;
	uint16_t x335 = 24359U;
	volatile int8_t x336 = INT8_MIN;

	t72 = ((x333<(x334+x335))/x336);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x338 = UINT64_MAX;
	volatile int32_t x340 = -1;
	volatile int32_t t73 = 74738;

	t73 = ((x337<(x338+x339))/x340);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x341 = 4783915635LL;
	static uint64_t x343 = 57965LLU;
	uint64_t x344 = 85062076658LLU;
	uint64_t t74 = 26755048003471655LLU;

	t74 = ((x341<(x342+x343))/x344);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x345 = -372776;
	int16_t x346 = INT16_MIN;
	static int8_t x347 = -1;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t75 = 10;

	t75 = ((x345<(x346+x347))/x348);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x349 = 1U;
	uint32_t x350 = 23713413U;
	int32_t x352 = INT32_MIN;
	int32_t t76 = -203404;

	t76 = ((x349<(x350+x351))/x352);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x356 = INT32_MAX;
	volatile int32_t t77 = 17232120;

	t77 = ((x353<(x354+x355))/x356);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x359 = INT8_MAX;
	volatile int8_t x360 = INT8_MIN;
	int32_t t78 = 176;

	t78 = ((x357<(x358+x359))/x360);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x361 = INT32_MAX;
	static uint32_t x362 = UINT32_MAX;
	int16_t x363 = INT16_MIN;
	uint32_t x364 = 9685U;
	uint32_t t79 = 42U;

	t79 = ((x361<(x362+x363))/x364);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x367 = 4U;
	int64_t x368 = -1LL;
	int64_t t80 = -18863621198015485LL;

	t80 = ((x365<(x366+x367))/x368);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x377 = INT8_MIN;
	volatile int32_t x379 = -1;
	int32_t x380 = -1739;
	volatile int32_t t81 = 60410316;

	t81 = ((x377<(x378+x379))/x380);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x381 = INT64_MAX;
	uint16_t x382 = UINT16_MAX;
	static int64_t x383 = INT64_MIN;
	static int32_t x384 = INT32_MIN;
	static volatile int32_t t82 = 97964;

	t82 = ((x381<(x382+x383))/x384);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x385 = 11U;
	int32_t x386 = 4534;
	static int32_t t83 = 25678777;

	t83 = ((x385<(x386+x387))/x388);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x389 = INT32_MIN;
	static uint16_t x390 = UINT16_MAX;
	static volatile uint8_t x391 = UINT8_MAX;
	int64_t x392 = INT64_MIN;
	int64_t t84 = -64894LL;

	t84 = ((x389<(x390+x391))/x392);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MIN;
	uint8_t x396 = 17U;
	volatile int32_t t85 = -332;

	t85 = ((x393<(x394+x395))/x396);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x399 = -1LL;
	static uint8_t x400 = UINT8_MAX;
	volatile int32_t t86 = 580880053;

	t86 = ((x397<(x398+x399))/x400);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x401 = 75U;
	uint8_t x402 = 13U;
	uint64_t x403 = 14371540751470LLU;
	static volatile int32_t t87 = 1;

	t87 = ((x401<(x402+x403))/x404);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x406 = 183671194LLU;

	t88 = ((x405<(x406+x407))/x408);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x409 = 2U;
	volatile uint16_t x411 = 231U;
	static int16_t x412 = INT16_MAX;
	volatile int32_t t89 = -14;

	t89 = ((x409<(x410+x411))/x412);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x413 = INT64_MAX;
	static int64_t x414 = INT64_MIN;
	int8_t x415 = INT8_MAX;
	volatile int16_t x416 = -1;
	static int32_t t90 = 21;

	t90 = ((x413<(x414+x415))/x416);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x417 = 13U;
	int64_t x418 = -150LL;
	static int16_t x419 = INT16_MAX;
	int8_t x420 = INT8_MIN;

	t91 = ((x417<(x418+x419))/x420);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x421 = UINT32_MAX;
	int8_t x422 = 0;
	int8_t x423 = INT8_MIN;
	volatile int64_t x424 = -1LL;

	t92 = ((x421<(x422+x423))/x424);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x426 = INT16_MIN;
	int64_t x427 = -59616296LL;
	int32_t x428 = INT32_MIN;
	int32_t t93 = -105632145;

	t93 = ((x425<(x426+x427))/x428);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x429 = UINT64_MAX;
	static uint16_t x430 = UINT16_MAX;
	static uint16_t x431 = UINT16_MAX;
	int16_t x432 = 4;
	static volatile int32_t t94 = -13172526;

	t94 = ((x429<(x430+x431))/x432);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x435 = 61;
	int64_t x436 = INT64_MAX;
	int64_t t95 = -3310401887458281LL;

	t95 = ((x433<(x434+x435))/x436);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x438 = INT16_MIN;
	int16_t x440 = INT16_MIN;

	t96 = ((x437<(x438+x439))/x440);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x441 = INT32_MAX;
	volatile int8_t x442 = INT8_MIN;
	uint16_t x443 = 30U;
	volatile int32_t t97 = 66039348;

	t97 = ((x441<(x442+x443))/x444);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x445 = INT64_MAX;
	int8_t x446 = 3;
	static volatile int32_t x447 = INT32_MIN;
	uint16_t x448 = 1U;
	int32_t t98 = 203;

	t98 = ((x445<(x446+x447))/x448);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x449 = INT16_MIN;
	uint32_t x450 = UINT32_MAX;
	int16_t x451 = -1;
	uint8_t x452 = 2U;
	volatile int32_t t99 = -3566;

	t99 = ((x449<(x450+x451))/x452);

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

