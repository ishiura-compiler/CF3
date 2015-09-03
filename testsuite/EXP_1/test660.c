#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = 386261U;
int16_t x8 = -1;
static volatile uint32_t x12 = 1233U;
static volatile int32_t t2 = -823852;
volatile int64_t x18 = 5310LL;
volatile int32_t t6 = -425476299;
int64_t x45 = -1LL;
static int64_t x52 = INT64_MIN;
static int16_t x58 = INT16_MAX;
int64_t x59 = -1LL;
int8_t x64 = -3;
int16_t x70 = INT16_MAX;
static uint32_t x72 = UINT32_MAX;
int8_t x75 = -25;
volatile int32_t t19 = 222556485;
uint64_t x90 = 518LLU;
int32_t t22 = 8323;
uint8_t x104 = 3U;
volatile int32_t x105 = INT32_MIN;
volatile int32_t x108 = INT32_MIN;
static int8_t x117 = -1;
uint8_t x120 = UINT8_MAX;
volatile int32_t t29 = 31958;
int32_t x125 = INT32_MIN;
static int8_t x127 = -1;
int32_t t30 = 451;
volatile int8_t x132 = INT8_MAX;
int32_t x139 = INT32_MAX;
uint32_t x140 = 1079690245U;
int32_t t33 = -4579292;
int8_t x143 = INT8_MIN;
static volatile int64_t x158 = -2680562284LL;
static int32_t t38 = 29866;
int16_t x166 = INT16_MAX;
static uint8_t x170 = UINT8_MAX;
int32_t t43 = 108229;
volatile int64_t x181 = INT64_MAX;
uint16_t x184 = 5U;
static volatile int32_t t44 = -571;
int16_t x185 = 1607;
volatile int32_t t45 = -12645457;
uint8_t x189 = 54U;
static int64_t x192 = -18461901LL;
int64_t x218 = INT64_MAX;
uint64_t x226 = 27621LLU;
int8_t x234 = -3;
static int16_t x236 = -737;
int32_t t56 = -3562509;
int32_t t57 = 260491;
int64_t x245 = INT64_MIN;
volatile int8_t x246 = -40;
int32_t t59 = -5550;
int8_t x258 = INT8_MIN;
volatile uint32_t x260 = 35603U;
volatile uint64_t x261 = 71043LLU;
volatile int32_t t62 = 4694;
static int16_t x265 = -1;
uint32_t x273 = 54U;
volatile int32_t t65 = 0;
static uint64_t x279 = 14362602933LLU;
uint8_t x284 = 11U;
int32_t t68 = 4475416;
int16_t x308 = INT16_MIN;
int8_t x310 = INT8_MIN;
int32_t x313 = INT32_MIN;
int8_t x317 = INT8_MAX;
static volatile uint16_t x327 = 0U;
uint64_t x331 = 13476249498LLU;
int64_t x337 = INT64_MIN;
uint16_t x342 = UINT16_MAX;
uint64_t x343 = 16879679298339LLU;
int32_t t82 = -250087540;
static int8_t x347 = INT8_MIN;
volatile int32_t t83 = 25635;
int16_t x349 = 249;
int16_t x353 = INT16_MIN;
uint16_t x362 = UINT16_MAX;
volatile int32_t t87 = -30;
volatile uint8_t x374 = UINT8_MAX;
uint16_t x376 = 2599U;
int32_t x384 = INT32_MAX;
uint16_t x387 = 175U;
static int32_t x393 = -1;
volatile int32_t t95 = -243;
int16_t x409 = INT16_MAX;


