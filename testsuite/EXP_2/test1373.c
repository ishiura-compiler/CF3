#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = 2U;
volatile int32_t t0 = -11753;
int32_t x6 = 5708;
static int8_t x7 = 1;
static uint64_t x9 = 1023LLU;
int32_t t2 = 233678631;
volatile int32_t x15 = 43;
int64_t x16 = INT64_MIN;
volatile int32_t t4 = 1062855079;
static int32_t x23 = INT32_MIN;
int16_t x26 = INT16_MIN;
volatile int32_t t7 = -6762;
volatile int16_t x43 = -1;
volatile int32_t t10 = -29836;
volatile int8_t x46 = -1;
int64_t x50 = 1LL;
uint32_t x51 = 59518U;
volatile int32_t t13 = -1180124;
uint16_t x57 = UINT16_MAX;
int8_t x62 = 10;
static int32_t t16 = -28794;
static int32_t x75 = INT32_MIN;
int8_t x85 = INT8_MAX;
static uint8_t x88 = UINT8_MAX;
int32_t t21 = -456548188;
uint8_t x89 = 91U;
int32_t x91 = -6055;
int64_t x93 = -1LL;
int64_t x95 = -108949281167097LL;
int16_t x103 = -100;
static int16_t x106 = INT16_MIN;
volatile int64_t x114 = INT64_MIN;
int8_t x115 = INT8_MAX;
int8_t x117 = -1;
uint8_t x120 = 3U;
volatile uint16_t x126 = UINT16_MAX;
volatile int32_t t32 = 27959734;
int32_t x135 = INT32_MIN;
volatile uint64_t x140 = 165013539LLU;
int32_t t34 = 0;
volatile uint16_t x141 = 71U;
int32_t x146 = INT32_MAX;
volatile int64_t x154 = INT64_MIN;
volatile int32_t t37 = 0;
static volatile int64_t x176 = -1LL;
int32_t x177 = -1;
static uint32_t x184 = 393229U;
uint16_t x189 = 2003U;
static uint32_t x201 = UINT32_MAX;
volatile uint32_t x203 = 15616528U;
uint32_t x205 = UINT32_MAX;
int16_t x214 = 4;
uint16_t x225 = UINT16_MAX;
static volatile int64_t x226 = INT64_MIN;
static volatile uint32_t x229 = 13265U;
uint32_t x234 = UINT32_MAX;
int16_t x236 = -1;
volatile int32_t t56 = 0;
int8_t x241 = 3;
static int16_t x255 = INT16_MIN;
int32_t t62 = -80;
int32_t t63 = 167;
volatile int8_t x273 = INT8_MIN;
static uint64_t x285 = UINT64_MAX;
static int64_t x286 = INT64_MIN;
volatile int16_t x288 = -1;
uint32_t x293 = 915U;
int16_t x294 = 0;
int32_t x300 = -1;
int32_t x304 = INT32_MIN;
volatile int32_t t73 = -5;
int8_t x308 = INT8_MAX;
uint16_t x310 = UINT16_MAX;
static int32_t t75 = 6958021;
static uint16_t x314 = 4933U;
volatile uint32_t x315 = UINT32_MAX;
int16_t x323 = -1;
volatile int32_t t79 = 1379;
static volatile int8_t x329 = -1;
int32_t x335 = INT32_MIN;
int32_t t81 = 1666;
static uint64_t x337 = 1273844LLU;
static int32_t x338 = -1;
int64_t x342 = -1LL;
int32_t x347 = -321818997;
volatile int32_t t86 = -8823;
int8_t x370 = 0;
int32_t x371 = 142787032;
int64_t x381 = 17489747462550735LL;
uint32_t x387 = 55989420U;
uint32_t x391 = UINT32_MAX;
uint32_t x394 = UINT32_MAX;
static int16_t x398 = INT16_MIN;
uint64_t x402 = 430701201311496LLU;
uint8_t x403 = 5U;
uint32_t x407 = UINT32_MAX;
static int8_t x415 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x2 = -592853;
	int16_t x4 = INT16_MAX;

	t0 = ((x1-(x2<x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	static int32_t x8 = INT32_MIN;
	int32_t t1 = 5311;

	t1 = ((x5-(x6<x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 486LLU;
	static int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MAX;

	t2 = ((x9-(x10<x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = 9U;
	volatile uint8_t x14 = 11U;
	int32_t t3 = 674;

	t3 = ((x13-(x14<x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MAX;
	int16_t x18 = -48;
	static uint32_t x19 = 448U;
	static int8_t x20 = -45;

	t4 = ((x17-(x18<x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	static int32_t x22 = INT32_MIN;
	int32_t x24 = -32425373;
	volatile int32_t t5 = 25;

	t5 = ((x21-(x22<x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 111125U;
	int64_t x27 = INT64_MIN;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -196850;

	t6 = ((x25-(x26<x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = UINT16_MAX;
	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MAX;
	uint64_t x32 = 12LLU;

	t7 = ((x29-(x30<x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 118228500892688751LLU;
	uint8_t x34 = 1U;
	int8_t x35 = -1;
	int32_t x36 = INT32_MIN;
	int32_t t8 = -7;

	t8 = ((x33-(x34<x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile uint8_t x38 = 103U;
	uint8_t x39 = 3U;
	static uint64_t x40 = UINT64_MAX;
	int32_t t9 = -776567;

	t9 = ((x37-(x38<x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 0U;
	volatile int8_t x42 = INT8_MIN;
	uint64_t x44 = 99LLU;

	t10 = ((x41-(x42<x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MIN;
	int16_t x47 = -1;
	int16_t x48 = INT16_MIN;
	int32_t t11 = 1537437;

	t11 = ((x45-(x46<x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = 22;
	volatile int16_t x52 = INT16_MAX;
	static int32_t t12 = -43878566;

	t12 = ((x49-(x50<x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -1;
	volatile uint16_t x54 = UINT16_MAX;
	int32_t x55 = INT32_MAX;
	uint16_t x56 = UINT16_MAX;

	t13 = ((x53-(x54<x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MIN;
	uint64_t x59 = UINT64_MAX;
	int8_t x60 = -4;
	int32_t t14 = -194;

	t14 = ((x57-(x58<x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 612535U;
	int16_t x63 = -1;
	uint8_t x64 = 1U;
	volatile int32_t t15 = -6943496;

	t15 = ((x61-(x62<x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	uint16_t x66 = 0U;
	int64_t x67 = -1LL;
	uint64_t x68 = 3606518LLU;

	t16 = ((x65-(x66<x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MAX;
	int32_t x70 = INT32_MAX;
	uint8_t x71 = 5U;
	volatile int32_t x72 = INT32_MIN;
	int32_t t17 = -8;

	t17 = ((x69-(x70<x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -30;
	uint16_t x74 = UINT16_MAX;
	int32_t x76 = -1439719;
	volatile int32_t t18 = 2;

	t18 = ((x73-(x74<x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MIN;
	static int32_t x78 = INT32_MAX;
	int32_t x79 = -1;
	int8_t x80 = -2;
	volatile int32_t t19 = -944;

	t19 = ((x77-(x78<x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 0;
	static int16_t x82 = INT16_MIN;
	volatile uint16_t x83 = UINT16_MAX;
	int32_t x84 = INT32_MAX;
	volatile int32_t t20 = -11571552;

	t20 = ((x81-(x82<x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x86 = 2U;
	static int16_t x87 = INT16_MAX;

	t21 = ((x85-(x86<x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x90 = -37;
	int16_t x92 = INT16_MIN;
	volatile int32_t t22 = -364369726;

	t22 = ((x89-(x90<x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = -3161;
	int16_t x96 = INT16_MAX;
	volatile int32_t t23 = 405;

	t23 = ((x93-(x94<x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MAX;
	int64_t x98 = -81LL;
	int64_t x99 = INT64_MIN;
	uint16_t x100 = 7U;
	static volatile int32_t t24 = -10461;

	t24 = ((x97-(x98<x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1107;
	uint64_t x102 = 63LLU;
	volatile uint32_t x104 = UINT32_MAX;
	int32_t t25 = 11358122;

	t25 = ((x101-(x102<x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -248127193367LL;
	uint32_t x107 = UINT32_MAX;
	int16_t x108 = 407;
	volatile int32_t t26 = -3772123;

	t26 = ((x105-(x106<x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int16_t x110 = -54;
	volatile int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MIN;
	int32_t t27 = 4;

	t27 = ((x109-(x110<x111))==x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	int8_t x116 = INT8_MIN;
	int32_t t28 = 228966;

	t28 = ((x113-(x114<x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MIN;
	volatile int32_t t29 = 956560619;

	t29 = ((x117-(x118<x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 30U;
	int64_t x122 = INT64_MAX;
	static uint16_t x123 = 10755U;
	int64_t x124 = -241319LL;
	volatile int32_t t30 = -79642899;

	t30 = ((x121-(x122<x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	volatile int32_t x127 = 1;
	static volatile int64_t x128 = 570333164317613557LL;
	int32_t t31 = -292;

	t31 = ((x125-(x126<x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x129 = -1;
	int32_t x130 = -1;
	int8_t x131 = -22;
	int16_t x132 = -1;

	t32 = ((x129-(x130<x131))==x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = 14U;
	volatile int8_t x134 = -1;
	uint8_t x136 = UINT8_MAX;
	int32_t t33 = 54808;

	t33 = ((x133-(x134<x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = UINT64_MAX;
	int32_t x138 = INT32_MIN;
	static uint32_t x139 = UINT32_MAX;

	t34 = ((x137-(x138<x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x142 = 402667758LLU;
	volatile uint32_t x143 = 82U;
	volatile int8_t x144 = INT8_MIN;
	int32_t t35 = -353;

	t35 = ((x141-(x142<x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 21;
	int32_t x147 = INT32_MIN;
	int8_t x148 = INT8_MIN;
	int32_t t36 = 12;

	t36 = ((x145-(x146<x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x153 = -1014707041623863992LL;
	volatile int32_t x155 = INT32_MAX;
	int64_t x156 = INT64_MAX;

	t37 = ((x153-(x154<x155))==x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -14;
	volatile int16_t x158 = INT16_MIN;
	static int16_t x159 = INT16_MIN;
	int64_t x160 = -1LL;
	static int32_t t38 = 144;

	t38 = ((x157-(x158<x159))==x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = -1;
	volatile int64_t x162 = 11LL;
	int16_t x163 = -10897;
	volatile int16_t x164 = INT16_MAX;
	static int32_t t39 = 192233;

	t39 = ((x161-(x162<x163))==x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = 3572304LL;
	static volatile int8_t x166 = INT8_MIN;
	uint8_t x167 = UINT8_MAX;
	volatile uint8_t x168 = 69U;
	int32_t t40 = 1;

	t40 = ((x165-(x166<x167))==x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -1;
	uint32_t x170 = UINT32_MAX;
	uint32_t x171 = 656079U;
	int64_t x172 = 199031851LL;
	volatile int32_t t41 = -35687954;

	t41 = ((x169-(x170<x171))==x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = -1;
	int16_t x175 = INT16_MIN;
	volatile int32_t t42 = -1;

	t42 = ((x173-(x174<x175))==x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x178 = -209220LL;
	int64_t x179 = INT64_MAX;
	int32_t x180 = -1;
	int32_t t43 = -8;

	t43 = ((x177-(x178<x179))==x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x181 = -1;
	int16_t x182 = 1;
	static volatile int64_t x183 = 4194637LL;
	int32_t t44 = 91411;

	t44 = ((x181-(x182<x183))==x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = INT16_MIN;
	uint32_t x186 = 248U;
	uint32_t x187 = 731431U;
	int32_t x188 = -1;
	static int32_t t45 = -6;

	t45 = ((x185-(x186<x187))==x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x190 = 0;
	uint16_t x191 = 73U;
	int64_t x192 = INT64_MAX;
	volatile int32_t t46 = 689969;

	t46 = ((x189-(x190<x191))==x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -1;
	uint8_t x194 = 0U;
	static int16_t x195 = -1;
	volatile int64_t x196 = 19558710LL;
	volatile int32_t t47 = 87;

	t47 = ((x193-(x194<x195))==x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x197 = UINT32_MAX;
	int32_t x198 = INT32_MIN;
	static int8_t x199 = INT8_MIN;
	int32_t x200 = INT32_MIN;
	volatile int32_t t48 = 0;

	t48 = ((x197-(x198<x199))==x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x202 = INT16_MIN;
	static volatile uint8_t x204 = 0U;
	int32_t t49 = 32669675;

	t49 = ((x201-(x202<x203))==x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x206 = -1;
	static uint8_t x207 = 8U;
	int32_t x208 = INT32_MIN;
	int32_t t50 = 17;

	t50 = ((x205-(x206<x207))==x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = INT32_MIN;
	int8_t x215 = -1;
	volatile uint16_t x216 = UINT16_MAX;
	volatile int32_t t51 = 657;

	t51 = ((x213-(x214<x215))==x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = -4;
	int64_t x218 = INT64_MIN;
	int16_t x219 = -880;
	int32_t x220 = -1;
	static int32_t t52 = -429272;

	t52 = ((x217-(x218<x219))==x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = 0;
	int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MIN;
	volatile int32_t x224 = -1;
	int32_t t53 = 2;

	t53 = ((x221-(x222<x223))==x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x227 = INT8_MIN;
	static int32_t x228 = INT32_MIN;
	volatile int32_t t54 = 68252141;

	t54 = ((x225-(x226<x227))==x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x230 = INT32_MAX;
	volatile uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MIN;
	int32_t t55 = -2846;

	t55 = ((x229-(x230<x231))==x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x233 = UINT8_MAX;
	volatile int16_t x235 = 616;

	t56 = ((x233-(x234<x235))==x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = UINT16_MAX;
	int8_t x238 = INT8_MAX;
	static int32_t x239 = 209449;
	uint16_t x240 = 14U;
	int32_t t57 = 1383;

	t57 = ((x237-(x238<x239))==x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x242 = UINT8_MAX;
	static int8_t x243 = INT8_MIN;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t58 = -1;

	t58 = ((x241-(x242<x243))==x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MIN;
	static int64_t x246 = 73743LL;
	static int32_t x247 = 35;
	static volatile int8_t x248 = INT8_MIN;
	volatile int32_t t59 = 3057711;

	t59 = ((x245-(x246<x247))==x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = 428087864LL;
	uint8_t x250 = 11U;
	volatile int64_t x251 = -1LL;
	static volatile int8_t x252 = 1;
	int32_t t60 = -123184;

	t60 = ((x249-(x250<x251))==x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = -1;
	int16_t x254 = INT16_MIN;
	uint8_t x256 = 73U;
	volatile int32_t t61 = 8555;

	t61 = ((x253-(x254<x255))==x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = -1092385446970349LL;
	int16_t x258 = -1;
	int32_t x259 = INT32_MAX;
	uint8_t x260 = 21U;

	t62 = ((x257-(x258<x259))==x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = 840082109;
	int16_t x262 = 1;
	int16_t x263 = INT16_MAX;
	volatile int64_t x264 = INT64_MIN;

	t63 = ((x261-(x262<x263))==x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = INT8_MIN;
	volatile int64_t x266 = INT64_MIN;
	int64_t x267 = 100730191658326LL;
	volatile int64_t x268 = -1LL;
	int32_t t64 = 10960;

	t64 = ((x265-(x266<x267))==x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = 140LLU;
	uint8_t x270 = UINT8_MAX;
	volatile uint8_t x271 = UINT8_MAX;
	int8_t x272 = INT8_MIN;
	int32_t t65 = 14262;

	t65 = ((x269-(x270<x271))==x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x274 = INT64_MIN;
	volatile int8_t x275 = INT8_MAX;
	static int8_t x276 = INT8_MIN;
	static volatile int32_t t66 = 55;

	t66 = ((x273-(x274<x275))==x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x277 = 3U;
	uint32_t x278 = 186239903U;
	uint32_t x279 = UINT32_MAX;
	volatile int64_t x280 = -26914728738412918LL;
	int32_t t67 = 117436;

	t67 = ((x277-(x278<x279))==x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x281 = UINT64_MAX;
	static int16_t x282 = -129;
	int8_t x283 = INT8_MIN;
	static int16_t x284 = 19;
	int32_t t68 = 249;

	t68 = ((x281-(x282<x283))==x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x287 = -1;
	int32_t t69 = 13;

	t69 = ((x285-(x286<x287))==x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x289 = 2480;
	int64_t x290 = INT64_MAX;
	uint16_t x291 = UINT16_MAX;
	int8_t x292 = INT8_MAX;
	int32_t t70 = -217189;

	t70 = ((x289-(x290<x291))==x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x295 = 13U;
	static int64_t x296 = INT64_MIN;
	int32_t t71 = -19468;

	t71 = ((x293-(x294<x295))==x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x297 = UINT8_MAX;
	volatile int8_t x298 = INT8_MAX;
	int64_t x299 = -1LL;
	volatile int32_t t72 = -392210;

	t72 = ((x297-(x298<x299))==x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x301 = 1351;
	int8_t x302 = -1;
	uint32_t x303 = UINT32_MAX;

	t73 = ((x301-(x302<x303))==x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x305 = 197LLU;
	static uint64_t x306 = 110561443119172658LLU;
	uint32_t x307 = UINT32_MAX;
	int32_t t74 = -758;

	t74 = ((x305-(x306<x307))==x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x309 = 0;
	static uint16_t x311 = UINT16_MAX;
	volatile int32_t x312 = -1;

	t75 = ((x309-(x310<x311))==x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x313 = 4;
	volatile uint8_t x316 = 1U;
	volatile int32_t t76 = 481103768;

	t76 = ((x313-(x314<x315))==x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x317 = UINT32_MAX;
	uint32_t x318 = 1U;
	int32_t x319 = 14844;
	int32_t x320 = INT32_MIN;
	int32_t t77 = 2;

	t77 = ((x317-(x318<x319))==x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x321 = 15U;
	static int32_t x322 = -1;
	int8_t x324 = 1;
	int32_t t78 = 1819;

	t78 = ((x321-(x322<x323))==x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x325 = UINT8_MAX;
	volatile int64_t x326 = INT64_MIN;
	int64_t x327 = -1LL;
	int8_t x328 = -1;

	t79 = ((x325-(x326<x327))==x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x330 = UINT32_MAX;
	int64_t x331 = -1LL;
	int64_t x332 = 8817076042128023LL;
	volatile int32_t t80 = -5;

	t80 = ((x329-(x330<x331))==x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = -1LL;
	static int16_t x334 = 251;
	int64_t x336 = INT64_MAX;

	t81 = ((x333-(x334<x335))==x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x339 = INT8_MIN;
	static int64_t x340 = INT64_MIN;
	int32_t t82 = 2;

	t82 = ((x337-(x338<x339))==x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = 93;
	int16_t x343 = INT16_MIN;
	uint8_t x344 = 15U;
	volatile int32_t t83 = 1;

	t83 = ((x341-(x342<x343))==x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x345 = 20537460U;
	int8_t x346 = INT8_MAX;
	static uint64_t x348 = UINT64_MAX;
	volatile int32_t t84 = -5;

	t84 = ((x345-(x346<x347))==x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = -1;
	static uint8_t x354 = UINT8_MAX;
	volatile uint64_t x355 = 390412696638071LLU;
	volatile int64_t x356 = -1LL;
	int32_t t85 = -41551;

	t85 = ((x353-(x354<x355))==x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = -381;
	int32_t x358 = INT32_MIN;
	int16_t x359 = INT16_MAX;
	uint16_t x360 = 4507U;

	t86 = ((x357-(x358<x359))==x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x365 = INT32_MAX;
	uint64_t x366 = 1111LLU;
	static int32_t x367 = INT32_MIN;
	uint8_t x368 = 14U;
	static int32_t t87 = -104;

	t87 = ((x365-(x366<x367))==x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x369 = UINT8_MAX;
	static int16_t x372 = INT16_MAX;
	int32_t t88 = 318588;

	t88 = ((x369-(x370<x371))==x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x373 = -1;
	uint8_t x374 = 1U;
	uint32_t x375 = 6U;
	int32_t x376 = INT32_MIN;
	static int32_t t89 = -9751;

	t89 = ((x373-(x374<x375))==x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x377 = -39;
	int8_t x378 = -7;
	int64_t x379 = 1093250850LL;
	int64_t x380 = -1472649158408652LL;
	int32_t t90 = 232456;

	t90 = ((x377-(x378<x379))==x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x382 = INT64_MIN;
	volatile int32_t x383 = INT32_MIN;
	int64_t x384 = INT64_MIN;
	int32_t t91 = -1985692;

	t91 = ((x381-(x382<x383))==x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x385 = UINT64_MAX;
	int32_t x386 = INT32_MIN;
	int64_t x388 = INT64_MAX;
	static volatile int32_t t92 = 892878;

	t92 = ((x385-(x386<x387))==x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x389 = -1;
	int8_t x390 = -15;
	volatile uint8_t x392 = 13U;
	static int32_t t93 = 113074393;

	t93 = ((x389-(x390<x391))==x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = INT32_MAX;
	static int8_t x395 = INT8_MIN;
	uint32_t x396 = 303596490U;
	int32_t t94 = -9;

	t94 = ((x393-(x394<x395))==x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x397 = 87U;
	static int16_t x399 = INT16_MIN;
	volatile int64_t x400 = INT64_MAX;
	volatile int32_t t95 = 357420;

	t95 = ((x397-(x398<x399))==x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x401 = 2264U;
	static volatile int32_t x404 = 1113332;
	static int32_t t96 = -1;

	t96 = ((x401-(x402<x403))==x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = INT32_MAX;
	int8_t x406 = INT8_MIN;
	uint8_t x408 = 9U;
	volatile int32_t t97 = -1600;

	t97 = ((x405-(x406<x407))==x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x409 = 23U;
	int64_t x410 = -2LL;
	volatile int8_t x411 = -2;
	int16_t x412 = INT16_MIN;
	volatile int32_t t98 = -2;

	t98 = ((x409-(x410<x411))==x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x413 = INT8_MIN;
	uint32_t x414 = 77804540U;
	int64_t x416 = 2280LL;
	static volatile int32_t t99 = -9559513;

	t99 = ((x413-(x414<x415))==x416);

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

