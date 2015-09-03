#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = -12183;
uint32_t x4 = 0U;
int8_t x5 = INT8_MIN;
int32_t t1 = 16145344;
int32_t x13 = -185063716;
static int8_t x15 = 35;
uint32_t x22 = UINT32_MAX;
int64_t x23 = INT64_MAX;
int8_t x29 = 2;
volatile int32_t t5 = 461;
volatile int32_t t6 = -243449;
int64_t x40 = 33LL;
int16_t x42 = INT16_MIN;
static volatile int32_t t8 = -1871;
uint16_t x47 = 51U;
int8_t x50 = INT8_MAX;
uint8_t x59 = 27U;
volatile int64_t x69 = -205LL;
static int16_t x70 = INT16_MIN;
int32_t t17 = -100830045;
uint32_t x104 = 204918250U;
volatile int32_t t18 = -1940;
uint64_t x113 = 29345943199808902LLU;
int64_t x114 = -4233416425LL;
uint32_t x129 = 59U;
volatile int8_t x132 = INT8_MAX;
uint32_t x136 = UINT32_MAX;
volatile int32_t t23 = 43669;
uint64_t x141 = 432799083438LLU;
int64_t x150 = -1LL;
static uint16_t x157 = UINT16_MAX;
int16_t x161 = INT16_MIN;
int8_t x162 = 25;
int8_t x163 = INT8_MIN;
int16_t x164 = INT16_MIN;
int16_t x170 = INT16_MAX;
uint32_t x177 = UINT32_MAX;
uint32_t x178 = 50U;
volatile int16_t x179 = INT16_MAX;
uint32_t x180 = 2047083U;
static uint8_t x189 = 4U;
int32_t x190 = INT32_MAX;
volatile int32_t t34 = -45519;
uint8_t x233 = UINT8_MAX;
int32_t t38 = -229164;
static uint64_t x243 = 289595333LLU;
volatile int8_t x248 = INT8_MAX;
static int64_t x252 = 311413602LL;
int16_t x257 = INT16_MAX;
volatile int16_t x258 = -1;
int16_t x259 = INT16_MIN;
uint8_t x266 = 8U;
uint32_t x275 = 731716413U;
volatile int32_t t50 = -220;
static uint32_t x292 = UINT32_MAX;
volatile int32_t t51 = -442602;
uint8_t x296 = UINT8_MAX;
volatile int32_t t52 = -1937;
int32_t x311 = -34225;
int32_t t55 = -20739209;
int8_t x324 = -1;
static volatile int32_t t63 = 24;
int64_t x373 = INT64_MIN;
uint64_t x383 = 3852425285988LLU;
volatile int64_t x384 = 186629248926621LL;
int32_t x386 = INT32_MAX;
static uint32_t x394 = UINT32_MAX;
volatile uint64_t x396 = 0LLU;
int8_t x399 = -2;
int32_t t70 = -1;
int16_t x402 = -1;
int64_t x403 = -25939750162644444LL;
static volatile int32_t t73 = -946583372;
static int32_t x429 = 399178846;
int32_t t74 = -207207369;
int32_t x437 = INT32_MIN;
int8_t x446 = INT8_MIN;
static uint16_t x457 = UINT16_MAX;
static int32_t t79 = 6091;
volatile uint16_t x472 = 25421U;
volatile uint64_t x473 = UINT64_MAX;
int32_t x490 = 29750;
uint16_t x494 = 2U;
int32_t t84 = 89749;
uint16_t x498 = 25442U;
static int64_t x501 = INT64_MIN;
volatile int8_t x511 = 10;
int8_t x512 = 1;
uint8_t x533 = 48U;
volatile int8_t x534 = -1;
uint64_t x540 = 4LLU;
uint8_t x541 = 0U;
int64_t x544 = -1685611LL;
volatile int8_t x545 = -1;
int16_t x548 = INT16_MIN;
static int32_t t95 = 202;
uint8_t x553 = 0U;
volatile int16_t x556 = 79;
int32_t t97 = 522496387;
static uint64_t x557 = 275139333030879043LLU;
int32_t x559 = 58;
volatile int8_t x565 = -1;
int16_t x567 = 0;


