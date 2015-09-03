#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x23 = INT8_MIN;
static volatile int32_t t1 = -6939;
static int32_t x27 = 466;
volatile int16_t x34 = INT16_MAX;
int8_t x56 = -1;
int64_t x66 = INT64_MAX;
volatile int8_t x81 = INT8_MIN;
uint16_t x97 = 819U;
uint16_t x98 = 62U;
int32_t x100 = INT32_MAX;
int32_t t14 = 501137565;
static uint8_t x135 = 0U;
uint32_t x137 = 80U;
int64_t x139 = INT64_MAX;
static int16_t x149 = -1;
uint32_t x169 = 64885698U;
volatile int32_t x171 = 1;
volatile uint32_t x184 = 226554678U;
volatile int32_t t24 = 672755132;
static int32_t x213 = -7920;
int8_t x215 = -1;
static volatile int16_t x222 = 351;
uint16_t x225 = 30U;
int32_t t29 = -474487;
static int32_t x231 = -1454;
int32_t x234 = 19336;
uint16_t x236 = 13268U;
uint32_t x241 = UINT32_MAX;
static int32_t x242 = 9;
static int32_t x253 = 32;
uint8_t x254 = 87U;
volatile uint8_t x257 = UINT8_MAX;
uint16_t x259 = UINT16_MAX;
static uint8_t x271 = 88U;
volatile int32_t x275 = INT32_MIN;
int32_t t38 = 25;
uint64_t x285 = 1875838LLU;
int8_t x290 = 28;
uint8_t x298 = 3U;
int16_t x299 = -1;
int32_t t45 = -1;
volatile int64_t x317 = -1LL;
volatile int32_t t46 = 0;
volatile int64_t x338 = 97284915LL;
int16_t x340 = 2937;
uint8_t x342 = 0U;
int32_t x343 = INT32_MAX;
static int32_t x347 = INT32_MIN;
static volatile int32_t x362 = 80391;
static uint16_t x364 = 7U;
volatile int32_t t54 = -194738387;
uint32_t x378 = UINT32_MAX;
int64_t x379 = INT64_MIN;
int8_t x380 = 1;
int16_t x383 = INT16_MAX;
int32_t x384 = INT32_MAX;
volatile int16_t x396 = INT16_MAX;
volatile int32_t x405 = INT32_MAX;
int32_t x407 = INT32_MIN;
uint32_t x413 = UINT32_MAX;
int32_t x419 = -899;
int32_t t60 = -8287628;
static volatile int64_t x425 = 547079702173276LL;
uint8_t x434 = 28U;
int8_t x441 = INT8_MIN;
static int64_t x443 = -1LL;
int32_t t64 = 756333;
uint64_t x470 = 28635227507LLU;
int8_t x473 = -6;
volatile uint8_t x490 = 71U;
int8_t x502 = INT8_MAX;
int64_t x505 = -650083519187LL;
volatile uint8_t x506 = 28U;
int16_t x513 = -97;
static uint16_t x524 = 4U;
uint8_t x532 = 53U;
volatile int8_t x535 = -2;
uint8_t x539 = UINT8_MAX;
static int32_t x549 = INT32_MIN;
volatile int16_t x553 = -1;
int64_t x555 = -1LL;
int64_t x564 = INT64_MIN;
volatile int32_t x569 = INT32_MIN;
static int16_t x571 = -115;
int8_t x583 = INT8_MIN;
volatile int32_t t85 = -21600;
int64_t x587 = -1LL;
uint32_t x588 = 61178U;
int32_t t87 = 1382;
int32_t x597 = INT32_MIN;
static int8_t x599 = INT8_MAX;
volatile int32_t t88 = -20234332;
uint64_t x604 = 9357384176260LLU;
int8_t x612 = -1;
volatile uint16_t x630 = 10894U;
int16_t x634 = 0;
volatile int32_t t96 = 538;
int8_t x650 = 46;
volatile int32_t t98 = 7275;
static uint64_t x677 = UINT64_MAX;
int32_t x679 = INT32_MIN;
static int32_t x680 = INT32_MIN;


