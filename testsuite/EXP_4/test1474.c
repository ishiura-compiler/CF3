#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x5 = INT64_MIN;
int64_t x13 = INT64_MIN;
int16_t x14 = -1;
volatile int16_t x23 = 31;
int32_t x46 = INT32_MIN;
int32_t x47 = -1;
static int64_t t4 = 22095681182LL;
uint64_t x60 = 1763366LLU;
volatile uint16_t x73 = 3U;
int16_t x74 = INT16_MIN;
uint8_t x75 = UINT8_MAX;
static uint16_t x100 = UINT16_MAX;
static int32_t t8 = 77093;
int64_t x102 = -70046687461287LL;
volatile uint32_t t9 = 3U;
static uint8_t x105 = 3U;
int64_t x113 = INT64_MIN;
uint32_t x117 = 516429U;
volatile uint32_t t13 = 3760951U;
static int64_t x123 = INT64_MAX;
int32_t x124 = INT32_MIN;
static int32_t x126 = -1;
static int16_t x128 = -1;
int8_t x145 = -1;
int32_t t16 = -200;
int64_t t19 = -82992198458130871LL;
int8_t x206 = INT8_MIN;
uint8_t x212 = 0U;
int32_t t23 = -7065262;
uint64_t x217 = 63513088852178912LLU;
uint64_t x220 = 5218362735164LLU;
int64_t x227 = INT64_MIN;
int8_t x228 = INT8_MAX;
volatile uint32_t t25 = 455082U;
int16_t x229 = INT16_MAX;
int16_t x246 = -1;
int32_t x263 = INT32_MIN;
static uint64_t x297 = 431LLU;
int64_t x302 = -126LL;
int32_t x357 = INT32_MIN;
int16_t x358 = INT16_MIN;
int32_t t38 = 813482;
static int32_t t39 = -1;
static int16_t x365 = -1;
int64_t x367 = INT64_MAX;
int64_t x368 = -5030512053683421LL;
int32_t t40 = 37370;
int8_t x369 = -1;
volatile int32_t t41 = -33632;
int16_t x378 = INT16_MIN;
int8_t x426 = -1;
int32_t x427 = 6594159;
int64_t t47 = 551527366900161LL;
int32_t t49 = 220032750;
volatile int16_t x462 = INT16_MIN;
uint16_t x464 = 14914U;
static uint16_t x471 = UINT16_MAX;
int16_t x486 = -3;
static int16_t x501 = -1;
int8_t x505 = INT8_MIN;
volatile int64_t x509 = INT64_MIN;
int32_t x539 = -1;
int8_t x540 = -1;
uint16_t x553 = 1348U;
int8_t x584 = 11;
uint8_t x603 = 3U;
static int32_t x605 = INT32_MIN;
int16_t x607 = -1;
int32_t t71 = -12664772;
uint8_t x616 = 1U;
volatile int8_t x667 = -1;
volatile int32_t t75 = 2964;
int32_t x677 = INT32_MIN;
int8_t x702 = -1;
volatile int64_t t78 = -658461523427LL;
int32_t t83 = -2156578;
static uint16_t x748 = 7419U;
static int32_t x750 = -2977023;
int64_t x751 = 1617398337178LL;
uint8_t x755 = UINT8_MAX;
int8_t x759 = INT8_MIN;
volatile int32_t x768 = INT32_MIN;
volatile int16_t x769 = INT16_MIN;
uint32_t x773 = 3U;
static int64_t x795 = INT64_MIN;
uint8_t x813 = 7U;
int32_t x815 = 2;
static int16_t x838 = INT16_MIN;


