#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x7 = 5LLU;
volatile int32_t x14 = INT32_MIN;
int16_t x15 = -241;
uint64_t t5 = 104180748LLU;
uint32_t x32 = 3674708U;
int32_t x33 = 11;
int8_t x38 = 1;
static volatile int32_t t10 = 1;
static uint8_t x48 = UINT8_MAX;
volatile uint32_t x49 = UINT32_MAX;
uint64_t x51 = 18006859701LLU;
int64_t x53 = -1LL;
uint32_t x58 = 220203210U;
static int32_t x60 = INT32_MIN;
int8_t x64 = 1;
uint16_t x65 = 1U;
uint16_t x69 = UINT16_MAX;
volatile int32_t x78 = INT32_MIN;
int8_t x84 = -1;
volatile int8_t x94 = 1;
int16_t x95 = -139;
uint16_t x97 = 3806U;
int64_t t26 = -377538801659LL;
volatile int32_t x115 = INT32_MIN;
int32_t x125 = -1;
volatile uint32_t t31 = 21283U;
int64_t x134 = INT64_MIN;
int64_t x144 = -1LL;
static int64_t t35 = -4351229037070786LL;
static int64_t x148 = INT64_MAX;
int8_t x152 = -1;
int8_t x153 = -33;
static volatile int32_t x156 = -1;
int32_t x166 = INT32_MIN;
int8_t x169 = INT8_MAX;
uint32_t x172 = UINT32_MAX;
volatile uint32_t x175 = 63797U;
static uint64_t x178 = 14306024LLU;
static volatile uint64_t x199 = 2415519493505015LLU;
static int16_t x207 = INT16_MAX;
volatile int64_t x214 = INT64_MIN;
volatile int32_t t53 = -4;
int32_t x220 = INT32_MAX;
int16_t x223 = INT16_MIN;
static volatile int64_t x231 = -1LL;
static volatile int32_t x233 = INT32_MIN;
uint8_t x236 = 9U;
static uint8_t x247 = UINT8_MAX;
int32_t t62 = 19629278;
int16_t x254 = -1;
int32_t t68 = 13;
int32_t x277 = -1;
uint32_t x278 = UINT32_MAX;
int16_t x279 = -1;
uint32_t x280 = UINT32_MAX;
int16_t x281 = INT16_MIN;
int16_t x282 = INT16_MIN;
int16_t x289 = INT16_MIN;
uint8_t x291 = 85U;
int64_t t72 = INT64_MAX;
int32_t x298 = -200248763;
volatile uint64_t t74 = 1402213LLU;
volatile int64_t t75 = 251329441191LL;
volatile int64_t t76 = -121059908508913372LL;
volatile int64_t t78 = 28465818LL;
uint32_t x320 = 11U;
int32_t x321 = 3659;
int64_t x322 = -27947LL;
uint8_t x323 = 0U;
volatile int64_t t81 = -265670LL;
int64_t t82 = -8666LL;
uint64_t x334 = 402515030157LLU;
int32_t x339 = INT32_MIN;
int32_t x344 = INT32_MIN;
int64_t x347 = INT64_MIN;
int16_t x349 = INT16_MIN;
int64_t x352 = 2215716028614LL;
int64_t x355 = INT64_MIN;
int32_t t88 = -6511;
uint64_t t90 = 429375577LLU;
int32_t t91 = 214;
static int64_t x377 = INT64_MAX;
int32_t x382 = -1;
volatile uint64_t t95 = 598952125669721747LLU;
int8_t x386 = -1;
static int64_t x395 = -1908054669487638LL;
int32_t t99 = 5056;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	volatile int8_t x2 = -1;
	uint64_t x3 = 45887215741LLU;
	int8_t x4 = -1;
	static volatile int32_t t0 = 5093359;

	t0 = ((x1&(x2<=x3))^x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 0U;
	int64_t x6 = 1LL;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = -84;

	t1 = ((x5&(x6<=x7))^x8);

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int16_t x10 = INT16_MAX;
	static int16_t x11 = -1;
	uint32_t x12 = 179U;
	uint64_t t2 = 215815LLU;

	t2 = ((x9&(x10<=x11))^x12);

	if (t2 != 179LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 1095U;
	volatile int16_t x16 = INT16_MIN;
	int32_t t3 = 357;

	t3 = ((x13&(x14<=x15))^x16);

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 10U;
	int8_t x18 = INT8_MAX;
	volatile int64_t x19 = 6LL;
	volatile uint16_t x20 = UINT16_MAX;
	static int32_t t4 = 7;

	t4 = ((x17&(x18<=x19))^x20);

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile int8_t x22 = -12;
	uint32_t x23 = UINT32_MAX;
	uint64_t x24 = 890489LLU;

	t5 = ((x21&(x22<=x23))^x24);

	if (t5 != 890488LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 520LLU;
	volatile uint8_t x26 = 10U;
	int32_t x27 = INT32_MIN;
	static int8_t x28 = INT8_MIN;
	volatile uint64_t t6 = 445209580206218062LLU;

	t6 = ((x25&(x26<=x27))^x28);

	if (t6 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 41575252868978579LL;
	int16_t x30 = -1;
	static int32_t x31 = -1004849391;
	volatile int64_t t7 = -2LL;

	t7 = ((x29&(x30<=x31))^x32);

	if (t7 != 3674708LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MAX;
	uint32_t x35 = UINT32_MAX;
	uint16_t x36 = 162U;
	volatile int32_t t8 = -28125499;

	t8 = ((x33&(x34<=x35))^x36);

	if (t8 != 163) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	uint16_t x39 = UINT16_MAX;
	int8_t x40 = INT8_MAX;
	int32_t t9 = 884;

	t9 = ((x37&(x38<=x39))^x40);

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int16_t x42 = -6511;
	int64_t x43 = -1LL;
	int16_t x44 = 3217;

	t10 = ((x41&(x42<=x43))^x44);

	if (t10 != 3216) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -1;
	int8_t x46 = 1;
	int16_t x47 = INT16_MIN;
	int32_t t11 = 2019;

	t11 = ((x45&(x46<=x47))^x48);

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 0U;
	int64_t x52 = INT64_MIN;
	volatile int64_t t12 = 80912600935912LL;

	t12 = ((x49&(x50<=x51))^x52);

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -1;
	int64_t x55 = -24LL;
	int16_t x56 = INT16_MIN;
	int64_t t13 = -29514633565LL;

	t13 = ((x53&(x54<=x55))^x56);

	if (t13 != -32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	static volatile int64_t x59 = -1LL;
	volatile int32_t t14 = INT32_MIN;

	t14 = ((x57&(x58<=x59))^x60);

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int32_t x62 = INT32_MIN;
	int8_t x63 = -1;
	int64_t t15 = -16865208985052LL;

	t15 = ((x61&(x62<=x63))^x64);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x66 = 0;
	int8_t x67 = INT8_MAX;
	static int32_t x68 = 325584351;
	int32_t t16 = 3;

	t16 = ((x65&(x66<=x67))^x68);

	if (t16 != 325584350) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MIN;
	int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MAX;
	volatile int64_t t17 = INT64_MAX;

	t17 = ((x69&(x70<=x71))^x72);

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int64_t x74 = -115465LL;
	volatile int64_t x75 = INT64_MIN;
	uint8_t x76 = UINT8_MAX;
	static volatile int32_t t18 = 257183;

	t18 = ((x73&(x74<=x75))^x76);

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = INT8_MIN;
	int32_t x79 = -1;
	volatile uint64_t x80 = UINT64_MAX;
	uint64_t t19 = UINT64_MAX;

	t19 = ((x77&(x78<=x79))^x80);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int32_t x82 = INT32_MAX;
	int16_t x83 = INT16_MIN;
	int32_t t20 = -106;

	t20 = ((x81&(x82<=x83))^x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -2137;
	static volatile int8_t x86 = 1;
	volatile int64_t x87 = -130366LL;
	static uint16_t x88 = 1111U;
	volatile int32_t t21 = -4392;

	t21 = ((x85&(x86<=x87))^x88);

	if (t21 != 1111) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x89 = INT32_MAX;
	int16_t x90 = -1;
	int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MIN;
	int32_t t22 = -3;

	t22 = ((x89&(x90<=x91))^x92);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	static int16_t x96 = 1;
	static int32_t t23 = -14958943;

	t23 = ((x93&(x94<=x95))^x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x98 = -1;
	int8_t x99 = INT8_MIN;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = INT32_MIN;

	t24 = ((x97&(x98<=x99))^x100);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 873U;
	static int16_t x102 = INT16_MIN;
	int32_t x103 = INT32_MAX;
	int8_t x104 = INT8_MIN;
	int32_t t25 = -61191;

	t25 = ((x101&(x102<=x103))^x104);

	if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 5979;
	uint32_t x106 = 894098U;
	static uint32_t x107 = UINT32_MAX;
	int64_t x108 = INT64_MIN;

	t26 = ((x105&(x106<=x107))^x108);

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	int16_t x110 = INT16_MAX;
	int16_t x111 = -1144;
	volatile int64_t x112 = 7722977351074021LL;
	int64_t t27 = 13654LL;

	t27 = ((x109&(x110<=x111))^x112);

	if (t27 != 7722977351074021LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 0U;
	volatile int32_t x114 = INT32_MAX;
	int64_t x116 = INT64_MAX;
	volatile int64_t t28 = INT64_MAX;

	t28 = ((x113&(x114<=x115))^x116);

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = 1;
	int32_t x118 = INT32_MAX;
	volatile int64_t x119 = -5LL;
	int32_t x120 = -1;
	int32_t t29 = -77;

	t29 = ((x117&(x118<=x119))^x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -13;
	int64_t x122 = -2LL;
	int32_t x123 = -1;
	int64_t x124 = 1174598084754LL;
	int64_t t30 = 506335167621784784LL;

	t30 = ((x121&(x122<=x123))^x124);

	if (t30 != 1174598084755LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -35327138;
	uint64_t x127 = 10455307LLU;
	uint32_t x128 = 3U;

	t31 = ((x125&(x126<=x127))^x128);

	if (t31 != 3U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	static int8_t x130 = -1;
	static int64_t x131 = INT64_MIN;
	static uint8_t x132 = 101U;
	static int32_t t32 = -12665929;

	t32 = ((x129&(x130<=x131))^x132);

	if (t32 != 101) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	volatile int16_t x135 = 0;
	int32_t x136 = INT32_MIN;
	volatile int64_t t33 = 60LL;

	t33 = ((x133&(x134<=x135))^x136);

	if (t33 != -2147483647LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = 77647437203262193LLU;
	static int32_t x138 = 1;
	static volatile int16_t x139 = INT16_MIN;
	volatile uint64_t x140 = 6LLU;
	uint64_t t34 = 131216132573536LLU;

	t34 = ((x137&(x138<=x139))^x140);

	if (t34 != 6LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	uint8_t x142 = UINT8_MAX;
	volatile int64_t x143 = INT64_MAX;

	t35 = ((x141&(x142<=x143))^x144);

	if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -36932LL;
	volatile int32_t x146 = 6532765;
	int32_t x147 = INT32_MAX;
	static int64_t t36 = INT64_MAX;

	t36 = ((x145&(x146<=x147))^x148);

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	volatile uint16_t x150 = 3U;
	int32_t x151 = INT32_MIN;
	static volatile int32_t t37 = 14;

	t37 = ((x149&(x150<=x151))^x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = 462154964U;
	uint16_t x155 = 0U;
	int32_t t38 = -8;

	t38 = ((x153&(x154<=x155))^x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	int64_t x158 = INT64_MAX;
	static int64_t x159 = INT64_MIN;
	uint64_t x160 = 4290127436335LLU;
	uint64_t t39 = 150LLU;

	t39 = ((x157&(x158<=x159))^x160);

	if (t39 != 4290127436335LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = INT32_MAX;
	uint8_t x162 = 1U;
	uint8_t x163 = 5U;
	volatile int32_t x164 = INT32_MIN;
	static int32_t t40 = 3316;

	t40 = ((x161&(x162<=x163))^x164);

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = -1;
	int16_t x167 = -1;
	uint32_t x168 = UINT32_MAX;
	static volatile uint32_t t41 = 18U;

	t41 = ((x165&(x166<=x167))^x168);

	if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = INT32_MAX;
	int16_t x171 = INT16_MIN;
	uint32_t t42 = UINT32_MAX;

	t42 = ((x169&(x170<=x171))^x172);

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x173 = 1156826154U;
	static volatile uint64_t x174 = UINT64_MAX;
	uint32_t x176 = 66U;
	static volatile uint32_t t43 = 658525U;

	t43 = ((x173&(x174<=x175))^x176);

	if (t43 != 66U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 57184668704627893LLU;
	uint64_t x179 = 1LLU;
	volatile uint32_t x180 = UINT32_MAX;
	static volatile uint64_t t44 = 1609161271LLU;

	t44 = ((x177&(x178<=x179))^x180);

	if (t44 != 4294967295LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x181 = 15U;
	uint8_t x182 = UINT8_MAX;
	int64_t x183 = -2622903567LL;
	volatile int8_t x184 = 1;
	int32_t t45 = -4338;

	t45 = ((x181&(x182<=x183))^x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 7299100204LLU;
	uint32_t x186 = 1233920U;
	uint16_t x187 = 15016U;
	uint8_t x188 = 19U;
	static uint64_t t46 = 34490273LLU;

	t46 = ((x185&(x186<=x187))^x188);

	if (t46 != 19LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = UINT64_MAX;
	uint16_t x190 = 227U;
	uint8_t x191 = UINT8_MAX;
	uint8_t x192 = 54U;
	uint64_t t47 = 916LLU;

	t47 = ((x189&(x190<=x191))^x192);

	if (t47 != 55LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -4362;
	int16_t x194 = INT16_MIN;
	volatile uint64_t x195 = 322003809022LLU;
	int32_t x196 = INT32_MAX;
	static int32_t t48 = INT32_MAX;

	t48 = ((x193&(x194<=x195))^x196);

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	int8_t x198 = -1;
	uint64_t x200 = UINT64_MAX;
	uint64_t t49 = UINT64_MAX;

	t49 = ((x197&(x198<=x199))^x200);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MIN;
	uint32_t x203 = 15U;
	static int8_t x204 = INT8_MAX;
	volatile int32_t t50 = 594739;

	t50 = ((x201&(x202<=x203))^x204);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	static int8_t x206 = INT8_MIN;
	static volatile int64_t x208 = -12101649182857LL;
	static int64_t t51 = 2129155319957LL;

	t51 = ((x205&(x206<=x207))^x208);

	if (t51 != -12101649182858LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MIN;
	volatile uint8_t x210 = 53U;
	int64_t x211 = -1LL;
	volatile uint64_t x212 = 25807147369LLU;
	volatile uint64_t t52 = 54LLU;

	t52 = ((x209&(x210<=x211))^x212);

	if (t52 != 25807147369LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 1313;
	static volatile int32_t x215 = INT32_MIN;
	static volatile int32_t x216 = -1;

	t53 = ((x213&(x214<=x215))^x216);

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = 1675;
	static int8_t x219 = 22;
	volatile int32_t t54 = INT32_MAX;

	t54 = ((x217&(x218<=x219))^x220);

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 42U;
	uint16_t x222 = 5U;
	uint16_t x224 = 14624U;
	int32_t t55 = -1552;

	t55 = ((x221&(x222<=x223))^x224);

	if (t55 != 14624) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 247350464;
	int64_t x226 = -5136LL;
	int64_t x227 = 1081909230520LL;
	int64_t x228 = 2833741756928563999LL;
	int64_t t56 = -8470434304476LL;

	t56 = ((x225&(x226<=x227))^x228);

	if (t56 != 2833741756928563999LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x229 = UINT64_MAX;
	int16_t x230 = -1;
	int32_t x232 = INT32_MAX;
	uint64_t t57 = 16811318709841321LLU;

	t57 = ((x229&(x230<=x231))^x232);

	if (t57 != 2147483646LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x234 = UINT64_MAX;
	int8_t x235 = INT8_MIN;
	int32_t t58 = 296883;

	t58 = ((x233&(x234<=x235))^x236);

	if (t58 != 9) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MIN;
	uint16_t x238 = UINT16_MAX;
	int8_t x239 = -1;
	uint64_t x240 = 44424LLU;
	volatile uint64_t t59 = 34411632577LLU;

	t59 = ((x237&(x238<=x239))^x240);

	if (t59 != 44424LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	volatile int32_t x242 = 10719859;
	int32_t x243 = INT32_MAX;
	static int32_t x244 = INT32_MIN;
	int32_t t60 = INT32_MIN;

	t60 = ((x241&(x242<=x243))^x244);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MAX;
	uint32_t x246 = 1094349U;
	uint16_t x248 = UINT16_MAX;
	int32_t t61 = 5;

	t61 = ((x245&(x246<=x247))^x248);

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	static int64_t x250 = -31140654040986LL;
	int64_t x251 = INT64_MIN;
	static int16_t x252 = INT16_MAX;

	t62 = ((x249&(x250<=x251))^x252);

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = 13533U;
	static uint32_t x255 = 32480651U;
	uint64_t x256 = 15LLU;
	uint64_t t63 = 16072573LLU;

	t63 = ((x253&(x254<=x255))^x256);

	if (t63 != 15LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	int64_t x258 = -1LL;
	uint8_t x259 = 1U;
	volatile int16_t x260 = -1;
	int32_t t64 = -67;

	t64 = ((x257&(x258<=x259))^x260);

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = -1;
	uint16_t x262 = UINT16_MAX;
	uint16_t x263 = 1009U;
	int16_t x264 = -1;
	int32_t t65 = -5;

	t65 = ((x261&(x262<=x263))^x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 28U;
	static int32_t x266 = 35435;
	static int32_t x267 = 1518983;
	int16_t x268 = 1;
	volatile int32_t t66 = 7645987;

	t66 = ((x265&(x266<=x267))^x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 149439375U;
	volatile int64_t x270 = -1738064151543923976LL;
	uint16_t x271 = 160U;
	int64_t x272 = 191604464910LL;
	int64_t t67 = 133LL;

	t67 = ((x269&(x270<=x271))^x272);

	if (t67 != 191604464911LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = 1;
	volatile int32_t x274 = INT32_MAX;
	static uint8_t x275 = 33U;
	volatile int16_t x276 = 1002;

	t68 = ((x273&(x274<=x275))^x276);

	if (t68 != 1002) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t t69 = 64977167U;

	t69 = ((x277&(x278<=x279))^x280);

	if (t69 != 4294967294U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x283 = INT16_MIN;
	static int64_t x284 = -1LL;
	int64_t t70 = -180523344837LL;

	t70 = ((x281&(x282<=x283))^x284);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 6LLU;
	int64_t x286 = INT64_MIN;
	static int32_t x287 = INT32_MIN;
	static uint32_t x288 = 181238U;
	volatile uint64_t t71 = 396996446521420LLU;

	t71 = ((x285&(x286<=x287))^x288);

	if (t71 != 181238LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = INT32_MAX;
	int64_t x292 = INT64_MAX;

	t72 = ((x289&(x290<=x291))^x292);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	volatile int64_t x294 = INT64_MIN;
	static uint32_t x295 = UINT32_MAX;
	int64_t x296 = -1089LL;
	int64_t t73 = 4514776889LL;

	t73 = ((x293&(x294<=x295))^x296);

	if (t73 != -1089LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x297 = UINT64_MAX;
	int64_t x299 = INT64_MIN;
	int64_t x300 = 4571070226267023833LL;

	t74 = ((x297&(x298<=x299))^x300);

	if (t74 != 4571070226267023833LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	static volatile int32_t x302 = INT32_MIN;
	static int64_t x303 = -1LL;
	int64_t x304 = INT64_MAX;

	t75 = ((x301&(x302<=x303))^x304);

	if (t75 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -3727008038300280594LL;
	int16_t x306 = INT16_MAX;
	uint64_t x307 = 311LLU;
	int8_t x308 = INT8_MAX;

	t76 = ((x305&(x306<=x307))^x308);

	if (t76 != 127LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MIN;
	volatile int8_t x310 = INT8_MAX;
	uint64_t x311 = 3458199104LLU;
	int32_t x312 = 968;
	int32_t t77 = 2425;

	t77 = ((x309&(x310<=x311))^x312);

	if (t77 != 968) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	int64_t x314 = -1438122166LL;
	uint16_t x315 = UINT16_MAX;
	int64_t x316 = -475442674853LL;

	t78 = ((x313&(x314<=x315))^x316);

	if (t78 != -475442674854LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = 267676847516969LL;
	uint8_t x318 = 1U;
	uint8_t x319 = 16U;
	volatile int64_t t79 = 1040123381635148389LL;

	t79 = ((x317&(x318<=x319))^x320);

	if (t79 != 10LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x324 = INT64_MAX;
	int64_t t80 = 11659920184LL;

	t80 = ((x321&(x322<=x323))^x324);

	if (t80 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = -1LL;
	int64_t x326 = INT64_MIN;
	volatile int64_t x327 = 64089314814LL;
	volatile uint32_t x328 = 1379U;

	t81 = ((x325&(x326<=x327))^x328);

	if (t81 != 1378LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -7396259326017LL;
	int64_t x330 = INT64_MIN;
	int64_t x331 = INT64_MIN;
	static int16_t x332 = INT16_MIN;

	t82 = ((x329&(x330<=x331))^x332);

	if (t82 != -32767LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = -1;
	int32_t x335 = -13835902;
	uint16_t x336 = UINT16_MAX;
	static int32_t t83 = -13502406;

	t83 = ((x333&(x334<=x335))^x336);

	if (t83 != 65534) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -3713;
	int8_t x338 = INT8_MIN;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = ((x337&(x338<=x339))^x340);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 20LLU;
	static int16_t x342 = 0;
	volatile int64_t x343 = INT64_MIN;
	uint64_t t85 = 2095577468756689581LLU;

	t85 = ((x341&(x342<=x343))^x344);

	if (t85 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	static int64_t x346 = -3702LL;
	uint64_t x348 = 10940008100501LLU;
	uint64_t t86 = 477LLU;

	t86 = ((x345&(x346<=x347))^x348);

	if (t86 != 10940008100501LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x350 = 72U;
	uint32_t x351 = UINT32_MAX;
	int64_t t87 = 577340LL;

	t87 = ((x349&(x350<=x351))^x352);

	if (t87 != 2215716028614LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MAX;
	int16_t x356 = -1;

	t88 = ((x353&(x354<=x355))^x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = 0;
	volatile int32_t x358 = INT32_MIN;
	uint8_t x359 = 11U;
	int64_t x360 = INT64_MAX;
	int64_t t89 = INT64_MAX;

	t89 = ((x357&(x358<=x359))^x360);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x361 = 163828010911923914LLU;
	uint16_t x362 = 10999U;
	static uint16_t x363 = UINT16_MAX;
	int32_t x364 = INT32_MAX;

	t90 = ((x361&(x362<=x363))^x364);

	if (t90 != 2147483647LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MAX;
	static int64_t x366 = -1LL;
	uint16_t x367 = UINT16_MAX;
	int8_t x368 = 5;

	t91 = ((x365&(x366<=x367))^x368);

	if (t91 != 4) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 208550384;
	int16_t x370 = -1;
	int64_t x371 = 61184258LL;
	int16_t x372 = 558;
	static int32_t t92 = 0;

	t92 = ((x369&(x370<=x371))^x372);

	if (t92 != 558) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x373 = 29922U;
	uint8_t x374 = 77U;
	int8_t x375 = -3;
	volatile uint64_t x376 = 215927237404LLU;
	static uint64_t t93 = 405996199738782493LLU;

	t93 = ((x373&(x374<=x375))^x376);

	if (t93 != 215927237404LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x378 = 12U;
	int8_t x379 = INT8_MAX;
	static volatile int8_t x380 = INT8_MIN;
	int64_t t94 = 24830359LL;

	t94 = ((x377&(x378<=x379))^x380);

	if (t94 != -127LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x381 = 30U;
	int8_t x383 = INT8_MAX;
	volatile uint64_t x384 = 380LLU;

	t95 = ((x381&(x382<=x383))^x384);

	if (t95 != 380LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	uint64_t x387 = 450985797300348045LLU;
	uint32_t x388 = 6U;
	uint32_t t96 = 5419583U;

	t96 = ((x385&(x386<=x387))^x388);

	if (t96 != 6U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 1063;
	int32_t x390 = INT32_MIN;
	static int8_t x391 = -1;
	volatile uint8_t x392 = UINT8_MAX;
	int32_t t97 = -20073656;

	t97 = ((x389&(x390<=x391))^x392);

	if (t97 != 254) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = INT32_MIN;
	int8_t x394 = INT8_MIN;
	volatile uint64_t x396 = 4414123461LLU;
	volatile uint64_t t98 = 374LLU;

	t98 = ((x393&(x394<=x395))^x396);

	if (t98 != 4414123461LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	uint64_t x398 = UINT64_MAX;
	static int8_t x399 = INT8_MAX;
	uint16_t x400 = 133U;

	t99 = ((x397&(x398<=x399))^x400);

	if (t99 != 133) { NG(); } else { ; }
	
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

