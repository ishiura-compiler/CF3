#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x9 = 118274267U;
static int32_t t4 = -836401058;
int32_t x24 = INT32_MIN;
int16_t x33 = INT16_MIN;
volatile int32_t x37 = 3;
uint8_t x40 = UINT8_MAX;
uint16_t x54 = 8760U;
static uint64_t x56 = 12538433350892LLU;
int64_t x58 = INT64_MIN;
volatile uint32_t x61 = 24008U;
int16_t x62 = INT16_MIN;
volatile int32_t t15 = -30;
int32_t x67 = INT32_MIN;
uint16_t x70 = 57U;
volatile uint16_t x79 = 3930U;
uint64_t x83 = 202824100722LLU;
int32_t x86 = 0;
uint8_t x90 = 5U;
int32_t x96 = INT32_MIN;
int32_t t25 = 248781229;
uint16_t x105 = UINT16_MAX;
uint16_t x120 = 11479U;
uint64_t x121 = 85416LLU;
uint16_t x133 = UINT16_MAX;
int16_t x136 = INT16_MIN;
static uint64_t x137 = UINT64_MAX;
uint8_t x138 = 0U;
uint32_t x140 = UINT32_MAX;
uint8_t x151 = 37U;
int8_t x154 = -1;
int8_t x161 = INT8_MIN;
int64_t x162 = INT64_MAX;
uint16_t x169 = 776U;
int16_t x173 = 281;
static volatile int32_t x181 = -1;
volatile int32_t t43 = 442604842;
uint16_t x195 = UINT16_MAX;
int32_t t44 = 30557;
int64_t x200 = -1LL;
int16_t x208 = INT16_MIN;
volatile int64_t x209 = -1LL;
uint64_t x216 = 5459303424974LLU;
volatile int32_t t49 = 2019;
int32_t t51 = 29821004;
uint16_t x239 = 13U;
static uint64_t x245 = 2544LLU;
int32_t x248 = -1;
static int64_t x252 = 60LL;
static int32_t t56 = 0;
uint64_t x253 = 7213808864471755LLU;
int64_t x254 = -1LL;
volatile int8_t x256 = -1;
int32_t t58 = 142102527;
static uint64_t x265 = 1013748918555514971LLU;
uint64_t x266 = UINT64_MAX;
int32_t x279 = INT32_MIN;
int16_t x282 = INT16_MIN;
volatile int32_t t63 = 649;
volatile uint8_t x296 = 63U;
static int64_t x298 = INT64_MAX;
int8_t x300 = -1;
static int8_t x302 = -1;
int32_t t68 = -84901;
int32_t t71 = -105;
uint32_t x317 = UINT32_MAX;
int32_t x323 = -1;
uint8_t x325 = 55U;
static int32_t t74 = 90068;
uint8_t x332 = 26U;
uint64_t x337 = UINT64_MAX;
int8_t x354 = INT8_MIN;
uint8_t x355 = 31U;
uint16_t x360 = 274U;
static int32_t t82 = -779821709;
uint8_t x368 = UINT8_MAX;
volatile int64_t x369 = -1LL;
volatile int8_t x372 = -56;
uint64_t x380 = UINT64_MAX;
static volatile int32_t t85 = 53773006;
int64_t x384 = INT64_MAX;
volatile int32_t t88 = 5;
int32_t t90 = 38008;
int16_t x402 = INT16_MAX;
int32_t x406 = 479390;
volatile int16_t x409 = -537;
int16_t x411 = INT16_MIN;
uint16_t x423 = UINT16_MAX;
int64_t x431 = -525890236LL;
static int8_t x433 = INT8_MAX;
uint32_t x440 = 103459524U;


