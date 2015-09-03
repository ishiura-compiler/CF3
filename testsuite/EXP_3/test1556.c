#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 2799679;
int8_t x2 = 31;
volatile int16_t x9 = -1;
int32_t t2 = 1;
uint64_t x16 = 398405720750LLU;
volatile int32_t t3 = -25;
int8_t x29 = INT8_MAX;
int64_t x31 = 0LL;
static volatile int8_t x34 = INT8_MIN;
static uint64_t x39 = 4LLU;
volatile int32_t t7 = 116295695;
volatile int32_t t9 = 239;
uint64_t x54 = 2LLU;
int32_t x59 = INT32_MIN;
int8_t x64 = INT8_MIN;
int16_t x71 = INT16_MIN;
uint32_t x72 = 0U;
int32_t t13 = -10170;
int8_t x78 = INT8_MAX;
int64_t x79 = INT64_MIN;
int64_t x80 = -1LL;
uint32_t x89 = UINT32_MAX;
uint64_t x94 = UINT64_MAX;
int64_t x95 = INT64_MAX;
static volatile int64_t x105 = 241742003335LL;
int16_t x106 = INT16_MAX;
int32_t t21 = -42060574;
static volatile uint16_t x133 = UINT16_MAX;
int8_t x149 = INT8_MIN;
int32_t t26 = -1;
static int8_t x153 = 30;
volatile uint16_t x157 = UINT16_MAX;
volatile int32_t t28 = 0;
int16_t x173 = 12536;
static volatile uint64_t x175 = UINT64_MAX;
uint64_t x176 = UINT64_MAX;
volatile int32_t t33 = -58247;
int16_t x200 = INT16_MIN;
uint8_t x204 = UINT8_MAX;
int32_t t35 = -458187;
int64_t x220 = 1199LL;
volatile int16_t x222 = INT16_MIN;
int32_t x223 = -131221596;
int64_t x227 = -1LL;
int64_t x239 = INT64_MIN;
int32_t x241 = 1;
volatile int32_t x246 = 143612;
volatile int32_t t43 = -41340828;
static uint64_t x255 = UINT64_MAX;
volatile int32_t t45 = 40;
uint64_t x260 = UINT64_MAX;
int64_t x276 = INT64_MAX;
int16_t x284 = INT16_MIN;
volatile uint16_t x287 = UINT16_MAX;
int16_t x288 = INT16_MIN;
volatile int32_t x296 = INT32_MIN;
static volatile int16_t x302 = 1804;
static uint64_t x304 = 9LLU;
int32_t t53 = -11;
static int32_t x310 = 2;
volatile uint16_t x313 = 34U;
uint64_t x317 = 2814882457LLU;
static volatile int32_t t56 = 12475626;
int8_t x325 = INT8_MIN;
volatile uint32_t x327 = 15594258U;
volatile uint8_t x340 = 18U;
static uint64_t x342 = 31654987619083LLU;
int32_t t60 = -813;
int16_t x345 = 105;
uint64_t x349 = 4856449111175624821LLU;
volatile uint64_t x350 = 94150599LLU;
int64_t x362 = -1LL;
int32_t t65 = -108172;
int32_t t66 = -2719830;
volatile int32_t t68 = 1086;
uint16_t x390 = UINT16_MAX;
int16_t x391 = 3;
volatile int32_t t69 = 11046;
int32_t x410 = -1;
int8_t x416 = INT8_MAX;
int16_t x417 = INT16_MIN;
static volatile int8_t x418 = -8;
uint16_t x424 = 112U;
uint8_t x427 = UINT8_MAX;
int32_t t74 = -18086;
volatile int8_t x437 = INT8_MIN;
static int32_t t80 = 3014;
int8_t x459 = -1;
int32_t t81 = 4933;
int64_t x469 = -1LL;
volatile int32_t x475 = INT32_MAX;
static int32_t x476 = INT32_MAX;
static int16_t x480 = -2;
int64_t x507 = -1572565070826651731LL;
uint64_t x510 = 2733998127108708287LLU;
static int64_t x513 = 954589133LL;
int32_t t91 = 2;
uint8_t x521 = 22U;
int16_t x530 = -1;
int32_t x532 = -175;
volatile int32_t t95 = 88882;
int16_t x537 = INT16_MIN;
int8_t x538 = -5;
volatile int32_t t97 = 7;
int8_t x542 = -1;
uint16_t x547 = 6U;
static volatile int32_t t99 = -1350;