void f0(void) {
	uint64_t x1 = 3027169920026960LLU;
	static uint16_t x2 = 21U;
	uint16_t x3 = 0U;
	static int16_t x4 = INT16_MIN;
	int32_t t0 = -531564264;

	t0 = (((x1/x2)|x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = 1723010LL;
	uint8_t x7 = 1U;
	int32_t t1 = -3831417;

	t1 = (((x5/x6)|x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static int8_t x10 = -1;
	int8_t x11 = INT8_MAX;

	t2 = (((x9/x10)|x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 27;
	static volatile int64_t x14 = -6285449683LL;
	int32_t x15 = INT32_MIN;
	int32_t x16 = -531535;
	volatile int32_t t3 = 1;

	t3 = (((x13/x14)|x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	volatile uint32_t x19 = UINT32_MAX;
	int64_t x20 = -1019361300648679602LL;
	static volatile int32_t t4 = -255154;

	t4 = (((x17/x18)|x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	volatile int64_t x22 = -1LL;
	static int32_t x23 = INT32_MAX;
	uint16_t x24 = 5638U;
	volatile int32_t t5 = 65458;

	t5 = (((x21/x22)|x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	uint8_t x26 = 22U;
	volatile int8_t x27 = -1;
	int64_t x28 = INT64_MAX;

	t6 = (((x25/x26)|x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = -1;
	uint64_t x35 = UINT64_MAX;
	uint8_t x36 = 14U;
	volatile int32_t t7 = 0;

	t7 = (((x33/x34)|x35)<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 14270863100LL;
	int64_t x38 = INT64_MIN;
	int64_t x39 = INT64_MIN;
	int64_t x40 = 14950447LL;
	int32_t t8 = 9;

	t8 = (((x37/x38)|x39)<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MIN;
	static int16_t x43 = INT16_MAX;
	static int16_t x44 = 14768;
	static volatile int32_t t9 = -560133;

	t9 = (((x41/x42)|x43)<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = -1;
	int16_t x47 = INT16_MIN;
	uint16_t x48 = UINT16_MAX;
	static int32_t t10 = 207;

	t10 = (((x45/x46)|x47)<=x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 2U;
	uint64_t x50 = 190LLU;
	int16_t x51 = -5451;
	static volatile int32_t t11 = 25;

	t11 = (((x49/x50)|x51)<=x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = -1;
	int64_t x54 = INT64_MIN;
	int16_t x55 = -1;
	int32_t x56 = INT32_MAX;
	int32_t t12 = 15;

	t12 = (((x53/x54)|x55)<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x57 = 1256LLU;
	static uint32_t x60 = 48504288U;
	volatile int32_t t13 = 4;

	t13 = (((x57/x58)|x59)<=x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 4131;
	volatile int64_t x62 = INT64_MIN;
	uint16_t x63 = UINT16_MAX;
	int32_t t14 = -173393407;

	t14 = (((x61/x62)|x63)<=x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MAX;
	uint32_t x66 = UINT32_MAX;
	uint16_t x67 = 2084U;
	uint64_t x68 = 307493581LLU;
	int32_t t15 = -3163;

	t15 = (((x65/x66)|x67)<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x69 = INT64_MAX;
	int32_t x71 = INT32_MIN;
	volatile int32_t t16 = -7515;

	t16 = (((x69/x70)|x71)<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = INT32_MIN;
	static int64_t x74 = -1LL;
	int32_t x76 = INT32_MAX;
	volatile int32_t t17 = 4;

	t17 = (((x73/x74)|x75)<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 15968261262982617LLU;
	uint32_t x78 = UINT32_MAX;
	volatile int8_t x79 = -1;
	volatile int8_t x80 = 12;
	volatile int32_t t18 = 1;

	t18 = (((x77/x78)|x79)<=x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = UINT64_MAX;
	static int64_t x82 = INT64_MIN;
	static int32_t x83 = 1739;
	int8_t x84 = 0;

	t19 = (((x81/x82)|x83)<=x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 6949522994LLU;
	int8_t x86 = INT8_MAX;
	uint8_t x87 = 6U;
	int16_t x88 = INT16_MIN;
	int32_t t20 = 3309397;

	t20 = (((x85/x86)|x87)<=x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	int16_t x91 = -1;
	uint16_t x92 = 172U;
	volatile int32_t t21 = -3173;

	t21 = (((x89/x90)|x91)<=x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MAX;
	volatile int32_t x94 = 1658220;
	uint8_t x95 = UINT8_MAX;
	uint16_t x96 = UINT16_MAX;

	t22 = (((x93/x94)|x95)<=x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MAX;
	uint32_t x99 = UINT32_MAX;
	int64_t x100 = -1LL;
	volatile int32_t t23 = 262109;

	t23 = (((x97/x98)|x99)<=x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 45126508U;
	int16_t x102 = -1;
	uint32_t x103 = UINT32_MAX;
	volatile int32_t t24 = 2080;

	t24 = (((x101/x102)|x103)<=x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x106 = INT16_MIN;
	int64_t x107 = INT64_MIN;
	int32_t t25 = 7;

	t25 = (((x105/x106)|x107)<=x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = 20;
	int16_t x110 = -1;
	static int16_t x111 = INT16_MIN;
	int8_t x112 = 4;
	static volatile int32_t t26 = -99242343;

	t26 = (((x109/x110)|x111)<=x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = UINT8_MAX;
	volatile int16_t x114 = INT16_MIN;
	uint8_t x115 = UINT8_MAX;
	int16_t x116 = INT16_MIN;
	volatile int32_t t27 = 394;

	t27 = (((x113/x114)|x115)<=x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x118 = INT16_MIN;
	static int16_t x119 = INT16_MIN;
	volatile int32_t t28 = 1;

	t28 = (((x117/x118)|x119)<=x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x121 = 4U;
	int8_t x122 = -13;
	int64_t x123 = INT64_MAX;
	int32_t x124 = 19340;

	t29 = (((x121/x122)|x123)<=x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x126 = INT32_MAX;
	static int32_t x128 = 1;

	t30 = (((x125/x126)|x127)<=x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = UINT16_MAX;
	int32_t x130 = INT32_MIN;
	uint8_t x131 = 5U;
	volatile int32_t t31 = 3;

	t31 = (((x129/x130)|x131)<=x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -41336388091LL;
	int16_t x134 = -1;
	volatile int64_t x135 = -4986968419LL;
	int8_t x136 = -1;
	volatile int32_t t32 = 1604;

	t32 = (((x133/x134)|x135)<=x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = UINT64_MAX;
	int8_t x138 = -1;

	t33 = (((x137/x138)|x139)<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 0U;
	volatile int16_t x142 = INT16_MIN;
	int8_t x144 = 7;
	int32_t t34 = -1018798983;

	t34 = (((x141/x142)|x143)<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x145 = 34370849U;
	static volatile int16_t x146 = -1;
	uint32_t x147 = UINT32_MAX;
	uint64_t x148 = 5060LLU;
	static int32_t t35 = 3537722;

	t35 = (((x145/x146)|x147)<=x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = 123;
	int32_t x150 = INT32_MAX;
	int64_t x151 = 96785LL;
	uint8_t x152 = 9U;
	volatile int32_t t36 = 4;

	t36 = (((x149/x150)|x151)<=x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = UINT8_MAX;
	volatile int32_t x154 = INT32_MIN;
	int8_t x155 = INT8_MAX;
	uint16_t x156 = UINT16_MAX;
	static int32_t t37 = 127316587;

	t37 = (((x153/x154)|x155)<=x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	uint64_t x159 = UINT64_MAX;
	uint64_t x160 = 310034584917LLU;

	t38 = (((x157/x158)|x159)<=x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x161 = INT8_MAX;
	volatile int32_t x162 = 423;
	uint8_t x163 = 48U;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t39 = -815;

	t39 = (((x161/x162)|x163)<=x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MAX;
	volatile int32_t x167 = -1;
	static int64_t x168 = -1280LL;
	volatile int32_t t40 = -11;

	t40 = (((x165/x166)|x167)<=x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MAX;
	int16_t x171 = INT16_MIN;
	uint64_t x172 = 17631200LLU;
	int32_t t41 = -1002519;

	t41 = (((x169/x170)|x171)<=x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = 17865018LL;
	volatile uint8_t x174 = 10U;
	int8_t x175 = INT8_MAX;
	static uint8_t x176 = 72U;
	int32_t t42 = 7;

	t42 = (((x173/x174)|x175)<=x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x177 = 154;
	uint64_t x178 = 131LLU;
	int64_t x179 = INT64_MAX;
	static int32_t x180 = -1;

	t43 = (((x177/x178)|x179)<=x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x182 = -2LL;
	volatile uint32_t x183 = 29U;

	t44 = (((x181/x182)|x183)<=x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x186 = INT16_MIN;
	int64_t x187 = -1LL;
	volatile uint8_t x188 = UINT8_MAX;

	t45 = (((x185/x186)|x187)<=x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x190 = INT32_MIN;
	int8_t x191 = -1;
	volatile int32_t t46 = -104513;

	t46 = (((x189/x190)|x191)<=x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MIN;
	int8_t x198 = INT8_MIN;
	uint16_t x199 = 3842U;
	int64_t x200 = INT64_MIN;
	int32_t t47 = -135;

	t47 = (((x197/x198)|x199)<=x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = INT64_MAX;
	static int32_t x202 = INT32_MIN;
	int16_t x203 = INT16_MAX;
	static int32_t x204 = INT32_MIN;
	volatile int32_t t48 = 1;

	t48 = (((x201/x202)|x203)<=x204);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = 1;
	static int8_t x206 = INT8_MAX;
	int64_t x207 = INT64_MIN;
	static uint32_t x208 = 2449U;
	int32_t t49 = 109934;

	t49 = (((x205/x206)|x207)<=x208);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x209 = 1136908914U;
	int16_t x210 = 3;
	static uint32_t x211 = UINT32_MAX;
	volatile int64_t x212 = INT64_MIN;
	static int32_t t50 = 5600030;

	t50 = (((x209/x210)|x211)<=x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x213 = 2U;
	static volatile int32_t x214 = -1;
	uint32_t x215 = 3U;
	uint16_t x216 = 1673U;
	volatile int32_t t51 = 11476;

	t51 = (((x213/x214)|x215)<=x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -49;
	uint16_t x219 = UINT16_MAX;
	volatile int8_t x220 = 0;
	volatile int32_t t52 = -828298459;

	t52 = (((x217/x218)|x219)<=x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x221 = UINT32_MAX;
	static volatile int64_t x222 = -1LL;
	static uint64_t x223 = UINT64_MAX;
	static uint16_t x224 = UINT16_MAX;
	static volatile int32_t t53 = -766;

	t53 = (((x221/x222)|x223)<=x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x225 = -1LL;
	uint16_t x227 = 241U;
	uint16_t x228 = UINT16_MAX;
	static volatile int32_t t54 = -45;

	t54 = (((x225/x226)|x227)<=x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = -1;
	static int32_t x230 = -1;
	uint16_t x231 = UINT16_MAX;
	int32_t x232 = -20468;
	int32_t t55 = -4000;

	t55 = (((x229/x230)|x231)<=x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = UINT32_MAX;
	volatile int8_t x235 = INT8_MIN;

	t56 = (((x233/x234)|x235)<=x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x241 = 3U;
	static uint32_t x242 = 1U;
	static int16_t x243 = INT16_MIN;
	volatile int16_t x244 = INT16_MIN;

	t57 = (((x241/x242)|x243)<=x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x247 = UINT64_MAX;
	volatile int32_t x248 = -5371;
	volatile int32_t t58 = 56185231;

	t58 = (((x245/x246)|x247)<=x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = INT8_MAX;
	static volatile int64_t x250 = INT64_MIN;
	static int8_t x251 = 2;
	uint8_t x252 = 22U;

	t59 = (((x249/x250)|x251)<=x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = 14603670;
	uint8_t x254 = 60U;
	volatile int16_t x255 = 28;
	uint64_t x256 = 68162013LLU;
	static int32_t t60 = 53250871;

	t60 = (((x253/x254)|x255)<=x256);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x257 = 365U;
	volatile int16_t x259 = INT16_MIN;
	volatile int32_t t61 = -2039;

	t61 = (((x257/x258)|x259)<=x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x262 = INT8_MAX;
	int8_t x263 = -1;
	uint8_t x264 = 1U;

	t62 = (((x261/x262)|x263)<=x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x266 = 1LL;
	int64_t x267 = INT64_MIN;
	int16_t x268 = -1;
	static volatile int32_t t63 = -1393656;

	t63 = (((x265/x266)|x267)<=x268);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MAX;
	uint32_t x270 = 4071353U;
	uint32_t x271 = UINT32_MAX;
	volatile int64_t x272 = INT64_MIN;
	volatile int32_t t64 = 23914044;

	t64 = (((x269/x270)|x271)<=x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x274 = INT8_MIN;
	volatile int8_t x275 = -1;
	uint16_t x276 = 28207U;

	t65 = (((x273/x274)|x275)<=x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MAX;
	uint8_t x278 = 12U;
	uint16_t x280 = 20U;
	int32_t t66 = -75523;

	t66 = (((x277/x278)|x279)<=x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x281 = INT32_MIN;
	uint32_t x282 = UINT32_MAX;
	uint64_t x283 = UINT64_MAX;
	volatile int32_t t67 = 80783;

	t67 = (((x281/x282)|x283)<=x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x285 = INT8_MAX;
	volatile uint16_t x286 = UINT16_MAX;
	static uint16_t x287 = 4U;
	int16_t x288 = INT16_MIN;

	t68 = (((x285/x286)|x287)<=x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = UINT16_MAX;
	static int8_t x290 = INT8_MAX;
	uint32_t x291 = UINT32_MAX;
	int8_t x292 = INT8_MAX;
	int32_t t69 = -334752865;

	t69 = (((x289/x290)|x291)<=x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = INT16_MIN;
	volatile int16_t x294 = 15;
	int64_t x295 = INT64_MAX;
	static int32_t x296 = INT32_MIN;
	int32_t t70 = 13523;

	t70 = (((x293/x294)|x295)<=x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = -1;
	static uint16_t x298 = 607U;
	volatile int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MIN;
	volatile int32_t t71 = -2810;

	t71 = (((x297/x298)|x299)<=x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = -166;
	uint16_t x302 = 236U;
	uint32_t x303 = 6461U;
	int32_t x304 = INT32_MIN;
	int32_t t72 = -3;

	t72 = (((x301/x302)|x303)<=x304);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x305 = UINT8_MAX;
	static int16_t x306 = -1;
	int16_t x307 = INT16_MIN;
	volatile int32_t t73 = -447933720;

	t73 = (((x305/x306)|x307)<=x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = -1;
	int8_t x311 = 53;
	volatile uint64_t x312 = 46LLU;
	int32_t t74 = -178;

	t74 = (((x309/x310)|x311)<=x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x314 = UINT8_MAX;
	int16_t x315 = 0;
	static volatile uint8_t x316 = UINT8_MAX;
	int32_t t75 = 1;

	t75 = (((x313/x314)|x315)<=x316);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x318 = UINT64_MAX;
	int8_t x319 = INT8_MIN;
	int64_t x320 = -59LL;
	volatile int32_t t76 = -9657;

	t76 = (((x317/x318)|x319)<=x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = 0;
	int32_t x322 = -1;
	uint64_t x323 = 252306157221LLU;
	volatile int32_t x324 = INT32_MIN;
	static int32_t t77 = -4056;

	t77 = (((x321/x322)|x323)<=x324);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = INT32_MAX;
	uint8_t x326 = UINT8_MAX;
	int8_t x328 = INT8_MIN;
	volatile int32_t t78 = -22;

	t78 = (((x325/x326)|x327)<=x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = -1LL;
	static volatile int8_t x330 = INT8_MAX;
	uint16_t x332 = 17U;
	volatile int32_t t79 = -39097;

	t79 = (((x329/x330)|x331)<=x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x333 = INT32_MIN;
	int32_t x334 = -138365275;
	static int64_t x335 = INT64_MIN;
	uint16_t x336 = 1430U;
	volatile int32_t t80 = -153477382;

	t80 = (((x333/x334)|x335)<=x336);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x338 = INT8_MIN;
	int64_t x339 = 72133088LL;
	static uint8_t x340 = UINT8_MAX;
	static int32_t t81 = 25396;

	t81 = (((x337/x338)|x339)<=x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x341 = -1;
	static int16_t x344 = INT16_MIN;

	t82 = (((x341/x342)|x343)<=x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x345 = INT64_MAX;
	int16_t x346 = -2;
	int32_t x348 = -42644;

	t83 = (((x345/x346)|x347)<=x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x350 = 114;
	uint64_t x351 = UINT64_MAX;
	static int16_t x352 = INT16_MAX;
	int32_t t84 = -271;

	t84 = (((x349/x350)|x351)<=x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x354 = 1U;
	uint64_t x355 = 1773857603412535LLU;
	static volatile int32_t x356 = INT32_MAX;
	volatile int32_t t85 = -2446337;

	t85 = (((x353/x354)|x355)<=x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 85U;
	int16_t x358 = -20;
	static int8_t x359 = 30;
	uint32_t x360 = 58467U;
	static int32_t t86 = 7576;

	t86 = (((x357/x358)|x359)<=x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x361 = -5447060973142696LL;
	int8_t x363 = INT8_MIN;
	volatile int32_t x364 = INT32_MIN;

	t87 = (((x361/x362)|x363)<=x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x365 = INT32_MAX;
	volatile uint8_t x366 = UINT8_MAX;
	int16_t x367 = -61;
	int32_t x368 = -1;
	volatile int32_t t88 = -24454;

	t88 = (((x365/x366)|x367)<=x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x369 = 36887784613LLU;
	static int64_t x370 = -505379LL;
	uint64_t x371 = UINT64_MAX;
	int32_t x372 = INT32_MAX;
	int32_t t89 = -2;

	t89 = (((x369/x370)|x371)<=x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = INT64_MIN;
	static int16_t x375 = INT16_MIN;
	volatile int32_t t90 = 4074092;

	t90 = (((x373/x374)|x375)<=x376);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = -1;
	volatile int64_t x378 = -24169299LL;
	int32_t x379 = INT32_MAX;
	static volatile int8_t x380 = -1;
	static volatile int32_t t91 = -63;

	t91 = (((x377/x378)|x379)<=x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x381 = INT16_MAX;
	uint8_t x382 = 6U;
	int8_t x383 = INT8_MIN;
	int32_t t92 = -56587421;

	t92 = (((x381/x382)|x383)<=x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x385 = INT8_MIN;
	int8_t x386 = 21;
	uint16_t x388 = 11577U;
	volatile int32_t t93 = 79813142;

	t93 = (((x385/x386)|x387)<=x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x389 = 18974U;
	int16_t x390 = INT16_MIN;
	int32_t x391 = INT32_MAX;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t94 = -21;

	t94 = (((x389/x390)|x391)<=x392);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x394 = INT32_MAX;
	int8_t x395 = -6;
	uint64_t x396 = UINT64_MAX;

	t95 = (((x393/x394)|x395)<=x396);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = INT8_MAX;
	int64_t x398 = -1LL;
	static uint64_t x399 = 324609154557802627LLU;
	uint32_t x400 = UINT32_MAX;
	int32_t t96 = 85973;

	t96 = (((x397/x398)|x399)<=x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = -400;
	int32_t x402 = INT32_MAX;
	uint8_t x403 = UINT8_MAX;
	volatile int8_t x404 = INT8_MIN;
	volatile int32_t t97 = -33;

	t97 = (((x401/x402)|x403)<=x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = INT64_MIN;
	int8_t x406 = INT8_MAX;
	int32_t x407 = INT32_MAX;
	int8_t x408 = 34;
	static int32_t t98 = -1;

	t98 = (((x405/x406)|x407)<=x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x410 = INT64_MIN;
	int8_t x411 = INT8_MIN;
	uint8_t x412 = 5U;
	int32_t t99 = 2;

	t99 = (((x409/x410)|x411)<=x412);

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

