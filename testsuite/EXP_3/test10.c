#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x11 = 256U;
int8_t x16 = INT8_MIN;
uint32_t x27 = 6U;
static int16_t x28 = -9;
int32_t x30 = INT32_MIN;
uint64_t x33 = 2333944LLU;
int32_t t11 = -178;
volatile int16_t x60 = INT16_MIN;
int16_t x63 = INT16_MAX;
int32_t t13 = -20261;
int32_t x69 = INT32_MIN;
int32_t t15 = 982;
int8_t x80 = -23;
int32_t t17 = -15;
static volatile uint8_t x88 = UINT8_MAX;
int16_t x94 = -2461;
uint32_t x97 = 1U;
static uint32_t x100 = 5794882U;
uint8_t x101 = 14U;
static uint8_t x102 = UINT8_MAX;
volatile int32_t t22 = 3389;
volatile int32_t x106 = -127407559;
volatile uint8_t x121 = 9U;
uint8_t x128 = 7U;
volatile int32_t t28 = -8;
uint32_t x149 = 7U;
int8_t x157 = -1;
int16_t x160 = 0;
static int8_t x173 = -1;
int32_t t37 = 2;
int32_t x188 = 0;
static int32_t x189 = INT32_MAX;
int8_t x190 = INT8_MIN;
uint8_t x198 = UINT8_MAX;
volatile int32_t t41 = 6;
int64_t x206 = INT64_MIN;
int64_t x207 = -1LL;
uint16_t x212 = 20U;
int8_t x213 = -1;
uint64_t x216 = 5020509661472511471LLU;
uint32_t x218 = UINT32_MAX;
uint16_t x220 = UINT16_MAX;
int32_t x221 = -5;
uint8_t x224 = 0U;
volatile int32_t t49 = 6460914;
int16_t x260 = -167;
uint8_t x279 = 51U;
int64_t x280 = 493LL;
static volatile int32_t t55 = -175;
int16_t x289 = INT16_MIN;
int32_t x292 = -1;
int64_t x295 = -3016821536955733LL;
static volatile int8_t x307 = INT8_MIN;
static volatile int32_t t61 = 3177;
static int32_t t63 = -1;
int32_t x326 = INT32_MIN;
int32_t x338 = -432272;
uint32_t x340 = 48222193U;
uint8_t x347 = 73U;
volatile int32_t x350 = -1;
int64_t x361 = INT64_MAX;
int32_t t72 = -49;
static uint8_t x371 = 6U;
uint16_t x374 = 146U;
uint8_t x384 = 127U;
uint32_t x392 = 120U;
int64_t x397 = 464909LL;
int32_t t78 = 58;
volatile int16_t x416 = -1;
static int8_t x417 = -1;
volatile int64_t x431 = INT64_MAX;
volatile uint8_t x438 = UINT8_MAX;
int32_t x445 = 1016313474;
static volatile int64_t x448 = -1LL;
uint64_t x456 = 2779472617047LLU;
int64_t x460 = -570697155969762399LL;
static int8_t x462 = INT8_MIN;
static volatile int32_t t88 = 959;
int32_t x466 = INT32_MAX;
volatile int32_t t89 = -8886805;
static uint32_t x474 = 4262112U;
int16_t x477 = INT16_MIN;
static int8_t x487 = 4;
volatile int32_t t95 = 399935;
uint32_t x514 = 2854U;
static int16_t x517 = INT16_MAX;
volatile uint16_t x518 = 632U;
int32_t x520 = INT32_MIN;
int8_t x521 = INT8_MAX;
volatile int8_t x525 = -1;
int32_t x526 = 5787;


