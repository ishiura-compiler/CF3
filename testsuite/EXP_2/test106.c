#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 5720314U;
uint64_t x3 = 7LLU;
int32_t x13 = -1;
int8_t x14 = INT8_MIN;
uint64_t x19 = 26348789426511LLU;
uint8_t x29 = 25U;
static int32_t x31 = INT32_MIN;
uint16_t x34 = 31931U;
volatile int64_t x35 = -1LL;
volatile uint32_t t7 = 331571U;
uint64_t x41 = 1004868347128608877LLU;
static uint64_t x45 = 23LLU;
volatile int32_t t9 = 443159;
volatile uint64_t x54 = UINT64_MAX;
uint64_t x56 = 123370167363202707LLU;
int16_t x67 = INT16_MIN;
static uint8_t x72 = 4U;
volatile int32_t t15 = 78;
static int64_t x76 = -6198354234833LL;
int64_t t16 = -22507259LL;
int32_t x83 = INT32_MIN;
uint8_t x85 = 61U;
int16_t x86 = 8143;
static volatile uint64_t t19 = 401001102175902LLU;
static uint32_t x96 = 2040U;
static uint8_t x106 = 76U;
int16_t x107 = -283;
int16_t x112 = INT16_MIN;
int32_t x121 = INT32_MIN;
int16_t x125 = -1;
volatile int16_t x126 = 2;
int8_t x128 = -1;
int16_t x134 = INT16_MAX;
int64_t x140 = -1LL;
volatile uint8_t x141 = 41U;
int16_t x144 = 2;
static int16_t x153 = -1;
static int32_t x154 = 44355689;
uint32_t x159 = 304U;
volatile int32_t t34 = 0;
int8_t x171 = 41;
int16_t x183 = -1;
uint32_t x188 = 14U;
int32_t x189 = -22179603;
int16_t x192 = 2;
volatile int8_t x196 = 1;
uint8_t x205 = 8U;
int16_t x208 = -1;
static int8_t x213 = INT8_MIN;
uint64_t x214 = UINT64_MAX;
int32_t x215 = -1;
static int32_t t41 = 3;
int16_t x218 = -1;
uint64_t x226 = 153527829535087561LLU;
int64_t x239 = INT64_MIN;
int32_t x241 = INT32_MAX;
int8_t x249 = INT8_MIN;
int8_t x251 = 0;
static int8_t x252 = INT8_MAX;
int8_t x255 = 5;
static volatile int32_t t53 = -1445807;
static int16_t x266 = INT16_MAX;
int8_t x272 = 12;
int32_t x273 = INT32_MAX;
static volatile uint64_t t56 = 48859LLU;
static int32_t x283 = INT32_MIN;
int32_t t57 = -49;
int8_t x285 = -1;
uint64_t t58 = 1LLU;
volatile int32_t x291 = -1;
uint8_t x302 = 12U;
int8_t x324 = -1;
static volatile uint64_t x325 = 2507798535LLU;
uint64_t x332 = 238570959292438687LLU;
volatile int64_t x336 = 14162348277102LL;
volatile uint16_t x343 = 66U;
volatile int16_t x378 = INT16_MIN;
int8_t x391 = INT8_MIN;
int8_t x392 = -8;
int32_t t80 = 2691291;
volatile int32_t t81 = -19721;
int32_t t82 = 240968;
uint32_t x401 = UINT32_MAX;
int16_t x402 = -1;
int16_t x410 = INT16_MAX;
uint8_t x413 = 18U;
uint64_t t85 = 157446423LLU;
int8_t x422 = INT8_MIN;
int16_t x425 = -1;
static int16_t x436 = -1;
int16_t x438 = INT16_MIN;
uint8_t x448 = 5U;
volatile int32_t t92 = -422166530;
uint16_t x453 = UINT16_MAX;
int32_t x458 = INT32_MIN;
int16_t x470 = INT16_MIN;
static uint64_t x477 = 8151332LLU;
int16_t x478 = 1388;
int8_t x482 = INT8_MIN;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int32_t x4 = INT32_MAX;
	int32_t t0 = -376214843;

	t0 = ((x1<(x2+x3))-x4);

	if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 4278355007LL;
	uint64_t x10 = UINT64_MAX;
	uint32_t x11 = 13U;
	uint16_t x12 = 0U;
	volatile int32_t t1 = -19863178;

	t1 = ((x9<(x10+x11))-x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x15 = 10;
	int8_t x16 = -48;
	volatile int32_t t2 = -127890;

	t2 = ((x13<(x14+x15))-x16);

	if (t2 != 48) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	uint8_t x18 = 20U;
	int8_t x20 = 5;
	volatile int32_t t3 = 4124012;

	t3 = ((x17<(x18+x19))-x20);

	if (t3 != -5) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x25 = -1000;
	static uint16_t x26 = 920U;
	static int64_t x27 = INT64_MIN;
	volatile uint64_t x28 = 5755LLU;
	volatile uint64_t t4 = 283289LLU;

	t4 = ((x25<(x26+x27))-x28);

	if (t4 != 18446744073709545861LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x30 = 64190593LLU;
	int16_t x32 = 102;
	volatile int32_t t5 = -96826;

	t5 = ((x29<(x30+x31))-x32);

	if (t5 != -101) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x33 = UINT64_MAX;
	volatile int16_t x36 = -41;
	int32_t t6 = 14;

	t6 = ((x33<(x34+x35))-x36);

	if (t6 != 41) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 0U;
	static volatile uint8_t x38 = 2U;
	static uint64_t x39 = UINT64_MAX;
	uint32_t x40 = UINT32_MAX;

	t7 = ((x37<(x38+x39))-x40);

	if (t7 != 2U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x42 = INT32_MAX;
	uint64_t x43 = 241921LLU;
	int32_t x44 = 608;
	int32_t t8 = 0;

	t8 = ((x41<(x42+x43))-x44);

	if (t8 != -608) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MIN;
	volatile int32_t x48 = 620;

	t9 = ((x45<(x46+x47))-x48);

	if (t9 != -619) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x49 = 25133136;
	static int8_t x50 = INT8_MIN;
	int16_t x51 = 1991;
	uint64_t x52 = 3161721783923593875LLU;
	static uint64_t t10 = 1357LLU;

	t10 = ((x49<(x50+x51))-x52);

	if (t10 != 15285022289785957741LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = UINT32_MAX;
	volatile int8_t x55 = INT8_MIN;
	static volatile uint64_t t11 = 86918541116424LLU;

	t11 = ((x53<(x54+x55))-x56);

	if (t11 != 18323373906346348910LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x57 = 3334106U;
	int8_t x58 = 47;
	static int32_t x59 = 462543;
	uint64_t x60 = 6LLU;
	static volatile uint64_t t12 = 180746637106573275LLU;

	t12 = ((x57<(x58+x59))-x60);

	if (t12 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x61 = INT16_MAX;
	uint16_t x62 = UINT16_MAX;
	static int16_t x63 = -1673;
	uint16_t x64 = 3U;
	static volatile int32_t t13 = 13549;

	t13 = ((x61<(x62+x63))-x64);

	if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x65 = INT64_MIN;
	int8_t x66 = INT8_MIN;
	int64_t x68 = 739046668313061742LL;
	static int64_t t14 = 27LL;

	t14 = ((x65<(x66+x67))-x68);

	if (t14 != -739046668313061741LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 228LLU;
	int16_t x70 = INT16_MIN;
	uint8_t x71 = 1U;

	t15 = ((x69<(x70+x71))-x72);

	if (t15 != -3) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 362U;
	uint16_t x74 = UINT16_MAX;
	int16_t x75 = INT16_MIN;

	t16 = ((x73<(x74+x75))-x76);

	if (t16 != 6198354234834LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = INT64_MIN;
	uint8_t x78 = 43U;
	static int32_t x79 = -1;
	int16_t x80 = INT16_MIN;
	volatile int32_t t17 = 1896536;

	t17 = ((x77<(x78+x79))-x80);

	if (t17 != 32769) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 958636538U;
	int64_t x82 = INT64_MAX;
	static uint16_t x84 = 2266U;
	static volatile int32_t t18 = -21325998;

	t18 = ((x81<(x82+x83))-x84);

	if (t18 != -2265) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x87 = INT8_MIN;
	volatile uint64_t x88 = 1790780667117LLU;

	t19 = ((x85<(x86+x87))-x88);

	if (t19 != 18446742282928884500LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x93 = 17U;
	static int32_t x94 = INT32_MAX;
	volatile uint32_t x95 = 14029842U;
	volatile uint32_t t20 = 1U;

	t20 = ((x93<(x94+x95))-x96);

	if (t20 != 4294965257U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -110922;
	static int16_t x98 = -1;
	volatile int16_t x99 = INT16_MIN;
	volatile uint64_t x100 = 22172461239LLU;
	uint64_t t21 = 4229708059213LLU;

	t21 = ((x97<(x98+x99))-x100);

	if (t21 != 18446744051537090378LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MIN;
	int16_t x108 = -1;
	volatile int32_t t22 = 1302099;

	t22 = ((x105<(x106+x107))-x108);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = 17;
	volatile int8_t x110 = INT8_MIN;
	uint32_t x111 = 82871U;
	int32_t t23 = 0;

	t23 = ((x109<(x110+x111))-x112);

	if (t23 != 32769) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = -1LL;
	uint64_t x118 = UINT64_MAX;
	volatile uint32_t x119 = UINT32_MAX;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t24 = -98761889;

	t24 = ((x117<(x118+x119))-x120);

	if (t24 != -255) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x122 = -673;
	volatile int16_t x123 = INT16_MIN;
	uint64_t x124 = UINT64_MAX;
	volatile uint64_t t25 = 481678540557781LLU;

	t25 = ((x121<(x122+x123))-x124);

	if (t25 != 2LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x127 = INT16_MIN;
	volatile int32_t t26 = 778859;

	t26 = ((x125<(x126+x127))-x128);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x129 = INT32_MIN;
	int8_t x130 = INT8_MIN;
	static uint16_t x131 = 0U;
	uint64_t x132 = 11712LLU;
	uint64_t t27 = 6153032521643LLU;

	t27 = ((x129<(x130+x131))-x132);

	if (t27 != 18446744073709539905LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x133 = 185U;
	volatile int64_t x135 = INT64_MIN;
	volatile int32_t x136 = -1;
	volatile int32_t t28 = -1;

	t28 = ((x133<(x134+x135))-x136);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = UINT64_MAX;
	uint32_t x138 = 0U;
	static int32_t x139 = 321;
	volatile int64_t t29 = 2085825762998901LL;

	t29 = ((x137<(x138+x139))-x140);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x142 = INT8_MIN;
	static volatile int8_t x143 = INT8_MAX;
	volatile int32_t t30 = -21038;

	t30 = ((x141<(x142+x143))-x144);

	if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = 9U;
	uint8_t x150 = 98U;
	uint16_t x151 = UINT16_MAX;
	volatile int64_t x152 = -1LL;
	int64_t t31 = -1358688LL;

	t31 = ((x149<(x150+x151))-x152);

	if (t31 != 2LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x155 = UINT16_MAX;
	int64_t x156 = -1LL;
	int64_t t32 = 0LL;

	t32 = ((x153<(x154+x155))-x156);

	if (t32 != 2LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x157 = 31124U;
	int64_t x158 = -30761LL;
	volatile uint8_t x160 = UINT8_MAX;
	int32_t t33 = -11837;

	t33 = ((x157<(x158+x159))-x160);

	if (t33 != -255) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = 62;
	int64_t x162 = INT64_MIN;
	static volatile uint16_t x163 = 1790U;
	volatile int32_t x164 = -996203;

	t34 = ((x161<(x162+x163))-x164);

	if (t34 != 996203) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x169 = -16494;
	static uint64_t x170 = 11237109LLU;
	int16_t x172 = -835;
	volatile int32_t t35 = -12;

	t35 = ((x169<(x170+x171))-x172);

	if (t35 != 835) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x181 = UINT64_MAX;
	int16_t x182 = 558;
	volatile uint16_t x184 = 1786U;
	volatile int32_t t36 = -478042278;

	t36 = ((x181<(x182+x183))-x184);

	if (t36 != -1786) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x185 = 43;
	int64_t x186 = -96324LL;
	static uint32_t x187 = UINT32_MAX;
	uint32_t t37 = 6U;

	t37 = ((x185<(x186+x187))-x188);

	if (t37 != 4294967283U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x190 = 41;
	int16_t x191 = INT16_MIN;
	volatile int32_t t38 = 981299;

	t38 = ((x189<(x190+x191))-x192);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x193 = UINT16_MAX;
	int64_t x194 = INT64_MIN;
	int16_t x195 = INT16_MAX;
	static volatile int32_t t39 = -209;

	t39 = ((x193<(x194+x195))-x196);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x206 = INT16_MIN;
	volatile int8_t x207 = 3;
	static int32_t t40 = 983189492;

	t40 = ((x205<(x206+x207))-x208);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x216 = -1;

	t41 = ((x213<(x214+x215))-x216);

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x217 = INT32_MIN;
	int16_t x219 = INT16_MIN;
	int16_t x220 = -1;
	volatile int32_t t42 = 9;

	t42 = ((x217<(x218+x219))-x220);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MAX;
	int16_t x223 = INT16_MIN;
	int8_t x224 = 0;
	static volatile int32_t t43 = 0;

	t43 = ((x221<(x222+x223))-x224);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x225 = INT32_MAX;
	int8_t x227 = -1;
	int32_t x228 = 0;
	static volatile int32_t t44 = -5261;

	t44 = ((x225<(x226+x227))-x228);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x229 = 29195398161817943LL;
	uint16_t x230 = UINT16_MAX;
	int16_t x231 = 0;
	int32_t x232 = 18381;
	volatile int32_t t45 = 22463590;

	t45 = ((x229<(x230+x231))-x232);

	if (t45 != -18381) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x233 = INT32_MAX;
	int64_t x234 = 4168683LL;
	int64_t x235 = -396123958LL;
	volatile int32_t x236 = -1;
	int32_t t46 = -6762092;

	t46 = ((x233<(x234+x235))-x236);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x237 = 14U;
	static uint64_t x238 = 26428468743LLU;
	volatile uint32_t x240 = 1561010776U;
	uint32_t t47 = 27938716U;

	t47 = ((x237<(x238+x239))-x240);

	if (t47 != 2733956521U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x242 = -1;
	volatile uint64_t x243 = 1237984667LLU;
	uint16_t x244 = 56U;
	volatile int32_t t48 = 11152;

	t48 = ((x241<(x242+x243))-x244);

	if (t48 != -56) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x245 = 272U;
	int16_t x246 = INT16_MIN;
	int16_t x247 = -4445;
	volatile uint64_t x248 = UINT64_MAX;
	volatile uint64_t t49 = 14551852249LLU;

	t49 = ((x245<(x246+x247))-x248);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x250 = INT8_MIN;
	volatile int32_t t50 = 0;

	t50 = ((x249<(x250+x251))-x252);

	if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x253 = 122976702;
	static volatile uint8_t x254 = 0U;
	int32_t x256 = 2021732;
	static volatile int32_t t51 = -1;

	t51 = ((x253<(x254+x255))-x256);

	if (t51 != -2021732) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x257 = 1U;
	int8_t x258 = 2;
	static uint32_t x259 = UINT32_MAX;
	int8_t x260 = INT8_MIN;
	static volatile int32_t t52 = 1;

	t52 = ((x257<(x258+x259))-x260);

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x261 = INT8_MIN;
	volatile uint64_t x262 = UINT64_MAX;
	int8_t x263 = INT8_MAX;
	static int8_t x264 = 3;

	t53 = ((x261<(x262+x263))-x264);

	if (t53 != -3) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x265 = 3405;
	static uint16_t x267 = 277U;
	int32_t x268 = 29413344;
	static int32_t t54 = 1187321;

	t54 = ((x265<(x266+x267))-x268);

	if (t54 != -29413343) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = INT16_MIN;
	static volatile int8_t x271 = -1;
	volatile int32_t t55 = 26295421;

	t55 = ((x269<(x270+x271))-x272);

	if (t55 != -12) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x274 = -1;
	uint16_t x275 = UINT16_MAX;
	uint64_t x276 = 86LLU;

	t56 = ((x273<(x274+x275))-x276);

	if (t56 != 18446744073709551530LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x281 = -11;
	uint32_t x282 = 452U;
	volatile int32_t x284 = 6787;

	t57 = ((x281<(x282+x283))-x284);

	if (t57 != -6787) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x286 = INT16_MAX;
	volatile int32_t x287 = INT32_MIN;
	uint64_t x288 = 2377562610654939907LLU;

	t58 = ((x285<(x286+x287))-x288);

	if (t58 != 16069181463054611709LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x289 = 1LLU;
	volatile int64_t x290 = -6378923361171LL;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t59 = 6LLU;

	t59 = ((x289<(x290+x291))-x292);

	if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x297 = INT8_MIN;
	uint8_t x298 = 1U;
	volatile uint8_t x299 = 1U;
	uint32_t x300 = 3000U;
	uint32_t t60 = 91819416U;

	t60 = ((x297<(x298+x299))-x300);

	if (t60 != 4294964297U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x301 = 1;
	int8_t x303 = INT8_MAX;
	int32_t x304 = -1;
	int32_t t61 = 0;

	t61 = ((x301<(x302+x303))-x304);

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x305 = 18U;
	static int8_t x306 = -1;
	uint64_t x307 = 2098633672068LLU;
	uint64_t x308 = 10053706691667717LLU;
	volatile uint64_t t62 = 26064709822174948LLU;

	t62 = ((x305<(x306+x307))-x308);

	if (t62 != 18436690367017883900LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x309 = 8638LLU;
	uint8_t x310 = 1U;
	int32_t x311 = 25530;
	int32_t x312 = INT32_MAX;
	int32_t t63 = -72093;

	t63 = ((x309<(x310+x311))-x312);

	if (t63 != -2147483646) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x313 = 296U;
	volatile int64_t x314 = INT64_MIN;
	uint16_t x315 = 20424U;
	int64_t x316 = INT64_MAX;
	static volatile int64_t t64 = -44939666450048LL;

	t64 = ((x313<(x314+x315))-x316);

	if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x317 = -1534763LL;
	int8_t x318 = INT8_MAX;
	int8_t x319 = INT8_MAX;
	static volatile uint8_t x320 = 2U;
	int32_t t65 = 25639;

	t65 = ((x317<(x318+x319))-x320);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x321 = 0U;
	int16_t x322 = -1;
	volatile int64_t x323 = -1LL;
	int32_t t66 = -423;

	t66 = ((x321<(x322+x323))-x324);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x326 = INT8_MAX;
	int16_t x327 = -1;
	int32_t x328 = 1;
	volatile int32_t t67 = 16;

	t67 = ((x325<(x326+x327))-x328);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x329 = 101U;
	static int64_t x330 = -1LL;
	uint8_t x331 = 0U;
	volatile uint64_t t68 = 1949243LLU;

	t68 = ((x329<(x330+x331))-x332);

	if (t68 != 18208173114417112929LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = -1;
	int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MIN;
	int64_t t69 = -245LL;

	t69 = ((x333<(x334+x335))-x336);

	if (t69 != -14162348277102LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x337 = INT8_MAX;
	static int8_t x338 = 2;
	static uint64_t x339 = UINT64_MAX;
	volatile uint64_t x340 = UINT64_MAX;
	volatile uint64_t t70 = 766LLU;

	t70 = ((x337<(x338+x339))-x340);

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x341 = INT16_MIN;
	static uint8_t x342 = UINT8_MAX;
	int16_t x344 = 462;
	int32_t t71 = 0;

	t71 = ((x341<(x342+x343))-x344);

	if (t71 != -461) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x345 = INT64_MIN;
	static uint32_t x346 = UINT32_MAX;
	int64_t x347 = -1LL;
	volatile uint64_t x348 = 12982929532LLU;
	volatile uint64_t t72 = 3035LLU;

	t72 = ((x345<(x346+x347))-x348);

	if (t72 != 18446744060726622085LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x349 = 1;
	static int8_t x350 = -1;
	static int16_t x351 = -1;
	uint64_t x352 = 14LLU;
	uint64_t t73 = 1283316146184247286LLU;

	t73 = ((x349<(x350+x351))-x352);

	if (t73 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x361 = INT32_MIN;
	int32_t x362 = INT32_MAX;
	int64_t x363 = -1LL;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t74 = -4110;

	t74 = ((x361<(x362+x363))-x364);

	if (t74 != -254) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x365 = INT32_MIN;
	int64_t x366 = INT64_MIN;
	uint8_t x367 = 5U;
	int32_t x368 = -52;
	int32_t t75 = 5;

	t75 = ((x365<(x366+x367))-x368);

	if (t75 != 52) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x373 = INT8_MAX;
	volatile uint64_t x374 = 311373854852226976LLU;
	int16_t x375 = 5;
	static uint16_t x376 = 124U;
	int32_t t76 = -1;

	t76 = ((x373<(x374+x375))-x376);

	if (t76 != -123) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x377 = 19U;
	static volatile int8_t x379 = INT8_MIN;
	static volatile int32_t x380 = -315854;
	volatile int32_t t77 = 59740466;

	t77 = ((x377<(x378+x379))-x380);

	if (t77 != 315854) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x381 = UINT32_MAX;
	int8_t x382 = -1;
	int8_t x383 = INT8_MIN;
	uint8_t x384 = UINT8_MAX;
	static int32_t t78 = -132;

	t78 = ((x381<(x382+x383))-x384);

	if (t78 != -255) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = -1;
	uint8_t x387 = 23U;
	static int8_t x388 = INT8_MIN;
	static int32_t t79 = 68342931;

	t79 = ((x385<(x386+x387))-x388);

	if (t79 != 129) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x389 = -1;
	int32_t x390 = -115;

	t80 = ((x389<(x390+x391))-x392);

	if (t80 != 8) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x393 = 30187U;
	static int32_t x394 = 12209740;
	volatile uint32_t x395 = 1U;
	int16_t x396 = -3061;

	t81 = ((x393<(x394+x395))-x396);

	if (t81 != 3062) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x397 = 15736456091LLU;
	uint64_t x398 = 156271047202526LLU;
	uint8_t x399 = 116U;
	int8_t x400 = INT8_MIN;

	t82 = ((x397<(x398+x399))-x400);

	if (t82 != 129) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x403 = -3294819;
	volatile int64_t x404 = INT64_MAX;
	volatile int64_t t83 = -2229383886257107338LL;

	t83 = ((x401<(x402+x403))-x404);

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x409 = 49;
	int8_t x411 = 3;
	uint16_t x412 = UINT16_MAX;
	int32_t t84 = -445;

	t84 = ((x409<(x410+x411))-x412);

	if (t84 != -65534) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x414 = UINT32_MAX;
	static int32_t x415 = INT32_MIN;
	uint64_t x416 = UINT64_MAX;

	t85 = ((x413<(x414+x415))-x416);

	if (t85 != 2LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x417 = INT64_MAX;
	int32_t x418 = INT32_MAX;
	volatile int32_t x419 = -1;
	static volatile uint64_t x420 = UINT64_MAX;
	static uint64_t t86 = 265498416803908LLU;

	t86 = ((x417<(x418+x419))-x420);

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x421 = INT8_MAX;
	static uint16_t x423 = 48U;
	volatile int16_t x424 = INT16_MIN;
	static int32_t t87 = -4;

	t87 = ((x421<(x422+x423))-x424);

	if (t87 != 32768) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x426 = INT64_MIN;
	static volatile uint32_t x427 = UINT32_MAX;
	static uint8_t x428 = 2U;
	volatile int32_t t88 = -57955096;

	t88 = ((x425<(x426+x427))-x428);

	if (t88 != -2) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x433 = -1;
	int64_t x434 = INT64_MAX;
	volatile int8_t x435 = INT8_MIN;
	static volatile int32_t t89 = 8;

	t89 = ((x433<(x434+x435))-x436);

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x437 = -59;
	int8_t x439 = 10;
	int8_t x440 = 0;
	int32_t t90 = -94;

	t90 = ((x437<(x438+x439))-x440);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x441 = -1;
	int16_t x442 = 6939;
	int64_t x443 = INT64_MIN;
	volatile uint16_t x444 = UINT16_MAX;
	int32_t t91 = -98758;

	t91 = ((x441<(x442+x443))-x444);

	if (t91 != -65535) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x445 = 10641504LLU;
	uint16_t x446 = 1057U;
	static int16_t x447 = 3;

	t92 = ((x445<(x446+x447))-x448);

	if (t92 != -5) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x449 = 51013045571526LLU;
	int32_t x450 = -4585;
	volatile uint32_t x451 = UINT32_MAX;
	static uint32_t x452 = UINT32_MAX;
	volatile uint32_t t93 = 553821U;

	t93 = ((x449<(x450+x451))-x452);

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x454 = 4194970755779LLU;
	volatile uint8_t x455 = 54U;
	static uint64_t x456 = 2LLU;
	uint64_t t94 = UINT64_MAX;

	t94 = ((x453<(x454+x455))-x456);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x457 = INT64_MAX;
	volatile int16_t x459 = 2812;
	int8_t x460 = 3;
	static volatile int32_t t95 = 3769322;

	t95 = ((x457<(x458+x459))-x460);

	if (t95 != -3) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x469 = 1392U;
	static int16_t x471 = INT16_MIN;
	static int64_t x472 = -1LL;
	static int64_t t96 = 56368158685724068LL;

	t96 = ((x469<(x470+x471))-x472);

	if (t96 != 2LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x473 = 5U;
	volatile uint16_t x474 = UINT16_MAX;
	static int16_t x475 = 18;
	uint16_t x476 = UINT16_MAX;
	int32_t t97 = -5551;

	t97 = ((x473<(x474+x475))-x476);

	if (t97 != -65534) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x479 = 0U;
	int32_t x480 = INT32_MAX;
	int32_t t98 = 1;

	t98 = ((x477<(x478+x479))-x480);

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x481 = -1LL;
	static volatile int64_t x483 = INT64_MAX;
	uint8_t x484 = 12U;
	int32_t t99 = 556396;

	t99 = ((x481<(x482+x483))-x484);

	if (t99 != -11) { NG(); } else { ; }
	
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

