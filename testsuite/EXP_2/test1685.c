#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -68;
volatile uint64_t x6 = UINT64_MAX;
volatile int64_t x12 = INT64_MAX;
int32_t x14 = INT32_MAX;
int32_t x17 = INT32_MIN;
int32_t t4 = -38;
int32_t x26 = -1852;
static uint32_t x27 = 284061U;
volatile int32_t x30 = INT32_MAX;
int16_t x39 = -85;
int32_t x41 = -1;
int64_t x47 = -2191623108349740LL;
uint32_t x56 = 77579527U;
volatile int16_t x62 = INT16_MIN;
static int64_t x63 = INT64_MAX;
int16_t x64 = INT16_MIN;
int8_t x67 = INT8_MIN;
static int32_t x72 = 506147;
int16_t x80 = INT16_MIN;
int32_t x82 = -1;
int32_t x86 = INT32_MAX;
int32_t x88 = 1707;
int8_t x91 = INT8_MAX;
uint32_t x96 = 95567191U;
int16_t x105 = INT16_MAX;
uint8_t x108 = 3U;
int8_t x109 = -1;
uint32_t x116 = UINT32_MAX;
static int32_t t29 = -472406;
int8_t x122 = 3;
static int8_t x133 = INT8_MAX;
volatile uint16_t x134 = UINT16_MAX;
volatile int32_t t33 = -560986;
int32_t t34 = -1;
static uint16_t x144 = 1067U;
static volatile int32_t x146 = INT32_MIN;
volatile int8_t x153 = -1;
volatile int8_t x157 = INT8_MIN;
int32_t x159 = -374358333;
volatile int8_t x162 = INT8_MIN;
int8_t x163 = INT8_MIN;
uint32_t x173 = 18744100U;
static uint16_t x177 = UINT16_MAX;
int32_t t44 = -51;
volatile int32_t t45 = -125991;
uint16_t x189 = 2467U;
volatile int32_t x192 = -34311;
int8_t x194 = -1;
uint16_t x196 = 806U;
int32_t t50 = -1039807;
volatile int64_t x206 = INT64_MAX;
static int64_t x207 = 7108LL;
int64_t x214 = INT64_MAX;
volatile int16_t x220 = -1;
uint64_t x227 = 7279735LLU;
volatile int32_t t56 = -456621;
int16_t x242 = 6;
int16_t x247 = INT16_MIN;
int8_t x249 = 0;
int16_t x250 = -12;
static int16_t x259 = INT16_MAX;
int64_t x266 = INT64_MIN;
int64_t x272 = 117735599261LL;
int32_t x273 = -81579;
int32_t x281 = INT32_MIN;
int16_t x291 = 1737;
volatile int32_t x294 = INT32_MIN;
static int32_t x301 = 28743509;
uint64_t x303 = 5628LLU;
int8_t x313 = INT8_MAX;
int32_t x320 = -1;
uint64_t x322 = UINT64_MAX;
static int16_t x323 = -751;
int8_t x325 = 5;
int32_t x327 = INT32_MAX;
int32_t t81 = 48296;
int8_t x335 = INT8_MIN;
int32_t t83 = 243822456;
int32_t x340 = 1;
static int32_t x356 = INT32_MAX;
static int16_t x360 = INT16_MIN;
int64_t x361 = INT64_MIN;
int8_t x367 = INT8_MAX;
int64_t x372 = 29574593510240599LL;
int32_t t92 = 16578118;
uint32_t x373 = 135839295U;
volatile int32_t x382 = INT32_MIN;
volatile uint64_t x385 = 6LLU;
uint8_t x397 = 41U;


