#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x4 = 18;
int32_t t4 = 81738201;
int16_t x27 = INT16_MIN;
volatile uint64_t t5 = 2631480LLU;
uint64_t x29 = UINT64_MAX;
volatile int8_t x34 = 6;
volatile int32_t x38 = -16714124;
static uint32_t x40 = 4555967U;
static volatile int8_t x41 = -1;
int64_t x42 = 13981LL;
int8_t x46 = -53;
static int8_t x47 = INT8_MIN;
static volatile uint16_t x48 = UINT16_MAX;
int8_t x54 = INT8_MIN;
volatile int16_t x57 = -1;
int64_t t12 = 3363365696543LL;
int8_t x68 = INT8_MIN;
volatile int8_t x71 = -1;
int64_t x80 = INT64_MIN;
int8_t x101 = -26;
uint8_t x105 = UINT8_MAX;
int8_t x106 = INT8_MIN;
int64_t t21 = 18283344238241LL;
int16_t x117 = INT16_MAX;
static int64_t x125 = 17127867341537668LL;
uint16_t x126 = 1232U;
int64_t x130 = 42705077029111981LL;
volatile int64_t t27 = -74LL;
int32_t x147 = INT32_MAX;
volatile int16_t x149 = -1;
uint64_t x152 = UINT64_MAX;
int8_t x153 = -1;
uint64_t x171 = UINT64_MAX;
volatile uint32_t t36 = 35U;
int64_t x184 = 1954574489676791LL;
int64_t x194 = -2368456129407962LL;
static uint64_t x199 = UINT64_MAX;
volatile int32_t x212 = -1;
volatile int32_t x219 = 610703651;
uint32_t x220 = 70044087U;
static uint8_t x223 = 36U;
uint32_t x230 = 65U;
int64_t t48 = 4LL;
static int64_t x237 = -1LL;
volatile int16_t x241 = INT16_MIN;
static int16_t x245 = INT16_MIN;
uint32_t x247 = UINT32_MAX;
int8_t x248 = 1;
int32_t x249 = INT32_MIN;
int16_t x252 = INT16_MIN;
static volatile int64_t t53 = INT64_MAX;
volatile int8_t x262 = INT8_MIN;
volatile int32_t t54 = -29227807;
int8_t x271 = INT8_MIN;
int16_t x276 = INT16_MIN;
uint64_t x281 = 17LLU;
int32_t x285 = INT32_MAX;
volatile int32_t t60 = 486;
int8_t x291 = 8;
volatile uint8_t x309 = 3U;
static volatile int32_t t64 = -239282379;
uint8_t x313 = UINT8_MAX;
static uint8_t x315 = 25U;
volatile int64_t x316 = INT64_MIN;
int16_t x320 = -1;
int16_t x325 = INT16_MAX;
volatile uint8_t x329 = 5U;
uint16_t x338 = UINT16_MAX;
uint64_t x343 = 32486590459350002LLU;
int64_t x345 = INT64_MAX;
int16_t x350 = INT16_MAX;
int8_t x351 = -1;
volatile uint8_t x356 = 84U;
volatile uint64_t t74 = 11817940LLU;
volatile uint64_t t77 = 105939271252746LLU;
static int16_t x378 = INT16_MAX;
volatile int8_t x383 = -1;
int16_t x385 = INT16_MIN;
int32_t x388 = INT32_MIN;
uint32_t x400 = 4U;
static int64_t t83 = -11196773657LL;
static uint32_t x404 = 67246U;
int8_t x408 = INT8_MIN;
volatile int64_t t85 = -60593756383883171LL;
volatile int16_t x411 = 16;
static volatile int16_t x428 = -1532;
int16_t x437 = -1;
int32_t x441 = 70;
static uint8_t x446 = UINT8_MAX;
int32_t x451 = 4;
volatile uint32_t x452 = UINT32_MAX;
uint64_t x454 = 2469341735937061LLU;
uint8_t x471 = 74U;
int8_t x481 = INT8_MIN;
static int32_t x482 = -5;


