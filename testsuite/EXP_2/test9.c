#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x16 = UINT16_MAX;
int16_t x19 = -11;
uint32_t x21 = UINT32_MAX;
uint16_t x24 = 12U;
int8_t x27 = -5;
int16_t x28 = INT16_MIN;
int32_t x41 = INT32_MIN;
int64_t x43 = 6620771433449402LL;
volatile int32_t t7 = -142441183;
int8_t x54 = -2;
static uint32_t x63 = UINT32_MAX;
int32_t x66 = 15186406;
int16_t x73 = INT16_MIN;
static uint16_t x79 = 3U;
int32_t x86 = 28806;
int32_t t18 = 3;
volatile int8_t x129 = INT8_MAX;
int32_t t26 = -13;
uint16_t x155 = UINT16_MAX;
static volatile int32_t t30 = 84881361;
int16_t x172 = -1;
int32_t t34 = -304516168;
static uint32_t x174 = UINT32_MAX;
int16_t x175 = 2665;
int8_t x176 = -12;
static uint16_t x178 = 1U;
uint64_t x181 = 60790793LLU;
static volatile uint8_t x194 = UINT8_MAX;
int8_t x200 = 3;
int8_t x207 = 4;
volatile int32_t t43 = 15;
int8_t x212 = INT8_MIN;
int32_t t44 = -1;
uint16_t x221 = 1U;
static volatile int32_t t47 = 21;
int16_t x226 = INT16_MAX;
uint8_t x237 = UINT8_MAX;
volatile int32_t x241 = INT32_MAX;
int32_t t50 = 27727723;
volatile uint32_t x256 = 1010U;
uint64_t x257 = 218130112196481LLU;
int16_t x270 = INT16_MIN;
volatile int32_t t58 = 207;
uint32_t x281 = UINT32_MAX;
volatile int32_t x285 = 984314395;
volatile int8_t x293 = INT8_MAX;
int8_t x299 = INT8_MAX;
int8_t x306 = INT8_MIN;
int8_t x307 = -1;
int64_t x309 = 119LL;
int8_t x320 = INT8_MIN;
volatile int32_t x322 = INT32_MAX;
volatile int32_t t68 = -1970;
static volatile uint64_t x334 = 381868563521510LLU;
int32_t x335 = INT32_MAX;
uint64_t x336 = 4140819LLU;
int8_t x337 = -14;
int8_t x338 = 3;
static int32_t t73 = -2625338;
volatile uint64_t x353 = UINT64_MAX;
uint64_t x356 = 3008594765041512LLU;
int32_t t74 = 7966;
int64_t x362 = 6LL;
volatile uint8_t x363 = 8U;
int32_t t76 = -2;
volatile int32_t t77 = 4;
uint16_t x371 = 3U;
int64_t x373 = INT64_MAX;
int16_t x376 = -1;
volatile uint8_t x379 = 2U;
int32_t x380 = -191647;
volatile int32_t t80 = 16;
int64_t x383 = 3058938LL;
int8_t x402 = INT8_MIN;
int8_t x404 = INT8_MIN;
uint8_t x407 = UINT8_MAX;
static volatile int32_t x409 = -1;
volatile int32_t t87 = -8274200;
int32_t x418 = INT32_MAX;
volatile uint64_t x427 = UINT64_MAX;
int16_t x432 = INT16_MAX;
uint8_t x436 = 8U;
volatile int32_t t92 = -2174;
int8_t x446 = INT8_MIN;
uint8_t x450 = 28U;
uint16_t x458 = 918U;
int64_t x471 = -69752LL;
volatile int16_t x472 = -1;


