#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 120770LL;
uint32_t x12 = 0U;
volatile uint32_t t2 = 356201U;
int64_t x17 = INT64_MIN;
int64_t x24 = -1LL;
int64_t x25 = INT64_MIN;
volatile uint64_t x33 = 11579434LLU;
volatile uint64_t t8 = 35737512043105389LLU;
uint16_t x42 = 6U;
int32_t t11 = 7017;
static uint16_t x55 = 14U;
static int64_t x63 = -1LL;
int32_t x64 = -1;
volatile int64_t t14 = -1550777LL;
volatile uint16_t x67 = UINT16_MAX;
int16_t x68 = -246;
static uint8_t x78 = 1U;
int32_t x83 = -1;
static int32_t t17 = 496098384;
int32_t x85 = -1;
static int8_t x86 = 59;
int32_t x94 = INT32_MIN;
int32_t t22 = 61883;
volatile int8_t x107 = INT8_MIN;
int16_t x124 = INT16_MAX;
int32_t x126 = -1592994;
static uint64_t x127 = 2229498LLU;
int32_t x153 = -1;
int8_t x164 = INT8_MIN;
int32_t x166 = INT32_MIN;
volatile int16_t x172 = -1;
static volatile uint32_t x175 = 868226U;
volatile int8_t x180 = 1;
uint16_t x183 = 2U;
int8_t x184 = -1;
volatile int8_t x185 = -1;
uint16_t x187 = 10726U;
volatile int16_t x195 = INT16_MIN;
int16_t x199 = 0;
int32_t x204 = -31645805;
uint8_t x205 = 1U;
volatile int64_t x208 = INT64_MIN;
volatile int64_t t48 = INT64_MIN;
int64_t x216 = -2227LL;
volatile int64_t t50 = -10118898059775459LL;
int16_t x221 = -1;
volatile uint64_t t51 = 651LLU;
int32_t x226 = 749761;
int8_t x227 = -27;
int64_t x235 = INT64_MIN;
uint64_t x240 = 5623111562215337LLU;
int8_t x247 = INT8_MIN;
int32_t t57 = -7;
int16_t x255 = -1;
volatile uint16_t x256 = 1314U;
int64_t x262 = -1LL;
int32_t x263 = INT32_MIN;
uint64_t x272 = 68LLU;
uint64_t t62 = 2682LLU;
int16_t x276 = -1;
uint32_t x277 = 49U;
int16_t x279 = 481;
int16_t x280 = INT16_MIN;
int16_t x283 = -1;
int32_t x289 = -1;
volatile uint32_t t66 = 1695U;
static uint8_t x293 = 17U;
uint8_t x298 = 124U;
static int8_t x301 = -1;
int16_t x305 = -8410;
volatile uint32_t t71 = 76555789U;
static int8_t x315 = -7;
int16_t x320 = -1;
uint64_t x321 = 105848540LLU;
volatile int16_t x322 = INT16_MAX;
static int16_t x326 = 0;
int32_t x327 = INT32_MIN;
uint8_t x331 = 15U;
int16_t x335 = -1;
static volatile uint8_t x339 = UINT8_MAX;
volatile uint16_t x341 = 9U;
static volatile uint64_t t79 = 364LLU;
int8_t x346 = -61;
int16_t x348 = INT16_MAX;
static int16_t x349 = -1;
static int64_t t81 = 781413903375LL;
int8_t x353 = -1;
uint32_t x355 = 91U;
uint16_t x368 = UINT16_MAX;
int64_t x374 = -1LL;
int16_t x382 = INT16_MAX;
int32_t x385 = 973327;
volatile int32_t t88 = 27793497;
static int32_t x395 = INT32_MAX;
int32_t x399 = INT32_MAX;
int8_t x401 = 1;
uint32_t x412 = 435136U;
int64_t x416 = -1459207633088581LL;
int64_t x417 = INT64_MIN;
int16_t x424 = INT16_MIN;
uint64_t t98 = 245511837373464921LLU;


