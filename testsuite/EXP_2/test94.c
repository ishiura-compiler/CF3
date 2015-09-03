#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -15550;
int32_t t0 = 27;
int16_t x5 = -8;
static int16_t x8 = 7744;
int32_t t1 = 1;
int64_t x10 = 96809879943552442LL;
uint32_t x13 = 0U;
uint8_t x18 = 1U;
volatile uint16_t x20 = 3U;
uint32_t x30 = UINT32_MAX;
int32_t t5 = -176837;
uint64_t x37 = UINT64_MAX;
int64_t x39 = INT64_MIN;
int64_t x62 = -18181LL;
static volatile int32_t t10 = 25;
int16_t x65 = INT16_MIN;
volatile int32_t t11 = 22984636;
static int8_t x78 = -49;
uint16_t x80 = 27U;
int64_t t15 = 11878330080839694LL;
static uint32_t x86 = UINT32_MAX;
static int8_t x87 = -1;
int8_t x91 = -1;
int8_t x92 = INT8_MAX;
volatile uint32_t x93 = UINT32_MAX;
volatile int32_t x104 = INT32_MAX;
int32_t x127 = -1;
static int32_t x130 = -1;
volatile int8_t x131 = -5;
int32_t t25 = 85;
uint8_t x135 = 1U;
uint32_t x136 = 1410060214U;
int16_t x137 = INT16_MAX;
uint64_t x147 = 24715708756LLU;
int16_t x154 = -814;
static volatile int64_t x155 = -1LL;
volatile uint64_t x160 = UINT64_MAX;
uint8_t x161 = 58U;
uint32_t t33 = 48105949U;
static uint16_t x175 = 13527U;
uint8_t x176 = 62U;
uint16_t x181 = 0U;
static int16_t x182 = INT16_MIN;
volatile int16_t x196 = 988;
volatile int32_t t41 = 2396411;
uint32_t x197 = UINT32_MAX;
uint64_t t42 = 65491658992LLU;
uint32_t x203 = UINT32_MAX;
int64_t x204 = INT64_MAX;
int16_t x209 = -1;
int32_t x210 = 10068;
uint64_t x214 = 734534103764290103LLU;
volatile int32_t t45 = -37;
static int32_t x220 = INT32_MAX;
static volatile int32_t t46 = -1017;
volatile int8_t x223 = INT8_MIN;
volatile int8_t x228 = 5;
int32_t x234 = -1;
uint8_t x240 = UINT8_MAX;
int8_t x242 = -1;
uint32_t x243 = 9349167U;
int32_t t51 = 70;
uint16_t x245 = 1419U;
static int64_t x272 = 1166987019372LL;
int64_t x279 = INT64_MIN;
int32_t t58 = 2;
int16_t x283 = -1;
int64_t x284 = -1LL;
int8_t x285 = INT8_MAX;
static volatile uint8_t x290 = 4U;
static uint64_t x300 = 4087233336LLU;
int16_t x306 = INT16_MIN;
volatile uint64_t t64 = 3950619823899LLU;
volatile int32_t x309 = 2020;
int16_t x310 = INT16_MIN;
uint64_t x318 = 2608046745637026344LLU;
int16_t x319 = INT16_MIN;
volatile int16_t x334 = INT16_MIN;
int32_t t71 = 205;
static int8_t x341 = INT8_MIN;
int16_t x342 = INT16_MIN;
int8_t x347 = INT8_MIN;
static int16_t x349 = -241;
int32_t x352 = INT32_MIN;
int32_t t74 = -199507;
int8_t x355 = INT8_MIN;
uint64_t t75 = 3856556743LLU;
int64_t x357 = INT64_MAX;
int8_t x365 = INT8_MIN;
volatile int64_t x368 = -1LL;
int32_t x385 = INT32_MIN;
volatile uint16_t x387 = 17U;
static uint8_t x394 = UINT8_MAX;
volatile uint32_t t83 = 3U;
static volatile int64_t x402 = -1LL;
uint32_t t84 = 16297U;
static volatile int8_t x405 = -19;
static uint32_t x408 = UINT32_MAX;
int32_t x409 = -16092331;
int32_t x412 = 821646;
int32_t t86 = -161;
int64_t x416 = -1LL;
int8_t x430 = INT8_MIN;
uint16_t x441 = 0U;
static int64_t x444 = INT64_MIN;
static int16_t x454 = -4;
static uint64_t x455 = 417627105915LLU;
volatile int16_t x456 = INT16_MIN;
volatile int8_t x467 = -19;
int64_t x476 = INT64_MAX;


