#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = 3095;
static volatile int32_t t1 = 1;
static volatile uint32_t x11 = UINT32_MAX;
int32_t x12 = INT32_MAX;
volatile int32_t t3 = -36;
volatile int32_t t4 = 597833;
int16_t x28 = -1;
int32_t t5 = -505;
uint32_t x44 = 1798504464U;
static uint8_t x46 = 31U;
int64_t x62 = 39299556588LL;
uint8_t x63 = UINT8_MAX;
int32_t t13 = -4600795;
volatile int32_t x75 = INT32_MAX;
uint16_t x77 = 0U;
static int64_t x89 = -7089723LL;
int8_t x91 = 0;
int16_t x93 = INT16_MAX;
int8_t x94 = -6;
static volatile uint8_t x97 = 14U;
volatile int32_t x99 = -1;
int16_t x101 = INT16_MIN;
volatile uint16_t x114 = 46U;
uint64_t x120 = 3143129558579226LLU;
int32_t x121 = INT32_MIN;
int32_t t27 = 449;
volatile int8_t x127 = INT8_MIN;
int16_t x131 = INT16_MIN;
int64_t x135 = INT64_MIN;
int8_t x136 = INT8_MAX;
volatile int32_t t30 = 78;
int16_t x138 = 3527;
uint64_t x145 = UINT64_MAX;
volatile int32_t t34 = 1876;
int64_t x159 = INT64_MIN;
int64_t x162 = INT64_MIN;
uint8_t x165 = 2U;
int32_t t38 = 21;
static volatile int64_t x188 = -1LL;
static volatile int32_t t41 = -26;
uint16_t x191 = 4311U;
static volatile int64_t x197 = INT64_MIN;
int64_t x201 = INT64_MIN;
int16_t x202 = INT16_MIN;
volatile int32_t t46 = -1;
uint64_t x209 = 2239603LLU;
uint16_t x211 = 3U;
volatile int8_t x213 = INT8_MIN;
volatile int32_t x221 = 804;
int8_t x225 = 12;
int64_t x237 = 7401622LL;
static uint64_t x239 = 13210123663431LLU;
uint32_t x241 = 60542U;
uint64_t x243 = UINT64_MAX;
volatile uint8_t x244 = 2U;
int32_t t54 = -211;
int8_t x246 = INT8_MAX;
int16_t x247 = -13823;
int32_t x248 = INT32_MIN;
uint32_t x251 = 54193U;
uint8_t x252 = 0U;
static uint8_t x253 = UINT8_MAX;
volatile uint32_t x257 = 17668492U;
int8_t x258 = INT8_MAX;
int16_t x259 = INT16_MAX;
volatile int8_t x262 = 3;
static int64_t x263 = 2829657LL;
int32_t t59 = -999;
int32_t t60 = 3603173;
uint64_t x280 = UINT64_MAX;
int64_t x285 = INT64_MIN;
static uint32_t x287 = 3U;
int64_t x295 = 176897LL;
uint64_t x296 = 27775004760796LLU;
int32_t t67 = 135412;
int32_t x299 = 0;
volatile int32_t t68 = 6246530;
static int32_t t69 = 55233909;
static uint64_t x306 = 60987088197LLU;
uint16_t x308 = 766U;
static volatile int32_t t71 = 1;
uint64_t x314 = 94516506534177756LLU;
uint32_t x321 = 100393U;
uint32_t x322 = 358545U;
volatile int32_t x324 = INT32_MAX;
static int8_t x327 = -1;
static volatile int32_t t74 = -5153348;
volatile int64_t x329 = INT64_MAX;
int64_t x330 = 727028871547885LL;
static int64_t x332 = INT64_MIN;
static int64_t x339 = -197864122845666264LL;
uint32_t x348 = 5188064U;
uint64_t x358 = 27189349587220LLU;
static int16_t x360 = -1;
volatile uint64_t x367 = UINT64_MAX;
int32_t x375 = INT32_MIN;
uint8_t x378 = 1U;
int32_t x381 = -1;
int32_t x382 = 0;
int32_t t90 = -126;
int64_t x398 = 3362264569754LL;
static int32_t x399 = INT32_MAX;
int64_t x402 = 54163940613270LL;
int16_t x403 = 1423;
uint64_t x407 = 6829LLU;
volatile int32_t t93 = -16595049;
uint64_t x418 = 51939LLU;
int32_t x422 = 89;
uint8_t x427 = 3U;
static volatile uint32_t x428 = UINT32_MAX;


