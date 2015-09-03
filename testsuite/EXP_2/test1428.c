#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x23 = -2;
volatile uint64_t x38 = 1629225659LLU;
static volatile uint8_t x55 = UINT8_MAX;
uint64_t x60 = 28501542069LLU;
int8_t x85 = 1;
volatile int32_t t13 = 138;
uint32_t x108 = UINT32_MAX;
volatile int64_t t15 = 806181756925LL;
uint64_t x120 = UINT64_MAX;
uint64_t t16 = 8721451692303968042LLU;
int8_t x138 = -1;
uint32_t x140 = 82783646U;
uint32_t x149 = 3785U;
int32_t x154 = INT32_MIN;
static int16_t x155 = INT16_MIN;
static volatile uint64_t x160 = UINT64_MAX;
static uint8_t x163 = UINT8_MAX;
uint32_t t21 = 106578993U;
volatile uint16_t x178 = 0U;
uint64_t x192 = 215817LLU;
uint64_t x194 = UINT64_MAX;
static uint64_t x216 = 23716LLU;
volatile int32_t x217 = 5;
int32_t x239 = -730692;
static uint8_t x254 = 20U;
volatile uint32_t x256 = UINT32_MAX;
int64_t x257 = 16653488LL;
static int64_t x259 = INT64_MIN;
static volatile uint8_t x308 = UINT8_MAX;
volatile int64_t x309 = 0LL;
uint64_t x325 = 4638029440002882259LLU;
volatile int64_t x330 = INT64_MIN;
int8_t x331 = INT8_MIN;
uint64_t x333 = 40177837490LLU;
uint64_t t42 = 250948667552549398LLU;
static int8_t x341 = 2;
volatile uint32_t x345 = 130825U;
volatile uint32_t t45 = 400904U;
static volatile int32_t x354 = INT32_MAX;
static int64_t t47 = -52787092396LL;
int8_t x397 = INT8_MAX;
int32_t t52 = 2114633;
int64_t x410 = INT64_MIN;
int64_t t54 = 4481703501476767828LL;
int8_t x424 = -5;
int8_t x425 = 3;
static uint16_t x427 = 8838U;
volatile int64_t x435 = -1422725LL;
int64_t x477 = 14783976LL;
uint8_t x478 = 10U;
uint64_t x480 = UINT64_MAX;
int16_t x488 = INT16_MIN;
static int32_t x490 = -1;
int32_t x492 = INT32_MAX;
uint32_t x501 = 1198U;
volatile int64_t t62 = 908354LL;
int64_t x512 = INT64_MIN;
uint32_t x513 = 13U;
int32_t x515 = INT32_MAX;
int64_t t64 = 1LL;
int16_t x517 = 6423;
static int16_t x529 = 1999;
int64_t x532 = -1LL;
uint8_t x534 = UINT8_MAX;
volatile uint32_t t67 = 3U;
static volatile uint64_t t69 = 6419931647738032562LLU;
uint16_t x553 = 295U;
static uint64_t x568 = 524193354022461472LLU;
volatile uint64_t t72 = 26768393352229LLU;
int64_t x569 = INT64_MAX;
uint32_t x572 = 278145U;
static volatile int64_t t73 = 440673902LL;
uint32_t x573 = 28120U;
int32_t x586 = INT32_MIN;
volatile int8_t x592 = 19;
int32_t t77 = 661699;
uint64_t t79 = 54816222LLU;
int8_t x623 = INT8_MAX;
int16_t x627 = -1;
uint64_t t81 = 152508LLU;
int8_t x640 = INT8_MAX;
volatile int32_t x646 = INT32_MIN;
volatile uint16_t x654 = 16U;
uint64_t t84 = 6622196557750822122LLU;
int32_t t85 = -394621684;
int8_t x681 = INT8_MAX;
int32_t t89 = -258;
int16_t x748 = -1;
static volatile uint16_t x757 = UINT16_MAX;
uint16_t x758 = 2353U;
volatile int32_t t94 = -950251;
uint16_t x763 = UINT16_MAX;
volatile int32_t t95 = 658334;
uint32_t x766 = 53471U;
volatile int32_t x775 = INT32_MIN;
uint16_t x777 = 19U;
uint64_t x780 = 85LLU;