void f0(void) {
	uint8_t x1 = 12U;
	volatile int8_t x2 = INT8_MAX;
	int8_t x3 = INT8_MAX;
	int16_t x4 = -1;
	static int32_t t0 = 3;

	t0 = ((x1+x2)<=(x3+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = -1;
	uint64_t x6 = 4151733059646074894LLU;
	uint64_t x7 = UINT64_MAX;
	uint8_t x8 = 0U;
	volatile int32_t t1 = -927;

	t1 = ((x5+x6)<=(x7+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 5971;
	uint64_t x10 = 664634577525LLU;
	int32_t x12 = -1;
	volatile int32_t t2 = 124744;

	t2 = ((x9+x10)<=(x11+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int16_t x14 = INT16_MIN;
	uint8_t x15 = 40U;
	volatile int32_t t3 = 3566150;

	t3 = ((x13+x14)<=(x15+x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -20187954LL;
	int8_t x18 = -1;
	uint64_t x19 = 4423149LLU;
	volatile int8_t x20 = 0;
	volatile int32_t t4 = 2;

	t4 = ((x17+x18)<=(x19+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	static volatile uint64_t x22 = 319LLU;
	static int8_t x23 = 7;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 244336460;

	t5 = ((x21+x22)<=(x23+x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int8_t x26 = 11;
	int32_t t6 = 1043;

	t6 = ((x25+x26)<=(x27+x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	uint16_t x31 = UINT16_MAX;
	static uint64_t x32 = UINT64_MAX;
	volatile int32_t t7 = -31872;

	t7 = ((x29+x30)<=(x31+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = 367;
	int32_t x35 = INT32_MAX;
	int32_t x36 = -1;
	volatile int32_t t8 = 1;

	t8 = ((x33+x34)<=(x35+x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = 1389;
	volatile int64_t x42 = INT64_MIN;
	int32_t x43 = INT32_MAX;
	uint64_t x44 = UINT64_MAX;
	static int32_t t9 = -752194239;

	t9 = ((x41+x42)<=(x43+x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MAX;
	static int16_t x46 = INT16_MIN;
	uint32_t x47 = UINT32_MAX;
	volatile int16_t x48 = INT16_MIN;
	int32_t t10 = 350;

	t10 = ((x45+x46)<=(x47+x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = INT8_MIN;
	uint32_t x54 = 748041U;
	int16_t x55 = -1;
	volatile uint8_t x56 = UINT8_MAX;

	t11 = ((x53+x54)<=(x55+x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MAX;
	int16_t x58 = INT16_MIN;
	static uint8_t x59 = 40U;
	volatile int32_t t12 = 2;

	t12 = ((x57+x58)<=(x59+x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x61 = UINT32_MAX;
	uint8_t x62 = UINT8_MAX;
	static int16_t x64 = -1;

	t13 = ((x61+x62)<=(x63+x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = 25LLU;
	int64_t x66 = -777683959LL;
	uint32_t x67 = 703U;
	int16_t x68 = INT16_MIN;
	int32_t t14 = -855275948;

	t14 = ((x65+x66)<=(x67+x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x70 = 0;
	static int8_t x71 = 21;
	int16_t x72 = INT16_MAX;

	t15 = ((x69+x70)<=(x71+x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 14U;
	static int32_t x78 = INT32_MIN;
	int8_t x79 = -1;
	volatile int32_t t16 = 1;

	t16 = ((x77+x78)<=(x79+x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x81 = INT64_MIN;
	volatile uint16_t x82 = 0U;
	int64_t x83 = 17LL;
	int8_t x84 = INT8_MAX;

	t17 = ((x81+x82)<=(x83+x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = 409517U;
	int32_t x86 = 68;
	int8_t x87 = INT8_MIN;
	int32_t t18 = 2;

	t18 = ((x85+x86)<=(x87+x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = 15U;
	uint8_t x90 = 27U;
	uint32_t x91 = 0U;
	uint64_t x92 = 1039882802049LLU;
	int32_t t19 = -28;

	t19 = ((x89+x90)<=(x91+x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = UINT64_MAX;
	int32_t x95 = 36972589;
	volatile uint16_t x96 = UINT16_MAX;
	volatile int32_t t20 = 1;

	t20 = ((x93+x94)<=(x95+x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MIN;
	volatile int32_t t21 = 374135;

	t21 = ((x97+x98)<=(x99+x100));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x103 = UINT64_MAX;
	uint16_t x104 = 6994U;

	t22 = ((x101+x102)<=(x103+x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x105 = -2356003;
	uint32_t x107 = 174800U;
	int64_t x108 = 1LL;
	static int32_t t23 = 141;

	t23 = ((x105+x106)<=(x107+x108));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = INT64_MAX;
	volatile int8_t x110 = INT8_MIN;
	int32_t x111 = -420489899;
	int32_t x112 = 924540;
	volatile int32_t t24 = 1;

	t24 = ((x109+x110)<=(x111+x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = 10U;
	uint64_t x118 = UINT64_MAX;
	static int8_t x119 = -1;
	uint64_t x120 = 113158LLU;
	int32_t t25 = -3461583;

	t25 = ((x117+x118)<=(x119+x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x122 = -1;
	static uint32_t x123 = 297U;
	int16_t x124 = -4898;
	volatile int32_t t26 = 11;

	t26 = ((x121+x122)<=(x123+x124));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x125 = UINT64_MAX;
	uint16_t x126 = 7783U;
	volatile int16_t x127 = 0;
	int32_t t27 = -2;

	t27 = ((x125+x126)<=(x127+x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = UINT64_MAX;
	volatile uint8_t x130 = UINT8_MAX;
	uint32_t x131 = UINT32_MAX;
	int8_t x132 = -1;

	t28 = ((x129+x130)<=(x131+x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = 94;
	uint8_t x138 = 1U;
	int8_t x139 = INT8_MAX;
	static uint16_t x140 = 39U;
	int32_t t29 = 7021;

	t29 = ((x137+x138)<=(x139+x140));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = -1;
	uint8_t x142 = 120U;
	int16_t x143 = -1;
	uint32_t x144 = 50074U;
	int32_t t30 = 5482272;

	t30 = ((x141+x142)<=(x143+x144));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x145 = 515U;
	volatile int16_t x146 = INT16_MAX;
	static int8_t x147 = 17;
	volatile int16_t x148 = INT16_MIN;
	static volatile int32_t t31 = -1;

	t31 = ((x145+x146)<=(x147+x148));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x150 = -55;
	int32_t x151 = INT32_MIN;
	volatile int16_t x152 = INT16_MAX;
	volatile int32_t t32 = 34;

	t32 = ((x149+x150)<=(x151+x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x158 = -1;
	int32_t x159 = INT32_MAX;
	volatile int32_t t33 = 49648406;

	t33 = ((x157+x158)<=(x159+x160));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x161 = -148031LL;
	int16_t x162 = -1;
	uint64_t x163 = UINT64_MAX;
	uint64_t x164 = UINT64_MAX;
	volatile int32_t t34 = -118;

	t34 = ((x161+x162)<=(x163+x164));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x169 = UINT64_MAX;
	static int16_t x170 = INT16_MIN;
	uint32_t x171 = UINT32_MAX;
	static uint16_t x172 = 26688U;
	volatile int32_t t35 = -1;

	t35 = ((x169+x170)<=(x171+x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x174 = INT8_MIN;
	volatile int64_t x175 = INT64_MIN;
	int64_t x176 = 64586LL;
	int32_t t36 = 126;

	t36 = ((x173+x174)<=(x175+x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x181 = -14356760;
	uint16_t x182 = 1U;
	volatile uint16_t x183 = 63U;
	uint64_t x184 = UINT64_MAX;

	t37 = ((x181+x182)<=(x183+x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = 2970;
	int8_t x186 = 14;
	static volatile int32_t x187 = INT32_MIN;
	static volatile int32_t t38 = 7;

	t38 = ((x185+x186)<=(x187+x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x191 = -1;
	volatile int32_t x192 = -532197074;
	int32_t t39 = -181892;

	t39 = ((x189+x190)<=(x191+x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = INT32_MAX;
	static int8_t x194 = INT8_MIN;
	int8_t x195 = -1;
	static uint16_t x196 = 5U;
	volatile int32_t t40 = 2;

	t40 = ((x193+x194)<=(x195+x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x197 = UINT16_MAX;
	int32_t x199 = -1;
	volatile int64_t x200 = 111LL;

	t41 = ((x197+x198)<=(x199+x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x205 = 89974353LLU;
	uint32_t x208 = 47U;
	static int32_t t42 = -134625;

	t42 = ((x205+x206)<=(x207+x208));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x209 = 30946U;
	volatile int16_t x210 = 61;
	int32_t x211 = INT32_MIN;
	int32_t t43 = 350809;

	t43 = ((x209+x210)<=(x211+x212));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x214 = UINT8_MAX;
	int32_t x215 = INT32_MIN;
	volatile int32_t t44 = -37818;

	t44 = ((x213+x214)<=(x215+x216));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x217 = 4595748956512LLU;
	uint64_t x219 = 5653634013LLU;
	volatile int32_t t45 = 4294075;

	t45 = ((x217+x218)<=(x219+x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x222 = -20;
	volatile uint64_t x223 = UINT64_MAX;
	int32_t t46 = 52037057;

	t46 = ((x221+x222)<=(x223+x224));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x233 = -177;
	int32_t x234 = -6782;
	volatile int8_t x235 = INT8_MAX;
	int32_t x236 = INT32_MIN;
	volatile int32_t t47 = -915600;

	t47 = ((x233+x234)<=(x235+x236));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x241 = INT16_MIN;
	uint32_t x242 = 1663U;
	uint32_t x243 = UINT32_MAX;
	uint64_t x244 = 195459LLU;
	int32_t t48 = -598307;

	t48 = ((x241+x242)<=(x243+x244));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x245 = 531937115879488207LLU;
	int32_t x246 = INT32_MAX;
	uint32_t x247 = 6340290U;
	int8_t x248 = 7;

	t49 = ((x245+x246)<=(x247+x248));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x253 = INT16_MIN;
	int8_t x254 = -1;
	int32_t x255 = 1973;
	int16_t x256 = 0;
	int32_t t50 = -12;

	t50 = ((x253+x254)<=(x255+x256));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x257 = 1212272372181LL;
	int8_t x258 = -9;
	uint8_t x259 = UINT8_MAX;
	int32_t t51 = -844672506;

	t51 = ((x257+x258)<=(x259+x260));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x269 = 8U;
	int8_t x270 = -38;
	int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MIN;
	int32_t t52 = -282219;

	t52 = ((x269+x270)<=(x271+x272));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x277 = UINT64_MAX;
	int8_t x278 = INT8_MIN;
	volatile int32_t t53 = 123;

	t53 = ((x277+x278)<=(x279+x280));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x281 = UINT8_MAX;
	int64_t x282 = 531519513240701LL;
	static int8_t x283 = -1;
	volatile int64_t x284 = -1LL;
	volatile int32_t t54 = 2307717;

	t54 = ((x281+x282)<=(x283+x284));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x285 = INT64_MAX;
	volatile uint64_t x286 = UINT64_MAX;
	int32_t x287 = INT32_MAX;
	int8_t x288 = INT8_MIN;

	t55 = ((x285+x286)<=(x287+x288));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x290 = -24;
	int16_t x291 = -8501;
	int32_t t56 = 15487194;

	t56 = ((x289+x290)<=(x291+x292));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x293 = 45U;
	volatile uint8_t x294 = UINT8_MAX;
	uint64_t x296 = UINT64_MAX;
	volatile int32_t t57 = -53915;

	t57 = ((x293+x294)<=(x295+x296));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x301 = 11748;
	int32_t x302 = -1;
	volatile uint64_t x303 = UINT64_MAX;
	int32_t x304 = -1;
	static volatile int32_t t58 = -5;

	t58 = ((x301+x302)<=(x303+x304));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x305 = 7U;
	static uint32_t x306 = 127137U;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t59 = 9;

	t59 = ((x305+x306)<=(x307+x308));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x309 = 222286884352120LLU;
	int16_t x310 = INT16_MAX;
	volatile int8_t x311 = 4;
	int64_t x312 = 54785409LL;
	volatile int32_t t60 = -536033;

	t60 = ((x309+x310)<=(x311+x312));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x313 = UINT16_MAX;
	static volatile int8_t x314 = INT8_MAX;
	static uint16_t x315 = 24U;
	int8_t x316 = INT8_MIN;

	t61 = ((x313+x314)<=(x315+x316));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x317 = -1;
	int8_t x318 = 16;
	int8_t x319 = INT8_MIN;
	int16_t x320 = -1;
	int32_t t62 = -6834044;

	t62 = ((x317+x318)<=(x319+x320));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x321 = -625272484091LL;
	int16_t x322 = INT16_MIN;
	static volatile uint8_t x323 = 0U;
	int16_t x324 = INT16_MAX;

	t63 = ((x321+x322)<=(x323+x324));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x325 = 3;
	uint64_t x327 = 205345LLU;
	int32_t x328 = INT32_MAX;
	volatile int32_t t64 = -451;

	t64 = ((x325+x326)<=(x327+x328));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x329 = 1711U;
	static int32_t x330 = 2534867;
	int64_t x331 = INT64_MIN;
	uint64_t x332 = 1284728533211LLU;
	int32_t t65 = -193;

	t65 = ((x329+x330)<=(x331+x332));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x333 = INT8_MAX;
	int16_t x334 = -1;
	int16_t x335 = INT16_MIN;
	volatile int8_t x336 = 11;
	int32_t t66 = 619;

	t66 = ((x333+x334)<=(x335+x336));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x337 = INT16_MIN;
	int32_t x339 = 44991;
	volatile int32_t t67 = 766;

	t67 = ((x337+x338)<=(x339+x340));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x345 = INT8_MAX;
	uint64_t x346 = UINT64_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t68 = 1;

	t68 = ((x345+x346)<=(x347+x348));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x349 = -1;
	uint8_t x351 = UINT8_MAX;
	static uint64_t x352 = 12479719507LLU;
	int32_t t69 = -760187;

	t69 = ((x349+x350)<=(x351+x352));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x357 = -1;
	volatile int64_t x358 = 1LL;
	volatile int8_t x359 = INT8_MAX;
	static uint32_t x360 = UINT32_MAX;
	int32_t t70 = -16382;

	t70 = ((x357+x358)<=(x359+x360));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x362 = UINT64_MAX;
	static int8_t x363 = INT8_MAX;
	uint32_t x364 = 314372476U;
	static int32_t t71 = -952665;

	t71 = ((x361+x362)<=(x363+x364));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x365 = INT16_MAX;
	uint32_t x366 = 11266625U;
	static int64_t x367 = INT64_MIN;
	uint16_t x368 = 230U;

	t72 = ((x365+x366)<=(x367+x368));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x369 = -1;
	uint16_t x370 = 7369U;
	int8_t x372 = INT8_MAX;
	int32_t t73 = -809050859;

	t73 = ((x369+x370)<=(x371+x372));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x373 = 0U;
	int16_t x375 = INT16_MIN;
	volatile int64_t x376 = -3815614LL;
	volatile int32_t t74 = -109402131;

	t74 = ((x373+x374)<=(x375+x376));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x381 = UINT16_MAX;
	int16_t x382 = -1;
	int16_t x383 = -1;
	int32_t t75 = 2010471;

	t75 = ((x381+x382)<=(x383+x384));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x389 = INT32_MAX;
	uint32_t x390 = UINT32_MAX;
	static int64_t x391 = INT64_MIN;
	int32_t t76 = 1;

	t76 = ((x389+x390)<=(x391+x392));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x393 = 15U;
	int8_t x394 = 2;
	volatile int64_t x395 = INT64_MIN;
	volatile uint16_t x396 = 89U;
	int32_t t77 = -1;

	t77 = ((x393+x394)<=(x395+x396));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x398 = INT32_MAX;
	static int32_t x399 = INT32_MIN;
	volatile int64_t x400 = 1316836324298668718LL;

	t78 = ((x397+x398)<=(x399+x400));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x401 = 124U;
	volatile int64_t x402 = -1LL;
	volatile int64_t x403 = -1LL;
	int8_t x404 = INT8_MIN;
	int32_t t79 = 313634;

	t79 = ((x401+x402)<=(x403+x404));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x409 = INT16_MIN;
	static int8_t x410 = INT8_MAX;
	int64_t x411 = 0LL;
	volatile int64_t x412 = INT64_MAX;
	volatile int32_t t80 = -46472892;

	t80 = ((x409+x410)<=(x411+x412));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x413 = 50730313;
	static volatile uint16_t x414 = UINT16_MAX;
	int16_t x415 = INT16_MIN;
	volatile int32_t t81 = 736;

	t81 = ((x413+x414)<=(x415+x416));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x418 = 25289U;
	static uint8_t x419 = 22U;
	uint64_t x420 = 1558120197208LLU;
	volatile int32_t t82 = -39503;

	t82 = ((x417+x418)<=(x419+x420));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x429 = 2760583891965782493LL;
	volatile uint64_t x430 = 69225094006LLU;
	int8_t x432 = -1;
	volatile int32_t t83 = -937082442;

	t83 = ((x429+x430)<=(x431+x432));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x437 = 0;
	static uint32_t x439 = 2958579U;
	int8_t x440 = 3;
	int32_t t84 = 0;

	t84 = ((x437+x438)<=(x439+x440));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x446 = 123;
	uint32_t x447 = 48U;
	static int32_t t85 = -5792970;

	t85 = ((x445+x446)<=(x447+x448));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x453 = 51U;
	volatile int32_t x454 = 946576;
	uint32_t x455 = 16203821U;
	volatile int32_t t86 = 263;

	t86 = ((x453+x454)<=(x455+x456));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x457 = 1;
	volatile int32_t x458 = 37076;
	int8_t x459 = -1;
	volatile int32_t t87 = 69982887;

	t87 = ((x457+x458)<=(x459+x460));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x461 = 15LLU;
	uint8_t x463 = 28U;
	static uint64_t x464 = 73365207437386LLU;

	t88 = ((x461+x462)<=(x463+x464));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x465 = UINT64_MAX;
	int32_t x467 = -3;
	volatile int32_t x468 = -1;

	t89 = ((x465+x466)<=(x467+x468));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x473 = UINT8_MAX;
	int16_t x475 = -1;
	int32_t x476 = INT32_MAX;
	volatile int32_t t90 = -259187599;

	t90 = ((x473+x474)<=(x475+x476));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x478 = 26430;
	volatile int32_t x479 = -1;
	uint16_t x480 = 1668U;
	int32_t t91 = -42431538;

	t91 = ((x477+x478)<=(x479+x480));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x481 = INT32_MIN;
	static int64_t x482 = 27949370935202204LL;
	volatile uint64_t x483 = UINT64_MAX;
	int16_t x484 = INT16_MIN;
	volatile int32_t t92 = 16022;

	t92 = ((x481+x482)<=(x483+x484));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x485 = INT8_MAX;
	uint32_t x486 = 79U;
	int32_t x488 = -1;
	volatile int32_t t93 = -1191624;

	t93 = ((x485+x486)<=(x487+x488));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x493 = INT8_MAX;
	uint64_t x494 = 67727548466708LLU;
	uint8_t x495 = 3U;
	uint16_t x496 = UINT16_MAX;
	int32_t t94 = 8973625;

	t94 = ((x493+x494)<=(x495+x496));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x509 = 170;
	uint8_t x510 = UINT8_MAX;
	volatile int8_t x511 = -1;
	uint32_t x512 = 1015367U;

	t95 = ((x509+x510)<=(x511+x512));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x513 = UINT64_MAX;
	static int32_t x515 = -29997482;
	int32_t x516 = 184;
	int32_t t96 = 6313681;

	t96 = ((x513+x514)<=(x515+x516));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x519 = -60LL;
	static int32_t t97 = -28319342;

	t97 = ((x517+x518)<=(x519+x520));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x522 = 3U;
	uint8_t x523 = 1U;
	int8_t x524 = INT8_MAX;
	static volatile int32_t t98 = -895280426;

	t98 = ((x521+x522)<=(x523+x524));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x527 = INT32_MIN;
	static uint32_t x528 = 5392833U;
	static int32_t t99 = -743617684;

	t99 = ((x525+x526)<=(x527+x528));

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

