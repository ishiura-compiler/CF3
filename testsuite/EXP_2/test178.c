#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = -3769;
static int32_t x5 = -8284;
int64_t x7 = -8566210503LL;
static uint16_t x8 = UINT16_MAX;
volatile int64_t x10 = -250598879072LL;
int16_t x12 = INT16_MAX;
static volatile uint8_t x13 = 35U;
static int8_t x16 = -5;
volatile int32_t t3 = 563781;
uint32_t x25 = 29803641U;
uint64_t x37 = 7LLU;
int64_t x39 = -1LL;
uint8_t x42 = UINT8_MAX;
uint8_t x46 = UINT8_MAX;
static volatile int64_t x48 = 385971866740LL;
uint64_t x59 = 6025379206809LLU;
int32_t t15 = 684927;
int64_t x69 = -6857231988209058LL;
static int8_t x76 = INT8_MAX;
static int32_t x80 = INT32_MIN;
volatile int16_t x81 = INT16_MIN;
volatile int16_t x89 = -13;
int32_t x92 = -1;
int32_t t22 = 30;
uint16_t x102 = 0U;
volatile int64_t x105 = 4766LL;
volatile int32_t x107 = -31164;
int64_t x108 = INT64_MAX;
static int16_t x110 = -8689;
uint32_t x111 = 218802331U;
int64_t x119 = INT64_MIN;
int16_t x127 = -1;
int8_t x133 = INT8_MAX;
uint64_t x134 = UINT64_MAX;
int8_t x135 = -17;
int32_t t31 = 649618147;
static int64_t x141 = 113875164488505872LL;
static int16_t x146 = INT16_MAX;
uint8_t x147 = UINT8_MAX;
int64_t x148 = -129LL;
int8_t x165 = -1;
static int8_t x167 = INT8_MIN;
volatile int32_t t34 = -6;
static int64_t x174 = INT64_MAX;
volatile int16_t x186 = INT16_MAX;
static int32_t x194 = -1;
int16_t x198 = INT16_MIN;
volatile int16_t x200 = -473;
int8_t x204 = 4;
uint16_t x206 = UINT16_MAX;
volatile uint32_t x207 = UINT32_MAX;
int16_t x218 = INT16_MAX;
int32_t t47 = 109946704;
volatile uint16_t x230 = UINT16_MAX;
int16_t x245 = INT16_MIN;
int32_t x247 = INT32_MIN;
int64_t x255 = INT64_MIN;
int16_t x258 = -1;
static int8_t x269 = INT8_MAX;
volatile int32_t x273 = -15;
volatile int16_t x275 = INT16_MIN;
int32_t t56 = 13896373;
uint16_t x279 = UINT16_MAX;
int8_t x293 = INT8_MAX;
static volatile int16_t x296 = -1;
uint16_t x297 = 3U;
int16_t x299 = -25;
int64_t x305 = -1LL;
volatile int16_t x310 = INT16_MIN;
volatile int8_t x312 = INT8_MIN;
int64_t x314 = INT64_MAX;
int32_t x316 = INT32_MIN;
volatile int32_t t63 = -129;
static int8_t x317 = -5;
volatile int64_t x322 = INT64_MAX;
int32_t x324 = -1;
uint32_t x336 = 50U;
uint8_t x351 = 5U;
volatile int16_t x357 = 2;
int8_t x358 = INT8_MIN;
volatile uint32_t x359 = 670044U;
int16_t x369 = INT16_MAX;
static volatile int8_t x372 = INT8_MIN;
int8_t x378 = INT8_MIN;
volatile int32_t t77 = -2754;
int64_t x394 = -407694727908663LL;
volatile int32_t t80 = 11523;
int16_t x402 = INT16_MIN;
uint8_t x403 = UINT8_MAX;
uint8_t x407 = 25U;
int64_t x409 = -1662458743703853816LL;
static uint32_t x411 = 702U;
volatile int32_t t83 = -2464553;
volatile int32_t x426 = INT32_MIN;
int8_t x429 = INT8_MAX;
uint32_t x433 = UINT32_MAX;
uint32_t x436 = 3536U;
uint16_t x438 = 7310U;
static uint32_t x440 = 4922323U;
int8_t x443 = 7;
int32_t t90 = -5859;
static int8_t x449 = INT8_MAX;
int64_t x450 = 37081373136083452LL;
static int64_t x460 = -1LL;
static int32_t x461 = -4;
static int64_t x463 = -1LL;
int32_t t94 = -79351;
int16_t x484 = -1;
int16_t x488 = INT16_MIN;


