#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
uint16_t x6 = 1U;
int16_t x15 = INT16_MAX;
int64_t x16 = INT64_MAX;
int16_t x17 = INT16_MIN;
int8_t x19 = -15;
static int32_t x24 = -1;
int32_t t5 = -5269;
uint16_t x29 = 1U;
int64_t x32 = INT64_MIN;
int64_t t7 = -8189LL;
static int32_t x35 = 5;
int16_t x36 = INT16_MIN;
int8_t x45 = -1;
int64_t x47 = INT64_MAX;
uint64_t x50 = 283987468215658LLU;
volatile int32_t x52 = INT32_MAX;
int32_t t12 = -1459496;
int8_t x53 = -2;
int64_t x57 = INT64_MIN;
int16_t x58 = -1;
uint16_t x60 = 16261U;
int64_t t15 = 154238649601937LL;
volatile int32_t t17 = 43;
static int64_t x77 = INT64_MIN;
uint64_t x87 = UINT64_MAX;
int32_t t21 = 303;
static int32_t x90 = INT32_MAX;
static volatile int8_t x92 = INT8_MIN;
int16_t x95 = INT16_MAX;
volatile int64_t x99 = INT64_MAX;
volatile int16_t x100 = -6;
static volatile uint64_t x101 = UINT64_MAX;
uint8_t x107 = 1U;
volatile int32_t t26 = 20603;
int32_t x110 = INT32_MAX;
volatile uint8_t x113 = 1U;
volatile int16_t x115 = 11970;
volatile uint8_t x126 = 18U;
static volatile int32_t t31 = 1341014;
uint32_t x143 = 53199111U;
volatile int64_t t33 = 44393LL;
volatile uint16_t x145 = 1787U;
uint32_t x150 = 30607528U;
volatile int32_t x151 = -1;
uint64_t t35 = 6935320LLU;
static int8_t x155 = INT8_MIN;
int8_t x158 = INT8_MIN;
volatile int8_t x159 = INT8_MIN;
static volatile int16_t x165 = INT16_MIN;
int16_t x168 = -1;
int8_t x169 = INT8_MIN;
volatile uint32_t x176 = 15511U;
uint64_t x192 = UINT64_MAX;
uint32_t x200 = UINT32_MAX;
uint32_t t47 = 7081U;
volatile int32_t t48 = 6513;
int8_t x209 = 3;
uint16_t x212 = 3U;
int64_t x221 = -1LL;
volatile int32_t x224 = -12250;
int64_t x232 = -1506LL;
volatile int64_t t54 = -1138210LL;
static volatile int16_t x238 = 948;
uint8_t x245 = UINT8_MAX;
volatile int16_t x246 = INT16_MIN;
int8_t x249 = INT8_MIN;
int16_t x252 = -1;
static int16_t x255 = 62;
static uint16_t x264 = 5247U;
int16_t x267 = INT16_MIN;
int32_t t63 = -2;
volatile int8_t x290 = -2;
int16_t x291 = -456;
static uint8_t x305 = 7U;
uint64_t t75 = 510891LLU;
int8_t x322 = -6;
static volatile int32_t x323 = INT32_MIN;
uint16_t x325 = UINT16_MAX;
int16_t x327 = INT16_MIN;
uint8_t x328 = UINT8_MAX;
volatile int32_t t77 = -64;
volatile int8_t x332 = INT8_MIN;
volatile int8_t x333 = 1;
int8_t x334 = INT8_MIN;
volatile uint64_t x337 = 134LLU;
static int32_t x338 = INT32_MIN;
volatile int64_t t80 = -94499990127215743LL;
volatile uint32_t x342 = UINT32_MAX;
int32_t x344 = INT32_MIN;
volatile int32_t t81 = -483;
uint8_t x345 = 3U;
int64_t x349 = 4497267344LL;
int8_t x350 = -1;
volatile int64_t t85 = -100273LL;
int32_t x363 = -7;
int8_t x371 = INT8_MAX;
int32_t x372 = 4389;
int32_t x375 = INT32_MIN;
volatile uint8_t x392 = 1U;
uint8_t x393 = 3U;
volatile int64_t x402 = 38LL;
int8_t x411 = INT8_MAX;
int32_t t98 = -1552990;
uint8_t x417 = UINT8_MAX;
int64_t x420 = INT64_MIN;