void f0(void) {
	static uint8_t x1 = 1U;
	uint64_t x2 = 16230371LLU;
	volatile uint16_t x3 = 1010U;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 10671037;

	t0 = ((x1-(x2^x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	volatile int32_t x6 = INT32_MIN;
	volatile uint32_t x7 = UINT32_MAX;
	static int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = 11160993;

	t1 = ((x5-(x6^x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 34;
	volatile uint32_t x11 = 6068U;
	static int32_t x12 = -457726838;
	int32_t t2 = -31585;

	t2 = ((x9-(x10^x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	int16_t x14 = INT16_MIN;
	static int8_t x15 = 23;
	static int32_t x16 = -8370698;
	int32_t t3 = 29801;

	t3 = ((x13-(x14^x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = 5011;
	static int32_t x18 = 439127;
	int32_t x19 = INT32_MAX;
	uint16_t x20 = UINT16_MAX;

	t4 = ((x17-(x18^x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -89198860875LL;
	static volatile int8_t x22 = 0;
	int8_t x23 = INT8_MAX;
	static int32_t t5 = 510;

	t5 = ((x21-(x22^x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -8070;
	volatile int64_t x26 = INT64_MIN;
	uint16_t x27 = UINT16_MAX;
	uint16_t x28 = 14016U;
	int32_t t6 = 26472;

	t6 = ((x25-(x26^x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	uint8_t x30 = 19U;
	static uint8_t x31 = UINT8_MAX;
	int8_t x32 = -1;
	int32_t t7 = 9;

	t7 = ((x29-(x30^x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x34 = -61400802;
	int8_t x35 = -61;
	int64_t x36 = 574061LL;
	int32_t t8 = -413403281;

	t8 = ((x33-(x34^x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -1;
	volatile uint8_t x39 = UINT8_MAX;
	int32_t t9 = 1;

	t9 = ((x37-(x38^x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 988U;
	static int64_t x42 = INT64_MAX;
	uint16_t x43 = 20421U;
	volatile int64_t x44 = -83034378525227LL;
	volatile int32_t t10 = 10;

	t10 = ((x41-(x42^x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -13909;
	static volatile int32_t x46 = -13516687;
	static int32_t x47 = INT32_MIN;
	volatile int64_t x48 = 184721LL;
	int32_t t11 = 570882;

	t11 = ((x45-(x46^x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	uint16_t x50 = UINT16_MAX;
	static int32_t x51 = INT32_MIN;
	int8_t x52 = 24;
	volatile int32_t t12 = -9539;

	t12 = ((x49-(x50^x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -18;
	uint8_t x55 = UINT8_MAX;
	int32_t t13 = -5364;

	t13 = ((x53-(x54^x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x57 = 3;
	int16_t x59 = INT16_MAX;
	uint32_t x60 = UINT32_MAX;
	volatile int32_t t14 = 29;

	t14 = ((x57-(x58^x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x63 = 80435U;
	int16_t x64 = INT16_MIN;

	t15 = ((x61-(x62^x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -98;
	int64_t x66 = INT64_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = 30232;

	t16 = ((x65-(x66^x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = UINT64_MAX;
	int32_t t17 = 34767027;

	t17 = ((x69-(x70^x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	uint32_t x74 = 2013U;
	int32_t x75 = 36400355;
	uint8_t x76 = 1U;
	int32_t t18 = -731;

	t18 = ((x73-(x74^x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	int8_t x78 = INT8_MIN;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t19 = 718406013;

	t19 = ((x77-(x78^x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	static int16_t x82 = INT16_MAX;
	uint8_t x84 = 5U;
	volatile int32_t t20 = -2;

	t20 = ((x81-(x82^x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MIN;
	volatile int8_t x87 = -1;
	int16_t x88 = INT16_MAX;
	static int32_t t21 = -56286;

	t21 = ((x85-(x86^x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 6U;
	int8_t x91 = -13;
	uint16_t x92 = 0U;
	int32_t t22 = -1;

	t22 = ((x89-(x90^x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	static int32_t x94 = INT32_MIN;
	int64_t x95 = INT64_MIN;
	volatile int32_t t23 = -538376;

	t23 = ((x93-(x94^x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	int16_t x98 = INT16_MAX;
	uint8_t x99 = 1U;
	volatile int32_t x100 = INT32_MAX;
	volatile int32_t t24 = 30982;

	t24 = ((x97-(x98^x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	uint32_t x102 = 0U;
	static int64_t x103 = INT64_MAX;
	uint16_t x104 = 1U;

	t25 = ((x101-(x102^x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x106 = UINT16_MAX;
	uint64_t x107 = 1LLU;
	volatile int8_t x108 = -53;
	int32_t t26 = 15538;

	t26 = ((x105-(x106^x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int64_t x110 = -2378LL;
	int16_t x111 = -1;
	volatile int32_t x112 = -1;
	int32_t t27 = -109;

	t27 = ((x109-(x110^x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -1;
	static int64_t x118 = 748285635LL;
	int32_t x119 = -570547047;
	static int32_t t28 = -1;

	t28 = ((x117-(x118^x119))==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x122 = 4;
	static int64_t x123 = INT64_MIN;
	static int32_t x124 = INT32_MAX;
	int32_t t29 = 26;

	t29 = ((x121-(x122^x123))==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = UINT8_MAX;
	int64_t x130 = INT64_MIN;
	int16_t x131 = INT16_MIN;
	volatile uint32_t x132 = 527294249U;
	int32_t t30 = -5;

	t30 = ((x129-(x130^x131))==x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x134 = INT64_MIN;
	static int64_t x135 = -224492046131LL;
	volatile int32_t t31 = 216;

	t31 = ((x133-(x134^x135))==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x139 = -579;
	int32_t t32 = 44770;

	t32 = ((x137-(x138^x139))==x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x149 = INT8_MIN;
	int64_t x150 = INT64_MIN;
	static volatile int32_t x152 = INT32_MIN;
	int32_t t33 = 664;

	t33 = ((x149-(x150^x151))==x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = INT16_MAX;
	int8_t x155 = -55;
	static uint8_t x156 = 28U;
	int32_t t34 = 0;

	t34 = ((x153-(x154^x155))==x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x157 = INT64_MIN;
	int32_t x158 = -1;
	uint64_t x159 = 12293476347538LLU;
	volatile int32_t x160 = -1;
	volatile int32_t t35 = -91;

	t35 = ((x157-(x158^x159))==x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x163 = 1367234;
	uint64_t x164 = UINT64_MAX;
	volatile int32_t t36 = 1;

	t36 = ((x161-(x162^x163))==x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = INT64_MAX;
	uint32_t x166 = 2339U;
	static uint64_t x167 = UINT64_MAX;
	int8_t x168 = 21;
	volatile int32_t t37 = -250482017;

	t37 = ((x165-(x166^x167))==x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x170 = INT16_MIN;
	int64_t x171 = 8LL;
	int64_t x172 = -1LL;
	int32_t t38 = 4;

	t38 = ((x169-(x170^x171))==x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x174 = 353414U;
	int32_t x175 = -1;
	static int16_t x176 = INT16_MIN;
	int32_t t39 = 760962455;

	t39 = ((x173-(x174^x175))==x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x177 = -1LL;
	int64_t x178 = INT64_MIN;
	uint8_t x179 = 124U;
	volatile int16_t x180 = INT16_MAX;
	volatile int32_t t40 = -765;

	t40 = ((x177-(x178^x179))==x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x182 = INT32_MAX;
	uint16_t x183 = 3U;
	static volatile int16_t x184 = 3;
	int32_t t41 = 75;

	t41 = ((x181-(x182^x183))==x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x185 = 58437937U;
	volatile uint16_t x186 = UINT16_MAX;
	volatile uint16_t x187 = 1U;
	volatile int8_t x188 = INT8_MAX;
	volatile int32_t t42 = -2;

	t42 = ((x185-(x186^x187))==x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x189 = -1;
	uint32_t x190 = 7431U;
	volatile int8_t x191 = INT8_MAX;
	uint8_t x192 = UINT8_MAX;

	t43 = ((x189-(x190^x191))==x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x193 = 0;
	static int8_t x194 = INT8_MIN;
	static uint16_t x196 = 41U;

	t44 = ((x193-(x194^x195))==x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x197 = INT8_MIN;
	int32_t x198 = 98915285;
	int32_t x199 = 426;
	static int32_t t45 = -30590;

	t45 = ((x197-(x198^x199))==x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x205 = INT8_MIN;
	static int16_t x206 = -1;
	static uint16_t x207 = 304U;
	int32_t t46 = -5;

	t46 = ((x205-(x206^x207))==x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x210 = 2023706;
	volatile int32_t x211 = INT32_MIN;
	static int8_t x212 = INT8_MIN;
	volatile int32_t t47 = 1;

	t47 = ((x209-(x210^x211))==x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x213 = 0;
	volatile uint16_t x214 = 2682U;
	int16_t x215 = INT16_MIN;
	int32_t t48 = -69224;

	t48 = ((x213-(x214^x215))==x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = INT64_MIN;
	static uint8_t x218 = 14U;
	int16_t x219 = INT16_MIN;
	int16_t x220 = 430;

	t49 = ((x217-(x218^x219))==x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x221 = 19473U;
	static uint16_t x222 = 15013U;
	static uint8_t x223 = 87U;
	static int32_t x224 = INT32_MAX;
	static int32_t t50 = -1406338;

	t50 = ((x221-(x222^x223))==x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x225 = 5;
	static uint16_t x226 = 1U;
	uint32_t x227 = 7655010U;
	static int16_t x228 = -1;

	t51 = ((x225-(x226^x227))==x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x229 = -39309;
	volatile uint8_t x230 = UINT8_MAX;
	int16_t x231 = -1;
	uint32_t x232 = 354701741U;
	volatile int32_t t52 = 31;

	t52 = ((x229-(x230^x231))==x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = INT8_MAX;
	volatile uint8_t x238 = UINT8_MAX;
	int8_t x240 = INT8_MIN;
	volatile int32_t t53 = -1;

	t53 = ((x237-(x238^x239))==x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = INT8_MIN;
	uint64_t x242 = 62LLU;
	static int32_t x243 = INT32_MIN;
	uint32_t x244 = 458U;
	static int32_t t54 = -30273980;

	t54 = ((x241-(x242^x243))==x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x246 = 0;
	int32_t x247 = -1;
	volatile int32_t t55 = 1;

	t55 = ((x245-(x246^x247))==x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x249 = 3109057LLU;
	int8_t x250 = -1;
	uint8_t x251 = 27U;

	t56 = ((x249-(x250^x251))==x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x255 = -1;
	int32_t t57 = -52;

	t57 = ((x253-(x254^x255))==x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x257 = -181;
	uint16_t x258 = 3U;
	static int16_t x259 = -229;
	int16_t x260 = INT16_MIN;

	t58 = ((x257-(x258^x259))==x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x267 = 992021567U;
	volatile int32_t x268 = -1;
	volatile int32_t t59 = 7005531;

	t59 = ((x265-(x266^x267))==x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x269 = INT8_MIN;
	int16_t x270 = INT16_MAX;
	uint64_t x271 = UINT64_MAX;
	int8_t x272 = INT8_MAX;
	static volatile int32_t t60 = -61960;

	t60 = ((x269-(x270^x271))==x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x273 = 382918U;
	static uint64_t x274 = UINT64_MAX;
	volatile uint16_t x275 = UINT16_MAX;
	int8_t x276 = -1;
	volatile int32_t t61 = -6472;

	t61 = ((x273-(x274^x275))==x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x277 = UINT32_MAX;
	volatile int16_t x278 = -1;
	int32_t x280 = 66638396;
	int32_t t62 = -1046790;

	t62 = ((x277-(x278^x279))==x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x281 = INT8_MAX;
	int64_t x283 = -1LL;
	static int32_t x284 = INT32_MIN;

	t63 = ((x281-(x282^x283))==x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x285 = INT32_MIN;
	static int16_t x286 = INT16_MIN;
	uint32_t x287 = 7174993U;
	int16_t x288 = INT16_MAX;
	int32_t t64 = 1;

	t64 = ((x285-(x286^x287))==x288);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x289 = 189852U;
	volatile uint8_t x290 = UINT8_MAX;
	int32_t x291 = INT32_MIN;
	static volatile int8_t x292 = -1;
	static int32_t t65 = -25503661;

	t65 = ((x289-(x290^x291))==x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x293 = 157371LLU;
	int64_t x294 = INT64_MAX;
	static int32_t x295 = INT32_MIN;
	volatile int32_t t66 = 345944088;

	t66 = ((x293-(x294^x295))==x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x297 = 0U;
	int8_t x299 = INT8_MIN;
	static volatile int32_t t67 = -34363;

	t67 = ((x297-(x298^x299))==x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	static uint16_t x304 = 713U;

	t68 = ((x301-(x302^x303))==x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x305 = -1;
	int16_t x306 = -14033;
	int8_t x307 = INT8_MAX;
	volatile int32_t x308 = INT32_MIN;
	volatile int32_t t69 = -1090;

	t69 = ((x305-(x306^x307))==x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x309 = 6U;
	uint64_t x310 = 6890LLU;
	int8_t x311 = INT8_MAX;
	volatile int16_t x312 = -1;
	volatile int32_t t70 = 316187;

	t70 = ((x309-(x310^x311))==x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x313 = INT8_MAX;
	int8_t x314 = INT8_MIN;
	volatile int8_t x315 = INT8_MAX;
	static int8_t x316 = INT8_MIN;

	t71 = ((x313-(x314^x315))==x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x318 = -1LL;
	volatile uint64_t x319 = 16527591123547LLU;
	int8_t x320 = INT8_MAX;
	volatile int32_t t72 = 524679449;

	t72 = ((x317-(x318^x319))==x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x321 = INT32_MAX;
	static int64_t x322 = INT64_MIN;
	int64_t x324 = -423307453666654847LL;
	volatile int32_t t73 = 1669506;

	t73 = ((x321-(x322^x323))==x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x326 = 5U;
	int64_t x327 = 55344498198874531LL;
	static int32_t x328 = INT32_MIN;

	t74 = ((x325-(x326^x327))==x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x329 = INT8_MIN;
	int32_t x330 = -1;
	int64_t x331 = 720324152938LL;
	static volatile int32_t t75 = 369;

	t75 = ((x329-(x330^x331))==x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = INT8_MIN;
	volatile uint16_t x334 = UINT16_MAX;
	int16_t x335 = -1;
	int16_t x336 = INT16_MAX;
	int32_t t76 = -67278818;

	t76 = ((x333-(x334^x335))==x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x338 = 3;
	int32_t x339 = -84;
	volatile uint8_t x340 = 6U;
	int32_t t77 = 67877;

	t77 = ((x337-(x338^x339))==x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x341 = -1;
	volatile uint64_t x342 = 19550977415081LLU;
	int16_t x343 = -11345;
	int64_t x344 = INT64_MIN;
	static int32_t t78 = 36175499;

	t78 = ((x341-(x342^x343))==x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x345 = -1;
	static int8_t x346 = INT8_MIN;
	int16_t x347 = -1;
	volatile int32_t x348 = 77125273;
	volatile int32_t t79 = -36;

	t79 = ((x345-(x346^x347))==x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x349 = 0U;
	int64_t x350 = 253747763721LL;
	volatile int64_t x351 = 7709773912698428LL;
	int8_t x352 = INT8_MIN;
	volatile int32_t t80 = -48840;

	t80 = ((x349-(x350^x351))==x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x353 = 14;
	int16_t x356 = 4215;
	volatile int32_t t81 = -69935;

	t81 = ((x353-(x354^x355))==x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x357 = UINT8_MAX;
	int64_t x358 = 53885425485395637LL;
	static uint64_t x359 = 480965760573385LLU;

	t82 = ((x357-(x358^x359))==x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x365 = 3;
	int32_t x366 = INT32_MIN;
	int32_t x367 = INT32_MAX;
	volatile int32_t t83 = -17;

	t83 = ((x365-(x366^x367))==x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x370 = 9709393863129LLU;
	static uint64_t x371 = 3507LLU;
	static volatile int32_t t84 = -970;

	t84 = ((x369-(x370^x371))==x372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x377 = -10;
	uint64_t x378 = 32876454221600093LLU;
	int8_t x379 = 14;

	t85 = ((x377-(x378^x379))==x380);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x381 = 5692U;
	int32_t x382 = 11645;
	int32_t x383 = 28262738;
	volatile int32_t t86 = 12563034;

	t86 = ((x381-(x382^x383))==x384);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x385 = 446LLU;
	volatile uint8_t x386 = 91U;
	static uint32_t x387 = 317045U;
	int32_t x388 = INT32_MIN;
	volatile int32_t t87 = 500743;

	t87 = ((x385-(x386^x387))==x388);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = INT32_MIN;
	static int32_t x390 = INT32_MIN;
	uint32_t x391 = 250357439U;
	int64_t x392 = INT64_MAX;

	t88 = ((x389-(x390^x391))==x392);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x393 = INT16_MAX;
	static int32_t x394 = INT32_MAX;
	int8_t x395 = INT8_MAX;
	static int32_t x396 = 441067;
	int32_t t89 = 10320;

	t89 = ((x393-(x394^x395))==x396);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x397 = 346U;
	int32_t x398 = INT32_MIN;
	int16_t x399 = -26;
	int16_t x400 = INT16_MAX;

	t90 = ((x397-(x398^x399))==x400);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x401 = -965;
	uint64_t x403 = UINT64_MAX;
	uint32_t x404 = 165271781U;
	int32_t t91 = -47529992;

	t91 = ((x401-(x402^x403))==x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x405 = -4935;
	volatile int32_t x407 = INT32_MAX;
	uint16_t x408 = UINT16_MAX;
	int32_t t92 = 625597871;

	t92 = ((x405-(x406^x407))==x408);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x410 = 6216U;
	int32_t x412 = INT32_MIN;
	static volatile int32_t t93 = -86592414;

	t93 = ((x409-(x410^x411))==x412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x413 = INT8_MAX;
	uint32_t x414 = 3364U;
	volatile uint16_t x415 = UINT16_MAX;
	volatile uint16_t x416 = UINT16_MAX;
	int32_t t94 = 366;

	t94 = ((x413-(x414^x415))==x416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = -148;
	volatile uint64_t x418 = UINT64_MAX;
	int64_t x419 = 20905809772547640LL;
	int64_t x420 = INT64_MAX;
	int32_t t95 = 15;

	t95 = ((x417-(x418^x419))==x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = -1;
	volatile int8_t x422 = 1;
	int8_t x424 = INT8_MIN;
	int32_t t96 = 16641459;

	t96 = ((x421-(x422^x423))==x424);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x429 = 112U;
	uint32_t x430 = 113356095U;
	volatile uint32_t x432 = UINT32_MAX;
	int32_t t97 = -96935;

	t97 = ((x429-(x430^x431))==x432);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x434 = 39U;
	int16_t x435 = -1;
	int8_t x436 = -12;
	static volatile int32_t t98 = 262;

	t98 = ((x433-(x434^x435))==x436);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x437 = INT8_MIN;
	static uint64_t x438 = 21625343728119431LLU;
	static int32_t x439 = -1;
	volatile int32_t t99 = -651917773;

	t99 = ((x437-(x438^x439))==x440);

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

