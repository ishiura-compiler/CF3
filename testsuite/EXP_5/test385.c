#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -52;
int16_t x3 = 1;
volatile int64_t x4 = -1LL;
int64_t x18 = 12253269221LL;
int8_t x35 = -1;
static int32_t t4 = -2582;
volatile int8_t x45 = INT8_MIN;
int16_t x47 = INT16_MAX;
uint8_t x54 = 0U;
int32_t x60 = INT32_MIN;
int32_t x70 = 1;
uint32_t x75 = 7652156U;
int32_t t11 = -13046742;
static int32_t x89 = INT32_MIN;
static uint64_t x90 = 3359284912326300453LLU;
static int16_t x95 = -41;
volatile int8_t x101 = 0;
volatile int8_t x102 = INT8_MAX;
uint8_t x103 = 108U;
static int32_t x108 = -1499;
int16_t x132 = -1;
int32_t t19 = -6064;
static volatile int16_t x145 = INT16_MIN;
int64_t x147 = 642173858236LL;
int64_t x174 = -197LL;
int32_t t25 = -1;
volatile int32_t t26 = -6463609;
int64_t x182 = -1LL;
int8_t x196 = INT8_MAX;
static uint16_t x209 = 2U;
static int16_t x213 = -1;
int16_t x214 = -1;
uint8_t x215 = 48U;
int32_t t33 = 8;
int8_t x220 = INT8_MIN;
uint8_t x226 = UINT8_MAX;
static int64_t x230 = -1LL;
int8_t x239 = INT8_MIN;
volatile int64_t x246 = -1LL;
volatile int64_t x260 = 504LL;
uint16_t x263 = UINT16_MAX;
static int64_t x283 = -1LL;
volatile int16_t x289 = -1;
volatile uint16_t x302 = 4U;
volatile int32_t x304 = INT32_MIN;
static volatile int32_t t50 = 1218;
int8_t x318 = -1;
volatile int32_t x320 = -8711;
static int8_t x323 = INT8_MIN;
volatile int32_t t55 = 27;
uint32_t x342 = 1U;
int32_t t58 = -7;
uint8_t x350 = 89U;
int32_t t59 = 24546;
volatile int32_t t60 = 2807;
volatile int64_t x360 = INT64_MIN;
uint64_t x393 = UINT64_MAX;
int32_t x396 = INT32_MIN;
volatile uint16_t x403 = 115U;
int64_t x407 = -1LL;
int16_t x413 = 1445;
int16_t x417 = -1675;
volatile int32_t t69 = -8923;
int16_t x426 = INT16_MAX;
static uint64_t x442 = UINT64_MAX;
uint32_t x458 = 1005315854U;
volatile int64_t x469 = 431LL;
volatile uint64_t x471 = 92747687LLU;
static uint64_t x479 = 221575343LLU;
volatile int8_t x481 = 9;
volatile uint8_t x489 = 98U;
static uint16_t x494 = 0U;
volatile uint16_t x515 = 10U;
volatile int32_t t81 = -1738;
int32_t t82 = 231;
int32_t t84 = -9;
int16_t x538 = 83;
int16_t x543 = -1;
static volatile int32_t t90 = -899199556;
uint8_t x562 = 22U;
static volatile uint64_t x564 = 9735LLU;
int32_t t94 = -215301465;
uint8_t x587 = UINT8_MAX;
volatile uint16_t x589 = 28U;
static int32_t x590 = -75924;
uint16_t x600 = UINT16_MAX;
int32_t t98 = -749042230;
volatile int32_t x604 = -14;


