#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x30 = INT64_MAX;
int8_t x33 = INT8_MIN;
int32_t t3 = 22801;
volatile int16_t x71 = INT16_MIN;
volatile int32_t t7 = 27717;
int16_t x96 = INT16_MIN;
static volatile int8_t x101 = -2;
static volatile int32_t t9 = -129585451;
int8_t x111 = INT8_MAX;
uint32_t x114 = 26U;
volatile uint8_t x115 = UINT8_MAX;
static uint16_t x137 = UINT16_MAX;
uint8_t x140 = 0U;
int16_t x152 = 30;
int32_t t16 = -467;
volatile int8_t x168 = INT8_MAX;
static int32_t x194 = 7658;
volatile int16_t x196 = INT16_MIN;
uint32_t x206 = UINT32_MAX;
static uint16_t x226 = 11U;
int8_t x228 = INT8_MIN;
int64_t x231 = 156678LL;
int64_t x251 = 48641162849282391LL;
uint32_t x276 = 11U;
int64_t x287 = -83LL;
int32_t t29 = 258188;
uint32_t x293 = 2U;
int64_t x295 = INT64_MAX;
volatile int32_t t30 = 81113;
uint16_t x327 = UINT16_MAX;
int8_t x379 = INT8_MIN;
int16_t x436 = INT16_MAX;
int32_t t43 = -897209627;
uint64_t x440 = 29034758330494LLU;
volatile int32_t t44 = -2260207;
int32_t x441 = INT32_MIN;
uint32_t x446 = 11048U;
static int32_t x447 = -3377942;
int16_t x459 = INT16_MIN;
int16_t x460 = -1;
uint64_t x476 = 45872836717033869LLU;
volatile uint8_t x480 = 42U;
uint64_t x490 = UINT64_MAX;
static volatile int32_t t52 = -1004324943;
static uint64_t x494 = 19442174964LLU;
volatile int32_t t53 = 0;
int32_t x501 = INT32_MIN;
int64_t x521 = INT64_MIN;
uint8_t x523 = UINT8_MAX;
uint64_t x529 = UINT64_MAX;
int32_t x530 = 4;
volatile int8_t x532 = 1;
volatile int64_t x540 = INT64_MAX;
static int16_t x546 = INT16_MAX;
volatile int16_t x556 = INT16_MIN;
uint8_t x557 = 15U;
static int32_t t63 = 13504;
volatile uint8_t x574 = UINT8_MAX;
uint8_t x575 = 50U;
int16_t x577 = INT16_MAX;
volatile int16_t x588 = INT16_MIN;
int32_t t67 = 3;
int32_t x597 = -34714;
uint16_t x598 = UINT16_MAX;
int32_t t71 = -720670;
static uint16_t x606 = 3626U;
uint16_t x607 = 1009U;
volatile int8_t x608 = 0;
int8_t x625 = INT8_MAX;
static int16_t x635 = -982;
static int32_t t78 = 44842234;
uint16_t x646 = UINT16_MAX;
static int64_t x651 = -1LL;
int32_t x665 = -1;
volatile int64_t x668 = 12187815297LL;
uint64_t x702 = UINT64_MAX;
volatile int32_t x706 = 1;
uint16_t x725 = UINT16_MAX;
static uint16_t x726 = UINT16_MAX;
static int64_t x731 = INT64_MIN;
int64_t x738 = 71077242708791355LL;
int64_t x744 = INT64_MAX;
uint32_t x766 = 654U;
volatile uint16_t x768 = 2U;


