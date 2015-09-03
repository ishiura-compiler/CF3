#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
volatile int32_t t0 = -139;
volatile uint16_t x19 = UINT16_MAX;
volatile int32_t t3 = -12400;
int32_t x38 = 127198131;
volatile int64_t x39 = INT64_MIN;
uint64_t x40 = 3458114752352788LLU;
uint16_t x46 = UINT16_MAX;
int8_t x58 = 5;
volatile int32_t x74 = -1;
static int16_t x76 = -3921;
int32_t x77 = INT32_MAX;
int8_t x80 = -7;
int32_t t9 = INT32_MAX;
volatile int16_t x83 = -727;
int8_t x84 = -1;
uint64_t x95 = UINT64_MAX;
uint8_t x101 = 3U;
uint64_t x104 = UINT64_MAX;
int32_t t14 = 6614122;
int64_t x114 = INT64_MIN;
uint8_t x116 = 15U;
static uint64_t t21 = 1093577377712751801LLU;
volatile int64_t x158 = INT64_MIN;
volatile uint16_t x160 = UINT16_MAX;
volatile int32_t x189 = 6;
int16_t x211 = -1;
uint32_t x217 = 53073303U;
int64_t x219 = -1LL;
int32_t x230 = -1;
static int8_t x232 = -31;
uint64_t x241 = 918LLU;
static int64_t x242 = INT64_MAX;
static volatile int16_t x244 = INT16_MIN;
int32_t t32 = -8;
int64_t x257 = INT64_MAX;
volatile int64_t x260 = 177741878451431489LL;
static int64_t x269 = INT64_MAX;
int16_t x270 = INT16_MAX;
static uint64_t x277 = UINT64_MAX;
int8_t x290 = INT8_MIN;
int64_t x293 = 465391487597580LL;
int32_t x295 = INT32_MIN;
int64_t x320 = INT64_MIN;
uint8_t x329 = UINT8_MAX;
int64_t x330 = 1LL;
int16_t x331 = INT16_MAX;
volatile uint8_t x333 = UINT8_MAX;
static int64_t x336 = -95950LL;
uint8_t x349 = UINT8_MAX;
int16_t x350 = INT16_MAX;
uint64_t x355 = UINT64_MAX;
int32_t t48 = 219629473;
volatile int32_t x370 = -4560;
uint64_t x389 = 8579917725868928048LLU;
int32_t x392 = INT32_MAX;
int8_t x396 = INT8_MIN;
uint16_t x405 = 750U;
int64_t x416 = 9630476LL;
int8_t x423 = INT8_MIN;
int64_t x431 = INT64_MIN;
int32_t t60 = 312140728;
volatile uint16_t x441 = 13U;
static uint8_t x443 = UINT8_MAX;
uint64_t x447 = 116819757LLU;
uint16_t x453 = UINT16_MAX;
volatile int32_t x456 = 969585084;
volatile uint32_t t65 = UINT32_MAX;
uint16_t x484 = 8323U;
int64_t t66 = INT64_MAX;
int16_t x495 = -9643;
int16_t x496 = -1;
int8_t x517 = INT8_MAX;
static int8_t x528 = -4;
uint16_t x538 = 1738U;
volatile int16_t x544 = INT16_MIN;
volatile uint32_t x600 = UINT32_MAX;
uint64_t x613 = UINT64_MAX;
int8_t x615 = 2;
uint32_t x651 = 18017U;
uint32_t t84 = 252722U;
static uint32_t x685 = 42U;
uint64_t x688 = 235850047LLU;
uint32_t x694 = 850972764U;
int8_t x696 = 28;
int32_t t89 = 14401;
volatile uint64_t x725 = 507624518183126LLU;
uint32_t x739 = 73782U;
volatile uint32_t x745 = 15752U;
volatile int32_t x746 = INT32_MAX;
uint32_t t96 = 277U;
int32_t x763 = INT32_MIN;
int32_t x772 = INT32_MIN;
uint32_t t98 = 114U;


