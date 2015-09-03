#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
volatile int32_t x9 = -1;
volatile uint32_t x10 = 3946553U;
volatile int32_t t4 = 1055;
int16_t x29 = -1;
int32_t x32 = INT32_MAX;
int64_t t6 = -619068171LL;
uint32_t x36 = UINT32_MAX;
static volatile int64_t x38 = INT64_MAX;
int16_t x40 = INT16_MIN;
int64_t t8 = -3117303432244236LL;
int32_t x46 = 15348435;
volatile uint8_t x51 = UINT8_MAX;
int32_t x54 = INT32_MAX;
int16_t x56 = 11;
volatile int64_t t11 = 730LL;
volatile int64_t t13 = -28144187951294LL;
static int16_t x68 = 10608;
int64_t t14 = -11324851403LL;
volatile int32_t x69 = -11774866;
int8_t x80 = -1;
uint8_t x89 = 6U;
int64_t x90 = -1321166745999595LL;
volatile int64_t t19 = -563092433210205856LL;
static int64_t x95 = -279354262338084LL;
volatile uint64_t x102 = 6461671LLU;
volatile uint64_t t21 = 14402359074807LLU;
volatile int64_t x109 = -1803976804072LL;
uint64_t t25 = 121LLU;
int8_t x135 = -1;
volatile uint64_t t27 = 257675981869736305LLU;
int32_t x140 = -1;
volatile int64_t t28 = -14375751917768607LL;
static int64_t x150 = -1LL;
int8_t x159 = INT8_MIN;
uint16_t x165 = 2U;
int8_t x168 = -1;
int32_t x173 = -1;
uint64_t t36 = 202283309260306990LLU;
int32_t x191 = 6;
static uint16_t x192 = 988U;
uint64_t t39 = 190526363485LLU;
uint16_t x210 = UINT16_MAX;
static int32_t x223 = INT32_MAX;
uint16_t x224 = UINT16_MAX;
uint64_t t45 = 115LLU;
volatile int64_t x238 = INT64_MAX;
volatile uint64_t t46 = 15720114021LLU;
uint8_t x241 = 1U;
static int32_t x245 = -1;
int64_t x248 = INT64_MAX;
volatile int8_t x268 = -20;
int8_t x272 = -5;
int64_t x275 = -1LL;
uint32_t x277 = UINT32_MAX;
uint64_t x278 = 409092LLU;
int64_t x281 = -1LL;
volatile uint64_t t54 = 379553392LLU;
volatile int64_t x288 = 108787455812LL;
int8_t x291 = INT8_MIN;
uint8_t x293 = 8U;
volatile int8_t x304 = -1;
static uint16_t x305 = 9718U;
static volatile int16_t x314 = INT16_MIN;
uint32_t t63 = 183618U;
int16_t x327 = INT16_MIN;
int16_t x333 = -505;
int32_t t65 = 45;
int16_t x338 = INT16_MAX;
int8_t x347 = INT8_MAX;
int64_t x351 = -2190566650112730011LL;
volatile int64_t x356 = INT64_MAX;
static volatile int32_t t71 = 1;
static int32_t x369 = INT32_MIN;
int64_t x372 = 32015423LL;
static volatile uint64_t x376 = UINT64_MAX;
int8_t x379 = INT8_MIN;
int32_t x380 = INT32_MIN;
int64_t t76 = -7LL;
volatile uint64_t x393 = 320306544LLU;
uint64_t x395 = 3803384816LLU;
static int16_t x396 = 1577;
int16_t x397 = 16;
int32_t x398 = -1;
static int8_t x400 = INT8_MAX;
volatile int64_t t79 = 1LL;
static uint64_t x402 = 340506427586791LLU;
volatile uint64_t t81 = 5739826813812738895LLU;
uint8_t x416 = 11U;
uint64_t x417 = UINT64_MAX;
int32_t x422 = -1;
uint32_t x443 = UINT32_MAX;
volatile uint16_t x444 = 4U;
int64_t x448 = INT64_MIN;
static int16_t x449 = 0;
int16_t x451 = -191;
volatile int64_t t91 = -53988660462695275LL;
static uint64_t x455 = UINT64_MAX;
int16_t x464 = INT16_MAX;
int32_t x465 = 1;
uint8_t x466 = 109U;
int16_t x481 = INT16_MAX;
int8_t x485 = 25;