void f0(void) {
	uint16_t x1 = 43U;
	uint8_t x3 = UINT8_MAX;
	uint16_t x4 = UINT16_MAX;
	static int32_t t0 = -1;

	t0 = ((x1+(x2-x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x6 = -1;
	volatile int32_t t1 = -2972;

	t1 = ((x5+(x6-x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 12033324895329LLU;
	static volatile uint32_t x11 = 6U;
	int32_t t2 = -111;

	t2 = ((x9+(x10-x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 49276860U;
	int32_t x15 = -173753;

	t3 = ((x13+(x14-x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 843119668U;
	volatile int8_t x18 = -1;
	static int16_t x19 = 11;
	uint64_t x20 = UINT64_MAX;
	volatile int32_t t4 = -6177003;

	t4 = ((x17+(x18-x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 1105LLU;
	static uint32_t x22 = 44470U;
	static int32_t x23 = 450741839;
	int8_t x24 = 1;
	volatile int32_t t5 = -15504;

	t5 = ((x21+(x22-x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = -1;
	static volatile uint32_t x27 = 5U;
	int8_t x28 = -1;
	static int32_t t6 = 319004487;

	t6 = ((x25+(x26-x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 2U;
	int16_t x30 = -206;
	static uint64_t x31 = 2147466679022129725LLU;
	static int8_t x32 = INT8_MIN;
	int32_t t7 = -232309915;

	t7 = ((x29+(x30-x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -2;
	volatile int64_t x34 = -27093LL;
	uint16_t x35 = 155U;
	static int8_t x36 = INT8_MIN;
	int32_t t8 = -57110745;

	t8 = ((x33+(x34-x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x38 = INT64_MIN;
	int64_t x40 = -360220316322841742LL;
	int32_t t9 = -4659529;

	t9 = ((x37+(x38-x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	int32_t x43 = 0;
	volatile int16_t x44 = -1;
	static int32_t t10 = 28008527;

	t10 = ((x41+(x42-x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	uint16_t x47 = 3981U;
	volatile int32_t t11 = 1;

	t11 = ((x45+(x46-x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -43;
	uint32_t x50 = UINT32_MAX;
	int8_t x51 = INT8_MAX;
	int8_t x52 = -1;
	volatile int32_t t12 = 172;

	t12 = ((x49+(x50-x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = UINT16_MAX;
	volatile int8_t x58 = 1;
	volatile uint16_t x60 = 3985U;
	static volatile int32_t t13 = 746;

	t13 = ((x57+(x58-x59))<x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	int32_t x62 = INT32_MIN;
	uint64_t x63 = 160851093451366LLU;
	static uint16_t x64 = 969U;
	volatile int32_t t14 = 79136;

	t14 = ((x61+(x62-x63))<x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1LL;
	int16_t x66 = -1;
	static int16_t x67 = INT16_MIN;
	int32_t x68 = -35242;

	t15 = ((x65+(x66-x67))<x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x70 = 3U;
	static uint16_t x71 = 14781U;
	volatile int16_t x72 = -3;
	volatile int32_t t16 = 27;

	t16 = ((x69+(x70-x71))<x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = INT16_MAX;
	uint32_t x74 = 2888U;
	int32_t x75 = -1;
	int32_t t17 = 1332995;

	t17 = ((x73+(x74-x75))<x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 6453417371855740757LLU;
	int16_t x78 = INT16_MAX;
	int64_t x79 = -1LL;
	int32_t t18 = 308168;

	t18 = ((x77+(x78-x79))<x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x82 = INT32_MIN;
	uint32_t x83 = UINT32_MAX;
	static int8_t x84 = 28;
	int32_t t19 = 818597;

	t19 = ((x81+(x82-x83))<x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 4955U;
	int32_t x86 = 1894;
	int64_t x87 = -1LL;
	static int64_t x88 = INT64_MIN;
	static volatile int32_t t20 = -5229;

	t20 = ((x85+(x86-x87))<x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x90 = UINT16_MAX;
	volatile int32_t x91 = 34629;
	volatile int32_t t21 = 22166512;

	t21 = ((x89+(x90-x91))<x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x93 = INT16_MIN;
	volatile int32_t x94 = -162835;
	int8_t x95 = INT8_MAX;
	static int32_t x96 = INT32_MIN;

	t22 = ((x93+(x94-x95))<x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x101 = UINT8_MAX;
	static uint32_t x103 = UINT32_MAX;
	volatile uint64_t x104 = UINT64_MAX;
	volatile int32_t t23 = 120116;

	t23 = ((x101+(x102-x103))<x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x106 = -1;
	volatile int32_t t24 = 1990;

	t24 = ((x105+(x106-x107))<x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	int16_t x112 = -3077;
	volatile int32_t t25 = -77;

	t25 = ((x109+(x110-x111))<x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x113 = INT64_MAX;
	uint64_t x114 = UINT64_MAX;
	static uint16_t x115 = 56U;
	volatile int8_t x116 = -1;
	volatile int32_t t26 = 470022025;

	t26 = ((x113+(x114-x115))<x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x117 = 281U;
	static uint64_t x118 = 46428102LLU;
	int16_t x120 = 213;
	int32_t t27 = 399;

	t27 = ((x117+(x118-x119))<x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x121 = -1;
	int32_t x122 = -15098;
	uint8_t x123 = 5U;
	uint32_t x124 = 20999094U;
	static int32_t t28 = 2997228;

	t28 = ((x121+(x122-x123))<x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x125 = 0U;
	volatile uint32_t x126 = 146343131U;
	int64_t x128 = 448318992073551LL;
	int32_t t29 = -3475;

	t29 = ((x125+(x126-x127))<x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = 2;
	static int32_t x130 = 4730;
	int16_t x131 = -1;
	uint16_t x132 = 6890U;
	int32_t t30 = 1081565;

	t30 = ((x129+(x130-x131))<x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x136 = 998786402U;

	t31 = ((x133+(x134-x135))<x136);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x142 = 1U;
	static int8_t x143 = INT8_MIN;
	volatile int16_t x144 = INT16_MIN;
	int32_t t32 = 9593516;

	t32 = ((x141+(x142-x143))<x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = 1894U;
	int32_t t33 = -3503;

	t33 = ((x145+(x146-x147))<x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x166 = INT64_MIN;
	int8_t x168 = 8;

	t34 = ((x165+(x166-x167))<x168);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x169 = INT16_MIN;
	int64_t x170 = -1LL;
	int8_t x171 = INT8_MIN;
	static int16_t x172 = INT16_MIN;
	volatile int32_t t35 = 58388;

	t35 = ((x169+(x170-x171))<x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x173 = 4U;
	uint32_t x175 = 174332U;
	volatile int8_t x176 = INT8_MIN;
	volatile int32_t t36 = -3559;

	t36 = ((x173+(x174-x175))<x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x177 = 49LLU;
	int8_t x178 = -1;
	int32_t x179 = INT32_MIN;
	static int16_t x180 = 88;
	volatile int32_t t37 = 137627;

	t37 = ((x177+(x178-x179))<x180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x181 = UINT16_MAX;
	uint16_t x182 = 63U;
	uint16_t x183 = UINT16_MAX;
	int8_t x184 = INT8_MIN;
	static volatile int32_t t38 = 13237742;

	t38 = ((x181+(x182-x183))<x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x185 = 14313U;
	uint64_t x187 = 288752162LLU;
	int64_t x188 = -232LL;
	static volatile int32_t t39 = -24;

	t39 = ((x185+(x186-x187))<x188);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = INT8_MIN;
	uint32_t x190 = UINT32_MAX;
	int64_t x191 = -104LL;
	static int64_t x192 = INT64_MAX;
	volatile int32_t t40 = -6403;

	t40 = ((x189+(x190-x191))<x192);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x193 = 14980U;
	uint8_t x195 = UINT8_MAX;
	int32_t x196 = -1;
	static volatile int32_t t41 = -95377;

	t41 = ((x193+(x194-x195))<x196);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = INT16_MAX;
	uint16_t x199 = 1178U;
	static volatile int32_t t42 = -49114;

	t42 = ((x197+(x198-x199))<x200);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = INT16_MAX;
	uint8_t x202 = UINT8_MAX;
	int8_t x203 = INT8_MAX;
	volatile int32_t t43 = 844075;

	t43 = ((x201+(x202-x203))<x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x205 = -1LL;
	volatile int8_t x208 = 40;
	volatile int32_t t44 = 1095;

	t44 = ((x205+(x206-x207))<x208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x213 = 100U;
	uint16_t x214 = UINT16_MAX;
	int8_t x215 = -14;
	static uint64_t x216 = UINT64_MAX;
	int32_t t45 = 22;

	t45 = ((x213+(x214-x215))<x216);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x217 = INT64_MIN;
	static uint16_t x219 = 1U;
	volatile int64_t x220 = INT64_MIN;
	int32_t t46 = -33456;

	t46 = ((x217+(x218-x219))<x220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = -1;
	int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MIN;
	uint16_t x224 = UINT16_MAX;

	t47 = ((x221+(x222-x223))<x224);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = INT16_MIN;
	volatile uint32_t x231 = 647438U;
	static int8_t x232 = INT8_MAX;
	volatile int32_t t48 = 190490217;

	t48 = ((x229+(x230-x231))<x232);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x233 = 77U;
	int64_t x234 = -1LL;
	int64_t x235 = -1LL;
	int8_t x236 = -1;
	volatile int32_t t49 = -50;

	t49 = ((x233+(x234-x235))<x236);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x246 = INT8_MIN;
	int64_t x248 = -661001508056651776LL;
	int32_t t50 = -22683;

	t50 = ((x245+(x246-x247))<x248);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MIN;
	int32_t x251 = -1;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t51 = -773;

	t51 = ((x249+(x250-x251))<x252);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = INT16_MIN;
	int64_t x254 = INT64_MIN;
	int32_t x256 = -1;
	static volatile int32_t t52 = 914888;

	t52 = ((x253+(x254-x255))<x256);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x257 = INT8_MAX;
	int16_t x259 = -14736;
	int16_t x260 = 1;
	static int32_t t53 = -27;

	t53 = ((x257+(x258-x259))<x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x265 = UINT32_MAX;
	int16_t x266 = -6;
	uint8_t x267 = UINT8_MAX;
	int64_t x268 = -6769644954LL;
	int32_t t54 = -597;

	t54 = ((x265+(x266-x267))<x268);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x270 = 7U;
	int64_t x271 = -1LL;
	volatile uint64_t x272 = 341462LLU;
	static int32_t t55 = -6819;

	t55 = ((x269+(x270-x271))<x272);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x274 = 392;
	int32_t x276 = INT32_MAX;

	t56 = ((x273+(x274-x275))<x276);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x277 = 169520LL;
	int8_t x278 = -8;
	static uint8_t x280 = 8U;
	volatile int32_t t57 = -1;

	t57 = ((x277+(x278-x279))<x280);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x289 = -26;
	uint32_t x290 = UINT32_MAX;
	static uint8_t x291 = 17U;
	int16_t x292 = 5;
	static int32_t t58 = 254350774;

	t58 = ((x289+(x290-x291))<x292);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x294 = UINT64_MAX;
	int16_t x295 = INT16_MIN;
	static volatile int32_t t59 = 9;

	t59 = ((x293+(x294-x295))<x296);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x298 = -184;
	uint32_t x300 = 61744U;
	volatile int32_t t60 = -527069167;

	t60 = ((x297+(x298-x299))<x300);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x306 = UINT8_MAX;
	int8_t x307 = 1;
	int32_t x308 = INT32_MAX;
	static int32_t t61 = 4930;

	t61 = ((x305+(x306-x307))<x308);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x309 = INT8_MIN;
	static int16_t x311 = INT16_MAX;
	volatile int32_t t62 = 1;

	t62 = ((x309+(x310-x311))<x312);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x313 = UINT8_MAX;
	int64_t x315 = 285016614721LL;

	t63 = ((x313+(x314-x315))<x316);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x318 = -1;
	volatile uint8_t x319 = 13U;
	static volatile int16_t x320 = -1;
	static volatile int32_t t64 = 158;

	t64 = ((x317+(x318-x319))<x320);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x321 = 3U;
	uint8_t x323 = 54U;
	volatile int32_t t65 = 751848;

	t65 = ((x321+(x322-x323))<x324);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x333 = INT8_MIN;
	uint8_t x334 = 1U;
	int8_t x335 = INT8_MIN;
	volatile int32_t t66 = 8277641;

	t66 = ((x333+(x334-x335))<x336);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x337 = INT64_MIN;
	uint64_t x338 = 5375198750111LLU;
	uint8_t x339 = 0U;
	uint8_t x340 = 1U;
	volatile int32_t t67 = 3548;

	t67 = ((x337+(x338-x339))<x340);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x341 = -155LL;
	int32_t x342 = INT32_MIN;
	int32_t x343 = -48;
	static int64_t x344 = INT64_MIN;
	volatile int32_t t68 = 1;

	t68 = ((x341+(x342-x343))<x344);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x345 = 21166602757775846LLU;
	uint8_t x346 = 0U;
	uint32_t x347 = UINT32_MAX;
	int32_t x348 = 171239851;
	int32_t t69 = -16178653;

	t69 = ((x345+(x346-x347))<x348);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x349 = 2407152731LLU;
	uint8_t x350 = UINT8_MAX;
	int8_t x352 = -11;
	int32_t t70 = 979;

	t70 = ((x349+(x350-x351))<x352);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x353 = UINT64_MAX;
	uint32_t x354 = 464U;
	int32_t x355 = -1;
	int16_t x356 = -1;
	volatile int32_t t71 = 1183043;

	t71 = ((x353+(x354-x355))<x356);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x360 = -41250297;
	volatile int32_t t72 = 14021607;

	t72 = ((x357+(x358-x359))<x360);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x361 = INT32_MIN;
	static int8_t x362 = 47;
	int32_t x363 = 0;
	static uint16_t x364 = 23U;
	static volatile int32_t t73 = 37;

	t73 = ((x361+(x362-x363))<x364);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x365 = 7;
	static int64_t x366 = -352422752228LL;
	static int64_t x367 = -610634266763507LL;
	int16_t x368 = -1;
	static int32_t t74 = -178665704;

	t74 = ((x365+(x366-x367))<x368);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x370 = -104406LL;
	uint32_t x371 = UINT32_MAX;
	int32_t t75 = 24599887;

	t75 = ((x369+(x370-x371))<x372);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x373 = UINT64_MAX;
	int32_t x374 = -1;
	static uint8_t x375 = UINT8_MAX;
	volatile int64_t x376 = -1LL;
	volatile int32_t t76 = -123;

	t76 = ((x373+(x374-x375))<x376);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x377 = -11922;
	uint32_t x379 = 83900U;
	int8_t x380 = -1;

	t77 = ((x377+(x378-x379))<x380);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x381 = 1;
	uint8_t x382 = UINT8_MAX;
	volatile uint64_t x383 = 5774179271LLU;
	static int32_t x384 = INT32_MAX;
	int32_t t78 = 1063977167;

	t78 = ((x381+(x382-x383))<x384);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x389 = 7192032172342762LLU;
	volatile int64_t x390 = -12118841LL;
	int32_t x391 = 353;
	uint16_t x392 = 438U;
	int32_t t79 = 100;

	t79 = ((x389+(x390-x391))<x392);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x393 = 34U;
	static uint32_t x395 = UINT32_MAX;
	static uint64_t x396 = 13427LLU;

	t80 = ((x393+(x394-x395))<x396);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x401 = 36LL;
	volatile int16_t x404 = -1;
	static volatile int32_t t81 = -3850;

	t81 = ((x401+(x402-x403))<x404);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x405 = 3;
	int64_t x406 = INT64_MAX;
	int32_t x408 = INT32_MIN;
	int32_t t82 = 72964547;

	t82 = ((x405+(x406-x407))<x408);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x410 = UINT8_MAX;
	int8_t x412 = INT8_MAX;

	t83 = ((x409+(x410-x411))<x412);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x413 = -1;
	uint16_t x414 = 7U;
	int32_t x415 = -1;
	volatile uint32_t x416 = 39U;
	int32_t t84 = 33403;

	t84 = ((x413+(x414-x415))<x416);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x421 = -1;
	int64_t x422 = INT64_MAX;
	uint8_t x423 = 1U;
	int64_t x424 = -1LL;
	int32_t t85 = 0;

	t85 = ((x421+(x422-x423))<x424);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x425 = UINT8_MAX;
	static int32_t x427 = INT32_MIN;
	static uint64_t x428 = 2564LLU;
	int32_t t86 = 1374678;

	t86 = ((x425+(x426-x427))<x428);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x430 = INT8_MIN;
	static uint32_t x431 = UINT32_MAX;
	volatile int8_t x432 = INT8_MAX;
	volatile int32_t t87 = -306120;

	t87 = ((x429+(x430-x431))<x432);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x434 = -27846;
	static int16_t x435 = INT16_MIN;
	volatile int32_t t88 = 9354;

	t88 = ((x433+(x434-x435))<x436);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x437 = 99U;
	int8_t x439 = INT8_MIN;
	int32_t t89 = -679558255;

	t89 = ((x437+(x438-x439))<x440);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x441 = INT32_MAX;
	uint64_t x442 = UINT64_MAX;
	static int16_t x444 = -2;

	t90 = ((x441+(x442-x443))<x444);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x445 = INT32_MIN;
	int16_t x446 = INT16_MAX;
	volatile int64_t x447 = -497275951LL;
	int64_t x448 = INT64_MIN;
	static int32_t t91 = -5381162;

	t91 = ((x445+(x446-x447))<x448);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x451 = -1;
	static int16_t x452 = 35;
	int32_t t92 = 2991534;

	t92 = ((x449+(x450-x451))<x452);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x457 = 4064U;
	static int16_t x458 = -1;
	int8_t x459 = INT8_MAX;
	int32_t t93 = 23;

	t93 = ((x457+(x458-x459))<x460);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x462 = 13LL;
	int16_t x464 = INT16_MAX;

	t94 = ((x461+(x462-x463))<x464);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x469 = -1;
	int32_t x470 = -40;
	int32_t x471 = -1;
	int16_t x472 = 0;
	volatile int32_t t95 = 378220;

	t95 = ((x469+(x470-x471))<x472);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x473 = 746U;
	int32_t x474 = 347;
	int8_t x475 = INT8_MIN;
	int8_t x476 = INT8_MIN;
	static volatile int32_t t96 = -6753960;

	t96 = ((x473+(x474-x475))<x476);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x477 = -1;
	uint8_t x478 = 14U;
	int64_t x479 = -1LL;
	static int16_t x480 = INT16_MIN;
	int32_t t97 = 7239;

	t97 = ((x477+(x478-x479))<x480);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x481 = 115294U;
	uint64_t x482 = 2989024155768043422LLU;
	int16_t x483 = -1276;
	volatile int32_t t98 = 126130850;

	t98 = ((x481+(x482-x483))<x484);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x485 = INT64_MIN;
	static volatile uint32_t x486 = 414459115U;
	uint64_t x487 = 72208899LLU;
	volatile int32_t t99 = 9957;

	t99 = ((x485+(x486-x487))<x488);

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