void f0(void) {
	static int64_t x6 = INT64_MIN;
	uint16_t x7 = 1764U;
	int8_t x8 = INT8_MAX;
	int64_t t0 = -5744LL;

	t0 = (x5%(x6<=(x7<x8)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x15 = 1U;
	int16_t x16 = -1;
	int64_t t1 = 0LL;

	t1 = (x13%(x14<=(x15<x16)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = INT8_MIN;
	static int16_t x22 = -1;
	uint32_t x24 = UINT32_MAX;
	volatile int32_t t2 = -6050868;

	t2 = (x21%(x22<=(x23<x24)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x25 = UINT16_MAX;
	volatile int32_t x26 = INT32_MIN;
	int64_t x27 = INT64_MAX;
	int64_t x28 = -33896833448047982LL;
	static int32_t t3 = 1310;

	t3 = (x25%(x26<=(x27<x28)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x45 = -684165756001LL;
	uint64_t x48 = UINT64_MAX;

	t4 = (x45%(x46<=(x47<x48)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x57 = 5;
	volatile int8_t x58 = INT8_MIN;
	static int32_t x59 = INT32_MAX;
	static int32_t t5 = -219;

	t5 = (x57%(x58<=(x59<x60)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x76 = INT32_MAX;
	static int32_t t6 = -7;

	t6 = (x73%(x74<=(x75<x76)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x85 = INT16_MIN;
	int32_t x86 = INT32_MIN;
	volatile int16_t x87 = -17;
	int32_t x88 = 70270;
	int32_t t7 = -147771;

	t7 = (x85%(x86<=(x87<x88)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MIN;
	uint32_t x99 = UINT32_MAX;

	t8 = (x97%(x98<=(x99<x100)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x101 = 128871U;
	uint64_t x103 = 63644692LLU;
	volatile uint8_t x104 = 56U;

	t9 = (x101%(x102<=(x103<x104)));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x106 = 1;
	uint8_t x107 = 1U;
	volatile int32_t x108 = INT32_MAX;
	int32_t t10 = -26547;

	t10 = (x105%(x106<=(x107<x108)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x109 = UINT32_MAX;
	static int8_t x110 = INT8_MIN;
	uint16_t x111 = UINT16_MAX;
	int64_t x112 = INT64_MIN;
	volatile uint32_t t11 = 628864925U;

	t11 = (x109%(x110<=(x111<x112)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x114 = -1;
	uint8_t x115 = 3U;
	int64_t x116 = 44567LL;
	volatile int64_t t12 = 2507629051LL;

	t12 = (x113%(x114<=(x115<x116)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x118 = -30;
	volatile int16_t x119 = INT16_MIN;
	int32_t x120 = INT32_MIN;

	t13 = (x117%(x118<=(x119<x120)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x121 = 2U;
	int8_t x122 = 0;
	int32_t t14 = 13;

	t14 = (x121%(x122<=(x123<x124)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x125 = 0LL;
	static uint16_t x127 = 6U;
	volatile int64_t t15 = -31179LL;

	t15 = (x125%(x126<=(x127<x128)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x146 = INT16_MIN;
	uint8_t x147 = UINT8_MAX;
	uint32_t x148 = 29012U;

	t16 = (x145%(x146<=(x147<x148)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x149 = 1890685U;
	static int64_t x150 = -1651792455LL;
	int8_t x151 = 1;
	static uint16_t x152 = UINT16_MAX;
	static uint32_t t17 = 445775430U;

	t17 = (x149%(x150<=(x151<x152)));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x169 = 52U;
	int8_t x170 = INT8_MIN;
	volatile int8_t x171 = INT8_MAX;
	int64_t x172 = INT64_MIN;
	int32_t t18 = 320174;

	t18 = (x169%(x170<=(x171<x172)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x185 = INT64_MIN;
	int32_t x186 = INT32_MIN;
	int32_t x187 = -1;
	uint16_t x188 = UINT16_MAX;

	t19 = (x185%(x186<=(x187<x188)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x197 = UINT16_MAX;
	static int32_t x198 = 0;
	volatile uint8_t x199 = 40U;
	int64_t x200 = -23103122543935LL;
	volatile int32_t t20 = 3303;

	t20 = (x197%(x198<=(x199<x200)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x205 = INT16_MIN;
	uint8_t x207 = 3U;
	uint64_t x208 = 3907LLU;
	static volatile int32_t t21 = -130316;

	t21 = (x205%(x206<=(x207<x208)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x209 = 36596212U;
	volatile int16_t x210 = INT16_MIN;
	static int8_t x211 = 3;
	uint32_t t22 = 11624U;

	t22 = (x209%(x210<=(x211<x212)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x213 = INT16_MAX;
	int16_t x214 = -1245;
	int64_t x215 = 217LL;
	int16_t x216 = INT16_MAX;

	t23 = (x213%(x214<=(x215<x216)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x218 = 0U;
	int16_t x219 = -10226;
	static uint64_t t24 = 161147212512LLU;

	t24 = (x217%(x218<=(x219<x220)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x225 = 17487U;
	int64_t x226 = -1LL;

	t25 = (x225%(x226<=(x227<x228)));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x230 = INT64_MIN;
	static uint32_t x231 = UINT32_MAX;
	static uint16_t x232 = 5U;
	int32_t t26 = 6;

	t26 = (x229%(x230<=(x231<x232)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x245 = -1;
	volatile int8_t x247 = INT8_MAX;
	int64_t x248 = 10066760553LL;
	volatile int32_t t27 = -1369683;

	t27 = (x245%(x246<=(x247<x248)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x257 = -1LL;
	int64_t x258 = -157252574718552807LL;
	int16_t x259 = INT16_MIN;
	uint64_t x260 = UINT64_MAX;
	int64_t t28 = -616487242LL;

	t28 = (x257%(x258<=(x259<x260)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x261 = -15;
	volatile int16_t x262 = INT16_MIN;
	static int32_t x264 = INT32_MIN;
	int32_t t29 = -581;

	t29 = (x261%(x262<=(x263<x264)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x265 = -20;
	volatile int64_t x266 = INT64_MIN;
	int64_t x267 = -173LL;
	static uint16_t x268 = 28U;
	int32_t t30 = 3247840;

	t30 = (x265%(x266<=(x267<x268)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x289 = INT64_MAX;
	int64_t x290 = INT64_MIN;
	volatile int32_t x291 = 0;
	int8_t x292 = 0;
	static volatile int64_t t31 = 82LL;

	t31 = (x289%(x290<=(x291<x292)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x293 = INT8_MIN;
	static int8_t x294 = -1;
	int8_t x295 = -1;
	static int32_t x296 = INT32_MIN;
	volatile int32_t t32 = -465830;

	t32 = (x293%(x294<=(x295<x296)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x298 = -5;
	int8_t x299 = 0;
	static int32_t x300 = INT32_MIN;
	uint64_t t33 = 39814LLU;

	t33 = (x297%(x298<=(x299<x300)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x301 = INT32_MIN;
	static uint64_t x303 = 911687311806200LLU;
	int32_t x304 = -47024;
	volatile int32_t t34 = 8;

	t34 = (x301%(x302<=(x303<x304)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x325 = -17;
	int16_t x326 = INT16_MIN;
	volatile int8_t x327 = 1;
	int16_t x328 = INT16_MAX;
	static volatile int32_t t35 = 101;

	t35 = (x325%(x326<=(x327<x328)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x333 = 0;
	int64_t x334 = -16615441733779LL;
	int16_t x335 = -32;
	static int32_t x336 = 13379;
	static volatile int32_t t36 = -10336;

	t36 = (x333%(x334<=(x335<x336)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x345 = 813647159U;
	volatile int64_t x346 = INT64_MIN;
	int64_t x347 = 17780269430816LL;
	uint16_t x348 = UINT16_MAX;
	uint32_t t37 = 82142U;

	t37 = (x345%(x346<=(x347<x348)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x359 = 6U;
	uint32_t x360 = UINT32_MAX;

	t38 = (x357%(x358<=(x359<x360)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x361 = 1;
	int32_t x362 = INT32_MIN;
	int8_t x363 = 38;
	static int32_t x364 = -1;

	t39 = (x361%(x362<=(x363<x364)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x366 = INT16_MIN;

	t40 = (x365%(x366<=(x367<x368)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x370 = -26;
	int16_t x371 = 28;
	uint16_t x372 = 41U;

	t41 = (x369%(x370<=(x371<x372)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x377 = INT64_MIN;
	int32_t x379 = -1;
	volatile int64_t x380 = -2618LL;
	int64_t t42 = 17930LL;

	t42 = (x377%(x378<=(x379<x380)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x397 = UINT32_MAX;
	int64_t x398 = -816367LL;
	uint16_t x399 = 13133U;
	int8_t x400 = -1;
	uint32_t t43 = 65503U;

	t43 = (x397%(x398<=(x399<x400)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x409 = 16628U;
	static int16_t x410 = -1;
	static int16_t x411 = INT16_MAX;
	int32_t x412 = -1;
	int32_t t44 = 2591884;

	t44 = (x409%(x410<=(x411<x412)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x413 = -1;
	int16_t x414 = -9241;
	static volatile int32_t x415 = -1;
	volatile int64_t x416 = INT64_MIN;
	volatile int32_t t45 = 319885737;

	t45 = (x413%(x414<=(x415<x416)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x425 = -23;
	static int8_t x428 = -1;
	static int32_t t46 = -515683;

	t46 = (x425%(x426<=(x427<x428)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x433 = -1LL;
	static volatile int8_t x434 = -1;
	uint64_t x435 = UINT64_MAX;
	volatile uint64_t x436 = 3894224366248LLU;

	t47 = (x433%(x434<=(x435<x436)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x437 = UINT64_MAX;
	int32_t x438 = INT32_MIN;
	int16_t x439 = 0;
	static uint16_t x440 = UINT16_MAX;
	static volatile uint64_t t48 = 637363LLU;

	t48 = (x437%(x438<=(x439<x440)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x441 = 187;
	static volatile int32_t x442 = INT32_MIN;
	int8_t x443 = -1;
	volatile int8_t x444 = INT8_MIN;

	t49 = (x441%(x442<=(x443<x444)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x461 = UINT16_MAX;
	uint32_t x463 = UINT32_MAX;
	static volatile int32_t t50 = 497458015;

	t50 = (x461%(x462<=(x463<x464)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x465 = INT16_MIN;
	int8_t x466 = INT8_MIN;
	static int32_t x467 = -1;
	volatile int8_t x468 = -1;
	static int32_t t51 = 8855312;

	t51 = (x465%(x466<=(x467<x468)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x469 = INT32_MIN;
	volatile int32_t x470 = INT32_MIN;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t52 = 1;

	t52 = (x469%(x470<=(x471<x472)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x481 = INT32_MAX;
	int64_t x482 = INT64_MIN;
	static int16_t x483 = 3;
	uint32_t x484 = 244732U;
	static int32_t t53 = 28;

	t53 = (x481%(x482<=(x483<x484)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x485 = INT64_MAX;
	uint32_t x487 = UINT32_MAX;
	static int64_t x488 = -802LL;
	static int64_t t54 = 0LL;

	t54 = (x485%(x486<=(x487<x488)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x497 = 9028U;
	int8_t x498 = -1;
	volatile uint32_t x499 = 310U;
	int64_t x500 = INT64_MIN;
	uint32_t t55 = 38761277U;

	t55 = (x497%(x498<=(x499<x500)));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x502 = INT32_MIN;
	int32_t x503 = 404;
	int8_t x504 = -1;
	static volatile int32_t t56 = 461;

	t56 = (x501%(x502<=(x503<x504)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x506 = -105882;
	int64_t x507 = INT64_MIN;
	volatile int16_t x508 = -1;
	int32_t t57 = 90;

	t57 = (x505%(x506<=(x507<x508)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x510 = INT64_MIN;
	int16_t x511 = INT16_MIN;
	uint8_t x512 = 21U;
	int64_t t58 = -539137715717866383LL;

	t58 = (x509%(x510<=(x511<x512)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x517 = INT64_MAX;
	int16_t x518 = INT16_MIN;
	int64_t x519 = INT64_MIN;
	int16_t x520 = INT16_MIN;
	int64_t t59 = -131084721386026LL;

	t59 = (x517%(x518<=(x519<x520)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x521 = -12LL;
	static int16_t x522 = -1;
	uint64_t x523 = 14193115736615LLU;
	int32_t x524 = INT32_MIN;
	volatile int64_t t60 = 2950192914998982149LL;

	t60 = (x521%(x522<=(x523<x524)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x525 = UINT32_MAX;
	static volatile int32_t x526 = INT32_MIN;
	uint64_t x527 = 0LLU;
	int64_t x528 = INT64_MAX;
	uint32_t t61 = 54334U;

	t61 = (x525%(x526<=(x527<x528)));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x529 = 30U;
	static int16_t x530 = INT16_MIN;
	int64_t x531 = INT64_MIN;
	uint8_t x532 = 6U;
	volatile int32_t t62 = 1501;

	t62 = (x529%(x530<=(x531<x532)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x537 = -1;
	int16_t x538 = -10;
	volatile int32_t t63 = -15543;

	t63 = (x537%(x538<=(x539<x540)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x541 = UINT32_MAX;
	int16_t x542 = -1;
	uint8_t x543 = UINT8_MAX;
	static uint64_t x544 = 1190246937521LLU;
	volatile uint32_t t64 = 17187U;

	t64 = (x541%(x542<=(x543<x544)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x554 = -1LL;
	int32_t x555 = INT32_MAX;
	volatile int64_t x556 = INT64_MIN;
	volatile int32_t t65 = -85533443;

	t65 = (x553%(x554<=(x555<x556)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x565 = UINT64_MAX;
	volatile int16_t x566 = 0;
	int8_t x567 = -1;
	uint16_t x568 = 1642U;
	uint64_t t66 = 3053867LLU;

	t66 = (x565%(x566<=(x567<x568)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x569 = INT32_MAX;
	static int16_t x570 = INT16_MIN;
	int32_t x571 = 2042459;
	int64_t x572 = INT64_MIN;
	volatile int32_t t67 = 91908;

	t67 = (x569%(x570<=(x571<x572)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x581 = 0U;
	int32_t x582 = -1;
	int8_t x583 = INT8_MAX;
	volatile int32_t t68 = 13;

	t68 = (x581%(x582<=(x583<x584)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x585 = 15643U;
	static int32_t x586 = -1;
	static volatile uint32_t x587 = 3342U;
	static int16_t x588 = INT16_MIN;
	int32_t t69 = 7259903;

	t69 = (x585%(x586<=(x587<x588)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x601 = UINT16_MAX;
	int8_t x602 = INT8_MIN;
	int32_t x604 = INT32_MAX;
	volatile int32_t t70 = 158936808;

	t70 = (x601%(x602<=(x603<x604)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x606 = INT64_MIN;
	static uint64_t x608 = 279358387670209LLU;

	t71 = (x605%(x606<=(x607<x608)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x613 = UINT8_MAX;
	int32_t x614 = -3317578;
	int8_t x615 = 42;
	int32_t t72 = -9237;

	t72 = (x613%(x614<=(x615<x616)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x617 = 805347U;
	int8_t x618 = 0;
	volatile uint8_t x619 = 4U;
	int32_t x620 = INT32_MIN;
	static volatile uint32_t t73 = 106U;

	t73 = (x617%(x618<=(x619<x620)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x657 = 3U;
	static int32_t x658 = INT32_MIN;
	int64_t x659 = -1LL;
	int8_t x660 = INT8_MIN;
	volatile uint32_t t74 = 444U;

	t74 = (x657%(x658<=(x659<x660)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x665 = INT32_MAX;
	uint32_t x666 = 0U;
	int16_t x668 = INT16_MIN;

	t75 = (x665%(x666<=(x667<x668)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x678 = -1;
	int64_t x679 = -1LL;
	static uint64_t x680 = 1LLU;
	int32_t t76 = -15672283;

	t76 = (x677%(x678<=(x679<x680)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x697 = -1;
	static int8_t x698 = -1;
	int64_t x699 = INT64_MIN;
	int32_t x700 = 4360;
	static volatile int32_t t77 = 39126;

	t77 = (x697%(x698<=(x699<x700)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x701 = 119645LL;
	int8_t x703 = INT8_MAX;
	int8_t x704 = INT8_MIN;

	t78 = (x701%(x702<=(x703<x704)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x713 = INT16_MIN;
	static int8_t x714 = INT8_MIN;
	static uint64_t x715 = 52LLU;
	static uint16_t x716 = 1U;
	volatile int32_t t79 = -2090006;

	t79 = (x713%(x714<=(x715<x716)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x717 = INT64_MAX;
	int64_t x718 = -1421849157387LL;
	int32_t x719 = -4380380;
	int16_t x720 = INT16_MIN;
	volatile int64_t t80 = -5955033902LL;

	t80 = (x717%(x718<=(x719<x720)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x725 = -15843;
	int32_t x726 = INT32_MIN;
	static uint16_t x727 = 6442U;
	int16_t x728 = INT16_MAX;
	int32_t t81 = 93;

	t81 = (x725%(x726<=(x727<x728)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x729 = 1719U;
	int64_t x730 = -1LL;
	int8_t x731 = INT8_MIN;
	volatile uint32_t x732 = 59166U;
	int32_t t82 = 15174;

	t82 = (x729%(x730<=(x731<x732)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x737 = INT32_MIN;
	volatile int64_t x738 = -5458272926282LL;
	static int64_t x739 = INT64_MAX;
	uint16_t x740 = 3U;

	t83 = (x737%(x738<=(x739<x740)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x745 = INT64_MIN;
	static int8_t x746 = -1;
	int64_t x747 = INT64_MIN;
	int64_t t84 = -70678484433998LL;

	t84 = (x745%(x746<=(x747<x748)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x749 = -1LL;
	int32_t x752 = -1;
	int64_t t85 = 388642908LL;

	t85 = (x749%(x750<=(x751<x752)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x753 = -1LL;
	static int8_t x754 = INT8_MIN;
	uint8_t x756 = 13U;
	int64_t t86 = -440578199LL;

	t86 = (x753%(x754<=(x755<x756)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x757 = -1LL;
	volatile int16_t x758 = -3814;
	static int16_t x760 = INT16_MAX;
	int64_t t87 = -8861337793LL;

	t87 = (x757%(x758<=(x759<x760)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x765 = UINT8_MAX;
	static int8_t x766 = INT8_MIN;
	int32_t x767 = INT32_MAX;
	int32_t t88 = -1844;

	t88 = (x765%(x766<=(x767<x768)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x770 = -1749;
	int32_t x771 = -181909008;
	static volatile int16_t x772 = INT16_MAX;
	int32_t t89 = -379084881;

	t89 = (x769%(x770<=(x771<x772)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x774 = -1;
	int8_t x775 = -13;
	uint64_t x776 = 132063888889123LLU;
	volatile uint32_t t90 = 11944933U;

	t90 = (x773%(x774<=(x775<x776)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x777 = INT64_MAX;
	int64_t x778 = -1LL;
	uint64_t x779 = 53799313LLU;
	volatile int16_t x780 = INT16_MIN;
	volatile int64_t t91 = -65LL;

	t91 = (x777%(x778<=(x779<x780)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x781 = 6U;
	static volatile int16_t x782 = INT16_MIN;
	uint16_t x783 = 197U;
	int16_t x784 = INT16_MIN;
	static volatile uint32_t t92 = 1706356099U;

	t92 = (x781%(x782<=(x783<x784)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x789 = -1LL;
	static uint8_t x790 = 0U;
	int8_t x791 = INT8_MAX;
	int64_t x792 = INT64_MIN;
	int64_t t93 = -2644LL;

	t93 = (x789%(x790<=(x791<x792)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x793 = -1;
	int8_t x794 = -1;
	uint16_t x796 = UINT16_MAX;
	int32_t t94 = 77;

	t94 = (x793%(x794<=(x795<x796)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x801 = INT32_MIN;
	int16_t x802 = -1;
	static int32_t x803 = INT32_MIN;
	int32_t x804 = -360295965;
	int32_t t95 = -1005327;

	t95 = (x801%(x802<=(x803<x804)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x814 = INT32_MIN;
	uint32_t x816 = 208262U;
	volatile int32_t t96 = 3;

	t96 = (x813%(x814<=(x815<x816)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x817 = 0U;
	int8_t x818 = -1;
	static uint16_t x819 = 32U;
	int8_t x820 = -1;
	int32_t t97 = 0;

	t97 = (x817%(x818<=(x819<x820)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x821 = -10334523LL;
	int16_t x822 = -1;
	int32_t x823 = 53;
	static int64_t x824 = INT64_MIN;
	volatile int64_t t98 = -25800489LL;

	t98 = (x821%(x822<=(x823<x824)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x837 = INT8_MIN;
	int64_t x839 = INT64_MIN;
	int64_t x840 = INT64_MIN;
	int32_t t99 = -1013691014;

	t99 = (x837%(x838<=(x839<x840)));

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

