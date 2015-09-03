#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 37464406374LLU;
volatile int8_t x12 = INT8_MIN;
volatile int32_t t1 = 14111;
int64_t t3 = -3669LL;
int64_t x21 = -1LL;
int16_t x23 = -21;
int16_t x24 = INT16_MAX;
int8_t x26 = -1;
static uint32_t x33 = 237U;
uint16_t x36 = 376U;
uint8_t x48 = UINT8_MAX;
uint32_t x53 = 7419U;
static int8_t x61 = 2;
int64_t t11 = -1LL;
volatile int64_t x71 = 14980220LL;
int16_t x76 = 23;
static uint64_t t14 = 3546LLU;
int64_t x93 = INT64_MAX;
volatile int32_t x95 = -34242;
uint32_t x112 = UINT32_MAX;
volatile uint32_t t19 = 14664458U;
uint64_t x114 = UINT64_MAX;
static int32_t x115 = -255656;
static int8_t x116 = INT8_MAX;
uint64_t t20 = 8311001LLU;
volatile int32_t x117 = INT32_MIN;
int8_t x120 = -1;
int64_t x121 = -1LL;
static volatile int32_t x124 = -1723;
volatile int64_t t22 = -238068026646715604LL;
int8_t x130 = -2;
int8_t x148 = INT8_MAX;
uint64_t x149 = 354963882026136708LLU;
uint8_t x151 = 25U;
volatile int16_t x152 = -1;
int8_t x158 = INT8_MIN;
int64_t t29 = 6611LL;
int64_t x175 = INT64_MIN;
volatile int64_t t30 = -57977108638LL;
static volatile int64_t t31 = INT64_MIN;
volatile int16_t x186 = INT16_MIN;
static uint8_t x188 = UINT8_MAX;
uint64_t x196 = 8296161919496294992LLU;
uint32_t x202 = 822530332U;
volatile int16_t x205 = INT16_MIN;
int32_t x210 = -1;
volatile uint32_t t37 = 6629003U;
volatile int64_t x224 = INT64_MIN;
static int8_t x233 = -1;
volatile uint16_t x234 = 29U;
static volatile int16_t x242 = INT16_MAX;
volatile uint64_t t44 = 80LLU;
int64_t x258 = INT64_MIN;
uint8_t x260 = 1U;
int8_t x262 = 43;
uint64_t t46 = 100257503LLU;
int8_t x274 = -1;
int16_t x288 = 10;
uint64_t x299 = UINT64_MAX;
volatile uint64_t t54 = 6LLU;
int16_t x302 = INT16_MIN;
int64_t x305 = 13843LL;
int8_t x310 = INT8_MAX;
volatile int64_t t58 = 643712928022343LL;
uint64_t x323 = UINT64_MAX;
static uint64_t t59 = 5LLU;
static volatile uint16_t x328 = UINT16_MAX;
int64_t t61 = -12484473LL;
uint32_t x338 = UINT32_MAX;
volatile uint32_t t65 = 1832U;
static volatile int32_t x359 = INT32_MIN;
volatile uint32_t t66 = 3304U;
int8_t x367 = INT8_MAX;
int16_t x368 = 1;
uint64_t t67 = 13971LLU;
int64_t x371 = -1LL;
uint16_t x384 = UINT16_MAX;
static volatile int64_t t70 = -1470961180156LL;
uint8_t x393 = 2U;
uint64_t x394 = 105351395LLU;
uint16_t x400 = 3602U;
int64_t t73 = -19774152LL;
volatile int32_t x402 = INT32_MIN;
int32_t x408 = -1;
uint32_t x411 = 198U;
uint64_t t77 = 1168777569255805LLU;
uint32_t x422 = UINT32_MAX;
uint32_t t78 = 489U;
int32_t x434 = 2903;
uint8_t x451 = 10U;
uint64_t t82 = 24028LLU;
int8_t x461 = INT8_MIN;
int64_t x463 = INT64_MIN;
uint64_t t85 = 52131598567453LLU;
int64_t x468 = INT64_MIN;
uint8_t x474 = 1U;
int32_t x487 = -92587785;
volatile int8_t x496 = INT8_MIN;
int64_t x504 = 37470786LL;
volatile int64_t x530 = -10LL;
volatile uint16_t x537 = 426U;


