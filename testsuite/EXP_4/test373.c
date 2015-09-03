#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x3 = 0U;
int16_t x10 = 17;
uint16_t x20 = 43U;
static int8_t x31 = INT8_MIN;
int16_t x49 = 2938;
int8_t x54 = INT8_MIN;
int32_t t7 = 5539046;
int64_t x77 = -2325574LL;
int64_t x85 = INT64_MAX;
volatile uint64_t x100 = UINT64_MAX;
int16_t x107 = INT16_MIN;
volatile int64_t x140 = -809254622541481LL;
volatile int16_t x152 = -1;
volatile uint32_t x160 = UINT32_MAX;
volatile int32_t t20 = 0;
int8_t x166 = INT8_MAX;
uint32_t x172 = 48164U;
volatile int32_t t23 = 167;
volatile uint32_t x181 = 0U;
static volatile int16_t x190 = -1;
volatile int32_t t25 = -42;
volatile int64_t x202 = -1LL;
int8_t x219 = 3;
uint32_t x247 = 23434U;
uint16_t x250 = UINT16_MAX;
uint32_t x259 = UINT32_MAX;
int64_t x275 = -1LL;
int32_t x280 = -1288968;
uint16_t x281 = 5406U;
int8_t x284 = 1;
uint64_t x296 = 16LLU;
int32_t x310 = INT32_MAX;
uint16_t x311 = 6864U;
int8_t x323 = -1;
volatile int32_t t43 = 6669;
uint32_t x338 = UINT32_MAX;
volatile uint32_t x339 = 269551U;
int16_t x340 = INT16_MIN;
int32_t x350 = -5034;
static int32_t t47 = 215193;
int32_t x355 = INT32_MAX;
static int32_t x357 = INT32_MAX;
static int8_t x358 = INT8_MIN;
int64_t x373 = INT64_MIN;
uint32_t x375 = UINT32_MAX;
volatile int32_t t55 = 0;
uint64_t x394 = 14794LLU;
static volatile int8_t x415 = 5;
int8_t x416 = INT8_MIN;
int32_t t58 = 1;
int8_t x421 = -1;
int16_t x423 = -40;
int8_t x428 = -3;
volatile uint16_t x430 = 7217U;
int32_t x432 = -1;
volatile int8_t x439 = INT8_MIN;
static volatile int32_t t63 = 1;
int16_t x443 = -1;
int8_t x454 = -1;
int16_t x457 = 3202;
int16_t x478 = INT16_MIN;
volatile int32_t t69 = 307;
uint32_t x485 = 280447U;
int8_t x502 = -1;
static uint8_t x503 = 49U;
volatile int32_t t71 = 25918;
static uint32_t x510 = 187527U;
static int8_t x514 = -1;
int32_t t73 = 6647;
static volatile uint32_t x519 = 11376U;
int64_t x520 = 25LL;
int32_t x547 = INT32_MAX;
volatile uint32_t x548 = 0U;
int32_t x561 = INT32_MAX;
int16_t x572 = 0;
int16_t x574 = 28;
int64_t x597 = INT64_MIN;
uint8_t x607 = 1U;
int32_t x609 = INT32_MAX;
volatile uint64_t x611 = UINT64_MAX;
uint8_t x616 = 43U;
uint64_t x619 = 281841159LLU;
int16_t x638 = 15009;
uint64_t x643 = UINT64_MAX;
volatile int32_t t91 = 56;
static uint32_t x665 = 22611U;
volatile int64_t x666 = -23972LL;
uint64_t x667 = UINT64_MAX;
volatile int32_t t92 = 281211239;
static int32_t x672 = INT32_MAX;
static uint32_t x690 = UINT32_MAX;
uint16_t x704 = 15U;
static uint8_t x710 = 14U;
int8_t x713 = INT8_MIN;
uint64_t x714 = UINT64_MAX;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int8_t x2 = 0;
	static uint8_t x4 = 1U;
	volatile int32_t t0 = 26164;

	t0 = (x1<(x2*(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	uint32_t x11 = UINT32_MAX;
	int32_t x12 = 1;
	int32_t t1 = 3081164;

	t1 = (x9<(x10*(x11*x12)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	static int32_t x14 = 397;
	int8_t x15 = 9;
	volatile int8_t x16 = 1;
	int32_t t2 = 24994087;

	t2 = (x13<(x14*(x15*x16)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	int8_t x18 = 0;
	int16_t x19 = -1;
	int32_t t3 = -12841;

	t3 = (x17<(x18*(x19*x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x29 = 27U;
	static int64_t x30 = 3219464427293LL;
	uint64_t x32 = UINT64_MAX;
	int32_t t4 = -443267709;

	t4 = (x29<(x30*(x31*x32)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x41 = 59964456;
	volatile int64_t x42 = INT64_MIN;
	static uint64_t x43 = 12LLU;
	int8_t x44 = -1;
	volatile int32_t t5 = -7;

	t5 = (x41<(x42*(x43*x44)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x50 = 222077449U;
	int32_t x51 = -1;
	static uint32_t x52 = UINT32_MAX;
	static int32_t t6 = -686257291;

	t6 = (x49<(x50*(x51*x52)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x53 = INT16_MAX;
	static int8_t x55 = -1;
	int8_t x56 = INT8_MAX;

	t7 = (x53<(x54*(x55*x56)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x78 = 0LL;
	int16_t x79 = -1;
	static int32_t x80 = -1;
	volatile int32_t t8 = 0;

	t8 = (x77<(x78*(x79*x80)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x86 = 95;
	static uint8_t x87 = UINT8_MAX;
	uint32_t x88 = 205615204U;
	int32_t t9 = -205589724;

	t9 = (x85<(x86*(x87*x88)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x89 = INT8_MIN;
	uint16_t x90 = 27712U;
	volatile int16_t x91 = -1;
	int64_t x92 = 3145049445LL;
	volatile int32_t t10 = 0;

	t10 = (x89<(x90*(x91*x92)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MAX;
	uint32_t x95 = 1736U;
	int8_t x96 = -1;
	volatile int32_t t11 = -121810926;

	t11 = (x93<(x94*(x95*x96)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x97 = 54;
	int32_t x98 = INT32_MIN;
	volatile int64_t x99 = 14678020LL;
	int32_t t12 = -26;

	t12 = (x97<(x98*(x99*x100)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x105 = -1;
	volatile uint32_t x106 = UINT32_MAX;
	static int8_t x108 = -24;
	int32_t t13 = -33;

	t13 = (x105<(x106*(x107*x108)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x109 = 0;
	uint8_t x110 = 6U;
	int32_t x111 = INT32_MIN;
	uint32_t x112 = 0U;
	int32_t t14 = 839575124;

	t14 = (x109<(x110*(x111*x112)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x117 = INT32_MIN;
	uint64_t x118 = UINT64_MAX;
	int8_t x119 = -1;
	uint32_t x120 = 1109U;
	int32_t t15 = 3513705;

	t15 = (x117<(x118*(x119*x120)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x121 = 0;
	uint16_t x122 = 8188U;
	int8_t x123 = -2;
	int8_t x124 = INT8_MIN;
	int32_t t16 = 60;

	t16 = (x121<(x122*(x123*x124)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x133 = INT16_MAX;
	static volatile int8_t x134 = INT8_MIN;
	uint32_t x135 = UINT32_MAX;
	uint32_t x136 = UINT32_MAX;
	int32_t t17 = -88;

	t17 = (x133<(x134*(x135*x136)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x137 = INT64_MIN;
	static int32_t x138 = -1;
	uint64_t x139 = UINT64_MAX;
	volatile int32_t t18 = 1;

	t18 = (x137<(x138*(x139*x140)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x149 = -1;
	int16_t x150 = 13;
	static int16_t x151 = INT16_MIN;
	static int32_t t19 = 764805822;

	t19 = (x149<(x150*(x151*x152)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x157 = 336LL;
	uint16_t x158 = UINT16_MAX;
	int16_t x159 = -8184;

	t20 = (x157<(x158*(x159*x160)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x165 = -166715;
	int8_t x167 = -3;
	uint32_t x168 = 28431592U;
	volatile int32_t t21 = -128821224;

	t21 = (x165<(x166*(x167*x168)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x169 = -513845953;
	int64_t x170 = 6784LL;
	static int8_t x171 = -1;
	int32_t t22 = 14353;

	t22 = (x169<(x170*(x171*x172)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x173 = 1476063447788790741LLU;
	static int32_t x174 = -1;
	static int16_t x175 = INT16_MIN;
	int16_t x176 = 9095;

	t23 = (x173<(x174*(x175*x176)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x182 = 7398LL;
	volatile int16_t x183 = INT16_MAX;
	static uint64_t x184 = 2441409034878995LLU;
	static int32_t t24 = 18483791;

	t24 = (x181<(x182*(x183*x184)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x189 = 1;
	volatile int32_t x191 = INT32_MIN;
	volatile int64_t x192 = -1LL;

	t25 = (x189<(x190*(x191*x192)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x193 = 1043353334U;
	uint16_t x194 = 41U;
	int64_t x195 = -77507LL;
	int32_t x196 = INT32_MAX;
	volatile int32_t t26 = -349134;

	t26 = (x193<(x194*(x195*x196)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x197 = 1U;
	uint16_t x198 = 2997U;
	int16_t x199 = -1;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t27 = 10851228;

	t27 = (x197<(x198*(x199*x200)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x201 = INT8_MIN;
	uint64_t x203 = 8572873079LLU;
	int16_t x204 = INT16_MIN;
	volatile int32_t t28 = 1;

	t28 = (x201<(x202*(x203*x204)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x217 = INT32_MAX;
	static int16_t x218 = -1;
	static int64_t x220 = -1LL;
	volatile int32_t t29 = -404;

	t29 = (x217<(x218*(x219*x220)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x229 = 1;
	static uint64_t x230 = 2705003814LLU;
	int64_t x231 = 5962346LL;
	int64_t x232 = -1LL;
	static volatile int32_t t30 = -11277585;

	t30 = (x229<(x230*(x231*x232)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x245 = INT8_MIN;
	int32_t x246 = 397762;
	volatile int8_t x248 = -9;
	volatile int32_t t31 = 0;

	t31 = (x245<(x246*(x247*x248)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x249 = 177;
	int64_t x251 = 0LL;
	uint32_t x252 = 1213695U;
	static volatile int32_t t32 = -14;

	t32 = (x249<(x250*(x251*x252)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x257 = 56422LLU;
	volatile int64_t x258 = -3661773980985LL;
	uint64_t x260 = UINT64_MAX;
	int32_t t33 = 5081947;

	t33 = (x257<(x258*(x259*x260)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x273 = INT64_MIN;
	int8_t x274 = -1;
	volatile uint16_t x276 = 2284U;
	int32_t t34 = 97807601;

	t34 = (x273<(x274*(x275*x276)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x277 = -1;
	int32_t x278 = -1;
	int8_t x279 = -9;
	static int32_t t35 = -470;

	t35 = (x277<(x278*(x279*x280)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x282 = INT16_MIN;
	uint32_t x283 = 783U;
	volatile int32_t t36 = 275;

	t36 = (x281<(x282*(x283*x284)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = -24;
	static volatile int16_t x287 = INT16_MIN;
	int64_t x288 = 5951878975LL;
	volatile int32_t t37 = -15411;

	t37 = (x285<(x286*(x287*x288)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x293 = 7;
	int8_t x294 = INT8_MIN;
	int16_t x295 = -11;
	volatile int32_t t38 = 55266;

	t38 = (x293<(x294*(x295*x296)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x297 = INT8_MAX;
	uint16_t x298 = UINT16_MAX;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = -1;
	int32_t t39 = 42839296;

	t39 = (x297<(x298*(x299*x300)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x301 = INT64_MIN;
	uint16_t x302 = 13067U;
	volatile uint16_t x303 = 0U;
	static int32_t x304 = -2222;
	static int32_t t40 = 1405;

	t40 = (x301<(x302*(x303*x304)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x305 = INT32_MAX;
	int16_t x306 = 27;
	static int16_t x307 = 44;
	static uint64_t x308 = UINT64_MAX;
	volatile int32_t t41 = 509;

	t41 = (x305<(x306*(x307*x308)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x309 = INT16_MIN;
	volatile uint32_t x312 = UINT32_MAX;
	volatile int32_t t42 = 891261686;

	t42 = (x309<(x310*(x311*x312)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x321 = UINT16_MAX;
	volatile int32_t x322 = INT32_MIN;
	volatile uint64_t x324 = 13899471643227410LLU;

	t43 = (x321<(x322*(x323*x324)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x333 = -541013;
	int64_t x334 = -518704LL;
	static uint64_t x335 = 5801000235LLU;
	volatile uint64_t x336 = UINT64_MAX;
	static int32_t t44 = 46262450;

	t44 = (x333<(x334*(x335*x336)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x337 = 2U;
	volatile int32_t t45 = -1;

	t45 = (x337<(x338*(x339*x340)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x341 = -2;
	volatile int64_t x342 = -37514302LL;
	int8_t x343 = 0;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t46 = 4177;

	t46 = (x341<(x342*(x343*x344)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x349 = INT64_MIN;
	uint8_t x351 = 27U;
	int16_t x352 = -1;

	t47 = (x349<(x350*(x351*x352)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x353 = INT16_MAX;
	int64_t x354 = -1LL;
	uint64_t x356 = UINT64_MAX;
	int32_t t48 = -9425;

	t48 = (x353<(x354*(x355*x356)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x359 = INT64_MIN;
	volatile int32_t x360 = 0;
	int32_t t49 = -130;

	t49 = (x357<(x358*(x359*x360)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x361 = -224158;
	static uint64_t x362 = 602067991456831866LLU;
	uint64_t x363 = 52492398576341LLU;
	volatile uint8_t x364 = 2U;
	int32_t t50 = -26206160;

	t50 = (x361<(x362*(x363*x364)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x369 = 63;
	uint32_t x370 = 234122U;
	static uint8_t x371 = UINT8_MAX;
	int16_t x372 = INT16_MAX;
	int32_t t51 = 27387;

	t51 = (x369<(x370*(x371*x372)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x374 = INT16_MAX;
	static int32_t x376 = INT32_MAX;
	volatile int32_t t52 = -58;

	t52 = (x373<(x374*(x375*x376)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x377 = 0U;
	volatile uint32_t x378 = 1750284218U;
	uint8_t x379 = UINT8_MAX;
	volatile int8_t x380 = INT8_MIN;
	volatile int32_t t53 = 220942453;

	t53 = (x377<(x378*(x379*x380)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x381 = INT32_MIN;
	int8_t x382 = INT8_MIN;
	static volatile int32_t x383 = INT32_MIN;
	int16_t x384 = 0;
	volatile int32_t t54 = 18;

	t54 = (x381<(x382*(x383*x384)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x389 = UINT16_MAX;
	int16_t x390 = -3659;
	int32_t x391 = -1;
	int32_t x392 = -1;

	t55 = (x389<(x390*(x391*x392)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x393 = 46;
	static uint16_t x395 = 91U;
	volatile uint64_t x396 = 534145089450148LLU;
	int32_t t56 = 904506;

	t56 = (x393<(x394*(x395*x396)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x413 = -1;
	uint16_t x414 = 0U;
	int32_t t57 = -60562587;

	t57 = (x413<(x414*(x415*x416)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x417 = INT64_MIN;
	static int8_t x418 = INT8_MAX;
	static uint32_t x419 = 1U;
	uint8_t x420 = 3U;

	t58 = (x417<(x418*(x419*x420)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x422 = 7247805943LL;
	uint16_t x424 = 5U;
	volatile int32_t t59 = 20835;

	t59 = (x421<(x422*(x423*x424)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x425 = 6LLU;
	int8_t x426 = -1;
	int8_t x427 = 11;
	volatile int32_t t60 = 1;

	t60 = (x425<(x426*(x427*x428)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x429 = -1;
	volatile uint64_t x431 = 88015LLU;
	int32_t t61 = 1093122;

	t61 = (x429<(x430*(x431*x432)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x433 = 2;
	int16_t x434 = -1;
	static uint8_t x435 = 0U;
	uint64_t x436 = UINT64_MAX;
	volatile int32_t t62 = 3438368;

	t62 = (x433<(x434*(x435*x436)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x437 = INT64_MAX;
	int16_t x438 = -13078;
	volatile uint64_t x440 = 29044589742LLU;

	t63 = (x437<(x438*(x439*x440)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x441 = -3165148271381453LL;
	static int64_t x442 = INT64_MIN;
	volatile int16_t x444 = -1;
	volatile int32_t t64 = -13417;

	t64 = (x441<(x442*(x443*x444)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x445 = UINT64_MAX;
	uint16_t x446 = 1U;
	int8_t x447 = INT8_MAX;
	uint32_t x448 = UINT32_MAX;
	static int32_t t65 = 344;

	t65 = (x445<(x446*(x447*x448)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x453 = 1156LLU;
	static uint64_t x455 = UINT64_MAX;
	int8_t x456 = -1;
	int32_t t66 = 5;

	t66 = (x453<(x454*(x455*x456)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x458 = INT8_MIN;
	volatile int16_t x459 = INT16_MIN;
	uint64_t x460 = UINT64_MAX;
	volatile int32_t t67 = 6573458;

	t67 = (x457<(x458*(x459*x460)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x469 = UINT32_MAX;
	int8_t x470 = INT8_MIN;
	volatile uint16_t x471 = 8U;
	uint64_t x472 = 504428LLU;
	volatile int32_t t68 = -5;

	t68 = (x469<(x470*(x471*x472)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x477 = -315405740LL;
	uint16_t x479 = 0U;
	int8_t x480 = 0;

	t69 = (x477<(x478*(x479*x480)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x486 = INT8_MIN;
	static int8_t x487 = 50;
	uint32_t x488 = 998U;
	volatile int32_t t70 = -1;

	t70 = (x485<(x486*(x487*x488)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x501 = INT64_MAX;
	volatile int8_t x504 = 23;

	t71 = (x501<(x502*(x503*x504)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x509 = 4;
	int16_t x511 = -1;
	uint16_t x512 = 5928U;
	static int32_t t72 = -167783;

	t72 = (x509<(x510*(x511*x512)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x513 = INT64_MIN;
	static uint16_t x515 = 480U;
	uint32_t x516 = 3449189U;

	t73 = (x513<(x514*(x515*x516)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x517 = INT16_MAX;
	uint32_t x518 = UINT32_MAX;
	int32_t t74 = 54;

	t74 = (x517<(x518*(x519*x520)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x545 = 189U;
	uint8_t x546 = 46U;
	static volatile int32_t t75 = 46044;

	t75 = (x545<(x546*(x547*x548)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x549 = 5U;
	static uint64_t x550 = 252626718538610399LLU;
	int8_t x551 = 8;
	int16_t x552 = INT16_MIN;
	volatile int32_t t76 = 78977360;

	t76 = (x549<(x550*(x551*x552)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x562 = 163273U;
	uint32_t x563 = UINT32_MAX;
	int32_t x564 = INT32_MIN;
	int32_t t77 = -2;

	t77 = (x561<(x562*(x563*x564)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x569 = -63;
	int16_t x570 = INT16_MIN;
	int16_t x571 = INT16_MIN;
	static volatile int32_t t78 = -12;

	t78 = (x569<(x570*(x571*x572)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x573 = 20LLU;
	volatile uint16_t x575 = UINT16_MAX;
	volatile uint8_t x576 = 12U;
	static int32_t t79 = 0;

	t79 = (x573<(x574*(x575*x576)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x589 = UINT8_MAX;
	volatile int16_t x590 = -1;
	volatile int32_t x591 = 426263208;
	static uint64_t x592 = UINT64_MAX;
	static int32_t t80 = -26510;

	t80 = (x589<(x590*(x591*x592)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x593 = -1;
	volatile uint16_t x594 = 262U;
	int16_t x595 = -6;
	int32_t x596 = -1;
	volatile int32_t t81 = -817219960;

	t81 = (x593<(x594*(x595*x596)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x598 = -1;
	uint32_t x599 = 0U;
	uint32_t x600 = 117U;
	volatile int32_t t82 = -53;

	t82 = (x597<(x598*(x599*x600)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x605 = 1291U;
	int8_t x606 = INT8_MAX;
	static int8_t x608 = INT8_MIN;
	static int32_t t83 = 516136;

	t83 = (x605<(x606*(x607*x608)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x610 = INT64_MIN;
	uint8_t x612 = UINT8_MAX;
	int32_t t84 = 11;

	t84 = (x609<(x610*(x611*x612)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x613 = INT32_MAX;
	static uint32_t x614 = 64961996U;
	uint32_t x615 = 1799130380U;
	volatile int32_t t85 = 15574663;

	t85 = (x613<(x614*(x615*x616)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x617 = INT32_MIN;
	uint32_t x618 = 5856U;
	static int16_t x620 = INT16_MAX;
	volatile int32_t t86 = 39;

	t86 = (x617<(x618*(x619*x620)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x629 = 2;
	volatile int64_t x630 = INT64_MAX;
	uint64_t x631 = 8LLU;
	int8_t x632 = -1;
	int32_t t87 = 1596296;

	t87 = (x629<(x630*(x631*x632)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x633 = INT64_MIN;
	int16_t x634 = INT16_MAX;
	static uint8_t x635 = 99U;
	static int16_t x636 = -1;
	volatile int32_t t88 = 530108068;

	t88 = (x633<(x634*(x635*x636)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x637 = INT64_MIN;
	static uint32_t x639 = UINT32_MAX;
	int16_t x640 = INT16_MIN;
	static volatile int32_t t89 = -390309;

	t89 = (x637<(x638*(x639*x640)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x641 = -1;
	static int32_t x642 = INT32_MIN;
	int64_t x644 = -12363579511934LL;
	volatile int32_t t90 = -1;

	t90 = (x641<(x642*(x643*x644)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x657 = -1;
	static int8_t x658 = INT8_MAX;
	static volatile uint64_t x659 = UINT64_MAX;
	static uint16_t x660 = 28245U;

	t91 = (x657<(x658*(x659*x660)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x668 = 27LLU;

	t92 = (x665<(x666*(x667*x668)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x669 = UINT16_MAX;
	static int16_t x670 = -1;
	volatile int64_t x671 = -16507101LL;
	static int32_t t93 = -1373;

	t93 = (x669<(x670*(x671*x672)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x689 = INT8_MIN;
	int32_t x691 = INT32_MAX;
	int8_t x692 = -1;
	int32_t t94 = 3219;

	t94 = (x689<(x690*(x691*x692)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x697 = 61U;
	int8_t x698 = INT8_MAX;
	static int8_t x699 = 0;
	int32_t x700 = INT32_MAX;
	static int32_t t95 = -32386478;

	t95 = (x697<(x698*(x699*x700)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x701 = UINT16_MAX;
	int16_t x702 = -1;
	volatile int64_t x703 = -138LL;
	static volatile int32_t t96 = 1;

	t96 = (x701<(x702*(x703*x704)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x705 = UINT32_MAX;
	static int16_t x706 = 363;
	static uint64_t x707 = 279LLU;
	uint64_t x708 = UINT64_MAX;
	int32_t t97 = 15290;

	t97 = (x705<(x706*(x707*x708)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x709 = 252U;
	uint16_t x711 = UINT16_MAX;
	int8_t x712 = -18;
	volatile int32_t t98 = 61762210;

	t98 = (x709<(x710*(x711*x712)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x715 = -1;
	int32_t x716 = 707313012;
	static volatile int32_t t99 = -353;

	t99 = (x713<(x714*(x715*x716)));

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

