#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x6 = 14U;
int8_t x13 = INT8_MIN;
int32_t x16 = -322111737;
int32_t t3 = 0;
volatile int8_t x25 = -1;
int64_t x27 = INT64_MAX;
static int8_t x28 = INT8_MIN;
uint64_t x29 = 2839471473868704LLU;
int16_t x30 = 154;
static volatile int32_t t6 = 15;
uint64_t x41 = 309251713891232LLU;
volatile int16_t x42 = 3137;
int32_t x44 = -1;
int8_t x53 = -1;
volatile int32_t t9 = 31096;
static int32_t x64 = 5;
int32_t t10 = 1702590;
static int16_t x77 = INT16_MAX;
volatile int32_t x78 = 19034735;
static int32_t t12 = 24;
int64_t x105 = INT64_MAX;
int32_t x117 = 489656;
static int32_t x125 = INT32_MAX;
uint8_t x128 = UINT8_MAX;
int32_t t17 = -6152;
int8_t x155 = INT8_MAX;
int16_t x174 = INT16_MAX;
int16_t x175 = -245;
int16_t x176 = -3488;
int32_t x181 = INT32_MAX;
int8_t x183 = 9;
int32_t t21 = -1;
uint16_t x195 = 829U;
int32_t t23 = 727916710;
static uint32_t x223 = UINT32_MAX;
uint8_t x224 = 1U;
int32_t x231 = -1;
uint32_t x242 = 1689U;
volatile int8_t x256 = INT8_MAX;
uint16_t x262 = 0U;
int32_t t32 = 19039125;
uint16_t x301 = UINT16_MAX;
uint8_t x302 = UINT8_MAX;
static uint32_t x303 = UINT32_MAX;
static uint32_t x308 = UINT32_MAX;
static uint16_t x313 = 46U;
uint64_t x337 = 329548LLU;
static int8_t x338 = 1;
int8_t x340 = INT8_MIN;
int32_t t38 = -40358;
int32_t x360 = -1;
uint32_t x363 = UINT32_MAX;
static volatile uint8_t x381 = 8U;
uint16_t x394 = 718U;
static int8_t x416 = INT8_MIN;
static volatile uint8_t x418 = UINT8_MAX;
int64_t x419 = -1LL;
int16_t x420 = INT16_MIN;
uint64_t x423 = UINT64_MAX;
volatile uint8_t x429 = 60U;
int32_t x440 = 773186997;
int16_t x462 = INT16_MAX;
volatile int16_t x465 = INT16_MIN;
uint64_t x466 = 4031394301LLU;
int32_t x468 = INT32_MIN;
uint32_t x471 = UINT32_MAX;
volatile int32_t t57 = -250001706;
static uint16_t x476 = 1U;
int8_t x487 = 17;
volatile int16_t x488 = INT16_MIN;
volatile int32_t t59 = 3;
uint8_t x498 = 11U;
int64_t x500 = 55187238337LL;
volatile int64_t x508 = INT64_MIN;
uint32_t x509 = 123U;
volatile int8_t x511 = 1;
int32_t x536 = INT32_MAX;
int32_t x553 = INT32_MAX;
int8_t x571 = 24;
static int8_t x572 = 1;
static volatile int32_t t71 = 1178569;
uint32_t x585 = UINT32_MAX;
volatile uint16_t x590 = 505U;
volatile int32_t t73 = 7469411;
int64_t x597 = 33773450LL;
static uint8_t x618 = UINT8_MAX;
int32_t t77 = -2;
int8_t x621 = INT8_MIN;
volatile uint8_t x622 = UINT8_MAX;
int32_t t78 = 2;
uint64_t x643 = 219145LLU;
static uint16_t x652 = UINT16_MAX;
int32_t t83 = 0;
static uint32_t x679 = UINT32_MAX;
int64_t x693 = -5LL;
volatile int32_t t89 = 99;
uint32_t x699 = UINT32_MAX;
uint8_t x718 = 36U;
static uint64_t x720 = 1LLU;
volatile int32_t t91 = -20113293;
int64_t x748 = INT64_MIN;
int16_t x752 = 93;
static uint64_t x765 = UINT64_MAX;
uint64_t x774 = 1147LLU;
static int16_t x785 = INT16_MAX;
volatile int8_t x790 = INT8_MAX;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	int16_t x2 = INT16_MAX;
	volatile uint32_t x3 = 381517176U;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -106815;

	t0 = (x1<(x2<<(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	volatile uint16_t x7 = UINT16_MAX;
	volatile int32_t x8 = INT32_MIN;
	static volatile int32_t t1 = 989372;

	t1 = (x5<(x6<<(x7==x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x14 = 8329074;
	volatile int64_t x15 = -1LL;
	volatile int32_t t2 = 799488935;

	t2 = (x13<(x14<<(x15==x16)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	volatile uint16_t x18 = 2U;
	uint16_t x19 = UINT16_MAX;
	int8_t x20 = INT8_MIN;

	t3 = (x17<(x18<<(x19==x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x26 = INT16_MAX;
	int32_t t4 = -28491392;

	t4 = (x25<(x26<<(x27==x28)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x31 = INT64_MIN;
	static volatile int64_t x32 = 197289LL;
	int32_t t5 = 4721;

	t5 = (x29<(x30<<(x31==x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MIN;
	int32_t x34 = INT32_MAX;
	uint8_t x35 = UINT8_MAX;
	uint8_t x36 = 18U;

	t6 = (x33<(x34<<(x35==x36)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x37 = 243455U;
	volatile uint32_t x38 = 19U;
	int64_t x39 = INT64_MIN;
	int8_t x40 = -1;
	int32_t t7 = 1;

	t7 = (x37<(x38<<(x39==x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x43 = INT16_MAX;
	int32_t t8 = -1;

	t8 = (x41<(x42<<(x43==x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x54 = 38U;
	int64_t x55 = INT64_MAX;
	int8_t x56 = 1;

	t9 = (x53<(x54<<(x55==x56)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x61 = -628;
	volatile int32_t x62 = INT32_MAX;
	uint8_t x63 = UINT8_MAX;

	t10 = (x61<(x62<<(x63==x64)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x79 = 909U;
	int16_t x80 = 5;
	int32_t t11 = -1561037;

	t11 = (x77<(x78<<(x79==x80)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x81 = 239U;
	int64_t x82 = 737309998955929106LL;
	uint64_t x83 = 1173480LLU;
	int64_t x84 = INT64_MIN;

	t12 = (x81<(x82<<(x83==x84)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x89 = INT64_MIN;
	volatile uint16_t x90 = 23747U;
	uint8_t x91 = UINT8_MAX;
	int64_t x92 = -1LL;
	static volatile int32_t t13 = 663320885;

	t13 = (x89<(x90<<(x91==x92)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x106 = UINT64_MAX;
	int64_t x107 = INT64_MIN;
	int8_t x108 = INT8_MIN;
	volatile int32_t t14 = 3678;

	t14 = (x105<(x106<<(x107==x108)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x118 = 55U;
	int64_t x119 = 376LL;
	uint64_t x120 = UINT64_MAX;
	static int32_t t15 = -363996;

	t15 = (x117<(x118<<(x119==x120)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x126 = 4;
	volatile uint16_t x127 = 926U;
	int32_t t16 = -9408;

	t16 = (x125<(x126<<(x127==x128)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x149 = INT16_MIN;
	uint32_t x150 = UINT32_MAX;
	int8_t x151 = INT8_MAX;
	int8_t x152 = INT8_MIN;

	t17 = (x149<(x150<<(x151==x152)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x153 = 188653590U;
	uint32_t x154 = 2676470U;
	static uint8_t x156 = UINT8_MAX;
	static volatile int32_t t18 = 116;

	t18 = (x153<(x154<<(x155==x156)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x173 = -11279379LL;
	int32_t t19 = -202;

	t19 = (x173<(x174<<(x175==x176)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x182 = UINT32_MAX;
	static int32_t x184 = INT32_MAX;
	int32_t t20 = -9;

	t20 = (x181<(x182<<(x183==x184)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x189 = 674LL;
	uint16_t x190 = UINT16_MAX;
	volatile int16_t x191 = INT16_MAX;
	int64_t x192 = -1LL;

	t21 = (x189<(x190<<(x191==x192)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x193 = 3706735730089LL;
	volatile int32_t x194 = 6608921;
	uint32_t x196 = UINT32_MAX;
	static int32_t t22 = 2;

	t22 = (x193<(x194<<(x195==x196)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x213 = UINT16_MAX;
	uint64_t x214 = UINT64_MAX;
	uint8_t x215 = 2U;
	int64_t x216 = INT64_MIN;

	t23 = (x213<(x214<<(x215==x216)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x221 = 16633U;
	volatile uint16_t x222 = 15U;
	volatile int32_t t24 = 0;

	t24 = (x221<(x222<<(x223==x224)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x225 = -1LL;
	uint32_t x226 = 1002429885U;
	uint16_t x227 = 10U;
	static volatile int16_t x228 = INT16_MIN;
	static int32_t t25 = 1758728;

	t25 = (x225<(x226<<(x227==x228)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x229 = INT8_MAX;
	uint64_t x230 = UINT64_MAX;
	volatile int32_t x232 = INT32_MIN;
	volatile int32_t t26 = -602030;

	t26 = (x229<(x230<<(x231==x232)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x233 = 911433456;
	uint64_t x234 = UINT64_MAX;
	volatile uint64_t x235 = UINT64_MAX;
	int16_t x236 = 11;
	volatile int32_t t27 = -12639433;

	t27 = (x233<(x234<<(x235==x236)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x241 = 1;
	static volatile int16_t x243 = -13255;
	int64_t x244 = INT64_MIN;
	int32_t t28 = 9233879;

	t28 = (x241<(x242<<(x243==x244)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x245 = -1;
	static int64_t x246 = INT64_MAX;
	uint16_t x247 = UINT16_MAX;
	static volatile int64_t x248 = -1LL;
	int32_t t29 = 17583480;

	t29 = (x245<(x246<<(x247==x248)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x253 = -1LL;
	static uint8_t x254 = 1U;
	uint16_t x255 = 2U;
	int32_t t30 = 1;

	t30 = (x253<(x254<<(x255==x256)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x257 = 27U;
	static int64_t x258 = INT64_MAX;
	volatile int64_t x259 = -542LL;
	int32_t x260 = INT32_MIN;
	int32_t t31 = 9324072;

	t31 = (x257<(x258<<(x259==x260)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x261 = 11136023129674310LLU;
	volatile int8_t x263 = INT8_MAX;
	int32_t x264 = -1;

	t32 = (x261<(x262<<(x263==x264)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x277 = INT16_MIN;
	static volatile int16_t x278 = INT16_MAX;
	static volatile int64_t x279 = INT64_MAX;
	uint8_t x280 = 15U;
	volatile int32_t t33 = 1935052;

	t33 = (x277<(x278<<(x279==x280)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x289 = INT16_MIN;
	static uint64_t x290 = UINT64_MAX;
	volatile uint8_t x291 = UINT8_MAX;
	int32_t x292 = INT32_MAX;
	int32_t t34 = -861188;

	t34 = (x289<(x290<<(x291==x292)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x304 = INT64_MIN;
	int32_t t35 = 13490;

	t35 = (x301<(x302<<(x303==x304)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x305 = 46;
	uint16_t x306 = 62U;
	uint16_t x307 = UINT16_MAX;
	int32_t t36 = -104;

	t36 = (x305<(x306<<(x307==x308)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x314 = 399U;
	volatile int64_t x315 = 1136073769LL;
	static uint64_t x316 = 1LLU;
	int32_t t37 = 6428772;

	t37 = (x313<(x314<<(x315==x316)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x339 = INT64_MIN;

	t38 = (x337<(x338<<(x339==x340)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x345 = INT64_MAX;
	int8_t x346 = INT8_MAX;
	static int32_t x347 = -1;
	volatile int32_t x348 = INT32_MAX;
	int32_t t39 = 6281446;

	t39 = (x345<(x346<<(x347==x348)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x349 = INT8_MAX;
	int64_t x350 = INT64_MAX;
	int8_t x351 = INT8_MIN;
	volatile int32_t x352 = -1;
	volatile int32_t t40 = -503;

	t40 = (x349<(x350<<(x351==x352)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x353 = INT8_MIN;
	uint16_t x354 = UINT16_MAX;
	uint64_t x355 = 7300LLU;
	volatile uint32_t x356 = 176U;
	volatile int32_t t41 = 50348;

	t41 = (x353<(x354<<(x355==x356)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x357 = -1;
	int8_t x358 = 0;
	volatile int16_t x359 = -1;
	int32_t t42 = 475029;

	t42 = (x357<(x358<<(x359==x360)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x361 = -21;
	int8_t x362 = 11;
	volatile int32_t x364 = -1;
	static volatile int32_t t43 = -1753410;

	t43 = (x361<(x362<<(x363==x364)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x369 = -17823LL;
	int64_t x370 = 131574460195238883LL;
	uint32_t x371 = UINT32_MAX;
	uint64_t x372 = 7029347979062753660LLU;
	volatile int32_t t44 = -29;

	t44 = (x369<(x370<<(x371==x372)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x382 = UINT16_MAX;
	static uint8_t x383 = UINT8_MAX;
	int8_t x384 = -34;
	volatile int32_t t45 = 14330549;

	t45 = (x381<(x382<<(x383==x384)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x389 = INT32_MIN;
	uint16_t x390 = 713U;
	int16_t x391 = 591;
	int64_t x392 = INT64_MAX;
	volatile int32_t t46 = -3;

	t46 = (x389<(x390<<(x391==x392)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x393 = INT32_MIN;
	int16_t x395 = -1;
	volatile uint64_t x396 = UINT64_MAX;
	int32_t t47 = 7;

	t47 = (x393<(x394<<(x395==x396)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x401 = -1;
	uint8_t x402 = 9U;
	uint32_t x403 = 16675737U;
	uint64_t x404 = 8115LLU;
	int32_t t48 = 480986;

	t48 = (x401<(x402<<(x403==x404)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x413 = INT64_MAX;
	uint64_t x414 = 24539LLU;
	int8_t x415 = INT8_MIN;
	int32_t t49 = 0;

	t49 = (x413<(x414<<(x415==x416)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x417 = 28U;
	volatile int32_t t50 = 28979723;

	t50 = (x417<(x418<<(x419==x420)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x421 = INT32_MIN;
	int16_t x422 = 93;
	static int16_t x424 = -2867;
	volatile int32_t t51 = 1;

	t51 = (x421<(x422<<(x423==x424)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x430 = INT32_MAX;
	int16_t x431 = INT16_MIN;
	int16_t x432 = 0;
	volatile int32_t t52 = 888617;

	t52 = (x429<(x430<<(x431==x432)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x437 = UINT32_MAX;
	uint8_t x438 = 0U;
	int16_t x439 = INT16_MAX;
	static volatile int32_t t53 = -258107993;

	t53 = (x437<(x438<<(x439==x440)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x449 = INT8_MAX;
	static volatile int16_t x450 = 30;
	int64_t x451 = -1LL;
	int64_t x452 = INT64_MIN;
	volatile int32_t t54 = -84219396;

	t54 = (x449<(x450<<(x451==x452)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x461 = INT16_MIN;
	volatile int16_t x463 = 124;
	int64_t x464 = -1LL;
	volatile int32_t t55 = -510;

	t55 = (x461<(x462<<(x463==x464)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x467 = 60;
	int32_t t56 = 96336;

	t56 = (x465<(x466<<(x467==x468)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x469 = -985084127157541LL;
	uint16_t x470 = 14U;
	static uint8_t x472 = 10U;

	t57 = (x469<(x470<<(x471==x472)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x473 = INT16_MIN;
	volatile uint32_t x474 = 13U;
	int8_t x475 = -31;
	int32_t t58 = -31064;

	t58 = (x473<(x474<<(x475==x476)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x485 = UINT64_MAX;
	volatile uint8_t x486 = UINT8_MAX;

	t59 = (x485<(x486<<(x487==x488)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x497 = INT8_MAX;
	int8_t x499 = 0;
	int32_t t60 = 8548;

	t60 = (x497<(x498<<(x499==x500)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x505 = 180816LLU;
	volatile int64_t x506 = INT64_MAX;
	uint64_t x507 = 84817364087LLU;
	int32_t t61 = 1241;

	t61 = (x505<(x506<<(x507==x508)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x510 = UINT32_MAX;
	static uint8_t x512 = 50U;
	static int32_t t62 = 205900942;

	t62 = (x509<(x510<<(x511==x512)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x513 = 3;
	int32_t x514 = 763643;
	int16_t x515 = 39;
	static volatile uint8_t x516 = 9U;
	volatile int32_t t63 = -3;

	t63 = (x513<(x514<<(x515==x516)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x525 = -1;
	uint16_t x526 = 900U;
	int32_t x527 = 144;
	int8_t x528 = INT8_MAX;
	int32_t t64 = -61;

	t64 = (x525<(x526<<(x527==x528)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x529 = 15291411LLU;
	int64_t x530 = INT64_MAX;
	int64_t x531 = 15690315062LL;
	uint64_t x532 = 263116120796012LLU;
	int32_t t65 = 874374395;

	t65 = (x529<(x530<<(x531==x532)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x533 = INT8_MAX;
	static uint8_t x534 = 98U;
	uint32_t x535 = 52030139U;
	static volatile int32_t t66 = 455;

	t66 = (x533<(x534<<(x535==x536)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x554 = 237U;
	static int64_t x555 = -3154077LL;
	uint16_t x556 = 7U;
	static volatile int32_t t67 = -5;

	t67 = (x553<(x554<<(x555==x556)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x557 = INT64_MIN;
	uint16_t x558 = UINT16_MAX;
	int16_t x559 = INT16_MIN;
	int16_t x560 = INT16_MIN;
	volatile int32_t t68 = -182;

	t68 = (x557<(x558<<(x559==x560)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x561 = -1;
	uint8_t x562 = UINT8_MAX;
	int32_t x563 = -1;
	int64_t x564 = INT64_MIN;
	int32_t t69 = -174;

	t69 = (x561<(x562<<(x563==x564)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x569 = UINT32_MAX;
	uint16_t x570 = 13349U;
	int32_t t70 = 165038318;

	t70 = (x569<(x570<<(x571==x572)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x577 = UINT8_MAX;
	int16_t x578 = 722;
	volatile uint32_t x579 = 227149U;
	int16_t x580 = INT16_MIN;

	t71 = (x577<(x578<<(x579==x580)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x586 = 3LLU;
	int32_t x587 = INT32_MIN;
	volatile int8_t x588 = INT8_MIN;
	int32_t t72 = 36;

	t72 = (x585<(x586<<(x587==x588)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x589 = INT32_MIN;
	int16_t x591 = INT16_MIN;
	static int16_t x592 = INT16_MIN;

	t73 = (x589<(x590<<(x591==x592)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x598 = INT16_MAX;
	int8_t x599 = 15;
	static uint8_t x600 = UINT8_MAX;
	int32_t t74 = 3;

	t74 = (x597<(x598<<(x599==x600)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x601 = INT64_MAX;
	int64_t x602 = INT64_MAX;
	uint64_t x603 = UINT64_MAX;
	int8_t x604 = INT8_MIN;
	int32_t t75 = 78075;

	t75 = (x601<(x602<<(x603==x604)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x613 = 595444907U;
	int32_t x614 = INT32_MAX;
	int8_t x615 = -1;
	volatile int64_t x616 = INT64_MIN;
	volatile int32_t t76 = -9;

	t76 = (x613<(x614<<(x615==x616)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x617 = 601943912U;
	int8_t x619 = -1;
	static uint32_t x620 = UINT32_MAX;

	t77 = (x617<(x618<<(x619==x620)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x623 = INT64_MIN;
	int32_t x624 = -1;

	t78 = (x621<(x622<<(x623==x624)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x629 = 54LLU;
	static uint16_t x630 = 59U;
	static uint64_t x631 = 8LLU;
	static uint64_t x632 = 3223LLU;
	static volatile int32_t t79 = -41677;

	t79 = (x629<(x630<<(x631==x632)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x637 = INT32_MIN;
	static uint64_t x638 = 4803LLU;
	volatile int32_t x639 = INT32_MIN;
	int32_t x640 = -240;
	int32_t t80 = -447037548;

	t80 = (x637<(x638<<(x639==x640)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x641 = INT16_MAX;
	volatile uint32_t x642 = UINT32_MAX;
	int64_t x644 = INT64_MIN;
	static int32_t t81 = 27;

	t81 = (x641<(x642<<(x643==x644)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x649 = INT64_MIN;
	volatile uint16_t x650 = UINT16_MAX;
	volatile uint64_t x651 = 444LLU;
	int32_t t82 = 426256467;

	t82 = (x649<(x650<<(x651==x652)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x657 = 59U;
	int8_t x658 = INT8_MAX;
	int32_t x659 = INT32_MAX;
	int32_t x660 = -1;

	t83 = (x657<(x658<<(x659==x660)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x665 = INT64_MAX;
	int32_t x666 = INT32_MAX;
	static int64_t x667 = -1LL;
	uint32_t x668 = 5322599U;
	volatile int32_t t84 = 1236;

	t84 = (x665<(x666<<(x667==x668)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x669 = -1140188729082043LL;
	int32_t x670 = 300080;
	int32_t x671 = -162191214;
	static int64_t x672 = -2369043336368019LL;
	int32_t t85 = -1;

	t85 = (x669<(x670<<(x671==x672)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x677 = -110530;
	volatile int16_t x678 = 292;
	static int8_t x680 = -1;
	volatile int32_t t86 = -55393;

	t86 = (x677<(x678<<(x679==x680)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x685 = 16U;
	uint8_t x686 = 1U;
	int32_t x687 = -1;
	uint8_t x688 = 23U;
	static int32_t t87 = -3;

	t87 = (x685<(x686<<(x687==x688)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x689 = 60235991LL;
	uint8_t x690 = 0U;
	volatile int64_t x691 = -74LL;
	int64_t x692 = INT64_MIN;
	volatile int32_t t88 = -5895966;

	t88 = (x689<(x690<<(x691==x692)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x694 = 1;
	static volatile uint64_t x695 = 344695LLU;
	uint16_t x696 = 1532U;

	t89 = (x693<(x694<<(x695==x696)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x697 = 104U;
	uint8_t x698 = 1U;
	int32_t x700 = INT32_MAX;
	volatile int32_t t90 = 1;

	t90 = (x697<(x698<<(x699==x700)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x717 = INT32_MIN;
	static int8_t x719 = -1;

	t91 = (x717<(x718<<(x719==x720)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x721 = 1U;
	int16_t x722 = INT16_MAX;
	uint64_t x723 = 3353LLU;
	static int16_t x724 = INT16_MIN;
	static int32_t t92 = 0;

	t92 = (x721<(x722<<(x723==x724)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x745 = 1;
	static uint16_t x746 = 1637U;
	static int64_t x747 = -1LL;
	static volatile int32_t t93 = 3042394;

	t93 = (x745<(x746<<(x747==x748)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x749 = 0U;
	uint8_t x750 = 14U;
	static int32_t x751 = 12057822;
	volatile int32_t t94 = -118;

	t94 = (x749<(x750<<(x751==x752)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x766 = UINT64_MAX;
	uint32_t x767 = 1267890U;
	volatile int64_t x768 = -1LL;
	static int32_t t95 = -1;

	t95 = (x765<(x766<<(x767==x768)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x773 = INT32_MIN;
	int16_t x775 = INT16_MAX;
	static uint32_t x776 = 47U;
	volatile int32_t t96 = 1819906;

	t96 = (x773<(x774<<(x775==x776)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x781 = INT64_MAX;
	volatile uint64_t x782 = UINT64_MAX;
	int64_t x783 = INT64_MAX;
	uint8_t x784 = UINT8_MAX;
	int32_t t97 = -486707;

	t97 = (x781<(x782<<(x783==x784)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x786 = 12323U;
	int32_t x787 = -225772387;
	int32_t x788 = -86224;
	static volatile int32_t t98 = -30473;

	t98 = (x785<(x786<<(x787==x788)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x789 = INT32_MIN;
	uint64_t x791 = UINT64_MAX;
	static uint8_t x792 = 1U;
	static volatile int32_t t99 = -1038436;

	t99 = (x789<(x790<<(x791==x792)));

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

