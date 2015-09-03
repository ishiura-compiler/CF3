#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x5 = INT64_MIN;
static int64_t x6 = -1LL;
uint8_t x23 = 57U;
uint16_t x27 = 244U;
static volatile uint32_t t5 = 123558581U;
volatile uint8_t x54 = 23U;
uint32_t x55 = 250U;
static uint32_t x60 = 2U;
int8_t x61 = INT8_MIN;
volatile uint64_t t10 = 232861842554039LLU;
volatile int32_t x74 = 234;
int64_t x85 = INT64_MAX;
volatile int64_t t15 = -2906024LL;
volatile int8_t x93 = -3;
uint8_t x94 = 52U;
uint32_t x100 = 95369989U;
volatile uint64_t t18 = 21787723792302898LLU;
static int64_t x101 = 66150723LL;
static int32_t x104 = INT32_MIN;
volatile int32_t x106 = INT32_MIN;
volatile int64_t x107 = -97082LL;
static int8_t x110 = INT8_MIN;
volatile int32_t x124 = INT32_MIN;
volatile int32_t t22 = -39587972;
int32_t x127 = 37962022;
uint64_t x151 = 69166115862LLU;
volatile uint64_t t27 = 184482735175980689LLU;
static int64_t x170 = -1LL;
static int32_t x171 = INT32_MAX;
int8_t x172 = 23;
static int64_t x178 = -1LL;
uint16_t x180 = UINT16_MAX;
uint64_t x185 = 3834217112LLU;
int8_t x187 = INT8_MIN;
volatile int8_t x188 = INT8_MIN;
int8_t x190 = INT8_MIN;
volatile int32_t x193 = -1;
static int16_t x196 = INT16_MIN;
uint32_t x205 = 43706U;
int32_t x214 = -1000;
int64_t x224 = 11967206LL;
volatile uint64_t t39 = 127LLU;
int16_t x233 = 50;
static int32_t x242 = INT32_MIN;
static int64_t x248 = INT64_MAX;
int32_t x249 = INT32_MAX;
int8_t x250 = INT8_MAX;
uint32_t x252 = 41285727U;
volatile uint16_t x253 = UINT16_MAX;
volatile int64_t t46 = -4962816545LL;
int64_t x257 = INT64_MAX;
uint64_t t47 = 110621724LLU;
volatile int16_t x267 = -1;
uint64_t t49 = 488794425715LLU;
int8_t x273 = INT8_MIN;
volatile int8_t x274 = -24;
int32_t x275 = -1;
int32_t x280 = INT32_MIN;
static int64_t x297 = INT64_MIN;
int32_t x300 = INT32_MAX;
static int16_t x305 = -1;
uint8_t x318 = 0U;
volatile uint64_t t56 = 14409LLU;
uint64_t x321 = 28106605LLU;
static volatile int64_t x327 = INT64_MIN;
int16_t x331 = -309;
int8_t x332 = INT8_MIN;
int8_t x333 = -2;
static volatile int16_t x334 = -5425;
uint16_t x353 = UINT16_MAX;
int16_t x354 = INT16_MIN;
int32_t x360 = -47200;
int64_t x369 = -6297244512078746LL;
volatile int32_t x372 = 129815;
int64_t x374 = INT64_MIN;
uint32_t x396 = 111716055U;
uint8_t x400 = 8U;
int8_t x405 = INT8_MIN;
uint64_t x411 = 508605LLU;
int32_t x412 = INT32_MAX;
static uint8_t x418 = 53U;
int64_t t73 = 807522662313LL;
int32_t x425 = INT32_MIN;
uint32_t x432 = 9717U;
volatile int32_t x433 = INT32_MIN;
static int16_t x435 = INT16_MAX;
uint16_t x436 = 13869U;
volatile int32_t t76 = -128;
volatile int32_t x455 = 5282426;
static uint8_t x457 = 37U;
int8_t x460 = INT8_MAX;
int16_t x467 = INT16_MIN;
volatile int16_t x477 = -1;
uint32_t x479 = 119637U;
uint32_t x486 = 1199953U;
int32_t x488 = -6;
uint64_t t87 = 245051139550LLU;
int16_t x493 = INT16_MIN;
static uint32_t x498 = UINT32_MAX;
static int16_t x512 = -4394;
int64_t t94 = 4442865106756573499LL;
int32_t x530 = 0;
int64_t x534 = INT64_MIN;
uint8_t x539 = 124U;
static int8_t x543 = -1;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int64_t x2 = INT64_MIN;
	volatile uint32_t x3 = 202U;
	volatile uint8_t x4 = UINT8_MAX;
	volatile int64_t t0 = 217LL;

	t0 = (x1/((x2+x3)%x4));

	if (t0 != 50957856557208706LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x7 = UINT8_MAX;
	volatile int16_t x8 = INT16_MIN;
	int64_t t1 = 5LL;

	t1 = (x5/((x6+x7)%x8));

	if (t1 != -36312488334073920LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = 0;
	volatile uint16_t x10 = UINT16_MAX;
	int32_t x11 = INT32_MIN;
	volatile uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = 521;

	t2 = (x9/((x10+x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 20912U;
	static uint8_t x18 = 48U;
	static int16_t x19 = -209;
	int32_t x20 = 281890;
	volatile int32_t t3 = -37;

	t3 = (x17/((x18+x19)%x20));

	if (t3 != -129) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x21 = 3U;
	volatile uint64_t x22 = 1053LLU;
	static int16_t x24 = -1559;
	volatile uint64_t t4 = 1226467011960247LLU;

	t4 = (x21/((x22+x23)%x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = 3415;
	uint32_t x26 = 11252U;
	int8_t x28 = -1;

	t5 = (x25/((x26+x27)%x28));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = -7479;
	static volatile int16_t x42 = -1;
	uint64_t x43 = 3763269489526620016LLU;
	uint8_t x44 = UINT8_MAX;
	volatile uint64_t t6 = 0LLU;

	t6 = (x41/((x42+x43)%x44));

	if (t6 != 81985529216486862LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = 28816;
	uint32_t x50 = 8432U;
	int32_t x51 = INT32_MIN;
	int8_t x52 = INT8_MIN;
	static uint32_t t7 = 13316U;

	t7 = (x49/((x50+x51)%x52));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x53 = -1;
	static int8_t x56 = INT8_MAX;
	volatile uint32_t t8 = 7054U;

	t8 = (x53/((x54+x55)%x56));

	if (t8 != 226050910U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = 2410;
	int32_t x58 = -1729435;
	uint8_t x59 = 6U;
	uint32_t t9 = 127U;

	t9 = (x57/((x58+x59)%x60));

	if (t9 != 2410U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x62 = 8LLU;
	static uint16_t x63 = 6U;
	int8_t x64 = INT8_MIN;

	t10 = (x61/((x62+x63)%x64));

	if (t10 != 1317624576693539392LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = INT32_MAX;
	int16_t x66 = 7114;
	uint16_t x67 = 2U;
	volatile int32_t x68 = 115397801;
	int32_t t11 = -3;

	t11 = (x65/((x66+x67)%x68));

	if (t11 != 301782) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x69 = 1530U;
	volatile int64_t x70 = -1LL;
	static int16_t x71 = -2688;
	static volatile uint16_t x72 = UINT16_MAX;
	static volatile int64_t t12 = 58LL;

	t12 = (x69/((x70+x71)%x72));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = -1LL;
	int8_t x75 = 30;
	static volatile uint64_t x76 = UINT64_MAX;
	volatile uint64_t t13 = 33LLU;

	t13 = (x73/((x74+x75)%x76));

	if (t13 != 69874030582233150LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x81 = 1U;
	static int32_t x82 = -1;
	int32_t x83 = -1;
	int32_t x84 = -11815;
	volatile int32_t t14 = 9;

	t14 = (x81/((x82+x83)%x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x86 = -1;
	uint32_t x87 = 4471409U;
	static volatile uint16_t x88 = UINT16_MAX;

	t15 = (x85/((x86+x87)%x88));

	if (t15 != 613745810277799LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x89 = INT16_MAX;
	int16_t x90 = INT16_MIN;
	static volatile int8_t x91 = 7;
	uint16_t x92 = UINT16_MAX;
	static int32_t t16 = 2705;

	t16 = (x89/((x90+x91)%x92));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x95 = INT8_MIN;
	volatile int64_t x96 = INT64_MIN;
	int64_t t17 = 0LL;

	t17 = (x93/((x94+x95)%x96));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x97 = INT8_MAX;
	uint64_t x98 = 213808258252726444LLU;
	uint16_t x99 = UINT16_MAX;

	t18 = (x97/((x98+x99)%x100));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x102 = INT8_MIN;
	int8_t x103 = INT8_MAX;
	static volatile int64_t t19 = -470LL;

	t19 = (x101/((x102+x103)%x104));

	if (t19 != -66150723LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = -1;
	uint32_t x108 = 815939158U;
	int64_t t20 = 132151589415198066LL;

	t20 = (x105/((x106+x107)%x108));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = INT64_MIN;
	int8_t x111 = INT8_MIN;
	uint8_t x112 = 47U;
	volatile int64_t t21 = 243LL;

	t21 = (x109/((x110+x111)%x112));

	if (t21 != 439208192231179800LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x121 = -1;
	volatile uint16_t x122 = 20U;
	volatile uint16_t x123 = 20289U;

	t22 = (x121/((x122+x123)%x124));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x125 = 3698078004LLU;
	int8_t x126 = 1;
	int8_t x128 = INT8_MAX;
	uint64_t t23 = 220235127969100312LLU;

	t23 = (x125/((x126+x127)%x128));

	if (t23 != 51362194LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x137 = INT16_MIN;
	int64_t x138 = INT64_MIN;
	uint16_t x139 = UINT16_MAX;
	static volatile int16_t x140 = INT16_MAX;
	volatile int64_t t24 = 20502614908LL;

	t24 = (x137/((x138+x139)%x140));

	if (t24 != 4681LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x149 = UINT32_MAX;
	volatile int16_t x150 = INT16_MIN;
	int64_t x152 = 137903868461559LL;
	uint64_t t25 = 532294120667LLU;

	t25 = (x149/((x150+x151)%x152));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x161 = -1;
	uint8_t x162 = UINT8_MAX;
	int8_t x163 = 53;
	uint32_t x164 = 189699947U;
	volatile uint32_t t26 = 511U;

	t26 = (x161/((x162+x163)%x164));

	if (t26 != 13944699U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x165 = UINT64_MAX;
	volatile int8_t x166 = INT8_MIN;
	int8_t x167 = -44;
	uint64_t x168 = 186LLU;

	t27 = (x165/((x166+x167)%x168));

	if (t27 != 614891469123651720LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x169 = 31304813U;
	static int64_t t28 = -31849302028LL;

	t28 = (x169/((x170+x171)%x172));

	if (t28 != 7826203LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x173 = 1;
	volatile uint8_t x174 = UINT8_MAX;
	int32_t x175 = -1784242;
	int64_t x176 = INT64_MIN;
	int64_t t29 = 5611269LL;

	t29 = (x173/((x174+x175)%x176));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x177 = 44U;
	int16_t x179 = INT16_MIN;
	int64_t t30 = 56LL;

	t30 = (x177/((x178+x179)%x180));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x186 = -1LL;
	volatile uint64_t t31 = 23565475LLU;

	t31 = (x185/((x186+x187)%x188));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x189 = 39U;
	int32_t x191 = -1;
	static uint16_t x192 = 2398U;
	volatile int32_t t32 = 6358;

	t32 = (x189/((x190+x191)%x192));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x194 = UINT32_MAX;
	uint64_t x195 = 14378211LLU;
	volatile uint64_t t33 = 2014337615LLU;

	t33 = (x193/((x194+x195)%x196));

	if (t33 != 4280637059LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x197 = 315400976194602517LL;
	volatile uint8_t x198 = 2U;
	int32_t x199 = -1;
	static volatile int8_t x200 = INT8_MIN;
	int64_t t34 = 8730LL;

	t34 = (x197/((x198+x199)%x200));

	if (t34 != 315400976194602517LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x201 = INT64_MIN;
	int16_t x202 = INT16_MIN;
	uint16_t x203 = UINT16_MAX;
	volatile int16_t x204 = -4099;
	int64_t t35 = -222354142LL;

	t35 = (x201/((x202+x203)%x204));

	if (t35 != -2263959753768968LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x206 = 318U;
	static int16_t x207 = -3934;
	int64_t x208 = 24209419LL;
	volatile int64_t t36 = 32598528534LL;

	t36 = (x205/((x206+x207)%x208));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x213 = INT64_MIN;
	int64_t x215 = INT64_MAX;
	uint8_t x216 = 15U;
	int64_t t37 = 1052LL;

	t37 = (x213/((x214+x215)%x216));

	if (t37 != -768614336404564650LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x221 = 802LLU;
	int16_t x222 = INT16_MIN;
	uint16_t x223 = 20U;
	uint64_t t38 = 355601054250LLU;

	t38 = (x221/((x222+x223)%x224));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x225 = 8298933871050301449LLU;
	uint8_t x226 = 9U;
	int16_t x227 = -1;
	int64_t x228 = 7LL;

	t39 = (x225/((x226+x227)%x228));

	if (t39 != 8298933871050301449LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x229 = 980641510489003LLU;
	uint64_t x230 = 427805LLU;
	int32_t x231 = 1819887;
	int8_t x232 = 8;
	volatile uint64_t t40 = 209666333795855106LLU;

	t40 = (x229/((x230+x231)%x232));

	if (t40 != 245160377622250LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x234 = INT8_MAX;
	int16_t x235 = INT16_MIN;
	int64_t x236 = 5520568189LL;
	volatile int64_t t41 = 3LL;

	t41 = (x233/((x234+x235)%x236));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x237 = INT16_MIN;
	static volatile int32_t x238 = -1;
	uint16_t x239 = 84U;
	static int16_t x240 = INT16_MIN;
	volatile int32_t t42 = -100;

	t42 = (x237/((x238+x239)%x240));

	if (t42 != -394) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x241 = -1;
	int64_t x243 = INT64_MAX;
	volatile int64_t x244 = -8LL;
	volatile int64_t t43 = -7LL;

	t43 = (x241/((x242+x243)%x244));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x245 = -3;
	static volatile int16_t x246 = -1;
	volatile uint16_t x247 = 0U;
	volatile int64_t t44 = 132740268333LL;

	t44 = (x245/((x246+x247)%x248));

	if (t44 != 3LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x251 = UINT32_MAX;
	uint32_t t45 = 0U;

	t45 = (x249/((x250+x251)%x252));

	if (t45 != 17043521U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x254 = UINT16_MAX;
	int64_t x255 = 0LL;
	static volatile uint32_t x256 = UINT32_MAX;

	t46 = (x253/((x254+x255)%x256));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x258 = 2U;
	uint8_t x259 = 74U;
	uint64_t x260 = 144550511LLU;

	t47 = (x257/((x258+x259)%x260));

	if (t47 != 121360158379668102LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x261 = 1;
	static int16_t x262 = 0;
	volatile int32_t x263 = INT32_MIN;
	uint64_t x264 = 108254219LLU;
	uint64_t t48 = 1354574060263733LLU;

	t48 = (x261/((x262+x263)%x264));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x265 = 52377597824860LLU;
	static volatile int16_t x266 = 709;
	int16_t x268 = 5;

	t49 = (x265/((x266+x267)%x268));

	if (t49 != 17459199274953LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x276 = 8U;
	static int32_t t50 = -247;

	t50 = (x273/((x274+x275)%x276));

	if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x277 = INT16_MIN;
	int16_t x278 = INT16_MIN;
	int8_t x279 = INT8_MIN;
	volatile int32_t t51 = -30677;

	t51 = (x277/((x278+x279)%x280));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x289 = -1;
	int8_t x290 = -1;
	int16_t x291 = INT16_MIN;
	int32_t x292 = INT32_MIN;
	volatile int32_t t52 = 224794948;

	t52 = (x289/((x290+x291)%x292));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x293 = INT16_MIN;
	int16_t x294 = 2682;
	int16_t x295 = -1;
	int64_t x296 = INT64_MIN;
	volatile int64_t t53 = 17007079877LL;

	t53 = (x293/((x294+x295)%x296));

	if (t53 != -12LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x298 = UINT32_MAX;
	uint16_t x299 = UINT16_MAX;
	static int64_t t54 = -6615983662LL;

	t54 = (x297/((x298+x299)%x300));

	if (t54 != -140741783453700LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x306 = 402;
	static volatile int8_t x307 = -1;
	int64_t x308 = INT64_MIN;
	volatile int64_t t55 = 490698817LL;

	t55 = (x305/((x306+x307)%x308));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x317 = -54;
	uint32_t x319 = 135U;
	volatile uint64_t x320 = 6894229784LLU;

	t56 = (x317/((x318+x319)%x320));

	if (t56 != 136642548694144826LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x322 = 6724707441996700106LLU;
	static int16_t x323 = INT16_MAX;
	int16_t x324 = -1;
	uint64_t t57 = 175881036135LLU;

	t57 = (x321/((x322+x323)%x324));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x325 = 12966U;
	static int32_t x326 = 3410238;
	uint32_t x328 = UINT32_MAX;
	int64_t t58 = 55191152LL;

	t58 = (x325/((x326+x327)%x328));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x329 = 1;
	static uint64_t x330 = 3LLU;
	static volatile uint64_t t59 = 14136LLU;

	t59 = (x329/((x330+x331)%x332));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x335 = -1;
	static volatile int64_t x336 = INT64_MAX;
	int64_t t60 = -65011LL;

	t60 = (x333/((x334+x335)%x336));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x337 = INT16_MIN;
	static volatile uint32_t x338 = 144416675U;
	volatile uint32_t x339 = UINT32_MAX;
	static volatile uint8_t x340 = UINT8_MAX;
	uint32_t t61 = 8050U;

	t61 = (x337/((x338+x339)%x340));

	if (t61 != 18755172U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x345 = 86010420193LLU;
	uint64_t x346 = 1063562039091780984LLU;
	int64_t x347 = 207LL;
	volatile int16_t x348 = -1;
	volatile uint64_t t62 = 9131438766319LLU;

	t62 = (x345/((x346+x347)%x348));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x349 = INT16_MAX;
	volatile int8_t x350 = 5;
	int32_t x351 = 1460;
	uint16_t x352 = 2U;
	volatile int32_t t63 = -163;

	t63 = (x349/((x350+x351)%x352));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x355 = 3U;
	int64_t x356 = -54063060221306707LL;
	static volatile int64_t t64 = 1228138949303900LL;

	t64 = (x353/((x354+x355)%x356));

	if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x357 = -1;
	uint8_t x358 = 101U;
	int32_t x359 = 2;
	static volatile int32_t t65 = -1;

	t65 = (x357/((x358+x359)%x360));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x370 = -1LL;
	int64_t x371 = -1LL;
	int64_t t66 = -66LL;

	t66 = (x369/((x370+x371)%x372));

	if (t66 != 3148622256039373LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x373 = -1LL;
	volatile uint8_t x375 = 5U;
	volatile uint32_t x376 = UINT32_MAX;
	int64_t t67 = -890954206LL;

	t67 = (x373/((x374+x375)%x376));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x393 = -1LL;
	int32_t x394 = -1;
	uint32_t x395 = 10843137U;
	static int64_t t68 = -526650559803LL;

	t68 = (x393/((x394+x395)%x396));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x397 = UINT64_MAX;
	static volatile uint16_t x398 = 2U;
	int32_t x399 = INT32_MIN;
	volatile uint64_t t69 = 9LLU;

	t69 = (x397/((x398+x399)%x400));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x401 = INT8_MAX;
	uint8_t x402 = UINT8_MAX;
	int8_t x403 = INT8_MIN;
	uint32_t x404 = UINT32_MAX;
	static volatile uint32_t t70 = 16128646U;

	t70 = (x401/((x402+x403)%x404));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x406 = INT8_MAX;
	static uint16_t x407 = 1U;
	int64_t x408 = -1767198935103271LL;
	volatile int64_t t71 = 1921731LL;

	t71 = (x405/((x406+x407)%x408));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x409 = INT32_MIN;
	uint32_t x410 = 446254U;
	uint64_t t72 = 2LLU;

	t72 = (x409/((x410+x411)%x412));

	if (t72 != 19318814685269LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x417 = -1LL;
	volatile int8_t x419 = INT8_MIN;
	uint16_t x420 = UINT16_MAX;

	t73 = (x417/((x418+x419)%x420));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x426 = -1LL;
	int8_t x427 = INT8_MAX;
	static uint8_t x428 = UINT8_MAX;
	int64_t t74 = 10LL;

	t74 = (x425/((x426+x427)%x428));

	if (t74 != -17043521LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x429 = 1203654349754LL;
	int8_t x430 = INT8_MAX;
	uint64_t x431 = 59835330063715LLU;
	volatile uint64_t t75 = 683127LLU;

	t75 = (x429/((x430+x431)%x432));

	if (t75 != 141789886LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x434 = 23;

	t76 = (x433/((x434+x435)%x436));

	if (t76 != -425075) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x437 = UINT8_MAX;
	int16_t x438 = INT16_MAX;
	uint32_t x439 = UINT32_MAX;
	static volatile uint64_t x440 = UINT64_MAX;
	static volatile uint64_t t77 = 365242318216786LLU;

	t77 = (x437/((x438+x439)%x440));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x441 = INT8_MIN;
	volatile int64_t x442 = -265090439LL;
	int16_t x443 = INT16_MIN;
	int32_t x444 = INT32_MAX;
	volatile int64_t t78 = -8505679051719LL;

	t78 = (x441/((x442+x443)%x444));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x453 = UINT16_MAX;
	volatile int8_t x454 = -5;
	uint8_t x456 = 2U;
	volatile int32_t t79 = 95185984;

	t79 = (x453/((x454+x455)%x456));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x458 = -36493919LL;
	int64_t x459 = -694358758035LL;
	int64_t t80 = 8432689743LL;

	t80 = (x457/((x458+x459)%x460));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x461 = 0;
	int16_t x462 = -1;
	int8_t x463 = -1;
	int8_t x464 = -3;
	int32_t t81 = -40236;

	t81 = (x461/((x462+x463)%x464));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x465 = 0;
	uint16_t x466 = UINT16_MAX;
	int16_t x468 = INT16_MIN;
	int32_t t82 = -7633;

	t82 = (x465/((x466+x467)%x468));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x469 = 41915822U;
	volatile int32_t x470 = INT32_MIN;
	int16_t x471 = INT16_MAX;
	static int16_t x472 = INT16_MAX;
	volatile uint32_t t83 = 18286226U;

	t83 = (x469/((x470+x471)%x472));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x473 = -1279;
	int64_t x474 = 299819805878LL;
	int16_t x475 = INT16_MAX;
	int16_t x476 = 2;
	volatile int64_t t84 = -484303916LL;

	t84 = (x473/((x474+x475)%x476));

	if (t84 != -1279LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x478 = 46088U;
	volatile uint16_t x480 = UINT16_MAX;
	uint32_t t85 = 3203129U;

	t85 = (x477/((x478+x479)%x480));

	if (t85 != 123934U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x481 = 12;
	int32_t x482 = -1;
	int32_t x483 = INT32_MAX;
	volatile int16_t x484 = -102;
	volatile int32_t t86 = 52155462;

	t86 = (x481/((x482+x483)%x484));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x485 = UINT64_MAX;
	int32_t x487 = -470126;

	t87 = (x485/((x486+x487)%x488));

	if (t87 != 25275502377562LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x494 = UINT16_MAX;
	int64_t x495 = -1LL;
	uint64_t x496 = 93506781942574921LLU;
	volatile uint64_t t88 = 461096182478692LLU;

	t88 = (x493/((x494+x495)%x496));

	if (t88 != 281483566907399LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x497 = INT16_MIN;
	static volatile int8_t x499 = -1;
	int8_t x500 = 3;
	uint32_t t89 = 152252U;

	t89 = (x497/((x498+x499)%x500));

	if (t89 != 2147467264U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x501 = 2049323046551LLU;
	uint64_t x502 = 172038768LLU;
	volatile uint64_t x503 = 47737298LLU;
	int32_t x504 = INT32_MIN;
	uint64_t t90 = 668650497863966LLU;

	t90 = (x501/((x502+x503)%x504));

	if (t90 != 9324LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x505 = -2;
	static int8_t x506 = INT8_MIN;
	uint32_t x507 = 21307660U;
	int8_t x508 = -8;
	uint32_t t91 = 125904U;

	t91 = (x505/((x506+x507)%x508));

	if (t91 != 201U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x509 = -1LL;
	int64_t x510 = -1LL;
	int8_t x511 = -45;
	int64_t t92 = -491LL;

	t92 = (x509/((x510+x511)%x512));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x513 = -72302060836964LL;
	uint64_t x514 = UINT64_MAX;
	volatile int8_t x515 = 8;
	static uint8_t x516 = UINT8_MAX;
	volatile uint64_t t93 = 242044212923798143LLU;

	t93 = (x513/((x514+x515)%x516));

	if (t93 != 2635238824521244950LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x521 = INT64_MAX;
	int32_t x522 = INT32_MIN;
	uint32_t x523 = 8U;
	int8_t x524 = -1;

	t94 = (x521/((x522+x523)%x524));

	if (t94 != 4294967280LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x525 = INT8_MIN;
	static int16_t x526 = -1;
	int32_t x527 = -12423;
	volatile uint32_t x528 = UINT32_MAX;
	volatile uint32_t t95 = 11U;

	t95 = (x525/((x526+x527)%x528));

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x529 = 53U;
	volatile int16_t x531 = INT16_MIN;
	uint16_t x532 = 5U;
	int32_t t96 = -1535;

	t96 = (x529/((x530+x531)%x532));

	if (t96 != -17) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x533 = INT32_MAX;
	static volatile int16_t x535 = 1;
	uint32_t x536 = UINT32_MAX;
	volatile int64_t t97 = 110167539356347533LL;

	t97 = (x533/((x534+x535)%x536));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x537 = UINT16_MAX;
	uint32_t x538 = 95582636U;
	volatile uint64_t x540 = 5458032547LLU;
	volatile uint64_t t98 = 78543210400085LLU;

	t98 = (x537/((x538+x539)%x540));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x541 = INT32_MIN;
	int8_t x542 = INT8_MIN;
	int16_t x544 = INT16_MIN;
	volatile int32_t t99 = -17888892;

	t99 = (x541/((x542+x543)%x544));

	if (t99 != 16647160) { NG(); } else { ; }
	
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

