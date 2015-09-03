#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x1 = 7181822U;
volatile int64_t t0 = 39LL;
int32_t x5 = 3223176;
int8_t x7 = -30;
volatile uint32_t x17 = 1U;
volatile int16_t x21 = -1;
int64_t x39 = -71371025099058701LL;
uint32_t x41 = UINT32_MAX;
volatile int8_t x47 = INT8_MIN;
static volatile int32_t t9 = 38;
int64_t x62 = INT64_MAX;
int8_t x63 = INT8_MIN;
static uint64_t t11 = 33LLU;
uint16_t x71 = 1U;
int8_t x72 = INT8_MIN;
int16_t x74 = INT16_MIN;
volatile int64_t t13 = -4529721554967871LL;
volatile uint32_t t19 = 11358987U;
uint32_t x121 = UINT32_MAX;
volatile int32_t t21 = 0;
volatile int64_t x135 = INT64_MIN;
int32_t x138 = INT32_MAX;
volatile int64_t t24 = 5202458951655LL;
int16_t x146 = 5507;
int32_t x150 = INT32_MAX;
uint64_t x156 = 529945967912634LLU;
volatile int32_t x157 = INT32_MIN;
volatile int32_t t29 = 8894;
int8_t x161 = -63;
int64_t x167 = INT64_MAX;
volatile uint64_t t31 = 12728064544175LLU;
int8_t x171 = -1;
volatile int64_t x172 = -1LL;
uint16_t x179 = 18U;
static int16_t x180 = -1;
volatile int32_t t34 = 1;
int32_t x186 = INT32_MIN;
uint64_t x206 = 25LLU;
int16_t x207 = INT16_MIN;
uint8_t x210 = 12U;
volatile int32_t t40 = -63122;
static int8_t x214 = INT8_MIN;
volatile int32_t t43 = 15;
int16_t x238 = -1;
volatile int64_t x242 = INT64_MAX;
static uint32_t t47 = 5U;
int64_t x253 = INT64_MIN;
uint64_t x255 = 35944LLU;
uint8_t x256 = 32U;
int64_t x260 = INT64_MAX;
static volatile int32_t t52 = 1;
static uint64_t x268 = 163756LLU;
uint8_t x272 = UINT8_MAX;
static uint8_t x273 = 4U;
int32_t x274 = 506;
static volatile int32_t t56 = -14828193;
volatile uint16_t x281 = 4591U;
uint8_t x284 = 2U;
int16_t x286 = -1;
int32_t x310 = 841487620;
uint16_t x311 = 17U;
uint64_t t63 = 1253798660795907484LLU;
volatile int32_t x319 = -124999;
uint16_t x321 = UINT16_MAX;
int32_t x330 = 0;
int16_t x339 = INT16_MIN;
volatile int8_t x350 = INT8_MIN;
int64_t x351 = 2LL;
int32_t t71 = -33;
uint16_t x359 = 3U;
int32_t x361 = INT32_MIN;
uint32_t x372 = UINT32_MAX;
uint16_t x380 = UINT16_MAX;
uint64_t x390 = 2498LLU;
static int16_t x392 = -1;
int64_t x394 = -1LL;
int32_t x397 = INT32_MAX;
volatile uint64_t x408 = UINT64_MAX;
uint16_t x414 = 0U;
int8_t x415 = -1;
int8_t x416 = -1;
static volatile int32_t t84 = -1;
uint64_t x426 = 2376822502444837053LLU;
volatile uint32_t x428 = 20562U;
volatile uint32_t t85 = 314U;
int32_t x435 = INT32_MAX;
uint64_t x438 = 9018780717317525641LLU;
int64_t t87 = 117170LL;
volatile int64_t x452 = -507568832721LL;
volatile int32_t t91 = 432428409;
int64_t x469 = -1LL;
int32_t x471 = -99;
int32_t x473 = 151144;
int64_t x474 = -1LL;
volatile int64_t x480 = -1LL;
uint64_t x481 = 48555LLU;
int8_t x484 = INT8_MIN;
static int8_t x485 = INT8_MIN;
uint32_t x489 = 403047U;
uint16_t x491 = UINT16_MAX;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	volatile int8_t x3 = -7;
	static int64_t x4 = INT64_MIN;

	t0 = ((x1<(x2+x3))%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x6 = -1;
	volatile int32_t x8 = 94331985;
	int32_t t1 = -3798;

	t1 = ((x5<(x6+x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = 4399008515240022261LL;
	int8_t x14 = -3;
	int16_t x15 = -2805;
	uint64_t x16 = 1625862540LLU;
	uint64_t t2 = 61840940LLU;

	t2 = ((x13<(x14+x15))%x16);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MAX;
	volatile int64_t x19 = INT64_MIN;
	volatile int64_t x20 = -1LL;
	volatile int64_t t3 = 48580170302490LL;

	t3 = ((x17<(x18+x19))%x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x22 = -1;
	uint8_t x23 = 2U;
	int8_t x24 = -1;
	volatile int32_t t4 = 1774;

	t4 = ((x21<(x22+x23))%x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = 51U;
	int8_t x26 = -1;
	static int16_t x27 = INT16_MIN;
	volatile int8_t x28 = -1;
	volatile int32_t t5 = 1038061476;

	t5 = ((x25<(x26+x27))%x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x37 = 622U;
	uint16_t x38 = 538U;
	int8_t x40 = 7;
	volatile int32_t t6 = 4041;

	t6 = ((x37<(x38+x39))%x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x42 = -2;
	static volatile uint16_t x43 = UINT16_MAX;
	static volatile uint8_t x44 = UINT8_MAX;
	volatile int32_t t7 = 475541;

	t7 = ((x41<(x42+x43))%x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = INT64_MIN;
	uint8_t x46 = 41U;
	volatile int8_t x48 = INT8_MIN;
	volatile int32_t t8 = 312148581;

	t8 = ((x45<(x46+x47))%x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = INT32_MIN;
	int32_t x50 = INT32_MIN;
	uint16_t x51 = UINT16_MAX;
	int8_t x52 = INT8_MIN;

	t9 = ((x49<(x50+x51))%x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x61 = -1;
	volatile int16_t x64 = 627;
	int32_t t10 = -66653937;

	t10 = ((x61<(x62+x63))%x64);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = INT64_MIN;
	static int8_t x66 = INT8_MIN;
	int8_t x67 = -1;
	uint64_t x68 = 2707816337550469555LLU;

	t11 = ((x65<(x66+x67))%x68);

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x69 = INT8_MIN;
	uint64_t x70 = UINT64_MAX;
	int32_t t12 = 72331;

	t12 = ((x69<(x70+x71))%x72);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = INT64_MAX;
	volatile uint32_t x75 = 1851106808U;
	int64_t x76 = INT64_MAX;

	t13 = ((x73<(x74+x75))%x76);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = 152U;
	uint32_t x78 = 45094U;
	static int16_t x79 = INT16_MIN;
	uint64_t x80 = UINT64_MAX;
	static uint64_t t14 = 87591449956LLU;

	t14 = ((x77<(x78+x79))%x80);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x85 = 2U;
	int32_t x86 = 566962;
	int64_t x87 = INT64_MIN;
	static int64_t x88 = 15LL;
	int64_t t15 = -78LL;

	t15 = ((x85<(x86+x87))%x88);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x93 = 330U;
	int16_t x94 = -3737;
	static int8_t x95 = 43;
	uint8_t x96 = 117U;
	int32_t t16 = 177462187;

	t16 = ((x93<(x94+x95))%x96);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = -12515;
	volatile uint32_t x98 = UINT32_MAX;
	int8_t x99 = -1;
	int64_t x100 = INT64_MIN;
	int64_t t17 = -1615616531077866LL;

	t17 = ((x97<(x98+x99))%x100);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x101 = 35U;
	int8_t x102 = -15;
	volatile uint8_t x103 = 0U;
	int8_t x104 = INT8_MAX;
	volatile int32_t t18 = -17752;

	t18 = ((x101<(x102+x103))%x104);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x113 = 2U;
	int8_t x114 = INT8_MIN;
	static int8_t x115 = INT8_MIN;
	uint32_t x116 = UINT32_MAX;

	t19 = ((x113<(x114+x115))%x116);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x122 = INT32_MIN;
	volatile int32_t x123 = INT32_MAX;
	static int8_t x124 = INT8_MIN;
	volatile int32_t t20 = -684390;

	t20 = ((x121<(x122+x123))%x124);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x125 = INT8_MIN;
	static uint8_t x126 = 2U;
	uint32_t x127 = 110U;
	int8_t x128 = INT8_MAX;

	t21 = ((x125<(x126+x127))%x128);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x129 = -4;
	int32_t x130 = -1;
	static volatile int64_t x131 = INT64_MAX;
	static volatile int16_t x132 = 1815;
	volatile int32_t t22 = -4712;

	t22 = ((x129<(x130+x131))%x132);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x133 = -1;
	int16_t x134 = INT16_MAX;
	int16_t x136 = INT16_MIN;
	volatile int32_t t23 = 582034447;

	t23 = ((x133<(x134+x135))%x136);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x137 = UINT64_MAX;
	int16_t x139 = -248;
	int64_t x140 = INT64_MAX;

	t24 = ((x137<(x138+x139))%x140);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x141 = INT64_MIN;
	int8_t x142 = 0;
	static int32_t x143 = -1;
	int32_t x144 = -72978;
	int32_t t25 = 10;

	t25 = ((x141<(x142+x143))%x144);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = INT64_MIN;
	uint16_t x147 = UINT16_MAX;
	volatile int64_t x148 = INT64_MIN;
	int64_t t26 = -3796434LL;

	t26 = ((x145<(x146+x147))%x148);

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x149 = 19;
	volatile uint64_t x151 = 141LLU;
	volatile uint32_t x152 = UINT32_MAX;
	volatile uint32_t t27 = 26804909U;

	t27 = ((x149<(x150+x151))%x152);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = INT8_MIN;
	int64_t x154 = -56LL;
	static uint32_t x155 = UINT32_MAX;
	uint64_t t28 = 247001LLU;

	t28 = ((x153<(x154+x155))%x156);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x158 = -660136LL;
	uint64_t x159 = 5266805989425LLU;
	int16_t x160 = INT16_MIN;

	t29 = ((x157<(x158+x159))%x160);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x162 = -6;
	int8_t x163 = -3;
	int32_t x164 = 259692024;
	volatile int32_t t30 = -14;

	t30 = ((x161<(x162+x163))%x164);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x165 = INT16_MAX;
	int8_t x166 = -56;
	uint64_t x168 = 8255259934776495133LLU;

	t31 = ((x165<(x166+x167))%x168);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x169 = -1;
	int32_t x170 = -1;
	static volatile int64_t t32 = 156641529530LL;

	t32 = ((x169<(x170+x171))%x172);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x177 = 0LLU;
	uint32_t x178 = 8312909U;
	int32_t t33 = 673;

	t33 = ((x177<(x178+x179))%x180);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x181 = 7027019730371296LLU;
	uint64_t x182 = 818501652987LLU;
	static uint8_t x183 = 99U;
	int32_t x184 = 6;

	t34 = ((x181<(x182+x183))%x184);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x185 = 11U;
	int64_t x187 = -65215032LL;
	uint64_t x188 = 288003732068202LLU;
	static volatile uint64_t t35 = 3921257192LLU;

	t35 = ((x185<(x186+x187))%x188);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x189 = -1;
	int64_t x190 = 23594173260220411LL;
	int16_t x191 = 1;
	int16_t x192 = INT16_MIN;
	volatile int32_t t36 = -422;

	t36 = ((x189<(x190+x191))%x192);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x193 = UINT64_MAX;
	volatile int64_t x194 = 13LL;
	uint64_t x195 = 877238731753LLU;
	int64_t x196 = INT64_MAX;
	volatile int64_t t37 = 7540LL;

	t37 = ((x193<(x194+x195))%x196);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x201 = -9987;
	int8_t x202 = 2;
	static uint32_t x203 = 726U;
	int8_t x204 = -49;
	volatile int32_t t38 = 110;

	t38 = ((x201<(x202+x203))%x204);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x205 = -191742;
	int8_t x208 = -1;
	volatile int32_t t39 = 5;

	t39 = ((x205<(x206+x207))%x208);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x209 = UINT64_MAX;
	static uint32_t x211 = UINT32_MAX;
	uint16_t x212 = 79U;

	t40 = ((x209<(x210+x211))%x212);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x213 = INT16_MAX;
	volatile int32_t x215 = -14011;
	static int16_t x216 = INT16_MIN;
	static volatile int32_t t41 = 42229156;

	t41 = ((x213<(x214+x215))%x216);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x221 = INT8_MIN;
	int16_t x222 = 662;
	volatile int16_t x223 = -14;
	volatile int16_t x224 = INT16_MAX;
	static volatile int32_t t42 = 7450713;

	t42 = ((x221<(x222+x223))%x224);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x225 = INT8_MIN;
	static uint8_t x226 = UINT8_MAX;
	uint64_t x227 = UINT64_MAX;
	uint8_t x228 = UINT8_MAX;

	t43 = ((x225<(x226+x227))%x228);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x229 = 0;
	uint32_t x230 = 41753U;
	uint8_t x231 = 33U;
	int64_t x232 = INT64_MIN;
	int64_t t44 = 1566804LL;

	t44 = ((x229<(x230+x231))%x232);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x233 = 117567U;
	int64_t x234 = -1LL;
	int32_t x235 = 667112127;
	static volatile uint8_t x236 = UINT8_MAX;
	volatile int32_t t45 = -277093;

	t45 = ((x233<(x234+x235))%x236);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x237 = 416U;
	int32_t x239 = -1;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t46 = 1LLU;

	t46 = ((x237<(x238+x239))%x240);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x241 = INT64_MAX;
	int32_t x243 = -1;
	volatile uint32_t x244 = UINT32_MAX;

	t47 = ((x241<(x242+x243))%x244);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x245 = 74U;
	volatile int32_t x246 = INT32_MAX;
	int16_t x247 = -6;
	static int32_t x248 = -5867;
	volatile int32_t t48 = -20914;

	t48 = ((x245<(x246+x247))%x248);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x249 = 7U;
	int32_t x250 = -1;
	uint64_t x251 = 20722943159LLU;
	static volatile int16_t x252 = -1;
	static volatile int32_t t49 = -95072;

	t49 = ((x249<(x250+x251))%x252);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x254 = 190123LLU;
	int32_t t50 = -1;

	t50 = ((x253<(x254+x255))%x256);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x257 = 0;
	int8_t x258 = -1;
	int64_t x259 = -550247856575191LL;
	volatile int64_t t51 = -39815018LL;

	t51 = ((x257<(x258+x259))%x260);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x261 = 3U;
	volatile int32_t x262 = -1;
	volatile int32_t x263 = -1;
	volatile uint16_t x264 = 1115U;

	t52 = ((x261<(x262+x263))%x264);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x265 = 326;
	int32_t x266 = 155504863;
	int16_t x267 = -56;
	static volatile uint64_t t53 = 4735993240773952500LLU;

	t53 = ((x265<(x266+x267))%x268);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x269 = UINT32_MAX;
	volatile int64_t x270 = -8LL;
	static int8_t x271 = INT8_MIN;
	int32_t t54 = 71207581;

	t54 = ((x269<(x270+x271))%x272);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x275 = INT32_MIN;
	uint64_t x276 = 7521925499LLU;
	static uint64_t t55 = 649706LLU;

	t55 = ((x273<(x274+x275))%x276);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x277 = UINT64_MAX;
	static uint32_t x278 = UINT32_MAX;
	int8_t x279 = 2;
	static int8_t x280 = INT8_MIN;

	t56 = ((x277<(x278+x279))%x280);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x282 = INT8_MAX;
	static int16_t x283 = -81;
	volatile int32_t t57 = -18421753;

	t57 = ((x281<(x282+x283))%x284);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x285 = UINT32_MAX;
	static int64_t x287 = 26848480751029LL;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t58 = 1623626;

	t58 = ((x285<(x286+x287))%x288);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x289 = -1;
	static int32_t x290 = INT32_MIN;
	int64_t x291 = -460780856883LL;
	uint32_t x292 = UINT32_MAX;
	volatile uint32_t t59 = 0U;

	t59 = ((x289<(x290+x291))%x292);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x297 = -14;
	static uint64_t x298 = 132356LLU;
	volatile uint8_t x299 = 66U;
	int8_t x300 = 5;
	int32_t t60 = -8563648;

	t60 = ((x297<(x298+x299))%x300);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x301 = -1;
	int64_t x302 = INT64_MAX;
	int8_t x303 = INT8_MIN;
	uint8_t x304 = 1U;
	static int32_t t61 = -32823;

	t61 = ((x301<(x302+x303))%x304);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x305 = 41U;
	int32_t x306 = INT32_MIN;
	volatile int32_t x307 = 699387;
	int8_t x308 = INT8_MAX;
	int32_t t62 = -16758;

	t62 = ((x305<(x306+x307))%x308);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x309 = 2U;
	uint64_t x312 = 860998010574676742LLU;

	t63 = ((x309<(x310+x311))%x312);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x313 = 586512110191049074LL;
	int64_t x314 = -1LL;
	int8_t x315 = INT8_MIN;
	int8_t x316 = -1;
	volatile int32_t t64 = -302969271;

	t64 = ((x313<(x314+x315))%x316);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x317 = INT64_MIN;
	volatile int64_t x318 = -1LL;
	static uint16_t x320 = 11998U;
	volatile int32_t t65 = 34;

	t65 = ((x317<(x318+x319))%x320);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x322 = -1;
	volatile uint32_t x323 = 453U;
	static volatile int32_t x324 = INT32_MIN;
	int32_t t66 = -1668;

	t66 = ((x321<(x322+x323))%x324);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x325 = -50;
	int64_t x326 = INT64_MIN;
	int8_t x327 = 8;
	int32_t x328 = -30694901;
	volatile int32_t t67 = -21360;

	t67 = ((x325<(x326+x327))%x328);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x329 = UINT16_MAX;
	uint32_t x331 = 1920139U;
	int8_t x332 = INT8_MIN;
	volatile int32_t t68 = -11234395;

	t68 = ((x329<(x330+x331))%x332);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = INT16_MIN;
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = INT16_MAX;
	int64_t x336 = -2968LL;
	int64_t t69 = 53771LL;

	t69 = ((x333<(x334+x335))%x336);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x337 = INT64_MAX;
	uint64_t x338 = 1LLU;
	volatile int32_t x340 = INT32_MIN;
	static volatile int32_t t70 = 533810;

	t70 = ((x337<(x338+x339))%x340);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x349 = UINT8_MAX;
	uint8_t x352 = 2U;

	t71 = ((x349<(x350+x351))%x352);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x353 = -6;
	static int64_t x354 = -401370880753485281LL;
	uint16_t x355 = 3U;
	int64_t x356 = INT64_MIN;
	static volatile int64_t t72 = 130006086311165510LL;

	t72 = ((x353<(x354+x355))%x356);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x357 = 113296U;
	static int64_t x358 = INT64_MIN;
	static volatile int16_t x360 = 11;
	int32_t t73 = -627;

	t73 = ((x357<(x358+x359))%x360);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x362 = INT16_MIN;
	static int8_t x363 = -29;
	int64_t x364 = -1LL;
	static int64_t t74 = 15656391LL;

	t74 = ((x361<(x362+x363))%x364);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x369 = INT64_MIN;
	uint32_t x370 = UINT32_MAX;
	volatile int16_t x371 = -10629;
	uint32_t t75 = 11U;

	t75 = ((x369<(x370+x371))%x372);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x377 = INT16_MAX;
	int32_t x378 = -1;
	int16_t x379 = INT16_MAX;
	int32_t t76 = 373261993;

	t76 = ((x377<(x378+x379))%x380);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x385 = INT32_MAX;
	uint32_t x386 = UINT32_MAX;
	volatile int16_t x387 = 6943;
	uint32_t x388 = 946044U;
	uint32_t t77 = 1809477816U;

	t77 = ((x385<(x386+x387))%x388);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x389 = -1;
	volatile int64_t x391 = 6017308435LL;
	volatile int32_t t78 = 944188893;

	t78 = ((x389<(x390+x391))%x392);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x393 = UINT32_MAX;
	int32_t x395 = -1;
	static uint32_t x396 = 206510674U;
	volatile uint32_t t79 = 1622U;

	t79 = ((x393<(x394+x395))%x396);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x398 = 43U;
	static int32_t x399 = 1;
	uint32_t x400 = 1759214178U;
	static volatile uint32_t t80 = 104526429U;

	t80 = ((x397<(x398+x399))%x400);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x401 = 10745220U;
	int16_t x402 = INT16_MIN;
	volatile int8_t x403 = 2;
	int64_t x404 = INT64_MAX;
	int64_t t81 = -543121939132830LL;

	t81 = ((x401<(x402+x403))%x404);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x405 = UINT16_MAX;
	uint16_t x406 = 27U;
	uint32_t x407 = 201U;
	volatile uint64_t t82 = 33979734140LLU;

	t82 = ((x405<(x406+x407))%x408);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x409 = UINT32_MAX;
	int16_t x410 = INT16_MIN;
	int8_t x411 = -1;
	int8_t x412 = -1;
	volatile int32_t t83 = 1;

	t83 = ((x409<(x410+x411))%x412);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x413 = INT8_MIN;

	t84 = ((x413<(x414+x415))%x416);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x425 = INT8_MIN;
	volatile int64_t x427 = -819002822598103LL;

	t85 = ((x425<(x426+x427))%x428);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x433 = 2114810LL;
	int32_t x434 = INT32_MIN;
	static int64_t x436 = -1LL;
	volatile int64_t t86 = 59058143566500LL;

	t86 = ((x433<(x434+x435))%x436);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x437 = INT8_MAX;
	static uint16_t x439 = UINT16_MAX;
	int64_t x440 = -11322068LL;

	t87 = ((x437<(x438+x439))%x440);

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x441 = -1;
	uint8_t x442 = UINT8_MAX;
	int8_t x443 = -1;
	static int64_t x444 = -1905209423760498LL;
	static int64_t t88 = -34084554LL;

	t88 = ((x441<(x442+x443))%x444);

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x445 = INT16_MIN;
	volatile uint16_t x446 = 4833U;
	volatile int64_t x447 = INT64_MIN;
	int32_t x448 = 1;
	int32_t t89 = -733;

	t89 = ((x445<(x446+x447))%x448);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x449 = INT16_MIN;
	int64_t x450 = INT64_MIN;
	volatile uint64_t x451 = 586040905LLU;
	int64_t t90 = 563214LL;

	t90 = ((x449<(x450+x451))%x452);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x457 = INT32_MIN;
	uint32_t x458 = 25U;
	int16_t x459 = INT16_MAX;
	int16_t x460 = 3191;

	t91 = ((x457<(x458+x459))%x460);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x461 = -1;
	static uint16_t x462 = UINT16_MAX;
	static uint32_t x463 = 34U;
	volatile uint16_t x464 = UINT16_MAX;
	int32_t t92 = 575821;

	t92 = ((x461<(x462+x463))%x464);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x465 = 362849430824LLU;
	static int16_t x466 = -13;
	int8_t x467 = INT8_MIN;
	static int32_t x468 = INT32_MIN;
	static volatile int32_t t93 = 83909;

	t93 = ((x465<(x466+x467))%x468);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x470 = UINT64_MAX;
	uint8_t x472 = 1U;
	int32_t t94 = -211204;

	t94 = ((x469<(x470+x471))%x472);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x475 = INT16_MIN;
	int32_t x476 = -1;
	static volatile int32_t t95 = 0;

	t95 = ((x473<(x474+x475))%x476);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x477 = 13945780;
	int32_t x478 = -1;
	uint32_t x479 = 10599292U;
	int64_t t96 = 1LL;

	t96 = ((x477<(x478+x479))%x480);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x482 = -1001;
	int16_t x483 = INT16_MIN;
	static int32_t t97 = 19;

	t97 = ((x481<(x482+x483))%x484);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x486 = INT8_MAX;
	int8_t x487 = -15;
	static int64_t x488 = -11666408284121LL;
	volatile int64_t t98 = 63831LL;

	t98 = ((x485<(x486+x487))%x488);

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x490 = UINT64_MAX;
	volatile uint16_t x492 = UINT16_MAX;
	volatile int32_t t99 = -96375;

	t99 = ((x489<(x490+x491))%x492);

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

