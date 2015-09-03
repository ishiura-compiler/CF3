#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x8 = 767703406;
uint64_t t1 = 1077791062635LLU;
volatile int64_t x9 = INT64_MIN;
int32_t x17 = INT32_MAX;
uint32_t x24 = UINT32_MAX;
static volatile uint64_t x26 = UINT64_MAX;
int16_t x31 = INT16_MIN;
int32_t t6 = -864986752;
uint32_t x33 = 101979U;
volatile int8_t x35 = INT8_MIN;
uint64_t t8 = 93553LLU;
int32_t x49 = -2799930;
volatile uint8_t x50 = 6U;
volatile int16_t x51 = INT16_MIN;
int32_t x60 = -1;
uint8_t x64 = UINT8_MAX;
uint64_t x67 = 4890931692LLU;
int16_t x68 = INT16_MIN;
int32_t x79 = -2186;
static int64_t t17 = 232791962920LL;
int64_t t19 = -166LL;
int16_t x98 = -2;
int32_t t21 = -691135;
static volatile int8_t x114 = -1;
uint16_t x121 = 3U;
uint64_t x128 = 5600863957880208385LLU;
uint32_t x147 = UINT32_MAX;
volatile int16_t x158 = 62;
uint8_t x159 = 14U;
volatile uint8_t x160 = UINT8_MAX;
uint8_t x162 = UINT8_MAX;
volatile int8_t x177 = 1;
uint8_t x178 = UINT8_MAX;
int8_t x184 = -1;
static volatile int8_t x192 = INT8_MIN;
uint8_t x193 = 47U;
static uint16_t x209 = 28372U;
volatile int64_t t43 = 31LL;
int32_t x219 = -10605;
int8_t x233 = -1;
int16_t x236 = INT16_MAX;
int32_t x237 = -55;
int8_t x250 = INT8_MIN;
int32_t t51 = -97610;
uint32_t x262 = UINT32_MAX;
uint32_t x263 = 29U;
static int32_t x276 = INT32_MIN;
uint64_t x286 = 10LLU;
int8_t x293 = INT8_MIN;
volatile int8_t x295 = INT8_MIN;
static uint8_t x297 = 5U;
int8_t x301 = -1;
int8_t x306 = -1;
volatile uint32_t t60 = 212545U;
uint32_t x314 = 399U;
uint32_t t64 = 82377440U;
static volatile uint64_t t65 = 380240522063982645LLU;
int64_t x330 = INT64_MIN;
uint32_t x346 = 17U;
int8_t x359 = INT8_MAX;
int64_t x368 = -1LL;
volatile int64_t x370 = 46468LL;
volatile int64_t t73 = 56LL;
volatile int64_t t75 = -1487LL;
int8_t x390 = -1;
static uint32_t x392 = 15U;
int64_t x399 = 380634970012517478LL;
int64_t x402 = 43116403523734LL;
uint16_t x404 = 7U;
uint64_t t79 = 355672911LLU;
int32_t x409 = -1;
volatile uint32_t t82 = 5405U;
int32_t x421 = -3;
volatile int8_t x427 = -1;
int64_t x431 = 4LL;
uint32_t t86 = 145U;
uint64_t x439 = 3589383562223798LLU;
static uint32_t x443 = UINT32_MAX;
volatile int64_t x468 = INT64_MIN;
uint32_t x470 = 4U;
uint64_t x484 = UINT64_MAX;
int64_t x488 = -1LL;
uint16_t x490 = 8448U;
uint16_t x491 = UINT16_MAX;
static int32_t x492 = 1;
int32_t x493 = -1;
int32_t x494 = INT32_MAX;


