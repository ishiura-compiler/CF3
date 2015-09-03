#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = UINT16_MAX;
static volatile int16_t x4 = INT16_MIN;
int16_t x5 = -1;
int32_t x9 = INT32_MAX;
int8_t x10 = -1;
static int8_t x12 = -4;
volatile int32_t t2 = -466376;
int32_t x16 = INT32_MAX;
uint32_t x17 = UINT32_MAX;
volatile int32_t t4 = 868;
uint16_t x23 = 16281U;
int32_t x29 = 127386;
int64_t x35 = INT64_MIN;
uint64_t x36 = 373083289303LLU;
int8_t x41 = -1;
static int32_t x42 = 10;
volatile int32_t t9 = 127;
volatile int32_t x49 = INT32_MIN;
int32_t x51 = -1;
volatile int32_t t11 = -1113;
static int16_t x58 = INT16_MAX;
uint8_t x60 = UINT8_MAX;
volatile uint16_t x62 = 176U;
uint32_t x67 = 3U;
int8_t x80 = -1;
uint64_t x82 = UINT64_MAX;
static int8_t x92 = INT8_MAX;
uint8_t x101 = UINT8_MAX;
volatile uint8_t x103 = 36U;
static int32_t t24 = -349057345;
uint32_t x106 = 684U;
int8_t x112 = INT8_MAX;
int32_t t26 = 109593110;
int32_t x114 = INT32_MIN;
int8_t x117 = -1;
uint32_t x122 = UINT32_MAX;
int16_t x127 = INT16_MIN;
static int32_t x128 = -1;
uint8_t x129 = 1U;
static int8_t x139 = INT8_MIN;
static uint64_t x145 = UINT64_MAX;
uint16_t x146 = 1952U;
int32_t t34 = 4958;
uint16_t x149 = 3165U;
static int8_t x152 = INT8_MAX;
static volatile int32_t t35 = -1021;
uint16_t x155 = 14012U;
uint64_t x165 = UINT64_MAX;
static uint16_t x166 = UINT16_MAX;
int16_t x174 = -361;
int32_t t41 = 0;
static volatile int16_t x198 = INT16_MIN;
int8_t x204 = -40;
static uint32_t x209 = 241471800U;
uint16_t x210 = UINT16_MAX;
int8_t x212 = INT8_MIN;
int64_t x216 = 384306975659645986LL;
int64_t x217 = -314374816546724LL;
static int8_t x222 = INT8_MAX;
volatile int32_t t51 = 153;
int8_t x235 = INT8_MIN;
volatile uint32_t x244 = UINT32_MAX;
volatile uint8_t x250 = 19U;
static uint16_t x251 = UINT16_MAX;
int16_t x256 = INT16_MAX;
int16_t x258 = INT16_MIN;
uint32_t x260 = 54U;
volatile uint16_t x264 = 2255U;
uint16_t x265 = 0U;
uint8_t x270 = 1U;
uint16_t x277 = 0U;
int16_t x285 = 15;
int16_t x287 = INT16_MIN;
int8_t x289 = -1;
int8_t x295 = INT8_MAX;
int32_t t64 = 2516;
static volatile int32_t t66 = 8;
volatile uint8_t x321 = 0U;
static uint16_t x329 = UINT16_MAX;
static volatile uint16_t x332 = UINT16_MAX;
static volatile uint32_t x339 = UINT32_MAX;
static int64_t x341 = INT64_MAX;
static volatile int32_t t71 = -10766;
int16_t x355 = -1;
static volatile int32_t t72 = -653580;
int32_t x358 = INT32_MAX;
int32_t x359 = INT32_MIN;
int8_t x363 = -1;
volatile int32_t t74 = -13651;
uint64_t x377 = UINT64_MAX;
int32_t t77 = 195073936;
static int64_t x390 = -1LL;
int32_t x391 = -24;
volatile int32_t x393 = 1274;
int8_t x398 = INT8_MIN;
int32_t t82 = -736;
int8_t x415 = 4;
int64_t x418 = -990LL;
volatile int32_t t86 = -596;
static int8_t x423 = -1;
int32_t x438 = INT32_MIN;
volatile int64_t x443 = -1LL;
volatile int32_t t91 = 62;
uint64_t x446 = 3LLU;
int64_t x457 = INT64_MIN;
uint64_t x462 = 163543187018240LLU;
volatile int32_t x466 = INT32_MAX;
static uint64_t x469 = 3681902426890LLU;