void f0(void) {
	uint64_t x1 = 126LLU;
	int8_t x2 = -25;
	volatile int16_t x3 = INT16_MIN;
	uint64_t x4 = 834961LLU;
	volatile uint64_t t0 = 4877760790053637605LLU;

	t0 = ((x1<<(x2<x3))&x4);

	if (t0 != 16LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x13 = 238U;
	int16_t x14 = 22;
	int64_t x15 = INT64_MIN;
	int64_t x16 = -91LL;
	static int64_t t1 = -139549LL;

	t1 = ((x13<<(x14<x15))&x16);

	if (t1 != 164LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = 2474U;
	uint64_t x22 = 3728898743LLU;
	static uint16_t x24 = 27U;
	int32_t t2 = -909;

	t2 = ((x21<<(x22<x23))&x24);

	if (t2 != 16) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x25 = 11U;
	static volatile int16_t x26 = -1;
	static volatile int32_t x27 = INT32_MAX;
	int64_t x28 = INT64_MIN;
	int64_t t3 = -71422980756LL;

	t3 = ((x25<<(x26<x27))&x28);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x33 = INT8_MAX;
	int64_t x34 = 742950880819173LL;
	int16_t x35 = -1;
	int32_t x36 = INT32_MIN;
	int32_t t4 = 85462578;

	t4 = ((x33<<(x34<x35))&x36);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x37 = 65U;
	volatile int16_t x39 = -3;
	int32_t x40 = INT32_MIN;
	static volatile uint32_t t5 = 0U;

	t5 = ((x37<<(x38<x39))&x40);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x41 = 2974U;
	int8_t x42 = -3;
	static uint8_t x43 = 3U;
	int8_t x44 = INT8_MIN;
	int32_t t6 = -109493385;

	t6 = ((x41<<(x42<x43))&x44);

	if (t6 != 5888) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x53 = UINT64_MAX;
	volatile int8_t x54 = 26;
	int64_t x56 = 0LL;
	uint64_t t7 = 1563521509LLU;

	t7 = ((x53<<(x54<x55))&x56);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x57 = UINT8_MAX;
	static volatile uint8_t x58 = 1U;
	int64_t x59 = INT64_MAX;
	static uint64_t t8 = 10095LLU;

	t8 = ((x57<<(x58<x59))&x60);

	if (t8 != 180LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x61 = 26;
	uint64_t x62 = 598660433LLU;
	static uint16_t x63 = 19859U;
	volatile uint8_t x64 = 30U;
	static int32_t t9 = -2806868;

	t9 = ((x61<<(x62<x63))&x64);

	if (t9 != 26) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x65 = UINT64_MAX;
	uint32_t x66 = UINT32_MAX;
	uint32_t x67 = 38U;
	volatile int16_t x68 = -242;
	uint64_t t10 = 7943114835042261LLU;

	t10 = ((x65<<(x66<x67))&x68);

	if (t10 != 18446744073709551374LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x69 = 3U;
	uint16_t x70 = UINT16_MAX;
	static int16_t x71 = 19;
	int16_t x72 = -1;
	static volatile uint32_t t11 = 118U;

	t11 = ((x69<<(x70<x71))&x72);

	if (t11 != 3U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = INT8_MAX;
	volatile int8_t x74 = -1;
	int8_t x75 = INT8_MIN;
	static uint64_t x76 = 12903902024765LLU;
	volatile uint64_t t12 = 379006782LLU;

	t12 = ((x73<<(x74<x75))&x76);

	if (t12 != 61LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MAX;
	int16_t x88 = INT16_MIN;

	t13 = ((x85<<(x86<x87))&x88);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x105 = 1851U;
	int8_t x106 = 24;
	int8_t x107 = 19;
	uint32_t t14 = 687462U;

	t14 = ((x105<<(x106<x107))&x108);

	if (t14 != 1851U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x113 = 280579825LL;
	int32_t x114 = INT32_MIN;
	int32_t x115 = -116759092;
	int16_t x116 = -1;

	t15 = ((x113<<(x114<x115))&x116);

	if (t15 != 561159650LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x117 = 63U;
	int32_t x118 = INT32_MIN;
	int16_t x119 = 2;

	t16 = ((x117<<(x118<x119))&x120);

	if (t16 != 126LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x137 = 1046U;
	int16_t x139 = INT16_MIN;
	uint32_t t17 = 41354U;

	t17 = ((x137<<(x138<x139))&x140);

	if (t17 != 1046U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x150 = 118LL;
	uint8_t x151 = UINT8_MAX;
	volatile uint8_t x152 = 34U;
	static volatile uint32_t t18 = 560931U;

	t18 = ((x149<<(x150<x151))&x152);

	if (t18 != 2U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x153 = 8094213LL;
	uint32_t x156 = 8236475U;
	static volatile int64_t t19 = 40823449815542729LL;

	t19 = ((x153<<(x154<x155))&x156);

	if (t19 != 7668746LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x157 = 1;
	int32_t x158 = INT32_MIN;
	int32_t x159 = INT32_MAX;
	uint64_t t20 = 13127698LLU;

	t20 = ((x157<<(x158<x159))&x160);

	if (t20 != 2LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x161 = 1971U;
	int8_t x162 = INT8_MIN;
	int16_t x164 = -1;

	t21 = ((x161<<(x162<x163))&x164);

	if (t21 != 3942U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x177 = 7;
	int16_t x179 = -1;
	int64_t x180 = -1023301280964188LL;
	volatile int64_t t22 = -41142715516280187LL;

	t22 = ((x177<<(x178<x179))&x180);

	if (t22 != 4LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x189 = 1109U;
	static volatile uint32_t x190 = 3253514U;
	static uint16_t x191 = UINT16_MAX;
	static uint64_t t23 = 199LLU;

	t23 = ((x189<<(x190<x191))&x192);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x193 = 55930440;
	uint16_t x195 = 19221U;
	static int32_t x196 = -1;
	volatile int32_t t24 = -122;

	t24 = ((x193<<(x194<x195))&x196);

	if (t24 != 55930440) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x205 = UINT16_MAX;
	volatile uint32_t x206 = 5477180U;
	volatile int16_t x207 = INT16_MIN;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t25 = 2088LLU;

	t25 = ((x205<<(x206<x207))&x208);

	if (t25 != 131070LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x213 = 13U;
	uint8_t x214 = 49U;
	uint64_t x215 = UINT64_MAX;
	uint64_t t26 = 239LLU;

	t26 = ((x213<<(x214<x215))&x216);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x218 = -10405;
	volatile int8_t x219 = -7;
	uint16_t x220 = 772U;
	volatile int32_t t27 = 930516;

	t27 = ((x217<<(x218<x219))&x220);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x225 = 52U;
	int16_t x226 = INT16_MAX;
	static int8_t x227 = INT8_MIN;
	volatile int32_t x228 = INT32_MIN;
	int32_t t28 = 786;

	t28 = ((x225<<(x226<x227))&x228);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x237 = INT32_MAX;
	static int16_t x238 = INT16_MIN;
	uint64_t x240 = 773005758325173420LLU;
	uint64_t t29 = 135090275LLU;

	t29 = ((x237<<(x238<x239))&x240);

	if (t29 != 1112386732LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x245 = 9406789U;
	uint64_t x246 = 31635193819LLU;
	uint64_t x247 = UINT64_MAX;
	int16_t x248 = INT16_MAX;
	uint32_t t30 = 7322973U;

	t30 = ((x245<<(x246<x247))&x248);

	if (t30 != 4746U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x253 = 7;
	static volatile uint64_t x255 = UINT64_MAX;
	static volatile uint32_t t31 = 85821U;

	t31 = ((x253<<(x254<x255))&x256);

	if (t31 != 14U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x258 = -1;
	int64_t x260 = INT64_MAX;
	int64_t t32 = -18LL;

	t32 = ((x257<<(x258<x259))&x260);

	if (t32 != 16653488LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x265 = INT16_MAX;
	static volatile int16_t x266 = INT16_MIN;
	int16_t x267 = 127;
	uint16_t x268 = 8U;
	int32_t t33 = -14083654;

	t33 = ((x265<<(x266<x267))&x268);

	if (t33 != 8) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x277 = UINT32_MAX;
	static volatile int32_t x278 = -377987729;
	static volatile int16_t x279 = 1081;
	int16_t x280 = INT16_MIN;
	uint32_t t34 = 275U;

	t34 = ((x277<<(x278<x279))&x280);

	if (t34 != 4294934528U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x301 = UINT8_MAX;
	int16_t x302 = 78;
	uint16_t x303 = 9U;
	int32_t x304 = INT32_MAX;
	volatile int32_t t35 = 274;

	t35 = ((x301<<(x302<x303))&x304);

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x305 = UINT64_MAX;
	uint64_t x306 = 507501738474LLU;
	int64_t x307 = -5132709831284932LL;
	uint64_t t36 = 9360973054954812LLU;

	t36 = ((x305<<(x306<x307))&x308);

	if (t36 != 254LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x310 = INT64_MAX;
	volatile int32_t x311 = -1;
	int64_t x312 = INT64_MAX;
	int64_t t37 = 32871699768930548LL;

	t37 = ((x309<<(x310<x311))&x312);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x313 = INT16_MAX;
	uint32_t x314 = UINT32_MAX;
	static int32_t x315 = -28170404;
	int16_t x316 = 14599;
	int32_t t38 = 32;

	t38 = ((x313<<(x314<x315))&x316);

	if (t38 != 14599) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x317 = 12989950832139275LLU;
	volatile int64_t x318 = 5LL;
	uint32_t x319 = UINT32_MAX;
	int32_t x320 = INT32_MIN;
	uint64_t t39 = 2516859325098640LLU;

	t39 = ((x317<<(x318<x319))&x320);

	if (t39 != 25979900691218432LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x326 = INT16_MIN;
	static int64_t x327 = -489670LL;
	uint8_t x328 = UINT8_MAX;
	volatile uint64_t t40 = 112430317LLU;

	t40 = ((x325<<(x326<x327))&x328);

	if (t40 != 211LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x329 = UINT8_MAX;
	int32_t x332 = INT32_MIN;
	volatile int32_t t41 = -104469;

	t41 = ((x329<<(x330<x331))&x332);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x334 = -18090330;
	uint8_t x335 = 41U;
	uint16_t x336 = 195U;

	t42 = ((x333<<(x334<x335))&x336);

	if (t42 != 64LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x337 = INT32_MAX;
	int8_t x338 = -1;
	int8_t x339 = INT8_MIN;
	static int8_t x340 = -1;
	int32_t t43 = INT32_MAX;

	t43 = ((x337<<(x338<x339))&x340);

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x342 = INT8_MAX;
	int32_t x343 = INT32_MIN;
	int16_t x344 = INT16_MIN;
	volatile int32_t t44 = 33;

	t44 = ((x341<<(x342<x343))&x344);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x346 = -1LL;
	int16_t x347 = INT16_MIN;
	volatile int32_t x348 = -1;

	t45 = ((x345<<(x346<x347))&x348);

	if (t45 != 130825U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x353 = INT16_MAX;
	static int8_t x355 = INT8_MIN;
	volatile int32_t x356 = -18;
	int32_t t46 = 1;

	t46 = ((x353<<(x354<x355))&x356);

	if (t46 != 32750) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x365 = 10U;
	volatile uint32_t x366 = UINT32_MAX;
	int8_t x367 = INT8_MIN;
	int64_t x368 = 63213LL;

	t47 = ((x365<<(x366<x367))&x368);

	if (t47 != 8LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x369 = INT16_MAX;
	volatile int8_t x370 = 1;
	volatile int64_t x371 = 3597807095620LL;
	int16_t x372 = INT16_MIN;
	int32_t t48 = 12793;

	t48 = ((x369<<(x370<x371))&x372);

	if (t48 != 32768) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x373 = 301;
	int8_t x374 = INT8_MIN;
	volatile uint16_t x375 = 1717U;
	static uint16_t x376 = 16U;
	static volatile int32_t t49 = 495;

	t49 = ((x373<<(x374<x375))&x376);

	if (t49 != 16) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x377 = 1U;
	int64_t x378 = INT64_MIN;
	static uint64_t x379 = 6533448175311796876LLU;
	static uint16_t x380 = 7U;
	volatile int32_t t50 = -59011;

	t50 = ((x377<<(x378<x379))&x380);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x393 = 62372463348LL;
	int8_t x394 = INT8_MIN;
	volatile int8_t x395 = INT8_MAX;
	int64_t x396 = INT64_MIN;
	static volatile int64_t t51 = -636LL;

	t51 = ((x393<<(x394<x395))&x396);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x398 = 5728103340422210LL;
	int16_t x399 = INT16_MIN;
	int32_t x400 = INT32_MAX;

	t52 = ((x397<<(x398<x399))&x400);

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x409 = 59;
	int32_t x411 = INT32_MIN;
	uint32_t x412 = UINT32_MAX;
	uint32_t t53 = 34U;

	t53 = ((x409<<(x410<x411))&x412);

	if (t53 != 118U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x413 = 22898LL;
	int64_t x414 = INT64_MIN;
	volatile int8_t x415 = -3;
	uint32_t x416 = 996409045U;

	t54 = ((x413<<(x414<x415))&x416);

	if (t54 != 45764LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x421 = UINT16_MAX;
	volatile uint16_t x422 = UINT16_MAX;
	int16_t x423 = -1;
	int32_t t55 = 695172014;

	t55 = ((x421<<(x422<x423))&x424);

	if (t55 != 65531) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x426 = 8084LLU;
	volatile uint32_t x428 = UINT32_MAX;
	uint32_t t56 = 8849U;

	t56 = ((x425<<(x426<x427))&x428);

	if (t56 != 6U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x433 = 20U;
	int8_t x434 = -1;
	volatile int32_t x436 = 2;
	static volatile int32_t t57 = -12592913;

	t57 = ((x433<<(x434<x435))&x436);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x461 = INT8_MAX;
	uint32_t x462 = UINT32_MAX;
	uint16_t x463 = 2457U;
	int8_t x464 = -1;
	volatile int32_t t58 = 6;

	t58 = ((x461<<(x462<x463))&x464);

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x479 = INT16_MIN;
	uint64_t t59 = 1836846445LLU;

	t59 = ((x477<<(x478<x479))&x480);

	if (t59 != 14783976LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x485 = 12470586;
	int64_t x486 = -1LL;
	int16_t x487 = INT16_MIN;
	int32_t t60 = 2;

	t60 = ((x485<<(x486<x487))&x488);

	if (t60 != 12451840) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x489 = UINT8_MAX;
	int8_t x491 = -1;
	volatile int32_t t61 = -255181254;

	t61 = ((x489<<(x490<x491))&x492);

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x502 = INT16_MAX;
	int8_t x503 = 1;
	volatile int64_t x504 = INT64_MIN;

	t62 = ((x501<<(x502<x503))&x504);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x509 = 2;
	static int16_t x510 = INT16_MIN;
	uint8_t x511 = UINT8_MAX;
	int64_t t63 = -1786866479445LL;

	t63 = ((x509<<(x510<x511))&x512);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x514 = INT32_MIN;
	int64_t x516 = -5522199307883615LL;

	t64 = ((x513<<(x514<x515))&x516);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x518 = 717828048LLU;
	static int32_t x519 = -1;
	static int64_t x520 = -195547LL;
	int64_t t65 = 1050LL;

	t65 = ((x517<<(x518<x519))&x520);

	if (t65 != 36LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x530 = 105;
	static uint32_t x531 = 1201U;
	int64_t t66 = 334289977165116LL;

	t66 = ((x529<<(x530<x531))&x532);

	if (t66 != 3998LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x533 = 34591U;
	int8_t x535 = 1;
	static uint8_t x536 = 0U;

	t67 = ((x533<<(x534<x535))&x536);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x541 = UINT64_MAX;
	volatile uint64_t x542 = 1630LLU;
	uint16_t x543 = 4090U;
	uint8_t x544 = 0U;
	volatile uint64_t t68 = 13LLU;

	t68 = ((x541<<(x542<x543))&x544);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x549 = INT8_MAX;
	volatile uint16_t x550 = UINT16_MAX;
	int16_t x551 = 1203;
	uint64_t x552 = 67673LLU;

	t69 = ((x549<<(x550<x551))&x552);

	if (t69 != 89LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x554 = -384;
	uint64_t x555 = UINT64_MAX;
	static int32_t x556 = -26;
	int32_t t70 = 0;

	t70 = ((x553<<(x554<x555))&x556);

	if (t70 != 582) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x557 = 44454457LL;
	static uint8_t x558 = UINT8_MAX;
	int16_t x559 = 1;
	static int32_t x560 = 3810307;
	int64_t t71 = 322595819335LL;

	t71 = ((x557<<(x558<x559))&x560);

	if (t71 != 2228225LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x565 = 719;
	int32_t x566 = INT32_MIN;
	uint16_t x567 = UINT16_MAX;

	t72 = ((x565<<(x566<x567))&x568);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x570 = INT32_MAX;
	volatile int64_t x571 = -28111497023430LL;

	t73 = ((x569<<(x570<x571))&x572);

	if (t73 != 278145LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x574 = 126U;
	int32_t x575 = -1;
	static uint8_t x576 = 0U;
	volatile uint32_t t74 = 27U;

	t74 = ((x573<<(x574<x575))&x576);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x585 = INT8_MAX;
	uint8_t x587 = 2U;
	int8_t x588 = INT8_MIN;
	static volatile int32_t t75 = 7188;

	t75 = ((x585<<(x586<x587))&x588);

	if (t75 != 128) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x589 = UINT8_MAX;
	int8_t x590 = INT8_MIN;
	uint8_t x591 = UINT8_MAX;
	int32_t t76 = -174386;

	t76 = ((x589<<(x590<x591))&x592);

	if (t76 != 18) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x593 = 3;
	static int64_t x594 = INT64_MAX;
	static uint64_t x595 = 242157599793875073LLU;
	uint8_t x596 = 24U;

	t77 = ((x593<<(x594<x595))&x596);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x601 = 28424U;
	int64_t x602 = INT64_MIN;
	uint64_t x603 = 1LLU;
	uint64_t x604 = 7309LLU;
	static volatile uint64_t t78 = 29615008859LLU;

	t78 = ((x601<<(x602<x603))&x604);

	if (t78 != 3080LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x613 = UINT16_MAX;
	int16_t x614 = 7;
	uint32_t x615 = UINT32_MAX;
	uint64_t x616 = UINT64_MAX;

	t79 = ((x613<<(x614<x615))&x616);

	if (t79 != 131070LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x621 = INT16_MAX;
	volatile uint8_t x622 = 2U;
	volatile int32_t x624 = 24215;
	volatile int32_t t80 = -7594781;

	t80 = ((x621<<(x622<x623))&x624);

	if (t80 != 24214) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x625 = 481369410831253LLU;
	int16_t x626 = INT16_MIN;
	uint16_t x628 = 30426U;

	t81 = ((x625<<(x626<x627))&x628);

	if (t81 != 1546LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x637 = 7045LLU;
	int64_t x638 = INT64_MIN;
	volatile int64_t x639 = 81248975997237LL;
	uint64_t t82 = 31823803566LLU;

	t82 = ((x637<<(x638<x639))&x640);

	if (t82 != 10LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x645 = INT8_MAX;
	int16_t x647 = INT16_MAX;
	static volatile uint32_t x648 = 0U;
	volatile uint32_t t83 = 1954804777U;

	t83 = ((x645<<(x646<x647))&x648);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x653 = 3LLU;
	int64_t x655 = INT64_MIN;
	static int32_t x656 = INT32_MIN;

	t84 = ((x653<<(x654<x655))&x656);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x669 = 1648;
	static int16_t x670 = -1;
	static int64_t x671 = 84723567263LL;
	int32_t x672 = 5449261;

	t85 = ((x669<<(x670<x671))&x672);

	if (t85 != 1056) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x682 = 1;
	volatile int16_t x683 = INT16_MIN;
	uint16_t x684 = UINT16_MAX;
	volatile int32_t t86 = -2;

	t86 = ((x681<<(x682<x683))&x684);

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x689 = 80012787820621274LL;
	volatile int32_t x690 = INT32_MIN;
	static int64_t x691 = -1LL;
	uint16_t x692 = UINT16_MAX;
	int64_t t87 = 10308867441342549LL;

	t87 = ((x689<<(x690<x691))&x692);

	if (t87 != 56244LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x693 = 44838;
	int64_t x694 = INT64_MIN;
	uint32_t x695 = 229U;
	uint32_t x696 = 3300718U;
	static uint32_t t88 = 3526965U;

	t88 = ((x693<<(x694<x695))&x696);

	if (t88 != 23628U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x705 = 1;
	static int16_t x706 = INT16_MAX;
	static uint8_t x707 = 4U;
	int8_t x708 = 3;

	t89 = ((x705<<(x706<x707))&x708);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x725 = UINT64_MAX;
	static int16_t x726 = -1;
	int32_t x727 = 1;
	static int16_t x728 = INT16_MIN;
	uint64_t t90 = 123LLU;

	t90 = ((x725<<(x726<x727))&x728);

	if (t90 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x729 = 2570U;
	volatile int64_t x730 = 54192246335LL;
	int64_t x731 = 109777152192LL;
	int16_t x732 = -1;
	volatile int32_t t91 = 3252900;

	t91 = ((x729<<(x730<x731))&x732);

	if (t91 != 5140) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x741 = 13439U;
	uint8_t x742 = 12U;
	uint32_t x743 = UINT32_MAX;
	int8_t x744 = INT8_MIN;
	uint32_t t92 = 0U;

	t92 = ((x741<<(x742<x743))&x744);

	if (t92 != 26752U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x745 = INT32_MAX;
	int8_t x746 = -1;
	static int64_t x747 = INT64_MIN;
	int32_t t93 = INT32_MAX;

	t93 = ((x745<<(x746<x747))&x748);

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x759 = UINT8_MAX;
	int8_t x760 = -1;

	t94 = ((x757<<(x758<x759))&x760);

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x761 = INT8_MAX;
	int8_t x762 = INT8_MAX;
	int8_t x764 = -1;

	t95 = ((x761<<(x762<x763))&x764);

	if (t95 != 254) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x765 = INT64_MAX;
	int32_t x767 = 17;
	static uint16_t x768 = UINT16_MAX;
	volatile int64_t t96 = -37015603684275LL;

	t96 = ((x765<<(x766<x767))&x768);

	if (t96 != 65535LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x769 = 33990262899857LLU;
	static int32_t x770 = INT32_MIN;
	static uint16_t x771 = UINT16_MAX;
	int32_t x772 = INT32_MIN;
	uint64_t t97 = 1689938484843471521LLU;

	t97 = ((x769<<(x770<x771))&x772);

	if (t97 != 67978594877440LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x773 = INT16_MAX;
	int32_t x774 = -1;
	uint64_t x776 = UINT64_MAX;
	volatile uint64_t t98 = 0LLU;

	t98 = ((x773<<(x774<x775))&x776);

	if (t98 != 32767LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x778 = UINT16_MAX;
	int64_t x779 = -1LL;
	uint64_t t99 = 2747LLU;

	t99 = ((x777<<(x778<x779))&x780);

	if (t99 != 17LLU) { NG(); } else { ; }
	
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

