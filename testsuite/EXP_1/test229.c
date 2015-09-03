#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
volatile int64_t x2 = INT64_MIN;
uint64_t x11 = 214402789LLU;
static int16_t x17 = INT16_MIN;
int64_t x20 = -1LL;
int64_t x21 = INT64_MAX;
uint32_t x26 = UINT32_MAX;
uint16_t x31 = 1U;
static int32_t t8 = -56571;
int32_t x42 = -1;
int32_t t10 = -297027371;
uint32_t x49 = UINT32_MAX;
uint8_t x52 = 6U;
uint64_t x56 = 2615312927LLU;
uint8_t x67 = 33U;
int32_t x74 = -378004;
int64_t x80 = -1LL;
volatile int32_t t17 = -61;
int16_t x82 = 2;
int16_t x83 = INT16_MIN;
int32_t t18 = -1348481;
uint64_t x91 = UINT64_MAX;
uint8_t x92 = UINT8_MAX;
int64_t x99 = INT64_MIN;
int64_t x108 = -1LL;
int16_t x109 = 1595;
static int32_t t26 = -139226720;
int16_t x131 = 2;
int16_t x135 = -1306;
volatile int64_t x140 = 283535LL;
int32_t x141 = 25;
int32_t t31 = -8989481;
uint32_t x146 = 1U;
uint16_t x149 = 42U;
int16_t x153 = INT16_MAX;
int16_t x157 = -1;
int16_t x168 = INT16_MAX;
static int32_t t37 = -4222;
uint64_t x169 = UINT64_MAX;
volatile uint8_t x176 = 48U;
volatile int32_t t40 = 0;
volatile uint64_t x189 = 345525986647LLU;
static volatile int32_t t41 = -2155984;
static int16_t x200 = INT16_MIN;
static uint32_t x203 = 28883502U;
uint16_t x204 = UINT16_MAX;
uint64_t x206 = 1470604549512LLU;
int32_t t44 = -1938;
int16_t x215 = 992;
uint64_t x219 = 1976967447459741659LLU;
int32_t t48 = -1;
int16_t x237 = 126;
volatile uint16_t x244 = 10979U;
int32_t x248 = INT32_MIN;
volatile int64_t x249 = INT64_MAX;
static volatile int32_t t54 = -2618799;
static int64_t x256 = -387015LL;
int32_t t55 = 20274;
int16_t x258 = -1938;
uint32_t x259 = UINT32_MAX;
int16_t x265 = INT16_MIN;
volatile int16_t x273 = -1;
static uint64_t x276 = 982056771LLU;
int32_t t60 = -513375595;
int8_t x279 = 2;
volatile int32_t t61 = -430310;
int16_t x282 = INT16_MAX;
uint32_t x284 = 29U;
int16_t x298 = 1541;
int64_t x299 = INT64_MAX;
volatile uint32_t x306 = 0U;
static int16_t x311 = -5;
int8_t x318 = INT8_MIN;
int16_t x319 = INT16_MIN;
int64_t x332 = INT64_MIN;
int16_t x336 = 3;
volatile int32_t t72 = -781;
int16_t x341 = INT16_MIN;
uint8_t x343 = UINT8_MAX;
static uint32_t x350 = UINT32_MAX;
volatile int32_t x355 = INT32_MIN;
uint8_t x358 = 11U;
volatile uint64_t x360 = UINT64_MAX;
uint16_t x361 = 19U;
static int8_t x364 = INT8_MAX;
volatile int32_t t79 = 1179104;
uint32_t x373 = 7263U;
int16_t x376 = INT16_MAX;
int16_t x383 = INT16_MAX;
volatile int32_t t84 = 0;
volatile uint64_t x396 = UINT64_MAX;
int32_t x398 = INT32_MAX;
volatile int32_t t87 = -114296674;
int16_t x406 = INT16_MIN;
static int64_t x414 = INT64_MAX;
int64_t x415 = INT64_MIN;
int32_t x422 = -58101048;
uint64_t x437 = 5183490765LLU;
int32_t x439 = INT32_MAX;
volatile uint64_t x440 = 0LLU;
static uint16_t x442 = UINT16_MAX;
static int64_t x445 = 52LL;
volatile int32_t t99 = 6459;