void f0(void) {
	uint64_t x1 = 474826496992280LLU;
	int16_t x3 = -3;
	uint32_t x4 = 1745U;
	volatile int32_t t0 = -3531;

	t0 = ((x1^(x2<=x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint8_t x7 = 3U;
	volatile int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 2008703;

	t1 = ((x5^(x6<=x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	int64_t x10 = INT64_MIN;
	int8_t x11 = INT8_MAX;
	static volatile int32_t t2 = 454;

	t2 = ((x9^(x10<=x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	static int32_t x15 = INT32_MAX;
	volatile int32_t x16 = INT32_MAX;
	static int32_t t3 = -13760;

	t3 = ((x13^(x14<=x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = -112LL;
	uint16_t x19 = 10477U;
	static int16_t x20 = INT16_MIN;

	t4 = ((x17^(x18<=x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 0U;
	int8_t x22 = INT8_MAX;
	static volatile int64_t x23 = -27040143LL;
	int16_t x24 = INT16_MAX;
	volatile int32_t t5 = 333;

	t5 = ((x21^(x22<=x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1383836987431LL;
	int64_t x28 = -40LL;
	int32_t t6 = -16432672;

	t6 = ((x25^(x26<=x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 2126U;
	int32_t x31 = INT32_MIN;
	int8_t x32 = INT8_MAX;
	int32_t t7 = 1;

	t7 = ((x29^(x30<=x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	int16_t x34 = -1;
	uint32_t x35 = UINT32_MAX;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 20336191;

	t8 = ((x33^(x34<=x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	uint32_t x38 = 0U;
	static int32_t x40 = INT32_MIN;
	volatile int32_t t9 = 1056498670;

	t9 = ((x37^(x38<=x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 11U;
	static volatile int8_t x43 = -1;
	int16_t x44 = -1;
	volatile int32_t t10 = -25;

	t10 = ((x41^(x42<=x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	int32_t x46 = INT32_MIN;
	volatile uint32_t x48 = UINT32_MAX;
	int32_t t11 = 59;

	t11 = ((x45^(x46<=x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int8_t x50 = INT8_MIN;
	static int16_t x51 = INT16_MIN;
	static uint16_t x52 = UINT16_MAX;
	int32_t t12 = 742;

	t12 = ((x49^(x50<=x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 0;
	volatile int64_t x54 = INT64_MIN;
	int64_t x55 = 8983328927LL;
	int32_t t13 = -56;

	t13 = ((x53^(x54<=x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	static int64_t x58 = -258199061226080LL;
	volatile int8_t x59 = INT8_MAX;
	int8_t x60 = -1;
	int32_t t14 = -1656021;

	t14 = ((x57^(x58<=x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 488;
	int32_t t15 = -40104;

	t15 = ((x61^(x62<=x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 83904524639265LL;
	int64_t x66 = -1092258739426LL;
	int64_t x68 = 7344302869LL;
	static int32_t t16 = 6435597;

	t16 = ((x65^(x66<=x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -374420720;
	int16_t x70 = -1;
	int64_t x71 = 65263132618LL;
	int32_t t17 = -742540;

	t17 = ((x69^(x70<=x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	volatile uint32_t x74 = 122390U;
	volatile uint16_t x75 = 2U;
	uint8_t x76 = 1U;
	volatile int32_t t18 = -2060897;

	t18 = ((x73^(x74<=x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x78 = INT64_MIN;
	volatile int64_t x79 = -1LL;
	static int32_t t19 = -76400416;

	t19 = ((x77^(x78<=x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 3624U;
	volatile int8_t x83 = 1;
	static int8_t x84 = INT8_MIN;
	int32_t t20 = -1;

	t20 = ((x81^(x82<=x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = UINT32_MAX;
	int8_t x87 = INT8_MIN;
	int32_t t21 = 699;

	t21 = ((x85^(x86<=x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int16_t x90 = INT16_MAX;
	int64_t x92 = INT64_MAX;
	int32_t t22 = 1;

	t22 = ((x89^(x90<=x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	volatile int32_t x94 = -101297364;
	int32_t x95 = 1;
	int32_t t23 = -44063;

	t23 = ((x93^(x94<=x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	volatile int64_t x98 = INT64_MIN;
	uint64_t x99 = UINT64_MAX;
	volatile int16_t x100 = 5;
	int32_t t24 = -695001332;

	t24 = ((x97^(x98<=x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int8_t x102 = -1;
	volatile int16_t x103 = 62;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = -1;

	t25 = ((x101^(x102<=x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x106 = INT64_MAX;
	volatile int8_t x107 = -1;
	volatile int32_t t26 = 464909240;

	t26 = ((x105^(x106<=x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x110 = -1LL;
	static int32_t x111 = -1;
	static int16_t x112 = INT16_MAX;
	volatile int32_t t27 = 0;

	t27 = ((x109^(x110<=x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MIN;
	volatile int64_t x114 = -1LL;
	static int8_t x115 = INT8_MAX;
	int32_t t28 = 582;

	t28 = ((x113^(x114<=x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int8_t x118 = INT8_MIN;
	uint8_t x119 = 3U;
	int8_t x120 = INT8_MAX;

	t29 = ((x117^(x118<=x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x121 = 18U;
	int32_t x123 = -1;
	volatile int16_t x124 = INT16_MIN;
	volatile int32_t t30 = -3;

	t30 = ((x121^(x122<=x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x125 = -372;
	int16_t x126 = INT16_MIN;
	static int32_t x127 = INT32_MIN;
	uint8_t x128 = 0U;
	int32_t t31 = 5083472;

	t31 = ((x125^(x126<=x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 59U;
	uint8_t x130 = UINT8_MAX;
	uint32_t x131 = 30090548U;
	uint16_t x132 = 15242U;
	static volatile int32_t t32 = -19119911;

	t32 = ((x129^(x130<=x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x135 = 9666;
	int16_t x136 = INT16_MAX;

	t33 = ((x133^(x134<=x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MAX;
	uint32_t x138 = UINT32_MAX;
	uint16_t x139 = 181U;
	static uint64_t x140 = UINT64_MAX;

	t34 = ((x137^(x138<=x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 0U;
	uint64_t x142 = UINT64_MAX;
	uint32_t x143 = UINT32_MAX;
	static int32_t t35 = -201;

	t35 = ((x141^(x142<=x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	uint8_t x147 = UINT8_MAX;
	uint64_t x148 = UINT64_MAX;
	volatile int32_t t36 = 20566274;

	t36 = ((x145^(x146<=x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MAX;
	volatile uint32_t x151 = 227934576U;
	static volatile int64_t x152 = INT64_MIN;
	int32_t t37 = 556137;

	t37 = ((x149^(x150<=x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = INT64_MAX;
	int64_t x155 = -1LL;
	uint8_t x156 = 71U;
	static volatile int32_t t38 = -4205467;

	t38 = ((x153^(x154<=x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = INT32_MIN;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -11746117;

	t39 = ((x157^(x158<=x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -422786292LL;
	volatile int64_t x164 = INT64_MIN;
	volatile int32_t t40 = 1;

	t40 = ((x161^(x162<=x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -482;
	uint8_t x166 = 0U;
	int16_t x167 = INT16_MIN;
	uint16_t x168 = 69U;
	static int32_t t41 = -7214;

	t41 = ((x165^(x166<=x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = UINT8_MAX;
	int32_t x170 = INT32_MAX;
	int64_t x171 = INT64_MIN;
	uint8_t x172 = 2U;
	static int32_t t42 = 13;

	t42 = ((x169^(x170<=x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = INT8_MIN;
	volatile uint32_t x175 = 4011U;
	int16_t x176 = INT16_MAX;
	volatile int32_t t43 = 227;

	t43 = ((x173^(x174<=x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MIN;
	static int16_t x180 = INT16_MIN;

	t44 = ((x177^(x178<=x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = -13;
	int64_t x182 = INT64_MAX;
	uint8_t x183 = 30U;
	int8_t x184 = -1;

	t45 = ((x181^(x182<=x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	volatile int16_t x186 = INT16_MAX;
	int64_t x187 = 991512365LL;
	int16_t x188 = INT16_MIN;
	int32_t t46 = -5894394;

	t46 = ((x185^(x186<=x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = -1LL;
	int64_t x191 = INT64_MAX;
	int32_t t47 = 0;

	t47 = ((x189^(x190<=x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	uint32_t x195 = UINT32_MAX;
	int32_t t48 = 996487;

	t48 = ((x193^(x194<=x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MAX;
	static int64_t x198 = 5748657898LL;
	int64_t x199 = 34148LL;
	uint16_t x200 = 37U;
	volatile int32_t t49 = -425;

	t49 = ((x197^(x198<=x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	static int64_t x202 = -1LL;
	volatile int64_t x203 = INT64_MAX;
	int64_t x204 = 24850309LL;

	t50 = ((x201^(x202<=x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -619;
	volatile int64_t x208 = 5390212LL;
	volatile int32_t t51 = -20469;

	t51 = ((x205^(x206<=x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x209 = INT32_MIN;
	int8_t x210 = -3;
	int64_t x211 = -1LL;
	static uint64_t x212 = 87083107LLU;
	static int32_t t52 = 239;

	t52 = ((x209^(x210<=x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static int32_t x215 = INT32_MIN;
	static int16_t x216 = -3;
	volatile int32_t t53 = -21;

	t53 = ((x213^(x214<=x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	int8_t x218 = INT8_MIN;
	volatile uint32_t x219 = 7417U;
	int32_t t54 = 375661;

	t54 = ((x217^(x218<=x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -21497698885LL;
	static int8_t x222 = INT8_MIN;
	int32_t x223 = -1;
	static int8_t x224 = INT8_MIN;
	volatile int32_t t55 = 6052;

	t55 = ((x221^(x222<=x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 267988643LLU;
	static int32_t x226 = -124731285;
	int8_t x228 = INT8_MIN;

	t56 = ((x225^(x226<=x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = 12;
	uint16_t x230 = 17129U;
	static uint64_t x231 = 169140064961126284LLU;
	volatile int8_t x232 = 17;
	static volatile int32_t t57 = -1;

	t57 = ((x229^(x230<=x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = -5;
	uint32_t x234 = 22U;
	volatile int32_t x235 = INT32_MIN;
	int64_t x236 = -244092910502LL;
	volatile int32_t t58 = -13210222;

	t58 = ((x233^(x234<=x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -202LL;
	volatile int16_t x238 = INT16_MAX;
	static uint8_t x239 = 55U;
	uint16_t x240 = 6779U;
	int32_t t59 = 950704532;

	t59 = ((x237^(x238<=x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MAX;
	volatile uint16_t x243 = UINT16_MAX;
	static int8_t x244 = -1;
	static int32_t t60 = 1403;

	t60 = ((x241^(x242<=x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 515LLU;
	int32_t x246 = INT32_MAX;
	int16_t x248 = -2957;
	volatile int32_t t61 = 51465;

	t61 = ((x245^(x246<=x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x251 = 15U;
	int64_t x252 = 0LL;
	int32_t t62 = -45;

	t62 = ((x249^(x250<=x251))==x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = 31U;
	int64_t x254 = INT64_MIN;
	volatile int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MIN;
	int32_t t63 = -109;

	t63 = ((x253^(x254<=x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	uint64_t x258 = 166826282604694LLU;
	int32_t x260 = INT32_MAX;
	int32_t t64 = 15350137;

	t64 = ((x257^(x258<=x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	volatile int8_t x262 = INT8_MIN;
	volatile int8_t x263 = 8;
	int8_t x264 = INT8_MIN;
	volatile int32_t t65 = 381;

	t65 = ((x261^(x262<=x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = -4;
	uint8_t x267 = UINT8_MAX;
	int64_t x268 = -1LL;
	volatile int32_t t66 = 78;

	t66 = ((x265^(x266<=x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	int64_t x270 = -12698489263418159LL;
	static int64_t x271 = -1LL;
	volatile int32_t t67 = -107309;

	t67 = ((x269^(x270<=x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x274 = INT8_MIN;
	int32_t x275 = INT32_MAX;
	volatile uint32_t x276 = 7U;
	static volatile int32_t t68 = -445;

	t68 = ((x273^(x274<=x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MIN;
	int16_t x278 = INT16_MIN;
	int32_t x279 = INT32_MIN;
	uint8_t x280 = 0U;
	static int32_t t69 = 15636;

	t69 = ((x277^(x278<=x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = -1;
	int16_t x283 = 127;
	int32_t x284 = -1;
	volatile int32_t t70 = 89917007;

	t70 = ((x281^(x282<=x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = INT32_MAX;
	static int16_t x286 = -10;
	volatile int8_t x287 = 53;
	uint32_t x288 = 2U;
	volatile int32_t t71 = -27;

	t71 = ((x285^(x286<=x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	volatile uint64_t x290 = UINT64_MAX;
	int8_t x292 = 4;
	static volatile int32_t t72 = 55717;

	t72 = ((x289^(x290<=x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x293 = -43;
	uint64_t x295 = UINT64_MAX;
	int16_t x296 = -2;
	volatile int32_t t73 = 744691613;

	t73 = ((x293^(x294<=x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 1;
	static int8_t x298 = INT8_MAX;
	int64_t x299 = 48391LL;
	static int64_t x300 = 1LL;
	int32_t t74 = 2;

	t74 = ((x297^(x298<=x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x302 = 954U;
	int16_t x304 = -421;
	int32_t t75 = -29;

	t75 = ((x301^(x302<=x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = 2LLU;
	int16_t x306 = INT16_MIN;
	uint8_t x307 = 6U;
	volatile int32_t x308 = -1;
	volatile int32_t t76 = -536858503;

	t76 = ((x305^(x306<=x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	static int8_t x310 = INT8_MAX;
	uint8_t x311 = 8U;
	int8_t x312 = -1;
	int32_t t77 = -943126424;

	t77 = ((x309^(x310<=x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x314 = 1592752234LL;
	int64_t x315 = INT64_MAX;
	volatile int16_t x316 = INT16_MIN;
	volatile int32_t t78 = 4361223;

	t78 = ((x313^(x314<=x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = UINT8_MAX;
	static int8_t x318 = -11;
	static volatile int64_t x319 = INT64_MAX;
	volatile int32_t t79 = 1842;

	t79 = ((x317^(x318<=x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 13826458;

	t80 = ((x321^(x322<=x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MIN;
	static uint64_t x328 = UINT64_MAX;

	t81 = ((x325^(x326<=x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	volatile uint64_t x330 = 373483422081LLU;
	uint16_t x331 = UINT16_MAX;
	static int16_t x332 = INT16_MIN;
	static int32_t t82 = -460;

	t82 = ((x329^(x330<=x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = -1;
	int64_t x334 = -2192998423134LL;
	int64_t x336 = -2685431LL;

	t83 = ((x333^(x334<=x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x337 = -1;
	static int32_t x338 = INT32_MIN;
	uint32_t x339 = UINT32_MAX;
	static int32_t t84 = 877;

	t84 = ((x337^(x338<=x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MIN;
	int8_t x342 = 0;
	int16_t x343 = -1;
	volatile uint32_t x344 = UINT32_MAX;
	volatile int32_t t85 = -219310017;

	t85 = ((x341^(x342<=x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = 359;
	int64_t x347 = 6LL;
	int8_t x348 = -1;
	int32_t t86 = -645263;

	t86 = ((x345^(x346<=x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = 8860;
	volatile int8_t x350 = -1;
	volatile uint8_t x351 = 5U;
	static int64_t x352 = INT64_MIN;
	volatile int32_t t87 = -61;

	t87 = ((x349^(x350<=x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	static int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MIN;
	volatile int32_t t88 = 3106928;

	t88 = ((x353^(x354<=x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	uint32_t x358 = 390U;
	static uint64_t x359 = 9529094585LLU;
	volatile int32_t t89 = -7939;

	t89 = ((x357^(x358<=x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = -1;
	uint16_t x363 = UINT16_MAX;
	int8_t x364 = INT8_MAX;
	int32_t t90 = -13;

	t90 = ((x361^(x362<=x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 1;
	uint64_t x366 = 28LLU;
	int64_t x368 = INT64_MAX;
	static int32_t t91 = 27066808;

	t91 = ((x365^(x366<=x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x369 = 15314U;
	volatile int16_t x370 = -1;
	volatile uint16_t x371 = UINT16_MAX;

	t92 = ((x369^(x370<=x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x374 = INT32_MAX;
	volatile uint64_t x375 = UINT64_MAX;
	uint64_t x376 = UINT64_MAX;
	static volatile int32_t t93 = 33932;

	t93 = ((x373^(x374<=x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MIN;
	static int16_t x378 = -1;
	uint32_t x379 = UINT32_MAX;
	int8_t x380 = -1;
	static volatile int32_t t94 = 894;

	t94 = ((x377^(x378<=x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x381 = 31760193210073488LL;
	static int64_t x383 = -1481LL;
	int64_t x384 = -1LL;
	volatile int32_t t95 = 1;

	t95 = ((x381^(x382<=x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x386 = INT64_MAX;
	int8_t x387 = 4;
	static uint8_t x388 = 0U;
	volatile int32_t t96 = -12;

	t96 = ((x385^(x386<=x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 5U;
	int32_t x390 = -104208365;
	volatile uint64_t x391 = 30116127LLU;
	volatile int16_t x392 = INT16_MAX;
	static int32_t t97 = 34023;

	t97 = ((x389^(x390<=x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 1869U;
	static int8_t x394 = -10;
	int32_t x395 = -1;
	int32_t x396 = 2838657;
	volatile int32_t t98 = 0;

	t98 = ((x393^(x394<=x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = -29287670;
	volatile int64_t x399 = -3LL;
	int64_t x400 = INT64_MIN;
	int32_t t99 = -87;

	t99 = ((x397^(x398<=x399))==x400);

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