void f0(void) {
	int8_t x1 = 44;
	volatile int32_t t0 = 245228;

	t0 = (x1==((x2*x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x17 = -29;
	uint64_t x19 = 25336793813312394LLU;
	volatile int16_t x20 = 3;
	volatile int32_t t1 = -23254720;

	t1 = (x17==((x18*x19)/x20));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x25 = INT64_MIN;
	uint32_t x26 = UINT32_MAX;
	int8_t x27 = -1;
	int64_t x28 = -1LL;
	int32_t t2 = 79234948;

	t2 = (x25==((x26*x27)/x28));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x33 = INT64_MIN;
	int16_t x34 = INT16_MAX;
	volatile int8_t x36 = INT8_MAX;
	volatile int32_t t3 = 796464;

	t3 = (x33==((x34*x35)/x36));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x41 = INT64_MIN;
	int32_t x42 = 109720;
	static int8_t x43 = -56;
	int64_t x44 = 1295404391669127LL;

	t4 = (x41==((x42*x43)/x44));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x46 = 25308685527LL;
	static uint16_t x48 = 1U;
	static volatile int32_t t5 = -319046565;

	t5 = (x45==((x46*x47)/x48));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x49 = 34U;
	int32_t x50 = -1;
	int16_t x51 = INT16_MIN;
	uint32_t x52 = UINT32_MAX;
	int32_t t6 = -10;

	t6 = (x49==((x50*x51)/x52));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x53 = INT64_MIN;
	int16_t x55 = INT16_MAX;
	uint8_t x56 = UINT8_MAX;
	int32_t t7 = -977;

	t7 = (x53==((x54*x55)/x56));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x57 = 5878180999965714LL;
	int64_t x58 = -704LL;
	uint64_t x59 = UINT64_MAX;
	volatile int32_t t8 = -5733626;

	t8 = (x57==((x58*x59)/x60));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x65 = INT64_MIN;
	uint64_t x66 = UINT64_MAX;
	int8_t x67 = -1;
	int64_t x68 = INT64_MIN;
	int32_t t9 = -913;

	t9 = (x65==((x66*x67)/x68));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x69 = 3394;
	int64_t x71 = -208229LL;
	int8_t x72 = 2;
	int32_t t10 = 14015;

	t10 = (x69==((x70*x71)/x72));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = 10;
	int16_t x74 = INT16_MIN;
	int16_t x76 = 1;

	t11 = (x73==((x74*x75)/x76));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x81 = -1LL;
	static int32_t x82 = -1;
	volatile uint8_t x83 = UINT8_MAX;
	volatile int16_t x84 = INT16_MIN;
	volatile int32_t t12 = 854851019;

	t12 = (x81==((x82*x83)/x84));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = INT64_MIN;
	volatile int32_t t13 = -115;

	t13 = (x89==((x90*x91)/x92));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x93 = INT32_MAX;
	int16_t x94 = -1;
	int64_t x96 = INT64_MIN;
	volatile int32_t t14 = -3;

	t14 = (x93==((x94*x95)/x96));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x104 = -1LL;
	static volatile int32_t t15 = 4302;

	t15 = (x101==((x102*x103)/x104));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MIN;
	uint8_t x107 = 1U;
	volatile int32_t t16 = 290568035;

	t16 = (x105==((x106*x107)/x108));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x109 = -1;
	uint8_t x110 = 0U;
	uint64_t x111 = 216865128390093518LLU;
	uint8_t x112 = 11U;
	static volatile int32_t t17 = -350518609;

	t17 = (x109==((x110*x111)/x112));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x113 = INT8_MIN;
	uint32_t x114 = 13U;
	int32_t x115 = -1;
	uint16_t x116 = UINT16_MAX;
	int32_t t18 = 8;

	t18 = (x113==((x114*x115)/x116));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x129 = -24;
	volatile int8_t x130 = INT8_MAX;
	uint64_t x131 = 53217754371LLU;

	t19 = (x129==((x130*x131)/x132));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x137 = 5442640603194LL;
	uint64_t x138 = 44362692854714233LLU;
	int32_t x139 = 185960;
	int16_t x140 = -13313;
	volatile int32_t t20 = -700710398;

	t20 = (x137==((x138*x139)/x140));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x146 = 14;
	volatile uint16_t x148 = UINT16_MAX;
	static volatile int32_t t21 = -878;

	t21 = (x145==((x146*x147)/x148));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x149 = 922033277179832989LL;
	int16_t x150 = INT16_MIN;
	volatile int8_t x151 = 1;
	uint64_t x152 = 1106338402LLU;
	int32_t t22 = -4260;

	t22 = (x149==((x150*x151)/x152));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x157 = UINT8_MAX;
	volatile int64_t x158 = -1LL;
	static volatile int64_t x159 = -11578LL;
	volatile int8_t x160 = -11;
	volatile int32_t t23 = -1;

	t23 = (x157==((x158*x159)/x160));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x165 = 61943787758197LLU;
	volatile uint16_t x166 = 283U;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = INT32_MAX;
	volatile int32_t t24 = -190273454;

	t24 = (x165==((x166*x167)/x168));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x173 = INT8_MIN;
	static uint64_t x175 = 6656371496980LLU;
	int32_t x176 = INT32_MIN;

	t25 = (x173==((x174*x175)/x176));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x177 = INT64_MIN;
	static uint64_t x178 = 3LLU;
	volatile int32_t x179 = INT32_MIN;
	uint8_t x180 = 6U;

	t26 = (x177==((x178*x179)/x180));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x181 = 27303700U;
	uint16_t x183 = UINT16_MAX;
	volatile uint32_t x184 = UINT32_MAX;
	volatile int32_t t27 = -5107;

	t27 = (x181==((x182*x183)/x184));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x189 = INT8_MIN;
	static volatile int8_t x190 = 34;
	uint64_t x191 = 2146411783LLU;
	static volatile int32_t x192 = -1078966;
	int32_t t28 = 9467393;

	t28 = (x189==((x190*x191)/x192));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x193 = 0U;
	uint32_t x194 = 7196368U;
	uint16_t x195 = 1U;
	volatile int32_t t29 = -18195;

	t29 = (x193==((x194*x195)/x196));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x201 = INT32_MIN;
	uint16_t x202 = 509U;
	uint64_t x203 = UINT64_MAX;
	static volatile int16_t x204 = INT16_MIN;
	int32_t t30 = -61731775;

	t30 = (x201==((x202*x203)/x204));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x205 = 7553519LLU;
	int8_t x206 = -38;
	volatile uint64_t x207 = 6LLU;
	static int32_t x208 = -3;
	volatile int32_t t31 = 567703142;

	t31 = (x205==((x206*x207)/x208));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x210 = -1;
	uint32_t x211 = 234698U;
	int16_t x212 = -1;
	int32_t t32 = 444026;

	t32 = (x209==((x210*x211)/x212));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x216 = INT8_MIN;

	t33 = (x213==((x214*x215)/x216));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x217 = INT8_MIN;
	uint8_t x218 = 0U;
	static volatile int16_t x219 = INT16_MIN;
	volatile int32_t t34 = 790941877;

	t34 = (x217==((x218*x219)/x220));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x221 = INT64_MIN;
	int16_t x222 = 490;
	static uint16_t x223 = UINT16_MAX;
	int16_t x224 = INT16_MIN;
	int32_t t35 = 59299;

	t35 = (x221==((x222*x223)/x224));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x225 = 608U;
	static int16_t x227 = INT16_MAX;
	uint64_t x228 = 1324481LLU;
	int32_t t36 = 72414;

	t36 = (x225==((x226*x227)/x228));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x229 = UINT16_MAX;
	int8_t x231 = INT8_MAX;
	int64_t x232 = INT64_MIN;
	volatile int32_t t37 = 4164;

	t37 = (x229==((x230*x231)/x232));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x237 = 87217870740LLU;
	uint64_t x238 = 15LLU;
	int32_t x240 = INT32_MIN;
	static int32_t t38 = -16439738;

	t38 = (x237==((x238*x239)/x240));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x245 = INT32_MIN;
	int32_t x247 = 0;
	volatile uint8_t x248 = 7U;
	static int32_t t39 = 12767;

	t39 = (x245==((x246*x247)/x248));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x257 = 253U;
	int32_t x258 = -1;
	volatile int8_t x259 = INT8_MIN;
	int32_t t40 = -1;

	t40 = (x257==((x258*x259)/x260));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x261 = -362;
	int16_t x262 = INT16_MIN;
	int64_t x264 = INT64_MIN;
	volatile int32_t t41 = -1;

	t41 = (x261==((x262*x263)/x264));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x265 = 28U;
	volatile int8_t x266 = -2;
	volatile uint64_t x267 = UINT64_MAX;
	uint8_t x268 = 22U;
	static volatile int32_t t42 = -146;

	t42 = (x265==((x266*x267)/x268));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x269 = UINT16_MAX;
	uint32_t x270 = UINT32_MAX;
	int8_t x271 = -56;
	volatile int64_t x272 = -38026LL;
	static int32_t t43 = 2;

	t43 = (x269==((x270*x271)/x272));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x277 = INT16_MIN;
	volatile int32_t x278 = INT32_MIN;
	uint32_t x279 = UINT32_MAX;
	uint16_t x280 = 1U;
	int32_t t44 = 2894;

	t44 = (x277==((x278*x279)/x280));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x281 = 15U;
	volatile int8_t x282 = INT8_MIN;
	int16_t x284 = -1;
	volatile int32_t t45 = 1;

	t45 = (x281==((x282*x283)/x284));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x285 = -1;
	int8_t x286 = INT8_MAX;
	static volatile uint64_t x287 = 1653541740498168LLU;
	static int16_t x288 = 1;
	volatile int32_t t46 = 24895280;

	t46 = (x285==((x286*x287)/x288));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x290 = 7;
	uint16_t x291 = UINT16_MAX;
	int16_t x292 = -18;
	int32_t t47 = 1;

	t47 = (x289==((x290*x291)/x292));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x293 = 0U;
	int64_t x294 = 118LL;
	volatile int8_t x295 = -1;
	int32_t x296 = INT32_MAX;
	static volatile int32_t t48 = 15;

	t48 = (x293==((x294*x295)/x296));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x297 = UINT8_MAX;
	volatile int64_t x298 = 20LL;
	uint32_t x299 = 3492380U;
	static uint16_t x300 = 2U;
	int32_t t49 = 21;

	t49 = (x297==((x298*x299)/x300));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x301 = INT64_MIN;
	static int16_t x303 = INT16_MIN;

	t50 = (x301==((x302*x303)/x304));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x309 = -2;
	int32_t x310 = 1;
	int64_t x311 = 1931LL;
	static uint8_t x312 = UINT8_MAX;
	int32_t t51 = 41;

	t51 = (x309==((x310*x311)/x312));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x317 = 30;
	static volatile int8_t x319 = INT8_MAX;
	int32_t t52 = -10;

	t52 = (x317==((x318*x319)/x320));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x321 = 404;
	int8_t x322 = INT8_MAX;
	uint32_t x324 = 7U;
	static volatile int32_t t53 = -2;

	t53 = (x321==((x322*x323)/x324));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x329 = 8334U;
	static int8_t x330 = -1;
	volatile int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	int32_t t54 = 0;

	t54 = (x329==((x330*x331)/x332));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x333 = 2076244895U;
	int32_t x334 = -1;
	int16_t x335 = -2;
	int16_t x336 = -1;

	t55 = (x333==((x334*x335)/x336));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x337 = -1;
	volatile uint32_t x338 = 415946U;
	static uint16_t x339 = 5U;
	int8_t x340 = -19;
	int32_t t56 = -1;

	t56 = (x337==((x338*x339)/x340));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x341 = INT64_MIN;
	int64_t x343 = 4546499063793525LL;
	int16_t x344 = -1;
	int32_t t57 = 1;

	t57 = (x341==((x342*x343)/x344));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x345 = 7853U;
	uint16_t x346 = 14575U;
	static int16_t x347 = INT16_MIN;
	int32_t x348 = INT32_MIN;

	t58 = (x345==((x346*x347)/x348));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x349 = 12U;
	int16_t x351 = -1;
	volatile int8_t x352 = INT8_MAX;

	t59 = (x349==((x350*x351)/x352));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x353 = 1063652177U;
	int16_t x354 = INT16_MAX;
	volatile uint16_t x355 = 5U;
	uint64_t x356 = UINT64_MAX;

	t60 = (x353==((x354*x355)/x356));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x357 = 0U;
	int8_t x358 = INT8_MIN;
	uint8_t x359 = 1U;
	int32_t t61 = -253445;

	t61 = (x357==((x358*x359)/x360));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x365 = INT16_MIN;
	int32_t x366 = -1;
	volatile uint32_t x367 = UINT32_MAX;
	volatile uint16_t x368 = 94U;
	static volatile int32_t t62 = -226101;

	t62 = (x365==((x366*x367)/x368));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x389 = INT32_MIN;
	static int16_t x390 = -2;
	int32_t x391 = -1;
	int64_t x392 = -1458659589LL;
	int32_t t63 = 4124439;

	t63 = (x389==((x390*x391)/x392));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x394 = UINT32_MAX;
	int16_t x395 = INT16_MIN;
	int32_t t64 = -1749;

	t64 = (x393==((x394*x395)/x396));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x401 = UINT8_MAX;
	uint32_t x402 = 101U;
	int16_t x404 = -3;
	int32_t t65 = -6;

	t65 = (x401==((x402*x403)/x404));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x405 = INT32_MIN;
	uint64_t x406 = UINT64_MAX;
	int16_t x408 = -8;
	static volatile int32_t t66 = 10;

	t66 = (x405==((x406*x407)/x408));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x409 = 1705U;
	static volatile int8_t x410 = INT8_MIN;
	int8_t x411 = INT8_MIN;
	int64_t x412 = -1961300502366745LL;
	int32_t t67 = -12255;

	t67 = (x409==((x410*x411)/x412));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x414 = INT16_MIN;
	static uint32_t x415 = 89271721U;
	int64_t x416 = -229431300740LL;
	int32_t t68 = -9938070;

	t68 = (x413==((x414*x415)/x416));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x418 = INT8_MAX;
	int16_t x419 = INT16_MAX;
	uint8_t x420 = 21U;

	t69 = (x417==((x418*x419)/x420));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x425 = UINT8_MAX;
	uint8_t x427 = UINT8_MAX;
	uint8_t x428 = UINT8_MAX;
	int32_t t70 = 248;

	t70 = (x425==((x426*x427)/x428));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x437 = 10583;
	uint32_t x438 = UINT32_MAX;
	int32_t x439 = 29881;
	int64_t x440 = -1LL;
	volatile int32_t t71 = 727975;

	t71 = (x437==((x438*x439)/x440));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x441 = INT8_MAX;
	static int32_t x443 = INT32_MAX;
	volatile uint64_t x444 = UINT64_MAX;
	int32_t t72 = 11778611;

	t72 = (x441==((x442*x443)/x444));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x457 = 38950916;
	int8_t x459 = INT8_MIN;
	int8_t x460 = INT8_MAX;
	volatile int32_t t73 = -128;

	t73 = (x457==((x458*x459)/x460));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x465 = 10633494U;
	volatile int16_t x466 = INT16_MAX;
	volatile int16_t x467 = -188;
	int32_t x468 = INT32_MIN;
	int32_t t74 = -229;

	t74 = (x465==((x466*x467)/x468));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x470 = INT16_MIN;
	uint16_t x472 = UINT16_MAX;
	int32_t t75 = 1003301;

	t75 = (x469==((x470*x471)/x472));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x477 = UINT16_MAX;
	int16_t x478 = INT16_MIN;
	volatile uint32_t x480 = 235120U;
	volatile int32_t t76 = 3490;

	t76 = (x477==((x478*x479)/x480));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x482 = 6194213975035645LLU;
	uint64_t x483 = 152LLU;
	volatile uint32_t x484 = 84686U;
	volatile int32_t t77 = 277;

	t77 = (x481==((x482*x483)/x484));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x490 = UINT8_MAX;
	int8_t x491 = INT8_MIN;
	int64_t x492 = INT64_MIN;
	int32_t t78 = 6279428;

	t78 = (x489==((x490*x491)/x492));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x493 = 1665U;
	int16_t x495 = INT16_MAX;
	uint32_t x496 = UINT32_MAX;
	volatile int32_t t79 = -13161;

	t79 = (x493==((x494*x495)/x496));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x505 = INT8_MIN;
	static int64_t x506 = INT64_MAX;
	static uint64_t x507 = 49638723LLU;
	uint32_t x508 = 69654186U;
	volatile int32_t t80 = 2487;

	t80 = (x505==((x506*x507)/x508));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x513 = -19978498;
	uint32_t x514 = UINT32_MAX;
	uint16_t x516 = 5883U;

	t81 = (x513==((x514*x515)/x516));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x517 = INT32_MIN;
	volatile uint32_t x518 = 14883U;
	int16_t x519 = 93;
	int8_t x520 = INT8_MAX;

	t82 = (x517==((x518*x519)/x520));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x521 = 83;
	int32_t x522 = -907342735;
	uint32_t x523 = 142204393U;
	int32_t x524 = -6;
	static int32_t t83 = -12161;

	t83 = (x521==((x522*x523)/x524));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x525 = INT16_MIN;
	static volatile uint16_t x526 = 3U;
	volatile int8_t x527 = -1;
	int32_t x528 = INT32_MIN;

	t84 = (x525==((x526*x527)/x528));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x529 = 2933406;
	int8_t x530 = 1;
	int8_t x531 = INT8_MAX;
	int16_t x532 = -1;
	static volatile int32_t t85 = 3495;

	t85 = (x529==((x530*x531)/x532));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x537 = UINT64_MAX;
	int8_t x539 = INT8_MIN;
	int32_t x540 = -1;
	volatile int32_t t86 = 3929883;

	t86 = (x537==((x538*x539)/x540));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x541 = 36U;
	int64_t x542 = INT64_MAX;
	static int32_t x544 = 471;
	volatile int32_t t87 = 9042;

	t87 = (x541==((x542*x543)/x544));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x545 = INT64_MIN;
	uint32_t x546 = 5568153U;
	uint8_t x547 = 0U;
	int8_t x548 = 1;
	volatile int32_t t88 = 145054829;

	t88 = (x545==((x546*x547)/x548));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x553 = 1LL;
	static volatile uint32_t x554 = 369603020U;
	volatile uint16_t x555 = UINT16_MAX;
	volatile int32_t x556 = -522521;
	static volatile int32_t t89 = -63;

	t89 = (x553==((x554*x555)/x556));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x557 = -34727908;
	int16_t x558 = INT16_MIN;
	int64_t x559 = 943LL;
	uint8_t x560 = UINT8_MAX;

	t90 = (x557==((x558*x559)/x560));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x561 = -1LL;
	int16_t x563 = INT16_MAX;
	int32_t t91 = 2;

	t91 = (x561==((x562*x563)/x564));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x565 = INT8_MAX;
	volatile int64_t x566 = 226520868323275LL;
	uint32_t x567 = 13U;
	int64_t x568 = INT64_MAX;
	int32_t t92 = 3559;

	t92 = (x565==((x566*x567)/x568));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x573 = -1012345043;
	uint64_t x574 = UINT64_MAX;
	int32_t x575 = 45;
	int32_t x576 = INT32_MIN;
	static int32_t t93 = -11;

	t93 = (x573==((x574*x575)/x576));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x581 = -1610668LL;
	uint32_t x582 = 494643505U;
	int8_t x583 = INT8_MIN;
	int64_t x584 = INT64_MIN;

	t94 = (x581==((x582*x583)/x584));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x585 = -477LL;
	static int8_t x586 = INT8_MIN;
	int32_t x588 = INT32_MIN;
	volatile int32_t t95 = -10554268;

	t95 = (x585==((x586*x587)/x588));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x591 = 52148805231LLU;
	static int8_t x592 = -1;
	int32_t t96 = 150179189;

	t96 = (x589==((x590*x591)/x592));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x593 = UINT32_MAX;
	int8_t x594 = 0;
	static int64_t x595 = -138297622LL;
	int16_t x596 = INT16_MIN;
	volatile int32_t t97 = 96;

	t97 = (x593==((x594*x595)/x596));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x597 = UINT8_MAX;
	int64_t x598 = -1LL;
	uint8_t x599 = 7U;

	t98 = (x597==((x598*x599)/x600));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x601 = INT8_MAX;
	int8_t x602 = INT8_MIN;
	static uint64_t x603 = UINT64_MAX;
	int32_t t99 = 116476;

	t99 = (x601==((x602*x603)/x604));

	if (t99 != 0) { NG(); } else { ; }
	
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

