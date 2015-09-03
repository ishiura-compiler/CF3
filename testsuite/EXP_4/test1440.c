#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 1656U;
volatile int32_t t0 = 1588;
static int32_t x33 = INT32_MIN;
static int16_t x39 = INT16_MIN;
static volatile int32_t t4 = 7;
int16_t x41 = -14804;
static uint32_t x44 = 4U;
volatile uint16_t x46 = 197U;
int64_t x47 = 148867144489174421LL;
volatile int32_t t6 = 97948992;
static volatile uint16_t x51 = 14127U;
static int16_t x55 = 3293;
uint16_t x58 = 132U;
volatile uint16_t x61 = UINT16_MAX;
volatile uint64_t x63 = UINT64_MAX;
int32_t t10 = 99;
int64_t x65 = INT64_MIN;
int32_t t11 = 1865;
static uint32_t x77 = 2U;
int64_t x80 = INT64_MAX;
uint16_t x103 = 3U;
volatile int64_t x112 = INT64_MAX;
uint16_t x114 = 5586U;
static uint8_t x131 = 24U;
volatile int32_t t21 = -117598528;
volatile int16_t x171 = INT16_MAX;
static int64_t x182 = 112314778472LL;
static int16_t x183 = INT16_MAX;
int8_t x194 = INT8_MAX;
volatile int32_t t26 = -236325526;
int32_t x210 = 2;
uint32_t x213 = 225050U;
uint16_t x214 = 0U;
static int16_t x224 = -1;
int8_t x227 = INT8_MIN;
volatile int32_t t33 = -58329;
uint8_t x285 = 108U;
volatile int32_t x287 = INT32_MIN;
uint32_t x289 = UINT32_MAX;
static int32_t x292 = -1;
int32_t t35 = 232794911;
uint16_t x298 = 29U;
static int32_t x314 = 23393416;
int16_t x319 = 137;
int64_t x320 = 42202LL;
static uint8_t x345 = UINT8_MAX;
int16_t x347 = 472;
int8_t x358 = INT8_MAX;
int64_t x386 = INT64_MAX;
int32_t x395 = 13;
int8_t x396 = -50;
uint32_t x409 = UINT32_MAX;
int8_t x439 = INT8_MIN;
int32_t t51 = -12;
volatile int16_t x454 = INT16_MAX;
uint32_t x473 = 5211090U;
volatile int32_t x479 = INT32_MIN;
int32_t x488 = -1;
uint32_t x489 = 119U;
uint8_t x494 = 2U;
static int32_t t61 = -456861;
uint64_t x506 = 13870LLU;
uint32_t x517 = 70728242U;
int32_t x519 = INT32_MIN;
int8_t x520 = INT8_MAX;
uint8_t x522 = 39U;
uint64_t x528 = UINT64_MAX;
int32_t t68 = -906;
int64_t x542 = 65667048LL;
uint64_t x553 = UINT64_MAX;
int64_t x555 = INT64_MIN;
int32_t x556 = INT32_MIN;
uint16_t x575 = 3U;
int64_t x581 = -41221734LL;
static volatile int32_t x583 = INT32_MAX;
int32_t x586 = INT32_MAX;
int16_t x595 = 1991;
static uint32_t x596 = 3324972U;
volatile int32_t x602 = 918537;
volatile int32_t t77 = -50;
uint32_t x611 = UINT32_MAX;
volatile int32_t t78 = 649;
volatile int32_t t79 = 2;
static int64_t x617 = 133586057771678042LL;
uint32_t x625 = UINT32_MAX;
int32_t x627 = INT32_MAX;
volatile int32_t t82 = 41302748;
uint8_t x647 = 2U;
int8_t x648 = -3;
volatile int32_t t85 = 110;
volatile uint16_t x659 = UINT16_MAX;
static uint8_t x674 = UINT8_MAX;
uint64_t x676 = 20233091LLU;
volatile int32_t t90 = 379;
int64_t x687 = -709467664870177659LL;
volatile int32_t x703 = -1;
int8_t x712 = INT8_MIN;
int8_t x726 = INT8_MAX;
int16_t x730 = 5996;
int32_t t96 = 939904054;
static int64_t x739 = -1LL;
int32_t t98 = 213;
uint32_t x742 = 12729845U;


