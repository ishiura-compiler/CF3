#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = INT8_MAX;
volatile int32_t t2 = -316;
int64_t x30 = 6LL;
uint8_t x38 = 3U;
static volatile uint8_t x51 = 1U;
volatile int64_t x52 = INT64_MAX;
int8_t x54 = INT8_MAX;
uint16_t x60 = UINT16_MAX;
int32_t t9 = -135873195;
uint64_t x63 = 381825373202313885LLU;
uint8_t x66 = 114U;
volatile int32_t t11 = 72;
uint64_t x70 = 131132LLU;
int16_t x71 = 720;
int32_t t12 = -499;
int16_t x86 = INT16_MAX;
volatile int32_t x88 = INT32_MIN;
static uint16_t x150 = 124U;
static int64_t x153 = -1LL;
int32_t t20 = -66525;
static int16_t x168 = INT16_MIN;
int8_t x176 = -1;
int32_t x185 = INT32_MIN;
int32_t x187 = INT32_MAX;
int8_t x189 = INT8_MAX;
int16_t x191 = 435;
uint64_t x206 = 1LLU;
volatile int64_t x211 = -1LL;
int32_t x212 = INT32_MIN;
static uint64_t x234 = 3703617104478260418LLU;
static int32_t t34 = 17477299;
int16_t x248 = INT16_MIN;
uint64_t x259 = 81394LLU;
int32_t x260 = INT32_MAX;
int16_t x262 = 2804;
uint16_t x265 = 668U;
int16_t x269 = -7147;
uint32_t x279 = UINT32_MAX;
int32_t x290 = 40637;
int32_t x295 = 0;
uint32_t x296 = 7035707U;
static int16_t x309 = INT16_MAX;
int32_t x310 = 45972175;
int32_t t45 = -74;
static int32_t x317 = INT32_MIN;
volatile int32_t x319 = 4;
static int32_t t46 = -188199;
static int8_t x357 = INT8_MAX;
int32_t t49 = -11536478;
volatile int32_t t50 = 2012499;
volatile uint8_t x366 = 49U;
int32_t t51 = 23;
int32_t t52 = 705;
int32_t x374 = INT32_MAX;
int16_t x375 = -1;
uint16_t x386 = UINT16_MAX;
uint16_t x388 = 101U;
uint8_t x393 = 127U;
volatile int16_t x399 = INT16_MIN;
volatile int32_t x408 = -1;
int32_t x422 = 208537195;
int8_t x427 = INT8_MAX;
int32_t t63 = 6;
static int16_t x434 = 119;
uint8_t x447 = UINT8_MAX;
uint8_t x448 = UINT8_MAX;
uint64_t x459 = 25269264LLU;
uint8_t x460 = 0U;
int32_t t66 = 59916801;
int32_t x483 = INT32_MIN;
static int16_t x485 = -200;
int64_t x486 = INT64_MAX;
volatile int32_t t69 = -1770336;
int64_t x489 = INT64_MAX;
int8_t x491 = INT8_MIN;
volatile int32_t t71 = 246130;
volatile int32_t t72 = 0;
uint32_t x526 = 91U;
uint16_t x531 = UINT16_MAX;
int8_t x533 = INT8_MIN;
volatile uint64_t x534 = UINT64_MAX;
uint16_t x535 = UINT16_MAX;
uint64_t x538 = UINT64_MAX;
int32_t x571 = INT32_MAX;
volatile uint16_t x572 = UINT16_MAX;
static volatile int32_t t79 = 17;
int8_t x589 = INT8_MIN;
uint16_t x678 = 0U;
static uint64_t x709 = UINT64_MAX;
uint16_t x710 = UINT16_MAX;
int8_t x730 = 36;
uint32_t x735 = 15289037U;
volatile int32_t t91 = 20;
static int32_t x748 = INT32_MIN;
int16_t x784 = -1;
volatile int16_t x801 = 548;
uint64_t x802 = 3469069821557LLU;
uint16_t x806 = 176U;
int16_t x809 = -1;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int16_t x2 = 196;
	uint16_t x3 = 462U;
	volatile int32_t t0 = -1;

	t0 = (x1<=(x2<<(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x17 = -391;
	volatile uint32_t x18 = 60956U;
	volatile uint16_t x19 = 11U;
	int64_t x20 = -1LL;
	int32_t t1 = -69629;

	t1 = (x17<=(x18<<(x19<=x20)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x25 = -1LL;
	uint8_t x26 = UINT8_MAX;
	static int32_t x27 = 4;
	volatile uint8_t x28 = UINT8_MAX;

	t2 = (x25<=(x26<<(x27<=x28)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x29 = -1;
	volatile int64_t x31 = 30183844LL;
	int8_t x32 = INT8_MIN;
	static int32_t t3 = -34;

	t3 = (x29<=(x30<<(x31<=x32)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x37 = -1;
	static int8_t x39 = 12;
	static int64_t x40 = INT64_MIN;
	int32_t t4 = -32190;

	t4 = (x37<=(x38<<(x39<=x40)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x41 = -1LL;
	uint32_t x42 = 11U;
	volatile int8_t x43 = INT8_MIN;
	volatile int8_t x44 = INT8_MIN;
	volatile int32_t t5 = 1;

	t5 = (x41<=(x42<<(x43<=x44)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x45 = 1521285315U;
	volatile uint16_t x46 = 12U;
	int16_t x47 = -1533;
	static int32_t x48 = 50719190;
	int32_t t6 = 19296;

	t6 = (x45<=(x46<<(x47<=x48)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x49 = 1U;
	volatile int8_t x50 = INT8_MAX;
	static volatile int32_t t7 = 10;

	t7 = (x49<=(x50<<(x51<=x52)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x53 = INT16_MIN;
	static int32_t x55 = 0;
	static uint32_t x56 = 498491316U;
	volatile int32_t t8 = -1963026;

	t8 = (x53<=(x54<<(x55<=x56)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = 1430117982010942LL;
	int16_t x58 = 0;
	int16_t x59 = INT16_MIN;

	t9 = (x57<=(x58<<(x59<=x60)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x61 = 1790U;
	uint64_t x62 = 12287144776LLU;
	uint32_t x64 = 6U;
	static int32_t t10 = -1542298;

	t10 = (x61<=(x62<<(x63<=x64)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x65 = 1247132LL;
	int64_t x67 = INT64_MIN;
	uint16_t x68 = UINT16_MAX;

	t11 = (x65<=(x66<<(x67<=x68)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = 133;
	int64_t x72 = INT64_MIN;

	t12 = (x69<=(x70<<(x71<=x72)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x81 = -135544951LL;
	int32_t x82 = INT32_MAX;
	int64_t x83 = INT64_MAX;
	uint16_t x84 = 2086U;
	static int32_t t13 = 680;

	t13 = (x81<=(x82<<(x83<=x84)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x85 = INT32_MAX;
	int16_t x87 = INT16_MAX;
	int32_t t14 = 1;

	t14 = (x85<=(x86<<(x87<=x88)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x89 = -1;
	static volatile uint8_t x90 = 0U;
	int8_t x91 = -11;
	static int32_t x92 = INT32_MIN;
	int32_t t15 = -128713;

	t15 = (x89<=(x90<<(x91<=x92)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x113 = INT8_MAX;
	uint8_t x114 = 63U;
	int16_t x115 = 12772;
	static int8_t x116 = -1;
	volatile int32_t t16 = 9239679;

	t16 = (x113<=(x114<<(x115<=x116)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x121 = 5U;
	uint64_t x122 = UINT64_MAX;
	uint32_t x123 = 22074787U;
	volatile int32_t x124 = -1;
	static volatile int32_t t17 = 46174141;

	t17 = (x121<=(x122<<(x123<=x124)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x141 = INT8_MAX;
	uint16_t x142 = 63U;
	uint64_t x143 = 7851859895692LLU;
	static int16_t x144 = INT16_MIN;
	static int32_t t18 = 1011462;

	t18 = (x141<=(x142<<(x143<=x144)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x149 = 214U;
	int32_t x151 = INT32_MIN;
	uint16_t x152 = 912U;
	int32_t t19 = -2339424;

	t19 = (x149<=(x150<<(x151<=x152)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x154 = UINT32_MAX;
	volatile int16_t x155 = -1;
	int64_t x156 = -16388503LL;

	t20 = (x153<=(x154<<(x155<=x156)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x157 = INT16_MIN;
	volatile uint8_t x158 = 24U;
	static uint32_t x159 = 7887486U;
	uint16_t x160 = 32U;
	volatile int32_t t21 = 1;

	t21 = (x157<=(x158<<(x159<=x160)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x165 = -1;
	int8_t x166 = 1;
	int64_t x167 = 934967737LL;
	static int32_t t22 = 0;

	t22 = (x165<=(x166<<(x167<=x168)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x173 = INT32_MAX;
	static uint8_t x174 = 86U;
	volatile int64_t x175 = INT64_MIN;
	int32_t t23 = 472147;

	t23 = (x173<=(x174<<(x175<=x176)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x186 = 61196344156463LL;
	int32_t x188 = 3;
	static volatile int32_t t24 = -340;

	t24 = (x185<=(x186<<(x187<=x188)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x190 = 12U;
	uint16_t x192 = 548U;
	int32_t t25 = 55;

	t25 = (x189<=(x190<<(x191<=x192)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x193 = 1U;
	uint16_t x194 = 43U;
	int8_t x195 = -1;
	volatile int8_t x196 = -1;
	int32_t t26 = 14;

	t26 = (x193<=(x194<<(x195<=x196)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x205 = 320815138005823392LLU;
	int8_t x207 = 2;
	uint64_t x208 = 769LLU;
	int32_t t27 = 6656848;

	t27 = (x205<=(x206<<(x207<=x208)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x209 = UINT64_MAX;
	volatile uint32_t x210 = UINT32_MAX;
	static volatile int32_t t28 = 46;

	t28 = (x209<=(x210<<(x211<=x212)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x213 = 30100045;
	volatile int8_t x214 = INT8_MAX;
	volatile uint16_t x215 = 3001U;
	uint64_t x216 = 6399727658008LLU;
	volatile int32_t t29 = -1;

	t29 = (x213<=(x214<<(x215<=x216)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x221 = 58LL;
	uint32_t x222 = 395438341U;
	uint8_t x223 = UINT8_MAX;
	volatile int8_t x224 = 4;
	volatile int32_t t30 = 44986912;

	t30 = (x221<=(x222<<(x223<=x224)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x225 = INT16_MAX;
	uint8_t x226 = 20U;
	int16_t x227 = INT16_MIN;
	int64_t x228 = INT64_MAX;
	static int32_t t31 = -3;

	t31 = (x225<=(x226<<(x227<=x228)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x229 = UINT64_MAX;
	uint16_t x230 = 7U;
	int16_t x231 = INT16_MIN;
	int16_t x232 = -1;
	int32_t t32 = -16;

	t32 = (x229<=(x230<<(x231<=x232)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x233 = INT64_MIN;
	uint64_t x235 = 109LLU;
	int8_t x236 = -1;
	volatile int32_t t33 = 12616;

	t33 = (x233<=(x234<<(x235<=x236)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x237 = -190;
	uint64_t x238 = 1283740477092LLU;
	int32_t x239 = INT32_MAX;
	int8_t x240 = INT8_MAX;

	t34 = (x237<=(x238<<(x239<=x240)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x241 = 412U;
	uint64_t x242 = 183956189928LLU;
	uint32_t x243 = 96870521U;
	int32_t x244 = INT32_MIN;
	int32_t t35 = -171;

	t35 = (x241<=(x242<<(x243<=x244)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x245 = INT8_MAX;
	int64_t x246 = 239813LL;
	static uint64_t x247 = 108362542660LLU;
	volatile int32_t t36 = 3;

	t36 = (x245<=(x246<<(x247<=x248)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x257 = -301284736LL;
	int8_t x258 = 1;
	int32_t t37 = 1082776;

	t37 = (x257<=(x258<<(x259<=x260)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x261 = INT32_MIN;
	static int16_t x263 = INT16_MAX;
	static volatile uint32_t x264 = UINT32_MAX;
	volatile int32_t t38 = 49;

	t38 = (x261<=(x262<<(x263<=x264)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x266 = 0;
	int16_t x267 = INT16_MAX;
	static uint16_t x268 = 28057U;
	int32_t t39 = 760301067;

	t39 = (x265<=(x266<<(x267<=x268)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x270 = 37220177;
	volatile int16_t x271 = INT16_MAX;
	volatile uint64_t x272 = 4186034286350LLU;
	int32_t t40 = 0;

	t40 = (x269<=(x270<<(x271<=x272)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x277 = INT8_MIN;
	uint8_t x278 = 6U;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t41 = 119881;

	t41 = (x277<=(x278<<(x279<=x280)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x289 = UINT8_MAX;
	int64_t x291 = 200784LL;
	static int32_t x292 = -112344861;
	volatile int32_t t42 = -129113947;

	t42 = (x289<=(x290<<(x291<=x292)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x293 = INT32_MIN;
	uint8_t x294 = UINT8_MAX;
	volatile int32_t t43 = 31;

	t43 = (x293<=(x294<<(x295<=x296)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x301 = 4LLU;
	int32_t x302 = 319764395;
	uint64_t x303 = 19959327640LLU;
	int64_t x304 = -1LL;
	int32_t t44 = 25;

	t44 = (x301<=(x302<<(x303<=x304)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x311 = -1;
	int16_t x312 = INT16_MIN;

	t45 = (x309<=(x310<<(x311<=x312)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x318 = 22U;
	int32_t x320 = INT32_MIN;

	t46 = (x317<=(x318<<(x319<=x320)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x325 = -1;
	uint16_t x326 = 0U;
	int8_t x327 = -1;
	int32_t x328 = INT32_MIN;
	static int32_t t47 = -1974;

	t47 = (x325<=(x326<<(x327<=x328)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x353 = 4244660U;
	volatile uint16_t x354 = 58U;
	int8_t x355 = 0;
	uint64_t x356 = 1903651791954581450LLU;
	static int32_t t48 = -271042;

	t48 = (x353<=(x354<<(x355<=x356)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x358 = INT64_MAX;
	int8_t x359 = 42;
	static int64_t x360 = INT64_MIN;

	t49 = (x357<=(x358<<(x359<=x360)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x361 = INT64_MAX;
	uint16_t x362 = 2923U;
	int32_t x363 = INT32_MIN;
	volatile int8_t x364 = 1;

	t50 = (x361<=(x362<<(x363<=x364)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x365 = INT16_MIN;
	static uint16_t x367 = UINT16_MAX;
	int32_t x368 = INT32_MAX;

	t51 = (x365<=(x366<<(x367<=x368)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x369 = -1;
	int32_t x370 = 2555458;
	volatile int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MIN;

	t52 = (x369<=(x370<<(x371<=x372)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x373 = -1;
	int16_t x376 = INT16_MIN;
	static int32_t t53 = 4;

	t53 = (x373<=(x374<<(x375<=x376)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x377 = INT64_MIN;
	volatile uint16_t x378 = 2U;
	volatile uint8_t x379 = UINT8_MAX;
	int32_t x380 = 0;
	int32_t t54 = 1987;

	t54 = (x377<=(x378<<(x379<=x380)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x381 = INT8_MAX;
	uint32_t x382 = UINT32_MAX;
	static int32_t x383 = INT32_MAX;
	uint32_t x384 = 3018U;
	volatile int32_t t55 = 1636962;

	t55 = (x381<=(x382<<(x383<=x384)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x385 = -1;
	static int64_t x387 = INT64_MAX;
	volatile int32_t t56 = -485984;

	t56 = (x385<=(x386<<(x387<=x388)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x389 = -1;
	uint32_t x390 = 321U;
	int32_t x391 = 636;
	volatile int16_t x392 = INT16_MAX;
	int32_t t57 = -35793545;

	t57 = (x389<=(x390<<(x391<=x392)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x394 = UINT64_MAX;
	int8_t x395 = -3;
	volatile int8_t x396 = 0;
	volatile int32_t t58 = 1;

	t58 = (x393<=(x394<<(x395<=x396)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x397 = 4066639074075604727LLU;
	static uint8_t x398 = 3U;
	volatile int64_t x400 = INT64_MAX;
	volatile int32_t t59 = -25835415;

	t59 = (x397<=(x398<<(x399<=x400)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x405 = -46;
	static uint32_t x406 = UINT32_MAX;
	static uint8_t x407 = 27U;
	int32_t t60 = -1282;

	t60 = (x405<=(x406<<(x407<=x408)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x409 = INT32_MIN;
	static uint8_t x410 = 0U;
	volatile uint64_t x411 = UINT64_MAX;
	static int32_t x412 = 1323;
	int32_t t61 = -58;

	t61 = (x409<=(x410<<(x411<=x412)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x421 = UINT16_MAX;
	volatile uint64_t x423 = UINT64_MAX;
	int8_t x424 = -1;
	int32_t t62 = 21908482;

	t62 = (x421<=(x422<<(x423<=x424)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x425 = 0U;
	uint64_t x426 = UINT64_MAX;
	int16_t x428 = -3405;

	t63 = (x425<=(x426<<(x427<=x428)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x433 = 1;
	int8_t x435 = -1;
	int64_t x436 = -20271888LL;
	volatile int32_t t64 = 521;

	t64 = (x433<=(x434<<(x435<=x436)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x445 = 506LL;
	uint32_t x446 = 1252447480U;
	static volatile int32_t t65 = 304072072;

	t65 = (x445<=(x446<<(x447<=x448)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x457 = INT64_MIN;
	uint64_t x458 = 9004842417LLU;

	t66 = (x457<=(x458<<(x459<=x460)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x461 = INT32_MAX;
	uint32_t x462 = 1349813U;
	int8_t x463 = INT8_MAX;
	static int64_t x464 = -1LL;
	volatile int32_t t67 = 2781841;

	t67 = (x461<=(x462<<(x463<=x464)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x481 = -2208780184714659LL;
	uint16_t x482 = 2168U;
	int8_t x484 = -1;
	int32_t t68 = 54262;

	t68 = (x481<=(x482<<(x483<=x484)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x487 = -1;
	uint64_t x488 = 116836340345066834LLU;

	t69 = (x485<=(x486<<(x487<=x488)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x490 = INT8_MAX;
	uint8_t x492 = UINT8_MAX;
	static int32_t t70 = -797133;

	t70 = (x489<=(x490<<(x491<=x492)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x493 = 7U;
	uint32_t x494 = 1937326709U;
	int64_t x495 = INT64_MAX;
	int8_t x496 = INT8_MIN;

	t71 = (x493<=(x494<<(x495<=x496)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x505 = UINT16_MAX;
	uint32_t x506 = UINT32_MAX;
	int64_t x507 = INT64_MIN;
	static uint32_t x508 = UINT32_MAX;

	t72 = (x505<=(x506<<(x507<=x508)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x525 = 11U;
	volatile int8_t x527 = -29;
	uint32_t x528 = UINT32_MAX;
	int32_t t73 = 13;

	t73 = (x525<=(x526<<(x527<=x528)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x529 = 608513294375489LL;
	uint32_t x530 = UINT32_MAX;
	static int16_t x532 = 122;
	static volatile int32_t t74 = -2972;

	t74 = (x529<=(x530<<(x531<=x532)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x536 = -60;
	volatile int32_t t75 = 1;

	t75 = (x533<=(x534<<(x535<=x536)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x537 = INT8_MIN;
	int8_t x539 = -1;
	uint16_t x540 = 0U;
	volatile int32_t t76 = -118070795;

	t76 = (x537<=(x538<<(x539<=x540)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x557 = INT8_MAX;
	int16_t x558 = 1;
	static volatile int8_t x559 = 5;
	uint64_t x560 = 8805813783191611LLU;
	volatile int32_t t77 = 1615;

	t77 = (x557<=(x558<<(x559<=x560)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x565 = -542110719943LL;
	volatile int16_t x566 = 693;
	volatile uint32_t x567 = 95450U;
	uint32_t x568 = UINT32_MAX;
	int32_t t78 = 27;

	t78 = (x565<=(x566<<(x567<=x568)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x569 = 3U;
	static volatile int32_t x570 = 185;

	t79 = (x569<=(x570<<(x571<=x572)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x577 = INT8_MIN;
	volatile uint64_t x578 = 10263575197344LLU;
	int8_t x579 = INT8_MAX;
	int32_t x580 = 403366;
	int32_t t80 = 587;

	t80 = (x577<=(x578<<(x579<=x580)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x590 = 6;
	uint16_t x591 = 2U;
	int8_t x592 = INT8_MIN;
	int32_t t81 = 22;

	t81 = (x589<=(x590<<(x591<=x592)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x601 = -1;
	static int64_t x602 = 1122564573LL;
	int32_t x603 = 214510418;
	volatile int32_t x604 = -1;
	static int32_t t82 = -1;

	t82 = (x601<=(x602<<(x603<=x604)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x641 = 496U;
	uint32_t x642 = 195U;
	static int32_t x643 = INT32_MAX;
	static volatile int16_t x644 = 516;
	static int32_t t83 = 29;

	t83 = (x641<=(x642<<(x643<=x644)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x665 = 66U;
	static volatile int64_t x666 = 42390126516LL;
	int16_t x667 = INT16_MAX;
	uint16_t x668 = 136U;
	volatile int32_t t84 = -7873559;

	t84 = (x665<=(x666<<(x667<=x668)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x669 = UINT64_MAX;
	uint16_t x670 = 26U;
	static uint16_t x671 = UINT16_MAX;
	int64_t x672 = -28075415839703LL;
	static volatile int32_t t85 = 232;

	t85 = (x669<=(x670<<(x671<=x672)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x677 = 597475U;
	uint32_t x679 = 0U;
	uint32_t x680 = UINT32_MAX;
	int32_t t86 = -18;

	t86 = (x677<=(x678<<(x679<=x680)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x701 = -1LL;
	int8_t x702 = 0;
	uint64_t x703 = 2833942887LLU;
	volatile uint16_t x704 = 16708U;
	volatile int32_t t87 = -30;

	t87 = (x701<=(x702<<(x703<=x704)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x711 = 1054LLU;
	volatile uint64_t x712 = 1492LLU;
	volatile int32_t t88 = -3;

	t88 = (x709<=(x710<<(x711<=x712)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x721 = 0;
	uint16_t x722 = 2U;
	int8_t x723 = 0;
	volatile uint16_t x724 = 5U;
	volatile int32_t t89 = -926299;

	t89 = (x721<=(x722<<(x723<=x724)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x729 = -1;
	int64_t x731 = -398368531066697LL;
	volatile uint32_t x732 = UINT32_MAX;
	volatile int32_t t90 = -53378935;

	t90 = (x729<=(x730<<(x731<=x732)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x733 = INT8_MIN;
	uint8_t x734 = 1U;
	volatile int8_t x736 = 28;

	t91 = (x733<=(x734<<(x735<=x736)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x737 = -12;
	uint64_t x738 = UINT64_MAX;
	volatile uint16_t x739 = UINT16_MAX;
	volatile uint64_t x740 = 70869777700468558LLU;
	int32_t t92 = -2392214;

	t92 = (x737<=(x738<<(x739<=x740)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x745 = -28;
	int8_t x746 = INT8_MAX;
	static volatile int32_t x747 = INT32_MIN;
	int32_t t93 = -1434574;

	t93 = (x745<=(x746<<(x747<=x748)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x773 = 21782LLU;
	int8_t x774 = INT8_MAX;
	uint16_t x775 = 2013U;
	static uint8_t x776 = 8U;
	int32_t t94 = 66481477;

	t94 = (x773<=(x774<<(x775<=x776)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x777 = 8U;
	uint16_t x778 = 1U;
	int64_t x779 = INT64_MAX;
	uint64_t x780 = UINT64_MAX;
	int32_t t95 = 25;

	t95 = (x777<=(x778<<(x779<=x780)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x781 = 2U;
	volatile uint8_t x782 = UINT8_MAX;
	uint32_t x783 = UINT32_MAX;
	int32_t t96 = 23;

	t96 = (x781<=(x782<<(x783<=x784)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x803 = INT8_MIN;
	int64_t x804 = INT64_MIN;
	static volatile int32_t t97 = -5922;

	t97 = (x801<=(x802<<(x803<=x804)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x805 = INT32_MIN;
	int8_t x807 = INT8_MIN;
	static volatile uint16_t x808 = UINT16_MAX;
	int32_t t98 = -477268335;

	t98 = (x805<=(x806<<(x807<=x808)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x810 = 16636939363778296LL;
	volatile uint8_t x811 = 21U;
	int64_t x812 = 95661LL;
	static int32_t t99 = -312006;

	t99 = (x809<=(x810<<(x811<=x812)));

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