void f0(void) {
	int16_t x1 = -1;
	int64_t x2 = -1LL;
	int16_t x3 = -1;
	uint32_t x4 = 14816U;

	t0 = ((x1/(x2+x3))+x4);

	if (t0 != 14816LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -360LL;
	int16_t x6 = -1;
	static volatile uint32_t x7 = UINT32_MAX;
	int64_t x8 = INT64_MIN;
	static int64_t t1 = INT64_MIN;

	t1 = ((x5/(x6+x7))+x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static int16_t x10 = -1;
	uint32_t x11 = 433U;

	t2 = ((x9/(x10+x11))+x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = INT16_MIN;
	uint8_t x14 = 41U;
	int32_t x15 = 66;
	volatile uint8_t x16 = 1U;
	volatile int32_t t3 = -1;

	t3 = ((x13/(x14+x15))+x16);

	if (t3 != -305) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x18 = -1;
	static int32_t x19 = -32986;
	int8_t x20 = INT8_MAX;
	static volatile int64_t t4 = -86943132478LL;

	t4 = ((x17/(x18+x19))+x20);

	if (t4 != 279606270253704LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	uint8_t x22 = 1U;
	uint16_t x23 = UINT16_MAX;
	volatile uint64_t t5 = 40834628292126165LLU;

	t5 = ((x21/(x22+x23))+x24);

	if (t5 != 281474976710654LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	volatile int64_t x27 = 15409974686LL;
	uint64_t x28 = 439235220489036649LLU;
	static volatile uint64_t t6 = 32300872656LLU;

	t6 = ((x25/(x26+x27))+x28);

	if (t6 != 439235219890504056LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint64_t x30 = 642759935265LLU;
	int32_t x31 = INT32_MAX;
	static volatile int8_t x32 = INT8_MAX;
	uint64_t t7 = 2841198859606365LLU;

	t7 = ((x29/(x30+x31))+x32);

	if (t7 != 28603835LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = -42;
	uint64_t x35 = UINT64_MAX;
	uint32_t x36 = 18U;

	t8 = ((x33/(x34+x35))+x36);

	if (t8 != 18LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 779LLU;
	static uint32_t x38 = 13691073U;
	static uint16_t x39 = 13489U;
	uint64_t x40 = 427196950LLU;
	uint64_t t9 = 6396LLU;

	t9 = ((x37/(x38+x39))+x40);

	if (t9 != 427196950LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x41 = 238694073275LLU;
	uint8_t x43 = 0U;
	uint16_t x44 = UINT16_MAX;
	uint64_t t10 = 67068039228857LLU;

	t10 = ((x41/(x42+x43))+x44);

	if (t10 != 39782411080LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 21U;
	volatile uint8_t x46 = 1U;
	uint16_t x47 = 2100U;
	static volatile int32_t x48 = 66082933;

	t11 = ((x45/(x46+x47))+x48);

	if (t11 != 66082933) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 30U;
	static int64_t x54 = INT64_MIN;
	int64_t x56 = -1LL;
	static volatile int64_t t12 = 154121008637055624LL;

	t12 = ((x53/(x54+x55))+x56);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 0U;
	uint8_t x58 = UINT8_MAX;
	int8_t x59 = -1;
	int8_t x60 = INT8_MIN;
	int32_t t13 = 179114292;

	t13 = ((x57/(x58+x59))+x60);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x61 = -1;
	int16_t x62 = 8;

	t14 = ((x61/(x62+x63))+x64);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 128U;
	uint64_t x66 = 385249136815814778LLU;
	volatile uint64_t t15 = 206383418932LLU;

	t15 = ((x65/(x66+x67))+x68);

	if (t15 != 18446744073709551370LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	int64_t x79 = INT64_MIN;
	uint32_t x80 = 920U;
	int64_t t16 = 1323209838876LL;

	t16 = ((x77/(x78+x79))+x80);

	if (t16 != 921LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 21081U;
	int16_t x82 = INT16_MAX;
	static int32_t x84 = -31656;

	t17 = ((x81/(x82+x83))+x84);

	if (t17 != -31656) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x87 = 15U;
	int8_t x88 = INT8_MIN;
	static volatile int32_t t18 = -8118;

	t18 = ((x85/(x86+x87))+x88);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = -157312039931LL;
	uint8_t x90 = 97U;
	uint16_t x91 = 51U;
	static uint16_t x92 = 0U;
	static volatile int64_t t19 = -32685939LL;

	t19 = ((x89/(x90+x91))+x92);

	if (t19 != -1062919188LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = INT64_MIN;
	uint32_t x95 = UINT32_MAX;
	volatile int32_t x96 = -1;
	volatile int64_t t20 = -21496227557129490LL;

	t20 = ((x93/(x94+x95))+x96);

	if (t20 != -4294967299LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = 0U;
	int8_t x98 = -3;
	int32_t x99 = -3513;
	int64_t x100 = INT64_MIN;
	volatile int64_t t21 = INT64_MIN;

	t21 = ((x97/(x98+x99))+x100);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x101 = 2U;
	volatile uint8_t x102 = 53U;
	uint16_t x103 = 1U;
	int8_t x104 = INT8_MIN;

	t22 = ((x101/(x102+x103))+x104);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x105 = UINT16_MAX;
	volatile int16_t x106 = 5510;
	volatile int8_t x108 = -48;
	int32_t t23 = -3698;

	t23 = ((x105/(x106+x107))+x108);

	if (t23 != -36) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x109 = -1;
	int64_t x110 = -1LL;
	int16_t x111 = 0;
	static volatile int32_t x112 = INT32_MIN;
	int64_t t24 = -1LL;

	t24 = ((x109/(x110+x111))+x112);

	if (t24 != -2147483647LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = INT64_MIN;
	static int8_t x114 = -1;
	volatile uint64_t x115 = 272244705LLU;
	volatile uint32_t x116 = UINT32_MAX;
	static volatile uint64_t t25 = 15575715258536224LLU;

	t25 = ((x113/(x114+x115))+x116);

	if (t25 != 38173944190LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x117 = INT16_MIN;
	int16_t x118 = 478;
	int8_t x119 = -1;
	int16_t x120 = -1;
	int32_t t26 = -4185224;

	t26 = ((x117/(x118+x119))+x120);

	if (t26 != -69) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 10147U;
	int64_t x122 = INT64_MIN;
	static uint64_t x123 = 11298LLU;
	volatile uint64_t t27 = 5515406535135LLU;

	t27 = ((x121/(x122+x123))+x124);

	if (t27 != 32767LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = 0;
	int8_t x128 = 1;
	volatile uint64_t t28 = 490524743LLU;

	t28 = ((x125/(x126+x127))+x128);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = 0;
	int64_t x130 = INT64_MIN;
	volatile uint32_t x131 = 17823844U;
	int8_t x132 = INT8_MIN;
	volatile int64_t t29 = -247LL;

	t29 = ((x129/(x130+x131))+x132);

	if (t29 != -128LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x133 = 15951767;
	int16_t x134 = -13;
	uint64_t x135 = UINT64_MAX;
	volatile int32_t x136 = -1;
	uint64_t t30 = UINT64_MAX;

	t30 = ((x133/(x134+x135))+x136);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = 15U;
	int16_t x138 = INT16_MAX;
	static int16_t x139 = -2;
	volatile uint32_t x140 = 653U;
	uint32_t t31 = 400U;

	t31 = ((x137/(x138+x139))+x140);

	if (t31 != 653U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MIN;
	static volatile int64_t x142 = INT64_MAX;
	uint64_t x143 = UINT64_MAX;
	static int16_t x144 = -297;
	uint64_t t32 = 104619519972LLU;

	t32 = ((x141/(x142+x143))+x144);

	if (t32 != 18446744073709551320LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = UINT8_MAX;
	int8_t x146 = INT8_MAX;
	uint8_t x147 = 11U;
	int32_t x148 = INT32_MIN;
	volatile int32_t t33 = -36438143;

	t33 = ((x145/(x146+x147))+x148);

	if (t33 != -2147483647) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = INT32_MIN;
	static uint32_t x150 = 6U;
	static uint32_t x151 = 2U;
	volatile uint16_t x152 = UINT16_MAX;
	volatile uint32_t t34 = 193197U;

	t34 = ((x149/(x150+x151))+x152);

	if (t34 != 268500991U) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x154 = INT32_MIN;
	uint64_t x155 = UINT64_MAX;
	uint64_t x156 = 326424LLU;
	static uint64_t t35 = 24996LLU;

	t35 = ((x153/(x154+x155))+x156);

	if (t35 != 326425LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = 2U;
	int16_t x158 = -96;
	static int8_t x159 = -1;
	int64_t x160 = -24483098995152LL;
	volatile int64_t t36 = -8441254810016LL;

	t36 = ((x157/(x158+x159))+x160);

	if (t36 != -24483098995152LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = 39;
	uint8_t x162 = 108U;
	int8_t x163 = INT8_MIN;
	volatile int32_t t37 = 16449821;

	t37 = ((x161/(x162+x163))+x164);

	if (t37 != -129) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = INT32_MIN;
	uint32_t x167 = 291875613U;
	uint32_t x168 = 23U;
	uint32_t t38 = 79091U;

	t38 = ((x165/(x166+x167))+x168);

	if (t38 != 23U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = -1;
	uint16_t x170 = UINT16_MAX;
	static uint8_t x171 = 23U;
	int32_t t39 = 602;

	t39 = ((x169/(x170+x171))+x172);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = -993;
	int32_t x174 = 189;
	uint8_t x176 = 14U;
	uint32_t t40 = 1U;

	t40 = ((x173/(x174+x175))+x176);

	if (t40 != 4959U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MIN;
	volatile uint8_t x178 = UINT8_MAX;
	int64_t x179 = 890LL;
	int64_t t41 = 1722234959773490LL;

	t41 = ((x177/(x178+x179))+x180);

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = -55;
	uint8_t x182 = 4U;
	volatile int32_t t42 = 70996;

	t42 = ((x181/(x182+x183))+x184);

	if (t42 != -10) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x186 = INT64_MIN;
	uint8_t x188 = UINT8_MAX;
	int64_t t43 = 2784091052384552LL;

	t43 = ((x185/(x186+x187))+x188);

	if (t43 != 255LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = -1;
	int16_t x190 = 12608;
	int8_t x191 = -18;
	int32_t x192 = INT32_MAX;
	int32_t t44 = INT32_MAX;

	t44 = ((x189/(x190+x191))+x192);

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x193 = UINT16_MAX;
	static uint16_t x194 = 20676U;
	static uint8_t x196 = 32U;
	volatile int32_t t45 = -61576;

	t45 = ((x193/(x194+x195))+x196);

	if (t45 != 27) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x197 = UINT8_MAX;
	static uint16_t x198 = 2604U;
	uint64_t x200 = 51836043LLU;
	static uint64_t t46 = 321567LLU;

	t46 = ((x197/(x198+x199))+x200);

	if (t46 != 51836043LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = INT16_MIN;
	int64_t x202 = INT64_MAX;
	uint8_t x203 = 0U;
	static int64_t t47 = 2964955LL;

	t47 = ((x201/(x202+x203))+x204);

	if (t47 != -31645805LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x206 = -1;
	static uint16_t x207 = UINT16_MAX;

	t48 = ((x205/(x206+x207))+x208);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = -1969;
	static int8_t x210 = INT8_MIN;
	int64_t x211 = 172LL;
	static int32_t x212 = -4;
	int64_t t49 = 11LL;

	t49 = ((x209/(x210+x211))+x212);

	if (t49 != -48LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x213 = -1433976108956994LL;
	uint8_t x214 = UINT8_MAX;
	volatile uint32_t x215 = 1U;

	t50 = ((x213/(x214+x215))+x216);

	if (t50 != -5601469177840LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x222 = INT16_MIN;
	uint64_t x223 = 12639076LLU;
	uint16_t x224 = 344U;

	t51 = ((x221/(x222+x223))+x224);

	if (t51 != 1463294731339LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x225 = UINT8_MAX;
	int16_t x228 = -25;
	static volatile int32_t t52 = -1;

	t52 = ((x225/(x226+x227))+x228);

	if (t52 != -25) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x229 = 119416711999956LLU;
	static volatile uint16_t x230 = 25811U;
	int64_t x231 = INT64_MIN;
	int64_t x232 = INT64_MAX;
	uint64_t t53 = 26LLU;

	t53 = ((x229/(x230+x231))+x232);

	if (t53 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = 1;
	volatile uint64_t x234 = 701864058887LLU;
	int64_t x236 = INT64_MIN;
	volatile uint64_t t54 = 15544300199LLU;

	t54 = ((x233/(x234+x235))+x236);

	if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x237 = 5U;
	volatile int32_t x238 = 157;
	volatile uint16_t x239 = 19U;
	volatile uint64_t t55 = 818731009527674LLU;

	t55 = ((x237/(x238+x239))+x240);

	if (t55 != 5623111562215337LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = -14;
	volatile uint64_t x242 = 3LLU;
	int16_t x243 = -1;
	volatile int16_t x244 = INT16_MAX;
	static uint64_t t56 = 417874167706812578LLU;

	t56 = ((x241/(x242+x243))+x244);

	if (t56 != 9223372036854808568LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = -22;
	uint8_t x246 = 1U;
	int8_t x248 = -6;

	t57 = ((x245/(x246+x247))+x248);

	if (t57 != -6) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x253 = INT64_MIN;
	volatile uint8_t x254 = 100U;
	int64_t t58 = 39671LL;

	t58 = ((x253/(x254+x255))+x256);

	if (t58 != -93165374109642886LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x257 = 3685U;
	static volatile uint16_t x258 = 4793U;
	static int8_t x259 = INT8_MAX;
	volatile int8_t x260 = -26;
	volatile int32_t t59 = 252257611;

	t59 = ((x257/(x258+x259))+x260);

	if (t59 != -26) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x261 = INT8_MIN;
	int8_t x264 = INT8_MIN;
	static int64_t t60 = -1090828442456822LL;

	t60 = ((x261/(x262+x263))+x264);

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = 59;
	uint32_t x266 = 2480U;
	static int32_t x267 = 43483863;
	int32_t x268 = -1;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = ((x265/(x266+x267))+x268);

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x269 = -5;
	uint64_t x270 = UINT64_MAX;
	static int8_t x271 = -1;

	t62 = ((x269/(x270+x271))+x272);

	if (t62 != 68LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = 23;
	int64_t x274 = -1LL;
	int8_t x275 = 2;
	int64_t t63 = -388705768890685724LL;

	t63 = ((x273/(x274+x275))+x276);

	if (t63 != 22LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x278 = INT64_MIN;
	volatile int64_t t64 = -590LL;

	t64 = ((x277/(x278+x279))+x280);

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x281 = INT32_MAX;
	int16_t x282 = -232;
	uint64_t x284 = UINT64_MAX;
	uint64_t t65 = 52119689907747182LLU;

	t65 = ((x281/(x282+x283))+x284);

	if (t65 != 18446744073700334947LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x290 = 2U;
	volatile int16_t x291 = -1;
	uint32_t x292 = 170596083U;

	t66 = ((x289/(x290+x291))+x292);

	if (t66 != 170596082U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x294 = INT16_MAX;
	int32_t x295 = INT32_MIN;
	int64_t x296 = -1LL;
	int64_t t67 = 268084154413LL;

	t67 = ((x293/(x294+x295))+x296);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = -107;
	int16_t x299 = -58;
	volatile int8_t x300 = INT8_MIN;
	static volatile int32_t t68 = -108824558;

	t68 = ((x297/(x298+x299))+x300);

	if (t68 != -129) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x302 = 7711975LL;
	uint32_t x303 = 198U;
	uint32_t x304 = 877039U;
	int64_t t69 = 4077247LL;

	t69 = ((x301/(x302+x303))+x304);

	if (t69 != 877039LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x306 = UINT32_MAX;
	static int16_t x307 = INT16_MAX;
	int16_t x308 = -1;
	static volatile uint32_t t70 = 2U;

	t70 = ((x305/(x306+x307))+x308);

	if (t70 != 131078U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x309 = 806651U;
	int16_t x310 = INT16_MIN;
	uint32_t x311 = 2U;
	int32_t x312 = INT32_MIN;

	t71 = ((x309/(x310+x311))+x312);

	if (t71 != 2147483648U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = -1;
	int64_t x314 = 3LL;
	int16_t x316 = -1;
	static int64_t t72 = 83759384694LL;

	t72 = ((x313/(x314+x315))+x316);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x317 = 20U;
	int32_t x318 = INT32_MAX;
	int8_t x319 = INT8_MIN;
	volatile uint32_t t73 = UINT32_MAX;

	t73 = ((x317/(x318+x319))+x320);

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x323 = 10905U;
	uint64_t x324 = 76427881582210LLU;
	uint64_t t74 = 328077381005LLU;

	t74 = ((x321/(x322+x323))+x324);

	if (t74 != 76427881584633LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x325 = 0U;
	uint32_t x328 = 37005536U;
	volatile uint32_t t75 = 234U;

	t75 = ((x325/(x326+x327))+x328);

	if (t75 != 37005536U) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x329 = INT64_MIN;
	int16_t x330 = INT16_MIN;
	uint8_t x332 = UINT8_MAX;
	int64_t t76 = 5114LL;

	t76 = ((x329/(x330+x331))+x332);

	if (t76 != 281603884739203LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x333 = UINT32_MAX;
	int16_t x334 = 5;
	int16_t x336 = -1;
	uint32_t t77 = 1030577U;

	t77 = ((x333/(x334+x335))+x336);

	if (t77 != 1073741822U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x337 = -1;
	volatile uint8_t x338 = 5U;
	int16_t x340 = 7163;
	volatile int32_t t78 = -655202;

	t78 = ((x337/(x338+x339))+x340);

	if (t78 != 7163) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x342 = INT32_MIN;
	volatile int32_t x343 = INT32_MAX;
	static volatile uint64_t x344 = 23073LLU;

	t79 = ((x341/(x342+x343))+x344);

	if (t79 != 23064LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = INT8_MIN;
	static int16_t x347 = INT16_MIN;
	static int32_t t80 = -439;

	t80 = ((x345/(x346+x347))+x348);

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x350 = INT64_MIN;
	int32_t x351 = 1471892;
	int16_t x352 = INT16_MAX;

	t81 = ((x349/(x350+x351))+x352);

	if (t81 != 32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x354 = INT8_MIN;
	int8_t x356 = -29;
	volatile uint32_t t82 = 916U;

	t82 = ((x353/(x354+x355))+x356);

	if (t82 != 4294967268U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = INT32_MAX;
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = INT16_MIN;
	volatile int64_t x364 = 41LL;
	volatile int64_t t83 = -2134053794873LL;

	t83 = ((x361/(x362+x363))+x364);

	if (t83 != 41LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x365 = -1;
	int32_t x366 = 8250;
	static int8_t x367 = INT8_MIN;
	volatile int32_t t84 = 247575194;

	t84 = ((x365/(x366+x367))+x368);

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x369 = UINT32_MAX;
	int16_t x370 = 4;
	static int8_t x371 = -1;
	uint16_t x372 = UINT16_MAX;
	volatile uint32_t t85 = 280U;

	t85 = ((x369/(x370+x371))+x372);

	if (t85 != 1431721300U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x373 = INT16_MIN;
	int32_t x375 = INT32_MIN;
	volatile int16_t x376 = -449;
	volatile int64_t t86 = -33491022LL;

	t86 = ((x373/(x374+x375))+x376);

	if (t86 != -449LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x381 = 0;
	static uint64_t x383 = 223752131202LLU;
	uint8_t x384 = 40U;
	static volatile uint64_t t87 = 4912008264527409679LLU;

	t87 = ((x381/(x382+x383))+x384);

	if (t87 != 40LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x386 = INT8_MIN;
	int8_t x387 = -1;
	int32_t x388 = 223;

	t88 = ((x385/(x386+x387))+x388);

	if (t88 != -7322) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = INT16_MIN;
	int64_t x390 = -12549444995502283LL;
	int32_t x391 = INT32_MIN;
	static int64_t x392 = 1LL;
	volatile int64_t t89 = 8227910452885146LL;

	t89 = ((x389/(x390+x391))+x392);

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x393 = 3U;
	int16_t x394 = INT16_MIN;
	static int32_t x396 = INT32_MIN;
	volatile int32_t t90 = INT32_MIN;

	t90 = ((x393/(x394+x395))+x396);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x397 = -59021LL;
	int8_t x398 = INT8_MIN;
	volatile int8_t x400 = -1;
	int64_t t91 = -8399806LL;

	t91 = ((x397/(x398+x399))+x400);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x402 = INT64_MIN;
	uint8_t x403 = 2U;
	int32_t x404 = INT32_MIN;
	volatile int64_t t92 = 22882672712363487LL;

	t92 = ((x401/(x402+x403))+x404);

	if (t92 != -2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x409 = 299U;
	uint8_t x410 = 102U;
	static uint32_t x411 = UINT32_MAX;
	volatile uint32_t t93 = 6413U;

	t93 = ((x409/(x410+x411))+x412);

	if (t93 != 435138U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x413 = 21939173492909LL;
	int64_t x414 = 468415206LL;
	volatile int8_t x415 = INT8_MIN;
	int64_t t94 = -2099104479LL;

	t94 = ((x413/(x414+x415))+x416);

	if (t94 != -1459207633041744LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x418 = UINT8_MAX;
	volatile int16_t x419 = 1770;
	static uint16_t x420 = UINT16_MAX;
	int64_t t95 = 373429377287LL;

	t95 = ((x417/(x418+x419))+x420);

	if (t95 != -4554751623072625LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x421 = 2U;
	static int8_t x422 = 48;
	int8_t x423 = 0;
	int32_t t96 = 939806820;

	t96 = ((x421/(x422+x423))+x424);

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x425 = -7;
	int64_t x426 = INT64_MIN;
	int32_t x427 = INT32_MAX;
	int32_t x428 = INT32_MAX;
	static volatile int64_t t97 = -18LL;

	t97 = ((x425/(x426+x427))+x428);

	if (t97 != 2147483647LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x429 = 25583060LLU;
	int64_t x430 = INT64_MAX;
	int8_t x431 = -3;
	uint16_t x432 = 617U;

	t98 = ((x429/(x430+x431))+x432);

	if (t98 != 617LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x433 = 0U;
	int32_t x434 = -1567245;
	uint64_t x435 = 2647777LLU;
	int64_t x436 = -22448713LL;
	uint64_t t99 = 13711589207439490LLU;

	t99 = ((x433/(x434+x435))+x436);

	if (t99 != 18446744073687102903LLU) { NG(); } else { ; }
	
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

