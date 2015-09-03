#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
volatile int32_t t0 = 46;
static uint8_t x18 = 3U;
volatile int64_t t4 = -178698056763LL;
int64_t x21 = 1LL;
int64_t x24 = INT64_MIN;
int64_t t5 = 3932739528525011786LL;
int8_t x43 = INT8_MAX;
int64_t x50 = 706140428164LL;
volatile uint64_t x55 = 492LLU;
int32_t x59 = -1;
int32_t t14 = 801555494;
int64_t x66 = 55340040LL;
int16_t x67 = -82;
int16_t x73 = -397;
volatile int16_t x74 = INT16_MIN;
volatile uint16_t x78 = 2186U;
static volatile uint32_t x81 = 13163108U;
uint32_t t19 = 6U;
uint32_t t20 = 77108U;
int16_t x100 = -1;
uint64_t x105 = 6918330334552481LLU;
int32_t x113 = INT32_MAX;
uint16_t x121 = 1032U;
int8_t x122 = INT8_MIN;
int32_t x124 = -1;
int64_t x130 = 64748LL;
static uint8_t x131 = UINT8_MAX;
static int32_t t30 = -359526;
volatile int16_t x133 = INT16_MIN;
int64_t t32 = -21LL;
int32_t x145 = -161792553;
static uint64_t x161 = UINT64_MAX;
int64_t x163 = 66642LL;
uint32_t x170 = 2U;
static int32_t t38 = -7;
volatile uint32_t x177 = UINT32_MAX;
volatile uint32_t t41 = 2U;
static int64_t x190 = -639917265796LL;
int64_t t45 = -210113724433LL;
static uint64_t t46 = 171158774800LLU;
volatile int32_t x208 = INT32_MIN;
int8_t x211 = INT8_MIN;
uint8_t x212 = 3U;
volatile uint64_t t49 = 2922264LLU;
int32_t x217 = -1;
volatile int8_t x218 = -1;
static int8_t x229 = INT8_MIN;
int8_t x230 = INT8_MIN;
static volatile int64_t t52 = -119778427883596LL;
int32_t x234 = -1;
uint32_t x237 = UINT32_MAX;
int64_t x241 = 10405LL;
static volatile uint32_t x243 = 808853U;
uint64_t x244 = 67928000LLU;
volatile int32_t t56 = 3;
static uint32_t x250 = UINT32_MAX;
int64_t x255 = 11253LL;
uint64_t t58 = 4232LLU;
uint64_t x258 = 27351LLU;
int8_t x260 = INT8_MAX;
int16_t x262 = INT16_MIN;
volatile int64_t t61 = 7075504635771LL;
int32_t x269 = INT32_MAX;
uint16_t x298 = 6U;
static volatile uint64_t t67 = 5450993688LLU;
uint32_t x304 = 370583U;
volatile int32_t x308 = INT32_MIN;
int64_t x313 = -5870860174977LL;
static uint32_t x314 = 815706U;
volatile int32_t x321 = INT32_MAX;
int32_t x330 = INT32_MIN;
int8_t x336 = 4;
volatile int16_t x349 = 158;
int64_t x351 = INT64_MIN;
int16_t x353 = INT16_MIN;
uint64_t x355 = 2404031LLU;
volatile int32_t t81 = 741342641;
int32_t t82 = -621;
static int64_t x368 = INT64_MIN;
static int16_t x373 = -2;
int64_t x379 = 173028115613LL;
volatile int32_t x381 = -1;
uint32_t x383 = 7U;
static int32_t x389 = -1;
int32_t x390 = -1;
static uint8_t x398 = 19U;
volatile uint32_t x402 = 432110U;
uint16_t x409 = 73U;
int16_t x410 = INT16_MAX;
volatile uint32_t x414 = UINT32_MAX;
volatile int32_t x415 = INT32_MAX;
int8_t x417 = -1;
volatile int32_t t97 = 108;
volatile int64_t x426 = -1LL;