void f0(void) {
	volatile int8_t x2 = INT8_MIN;
	static volatile int64_t x3 = INT64_MIN;
	static volatile int32_t t0 = -397597;

	t0 = ((x1<x2)==(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x6 = 477852162798LLU;
	uint8_t x7 = UINT8_MAX;
	uint64_t x8 = 4223229385266LLU;

	t1 = ((x5<x6)==(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = 2113075LL;
	static uint32_t x16 = 3383384U;
	static int32_t t2 = 0;

	t2 = ((x13<x14)==(x15*x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x21 = -291;
	int64_t x24 = -1LL;
	int32_t t3 = -142655;

	t3 = ((x21<x22)==(x23*x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -1;
	int8_t x26 = -1;
	int32_t x27 = -1;
	int64_t x28 = 302LL;
	int32_t t4 = -20544734;

	t4 = ((x25<x26)==(x27*x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x30 = 26U;
	static int16_t x31 = -1;
	uint8_t x32 = UINT8_MAX;

	t5 = ((x29<x30)==(x31*x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MAX;
	volatile uint8_t x34 = UINT8_MAX;
	static int64_t x35 = 7LL;
	int16_t x36 = INT16_MAX;

	t6 = ((x33<x34)==(x35*x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 926LLU;
	int8_t x38 = INT8_MAX;
	int16_t x39 = 8;
	int32_t t7 = 624525478;

	t7 = ((x37<x38)==(x39*x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x41 = 0;
	uint16_t x43 = 17459U;
	int32_t x44 = -1;

	t8 = ((x41<x42)==(x43*x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	volatile int16_t x46 = INT16_MIN;
	int64_t x48 = -1LL;
	volatile int32_t t9 = -36195120;

	t9 = ((x45<x46)==(x47*x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	int8_t x51 = -1;
	uint64_t x52 = 373LLU;
	volatile int32_t t10 = -998158415;

	t10 = ((x49<x50)==(x51*x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	uint8_t x54 = 62U;
	int64_t x55 = 40345726431921LL;
	volatile uint64_t x56 = UINT64_MAX;
	int32_t t11 = 3482;

	t11 = ((x53<x54)==(x55*x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x57 = INT8_MIN;
	volatile uint64_t x58 = UINT64_MAX;
	volatile uint8_t x60 = 5U;
	int32_t t12 = 0;

	t12 = ((x57<x58)==(x59*x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x71 = INT16_MIN;
	uint16_t x72 = 15084U;
	volatile int32_t t13 = 10;

	t13 = ((x69<x70)==(x71*x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x77 = INT8_MIN;
	int8_t x78 = -1;
	int16_t x79 = INT16_MIN;
	int8_t x80 = INT8_MAX;
	int32_t t14 = -7025;

	t14 = ((x77<x78)==(x79*x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x85 = INT64_MIN;
	int32_t x86 = -28749922;
	static uint8_t x87 = 12U;
	int64_t x88 = 8712LL;
	volatile int32_t t15 = -4221;

	t15 = ((x85<x86)==(x87*x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = 311950248620LLU;
	int8_t x90 = -1;
	uint32_t x91 = UINT32_MAX;
	static uint8_t x92 = UINT8_MAX;
	volatile int32_t t16 = -92974239;

	t16 = ((x89<x90)==(x91*x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = -203625;
	volatile int32_t x94 = INT32_MAX;
	static volatile int8_t x95 = -1;
	int8_t x96 = INT8_MIN;

	t17 = ((x93<x94)==(x95*x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x101 = 28531948253175430LLU;
	int8_t x102 = -1;
	uint8_t x103 = 24U;

	t18 = ((x101<x102)==(x103*x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = INT16_MAX;
	int16_t x106 = -1;
	uint32_t x107 = UINT32_MAX;
	volatile int32_t x108 = INT32_MAX;
	int32_t t19 = -1673;

	t19 = ((x105<x106)==(x107*x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x115 = -1;
	uint64_t x116 = 1379LLU;
	volatile int32_t t20 = 11622796;

	t20 = ((x113<x114)==(x115*x116));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x121 = 30993LL;
	int8_t x122 = -1;
	volatile int64_t x123 = INT64_MIN;
	int8_t x124 = 0;
	volatile int32_t t21 = 16485026;

	t21 = ((x121<x122)==(x123*x124));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x130 = UINT32_MAX;
	static uint32_t x131 = 164U;
	int32_t t22 = -215505183;

	t22 = ((x129<x130)==(x131*x132));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x133 = -1LL;
	static uint32_t x134 = 326287870U;
	volatile int64_t x135 = -1LL;

	t23 = ((x133<x134)==(x135*x136));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x137 = INT32_MAX;
	int32_t x138 = INT32_MIN;
	static int16_t x139 = INT16_MAX;
	int8_t x140 = INT8_MAX;
	int32_t t24 = 67;

	t24 = ((x137<x138)==(x139*x140));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x142 = 8;
	static uint8_t x143 = 96U;
	volatile int8_t x144 = -41;
	static int32_t t25 = 10;

	t25 = ((x141<x142)==(x143*x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x149 = INT64_MIN;
	int8_t x151 = -1;
	int64_t x152 = -1LL;
	int32_t t26 = 516152329;

	t26 = ((x149<x150)==(x151*x152));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x158 = INT8_MAX;
	volatile uint32_t x159 = 12095062U;
	int8_t x160 = -1;
	int32_t t27 = 14;

	t27 = ((x157<x158)==(x159*x160));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t t28 = -1;

	t28 = ((x161<x162)==(x163*x164));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x169 = INT64_MIN;
	int16_t x171 = INT16_MIN;
	volatile int16_t x172 = INT16_MIN;
	static int32_t t29 = -519216;

	t29 = ((x169<x170)==(x171*x172));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t t30 = -454799;

	t30 = ((x177<x178)==(x179*x180));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x181 = 7;
	int16_t x182 = -1;
	uint64_t x183 = 7089881158837688LLU;
	volatile int32_t x184 = INT32_MAX;
	int32_t t31 = 74296;

	t31 = ((x181<x182)==(x183*x184));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x191 = 3U;
	static int8_t x192 = -1;
	volatile int32_t t32 = -1005823370;

	t32 = ((x189<x190)==(x191*x192));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x197 = INT32_MAX;
	uint8_t x198 = 15U;
	uint8_t x199 = UINT8_MAX;
	static int16_t x200 = -1;
	int32_t t33 = -237833208;

	t33 = ((x197<x198)==(x199*x200));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x209 = INT64_MIN;
	volatile uint64_t x210 = 797428491510816770LLU;
	volatile int64_t x211 = -87022162LL;
	int8_t x212 = -1;

	t34 = ((x209<x210)==(x211*x212));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x217 = -30029393;
	static uint16_t x218 = UINT16_MAX;
	static volatile uint8_t x219 = UINT8_MAX;
	volatile int8_t x220 = INT8_MIN;
	static int32_t t35 = -5445945;

	t35 = ((x217<x218)==(x219*x220));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x221 = UINT16_MAX;
	int16_t x222 = -771;
	static uint32_t x223 = 11U;
	static int32_t x224 = INT32_MIN;
	static volatile int32_t t36 = 320035863;

	t36 = ((x221<x222)==(x223*x224));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x229 = INT16_MIN;
	int64_t x230 = INT64_MIN;
	volatile int64_t x231 = 193488587776545LL;
	int32_t x232 = 1392;
	volatile int32_t t37 = 126985;

	t37 = ((x229<x230)==(x231*x232));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x234 = -671;
	int16_t x235 = INT16_MIN;
	static int8_t x236 = -1;

	t38 = ((x233<x234)==(x235*x236));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x237 = INT32_MIN;
	volatile uint16_t x238 = 11U;
	static uint16_t x239 = UINT16_MAX;
	static uint8_t x240 = 88U;
	int32_t t39 = 30707613;

	t39 = ((x237<x238)==(x239*x240));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x241 = 53893263LLU;
	static uint16_t x242 = UINT16_MAX;
	volatile int32_t x244 = INT32_MAX;
	int32_t t40 = 3861002;

	t40 = ((x241<x242)==(x243*x244));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x245 = -324354356369LL;
	uint64_t x246 = UINT64_MAX;
	static uint32_t x247 = 1036178927U;
	volatile int32_t t41 = 4401;

	t41 = ((x245<x246)==(x247*x248));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x249 = 1085525U;
	int32_t x250 = -1;
	static volatile uint16_t x251 = 0U;
	int32_t t42 = -347399624;

	t42 = ((x249<x250)==(x251*x252));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x253 = 349939251U;
	int64_t x254 = -245048514189541LL;
	int8_t x255 = -1;
	int8_t x256 = 12;
	static int32_t t43 = 5718;

	t43 = ((x253<x254)==(x255*x256));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x260 = -1;
	static volatile int32_t t44 = -998;

	t44 = ((x257<x258)==(x259*x260));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x261 = -1LL;
	int8_t x262 = INT8_MAX;
	uint8_t x263 = 4U;
	int8_t x264 = INT8_MIN;
	int32_t t45 = -164140;

	t45 = ((x261<x262)==(x263*x264));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x265 = INT64_MIN;
	int8_t x267 = INT8_MIN;
	static uint16_t x268 = UINT16_MAX;
	volatile int32_t t46 = 270;

	t46 = ((x265<x266)==(x267*x268));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x269 = INT64_MAX;
	int32_t x270 = INT32_MIN;
	volatile int32_t x271 = INT32_MIN;
	uint16_t x272 = 1U;
	int32_t t47 = -10486178;

	t47 = ((x269<x270)==(x271*x272));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x273 = UINT64_MAX;
	int8_t x274 = -7;
	uint32_t x276 = 6U;
	int32_t t48 = 255;

	t48 = ((x273<x274)==(x275*x276));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x277 = INT16_MAX;
	int32_t x278 = INT32_MIN;
	volatile uint8_t x279 = UINT8_MAX;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t49 = 4719;

	t49 = ((x277<x278)==(x279*x280));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x285 = -24LL;
	uint16_t x286 = UINT16_MAX;
	static int32_t x287 = -1;
	volatile int16_t x288 = INT16_MIN;

	t50 = ((x285<x286)==(x287*x288));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x289 = UINT8_MAX;
	int64_t x290 = -1LL;
	static volatile uint32_t x291 = 61365U;

	t51 = ((x289<x290)==(x291*x292));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x293 = UINT16_MAX;
	uint64_t x294 = UINT64_MAX;
	int8_t x295 = -25;

	t52 = ((x293<x294)==(x295*x296));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x301 = -34539286;
	int16_t x302 = INT16_MIN;
	uint16_t x303 = 1U;
	uint32_t x304 = 29U;
	int32_t t53 = 4;

	t53 = ((x301<x302)==(x303*x304));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x305 = UINT32_MAX;
	int32_t x306 = INT32_MIN;
	int32_t x307 = -64210940;
	static uint64_t x308 = 617334909850LLU;
	volatile int32_t t54 = -91;

	t54 = ((x305<x306)==(x307*x308));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x309 = INT16_MAX;
	volatile uint8_t x310 = 51U;
	int8_t x312 = INT8_MAX;

	t55 = ((x309<x310)==(x311*x312));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x313 = INT32_MIN;
	int32_t x314 = -22735;
	volatile uint64_t x315 = 4865448232LLU;
	int16_t x316 = INT16_MAX;
	static volatile int32_t t56 = 26;

	t56 = ((x313<x314)==(x315*x316));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x321 = INT8_MAX;
	int32_t x322 = -332186;
	uint64_t x323 = 2456853LLU;
	static volatile int32_t t57 = -375511671;

	t57 = ((x321<x322)==(x323*x324));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x329 = 0;
	int64_t x330 = -179935687322LL;
	static volatile uint16_t x331 = UINT16_MAX;
	int32_t x332 = -6966;
	volatile int32_t t58 = -880;

	t58 = ((x329<x330)==(x331*x332));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x333 = UINT8_MAX;
	volatile int16_t x334 = 64;
	int16_t x335 = -1;
	int64_t x336 = -1LL;
	int32_t t59 = 0;

	t59 = ((x333<x334)==(x335*x336));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x337 = INT64_MIN;
	uint64_t x338 = UINT64_MAX;
	int64_t x339 = -1LL;
	volatile int32_t x340 = INT32_MIN;
	int32_t t60 = 9910;

	t60 = ((x337<x338)==(x339*x340));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x341 = 0U;
	static int8_t x342 = -1;
	volatile uint16_t x343 = 929U;
	static uint16_t x344 = 7U;
	volatile int32_t t61 = -1775;

	t61 = ((x341<x342)==(x343*x344));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x349 = 3099;
	int16_t x350 = -1;
	volatile int64_t x351 = -203359635274LL;
	uint64_t x352 = 673236137LLU;
	volatile int32_t t62 = 0;

	t62 = ((x349<x350)==(x351*x352));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x369 = -52374742LL;
	uint64_t x370 = UINT64_MAX;
	uint16_t x371 = UINT16_MAX;
	int8_t x372 = -1;

	t63 = ((x369<x370)==(x371*x372));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x374 = 167605;
	int64_t x375 = -1LL;
	static int8_t x376 = 0;
	volatile int32_t t64 = -24480015;

	t64 = ((x373<x374)==(x375*x376));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x377 = INT32_MIN;
	uint64_t x378 = 6399876LLU;
	uint64_t x379 = UINT64_MAX;
	volatile int8_t x380 = -1;
	volatile int32_t t65 = 1824140;

	t65 = ((x377<x378)==(x379*x380));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x381 = UINT32_MAX;
	int16_t x382 = INT16_MIN;
	int32_t t66 = -60611154;

	t66 = ((x381<x382)==(x383*x384));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x385 = 15043329LL;
	uint64_t x387 = 14LLU;
	int8_t x388 = INT8_MIN;
	volatile int32_t t67 = -3992590;

	t67 = ((x385<x386)==(x387*x388));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x389 = 1177730125LLU;
	uint8_t x390 = 15U;
	int16_t x391 = -30;
	uint8_t x392 = 1U;
	volatile int32_t t68 = -314;

	t68 = ((x389<x390)==(x391*x392));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x393 = -1LL;
	int64_t x395 = INT64_MIN;
	int32_t t69 = 882297351;

	t69 = ((x393<x394)==(x395*x396));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x397 = INT16_MIN;
	volatile int32_t x398 = INT32_MAX;
	uint8_t x400 = 72U;

	t70 = ((x397<x398)==(x399*x400));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x401 = INT64_MAX;
	int8_t x404 = -56;
	volatile int32_t t71 = 44;

	t71 = ((x401<x402)==(x403*x404));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x405 = INT64_MIN;
	uint8_t x406 = 6U;
	static int64_t x407 = INT64_MIN;
	uint8_t x408 = 0U;
	static int32_t t72 = 819489;

	t72 = ((x405<x406)==(x407*x408));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x425 = INT32_MIN;
	uint64_t x426 = 4157916845878505317LLU;
	static int16_t x427 = -1;
	volatile int64_t x428 = INT64_MAX;

	t73 = ((x425<x426)==(x427*x428));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x430 = 87U;
	volatile uint16_t x431 = 18U;
	int8_t x432 = INT8_MIN;

	t74 = ((x429<x430)==(x431*x432));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x438 = -1LL;
	volatile uint32_t x439 = 57U;
	volatile int8_t x440 = -1;
	volatile int32_t t75 = -3796;

	t75 = ((x437<x438)==(x439*x440));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x445 = -1;
	int16_t x447 = -1;
	volatile int8_t x448 = 10;
	static volatile int32_t t76 = 414;

	t76 = ((x445<x446)==(x447*x448));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x449 = -4;
	int32_t x450 = 314;
	int8_t x451 = INT8_MIN;
	static uint8_t x452 = UINT8_MAX;
	static int32_t t77 = -34336;

	t77 = ((x449<x450)==(x451*x452));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x458 = 1U;
	static uint32_t x459 = UINT32_MAX;
	uint64_t x460 = 123427184611LLU;
	volatile int32_t t78 = 0;

	t78 = ((x457<x458)==(x459*x460));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x461 = INT8_MAX;
	int16_t x462 = -1;
	uint8_t x463 = UINT8_MAX;
	volatile uint16_t x464 = 322U;

	t79 = ((x461<x462)==(x463*x464));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x469 = INT8_MIN;
	int64_t x470 = INT64_MIN;
	int8_t x471 = INT8_MIN;
	int32_t t80 = -30081;

	t80 = ((x469<x470)==(x471*x472));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x474 = 3019869884862750LL;
	static int32_t x475 = -5;
	int8_t x476 = -1;
	volatile int32_t t81 = -458802;

	t81 = ((x473<x474)==(x475*x476));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x485 = INT8_MIN;
	int64_t x486 = INT64_MAX;
	static int8_t x487 = INT8_MIN;
	uint64_t x488 = UINT64_MAX;
	volatile int32_t t82 = -3333;

	t82 = ((x485<x486)==(x487*x488));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x489 = 6005U;
	int64_t x491 = -234324326493LL;
	uint64_t x492 = 13482954503LLU;
	static int32_t t83 = 808802061;

	t83 = ((x489<x490)==(x491*x492));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x493 = INT8_MAX;
	int8_t x495 = -1;
	uint16_t x496 = 1825U;

	t84 = ((x493<x494)==(x495*x496));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x497 = -1LL;
	int8_t x499 = INT8_MIN;
	uint32_t x500 = UINT32_MAX;
	int32_t t85 = -4733484;

	t85 = ((x497<x498)==(x499*x500));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x502 = INT16_MIN;
	volatile int32_t x503 = -1;
	uint8_t x504 = 25U;
	int32_t t86 = 23738268;

	t86 = ((x501<x502)==(x503*x504));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x505 = UINT16_MAX;
	static volatile int8_t x506 = INT8_MAX;
	uint8_t x507 = UINT8_MAX;
	uint16_t x508 = 14U;
	static volatile int32_t t87 = 5;

	t87 = ((x505<x506)==(x507*x508));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x509 = -5LL;
	int8_t x510 = 25;
	static volatile int32_t t88 = 456;

	t88 = ((x509<x510)==(x511*x512));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x513 = 261U;
	static volatile int16_t x514 = -61;
	int64_t x515 = -1LL;
	uint8_t x516 = 3U;
	int32_t t89 = 7399870;

	t89 = ((x513<x514)==(x515*x516));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x517 = UINT16_MAX;
	volatile uint16_t x518 = UINT16_MAX;
	int32_t x519 = -1;
	int64_t x520 = INT64_MAX;
	int32_t t90 = -3061437;

	t90 = ((x517<x518)==(x519*x520));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x525 = 0LLU;
	uint8_t x526 = 21U;
	int16_t x527 = INT16_MIN;
	int16_t x528 = 68;
	int32_t t91 = 799773;

	t91 = ((x525<x526)==(x527*x528));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x535 = UINT16_MAX;
	int16_t x536 = INT16_MIN;
	int32_t t92 = 162;

	t92 = ((x533<x534)==(x535*x536));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x537 = UINT8_MAX;
	static uint64_t x538 = 7542911LLU;
	static int64_t x539 = 41LL;
	int32_t t93 = 1;

	t93 = ((x537<x538)==(x539*x540));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x542 = 2;
	volatile int16_t x543 = INT16_MIN;
	int32_t t94 = 36946;

	t94 = ((x541<x542)==(x543*x544));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x546 = INT8_MIN;
	int64_t x547 = 1416284211LL;

	t95 = ((x545<x546)==(x547*x548));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x549 = -1;
	int16_t x550 = 8010;
	static int16_t x551 = 6498;
	uint8_t x552 = 2U;
	int32_t t96 = -1537415;

	t96 = ((x549<x550)==(x551*x552));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x554 = 8806547390LLU;
	int8_t x555 = -1;

	t97 = ((x553<x554)==(x555*x556));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x558 = 37U;
	volatile int32_t x560 = -1;
	volatile int32_t t98 = 291712953;

	t98 = ((x557<x558)==(x559*x560));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x566 = INT16_MIN;
	int32_t x568 = 215;
	volatile int32_t t99 = -862;

	t99 = ((x565<x566)==(x567*x568));

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

