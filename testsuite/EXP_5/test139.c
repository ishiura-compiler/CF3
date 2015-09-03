#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x6 = INT16_MIN;
int8_t x14 = 3;
int64_t x17 = INT64_MAX;
static uint8_t x18 = 54U;
int16_t x19 = -7739;
int32_t t6 = -142726346;
int8_t x38 = INT8_MIN;
static uint32_t x41 = UINT32_MAX;
int8_t x44 = INT8_MIN;
static int32_t t9 = 242;
int64_t x54 = 27491865428LL;
volatile int32_t x56 = -1;
int16_t x67 = INT16_MAX;
int32_t t15 = -1418662;
int32_t x76 = INT32_MIN;
int32_t x78 = INT32_MAX;
volatile int32_t t17 = 284;
static volatile int8_t x83 = INT8_MIN;
int64_t x91 = INT64_MIN;
volatile int32_t t20 = -1;
int64_t x93 = 496008023743LL;
int32_t t23 = -170;
uint8_t x108 = UINT8_MAX;
int8_t x114 = -1;
uint64_t x121 = UINT64_MAX;
int16_t x132 = INT16_MIN;
volatile int32_t x136 = INT32_MIN;
int32_t x147 = INT32_MAX;
uint64_t x155 = 38231LLU;
static volatile int32_t x156 = 81744479;
int16_t x161 = INT16_MIN;
static int32_t x174 = INT32_MIN;
int16_t x180 = 3294;
static int64_t x187 = -63293212LL;
static uint32_t x190 = 255303U;
int16_t x191 = -2;
int32_t x194 = -1;
int64_t x196 = INT64_MIN;
int32_t t44 = -406041;
int8_t x199 = INT8_MIN;
volatile int32_t t45 = 2861;
uint16_t x202 = 92U;
int64_t x216 = INT64_MIN;
static int8_t x218 = INT8_MIN;
int8_t x219 = INT8_MAX;
int16_t x224 = -1;
static int64_t x238 = -107222161762455LL;
uint16_t x242 = UINT16_MAX;
int32_t x244 = INT32_MIN;
static int64_t x245 = -4959317187LL;
int8_t x251 = INT8_MIN;
int16_t x252 = INT16_MIN;
int64_t x254 = INT64_MIN;
static int32_t t59 = 961;
uint16_t x259 = 109U;
static volatile int32_t x265 = -1;
static int16_t x267 = 311;
uint8_t x273 = 2U;
int16_t x279 = -1;
int64_t x280 = INT64_MAX;
int8_t x282 = INT8_MIN;
int32_t t67 = -2107;
int8_t x289 = INT8_MAX;
volatile int8_t x296 = INT8_MAX;
uint32_t x297 = 1U;
static int32_t x300 = -1;
int32_t x305 = INT32_MIN;
static volatile int64_t x309 = INT64_MIN;
static int32_t x310 = -3;
volatile int32_t t73 = -870804;
int32_t x315 = INT32_MAX;
static volatile int64_t x317 = INT64_MIN;
int64_t x319 = -1LL;
static int16_t x325 = INT16_MAX;
static int8_t x326 = INT8_MIN;
volatile int64_t x328 = INT64_MIN;
int32_t x336 = INT32_MIN;
static int8_t x338 = 50;
uint16_t x339 = 168U;
int8_t x353 = INT8_MIN;
uint16_t x354 = 3715U;
uint16_t x355 = 1U;
int64_t x357 = 1118768LL;
volatile uint32_t x374 = 14054U;
int32_t x377 = -28;
uint64_t x379 = 5785771499635221LLU;
static int32_t x385 = 11545655;
volatile int32_t x394 = INT32_MIN;
static volatile uint32_t x396 = 88775U;
int32_t x401 = -1;
int16_t x404 = INT16_MIN;
volatile int32_t t92 = -14016;
int8_t x406 = 13;
int16_t x408 = -914;
int32_t t93 = -2092977;
static uint32_t x419 = UINT32_MAX;
int32_t t95 = 2;
int16_t x423 = INT16_MIN;
volatile int32_t t96 = 92345274;
int16_t x427 = 1843;