void f0(void) {
	int16_t x2 = 2;
	int8_t x3 = INT8_MIN;
	static uint32_t x4 = 60718U;

	t0 = (x1<=(x2>>(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = INT64_MAX;
	volatile int64_t x7 = 2253LL;
	int64_t x8 = INT64_MIN;
	int32_t t1 = -40552;

	t1 = (x5<=(x6>>(x7<x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x29 = INT8_MAX;
	uint64_t x30 = UINT64_MAX;
	volatile uint16_t x31 = UINT16_MAX;
	int32_t x32 = 0;
	volatile int32_t t2 = -68;

	t2 = (x29<=(x30>>(x31<x32)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x34 = 87813;
	int32_t x35 = 38;
	uint64_t x36 = 8554901704LLU;
	volatile int32_t t3 = -3;

	t3 = (x33<=(x34>>(x35<x36)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x37 = INT8_MIN;
	uint32_t x38 = UINT32_MAX;
	int16_t x40 = -1;

	t4 = (x37<=(x38>>(x39<x40)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x42 = UINT64_MAX;
	uint32_t x43 = 219379U;
	static volatile int32_t t5 = -292449183;

	t5 = (x41<=(x42>>(x43<x44)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x45 = INT8_MAX;
	volatile int64_t x48 = -1LL;

	t6 = (x45<=(x46>>(x47<x48)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x49 = UINT8_MAX;
	uint32_t x50 = UINT32_MAX;
	int32_t x52 = INT32_MAX;
	int32_t t7 = -2520;

	t7 = (x49<=(x50>>(x51<x52)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x53 = UINT16_MAX;
	uint8_t x54 = 110U;
	uint32_t x56 = 225814U;
	int32_t t8 = -4173;

	t8 = (x53<=(x54>>(x55<x56)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x57 = -204564679LL;
	int16_t x59 = INT16_MAX;
	volatile int64_t x60 = -1LL;
	volatile int32_t t9 = -100239271;

	t9 = (x57<=(x58>>(x59<x60)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x62 = INT32_MAX;
	static int64_t x64 = INT64_MIN;

	t10 = (x61<=(x62>>(x63<x64)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x66 = UINT32_MAX;
	volatile int32_t x67 = 232064;
	int64_t x68 = INT64_MIN;

	t11 = (x65<=(x66>>(x67<x68)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x78 = 345;
	static uint8_t x79 = 10U;
	int32_t t12 = 22098330;

	t12 = (x77<=(x78>>(x79<x80)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x89 = 3973881376LLU;
	uint16_t x90 = 36U;
	int16_t x91 = 3709;
	int8_t x92 = INT8_MAX;
	volatile int32_t t13 = 21657;

	t13 = (x89<=(x90>>(x91<x92)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x97 = UINT8_MAX;
	uint64_t x98 = 5187446148LLU;
	int32_t x99 = INT32_MAX;
	uint32_t x100 = 1738U;
	int32_t t14 = 10228082;

	t14 = (x97<=(x98>>(x99<x100)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x101 = 426470544758LL;
	volatile int16_t x102 = INT16_MAX;
	volatile int8_t x104 = -7;
	volatile int32_t t15 = -123909;

	t15 = (x101<=(x102>>(x103<x104)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x105 = INT16_MIN;
	uint32_t x106 = UINT32_MAX;
	int16_t x107 = INT16_MIN;
	int16_t x108 = -31;
	int32_t t16 = -4793;

	t16 = (x105<=(x106>>(x107<x108)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x109 = -1;
	int16_t x110 = 3540;
	static int8_t x111 = -1;
	volatile int32_t t17 = 12338583;

	t17 = (x109<=(x110>>(x111<x112)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x113 = 1180332;
	uint8_t x115 = UINT8_MAX;
	int8_t x116 = INT8_MAX;
	static volatile int32_t t18 = -78;

	t18 = (x113<=(x114>>(x115<x116)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x129 = UINT64_MAX;
	volatile uint8_t x130 = UINT8_MAX;
	static volatile int32_t x132 = INT32_MIN;
	volatile int32_t t19 = 33;

	t19 = (x129<=(x130>>(x131<x132)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x133 = INT16_MIN;
	uint8_t x134 = 1U;
	uint16_t x135 = 16195U;
	int32_t x136 = -1;
	int32_t t20 = -21897092;

	t20 = (x133<=(x134>>(x135<x136)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x149 = INT64_MIN;
	static uint8_t x150 = 1U;
	int64_t x151 = INT64_MAX;
	int64_t x152 = INT64_MIN;

	t21 = (x149<=(x150>>(x151<x152)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x169 = UINT16_MAX;
	int16_t x170 = INT16_MAX;
	static int16_t x172 = -1;
	volatile int32_t t22 = 53;

	t22 = (x169<=(x170>>(x171<x172)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x181 = 2701;
	int32_t x184 = 50038153;
	int32_t t23 = -77;

	t23 = (x181<=(x182>>(x183<x184)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x185 = 98U;
	uint8_t x186 = 1U;
	volatile int16_t x187 = INT16_MIN;
	volatile uint8_t x188 = UINT8_MAX;
	int32_t t24 = 1;

	t24 = (x185<=(x186>>(x187<x188)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x193 = 23U;
	volatile int8_t x195 = -1;
	int16_t x196 = INT16_MIN;
	int32_t t25 = -48037;

	t25 = (x193<=(x194>>(x195<x196)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x201 = INT8_MAX;
	int16_t x202 = INT16_MAX;
	static volatile int8_t x203 = -1;
	int64_t x204 = INT64_MIN;

	t26 = (x201<=(x202>>(x203<x204)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x209 = UINT8_MAX;
	uint16_t x211 = 4U;
	static int64_t x212 = -1LL;
	volatile int32_t t27 = 17674383;

	t27 = (x209<=(x210>>(x211<x212)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x215 = -1;
	static int8_t x216 = INT8_MIN;
	static int32_t t28 = -7239;

	t28 = (x213<=(x214>>(x215<x216)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x221 = INT64_MIN;
	static uint8_t x222 = 9U;
	uint32_t x223 = 891921559U;
	volatile int32_t t29 = -19;

	t29 = (x221<=(x222>>(x223<x224)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x225 = 102U;
	uint8_t x226 = 5U;
	int16_t x228 = -76;
	int32_t t30 = -65;

	t30 = (x225<=(x226>>(x227<x228)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x237 = 30U;
	uint64_t x238 = 14055797LLU;
	int32_t x239 = INT32_MIN;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t31 = -654501424;

	t31 = (x237<=(x238>>(x239<x240)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x245 = 28154736LLU;
	int8_t x246 = INT8_MAX;
	static int64_t x247 = -1LL;
	int16_t x248 = -3770;
	int32_t t32 = 29168;

	t32 = (x245<=(x246>>(x247<x248)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x261 = -1846703LL;
	uint32_t x262 = 15744008U;
	volatile int64_t x263 = -25355231LL;
	uint16_t x264 = 1186U;

	t33 = (x261<=(x262>>(x263<x264)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x286 = 17913826U;
	uint16_t x288 = UINT16_MAX;
	int32_t t34 = 0;

	t34 = (x285<=(x286>>(x287<x288)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x290 = 74233129U;
	static uint8_t x291 = 29U;

	t35 = (x289<=(x290>>(x291<x292)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x297 = -1;
	int16_t x299 = -1;
	int16_t x300 = -1;
	int32_t t36 = 944827;

	t36 = (x297<=(x298>>(x299<x300)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x305 = 10U;
	static uint64_t x306 = 43438584081648984LLU;
	int32_t x307 = INT32_MAX;
	static int8_t x308 = -10;
	int32_t t37 = 1817498;

	t37 = (x305<=(x306>>(x307<x308)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x309 = INT64_MIN;
	uint16_t x310 = UINT16_MAX;
	int16_t x311 = -14922;
	int8_t x312 = INT8_MAX;
	static int32_t t38 = 36;

	t38 = (x309<=(x310>>(x311<x312)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x313 = INT64_MIN;
	uint32_t x315 = UINT32_MAX;
	int32_t x316 = 2108155;
	volatile int32_t t39 = -1428;

	t39 = (x313<=(x314>>(x315<x316)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x317 = 497733;
	uint8_t x318 = 14U;
	volatile int32_t t40 = -41;

	t40 = (x317<=(x318>>(x319<x320)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x337 = 29U;
	int64_t x338 = 3978626491LL;
	static volatile int64_t x339 = -1LL;
	uint32_t x340 = 721236U;
	static int32_t t41 = -7;

	t41 = (x337<=(x338>>(x339<x340)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x346 = UINT8_MAX;
	uint64_t x348 = 89103330341360LLU;
	static volatile int32_t t42 = 56101530;

	t42 = (x345<=(x346>>(x347<x348)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x357 = INT64_MIN;
	static int64_t x359 = INT64_MIN;
	uint32_t x360 = 461943U;
	int32_t t43 = -16522;

	t43 = (x357<=(x358>>(x359<x360)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x373 = INT64_MAX;
	static uint8_t x374 = 0U;
	uint16_t x375 = 23U;
	int16_t x376 = -1;
	static int32_t t44 = 4055932;

	t44 = (x373<=(x374>>(x375<x376)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x381 = UINT64_MAX;
	int32_t x382 = INT32_MAX;
	uint8_t x383 = 1U;
	static volatile int32_t x384 = -1;
	volatile int32_t t45 = -9722903;

	t45 = (x381<=(x382>>(x383<x384)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x385 = INT16_MIN;
	uint8_t x387 = UINT8_MAX;
	int64_t x388 = 3081697LL;
	volatile int32_t t46 = 0;

	t46 = (x385<=(x386>>(x387<x388)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x393 = 12576335;
	int8_t x394 = 56;
	volatile int32_t t47 = -14;

	t47 = (x393<=(x394>>(x395<x396)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x410 = 2;
	volatile int16_t x411 = INT16_MIN;
	int16_t x412 = INT16_MIN;
	int32_t t48 = -8299790;

	t48 = (x409<=(x410>>(x411<x412)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x413 = INT16_MIN;
	static uint8_t x414 = 54U;
	int16_t x415 = 1;
	uint8_t x416 = 43U;
	volatile int32_t t49 = -3;

	t49 = (x413<=(x414>>(x415<x416)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x421 = INT8_MIN;
	uint8_t x422 = 2U;
	uint64_t x423 = 485871623869551LLU;
	static int8_t x424 = INT8_MIN;
	volatile int32_t t50 = -1024465713;

	t50 = (x421<=(x422>>(x423<x424)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x437 = 26U;
	volatile uint8_t x438 = 69U;
	uint32_t x440 = 4785U;

	t51 = (x437<=(x438>>(x439<x440)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x441 = -1;
	uint32_t x442 = 6792239U;
	static int8_t x443 = 7;
	volatile int8_t x444 = 0;
	int32_t t52 = 52047;

	t52 = (x441<=(x442>>(x443<x444)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x449 = 115235U;
	int16_t x450 = INT16_MAX;
	static volatile int16_t x451 = -1;
	volatile int32_t x452 = INT32_MIN;
	volatile int32_t t53 = 10113;

	t53 = (x449<=(x450>>(x451<x452)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x453 = INT16_MIN;
	static int32_t x455 = INT32_MIN;
	int64_t x456 = INT64_MAX;
	int32_t t54 = -1;

	t54 = (x453<=(x454>>(x455<x456)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x469 = 8758877;
	uint16_t x470 = UINT16_MAX;
	int8_t x471 = 1;
	volatile uint32_t x472 = 214U;
	static int32_t t55 = 14;

	t55 = (x469<=(x470>>(x471<x472)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x474 = 1;
	volatile int32_t x475 = INT32_MIN;
	volatile uint64_t x476 = 119003937566755358LLU;
	int32_t t56 = 447066;

	t56 = (x473<=(x474>>(x475<x476)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x477 = -1224084910625785LL;
	volatile uint8_t x478 = UINT8_MAX;
	uint64_t x480 = UINT64_MAX;
	volatile int32_t t57 = 77589;

	t57 = (x477<=(x478>>(x479<x480)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x485 = INT8_MIN;
	volatile uint16_t x486 = 118U;
	volatile uint16_t x487 = UINT16_MAX;
	volatile int32_t t58 = -642;

	t58 = (x485<=(x486>>(x487<x488)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x490 = INT8_MAX;
	int8_t x491 = 23;
	int8_t x492 = -1;
	volatile int32_t t59 = 160;

	t59 = (x489<=(x490>>(x491<x492)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x493 = 2695708;
	volatile uint16_t x495 = UINT16_MAX;
	static int8_t x496 = -2;
	volatile int32_t t60 = -32799331;

	t60 = (x493<=(x494>>(x495<x496)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x501 = -1;
	uint64_t x502 = 208014LLU;
	uint16_t x503 = UINT16_MAX;
	static int32_t x504 = -54791325;

	t61 = (x501<=(x502>>(x503<x504)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x505 = 0U;
	uint16_t x507 = 9022U;
	int8_t x508 = 12;
	volatile int32_t t62 = -13531175;

	t62 = (x505<=(x506>>(x507<x508)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x513 = -7151LL;
	int32_t x514 = 50331980;
	uint32_t x515 = 998291U;
	static uint8_t x516 = 36U;
	volatile int32_t t63 = 41003745;

	t63 = (x513<=(x514>>(x515<x516)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x518 = UINT32_MAX;
	static int32_t t64 = 428739;

	t64 = (x517<=(x518>>(x519<x520)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x521 = UINT64_MAX;
	uint32_t x523 = 21312U;
	volatile int8_t x524 = INT8_MIN;
	static int32_t t65 = -1494;

	t65 = (x521<=(x522>>(x523<x524)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x525 = INT16_MIN;
	uint8_t x526 = 4U;
	int16_t x527 = INT16_MIN;
	static int32_t t66 = -2707;

	t66 = (x525<=(x526>>(x527<x528)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x529 = 125LLU;
	static uint16_t x530 = 10551U;
	volatile int64_t x531 = -55588777967222089LL;
	static int8_t x532 = INT8_MAX;
	int32_t t67 = -1789242;

	t67 = (x529<=(x530>>(x531<x532)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x533 = UINT8_MAX;
	static uint64_t x534 = UINT64_MAX;
	int64_t x535 = -1LL;
	int32_t x536 = -1;

	t68 = (x533<=(x534>>(x535<x536)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x541 = INT64_MIN;
	int64_t x543 = -1LL;
	int8_t x544 = INT8_MIN;
	int32_t t69 = 48740493;

	t69 = (x541<=(x542>>(x543<x544)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x554 = UINT32_MAX;
	int32_t t70 = 493005863;

	t70 = (x553<=(x554>>(x555<x556)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x561 = INT64_MAX;
	uint64_t x562 = 1LLU;
	int16_t x563 = 43;
	volatile int16_t x564 = INT16_MIN;
	volatile int32_t t71 = 6622595;

	t71 = (x561<=(x562>>(x563<x564)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x565 = UINT16_MAX;
	uint16_t x566 = 621U;
	volatile int32_t x567 = INT32_MAX;
	int8_t x568 = 1;
	int32_t t72 = 8373;

	t72 = (x565<=(x566>>(x567<x568)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x573 = INT32_MIN;
	uint8_t x574 = UINT8_MAX;
	uint8_t x576 = UINT8_MAX;
	int32_t t73 = -368500;

	t73 = (x573<=(x574>>(x575<x576)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x582 = 247U;
	int8_t x584 = INT8_MIN;
	volatile int32_t t74 = -27518;

	t74 = (x581<=(x582>>(x583<x584)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x585 = 15U;
	uint16_t x587 = 3U;
	uint32_t x588 = UINT32_MAX;
	volatile int32_t t75 = 9443734;

	t75 = (x585<=(x586>>(x587<x588)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x593 = -1;
	uint64_t x594 = 49462LLU;
	volatile int32_t t76 = 35;

	t76 = (x593<=(x594>>(x595<x596)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x601 = -737329479LL;
	int8_t x603 = -21;
	uint64_t x604 = UINT64_MAX;

	t77 = (x601<=(x602>>(x603<x604)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x609 = INT16_MIN;
	int64_t x610 = 4687551276110999LL;
	int8_t x612 = INT8_MAX;

	t78 = (x609<=(x610>>(x611<x612)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x613 = INT64_MIN;
	int32_t x614 = 105645;
	uint32_t x615 = UINT32_MAX;
	int32_t x616 = INT32_MIN;

	t79 = (x613<=(x614>>(x615<x616)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x618 = 15366991973849LLU;
	static int16_t x619 = -4546;
	volatile int8_t x620 = -1;
	volatile int32_t t80 = -569448;

	t80 = (x617<=(x618>>(x619<x620)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x626 = 131901U;
	int8_t x628 = -6;
	volatile int32_t t81 = 124498;

	t81 = (x625<=(x626>>(x627<x628)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x629 = UINT64_MAX;
	int32_t x630 = 5619754;
	int8_t x631 = INT8_MAX;
	volatile int16_t x632 = INT16_MAX;

	t82 = (x629<=(x630>>(x631<x632)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x633 = INT16_MAX;
	uint32_t x634 = 86U;
	int32_t x635 = INT32_MIN;
	static uint8_t x636 = UINT8_MAX;
	volatile int32_t t83 = -4090;

	t83 = (x633<=(x634>>(x635<x636)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x645 = 86LLU;
	static uint8_t x646 = 5U;
	int32_t t84 = 7;

	t84 = (x645<=(x646>>(x647<x648)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x649 = INT8_MIN;
	int32_t x650 = INT32_MAX;
	int64_t x651 = INT64_MAX;
	int16_t x652 = INT16_MIN;

	t85 = (x649<=(x650>>(x651<x652)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x657 = UINT16_MAX;
	int8_t x658 = 0;
	volatile int64_t x660 = -55911453LL;
	volatile int32_t t86 = 7223700;

	t86 = (x657<=(x658>>(x659<x660)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x665 = 0;
	uint8_t x666 = UINT8_MAX;
	int16_t x667 = INT16_MIN;
	int32_t x668 = -1;
	static int32_t t87 = 1;

	t87 = (x665<=(x666>>(x667<x668)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x669 = 0;
	int64_t x670 = 2100382560123341327LL;
	int32_t x671 = INT32_MAX;
	uint8_t x672 = 59U;
	static int32_t t88 = 355179;

	t88 = (x669<=(x670>>(x671<x672)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x673 = INT32_MAX;
	uint8_t x675 = 85U;
	int32_t t89 = -54869462;

	t89 = (x673<=(x674>>(x675<x676)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x677 = INT64_MIN;
	int32_t x678 = 104093605;
	static int32_t x679 = -1;
	static int32_t x680 = INT32_MIN;

	t90 = (x677<=(x678>>(x679<x680)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x685 = 35U;
	uint16_t x686 = UINT16_MAX;
	uint16_t x688 = 7200U;
	volatile int32_t t91 = 50922573;

	t91 = (x685<=(x686>>(x687<x688)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x693 = -8169;
	uint8_t x694 = UINT8_MAX;
	int8_t x695 = INT8_MAX;
	volatile int32_t x696 = -1;
	int32_t t92 = 20525;

	t92 = (x693<=(x694>>(x695<x696)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x701 = INT8_MAX;
	uint16_t x702 = 1U;
	int32_t x704 = INT32_MAX;
	int32_t t93 = 47;

	t93 = (x701<=(x702>>(x703<x704)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x709 = 22LL;
	uint64_t x710 = 2842907145982824860LLU;
	int16_t x711 = 1;
	volatile int32_t t94 = 511702921;

	t94 = (x709<=(x710>>(x711<x712)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x725 = 18U;
	int8_t x727 = -1;
	int64_t x728 = INT64_MIN;
	volatile int32_t t95 = 11;

	t95 = (x725<=(x726>>(x727<x728)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x729 = 2130856637U;
	static int32_t x731 = -164;
	uint8_t x732 = 9U;

	t96 = (x729<=(x730>>(x731<x732)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x733 = UINT16_MAX;
	uint8_t x734 = 0U;
	volatile int8_t x735 = -1;
	uint16_t x736 = 2726U;
	volatile int32_t t97 = 8505805;

	t97 = (x733<=(x734>>(x735<x736)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x737 = 5296U;
	int64_t x738 = 1LL;
	uint16_t x740 = 27U;

	t98 = (x737<=(x738>>(x739<x740)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x741 = 79LLU;
	static volatile int8_t x743 = INT8_MAX;
	volatile int64_t x744 = INT64_MIN;
	volatile int32_t t99 = 1;

	t99 = (x741<=(x742>>(x743<x744)));

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