void f0(void) {
	static uint32_t x3 = UINT32_MAX;
	static int8_t x4 = 49;
	static volatile int32_t t0 = -12;

	t0 = ((x1*x2)<(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint64_t x6 = 495164LLU;
	uint16_t x7 = UINT16_MAX;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = -163;

	t1 = ((x5*x6)<(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x10 = 16139221U;
	int16_t x11 = -1;
	volatile int64_t x12 = 329383LL;

	t2 = ((x9*x10)<(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static int16_t x14 = 48;
	int64_t x15 = INT64_MIN;

	t3 = ((x13*x14)<(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint8_t x18 = 0U;
	int16_t x19 = -1886;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -783407565;

	t4 = ((x17*x18)<(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x30 = 30U;
	uint16_t x32 = 14U;
	static volatile int32_t t5 = 1;

	t5 = ((x29*x30)<(x31<=x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x33 = -8637800732996786LL;
	int64_t x35 = 5LL;
	int8_t x36 = INT8_MAX;
	int32_t t6 = 13;

	t6 = ((x33*x34)<(x35<=x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -1;
	static int8_t x38 = INT8_MAX;
	uint32_t x40 = 979785320U;

	t7 = ((x37*x38)<(x39<=x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x41 = 0;
	int8_t x42 = -1;
	int32_t x43 = 1;
	volatile int8_t x44 = INT8_MIN;
	volatile int32_t t8 = -374;

	t8 = ((x41*x42)<(x43<=x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = 2988;
	int8_t x50 = INT8_MIN;
	static uint64_t x51 = 82510496955238LLU;
	volatile int16_t x52 = INT16_MAX;

	t9 = ((x49*x50)<(x51<=x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x53 = -1;
	uint16_t x55 = 868U;
	uint8_t x56 = 4U;
	int32_t t10 = 72575;

	t10 = ((x53*x54)<(x55<=x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = 0U;
	int64_t x58 = -1LL;
	uint64_t x60 = 55099016LLU;
	int32_t t11 = 45323370;

	t11 = ((x57*x58)<(x59<=x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = -304;
	uint32_t x62 = 64038704U;
	int64_t x63 = INT64_MIN;
	volatile int32_t t12 = -266163;

	t12 = ((x61*x62)<(x63<=x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = 302;
	volatile int16_t x70 = 1;

	t13 = ((x69*x70)<(x71<=x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x73 = 17;
	uint16_t x74 = UINT16_MAX;
	int16_t x75 = INT16_MAX;
	static uint32_t x76 = UINT32_MAX;
	int32_t t14 = 282976361;

	t14 = ((x73*x74)<(x75<=x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = 5U;
	static int32_t t15 = -1;

	t15 = ((x77*x78)<(x79<=x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x90 = INT16_MIN;
	static int8_t x91 = -32;
	int64_t x92 = INT64_MIN;
	volatile int32_t t16 = -592157912;

	t16 = ((x89*x90)<(x91<=x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x93 = 4U;
	int32_t x96 = -802823;
	int32_t t17 = 552;

	t17 = ((x93*x94)<(x95<=x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = INT8_MIN;
	uint64_t x102 = 14173564797550LLU;
	int64_t x103 = INT64_MIN;
	int64_t x104 = INT64_MIN;
	int32_t t18 = 3;

	t18 = ((x101*x102)<(x103<=x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x107 = INT64_MIN;
	int32_t x108 = -17;
	volatile int32_t t19 = 469189881;

	t19 = ((x105*x106)<(x107<=x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = -1734;
	int8_t x110 = 8;
	int16_t x111 = INT16_MIN;
	volatile int64_t x112 = INT64_MIN;
	int32_t t20 = -981124;

	t20 = ((x109*x110)<(x111<=x112));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x113 = 3U;
	uint16_t x114 = 521U;
	static volatile uint16_t x115 = UINT16_MAX;
	static int64_t x116 = -14099LL;

	t21 = ((x113*x114)<(x115<=x116));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x125 = 28U;
	static int16_t x126 = INT16_MIN;
	int64_t x127 = -1LL;
	int16_t x128 = -1;
	static int32_t t22 = -128127990;

	t22 = ((x125*x126)<(x127<=x128));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x134 = -102;
	int16_t x135 = INT16_MIN;
	int32_t x136 = -1;
	int32_t t23 = 11538;

	t23 = ((x133*x134)<(x135<=x136));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x141 = 435U;
	volatile int8_t x142 = INT8_MAX;
	static int64_t x143 = INT64_MAX;
	volatile int32_t x144 = -1;
	volatile int32_t t24 = 14817027;

	t24 = ((x141*x142)<(x143<=x144));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x145 = -1;
	volatile int16_t x146 = INT16_MAX;
	int32_t x147 = INT32_MIN;
	int16_t x148 = INT16_MAX;
	volatile int32_t t25 = -1926977;

	t25 = ((x145*x146)<(x147<=x148));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x150 = 1039125560465LL;
	volatile uint32_t x151 = UINT32_MAX;
	uint16_t x152 = UINT16_MAX;

	t26 = ((x149*x150)<(x151<=x152));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x154 = 0;
	uint8_t x155 = 47U;
	static uint16_t x156 = UINT16_MAX;
	volatile int32_t t27 = 5;

	t27 = ((x153*x154)<(x155<=x156));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x158 = 869U;
	int32_t x159 = INT32_MAX;
	int16_t x160 = -1;

	t28 = ((x157*x158)<(x159<=x160));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x165 = 0;
	uint16_t x166 = UINT16_MAX;
	int32_t x167 = -137501;
	int32_t x168 = -25946;
	volatile int32_t t29 = 242;

	t29 = ((x165*x166)<(x167<=x168));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x174 = -1;
	volatile int32_t t30 = -5;

	t30 = ((x173*x174)<(x175<=x176));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x185 = 7U;
	uint16_t x186 = 9U;
	volatile int64_t x187 = -644913129915420546LL;
	static volatile uint64_t x188 = 425015129LLU;
	volatile int32_t t31 = -72;

	t31 = ((x185*x186)<(x187<=x188));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x189 = UINT64_MAX;
	uint32_t x190 = 55387083U;
	volatile int16_t x191 = INT16_MAX;
	int64_t x192 = 1338LL;
	volatile int32_t t32 = 2697;

	t32 = ((x189*x190)<(x191<=x192));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x193 = 8U;
	int8_t x194 = INT8_MIN;
	volatile uint16_t x195 = UINT16_MAX;
	static int32_t x196 = 218248556;

	t33 = ((x193*x194)<(x195<=x196));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x197 = 193870U;
	int32_t x198 = -6;
	uint16_t x199 = 31941U;
	volatile int32_t t34 = -295160;

	t34 = ((x197*x198)<(x199<=x200));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x201 = 1141U;
	static volatile uint8_t x202 = 1U;
	int8_t x203 = INT8_MAX;

	t35 = ((x201*x202)<(x203<=x204));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x213 = 110596U;
	uint16_t x214 = 21371U;
	static volatile uint8_t x215 = UINT8_MAX;
	volatile uint16_t x216 = 9U;
	int32_t t36 = -338;

	t36 = ((x213*x214)<(x215<=x216));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = -52;
	uint32_t x219 = 155787U;
	volatile int32_t t37 = 12;

	t37 = ((x217*x218)<(x219<=x220));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x221 = UINT32_MAX;
	int16_t x224 = INT16_MAX;
	volatile int32_t t38 = -56704;

	t38 = ((x221*x222)<(x223<=x224));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x225 = 1964U;
	int8_t x226 = -39;
	int32_t x228 = INT32_MIN;
	volatile int32_t t39 = -32461;

	t39 = ((x225*x226)<(x227<=x228));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x229 = 0;
	volatile uint64_t x230 = 252758722447638LLU;
	volatile uint64_t x231 = UINT64_MAX;
	int8_t x232 = INT8_MAX;
	volatile int32_t t40 = -29112176;

	t40 = ((x229*x230)<(x231<=x232));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x237 = -13605;
	volatile uint16_t x238 = 8U;
	int16_t x240 = 26;
	int32_t t41 = -187;

	t41 = ((x237*x238)<(x239<=x240));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = INT8_MIN;
	uint32_t x244 = 223U;
	static int32_t t42 = -3327962;

	t42 = ((x241*x242)<(x243<=x244));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x245 = INT8_MIN;
	uint32_t x247 = 151U;
	uint8_t x248 = 62U;

	t43 = ((x245*x246)<(x247<=x248));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x249 = 2U;
	uint16_t x250 = UINT16_MAX;
	int32_t x251 = INT32_MIN;
	int32_t x252 = INT32_MIN;
	int32_t t44 = 3727170;

	t44 = ((x249*x250)<(x251<=x252));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x253 = -3;
	int16_t x254 = -37;
	static volatile uint64_t x256 = 882476LLU;

	t45 = ((x253*x254)<(x255<=x256));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x257 = UINT8_MAX;
	uint32_t x258 = 31U;
	uint32_t x259 = 15U;
	static volatile int32_t t46 = 26;

	t46 = ((x257*x258)<(x259<=x260));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x261 = -355083617;
	uint32_t x262 = 11500U;
	volatile int32_t x263 = INT32_MAX;
	static uint64_t x264 = 996740177929LLU;
	static int32_t t47 = -129990692;

	t47 = ((x261*x262)<(x263<=x264));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x273 = 3;
	static int64_t x274 = 15LL;
	volatile int64_t x275 = INT64_MIN;
	volatile int32_t t48 = -8016;

	t48 = ((x273*x274)<(x275<=x276));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x281 = -1;
	volatile int16_t x282 = INT16_MAX;
	static int16_t x283 = INT16_MAX;
	int32_t t49 = -47967;

	t49 = ((x281*x282)<(x283<=x284));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x285 = 24U;
	static uint8_t x286 = 3U;
	volatile int32_t t50 = -10;

	t50 = ((x285*x286)<(x287<=x288));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x293 = 0U;
	int64_t x294 = INT64_MIN;
	static int8_t x295 = -1;
	volatile int32_t t51 = -1045693;

	t51 = ((x293*x294)<(x295<=x296));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x297 = INT64_MIN;
	static uint64_t x298 = 3483820890877788LLU;
	uint8_t x299 = 1U;
	static int16_t x300 = INT16_MIN;
	static volatile int32_t t52 = 41;

	t52 = ((x297*x298)<(x299<=x300));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x301 = INT8_MIN;
	uint8_t x303 = UINT8_MAX;

	t53 = ((x301*x302)<(x303<=x304));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x309 = -1;
	int32_t x311 = INT32_MIN;
	int16_t x312 = 1;
	int32_t t54 = -68576872;

	t54 = ((x309*x310)<(x311<=x312));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x314 = -1;
	int16_t x315 = INT16_MIN;
	uint16_t x316 = 4541U;
	static int32_t t55 = -53613583;

	t55 = ((x313*x314)<(x315<=x316));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x318 = -365600281LL;
	uint8_t x319 = 0U;
	int16_t x320 = INT16_MAX;

	t56 = ((x317*x318)<(x319<=x320));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x321 = -1;
	int32_t x322 = -59671630;
	uint32_t x323 = 109540016U;
	uint32_t x324 = UINT32_MAX;
	int32_t t57 = -3071;

	t57 = ((x321*x322)<(x323<=x324));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x326 = 1;
	int8_t x328 = INT8_MIN;
	static int32_t t58 = 1162;

	t58 = ((x325*x326)<(x327<=x328));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x337 = 14U;
	volatile int16_t x338 = INT16_MIN;
	static int64_t x339 = INT64_MIN;
	static volatile int32_t t59 = 916373;

	t59 = ((x337*x338)<(x339<=x340));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x341 = UINT8_MAX;
	int16_t x343 = -5107;
	int64_t x344 = INT64_MAX;

	t60 = ((x341*x342)<(x343<=x344));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x346 = -572;
	int64_t x347 = 11156392979428LL;
	static uint8_t x348 = 6U;
	volatile int32_t t61 = -3718;

	t61 = ((x345*x346)<(x347<=x348));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x351 = 3891U;
	volatile int32_t x352 = INT32_MAX;
	int32_t t62 = -2;

	t62 = ((x349*x350)<(x351<=x352));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x353 = INT8_MIN;
	int32_t x354 = -1;
	int32_t x355 = INT32_MIN;
	static int8_t x356 = INT8_MIN;
	static volatile int32_t t63 = -52;

	t63 = ((x353*x354)<(x355<=x356));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x361 = -1664162169942872LL;
	volatile int64_t x363 = INT64_MAX;
	volatile uint32_t x364 = 2889722U;
	int32_t t64 = 490913;

	t64 = ((x361*x362)<(x363<=x364));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x365 = INT8_MIN;
	volatile uint16_t x366 = UINT16_MAX;
	uint32_t x367 = 23U;
	static uint8_t x368 = 53U;

	t65 = ((x365*x366)<(x367<=x368));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x369 = -23;
	int8_t x370 = INT8_MIN;
	uint32_t x371 = 48640U;
	int32_t x372 = -1;

	t66 = ((x369*x370)<(x371<=x372));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x381 = INT64_MAX;
	static uint64_t x382 = UINT64_MAX;
	volatile int32_t x383 = -1;
	uint64_t x384 = UINT64_MAX;
	int32_t t67 = 7341;

	t67 = ((x381*x382)<(x383<=x384));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x385 = 3;
	int16_t x386 = -1;
	uint16_t x387 = 1U;
	uint16_t x388 = UINT16_MAX;

	t68 = ((x385*x386)<(x387<=x388));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x389 = -25LL;
	int64_t x392 = 274390LL;

	t69 = ((x389*x390)<(x391<=x392));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x409 = 250;
	int16_t x411 = -1;
	static uint64_t x412 = 8211896779351LLU;
	volatile int32_t t70 = 9859148;

	t70 = ((x409*x410)<(x411<=x412));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x413 = UINT16_MAX;
	uint64_t x414 = 60915224LLU;
	volatile int8_t x415 = -1;
	volatile int32_t t71 = 1;

	t71 = ((x413*x414)<(x415<=x416));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x419 = 7U;
	volatile int64_t x420 = 53039882718467LL;
	int32_t t72 = 1647189;

	t72 = ((x417*x418)<(x419<=x420));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x421 = -3;
	uint8_t x422 = 0U;
	int64_t x423 = INT64_MIN;
	static volatile int32_t t73 = -23362;

	t73 = ((x421*x422)<(x423<=x424));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x425 = -6;
	volatile int16_t x426 = 2;
	int64_t x428 = INT64_MAX;

	t74 = ((x425*x426)<(x427<=x428));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x433 = 3U;
	volatile int16_t x434 = 74;
	int64_t x435 = INT64_MAX;
	volatile uint64_t x436 = UINT64_MAX;
	static int32_t t75 = -9277;

	t75 = ((x433*x434)<(x435<=x436));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x438 = -48;
	volatile uint16_t x439 = 7309U;
	int64_t x440 = -1LL;
	int32_t t76 = -198311812;

	t76 = ((x437*x438)<(x439<=x440));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x441 = 61068597299LLU;
	uint16_t x442 = 13381U;
	static int32_t x443 = INT32_MAX;
	int8_t x444 = INT8_MAX;
	volatile int32_t t77 = 5;

	t77 = ((x441*x442)<(x443<=x444));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x445 = 636527LL;
	int8_t x446 = INT8_MIN;
	int8_t x447 = -1;
	volatile int8_t x448 = 0;
	volatile int32_t t78 = 120566301;

	t78 = ((x445*x446)<(x447<=x448));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x449 = 115;
	uint32_t x450 = 5U;
	int16_t x451 = INT16_MIN;
	volatile int64_t x452 = INT64_MAX;
	static int32_t t79 = -50172992;

	t79 = ((x449*x450)<(x451<=x452));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x453 = 1;
	uint8_t x454 = 1U;
	volatile int8_t x455 = -1;
	uint32_t x456 = UINT32_MAX;

	t80 = ((x453*x454)<(x455<=x456));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x457 = 6164583U;
	int16_t x458 = 36;
	int32_t x460 = INT32_MAX;

	t81 = ((x457*x458)<(x459<=x460));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x470 = 1U;
	int32_t x471 = INT32_MAX;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t82 = 239296;

	t82 = ((x469*x470)<(x471<=x472));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x473 = 1831958456U;
	int8_t x474 = INT8_MAX;
	int32_t t83 = -3;

	t83 = ((x473*x474)<(x475<=x476));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x477 = 27U;
	uint16_t x478 = UINT16_MAX;
	int8_t x479 = INT8_MIN;
	int32_t t84 = 98455018;

	t84 = ((x477*x478)<(x479<=x480));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x481 = 1843U;
	uint16_t x482 = UINT16_MAX;
	int8_t x483 = INT8_MIN;
	volatile int8_t x484 = INT8_MIN;
	volatile int32_t t85 = -96567459;

	t85 = ((x481*x482)<(x483<=x484));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x485 = INT16_MIN;
	int16_t x486 = 1;
	static volatile int16_t x487 = 2651;
	uint32_t x488 = UINT32_MAX;
	volatile int32_t t86 = 22;

	t86 = ((x485*x486)<(x487<=x488));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x497 = UINT16_MAX;
	volatile int64_t x498 = -17586925850291LL;
	int32_t x499 = 112240;
	int64_t x500 = INT64_MIN;
	volatile int32_t t87 = -1;

	t87 = ((x497*x498)<(x499<=x500));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x501 = 10U;
	int8_t x502 = INT8_MIN;
	uint32_t x503 = 29716U;
	volatile int64_t x504 = -1LL;
	int32_t t88 = -21914;

	t88 = ((x501*x502)<(x503<=x504));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x505 = INT16_MIN;
	uint16_t x506 = UINT16_MAX;
	static volatile uint16_t x508 = 20374U;
	volatile int32_t t89 = -28174042;

	t89 = ((x505*x506)<(x507<=x508));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x509 = -19;
	uint8_t x511 = 1U;
	volatile int8_t x512 = INT8_MIN;
	volatile int32_t t90 = 4134;

	t90 = ((x509*x510)<(x511<=x512));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x514 = -262;
	volatile uint32_t x515 = 14241U;
	int8_t x516 = -1;

	t91 = ((x513*x514)<(x515<=x516));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x517 = UINT8_MAX;
	static int16_t x518 = INT16_MAX;
	static int16_t x519 = -1;
	int8_t x520 = -1;
	volatile int32_t t92 = 8347608;

	t92 = ((x517*x518)<(x519<=x520));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x522 = INT16_MIN;
	static int16_t x523 = INT16_MIN;
	uint8_t x524 = 0U;
	volatile int32_t t93 = -88;

	t93 = ((x521*x522)<(x523<=x524));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x525 = UINT64_MAX;
	int16_t x526 = -1;
	uint64_t x527 = 94064LLU;
	int8_t x528 = INT8_MIN;
	volatile int32_t t94 = -13170;

	t94 = ((x525*x526)<(x527<=x528));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x529 = -739632LL;
	static volatile uint64_t x531 = 14331149LLU;

	t95 = ((x529*x530)<(x531<=x532));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x533 = 8365999836LLU;
	int8_t x534 = -1;
	int16_t x535 = INT16_MIN;
	uint32_t x536 = UINT32_MAX;
	int32_t t96 = -72650096;

	t96 = ((x533*x534)<(x535<=x536));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x539 = 17U;
	int64_t x540 = -60644LL;

	t97 = ((x537*x538)<(x539<=x540));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x541 = 926264U;
	static uint32_t x543 = 1637204U;
	volatile uint64_t x544 = 33417173LLU;
	int32_t t98 = -1;

	t98 = ((x541*x542)<(x543<=x544));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x545 = -4;
	static int8_t x546 = 26;
	int64_t x548 = INT64_MIN;

	t99 = ((x545*x546)<(x547<=x548));

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