void f0(void) {
	int32_t x2 = -1;
	int16_t x3 = -99;
	int32_t t0 = -4094378;

	t0 = ((x1-(x2+x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 28;
	static int64_t x7 = -1LL;
	volatile int16_t x8 = INT16_MIN;
	int32_t t1 = 106748244;

	t1 = ((x5-(x6+x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x11 = 4479966U;

	t2 = ((x9-(x10+x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	uint64_t x14 = UINT64_MAX;
	int32_t x15 = -961922995;
	static int32_t t3 = -1;

	t3 = ((x13-(x14+x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -30;
	uint64_t x19 = 858453LLU;
	int32_t x20 = -1;

	t4 = ((x17-(x18+x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -30300648829LL;
	int8_t x22 = 1;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 103;

	t5 = ((x21-(x22+x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = 260;
	int64_t x26 = -9324829LL;
	int32_t x27 = INT32_MIN;
	int16_t x28 = -2625;
	int32_t t6 = -571;

	t6 = ((x25-(x26+x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	int16_t x31 = 0;
	int8_t x32 = INT8_MIN;
	int32_t t7 = 57929;

	t7 = ((x29-(x30+x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	uint16_t x34 = UINT16_MAX;
	volatile int32_t t8 = 427999852;

	t8 = ((x33-(x34+x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x43 = UINT64_MAX;
	uint16_t x44 = 9010U;

	t9 = ((x41-(x42+x43))<x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 47180LLU;
	int16_t x46 = -1;
	volatile int16_t x47 = INT16_MIN;
	static int32_t x48 = 8106794;
	volatile int32_t t10 = -7446;

	t10 = ((x45-(x46+x47))<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x50 = INT16_MIN;
	volatile int32_t x52 = INT32_MIN;

	t11 = ((x49-(x50+x51))<x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = UINT8_MAX;
	int8_t x54 = 59;
	uint32_t x55 = 1U;
	volatile uint8_t x56 = 1U;
	volatile int32_t t12 = -36266;

	t12 = ((x53-(x54+x55))<x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -1LL;
	uint64_t x59 = 14673LLU;
	int32_t t13 = -20804499;

	t13 = ((x57-(x58+x59))<x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 18U;
	volatile int16_t x63 = INT16_MIN;
	volatile uint64_t x64 = 1854826223284573LLU;
	static volatile int32_t t14 = 22144;

	t14 = ((x61-(x62+x63))<x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = UINT64_MAX;
	uint32_t x66 = UINT32_MAX;
	int64_t x68 = 219LL;
	int32_t t15 = -982817763;

	t15 = ((x65-(x66+x67))<x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	static volatile int32_t x70 = INT32_MIN;
	volatile uint32_t x71 = 2U;
	static int32_t x72 = INT32_MAX;
	int32_t t16 = 3352;

	t16 = ((x69-(x70+x71))<x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x73 = -120LL;
	volatile uint64_t x74 = 3LLU;
	int8_t x75 = INT8_MAX;
	volatile int32_t x76 = INT32_MIN;
	volatile int32_t t17 = -38751238;

	t17 = ((x73-(x74+x75))<x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -1;
	int64_t x78 = INT64_MIN;
	volatile int8_t x79 = INT8_MAX;
	volatile int32_t t18 = 551;

	t18 = ((x77-(x78+x79))<x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = INT16_MIN;
	uint64_t x83 = UINT64_MAX;
	static int8_t x84 = -1;
	volatile int32_t t19 = 1571309;

	t19 = ((x81-(x82+x83))<x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = 0;
	int8_t x86 = -15;
	static int64_t x87 = 1698149983636996893LL;
	uint64_t x88 = 15079LLU;
	int32_t t20 = 2311383;

	t20 = ((x85-(x86+x87))<x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 73U;
	volatile uint8_t x90 = 28U;
	int16_t x91 = INT16_MIN;
	int32_t t21 = 30;

	t21 = ((x89-(x90+x91))<x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x93 = 4U;
	int16_t x94 = INT16_MIN;
	volatile uint32_t x95 = 150U;
	volatile int64_t x96 = INT64_MAX;
	volatile int32_t t22 = 59594300;

	t22 = ((x93-(x94+x95))<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = 37;
	int8_t x98 = INT8_MIN;
	static uint16_t x99 = UINT16_MAX;
	static int8_t x100 = INT8_MIN;
	static volatile int32_t t23 = -38;

	t23 = ((x97-(x98+x99))<x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x102 = 79U;
	int64_t x104 = -1LL;

	t24 = ((x101-(x102+x103))<x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	static volatile int32_t x107 = INT32_MAX;
	uint64_t x108 = UINT64_MAX;
	int32_t t25 = 348470;

	t25 = ((x105-(x106+x107))<x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = UINT16_MAX;
	volatile uint64_t x110 = UINT64_MAX;
	volatile uint64_t x111 = UINT64_MAX;

	t26 = ((x109-(x110+x111))<x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = UINT32_MAX;
	int64_t x115 = 1115026649409710LL;
	int8_t x116 = -1;
	int32_t t27 = -153989753;

	t27 = ((x113-(x114+x115))<x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x118 = -1;
	uint16_t x119 = 421U;
	int64_t x120 = 18166099LL;
	volatile int32_t t28 = 401488;

	t28 = ((x117-(x118+x119))<x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x121 = INT32_MAX;
	uint32_t x123 = 1510U;
	uint64_t x124 = 0LLU;
	volatile int32_t t29 = 4701;

	t29 = ((x121-(x122+x123))<x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -1;
	volatile int16_t x126 = INT16_MAX;
	volatile int32_t t30 = -1;

	t30 = ((x125-(x126+x127))<x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x130 = -1;
	int32_t x131 = INT32_MAX;
	int32_t x132 = INT32_MAX;
	volatile int32_t t31 = 1825;

	t31 = ((x129-(x130+x131))<x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -1;
	volatile uint64_t x138 = 85271697923811574LLU;
	int64_t x140 = INT64_MAX;
	static volatile int32_t t32 = 317;

	t32 = ((x137-(x138+x139))<x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -1;
	uint8_t x142 = UINT8_MAX;
	uint8_t x143 = 0U;
	int16_t x144 = 1;
	volatile int32_t t33 = -141885962;

	t33 = ((x141-(x142+x143))<x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x147 = INT8_MIN;
	static int8_t x148 = INT8_MIN;

	t34 = ((x145-(x146+x147))<x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x150 = -1;
	int16_t x151 = 10989;

	t35 = ((x149-(x150+x151))<x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = UINT64_MAX;
	uint64_t x154 = 0LLU;
	int8_t x156 = INT8_MIN;
	volatile int32_t t36 = 463;

	t36 = ((x153-(x154+x155))<x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x161 = 58U;
	static int16_t x162 = 55;
	uint16_t x163 = 339U;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t37 = -12296;

	t37 = ((x161-(x162+x163))<x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x167 = INT32_MIN;
	uint64_t x168 = 7443175683512126LLU;
	volatile int32_t t38 = -1;

	t38 = ((x165-(x166+x167))<x168);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x173 = -1;
	volatile uint32_t x175 = 85177844U;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t39 = 13;

	t39 = ((x173-(x174+x175))<x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -1;
	uint16_t x178 = 73U;
	int8_t x179 = -1;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t40 = -473163;

	t40 = ((x177-(x178+x179))<x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = UINT16_MAX;
	uint32_t x182 = UINT32_MAX;
	int64_t x183 = INT64_MIN;
	uint16_t x184 = 0U;

	t41 = ((x181-(x182+x183))<x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x185 = 1U;
	volatile int32_t x186 = 48703;
	int16_t x187 = -1;
	int32_t x188 = INT32_MAX;
	volatile int32_t t42 = -9293;

	t42 = ((x185-(x186+x187))<x188);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = 25;
	static uint64_t x190 = UINT64_MAX;
	int32_t x191 = 75371357;
	uint8_t x192 = 10U;
	volatile int32_t t43 = -81;

	t43 = ((x189-(x190+x191))<x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MIN;
	uint16_t x194 = UINT16_MAX;
	int16_t x195 = INT16_MIN;
	int16_t x196 = INT16_MIN;
	static int32_t t44 = 7114;

	t44 = ((x193-(x194+x195))<x196);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = UINT32_MAX;
	static uint8_t x199 = 14U;
	static int32_t x200 = INT32_MIN;
	int32_t t45 = -46;

	t45 = ((x197-(x198+x199))<x200);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x201 = 2U;
	int64_t x202 = INT64_MIN;
	volatile uint16_t x203 = 47U;
	static int32_t t46 = -530064565;

	t46 = ((x201-(x202+x203))<x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = 4916;
	int32_t x206 = INT32_MIN;
	static int32_t x207 = INT32_MAX;
	uint64_t x208 = 389157079134LLU;
	volatile int32_t t47 = 290622;

	t47 = ((x205-(x206+x207))<x208);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x211 = -1;
	static volatile int32_t t48 = 1;

	t48 = ((x209-(x210+x211))<x212);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x213 = INT16_MIN;
	uint64_t x214 = 78LLU;
	int8_t x215 = INT8_MIN;
	int32_t t49 = -808621872;

	t49 = ((x213-(x214+x215))<x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x218 = 3468LLU;
	static int64_t x219 = 65129036227870205LL;
	int16_t x220 = -92;
	int32_t t50 = -2924;

	t50 = ((x217-(x218+x219))<x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = INT16_MIN;
	int16_t x223 = INT16_MAX;
	uint8_t x224 = 113U;

	t51 = ((x221-(x222+x223))<x224);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = -1;
	static uint32_t x234 = 2U;
	static int8_t x236 = INT8_MIN;
	int32_t t52 = -97;

	t52 = ((x233-(x234+x235))<x236);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x241 = 8;
	static uint32_t x242 = 140608U;
	static volatile uint16_t x243 = UINT16_MAX;
	volatile int32_t t53 = 682;

	t53 = ((x241-(x242+x243))<x244);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x249 = -1LL;
	uint8_t x252 = 2U;
	int32_t t54 = -213347692;

	t54 = ((x249-(x250+x251))<x252);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x253 = 0U;
	uint32_t x254 = UINT32_MAX;
	uint64_t x255 = UINT64_MAX;
	int32_t t55 = 176941;

	t55 = ((x253-(x254+x255))<x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x257 = -1;
	static volatile int16_t x259 = INT16_MIN;
	volatile int32_t t56 = 301373775;

	t56 = ((x257-(x258+x259))<x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x261 = 7U;
	volatile int8_t x262 = 46;
	volatile int16_t x263 = INT16_MIN;
	volatile int32_t t57 = -43254049;

	t57 = ((x261-(x262+x263))<x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x266 = UINT16_MAX;
	uint8_t x267 = 0U;
	volatile int16_t x268 = -1;
	int32_t t58 = -6;

	t58 = ((x265-(x266+x267))<x268);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x269 = INT32_MIN;
	uint32_t x271 = UINT32_MAX;
	int8_t x272 = 0;
	static volatile int32_t t59 = 60138818;

	t59 = ((x269-(x270+x271))<x272);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x278 = -1LL;
	int8_t x279 = INT8_MIN;
	int16_t x280 = INT16_MAX;
	volatile int32_t t60 = 547005;

	t60 = ((x277-(x278+x279))<x280);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x286 = UINT8_MAX;
	static int32_t x288 = INT32_MIN;
	int32_t t61 = -1295;

	t61 = ((x285-(x286+x287))<x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x290 = UINT8_MAX;
	int16_t x291 = 62;
	int64_t x292 = INT64_MIN;
	volatile int32_t t62 = 19606;

	t62 = ((x289-(x290+x291))<x292);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = -1LL;
	int64_t x294 = INT64_MIN;
	volatile uint8_t x296 = 4U;
	static volatile int32_t t63 = -101;

	t63 = ((x293-(x294+x295))<x296);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x297 = INT16_MIN;
	volatile uint8_t x298 = 1U;
	static int8_t x299 = -1;
	uint8_t x300 = 2U;

	t64 = ((x297-(x298+x299))<x300);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x301 = UINT8_MAX;
	uint16_t x302 = 2634U;
	int16_t x303 = -1;
	int32_t x304 = INT32_MIN;
	int32_t t65 = -31882869;

	t65 = ((x301-(x302+x303))<x304);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x313 = 5U;
	int64_t x314 = -1LL;
	int32_t x315 = -6402970;
	volatile int8_t x316 = INT8_MIN;

	t66 = ((x313-(x314+x315))<x316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x317 = INT32_MIN;
	volatile uint32_t x318 = UINT32_MAX;
	int64_t x319 = -1LL;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t67 = 323434;

	t67 = ((x317-(x318+x319))<x320);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x322 = -1;
	int32_t x323 = -12035353;
	static int8_t x324 = -21;
	volatile int32_t t68 = -127304;

	t68 = ((x321-(x322+x323))<x324);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x330 = 5LL;
	uint64_t x331 = UINT64_MAX;
	int32_t t69 = -2011916;

	t69 = ((x329-(x330+x331))<x332);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x337 = -1;
	static int8_t x338 = 0;
	int16_t x340 = INT16_MAX;
	int32_t t70 = 109383;

	t70 = ((x337-(x338+x339))<x340);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x342 = 620764024254266LL;
	uint16_t x343 = UINT16_MAX;
	static int64_t x344 = 210632742LL;

	t71 = ((x341-(x342+x343))<x344);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x353 = 0U;
	static uint32_t x354 = 16537U;
	int32_t x356 = -25;

	t72 = ((x353-(x354+x355))<x356);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x357 = UINT16_MAX;
	volatile uint8_t x360 = UINT8_MAX;
	int32_t t73 = -2781890;

	t73 = ((x357-(x358+x359))<x360);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x361 = -101;
	int8_t x362 = -1;
	volatile int8_t x364 = INT8_MIN;

	t74 = ((x361-(x362+x363))<x364);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x365 = 777552092U;
	int8_t x366 = INT8_MIN;
	static uint8_t x367 = 85U;
	int32_t x368 = INT32_MAX;
	static volatile int32_t t75 = 11809014;

	t75 = ((x365-(x366+x367))<x368);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x369 = UINT16_MAX;
	uint64_t x370 = 0LLU;
	int8_t x371 = INT8_MAX;
	int32_t x372 = -525349;
	static int32_t t76 = -582;

	t76 = ((x369-(x370+x371))<x372);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x378 = 6LLU;
	volatile int32_t x379 = -1;
	volatile int16_t x380 = -1;

	t77 = ((x377-(x378+x379))<x380);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x381 = UINT32_MAX;
	int16_t x382 = INT16_MAX;
	int32_t x383 = INT32_MIN;
	int8_t x384 = -5;
	int32_t t78 = 3;

	t78 = ((x381-(x382+x383))<x384);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x385 = INT8_MIN;
	uint64_t x386 = UINT64_MAX;
	int8_t x387 = -1;
	int8_t x388 = INT8_MAX;
	volatile int32_t t79 = -19629;

	t79 = ((x385-(x386+x387))<x388);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x389 = 693U;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t80 = 13563572;

	t80 = ((x389-(x390+x391))<x392);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x394 = 13328766670139037LLU;
	static int32_t x395 = INT32_MIN;
	int64_t x396 = -176196153LL;
	volatile int32_t t81 = -2769;

	t81 = ((x393-(x394+x395))<x396);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x397 = 0;
	volatile int16_t x399 = INT16_MIN;
	int8_t x400 = INT8_MIN;

	t82 = ((x397-(x398+x399))<x400);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x401 = 1LL;
	int32_t x402 = -1105171;
	int32_t x403 = INT32_MAX;
	int32_t x404 = INT32_MAX;
	static int32_t t83 = -7;

	t83 = ((x401-(x402+x403))<x404);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x405 = -21604;
	volatile uint32_t x406 = 3142U;
	uint32_t x407 = 138563U;
	uint64_t x408 = UINT64_MAX;
	int32_t t84 = 6620;

	t84 = ((x405-(x406+x407))<x408);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x413 = 77932U;
	int32_t x414 = INT32_MIN;
	int8_t x416 = INT8_MIN;
	int32_t t85 = -7618629;

	t85 = ((x413-(x414+x415))<x416);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x417 = INT32_MIN;
	static volatile int32_t x419 = INT32_MIN;
	int8_t x420 = -1;

	t86 = ((x417-(x418+x419))<x420);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x421 = -276047;
	int8_t x422 = INT8_MIN;
	volatile int8_t x424 = -1;
	static int32_t t87 = 868952215;

	t87 = ((x421-(x422+x423))<x424);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x425 = 20U;
	int32_t x426 = 30817817;
	static int8_t x427 = INT8_MIN;
	uint8_t x428 = UINT8_MAX;
	static volatile int32_t t88 = -8467877;

	t88 = ((x425-(x426+x427))<x428);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x429 = -1;
	int32_t x430 = 9515112;
	static volatile int32_t x431 = -1;
	volatile uint8_t x432 = 53U;
	int32_t t89 = 44104;

	t89 = ((x429-(x430+x431))<x432);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x437 = 10;
	uint8_t x439 = UINT8_MAX;
	static volatile int32_t x440 = -1;
	int32_t t90 = -713398;

	t90 = ((x437-(x438+x439))<x440);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x441 = INT8_MAX;
	int32_t x442 = -1;
	static volatile int32_t x444 = -1;

	t91 = ((x441-(x442+x443))<x444);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x445 = INT16_MIN;
	int32_t x447 = INT32_MAX;
	uint64_t x448 = 636088LLU;
	static int32_t t92 = 15400915;

	t92 = ((x445-(x446+x447))<x448);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x453 = 473146LL;
	int32_t x454 = INT32_MIN;
	uint8_t x455 = 50U;
	static volatile int64_t x456 = 6958307LL;
	volatile int32_t t93 = 0;

	t93 = ((x453-(x454+x455))<x456);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x458 = -13255;
	static int16_t x459 = INT16_MIN;
	volatile int32_t x460 = -1;
	int32_t t94 = 133339;

	t94 = ((x457-(x458+x459))<x460);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x461 = -1;
	static uint8_t x463 = 98U;
	uint32_t x464 = 0U;
	static volatile int32_t t95 = -1040151;

	t95 = ((x461-(x462+x463))<x464);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x465 = 2044219148U;
	static int32_t x467 = -1;
	volatile int64_t x468 = -552LL;
	static volatile int32_t t96 = 1;

	t96 = ((x465-(x466+x467))<x468);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x470 = INT64_MIN;
	uint16_t x471 = 15U;
	volatile int8_t x472 = -1;
	int32_t t97 = -283;

	t97 = ((x469-(x470+x471))<x472);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x473 = -1LL;
	int8_t x474 = INT8_MIN;
	int8_t x475 = -1;
	int16_t x476 = INT16_MIN;
	static int32_t t98 = 1329;

	t98 = ((x473-(x474+x475))<x476);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x477 = INT8_MAX;
	uint32_t x478 = 10224U;
	static int32_t x479 = -1;
	int8_t x480 = -5;
	volatile int32_t t99 = -7295;

	t99 = ((x477-(x478+x479))<x480);

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