void f0(void) {
	volatile uint64_t x1 = 59836383832LLU;
	volatile uint8_t x2 = 1U;
	int16_t x3 = INT16_MIN;
	int32_t x4 = INT32_MIN;
	uint64_t t0 = 358LLU;

	t0 = (x1*((x2-x3)|x4));

	if (t0 != 631513459757072984LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 4U;
	volatile uint64_t x6 = 3609740868035908LLU;
	int8_t x7 = -1;

	t1 = (x5*((x6-x7)|x8));

	if (t1 != 14438966005527996LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 2489436224694LLU;
	static volatile int16_t x11 = 453;
	static int16_t x12 = INT16_MIN;
	uint64_t t2 = 1366936612346889LLU;

	t2 = (x9*((x10-x11)|x12));

	if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x18 = -1LL;
	static volatile int32_t x19 = INT32_MAX;
	volatile uint8_t x20 = 97U;
	int64_t t3 = 2764465319632094LL;

	t3 = (x17*((x18-x19)|x20));

	if (t3 != -4611685807973990497LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = INT8_MAX;
	uint16_t x22 = 23586U;
	int16_t x23 = INT16_MIN;
	volatile uint32_t t4 = 1U;

	t4 = (x21*((x22-x23)|x24));

	if (t4 != 4294967169U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 2U;
	int16_t x27 = -441;
	volatile int16_t x28 = INT16_MIN;
	uint64_t t5 = 8105460565119LLU;

	t5 = (x25*((x26-x27)|x28));

	if (t5 != 18446744073709486960LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MAX;
	int32_t x30 = -1;
	volatile uint8_t x32 = 1U;

	t6 = (x29*((x30-x31)|x32));

	if (t6 != 4161409) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x34 = INT8_MIN;
	int32_t x36 = 46800836;
	uint32_t t7 = 14948265U;

	t7 = (x33*((x34-x35)|x36));

	if (t7 != 993788588U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MIN;
	uint64_t x42 = 16804814153715275LLU;
	uint8_t x43 = 7U;
	int16_t x44 = INT16_MIN;

	t8 = (x41*((x42-x43)|x44));

	if (t8 != 62526133895168LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x45 = INT16_MIN;
	int16_t x46 = -1;
	int32_t x47 = INT32_MAX;
	volatile int64_t x48 = INT64_MAX;
	static int64_t t9 = 22090620588709656LL;

	t9 = (x45*((x46-x47)|x48));

	if (t9 != 32768LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x52 = -424LL;
	int64_t t10 = -187218716787137427LL;

	t10 = (x49*((x50-x51)|x52));

	if (t10 != 1170370740LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -1;
	static uint32_t x54 = 3U;
	int8_t x55 = INT8_MIN;
	volatile uint16_t x56 = UINT16_MAX;
	volatile uint32_t t11 = 63U;

	t11 = (x53*((x54-x55)|x56));

	if (t11 != 4294901761U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 2U;
	int64_t x58 = -1LL;
	int64_t x59 = INT64_MIN;
	int64_t t12 = -999219LL;

	t12 = (x57*((x58-x59)|x60));

	if (t12 != -2LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -1LL;
	int8_t x62 = INT8_MIN;
	uint32_t x63 = 10U;
	volatile int64_t t13 = -115449564115LL;

	t13 = (x61*((x62-x63)|x64));

	if (t13 != -4294967295LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x66 = 2453153U;
	volatile uint64_t t14 = 2461237391854353542LLU;

	t14 = (x65*((x66-x67)|x68));

	if (t14 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 2008U;
	int16_t x70 = -31;
	int64_t x71 = -1LL;
	uint8_t x72 = 3U;
	int64_t t15 = 3LL;

	t15 = (x69*((x70-x71)|x72));

	if (t15 != -58232LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x73 = INT8_MAX;
	static uint32_t x74 = 0U;
	uint32_t x75 = 102U;
	int16_t x76 = -8096;
	uint32_t t16 = 2096083271U;

	t16 = (x73*((x74-x75)|x76));

	if (t16 != 4294966534U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = 30882585499613LL;
	int8_t x78 = INT8_MIN;
	int16_t x80 = -1;

	t17 = (x77*((x78-x79)|x80));

	if (t17 != -30882585499613LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MIN;
	static uint16_t x82 = UINT16_MAX;
	uint8_t x83 = 0U;
	uint32_t x84 = 0U;
	uint32_t t18 = 1603U;

	t18 = (x81*((x82-x83)|x84));

	if (t18 != 2147516416U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = UINT16_MAX;
	uint32_t x90 = 1U;
	static volatile int32_t x91 = -1;
	int64_t x92 = -1LL;

	t19 = (x89*((x90-x91)|x92));

	if (t19 != -65535LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x93 = -1;
	static int16_t x94 = -1;
	uint64_t x95 = UINT64_MAX;
	uint8_t x96 = UINT8_MAX;
	uint64_t t20 = 120528361LLU;

	t20 = (x93*((x94-x95)|x96));

	if (t20 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x97 = 6;
	volatile int16_t x99 = INT16_MIN;
	int16_t x100 = INT16_MIN;

	t21 = (x97*((x98-x99)|x100));

	if (t21 != -12) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = 1853515010503347139LL;
	volatile int16_t x102 = INT16_MAX;
	int64_t x103 = 155463331175917463LL;
	static uint64_t x104 = UINT64_MAX;
	uint64_t t22 = 57964493122LLU;

	t22 = (x101*((x102-x103)|x104));

	if (t22 != 16593229063206204477LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x109 = UINT64_MAX;
	int16_t x110 = 47;
	int32_t x111 = 171;
	int32_t x112 = INT32_MAX;
	volatile uint64_t t23 = 858134LLU;

	t23 = (x109*((x110-x111)|x112));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = 0U;
	uint64_t x115 = UINT64_MAX;
	static volatile int16_t x116 = 2422;
	volatile uint64_t t24 = 357352524LLU;

	t24 = (x113*((x114-x115)|x116));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x117 = -1LL;
	int32_t x118 = INT32_MIN;
	uint32_t x119 = UINT32_MAX;
	int8_t x120 = INT8_MIN;
	static int64_t t25 = -280485394269878976LL;

	t25 = (x117*((x118-x119)|x120));

	if (t25 != -4294967169LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x122 = 237312572U;
	int8_t x123 = -1;
	uint64_t x124 = 25LLU;
	static uint64_t t26 = 27381337819LLU;

	t26 = (x121*((x122-x123)|x124));

	if (t26 != 711937719LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = -1LL;
	static int32_t x126 = 50215;
	int16_t x127 = 0;
	uint64_t t27 = 25595323616235686LLU;

	t27 = (x125*((x126-x127)|x128));

	if (t27 != 12845880115829343193LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = -1;
	int16_t x130 = INT16_MIN;
	volatile int64_t x131 = INT64_MIN;
	uint16_t x132 = 36U;
	int64_t t28 = 49048185805103LL;

	t28 = (x129*((x130-x131)|x132));

	if (t28 != -9223372036854743076LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x133 = -1;
	int16_t x134 = INT16_MAX;
	volatile uint8_t x135 = 4U;
	uint8_t x136 = 30U;
	int32_t t29 = 649;

	t29 = (x133*((x134-x135)|x136));

	if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = 498491;
	int8_t x138 = 5;
	int32_t x139 = -2;
	static int32_t x140 = -2;
	volatile int32_t t30 = 139;

	t30 = (x137*((x138-x139)|x140));

	if (t30 != -498491) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = -1;
	uint16_t x142 = 59U;
	int32_t x143 = -321709;
	int16_t x144 = INT16_MIN;
	volatile int32_t t31 = -8211357;

	t31 = (x141*((x142-x143)|x144));

	if (t31 != 5912) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = -1;
	uint16_t x146 = 6006U;
	int32_t x148 = 5654;
	volatile uint32_t t32 = 34714562U;

	t32 = (x145*((x146-x147)|x148));

	if (t32 != 4294961289U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x149 = 3567U;
	int64_t x150 = -8682539208LL;
	int64_t x151 = INT64_MIN;
	int16_t x152 = INT16_MIN;
	static volatile int64_t t33 = -108LL;

	t33 = (x149*((x150-x151)|x152));

	if (t33 != -8018616LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x153 = 59LL;
	int32_t x154 = -1;
	uint16_t x155 = 1841U;
	volatile uint16_t x156 = UINT16_MAX;
	volatile int64_t t34 = -10536LL;

	t34 = (x153*((x154-x155)|x156));

	if (t34 != -59LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x157 = INT8_MIN;
	static volatile int32_t t35 = 59;

	t35 = (x157*((x158-x159)|x160));

	if (t35 != -32640) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = INT16_MAX;
	int16_t x163 = -1;
	uint32_t x164 = 1675981156U;
	static volatile uint32_t t36 = 54U;

	t36 = (x161*((x162-x163)|x164));

	if (t36 != 1422691996U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x179 = 1U;
	uint16_t x180 = 32169U;
	int32_t t37 = 19870792;

	t37 = (x177*((x178-x179)|x180));

	if (t37 != 32255) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x181 = UINT64_MAX;
	static int64_t x182 = INT64_MIN;
	int8_t x183 = INT8_MIN;
	uint64_t t38 = 12225969LLU;

	t38 = (x181*((x182-x183)|x184));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x189 = INT8_MIN;
	static int16_t x190 = INT16_MAX;
	volatile uint16_t x191 = UINT16_MAX;
	int32_t t39 = -859870;

	t39 = (x189*((x190-x191)|x192));

	if (t39 != 16384) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x194 = -1;
	int32_t x195 = INT32_MAX;
	int16_t x196 = INT16_MIN;
	int32_t t40 = 38;

	t40 = (x193*((x194-x195)|x196));

	if (t40 != -1540096) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x197 = UINT64_MAX;
	int32_t x198 = -1;
	volatile int32_t x199 = -1;
	static int16_t x200 = INT16_MIN;
	uint64_t t41 = 82090710561LLU;

	t41 = (x197*((x198-x199)|x200));

	if (t41 != 32768LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x205 = 7742406;
	uint16_t x206 = 280U;
	uint64_t x207 = 241617563LLU;
	int8_t x208 = INT8_MIN;
	volatile uint64_t t42 = 40108635305LLU;

	t42 = (x205*((x206-x207)|x208));

	if (t42 != 18446744073686324398LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x210 = 12040;
	int64_t x211 = -1LL;
	int8_t x212 = 4;

	t43 = (x209*((x210-x211)|x212));

	if (t43 != 341740740LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x217 = -1;
	uint64_t x218 = 516099860993710485LLU;
	static volatile uint16_t x220 = UINT16_MAX;
	volatile uint64_t t44 = 915LLU;

	t44 = (x217*((x218-x219)|x220));

	if (t44 != 17930644212715814913LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x234 = INT16_MIN;
	uint32_t x235 = UINT32_MAX;
	static uint32_t t45 = 366740U;

	t45 = (x233*((x234-x235)|x236));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x238 = UINT32_MAX;
	uint64_t x239 = UINT64_MAX;
	static uint16_t x240 = 4U;
	uint64_t t46 = 4278888LLU;

	t46 = (x237*((x238-x239)|x240));

	if (t46 != 18446743837486350116LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x241 = 508U;
	static uint32_t x242 = 250055U;
	static volatile uint32_t x243 = 10104474U;
	int64_t x244 = -1LL;
	int64_t t47 = 141538137072LL;

	t47 = (x241*((x242-x243)|x244));

	if (t47 != -508LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x245 = UINT8_MAX;
	int64_t x246 = -1LL;
	uint16_t x247 = UINT16_MAX;
	int16_t x248 = 0;
	int64_t t48 = -509790LL;

	t48 = (x245*((x246-x247)|x248));

	if (t48 != -16711680LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x249 = 0;
	volatile int32_t x251 = INT32_MIN;
	volatile uint64_t x252 = 120LLU;
	uint64_t t49 = 61989302786LLU;

	t49 = (x249*((x250-x251)|x252));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x253 = UINT64_MAX;
	static volatile uint64_t x254 = 884857444891LLU;
	int8_t x255 = 3;
	volatile uint64_t x256 = 145LLU;
	uint64_t t50 = 27519560225LLU;

	t50 = (x253*((x254-x255)|x256));

	if (t50 != 18446743188852106599LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x257 = -1;
	static uint16_t x258 = 3U;
	static volatile int16_t x259 = INT16_MAX;
	int8_t x260 = -12;

	t51 = (x257*((x258-x259)|x260));

	if (t51 != 12) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x261 = 841497U;
	uint64_t x264 = 23728552052599LLU;
	static volatile uint64_t t52 = 70LLU;

	t52 = (x261*((x262-x263)|x264));

	if (t52 != 1521722499401543711LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x273 = 6569U;
	int8_t x274 = INT8_MIN;
	int16_t x275 = INT16_MIN;
	volatile uint32_t t53 = 0U;

	t53 = (x273*((x274-x275)|x276));

	if (t53 != 2361895808U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x277 = -1;
	static int64_t x278 = INT64_MIN;
	int64_t x279 = -287413LL;
	int16_t x280 = INT16_MIN;
	int64_t t54 = -67860724653LL;

	t54 = (x277*((x278-x279)|x280));

	if (t54 != 7499LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x285 = 245090U;
	uint32_t x287 = 62U;
	volatile int64_t x288 = 38353944125444605LL;
	uint64_t t55 = 10LLU;

	t55 = (x285*((x286-x287)|x288));

	if (t55 != 18446744073708816346LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x289 = INT8_MAX;
	volatile int8_t x290 = -1;
	int32_t x291 = 1;
	static int16_t x292 = INT16_MIN;
	int32_t t56 = 771;

	t56 = (x289*((x290-x291)|x292));

	if (t56 != -254) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x294 = 20859727LL;
	int32_t x296 = -1103025;
	volatile int64_t t57 = 1775LL;

	t57 = (x293*((x294-x295)|x296));

	if (t57 != 4855936LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x298 = UINT32_MAX;
	uint16_t x299 = 0U;
	int16_t x300 = -1;
	volatile uint32_t t58 = 233U;

	t58 = (x297*((x298-x299)|x300));

	if (t58 != 4294967291U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x302 = INT8_MAX;
	int32_t x303 = INT32_MAX;
	volatile uint64_t x304 = 3LLU;
	static uint64_t t59 = 68032LLU;

	t59 = (x301*((x302-x303)|x304));

	if (t59 != 2147483517LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x305 = INT16_MIN;
	uint32_t x307 = UINT32_MAX;
	volatile int8_t x308 = -1;

	t60 = (x305*((x306-x307)|x308));

	if (t60 != 32768U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x309 = -551;
	uint64_t x310 = 1290398246754LLU;
	static int32_t x311 = INT32_MIN;
	volatile int16_t x312 = INT16_MIN;
	static uint64_t t61 = 36206LLU;

	t61 = (x309*((x310-x311)|x312));

	if (t61 != 12499986LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x313 = INT32_MIN;
	volatile int16_t x315 = -1;
	uint16_t x316 = 13U;
	static volatile uint32_t t62 = 6210U;

	t62 = (x313*((x314-x315)|x316));

	if (t62 != 2147483648U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x317 = 28;
	uint32_t x318 = 105785869U;
	uint32_t x319 = UINT32_MAX;
	uint32_t x320 = 7U;
	volatile uint32_t t63 = 339101U;

	t63 = (x317*((x318-x319)|x320));

	if (t63 != 2962004388U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x321 = UINT32_MAX;
	static int16_t x322 = -1;
	int32_t x323 = INT32_MAX;
	int16_t x324 = INT16_MAX;

	t64 = (x321*((x322-x323)|x324));

	if (t64 != 2147450881U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x325 = 3U;
	static int64_t x326 = INT64_MIN;
	volatile uint64_t x327 = 24604990958923016LLU;
	int8_t x328 = INT8_MIN;

	t65 = (x325*((x326-x327)|x328));

	if (t65 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x329 = -157027591LL;
	static int16_t x331 = INT16_MIN;
	static int16_t x332 = -1;
	volatile int64_t t66 = -1491771355600444090LL;

	t66 = (x329*((x330-x331)|x332));

	if (t66 != 157027591LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x333 = INT8_MIN;
	int32_t x334 = INT32_MIN;
	int8_t x335 = INT8_MIN;
	volatile uint32_t x336 = 315542U;
	volatile uint32_t t67 = 103057488U;

	t67 = (x333*((x334-x335)|x336));

	if (t67 != 4254577920U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x337 = UINT8_MAX;
	static int16_t x338 = INT16_MAX;
	int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MIN;
	int32_t t68 = -16951;

	t68 = (x337*((x338-x339)|x340));

	if (t68 != -8323455) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x345 = 4U;
	int32_t x347 = INT32_MIN;
	int16_t x348 = INT16_MIN;
	volatile uint32_t t69 = 418501U;

	t69 = (x345*((x346-x347)|x348));

	if (t69 != 4294836292U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x349 = INT64_MAX;
	int32_t x350 = INT32_MIN;
	uint64_t x351 = 169617LLU;
	int32_t x352 = -905669281;
	static volatile uint64_t t70 = 8822126008546218LLU;

	t70 = (x349*((x350-x351)|x352));

	if (t70 != 9223372036854907521LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x357 = 0;
	int8_t x358 = -38;
	uint8_t x360 = 11U;
	static volatile int32_t t71 = 119955341;

	t71 = (x357*((x358-x359)|x360));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x365 = INT64_MAX;
	uint8_t x366 = 12U;
	uint8_t x367 = 1U;
	volatile int64_t t72 = -10479LL;

	t72 = (x365*((x366-x367)|x368));

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x369 = INT16_MAX;
	int32_t x371 = -721428;
	int8_t x372 = INT8_MAX;

	t73 = (x369*((x370-x371)|x372));

	if (t73 != 25165023233LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x373 = -1LL;
	static int8_t x374 = -6;
	uint32_t x375 = 124587813U;
	uint8_t x376 = 13U;
	static int64_t t74 = 12LL;

	t74 = (x373*((x374-x375)|x376));

	if (t74 != -4170379485LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x381 = -1;
	int8_t x382 = 0;
	static uint32_t x383 = UINT32_MAX;
	int64_t x384 = INT64_MAX;

	t75 = (x381*((x382-x383)|x384));

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x389 = -1;
	uint32_t x391 = UINT32_MAX;
	uint32_t t76 = 329U;

	t76 = (x389*((x390-x391)|x392));

	if (t76 != 4294967281U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x393 = 6969U;
	int8_t x394 = INT8_MAX;
	uint8_t x395 = UINT8_MAX;
	int32_t x396 = INT32_MAX;
	uint32_t t77 = 109U;

	t77 = (x393*((x394-x395)|x396));

	if (t77 != 4294960327U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x397 = 48U;
	int32_t x398 = 360;
	volatile int16_t x400 = -413;
	volatile int64_t t78 = 493129979LL;

	t78 = (x397*((x398-x399)|x400));

	if (t78 != -7536LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x401 = 1575LLU;
	int16_t x403 = 7984;

	t79 = (x401*((x402-x403)|x404));

	if (t79 != 67908335537307825LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x410 = -1;
	int16_t x411 = INT16_MIN;
	int8_t x412 = -1;
	volatile int32_t t80 = -3553031;

	t80 = (x409*((x410-x411)|x412));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x413 = INT16_MAX;
	int64_t x414 = -73518776446LL;
	int64_t x415 = 32983429399LL;
	int32_t x416 = INT32_MIN;
	int64_t t81 = 20LL;

	t81 = (x413*((x414-x415)|x416));

	if (t81 != -41794540916331LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x417 = UINT32_MAX;
	int16_t x418 = -1;
	uint16_t x419 = 5U;
	volatile int16_t x420 = -1;

	t82 = (x417*((x418-x419)|x420));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x422 = 6U;
	int16_t x423 = 754;
	uint16_t x424 = UINT16_MAX;
	int32_t t83 = -370322;

	t83 = (x421*((x422-x423)|x424));

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x425 = -1;
	volatile int16_t x426 = INT16_MIN;
	int64_t x428 = 32415108LL;
	volatile int64_t t84 = -4593468981603613922LL;

	t84 = (x425*((x426-x427)|x428));

	if (t84 != 25211LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x429 = 10U;
	int8_t x430 = -1;
	int32_t x432 = 2031;
	int64_t t85 = -1297911LL;

	t85 = (x429*((x430-x431)|x432));

	if (t85 != -10LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x433 = -23;
	int16_t x434 = -49;
	volatile uint32_t x435 = 365U;
	uint16_t x436 = UINT16_MAX;

	t86 = (x433*((x434-x435)|x436));

	if (t86 != 23U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x437 = INT32_MIN;
	uint8_t x438 = 6U;
	int8_t x440 = 7;
	volatile uint64_t t87 = 187326369LLU;

	t87 = (x437*((x438-x439)|x440));

	if (t87 != 4474379369275457536LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x441 = 6;
	uint64_t x442 = 5LLU;
	static int32_t x444 = INT32_MIN;
	uint64_t t88 = 10353LLU;

	t88 = (x441*((x442-x443)|x444));

	if (t88 != 18446744060824649764LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x449 = UINT32_MAX;
	uint64_t x450 = UINT64_MAX;
	uint16_t x451 = UINT16_MAX;
	static volatile uint64_t x452 = 161154059049092640LLU;
	uint64_t t89 = 1386217LLU;

	t89 = (x449*((x450-x451)|x452));

	if (t89 != 18446680439474108896LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x453 = INT8_MIN;
	static uint8_t x454 = 30U;
	uint64_t x455 = 66574770LLU;
	volatile int8_t x456 = INT8_MAX;
	uint64_t t90 = 426414063670206LLU;

	t90 = (x453*((x454-x455)|x456));

	if (t90 != 8521564288LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x461 = -2;
	static uint64_t x462 = 101725LLU;
	int8_t x463 = -1;
	volatile int16_t x464 = INT16_MIN;
	uint64_t t91 = 0LLU;

	t91 = (x461*((x462-x463)|x464));

	if (t91 != 58692LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x465 = 26U;
	int16_t x466 = INT16_MIN;
	int16_t x467 = 78;
	static int64_t t92 = 32630430784LL;

	t92 = (x465*((x466-x467)|x468));

	if (t92 != -853996LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x469 = INT64_MIN;
	static int32_t x471 = -1198335;
	uint64_t x472 = 4168617500674LLU;
	uint64_t t93 = 6LLU;

	t93 = (x469*((x470-x471)|x472));

	if (t93 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x477 = -1;
	static uint16_t x478 = 1U;
	int8_t x479 = INT8_MIN;
	int64_t x480 = -2981812LL;
	volatile int64_t t94 = -28329372190217868LL;

	t94 = (x477*((x478-x479)|x480));

	if (t94 != 2981683LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x481 = UINT8_MAX;
	int8_t x482 = 0;
	int64_t x483 = -25LL;
	uint64_t t95 = 13685LLU;

	t95 = (x481*((x482-x483)|x484));

	if (t95 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x485 = 0;
	int32_t x486 = INT32_MIN;
	int32_t x487 = INT32_MIN;
	int64_t t96 = -12035LL;

	t96 = (x485*((x486-x487)|x488));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x489 = INT8_MIN;
	int32_t t97 = 86444;

	t97 = (x489*((x490-x491)|x492));

	if (t97 != 7307136) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x495 = 43117967U;
	int32_t x496 = 465;
	uint32_t t98 = 17507481U;

	t98 = (x493*((x494-x495)|x496));

	if (t98 != 2190601231U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x497 = -2;
	uint64_t x498 = 154403187656LLU;
	int64_t x499 = -244754812LL;
	volatile int32_t x500 = 286;
	uint64_t t99 = 269227739523856LLU;

	t99 = (x497*((x498-x499)|x500));

	if (t99 != 18446743764413666628LLU) { NG(); } else { ; }
	
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

