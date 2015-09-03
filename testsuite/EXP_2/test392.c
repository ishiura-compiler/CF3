#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -207210;
volatile int16_t x6 = INT16_MAX;
uint16_t x8 = 1021U;
int64_t x14 = -50489LL;
static uint64_t t2 = 2640999LLU;
uint16_t x20 = 64U;
int8_t x27 = INT8_MIN;
static int16_t x28 = -1;
volatile int32_t x32 = INT32_MIN;
int64_t x34 = -156113870LL;
uint64_t x37 = 88218299383208282LLU;
int32_t x38 = 377549;
volatile int32_t t12 = 416983;
int64_t x61 = 20576686080228LL;
static int16_t x70 = INT16_MAX;
int8_t x72 = -1;
int32_t t14 = -86564862;
static volatile int32_t x81 = -1;
uint16_t x82 = 168U;
int32_t x102 = INT32_MIN;
volatile uint64_t t20 = 39689568634LLU;
int32_t x115 = -134341459;
int32_t x116 = INT32_MAX;
uint64_t t21 = 470614963LLU;
int32_t x117 = -280231;
int64_t t22 = 419078859619016655LL;
int8_t x121 = INT8_MAX;
uint32_t t24 = 3U;
volatile uint16_t x139 = UINT16_MAX;
static int32_t x147 = -1;
uint64_t x162 = 16358320LLU;
volatile uint64_t t31 = 3072509LLU;
uint64_t x183 = 866369221541067LLU;
int32_t x189 = INT32_MAX;
int64_t x190 = -1LL;
int8_t x191 = INT8_MAX;
uint8_t x203 = 116U;
int32_t t34 = -733306;
uint8_t x206 = UINT8_MAX;
volatile uint64_t x215 = 513527611198897LLU;
int16_t x237 = 0;
uint8_t x238 = UINT8_MAX;
int64_t x239 = -1LL;
static int16_t x256 = 472;
int16_t x258 = -509;
int64_t x273 = -1LL;
static volatile int32_t t47 = -380;
int32_t x298 = -3;
uint64_t t49 = 2896664671LLU;
static uint8_t x303 = 96U;
static int8_t x310 = INT8_MIN;
volatile uint32_t t51 = 13518U;
int32_t x318 = INT32_MAX;
uint8_t x327 = 125U;
int8_t x340 = INT8_MIN;
volatile uint32_t t56 = 90U;
volatile int32_t x347 = INT32_MIN;
int16_t x348 = -1;
int32_t t57 = -402243;
volatile int32_t t62 = -4853;
int8_t x375 = 5;
static volatile int16_t x377 = INT16_MAX;
volatile int16_t x380 = -905;
static uint8_t x383 = 46U;
static int64_t x389 = -3746LL;
uint32_t t68 = 125922160U;
int32_t x399 = -1;
static int16_t x403 = INT16_MIN;
int64_t x404 = 6340734407594256LL;
uint32_t t71 = UINT32_MAX;
int16_t x410 = INT16_MAX;
static int32_t x412 = -1;
int32_t x425 = INT32_MAX;
static volatile uint64_t t77 = 45755377325LLU;
volatile int16_t x442 = -1;
int64_t x445 = INT64_MIN;
static int64_t x447 = -1LL;
uint64_t x457 = UINT64_MAX;
volatile int64_t x460 = -1LL;
uint64_t t81 = 41382152510859LLU;
static uint32_t x465 = 2047U;
volatile int16_t x467 = INT16_MAX;
static uint64_t t82 = 96139895LLU;
static int16_t x475 = -1;
int16_t x486 = 15;
int64_t x493 = INT64_MAX;
static int8_t x503 = INT8_MAX;
int64_t x514 = -67401628191967LL;
volatile int64_t t92 = 27189565397047572LL;
uint64_t x528 = UINT64_MAX;
volatile int64_t t96 = -118878LL;
uint64_t x545 = UINT64_MAX;
static int64_t x553 = INT64_MIN;
uint32_t x561 = UINT32_MAX;
volatile int8_t x563 = INT8_MAX;
volatile int64_t t99 = -2216424166708474LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile int16_t x2 = -6788;
	volatile int16_t x3 = INT16_MIN;
	volatile uint8_t x4 = 9U;

	t0 = ((x1%(x2*x3))-x4);

	if (t0 != -32777) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 371677LLU;
	uint32_t x7 = 908011U;
	static volatile uint64_t t1 = 6815076597898LLU;

	t1 = ((x5%(x6*x7))-x8);

	if (t1 != 370656LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 58572611329032814LLU;
	volatile int8_t x15 = INT8_MAX;
	volatile int16_t x16 = INT16_MIN;

	t2 = ((x13%(x14*x15))-x16);

	if (t2 != 58572611329065582LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	volatile uint8_t x18 = 89U;
	static int64_t x19 = -380LL;
	volatile int64_t t3 = -3869505074LL;

	t3 = ((x17%(x18*x19))-x20);

	if (t3 != -15172LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 5701U;
	int16_t x22 = INT16_MIN;
	volatile int64_t x23 = -1LL;
	uint64_t x24 = 314664LLU;
	static volatile uint64_t t4 = 4610638349614LLU;

	t4 = ((x21%(x22*x23))-x24);

	if (t4 != 18446744073709242653LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = 101071;
	int16_t x26 = 3;
	int32_t t5 = 13;

	t5 = ((x25%(x26*x27))-x28);

	if (t5 != 80) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 70LLU;
	int8_t x30 = -1;
	uint8_t x31 = 3U;
	volatile uint64_t t6 = 3548035LLU;

	t6 = ((x29%(x30*x31))-x32);

	if (t6 != 2147483718LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = -1;
	static uint16_t x35 = UINT16_MAX;
	static uint8_t x36 = 8U;
	volatile int64_t t7 = 2958460434937803573LL;

	t7 = ((x33%(x34*x35))-x36);

	if (t7 != -9LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x39 = 2043U;
	int64_t x40 = -126238354LL;
	volatile uint64_t t8 = 11340LLU;

	t8 = ((x37%(x38*x39))-x40);

	if (t8 != 398454462LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MAX;
	uint64_t x42 = 1021297785LLU;
	uint16_t x43 = 39U;
	volatile int32_t x44 = 124308921;
	uint64_t t9 = 371857294LLU;

	t9 = ((x41%(x42*x43))-x44);

	if (t9 != 18446744073585275462LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MAX;
	static uint8_t x46 = 8U;
	uint32_t x47 = UINT32_MAX;
	uint32_t x48 = UINT32_MAX;
	volatile int64_t t10 = 23174LL;

	t10 = ((x45%(x46*x47))-x48);

	if (t10 != -4294967264LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	volatile int16_t x50 = -1;
	int32_t x51 = -106977690;
	volatile int32_t x52 = -3426;
	static volatile int64_t t11 = -373461165LL;

	t11 = ((x49%(x50*x51))-x52);

	if (t11 != -80640362LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x53 = 45U;
	int16_t x54 = INT16_MIN;
	static uint8_t x55 = UINT8_MAX;
	uint8_t x56 = 126U;

	t12 = ((x53%(x54*x55))-x56);

	if (t12 != -81) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x62 = -6923744393655LL;
	int8_t x63 = 12;
	uint16_t x64 = 129U;
	volatile int64_t t13 = 389724936326862LL;

	t13 = ((x61%(x62*x63))-x64);

	if (t13 != 20576686080099LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x69 = UINT8_MAX;
	volatile int32_t x71 = 6102;

	t14 = ((x69%(x70*x71))-x72);

	if (t14 != 256) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x77 = 63326085486LL;
	static int8_t x78 = INT8_MIN;
	int16_t x79 = -1;
	volatile int32_t x80 = INT32_MAX;
	int64_t t15 = -999951LL;

	t15 = ((x77%(x78*x79))-x80);

	if (t15 != -2147483537LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x83 = -16358858312LL;
	static int8_t x84 = INT8_MAX;
	volatile int64_t t16 = -20939711611016475LL;

	t16 = ((x81%(x82*x83))-x84);

	if (t16 != -128LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = INT16_MIN;
	int64_t x90 = INT64_MIN;
	static uint64_t x91 = 45157549LLU;
	int8_t x92 = INT8_MAX;
	volatile uint64_t t17 = 56974882526LLU;

	t17 = ((x89%(x90*x91))-x92);

	if (t17 != 9223372036854742913LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = INT64_MIN;
	int8_t x98 = -8;
	uint32_t x99 = 10U;
	static volatile int8_t x100 = INT8_MIN;
	int64_t t18 = 184907LL;

	t18 = ((x97%(x98*x99))-x100);

	if (t18 != -3072LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x101 = -35834505262448LL;
	volatile uint16_t x103 = 1U;
	int16_t x104 = INT16_MIN;
	int64_t t19 = -63LL;

	t19 = ((x101%(x102*x103))-x104);

	if (t19 != -1593079152LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = 33412385;
	int32_t x106 = INT32_MIN;
	uint64_t x107 = 2159000551006173836LLU;
	uint64_t x108 = UINT64_MAX;

	t20 = ((x105%(x106*x107))-x108);

	if (t20 != 33412386LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x113 = UINT64_MAX;
	static uint64_t x114 = 2125981281LLU;

	t21 = ((x113%(x114*x115))-x116);

	if (t21 != 285607424948745331LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x118 = INT16_MIN;
	static volatile int64_t x119 = -1LL;
	static int32_t x120 = INT32_MIN;

	t22 = ((x117%(x118*x119))-x120);

	if (t22 != 2147465561LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x122 = 479872628U;
	int8_t x123 = INT8_MIN;
	int32_t x124 = INT32_MIN;
	uint32_t t23 = 67U;

	t23 = ((x121%(x122*x123))-x124);

	if (t23 != 2147483775U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x125 = UINT32_MAX;
	uint32_t x126 = UINT32_MAX;
	static int8_t x127 = 1;
	static int16_t x128 = INT16_MIN;

	t24 = ((x125%(x126*x127))-x128);

	if (t24 != 32768U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x129 = 1;
	uint32_t x130 = 26618U;
	volatile uint16_t x131 = 4890U;
	int16_t x132 = INT16_MAX;
	static volatile uint32_t t25 = 11U;

	t25 = ((x129%(x130*x131))-x132);

	if (t25 != 4294934530U) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x133 = INT64_MIN;
	int8_t x134 = -1;
	volatile int8_t x135 = -3;
	uint64_t x136 = 1871LLU;
	volatile uint64_t t26 = 6LLU;

	t26 = ((x133%(x134*x135))-x136);

	if (t26 != 18446744073709549743LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MIN;
	static uint16_t x140 = 29310U;
	int32_t t27 = -451367;

	t27 = ((x137%(x138*x139))-x140);

	if (t27 != -29438) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x141 = INT8_MIN;
	int8_t x142 = -1;
	volatile int64_t x143 = -1LL;
	volatile uint64_t x144 = 369834LLU;
	volatile uint64_t t28 = 10364265251182504LLU;

	t28 = ((x141%(x142*x143))-x144);

	if (t28 != 18446744073709181782LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = -1;
	volatile uint64_t x146 = 9809453LLU;
	static int64_t x148 = -229LL;
	volatile uint64_t t29 = 7234LLU;

	t29 = ((x145%(x146*x147))-x148);

	if (t29 != 9809681LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x157 = -1;
	int32_t x158 = -76;
	uint16_t x159 = UINT16_MAX;
	int16_t x160 = INT16_MIN;
	int32_t t30 = -2029;

	t30 = ((x157%(x158*x159))-x160);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x161 = -1;
	uint16_t x163 = 27U;
	int8_t x164 = INT8_MAX;

	t31 = ((x161%(x162*x163))-x164);

	if (t31 != 149695808LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x181 = 2U;
	static volatile int64_t x182 = -31710LL;
	int64_t x184 = INT64_MAX;
	static volatile uint64_t t32 = 13230822068956LLU;

	t32 = ((x181%(x182*x183))-x184);

	if (t32 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x192 = UINT32_MAX;
	static int64_t t33 = -1461688464794LL;

	t33 = ((x189%(x190*x191))-x192);

	if (t33 != -4294967288LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x201 = -396;
	int32_t x202 = -1;
	int8_t x204 = INT8_MIN;

	t34 = ((x201%(x202*x203))-x204);

	if (t34 != 80) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x205 = INT64_MIN;
	uint8_t x207 = UINT8_MAX;
	uint16_t x208 = 27476U;
	volatile int64_t t35 = 3LL;

	t35 = ((x205%(x206*x207))-x208);

	if (t35 != -61009LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x209 = 5U;
	int8_t x210 = -1;
	int64_t x211 = -3147853438398993193LL;
	int32_t x212 = INT32_MAX;
	static volatile int64_t t36 = -120284322931736LL;

	t36 = ((x209%(x210*x211))-x212);

	if (t36 != -2147483642LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x213 = 946;
	int32_t x214 = -1;
	static uint64_t x216 = 5429LLU;
	uint64_t t37 = 1321077LLU;

	t37 = ((x213%(x214*x215))-x216);

	if (t37 != 18446744073709547133LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x221 = UINT32_MAX;
	int8_t x222 = INT8_MIN;
	volatile int8_t x223 = INT8_MIN;
	uint32_t x224 = UINT32_MAX;
	volatile uint32_t t38 = 211677685U;

	t38 = ((x221%(x222*x223))-x224);

	if (t38 != 16384U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x229 = INT64_MIN;
	static int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MAX;
	int16_t x232 = INT16_MIN;
	static int64_t t39 = 0LL;

	t39 = ((x229%(x230*x231))-x232);

	if (t39 != -2064384LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x240 = UINT32_MAX;
	int64_t t40 = -3LL;

	t40 = ((x237%(x238*x239))-x240);

	if (t40 != -4294967295LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x241 = INT16_MAX;
	int8_t x242 = INT8_MIN;
	uint16_t x243 = UINT16_MAX;
	int64_t x244 = -565988237912451LL;
	int64_t t41 = -3563635835115LL;

	t41 = ((x241%(x242*x243))-x244);

	if (t41 != 565988237945218LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x249 = -3899748249LL;
	uint8_t x250 = 4U;
	int8_t x251 = INT8_MIN;
	uint8_t x252 = 1U;
	volatile int64_t t42 = -65436612621339838LL;

	t42 = ((x249%(x250*x251))-x252);

	if (t42 != -410LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x253 = INT16_MIN;
	volatile int8_t x254 = -1;
	int64_t x255 = 13825466530LL;
	volatile int64_t t43 = 5524463782LL;

	t43 = ((x253%(x254*x255))-x256);

	if (t43 != -33240LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x257 = 1;
	int8_t x259 = 7;
	static int64_t x260 = -219LL;
	int64_t t44 = -3296027979LL;

	t44 = ((x257%(x258*x259))-x260);

	if (t44 != 220LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x269 = INT16_MIN;
	static uint8_t x270 = UINT8_MAX;
	volatile uint32_t x271 = UINT32_MAX;
	static int32_t x272 = INT32_MIN;
	volatile uint32_t t45 = 125173U;

	t45 = ((x269%(x270*x271))-x272);

	if (t45 != 2147450880U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x274 = -1;
	uint16_t x275 = 51U;
	int16_t x276 = INT16_MIN;
	volatile int64_t t46 = 892628572464120LL;

	t46 = ((x273%(x274*x275))-x276);

	if (t46 != 32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x277 = -1;
	uint16_t x278 = 11U;
	int8_t x279 = 14;
	volatile int8_t x280 = -1;

	t47 = ((x277%(x278*x279))-x280);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x293 = -1;
	int16_t x294 = INT16_MAX;
	volatile uint32_t x295 = UINT32_MAX;
	static uint32_t x296 = UINT32_MAX;
	static volatile uint32_t t48 = 450613U;

	t48 = ((x293%(x294*x295))-x296);

	if (t48 != 32767U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x297 = 13U;
	uint64_t x299 = 59LLU;
	int32_t x300 = 4604;

	t49 = ((x297%(x298*x299))-x300);

	if (t49 != 18446744073709547025LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x301 = -1;
	static int8_t x302 = INT8_MAX;
	int16_t x304 = INT16_MAX;
	int32_t t50 = 836;

	t50 = ((x301%(x302*x303))-x304);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x309 = INT32_MAX;
	uint32_t x311 = UINT32_MAX;
	uint32_t x312 = 65478255U;

	t51 = ((x309%(x310*x311))-x312);

	if (t51 != 4229489168U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x313 = INT64_MIN;
	uint32_t x314 = 290U;
	static volatile int16_t x315 = -3;
	static int16_t x316 = INT16_MAX;
	volatile int64_t t52 = 0LL;

	t52 = ((x313%(x314*x315))-x316);

	if (t52 != -411217LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x317 = 17;
	static uint64_t x319 = UINT64_MAX;
	uint16_t x320 = 5U;
	volatile uint64_t t53 = 545288376753632LLU;

	t53 = ((x317%(x318*x319))-x320);

	if (t53 != 12LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x325 = 2U;
	int32_t x326 = 109;
	int16_t x328 = INT16_MIN;
	static volatile int32_t t54 = -1405;

	t54 = ((x325%(x326*x327))-x328);

	if (t54 != 32770) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x329 = INT32_MAX;
	int16_t x330 = INT16_MIN;
	int64_t x331 = -1001LL;
	uint16_t x332 = 1U;
	static volatile int64_t t55 = 34640399LL;

	t55 = ((x329%(x330*x331))-x332);

	if (t55 != 15433726LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x337 = -124911427;
	uint32_t x338 = UINT32_MAX;
	int16_t x339 = 1;

	t56 = ((x337%(x338*x339))-x340);

	if (t56 != 4170055997U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x345 = 1U;
	int16_t x346 = 1;

	t57 = ((x345%(x346*x347))-x348);

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x349 = INT32_MIN;
	volatile int64_t x350 = INT64_MAX;
	int8_t x351 = -1;
	static int16_t x352 = 1363;
	volatile int64_t t58 = -1748245644010826LL;

	t58 = ((x349%(x350*x351))-x352);

	if (t58 != -2147485011LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x353 = UINT64_MAX;
	int64_t x354 = -1LL;
	int64_t x355 = -1792657393808139430LL;
	int64_t x356 = INT64_MIN;
	uint64_t t59 = 796LLU;

	t59 = ((x353%(x354*x355))-x356);

	if (t59 != 9743542172482933123LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x357 = 637084320311357620LL;
	static int16_t x358 = INT16_MIN;
	static int16_t x359 = -523;
	int16_t x360 = -1;
	volatile int64_t t60 = -37631LL;

	t60 = ((x357%(x358*x359))-x360);

	if (t60 != 7319733LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x361 = -1;
	volatile uint8_t x362 = 3U;
	uint8_t x363 = 60U;
	int16_t x364 = INT16_MIN;
	volatile int32_t t61 = -383;

	t61 = ((x361%(x362*x363))-x364);

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x365 = 1;
	int16_t x366 = INT16_MIN;
	volatile int8_t x367 = -1;
	int32_t x368 = 261705119;

	t62 = ((x365%(x366*x367))-x368);

	if (t62 != -261705118) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x373 = 232U;
	int16_t x374 = -1;
	int16_t x376 = INT16_MIN;
	static int32_t t63 = 1;

	t63 = ((x373%(x374*x375))-x376);

	if (t63 != 32770) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x378 = 11U;
	volatile uint8_t x379 = 20U;
	volatile uint32_t t64 = 6122U;

	t64 = ((x377%(x378*x379))-x380);

	if (t64 != 1112U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x381 = -1LL;
	int16_t x382 = INT16_MIN;
	int32_t x384 = -1773822;
	volatile int64_t t65 = -155708141130LL;

	t65 = ((x381%(x382*x383))-x384);

	if (t65 != 1773821LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x385 = -1;
	int16_t x386 = -1;
	uint32_t x387 = 1696616U;
	static int16_t x388 = -12;
	static volatile uint32_t t66 = 374364735U;

	t66 = ((x385%(x386*x387))-x388);

	if (t66 != 1696627U) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x390 = INT64_MAX;
	int16_t x391 = -1;
	static volatile int16_t x392 = INT16_MIN;
	volatile int64_t t67 = -5486092054681LL;

	t67 = ((x389%(x390*x391))-x392);

	if (t67 != 29022LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x393 = UINT32_MAX;
	int8_t x394 = INT8_MAX;
	static int32_t x395 = -2;
	static volatile int32_t x396 = INT32_MIN;

	t68 = ((x393%(x394*x395))-x396);

	if (t68 != 2147483901U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x397 = 0U;
	int64_t x398 = INT64_MAX;
	volatile uint32_t x400 = UINT32_MAX;
	volatile int64_t t69 = 255505900013LL;

	t69 = ((x397%(x398*x399))-x400);

	if (t69 != -4294967295LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x401 = INT16_MIN;
	int16_t x402 = INT16_MIN;
	static int64_t t70 = 119887853805364641LL;

	t70 = ((x401%(x402*x403))-x404);

	if (t70 != -6340734407627024LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x405 = -1;
	uint32_t x406 = UINT32_MAX;
	uint16_t x407 = UINT16_MAX;
	uint16_t x408 = UINT16_MAX;

	t71 = ((x405%(x406*x407))-x408);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x409 = UINT64_MAX;
	uint8_t x411 = UINT8_MAX;
	static volatile uint64_t t72 = 3LLU;

	t72 = ((x409%(x410*x411))-x412);

	if (t72 != 983026LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x413 = 515498;
	static int16_t x414 = -9;
	volatile int32_t x415 = -257835;
	uint8_t x416 = 0U;
	volatile int32_t t73 = 2220229;

	t73 = ((x413%(x414*x415))-x416);

	if (t73 != 515498) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x417 = 63U;
	uint32_t x418 = UINT32_MAX;
	static uint8_t x419 = 9U;
	int8_t x420 = -1;
	uint32_t t74 = 82U;

	t74 = ((x417%(x418*x419))-x420);

	if (t74 != 64U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x426 = INT16_MIN;
	int64_t x427 = -1LL;
	int8_t x428 = -1;
	int64_t t75 = 154401342LL;

	t75 = ((x425%(x426*x427))-x428);

	if (t75 != 32768LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x429 = 11U;
	int8_t x430 = INT8_MIN;
	static int16_t x431 = 4;
	static uint32_t x432 = 196390172U;
	volatile uint32_t t76 = 0U;

	t76 = ((x429%(x430*x431))-x432);

	if (t76 != 4098577135U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x433 = -121;
	uint32_t x434 = 1676382441U;
	uint32_t x435 = 87514U;
	uint64_t x436 = UINT64_MAX;

	t77 = ((x433%(x434*x435))-x436);

	if (t77 != 559954974LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x437 = UINT16_MAX;
	int8_t x438 = -1;
	uint32_t x439 = UINT32_MAX;
	uint16_t x440 = 7U;
	uint32_t t78 = 242U;

	t78 = ((x437%(x438*x439))-x440);

	if (t78 != 4294967289U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x441 = 1;
	volatile int64_t x443 = 199LL;
	int64_t x444 = -4770811658088964LL;
	int64_t t79 = -4514142LL;

	t79 = ((x441%(x442*x443))-x444);

	if (t79 != 4770811658088965LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x446 = 6043956U;
	int32_t x448 = 7;
	static volatile int64_t t80 = -1059396777421399926LL;

	t80 = ((x445%(x446*x447))-x448);

	if (t80 != -3076431LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x458 = 114U;
	int8_t x459 = 12;

	t81 = ((x457%(x458*x459))-x460);

	if (t81 != 1024LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x466 = 512576468U;
	uint64_t x468 = 4311159482513283805LLU;

	t82 = ((x465%(x466*x467))-x468);

	if (t82 != 14135584591196269858LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x469 = INT32_MIN;
	int32_t x470 = -1;
	volatile uint64_t x471 = 33656407401LLU;
	int8_t x472 = INT8_MIN;
	volatile uint64_t t83 = 525308126454903587LLU;

	t83 = ((x469%(x470*x471))-x472);

	if (t83 != 31508923881LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x473 = UINT16_MAX;
	uint16_t x474 = 14U;
	int64_t x476 = INT64_MAX;
	int64_t t84 = -544767430482162LL;

	t84 = ((x473%(x474*x475))-x476);

	if (t84 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x481 = 2U;
	volatile uint8_t x482 = UINT8_MAX;
	uint32_t x483 = 22300061U;
	uint16_t x484 = 1919U;
	volatile uint32_t t85 = 800U;

	t85 = ((x481%(x482*x483))-x484);

	if (t85 != 4294965379U) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x485 = INT32_MAX;
	int16_t x487 = 7;
	int8_t x488 = INT8_MIN;
	volatile int32_t t86 = -50350;

	t86 = ((x485%(x486*x487))-x488);

	if (t86 != 150) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x489 = UINT16_MAX;
	uint64_t x490 = UINT64_MAX;
	uint64_t x491 = UINT64_MAX;
	volatile int8_t x492 = -51;
	uint64_t t87 = 30054346LLU;

	t87 = ((x489%(x490*x491))-x492);

	if (t87 != 51LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x494 = -1;
	static int32_t x495 = INT32_MAX;
	int8_t x496 = INT8_MIN;
	int64_t t88 = 186240747357980LL;

	t88 = ((x493%(x494*x495))-x496);

	if (t88 != 129LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x497 = -1;
	volatile uint16_t x498 = 17U;
	int16_t x499 = INT16_MAX;
	uint16_t x500 = 2U;
	volatile int32_t t89 = 59;

	t89 = ((x497%(x498*x499))-x500);

	if (t89 != -3) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x501 = 2060160;
	static volatile int8_t x502 = INT8_MIN;
	uint8_t x504 = 3U;
	int32_t t90 = -199201976;

	t90 = ((x501%(x502*x503))-x504);

	if (t90 != 11901) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x509 = INT32_MIN;
	static int64_t x510 = 184931498256458LL;
	int8_t x511 = -1;
	uint32_t x512 = 3884U;
	static volatile int64_t t91 = -550LL;

	t91 = ((x509%(x510*x511))-x512);

	if (t91 != -2147487532LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x513 = -1;
	static uint16_t x515 = UINT16_MAX;
	volatile int32_t x516 = INT32_MAX;

	t92 = ((x513%(x514*x515))-x516);

	if (t92 != -2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x517 = 4;
	int16_t x518 = INT16_MAX;
	int8_t x519 = -1;
	volatile int16_t x520 = INT16_MIN;
	int32_t t93 = 530;

	t93 = ((x517%(x518*x519))-x520);

	if (t93 != 32772) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x521 = 658U;
	int32_t x522 = INT32_MIN;
	static uint64_t x523 = UINT64_MAX;
	static volatile int32_t x524 = 1220;
	uint64_t t94 = 193277196657754LLU;

	t94 = ((x521%(x522*x523))-x524);

	if (t94 != 18446744073709551054LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x525 = INT16_MAX;
	volatile uint64_t x526 = 11LLU;
	int32_t x527 = INT32_MIN;
	volatile uint64_t t95 = 104168324741755810LLU;

	t95 = ((x525%(x526*x527))-x528);

	if (t95 != 32768LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x533 = -1;
	int64_t x534 = INT64_MAX;
	int16_t x535 = -1;
	uint8_t x536 = 0U;

	t96 = ((x533%(x534*x535))-x536);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x546 = UINT64_MAX;
	int16_t x547 = INT16_MAX;
	uint16_t x548 = 5493U;
	uint64_t t97 = 664LLU;

	t97 = ((x545%(x546*x547))-x548);

	if (t97 != 27273LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x554 = 223;
	static volatile int16_t x555 = INT16_MAX;
	int16_t x556 = INT16_MIN;
	static volatile int64_t t98 = -4720LL;

	t98 = ((x553%(x554*x555))-x556);

	if (t98 != -5930834LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x562 = UINT16_MAX;
	volatile int64_t x564 = INT64_MAX;

	t99 = ((x561%(x562*x563))-x564);

	if (t99 != -9223372036854448132LL) { NG(); } else { ; }
	
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

