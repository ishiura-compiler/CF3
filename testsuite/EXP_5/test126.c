#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = 5998752U;
int16_t x12 = 1;
int16_t x20 = INT16_MIN;
int32_t t4 = -415525;
uint32_t x23 = 499417U;
int64_t x25 = 49724874776616LL;
volatile int32_t x27 = INT32_MIN;
static volatile int32_t t6 = 5;
uint16_t x29 = UINT16_MAX;
uint64_t x35 = 48LLU;
uint64_t x44 = 1882992598455LLU;
static int16_t x48 = -1;
int64_t x62 = INT64_MAX;
static uint64_t x65 = 1858LLU;
int32_t t14 = -190215;
int32_t x82 = -107;
int16_t x89 = INT16_MIN;
uint16_t x90 = 3915U;
int16_t x93 = INT16_MAX;
static int32_t x98 = 1;
static int32_t x102 = 865;
volatile int32_t t21 = 199;
volatile int32_t t22 = 55767912;
static int8_t x117 = INT8_MAX;
uint64_t x119 = 615114491077LLU;
uint64_t x122 = 41974637LLU;
uint64_t x134 = UINT64_MAX;
int32_t t27 = 46822903;
uint32_t x140 = UINT32_MAX;
int64_t x141 = INT64_MIN;
volatile int32_t t29 = 19452;
int8_t x145 = INT8_MIN;
uint8_t x148 = 9U;
int8_t x149 = -8;
volatile int32_t x152 = 7260;
int8_t x156 = INT8_MIN;
int64_t x158 = -1LL;
volatile int32_t x160 = INT32_MIN;
static int32_t t33 = 324;
int32_t t34 = 1;
static volatile int8_t x173 = INT8_MAX;
int32_t t38 = 481304;
static int32_t x186 = -1;
static int32_t x187 = INT32_MAX;
int8_t x191 = 1;
int32_t x199 = -1;
int16_t x204 = INT16_MIN;
int16_t x205 = INT16_MIN;
volatile int64_t x208 = INT64_MIN;
static int32_t x213 = INT32_MIN;
uint8_t x218 = 1U;
static int32_t x219 = -51649702;
static volatile int32_t t51 = -331462520;
int64_t x242 = -1LL;
int8_t x257 = INT8_MAX;
int16_t x258 = -7;
int8_t x270 = INT8_MIN;
int16_t x271 = INT16_MIN;
int32_t t58 = 377900;
int8_t x273 = -7;
uint64_t x275 = UINT64_MAX;
static uint16_t x279 = 13352U;
static int32_t x280 = INT32_MIN;
static volatile int32_t t60 = 1;
volatile uint16_t x284 = 16U;
static int16_t x290 = INT16_MIN;
uint16_t x302 = 2183U;
int32_t t66 = 7540947;
volatile uint32_t x309 = 254U;
int32_t x310 = INT32_MIN;
uint16_t x318 = 3U;
volatile uint64_t x320 = 4944950612882134LLU;
uint8_t x331 = 2U;
volatile int16_t x335 = 0;
int32_t x336 = INT32_MIN;
static int32_t x347 = -2311;
volatile int32_t t75 = 22;
uint32_t x361 = UINT32_MAX;
int16_t x363 = -1;
static uint64_t x369 = 542896203589426LLU;
int8_t x378 = INT8_MIN;
int16_t x379 = 4;
int32_t x395 = INT32_MIN;
uint8_t x399 = 120U;
int32_t x400 = INT32_MIN;
int16_t x402 = -1;
uint8_t x404 = 4U;
uint8_t x413 = 7U;
uint16_t x414 = UINT16_MAX;
int32_t t89 = 5266264;
int32_t t90 = -57;
int8_t x426 = INT8_MIN;
int64_t x429 = -1LL;
volatile int32_t t94 = -235862;
static int32_t x441 = 484261151;
uint64_t x448 = 117317036485724543LLU;
static volatile int32_t t97 = 48157735;