void f0(void) {
	int64_t x1 = 1642633381LL;
	int16_t x2 = INT16_MIN;
	uint64_t x4 = 167673096988648788LLU;
	int32_t t0 = 32;

	t0 = ((x1^(x2-x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint64_t x6 = UINT64_MAX;
	uint32_t x7 = 734U;
	static int8_t x8 = INT8_MIN;

	t1 = ((x5^(x6-x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile uint64_t x10 = 1133567565536LLU;
	int32_t t2 = 2779862;

	t2 = ((x9^(x10-x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 11U;
	int8_t x18 = INT8_MIN;
	int64_t x19 = -121166244324810LL;
	volatile int8_t x20 = -1;

	t3 = ((x17^(x18-x19))<x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 5464U;
	static uint32_t x22 = UINT32_MAX;
	volatile uint16_t x23 = UINT16_MAX;
	int32_t x24 = -1;

	t4 = ((x21^(x22-x23))<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	volatile uint32_t x26 = 655441U;
	int16_t x27 = INT16_MAX;

	t5 = ((x25^(x26-x27))<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = -1;
	uint64_t x30 = 1460188793711521LLU;
	int16_t x31 = INT16_MIN;
	int8_t x32 = 1;
	int32_t t6 = -1;

	t6 = ((x29^(x30-x31))<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x37 = INT64_MIN;
	int64_t x38 = INT64_MIN;
	int16_t x39 = INT16_MIN;
	int8_t x40 = -1;
	volatile int32_t t7 = 5438;

	t7 = ((x37^(x38-x39))<x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x41 = 31U;
	int8_t x42 = -16;
	uint32_t x43 = 843675U;
	int32_t t8 = 9626;

	t8 = ((x41^(x42-x43))<x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MAX;
	int16_t x47 = -3752;
	volatile int16_t x48 = INT16_MIN;
	static int32_t t9 = -1364;

	t9 = ((x45^(x46-x47))<x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x49 = INT8_MIN;
	static int16_t x50 = -1;
	int32_t x51 = INT32_MAX;
	int64_t x52 = -93681167177LL;
	int32_t t10 = -206115;

	t10 = ((x49^(x50-x51))<x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = INT32_MIN;
	static int8_t x54 = INT8_MIN;
	uint8_t x55 = UINT8_MAX;
	volatile uint16_t x56 = UINT16_MAX;
	int32_t t11 = -311476;

	t11 = ((x53^(x54-x55))<x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	int64_t x58 = -354LL;
	uint16_t x59 = UINT16_MAX;
	volatile uint8_t x60 = UINT8_MAX;
	int32_t t12 = -894899505;

	t12 = ((x57^(x58-x59))<x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MAX;
	int8_t x64 = -2;

	t13 = ((x61^(x62-x63))<x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = 473151344LL;
	uint8_t x66 = 6U;
	uint32_t x67 = 5U;
	int8_t x68 = -1;
	int32_t t14 = -107;

	t14 = ((x65^(x66-x67))<x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 17U;
	int32_t x70 = -1;
	uint8_t x71 = 1U;
	static uint16_t x72 = 50U;
	volatile int32_t t15 = -1;

	t15 = ((x69^(x70-x71))<x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x73 = INT16_MIN;
	int32_t x74 = 2098;
	int32_t x76 = 841169;
	static volatile int32_t t16 = -27;

	t16 = ((x73^(x74-x75))<x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x78 = 9U;
	int8_t x79 = INT8_MAX;
	int64_t x80 = -21657514193LL;
	volatile int32_t t17 = -31678;

	t17 = ((x77^(x78-x79))<x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x81 = 31U;
	int8_t x82 = INT8_MIN;
	int8_t x83 = INT8_MIN;
	uint16_t x84 = 243U;
	volatile int32_t t18 = 2;

	t18 = ((x81^(x82-x83))<x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x85 = 18052722;
	int8_t x86 = -1;
	static volatile uint32_t x87 = 3U;
	int8_t x88 = INT8_MAX;
	static int32_t t19 = 6271399;

	t19 = ((x85^(x86-x87))<x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x90 = UINT64_MAX;
	uint64_t x92 = 1138113588344339845LLU;
	static volatile int32_t t20 = -54562;

	t20 = ((x89^(x90-x91))<x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x95 = UINT32_MAX;
	int64_t x96 = -12631441935LL;
	volatile int32_t t21 = -3410;

	t21 = ((x93^(x94-x95))<x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x98 = -1LL;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t22 = -1;

	t22 = ((x97^(x98-x99))<x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x102 = 5LL;
	uint16_t x103 = UINT16_MAX;
	int8_t x104 = INT8_MIN;
	volatile int32_t t23 = -61;

	t23 = ((x101^(x102-x103))<x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = UINT64_MAX;
	uint8_t x110 = 102U;
	int64_t x111 = INT64_MAX;
	int16_t x112 = -451;
	int32_t t24 = 49732;

	t24 = ((x109^(x110-x111))<x112);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MAX;
	int32_t x115 = -1;
	int64_t x116 = -1LL;
	static int32_t t25 = -4657797;

	t25 = ((x113^(x114-x115))<x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MIN;
	static int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MIN;
	int32_t t26 = 160958;

	t26 = ((x117^(x118-x119))<x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x122 = INT32_MIN;
	int64_t x123 = INT64_MIN;
	uint32_t x124 = 13663U;

	t27 = ((x121^(x122-x123))<x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x125 = -1;
	int32_t x126 = INT32_MIN;
	static int64_t x128 = -1LL;
	int32_t t28 = 55;

	t28 = ((x125^(x126-x127))<x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = -13927;
	static uint32_t x130 = UINT32_MAX;
	uint64_t x132 = 1978LLU;
	volatile int32_t t29 = -571652605;

	t29 = ((x129^(x130-x131))<x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x133 = UINT32_MAX;
	int8_t x134 = -1;

	t30 = ((x133^(x134-x135))<x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MAX;
	static uint64_t x139 = 448615LLU;
	int16_t x140 = INT16_MIN;
	volatile int32_t t31 = -341;

	t31 = ((x137^(x138-x139))<x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = 571306587;
	volatile int16_t x142 = 3465;
	uint64_t x143 = UINT64_MAX;
	static int64_t x144 = 51979884603572LL;
	int32_t t32 = -77;

	t32 = ((x141^(x142-x143))<x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x146 = 2U;
	int16_t x147 = INT16_MIN;
	uint8_t x148 = 0U;
	volatile int32_t t33 = 2117651;

	t33 = ((x145^(x146-x147))<x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = 358738593283751LLU;
	int16_t x150 = INT16_MAX;
	int16_t x151 = INT16_MIN;
	volatile uint64_t x152 = 6485495755000446LLU;

	t34 = ((x149^(x150-x151))<x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = INT32_MAX;
	int32_t x154 = 24;
	int64_t x155 = INT64_MAX;
	int8_t x156 = -1;
	int32_t t35 = -95501;

	t35 = ((x153^(x154-x155))<x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x157 = UINT32_MAX;
	int16_t x158 = INT16_MIN;
	int8_t x160 = -4;
	volatile int32_t t36 = -740020;

	t36 = ((x157^(x158-x159))<x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x161 = UINT8_MAX;
	volatile uint64_t x163 = UINT64_MAX;
	uint16_t x164 = 385U;
	volatile int32_t t37 = 28778;

	t37 = ((x161^(x162-x163))<x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x166 = -1;
	static int16_t x167 = 1014;
	static int32_t x168 = -10;

	t38 = ((x165^(x166-x167))<x168);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MAX;
	int64_t x178 = INT64_MIN;
	int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MAX;
	int32_t t39 = 2010820;

	t39 = ((x177^(x178-x179))<x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = 731986843U;
	static int8_t x182 = -1;
	uint64_t x183 = 129878LLU;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t40 = -429210;

	t40 = ((x181^(x182-x183))<x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = INT64_MIN;
	static int64_t x186 = INT64_MIN;
	int16_t x187 = INT16_MIN;

	t41 = ((x185^(x186-x187))<x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = -1;
	static uint64_t x190 = 4424LLU;
	int8_t x192 = -19;
	int32_t t42 = -47;

	t42 = ((x189^(x190-x191))<x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = -1;
	int64_t x194 = INT64_MAX;
	static int32_t x195 = INT32_MAX;
	int16_t x196 = 11582;
	int32_t t43 = -1814;

	t43 = ((x193^(x194-x195))<x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x198 = UINT32_MAX;
	int64_t x199 = 4364703445116384LL;
	static uint16_t x200 = UINT16_MAX;
	int32_t t44 = -2502;

	t44 = ((x197^(x198-x199))<x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x203 = -1;
	int16_t x204 = INT16_MIN;
	int32_t t45 = -19241728;

	t45 = ((x201^(x202-x203))<x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x205 = INT8_MIN;
	volatile int64_t x206 = INT64_MIN;
	uint64_t x207 = 1954360974504LLU;
	uint8_t x208 = UINT8_MAX;

	t46 = ((x205^(x206-x207))<x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x210 = 102;
	uint16_t x212 = UINT16_MAX;
	int32_t t47 = -206921;

	t47 = ((x209^(x210-x211))<x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x214 = INT16_MAX;
	int8_t x215 = INT8_MIN;
	int32_t x216 = INT32_MAX;
	int32_t t48 = -398775;

	t48 = ((x213^(x214-x215))<x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = -1LL;
	int16_t x218 = INT16_MIN;
	volatile int8_t x219 = -1;
	static uint64_t x220 = UINT64_MAX;
	int32_t t49 = -20297614;

	t49 = ((x217^(x218-x219))<x220);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MIN;
	static int64_t x224 = -1LL;
	int32_t t50 = 648101744;

	t50 = ((x221^(x222-x223))<x224);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x226 = UINT32_MAX;
	uint64_t x227 = UINT64_MAX;
	volatile uint16_t x228 = 28500U;
	volatile int32_t t51 = -7;

	t51 = ((x225^(x226-x227))<x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = 136485899527019290LL;
	static uint16_t x234 = 45U;
	volatile int8_t x235 = -28;
	int64_t x236 = INT64_MIN;
	volatile int32_t t52 = -27612;

	t52 = ((x233^(x234-x235))<x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x238 = INT16_MIN;
	static int64_t x240 = INT64_MAX;
	volatile int32_t t53 = 470461;

	t53 = ((x237^(x238-x239))<x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x242 = -29;

	t54 = ((x241^(x242-x243))<x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = -3961;
	static volatile int32_t t55 = 44612;

	t55 = ((x245^(x246-x247))<x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = 2;
	uint32_t x250 = 738206U;
	int32_t t56 = -194287436;

	t56 = ((x249^(x250-x251))<x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x254 = INT64_MIN;
	static int8_t x255 = -1;
	uint32_t x256 = 6U;
	volatile int32_t t57 = 1377;

	t57 = ((x253^(x254-x255))<x256);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x260 = INT16_MIN;
	volatile int32_t t58 = 78012279;

	t58 = ((x257^(x258-x259))<x260);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x261 = 0U;
	static int16_t x264 = INT16_MIN;

	t59 = ((x261^(x262-x263))<x264);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x265 = INT64_MAX;
	uint8_t x266 = 0U;
	uint16_t x267 = 1736U;
	volatile int32_t x268 = INT32_MIN;

	t60 = ((x265^(x266-x267))<x268);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x269 = -8;
	volatile int32_t x270 = INT32_MIN;
	int64_t x271 = -7486222879625399LL;
	uint64_t x272 = 1096483774738LLU;
	int32_t t61 = -887216;

	t61 = ((x269^(x270-x271))<x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x273 = INT64_MAX;
	int16_t x274 = INT16_MIN;
	volatile int32_t x275 = 2808;
	int64_t x276 = 3612827445LL;
	volatile int32_t t62 = -13417;

	t62 = ((x273^(x274-x275))<x276);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = INT8_MIN;
	static int64_t x278 = INT64_MIN;
	volatile int16_t x279 = INT16_MIN;
	static volatile int32_t t63 = -3;

	t63 = ((x277^(x278-x279))<x280);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x281 = 4689998834LLU;
	volatile int8_t x282 = INT8_MIN;
	volatile uint64_t x283 = 15041694LLU;
	uint8_t x284 = 1U;
	int32_t t64 = -103674469;

	t64 = ((x281^(x282-x283))<x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x286 = INT32_MIN;
	int16_t x288 = -1;
	static volatile int32_t t65 = -63281;

	t65 = ((x285^(x286-x287))<x288);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x289 = INT16_MIN;
	int8_t x290 = INT8_MAX;
	int16_t x291 = -1;
	int16_t x292 = 2227;
	static volatile int32_t t66 = -3360856;

	t66 = ((x289^(x290-x291))<x292);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x293 = 56810502244456LL;
	int32_t x294 = INT32_MIN;

	t67 = ((x293^(x294-x295))<x296);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = INT16_MIN;
	int8_t x298 = INT8_MIN;
	uint8_t x300 = 1U;

	t68 = ((x297^(x298-x299))<x300);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x301 = -1LL;
	int16_t x302 = INT16_MIN;
	volatile uint16_t x303 = 4477U;
	int64_t x304 = -31454357LL;

	t69 = ((x301^(x302-x303))<x304);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x305 = INT16_MAX;
	int16_t x307 = -3539;
	int32_t t70 = -2477;

	t70 = ((x305^(x306-x307))<x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x309 = INT64_MAX;
	int16_t x310 = -1;
	int32_t x311 = INT32_MIN;
	int32_t x312 = -193;

	t71 = ((x309^(x310-x311))<x312);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = -2;
	int8_t x315 = -1;
	volatile int8_t x316 = -1;
	int32_t t72 = 7120959;

	t72 = ((x313^(x314-x315))<x316);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x323 = -40150411730LL;
	static volatile int32_t t73 = -1749037;

	t73 = ((x321^(x322-x323))<x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x325 = INT64_MIN;
	uint8_t x326 = UINT8_MAX;
	int16_t x328 = -1;

	t74 = ((x325^(x326-x327))<x328);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x331 = 912LLU;
	int32_t t75 = 50792;

	t75 = ((x329^(x330-x331))<x332);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x333 = INT64_MIN;
	uint32_t x334 = 76925U;
	int8_t x335 = 1;
	volatile int8_t x336 = -1;
	int32_t t76 = -72;

	t76 = ((x333^(x334-x335))<x336);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = INT32_MAX;
	int32_t x338 = 254604489;
	uint8_t x340 = UINT8_MAX;
	volatile int32_t t77 = 2372;

	t77 = ((x337^(x338-x339))<x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = INT8_MIN;
	volatile int16_t x346 = -1;
	volatile uint8_t x347 = 1U;
	int32_t t78 = 85665;

	t78 = ((x345^(x346-x347))<x348);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = INT8_MIN;
	int16_t x350 = 5;
	uint8_t x351 = 1U;
	int32_t x352 = INT32_MIN;
	static int32_t t79 = 25;

	t79 = ((x349^(x350-x351))<x352);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x353 = 1U;
	int64_t x354 = INT64_MAX;
	uint32_t x355 = UINT32_MAX;
	int8_t x356 = INT8_MAX;
	volatile int32_t t80 = -3905494;

	t80 = ((x353^(x354-x355))<x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x357 = 1144078177LLU;
	uint16_t x359 = 3U;
	static volatile int32_t t81 = 14796822;

	t81 = ((x357^(x358-x359))<x360);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x361 = 12338U;
	static int16_t x362 = 15437;
	uint8_t x363 = UINT8_MAX;
	static volatile int64_t x364 = -2LL;
	volatile int32_t t82 = 15;

	t82 = ((x361^(x362-x363))<x364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x365 = UINT64_MAX;
	volatile uint32_t x366 = 0U;
	int8_t x368 = 3;
	volatile int32_t t83 = 3528;

	t83 = ((x365^(x366-x367))<x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x369 = INT32_MIN;
	static volatile int32_t x370 = INT32_MIN;
	int16_t x371 = INT16_MIN;
	static volatile int32_t x372 = INT32_MIN;
	int32_t t84 = -57730;

	t84 = ((x369^(x370-x371))<x372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x373 = 840444520U;
	static volatile int64_t x374 = -711LL;
	uint64_t x376 = 108225802LLU;
	static int32_t t85 = -1693;

	t85 = ((x373^(x374-x375))<x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x377 = -9591716;
	int16_t x379 = INT16_MIN;
	uint64_t x380 = UINT64_MAX;
	int32_t t86 = -6;

	t86 = ((x377^(x378-x379))<x380);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x383 = INT64_MAX;
	static int8_t x384 = -1;
	static volatile int32_t t87 = 3236973;

	t87 = ((x381^(x382-x383))<x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x385 = -42408118157088LL;
	static int64_t x386 = -1LL;
	static int8_t x387 = INT8_MIN;
	volatile int64_t x388 = INT64_MIN;
	volatile int32_t t88 = 8;

	t88 = ((x385^(x386-x387))<x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x389 = INT32_MIN;
	int64_t x390 = INT64_MAX;
	int32_t x391 = INT32_MAX;
	static volatile uint8_t x392 = 23U;
	volatile int32_t t89 = 24418;

	t89 = ((x389^(x390-x391))<x392);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x393 = INT32_MAX;
	static uint64_t x394 = 634190784194LLU;
	static int8_t x395 = INT8_MIN;
	uint64_t x396 = 806837356961LLU;

	t90 = ((x393^(x394-x395))<x396);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x397 = INT64_MIN;
	volatile int8_t x400 = -1;
	volatile int32_t t91 = 16220;

	t91 = ((x397^(x398-x399))<x400);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x401 = INT32_MAX;
	uint32_t x404 = 3832U;
	volatile int32_t t92 = -38631642;

	t92 = ((x401^(x402-x403))<x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = INT16_MIN;
	static uint16_t x406 = 0U;
	volatile uint16_t x408 = 3540U;

	t93 = ((x405^(x406-x407))<x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x409 = -136428918396LL;
	static uint8_t x410 = 122U;
	volatile int64_t x411 = -1LL;
	int32_t x412 = 77537858;
	int32_t t94 = 169842573;

	t94 = ((x409^(x410-x411))<x412);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x417 = -1;
	int8_t x419 = INT8_MIN;
	volatile int16_t x420 = INT16_MAX;
	static volatile int32_t t95 = -134;

	t95 = ((x417^(x418-x419))<x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x421 = UINT16_MAX;
	uint8_t x423 = UINT8_MAX;
	static int16_t x424 = -1;
	int32_t t96 = 1;

	t96 = ((x421^(x422-x423))<x424);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x425 = -1;
	int16_t x426 = -2418;
	static int32_t t97 = -261283;

	t97 = ((x425^(x426-x427))<x428);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x429 = INT32_MAX;
	int16_t x430 = INT16_MAX;
	static volatile uint16_t x431 = 50U;
	int16_t x432 = -2925;
	int32_t t98 = 115265;

	t98 = ((x429^(x430-x431))<x432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x437 = 2455786471023LLU;
	static int32_t x438 = INT32_MIN;
	static int8_t x439 = -1;
	uint32_t x440 = 2042U;
	int32_t t99 = -34901;

	t99 = ((x437^(x438-x439))<x440);

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

