#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = -1;
uint32_t x2 = 2712U;
static int32_t t0 = -10686;
static int16_t x6 = INT16_MIN;
static int64_t x8 = -59280430LL;
volatile int32_t t1 = -386;
int64_t x24 = INT64_MIN;
static int32_t t4 = 1154079;
uint8_t x25 = 79U;
uint8_t x27 = 0U;
volatile uint8_t x28 = UINT8_MAX;
static volatile uint32_t x32 = 8895U;
int32_t t9 = 15;
volatile uint32_t x49 = 97322U;
int16_t x51 = INT16_MIN;
int64_t x52 = -25908149772253LL;
int32_t t11 = 5305425;
uint32_t x55 = 35325404U;
volatile int32_t t13 = -68354;
int64_t x61 = 1736LL;
volatile int32_t t14 = -710;
static volatile int8_t x70 = INT8_MIN;
static uint32_t x81 = 36U;
int64_t x84 = -1LL;
uint16_t x93 = 2312U;
int32_t t21 = 32025;
int16_t x99 = 2567;
int32_t x100 = -1;
int32_t t22 = -1;
int64_t x106 = -11168089774764LL;
int32_t x114 = 2276;
int64_t x116 = 0LL;
int32_t t26 = -31;
static uint64_t x122 = 218714681LLU;
int16_t x128 = -1;
volatile int64_t x135 = -695LL;
int32_t t31 = -42329;
uint64_t x146 = 1417LLU;
int32_t x149 = 593;
int64_t x154 = 20LL;
volatile uint8_t x155 = UINT8_MAX;
static int64_t x163 = INT64_MAX;
int32_t x164 = INT32_MAX;
int32_t t37 = 88115368;
static int32_t t41 = 0;
int16_t x183 = -14520;
int64_t x188 = INT64_MIN;
int16_t x198 = -70;
int16_t x199 = INT16_MAX;
static int32_t x220 = -1;
static uint8_t x222 = UINT8_MAX;
static uint16_t x230 = 2878U;
uint64_t x232 = 864831314128LLU;
volatile uint8_t x234 = 23U;
int8_t x235 = 10;
uint64_t x236 = 171524LLU;
volatile int32_t t54 = -1004;
volatile int32_t x246 = INT32_MIN;
int64_t x248 = -16869237106877LL;
volatile int32_t t56 = -7085;
int16_t x249 = INT16_MIN;
static uint64_t x257 = 317445LLU;
int16_t x260 = -1;
volatile int32_t x261 = -261555143;
int32_t x268 = -132133157;
int8_t x270 = 9;
uint64_t x272 = 0LLU;
int32_t t64 = -45270;
static volatile uint32_t x291 = 1U;
uint64_t x298 = 64901780203042128LLU;
volatile uint64_t x299 = UINT64_MAX;
int16_t x301 = INT16_MIN;
uint64_t x302 = UINT64_MAX;
volatile int32_t t69 = -107831;
uint16_t x313 = 37U;
int64_t x316 = INT64_MIN;
volatile int8_t x325 = INT8_MAX;
int32_t x341 = 329;
int64_t x345 = INT64_MIN;
volatile int64_t x353 = 0LL;
int16_t x365 = INT16_MIN;
volatile int16_t x368 = 6354;
static int32_t x370 = -1;
int32_t t82 = 2;
uint32_t x376 = 29U;
int64_t x385 = -14104267818208673LL;
int32_t t86 = -45664205;
uint16_t x390 = UINT16_MAX;
int32_t x394 = INT32_MAX;
volatile int32_t t89 = -371970;
uint32_t x403 = 1343938U;
static int8_t x404 = INT8_MIN;
static volatile uint32_t x408 = 0U;
int32_t x415 = INT32_MIN;
static int32_t x420 = -58472692;
static int8_t x425 = INT8_MIN;
int64_t x426 = -1LL;
uint32_t x441 = UINT32_MAX;