void f0(void) {
	uint16_t x2 = UINT16_MAX;
	int32_t x3 = 185532;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 28532814LLU;

	t0 = ((x1==(x2/x3))/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x7 = 7997;
	int64_t x8 = -177474652679098LL;
	volatile int64_t t1 = -1475780LL;

	t1 = ((x5==(x6/x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -365617LL;
	int8_t x10 = INT8_MIN;
	volatile int8_t x11 = -1;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -1491;

	t2 = ((x9==(x10/x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	volatile uint16_t x14 = 4052U;
	volatile int64_t t3 = 1786823485410LL;

	t3 = ((x13==(x14/x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1;
	static int32_t x20 = INT32_MIN;
	int32_t t4 = 13287654;

	t4 = ((x17==(x18/x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -54;
	int64_t x22 = INT64_MAX;
	int32_t x23 = 6482951;

	t5 = ((x21==(x22/x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 5618164116339LLU;
	uint32_t x26 = 7447636U;
	int8_t x27 = INT8_MIN;
	int16_t x28 = 209;
	int32_t t6 = -19915712;

	t6 = ((x25==(x26/x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x30 = UINT64_MAX;
	int8_t x31 = INT8_MIN;

	t7 = ((x29==(x30/x31))/x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = 36;
	int16_t x34 = -1;
	volatile int32_t t8 = 26924;

	t8 = ((x33==(x34/x35))/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 0U;
	uint64_t x38 = 345LLU;
	volatile int8_t x39 = -1;
	int8_t x40 = -1;
	static int32_t t9 = 30136;

	t9 = ((x37==(x38/x39))/x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	static int32_t x42 = -36458328;
	int8_t x43 = -6;
	uint16_t x44 = 10914U;
	static volatile int32_t t10 = -1197;

	t10 = ((x41==(x42/x43))/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = 418140012LL;
	int16_t x48 = 774;
	int32_t t11 = -12601370;

	t11 = ((x45==(x46/x47))/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 57U;
	static uint16_t x51 = UINT16_MAX;

	t12 = ((x49==(x50/x51))/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x54 = 492U;
	uint64_t x55 = 154821957004LLU;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -211499;

	t13 = ((x53==(x54/x55))/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x59 = 291553LL;
	volatile int32_t t14 = -961;

	t14 = ((x57==(x58/x59))/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 12U;
	int64_t x62 = INT64_MIN;
	volatile int8_t x63 = -22;
	volatile int64_t x64 = INT64_MIN;

	t15 = ((x61==(x62/x63))/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -62;
	int8_t x66 = -1;
	int64_t x67 = -1LL;
	volatile int8_t x68 = INT8_MAX;
	static int32_t t16 = 26;

	t16 = ((x65==(x66/x67))/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MAX;
	uint16_t x70 = 7402U;
	int64_t x71 = -1LL;
	volatile int8_t x72 = -1;

	t17 = ((x69==(x70/x71))/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	int16_t x74 = INT16_MAX;
	uint64_t x75 = 32608304405LLU;
	static volatile int32_t x76 = INT32_MIN;
	int32_t t18 = -5102;

	t18 = ((x73==(x74/x75))/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x78 = INT8_MIN;
	static uint8_t x79 = UINT8_MAX;
	uint16_t x80 = 499U;
	volatile int32_t t19 = 91;

	t19 = ((x77==(x78/x79))/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 263755876U;
	uint64_t x82 = 6549877LLU;
	static uint8_t x83 = UINT8_MAX;
	static int64_t x84 = INT64_MAX;
	volatile int64_t t20 = -5444640978400LL;

	t20 = ((x81==(x82/x83))/x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = 23;
	int32_t x86 = INT32_MAX;
	static int32_t x88 = INT32_MAX;

	t21 = ((x85==(x86/x87))/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = UINT16_MAX;
	uint8_t x91 = 3U;
	static volatile int32_t t22 = -17707;

	t22 = ((x89==(x90/x91))/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 8247;
	uint16_t x94 = 0U;
	static int16_t x96 = 1;
	volatile int32_t t23 = 6381;

	t23 = ((x93==(x94/x95))/x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -60;
	volatile uint32_t x98 = UINT32_MAX;
	int32_t t24 = 6458394;

	t24 = ((x97==(x98/x99))/x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = INT32_MAX;
	int16_t x103 = INT16_MIN;
	volatile int32_t x104 = -1;
	volatile int32_t t25 = -52305;

	t25 = ((x101==(x102/x103))/x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -11;
	int16_t x106 = INT16_MIN;
	int8_t x108 = -2;

	t26 = ((x105==(x106/x107))/x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 1;
	int16_t x111 = -14721;
	uint16_t x112 = 19967U;
	int32_t t27 = 3816952;

	t27 = ((x109==(x110/x111))/x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x114 = UINT8_MAX;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -1;

	t28 = ((x113==(x114/x115))/x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x117 = 0U;
	int64_t x118 = -1905522LL;
	int64_t x119 = INT64_MAX;
	static uint64_t x120 = UINT64_MAX;
	volatile uint64_t t29 = 96424766436305301LLU;

	t29 = ((x117==(x118/x119))/x120);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	int32_t x127 = INT32_MAX;
	int64_t x128 = 540473333377LL;
	volatile int64_t t30 = 6835839886390532LL;

	t30 = ((x125==(x126/x127))/x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = UINT32_MAX;
	volatile int16_t x130 = INT16_MAX;
	static int8_t x131 = INT8_MIN;
	volatile uint16_t x132 = UINT16_MAX;

	t31 = ((x129==(x130/x131))/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x133 = 5;
	static int16_t x134 = -145;
	uint8_t x135 = UINT8_MAX;
	uint32_t x136 = 89990816U;
	volatile uint32_t t32 = 71973873U;

	t32 = ((x133==(x134/x135))/x136);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x141 = 7U;
	uint64_t x142 = 9389402234259975LLU;
	int64_t x144 = INT64_MIN;

	t33 = ((x141==(x142/x143))/x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x146 = UINT8_MAX;
	int32_t x147 = 3;
	uint32_t x148 = 139007U;
	uint32_t t34 = 161809696U;

	t34 = ((x145==(x146/x147))/x148);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MAX;
	volatile uint64_t x152 = 223449316503LLU;

	t35 = ((x149==(x150/x151))/x152);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = 3U;
	static int16_t x154 = -1;
	uint16_t x156 = 1U;
	static int32_t t36 = -224569;

	t36 = ((x153==(x154/x155))/x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = 0U;
	volatile int64_t x160 = 3134968897LL;
	int64_t t37 = -82224895LL;

	t37 = ((x157==(x158/x159))/x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x161 = UINT16_MAX;
	int64_t x162 = 2402089869217335392LL;
	volatile int16_t x163 = INT16_MAX;
	int64_t x164 = INT64_MIN;
	int64_t t38 = 72674430354096LL;

	t38 = ((x161==(x162/x163))/x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x166 = UINT16_MAX;
	int16_t x167 = 1;
	volatile int32_t t39 = -27;

	t39 = ((x165==(x166/x167))/x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x170 = 4;
	int8_t x171 = -2;
	int64_t x172 = -1LL;
	volatile int64_t t40 = -16880966389791LL;

	t40 = ((x169==(x170/x171))/x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = -1LL;
	uint8_t x174 = UINT8_MAX;
	uint64_t x175 = 12931673LLU;
	uint32_t t41 = 24U;

	t41 = ((x173==(x174/x175))/x176);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 86U;
	uint16_t x178 = 1U;
	uint16_t x179 = 2U;
	uint8_t x180 = 21U;
	int32_t t42 = 34908579;

	t42 = ((x177==(x178/x179))/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x181 = INT64_MAX;
	uint64_t x182 = 1645260752LLU;
	uint8_t x183 = 1U;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t43 = 5758;

	t43 = ((x181==(x182/x183))/x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x185 = INT64_MAX;
	uint64_t x186 = UINT64_MAX;
	int8_t x187 = -1;
	int16_t x188 = -7347;
	volatile int32_t t44 = -14994;

	t44 = ((x185==(x186/x187))/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = 4U;
	volatile int8_t x190 = -1;
	uint64_t x191 = UINT64_MAX;
	uint64_t t45 = 46LLU;

	t45 = ((x189==(x190/x191))/x192);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x193 = 2U;
	int16_t x194 = -1;
	uint16_t x195 = 29064U;
	uint8_t x196 = UINT8_MAX;
	int32_t t46 = -131293073;

	t46 = ((x193==(x194/x195))/x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x197 = INT32_MAX;
	uint32_t x198 = 5U;
	static volatile uint32_t x199 = 175U;

	t47 = ((x197==(x198/x199))/x200);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = UINT8_MAX;
	volatile int16_t x202 = INT16_MAX;
	volatile uint16_t x203 = 58U;
	int32_t x204 = -1;

	t48 = ((x201==(x202/x203))/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = -1;
	volatile int64_t x206 = -11823720193LL;
	int32_t x207 = INT32_MAX;
	volatile int8_t x208 = INT8_MAX;
	int32_t t49 = 6058877;

	t49 = ((x205==(x206/x207))/x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x210 = INT16_MIN;
	static int32_t x211 = INT32_MIN;
	int32_t t50 = -6475;

	t50 = ((x209==(x210/x211))/x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x213 = 279304U;
	int8_t x214 = INT8_MIN;
	uint32_t x215 = 137595652U;
	int8_t x216 = 1;
	static volatile int32_t t51 = 278793724;

	t51 = ((x213==(x214/x215))/x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x217 = 31U;
	uint8_t x218 = UINT8_MAX;
	int16_t x219 = -1;
	int32_t x220 = INT32_MIN;
	volatile int32_t t52 = -29691650;

	t52 = ((x217==(x218/x219))/x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = INT16_MAX;
	volatile int32_t t53 = -460432;

	t53 = ((x221==(x222/x223))/x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = -7;
	uint16_t x230 = 2U;
	uint16_t x231 = 84U;

	t54 = ((x229==(x230/x231))/x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = -20;
	static uint64_t x239 = 14435275499LLU;
	static volatile int32_t x240 = INT32_MIN;
	int32_t t55 = -9;

	t55 = ((x237==(x238/x239))/x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x241 = -12;
	volatile int64_t x242 = -1LL;
	int16_t x243 = INT16_MIN;
	int16_t x244 = INT16_MIN;
	int32_t t56 = 1140;

	t56 = ((x241==(x242/x243))/x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x247 = -1;
	int32_t x248 = INT32_MIN;
	int32_t t57 = 483778;

	t57 = ((x245==(x246/x247))/x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x250 = INT8_MIN;
	volatile uint8_t x251 = 1U;
	volatile int32_t t58 = 252655393;

	t58 = ((x249==(x250/x251))/x252);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = -13;
	int8_t x254 = INT8_MAX;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t59 = 101;

	t59 = ((x253==(x254/x255))/x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = -1;
	static int16_t x258 = -1;
	static int32_t x259 = INT32_MAX;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t60 = 511575252;

	t60 = ((x257==(x258/x259))/x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = INT16_MAX;
	static uint16_t x262 = UINT16_MAX;
	volatile int32_t x263 = INT32_MAX;
	volatile int32_t t61 = -3;

	t61 = ((x261==(x262/x263))/x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x265 = -3;
	uint64_t x266 = 233255208LLU;
	static uint16_t x268 = UINT16_MAX;
	int32_t t62 = -1;

	t62 = ((x265==(x266/x267))/x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x269 = 66284LLU;
	int16_t x270 = 6;
	int16_t x271 = 413;
	int32_t x272 = 1067543;

	t63 = ((x269==(x270/x271))/x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x273 = 3407859880167LLU;
	int16_t x274 = INT16_MIN;
	uint64_t x275 = UINT64_MAX;
	volatile int8_t x276 = INT8_MIN;
	volatile int32_t t64 = 162222;

	t64 = ((x273==(x274/x275))/x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x277 = 128366U;
	int32_t x278 = INT32_MIN;
	int8_t x279 = INT8_MIN;
	int16_t x280 = -1;
	int32_t t65 = 9;

	t65 = ((x277==(x278/x279))/x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x281 = 8U;
	volatile int32_t x282 = -1;
	uint32_t x283 = 565926U;
	volatile int32_t x284 = -1;
	int32_t t66 = 30658;

	t66 = ((x281==(x282/x283))/x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x285 = INT32_MAX;
	static uint32_t x286 = UINT32_MAX;
	uint16_t x287 = 6168U;
	uint32_t x288 = 7U;
	volatile uint32_t t67 = 231646U;

	t67 = ((x285==(x286/x287))/x288);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x289 = 827U;
	int32_t x292 = 25730;
	int32_t t68 = 3282100;

	t68 = ((x289==(x290/x291))/x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x293 = 96;
	uint64_t x294 = UINT64_MAX;
	static int32_t x295 = 705732;
	static int8_t x296 = 58;
	volatile int32_t t69 = 30328;

	t69 = ((x293==(x294/x295))/x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MIN;
	uint64_t x299 = 79442LLU;
	static int8_t x300 = INT8_MIN;
	int32_t t70 = 118701294;

	t70 = ((x297==(x298/x299))/x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = INT8_MIN;
	static int64_t x302 = INT64_MIN;
	uint64_t x303 = UINT64_MAX;
	volatile uint64_t x304 = 35181198235988LLU;
	volatile uint64_t t71 = 56583LLU;

	t71 = ((x301==(x302/x303))/x304);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x306 = 12812U;
	uint64_t x307 = 1089452680LLU;
	int8_t x308 = -1;
	volatile int32_t t72 = 360;

	t72 = ((x305==(x306/x307))/x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x309 = UINT32_MAX;
	uint8_t x310 = 4U;
	uint64_t x311 = 3LLU;
	uint8_t x312 = UINT8_MAX;
	static volatile int32_t t73 = 83402495;

	t73 = ((x309==(x310/x311))/x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x313 = INT16_MIN;
	uint16_t x314 = 590U;
	uint8_t x315 = 11U;
	int64_t x316 = INT64_MAX;
	static int64_t t74 = -53LL;

	t74 = ((x313==(x314/x315))/x316);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = -1LL;
	int16_t x318 = -3;
	volatile int64_t x319 = -1LL;
	uint64_t x320 = 116337205369LLU;

	t75 = ((x317==(x318/x319))/x320);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = -6;
	volatile uint16_t x324 = 235U;
	int32_t t76 = 1;

	t76 = ((x321==(x322/x323))/x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x326 = INT16_MIN;

	t77 = ((x325==(x326/x327))/x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x329 = 0U;
	uint8_t x330 = UINT8_MAX;
	int64_t x331 = INT64_MIN;
	int32_t t78 = -131835;

	t78 = ((x329==(x330/x331))/x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x335 = 108U;
	static uint64_t x336 = 840768047973771LLU;
	volatile uint64_t t79 = 0LLU;

	t79 = ((x333==(x334/x335))/x336);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x339 = UINT32_MAX;
	int64_t x340 = -1LL;

	t80 = ((x337==(x338/x339))/x340);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x341 = INT16_MAX;
	int16_t x343 = INT16_MIN;

	t81 = ((x341==(x342/x343))/x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x346 = 542004U;
	int64_t x347 = INT64_MIN;
	int64_t x348 = INT64_MIN;
	volatile int64_t t82 = 106124LL;

	t82 = ((x345==(x346/x347))/x348);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x351 = INT64_MIN;
	int64_t x352 = INT64_MAX;
	static volatile int64_t t83 = -1425798892268196922LL;

	t83 = ((x349==(x350/x351))/x352);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x353 = INT64_MIN;
	int8_t x354 = INT8_MAX;
	static volatile int64_t x355 = INT64_MAX;
	uint8_t x356 = UINT8_MAX;
	static int32_t t84 = 13078866;

	t84 = ((x353==(x354/x355))/x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = -4083343LL;
	volatile uint8_t x358 = UINT8_MAX;
	uint64_t x359 = 611053756485916608LLU;
	int64_t x360 = -1013181LL;

	t85 = ((x357==(x358/x359))/x360);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = -1LL;
	static uint16_t x362 = UINT16_MAX;
	uint8_t x364 = 119U;
	int32_t t86 = -248;

	t86 = ((x361==(x362/x363))/x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = INT64_MAX;
	static volatile int16_t x366 = -1;
	uint32_t x367 = UINT32_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t87 = -10;

	t87 = ((x365==(x366/x367))/x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x369 = 9;
	static int32_t x370 = INT32_MIN;
	volatile int32_t t88 = 3;

	t88 = ((x369==(x370/x371))/x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x373 = UINT16_MAX;
	volatile int16_t x374 = INT16_MIN;
	int64_t x376 = INT64_MIN;
	volatile int64_t t89 = 7904278184LL;

	t89 = ((x373==(x374/x375))/x376);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = 0;
	uint16_t x378 = 8277U;
	uint8_t x379 = 49U;
	static volatile int64_t x380 = 1293LL;
	volatile int64_t t90 = 2LL;

	t90 = ((x377==(x378/x379))/x380);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x381 = 983120U;
	static volatile int64_t x382 = -1LL;
	static uint32_t x383 = 391189584U;
	int32_t x384 = INT32_MIN;
	volatile int32_t t91 = -62;

	t91 = ((x381==(x382/x383))/x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = 0;
	int8_t x390 = INT8_MIN;
	uint16_t x391 = UINT16_MAX;
	volatile int32_t t92 = 96416;

	t92 = ((x389==(x390/x391))/x392);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x394 = -1;
	static volatile int32_t x395 = INT32_MAX;
	uint8_t x396 = 13U;
	int32_t t93 = 7277;

	t93 = ((x393==(x394/x395))/x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = -1;
	uint8_t x398 = 43U;
	int64_t x399 = INT64_MAX;
	volatile uint8_t x400 = 51U;
	static volatile int32_t t94 = -30833;

	t94 = ((x397==(x398/x399))/x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x401 = 3U;
	uint32_t x403 = UINT32_MAX;
	int16_t x404 = -1;
	int32_t t95 = 1;

	t95 = ((x401==(x402/x403))/x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = -1;
	volatile int64_t x406 = INT64_MAX;
	int32_t x407 = -57443839;
	int32_t x408 = INT32_MIN;
	int32_t t96 = -45;

	t96 = ((x405==(x406/x407))/x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x409 = -6LL;
	int64_t x410 = -1LL;
	int64_t x412 = 64570077LL;
	int64_t t97 = 12851633054333LL;

	t97 = ((x409==(x410/x411))/x412);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = INT16_MIN;
	static int64_t x414 = 208325710967LL;
	static uint16_t x415 = 5326U;
	volatile int32_t x416 = INT32_MIN;

	t98 = ((x413==(x414/x415))/x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x418 = UINT32_MAX;
	volatile int8_t x419 = INT8_MAX;
	int64_t t99 = 5LL;

	t99 = ((x417==(x418/x419))/x420);

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