void f0(void) {
	static int64_t x21 = -13057595529579144LL;
	int64_t x22 = INT64_MAX;
	static uint64_t x23 = 4168426276LLU;
	int64_t x24 = -1LL;
	int32_t t0 = -36368;

	t0 = (x21<(x22>>(x23<=x24)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x29 = 2U;
	volatile int32_t x31 = INT32_MIN;
	uint8_t x32 = UINT8_MAX;
	int32_t t1 = 15688165;

	t1 = (x29<(x30>>(x31<=x32)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x34 = 1U;
	static int64_t x35 = INT64_MIN;
	uint16_t x36 = 93U;
	static int32_t t2 = 45;

	t2 = (x33<(x34>>(x35<=x36)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x37 = -12;
	volatile uint16_t x38 = 225U;
	int32_t x39 = -1;
	int8_t x40 = INT8_MAX;

	t3 = (x37<(x38>>(x39<=x40)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x49 = UINT64_MAX;
	uint8_t x50 = 37U;
	uint64_t x51 = UINT64_MAX;
	volatile uint16_t x52 = 465U;
	int32_t t4 = -520429;

	t4 = (x49<(x50>>(x51<=x52)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x69 = -1;
	uint16_t x70 = 1U;
	int32_t x72 = 315;
	volatile int32_t t5 = 1;

	t5 = (x69<(x70>>(x71<=x72)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x73 = INT16_MIN;
	int16_t x74 = 1;
	uint32_t x75 = 26U;
	static uint8_t x76 = UINT8_MAX;
	static volatile int32_t t6 = -26504667;

	t6 = (x73<(x74>>(x75<=x76)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x77 = 7109113U;
	uint64_t x78 = 257241751212LLU;
	int64_t x79 = -1355655560LL;
	static int16_t x80 = INT16_MIN;

	t7 = (x77<(x78>>(x79<=x80)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x93 = 1204981533277072389LLU;
	uint8_t x94 = 74U;
	volatile uint32_t x95 = 2811U;
	static volatile int32_t t8 = -6;

	t8 = (x93<(x94>>(x95<=x96)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x102 = UINT16_MAX;
	int32_t x103 = 38310;
	volatile uint32_t x104 = UINT32_MAX;

	t9 = (x101<(x102>>(x103<=x104)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x109 = 35195720LLU;
	static uint8_t x110 = 4U;
	volatile int8_t x112 = -1;
	volatile int32_t t10 = -5182;

	t10 = (x109<(x110>>(x111<=x112)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x113 = -1LL;
	static uint16_t x116 = UINT16_MAX;
	int32_t t11 = 41162509;

	t11 = (x113<(x114>>(x115<=x116)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x125 = 11U;
	uint32_t x126 = 0U;
	int32_t x127 = INT32_MIN;
	static volatile uint8_t x128 = 92U;
	int32_t t12 = 2;

	t12 = (x125<(x126>>(x127<=x128)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x133 = 0;
	static volatile int32_t x134 = INT32_MAX;
	uint32_t x135 = 1091732U;
	static uint64_t x136 = 596779841954137843LLU;
	int32_t t13 = -19434702;

	t13 = (x133<(x134>>(x135<=x136)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x138 = 2029619U;
	int32_t x139 = -1;
	int32_t t14 = 559999557;

	t14 = (x137<(x138>>(x139<=x140)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x141 = UINT64_MAX;
	uint16_t x142 = 636U;
	uint32_t x143 = 6412187U;
	int16_t x144 = 26;
	volatile int32_t t15 = -1;

	t15 = (x141<(x142>>(x143<=x144)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x149 = -1;
	static volatile uint32_t x150 = 3U;
	volatile int16_t x151 = -10;

	t16 = (x149<(x150>>(x151<=x152)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x165 = INT8_MAX;
	uint8_t x166 = 1U;
	int16_t x167 = 0;
	int32_t t17 = -87;

	t17 = (x165<(x166>>(x167<=x168)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x173 = INT8_MIN;
	uint64_t x174 = UINT64_MAX;
	int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MIN;
	int32_t t18 = -14045;

	t18 = (x173<(x174>>(x175<=x176)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x193 = 7143642LLU;
	int64_t x195 = -3611080LL;
	volatile int32_t t19 = -42364;

	t19 = (x193<(x194>>(x195<=x196)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x197 = UINT16_MAX;
	volatile uint32_t x198 = 466066153U;
	int16_t x199 = -1;
	int8_t x200 = INT8_MAX;
	volatile int32_t t20 = -1;

	t20 = (x197<(x198>>(x199<=x200)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x205 = INT8_MIN;
	volatile int16_t x207 = INT16_MAX;
	uint16_t x208 = UINT16_MAX;
	static int32_t t21 = -56252639;

	t21 = (x205<(x206>>(x207<=x208)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x225 = 0U;
	static uint64_t x227 = UINT64_MAX;
	static int32_t t22 = -1;

	t22 = (x225<(x226>>(x227<=x228)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x229 = UINT64_MAX;
	static uint64_t x230 = UINT64_MAX;
	uint32_t x232 = 59933836U;
	volatile int32_t t23 = -4995;

	t23 = (x229<(x230>>(x231<=x232)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x249 = -1;
	uint16_t x250 = 3754U;
	int32_t x252 = INT32_MAX;
	int32_t t24 = 0;

	t24 = (x249<(x250>>(x251<=x252)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x265 = 409810830U;
	uint16_t x266 = UINT16_MAX;
	int32_t x267 = -1;
	volatile uint8_t x268 = 47U;
	volatile int32_t t25 = 177729364;

	t25 = (x265<(x266>>(x267<=x268)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x269 = 14219;
	int8_t x270 = INT8_MAX;
	static int32_t x271 = INT32_MIN;
	int16_t x272 = -1;
	int32_t t26 = -81598;

	t26 = (x269<(x270>>(x271<=x272)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x273 = 1652U;
	int32_t x274 = 1020;
	static volatile uint64_t x275 = UINT64_MAX;
	volatile int32_t t27 = -400696002;

	t27 = (x273<(x274>>(x275<=x276)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x285 = 5U;
	static volatile uint32_t x286 = 2U;
	int8_t x288 = INT8_MIN;
	volatile int32_t t28 = 8103655;

	t28 = (x285<(x286>>(x287<=x288)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x289 = 1;
	int32_t x290 = INT32_MAX;
	uint64_t x291 = 156660387971439LLU;
	static int16_t x292 = INT16_MAX;

	t29 = (x289<(x290>>(x291<=x292)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x294 = 275690U;
	int64_t x296 = -1LL;

	t30 = (x293<(x294>>(x295<=x296)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x313 = 16044849605LLU;
	volatile uint64_t x314 = UINT64_MAX;
	static int32_t x315 = INT32_MAX;
	int64_t x316 = -1LL;
	volatile int32_t t31 = 1;

	t31 = (x313<(x314>>(x315<=x316)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x321 = 6;
	static uint64_t x322 = UINT64_MAX;
	uint32_t x323 = UINT32_MAX;
	static int8_t x324 = INT8_MAX;
	int32_t t32 = 31318;

	t32 = (x321<(x322>>(x323<=x324)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x325 = UINT8_MAX;
	volatile uint32_t x326 = 1199876574U;
	int64_t x328 = 24591857345LL;
	volatile int32_t t33 = -40;

	t33 = (x325<(x326>>(x327<=x328)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x329 = INT64_MIN;
	volatile uint8_t x330 = 0U;
	uint32_t x331 = 12945U;
	uint64_t x332 = 14904168LLU;
	int32_t t34 = 104229641;

	t34 = (x329<(x330>>(x331<=x332)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x357 = UINT16_MAX;
	volatile int8_t x358 = INT8_MAX;
	volatile int64_t x359 = -1LL;
	int16_t x360 = INT16_MIN;
	volatile int32_t t35 = -84679;

	t35 = (x357<(x358>>(x359<=x360)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x361 = UINT64_MAX;
	uint16_t x362 = 3U;
	int16_t x363 = INT16_MAX;
	uint64_t x364 = 6331918083759LLU;
	static volatile int32_t t36 = -741237072;

	t36 = (x361<(x362>>(x363<=x364)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x369 = UINT64_MAX;
	volatile uint8_t x370 = 1U;
	volatile int32_t x371 = INT32_MIN;
	int8_t x372 = INT8_MAX;
	static volatile int32_t t37 = 81986;

	t37 = (x369<(x370>>(x371<=x372)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x377 = INT32_MIN;
	static volatile uint8_t x378 = 3U;
	static int32_t x380 = INT32_MIN;
	int32_t t38 = 60876715;

	t38 = (x377<(x378>>(x379<=x380)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x389 = INT8_MIN;
	uint32_t x390 = UINT32_MAX;
	uint8_t x391 = UINT8_MAX;
	uint32_t x392 = 0U;
	static int32_t t39 = 124;

	t39 = (x389<(x390>>(x391<=x392)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x393 = 1U;
	static volatile uint64_t x394 = UINT64_MAX;
	static int64_t x395 = INT64_MIN;
	int64_t x396 = INT64_MIN;
	volatile int32_t t40 = 387483044;

	t40 = (x393<(x394>>(x395<=x396)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x405 = -1;
	uint16_t x406 = 3553U;
	volatile uint8_t x407 = UINT8_MAX;
	int64_t x408 = INT64_MIN;
	static int32_t t41 = 1;

	t41 = (x405<(x406>>(x407<=x408)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x425 = 91U;
	volatile int64_t x426 = INT64_MAX;
	volatile uint64_t x427 = 2906783814156013LLU;
	uint8_t x428 = 109U;
	volatile int32_t t42 = -2;

	t42 = (x425<(x426>>(x427<=x428)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x433 = 0U;
	int8_t x434 = 39;
	int8_t x435 = -1;

	t43 = (x433<(x434>>(x435<=x436)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x437 = INT16_MAX;
	int32_t x438 = 1533;
	int32_t x439 = INT32_MIN;

	t44 = (x437<(x438>>(x439<=x440)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x442 = UINT64_MAX;
	int16_t x443 = INT16_MAX;
	uint8_t x444 = 5U;
	volatile int32_t t45 = -15744;

	t45 = (x441<(x442>>(x443<=x444)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x445 = 58U;
	uint16_t x448 = 2493U;
	int32_t t46 = 1052323334;

	t46 = (x445<(x446>>(x447<=x448)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x457 = INT64_MIN;
	static int8_t x458 = 0;
	static volatile int32_t t47 = 15834;

	t47 = (x457<(x458>>(x459<=x460)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x469 = 2965843044392792LLU;
	volatile uint32_t x470 = 56U;
	volatile uint8_t x471 = 3U;
	int64_t x472 = INT64_MAX;
	int32_t t48 = 33797;

	t48 = (x469<(x470>>(x471<=x472)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x473 = 1;
	int64_t x474 = INT64_MAX;
	uint32_t x475 = 5048530U;
	static volatile int32_t t49 = -336024;

	t49 = (x473<(x474>>(x475<=x476)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x477 = 41509332177LL;
	uint64_t x478 = 1206491015202549797LLU;
	volatile int64_t x479 = -1LL;
	int32_t t50 = 17;

	t50 = (x477<(x478>>(x479<=x480)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x485 = -1;
	int64_t x486 = INT64_MAX;
	static uint8_t x487 = UINT8_MAX;
	int16_t x488 = INT16_MIN;
	int32_t t51 = 87117;

	t51 = (x485<(x486>>(x487<=x488)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x489 = 16LLU;
	int16_t x491 = -1;
	static uint64_t x492 = 4LLU;

	t52 = (x489<(x490>>(x491<=x492)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x493 = -2425824459145LL;
	static int32_t x495 = INT32_MIN;
	static int8_t x496 = INT8_MAX;

	t53 = (x493<(x494>>(x495<=x496)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x502 = UINT64_MAX;
	uint8_t x503 = 38U;
	static uint32_t x504 = UINT32_MAX;
	int32_t t54 = 4431;

	t54 = (x501<(x502>>(x503<=x504)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x522 = INT64_MAX;
	uint64_t x524 = 4017LLU;
	int32_t t55 = 13857758;

	t55 = (x521<(x522>>(x523<=x524)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x525 = 0;
	volatile uint32_t x526 = 8U;
	static int32_t x527 = INT32_MIN;
	uint8_t x528 = 6U;
	static int32_t t56 = -2;

	t56 = (x525<(x526>>(x527<=x528)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x531 = -7;
	int32_t t57 = 61;

	t57 = (x529<(x530>>(x531<=x532)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x537 = 270801;
	uint16_t x538 = 24U;
	uint8_t x539 = UINT8_MAX;
	volatile int32_t t58 = 1;

	t58 = (x537<(x538>>(x539<=x540)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x541 = -1;
	uint16_t x542 = UINT16_MAX;
	static int8_t x543 = INT8_MAX;
	int32_t x544 = INT32_MIN;
	volatile int32_t t59 = 2;

	t59 = (x541<(x542>>(x543<=x544)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x545 = 127949;
	uint64_t x547 = 2437735926LLU;
	static int16_t x548 = -1;
	static volatile int32_t t60 = 307542;

	t60 = (x545<(x546>>(x547<=x548)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x553 = INT16_MIN;
	int32_t x554 = INT32_MAX;
	static uint16_t x555 = UINT16_MAX;
	static volatile int32_t t61 = 65;

	t61 = (x553<(x554>>(x555<=x556)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x558 = 104U;
	uint64_t x559 = UINT64_MAX;
	int16_t x560 = INT16_MIN;
	int32_t t62 = -2;

	t62 = (x557<(x558>>(x559<=x560)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x561 = INT64_MIN;
	uint8_t x562 = 0U;
	int8_t x563 = -24;
	int32_t x564 = 0;

	t63 = (x561<(x562>>(x563<=x564)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x573 = INT8_MAX;
	uint32_t x576 = 898237010U;
	volatile int32_t t64 = 823;

	t64 = (x573<(x574>>(x575<=x576)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x578 = 3976;
	static volatile uint8_t x579 = 3U;
	static volatile int8_t x580 = -1;
	int32_t t65 = 243;

	t65 = (x577<(x578>>(x579<=x580)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x581 = 178U;
	uint16_t x582 = 1593U;
	volatile uint64_t x583 = UINT64_MAX;
	static int8_t x584 = 1;
	int32_t t66 = 33996292;

	t66 = (x581<(x582>>(x583<=x584)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x585 = INT8_MAX;
	int32_t x586 = 10681732;
	int16_t x587 = INT16_MAX;

	t67 = (x585<(x586>>(x587<=x588)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x589 = INT32_MAX;
	static int16_t x590 = 45;
	int8_t x591 = -1;
	volatile uint32_t x592 = 134895U;
	int32_t t68 = -1;

	t68 = (x589<(x590>>(x591<=x592)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x593 = -1LL;
	uint32_t x594 = 3U;
	static uint8_t x595 = 88U;
	uint64_t x596 = UINT64_MAX;
	static volatile int32_t t69 = -125124731;

	t69 = (x593<(x594>>(x595<=x596)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x599 = INT16_MAX;
	volatile int64_t x600 = INT64_MIN;
	int32_t t70 = -49;

	t70 = (x597<(x598>>(x599<=x600)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x601 = INT64_MAX;
	int16_t x602 = INT16_MAX;
	uint16_t x603 = UINT16_MAX;
	int32_t x604 = -1;

	t71 = (x601<(x602>>(x603<=x604)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x605 = -1LL;
	volatile int32_t t72 = 62;

	t72 = (x605<(x606>>(x607<=x608)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x609 = 2U;
	static int32_t x610 = 6;
	volatile int64_t x611 = INT64_MIN;
	int8_t x612 = 0;
	volatile int32_t t73 = 89234;

	t73 = (x609<(x610>>(x611<=x612)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x617 = INT32_MIN;
	uint64_t x618 = 13228534821007LLU;
	uint16_t x619 = UINT16_MAX;
	static int8_t x620 = INT8_MIN;
	int32_t t74 = 17;

	t74 = (x617<(x618>>(x619<=x620)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x621 = INT16_MIN;
	volatile uint8_t x622 = 39U;
	static uint64_t x623 = 632133720026132115LLU;
	int8_t x624 = -1;
	volatile int32_t t75 = 759;

	t75 = (x621<(x622>>(x623<=x624)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x626 = INT16_MAX;
	uint32_t x627 = 28086549U;
	static int8_t x628 = INT8_MIN;
	volatile int32_t t76 = -16871074;

	t76 = (x625<(x626>>(x627<=x628)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x629 = INT8_MIN;
	static volatile uint16_t x630 = UINT16_MAX;
	int32_t x631 = -1419806;
	int64_t x632 = INT64_MIN;
	volatile int32_t t77 = 94883214;

	t77 = (x629<(x630>>(x631<=x632)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x633 = 5003U;
	uint64_t x634 = UINT64_MAX;
	int32_t x636 = -1;

	t78 = (x633<(x634>>(x635<=x636)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x645 = -1LL;
	static int64_t x647 = INT64_MIN;
	uint32_t x648 = 30593U;
	volatile int32_t t79 = 201290494;

	t79 = (x645<(x646>>(x647<=x648)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x649 = UINT32_MAX;
	uint8_t x650 = 7U;
	volatile int64_t x652 = -1785244LL;
	volatile int32_t t80 = 597263049;

	t80 = (x649<(x650>>(x651<=x652)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x666 = INT16_MAX;
	uint64_t x667 = 725392376LLU;
	volatile int32_t t81 = 1;

	t81 = (x665<(x666>>(x667<=x668)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x685 = INT32_MIN;
	static uint8_t x686 = UINT8_MAX;
	static uint32_t x687 = 19072831U;
	static uint32_t x688 = UINT32_MAX;
	static volatile int32_t t82 = -2660704;

	t82 = (x685<(x686>>(x687<=x688)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x693 = -29;
	uint8_t x694 = UINT8_MAX;
	volatile uint16_t x695 = UINT16_MAX;
	volatile int32_t x696 = -1;
	int32_t t83 = 44001;

	t83 = (x693<(x694>>(x695<=x696)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x701 = 10U;
	static uint32_t x703 = UINT32_MAX;
	volatile uint16_t x704 = 61U;
	static int32_t t84 = -38967293;

	t84 = (x701<(x702>>(x703<=x704)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x705 = -1;
	static int16_t x707 = 33;
	int64_t x708 = 21741925050LL;
	int32_t t85 = -2739512;

	t85 = (x705<(x706>>(x707<=x708)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x713 = INT8_MIN;
	static int64_t x714 = INT64_MAX;
	uint16_t x715 = 58U;
	int16_t x716 = -1;
	static volatile int32_t t86 = 95;

	t86 = (x713<(x714>>(x715<=x716)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x717 = 18633381462074LL;
	int32_t x718 = INT32_MAX;
	int8_t x719 = INT8_MIN;
	volatile int16_t x720 = -15524;
	volatile int32_t t87 = -1;

	t87 = (x717<(x718>>(x719<=x720)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x721 = UINT16_MAX;
	uint16_t x722 = UINT16_MAX;
	volatile uint64_t x723 = UINT64_MAX;
	uint8_t x724 = UINT8_MAX;
	volatile int32_t t88 = -165;

	t88 = (x721<(x722>>(x723<=x724)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x727 = 10979;
	volatile int8_t x728 = -1;
	volatile int32_t t89 = -950297933;

	t89 = (x725<(x726>>(x727<=x728)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x729 = UINT16_MAX;
	int16_t x730 = 1558;
	int8_t x732 = INT8_MIN;
	int32_t t90 = -4089;

	t90 = (x729<(x730>>(x731<=x732)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x733 = -4LL;
	static uint64_t x734 = 126999077501475639LLU;
	int32_t x735 = INT32_MIN;
	volatile int64_t x736 = -84543963820662LL;
	int32_t t91 = -57;

	t91 = (x733<(x734>>(x735<=x736)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x737 = 1U;
	volatile int16_t x739 = -1;
	static int32_t x740 = INT32_MIN;
	volatile int32_t t92 = -818174;

	t92 = (x737<(x738>>(x739<=x740)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x741 = INT64_MAX;
	uint32_t x742 = 914U;
	static int64_t x743 = INT64_MAX;
	volatile int32_t t93 = 436145;

	t93 = (x741<(x742>>(x743<=x744)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x745 = -1;
	static uint8_t x746 = UINT8_MAX;
	uint32_t x747 = 1023553U;
	volatile uint32_t x748 = 40007U;
	int32_t t94 = -58;

	t94 = (x745<(x746>>(x747<=x748)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x749 = 35U;
	uint32_t x750 = UINT32_MAX;
	int16_t x751 = INT16_MAX;
	volatile uint16_t x752 = 0U;
	volatile int32_t t95 = -59;

	t95 = (x749<(x750>>(x751<=x752)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x753 = -3761905;
	uint32_t x754 = 1688659989U;
	int32_t x755 = INT32_MAX;
	uint64_t x756 = 8592435019LLU;
	static volatile int32_t t96 = 127;

	t96 = (x753<(x754>>(x755<=x756)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x757 = -1;
	uint8_t x758 = UINT8_MAX;
	static int16_t x759 = 26;
	static int64_t x760 = INT64_MIN;
	int32_t t97 = -216;

	t97 = (x757<(x758>>(x759<=x760)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x761 = -2;
	static uint16_t x762 = UINT16_MAX;
	volatile int16_t x763 = -1;
	int16_t x764 = 0;
	volatile int32_t t98 = -58652366;

	t98 = (x761<(x762>>(x763<=x764)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x765 = INT8_MAX;
	uint32_t x767 = UINT32_MAX;
	volatile int32_t t99 = 4;

	t99 = (x765<(x766>>(x767<=x768)));

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