void f0(void) {
	static volatile uint16_t x1 = 8662U;
	int8_t x3 = -1;
	volatile int64_t x4 = -2007284402LL;
	uint64_t t0 = 3155132833765LLU;

	t0 = ((x1/(x2%x3))*x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = -1;
	int32_t x10 = -1;
	int32_t x11 = INT32_MAX;

	t1 = ((x9/(x10%x11))*x12);

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MAX;
	int32_t x14 = 1711776;
	static int64_t x15 = INT64_MIN;
	static volatile uint16_t x16 = UINT16_MAX;
	volatile int64_t t2 = -25LL;

	t2 = ((x13/(x14%x15))*x16);

	if (t2 != 82180890LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = INT64_MIN;
	int16_t x18 = -9731;
	static uint32_t x19 = UINT32_MAX;
	uint8_t x20 = 42U;

	t3 = ((x17/(x18%x19))*x20);

	if (t3 != -90194517546LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = INT8_MAX;
	static volatile int64_t t4 = 62LL;

	t4 = ((x21/(x22%x23))*x24);

	if (t4 != -32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MAX;
	volatile int8_t x27 = INT8_MIN;
	static uint64_t x28 = UINT64_MAX;
	uint64_t t5 = 7728431782382328LLU;

	t5 = ((x25/(x26%x27))*x28);

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x34 = -1LL;
	uint64_t x35 = 119LLU;
	volatile uint64_t t6 = 62282061672400921LLU;

	t6 = ((x33/(x34%x35))*x36);

	if (t6 != 752LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x37 = UINT32_MAX;
	uint32_t x38 = 8149U;
	int32_t x39 = -372020;
	static uint8_t x40 = UINT8_MAX;
	volatile uint32_t t7 = 255U;

	t7 = ((x37/(x38%x39))*x40);

	if (t7 != 134398770U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MAX;
	uint16_t x42 = 4U;
	int64_t x43 = -127715404082LL;
	volatile uint8_t x44 = UINT8_MAX;
	volatile int64_t t8 = -1LL;

	t8 = ((x41/(x42%x43))*x44);

	if (t8 != 2088705LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x45 = 142;
	uint16_t x46 = UINT16_MAX;
	int64_t x47 = INT64_MIN;
	volatile int64_t t9 = 673358465280LL;

	t9 = ((x45/(x46%x47))*x48);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x54 = UINT32_MAX;
	static uint32_t x55 = 585085U;
	volatile int16_t x56 = INT16_MAX;
	volatile uint32_t t10 = 18966474U;

	t10 = ((x53/(x54%x55))*x56);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x62 = 8U;
	volatile int16_t x63 = -5444;
	int64_t x64 = INT64_MAX;

	t11 = ((x61/(x62%x63))*x64);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x69 = -1;
	uint8_t x70 = 22U;
	uint64_t x72 = 15LLU;
	volatile uint64_t t12 = 2003430403290LLU;

	t12 = ((x69/(x70%x71))*x72);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x73 = UINT8_MAX;
	uint16_t x74 = 1U;
	int64_t x75 = INT64_MIN;
	int64_t t13 = -649559LL;

	t13 = ((x73/(x74%x75))*x76);

	if (t13 != 5865LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x81 = 2660U;
	uint64_t x82 = 4166571848LLU;
	static int32_t x83 = INT32_MAX;
	int16_t x84 = 26;

	t14 = ((x81/(x82%x83))*x84);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = 1;
	int8_t x90 = 7;
	uint8_t x91 = 34U;
	static uint32_t x92 = 25513523U;
	volatile uint32_t t15 = 41U;

	t15 = ((x89/(x90%x91))*x92);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x94 = UINT32_MAX;
	uint64_t x96 = 411LLU;
	uint64_t t16 = 12399525719528271LLU;

	t16 = ((x93/(x94%x95))*x96);

	if (t16 != 110709556004419005LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x101 = INT32_MIN;
	volatile int8_t x102 = INT8_MIN;
	int32_t x103 = 775873;
	uint8_t x104 = 19U;
	volatile int32_t t17 = -108;

	t17 = ((x101/(x102%x103))*x104);

	if (t17 != 318767104) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x105 = -1;
	uint64_t x106 = 1468792348935LLU;
	uint16_t x107 = UINT16_MAX;
	int64_t x108 = INT64_MAX;
	static volatile uint64_t t18 = 0LLU;

	t18 = ((x105/(x106%x107))*x108);

	if (t18 != 9222913675714914719LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x109 = 0U;
	int16_t x110 = -1;
	uint8_t x111 = UINT8_MAX;

	t19 = ((x109/(x110%x111))*x112);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x113 = 9U;

	t20 = ((x113/(x114%x115))*x116);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x118 = -1939LL;
	uint64_t x119 = 468LLU;
	volatile uint64_t t21 = 635564774LLU;

	t21 = ((x117/(x118%x119))*x120);

	if (t21 != 18402507277374870398LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x122 = INT16_MAX;
	static uint32_t x123 = 23414854U;

	t22 = ((x121/(x122%x123))*x124);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x125 = 1U;
	int16_t x126 = INT16_MIN;
	uint16_t x127 = 15316U;
	static int64_t x128 = INT64_MIN;
	volatile int64_t t23 = 9LL;

	t23 = ((x125/(x126%x127))*x128);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x129 = -1;
	static uint8_t x131 = 24U;
	int32_t x132 = INT32_MIN;
	int32_t t24 = -52;

	t24 = ((x129/(x130%x131))*x132);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x141 = -3;
	int32_t x142 = INT32_MIN;
	uint16_t x143 = 2811U;
	int64_t x144 = INT64_MAX;
	int64_t t25 = 244979499993060204LL;

	t25 = ((x141/(x142%x143))*x144);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x145 = -1;
	int32_t x146 = INT32_MAX;
	static int16_t x147 = INT16_MIN;
	int32_t t26 = 11;

	t26 = ((x145/(x146%x147))*x148);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x150 = UINT16_MAX;
	volatile uint64_t t27 = 221158712LLU;

	t27 = ((x149/(x150%x151))*x152);

	if (t27 != 18411247685506937946LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = -1;
	int32_t x154 = -67146000;
	volatile int16_t x155 = 221;
	int32_t x156 = INT32_MAX;
	int32_t t28 = -886084;

	t28 = ((x153/(x154%x155))*x156);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = INT16_MIN;
	int64_t x159 = INT64_MIN;
	uint32_t x160 = UINT32_MAX;

	t29 = ((x157/(x158%x159))*x160);

	if (t29 != 1099511627520LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x173 = 1;
	volatile int8_t x174 = -13;
	uint8_t x176 = UINT8_MAX;

	t30 = ((x173/(x174%x175))*x176);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x181 = -1;
	int64_t x182 = -1LL;
	int64_t x183 = INT64_MAX;
	int64_t x184 = INT64_MIN;

	t31 = ((x181/(x182%x183))*x184);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x185 = 1;
	static volatile uint32_t x187 = UINT32_MAX;
	volatile uint32_t t32 = 6580U;

	t32 = ((x185/(x186%x187))*x188);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x193 = INT8_MIN;
	static int8_t x194 = INT8_MAX;
	static volatile int64_t x195 = -2940698890599762LL;
	volatile uint64_t t33 = 29673LLU;

	t33 = ((x193/(x194%x195))*x196);

	if (t33 != 10150582154213256624LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x201 = INT8_MIN;
	uint8_t x203 = UINT8_MAX;
	uint32_t x204 = 6283U;
	volatile uint32_t t34 = 25389697U;

	t34 = ((x201/(x202%x203))*x204);

	if (t34 != 3482379595U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x206 = -1;
	uint8_t x207 = 8U;
	volatile int8_t x208 = -5;
	int32_t t35 = 20;

	t35 = ((x205/(x206%x207))*x208);

	if (t35 != -163840) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x209 = INT8_MAX;
	volatile int8_t x211 = -5;
	volatile int32_t x212 = -1;
	volatile int32_t t36 = -333646973;

	t36 = ((x209/(x210%x211))*x212);

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x213 = -1;
	uint32_t x214 = 403590492U;
	uint8_t x215 = UINT8_MAX;
	int8_t x216 = INT8_MIN;

	t37 = ((x213/(x214%x215))*x216);

	if (t37 != 1639142144U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x217 = -1;
	uint8_t x218 = UINT8_MAX;
	int32_t x219 = INT32_MIN;
	int32_t x220 = INT32_MIN;
	volatile int32_t t38 = -1082;

	t38 = ((x217/(x218%x219))*x220);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x221 = -1;
	static uint8_t x222 = 21U;
	int64_t x223 = 6954034449497LL;
	static int64_t t39 = 100443777LL;

	t39 = ((x221/(x222%x223))*x224);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x225 = -1;
	volatile uint8_t x226 = 58U;
	static uint64_t x227 = UINT64_MAX;
	int8_t x228 = -7;
	uint64_t t40 = 885890775666770209LLU;

	t40 = ((x225/(x226%x227))*x228);

	if (t40 != 16220412892399778148LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x235 = 10;
	int32_t x236 = -1;
	volatile int32_t t41 = -80;

	t41 = ((x233/(x234%x235))*x236);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x237 = -1;
	int64_t x238 = INT64_MIN;
	uint8_t x239 = 98U;
	int16_t x240 = 25;
	volatile int64_t t42 = -455673841712LL;

	t42 = ((x237/(x238%x239))*x240);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x241 = 2691660810570891857LLU;
	uint16_t x243 = 1428U;
	volatile uint64_t x244 = 134368319811957LLU;
	volatile uint64_t t43 = 11LLU;

	t43 = ((x241/(x242%x243))*x244);

	if (t43 != 15938958344542471259LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x253 = 37U;
	uint64_t x254 = 507149511LLU;
	int8_t x255 = -1;
	uint8_t x256 = 22U;

	t44 = ((x253/(x254%x255))*x256);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x257 = UINT16_MAX;
	int64_t x259 = INT64_MAX;
	static volatile int64_t t45 = -522543904182LL;

	t45 = ((x257/(x258%x259))*x260);

	if (t45 != -65535LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x261 = -1;
	volatile uint64_t x263 = 46956817LLU;
	static int16_t x264 = -2436;

	t46 = ((x261/(x262%x263))*x264);

	if (t46 != 6434910723387055212LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x269 = UINT8_MAX;
	static int8_t x270 = INT8_MIN;
	volatile uint8_t x271 = 46U;
	volatile uint32_t x272 = UINT32_MAX;
	uint32_t t47 = 394674436U;

	t47 = ((x269/(x270%x271))*x272);

	if (t47 != 7U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x273 = 3521141947064404355LLU;
	int16_t x275 = INT16_MAX;
	int8_t x276 = -1;
	uint64_t t48 = 22322044755LLU;

	t48 = ((x273/(x274%x275))*x276);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x277 = 12;
	int8_t x278 = 4;
	uint8_t x279 = UINT8_MAX;
	int32_t x280 = 0;
	volatile int32_t t49 = -28634;

	t49 = ((x277/(x278%x279))*x280);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x281 = UINT64_MAX;
	static uint32_t x282 = 17U;
	int64_t x283 = INT64_MIN;
	volatile uint16_t x284 = 290U;
	uint64_t t50 = 2461337703516721LLU;

	t50 = ((x281/(x282%x283))*x284);

	if (t50 != 1085102592571150078LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x285 = INT8_MAX;
	uint8_t x286 = UINT8_MAX;
	uint32_t x287 = 188232U;
	volatile uint32_t t51 = 435U;

	t51 = ((x285/(x286%x287))*x288);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x289 = INT64_MAX;
	volatile int16_t x290 = 11;
	int8_t x291 = INT8_MIN;
	int8_t x292 = -1;
	int64_t t52 = -124846681324LL;

	t52 = ((x289/(x290%x291))*x292);

	if (t52 != -838488366986797800LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = -1;
	int16_t x295 = INT16_MIN;
	static uint16_t x296 = 22U;
	int32_t t53 = -13158695;

	t53 = ((x293/(x294%x295))*x296);

	if (t53 != 720896) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x297 = UINT64_MAX;
	int16_t x298 = 855;
	volatile int64_t x300 = -1LL;

	t54 = ((x297/(x298%x299))*x300);

	if (t54 != 18425168934442055065LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x301 = 3U;
	static uint8_t x303 = UINT8_MAX;
	int16_t x304 = INT16_MIN;
	int32_t t55 = 527626166;

	t55 = ((x301/(x302%x303))*x304);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x306 = INT64_MAX;
	uint32_t x307 = 105U;
	int32_t x308 = 350;
	static volatile int64_t t56 = -1LL;

	t56 = ((x305/(x306%x307))*x308);

	if (t56 != 691950LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x309 = 274LLU;
	int64_t x311 = INT64_MIN;
	static uint16_t x312 = UINT16_MAX;
	volatile uint64_t t57 = 0LLU;

	t57 = ((x309/(x310%x311))*x312);

	if (t57 != 131070LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x317 = INT16_MIN;
	static int32_t x318 = INT32_MAX;
	volatile int16_t x319 = INT16_MAX;
	static int64_t x320 = 3698791LL;

	t58 = ((x317/(x318%x319))*x320);

	if (t58 != -121201983488LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x321 = INT32_MIN;
	uint64_t x322 = 1938988501069689LLU;
	volatile int8_t x324 = INT8_MAX;

	t59 = ((x321/(x322%x323))*x324);

	if (t59 != 1208151LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x325 = UINT8_MAX;
	static uint16_t x326 = 3324U;
	volatile int16_t x327 = INT16_MIN;
	static int32_t t60 = -47;

	t60 = ((x325/(x326%x327))*x328);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x333 = INT32_MIN;
	static uint16_t x334 = 41U;
	int32_t x335 = INT32_MIN;
	int64_t x336 = -1LL;

	t61 = ((x333/(x334%x335))*x336);

	if (t61 != 52377649LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x337 = UINT16_MAX;
	int32_t x339 = INT32_MIN;
	uint64_t x340 = 24327446688646LLU;
	volatile uint64_t t62 = 47194LLU;

	t62 = ((x337/(x338%x339))*x340);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x341 = INT16_MIN;
	volatile int8_t x342 = INT8_MIN;
	uint16_t x343 = UINT16_MAX;
	static int16_t x344 = 143;
	volatile int32_t t63 = -4850235;

	t63 = ((x341/(x342%x343))*x344);

	if (t63 != 36608) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x345 = INT8_MIN;
	volatile uint64_t x346 = 519233640561101392LLU;
	static volatile int64_t x347 = 18022260388LL;
	uint32_t x348 = 11U;
	volatile uint64_t t64 = 148LLU;

	t64 = ((x345/(x346%x347))*x348);

	if (t64 != 21183284782LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x349 = INT16_MIN;
	uint32_t x350 = UINT32_MAX;
	uint32_t x351 = 95U;
	volatile int16_t x352 = INT16_MIN;

	t65 = ((x349/(x350%x351))*x352);

	if (t65 != 1932754944U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x357 = 54U;
	uint32_t x358 = UINT32_MAX;
	int32_t x360 = -1;

	t66 = ((x357/(x358%x359))*x360);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x365 = INT8_MIN;
	uint64_t x366 = UINT64_MAX;

	t67 = ((x365/(x366%x367))*x368);

	if (t67 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x369 = INT64_MIN;
	volatile uint64_t x370 = 15856LLU;
	uint64_t x372 = 468389350161146LLU;
	volatile uint64_t t68 = 10LLU;

	t68 = ((x369/(x370%x371))*x372);

	if (t68 != 3923713908596423756LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x373 = INT64_MIN;
	static volatile int32_t x374 = INT32_MIN;
	volatile int64_t x375 = -2829716683909LL;
	static int32_t x376 = 1;
	volatile int64_t t69 = 7852233571233LL;

	t69 = ((x373/(x374%x375))*x376);

	if (t69 != 4294967296LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x381 = 1058766259869593LL;
	int16_t x382 = INT16_MIN;
	int32_t x383 = 2250334;

	t70 = ((x381/(x382%x383))*x384);

	if (t70 != -2117500208712285LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x389 = 232;
	int32_t x390 = -1;
	uint8_t x391 = UINT8_MAX;
	static int8_t x392 = 1;
	int32_t t71 = -13244;

	t71 = ((x389/(x390%x391))*x392);

	if (t71 != -232) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x395 = INT8_MIN;
	int8_t x396 = 1;
	uint64_t t72 = 1476096373477LLU;

	t72 = ((x393/(x394%x395))*x396);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x397 = INT16_MIN;
	int64_t x398 = -1LL;
	int16_t x399 = INT16_MIN;

	t73 = ((x397/(x398%x399))*x400);

	if (t73 != 118030336LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x401 = -1950238LL;
	uint16_t x403 = 857U;
	static uint16_t x404 = UINT16_MAX;
	volatile int64_t t74 = -2LL;

	t74 = ((x401/(x402%x403))*x404);

	if (t74 != 662165640LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x405 = INT16_MIN;
	static uint64_t x406 = 117506908348LLU;
	int64_t x407 = -1LL;
	uint64_t t75 = 456179LLU;

	t75 = ((x405/(x406%x407))*x408);

	if (t75 != 18446744073552567280LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x409 = INT8_MIN;
	int16_t x410 = -1;
	static int8_t x412 = 0;
	volatile uint32_t t76 = 1318U;

	t76 = ((x409/(x410%x411))*x412);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x417 = INT32_MIN;
	int8_t x418 = 1;
	uint16_t x419 = 10078U;
	uint64_t x420 = 689961LLU;

	t77 = ((x417/(x418%x419))*x420);

	if (t77 != 18445262393744293888LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x421 = INT8_MAX;
	int16_t x423 = -445;
	volatile int32_t x424 = INT32_MIN;

	t78 = ((x421/(x422%x423))*x424);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x425 = 56LLU;
	int32_t x426 = -1;
	int64_t x427 = INT64_MIN;
	int64_t x428 = -1LL;
	static volatile uint64_t t79 = 842095611730457311LLU;

	t79 = ((x425/(x426%x427))*x428);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x433 = 132610390LLU;
	static volatile uint8_t x435 = 95U;
	int64_t x436 = INT64_MIN;
	volatile uint64_t t80 = 4169LLU;

	t80 = ((x433/(x434%x435))*x436);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x441 = UINT64_MAX;
	int32_t x442 = INT32_MIN;
	uint32_t x443 = UINT32_MAX;
	uint16_t x444 = 78U;
	uint64_t t81 = 167701153391153350LLU;

	t81 = ((x441/(x442%x443))*x444);

	if (t81 != 670014898098LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x449 = 55U;
	uint64_t x450 = 2LLU;
	int64_t x452 = INT64_MAX;

	t82 = ((x449/(x450%x451))*x452);

	if (t82 != 9223372036854775781LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x453 = 60519994671LL;
	uint16_t x454 = UINT16_MAX;
	volatile int32_t x455 = INT32_MIN;
	int32_t x456 = 127121395;
	volatile int64_t t83 = 5270059LL;

	t83 = ((x453/(x454%x455))*x456);

	if (t83 != 117393430247625LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x457 = UINT32_MAX;
	static volatile int16_t x458 = INT16_MAX;
	uint64_t x459 = UINT64_MAX;
	uint64_t x460 = 56LLU;
	uint64_t t84 = 236754466363130LLU;

	t84 = ((x457/(x458%x459))*x460);

	if (t84 != 7340256LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x462 = 16952022969648LLU;
	static int32_t x464 = INT32_MIN;

	t85 = ((x461/(x462%x463))*x464);

	if (t85 != 18444407239985856512LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x465 = -968;
	uint16_t x466 = 1387U;
	static int32_t x467 = INT32_MIN;
	int64_t t86 = -291128462LL;

	t86 = ((x465/(x466%x467))*x468);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x469 = 0U;
	static int16_t x470 = INT16_MIN;
	int32_t x471 = INT32_MAX;
	int32_t x472 = INT32_MIN;
	int32_t t87 = -17719;

	t87 = ((x469/(x470%x471))*x472);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x473 = 0U;
	int64_t x475 = INT64_MAX;
	static uint64_t x476 = 479LLU;
	static uint64_t t88 = 0LLU;

	t88 = ((x473/(x474%x475))*x476);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x481 = INT32_MIN;
	uint32_t x482 = 338582U;
	volatile int16_t x483 = 5;
	int8_t x484 = INT8_MIN;
	volatile uint32_t t89 = 1702087U;

	t89 = ((x481/(x482%x483))*x484);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x485 = 111U;
	int64_t x486 = 940006LL;
	volatile uint64_t x488 = UINT64_MAX;
	uint64_t t90 = 891322023051LLU;

	t90 = ((x485/(x486%x487))*x488);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x489 = 6616U;
	volatile int64_t x490 = 3288033373757LL;
	static int8_t x491 = INT8_MIN;
	int32_t x492 = INT32_MAX;
	int64_t t91 = 409830LL;

	t91 = ((x489/(x490%x491))*x492);

	if (t91 != 231928233876LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x493 = INT16_MIN;
	int16_t x494 = INT16_MIN;
	int16_t x495 = -28;
	volatile int32_t t92 = 16200265;

	t92 = ((x493/(x494%x495))*x496);

	if (t92 != -524288) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x497 = -52;
	static int16_t x498 = 198;
	int16_t x499 = INT16_MIN;
	int64_t x500 = INT64_MAX;
	int64_t t93 = 153LL;

	t93 = ((x497/(x498%x499))*x500);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x501 = 7U;
	int64_t x502 = INT64_MIN;
	int32_t x503 = -44683342;
	int64_t t94 = 2455170316109188972LL;

	t94 = ((x501/(x502%x503))*x504);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x509 = 1;
	int64_t x510 = 1442575548543LL;
	volatile int16_t x511 = -108;
	int16_t x512 = INT16_MAX;
	int64_t t95 = 713785149705993481LL;

	t95 = ((x509/(x510%x511))*x512);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x513 = 622218LLU;
	volatile int16_t x514 = INT16_MIN;
	uint32_t x515 = UINT32_MAX;
	uint16_t x516 = UINT16_MAX;
	volatile uint64_t t96 = 14693592407248376LLU;

	t96 = ((x513/(x514%x515))*x516);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x529 = INT32_MIN;
	int64_t x531 = INT64_MAX;
	volatile int64_t x532 = 134LL;
	volatile int64_t t97 = -1060745737159796LL;

	t97 = ((x529/(x530%x531))*x532);

	if (t97 != 28776280776LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x538 = 1U;
	int64_t x539 = INT64_MIN;
	volatile uint16_t x540 = 2U;
	int64_t t98 = 6961375900520270LL;

	t98 = ((x537/(x538%x539))*x540);

	if (t98 != 852LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x541 = INT32_MIN;
	volatile int64_t x542 = INT64_MAX;
	volatile int16_t x543 = INT16_MAX;
	int16_t x544 = INT16_MAX;
	static volatile int64_t t99 = -6112239504LL;

	t99 = ((x541/(x542%x543))*x544);

	if (t99 != -10052370946926LL) { NG(); } else { ; }
	
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

