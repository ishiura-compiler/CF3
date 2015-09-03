#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
static int32_t x12 = INT32_MAX;
static uint32_t x20 = 115U;
static volatile int32_t x22 = INT32_MAX;
volatile int16_t x24 = INT16_MIN;
uint8_t x26 = 1U;
int8_t x28 = -1;
volatile int32_t t5 = 356158;
static volatile int8_t x35 = INT8_MIN;
static int32_t x37 = -1;
volatile int32_t t9 = -27;
int32_t t11 = 24;
static volatile int16_t x112 = INT16_MIN;
int64_t x123 = INT64_MIN;
uint8_t x147 = 113U;
int32_t x152 = 821974386;
uint64_t x158 = 10012866684834LLU;
uint16_t x160 = UINT16_MAX;
int32_t t22 = -1;
int8_t x163 = -1;
volatile int16_t x167 = INT16_MIN;
int32_t x171 = INT32_MAX;
int32_t t26 = -1;
volatile int32_t t27 = 220430705;
int32_t x196 = INT32_MIN;
int32_t t28 = 3815528;
uint8_t x198 = UINT8_MAX;
volatile int16_t x199 = INT16_MAX;
volatile int8_t x207 = 11;
static uint64_t x226 = 1061562LLU;
int32_t x228 = -730;
volatile int32_t x233 = INT32_MIN;
int32_t x253 = INT32_MIN;
static int32_t x257 = INT32_MIN;
static uint64_t x259 = 129766889448347972LLU;
int32_t t36 = 6280;
int16_t x264 = INT16_MIN;
int8_t x283 = 0;
int16_t x284 = 816;
volatile int16_t x288 = INT16_MIN;
static uint16_t x294 = 13667U;
int8_t x297 = -1;
uint32_t x306 = UINT32_MAX;
static volatile int32_t x308 = -1;
int32_t t47 = -4953888;
int64_t x357 = INT64_MIN;
int8_t x358 = INT8_MAX;
uint16_t x364 = 11021U;
int8_t x366 = 19;
volatile uint32_t x370 = 7649U;
uint64_t x372 = 659773290LLU;
int32_t t53 = 3784460;
int32_t t54 = -1;
volatile uint64_t x393 = 2103412691724707LLU;
volatile int16_t x394 = 411;
int32_t t55 = 80985454;
int32_t x399 = INT32_MIN;
static int16_t x400 = INT16_MIN;
int32_t t56 = 282;
int16_t x412 = INT16_MAX;
uint32_t x430 = 302952U;
volatile int32_t t59 = -10353;
volatile uint64_t x470 = UINT64_MAX;
int32_t x471 = -1;
int16_t x472 = INT16_MIN;
int16_t x484 = INT16_MIN;
int64_t x491 = INT64_MAX;
int32_t x497 = INT32_MIN;
volatile int16_t x511 = INT16_MIN;
volatile int8_t x513 = 1;
int64_t x516 = 3044420294034218272LL;
uint64_t x523 = 12690558619LLU;
static volatile int32_t t74 = -2287;
uint16_t x558 = 214U;
uint16_t x561 = UINT16_MAX;
int32_t x563 = INT32_MIN;
int64_t x569 = -256394152LL;
int64_t x578 = 30229824754996598LL;
int8_t x580 = INT8_MIN;
volatile int32_t t84 = 3;
static int8_t x582 = INT8_MAX;
int64_t x584 = -3LL;
uint8_t x590 = 0U;
uint8_t x610 = 12U;
int8_t x614 = 0;
static int16_t x633 = INT16_MIN;
int16_t x634 = INT16_MAX;
int64_t x652 = -1LL;
uint32_t x653 = 1076377U;
int16_t x663 = -6;
int8_t x665 = INT8_MAX;
static uint8_t x670 = UINT8_MAX;
int16_t x674 = 3397;
volatile int32_t t99 = 3;