void f0(void) {
	static uint32_t x2 = 218U;
	uint8_t x3 = 32U;
	int8_t x4 = INT8_MIN;
	volatile uint32_t t0 = 2U;

	t0 = (x1*((x2%x3)|x4));

	if (t0 != 4294954342U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 11U;
	static int16_t x6 = -1;
	int16_t x7 = INT16_MAX;
	int16_t x8 = INT16_MAX;
	static int32_t t1 = 194109839;

	t1 = (x5*((x6%x7)|x8));

	if (t1 != -11) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = -12;
	uint16_t x12 = UINT16_MAX;
	static uint32_t t2 = 50366375U;

	t2 = (x9*((x10%x11)|x12));

	if (t2 != 4290969601U) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	static uint32_t x14 = 44227U;
	static uint32_t x15 = 15537177U;
	int32_t x16 = INT32_MIN;
	volatile uint32_t t3 = 859U;

	t3 = (x13*((x14%x15)|x16));

	if (t3 != 2845736960U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int8_t x18 = INT8_MIN;
	int8_t x19 = INT8_MAX;
	int32_t x20 = INT32_MAX;

	t4 = (x17*((x18%x19)|x20));

	if (t4 != 128) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static volatile int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MAX;
	volatile int64_t x24 = INT64_MIN;
	volatile int64_t t5 = 2118042476562LL;

	t5 = (x21*((x22%x23)|x24));

	if (t5 != 16384LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = 46894300LL;
	uint16_t x31 = 6639U;

	t6 = (x29*((x30%x31)|x32));

	if (t6 != -2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = -1;
	int8_t x34 = -1;
	static uint16_t x35 = 26550U;
	uint32_t t7 = 28601U;

	t7 = (x33*((x34%x35)|x36));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x37 = UINT8_MAX;
	uint8_t x39 = UINT8_MAX;

	t8 = (x37*((x38%x39)|x40));

	if (t8 != -8323455LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 5161U;
	static int16_t x47 = INT16_MIN;
	int64_t x48 = 1831131LL;
	volatile int64_t t9 = 1LL;

	t9 = (x45*((x46%x47)|x48));

	if (t9 != 9453109523LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	volatile int8_t x50 = -1;
	uint8_t x52 = 14U;
	static int32_t t10 = 105;

	t10 = (x49*((x50%x51)|x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MIN;
	int64_t x55 = -22376329891LL;

	t11 = (x53*((x54%x55)|x56));

	if (t11 != -4611686016279904256LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	int32_t x58 = INT32_MIN;
	int16_t x59 = -282;
	static int32_t x60 = 196;
	int32_t t12 = 734978527;

	t12 = (x57*((x58%x59)|x60));

	if (t12 != 512) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -1010476237;
	volatile int32_t x62 = -1;
	int16_t x63 = INT16_MAX;
	int64_t x64 = 580435252746562281LL;

	t13 = (x61*((x62%x63)|x64));

	if (t13 != 1010476237LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = 223499425126LL;
	int16_t x66 = 710;
	int32_t x67 = INT32_MIN;

	t14 = (x65*((x66%x67)|x68));

	if (t14 != 2515262530368004LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x70 = -1LL;
	int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MIN;
	int64_t t15 = -274651573LL;

	t15 = (x69*((x70%x71)|x72));

	if (t15 != 11774866LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = 52000783U;
	int8_t x74 = -1;
	volatile int64_t x75 = 1LL;
	volatile int16_t x76 = INT16_MIN;
	volatile int64_t t16 = 85027914LL;

	t16 = (x73*((x74%x75)|x76));

	if (t16 != -1703961657344LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = 145LL;
	int64_t x78 = INT64_MIN;
	uint32_t x79 = 220U;
	volatile int64_t t17 = -379079701851673LL;

	t17 = (x77*((x78%x79)|x80));

	if (t17 != -145LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = -1;
	int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MIN;
	volatile int16_t x84 = -4;
	static int64_t t18 = -3502406728432373LL;

	t18 = (x81*((x82%x83)|x84));

	if (t18 != 4LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x91 = -73;
	static int32_t x92 = -112284;

	t19 = (x89*((x90%x91)|x92));

	if (t19 != -54LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = UINT64_MAX;
	int64_t x94 = -7804LL;
	int64_t x96 = INT64_MAX;
	uint64_t t20 = 1403294386LLU;

	t20 = (x93*((x94%x95)|x96));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = -3418;
	int32_t x103 = INT32_MAX;
	int32_t x104 = -258;

	t21 = (x101*((x102%x103)|x104));

	if (t21 != 878426LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x105 = -1;
	static int8_t x106 = INT8_MIN;
	int64_t x107 = INT64_MIN;
	int64_t x108 = -612167LL;
	volatile int64_t t22 = -462285434513728843LL;

	t22 = (x105*((x106%x107)|x108));

	if (t22 != 71LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x110 = INT16_MAX;
	static int64_t x111 = 3838314951430LL;
	volatile uint16_t x112 = 15U;
	int64_t t23 = 35756580028278390LL;

	t23 = (x109*((x110%x111)|x112));

	if (t23 != -59110907939027224LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = INT32_MIN;
	static volatile int8_t x118 = -1;
	uint64_t x119 = 5854823914526696LLU;
	uint32_t x120 = UINT32_MAX;
	volatile uint64_t t24 = 133625140922342947LLU;

	t24 = (x117*((x118%x119)|x120));

	if (t24 != 2147483648LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x125 = UINT64_MAX;
	uint32_t x126 = UINT32_MAX;
	int16_t x127 = INT16_MAX;
	static int64_t x128 = INT64_MIN;

	t25 = (x125*((x126%x127)|x128));

	if (t25 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = -1;
	uint32_t x130 = 63462196U;
	uint64_t x131 = UINT64_MAX;
	volatile int16_t x132 = INT16_MIN;
	static volatile uint64_t t26 = 789155443678LLU;

	t26 = (x129*((x130%x131)|x132));

	if (t26 != 9420LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x133 = 1U;
	uint64_t x134 = UINT64_MAX;
	static uint64_t x136 = 448746497023LLU;

	t27 = (x133*((x134%x135)|x136));

	if (t27 != 448746497023LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x137 = 22950U;
	uint8_t x138 = 17U;
	volatile int64_t x139 = INT64_MIN;

	t28 = (x137*((x138%x139)|x140));

	if (t28 != -22950LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x141 = INT32_MIN;
	int8_t x142 = 1;
	static int32_t x143 = INT32_MAX;
	volatile uint32_t x144 = 2276812U;
	static volatile uint32_t t29 = 79398U;

	t29 = (x141*((x142%x143)|x144));

	if (t29 != 2147483648U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x145 = 17036U;
	uint16_t x146 = 29003U;
	int64_t x147 = INT64_MIN;
	uint16_t x148 = 4777U;
	int64_t t30 = 1146041710659LL;

	t30 = (x145*((x146%x147)|x148));

	if (t30 != 505543300LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = 47470130U;
	int32_t x151 = 3777;
	volatile int16_t x152 = INT16_MIN;
	volatile int64_t t31 = -2281467107839413760LL;

	t31 = (x149*((x150%x151)|x152));

	if (t31 != -47470130LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = INT16_MIN;
	int64_t x154 = -1LL;
	volatile int64_t x155 = -1LL;
	volatile uint32_t x156 = 20953U;
	int64_t t32 = -305702LL;

	t32 = (x153*((x154%x155)|x156));

	if (t32 != -686587904LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MIN;
	int32_t x158 = INT32_MIN;
	uint8_t x160 = 2U;
	static volatile int32_t t33 = -2399;

	t33 = (x157*((x158%x159)|x160));

	if (t33 != -65536) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x166 = UINT8_MAX;
	int32_t x167 = -1;
	int32_t t34 = -12298192;

	t34 = (x165*((x166%x167)|x168));

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x174 = INT16_MIN;
	static uint8_t x175 = 11U;
	volatile int32_t x176 = INT32_MIN;
	static int32_t t35 = 6674476;

	t35 = (x173*((x174%x175)|x176));

	if (t35 != 10) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x177 = UINT64_MAX;
	int32_t x178 = INT32_MIN;
	static uint64_t x179 = 145968773LLU;
	static int8_t x180 = INT8_MIN;

	t36 = (x177*((x178%x179)|x180));

	if (t36 != 81LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = 4;
	volatile int64_t x182 = INT64_MIN;
	volatile uint64_t x183 = 8254905017073366460LLU;
	static int8_t x184 = 0;
	static uint64_t t37 = 286230544LLU;

	t37 = (x181*((x182%x183)|x184));

	if (t37 != 3873868079125637392LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = 206;
	int64_t x186 = -269821144001759LL;
	uint32_t x187 = UINT32_MAX;
	volatile int16_t x188 = -1;
	int64_t t38 = 378045LL;

	t38 = (x185*((x186%x187)|x188));

	if (t38 != -206LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x189 = -37;
	uint64_t x190 = 6105416224LLU;

	t39 = (x189*((x190%x191)|x192));

	if (t39 != 18446744073709515060LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x193 = UINT64_MAX;
	int8_t x194 = -1;
	int64_t x195 = -36825613497LL;
	static int64_t x196 = -2LL;
	uint64_t t40 = 5074672629559LLU;

	t40 = (x193*((x194%x195)|x196));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x209 = UINT32_MAX;
	volatile int16_t x211 = INT16_MIN;
	uint8_t x212 = 1U;
	volatile uint32_t t41 = 9780U;

	t41 = (x209*((x210%x211)|x212));

	if (t41 != 4294934529U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x221 = INT8_MIN;
	int32_t x222 = INT32_MAX;
	static int32_t t42 = 322150;

	t42 = (x221*((x222%x223)|x224));

	if (t42 != -8388480) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x225 = INT8_MIN;
	static int16_t x226 = -1;
	int8_t x227 = INT8_MIN;
	int16_t x228 = INT16_MAX;
	volatile int32_t t43 = -12759635;

	t43 = (x225*((x226%x227)|x228));

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x229 = -1;
	int8_t x230 = 13;
	int64_t x231 = 15074085LL;
	static uint64_t x232 = 216139631739442632LLU;
	volatile uint64_t t44 = 405664004003833849LLU;

	t44 = (x229*((x230%x231)|x232));

	if (t44 != 18230604441970108979LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x233 = INT64_MAX;
	static volatile int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = 2027121LLU;

	t45 = (x233*((x234%x235)|x236));

	if (t45 != 9223372036852748687LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x237 = -1;
	uint64_t x239 = 975528LLU;
	int32_t x240 = INT32_MIN;

	t46 = (x237*((x238%x239)|x240));

	if (t46 != 2146843777LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x242 = 5767899;
	static int16_t x243 = -1;
	int64_t x244 = INT64_MIN;
	volatile int64_t t47 = INT64_MIN;

	t47 = (x241*((x242%x243)|x244));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x246 = INT16_MIN;
	uint16_t x247 = 1U;
	volatile int64_t t48 = -26448LL;

	t48 = (x245*((x246%x247)|x248));

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x249 = -1LL;
	static volatile uint64_t x250 = UINT64_MAX;
	int8_t x251 = INT8_MIN;
	volatile uint64_t x252 = 234762218704074LLU;
	volatile uint64_t t49 = 11545927LLU;

	t49 = (x249*((x250%x251)|x252));

	if (t49 != 18446509311490847489LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x265 = -1;
	int16_t x266 = 0;
	volatile int8_t x267 = INT8_MIN;
	volatile int32_t t50 = 48644;

	t50 = (x265*((x266%x267)|x268));

	if (t50 != 20) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x269 = -1LL;
	int8_t x270 = INT8_MIN;
	volatile uint8_t x271 = 1U;
	static int64_t t51 = 2086655797806513LL;

	t51 = (x269*((x270%x271)|x272));

	if (t51 != 5LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x273 = 623;
	int64_t x274 = INT64_MIN;
	int32_t x276 = INT32_MIN;
	int64_t t52 = 35310270LL;

	t52 = (x273*((x274%x275)|x276));

	if (t52 != -1337882312704LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x279 = INT8_MAX;
	static int32_t x280 = INT32_MAX;
	uint64_t t53 = 3868890276367LLU;

	t53 = (x277*((x278%x279)|x280));

	if (t53 != 9223372030412324865LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x282 = 2U;
	uint8_t x283 = UINT8_MAX;
	uint64_t x284 = 4153113220LLU;

	t54 = (x281*((x282%x283)|x284));

	if (t54 != 18446744069556438394LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x285 = -1;
	int8_t x286 = INT8_MIN;
	volatile int64_t x287 = -12893119493LL;
	volatile int64_t t55 = 4LL;

	t55 = (x285*((x286%x287)|x288));

	if (t55 != 60LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x289 = -686989780;
	volatile int8_t x290 = -1;
	uint64_t x292 = 106994881679810167LLU;
	volatile uint64_t t56 = 97237LLU;

	t56 = (x289*((x290%x291)|x292));

	if (t56 != 686989780LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x294 = 2537193944184401877LLU;
	uint32_t x295 = 239U;
	int8_t x296 = INT8_MAX;
	uint64_t t57 = 167872105440LLU;

	t57 = (x293*((x294%x295)|x296));

	if (t57 != 1016LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x297 = INT16_MIN;
	static volatile int16_t x298 = -373;
	volatile int64_t x299 = INT64_MIN;
	static int32_t x300 = -127407;
	volatile int64_t t58 = -7360LL;

	t58 = (x297*((x298%x299)|x300));

	if (t58 != 9601024LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x301 = 56U;
	int16_t x302 = INT16_MIN;
	uint32_t x303 = UINT32_MAX;
	uint32_t t59 = 2041U;

	t59 = (x301*((x302%x303)|x304));

	if (t59 != 4294967240U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x306 = 1U;
	uint8_t x307 = 24U;
	volatile uint64_t x308 = UINT64_MAX;
	uint64_t t60 = 32810926621LLU;

	t60 = (x305*((x306%x307)|x308));

	if (t60 != 18446744073709541898LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x309 = INT16_MAX;
	static volatile int16_t x310 = INT16_MIN;
	int64_t x311 = -64070394510517590LL;
	int64_t x312 = INT64_MIN;
	volatile int64_t t61 = 32756610006727283LL;

	t61 = (x309*((x310%x311)|x312));

	if (t61 != -1073709056LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x313 = 6948456LLU;
	int16_t x315 = -1;
	int64_t x316 = INT64_MAX;
	uint64_t t62 = 22LLU;

	t62 = (x313*((x314%x315)|x316));

	if (t62 != 18446744073702603160LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x317 = 6;
	static int16_t x318 = INT16_MIN;
	uint32_t x319 = 1312060U;
	int8_t x320 = INT8_MAX;

	t63 = (x317*((x318%x319)|x320));

	if (t63 != 3373050U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x325 = -78720233491540LL;
	uint16_t x326 = UINT16_MAX;
	uint8_t x328 = UINT8_MAX;
	static int64_t t64 = -87LL;

	t64 = (x325*((x326%x327)|x328));

	if (t64 != -2579425890817291180LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MAX;
	uint8_t x336 = 1U;

	t65 = (x333*((x334%x335)|x336));

	if (t65 != 505) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x337 = -1LL;
	int32_t x339 = INT32_MAX;
	uint16_t x340 = 56U;
	int64_t t66 = 1LL;

	t66 = (x337*((x338%x339)|x340));

	if (t66 != -32767LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x341 = 77665979U;
	int16_t x342 = 0;
	int16_t x343 = INT16_MIN;
	static int16_t x344 = INT16_MAX;
	uint32_t t67 = 500894U;

	t67 = (x341*((x342%x343)|x344));

	if (t67 != 2260494661U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x345 = -461;
	volatile int16_t x346 = INT16_MIN;
	int64_t x348 = INT64_MIN;
	int64_t t68 = -389504593821468745LL;

	t68 = (x345*((x346%x347)|x348));

	if (t68 != 922LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x349 = 114LLU;
	int16_t x350 = 32;
	static volatile int16_t x352 = INT16_MIN;
	uint64_t t69 = 22037LLU;

	t69 = (x349*((x350%x351)|x352));

	if (t69 != 18446744073705819712LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x353 = -1;
	uint64_t x354 = 26081087LLU;
	uint8_t x355 = UINT8_MAX;
	uint64_t t70 = 6946266516LLU;

	t70 = (x353*((x354%x355)|x356));

	if (t70 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x357 = INT8_MAX;
	int8_t x358 = -1;
	uint16_t x359 = 2U;
	uint16_t x360 = 5U;

	t71 = (x357*((x358%x359)|x360));

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x361 = INT64_MAX;
	static volatile uint16_t x362 = 1U;
	int8_t x363 = -3;
	static uint64_t x364 = UINT64_MAX;
	volatile uint64_t t72 = 2919364049LLU;

	t72 = (x361*((x362%x363)|x364));

	if (t72 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x370 = INT16_MIN;
	int64_t x371 = 3387LL;
	volatile int64_t t73 = -2047605800398LL;

	t73 = (x369*((x370%x371)|x372));

	if (t73 != 4812510855168LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x373 = INT64_MIN;
	volatile uint16_t x374 = 11U;
	uint64_t x375 = 2055746458165LLU;
	volatile uint64_t t74 = 40716LLU;

	t74 = (x373*((x374%x375)|x376));

	if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x377 = 72U;
	volatile int8_t x378 = -1;
	int32_t t75 = 9757;

	t75 = (x377*((x378%x379)|x380));

	if (t75 != -72) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x381 = 47;
	int32_t x382 = -1;
	static int8_t x383 = INT8_MIN;
	static int64_t x384 = 250589528LL;

	t76 = (x381*((x382%x383)|x384));

	if (t76 != -47LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x385 = 6U;
	static int16_t x386 = -173;
	static volatile int16_t x387 = 1;
	uint16_t x388 = 5279U;
	uint32_t t77 = 1777073U;

	t77 = (x385*((x386%x387)|x388));

	if (t77 != 31674U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x394 = INT8_MAX;
	volatile uint64_t t78 = 5186LLU;

	t78 = (x393*((x394%x395)|x396));

	if (t78 != 532669782672LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x399 = INT64_MIN;

	t79 = (x397*((x398%x399)|x400));

	if (t79 != -16LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x401 = INT32_MAX;
	int16_t x403 = -1;
	int64_t x404 = INT64_MIN;
	uint64_t t80 = 499510887607642LLU;

	t80 = (x401*((x402%x403)|x404));

	if (t80 != 12273231213574424345LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x405 = UINT64_MAX;
	volatile int16_t x406 = -1;
	int64_t x407 = INT64_MIN;
	static uint32_t x408 = 15U;

	t81 = (x405*((x406%x407)|x408));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x409 = 359U;
	int64_t x410 = INT64_MIN;
	int64_t x411 = 3487018644741LL;
	volatile int64_t x412 = -197699168138700122LL;
	int64_t t82 = 52922LL;

	t82 = (x409*((x410%x411)|x412));

	if (t82 != -111889746853591LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x413 = INT8_MIN;
	int8_t x414 = -9;
	int8_t x415 = 4;
	volatile int32_t t83 = -1792143;

	t83 = (x413*((x414%x415)|x416));

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x418 = INT16_MAX;
	int64_t x419 = 27433173582328248LL;
	uint16_t x420 = 7U;
	uint64_t t84 = 10804578054428LLU;

	t84 = (x417*((x418%x419)|x420));

	if (t84 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x421 = 2U;
	static uint32_t x423 = 424312U;
	int8_t x424 = INT8_MAX;
	volatile uint32_t t85 = 525058U;

	t85 = (x421*((x422%x423)|x424));

	if (t85 != 162558U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x425 = UINT64_MAX;
	static uint8_t x426 = 12U;
	volatile int16_t x427 = -965;
	volatile uint32_t x428 = 64352U;
	volatile uint64_t t86 = 829923894218849LLU;

	t86 = (x425*((x426%x427)|x428));

	if (t86 != 18446744073709487252LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x429 = 1978LLU;
	uint32_t x430 = UINT32_MAX;
	static uint32_t x431 = 4722958U;
	static int16_t x432 = -569;
	volatile uint64_t t87 = 770395LLU;

	t87 = (x429*((x430%x431)|x432));

	if (t87 != 8495444201830LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x437 = INT64_MIN;
	volatile int16_t x438 = INT16_MAX;
	uint64_t x439 = 42787265LLU;
	static int16_t x440 = -1;
	volatile uint64_t t88 = 4LLU;

	t88 = (x437*((x438%x439)|x440));

	if (t88 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x441 = 0;
	static int8_t x442 = -1;
	uint32_t t89 = 1665U;

	t89 = (x441*((x442%x443)|x444));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x445 = INT8_MIN;
	int32_t x446 = -722423;
	uint64_t x447 = UINT64_MAX;
	uint64_t t90 = 387LLU;

	t90 = (x445*((x446%x447)|x448));

	if (t90 != 92470144LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x450 = 11U;
	volatile int64_t x452 = INT64_MIN;

	t91 = (x449*((x450%x451)|x452));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x453 = UINT64_MAX;
	int64_t x454 = -1LL;
	int64_t x456 = -241601729125LL;
	uint64_t t92 = 119460LLU;

	t92 = (x453*((x454%x455)|x456));

	if (t92 != 241601729125LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x461 = UINT32_MAX;
	volatile uint16_t x462 = UINT16_MAX;
	volatile int64_t x463 = INT64_MIN;
	volatile int64_t t93 = 188LL;

	t93 = (x461*((x462%x463)|x464));

	if (t93 != 281470681677825LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x467 = 24260U;
	int64_t x468 = INT64_MAX;
	volatile int64_t t94 = INT64_MAX;

	t94 = (x465*((x466%x467)|x468));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x473 = 40186019;
	int16_t x474 = INT16_MIN;
	uint32_t x475 = 957987714U;
	static int8_t x476 = -37;
	volatile uint32_t t95 = 27U;

	t95 = (x473*((x474%x475)|x476));

	if (t95 != 4094037201U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x477 = 0U;
	int16_t x478 = INT16_MAX;
	int16_t x479 = INT16_MIN;
	static int16_t x480 = INT16_MAX;
	int32_t t96 = 31137611;

	t96 = (x477*((x478%x479)|x480));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x482 = INT8_MAX;
	static volatile uint16_t x483 = 32270U;
	static int8_t x484 = INT8_MIN;
	int32_t t97 = 6;

	t97 = (x481*((x482%x483)|x484));

	if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x486 = 32689U;
	uint8_t x487 = 3U;
	static uint32_t x488 = 108258769U;
	uint32_t t98 = 5902U;

	t98 = (x485*((x486%x487)|x488));

	if (t98 != 2706469225U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x497 = INT16_MAX;
	uint32_t x498 = 7767517U;
	int64_t x499 = -155LL;
	uint16_t x500 = 1738U;
	volatile int64_t t99 = 55546919909671LL;

	t99 = (x497*((x498%x499)|x500));

	if (t99 != 56949046LL) { NG(); } else { ; }
	
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