void f0(void) {
	int8_t x5 = -4;
	int16_t x7 = INT16_MAX;
	int64_t x8 = -243505843849199965LL;
	int32_t t0 = -618;

	t0 = (x5<((x6+x7)&x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 181388771LL;
	int8_t x10 = 10;
	int64_t x11 = -239LL;
	int64_t x12 = -6818372721577802LL;
	volatile int32_t t1 = -92858898;

	t1 = (x9<((x10+x11)&x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MAX;
	uint16_t x15 = UINT16_MAX;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t2 = 1;

	t2 = (x13<((x14+x15)&x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x20 = UINT64_MAX;
	int32_t t3 = 628466;

	t3 = (x17<((x18+x19)&x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	volatile int16_t x22 = -228;
	int64_t x23 = -1752145309LL;
	static int16_t x24 = 855;
	static volatile int32_t t4 = -112;

	t4 = (x21<((x22+x23)&x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = 3;
	uint8_t x26 = UINT8_MAX;
	volatile int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MIN;
	int32_t t5 = -3666723;

	t5 = (x25<((x26+x27)&x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = INT16_MIN;
	uint64_t x30 = 15LLU;
	int64_t x31 = -1LL;
	int16_t x32 = INT16_MAX;

	t6 = (x29<((x30+x31)&x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MAX;
	static uint16_t x34 = 20313U;
	static int32_t x35 = -69384;
	volatile int16_t x36 = INT16_MAX;
	static int32_t t7 = -111318035;

	t7 = (x33<((x34+x35)&x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MAX;
	int64_t x39 = -63069426LL;
	static volatile int64_t x40 = -1LL;
	static int32_t t8 = -432723732;

	t8 = (x37<((x38+x39)&x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x42 = UINT8_MAX;
	int32_t x43 = INT32_MIN;

	t9 = (x41<((x42+x43)&x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 1623U;
	volatile int16_t x46 = INT16_MIN;
	static int16_t x47 = -297;
	int16_t x48 = 4670;
	static volatile int32_t t10 = -26398;

	t10 = (x45<((x46+x47)&x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x49 = INT32_MAX;
	static int64_t x50 = -5348827149857348LL;
	int8_t x51 = -1;
	int32_t x52 = INT32_MAX;
	volatile int32_t t11 = -81;

	t11 = (x49<((x50+x51)&x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = 43;
	volatile int16_t x55 = -756;
	int32_t t12 = -541212;

	t12 = (x53<((x54+x55)&x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 8139U;
	int32_t x62 = 19955053;
	volatile uint32_t x63 = 5U;
	uint64_t x64 = 30370336375892LLU;
	int32_t t13 = -4973;

	t13 = (x61<((x62+x63)&x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 82U;
	int16_t x66 = -23;
	uint16_t x68 = 7U;
	static int32_t t14 = -14375;

	t14 = (x65<((x66+x67)&x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	static int32_t x70 = -1;
	int32_t x71 = -1319075;
	uint16_t x72 = 0U;

	t15 = (x69<((x70+x71)&x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = 1;
	int64_t x74 = INT64_MIN;
	static volatile uint8_t x75 = 61U;
	int32_t t16 = 0;

	t16 = (x73<((x74+x75)&x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = -12576751LL;
	static int64_t x79 = INT64_MIN;
	uint16_t x80 = 8U;

	t17 = (x77<((x78+x79)&x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MAX;
	uint8_t x84 = UINT8_MAX;
	int32_t t18 = 1;

	t18 = (x81<((x82+x83)&x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -1LL;
	uint16_t x86 = 3033U;
	static volatile int64_t x87 = -107748087LL;
	static int8_t x88 = INT8_MAX;
	static int32_t t19 = -806;

	t19 = (x85<((x86+x87)&x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x89 = -439385;
	static int8_t x90 = 52;
	static int64_t x92 = INT64_MIN;

	t20 = (x89<((x90+x91)&x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MIN;
	uint8_t x96 = UINT8_MAX;
	int32_t t21 = -860;

	t21 = (x93<((x94+x95)&x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MAX;
	uint64_t x98 = 361080LLU;
	int64_t x99 = INT64_MIN;
	int64_t x100 = -1LL;
	volatile int32_t t22 = -102688;

	t22 = (x97<((x98+x99)&x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -694LL;
	volatile uint16_t x102 = 22U;
	int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;

	t23 = (x101<((x102+x103)&x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = 2074;
	static volatile uint16_t x106 = UINT16_MAX;
	uint16_t x107 = 13U;
	volatile int32_t t24 = 3098;

	t24 = (x105<((x106+x107)&x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x109 = INT32_MIN;
	int32_t x110 = INT32_MAX;
	int64_t x111 = INT64_MIN;
	static int64_t x112 = INT64_MIN;
	static int32_t t25 = -674;

	t25 = (x109<((x110+x111)&x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = UINT32_MAX;
	static int8_t x115 = -19;
	uint8_t x116 = 9U;
	volatile int32_t t26 = 37802225;

	t26 = (x113<((x114+x115)&x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = -1;
	int32_t x118 = INT32_MAX;
	int8_t x119 = -1;
	int32_t x120 = -1;
	int32_t t27 = 0;

	t27 = (x117<((x118+x119)&x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x122 = UINT64_MAX;
	static uint8_t x123 = 81U;
	volatile int64_t x124 = INT64_MIN;
	static volatile int32_t t28 = 75444;

	t28 = (x121<((x122+x123)&x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MIN;
	volatile uint16_t x130 = UINT16_MAX;
	int64_t x131 = 43537LL;
	int32_t t29 = 62;

	t29 = (x129<((x130+x131)&x132));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MIN;
	static int64_t x135 = -1LL;
	static int32_t t30 = 34846;

	t30 = (x133<((x134+x135)&x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x137 = 7360015U;
	uint16_t x138 = 241U;
	int16_t x139 = -1;
	int32_t x140 = -2;
	int32_t t31 = -2;

	t31 = (x137<((x138+x139)&x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x141 = 30554LLU;
	int32_t x142 = -218733;
	volatile uint8_t x143 = 2U;
	int32_t x144 = -61729543;
	int32_t t32 = -1;

	t32 = (x141<((x142+x143)&x144));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = -1;
	static volatile uint64_t x146 = UINT64_MAX;
	int16_t x148 = INT16_MAX;
	volatile int32_t t33 = -63685390;

	t33 = (x145<((x146+x147)&x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = 19;
	uint64_t x154 = 23963553401305136LLU;
	static int32_t t34 = -157;

	t34 = (x153<((x154+x155)&x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MAX;
	int8_t x158 = -1;
	uint8_t x159 = 28U;
	int64_t x160 = 3703923355942342LL;
	static int32_t t35 = -30;

	t35 = (x157<((x158+x159)&x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x162 = 13355U;
	int8_t x163 = -12;
	static int32_t x164 = INT32_MAX;
	volatile int32_t t36 = 301;

	t36 = (x161<((x162+x163)&x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = INT32_MAX;
	volatile uint64_t x166 = 11LLU;
	uint64_t x167 = 1LLU;
	int8_t x168 = -1;
	static int32_t t37 = 39;

	t37 = (x165<((x166+x167)&x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = 32U;
	int8_t x170 = 6;
	uint16_t x171 = 691U;
	volatile int16_t x172 = INT16_MAX;
	volatile int32_t t38 = 2527;

	t38 = (x169<((x170+x171)&x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = INT64_MIN;
	uint8_t x175 = 3U;
	int16_t x176 = INT16_MIN;
	int32_t t39 = 921104263;

	t39 = (x173<((x174+x175)&x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x177 = INT16_MAX;
	uint64_t x178 = 4477312LLU;
	int64_t x179 = INT64_MAX;
	static int32_t t40 = 244;

	t40 = (x177<((x178+x179)&x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MIN;
	static uint16_t x182 = UINT16_MAX;
	int64_t x183 = 7274LL;
	int64_t x184 = INT64_MIN;
	volatile int32_t t41 = 1336512;

	t41 = (x181<((x182+x183)&x184));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = -1LL;
	volatile int8_t x186 = INT8_MIN;
	int32_t x188 = INT32_MIN;
	volatile int32_t t42 = -1402;

	t42 = (x185<((x186+x187)&x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x189 = -3;
	volatile int64_t x192 = 4973230914LL;
	static volatile int32_t t43 = 121392;

	t43 = (x189<((x190+x191)&x192));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = INT16_MIN;
	static uint32_t x195 = 28688U;

	t44 = (x193<((x194+x195)&x196));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = UINT32_MAX;
	uint32_t x198 = 202981U;
	int64_t x200 = INT64_MIN;

	t45 = (x197<((x198+x199)&x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x201 = 0U;
	int8_t x203 = INT8_MIN;
	uint32_t x204 = 460U;
	int32_t t46 = -7404233;

	t46 = (x201<((x202+x203)&x204));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = UINT16_MAX;
	static int64_t x206 = -1LL;
	volatile int8_t x207 = INT8_MIN;
	int32_t x208 = INT32_MIN;
	int32_t t47 = 98;

	t47 = (x205<((x206+x207)&x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x209 = INT32_MIN;
	int64_t x210 = 355945121417495LL;
	volatile int16_t x211 = 1483;
	uint64_t x212 = 15654964LLU;
	int32_t t48 = -8814;

	t48 = (x209<((x210+x211)&x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x213 = UINT64_MAX;
	int8_t x214 = INT8_MIN;
	volatile int16_t x215 = INT16_MIN;
	volatile int32_t t49 = -500;

	t49 = (x213<((x214+x215)&x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x217 = -59;
	int32_t x220 = 18192556;
	int32_t t50 = -15231;

	t50 = (x217<((x218+x219)&x220));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = INT64_MIN;
	uint64_t x222 = 7632860519262LLU;
	int64_t x223 = INT64_MAX;
	static int32_t t51 = -55990464;

	t51 = (x221<((x222+x223)&x224));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x225 = -1LL;
	int32_t x226 = -1;
	int16_t x227 = -1;
	volatile int8_t x228 = INT8_MIN;
	int32_t t52 = 19;

	t52 = (x225<((x226+x227)&x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = -1;
	int32_t x230 = 150;
	uint32_t x231 = 20829U;
	int64_t x232 = INT64_MAX;
	int32_t t53 = -4919102;

	t53 = (x229<((x230+x231)&x232));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x233 = 109449298354975LLU;
	volatile uint16_t x234 = 696U;
	volatile int8_t x235 = 1;
	int16_t x236 = -1;
	volatile int32_t t54 = 93183;

	t54 = (x233<((x234+x235)&x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = INT64_MIN;
	int64_t x239 = -225630983246704LL;
	int16_t x240 = -15;
	int32_t t55 = -18;

	t55 = (x237<((x238+x239)&x240));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x241 = -1LL;
	int8_t x243 = -1;
	static volatile int32_t t56 = -269136927;

	t56 = (x241<((x242+x243)&x244));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x246 = 6888U;
	uint8_t x247 = UINT8_MAX;
	int8_t x248 = -1;
	volatile int32_t t57 = -1878855;

	t57 = (x245<((x246+x247)&x248));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = INT64_MIN;
	uint8_t x250 = 1U;
	static volatile int32_t t58 = -103211;

	t58 = (x249<((x250+x251)&x252));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x253 = UINT64_MAX;
	int64_t x255 = INT64_MAX;
	static int64_t x256 = INT64_MIN;

	t59 = (x253<((x254+x255)&x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x257 = -60607863LL;
	int64_t x258 = INT64_MIN;
	volatile uint16_t x260 = 0U;
	int32_t t60 = 714739;

	t60 = (x257<((x258+x259)&x260));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = 45;
	uint64_t x262 = 524038499736LLU;
	int16_t x263 = INT16_MIN;
	volatile int64_t x264 = 73284817272331914LL;
	volatile int32_t t61 = 615618;

	t61 = (x261<((x262+x263)&x264));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x266 = 77509903U;
	int64_t x268 = INT64_MAX;
	static int32_t t62 = 237137776;

	t62 = (x265<((x266+x267)&x268));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = -1;
	volatile int32_t x270 = INT32_MIN;
	int16_t x271 = INT16_MAX;
	int16_t x272 = 10;
	int32_t t63 = 366;

	t63 = (x269<((x270+x271)&x272));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x274 = 17750U;
	static int64_t x275 = -30LL;
	volatile int8_t x276 = INT8_MIN;
	volatile int32_t t64 = -54;

	t64 = (x273<((x274+x275)&x276));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = -36;
	int8_t x278 = 3;
	volatile int32_t t65 = 186892012;

	t65 = (x277<((x278+x279)&x280));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x281 = INT8_MAX;
	volatile int16_t x283 = INT16_MAX;
	uint64_t x284 = 31LLU;
	int32_t t66 = -15;

	t66 = (x281<((x282+x283)&x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x285 = 449628380692105061LLU;
	static volatile int8_t x286 = INT8_MIN;
	static volatile uint8_t x287 = UINT8_MAX;
	uint16_t x288 = 15U;

	t67 = (x285<((x286+x287)&x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x290 = 6;
	static int32_t x291 = -1;
	int8_t x292 = -1;
	int32_t t68 = 4;

	t68 = (x289<((x290+x291)&x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x293 = 9482U;
	uint8_t x294 = 126U;
	volatile int64_t x295 = 64659910963011568LL;
	static volatile int32_t t69 = 0;

	t69 = (x293<((x294+x295)&x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x298 = -8039;
	int8_t x299 = 0;
	int32_t t70 = -3775047;

	t70 = (x297<((x298+x299)&x300));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = 6;
	static volatile uint32_t x303 = 0U;
	volatile int64_t x304 = INT64_MIN;
	int32_t t71 = -482861;

	t71 = (x301<((x302+x303)&x304));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x306 = 9793;
	volatile int8_t x307 = 0;
	static int32_t x308 = 554704162;
	int32_t t72 = 275396129;

	t72 = (x305<((x306+x307)&x308));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x311 = INT32_MAX;
	int8_t x312 = INT8_MIN;

	t73 = (x309<((x310+x311)&x312));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x313 = -1;
	int16_t x314 = -176;
	int16_t x316 = -186;
	int32_t t74 = 242372;

	t74 = (x313<((x314+x315)&x316));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x318 = INT32_MIN;
	int8_t x320 = 4;
	volatile int32_t t75 = -1868308;

	t75 = (x317<((x318+x319)&x320));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x321 = 104U;
	uint32_t x322 = 66965U;
	static int8_t x323 = INT8_MIN;
	volatile int16_t x324 = -7;
	volatile int32_t t76 = 3;

	t76 = (x321<((x322+x323)&x324));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x327 = INT64_MAX;
	int32_t t77 = -2;

	t77 = (x325<((x326+x327)&x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x333 = -2538;
	int8_t x334 = 1;
	int16_t x335 = -1;
	volatile int32_t t78 = -1945;

	t78 = (x333<((x334+x335)&x336));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = 0;
	int32_t x340 = INT32_MIN;
	volatile int32_t t79 = -48306866;

	t79 = (x337<((x338+x339)&x340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = INT32_MIN;
	static int8_t x342 = INT8_MIN;
	int8_t x343 = 22;
	uint16_t x344 = UINT16_MAX;
	static volatile int32_t t80 = -7665548;

	t80 = (x341<((x342+x343)&x344));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x356 = -1;
	static volatile int32_t t81 = 1;

	t81 = (x353<((x354+x355)&x356));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x358 = -9425LL;
	int8_t x359 = INT8_MAX;
	int64_t x360 = -28496941249642481LL;
	volatile int32_t t82 = 1361;

	t82 = (x357<((x358+x359)&x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x365 = -1LL;
	uint16_t x366 = 149U;
	int64_t x367 = INT64_MIN;
	int8_t x368 = -1;
	volatile int32_t t83 = 159;

	t83 = (x365<((x366+x367)&x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x369 = UINT64_MAX;
	uint8_t x370 = UINT8_MAX;
	uint64_t x371 = 683813420502LLU;
	int16_t x372 = INT16_MIN;
	volatile int32_t t84 = 7;

	t84 = (x369<((x370+x371)&x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = INT16_MIN;
	int16_t x375 = INT16_MAX;
	volatile int16_t x376 = INT16_MIN;
	volatile int32_t t85 = 0;

	t85 = (x373<((x374+x375)&x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x378 = 3U;
	int64_t x380 = INT64_MAX;
	int32_t t86 = -20286;

	t86 = (x377<((x378+x379)&x380));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x381 = INT64_MIN;
	static int8_t x382 = INT8_MAX;
	int16_t x383 = INT16_MAX;
	static volatile int32_t x384 = -5;
	volatile int32_t t87 = 457671136;

	t87 = (x381<((x382+x383)&x384));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x386 = 3U;
	uint64_t x387 = 38431048LLU;
	int16_t x388 = INT16_MAX;
	int32_t t88 = -775371;

	t88 = (x385<((x386+x387)&x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = INT64_MAX;
	int16_t x390 = -1;
	uint8_t x391 = UINT8_MAX;
	int16_t x392 = 4195;
	static volatile int32_t t89 = 17;

	t89 = (x389<((x390+x391)&x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x393 = UINT16_MAX;
	int64_t x395 = 3675LL;
	int32_t t90 = 51040;

	t90 = (x393<((x394+x395)&x396));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x397 = UINT8_MAX;
	static volatile int8_t x398 = 58;
	static int64_t x399 = INT64_MIN;
	static uint16_t x400 = 415U;
	int32_t t91 = -57437;

	t91 = (x397<((x398+x399)&x400));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x402 = INT32_MIN;
	volatile int64_t x403 = 93537120LL;

	t92 = (x401<((x402+x403)&x404));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x405 = -1;
	volatile int64_t x407 = -1LL;

	t93 = (x405<((x406+x407)&x408));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x413 = 454;
	int64_t x414 = INT64_MIN;
	volatile uint32_t x415 = 20287338U;
	int64_t x416 = -99LL;
	volatile int32_t t94 = -127393;

	t94 = (x413<((x414+x415)&x416));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x417 = UINT32_MAX;
	static volatile int32_t x418 = INT32_MIN;
	static int8_t x420 = INT8_MIN;

	t95 = (x417<((x418+x419)&x420));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = -62;
	int16_t x422 = INT16_MIN;
	static int64_t x424 = INT64_MIN;

	t96 = (x421<((x422+x423)&x424));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x425 = INT32_MIN;
	uint64_t x426 = 3164191820477LLU;
	int64_t x428 = INT64_MIN;
	int32_t t97 = -697;

	t97 = (x425<((x426+x427)&x428));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x429 = 6185736U;
	int32_t x430 = INT32_MAX;
	uint32_t x431 = 409114189U;
	int32_t x432 = -1104673;
	volatile int32_t t98 = -52021;

	t98 = (x429<((x430+x431)&x432));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x433 = INT64_MIN;
	int16_t x434 = INT16_MIN;
	int8_t x435 = -19;
	int16_t x436 = -2284;
	volatile int32_t t99 = 1;

	t99 = (x433<((x434+x435)&x436));

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