void f0(void) {
	uint64_t x9 = 20LLU;
	int64_t x10 = -22340LL;
	volatile int16_t x11 = INT16_MIN;
	uint32_t x12 = 3365U;
	static volatile int32_t t0 = 401503254;

	t0 = ((x9+(x10+x11))<x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x13 = 21626158LLU;
	int32_t x14 = INT32_MIN;
	uint32_t x15 = 116139839U;
	int32_t t1 = 5;

	t1 = ((x13+(x14+x15))<x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x17 = INT64_MAX;
	int32_t x18 = -1;
	int32_t x20 = -1;
	volatile int32_t t2 = 2;

	t2 = ((x17+(x18+x19))<x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x22 = -1LL;
	int32_t x23 = -27647611;
	int32_t t3 = -154490;

	t3 = ((x21+(x22+x23))<x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x25 = INT8_MAX;
	static int8_t x26 = -3;
	volatile int32_t t4 = 67245;

	t4 = ((x25+(x26+x27))<x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = INT32_MAX;
	volatile int16_t x34 = INT16_MAX;
	int64_t x35 = INT64_MIN;
	int16_t x36 = -1;
	volatile int32_t t5 = -26;

	t5 = ((x33+(x34+x35))<x36);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = INT8_MIN;
	int16_t x38 = -340;
	static int16_t x39 = INT16_MIN;
	int32_t x40 = -1;
	volatile int32_t t6 = 376287;

	t6 = ((x37+(x38+x39))<x40);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x42 = -15;
	uint16_t x44 = 10U;

	t7 = ((x41+(x42+x43))<x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x45 = -3;
	int16_t x46 = -1;
	int16_t x47 = INT16_MAX;
	uint32_t x48 = 226425U;
	int32_t t8 = 224;

	t8 = ((x45+(x46+x47))<x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 111728083227566LLU;
	int32_t x50 = -1;
	static volatile int8_t x51 = INT8_MIN;
	volatile uint64_t x52 = 4893125980991LLU;
	volatile int32_t t9 = -18137378;

	t9 = ((x49+(x50+x51))<x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = 4037010924076LLU;
	static int64_t x55 = -1LL;
	uint16_t x56 = 16U;
	static volatile int32_t t10 = -1038763795;

	t10 = ((x53+(x54+x55))<x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = 1U;
	int32_t x62 = -1;
	static uint64_t x64 = UINT64_MAX;
	volatile int32_t t11 = 1;

	t11 = ((x61+(x62+x63))<x64);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = INT64_MIN;
	int16_t x67 = -1;
	uint32_t x68 = 1667353U;
	int32_t t12 = -614537656;

	t12 = ((x65+(x66+x67))<x68);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = 80700393002960709LL;
	int8_t x70 = INT8_MIN;
	static int8_t x71 = 11;
	int16_t x72 = INT16_MIN;
	int32_t t13 = 234627355;

	t13 = ((x69+(x70+x71))<x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x74 = 0LL;
	uint32_t x75 = UINT32_MAX;
	volatile uint8_t x76 = 0U;
	int32_t t14 = 6;

	t14 = ((x73+(x74+x75))<x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = 89211U;
	volatile uint32_t x78 = UINT32_MAX;
	uint16_t x80 = 2U;
	volatile int32_t t15 = -7393;

	t15 = ((x77+(x78+x79))<x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = INT8_MIN;
	uint32_t x87 = 23U;
	volatile uint16_t x88 = UINT16_MAX;
	volatile int32_t t16 = -433542716;

	t16 = ((x85+(x86+x87))<x88);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = -1;
	uint64_t x94 = 8140542370410LLU;
	volatile int8_t x95 = INT8_MIN;
	int64_t x96 = INT64_MIN;
	volatile int32_t t17 = 1;

	t17 = ((x93+(x94+x95))<x96);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x97 = 0U;
	int32_t x98 = INT32_MIN;
	volatile uint64_t x99 = 280LLU;
	uint16_t x100 = 201U;

	t18 = ((x97+(x98+x99))<x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x105 = INT32_MIN;
	volatile uint32_t x106 = 263440611U;
	volatile int16_t x107 = INT16_MIN;
	uint8_t x108 = 7U;
	int32_t t19 = -139833887;

	t19 = ((x105+(x106+x107))<x108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = 40;
	static volatile uint16_t x110 = 1006U;
	uint8_t x111 = UINT8_MAX;
	int8_t x112 = INT8_MIN;
	volatile int32_t t20 = 89744308;

	t20 = ((x109+(x110+x111))<x112);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x113 = INT32_MAX;
	int16_t x114 = INT16_MIN;
	uint64_t x115 = 8356LLU;
	static volatile int8_t x116 = INT8_MIN;
	int32_t t21 = -6539;

	t21 = ((x113+(x114+x115))<x116);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = -1;
	int64_t x118 = INT64_MIN;
	static int64_t x119 = INT64_MAX;
	volatile uint64_t x120 = 2983291778948LLU;
	volatile int32_t t22 = 471;

	t22 = ((x117+(x118+x119))<x120);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = UINT64_MAX;
	uint32_t x122 = UINT32_MAX;
	int8_t x123 = -21;
	static uint8_t x124 = 8U;
	int32_t t23 = -29512;

	t23 = ((x121+(x122+x123))<x124);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = INT8_MIN;
	uint32_t x126 = UINT32_MAX;
	int32_t x127 = INT32_MAX;
	volatile int32_t x128 = -1;
	int32_t t24 = -678620885;

	t24 = ((x125+(x126+x127))<x128);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x130 = INT8_MIN;
	volatile int64_t x131 = INT64_MAX;
	static int64_t x132 = -1LL;
	volatile int32_t t25 = -1;

	t25 = ((x129+(x130+x131))<x132);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x133 = 40622277196587LL;
	int8_t x134 = INT8_MIN;
	volatile int64_t x135 = 1307LL;
	int16_t x136 = 1;

	t26 = ((x133+(x134+x135))<x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x141 = 243U;
	int64_t x142 = INT64_MIN;
	static uint16_t x143 = 6U;
	int8_t x144 = INT8_MIN;
	volatile int32_t t27 = -111;

	t27 = ((x141+(x142+x143))<x144);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x145 = 107U;
	int8_t x146 = 3;
	int32_t x147 = INT32_MIN;
	volatile int32_t x148 = -978518235;
	static volatile int32_t t28 = -1;

	t28 = ((x145+(x146+x147))<x148);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x149 = INT16_MIN;
	int64_t x150 = 19047823995LL;
	uint32_t x151 = 10913U;
	int8_t x152 = INT8_MIN;
	volatile int32_t t29 = 276491;

	t29 = ((x149+(x150+x151))<x152);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = 0;
	int32_t x154 = -1;
	int64_t x156 = 1548735LL;

	t30 = ((x153+(x154+x155))<x156);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x157 = INT8_MIN;
	uint64_t x158 = 205209570342166LLU;
	static volatile uint32_t x159 = UINT32_MAX;
	static int64_t x160 = 261134196687816460LL;
	volatile int32_t t31 = 2899183;

	t31 = ((x157+(x158+x159))<x160);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x161 = 1;
	uint8_t x162 = 3U;
	int64_t x163 = -987080LL;
	uint64_t x164 = UINT64_MAX;
	int32_t t32 = 32490;

	t32 = ((x161+(x162+x163))<x164);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x165 = INT64_MIN;
	uint8_t x166 = 0U;
	uint8_t x167 = 41U;
	int16_t x168 = -123;
	int32_t t33 = 0;

	t33 = ((x165+(x166+x167))<x168);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x169 = UINT8_MAX;
	static uint8_t x170 = 2U;
	int32_t x171 = 514622;

	t34 = ((x169+(x170+x171))<x172);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x173 = INT8_MIN;
	static volatile int32_t t35 = 121639;

	t35 = ((x173+(x174+x175))<x176);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x177 = UINT8_MAX;
	static int32_t x179 = -209103;
	int32_t x180 = INT32_MIN;
	volatile int32_t t36 = -40085;

	t36 = ((x177+(x178+x179))<x180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x182 = INT64_MIN;
	int8_t x183 = 1;
	int8_t x184 = INT8_MAX;
	int32_t t37 = -697;

	t37 = ((x181+(x182+x183))<x184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = INT8_MAX;
	int16_t x186 = 4107;
	static int64_t x187 = -1LL;
	int64_t x188 = 433020958250241LL;
	static int32_t t38 = 1;

	t38 = ((x185+(x186+x187))<x188);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x189 = INT8_MIN;
	uint8_t x190 = 3U;
	uint32_t x191 = UINT32_MAX;
	uint16_t x192 = UINT16_MAX;
	int32_t t39 = 607763216;

	t39 = ((x189+(x190+x191))<x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x193 = -1;
	uint32_t x195 = 99U;
	uint32_t x196 = 6803542U;
	static int32_t t40 = -9833246;

	t40 = ((x193+(x194+x195))<x196);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x197 = 234U;
	int32_t x198 = -1;
	volatile int16_t x199 = -1;
	volatile int32_t t41 = 96;

	t41 = ((x197+(x198+x199))<x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x201 = -1;
	int64_t x202 = -267954708206013629LL;
	uint8_t x203 = UINT8_MAX;
	volatile uint64_t x204 = 1LLU;
	static int32_t t42 = 2308;

	t42 = ((x201+(x202+x203))<x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x205 = 12LL;
	int8_t x206 = -12;
	uint8_t x208 = UINT8_MAX;

	t43 = ((x205+(x206+x207))<x208);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = -1;
	uint8_t x210 = UINT8_MAX;
	int16_t x211 = INT16_MIN;

	t44 = ((x209+(x210+x211))<x212);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x213 = 30U;
	uint64_t x214 = 2487109293842931696LLU;
	volatile int64_t x215 = INT64_MIN;
	static volatile int8_t x216 = INT8_MIN;
	int32_t t45 = 944904;

	t45 = ((x213+(x214+x215))<x216);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x217 = 7341573118719021222LLU;
	int64_t x218 = INT64_MIN;
	uint64_t x219 = UINT64_MAX;
	volatile int64_t x220 = -1LL;
	int32_t t46 = 212;

	t46 = ((x217+(x218+x219))<x220);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x222 = INT8_MIN;
	static uint32_t x223 = UINT32_MAX;
	int32_t x224 = INT32_MAX;

	t47 = ((x221+(x222+x223))<x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x225 = 12U;
	static int64_t x227 = 6340241441634813LL;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t48 = -4404281;

	t48 = ((x225+(x226+x227))<x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x238 = -1;
	int8_t x239 = 4;
	static volatile int64_t x240 = INT64_MIN;
	int32_t t49 = 278072761;

	t49 = ((x237+(x238+x239))<x240);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x242 = -1;
	static uint64_t x243 = 4754059709665LLU;
	volatile int32_t x244 = -14208;

	t50 = ((x241+(x242+x243))<x244);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x245 = -4030LL;
	int32_t x246 = 67958289;
	int8_t x247 = 0;
	static uint64_t x248 = 97722288266111LLU;
	int32_t t51 = 112169801;

	t51 = ((x245+(x246+x247))<x248);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x253 = 132420963LLU;
	int8_t x254 = INT8_MIN;
	volatile int8_t x255 = -1;
	volatile int32_t t52 = 277;

	t52 = ((x253+(x254+x255))<x256);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x258 = INT8_MIN;
	static uint8_t x259 = UINT8_MAX;
	int64_t x260 = -1LL;
	int32_t t53 = -592662113;

	t53 = ((x257+(x258+x259))<x260);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x261 = INT8_MIN;
	int32_t x262 = -1;
	static int32_t x263 = -1;
	int16_t x264 = INT16_MIN;
	int32_t t54 = 188701;

	t54 = ((x261+(x262+x263))<x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x265 = 5840318923LLU;
	int32_t x266 = 112;
	int64_t x267 = -1LL;
	uint32_t x268 = 11286576U;
	volatile int32_t t55 = -1569275;

	t55 = ((x265+(x266+x267))<x268);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x269 = -1;
	int16_t x271 = 8915;
	int32_t x272 = INT32_MAX;
	int32_t t56 = 1;

	t56 = ((x269+(x270+x271))<x272);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x273 = -160;
	int32_t x274 = INT32_MAX;
	volatile int8_t x275 = -1;
	volatile int16_t x276 = 5253;
	volatile int32_t t57 = 14154;

	t57 = ((x273+(x274+x275))<x276);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x277 = 31U;
	uint32_t x278 = UINT32_MAX;
	uint8_t x279 = 107U;
	int32_t x280 = INT32_MIN;

	t58 = ((x277+(x278+x279))<x280);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x282 = INT16_MIN;
	volatile int16_t x283 = INT16_MIN;
	int16_t x284 = -277;
	int32_t t59 = -248191002;

	t59 = ((x281+(x282+x283))<x284);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x286 = 473873U;
	static uint16_t x287 = 5U;
	int64_t x288 = INT64_MIN;
	volatile int32_t t60 = 234;

	t60 = ((x285+(x286+x287))<x288);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x289 = 71;
	int32_t x290 = -217;
	int8_t x291 = INT8_MIN;
	int32_t x292 = INT32_MIN;
	int32_t t61 = 132723896;

	t61 = ((x289+(x290+x291))<x292);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x294 = UINT64_MAX;
	int64_t x295 = -1LL;
	int64_t x296 = INT64_MIN;
	static int32_t t62 = 35;

	t62 = ((x293+(x294+x295))<x296);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x297 = -7681;
	int8_t x298 = INT8_MIN;
	uint32_t x300 = 200U;
	int32_t t63 = -112;

	t63 = ((x297+(x298+x299))<x300);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x305 = INT8_MIN;
	volatile int64_t x308 = INT64_MIN;
	volatile int32_t t64 = -3323317;

	t64 = ((x305+(x306+x307))<x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x310 = INT8_MIN;
	static volatile uint64_t x311 = 173940938604286593LLU;
	static volatile int64_t x312 = 530LL;
	volatile int32_t t65 = 639;

	t65 = ((x309+(x310+x311))<x312);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x317 = -3;
	uint8_t x318 = 3U;
	uint16_t x319 = 5U;
	int32_t t66 = 2240;

	t66 = ((x317+(x318+x319))<x320);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x321 = 9U;
	static uint32_t x323 = UINT32_MAX;
	volatile int8_t x324 = -1;
	int32_t t67 = -1471;

	t67 = ((x321+(x322+x323))<x324);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = -1;
	volatile uint32_t x326 = 23026U;
	uint8_t x327 = 51U;
	static int64_t x328 = INT64_MIN;

	t68 = ((x325+(x326+x327))<x328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x329 = -1;
	static int16_t x330 = INT16_MAX;
	static volatile uint8_t x331 = 0U;
	volatile int8_t x332 = INT8_MIN;
	volatile int32_t t69 = 857000126;

	t69 = ((x329+(x330+x331))<x332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x333 = 3023;
	volatile int32_t t70 = 45;

	t70 = ((x333+(x334+x335))<x336);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x339 = -4;
	volatile int16_t x340 = -1;
	int32_t t71 = -6962;

	t71 = ((x337+(x338+x339))<x340);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x341 = -1LL;
	int8_t x342 = INT8_MAX;
	uint32_t x343 = 77272409U;
	int16_t x344 = -1;
	int32_t t72 = -4234;

	t72 = ((x341+(x342+x343))<x344);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = INT16_MIN;
	int8_t x346 = INT8_MAX;
	uint8_t x347 = 5U;
	uint64_t x348 = UINT64_MAX;

	t73 = ((x345+(x346+x347))<x348);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x354 = INT32_MIN;
	volatile uint16_t x355 = UINT16_MAX;

	t74 = ((x353+(x354+x355))<x356);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x357 = INT8_MIN;
	int64_t x358 = -1LL;
	int32_t x359 = -1;
	volatile int64_t x360 = -34431LL;
	volatile int32_t t75 = -43;

	t75 = ((x357+(x358+x359))<x360);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x361 = -1;
	int32_t x364 = -1070510704;

	t76 = ((x361+(x362+x363))<x364);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x365 = 679271;
	int32_t x366 = 148;
	uint16_t x367 = 14470U;
	static int32_t x368 = -947;

	t77 = ((x365+(x366+x367))<x368);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x369 = INT16_MIN;
	int8_t x370 = 1;
	uint16_t x372 = UINT16_MAX;
	int32_t t78 = -10;

	t78 = ((x369+(x370+x371))<x372);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x374 = -1LL;
	uint64_t x375 = UINT64_MAX;
	volatile int32_t t79 = -299;

	t79 = ((x373+(x374+x375))<x376);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x377 = 172U;
	volatile int16_t x378 = 1747;

	t80 = ((x377+(x378+x379))<x380);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x381 = 11U;
	static int64_t x382 = -1LL;
	static int16_t x384 = INT16_MIN;
	static int32_t t81 = -113512050;

	t81 = ((x381+(x382+x383))<x384);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x393 = UINT32_MAX;
	static int8_t x394 = -14;
	int32_t x395 = 8;
	int16_t x396 = INT16_MAX;
	static int32_t t82 = 1;

	t82 = ((x393+(x394+x395))<x396);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x397 = 779190598U;
	int64_t x398 = -1LL;
	static uint32_t x399 = UINT32_MAX;
	int16_t x400 = INT16_MIN;
	volatile int32_t t83 = 72;

	t83 = ((x397+(x398+x399))<x400);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x401 = INT16_MAX;
	int64_t x403 = -1LL;
	static volatile int32_t t84 = -480;

	t84 = ((x401+(x402+x403))<x404);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x405 = 3;
	int16_t x406 = INT16_MAX;
	int32_t x408 = -1;
	volatile int32_t t85 = 16575906;

	t85 = ((x405+(x406+x407))<x408);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x410 = INT32_MAX;
	int16_t x411 = -1;
	int64_t x412 = -4771485LL;
	volatile int32_t t86 = -21176;

	t86 = ((x409+(x410+x411))<x412);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x413 = 27U;
	static int64_t x414 = -1LL;
	static int64_t x415 = -1LL;
	static uint32_t x416 = 1599268U;

	t87 = ((x413+(x414+x415))<x416);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x417 = UINT32_MAX;
	uint64_t x419 = 540358311116475LLU;
	static int32_t x420 = -1;
	volatile int32_t t88 = 1190008;

	t88 = ((x417+(x418+x419))<x420);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x421 = 48;
	int16_t x422 = 11263;
	int32_t x423 = INT32_MIN;
	int32_t x424 = 438;
	static volatile int32_t t89 = 566086;

	t89 = ((x421+(x422+x423))<x424);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x425 = 995U;
	volatile int32_t x426 = INT32_MIN;
	int32_t x428 = INT32_MIN;
	static int32_t t90 = -90669;

	t90 = ((x425+(x426+x427))<x428);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x429 = 105U;
	int16_t x430 = INT16_MIN;
	uint16_t x431 = 3766U;
	volatile int32_t t91 = -3735165;

	t91 = ((x429+(x430+x431))<x432);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x433 = UINT32_MAX;
	static int32_t x434 = -52241;
	volatile int16_t x435 = -15;

	t92 = ((x433+(x434+x435))<x436);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x437 = UINT64_MAX;
	int8_t x438 = INT8_MAX;
	int32_t x439 = INT32_MIN;
	uint16_t x440 = 0U;
	volatile int32_t t93 = -866488;

	t93 = ((x437+(x438+x439))<x440);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x445 = UINT16_MAX;
	volatile int32_t x447 = 36958;
	int64_t x448 = INT64_MIN;
	static int32_t t94 = 499;

	t94 = ((x445+(x446+x447))<x448);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x449 = 478119716LLU;
	uint32_t x451 = 75732272U;
	int8_t x452 = INT8_MIN;
	volatile int32_t t95 = -257989;

	t95 = ((x449+(x450+x451))<x452);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x457 = 2185447696564763012LLU;
	uint8_t x459 = UINT8_MAX;
	int8_t x460 = 10;
	volatile int32_t t96 = 711;

	t96 = ((x457+(x458+x459))<x460);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x461 = INT16_MAX;
	static volatile uint64_t x462 = 43256283074LLU;
	int32_t x463 = -1;
	static volatile int64_t x464 = INT64_MIN;
	volatile int32_t t97 = 2451310;

	t97 = ((x461+(x462+x463))<x464);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x465 = 752388337106704LLU;
	uint64_t x466 = UINT64_MAX;
	int8_t x467 = -11;
	int64_t x468 = INT64_MAX;
	int32_t t98 = 3;

	t98 = ((x465+(x466+x467))<x468);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x469 = UINT64_MAX;
	volatile int8_t x470 = -58;
	volatile int32_t t99 = 7015012;

	t99 = ((x469+(x470+x471))<x472);

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