void f0(void) {
	int32_t x3 = -1;
	static int8_t x4 = 0;
	int32_t t0 = 295457240;

	t0 = (((x1-x2)%x3)==x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	volatile int8_t x6 = 1;
	static int16_t x7 = -1;
	static int32_t x8 = -712295;
	int32_t t1 = -34;

	t1 = (((x5-x6)%x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 12594415LL;
	int16_t x10 = INT16_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 10;

	t2 = (((x9-x10)%x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint32_t x14 = UINT32_MAX;
	int16_t x15 = INT16_MAX;
	uint64_t x16 = 109826362479919572LLU;
	int32_t t3 = -12220;

	t3 = (((x13-x14)%x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = UINT64_MAX;
	int8_t x19 = 1;
	int32_t t4 = -10;

	t4 = (((x17-x18)%x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x22 = UINT64_MAX;
	static uint32_t x23 = UINT32_MAX;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = 12823120;

	t5 = (((x21-x22)%x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	static uint8_t x27 = UINT8_MAX;
	int32_t x28 = 11469018;
	volatile int32_t t6 = -152945;

	t6 = (((x25-x26)%x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	uint64_t x30 = 3926121702LLU;
	int16_t x32 = -1;
	volatile int32_t t7 = 24;

	t7 = (((x29-x30)%x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 1036282721070071753LL;
	volatile int8_t x34 = -1;
	int8_t x35 = INT8_MAX;
	uint32_t x36 = 7U;

	t8 = (((x33-x34)%x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = 40;
	int8_t x38 = INT8_MIN;
	uint8_t x39 = UINT8_MAX;
	int32_t x40 = INT32_MIN;
	int32_t t9 = -18197020;

	t9 = (((x37-x38)%x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	uint32_t x43 = UINT32_MAX;
	static int8_t x44 = INT8_MIN;

	t10 = (((x41-x42)%x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int8_t x46 = INT8_MIN;
	uint32_t x47 = 20U;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 1559946;

	t11 = (((x45-x46)%x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x50 = INT32_MIN;
	uint8_t x51 = 25U;
	volatile int32_t t12 = -159;

	t12 = (((x49-x50)%x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	volatile int16_t x54 = INT16_MIN;
	static int64_t x55 = INT64_MIN;
	static int32_t t13 = 14614528;

	t13 = (((x53-x54)%x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = 4981;
	static int16_t x62 = INT16_MIN;
	volatile int32_t x63 = -1;
	volatile int64_t x64 = INT64_MIN;
	static int32_t t14 = 97754;

	t14 = (((x61-x62)%x63)==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MAX;
	static int32_t x66 = INT32_MAX;
	int8_t x68 = INT8_MIN;
	static int32_t t15 = 98814757;

	t15 = (((x65-x66)%x67)==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1048657356761385LL;
	volatile int32_t x75 = INT32_MIN;
	static volatile int16_t x76 = INT16_MIN;
	int32_t t16 = 12897158;

	t16 = (((x73-x74)%x75)==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = INT64_MIN;
	uint64_t x78 = UINT64_MAX;
	volatile int8_t x79 = INT8_MIN;

	t17 = (((x77-x78)%x79)==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = -166;
	volatile uint32_t x84 = 3557695U;

	t18 = (((x81-x82)%x83)==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MAX;
	int32_t t19 = 84731720;

	t19 = (((x89-x90)%x91)==x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MIN;
	uint32_t x94 = 74U;
	uint16_t x95 = 16437U;
	volatile uint8_t x96 = UINT8_MAX;
	volatile int32_t t20 = -23;

	t20 = (((x93-x94)%x95)==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = UINT8_MAX;
	static int64_t x98 = 888371LL;
	int64_t x100 = INT64_MIN;
	int32_t t21 = -175378036;

	t21 = (((x97-x98)%x99)==x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = INT32_MIN;
	static volatile int16_t x102 = -1;
	uint16_t x103 = 1316U;
	int32_t x104 = INT32_MIN;
	volatile int32_t t22 = -501;

	t22 = (((x101-x102)%x103)==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -1;
	volatile int32_t x106 = INT32_MIN;
	int64_t x107 = -1LL;
	volatile int32_t t23 = 12720506;

	t23 = (((x105-x106)%x107)==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x110 = -1;
	static uint16_t x111 = UINT16_MAX;
	static int16_t x112 = -1;
	volatile int32_t t24 = 156577250;

	t24 = (((x109-x110)%x111)==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = UINT8_MAX;
	uint16_t x114 = 1U;
	static int16_t x115 = -1;
	int8_t x116 = INT8_MIN;
	int32_t t25 = -7;

	t25 = (((x113-x114)%x115)==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = -9;
	static volatile int16_t x118 = INT16_MIN;
	static int16_t x119 = INT16_MAX;
	int32_t x120 = -1;

	t26 = (((x117-x118)%x119)==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = UINT64_MAX;
	uint8_t x126 = 1U;
	int32_t x127 = -308477;
	uint64_t x128 = 29903LLU;
	volatile int32_t t27 = -4063;

	t27 = (((x125-x126)%x127)==x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x129 = 26058074U;
	static volatile uint8_t x130 = 6U;
	int8_t x132 = INT8_MAX;
	volatile int32_t t28 = 914181053;

	t28 = (((x129-x130)%x131)==x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x133 = 1U;
	int64_t x134 = -1LL;
	int8_t x136 = INT8_MIN;
	int32_t t29 = -242163;

	t29 = (((x133-x134)%x135)==x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = INT16_MIN;
	static int32_t x138 = -1;
	volatile int8_t x139 = INT8_MIN;
	static int32_t t30 = 154;

	t30 = (((x137-x138)%x139)==x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x142 = INT16_MIN;
	int32_t x143 = INT32_MIN;
	uint8_t x144 = UINT8_MAX;

	t31 = (((x141-x142)%x143)==x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = INT32_MIN;
	uint32_t x147 = 2689U;
	uint32_t x148 = 11U;
	volatile int32_t t32 = 0;

	t32 = (((x145-x146)%x147)==x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x150 = 1U;
	volatile int64_t x151 = INT64_MAX;
	static int16_t x152 = INT16_MIN;
	int32_t t33 = 50370;

	t33 = (((x149-x150)%x151)==x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x154 = UINT8_MAX;
	volatile int64_t x155 = INT64_MIN;
	volatile int64_t x156 = 118LL;
	int32_t t34 = -3;

	t34 = (((x153-x154)%x155)==x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x158 = INT8_MIN;
	int64_t x159 = INT64_MIN;
	int8_t x160 = INT8_MIN;
	int32_t t35 = 73;

	t35 = (((x157-x158)%x159)==x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x161 = 12LLU;
	static volatile int32_t x162 = 0;
	uint32_t x163 = 2896U;
	uint16_t x164 = UINT16_MAX;
	int32_t t36 = -971038617;

	t36 = (((x161-x162)%x163)==x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = -47;
	int32_t x166 = INT32_MIN;
	volatile int16_t x167 = INT16_MAX;

	t37 = (((x165-x166)%x167)==x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x170 = 3U;
	volatile int8_t x171 = 2;
	int64_t x172 = INT64_MAX;
	volatile int32_t t38 = 9578745;

	t38 = (((x169-x170)%x171)==x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x173 = 283431168214196953LLU;
	static int16_t x174 = -4006;
	int64_t x175 = -1LL;
	volatile int32_t t39 = -1;

	t39 = (((x173-x174)%x175)==x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = INT32_MIN;
	int64_t x186 = INT64_MIN;
	volatile int8_t x187 = INT8_MIN;
	int64_t x188 = INT64_MAX;

	t40 = (((x185-x186)%x187)==x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x190 = INT64_MIN;
	uint64_t x191 = 249296942754677LLU;
	static int8_t x192 = -1;

	t41 = (((x189-x190)%x191)==x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = -114868;
	static uint8_t x198 = 54U;
	volatile int32_t x199 = INT32_MAX;
	int32_t t42 = -10450;

	t42 = (((x197-x198)%x199)==x200);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x201 = 0;
	static uint64_t x202 = 97921LLU;
	volatile int32_t t43 = 92582;

	t43 = (((x201-x202)%x203)==x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x205 = 762U;
	int64_t x207 = INT64_MAX;
	static int32_t x208 = -4;

	t44 = (((x205-x206)%x207)==x208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint64_t x209 = 3455813657LLU;
	static int32_t x210 = INT32_MIN;
	uint64_t x211 = UINT64_MAX;
	uint16_t x212 = 698U;
	volatile int32_t t45 = -110991;

	t45 = (((x209-x210)%x211)==x212);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x213 = INT8_MIN;
	volatile int8_t x214 = -1;
	static int8_t x216 = -2;
	static int32_t t46 = 1495397;

	t46 = (((x213-x214)%x215)==x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x217 = -450884773LL;
	int8_t x218 = -1;
	int32_t x220 = INT32_MIN;
	volatile int32_t t47 = -184679;

	t47 = (((x217-x218)%x219)==x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x221 = INT16_MIN;
	volatile int16_t x222 = INT16_MIN;
	volatile int16_t x223 = INT16_MIN;
	static volatile int64_t x224 = INT64_MAX;

	t48 = (((x221-x222)%x223)==x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x225 = INT32_MIN;
	volatile int64_t x226 = INT64_MIN;
	uint64_t x227 = 1070541287LLU;
	uint64_t x228 = 951588299936642LLU;
	volatile int32_t t49 = 21138301;

	t49 = (((x225-x226)%x227)==x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = INT8_MIN;
	static volatile int8_t x230 = -31;
	static volatile int16_t x231 = INT16_MIN;
	int32_t x232 = -2345784;
	int32_t t50 = 535241604;

	t50 = (((x229-x230)%x231)==x232);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x238 = -3;
	static int16_t x239 = INT16_MIN;
	volatile int16_t x240 = 109;
	static int32_t t51 = 60;

	t51 = (((x237-x238)%x239)==x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x241 = INT32_MAX;
	int64_t x242 = -1LL;
	int64_t x243 = 123402295254520LL;
	int32_t t52 = 2454;

	t52 = (((x241-x242)%x243)==x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x245 = -411760662;
	int16_t x246 = INT16_MIN;
	uint16_t x247 = 1934U;
	int32_t t53 = 2;

	t53 = (((x245-x246)%x247)==x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x250 = 5755617863433LLU;
	uint8_t x251 = 36U;
	int64_t x252 = INT64_MIN;

	t54 = (((x249-x250)%x251)==x252);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x253 = -356LL;
	uint16_t x254 = 2U;
	volatile uint64_t x255 = 1474LLU;

	t55 = (((x253-x254)%x255)==x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x257 = 358081242;
	static volatile int32_t x260 = 190;
	volatile int32_t t56 = 923278102;

	t56 = (((x257-x258)%x259)==x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x261 = INT64_MAX;
	uint32_t x262 = 202985088U;
	int8_t x263 = 4;
	static int64_t x264 = -1LL;
	int32_t t57 = 16489;

	t57 = (((x261-x262)%x263)==x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x266 = UINT16_MAX;
	volatile uint16_t x267 = 6U;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t58 = -154;

	t58 = (((x265-x266)%x267)==x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x269 = -5837;
	static int8_t x270 = -13;
	int32_t x271 = INT32_MIN;
	volatile int8_t x272 = 1;
	int32_t t59 = 328913467;

	t59 = (((x269-x270)%x271)==x272);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x274 = 405LL;
	static int8_t x275 = -2;

	t60 = (((x273-x274)%x275)==x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = INT32_MIN;
	int32_t x278 = -1;
	int64_t x280 = INT64_MAX;

	t61 = (((x277-x278)%x279)==x280);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = INT8_MAX;
	static volatile uint8_t x283 = 1U;
	volatile int32_t t62 = 481792;

	t62 = (((x281-x282)%x283)==x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x297 = INT16_MIN;
	int32_t x300 = INT32_MIN;
	int32_t t63 = -84315817;

	t63 = (((x297-x298)%x299)==x300);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x301 = INT64_MIN;
	volatile int16_t x302 = INT16_MIN;
	volatile int64_t x303 = -1LL;
	uint8_t x304 = 4U;
	int32_t t64 = 3873458;

	t64 = (((x301-x302)%x303)==x304);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x305 = INT64_MAX;
	int8_t x307 = INT8_MAX;
	int64_t x308 = INT64_MAX;
	int32_t t65 = -99626;

	t65 = (((x305-x306)%x307)==x308);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = -1;
	int8_t x310 = INT8_MIN;
	int64_t x312 = INT64_MIN;
	int32_t t66 = 10318;

	t66 = (((x309-x310)%x311)==x312);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x313 = 1304999U;
	int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MAX;
	uint64_t x316 = 210888055LLU;
	int32_t t67 = -63793309;

	t67 = (((x313-x314)%x315)==x316);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = INT8_MIN;
	int32_t x320 = INT32_MIN;
	volatile int32_t t68 = 124121682;

	t68 = (((x317-x318)%x319)==x320);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x325 = UINT8_MAX;
	int16_t x326 = 25;
	int64_t x327 = -1LL;
	static int8_t x328 = -61;
	volatile int32_t t69 = -119045805;

	t69 = (((x325-x326)%x327)==x328);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x329 = 464U;
	volatile uint8_t x330 = 90U;
	static uint8_t x331 = 1U;
	volatile int32_t t70 = 1;

	t70 = (((x329-x330)%x331)==x332);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x333 = -1;
	uint16_t x334 = 38U;
	uint16_t x335 = 3U;
	int32_t t71 = 888980176;

	t71 = (((x333-x334)%x335)==x336);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x337 = INT32_MIN;
	static int64_t x338 = 4228751057LL;
	uint32_t x339 = UINT32_MAX;
	int16_t x340 = -35;

	t72 = (((x337-x338)%x339)==x340);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x342 = INT64_MIN;
	volatile int16_t x344 = INT16_MIN;
	volatile int32_t t73 = -28355230;

	t73 = (((x341-x342)%x343)==x344);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = 3;
	int64_t x346 = 16776749LL;
	int32_t x347 = INT32_MAX;
	uint16_t x348 = 31398U;
	int32_t t74 = -983560;

	t74 = (((x345-x346)%x347)==x348);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x349 = 7U;
	int8_t x351 = -1;
	static int32_t x352 = -32393;
	volatile int32_t t75 = -27;

	t75 = (((x349-x350)%x351)==x352);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x353 = INT16_MIN;
	static volatile int16_t x354 = 50;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t76 = 37342882;

	t76 = (((x353-x354)%x355)==x356);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = -55;
	static int32_t x359 = -2;
	volatile int32_t t77 = 0;

	t77 = (((x357-x358)%x359)==x360);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x362 = 1LLU;
	int8_t x363 = -1;
	volatile int32_t t78 = 63042;

	t78 = (((x361-x362)%x363)==x364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x365 = INT8_MIN;
	uint8_t x366 = 3U;
	static volatile int64_t x367 = INT64_MAX;
	uint64_t x368 = UINT64_MAX;

	t79 = (((x365-x366)%x367)==x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x369 = 0;
	volatile uint64_t x370 = UINT64_MAX;
	uint8_t x371 = 8U;
	int32_t x372 = -626611;
	int32_t t80 = 65432;

	t80 = (((x369-x370)%x371)==x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x374 = 3588088611827106LLU;
	static volatile uint64_t x375 = 121698640999522951LLU;
	int32_t t81 = 153118933;

	t81 = (((x373-x374)%x375)==x376);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = 3;
	int16_t x378 = -2;
	int8_t x379 = INT8_MIN;
	uint32_t x380 = 449U;
	static int32_t t82 = -1;

	t82 = (((x377-x378)%x379)==x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x381 = UINT16_MAX;
	volatile int8_t x382 = 21;
	int64_t x384 = INT64_MIN;
	volatile int32_t t83 = -424646;

	t83 = (((x381-x382)%x383)==x384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x389 = UINT8_MAX;
	uint32_t x390 = 3U;
	int32_t x391 = -2991066;
	int64_t x392 = 54236326LL;

	t84 = (((x389-x390)%x391)==x392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x393 = INT8_MAX;
	uint64_t x394 = 119533748775LLU;
	uint32_t x395 = UINT32_MAX;
	int32_t t85 = 412526;

	t85 = (((x393-x394)%x395)==x396);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x397 = -1;
	static int16_t x399 = INT16_MIN;
	int8_t x400 = INT8_MAX;
	int32_t t86 = 21;

	t86 = (((x397-x398)%x399)==x400);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x401 = INT16_MAX;
	int16_t x402 = INT16_MAX;
	static uint16_t x403 = UINT16_MAX;
	volatile int64_t x404 = -1LL;

	t87 = (((x401-x402)%x403)==x404);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x405 = 3U;
	int16_t x407 = -1;
	int64_t x408 = -1LL;
	volatile int32_t t88 = -518433796;

	t88 = (((x405-x406)%x407)==x408);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = -173;
	static int16_t x410 = 1;
	int16_t x411 = INT16_MAX;
	int32_t x412 = INT32_MAX;
	volatile int32_t t89 = 9968563;

	t89 = (((x409-x410)%x411)==x412);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x413 = INT8_MAX;
	uint32_t x416 = UINT32_MAX;
	static volatile int32_t t90 = -1;

	t90 = (((x413-x414)%x415)==x416);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x417 = -1;
	uint32_t x418 = UINT32_MAX;
	static uint64_t x419 = UINT64_MAX;
	int16_t x420 = INT16_MIN;
	volatile int32_t t91 = 7701;

	t91 = (((x417-x418)%x419)==x420);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x421 = UINT32_MAX;
	volatile uint8_t x423 = 50U;
	volatile int16_t x424 = INT16_MAX;
	static int32_t t92 = -1981621;

	t92 = (((x421-x422)%x423)==x424);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x425 = 1291884;
	int64_t x426 = 11LL;
	volatile int64_t x427 = INT64_MAX;
	int64_t x428 = INT64_MAX;
	int32_t t93 = -475;

	t93 = (((x425-x426)%x427)==x428);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x429 = 0;
	volatile uint8_t x430 = UINT8_MAX;
	int32_t x431 = INT32_MAX;
	int8_t x432 = INT8_MIN;
	volatile int32_t t94 = -74563;

	t94 = (((x429-x430)%x431)==x432);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x433 = 493LLU;
	int64_t x434 = 56471341LL;
	int32_t x435 = -593;
	int32_t x436 = -1;
	int32_t t95 = -57545;

	t95 = (((x433-x434)%x435)==x436);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x438 = INT32_MAX;
	int32_t t96 = 27;

	t96 = (((x437-x438)%x439)==x440);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x441 = 15845;
	volatile int16_t x443 = -1;
	int16_t x444 = -1;
	int32_t t97 = 9;

	t97 = (((x441-x442)%x443)==x444);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x446 = UINT32_MAX;
	static int16_t x447 = INT16_MIN;
	int32_t x448 = -1;
	volatile int32_t t98 = -264137;

	t98 = (((x445-x446)%x447)==x448);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x449 = 211367080LLU;
	int16_t x450 = INT16_MIN;
	static int8_t x451 = INT8_MAX;
	int8_t x452 = -1;

	t99 = (((x449-x450)%x451)==x452);

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