void f0(void) {
	int32_t x5 = -991;
	uint8_t x6 = UINT8_MAX;
	volatile uint64_t x7 = UINT64_MAX;
	uint32_t x8 = 375587U;
	int32_t t0 = -95802;

	t0 = (x5<(x6<<(x7<x8)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x21 = 30138LLU;
	volatile int64_t x22 = 27461767354LL;
	int16_t x24 = 0;

	t1 = (x21<(x22<<(x23<x24)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x25 = INT32_MIN;
	int64_t x26 = 4934057964750649LL;
	int64_t x28 = 74909406722240101LL;
	volatile int32_t t2 = -7;

	t2 = (x25<(x26<<(x27<x28)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x33 = -1LL;
	int8_t x35 = INT8_MIN;
	int64_t x36 = 10915LL;
	int32_t t3 = -2779312;

	t3 = (x33<(x34<<(x35<x36)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x37 = -5767LL;
	int32_t x38 = 0;
	volatile int32_t x39 = INT32_MIN;
	static uint8_t x40 = 94U;
	int32_t t4 = -86357;

	t4 = (x37<(x38<<(x39<x40)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x45 = INT16_MIN;
	uint16_t x46 = UINT16_MAX;
	int8_t x47 = INT8_MIN;
	uint8_t x48 = UINT8_MAX;
	int32_t t5 = -243070;

	t5 = (x45<(x46<<(x47<x48)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x49 = INT32_MAX;
	int64_t x50 = INT64_MAX;
	static int32_t x51 = INT32_MAX;
	uint64_t x52 = 13LLU;
	volatile int32_t t6 = 931;

	t6 = (x49<(x50<<(x51<x52)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x53 = 122U;
	static int32_t x54 = INT32_MAX;
	uint8_t x55 = 1U;
	static int32_t t7 = 84620;

	t7 = (x53<(x54<<(x55<x56)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x65 = 93239180141962916LL;
	static int32_t x67 = INT32_MIN;
	int32_t x68 = INT32_MIN;
	volatile int32_t t8 = -109713;

	t8 = (x65<(x66<<(x67<x68)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x69 = 3U;
	volatile int64_t x70 = INT64_MAX;
	int16_t x71 = INT16_MIN;
	volatile int32_t x72 = INT32_MIN;
	static int32_t t9 = 5086249;

	t9 = (x69<(x70<<(x71<x72)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x82 = UINT8_MAX;
	int32_t x83 = 264551676;
	static uint32_t x84 = 27U;
	int32_t t10 = 287470838;

	t10 = (x81<(x82<<(x83<x84)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x85 = -1077024;
	int32_t x86 = 18449;
	int64_t x87 = -1LL;
	int32_t x88 = INT32_MIN;
	static int32_t t11 = 14665;

	t11 = (x85<(x86<<(x87<x88)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x99 = INT8_MIN;
	static int32_t t12 = -11;

	t12 = (x97<(x98<<(x99<x100)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x101 = INT8_MIN;
	uint8_t x102 = UINT8_MAX;
	static int16_t x103 = INT16_MIN;
	int64_t x104 = -1LL;
	volatile int32_t t13 = 1966;

	t13 = (x101<(x102<<(x103<x104)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = 5;
	int32_t x107 = INT32_MAX;
	uint32_t x108 = UINT32_MAX;

	t14 = (x105<(x106<<(x107<x108)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x117 = -1;
	int16_t x118 = 131;
	uint8_t x119 = UINT8_MAX;
	int16_t x120 = -1;
	volatile int32_t t15 = 3650341;

	t15 = (x117<(x118<<(x119<x120)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x125 = INT8_MAX;
	int8_t x126 = 47;
	int32_t x127 = -1904;
	int32_t x128 = INT32_MAX;
	int32_t t16 = -1034246;

	t16 = (x125<(x126<<(x127<x128)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x133 = INT16_MIN;
	uint64_t x134 = 57814001628000LLU;
	int8_t x136 = INT8_MIN;
	int32_t t17 = 0;

	t17 = (x133<(x134<<(x135<x136)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x138 = INT8_MAX;
	int8_t x140 = -1;
	int32_t t18 = -2100300;

	t18 = (x137<(x138<<(x139<x140)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x141 = 15U;
	uint16_t x142 = 29U;
	int8_t x143 = 0;
	volatile int64_t x144 = INT64_MIN;
	volatile int32_t t19 = 58;

	t19 = (x141<(x142<<(x143<x144)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x145 = UINT16_MAX;
	static uint32_t x146 = 39034U;
	uint32_t x147 = 1995U;
	uint64_t x148 = 1446782262177LLU;
	volatile int32_t t20 = -261;

	t20 = (x145<(x146<<(x147<x148)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x150 = UINT64_MAX;
	int16_t x151 = INT16_MIN;
	int8_t x152 = 7;
	static volatile int32_t t21 = -63562493;

	t21 = (x149<(x150<<(x151<x152)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x165 = 6010LL;
	uint16_t x166 = 195U;
	int16_t x167 = INT16_MAX;
	uint64_t x168 = UINT64_MAX;
	int32_t t22 = 54601;

	t22 = (x165<(x166<<(x167<x168)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x170 = INT32_MAX;
	volatile int8_t x172 = INT8_MIN;
	int32_t t23 = -93;

	t23 = (x169<(x170<<(x171<x172)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x181 = INT8_MIN;
	uint8_t x182 = 7U;
	static volatile uint16_t x183 = UINT16_MAX;

	t24 = (x181<(x182<<(x183<x184)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x209 = UINT64_MAX;
	static int8_t x210 = 39;
	volatile uint16_t x211 = UINT16_MAX;
	int16_t x212 = -6168;
	volatile int32_t t25 = -49;

	t25 = (x209<(x210<<(x211<x212)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x214 = 145LL;
	static int64_t x216 = INT64_MIN;
	int32_t t26 = 124043;

	t26 = (x213<(x214<<(x215<x216)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x217 = INT8_MAX;
	uint64_t x218 = 4023257649162988009LLU;
	int32_t x219 = 386;
	int64_t x220 = -1LL;
	static volatile int32_t t27 = -594543;

	t27 = (x217<(x218<<(x219<x220)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x221 = INT64_MIN;
	volatile int64_t x223 = INT64_MIN;
	int8_t x224 = -1;
	static volatile int32_t t28 = 100;

	t28 = (x221<(x222<<(x223<x224)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x226 = 7U;
	int8_t x227 = -1;
	uint32_t x228 = UINT32_MAX;

	t29 = (x225<(x226<<(x227<x228)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x229 = INT8_MAX;
	volatile int8_t x230 = 1;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t30 = 187634804;

	t30 = (x229<(x230<<(x231<x232)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x233 = INT16_MIN;
	static int8_t x235 = INT8_MIN;
	static int32_t t31 = 109;

	t31 = (x233<(x234<<(x235<x236)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x237 = 52791814U;
	static volatile uint64_t x238 = UINT64_MAX;
	uint16_t x239 = UINT16_MAX;
	uint64_t x240 = UINT64_MAX;
	volatile int32_t t32 = 40493;

	t32 = (x237<(x238<<(x239<x240)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x243 = 17808423096274LLU;
	volatile int8_t x244 = 6;
	static volatile int32_t t33 = -115145;

	t33 = (x241<(x242<<(x243<x244)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x255 = -1;
	int64_t x256 = INT64_MAX;
	static int32_t t34 = 1;

	t34 = (x253<(x254<<(x255<x256)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x258 = UINT16_MAX;
	static volatile int64_t x260 = INT64_MAX;
	volatile int32_t t35 = 0;

	t35 = (x257<(x258<<(x259<x260)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x265 = -1;
	static uint8_t x266 = UINT8_MAX;
	volatile int16_t x267 = -47;
	int32_t x268 = 85;
	static int32_t t36 = 55129;

	t36 = (x265<(x266<<(x267<x268)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x269 = 41022458827LL;
	uint64_t x270 = 7803333961LLU;
	volatile uint16_t x272 = 1021U;
	int32_t t37 = 0;

	t37 = (x269<(x270<<(x271<x272)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x273 = -270;
	int8_t x274 = 1;
	int8_t x276 = 1;

	t38 = (x273<(x274<<(x275<x276)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x277 = INT8_MIN;
	volatile uint16_t x278 = 1908U;
	uint32_t x279 = UINT32_MAX;
	int16_t x280 = -498;
	int32_t t39 = -98008;

	t39 = (x277<(x278<<(x279<x280)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x281 = UINT64_MAX;
	uint64_t x282 = UINT64_MAX;
	int8_t x283 = -1;
	uint8_t x284 = UINT8_MAX;
	int32_t t40 = 4237;

	t40 = (x281<(x282<<(x283<x284)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x286 = 82U;
	static int16_t x287 = INT16_MAX;
	int16_t x288 = -1;
	static volatile int32_t t41 = 1;

	t41 = (x285<(x286<<(x287<x288)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x289 = -1;
	uint32_t x291 = UINT32_MAX;
	static int16_t x292 = INT16_MAX;
	static int32_t t42 = 40254;

	t42 = (x289<(x290<<(x291<x292)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x297 = INT16_MAX;
	static int16_t x300 = INT16_MIN;
	volatile int32_t t43 = -1045;

	t43 = (x297<(x298<<(x299<x300)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = 0;
	int64_t x303 = 609992634178LL;
	uint8_t x304 = 1U;
	int32_t t44 = -5388;

	t44 = (x301<(x302<<(x303<x304)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x305 = INT8_MIN;
	uint16_t x306 = UINT16_MAX;
	int16_t x307 = INT16_MAX;
	volatile int8_t x308 = INT8_MIN;

	t45 = (x305<(x306<<(x307<x308)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x318 = UINT16_MAX;
	uint32_t x319 = UINT32_MAX;
	int64_t x320 = INT64_MIN;

	t46 = (x317<(x318<<(x319<x320)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x329 = INT8_MIN;
	uint64_t x330 = 3610671244LLU;
	int32_t x331 = 1521;
	volatile uint32_t x332 = UINT32_MAX;
	volatile int32_t t47 = -137214;

	t47 = (x329<(x330<<(x331<x332)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x333 = 0U;
	volatile uint64_t x334 = 1256075707257024964LLU;
	int64_t x335 = INT64_MIN;
	int16_t x336 = -1;
	int32_t t48 = -72606344;

	t48 = (x333<(x334<<(x335<x336)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x337 = INT32_MIN;
	int8_t x339 = INT8_MIN;
	volatile int32_t t49 = 621031905;

	t49 = (x337<(x338<<(x339<x340)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x341 = INT64_MIN;
	int8_t x344 = INT8_MIN;
	volatile int32_t t50 = 165;

	t50 = (x341<(x342<<(x343<x344)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x345 = 0;
	uint64_t x346 = UINT64_MAX;
	uint32_t x348 = UINT32_MAX;
	int32_t t51 = 365919234;

	t51 = (x345<(x346<<(x347<x348)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x361 = 38;
	static int16_t x363 = INT16_MAX;
	volatile int32_t t52 = 609445940;

	t52 = (x361<(x362<<(x363<x364)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x369 = INT32_MIN;
	uint16_t x370 = 23948U;
	int64_t x371 = INT64_MIN;
	volatile uint16_t x372 = UINT16_MAX;
	volatile int32_t t53 = 2070065;

	t53 = (x369<(x370<<(x371<x372)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x373 = INT8_MIN;
	uint8_t x374 = 4U;
	volatile uint64_t x375 = UINT64_MAX;
	static int16_t x376 = 20;

	t54 = (x373<(x374<<(x375<x376)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x377 = -6849LL;
	static volatile int32_t t55 = -148;

	t55 = (x377<(x378<<(x379<x380)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x381 = INT8_MIN;
	int8_t x382 = 7;
	volatile int32_t t56 = -98204082;

	t56 = (x381<(x382<<(x383<x384)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x393 = 802494791;
	static int16_t x394 = 1391;
	int64_t x395 = -6399990594170460LL;
	int32_t t57 = -3256;

	t57 = (x393<(x394<<(x395<x396)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x406 = 2U;
	uint8_t x408 = 1U;
	static int32_t t58 = 21626221;

	t58 = (x405<(x406<<(x407<x408)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x414 = 6924U;
	int8_t x415 = INT8_MAX;
	int32_t x416 = INT32_MIN;
	volatile int32_t t59 = -436357057;

	t59 = (x413<(x414<<(x415<x416)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x417 = INT16_MAX;
	uint32_t x418 = 197506U;
	int64_t x420 = -333LL;

	t60 = (x417<(x418<<(x419<x420)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x426 = 30733U;
	static uint32_t x427 = 0U;
	static int8_t x428 = -18;
	int32_t t61 = 41923235;

	t61 = (x425<(x426<<(x427<x428)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x433 = -1;
	int16_t x435 = -1;
	volatile int64_t x436 = INT64_MIN;
	int32_t t62 = -24104615;

	t62 = (x433<(x434<<(x435<x436)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x442 = 734318LLU;
	static volatile int64_t x444 = 557LL;
	volatile int32_t t63 = 1839701;

	t63 = (x441<(x442<<(x443<x444)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x453 = 432038019526338LLU;
	static volatile uint8_t x454 = 112U;
	int32_t x455 = INT32_MIN;
	int64_t x456 = INT64_MAX;

	t64 = (x453<(x454<<(x455<x456)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x469 = -1058387405;
	int32_t x471 = -1;
	int64_t x472 = INT64_MIN;
	int32_t t65 = -263;

	t65 = (x469<(x470<<(x471<x472)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x474 = INT64_MAX;
	volatile uint32_t x475 = UINT32_MAX;
	volatile uint8_t x476 = UINT8_MAX;
	static int32_t t66 = -28219506;

	t66 = (x473<(x474<<(x475<x476)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x477 = INT16_MIN;
	volatile uint16_t x478 = 0U;
	uint32_t x479 = 2674U;
	int64_t x480 = -1LL;
	static int32_t t67 = 89113307;

	t67 = (x477<(x478<<(x479<x480)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x489 = 49U;
	uint8_t x491 = UINT8_MAX;
	uint32_t x492 = 1953138U;
	int32_t t68 = 10;

	t68 = (x489<(x490<<(x491<x492)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x501 = UINT8_MAX;
	static volatile uint16_t x503 = 14U;
	int16_t x504 = -1;
	static int32_t t69 = -8121;

	t69 = (x501<(x502<<(x503<x504)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x507 = -1;
	int64_t x508 = -1LL;
	static int32_t t70 = 1;

	t70 = (x505<(x506<<(x507<x508)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x514 = 22U;
	volatile int32_t x515 = INT32_MIN;
	int32_t x516 = INT32_MIN;
	int32_t t71 = -7;

	t71 = (x513<(x514<<(x515<x516)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x517 = -1468;
	uint16_t x518 = UINT16_MAX;
	uint16_t x519 = 6U;
	uint64_t x520 = UINT64_MAX;
	int32_t t72 = 1;

	t72 = (x517<(x518<<(x519<x520)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x521 = 2U;
	uint8_t x522 = 14U;
	static int64_t x523 = 60LL;
	int32_t t73 = -2;

	t73 = (x521<(x522<<(x523<x524)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x525 = INT8_MIN;
	uint16_t x526 = 12709U;
	uint16_t x527 = 272U;
	int64_t x528 = -1LL;
	volatile int32_t t74 = -1;

	t74 = (x525<(x526<<(x527<x528)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x529 = INT8_MIN;
	uint8_t x530 = UINT8_MAX;
	volatile uint32_t x531 = UINT32_MAX;
	volatile int32_t t75 = 2365;

	t75 = (x529<(x530<<(x531<x532)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x533 = 708;
	uint8_t x534 = 22U;
	volatile uint16_t x536 = UINT16_MAX;
	static int32_t t76 = 912129003;

	t76 = (x533<(x534<<(x535<x536)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x537 = INT8_MIN;
	static uint32_t x538 = 29U;
	int8_t x540 = 29;
	static volatile int32_t t77 = 89;

	t77 = (x537<(x538<<(x539<x540)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x550 = UINT32_MAX;
	int8_t x551 = -1;
	int8_t x552 = -1;
	int32_t t78 = -11;

	t78 = (x549<(x550<<(x551<x552)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x554 = 1U;
	uint8_t x556 = UINT8_MAX;
	volatile int32_t t79 = 6212447;

	t79 = (x553<(x554<<(x555<x556)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x557 = 31017U;
	uint32_t x558 = 6665U;
	int32_t x559 = INT32_MIN;
	volatile uint32_t x560 = UINT32_MAX;
	static volatile int32_t t80 = 8;

	t80 = (x557<(x558<<(x559<x560)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x561 = 8442U;
	volatile uint16_t x562 = 0U;
	int64_t x563 = 3570056089518LL;
	static int32_t t81 = 80486;

	t81 = (x561<(x562<<(x563<x564)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x565 = UINT16_MAX;
	volatile int32_t x566 = 1;
	int32_t x567 = -1;
	volatile int64_t x568 = INT64_MIN;
	int32_t t82 = 85;

	t82 = (x565<(x566<<(x567<x568)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x570 = 4255502953894578LL;
	static uint16_t x572 = 205U;
	volatile int32_t t83 = -1586546;

	t83 = (x569<(x570<<(x571<x572)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x573 = -1;
	uint8_t x574 = 109U;
	static volatile uint8_t x575 = 1U;
	int32_t x576 = 0;
	static int32_t t84 = -115031575;

	t84 = (x573<(x574<<(x575<x576)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x581 = INT16_MIN;
	uint32_t x582 = 0U;
	int16_t x584 = INT16_MAX;

	t85 = (x581<(x582<<(x583<x584)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x585 = -1;
	volatile uint16_t x586 = 14582U;
	static int32_t t86 = -4;

	t86 = (x585<(x586<<(x587<x588)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x593 = INT16_MIN;
	uint32_t x594 = UINT32_MAX;
	static uint8_t x595 = 57U;
	static int32_t x596 = INT32_MIN;

	t87 = (x593<(x594<<(x595<x596)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x598 = 4053557173420560614LLU;
	uint64_t x600 = 3LLU;

	t88 = (x597<(x598<<(x599<x600)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x601 = 749U;
	uint64_t x602 = UINT64_MAX;
	uint8_t x603 = 30U;
	static volatile int32_t t89 = -91199827;

	t89 = (x601<(x602<<(x603<x604)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x605 = INT16_MIN;
	static uint16_t x606 = 14U;
	volatile int32_t x607 = INT32_MIN;
	volatile int8_t x608 = INT8_MAX;
	int32_t t90 = -16789;

	t90 = (x605<(x606<<(x607<x608)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x609 = 193873LL;
	volatile uint16_t x610 = UINT16_MAX;
	uint16_t x611 = 8759U;
	int32_t t91 = -87;

	t91 = (x609<(x610<<(x611<x612)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x621 = INT32_MAX;
	int8_t x622 = INT8_MAX;
	int8_t x623 = INT8_MIN;
	uint64_t x624 = UINT64_MAX;
	int32_t t92 = 2;

	t92 = (x621<(x622<<(x623<x624)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x625 = 9158U;
	uint32_t x626 = 2666283U;
	volatile uint16_t x627 = 12957U;
	static int16_t x628 = INT16_MAX;
	volatile int32_t t93 = 110862254;

	t93 = (x625<(x626<<(x627<x628)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x629 = 6354;
	int64_t x631 = -982LL;
	uint32_t x632 = UINT32_MAX;
	int32_t t94 = 4689;

	t94 = (x629<(x630<<(x631<x632)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x633 = UINT64_MAX;
	int8_t x635 = 1;
	uint8_t x636 = 7U;
	volatile int32_t t95 = -1038903;

	t95 = (x633<(x634<<(x635<x636)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x637 = INT32_MIN;
	static uint16_t x638 = 4250U;
	int32_t x639 = 9494;
	uint32_t x640 = 42257655U;

	t96 = (x637<(x638<<(x639<x640)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x649 = -923;
	int64_t x651 = -1LL;
	int8_t x652 = INT8_MAX;
	volatile int32_t t97 = -10;

	t97 = (x649<(x650<<(x651<x652)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x661 = INT8_MIN;
	uint32_t x662 = 39948U;
	int16_t x663 = 6;
	uint64_t x664 = 2175868679847802537LLU;

	t98 = (x661<(x662<<(x663<x664)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x678 = UINT16_MAX;
	int32_t t99 = 779947;

	t99 = (x677<(x678<<(x679<x680)));

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