void f0(void) {
	int64_t x2 = INT64_MIN;
	uint16_t x3 = 138U;
	static volatile uint32_t x4 = 9436U;

	t0 = (x1>>((x2==x3)==x4));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x17 = INT32_MAX;
	uint16_t x18 = 8638U;
	volatile int8_t x20 = INT8_MIN;
	volatile int32_t t1 = INT32_MAX;

	t1 = (x17>>((x18==x19)==x20));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = 757;
	int16_t x22 = INT16_MAX;
	uint32_t x23 = UINT32_MAX;
	static int64_t x24 = -1LL;
	static volatile int32_t t2 = -13255946;

	t2 = (x21>>((x22==x23)==x24));

	if (t2 != 757) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x25 = 3797U;
	int64_t x26 = INT64_MAX;
	int32_t x27 = -481;
	uint8_t x28 = UINT8_MAX;

	t3 = (x25>>((x26==x27)==x28));

	if (t3 != 3797) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x29 = INT64_MAX;
	uint32_t x30 = 5863U;
	int32_t x31 = -62;
	uint64_t x32 = UINT64_MAX;
	int64_t t4 = INT64_MAX;

	t4 = (x29>>((x30==x31)==x32));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = 7;
	volatile int32_t t5 = -5249;

	t5 = (x37>>((x38==x39)==x40));

	if (t5 != 7) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x45 = UINT8_MAX;
	uint8_t x47 = UINT8_MAX;
	uint64_t x48 = 222371LLU;
	int32_t t6 = -208;

	t6 = (x45>>((x46==x47)==x48));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x57 = UINT8_MAX;
	int64_t x59 = 168771740140642926LL;
	int32_t x60 = -1;
	volatile int32_t t7 = 735311;

	t7 = (x57>>((x58==x59)==x60));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x73 = 2;
	static int32_t x75 = INT32_MIN;
	volatile int32_t t8 = 108402;

	t8 = (x73>>((x74==x75)==x76));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x78 = INT8_MIN;
	uint64_t x79 = 35LLU;

	t9 = (x77>>((x78==x79)==x80));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x81 = UINT32_MAX;
	volatile int8_t x82 = INT8_MAX;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x81>>((x82==x83)==x84));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x89 = 194U;
	uint16_t x90 = UINT16_MAX;
	int32_t x91 = -15;
	static int64_t x92 = INT64_MIN;
	uint32_t t11 = 10676U;

	t11 = (x89>>((x90==x91)==x92));

	if (t11 != 194U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x93 = INT16_MAX;
	int32_t x94 = INT32_MIN;
	int8_t x96 = -2;
	volatile int32_t t12 = -62;

	t12 = (x93>>((x94==x95)==x96));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x102 = 5224U;
	int64_t x103 = -1LL;
	volatile int32_t t13 = 134844829;

	t13 = (x101>>((x102==x103)==x104));

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x109 = 11558U;
	uint16_t x110 = 352U;
	uint32_t x111 = UINT32_MAX;
	int16_t x112 = 287;

	t14 = (x109>>((x110==x111)==x112));

	if (t14 != 11558) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x113 = UINT64_MAX;
	int16_t x115 = -124;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (x113>>((x114==x115)==x116));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x117 = INT32_MAX;
	int16_t x118 = 0;
	static int8_t x119 = 0;
	static uint16_t x120 = UINT16_MAX;
	int32_t t16 = INT32_MAX;

	t16 = (x117>>((x118==x119)==x120));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x129 = 4U;
	int32_t x130 = INT32_MAX;
	int32_t x131 = -1;
	static int8_t x132 = -1;
	volatile uint32_t t17 = 6373466U;

	t17 = (x129>>((x130==x131)==x132));

	if (t17 != 4U) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x133 = 579LL;
	static int16_t x134 = -1;
	int16_t x135 = INT16_MAX;
	uint16_t x136 = 14U;
	int64_t t18 = -1084656LL;

	t18 = (x133>>((x134==x135)==x136));

	if (t18 != 579LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x137 = 64U;
	int16_t x138 = 1;
	uint16_t x139 = UINT16_MAX;
	static uint16_t x140 = 344U;
	volatile int32_t t19 = -1;

	t19 = (x137>>((x138==x139)==x140));

	if (t19 != 64) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x141 = 15LLU;
	int8_t x142 = INT8_MIN;
	static int8_t x143 = -1;
	int32_t x144 = -1;
	uint64_t t20 = 58474664682462524LLU;

	t20 = (x141>>((x142==x143)==x144));

	if (t20 != 15LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x153 = 253087LLU;
	volatile uint64_t x154 = UINT64_MAX;
	int32_t x155 = INT32_MAX;
	static int64_t x156 = -87626956LL;

	t21 = (x153>>((x154==x155)==x156));

	if (t21 != 253087LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x157 = 5U;
	int32_t x159 = 323852;
	volatile uint32_t t22 = 5758U;

	t22 = (x157>>((x158==x159)==x160));

	if (t22 != 5U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x177 = 0;
	int16_t x178 = 1453;
	int64_t x179 = INT64_MAX;
	int64_t x180 = INT64_MAX;
	static int32_t t23 = 4068768;

	t23 = (x177>>((x178==x179)==x180));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x190 = 4;
	int32_t x191 = INT32_MIN;
	static int16_t x192 = -2;
	volatile int32_t t24 = 12749;

	t24 = (x189>>((x190==x191)==x192));

	if (t24 != 6) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x209 = 5288U;
	static int64_t x210 = 64253256092LL;
	static int32_t x212 = -1;
	volatile int32_t t25 = 412;

	t25 = (x209>>((x210==x211)==x212));

	if (t25 != 5288) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x213 = 2862793573LLU;
	int16_t x214 = 0;
	volatile int16_t x215 = INT16_MIN;
	static int16_t x216 = INT16_MIN;
	uint64_t t26 = 805LLU;

	t26 = (x213>>((x214==x215)==x216));

	if (t26 != 2862793573LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x218 = INT32_MIN;
	volatile int8_t x220 = INT8_MAX;
	uint32_t t27 = 426228449U;

	t27 = (x217>>((x218==x219)==x220));

	if (t27 != 53073303U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x229 = 1920950405595798552LLU;
	int16_t x231 = 493;
	static volatile uint64_t t28 = 177601LLU;

	t28 = (x229>>((x230==x231)==x232));

	if (t28 != 1920950405595798552LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x233 = 25685;
	int32_t x234 = 1006627973;
	int16_t x235 = -76;
	int8_t x236 = INT8_MAX;
	volatile int32_t t29 = 6492;

	t29 = (x233>>((x234==x235)==x236));

	if (t29 != 25685) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x237 = 50U;
	int64_t x238 = INT64_MIN;
	int64_t x239 = INT64_MIN;
	static volatile int16_t x240 = INT16_MIN;
	volatile uint32_t t30 = 28U;

	t30 = (x237>>((x238==x239)==x240));

	if (t30 != 50U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x243 = 1U;
	static uint64_t t31 = 49655LLU;

	t31 = (x241>>((x242==x243)==x244));

	if (t31 != 918LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x253 = 8101U;
	int64_t x254 = -1LL;
	volatile uint64_t x255 = UINT64_MAX;
	int8_t x256 = INT8_MIN;

	t32 = (x253>>((x254==x255)==x256));

	if (t32 != 8101) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x258 = 79U;
	static int32_t x259 = -1;
	int64_t t33 = INT64_MAX;

	t33 = (x257>>((x258==x259)==x260));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x271 = -444;
	uint32_t x272 = 335162661U;
	volatile int64_t t34 = INT64_MAX;

	t34 = (x269>>((x270==x271)==x272));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x278 = INT16_MIN;
	int64_t x279 = -1LL;
	int16_t x280 = INT16_MIN;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = (x277>>((x278==x279)==x280));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x289 = INT32_MAX;
	volatile int32_t x291 = INT32_MIN;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t36 = INT32_MAX;

	t36 = (x289>>((x290==x291)==x292));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x294 = -1LL;
	int32_t x296 = INT32_MIN;
	int64_t t37 = -56834012234LL;

	t37 = (x293>>((x294==x295)==x296));

	if (t37 != 465391487597580LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x297 = INT16_MAX;
	uint8_t x298 = UINT8_MAX;
	int8_t x299 = -1;
	int64_t x300 = INT64_MAX;
	int32_t t38 = 93194;

	t38 = (x297>>((x298==x299)==x300));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x301 = INT16_MAX;
	static uint8_t x302 = UINT8_MAX;
	volatile uint16_t x303 = UINT16_MAX;
	int32_t x304 = INT32_MIN;
	volatile int32_t t39 = -50065362;

	t39 = (x301>>((x302==x303)==x304));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x305 = 0U;
	int16_t x306 = -1;
	uint16_t x307 = 33U;
	int32_t x308 = 209459910;
	int32_t t40 = 156;

	t40 = (x305>>((x306==x307)==x308));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x313 = 501226617244LLU;
	int8_t x314 = -1;
	int16_t x315 = -1;
	int16_t x316 = 7868;
	volatile uint64_t t41 = 347094132LLU;

	t41 = (x313>>((x314==x315)==x316));

	if (t41 != 501226617244LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x317 = INT64_MAX;
	int64_t x318 = -1LL;
	int64_t x319 = INT64_MIN;
	volatile int64_t t42 = INT64_MAX;

	t42 = (x317>>((x318==x319)==x320));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x325 = 32U;
	int16_t x326 = -20;
	static int8_t x327 = 22;
	int64_t x328 = -3777096LL;
	volatile int32_t t43 = 0;

	t43 = (x325>>((x326==x327)==x328));

	if (t43 != 32) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x332 = 0U;
	volatile int32_t t44 = -6955;

	t44 = (x329>>((x330==x331)==x332));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x334 = 27406097;
	uint64_t x335 = UINT64_MAX;
	volatile int32_t t45 = 1940321;

	t45 = (x333>>((x334==x335)==x336));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x341 = 22U;
	static volatile int64_t x342 = -1LL;
	int8_t x343 = 54;
	uint64_t x344 = UINT64_MAX;
	volatile int32_t t46 = -53;

	t46 = (x341>>((x342==x343)==x344));

	if (t46 != 22) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x351 = INT32_MIN;
	int32_t x352 = INT32_MAX;
	volatile int32_t t47 = 6991;

	t47 = (x349>>((x350==x351)==x352));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x353 = 10434U;
	int32_t x354 = 25201375;
	uint32_t x356 = UINT32_MAX;

	t48 = (x353>>((x354==x355)==x356));

	if (t48 != 10434) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x357 = INT32_MAX;
	uint64_t x358 = UINT64_MAX;
	volatile uint16_t x359 = 15691U;
	uint8_t x360 = UINT8_MAX;
	int32_t t49 = INT32_MAX;

	t49 = (x357>>((x358==x359)==x360));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x365 = 54507080;
	static volatile uint16_t x366 = 398U;
	int64_t x367 = INT64_MIN;
	uint32_t x368 = 36U;
	int32_t t50 = -3;

	t50 = (x365>>((x366==x367)==x368));

	if (t50 != 54507080) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x369 = INT8_MAX;
	uint16_t x371 = 6680U;
	static uint8_t x372 = 92U;
	int32_t t51 = -225109474;

	t51 = (x369>>((x370==x371)==x372));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x385 = 0LLU;
	static int64_t x386 = INT64_MAX;
	uint16_t x387 = 292U;
	static int32_t x388 = INT32_MIN;
	uint64_t t52 = 49566077878LLU;

	t52 = (x385>>((x386==x387)==x388));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x390 = INT8_MIN;
	int64_t x391 = INT64_MIN;
	volatile uint64_t t53 = 216957561LLU;

	t53 = (x389>>((x390==x391)==x392));

	if (t53 != 8579917725868928048LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x393 = 14U;
	int64_t x394 = -7241LL;
	int64_t x395 = INT64_MAX;
	volatile int32_t t54 = 99226;

	t54 = (x393>>((x394==x395)==x396));

	if (t54 != 14) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x406 = 1742U;
	int8_t x407 = 19;
	int64_t x408 = INT64_MIN;
	static volatile int32_t t55 = -32601;

	t55 = (x405>>((x406==x407)==x408));

	if (t55 != 750) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x413 = UINT32_MAX;
	uint8_t x414 = 6U;
	int32_t x415 = 13269;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (x413>>((x414==x415)==x416));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x421 = 0U;
	int16_t x422 = -1;
	int32_t x424 = INT32_MAX;
	volatile int32_t t57 = -14;

	t57 = (x421>>((x422==x423)==x424));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x425 = 6057059LLU;
	volatile uint64_t x426 = 361401550LLU;
	uint8_t x427 = 2U;
	volatile int32_t x428 = 483683;
	static volatile uint64_t t58 = 791LLU;

	t58 = (x425>>((x426==x427)==x428));

	if (t58 != 6057059LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x429 = 4;
	int8_t x430 = INT8_MIN;
	int64_t x432 = 9961LL;
	volatile int32_t t59 = 8;

	t59 = (x429>>((x430==x431)==x432));

	if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x433 = 5U;
	static int16_t x434 = -7;
	uint64_t x435 = 5LLU;
	int8_t x436 = INT8_MIN;

	t60 = (x433>>((x434==x435)==x436));

	if (t60 != 5) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x442 = INT32_MAX;
	int16_t x444 = -1;
	int32_t t61 = 0;

	t61 = (x441>>((x442==x443)==x444));

	if (t61 != 13) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x445 = 50213;
	volatile uint16_t x446 = 7U;
	uint16_t x448 = 2581U;
	volatile int32_t t62 = 4;

	t62 = (x445>>((x446==x447)==x448));

	if (t62 != 50213) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x454 = INT8_MIN;
	int16_t x455 = -1;
	int32_t t63 = -12;

	t63 = (x453>>((x454==x455)==x456));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x461 = UINT8_MAX;
	int16_t x462 = INT16_MIN;
	volatile int32_t x463 = INT32_MIN;
	volatile uint32_t x464 = 174816037U;
	int32_t t64 = -1;

	t64 = (x461>>((x462==x463)==x464));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x477 = UINT32_MAX;
	int64_t x478 = INT64_MIN;
	int64_t x479 = INT64_MAX;
	int8_t x480 = -1;

	t65 = (x477>>((x478==x479)==x480));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x481 = INT64_MAX;
	uint32_t x482 = 212583084U;
	uint16_t x483 = 18194U;

	t66 = (x481>>((x482==x483)==x484));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x493 = INT16_MAX;
	static uint16_t x494 = 0U;
	volatile int32_t t67 = 519850;

	t67 = (x493>>((x494==x495)==x496));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x497 = 0LLU;
	static uint16_t x498 = 486U;
	int8_t x499 = -1;
	uint64_t x500 = UINT64_MAX;
	volatile uint64_t t68 = 20LLU;

	t68 = (x497>>((x498==x499)==x500));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x501 = 558U;
	int16_t x502 = INT16_MAX;
	static int32_t x503 = -1;
	static int16_t x504 = -6;
	int32_t t69 = -105577;

	t69 = (x501>>((x502==x503)==x504));

	if (t69 != 558) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x505 = 0U;
	int32_t x506 = INT32_MAX;
	int64_t x507 = INT64_MIN;
	volatile int32_t x508 = -1378209;
	int32_t t70 = -895;

	t70 = (x505>>((x506==x507)==x508));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x509 = 63U;
	int32_t x510 = -10078;
	int16_t x511 = -252;
	uint32_t x512 = UINT32_MAX;
	int32_t t71 = 10100;

	t71 = (x509>>((x510==x511)==x512));

	if (t71 != 63) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x518 = -1;
	int64_t x519 = INT64_MIN;
	static volatile int64_t x520 = -1LL;
	volatile int32_t t72 = 808;

	t72 = (x517>>((x518==x519)==x520));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x525 = 24LLU;
	int64_t x526 = -1LL;
	static volatile uint16_t x527 = 1208U;
	volatile uint64_t t73 = 888886945LLU;

	t73 = (x525>>((x526==x527)==x528));

	if (t73 != 24LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x537 = 15U;
	volatile int64_t x539 = -1LL;
	int64_t x540 = INT64_MIN;
	volatile int32_t t74 = -99745289;

	t74 = (x537>>((x538==x539)==x540));

	if (t74 != 15) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x541 = 518;
	int8_t x542 = INT8_MAX;
	static int32_t x543 = -2993942;
	int32_t t75 = 4788;

	t75 = (x541>>((x542==x543)==x544));

	if (t75 != 518) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x561 = INT64_MAX;
	volatile int16_t x562 = INT16_MAX;
	volatile int64_t x563 = INT64_MIN;
	static volatile int16_t x564 = INT16_MIN;
	int64_t t76 = INT64_MAX;

	t76 = (x561>>((x562==x563)==x564));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x569 = 6867LL;
	uint32_t x570 = 1084632U;
	int64_t x571 = -2042187474LL;
	uint64_t x572 = 428188LLU;
	int64_t t77 = 3691200LL;

	t77 = (x569>>((x570==x571)==x572));

	if (t77 != 6867LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x585 = 1;
	volatile int16_t x586 = INT16_MIN;
	static uint16_t x587 = 2U;
	uint8_t x588 = 0U;
	static volatile int32_t t78 = -29864337;

	t78 = (x585>>((x586==x587)==x588));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x597 = 44;
	static volatile uint64_t x598 = 412561LLU;
	int32_t x599 = INT32_MIN;
	volatile int32_t t79 = 0;

	t79 = (x597>>((x598==x599)==x600));

	if (t79 != 44) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x614 = -1LL;
	int64_t x616 = 204361LL;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = (x613>>((x614==x615)==x616));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x645 = INT16_MAX;
	int64_t x646 = INT64_MIN;
	int64_t x647 = INT64_MAX;
	int8_t x648 = -1;
	int32_t t81 = -1001390;

	t81 = (x645>>((x646==x647)==x648));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x649 = 7051U;
	int32_t x650 = INT32_MIN;
	int16_t x652 = 2986;
	volatile int32_t t82 = -245827682;

	t82 = (x649>>((x650==x651)==x652));

	if (t82 != 7051) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x653 = INT64_MAX;
	static uint64_t x654 = 1405881422896839527LLU;
	int8_t x655 = 14;
	int16_t x656 = -1;
	volatile int64_t t83 = INT64_MAX;

	t83 = (x653>>((x654==x655)==x656));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x657 = 5587387U;
	int8_t x658 = INT8_MAX;
	uint64_t x659 = 1825312774LLU;
	volatile uint64_t x660 = UINT64_MAX;

	t84 = (x657>>((x658==x659)==x660));

	if (t84 != 5587387U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x661 = 117U;
	volatile uint32_t x662 = 1669940U;
	int8_t x663 = INT8_MIN;
	volatile int8_t x664 = INT8_MIN;
	volatile int32_t t85 = 379;

	t85 = (x661>>((x662==x663)==x664));

	if (t85 != 117) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x677 = 2838;
	volatile int16_t x678 = INT16_MIN;
	int32_t x679 = -1;
	int32_t x680 = -1;
	volatile int32_t t86 = -4867437;

	t86 = (x677>>((x678==x679)==x680));

	if (t86 != 2838) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x686 = INT16_MIN;
	int16_t x687 = -1;
	volatile uint32_t t87 = 1628143U;

	t87 = (x685>>((x686==x687)==x688));

	if (t87 != 42U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x689 = UINT32_MAX;
	uint64_t x690 = UINT64_MAX;
	static uint64_t x691 = 1188997405345704711LLU;
	volatile int8_t x692 = INT8_MIN;
	volatile uint32_t t88 = UINT32_MAX;

	t88 = (x689>>((x690==x691)==x692));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x693 = 13U;
	int8_t x695 = INT8_MIN;

	t89 = (x693>>((x694==x695)==x696));

	if (t89 != 13) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x697 = 8889U;
	int64_t x698 = -1LL;
	int32_t x699 = INT32_MIN;
	volatile int8_t x700 = 9;
	volatile int32_t t90 = -3;

	t90 = (x697>>((x698==x699)==x700));

	if (t90 != 8889) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x705 = UINT8_MAX;
	uint64_t x706 = 2913740543LLU;
	volatile int64_t x707 = INT64_MIN;
	uint8_t x708 = 0U;
	int32_t t91 = -43149122;

	t91 = (x705>>((x706==x707)==x708));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x709 = 56988700999729LLU;
	uint8_t x710 = 25U;
	uint16_t x711 = 14U;
	uint8_t x712 = 1U;
	uint64_t t92 = 423066LLU;

	t92 = (x709>>((x710==x711)==x712));

	if (t92 != 56988700999729LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x726 = INT64_MIN;
	uint64_t x727 = 5509156185699576984LLU;
	uint32_t x728 = 1572150302U;
	volatile uint64_t t93 = 3421642152340089LLU;

	t93 = (x725>>((x726==x727)==x728));

	if (t93 != 507624518183126LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x729 = INT8_MAX;
	int32_t x730 = -54;
	uint64_t x731 = 411979LLU;
	int8_t x732 = 7;
	int32_t t94 = 3478286;

	t94 = (x729>>((x730==x731)==x732));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x737 = 1905289LLU;
	int64_t x738 = INT64_MAX;
	uint16_t x740 = 11292U;
	uint64_t t95 = 1LLU;

	t95 = (x737>>((x738==x739)==x740));

	if (t95 != 1905289LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x747 = -1LL;
	uint16_t x748 = 238U;

	t96 = (x745>>((x746==x747)==x748));

	if (t96 != 15752U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x761 = INT8_MAX;
	int16_t x762 = INT16_MIN;
	int8_t x764 = -1;
	volatile int32_t t97 = -11404024;

	t97 = (x761>>((x762==x763)==x764));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x769 = 1745672128U;
	uint16_t x770 = 1909U;
	int64_t x771 = INT64_MIN;

	t98 = (x769>>((x770==x771)==x772));

	if (t98 != 1745672128U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x773 = INT16_MAX;
	int64_t x774 = -622LL;
	uint32_t x775 = 2201762U;
	uint16_t x776 = UINT16_MAX;
	volatile int32_t t99 = -1;

	t99 = (x773>>((x774==x775)==x776));

	if (t99 != 32767) { NG(); } else { ; }
	
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