void f0(void) {
	volatile int64_t x2 = 14475LL;
	int32_t x3 = INT32_MIN;
	static int32_t x4 = -1;
	int32_t t0 = -62516;

	t0 = (x1<((x2+x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int16_t x6 = -1;
	int8_t x7 = -1;
	int64_t x8 = INT64_MIN;
	int32_t t1 = -66231982;

	t1 = (x5<((x6+x7)<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 4354U;
	int16_t x10 = 1;
	int32_t x11 = -6722;
	static volatile int32_t t2 = 147165;

	t2 = (x9<((x10+x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	int64_t x14 = -1LL;
	static uint8_t x15 = UINT8_MAX;
	uint8_t x16 = 7U;
	int32_t t3 = 1;

	t3 = (x13<((x14+x15)<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 3U;
	uint8_t x18 = UINT8_MAX;
	uint32_t x19 = 4166833U;

	t4 = (x17<((x18+x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 36982685793LLU;
	uint8_t x22 = UINT8_MAX;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -1066572560;

	t5 = (x21<((x22+x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 59LLU;
	static volatile int8_t x28 = INT8_MIN;

	t6 = (x25<((x26+x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x30 = 635436935U;
	uint8_t x31 = 5U;
	uint8_t x32 = 1U;
	volatile int32_t t7 = -25;

	t7 = (x29<((x30+x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 8248U;
	uint8_t x34 = 28U;
	int64_t x36 = 4754086530677LL;
	volatile int32_t t8 = -3070;

	t8 = (x33<((x34+x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x41 = INT64_MIN;
	int16_t x42 = INT16_MIN;
	uint64_t x43 = 5893160LLU;
	volatile int32_t t9 = -63685;

	t9 = (x41<((x42+x43)<=x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = -1;
	int16_t x46 = -2519;
	int8_t x47 = INT8_MIN;
	int32_t t10 = 10;

	t10 = (x45<((x46+x47)<=x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = INT64_MAX;
	uint64_t x63 = 338LLU;
	int64_t x64 = -572334423671344602LL;
	int32_t t11 = 20489386;

	t11 = (x61<((x62+x63)<=x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x66 = 666805310239271LLU;
	volatile int8_t x67 = 3;
	static volatile int32_t x68 = -4229;
	volatile int32_t t12 = 0;

	t12 = (x65<((x66+x67)<=x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = INT64_MAX;
	static int8_t x70 = INT8_MIN;
	volatile uint32_t x71 = 423U;
	volatile int64_t x72 = INT64_MIN;
	volatile int32_t t13 = 4032815;

	t13 = (x69<((x70+x71)<=x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = -269180177583761321LL;
	static int32_t x74 = -1;
	int32_t x75 = -1;
	static volatile uint64_t x76 = 7867934776243459762LLU;

	t14 = (x73<((x74+x75)<=x76));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = INT32_MAX;
	int32_t x83 = INT32_MAX;
	uint32_t x84 = UINT32_MAX;
	volatile int32_t t15 = 314;

	t15 = (x81<((x82+x83)<=x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x85 = UINT64_MAX;
	int16_t x86 = INT16_MAX;
	volatile int8_t x87 = INT8_MAX;
	static volatile int32_t x88 = INT32_MAX;
	static volatile int32_t t16 = -432905;

	t16 = (x85<((x86+x87)<=x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x91 = 3469718013LL;
	int64_t x92 = INT64_MIN;
	int32_t t17 = 763219175;

	t17 = (x89<((x90+x91)<=x92));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x94 = -1LL;
	int32_t x95 = INT32_MIN;
	uint64_t x96 = UINT64_MAX;
	volatile int32_t t18 = -2;

	t18 = (x93<((x94+x95)<=x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x97 = INT32_MAX;
	static uint8_t x99 = 7U;
	uint8_t x100 = 2U;
	volatile int32_t t19 = 688628676;

	t19 = (x97<((x98+x99)<=x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x101 = 49U;
	int32_t x103 = INT32_MIN;
	static int32_t x104 = -100;
	static volatile int32_t t20 = 887317;

	t20 = (x101<((x102+x103)<=x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = INT64_MIN;
	int64_t x106 = -1LL;
	uint64_t x107 = UINT64_MAX;
	static volatile uint16_t x108 = 11U;

	t21 = (x105<((x106+x107)<=x108));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x109 = INT64_MAX;
	uint32_t x110 = 863548520U;
	volatile int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MIN;

	t22 = (x109<((x110+x111)<=x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = 40LL;
	int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MAX;
	uint8_t x116 = 3U;
	static volatile int32_t t23 = 4023292;

	t23 = (x113<((x114+x115)<=x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x118 = INT32_MIN;
	static int64_t x120 = INT64_MAX;
	int32_t t24 = 1;

	t24 = (x117<((x118+x119)<=x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x121 = 3680LLU;
	int8_t x123 = INT8_MAX;
	int64_t x124 = INT64_MIN;
	volatile int32_t t25 = -22088027;

	t25 = (x121<((x122+x123)<=x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = INT8_MAX;
	uint64_t x130 = UINT64_MAX;
	int32_t x131 = 1326510;
	int8_t x132 = -1;
	volatile int32_t t26 = 26;

	t26 = (x129<((x130+x131)<=x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = INT8_MIN;
	volatile uint16_t x135 = 16841U;
	int64_t x136 = INT64_MIN;

	t27 = (x133<((x134+x135)<=x136));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x137 = INT64_MIN;
	int64_t x138 = INT64_MIN;
	volatile int16_t x139 = 2173;
	int32_t t28 = 475518;

	t28 = (x137<((x138+x139)<=x140));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x142 = 891U;
	uint16_t x143 = UINT16_MAX;
	int64_t x144 = 406632948LL;

	t29 = (x141<((x142+x143)<=x144));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x146 = 384169778891573LLU;
	int32_t x147 = INT32_MIN;
	static int32_t t30 = 11686;

	t30 = (x145<((x146+x147)<=x148));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x150 = -4390963541262035263LL;
	volatile int8_t x151 = INT8_MIN;
	volatile int32_t t31 = -24;

	t31 = (x149<((x150+x151)<=x152));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = INT16_MIN;
	int16_t x154 = 2564;
	static int32_t x155 = -29184616;
	volatile int32_t t32 = -31327850;

	t32 = (x153<((x154+x155)<=x156));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MIN;
	int16_t x159 = 3;

	t33 = (x157<((x158+x159)<=x160));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x161 = 58967059345663808LL;
	int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MAX;
	int64_t x164 = 1LL;

	t34 = (x161<((x162+x163)<=x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = INT32_MIN;
	static int8_t x166 = 0;
	int64_t x167 = INT64_MAX;
	static uint8_t x168 = UINT8_MAX;
	static volatile int32_t t35 = 82511932;

	t35 = (x165<((x166+x167)<=x168));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = INT8_MIN;
	uint64_t x170 = 109LLU;
	int32_t x171 = INT32_MAX;
	int64_t x172 = INT64_MIN;
	int32_t t36 = -1;

	t36 = (x169<((x170+x171)<=x172));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x174 = UINT64_MAX;
	static int8_t x175 = INT8_MIN;
	static int16_t x176 = INT16_MIN;
	volatile int32_t t37 = 7;

	t37 = (x173<((x174+x175)<=x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = INT64_MAX;
	uint64_t x182 = 189802085LLU;
	int64_t x183 = 1641707905348877580LL;
	int32_t x184 = INT32_MAX;

	t38 = (x181<((x182+x183)<=x184));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = INT8_MIN;
	int32_t x188 = -226157;
	static int32_t t39 = 30618;

	t39 = (x185<((x186+x187)<=x188));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = 1675;
	int64_t x190 = -10660041747LL;
	volatile int16_t x192 = 287;
	volatile int32_t t40 = 14045;

	t40 = (x189<((x190+x191)<=x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x193 = 370LLU;
	int16_t x194 = -125;
	uint8_t x195 = UINT8_MAX;
	int32_t x196 = INT32_MIN;
	static int32_t t41 = -227713;

	t41 = (x193<((x194+x195)<=x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x197 = 149U;
	static volatile int8_t x198 = INT8_MAX;
	int16_t x200 = INT16_MIN;
	volatile int32_t t42 = 106031;

	t42 = (x197<((x198+x199)<=x200));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = INT32_MAX;
	int32_t x202 = -1;
	uint16_t x203 = UINT16_MAX;
	static volatile int32_t t43 = 111643;

	t43 = (x201<((x202+x203)<=x204));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x206 = 1U;
	volatile int16_t x207 = -1;
	int32_t t44 = -5174;

	t44 = (x205<((x206+x207)<=x208));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x209 = UINT32_MAX;
	static int8_t x210 = -27;
	volatile int8_t x211 = -1;
	int32_t x212 = INT32_MIN;
	static int32_t t45 = 721;

	t45 = (x209<((x210+x211)<=x212));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x214 = UINT8_MAX;
	volatile int16_t x215 = 16;
	uint8_t x216 = 0U;
	volatile int32_t t46 = -12;

	t46 = (x213<((x214+x215)<=x216));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x217 = INT8_MIN;
	uint64_t x220 = UINT64_MAX;
	static volatile int32_t t47 = 0;

	t47 = (x217<((x218+x219)<=x220));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = -10234;
	volatile int8_t x222 = INT8_MIN;
	volatile uint64_t x223 = UINT64_MAX;
	volatile uint8_t x224 = UINT8_MAX;
	volatile int32_t t48 = -6646;

	t48 = (x221<((x222+x223)<=x224));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x225 = INT8_MAX;
	uint64_t x226 = 96846304728LLU;
	volatile int16_t x227 = -1;
	uint64_t x228 = 1LLU;
	volatile int32_t t49 = 93;

	t49 = (x225<((x226+x227)<=x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x229 = -1;
	volatile int64_t x230 = INT64_MAX;
	volatile int32_t x231 = -502693204;
	volatile uint32_t x232 = 1U;
	int32_t t50 = -101;

	t50 = (x229<((x230+x231)<=x232));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x233 = UINT8_MAX;
	volatile int16_t x234 = INT16_MIN;
	int32_t x235 = 1830;
	static int16_t x236 = INT16_MIN;

	t51 = (x233<((x234+x235)<=x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x241 = 61U;
	uint8_t x243 = UINT8_MAX;
	volatile int32_t x244 = INT32_MAX;
	volatile int32_t t52 = 4437038;

	t52 = (x241<((x242+x243)<=x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x245 = 27;
	int32_t x246 = INT32_MIN;
	static int8_t x247 = 0;
	uint16_t x248 = 3395U;
	static volatile int32_t t53 = 4;

	t53 = (x245<((x246+x247)<=x248));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x253 = -11;
	volatile uint64_t x254 = 11033624103961829LLU;
	volatile int32_t x255 = -1;
	volatile uint8_t x256 = 122U;
	static int32_t t54 = 127;

	t54 = (x253<((x254+x255)<=x256));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x259 = 7645U;
	int64_t x260 = INT64_MIN;
	static volatile int32_t t55 = 143;

	t55 = (x257<((x258+x259)<=x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x261 = 142987U;
	int32_t x262 = -1;
	int8_t x263 = 0;
	uint64_t x264 = 1491453LLU;
	int32_t t56 = 210545;

	t56 = (x261<((x262+x263)<=x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = INT8_MAX;
	int64_t x266 = 262742017LL;
	int64_t x267 = -153264246840LL;
	uint8_t x268 = 24U;
	int32_t t57 = -958971706;

	t57 = (x265<((x266+x267)<=x268));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = 3693853977LL;
	static int32_t x272 = -1;

	t58 = (x269<((x270+x271)<=x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x274 = INT64_MIN;
	uint64_t x276 = 338940862LLU;
	int32_t t59 = -1641;

	t59 = (x273<((x274+x275)<=x276));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x277 = 45U;
	static uint64_t x278 = 15794712LLU;

	t60 = (x277<((x278+x279)<=x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x281 = -1LL;
	uint64_t x282 = 1990LLU;
	int64_t x283 = -1LL;
	int32_t t61 = -43;

	t61 = (x281<((x282+x283)<=x284));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = -167956673100080LL;
	static volatile uint16_t x291 = 3789U;
	volatile int64_t x292 = INT64_MIN;
	int32_t t62 = -315546811;

	t62 = (x289<((x290+x291)<=x292));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x293 = UINT64_MAX;
	int64_t x294 = INT64_MIN;
	static int8_t x295 = INT8_MAX;
	int16_t x296 = INT16_MIN;
	volatile int32_t t63 = -1704567;

	t63 = (x293<((x294+x295)<=x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = INT16_MIN;
	uint8_t x298 = UINT8_MAX;
	volatile int8_t x299 = INT8_MIN;
	uint64_t x300 = 171311547950092754LLU;
	int32_t t64 = 0;

	t64 = (x297<((x298+x299)<=x300));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x301 = INT8_MAX;
	int64_t x303 = 1959994LL;
	static int32_t x304 = INT32_MIN;
	volatile int32_t t65 = -50263;

	t65 = (x301<((x302+x303)<=x304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x305 = 98530033359LLU;
	int32_t x306 = 1;
	int32_t x307 = -1;
	int16_t x308 = -1;

	t66 = (x305<((x306+x307)<=x308));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x311 = UINT16_MAX;
	uint32_t x312 = 1721088840U;
	int32_t t67 = -1;

	t67 = (x309<((x310+x311)<=x312));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x317 = UINT64_MAX;
	static int64_t x319 = INT64_MIN;
	volatile int32_t t68 = -1882;

	t68 = (x317<((x318+x319)<=x320));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x321 = UINT16_MAX;
	int16_t x322 = INT16_MAX;
	static int8_t x323 = INT8_MIN;
	int64_t x324 = -1LL;
	volatile int32_t t69 = 229641;

	t69 = (x321<((x322+x323)<=x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x325 = 1U;
	static int16_t x326 = -1;
	static int8_t x327 = INT8_MAX;
	volatile int64_t x328 = -1LL;
	volatile int32_t t70 = -98;

	t70 = (x325<((x326+x327)<=x328));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x329 = -46LL;
	int8_t x330 = INT8_MIN;
	static uint32_t x332 = 0U;
	int32_t t71 = 4;

	t71 = (x329<((x330+x331)<=x332));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x333 = 7681U;
	static uint8_t x334 = 15U;
	static int32_t t72 = -1070502423;

	t72 = (x333<((x334+x335)<=x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x337 = 2102U;
	uint64_t x338 = UINT64_MAX;
	static int16_t x339 = -2566;
	int64_t x340 = -1039236335823LL;
	volatile int32_t t73 = 55654;

	t73 = (x337<((x338+x339)<=x340));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x345 = INT16_MIN;
	uint64_t x346 = UINT64_MAX;
	uint64_t x348 = 391548924130585LLU;
	volatile int32_t t74 = -8;

	t74 = (x345<((x346+x347)<=x348));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x349 = 18U;
	int32_t x350 = -1;
	volatile uint16_t x351 = 78U;
	static int32_t x352 = INT32_MAX;

	t75 = (x349<((x350+x351)<=x352));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = -1;
	int8_t x354 = 61;
	int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MAX;
	volatile int32_t t76 = 59393552;

	t76 = (x353<((x354+x355)<=x356));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x357 = 18LLU;
	uint8_t x358 = 14U;
	int16_t x359 = INT16_MAX;
	volatile uint64_t x360 = 340643010046900LLU;
	volatile int32_t t77 = -58147073;

	t77 = (x357<((x358+x359)<=x360));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x362 = INT32_MAX;
	static volatile uint16_t x364 = 29U;
	volatile int32_t t78 = -79;

	t78 = (x361<((x362+x363)<=x364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x365 = 1U;
	uint8_t x366 = 72U;
	int8_t x367 = -1;
	volatile uint64_t x368 = 97242670597LLU;
	static volatile int32_t t79 = -4;

	t79 = (x365<((x366+x367)<=x368));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x370 = 33;
	uint8_t x371 = 7U;
	static int32_t x372 = -1461703;
	static volatile int32_t t80 = -1681;

	t80 = (x369<((x370+x371)<=x372));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x377 = 3;
	int16_t x380 = INT16_MAX;
	int32_t t81 = -39;

	t81 = (x377<((x378+x379)<=x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x381 = INT8_MIN;
	static uint64_t x382 = 221229163814LLU;
	int32_t x383 = -4569;
	uint16_t x384 = UINT16_MAX;
	int32_t t82 = -4;

	t82 = (x381<((x382+x383)<=x384));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x393 = UINT16_MAX;
	uint8_t x394 = 0U;
	volatile int32_t x396 = INT32_MIN;
	int32_t t83 = -1919542;

	t83 = (x393<((x394+x395)<=x396));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x397 = INT16_MAX;
	static int16_t x398 = -1;
	static int32_t t84 = -9;

	t84 = (x397<((x398+x399)<=x400));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x401 = INT16_MIN;
	static uint16_t x403 = 27U;
	int32_t t85 = 2212280;

	t85 = (x401<((x402+x403)<=x404));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x405 = INT32_MIN;
	uint32_t x406 = 113944U;
	static int16_t x407 = INT16_MIN;
	static int64_t x408 = 375252293LL;
	int32_t t86 = 85890;

	t86 = (x405<((x406+x407)<=x408));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x409 = INT64_MIN;
	uint64_t x410 = 10583333441LLU;
	int32_t x411 = -1;
	int64_t x412 = -495LL;
	volatile int32_t t87 = 23445911;

	t87 = (x409<((x410+x411)<=x412));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x415 = -1;
	volatile int8_t x416 = INT8_MIN;
	volatile int32_t t88 = 60177708;

	t88 = (x413<((x414+x415)<=x416));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x417 = 2;
	int8_t x418 = 0;
	uint32_t x419 = 8203382U;
	int64_t x420 = -15688301326LL;

	t89 = (x417<((x418+x419)<=x420));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x421 = INT8_MIN;
	int16_t x422 = -1;
	uint32_t x423 = 6U;
	static uint32_t x424 = 10137U;

	t90 = (x421<((x422+x423)<=x424));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x425 = -1;
	static uint8_t x427 = UINT8_MAX;
	int16_t x428 = -1;
	volatile int32_t t91 = -1;

	t91 = (x425<((x426+x427)<=x428));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x430 = 39470LL;
	static uint64_t x431 = UINT64_MAX;
	int16_t x432 = INT16_MIN;
	volatile int32_t t92 = -2793;

	t92 = (x429<((x430+x431)<=x432));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x433 = UINT16_MAX;
	int8_t x434 = 19;
	uint16_t x435 = 7U;
	int16_t x436 = INT16_MIN;
	volatile int32_t t93 = -246619;

	t93 = (x433<((x434+x435)<=x436));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x437 = -2159;
	volatile uint32_t x438 = 186U;
	int32_t x439 = -1;
	uint16_t x440 = 1U;

	t94 = (x437<((x438+x439)<=x440));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x442 = -1;
	int64_t x443 = 517308090LL;
	static int64_t x444 = 2877006135239LL;
	static volatile int32_t t95 = 112125953;

	t95 = (x441<((x442+x443)<=x444));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x445 = 143286U;
	int8_t x446 = INT8_MIN;
	int8_t x447 = -1;
	int32_t t96 = -192708137;

	t96 = (x445<((x446+x447)<=x448));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x453 = -1;
	uint32_t x454 = UINT32_MAX;
	int8_t x455 = INT8_MIN;
	int16_t x456 = -1;

	t97 = (x453<((x454+x455)<=x456));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x457 = 4;
	uint8_t x458 = 30U;
	static volatile uint8_t x459 = 17U;
	int8_t x460 = INT8_MIN;
	int32_t t98 = 7925151;

	t98 = (x457<((x458+x459)<=x460));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x461 = INT16_MIN;
	int32_t x462 = -408;
	volatile uint32_t x463 = UINT32_MAX;
	int8_t x464 = 1;
	volatile int32_t t99 = 5343;

	t99 = (x461<((x462+x463)<=x464));

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

