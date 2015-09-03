#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x25 = -64278LL;
int8_t x34 = INT8_MIN;
int16_t x35 = -1;
uint32_t x42 = 111U;
volatile int16_t x61 = 11;
int32_t t5 = -3;
int16_t x65 = 1;
static volatile int16_t x66 = -1;
volatile uint16_t x73 = 262U;
static int32_t t8 = -12;
int16_t x77 = -1;
int64_t x78 = INT64_MAX;
static volatile int32_t x80 = INT32_MAX;
int16_t x103 = INT16_MAX;
int32_t t13 = 300;
uint64_t x105 = 513014LLU;
int32_t x116 = INT32_MIN;
int32_t x121 = -950265828;
int64_t x124 = -7LL;
volatile int32_t t17 = 7931040;
uint8_t x145 = UINT8_MAX;
int32_t t20 = 1;
uint8_t x173 = 3U;
static volatile int32_t t21 = 1;
static int8_t x191 = INT8_MAX;
int16_t x198 = 59;
int16_t x199 = -117;
static uint16_t x200 = 11267U;
int32_t t24 = 40;
uint64_t x203 = 13966903363336LLU;
int32_t t25 = 7;
static volatile int32_t t26 = -33;
uint32_t x230 = 88823887U;
int32_t x253 = INT32_MAX;
int16_t x255 = 12;
uint32_t x258 = 835975767U;
volatile int8_t x263 = -14;
int16_t x265 = INT16_MAX;
int32_t x266 = -1;
int32_t x268 = INT32_MAX;
volatile int64_t x269 = -510492247313915098LL;
int16_t x271 = 3294;
static int64_t x294 = -1LL;
volatile int32_t t34 = 907;
static int64_t x299 = INT64_MIN;
volatile int32_t t35 = 190;
int8_t x308 = INT8_MIN;
static volatile int32_t t37 = -2;
volatile uint32_t x321 = UINT32_MAX;
uint64_t x324 = 1051985794LLU;
int8_t x338 = INT8_MIN;
static int16_t x341 = -1;
volatile int64_t x342 = INT64_MIN;
int8_t x345 = INT8_MAX;
uint32_t x347 = 3773U;
static int32_t t43 = -404042766;
int32_t x360 = INT32_MAX;
int8_t x366 = -1;
int16_t x368 = INT16_MAX;
int32_t t46 = 682;
volatile int8_t x388 = -1;
static int32_t x415 = INT32_MIN;
static volatile int8_t x417 = INT8_MAX;
uint16_t x419 = UINT16_MAX;
int16_t x425 = -1;
int16_t x426 = INT16_MAX;
int32_t x427 = INT32_MIN;
int8_t x429 = INT8_MIN;
int16_t x431 = INT16_MIN;
int64_t x434 = INT64_MAX;
int16_t x441 = -2429;
int16_t x443 = INT16_MIN;
volatile uint64_t x455 = 425187LLU;
int32_t x459 = INT32_MIN;
int32_t t56 = 801815;
volatile uint8_t x476 = UINT8_MAX;
uint8_t x484 = UINT8_MAX;
int64_t x487 = INT64_MIN;
int32_t x498 = -1;
int16_t x500 = INT16_MAX;
int32_t t61 = -451767824;
static int32_t x536 = 2970107;
volatile int64_t x539 = -982746LL;
int8_t x545 = -1;
static int32_t x547 = INT32_MAX;
static int64_t x563 = -8989930621029025LL;
int8_t x572 = INT8_MAX;
uint32_t x579 = 233615U;
volatile int32_t t69 = 1;
int8_t x592 = 2;
static volatile int32_t t70 = -330;
int32_t t71 = 327659393;
int32_t x619 = -1;
int64_t x620 = 10196393466064LL;
int64_t x627 = -160297285LL;
int64_t x628 = INT64_MAX;
int8_t x630 = INT8_MIN;
int16_t x639 = -21;
int64_t x640 = -1LL;
static uint16_t x652 = 6751U;
static int32_t x672 = 377352;
volatile int32_t t80 = -6298;
static volatile uint64_t x692 = UINT64_MAX;
volatile uint8_t x724 = UINT8_MAX;
int32_t x759 = INT32_MAX;
uint32_t x760 = UINT32_MAX;
int32_t x778 = INT32_MIN;
volatile int32_t t93 = 90754542;
int8_t x781 = 13;
int64_t x783 = -1LL;
uint32_t x818 = UINT32_MAX;
volatile int32_t t97 = 1;
uint8_t x828 = 11U;
int8_t x829 = INT8_MIN;
volatile int32_t t99 = -30550;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	uint64_t x2 = UINT64_MAX;
	static int8_t x3 = INT8_MIN;
	static uint16_t x4 = 5U;
	volatile int32_t t0 = 875;

	t0 = (x1<(x2/(x3<x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x26 = -1;
	volatile int32_t x27 = -3052;
	int8_t x28 = INT8_MIN;
	int32_t t1 = 234;

	t1 = (x25<(x26/(x27<x28)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x33 = -1;
	static int8_t x36 = INT8_MAX;
	int32_t t2 = 195271791;

	t2 = (x33<(x34/(x35<x36)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x37 = -3;
	uint16_t x38 = 720U;
	int32_t x39 = INT32_MIN;
	int8_t x40 = 23;
	volatile int32_t t3 = 0;

	t3 = (x37<(x38/(x39<x40)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x41 = 32322522883032LL;
	int64_t x43 = -1LL;
	int32_t x44 = 3680516;
	int32_t t4 = 27998594;

	t4 = (x41<(x42/(x43<x44)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x62 = INT8_MIN;
	static int8_t x63 = INT8_MIN;
	volatile int32_t x64 = -1;

	t5 = (x61<(x62/(x63<x64)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x67 = -1;
	uint8_t x68 = UINT8_MAX;
	int32_t t6 = -1;

	t6 = (x65<(x66/(x67<x68)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x69 = 13616262;
	uint16_t x70 = UINT16_MAX;
	uint32_t x71 = 61U;
	int8_t x72 = INT8_MAX;
	volatile int32_t t7 = -597;

	t7 = (x69<(x70/(x71<x72)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x74 = 43;
	volatile int32_t x75 = INT32_MIN;
	volatile uint16_t x76 = 23014U;

	t8 = (x73<(x74/(x75<x76)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x79 = -1LL;
	static volatile int32_t t9 = -816464;

	t9 = (x77<(x78/(x79<x80)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x85 = INT64_MIN;
	static int64_t x86 = 2743LL;
	uint32_t x87 = UINT32_MAX;
	static int64_t x88 = INT64_MAX;
	static volatile int32_t t10 = -641;

	t10 = (x85<(x86/(x87<x88)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x93 = INT8_MIN;
	int64_t x94 = -1LL;
	int16_t x95 = 361;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t11 = 1018;

	t11 = (x93<(x94/(x95<x96)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x97 = -1;
	int32_t x98 = INT32_MIN;
	uint32_t x99 = 3939U;
	int16_t x100 = INT16_MIN;
	volatile int32_t t12 = 423381984;

	t12 = (x97<(x98/(x99<x100)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x101 = UINT8_MAX;
	int8_t x102 = INT8_MAX;
	volatile uint16_t x104 = UINT16_MAX;

	t13 = (x101<(x102/(x103<x104)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x106 = 866LLU;
	static uint64_t x107 = 351LLU;
	volatile uint64_t x108 = UINT64_MAX;
	int32_t t14 = -200;

	t14 = (x105<(x106/(x107<x108)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x109 = INT32_MAX;
	uint16_t x110 = UINT16_MAX;
	int64_t x111 = 1LL;
	uint64_t x112 = 2041593931261702331LLU;
	int32_t t15 = -97;

	t15 = (x109<(x110/(x111<x112)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x113 = 960329090;
	int8_t x114 = INT8_MAX;
	uint64_t x115 = 50764401LLU;
	int32_t t16 = -61556;

	t16 = (x113<(x114/(x115<x116)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x122 = 191077736352590LLU;
	static int64_t x123 = -668504384LL;

	t17 = (x121<(x122/(x123<x124)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x129 = 255081613000151LL;
	uint8_t x130 = 4U;
	volatile int32_t x131 = -3481727;
	int32_t x132 = -65734;
	static int32_t t18 = 1332;

	t18 = (x129<(x130/(x131<x132)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x146 = 1;
	int8_t x147 = -1;
	volatile int64_t x148 = 0LL;
	volatile int32_t t19 = 749742685;

	t19 = (x145<(x146/(x147<x148)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x153 = 70U;
	uint32_t x154 = 1498U;
	int32_t x155 = INT32_MIN;
	int32_t x156 = INT32_MAX;

	t20 = (x153<(x154/(x155<x156)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x174 = 54U;
	static volatile uint8_t x175 = 5U;
	uint8_t x176 = 61U;

	t21 = (x173<(x174/(x175<x176)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x181 = INT64_MAX;
	volatile uint16_t x182 = UINT16_MAX;
	int8_t x183 = INT8_MIN;
	static int16_t x184 = 4192;
	volatile int32_t t22 = -932929;

	t22 = (x181<(x182/(x183<x184)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x189 = 1U;
	uint16_t x190 = 2012U;
	volatile uint64_t x192 = 11036LLU;
	volatile int32_t t23 = -4;

	t23 = (x189<(x190/(x191<x192)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x197 = INT64_MAX;

	t24 = (x197<(x198/(x199<x200)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x201 = INT32_MIN;
	static volatile int64_t x202 = 0LL;
	int16_t x204 = INT16_MIN;

	t25 = (x201<(x202/(x203<x204)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x217 = -1;
	volatile int8_t x218 = -1;
	uint64_t x219 = 5096562796162504968LLU;
	volatile uint64_t x220 = UINT64_MAX;

	t26 = (x217<(x218/(x219<x220)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x229 = UINT32_MAX;
	volatile uint64_t x231 = 141846LLU;
	int16_t x232 = INT16_MIN;
	volatile int32_t t27 = 5;

	t27 = (x229<(x230/(x231<x232)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x237 = 233U;
	static uint8_t x238 = UINT8_MAX;
	uint8_t x239 = 13U;
	uint16_t x240 = UINT16_MAX;
	int32_t t28 = -1677204;

	t28 = (x237<(x238/(x239<x240)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x254 = -56151;
	static uint32_t x256 = UINT32_MAX;
	static int32_t t29 = -91748224;

	t29 = (x253<(x254/(x255<x256)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x257 = INT32_MAX;
	static volatile int32_t x259 = -1;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t30 = -1;

	t30 = (x257<(x258/(x259<x260)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x261 = -3;
	volatile uint8_t x262 = 12U;
	int8_t x264 = INT8_MAX;
	volatile int32_t t31 = -208297;

	t31 = (x261<(x262/(x263<x264)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x267 = INT32_MIN;
	static int32_t t32 = -2015;

	t32 = (x265<(x266/(x267<x268)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x270 = 215LL;
	static int32_t x272 = INT32_MAX;
	int32_t t33 = -2;

	t33 = (x269<(x270/(x271<x272)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x293 = 15U;
	uint16_t x295 = 3U;
	uint8_t x296 = 86U;

	t34 = (x293<(x294/(x295<x296)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x297 = 2;
	uint16_t x298 = 1716U;
	int8_t x300 = INT8_MAX;

	t35 = (x297<(x298/(x299<x300)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x305 = 687;
	int64_t x306 = 256865186LL;
	int64_t x307 = INT64_MIN;
	static int32_t t36 = 801;

	t36 = (x305<(x306/(x307<x308)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x317 = 1;
	int16_t x318 = 1;
	static uint32_t x319 = 6753U;
	int16_t x320 = INT16_MIN;

	t37 = (x317<(x318/(x319<x320)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x322 = 43793095LLU;
	static uint16_t x323 = 3006U;
	static volatile int32_t t38 = 11056073;

	t38 = (x321<(x322/(x323<x324)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x333 = INT8_MIN;
	volatile int32_t x334 = INT32_MAX;
	int8_t x335 = -13;
	int32_t x336 = -1;
	int32_t t39 = -35318;

	t39 = (x333<(x334/(x335<x336)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x337 = UINT64_MAX;
	uint8_t x339 = 4U;
	static volatile uint8_t x340 = UINT8_MAX;
	volatile int32_t t40 = -20878;

	t40 = (x337<(x338/(x339<x340)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x343 = INT64_MIN;
	uint16_t x344 = 108U;
	int32_t t41 = -2749;

	t41 = (x341<(x342/(x343<x344)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x346 = 7133377;
	volatile int32_t x348 = -1;
	int32_t t42 = -412370;

	t42 = (x345<(x346/(x347<x348)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x353 = 6U;
	int64_t x354 = INT64_MIN;
	uint16_t x355 = 1492U;
	int32_t x356 = 4261465;

	t43 = (x353<(x354/(x355<x356)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x357 = INT32_MIN;
	volatile int64_t x358 = -1LL;
	int32_t x359 = -91;
	static volatile int32_t t44 = -1202523;

	t44 = (x357<(x358/(x359<x360)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x365 = 2U;
	uint32_t x367 = 124U;
	volatile int32_t t45 = -24655248;

	t45 = (x365<(x366/(x367<x368)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x373 = 2255U;
	volatile int64_t x374 = INT64_MIN;
	static int16_t x375 = 393;
	volatile uint64_t x376 = 87613LLU;

	t46 = (x373<(x374/(x375<x376)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x385 = 105600518236082120LLU;
	volatile int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MIN;
	int32_t t47 = 320966;

	t47 = (x385<(x386/(x387<x388)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x413 = INT16_MAX;
	volatile uint64_t x414 = 2164146734698999720LLU;
	int64_t x416 = -2LL;
	int32_t t48 = 1;

	t48 = (x413<(x414/(x415<x416)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x418 = INT32_MIN;
	int32_t x420 = INT32_MAX;
	volatile int32_t t49 = 203184788;

	t49 = (x417<(x418/(x419<x420)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x428 = INT8_MIN;
	volatile int32_t t50 = -248;

	t50 = (x425<(x426/(x427<x428)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x430 = 947U;
	int16_t x432 = INT16_MAX;
	volatile int32_t t51 = 225;

	t51 = (x429<(x430/(x431<x432)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x433 = 198;
	volatile int8_t x435 = -1;
	int64_t x436 = 9239LL;
	volatile int32_t t52 = 1040919;

	t52 = (x433<(x434/(x435<x436)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x437 = INT64_MIN;
	int8_t x438 = -1;
	static int8_t x439 = 26;
	uint64_t x440 = 15001452161LLU;
	int32_t t53 = 188;

	t53 = (x437<(x438/(x439<x440)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x442 = -802601968;
	static int16_t x444 = INT16_MAX;
	volatile int32_t t54 = -7;

	t54 = (x441<(x442/(x443<x444)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x453 = INT16_MAX;
	int16_t x454 = INT16_MAX;
	uint64_t x456 = 643571756383LLU;
	int32_t t55 = 11965;

	t55 = (x453<(x454/(x455<x456)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x457 = INT8_MIN;
	uint32_t x458 = 1905U;
	int16_t x460 = INT16_MIN;

	t56 = (x457<(x458/(x459<x460)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x469 = -1LL;
	uint32_t x470 = 899063U;
	volatile int64_t x471 = -1LL;
	int8_t x472 = INT8_MAX;
	int32_t t57 = -34;

	t57 = (x469<(x470/(x471<x472)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x473 = -1;
	int8_t x474 = 1;
	volatile int8_t x475 = 3;
	volatile int32_t t58 = 5238;

	t58 = (x473<(x474/(x475<x476)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x481 = -1;
	int8_t x482 = -2;
	int64_t x483 = INT64_MIN;
	int32_t t59 = 107;

	t59 = (x481<(x482/(x483<x484)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x485 = -10;
	volatile int32_t x486 = 450;
	int64_t x488 = -1LL;
	static volatile int32_t t60 = -354939;

	t60 = (x485<(x486/(x487<x488)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x497 = -6LL;
	volatile int32_t x499 = INT32_MIN;

	t61 = (x497<(x498/(x499<x500)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x509 = 10402U;
	static volatile int8_t x510 = INT8_MAX;
	static volatile int16_t x511 = INT16_MIN;
	uint8_t x512 = 2U;
	int32_t t62 = -20;

	t62 = (x509<(x510/(x511<x512)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x533 = INT8_MIN;
	volatile uint8_t x534 = 8U;
	static uint8_t x535 = UINT8_MAX;
	int32_t t63 = -1949880;

	t63 = (x533<(x534/(x535<x536)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x537 = -3359;
	int64_t x538 = INT64_MIN;
	uint16_t x540 = 3U;
	int32_t t64 = 1143;

	t64 = (x537<(x538/(x539<x540)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x546 = -56;
	volatile uint32_t x548 = UINT32_MAX;
	volatile int32_t t65 = -41;

	t65 = (x545<(x546/(x547<x548)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x549 = INT16_MAX;
	volatile uint32_t x550 = UINT32_MAX;
	int64_t x551 = -1LL;
	int64_t x552 = 47637252252583296LL;
	volatile int32_t t66 = 708;

	t66 = (x549<(x550/(x551<x552)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x561 = 3U;
	int8_t x562 = -1;
	volatile uint8_t x564 = 48U;
	int32_t t67 = -1;

	t67 = (x561<(x562/(x563<x564)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x569 = 26;
	uint16_t x570 = 108U;
	int64_t x571 = INT64_MIN;
	volatile int32_t t68 = -427341;

	t68 = (x569<(x570/(x571<x572)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x577 = 0U;
	uint64_t x578 = UINT64_MAX;
	int64_t x580 = 161440820794160151LL;

	t69 = (x577<(x578/(x579<x580)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x589 = INT32_MAX;
	volatile uint8_t x590 = 0U;
	static volatile int64_t x591 = -1LL;

	t70 = (x589<(x590/(x591<x592)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x593 = 31U;
	volatile int16_t x594 = -1;
	static int8_t x595 = INT8_MIN;
	int16_t x596 = 0;

	t71 = (x593<(x594/(x595<x596)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x601 = 0;
	uint8_t x602 = 1U;
	volatile int8_t x603 = -10;
	volatile int16_t x604 = 6359;
	static volatile int32_t t72 = 1;

	t72 = (x601<(x602/(x603<x604)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x613 = 120317U;
	static uint64_t x614 = 14966409595884974LLU;
	uint8_t x615 = 0U;
	uint64_t x616 = 58LLU;
	static volatile int32_t t73 = -502257870;

	t73 = (x613<(x614/(x615<x616)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x617 = 20U;
	uint32_t x618 = 4U;
	volatile int32_t t74 = 135059;

	t74 = (x617<(x618/(x619<x620)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x625 = INT32_MAX;
	uint16_t x626 = UINT16_MAX;
	volatile int32_t t75 = 72;

	t75 = (x625<(x626/(x627<x628)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x629 = INT16_MAX;
	volatile int8_t x631 = -1;
	uint8_t x632 = UINT8_MAX;
	volatile int32_t t76 = 542980;

	t76 = (x629<(x630/(x631<x632)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x637 = -1LL;
	static volatile int64_t x638 = INT64_MIN;
	int32_t t77 = -7;

	t77 = (x637<(x638/(x639<x640)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x641 = -1;
	static int32_t x642 = 2;
	volatile int8_t x643 = INT8_MIN;
	int32_t x644 = INT32_MAX;
	volatile int32_t t78 = -6532419;

	t78 = (x641<(x642/(x643<x644)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x649 = 47U;
	volatile uint16_t x650 = 6U;
	int64_t x651 = INT64_MIN;
	int32_t t79 = 2313;

	t79 = (x649<(x650/(x651<x652)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x669 = 59U;
	static uint8_t x670 = 15U;
	int16_t x671 = -1;

	t80 = (x669<(x670/(x671<x672)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x681 = INT32_MIN;
	uint64_t x682 = UINT64_MAX;
	static int16_t x683 = 1;
	uint32_t x684 = 7114U;
	int32_t t81 = 78724997;

	t81 = (x681<(x682/(x683<x684)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x689 = -329;
	uint16_t x690 = 1165U;
	volatile int16_t x691 = INT16_MAX;
	int32_t t82 = 15;

	t82 = (x689<(x690/(x691<x692)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x717 = -1546LL;
	int64_t x718 = INT64_MIN;
	static int32_t x719 = INT32_MIN;
	volatile int32_t x720 = 63;
	int32_t t83 = -3689255;

	t83 = (x717<(x718/(x719<x720)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x721 = -1LL;
	uint8_t x722 = UINT8_MAX;
	uint32_t x723 = 59U;
	static volatile int32_t t84 = -67;

	t84 = (x721<(x722/(x723<x724)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x725 = INT16_MIN;
	int16_t x726 = INT16_MIN;
	int16_t x727 = 17;
	volatile uint64_t x728 = UINT64_MAX;
	int32_t t85 = 0;

	t85 = (x725<(x726/(x727<x728)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x729 = -1;
	static volatile int8_t x730 = -1;
	volatile int16_t x731 = 388;
	volatile int64_t x732 = INT64_MAX;
	static volatile int32_t t86 = 6057748;

	t86 = (x729<(x730/(x731<x732)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x733 = 3U;
	int8_t x734 = INT8_MIN;
	int32_t x735 = -1;
	volatile uint16_t x736 = UINT16_MAX;
	int32_t t87 = -632703;

	t87 = (x733<(x734/(x735<x736)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x741 = 47;
	uint32_t x742 = 193U;
	static volatile uint64_t x743 = 5753496LLU;
	int16_t x744 = INT16_MIN;
	volatile int32_t t88 = 4089;

	t88 = (x741<(x742/(x743<x744)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x757 = -1;
	static int8_t x758 = INT8_MAX;
	int32_t t89 = -51735;

	t89 = (x757<(x758/(x759<x760)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x761 = INT32_MIN;
	int16_t x762 = 27;
	int64_t x763 = INT64_MIN;
	static uint64_t x764 = UINT64_MAX;
	volatile int32_t t90 = -316101068;

	t90 = (x761<(x762/(x763<x764)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x765 = INT16_MAX;
	int8_t x766 = INT8_MAX;
	uint8_t x767 = 32U;
	int8_t x768 = INT8_MAX;
	static int32_t t91 = 1385;

	t91 = (x765<(x766/(x767<x768)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x769 = UINT8_MAX;
	int16_t x770 = INT16_MIN;
	static volatile int64_t x771 = INT64_MIN;
	static uint32_t x772 = UINT32_MAX;
	volatile int32_t t92 = -6;

	t92 = (x769<(x770/(x771<x772)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x777 = INT8_MIN;
	int16_t x779 = INT16_MIN;
	int16_t x780 = -1;

	t93 = (x777<(x778/(x779<x780)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x782 = INT8_MIN;
	uint32_t x784 = 3236U;
	int32_t t94 = 184900145;

	t94 = (x781<(x782/(x783<x784)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x793 = 5699600LL;
	int64_t x794 = -240LL;
	int8_t x795 = -8;
	uint16_t x796 = 0U;
	static int32_t t95 = 2073420;

	t95 = (x793<(x794/(x795<x796)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x797 = -259945;
	int8_t x798 = INT8_MIN;
	volatile int16_t x799 = INT16_MIN;
	int8_t x800 = INT8_MIN;
	int32_t t96 = 1701710;

	t96 = (x797<(x798/(x799<x800)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x817 = 1829U;
	int32_t x819 = -1;
	int8_t x820 = INT8_MAX;

	t97 = (x817<(x818/(x819<x820)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x825 = -1;
	static int64_t x826 = -1LL;
	volatile int64_t x827 = INT64_MIN;
	static volatile int32_t t98 = 68;

	t98 = (x825<(x826/(x827<x828)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x830 = 8126534;
	volatile int16_t x831 = INT16_MIN;
	int64_t x832 = -1LL;

	t99 = (x829<(x830/(x831<x832)));

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