void f0(void) {
	int16_t x2 = -1;
	int8_t x3 = INT8_MAX;
	uint16_t x4 = 8U;

	t0 = ((x1==(x2+x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	volatile uint8_t x7 = 48U;

	t1 = ((x5==(x6+x7))*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int64_t x11 = -2078979472LL;
	volatile uint16_t x12 = 4240U;
	volatile int32_t t2 = 1;

	t2 = ((x9==(x10+x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x14 = INT8_MAX;
	int8_t x15 = -1;
	uint64_t x16 = 28027455700LLU;
	volatile uint64_t t3 = 32208025LLU;

	t3 = ((x13==(x14+x15))*x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	static uint16_t x19 = UINT16_MAX;
	volatile int32_t t4 = -3543509;

	t4 = ((x17==(x18+x19))*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = UINT8_MAX;
	int8_t x31 = INT8_MIN;
	static uint8_t x32 = UINT8_MAX;

	t5 = ((x29==(x30+x31))*x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x38 = UINT64_MAX;
	volatile uint32_t x40 = 1776207U;
	volatile uint32_t t6 = 94509U;

	t6 = ((x37==(x38+x39))*x40);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = 333U;
	int32_t x42 = 104;
	static int8_t x43 = INT8_MAX;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t7 = -402598357;

	t7 = ((x41==(x42+x43))*x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = -1;
	uint64_t x50 = UINT64_MAX;
	int32_t x51 = INT32_MAX;
	uint32_t x52 = UINT32_MAX;
	uint32_t t8 = 887U;

	t8 = ((x49==(x50+x51))*x52);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x57 = UINT16_MAX;
	uint16_t x58 = 1U;
	int16_t x59 = -1;
	int8_t x60 = 0;
	volatile int32_t t9 = -2690388;

	t9 = ((x57==(x58+x59))*x60);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x61 = INT64_MAX;
	static volatile int16_t x63 = INT16_MAX;
	static int16_t x64 = -1;

	t10 = ((x61==(x62+x63))*x64);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x66 = -7470LL;
	int16_t x67 = -1645;
	volatile int16_t x68 = INT16_MIN;

	t11 = ((x65==(x66+x67))*x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x69 = INT16_MAX;
	volatile uint64_t x70 = 263717014647531154LLU;
	static int64_t x71 = 704LL;
	int64_t x72 = INT64_MIN;
	int64_t t12 = 205327414578LL;

	t12 = ((x69==(x70+x71))*x72);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = INT8_MAX;
	static int64_t x74 = INT64_MAX;
	int8_t x75 = INT8_MIN;
	int32_t x76 = INT32_MIN;
	static int32_t t13 = 102;

	t13 = ((x73==(x74+x75))*x76);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = 5591322170LL;
	int64_t x79 = -579697831704LL;
	static int32_t t14 = -337;

	t14 = ((x77==(x78+x79))*x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x81 = INT32_MIN;
	uint8_t x82 = UINT8_MAX;
	uint64_t x83 = 24997LLU;
	int64_t x84 = INT64_MIN;

	t15 = ((x81==(x82+x83))*x84);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = 57332LL;
	int8_t x88 = -1;
	int32_t t16 = 4872333;

	t16 = ((x85==(x86+x87))*x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x89 = INT16_MIN;
	static volatile int8_t x90 = -1;
	int32_t t17 = 823229;

	t17 = ((x89==(x90+x91))*x92);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x94 = UINT32_MAX;
	static volatile int8_t x95 = 0;
	uint32_t x96 = UINT32_MAX;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = ((x93==(x94+x95))*x96);

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x97 = INT8_MIN;
	int32_t x98 = INT32_MIN;
	int8_t x99 = 0;
	int8_t x100 = INT8_MIN;
	static volatile int32_t t19 = 18222;

	t19 = ((x97==(x98+x99))*x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x101 = UINT16_MAX;
	int8_t x102 = 33;
	int16_t x103 = INT16_MAX;
	volatile int32_t t20 = -60073;

	t20 = ((x101==(x102+x103))*x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = 1U;
	volatile uint16_t x106 = UINT16_MAX;
	int32_t x107 = -12302814;
	volatile int64_t x108 = INT64_MAX;
	static int64_t t21 = 109616525936394114LL;

	t21 = ((x105==(x106+x107))*x108);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x109 = UINT32_MAX;
	static int16_t x110 = INT16_MIN;
	int16_t x111 = -1;
	uint32_t x112 = 91604U;
	uint32_t t22 = 24U;

	t22 = ((x109==(x110+x111))*x112);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x117 = 95U;
	volatile int16_t x118 = -110;
	int64_t x119 = -1LL;
	int32_t x120 = -3711;
	int32_t t23 = -455514309;

	t23 = ((x117==(x118+x119))*x120);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x125 = 2606U;
	uint16_t x126 = UINT16_MAX;
	int32_t x128 = INT32_MIN;
	static volatile int32_t t24 = 0;

	t24 = ((x125==(x126+x127))*x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = 184760852;
	int16_t x132 = 0;

	t25 = ((x129==(x130+x131))*x132);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x133 = -70;
	static int16_t x134 = -7149;
	static uint32_t t26 = 6663173U;

	t26 = ((x133==(x134+x135))*x136);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x138 = -1;
	volatile int32_t x139 = 1;
	static uint32_t x140 = UINT32_MAX;
	volatile uint32_t t27 = 2215354U;

	t27 = ((x137==(x138+x139))*x140);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x141 = 4557966LL;
	int16_t x142 = 11;
	static uint32_t x143 = 15U;
	int16_t x144 = 0;
	volatile int32_t t28 = 111708;

	t28 = ((x141==(x142+x143))*x144);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x145 = 2U;
	static int32_t x146 = INT32_MIN;
	int16_t x148 = -1;
	static int32_t t29 = -15017824;

	t29 = ((x145==(x146+x147))*x148);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x149 = INT64_MIN;
	int64_t x150 = INT64_MAX;
	int32_t x151 = -1;
	volatile int64_t x152 = 15589LL;
	volatile int64_t t30 = -19083481LL;

	t30 = ((x149==(x150+x151))*x152);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x153 = INT16_MIN;
	int16_t x156 = -1;
	volatile int32_t t31 = -45;

	t31 = ((x153==(x154+x155))*x156);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = -1LL;
	int8_t x158 = INT8_MAX;
	static int8_t x159 = INT8_MAX;
	volatile uint64_t t32 = 822402587151585684LLU;

	t32 = ((x157==(x158+x159))*x160);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x162 = INT8_MAX;
	uint16_t x163 = 14484U;
	static volatile uint32_t x164 = 7121U;

	t33 = ((x161==(x162+x163))*x164);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x165 = UINT8_MAX;
	volatile uint64_t x166 = UINT64_MAX;
	uint8_t x167 = 28U;
	static int8_t x168 = -5;
	static int32_t t34 = -38931;

	t34 = ((x165==(x166+x167))*x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x169 = 1U;
	uint16_t x170 = UINT16_MAX;
	int16_t x171 = -1;
	int64_t x172 = INT64_MIN;
	volatile int64_t t35 = -13134802147220177LL;

	t35 = ((x169==(x170+x171))*x172);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = 113;
	volatile uint64_t x174 = UINT64_MAX;
	volatile int32_t t36 = -68992878;

	t36 = ((x173==(x174+x175))*x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = INT8_MAX;
	static int32_t x178 = -1;
	int32_t x179 = -52487953;
	static int64_t x180 = -1LL;
	int64_t t37 = 50901050105601LL;

	t37 = ((x177==(x178+x179))*x180);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x183 = UINT32_MAX;
	static volatile uint16_t x184 = UINT16_MAX;
	static volatile int32_t t38 = -620694;

	t38 = ((x181==(x182+x183))*x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x185 = 32U;
	static volatile uint8_t x186 = UINT8_MAX;
	uint32_t x187 = UINT32_MAX;
	uint16_t x188 = UINT16_MAX;
	int32_t t39 = 8566936;

	t39 = ((x185==(x186+x187))*x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x189 = 1207U;
	volatile int64_t x190 = -1LL;
	int64_t x191 = -993530452LL;
	static int32_t x192 = -25530342;
	volatile int32_t t40 = -304;

	t40 = ((x189==(x190+x191))*x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = -4092;
	static int8_t x194 = INT8_MIN;
	int16_t x195 = 1308;

	t41 = ((x193==(x194+x195))*x196);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x198 = INT16_MIN;
	static uint32_t x199 = UINT32_MAX;
	uint64_t x200 = 3LLU;

	t42 = ((x197==(x198+x199))*x200);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = -206;
	static int8_t x202 = -1;
	volatile int64_t t43 = 6LL;

	t43 = ((x201==(x202+x203))*x204);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x211 = -1LL;
	int8_t x212 = 62;
	int32_t t44 = 579;

	t44 = ((x209==(x210+x211))*x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x213 = -1;
	volatile uint8_t x215 = 19U;
	uint16_t x216 = 113U;

	t45 = ((x213==(x214+x215))*x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = INT64_MIN;
	int8_t x218 = 0;
	uint16_t x219 = 6U;

	t46 = ((x217==(x218+x219))*x220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x221 = -4140;
	int64_t x222 = INT64_MAX;
	int32_t x224 = -1;
	volatile int32_t t47 = -4436;

	t47 = ((x221==(x222+x223))*x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x225 = INT64_MIN;
	uint8_t x226 = 51U;
	int8_t x227 = 0;
	static volatile int32_t t48 = 1140141;

	t48 = ((x225==(x226+x227))*x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x233 = 11U;
	int64_t x235 = -1LL;
	int8_t x236 = INT8_MAX;
	static volatile int32_t t49 = 1;

	t49 = ((x233==(x234+x235))*x236);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x237 = 15276;
	uint8_t x238 = UINT8_MAX;
	uint32_t x239 = 280215U;
	int32_t t50 = 2396442;

	t50 = ((x237==(x238+x239))*x240);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x241 = 0U;
	uint16_t x244 = 5517U;

	t51 = ((x241==(x242+x243))*x244);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x246 = 3264257611515LL;
	volatile int8_t x247 = INT8_MAX;
	uint32_t x248 = UINT32_MAX;
	volatile uint32_t t52 = 28U;

	t52 = ((x245==(x246+x247))*x248);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x257 = -17763009;
	uint32_t x258 = UINT32_MAX;
	uint16_t x259 = 5U;
	uint8_t x260 = UINT8_MAX;
	int32_t t53 = -8322043;

	t53 = ((x257==(x258+x259))*x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x261 = 18344LLU;
	int32_t x262 = 14123205;
	int32_t x263 = -25332;
	int16_t x264 = 84;
	int32_t t54 = 196970447;

	t54 = ((x261==(x262+x263))*x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x265 = INT16_MIN;
	volatile uint8_t x266 = 43U;
	int64_t x267 = -1LL;
	int32_t x268 = INT32_MAX;
	static int32_t t55 = 0;

	t55 = ((x265==(x266+x267))*x268);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x269 = UINT8_MAX;
	uint32_t x270 = UINT32_MAX;
	uint64_t x271 = 11899932880LLU;
	volatile int64_t t56 = -549560368700804948LL;

	t56 = ((x269==(x270+x271))*x272);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x273 = UINT64_MAX;
	int16_t x274 = INT16_MIN;
	static int8_t x275 = INT8_MIN;
	int8_t x276 = -1;
	static int32_t t57 = 455909903;

	t57 = ((x273==(x274+x275))*x276);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x277 = 98310124U;
	uint16_t x278 = UINT16_MAX;
	volatile int32_t x280 = -618;

	t58 = ((x277==(x278+x279))*x280);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x281 = INT32_MIN;
	uint16_t x282 = 0U;
	volatile int64_t t59 = 9721053803919LL;

	t59 = ((x281==(x282+x283))*x284);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x286 = -1160;
	int16_t x287 = 46;
	volatile uint64_t x288 = UINT64_MAX;
	uint64_t t60 = 597938884601773317LLU;

	t60 = ((x285==(x286+x287))*x288);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x289 = 1923LLU;
	int16_t x291 = -1;
	volatile int32_t x292 = -1;
	int32_t t61 = -314;

	t61 = ((x289==(x290+x291))*x292);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x297 = -184;
	int16_t x298 = INT16_MAX;
	volatile int64_t x299 = INT64_MIN;
	volatile uint64_t t62 = 13425618706LLU;

	t62 = ((x297==(x298+x299))*x300);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x301 = UINT8_MAX;
	uint32_t x302 = 9U;
	volatile int64_t x303 = INT64_MIN;
	static int16_t x304 = -1;
	int32_t t63 = 1783107;

	t63 = ((x301==(x302+x303))*x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x305 = INT16_MIN;
	uint32_t x307 = 24109651U;
	uint64_t x308 = 3258379748343351LLU;

	t64 = ((x305==(x306+x307))*x308);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x311 = INT16_MAX;
	int16_t x312 = INT16_MIN;
	int32_t t65 = -23;

	t65 = ((x309==(x310+x311))*x312);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x313 = 4;
	uint8_t x314 = 1U;
	uint32_t x315 = 25U;
	int32_t x316 = INT32_MAX;
	static volatile int32_t t66 = 1030673;

	t66 = ((x313==(x314+x315))*x316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x317 = INT8_MAX;
	int16_t x320 = -7640;
	volatile int32_t t67 = 53;

	t67 = ((x317==(x318+x319))*x320);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x321 = 3;
	uint32_t x322 = 122U;
	uint32_t x323 = 1407332779U;
	static int64_t x324 = INT64_MAX;
	int64_t t68 = -11722752979065988LL;

	t68 = ((x321==(x322+x323))*x324);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x329 = 1;
	int8_t x330 = INT8_MIN;
	uint8_t x331 = 2U;
	int16_t x332 = -1;
	int32_t t69 = 13346646;

	t69 = ((x329==(x330+x331))*x332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x333 = 4U;
	static int8_t x335 = INT8_MIN;
	int8_t x336 = -8;
	static volatile int32_t t70 = 87446;

	t70 = ((x333==(x334+x335))*x336);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x337 = -9128LL;
	int32_t x338 = INT32_MIN;
	uint8_t x339 = 1U;
	int16_t x340 = -45;

	t71 = ((x337==(x338+x339))*x340);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x343 = 26158957LLU;
	int8_t x344 = -1;
	volatile int32_t t72 = -1007809709;

	t72 = ((x341==(x342+x343))*x344);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x345 = 20U;
	int32_t x346 = INT32_MAX;
	int8_t x348 = INT8_MIN;
	volatile int32_t t73 = 5800414;

	t73 = ((x345==(x346+x347))*x348);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x350 = INT64_MIN;
	int64_t x351 = 52LL;

	t74 = ((x349==(x350+x351))*x352);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x353 = INT32_MIN;
	volatile uint32_t x354 = UINT32_MAX;
	uint64_t x356 = 38455346981LLU;

	t75 = ((x353==(x354+x355))*x356);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x358 = 628507786U;
	int64_t x359 = -1LL;
	static int8_t x360 = INT8_MIN;
	static volatile int32_t t76 = 30619367;

	t76 = ((x357==(x358+x359))*x360);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x361 = INT16_MAX;
	static int16_t x362 = 18;
	int64_t x363 = -30849358LL;
	int16_t x364 = -1;
	volatile int32_t t77 = 66333974;

	t77 = ((x361==(x362+x363))*x364);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x366 = INT16_MIN;
	uint8_t x367 = 9U;
	int64_t t78 = -45927349218061629LL;

	t78 = ((x365==(x366+x367))*x368);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x369 = INT8_MIN;
	volatile int8_t x370 = -1;
	int8_t x371 = -16;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t79 = 405;

	t79 = ((x369==(x370+x371))*x372);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x377 = UINT64_MAX;
	uint16_t x378 = UINT16_MAX;
	uint32_t x379 = UINT32_MAX;
	int32_t x380 = INT32_MIN;
	volatile int32_t t80 = -3093147;

	t80 = ((x377==(x378+x379))*x380);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x381 = 46U;
	uint64_t x382 = UINT64_MAX;
	int16_t x383 = -1152;
	uint32_t x384 = 604720442U;
	volatile uint32_t t81 = 455236U;

	t81 = ((x381==(x382+x383))*x384);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x386 = INT32_MIN;
	static int8_t x388 = INT8_MAX;
	volatile int32_t t82 = 1;

	t82 = ((x385==(x386+x387))*x388);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x393 = UINT64_MAX;
	static uint64_t x395 = UINT64_MAX;
	uint32_t x396 = 2903U;

	t83 = ((x393==(x394+x395))*x396);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x401 = INT32_MAX;
	int32_t x403 = INT32_MIN;
	uint32_t x404 = UINT32_MAX;

	t84 = ((x401==(x402+x403))*x404);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x406 = -1;
	int32_t x407 = 19025923;
	static volatile uint32_t t85 = 6U;

	t85 = ((x405==(x406+x407))*x408);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x410 = INT16_MAX;
	static uint16_t x411 = UINT16_MAX;

	t86 = ((x409==(x410+x411))*x412);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x413 = 3415887LLU;
	static int16_t x414 = -1;
	static uint8_t x415 = UINT8_MAX;
	int64_t t87 = 59347605178703LL;

	t87 = ((x413==(x414+x415))*x416);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x417 = 9U;
	int8_t x418 = INT8_MIN;
	int32_t x419 = 1;
	volatile int16_t x420 = 562;
	volatile int32_t t88 = 169196;

	t88 = ((x417==(x418+x419))*x420);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x421 = 7379U;
	int16_t x422 = -4516;
	int8_t x423 = -1;
	int8_t x424 = INT8_MAX;
	volatile int32_t t89 = -4052;

	t89 = ((x421==(x422+x423))*x424);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x425 = INT32_MIN;
	int16_t x426 = -1;
	static uint16_t x427 = UINT16_MAX;
	static int32_t x428 = 165852991;
	volatile int32_t t90 = -1456084;

	t90 = ((x425==(x426+x427))*x428);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x429 = INT32_MIN;
	int16_t x431 = INT16_MIN;
	static uint32_t x432 = 1U;
	uint32_t t91 = 654515U;

	t91 = ((x429==(x430+x431))*x432);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x433 = INT16_MIN;
	int16_t x434 = -1;
	static uint8_t x435 = 9U;
	int8_t x436 = -1;
	volatile int32_t t92 = -8901660;

	t92 = ((x433==(x434+x435))*x436);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x442 = INT32_MAX;
	static uint64_t x443 = 1389758581798615LLU;
	int64_t t93 = 5501584210691817LL;

	t93 = ((x441==(x442+x443))*x444);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x449 = -1LL;
	int64_t x450 = 105227LL;
	uint32_t x451 = 557130171U;
	int32_t x452 = INT32_MAX;
	volatile int32_t t94 = -4965570;

	t94 = ((x449==(x450+x451))*x452);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x453 = 8818075521275LL;
	volatile int32_t t95 = 58485941;

	t95 = ((x453==(x454+x455))*x456);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x461 = 3U;
	int8_t x462 = -1;
	int8_t x463 = INT8_MIN;
	uint16_t x464 = UINT16_MAX;
	volatile int32_t t96 = 254550933;

	t96 = ((x461==(x462+x463))*x464);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x465 = 331570U;
	int64_t x466 = 29LL;
	int16_t x468 = INT16_MIN;
	volatile int32_t t97 = -3732;

	t97 = ((x465==(x466+x467))*x468);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x469 = INT64_MIN;
	static uint64_t x470 = UINT64_MAX;
	int32_t x471 = 0;
	static int64_t x472 = INT64_MAX;
	volatile int64_t t98 = 149LL;

	t98 = ((x469==(x470+x471))*x472);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x473 = -1;
	int16_t x474 = -1;
	int64_t x475 = -1LL;
	volatile int64_t t99 = -3015600437638LL;

	t99 = ((x473==(x474+x475))*x476);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