void f0(void) {
	int64_t x2 = INT64_MAX;
	int8_t x3 = -20;
	int16_t x4 = INT16_MIN;

	t0 = ((x1-(x2<x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	uint16_t x6 = UINT16_MAX;
	int32_t x7 = -35483;
	int64_t x8 = INT64_MIN;
	int64_t t1 = -1354224706028295LL;

	t1 = ((x5-(x6<x7))/x8);

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	int8_t x10 = INT8_MAX;
	uint16_t x11 = UINT16_MAX;
	int64_t x12 = -1LL;
	int64_t t2 = 3471093472LL;

	t2 = ((x9-(x10<x11))/x12);

	if (t2 != 32769LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	static volatile uint32_t x14 = UINT32_MAX;
	uint32_t x15 = 806785U;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 0;

	t3 = ((x13-(x14<x15))/x16);

	if (t3 != -16777215) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -374500LL;
	volatile int32_t x19 = 0;
	static int16_t x20 = 911;

	t4 = ((x17-(x18<x19))/x20);

	if (t4 != -411LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x22 = -1;
	int64_t x23 = 1887880LL;

	t5 = ((x21-(x22<x23))/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	static volatile uint32_t x26 = UINT32_MAX;
	int16_t x27 = -14;
	int64_t x28 = -1LL;
	volatile int64_t t6 = -3585730744LL;

	t6 = ((x25-(x26<x27))/x28);

	if (t6 != -65535LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = 307171U;
	int8_t x34 = INT8_MAX;
	int32_t x35 = INT32_MAX;
	volatile int16_t x36 = -1;
	volatile uint32_t t7 = 156259U;

	t7 = ((x33-(x34<x35))/x36);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x37 = 31U;
	static uint64_t x38 = 38LLU;
	volatile int16_t x39 = 0;
	uint32_t x40 = 2280U;
	static volatile uint32_t t8 = 37774U;

	t8 = ((x37-(x38<x39))/x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x41 = -1;
	volatile int64_t x42 = -361083924109LL;
	volatile int8_t x44 = -1;
	int32_t t9 = 4;

	t9 = ((x41-(x42<x43))/x44);

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = INT8_MAX;
	volatile uint32_t x46 = UINT32_MAX;
	volatile int8_t x47 = 20;
	int32_t x48 = -2;
	int32_t t10 = 26;

	t10 = ((x45-(x46<x47))/x48);

	if (t10 != -63) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x49 = 17U;
	int16_t x51 = 0;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t11 = 5LLU;

	t11 = ((x49-(x50<x51))/x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x53 = 0U;
	volatile int32_t x54 = INT32_MIN;
	int64_t x56 = -1LL;
	volatile int64_t t12 = -1509062317641267LL;

	t12 = ((x53-(x54<x55))/x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -21247LL;
	static int16_t x58 = -1;
	uint8_t x60 = 48U;
	int64_t t13 = -1419191LL;

	t13 = ((x57-(x58<x59))/x60);

	if (t13 != -442LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -33;
	int32_t x62 = INT32_MIN;
	int8_t x63 = INT8_MAX;
	int32_t x64 = -13109477;

	t14 = ((x61-(x62<x63))/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x65 = 1U;
	int32_t x68 = 3;
	static uint32_t t15 = 1913U;

	t15 = ((x65-(x66<x67))/x68);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	uint32_t x70 = 628460U;
	int64_t x71 = INT64_MIN;
	uint32_t x72 = 55938402U;
	volatile int64_t t16 = 1031625432027LL;

	t16 = ((x69-(x70<x71))/x72);

	if (t16 != -164884439080LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x75 = INT16_MAX;
	static int16_t x76 = INT16_MAX;
	volatile int32_t t17 = -48902812;

	t17 = ((x73-(x74<x75))/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = INT16_MIN;
	int8_t x79 = INT8_MAX;
	int32_t x80 = INT32_MAX;
	volatile int32_t t18 = 13341755;

	t18 = ((x77-(x78<x79))/x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x82 = INT16_MIN;
	static int64_t x83 = INT64_MIN;
	int32_t x84 = -1;

	t19 = ((x81-(x82<x83))/x84);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x85 = 0U;
	int64_t x86 = 105LL;
	int64_t x87 = -1LL;
	uint16_t x88 = 1U;

	t20 = ((x85-(x86<x87))/x88);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -1;
	volatile uint16_t x90 = UINT16_MAX;
	uint8_t x91 = 3U;
	uint8_t x92 = UINT8_MAX;
	static int32_t t21 = 232;

	t21 = ((x89-(x90<x91))/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x97 = -10353760;
	static int8_t x98 = INT8_MAX;
	uint16_t x99 = 104U;
	volatile int32_t t22 = -6;

	t22 = ((x97-(x98<x99))/x100);

	if (t22 != 10353760) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -713296LL;
	int16_t x102 = 25;
	int8_t x103 = INT8_MIN;
	volatile int16_t x104 = -1;
	int64_t t23 = 118LL;

	t23 = ((x101-(x102<x103))/x104);

	if (t23 != 713296LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x106 = 12632LLU;
	uint64_t x107 = 725243603658141198LLU;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t24 = 305218513411363LLU;

	t24 = ((x105-(x106<x107))/x108);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x109 = 32;
	int8_t x110 = INT8_MIN;
	static int64_t x111 = 12828857LL;
	int64_t x112 = -1LL;
	int64_t t25 = -935938094160LL;

	t25 = ((x109-(x110<x111))/x112);

	if (t25 != -31LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x114 = INT32_MIN;
	int32_t x115 = INT32_MIN;
	int64_t x116 = -1LL;
	volatile int64_t t26 = -6412298738910875LL;

	t26 = ((x113-(x114<x115))/x116);

	if (t26 != -2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	static int64_t x118 = INT64_MAX;
	static int8_t x119 = -58;
	static int16_t x120 = 98;
	int32_t t27 = -726;

	t27 = ((x117-(x118<x119))/x120);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x123 = -101309;
	static volatile int32_t t28 = 1;

	t28 = ((x121-(x122<x123))/x124);

	if (t28 != -1032) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MIN;
	static int64_t x126 = -1LL;
	int32_t x127 = INT32_MIN;
	uint32_t x128 = 13904375U;
	uint32_t t29 = 10195523U;

	t29 = ((x125-(x126<x127))/x128);

	if (t29 != 308U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x129 = 7038352;
	int8_t x132 = INT8_MIN;

	t30 = ((x129-(x130<x131))/x132);

	if (t30 != -54987) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x134 = 16;
	static int8_t x135 = INT8_MAX;
	int8_t x136 = -1;
	static int32_t t31 = 23341298;

	t31 = ((x133-(x134<x135))/x136);

	if (t31 != 32769) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MAX;
	uint8_t x138 = 11U;
	static int8_t x139 = 0;
	int64_t x140 = -6763961LL;

	t32 = ((x137-(x138<x139))/x140);

	if (t32 != -1363605147465LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = -1LL;
	volatile uint64_t x142 = 2LLU;
	volatile int16_t x143 = 3699;
	uint32_t x144 = 196944471U;
	volatile int64_t t33 = -2136755LL;

	t33 = ((x141-(x142<x143))/x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x146 = INT32_MIN;
	volatile uint32_t x147 = UINT32_MAX;
	int16_t x148 = -1;
	int32_t t34 = -3097255;

	t34 = ((x145-(x146<x147))/x148);

	if (t34 != 161792554) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = 10;
	volatile int8_t x154 = 25;
	int32_t x155 = INT32_MAX;
	static int16_t x156 = INT16_MAX;
	static int32_t t35 = -4242095;

	t35 = ((x153-(x154<x155))/x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x157 = 7577U;
	static int16_t x158 = -1;
	static uint32_t x159 = 8490U;
	int32_t x160 = INT32_MIN;
	volatile uint32_t t36 = 26U;

	t36 = ((x157-(x158<x159))/x160);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x162 = INT16_MIN;
	int8_t x164 = INT8_MIN;
	uint64_t t37 = 4013998278LLU;

	t37 = ((x161-(x162<x163))/x164);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	int64_t x171 = 55854674LL;
	int16_t x172 = 2995;

	t38 = ((x169-(x170<x171))/x172);

	if (t38 != -10) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = -1;
	volatile int32_t x174 = INT32_MIN;
	int64_t x175 = -1LL;
	uint8_t x176 = 1U;
	int32_t t39 = -551183;

	t39 = ((x173-(x174<x175))/x176);

	if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x178 = UINT64_MAX;
	int8_t x179 = 0;
	int16_t x180 = 4;
	uint32_t t40 = 59U;

	t40 = ((x177-(x178<x179))/x180);

	if (t40 != 1073741823U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = INT8_MAX;
	uint64_t x182 = UINT64_MAX;
	int16_t x183 = INT16_MAX;
	uint32_t x184 = 3168U;

	t41 = ((x181-(x182<x183))/x184);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x185 = 2U;
	int64_t x186 = INT64_MIN;
	uint16_t x187 = 3002U;
	int64_t x188 = INT64_MAX;
	int64_t t42 = -29761744LL;

	t42 = ((x185-(x186<x187))/x188);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = -3;
	static int8_t x191 = -6;
	static uint8_t x192 = 19U;
	int32_t t43 = -628;

	t43 = ((x189-(x190<x191))/x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x193 = INT32_MAX;
	volatile uint16_t x194 = 7597U;
	volatile int64_t x195 = -1LL;
	static volatile int16_t x196 = -1;
	int32_t t44 = -12394676;

	t44 = ((x193-(x194<x195))/x196);

	if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x197 = 1856746532LL;
	static volatile int64_t x198 = INT64_MAX;
	static int32_t x199 = 128503713;
	int16_t x200 = INT16_MIN;

	t45 = ((x197-(x198<x199))/x200);

	if (t45 != -56663LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = INT16_MAX;
	int16_t x202 = -1;
	uint8_t x203 = UINT8_MAX;
	uint64_t x204 = 148LLU;

	t46 = ((x201-(x202<x203))/x204);

	if (t46 != 221LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = UINT16_MAX;
	static int64_t x206 = -3583976391021506LL;
	static int64_t x207 = -223514590LL;
	int32_t t47 = 17961442;

	t47 = ((x205-(x206<x207))/x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = 1;
	uint16_t x210 = UINT16_MAX;
	volatile int32_t t48 = -518771781;

	t48 = ((x209-(x210<x211))/x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x213 = INT64_MAX;
	int8_t x214 = -46;
	uint8_t x215 = UINT8_MAX;
	static uint64_t x216 = 2LLU;

	t49 = ((x213-(x214<x215))/x216);

	if (t49 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x219 = -3884952024257486453LL;
	int32_t x220 = INT32_MAX;
	volatile int32_t t50 = -33;

	t50 = ((x217-(x218<x219))/x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x221 = 15143U;
	volatile int16_t x222 = INT16_MIN;
	static uint8_t x223 = 2U;
	static uint32_t x224 = 1918U;
	volatile uint32_t t51 = 49U;

	t51 = ((x221-(x222<x223))/x224);

	if (t51 != 7U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x231 = 5295U;
	static volatile int64_t x232 = INT64_MIN;

	t52 = ((x229-(x230<x231))/x232);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = -1LL;
	int8_t x235 = INT8_MAX;
	static uint8_t x236 = UINT8_MAX;
	volatile int64_t t53 = -1558706LL;

	t53 = ((x233-(x234<x235))/x236);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x238 = -1;
	volatile int64_t x239 = INT64_MAX;
	static int8_t x240 = -1;
	uint32_t t54 = 79102U;

	t54 = ((x237-(x238<x239))/x240);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x242 = INT8_MIN;
	volatile uint64_t t55 = 88811LLU;

	t55 = ((x241-(x242<x243))/x244);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x245 = 12U;
	uint64_t x246 = 1451826157LLU;
	static uint32_t x247 = 381782790U;
	static int32_t x248 = 95389;

	t56 = ((x245-(x246<x247))/x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x249 = UINT16_MAX;
	volatile int64_t x251 = -87382685LL;
	static uint32_t x252 = 88U;
	volatile uint32_t t57 = 18850U;

	t57 = ((x249-(x250<x251))/x252);

	if (t57 != 744U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x253 = 48016797721720268LLU;
	int16_t x254 = -1;
	volatile int64_t x256 = -2219647109503258LL;

	t58 = ((x253-(x254<x255))/x256);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x257 = -1;
	volatile int16_t x259 = INT16_MAX;
	volatile int32_t t59 = 26;

	t59 = ((x257-(x258<x259))/x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x261 = INT64_MAX;
	int8_t x263 = 41;
	int32_t x264 = -1;
	int64_t t60 = -414897818023LL;

	t60 = ((x261-(x262<x263))/x264);

	if (t60 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = -1;
	int16_t x266 = INT16_MIN;
	static uint16_t x267 = 29080U;
	volatile int64_t x268 = -1980875667440718LL;

	t61 = ((x265-(x266<x267))/x268);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x270 = -1;
	volatile uint16_t x271 = UINT16_MAX;
	int32_t x272 = INT32_MAX;
	volatile int32_t t62 = -1356;

	t62 = ((x269-(x270<x271))/x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = 3;
	static uint8_t x274 = 1U;
	int64_t x275 = INT64_MAX;
	volatile int64_t x276 = -1LL;
	volatile int64_t t63 = -100642523LL;

	t63 = ((x273-(x274<x275))/x276);

	if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = -13825;
	int16_t x278 = INT16_MIN;
	int8_t x279 = -1;
	static int8_t x280 = -2;
	int32_t t64 = 0;

	t64 = ((x277-(x278<x279))/x280);

	if (t64 != 6913) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x281 = INT64_MIN;
	uint32_t x282 = UINT32_MAX;
	volatile int32_t x283 = INT32_MIN;
	uint16_t x284 = 221U;
	static int64_t t65 = -67LL;

	t65 = ((x281-(x282<x283))/x284);

	if (t65 != -41734715098890388LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x289 = UINT8_MAX;
	volatile int64_t x290 = -115467LL;
	static uint32_t x291 = UINT32_MAX;
	static int64_t x292 = INT64_MIN;
	int64_t t66 = -1835771LL;

	t66 = ((x289-(x290<x291))/x292);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x297 = 501U;
	static int8_t x299 = INT8_MIN;
	uint64_t x300 = 21794775086LLU;

	t67 = ((x297-(x298<x299))/x300);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = INT8_MAX;
	uint8_t x302 = 5U;
	static uint64_t x303 = UINT64_MAX;
	uint32_t t68 = 1168411937U;

	t68 = ((x301-(x302<x303))/x304);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = INT16_MIN;
	uint16_t x306 = UINT16_MAX;
	int16_t x307 = INT16_MIN;
	static int32_t t69 = -6;

	t69 = ((x305-(x306<x307))/x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x309 = 4760;
	static int8_t x310 = INT8_MIN;
	uint64_t x311 = 242659LLU;
	uint32_t x312 = 16275423U;
	uint32_t t70 = 15719U;

	t70 = ((x309-(x310<x311))/x312);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x315 = 379673868LL;
	int8_t x316 = INT8_MIN;
	volatile int64_t t71 = -292571354105LL;

	t71 = ((x313-(x314<x315))/x316);

	if (t71 != 45866095117LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x317 = 224U;
	static volatile int8_t x318 = 0;
	static int8_t x319 = INT8_MIN;
	uint16_t x320 = 248U;
	uint32_t t72 = 13339U;

	t72 = ((x317-(x318<x319))/x320);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x322 = -239030029LL;
	int64_t x323 = INT64_MIN;
	uint16_t x324 = UINT16_MAX;
	int32_t t73 = 12525669;

	t73 = ((x321-(x322<x323))/x324);

	if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x325 = -20;
	volatile int64_t x326 = INT64_MAX;
	volatile int32_t x327 = INT32_MIN;
	volatile uint8_t x328 = 3U;
	int32_t t74 = 49623;

	t74 = ((x325-(x326<x327))/x328);

	if (t74 != -6) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x329 = 6U;
	int64_t x331 = INT64_MIN;
	uint16_t x332 = 300U;
	static volatile int32_t t75 = -350042;

	t75 = ((x329-(x330<x331))/x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x333 = 181749716650183LLU;
	int32_t x334 = INT32_MIN;
	int32_t x335 = -183293675;
	uint64_t t76 = 667185027466650930LLU;

	t76 = ((x333-(x334<x335))/x336);

	if (t76 != 45437429162545LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = INT16_MIN;
	static volatile int32_t x338 = -1;
	uint32_t x339 = 267403511U;
	int64_t x340 = 88330LL;
	int64_t t77 = 910874062712991LL;

	t77 = ((x337-(x338<x339))/x340);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x341 = INT32_MAX;
	volatile int8_t x342 = -1;
	int16_t x343 = 115;
	uint16_t x344 = UINT16_MAX;
	static volatile int32_t t78 = -1634;

	t78 = ((x341-(x342<x343))/x344);

	if (t78 != 32768) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x350 = UINT64_MAX;
	volatile int16_t x352 = -1;
	volatile int32_t t79 = 42494;

	t79 = ((x349-(x350<x351))/x352);

	if (t79 != -158) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x354 = -1;
	int64_t x356 = INT64_MIN;
	int64_t t80 = 16888969731LL;

	t80 = ((x353-(x354<x355))/x356);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x357 = 938;
	int64_t x358 = 40569LL;
	uint8_t x359 = UINT8_MAX;
	int32_t x360 = -2;

	t81 = ((x357-(x358<x359))/x360);

	if (t81 != -469) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x361 = -1;
	int16_t x362 = INT16_MAX;
	uint16_t x363 = 729U;
	volatile int32_t x364 = -1;

	t82 = ((x361-(x362<x363))/x364);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x365 = 1;
	volatile int64_t x366 = -636873976392659LL;
	int8_t x367 = INT8_MIN;
	static volatile int64_t t83 = -72460120369217LL;

	t83 = ((x365-(x366<x367))/x368);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x369 = 29U;
	int64_t x370 = -5442626664174859LL;
	static int32_t x371 = -1760;
	int64_t x372 = INT64_MIN;
	int64_t t84 = -6584LL;

	t84 = ((x369-(x370<x371))/x372);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x374 = 6380U;
	int8_t x375 = -6;
	int16_t x376 = 39;
	static volatile int32_t t85 = 707;

	t85 = ((x373-(x374<x375))/x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x377 = 0LL;
	int16_t x378 = INT16_MIN;
	static volatile int16_t x380 = INT16_MIN;
	static int64_t t86 = 13661800493LL;

	t86 = ((x377-(x378<x379))/x380);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x382 = INT64_MIN;
	static int32_t x384 = INT32_MIN;
	static volatile int32_t t87 = -100549913;

	t87 = ((x381-(x382<x383))/x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x385 = INT32_MAX;
	static int16_t x386 = INT16_MAX;
	static int8_t x387 = -4;
	int32_t x388 = INT32_MIN;
	volatile int32_t t88 = 137568893;

	t88 = ((x385-(x386<x387))/x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x391 = INT32_MIN;
	int64_t x392 = INT64_MAX;
	static volatile int64_t t89 = 1053562265427078770LL;

	t89 = ((x389-(x390<x391))/x392);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x393 = INT16_MAX;
	int32_t x394 = -1449490;
	volatile int16_t x395 = -1;
	volatile int16_t x396 = INT16_MIN;
	volatile int32_t t90 = 2236;

	t90 = ((x393-(x394<x395))/x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x397 = INT16_MIN;
	volatile uint16_t x399 = 1U;
	static int8_t x400 = -1;
	int32_t t91 = -16956;

	t91 = ((x397-(x398<x399))/x400);

	if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x401 = -36120832;
	uint64_t x403 = UINT64_MAX;
	static int16_t x404 = -1;
	volatile int32_t t92 = 58;

	t92 = ((x401-(x402<x403))/x404);

	if (t92 != 36120833) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x405 = UINT16_MAX;
	int16_t x406 = -1;
	uint16_t x407 = 3U;
	int64_t x408 = INT64_MIN;
	volatile int64_t t93 = -446403446829761LL;

	t93 = ((x405-(x406<x407))/x408);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x411 = INT32_MIN;
	uint64_t x412 = 415977138772LLU;
	static uint64_t t94 = 12543LLU;

	t94 = ((x409-(x410<x411))/x412);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x413 = INT64_MAX;
	volatile uint32_t x416 = 5715811U;
	int64_t t95 = -4LL;

	t95 = ((x413-(x414<x415))/x416);

	if (t95 != 1613659380419LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x418 = -686397;
	int32_t x419 = 11067019;
	int32_t x420 = INT32_MIN;
	int32_t t96 = -81;

	t96 = ((x417-(x418<x419))/x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x421 = INT32_MIN;
	int8_t x422 = INT8_MAX;
	uint8_t x423 = 1U;
	int32_t x424 = INT32_MAX;

	t97 = ((x421-(x422<x423))/x424);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x425 = -1;
	int64_t x427 = -4LL;
	volatile int32_t x428 = INT32_MIN;
	static int32_t t98 = -13285;

	t98 = ((x425-(x426<x427))/x428);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x429 = 31U;
	uint32_t x430 = 0U;
	uint32_t x431 = 2U;
	uint16_t x432 = 4934U;
	volatile uint32_t t99 = 3275373U;

	t99 = ((x429-(x430<x431))/x432);

	if (t99 != 0U) { NG(); } else { ; }
	
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