void f0(void) {
	volatile int64_t x1 = 64197LL;
	static uint16_t x2 = UINT16_MAX;
	static volatile uint64_t x4 = 1616809310LLU;
	int32_t t0 = 428;

	t0 = (x1<(x2>>(x3<x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int16_t x6 = 15089;
	volatile int64_t x7 = INT64_MAX;
	uint64_t x8 = UINT64_MAX;
	static volatile int32_t t1 = 8;

	t1 = (x5<(x6>>(x7<x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int64_t x10 = 14202LL;
	uint32_t x11 = 25255679U;
	volatile int32_t t2 = -6330280;

	t2 = (x9<(x10>>(x11<x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x17 = 61U;
	uint64_t x18 = 473446096LLU;
	int64_t x19 = 2LL;
	volatile int32_t t3 = -2;

	t3 = (x17<(x18>>(x19<x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x21 = 7656254U;
	int32_t x23 = -1;
	volatile int32_t t4 = -7594;

	t4 = (x21<(x22>>(x23<x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = INT16_MIN;
	int32_t x27 = INT32_MIN;

	t5 = (x25<(x26>>(x27<x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MIN;
	static volatile uint16_t x34 = 6488U;
	uint32_t x36 = 2305U;
	volatile int32_t t6 = -252972326;

	t6 = (x33<(x34>>(x35<x36)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x38 = 1913U;
	uint16_t x39 = 20420U;
	uint32_t x40 = UINT32_MAX;
	static volatile int32_t t7 = 0;

	t7 = (x37<(x38>>(x39<x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x61 = INT64_MIN;
	static int64_t x62 = 14210695659195LL;
	static int16_t x63 = -249;
	volatile uint8_t x64 = 10U;
	int32_t t8 = -42;

	t8 = (x61<(x62>>(x63<x64)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x65 = 195U;
	int8_t x66 = 0;
	int16_t x67 = INT16_MIN;
	static int16_t x68 = -1;

	t9 = (x65<(x66>>(x67<x68)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x69 = 7;
	uint64_t x70 = 208243441LLU;
	uint8_t x71 = 73U;
	volatile int32_t x72 = INT32_MIN;
	int32_t t10 = -1805;

	t10 = (x69<(x70>>(x71<x72)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x77 = -1;
	int32_t x78 = INT32_MAX;
	uint32_t x79 = 26962711U;
	uint32_t x80 = UINT32_MAX;

	t11 = (x77<(x78>>(x79<x80)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x81 = -238;
	uint32_t x82 = 1099675U;
	int32_t x83 = INT32_MAX;
	int64_t x84 = -1461283643692866850LL;
	volatile int32_t t12 = 34;

	t12 = (x81<(x82>>(x83<x84)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x89 = 418LL;
	volatile uint8_t x90 = UINT8_MAX;
	uint32_t x91 = 172175U;
	uint32_t x92 = UINT32_MAX;
	int32_t t13 = 170;

	t13 = (x89<(x90>>(x91<x92)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x93 = INT64_MIN;
	static uint64_t x94 = UINT64_MAX;
	int64_t x95 = INT64_MIN;
	static uint32_t x96 = 809U;
	volatile int32_t t14 = 747873620;

	t14 = (x93<(x94>>(x95<x96)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x109 = 10;
	int8_t x110 = 14;
	static volatile uint16_t x111 = 443U;
	volatile int32_t t15 = -259554;

	t15 = (x109<(x110>>(x111<x112)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x117 = -138;
	uint8_t x118 = UINT8_MAX;
	volatile int16_t x119 = -1;
	static int8_t x120 = 15;
	volatile int32_t t16 = -6337362;

	t16 = (x117<(x118>>(x119<x120)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x121 = 139523289111LL;
	uint32_t x122 = 3983914U;
	int64_t x124 = INT64_MAX;
	volatile int32_t t17 = -14287283;

	t17 = (x121<(x122>>(x123<x124)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x133 = INT8_MAX;
	int8_t x134 = 49;
	int64_t x135 = INT64_MIN;
	volatile int64_t x136 = -1LL;
	volatile int32_t t18 = -2469930;

	t18 = (x133<(x134>>(x135<x136)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x145 = 4U;
	volatile uint64_t x146 = 176973069923623218LLU;
	int64_t x148 = INT64_MIN;
	static int32_t t19 = -219326;

	t19 = (x145<(x146>>(x147<x148)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x149 = -1;
	int8_t x150 = 35;
	static volatile int32_t x151 = 0;
	int32_t t20 = -1383188;

	t20 = (x149<(x150>>(x151<x152)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x153 = 63U;
	int16_t x154 = 531;
	int64_t x155 = INT64_MIN;
	static int8_t x156 = INT8_MIN;
	volatile int32_t t21 = -1;

	t21 = (x153<(x154>>(x155<x156)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x157 = 132U;
	static int16_t x159 = -1;

	t22 = (x157<(x158>>(x159<x160)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x161 = 29U;
	int8_t x162 = 31;
	volatile int16_t x164 = INT16_MIN;
	volatile int32_t t23 = -651;

	t23 = (x161<(x162>>(x163<x164)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x165 = INT64_MAX;
	static uint32_t x166 = 684585849U;
	volatile int16_t x168 = -63;
	static volatile int32_t t24 = 1015956;

	t24 = (x165<(x166>>(x167<x168)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x169 = UINT64_MAX;
	int32_t x170 = 475;
	volatile int16_t x172 = -1;
	int32_t t25 = 29732;

	t25 = (x169<(x170>>(x171<x172)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x173 = INT16_MIN;
	int8_t x174 = 1;
	static uint64_t x175 = UINT64_MAX;
	uint8_t x176 = 0U;

	t26 = (x173<(x174>>(x175<x176)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x189 = 6794;
	uint64_t x190 = 6637876884LLU;
	uint8_t x191 = 72U;
	int64_t x192 = -1LL;

	t27 = (x189<(x190>>(x191<x192)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x193 = INT32_MIN;
	volatile uint32_t x194 = 15U;
	static int16_t x195 = 251;

	t28 = (x193<(x194>>(x195<x196)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x197 = -1;
	static volatile uint64_t x200 = 398040418166548887LLU;
	int32_t t29 = -767;

	t29 = (x197<(x198>>(x199<x200)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x205 = -1;
	volatile uint64_t x206 = 183483727831LLU;
	static int8_t x208 = -59;
	volatile int32_t t30 = -12;

	t30 = (x205<(x206>>(x207<x208)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x225 = 28;
	int16_t x227 = INT16_MIN;
	int32_t t31 = -7;

	t31 = (x225<(x226>>(x227<x228)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x229 = UINT64_MAX;
	static int64_t x230 = INT64_MAX;
	static volatile uint64_t x231 = UINT64_MAX;
	uint8_t x232 = 118U;
	volatile int32_t t32 = -5604;

	t32 = (x229<(x230>>(x231<x232)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x234 = 195095101435553LL;
	uint64_t x235 = UINT64_MAX;
	static volatile uint32_t x236 = 436U;
	volatile int32_t t33 = 11;

	t33 = (x233<(x234>>(x235<x236)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x237 = INT16_MAX;
	int32_t x238 = 51;
	volatile uint16_t x239 = UINT16_MAX;
	static uint8_t x240 = 22U;
	int32_t t34 = 2784;

	t34 = (x237<(x238>>(x239<x240)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x254 = INT16_MAX;
	int64_t x255 = -14286641094518LL;
	int64_t x256 = INT64_MIN;
	int32_t t35 = 1;

	t35 = (x253<(x254>>(x255<x256)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x258 = 12094LL;
	volatile uint8_t x260 = UINT8_MAX;

	t36 = (x257<(x258>>(x259<x260)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x261 = INT16_MIN;
	uint16_t x262 = 11745U;
	int16_t x263 = INT16_MIN;
	int32_t t37 = 0;

	t37 = (x261<(x262>>(x263<x264)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x265 = -1LL;
	volatile uint8_t x266 = UINT8_MAX;
	static uint64_t x267 = UINT64_MAX;
	uint16_t x268 = 30U;
	int32_t t38 = 2088898;

	t38 = (x265<(x266>>(x267<x268)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x269 = 208;
	volatile uint8_t x270 = 6U;
	int32_t x271 = INT32_MAX;
	int64_t x272 = INT64_MAX;
	int32_t t39 = -10147;

	t39 = (x269<(x270>>(x271<x272)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x273 = INT16_MIN;
	static int8_t x274 = INT8_MAX;
	uint16_t x275 = 91U;
	int8_t x276 = 1;
	volatile int32_t t40 = -80;

	t40 = (x273<(x274>>(x275<x276)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x281 = INT64_MIN;
	int8_t x282 = 10;
	int32_t t41 = -127531694;

	t41 = (x281<(x282>>(x283<x284)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x285 = 39;
	uint16_t x286 = UINT16_MAX;
	volatile int64_t x287 = INT64_MIN;
	int32_t t42 = -6483;

	t42 = (x285<(x286>>(x287<x288)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x293 = 4814LLU;
	uint16_t x295 = 2990U;
	volatile uint8_t x296 = 1U;
	int32_t t43 = 85365;

	t43 = (x293<(x294>>(x295<x296)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x298 = UINT16_MAX;
	int32_t x299 = 96;
	int8_t x300 = INT8_MIN;
	static int32_t t44 = -1564;

	t44 = (x297<(x298>>(x299<x300)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x305 = INT32_MIN;
	int16_t x307 = 1;
	int32_t t45 = 6612;

	t45 = (x305<(x306>>(x307<x308)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x309 = 4U;
	static uint32_t x310 = 14U;
	static uint8_t x311 = 30U;
	int16_t x312 = INT16_MAX;
	volatile int32_t t46 = -1;

	t46 = (x309<(x310>>(x311<x312)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x321 = INT16_MAX;
	int16_t x322 = INT16_MAX;
	static int8_t x323 = -15;
	static int32_t x324 = INT32_MAX;

	t47 = (x321<(x322>>(x323<x324)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x333 = INT32_MIN;
	int32_t x334 = 2405244;
	uint32_t x335 = 239U;
	volatile int16_t x336 = -1;
	volatile int32_t t48 = 10507595;

	t48 = (x333<(x334>>(x335<x336)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x359 = 103506;
	int8_t x360 = -1;
	int32_t t49 = -99386;

	t49 = (x357<(x358>>(x359<x360)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x361 = INT32_MIN;
	static uint16_t x362 = 195U;
	int32_t x363 = -1;
	static int32_t t50 = 36002671;

	t50 = (x361<(x362>>(x363<x364)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x365 = INT8_MAX;
	int16_t x367 = INT16_MAX;
	int16_t x368 = INT16_MAX;
	static int32_t t51 = 440;

	t51 = (x365<(x366>>(x367<x368)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x369 = 89;
	int32_t x371 = -1;
	static int32_t t52 = 596;

	t52 = (x369<(x370>>(x371<x372)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x377 = INT16_MIN;
	volatile uint16_t x378 = 5413U;
	int8_t x379 = INT8_MIN;
	volatile uint8_t x380 = 55U;

	t53 = (x377<(x378>>(x379<x380)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x385 = INT32_MIN;
	uint8_t x386 = 29U;
	volatile int32_t x387 = INT32_MAX;
	int16_t x388 = INT16_MIN;

	t54 = (x385<(x386>>(x387<x388)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x395 = -1;
	volatile uint32_t x396 = 196748U;

	t55 = (x393<(x394>>(x395<x396)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x397 = -1;
	static uint32_t x398 = 160977318U;

	t56 = (x397<(x398>>(x399<x400)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x405 = INT64_MAX;
	volatile uint32_t x406 = 64119267U;
	int16_t x407 = INT16_MAX;
	volatile int32_t x408 = -1;
	volatile int32_t t57 = -1676577;

	t57 = (x405<(x406>>(x407<x408)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x409 = UINT16_MAX;
	static uint8_t x410 = 28U;
	int64_t x411 = INT64_MIN;
	static int32_t t58 = 1;

	t58 = (x409<(x410>>(x411<x412)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x429 = -1;
	static int16_t x431 = INT16_MIN;
	int8_t x432 = -1;

	t59 = (x429<(x430>>(x431<x432)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x437 = UINT64_MAX;
	volatile uint16_t x438 = 34U;
	int8_t x439 = INT8_MIN;
	volatile int16_t x440 = -14297;
	volatile int32_t t60 = 29;

	t60 = (x437<(x438>>(x439<x440)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x441 = INT16_MAX;
	volatile int32_t x442 = 2;
	int32_t x443 = 14998;
	int32_t x444 = 7;
	volatile int32_t t61 = -45;

	t61 = (x441<(x442>>(x443<x444)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x461 = INT32_MIN;
	volatile int64_t x462 = INT64_MAX;
	static int8_t x463 = INT8_MIN;
	volatile uint8_t x464 = UINT8_MAX;
	volatile int32_t t62 = 168;

	t62 = (x461<(x462>>(x463<x464)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x469 = -11;
	int32_t t63 = -940892394;

	t63 = (x469<(x470>>(x471<x472)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x481 = -1;
	static volatile int8_t x482 = INT8_MAX;
	int32_t x483 = INT32_MAX;
	volatile int32_t t64 = -134;

	t64 = (x481<(x482>>(x483<x484)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x489 = INT8_MIN;
	int16_t x490 = 1;
	int64_t x492 = INT64_MIN;
	int32_t t65 = -3646686;

	t65 = (x489<(x490>>(x491<x492)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x493 = 21599U;
	int8_t x494 = INT8_MAX;
	int16_t x495 = -279;
	int64_t x496 = INT64_MIN;
	volatile int32_t t66 = -3523018;

	t66 = (x493<(x494>>(x495<x496)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x498 = 4202U;
	static uint16_t x499 = 55U;
	int64_t x500 = -2LL;
	volatile int32_t t67 = -92;

	t67 = (x497<(x498>>(x499<x500)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x501 = INT16_MIN;
	volatile int64_t x502 = 525668079307LL;
	int64_t x503 = 1329775LL;
	uint8_t x504 = UINT8_MAX;
	volatile int32_t t68 = -6016;

	t68 = (x501<(x502>>(x503<x504)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x505 = -1;
	uint8_t x506 = UINT8_MAX;
	uint32_t x507 = 121570851U;
	uint8_t x508 = 3U;
	volatile int32_t t69 = 1;

	t69 = (x505<(x506>>(x507<x508)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x509 = UINT32_MAX;
	int32_t x510 = 917031281;
	int32_t x512 = INT32_MIN;
	int32_t t70 = -246913;

	t70 = (x509<(x510>>(x511<x512)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x514 = 1;
	int8_t x515 = -7;
	volatile int32_t t71 = -319;

	t71 = (x513<(x514>>(x515<x516)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x517 = INT8_MIN;
	volatile uint64_t x518 = UINT64_MAX;
	int8_t x519 = INT8_MIN;
	volatile uint16_t x520 = 37U;
	int32_t t72 = -580;

	t72 = (x517<(x518>>(x519<x520)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x521 = 1084U;
	volatile int8_t x522 = INT8_MAX;
	volatile int16_t x524 = -1;
	volatile int32_t t73 = -1406732;

	t73 = (x521<(x522>>(x523<x524)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x525 = INT64_MAX;
	static int8_t x526 = INT8_MAX;
	uint32_t x527 = 1U;
	int8_t x528 = -1;

	t74 = (x525<(x526>>(x527<x528)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x529 = -1LL;
	volatile int16_t x530 = INT16_MAX;
	uint32_t x531 = 2288U;
	static int16_t x532 = INT16_MIN;
	int32_t t75 = 834718;

	t75 = (x529<(x530>>(x531<x532)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x533 = 206205700385LLU;
	static int8_t x534 = INT8_MAX;
	int32_t x535 = INT32_MIN;
	int16_t x536 = 387;
	volatile int32_t t76 = 1;

	t76 = (x533<(x534>>(x535<x536)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x545 = UINT16_MAX;
	volatile uint16_t x546 = UINT16_MAX;
	int8_t x547 = INT8_MAX;
	volatile int8_t x548 = INT8_MIN;
	int32_t t77 = -39;

	t77 = (x545<(x546>>(x547<x548)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x549 = -1LL;
	volatile int64_t x550 = INT64_MAX;
	int32_t x551 = INT32_MIN;
	int64_t x552 = INT64_MIN;
	int32_t t78 = 315147;

	t78 = (x549<(x550>>(x551<x552)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x557 = -7;
	int64_t x559 = -192357077382662359LL;
	uint16_t x560 = 5126U;
	static int32_t t79 = -4391;

	t79 = (x557<(x558>>(x559<x560)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x562 = INT64_MAX;
	volatile uint32_t x564 = UINT32_MAX;
	int32_t t80 = 54873391;

	t80 = (x561<(x562>>(x563<x564)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x565 = -14069;
	volatile int32_t x566 = INT32_MAX;
	int32_t x567 = -741224010;
	static int32_t x568 = -1;
	volatile int32_t t81 = 4833485;

	t81 = (x565<(x566>>(x567<x568)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x570 = 13099352LL;
	uint16_t x571 = UINT16_MAX;
	uint32_t x572 = 116U;
	int32_t t82 = 3612475;

	t82 = (x569<(x570>>(x571<x572)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x573 = 3470;
	static volatile uint32_t x574 = 3417U;
	int16_t x575 = -1;
	int64_t x576 = INT64_MAX;
	volatile int32_t t83 = -36;

	t83 = (x573<(x574>>(x575<x576)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x577 = 1904528;
	uint16_t x579 = 1U;

	t84 = (x577<(x578>>(x579<x580)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x581 = -1;
	volatile int64_t x583 = INT64_MIN;
	volatile int32_t t85 = -2142;

	t85 = (x581<(x582>>(x583<x584)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x589 = -1LL;
	volatile uint8_t x591 = 56U;
	int32_t x592 = 269;
	int32_t t86 = -30182;

	t86 = (x589<(x590>>(x591<x592)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x593 = INT64_MIN;
	int32_t x594 = INT32_MAX;
	static volatile int32_t x595 = 108;
	int32_t x596 = INT32_MIN;
	int32_t t87 = 1;

	t87 = (x593<(x594>>(x595<x596)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x601 = INT8_MAX;
	uint8_t x602 = 3U;
	uint8_t x603 = 0U;
	int32_t x604 = INT32_MIN;
	volatile int32_t t88 = 43638;

	t88 = (x601<(x602>>(x603<x604)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x605 = -28777278365997077LL;
	volatile uint32_t x606 = UINT32_MAX;
	int32_t x607 = INT32_MIN;
	int8_t x608 = INT8_MIN;
	volatile int32_t t89 = 5492;

	t89 = (x605<(x606>>(x607<x608)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x609 = -874;
	int32_t x611 = 62230397;
	static int64_t x612 = INT64_MAX;
	int32_t t90 = 63;

	t90 = (x609<(x610>>(x611<x612)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x613 = 169U;
	volatile uint64_t x615 = UINT64_MAX;
	static int8_t x616 = 1;
	volatile int32_t t91 = 1;

	t91 = (x613<(x614>>(x615<x616)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x635 = 14;
	int8_t x636 = -1;
	static volatile int32_t t92 = -4050350;

	t92 = (x633<(x634>>(x635<x636)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x645 = INT16_MAX;
	int32_t x646 = INT32_MAX;
	int64_t x647 = INT64_MIN;
	int16_t x648 = 3196;
	int32_t t93 = -199685530;

	t93 = (x645<(x646>>(x647<x648)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x649 = INT32_MIN;
	uint32_t x650 = 582412989U;
	static int64_t x651 = INT64_MAX;
	static int32_t t94 = -5197771;

	t94 = (x649<(x650>>(x651<x652)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x654 = INT32_MAX;
	static int64_t x655 = INT64_MAX;
	static int8_t x656 = INT8_MIN;
	int32_t t95 = -8033;

	t95 = (x653<(x654>>(x655<x656)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x661 = INT16_MIN;
	volatile uint32_t x662 = UINT32_MAX;
	static uint32_t x664 = 99459477U;
	int32_t t96 = 558348;

	t96 = (x661<(x662>>(x663<x664)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x666 = INT8_MAX;
	uint64_t x667 = 495420184381307169LLU;
	uint64_t x668 = 2886LLU;
	int32_t t97 = -181581116;

	t97 = (x665<(x666>>(x667<x668)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x669 = INT8_MAX;
	volatile uint32_t x671 = UINT32_MAX;
	static uint64_t x672 = 1093992LLU;
	int32_t t98 = -746228654;

	t98 = (x669<(x670>>(x671<x672)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x673 = INT16_MIN;
	volatile uint16_t x675 = 0U;
	int32_t x676 = -832146828;

	t99 = (x673<(x674>>(x675<x676)));

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