void f0(void) {
	volatile int64_t x3 = -1LL;
	uint32_t x4 = 397U;

	t0 = ((x1/(x2+x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static volatile int16_t x7 = -1;

	t1 = ((x5/(x6+x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	static int8_t x14 = INT8_MIN;
	volatile uint32_t x15 = 21996U;
	volatile int16_t x16 = INT16_MIN;
	volatile int32_t t2 = 2;

	t2 = ((x13/(x14+x15))<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	uint32_t x18 = 1600066931U;
	uint64_t x19 = UINT64_MAX;
	uint16_t x20 = UINT16_MAX;
	int32_t t3 = -5299780;

	t3 = ((x17/(x18+x19))<=x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x21 = INT8_MIN;
	uint16_t x22 = 12239U;
	int32_t x23 = 1;

	t4 = ((x21/(x22+x23))<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x26 = UINT64_MAX;
	volatile int32_t t5 = 744680;

	t5 = ((x25/(x26+x27))<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 72261453048403541LL;
	int32_t x30 = 13;
	uint32_t x31 = 1U;
	volatile int32_t t6 = 1552921;

	t6 = ((x29/(x30+x31))<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	int16_t x34 = INT16_MIN;
	int8_t x35 = -1;
	int32_t x36 = INT32_MIN;
	int32_t t7 = 41;

	t7 = ((x33/(x34+x35))<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	static int8_t x38 = 2;
	uint8_t x39 = 4U;
	static volatile int64_t x40 = INT64_MIN;
	volatile int32_t t8 = 7471474;

	t8 = ((x37/(x38+x39))<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 14U;
	static uint64_t x42 = UINT64_MAX;
	uint64_t x43 = 286333095315987746LLU;
	int16_t x44 = 7165;

	t9 = ((x41/(x42+x43))<=x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 2670274711LLU;
	uint8_t x46 = 2U;
	int16_t x47 = 16168;
	int8_t x48 = INT8_MIN;
	int32_t t10 = -278256971;

	t10 = ((x45/(x46+x47))<=x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = -3977;

	t11 = ((x49/(x50+x51))<=x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x53 = 1U;
	static volatile int16_t x54 = INT16_MAX;
	int8_t x56 = 1;
	int32_t t12 = -44;

	t12 = ((x53/(x54+x55))<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = UINT16_MAX;
	int8_t x58 = 0;
	int16_t x59 = INT16_MAX;
	uint8_t x60 = 0U;

	t13 = ((x57/(x58+x59))<=x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = INT8_MIN;
	int16_t x63 = INT16_MIN;
	int64_t x64 = INT64_MAX;

	t14 = ((x61/(x62+x63))<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	static volatile int8_t x66 = -1;
	int32_t x67 = -457028642;
	static uint8_t x68 = UINT8_MAX;
	int32_t t15 = -4;

	t15 = ((x65/(x66+x67))<=x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	int8_t x71 = -1;
	int16_t x72 = -1;
	int32_t t16 = 51377771;

	t16 = ((x69/(x70+x71))<=x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = -6610;
	int8_t x75 = -1;
	static int8_t x76 = INT8_MIN;
	volatile int32_t t17 = -774223;

	t17 = ((x73/(x74+x75))<=x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = 0;
	uint64_t x78 = 6LLU;
	int32_t x79 = INT32_MAX;
	volatile int32_t x80 = -1;
	int32_t t18 = 581573;

	t18 = ((x77/(x78+x79))<=x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = -7;
	volatile int32_t x83 = -1;
	volatile int32_t t19 = 1733729;

	t19 = ((x81/(x82+x83))<=x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 164U;
	uint32_t x86 = UINT32_MAX;
	uint32_t x87 = 1410518U;
	uint64_t x88 = 112057916378LLU;
	static int32_t t20 = -291;

	t20 = ((x85/(x86+x87))<=x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x94 = -3522;
	uint16_t x95 = 5U;
	volatile int16_t x96 = 1;

	t21 = ((x93/(x94+x95))<=x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MIN;
	volatile int32_t x98 = -336;

	t22 = ((x97/(x98+x99))<=x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x101 = UINT16_MAX;
	uint16_t x102 = 11U;
	static uint16_t x103 = UINT16_MAX;
	int8_t x104 = -11;
	volatile int32_t t23 = 4020;

	t23 = ((x101/(x102+x103))<=x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = 46660;
	int64_t x107 = 16635696LL;
	uint32_t x108 = 25643637U;
	volatile int32_t t24 = -85818;

	t24 = ((x105/(x106+x107))<=x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MAX;
	static int32_t x110 = -1;
	static int32_t x111 = -1;
	int32_t x112 = 0;
	volatile int32_t t25 = 58908207;

	t25 = ((x109/(x110+x111))<=x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x113 = -60;
	uint32_t x115 = UINT32_MAX;

	t26 = ((x113/(x114+x115))<=x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MAX;
	static uint32_t x118 = UINT32_MAX;
	static int16_t x119 = -1;
	uint32_t x120 = 56993U;
	int32_t t27 = -1179882;

	t27 = ((x117/(x118+x119))<=x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MIN;
	volatile uint16_t x123 = 8U;
	static int16_t x124 = -1;
	volatile int32_t t28 = -18475;

	t28 = ((x121/(x122+x123))<=x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = UINT64_MAX;
	static uint64_t x126 = 1308579954LLU;
	static int32_t x127 = INT32_MAX;
	int32_t t29 = -66568;

	t29 = ((x125/(x126+x127))<=x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MAX;
	int16_t x130 = -6;
	int32_t x131 = 62760;
	int32_t x132 = INT32_MIN;
	int32_t t30 = 958;

	t30 = ((x129/(x130+x131))<=x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = 13U;
	uint64_t x134 = UINT64_MAX;
	static int16_t x136 = 126;

	t31 = ((x133/(x134+x135))<=x136);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MIN;
	uint64_t x138 = 2179545698031575LLU;
	int64_t x139 = -93LL;
	int16_t x140 = INT16_MIN;
	volatile int32_t t32 = -29522949;

	t32 = ((x137/(x138+x139))<=x140);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x145 = -1;
	uint16_t x147 = 21U;
	uint64_t x148 = 159032LLU;
	volatile int32_t t33 = -1725;

	t33 = ((x145/(x146+x147))<=x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x150 = UINT16_MAX;
	static int64_t x151 = INT64_MIN;
	int8_t x152 = INT8_MAX;
	int32_t t34 = 28;

	t34 = ((x149/(x150+x151))<=x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x153 = -1;
	volatile int8_t x156 = -1;
	volatile int32_t t35 = 77350;

	t35 = ((x153/(x154+x155))<=x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = 0;
	uint16_t x158 = 31947U;
	int32_t x159 = -1;
	static uint32_t x160 = UINT32_MAX;
	volatile int32_t t36 = -6099144;

	t36 = ((x157/(x158+x159))<=x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MIN;
	int64_t x162 = INT64_MIN;

	t37 = ((x161/(x162+x163))<=x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x165 = 6U;
	int64_t x166 = INT64_MIN;
	uint16_t x167 = UINT16_MAX;
	volatile int64_t x168 = -1070706LL;
	volatile int32_t t38 = 53;

	t38 = ((x165/(x166+x167))<=x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MAX;
	int8_t x170 = INT8_MIN;
	volatile uint16_t x171 = 53U;
	int16_t x172 = -1;
	int32_t t39 = 276962656;

	t39 = ((x169/(x170+x171))<=x172);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MIN;
	volatile uint32_t x174 = UINT32_MAX;
	int16_t x175 = INT16_MIN;
	uint64_t x176 = 386LLU;
	int32_t t40 = 18;

	t40 = ((x173/(x174+x175))<=x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x177 = 760522LLU;
	volatile uint64_t x178 = UINT64_MAX;
	uint16_t x179 = 17U;
	uint64_t x180 = UINT64_MAX;

	t41 = ((x177/(x178+x179))<=x180);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = INT8_MIN;
	int64_t x182 = 380249817290648512LL;
	uint64_t x184 = UINT64_MAX;
	int32_t t42 = 226;

	t42 = ((x181/(x182+x183))<=x184);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x185 = 85U;
	int8_t x186 = -1;
	int8_t x187 = INT8_MIN;
	volatile int32_t t43 = 433;

	t43 = ((x185/(x186+x187))<=x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = -25;
	uint8_t x190 = 1U;
	int32_t x191 = -126639;
	static int16_t x192 = -1;
	int32_t t44 = -98;

	t44 = ((x189/(x190+x191))<=x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x193 = -1031147735;
	uint64_t x194 = 820515LLU;
	uint8_t x195 = 12U;
	static int32_t x196 = INT32_MIN;
	static int32_t t45 = 1;

	t45 = ((x193/(x194+x195))<=x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -1;
	volatile int16_t x200 = -1;
	volatile int32_t t46 = 117;

	t46 = ((x197/(x198+x199))<=x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x201 = 182U;
	int16_t x202 = INT16_MIN;
	uint32_t x203 = 114U;
	uint32_t x204 = UINT32_MAX;
	volatile int32_t t47 = -53;

	t47 = ((x201/(x202+x203))<=x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x205 = 214LL;
	volatile uint8_t x206 = 3U;
	uint64_t x207 = 3493LLU;
	static volatile int32_t x208 = INT32_MIN;
	volatile int32_t t48 = -1;

	t48 = ((x205/(x206+x207))<=x208);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = INT64_MAX;
	uint16_t x214 = 234U;
	int64_t x215 = 3LL;
	uint16_t x216 = 266U;
	int32_t t49 = -327;

	t49 = ((x213/(x214+x215))<=x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = 47;
	int64_t x218 = INT64_MAX;
	int8_t x219 = INT8_MIN;
	static int32_t t50 = 54859;

	t50 = ((x217/(x218+x219))<=x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x221 = 1U;
	int64_t x223 = -1LL;
	static uint32_t x224 = 1280U;
	volatile int32_t t51 = -303281;

	t51 = ((x221/(x222+x223))<=x224);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = -1;
	static uint64_t x231 = UINT64_MAX;
	volatile int32_t t52 = -1559763;

	t52 = ((x229/(x230+x231))<=x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x233 = -1LL;
	volatile int32_t t53 = -7;

	t53 = ((x233/(x234+x235))<=x236);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = INT16_MIN;
	uint64_t x238 = 11832LLU;
	static uint64_t x239 = UINT64_MAX;
	static uint8_t x240 = 60U;

	t54 = ((x237/(x238+x239))<=x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x241 = 273LL;
	volatile uint32_t x242 = 4074U;
	static int16_t x243 = INT16_MAX;
	int64_t x244 = INT64_MIN;
	int32_t t55 = 0;

	t55 = ((x241/(x242+x243))<=x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x245 = -252;
	uint8_t x247 = UINT8_MAX;

	t56 = ((x245/(x246+x247))<=x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x250 = INT8_MIN;
	int16_t x251 = INT16_MIN;
	static int32_t x252 = INT32_MIN;
	volatile int32_t t57 = 4;

	t57 = ((x249/(x250+x251))<=x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x258 = 93U;
	uint32_t x259 = 158810372U;
	static int32_t t58 = 8;

	t58 = ((x257/(x258+x259))<=x260);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x262 = UINT64_MAX;
	static uint32_t x263 = 98U;
	static uint8_t x264 = UINT8_MAX;
	int32_t t59 = -2;

	t59 = ((x261/(x262+x263))<=x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x265 = INT64_MIN;
	static volatile uint32_t x266 = UINT32_MAX;
	uint8_t x267 = 56U;
	volatile int32_t t60 = 1022873;

	t60 = ((x265/(x266+x267))<=x268);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x269 = INT8_MAX;
	uint8_t x271 = 27U;
	volatile int32_t t61 = -424278133;

	t61 = ((x269/(x270+x271))<=x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x273 = 57U;
	int64_t x274 = 531517713LL;
	int16_t x275 = INT16_MIN;
	int8_t x276 = -2;
	static int32_t t62 = 628447;

	t62 = ((x273/(x274+x275))<=x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x277 = INT8_MIN;
	uint32_t x278 = 2853581U;
	volatile uint64_t x279 = UINT64_MAX;
	int32_t x280 = 1;
	volatile int32_t t63 = -33463374;

	t63 = ((x277/(x278+x279))<=x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x281 = -2733584LL;
	int32_t x282 = 677;
	static volatile uint64_t x283 = 8265941256853LLU;
	int32_t x284 = 6028814;

	t64 = ((x281/(x282+x283))<=x284);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = INT64_MIN;
	volatile uint16_t x286 = UINT16_MAX;
	int16_t x287 = 0;
	static uint16_t x288 = UINT16_MAX;
	static int32_t t65 = 30751;

	t65 = ((x285/(x286+x287))<=x288);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x289 = -1;
	int16_t x290 = 20;
	int32_t x292 = INT32_MAX;
	int32_t t66 = 40;

	t66 = ((x289/(x290+x291))<=x292);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x293 = 58U;
	uint16_t x294 = UINT16_MAX;
	uint8_t x295 = UINT8_MAX;
	int16_t x296 = -503;
	volatile int32_t t67 = 1326;

	t67 = ((x293/(x294+x295))<=x296);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x297 = UINT32_MAX;
	int64_t x300 = -37063079LL;
	static volatile int32_t t68 = 166;

	t68 = ((x297/(x298+x299))<=x300);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MIN;

	t69 = ((x301/(x302+x303))<=x304);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x305 = 46U;
	static volatile uint32_t x306 = UINT32_MAX;
	static int16_t x307 = -1329;
	volatile uint16_t x308 = 1U;
	static int32_t t70 = -300057794;

	t70 = ((x305/(x306+x307))<=x308);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x309 = 1U;
	volatile int16_t x310 = -1;
	uint16_t x311 = UINT16_MAX;
	volatile int8_t x312 = INT8_MAX;
	volatile int32_t t71 = -394603;

	t71 = ((x309/(x310+x311))<=x312);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x314 = INT16_MIN;
	volatile uint64_t x315 = 487760236LLU;
	static volatile int32_t t72 = -12535993;

	t72 = ((x313/(x314+x315))<=x316);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = 2;
	uint8_t x318 = 1U;
	static uint16_t x319 = UINT16_MAX;
	volatile int32_t x320 = -1;
	static volatile int32_t t73 = -606;

	t73 = ((x317/(x318+x319))<=x320);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x326 = UINT64_MAX;
	uint16_t x327 = UINT16_MAX;
	volatile int8_t x328 = INT8_MAX;
	static int32_t t74 = 0;

	t74 = ((x325/(x326+x327))<=x328);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x337 = 63066767690037024LLU;
	uint32_t x338 = 13470U;
	volatile int8_t x339 = 1;
	int16_t x340 = INT16_MIN;
	static int32_t t75 = -33391;

	t75 = ((x337/(x338+x339))<=x340);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x342 = 9;
	int8_t x343 = 43;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t76 = 44358;

	t76 = ((x341/(x342+x343))<=x344);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x346 = INT16_MIN;
	uint64_t x347 = UINT64_MAX;
	int32_t x348 = INT32_MAX;
	static int32_t t77 = 105;

	t77 = ((x345/(x346+x347))<=x348);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x349 = 11118LL;
	int64_t x350 = INT64_MIN;
	volatile uint8_t x351 = 60U;
	int16_t x352 = INT16_MAX;
	volatile int32_t t78 = -1568991;

	t78 = ((x349/(x350+x351))<=x352);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x354 = 228704;
	static int64_t x355 = -84397532LL;
	static int16_t x356 = -1;
	int32_t t79 = 741506;

	t79 = ((x353/(x354+x355))<=x356);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x361 = INT8_MAX;
	int8_t x362 = INT8_MAX;
	volatile int32_t x363 = -829839;
	uint16_t x364 = UINT16_MAX;
	int32_t t80 = 105;

	t80 = ((x361/(x362+x363))<=x364);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x366 = INT32_MIN;
	volatile int64_t x367 = -1LL;
	static volatile int32_t t81 = -7;

	t81 = ((x365/(x366+x367))<=x368);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x369 = INT8_MAX;
	int16_t x371 = INT16_MAX;
	int64_t x372 = INT64_MIN;

	t82 = ((x369/(x370+x371))<=x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = INT64_MIN;
	static int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MIN;
	static volatile int32_t t83 = -7;

	t83 = ((x373/(x374+x375))<=x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x377 = 92695535LLU;
	uint16_t x378 = 27U;
	uint8_t x379 = 23U;
	int8_t x380 = INT8_MIN;
	int32_t t84 = -63880;

	t84 = ((x377/(x378+x379))<=x380);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x381 = INT32_MAX;
	int16_t x382 = INT16_MAX;
	int16_t x383 = -1;
	int32_t x384 = INT32_MIN;
	static int32_t t85 = 207360266;

	t85 = ((x381/(x382+x383))<=x384);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x386 = 445483379U;
	volatile int8_t x387 = INT8_MIN;
	int16_t x388 = INT16_MIN;

	t86 = ((x385/(x386+x387))<=x388);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x389 = -1;
	static int64_t x391 = INT64_MIN;
	static int32_t x392 = INT32_MIN;
	int32_t t87 = 1;

	t87 = ((x389/(x390+x391))<=x392);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x393 = INT64_MAX;
	int16_t x395 = INT16_MIN;
	int16_t x396 = INT16_MIN;
	volatile int32_t t88 = -30901;

	t88 = ((x393/(x394+x395))<=x396);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x397 = INT64_MIN;
	uint8_t x398 = 8U;
	static int64_t x399 = INT64_MIN;
	static uint8_t x400 = 22U;

	t89 = ((x397/(x398+x399))<=x400);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x401 = 36;
	int8_t x402 = -45;
	int32_t t90 = -12293;

	t90 = ((x401/(x402+x403))<=x404);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x405 = INT64_MAX;
	int16_t x406 = INT16_MIN;
	static int32_t x407 = -254001757;
	volatile int32_t t91 = -1;

	t91 = ((x405/(x406+x407))<=x408);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x409 = 6133U;
	uint32_t x410 = 1211379411U;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = INT8_MIN;
	int32_t t92 = -216431071;

	t92 = ((x409/(x410+x411))<=x412);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x413 = 31U;
	uint32_t x414 = 149288U;
	int32_t x416 = 0;
	volatile int32_t t93 = 1;

	t93 = ((x413/(x414+x415))<=x416);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = INT8_MIN;
	volatile int8_t x418 = -1;
	volatile int8_t x419 = -4;
	static int32_t t94 = 137863;

	t94 = ((x417/(x418+x419))<=x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x427 = 0U;
	uint8_t x428 = 10U;
	int32_t t95 = 1159676;

	t95 = ((x425/(x426+x427))<=x428);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x429 = 0;
	uint64_t x430 = 2859LLU;
	int16_t x431 = INT16_MAX;
	int64_t x432 = INT64_MIN;
	volatile int32_t t96 = 911254836;

	t96 = ((x429/(x430+x431))<=x432);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = 0;
	uint64_t x434 = 18601717554LLU;
	static int8_t x435 = INT8_MIN;
	static int64_t x436 = INT64_MAX;
	volatile int32_t t97 = -653632805;

	t97 = ((x433/(x434+x435))<=x436);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x437 = 17;
	static uint16_t x438 = 155U;
	static int8_t x439 = INT8_MAX;
	uint32_t x440 = UINT32_MAX;
	volatile int32_t t98 = -1376452;

	t98 = ((x437/(x438+x439))<=x440);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x442 = INT32_MIN;
	uint16_t x443 = 930U;
	int8_t x444 = INT8_MIN;
	volatile int32_t t99 = 22601;

	t99 = ((x441/(x442+x443))<=x444);

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