void f0(void) {
	static uint16_t x1 = 30096U;
	volatile uint32_t x2 = 12049U;
	int32_t x3 = 131529728;
	uint32_t t0 = 23U;

	t0 = ((x1-(x2-x3))|x4);

	if (t0 != 131547775U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 0U;
	static int64_t x6 = -1LL;
	int32_t x7 = INT32_MIN;
	int8_t x8 = -3;
	volatile int64_t t1 = 3345562558873LL;

	t1 = ((x5-(x6-x7))|x8);

	if (t1 != -3LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x9 = 8LLU;
	int64_t x10 = 221128414783002LL;
	static int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MAX;
	volatile uint64_t t2 = 1612139189590730155LLU;

	t2 = ((x9-(x10-x11))|x12);

	if (t2 != 18446522945294735871LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = -1;
	uint32_t x18 = UINT32_MAX;
	int32_t x19 = INT32_MIN;
	uint32_t x20 = UINT32_MAX;
	uint32_t t3 = UINT32_MAX;

	t3 = ((x17-(x18-x19))|x20);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -2;
	int32_t x22 = INT32_MAX;
	uint8_t x23 = 4U;
	static int32_t x24 = INT32_MIN;

	t4 = ((x21-(x22-x23))|x24);

	if (t4 != -2147483645) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	uint8_t x26 = 31U;
	uint32_t x28 = 500U;

	t5 = ((x25-(x26-x27))|x28);

	if (t5 != 18446744073709518836LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = INT16_MIN;
	volatile uint16_t x31 = 247U;
	int32_t x32 = INT32_MIN;
	static volatile uint64_t t6 = 29171288LLU;

	t6 = ((x29-(x30-x31))|x32);

	if (t6 != 18446744071562100982LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x33 = 28LLU;
	int16_t x35 = -1;
	uint64_t x36 = UINT64_MAX;
	uint64_t t7 = UINT64_MAX;

	t7 = ((x33-(x34-x35))|x36);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x37 = UINT32_MAX;
	static int64_t x39 = -1LL;
	volatile int64_t t8 = -41LL;

	t8 = ((x37-(x38-x39))|x40);

	if (t8 != 4311715263LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x43 = INT8_MIN;
	uint16_t x44 = 29U;
	volatile int64_t t9 = 3534186018LL;

	t9 = ((x41-(x42-x43))|x44);

	if (t9 != -14081LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x45 = UINT64_MAX;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x45-(x46-x47))|x48);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = INT32_MIN;
	int64_t x55 = -1037450779694911LL;
	uint16_t x56 = 15606U;
	volatile int64_t t11 = -112LL;

	t11 = ((x53-(x54-x55))|x56);

	if (t11 != -1037452927173129LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x58 = INT16_MIN;
	static int64_t x59 = 715251513757712LL;
	static int32_t x60 = INT32_MAX;

	t12 = ((x57-(x58-x59))|x60);

	if (t12 != 715251641221119LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	volatile int16_t x62 = 0;
	int32_t x63 = -1;
	int32_t x64 = INT32_MIN;
	volatile int32_t t13 = -28470;

	t13 = ((x61-(x62-x63))|x64);

	if (t13 != -32769) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -1;
	uint64_t x66 = UINT64_MAX;
	int64_t x67 = INT64_MAX;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = ((x65-(x66-x67))|x68);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x69 = 12477LL;
	int32_t x70 = -3;
	static int8_t x72 = 61;
	int64_t t15 = -1235539LL;

	t15 = ((x69-(x70-x71))|x72);

	if (t15 != 12479LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MIN;
	int8_t x78 = 49;
	volatile int64_t x79 = -6490198763LL;
	int64_t t16 = 132400927681LL;

	t16 = ((x77-(x78-x79))|x80);

	if (t16 != -8637682460LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = -17LL;
	static uint64_t x86 = 12608505LLU;
	int32_t x87 = INT32_MIN;
	uint32_t x88 = 2838U;
	uint64_t t17 = 6225LLU;

	t17 = ((x85-(x86-x87))|x88);

	if (t17 != 18446744071549459446LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = -1LL;
	static uint16_t x90 = 4992U;
	int8_t x91 = -41;
	uint32_t x92 = 1U;
	volatile int64_t t18 = -18108955865130LL;

	t18 = ((x89-(x90-x91))|x92);

	if (t18 != -5033LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x93 = INT16_MIN;
	uint64_t x94 = 4062151LLU;
	int16_t x95 = INT16_MIN;
	int32_t x96 = -1;
	uint64_t t19 = UINT64_MAX;

	t19 = ((x93-(x94-x95))|x96);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x102 = -29;
	volatile int8_t x103 = 1;
	static int64_t x104 = -1LL;
	int64_t t20 = -22LL;

	t20 = ((x101-(x102-x103))|x104);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x107 = -1LL;
	int16_t x108 = 2;

	t21 = ((x105-(x106-x107))|x108);

	if (t21 != 382LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x109 = -159535LL;
	static volatile int64_t x110 = 173221LL;
	uint32_t x111 = UINT32_MAX;
	static uint16_t x112 = UINT16_MAX;
	int64_t t22 = -12501LL;

	t22 = ((x109-(x110-x111))|x112);

	if (t22 != 4294639615LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x118 = UINT8_MAX;
	int32_t x119 = -58;
	uint8_t x120 = 40U;
	int32_t t23 = 2595;

	t23 = ((x117-(x118-x119))|x120);

	if (t23 != 32494) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x121 = -2;
	int64_t x122 = INT64_MIN;
	int32_t x123 = -1;
	uint8_t x124 = 24U;
	static volatile int64_t t24 = 47164875654745554LL;

	t24 = ((x121-(x122-x123))|x124);

	if (t24 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x127 = 0U;
	uint32_t x128 = 22309U;
	static int64_t t25 = -18050328107918LL;

	t25 = ((x125-(x126-x127))|x128);

	if (t25 != 17127867341537205LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = 5427LL;
	uint8_t x131 = 10U;
	int64_t x132 = INT64_MIN;
	static volatile int64_t t26 = 25501366306547518LL;

	t26 = ((x129-(x130-x131))|x132);

	if (t26 != -42705077029106544LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x133 = UINT32_MAX;
	volatile int64_t x134 = 1924259655512LL;
	int32_t x135 = 3;
	int64_t x136 = INT64_MIN;

	t27 = ((x133-(x134-x135))|x136);

	if (t27 != -1919964688214LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x137 = INT32_MAX;
	volatile int8_t x138 = INT8_MIN;
	uint32_t x139 = 2983U;
	uint16_t x140 = UINT16_MAX;
	volatile uint32_t t28 = 1821969U;

	t28 = ((x137-(x138-x139))|x140);

	if (t28 != 2147549183U) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x141 = -263622798430LL;
	int8_t x142 = -52;
	uint32_t x143 = UINT32_MAX;
	static volatile int32_t x144 = INT32_MAX;
	int64_t t29 = 27666373735981LL;

	t29 = ((x141-(x142-x143))|x144);

	if (t29 != -266287972353LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = 6LL;
	volatile int8_t x146 = -1;
	volatile int16_t x148 = -1056;
	volatile int64_t t30 = -3538771LL;

	t30 = ((x145-(x146-x147))|x148);

	if (t30 != -1050LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x150 = INT64_MIN;
	int8_t x151 = INT8_MIN;
	uint64_t t31 = UINT64_MAX;

	t31 = ((x149-(x150-x151))|x152);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x154 = UINT8_MAX;
	int8_t x155 = INT8_MIN;
	uint8_t x156 = UINT8_MAX;
	int32_t t32 = 237735595;

	t32 = ((x153-(x154-x155))|x156);

	if (t32 != -257) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x157 = UINT16_MAX;
	int64_t x158 = -917227LL;
	uint8_t x159 = UINT8_MAX;
	static int8_t x160 = 13;
	static volatile int64_t t33 = -142352502645436351LL;

	t33 = ((x157-(x158-x159))|x160);

	if (t33 != 983021LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x165 = UINT32_MAX;
	volatile int32_t x166 = INT32_MIN;
	uint32_t x167 = 3U;
	int8_t x168 = INT8_MAX;
	static volatile uint32_t t34 = 2142846810U;

	t34 = ((x165-(x166-x167))|x168);

	if (t34 != 2147483775U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x169 = INT8_MAX;
	int8_t x170 = INT8_MAX;
	int16_t x172 = INT16_MIN;
	static uint64_t t35 = UINT64_MAX;

	t35 = ((x169-(x170-x171))|x172);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = -497;
	uint32_t x174 = 651327U;
	int8_t x175 = -1;
	int16_t x176 = 0;

	t36 = ((x173-(x174-x175))|x176);

	if (t36 != 4294315471U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x177 = 32U;
	int16_t x178 = -1;
	uint64_t x179 = 1211880425224LLU;
	int64_t x180 = -31744992153881832LL;
	volatile uint64_t t37 = 1867940913LLU;

	t37 = ((x177-(x178-x179))|x180);

	if (t37 != 18415000190205818681LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x181 = 53U;
	int32_t x182 = -75374641;
	static uint64_t x183 = 490024372354170510LLU;
	uint64_t t38 = 1384259210151LLU;

	t38 = ((x181-(x182-x183))|x184);

	if (t38 != 490606206649827319LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MIN;
	uint32_t x191 = 32695U;
	static volatile int32_t x192 = -98802469;
	static uint32_t t39 = 16U;

	t39 = ((x189-(x190-x191))|x192);

	if (t39 != 4196171775U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x193 = UINT32_MAX;
	volatile int16_t x195 = INT16_MIN;
	uint32_t x196 = UINT32_MAX;
	volatile int64_t t40 = -124329989258997LL;

	t40 = ((x193-(x194-x195))|x196);

	if (t40 != 2368464010346495LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x197 = INT16_MIN;
	volatile int8_t x198 = -4;
	int32_t x200 = 36555337;
	volatile uint64_t t41 = 6LLU;

	t41 = ((x197-(x198-x199))|x200);

	if (t41 != 18446744073709537867LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x201 = 124LLU;
	static int16_t x202 = 48;
	volatile int64_t x203 = INT64_MAX;
	int64_t x204 = -1891013016514LL;
	volatile uint64_t t42 = 93276922297850LLU;

	t42 = ((x201-(x202-x203))|x204);

	if (t42 != 18446742182696535167LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = 600;
	int8_t x206 = -1;
	int16_t x207 = 13199;
	uint16_t x208 = 1534U;
	volatile int32_t t43 = -73946367;

	t43 = ((x205-(x206-x207))|x208);

	if (t43 != 13822) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = INT32_MIN;
	volatile int32_t x210 = -1083650;
	static int8_t x211 = INT8_MAX;
	volatile int32_t t44 = 7759;

	t44 = ((x209-(x210-x211))|x212);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = 3;
	int32_t x218 = INT32_MAX;
	static uint32_t t45 = 15635U;

	t45 = ((x217-(x218-x219))|x220);

	if (t45 != 2758728119U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x221 = 122660965979936361LLU;
	int64_t x222 = -1LL;
	uint32_t x224 = UINT32_MAX;
	uint64_t t46 = 59919429407884LLU;

	t46 = ((x221-(x222-x223))|x224);

	if (t46 != 122660967438876671LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x229 = 47202443440LL;
	static int16_t x231 = -3256;
	volatile int8_t x232 = -1;
	volatile int64_t t47 = 1042711857242192994LL;

	t47 = ((x229-(x230-x231))|x232);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x233 = INT64_MIN;
	int8_t x234 = INT8_MIN;
	static int8_t x235 = INT8_MIN;
	uint16_t x236 = 6U;

	t48 = ((x233-(x234-x235))|x236);

	if (t48 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x238 = INT8_MIN;
	int64_t x239 = 24629630516LL;
	static int64_t x240 = 825909086098622LL;
	int64_t t49 = -7810827657281LL;

	t49 = ((x237-(x238-x239))|x240);

	if (t49 != 825930762933951LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x242 = 26U;
	int8_t x243 = INT8_MIN;
	uint32_t x244 = 11187U;
	volatile uint32_t t50 = 1427881U;

	t50 = ((x241-(x242-x243))|x244);

	if (t50 != 4294934519U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x246 = -1;
	static uint32_t t51 = 80064U;

	t51 = ((x245-(x246-x247))|x248);

	if (t51 != 4294934529U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x250 = INT8_MIN;
	uint16_t x251 = 2U;
	int32_t t52 = 186;

	t52 = ((x249-(x250-x251))|x252);

	if (t52 != -32638) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x257 = 25U;
	int16_t x258 = INT16_MIN;
	int8_t x259 = INT8_MIN;
	int64_t x260 = INT64_MAX;

	t53 = ((x257-(x258-x259))|x260);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x261 = INT32_MIN;
	static int16_t x263 = 1;
	volatile int32_t x264 = -10515;

	t54 = ((x261-(x262-x263))|x264);

	if (t54 != -10515) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x265 = UINT16_MAX;
	int32_t x266 = 1;
	int64_t x267 = 879LL;
	int32_t x268 = INT32_MIN;
	static int64_t t55 = 22018786LL;

	t55 = ((x265-(x266-x267))|x268);

	if (t55 != -2147417235LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x269 = -255981771LL;
	int64_t x270 = 663386322LL;
	uint8_t x272 = UINT8_MAX;
	volatile int64_t t56 = -1LL;

	t56 = ((x269-(x270-x271))|x272);

	if (t56 != -919368193LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	int64_t x275 = 1082041800LL;
	int64_t t57 = 31259367LL;

	t57 = ((x273-(x274-x275))|x276);

	if (t57 != -22968LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x277 = -1;
	static int64_t x278 = 43062LL;
	int32_t x279 = INT32_MAX;
	int32_t x280 = INT32_MIN;
	volatile int64_t t58 = -1922213288785600757LL;

	t58 = ((x277-(x278-x279))|x280);

	if (t58 != -43064LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x282 = 2008U;
	int32_t x283 = 0;
	static uint32_t x284 = 1539U;
	uint64_t t59 = 363LLU;

	t59 = ((x281-(x282-x283))|x284);

	if (t59 != 18446744073709551163LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x286 = INT32_MAX;
	int8_t x287 = INT8_MAX;
	static int8_t x288 = 20;

	t60 = ((x285-(x286-x287))|x288);

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x289 = INT64_MAX;
	uint64_t x290 = 111687916258926366LLU;
	static int64_t x292 = INT64_MAX;
	static volatile uint64_t t61 = 499345396134267765LLU;

	t61 = ((x289-(x290-x291))|x292);

	if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x293 = 2804U;
	int64_t x294 = INT64_MAX;
	uint32_t x295 = 154543973U;
	int8_t x296 = 2;
	int64_t t62 = -142013078578LL;

	t62 = ((x293-(x294-x295))|x296);

	if (t62 != -9223372036700229030LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = -1;
	int64_t x306 = -65LL;
	int64_t x307 = -2659393437697078165LL;
	int64_t x308 = -2300810963LL;
	int64_t t63 = -1075966957567711153LL;

	t63 = ((x305-(x306-x307))|x308);

	if (t63 != -2166362705LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x310 = -1;
	int16_t x311 = 16;
	int8_t x312 = INT8_MAX;

	t64 = ((x309-(x310-x311))|x312);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x314 = 868137933306650002LLU;
	volatile uint64_t t65 = 7LLU;

	t65 = ((x313-(x314-x315))|x316);

	if (t65 != 17578606140402901894LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x317 = 28U;
	int16_t x318 = INT16_MIN;
	static uint64_t x319 = 1313565069686421403LLU;
	static volatile uint64_t t66 = UINT64_MAX;

	t66 = ((x317-(x318-x319))|x320);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x321 = 55U;
	uint8_t x322 = 0U;
	uint16_t x323 = 32U;
	int8_t x324 = INT8_MIN;
	volatile int32_t t67 = 0;

	t67 = ((x321-(x322-x323))|x324);

	if (t67 != -41) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x326 = -10;
	int32_t x327 = INT32_MIN;
	static uint32_t x328 = UINT32_MAX;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = ((x325-(x326-x327))|x328);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x330 = INT64_MIN;
	int16_t x331 = INT16_MIN;
	int8_t x332 = -1;
	volatile int64_t t69 = 3308754LL;

	t69 = ((x329-(x330-x331))|x332);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x337 = -3927503LL;
	static int8_t x339 = -1;
	int32_t x340 = INT32_MIN;
	int64_t t70 = 858001759788983LL;

	t70 = ((x337-(x338-x339))|x340);

	if (t70 != -3993039LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x341 = -1;
	int8_t x342 = INT8_MAX;
	uint64_t x344 = 113614083185LLU;
	volatile uint64_t t71 = 1581LLU;

	t71 = ((x341-(x342-x343))|x344);

	if (t71 != 32486702994906995LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x346 = 1963384043424LL;
	static int8_t x347 = -6;
	int32_t x348 = INT32_MIN;
	volatile int64_t t72 = -6979LL;

	t72 = ((x345-(x346-x347))|x348);

	if (t72 != -583989159LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x349 = INT16_MIN;
	int8_t x352 = INT8_MAX;
	volatile int32_t t73 = -11749;

	t73 = ((x349-(x350-x351))|x352);

	if (t73 != -65409) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x353 = 84339338128LLU;
	volatile int16_t x354 = INT16_MIN;
	volatile int16_t x355 = -1;

	t74 = ((x353-(x354-x355))|x356);

	if (t74 != 84339370975LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x357 = 8LLU;
	volatile int8_t x358 = -1;
	int64_t x359 = -1LL;
	volatile int64_t x360 = -3084079096LL;
	volatile uint64_t t75 = 24697229063956825LLU;

	t75 = ((x357-(x358-x359))|x360);

	if (t75 != 18446744070625472520LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x361 = INT16_MAX;
	uint32_t x362 = UINT32_MAX;
	volatile int64_t x363 = 6533LL;
	int64_t x364 = INT64_MAX;
	static volatile int64_t t76 = -177427853LL;

	t76 = ((x361-(x362-x363))|x364);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x365 = UINT64_MAX;
	int16_t x366 = -1;
	int64_t x367 = -508LL;
	volatile uint16_t x368 = 11U;

	t77 = ((x365-(x366-x367))|x368);

	if (t77 != 18446744073709551119LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x369 = -1;
	int16_t x370 = INT16_MIN;
	uint32_t x371 = UINT32_MAX;
	uint32_t x372 = UINT32_MAX;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = ((x369-(x370-x371))|x372);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x377 = 21166442822181155LLU;
	static uint16_t x379 = UINT16_MAX;
	volatile int16_t x380 = -1;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = ((x377-(x378-x379))|x380);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x381 = UINT64_MAX;
	uint16_t x382 = UINT16_MAX;
	int64_t x384 = INT64_MIN;
	uint64_t t80 = 555349162373286LLU;

	t80 = ((x381-(x382-x383))|x384);

	if (t80 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x386 = INT16_MIN;
	uint32_t x387 = 92425142U;
	uint32_t t81 = 9U;

	t81 = ((x385-(x386-x387))|x388);

	if (t81 != 2239908790U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x393 = UINT8_MAX;
	uint64_t x394 = 195354900488585LLU;
	uint16_t x395 = 14898U;
	volatile uint16_t x396 = 6164U;
	volatile uint64_t t82 = 1LLU;

	t82 = ((x393-(x394-x395))|x396);

	if (t82 != 18446548718809078204LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x397 = -1LL;
	static int64_t x398 = 302346761LL;
	int8_t x399 = -1;

	t83 = ((x397-(x398-x399))|x400);

	if (t83 != -302346763LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x401 = -1;
	uint64_t x402 = 10551493457665LLU;
	int32_t x403 = INT32_MAX;
	uint64_t t84 = 126342457745LLU;

	t84 = ((x401-(x402-x403))|x404);

	if (t84 != 18446733524363579135LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x405 = -1;
	static volatile int64_t x406 = -1LL;
	int8_t x407 = INT8_MIN;

	t85 = ((x405-(x406-x407))|x408);

	if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x409 = INT16_MAX;
	int32_t x410 = -1;
	int16_t x412 = -93;
	static volatile int32_t t86 = -3043648;

	t86 = ((x409-(x410-x411))|x412);

	if (t86 != -77) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x413 = 40;
	static int8_t x414 = -19;
	int16_t x415 = INT16_MAX;
	uint64_t x416 = 1002848026095302519LLU;
	uint64_t t87 = 20938207LLU;

	t87 = ((x413-(x414-x415))|x416);

	if (t87 != 1002848026095302527LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x421 = -1;
	uint32_t x422 = 989527U;
	int8_t x423 = INT8_MIN;
	int8_t x424 = INT8_MIN;
	volatile uint32_t t88 = 754U;

	t88 = ((x421-(x422-x423))|x424);

	if (t88 != 4294967208U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x425 = 2U;
	int16_t x426 = INT16_MAX;
	uint8_t x427 = 1U;
	int32_t t89 = 6;

	t89 = ((x425-(x426-x427))|x428);

	if (t89 != -1532) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x433 = 11;
	volatile int16_t x434 = INT16_MIN;
	int64_t x435 = -1LL;
	uint64_t x436 = 354801622462548LLU;
	static volatile uint64_t t90 = 1991075779LLU;

	t90 = ((x433-(x434-x435))|x436);

	if (t90 != 354801622495326LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x438 = 15U;
	int8_t x439 = INT8_MIN;
	volatile int8_t x440 = INT8_MIN;
	int32_t t91 = 170;

	t91 = ((x437-(x438-x439))|x440);

	if (t91 != -16) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x442 = INT8_MIN;
	int32_t x443 = INT32_MIN;
	static uint64_t x444 = 45640938922875898LLU;
	uint64_t t92 = 928432029120376LLU;

	t92 = ((x441-(x442-x443))|x444);

	if (t92 != 18446744072362564606LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x445 = UINT64_MAX;
	uint8_t x447 = 65U;
	int8_t x448 = INT8_MAX;
	static uint64_t t93 = 2582LLU;

	t93 = ((x445-(x446-x447))|x448);

	if (t93 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x449 = -1;
	int16_t x450 = 254;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = ((x449-(x450-x451))|x452);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x453 = -1LL;
	uint8_t x455 = UINT8_MAX;
	int8_t x456 = INT8_MIN;
	uint64_t t95 = 3760179LLU;

	t95 = ((x453-(x454-x455))|x456);

	if (t95 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x461 = -1;
	int32_t x462 = 0;
	static int8_t x463 = 19;
	static int8_t x464 = INT8_MIN;
	int32_t t96 = 1;

	t96 = ((x461-(x462-x463))|x464);

	if (t96 != -110) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x469 = INT8_MIN;
	static int64_t x470 = -1LL;
	uint32_t x472 = 25U;
	volatile int64_t t97 = -103393916216LL;

	t97 = ((x469-(x470-x471))|x472);

	if (t97 != -37LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x473 = -1734059216500567217LL;
	static uint32_t x474 = 19611542U;
	static int16_t x475 = 59;
	uint16_t x476 = UINT16_MAX;
	volatile int64_t t98 = -151981813LL;

	t98 = ((x473-(x474-x475))|x476);

	if (t98 != -1734059216520151041LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x483 = 0;
	int8_t x484 = 30;
	int32_t t99 = -14868;

	t99 = ((x481-(x482-x483))|x484);

	if (t99 != -97) { NG(); } else { ; }
	
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

