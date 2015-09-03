#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t3 = 3;
int16_t x36 = INT16_MIN;
int32_t t4 = -775;
int16_t x43 = -1;
static volatile int32_t t5 = -3;
volatile int32_t t10 = 102251908;
int64_t x83 = -1LL;
static uint16_t x84 = UINT16_MAX;
int16_t x129 = -1;
int32_t x131 = INT32_MIN;
volatile int32_t x139 = INT32_MIN;
static uint16_t x140 = 27225U;
int32_t t20 = -1;
static volatile int32_t x161 = -1;
int8_t x181 = 6;
int64_t x200 = 50924903580LL;
volatile int8_t x203 = INT8_MIN;
int64_t x204 = INT64_MAX;
static int8_t x219 = -1;
int8_t x224 = INT8_MIN;
int64_t x244 = INT64_MAX;
int64_t x250 = -13124227380082155LL;
int64_t x251 = -7865380820175826LL;
int8_t x254 = INT8_MIN;
int8_t x260 = INT8_MAX;
volatile uint64_t t33 = 126LLU;
uint8_t x278 = 3U;
int8_t x279 = 0;
int64_t t34 = 214236803LL;
int32_t t36 = -13281430;
int32_t t38 = 1757137;
static int64_t x315 = -5758LL;
volatile int32_t x334 = -51297;
uint64_t x337 = UINT64_MAX;
static uint32_t x340 = UINT32_MAX;
int8_t x350 = -63;
static int8_t x351 = -1;
uint32_t x360 = UINT32_MAX;
static int32_t x366 = INT32_MAX;
int8_t x373 = -1;
int64_t x388 = 717LL;
int32_t x393 = -222;
int16_t x394 = INT16_MIN;
uint16_t x408 = 29942U;
int64_t x412 = INT64_MAX;
int16_t x424 = INT16_MAX;
volatile int16_t x442 = -1;
volatile int64_t t55 = 6340LL;
static volatile int32_t t57 = -10;
int32_t x478 = INT32_MIN;
volatile uint32_t x479 = 238U;
uint64_t t61 = 21946313420LLU;
int8_t x539 = -2;
uint16_t x540 = UINT16_MAX;
int64_t x543 = -8166318LL;
int32_t x552 = INT32_MAX;
static int32_t x569 = -121732208;
int32_t x572 = INT32_MAX;
int32_t x577 = 7;
static uint64_t x591 = 816554LLU;
int32_t x598 = -4098760;
static int8_t x600 = 5;
uint8_t x609 = 41U;
int64_t x616 = -1LL;
uint8_t x621 = 0U;
static int64_t t75 = 1458323349LL;
uint16_t x639 = UINT16_MAX;
uint32_t x640 = 44457777U;
static volatile uint32_t t78 = 63943663U;
int32_t x709 = -1466;
uint8_t x712 = 0U;
int8_t x718 = -1;
static volatile uint64_t t85 = 26500225213589LLU;
int32_t x739 = INT32_MIN;
static uint64_t x756 = 10022269LLU;
int16_t x758 = 156;
volatile int32_t t88 = -623209;
volatile int16_t x770 = 91;
uint8_t x781 = 0U;
static int32_t t90 = 9414639;
static int8_t x787 = INT8_MIN;
static int32_t x788 = 1996486;
static volatile int32_t t92 = -100;
int64_t t95 = -7213LL;
static volatile int64_t x834 = INT64_MAX;
volatile uint8_t x849 = 69U;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	uint64_t x2 = UINT64_MAX;
	int32_t x3 = -1;
	uint16_t x4 = 22906U;
	volatile uint64_t t0 = 2535401768034322LLU;

	t0 = (x1%(x2/(x3<x4)));

	if (t0 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 2095U;
	int32_t x6 = INT32_MIN;
	static int64_t x7 = INT64_MIN;
	int32_t x8 = INT32_MAX;
	int32_t t1 = 21262;

	t1 = (x5%(x6/(x7<x8)));

	if (t1 != 2095) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x21 = UINT8_MAX;
	static int16_t x22 = INT16_MIN;
	int32_t x23 = INT32_MIN;
	volatile int64_t x24 = 78664204LL;
	int32_t t2 = -119;

	t2 = (x21%(x22/(x23<x24)));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x29 = 35;
	int16_t x30 = -1;
	static int16_t x31 = -82;
	static uint32_t x32 = UINT32_MAX;

	t3 = (x29%(x30/(x31<x32)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x33 = INT16_MAX;
	uint16_t x34 = UINT16_MAX;
	static uint64_t x35 = 21LLU;

	t4 = (x33%(x34/(x35<x36)));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x41 = INT16_MIN;
	static int16_t x42 = INT16_MIN;
	int32_t x44 = INT32_MAX;

	t5 = (x41%(x42/(x43<x44)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x49 = 3706694U;
	uint16_t x50 = 16U;
	static int8_t x51 = INT8_MIN;
	uint16_t x52 = UINT16_MAX;
	volatile uint32_t t6 = 3833611U;

	t6 = (x49%(x50/(x51<x52)));

	if (t6 != 6U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x53 = INT32_MAX;
	static volatile int32_t x54 = INT32_MAX;
	uint32_t x55 = 52603504U;
	uint64_t x56 = 469739614336962010LLU;
	volatile int32_t t7 = 32739669;

	t7 = (x53%(x54/(x55<x56)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x61 = INT8_MIN;
	uint64_t x62 = UINT64_MAX;
	int32_t x63 = -877;
	static int16_t x64 = -1;
	volatile uint64_t t8 = 1942LLU;

	t8 = (x61%(x62/(x63<x64)));

	if (t8 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x65 = 98434U;
	volatile int64_t x66 = 2980174871392986LL;
	volatile uint16_t x67 = 112U;
	static int8_t x68 = INT8_MAX;
	int64_t t9 = -2090000846LL;

	t9 = (x65%(x66/(x67<x68)));

	if (t9 != 98434LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x69 = INT16_MIN;
	int8_t x70 = -1;
	int32_t x71 = INT32_MIN;
	uint32_t x72 = UINT32_MAX;

	t10 = (x69%(x70/(x71<x72)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x73 = 5;
	static int32_t x74 = INT32_MAX;
	static int8_t x75 = 14;
	int16_t x76 = 981;
	volatile int32_t t11 = 327;

	t11 = (x73%(x74/(x75<x76)));

	if (t11 != 5) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x77 = 54LL;
	volatile uint32_t x78 = UINT32_MAX;
	static volatile int8_t x79 = 18;
	int32_t x80 = 3705600;
	static int64_t t12 = 1LL;

	t12 = (x77%(x78/(x79<x80)));

	if (t12 != 54LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x81 = 410LLU;
	uint16_t x82 = 156U;
	uint64_t t13 = 6136352LLU;

	t13 = (x81%(x82/(x83<x84)));

	if (t13 != 98LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x89 = UINT16_MAX;
	int32_t x90 = INT32_MIN;
	int16_t x91 = -2661;
	static uint8_t x92 = 7U;
	int32_t t14 = -5;

	t14 = (x89%(x90/(x91<x92)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x105 = INT64_MIN;
	int8_t x106 = -1;
	int32_t x107 = INT32_MIN;
	uint8_t x108 = 0U;
	int64_t t15 = -12750221462944380LL;

	t15 = (x105%(x106/(x107<x108)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x109 = -854;
	int64_t x110 = INT64_MIN;
	volatile int8_t x111 = INT8_MIN;
	int16_t x112 = -1;
	int64_t t16 = -7649LL;

	t16 = (x109%(x110/(x111<x112)));

	if (t16 != -854LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x117 = 18507515157192LL;
	volatile uint8_t x118 = 17U;
	int8_t x119 = INT8_MIN;
	volatile uint8_t x120 = 1U;
	static volatile int64_t t17 = -714644855824LL;

	t17 = (x117%(x118/(x119<x120)));

	if (t17 != 13LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x130 = INT8_MIN;
	volatile int64_t x132 = INT64_MAX;
	volatile int32_t t18 = -23563634;

	t18 = (x129%(x130/(x131<x132)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x137 = -1;
	volatile int16_t x138 = INT16_MIN;
	volatile int32_t t19 = 5996;

	t19 = (x137%(x138/(x139<x140)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x157 = 10U;
	static int32_t x158 = -1;
	static int16_t x159 = 1;
	volatile uint32_t x160 = UINT32_MAX;

	t20 = (x157%(x158/(x159<x160)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x162 = INT8_MAX;
	int64_t x163 = -1LL;
	uint16_t x164 = 3U;
	volatile int32_t t21 = -2610;

	t21 = (x161%(x162/(x163<x164)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x182 = INT32_MIN;
	static int8_t x183 = INT8_MIN;
	int16_t x184 = -1;
	int32_t t22 = 1;

	t22 = (x181%(x182/(x183<x184)));

	if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x193 = 105;
	int64_t x194 = INT64_MIN;
	int64_t x195 = -18120404804165916LL;
	static int16_t x196 = INT16_MIN;
	volatile int64_t t23 = 1LL;

	t23 = (x193%(x194/(x195<x196)));

	if (t23 != 105LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x197 = 3;
	volatile int16_t x198 = INT16_MIN;
	int8_t x199 = INT8_MIN;
	volatile int32_t t24 = -57;

	t24 = (x197%(x198/(x199<x200)));

	if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x201 = INT64_MIN;
	int32_t x202 = INT32_MIN;
	static int64_t t25 = 9445612390LL;

	t25 = (x201%(x202/(x203<x204)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x217 = 118032210756291LLU;
	int32_t x218 = 156212;
	volatile uint8_t x220 = 1U;
	uint64_t t26 = 1447850LLU;

	t26 = (x217%(x218/(x219<x220)));

	if (t26 != 47795LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x221 = UINT8_MAX;
	volatile int32_t x222 = -416;
	uint32_t x223 = 33U;
	int32_t t27 = -97;

	t27 = (x221%(x222/(x223<x224)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x233 = -1;
	static int64_t x234 = INT64_MIN;
	volatile int64_t x235 = -1LL;
	static int16_t x236 = INT16_MAX;
	int64_t t28 = -61LL;

	t28 = (x233%(x234/(x235<x236)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x237 = INT64_MIN;
	uint32_t x238 = 236353404U;
	int32_t x239 = INT32_MIN;
	uint16_t x240 = UINT16_MAX;
	volatile int64_t t29 = -1370481104LL;

	t29 = (x237%(x238/(x239<x240)));

	if (t29 != -47698484LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x241 = INT8_MAX;
	static int8_t x242 = -1;
	int32_t x243 = INT32_MIN;
	int32_t t30 = 115;

	t30 = (x241%(x242/(x243<x244)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x249 = -1;
	int8_t x252 = INT8_MIN;
	int64_t t31 = 44LL;

	t31 = (x249%(x250/(x251<x252)));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x253 = UINT8_MAX;
	static int32_t x255 = INT32_MIN;
	int8_t x256 = -7;
	volatile int32_t t32 = -80764;

	t32 = (x253%(x254/(x255<x256)));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x257 = 11693035970567LL;
	volatile uint64_t x258 = 10LLU;
	int8_t x259 = -1;

	t33 = (x257%(x258/(x259<x260)));

	if (t33 != 7LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x277 = 5417106614905973LL;
	uint64_t x280 = UINT64_MAX;

	t34 = (x277%(x278/(x279<x280)));

	if (t34 != 2LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x289 = -144174967;
	int64_t x290 = -1LL;
	int16_t x291 = -1;
	uint8_t x292 = 13U;
	volatile int64_t t35 = -10LL;

	t35 = (x289%(x290/(x291<x292)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x293 = INT8_MIN;
	int16_t x294 = 2186;
	uint8_t x295 = 3U;
	uint32_t x296 = UINT32_MAX;

	t36 = (x293%(x294/(x295<x296)));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x301 = INT32_MIN;
	volatile int8_t x302 = -1;
	int8_t x303 = 48;
	int8_t x304 = INT8_MAX;
	volatile int32_t t37 = -1043;

	t37 = (x301%(x302/(x303<x304)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x305 = 1671U;
	int16_t x306 = INT16_MAX;
	uint16_t x307 = 270U;
	int64_t x308 = INT64_MAX;

	t38 = (x305%(x306/(x307<x308)));

	if (t38 != 1671) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x313 = -1;
	uint32_t x314 = 911407U;
	volatile int8_t x316 = 2;
	static uint32_t t39 = 23241U;

	t39 = (x313%(x314/(x315<x316)));

	if (t39 != 417511U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x329 = 1154576060435204379LL;
	volatile int64_t x330 = INT64_MAX;
	static int64_t x331 = INT64_MIN;
	volatile int8_t x332 = INT8_MIN;
	static volatile int64_t t40 = -7250LL;

	t40 = (x329%(x330/(x331<x332)));

	if (t40 != 1154576060435204379LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x333 = INT32_MIN;
	int64_t x335 = INT64_MIN;
	volatile int8_t x336 = INT8_MIN;
	int32_t t41 = 83046644;

	t41 = (x333%(x334/(x335<x336)));

	if (t41 != -37337) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x338 = INT64_MIN;
	int64_t x339 = -1LL;
	uint64_t t42 = 0LLU;

	t42 = (x337%(x338/(x339<x340)));

	if (t42 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x349 = 4979679LLU;
	int64_t x352 = INT64_MAX;
	uint64_t t43 = 26933907571LLU;

	t43 = (x349%(x350/(x351<x352)));

	if (t43 != 4979679LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x357 = 3846U;
	int64_t x358 = INT64_MIN;
	uint8_t x359 = 0U;
	int64_t t44 = -1826746LL;

	t44 = (x357%(x358/(x359<x360)));

	if (t44 != 3846LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x365 = INT8_MAX;
	uint8_t x367 = 5U;
	uint32_t x368 = 12U;
	volatile int32_t t45 = -336;

	t45 = (x365%(x366/(x367<x368)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x369 = UINT8_MAX;
	int16_t x370 = -1;
	int8_t x371 = INT8_MIN;
	int32_t x372 = 605;
	int32_t t46 = -515248414;

	t46 = (x369%(x370/(x371<x372)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x374 = -7984977277LL;
	uint8_t x375 = UINT8_MAX;
	uint32_t x376 = 32684544U;
	static int64_t t47 = -93207696007224LL;

	t47 = (x373%(x374/(x375<x376)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x385 = 47;
	int16_t x386 = INT16_MIN;
	volatile int32_t x387 = INT32_MIN;
	int32_t t48 = -30;

	t48 = (x385%(x386/(x387<x388)));

	if (t48 != 47) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x395 = 487LLU;
	static uint32_t x396 = UINT32_MAX;
	volatile int32_t t49 = 4544058;

	t49 = (x393%(x394/(x395<x396)));

	if (t49 != -222) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x397 = 1;
	int64_t x398 = -1LL;
	volatile uint64_t x399 = 34611LLU;
	uint16_t x400 = UINT16_MAX;
	volatile int64_t t50 = 972LL;

	t50 = (x397%(x398/(x399<x400)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x405 = -23410257;
	static uint64_t x406 = 1332LLU;
	uint16_t x407 = 748U;
	volatile uint64_t t51 = 18635250LLU;

	t51 = (x405%(x406/(x407<x408)));

	if (t51 != 1135LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x409 = UINT16_MAX;
	volatile uint8_t x410 = UINT8_MAX;
	int8_t x411 = -1;
	int32_t t52 = -3;

	t52 = (x409%(x410/(x411<x412)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x421 = 31U;
	static int64_t x422 = -3573357824739LL;
	int32_t x423 = -1;
	int64_t t53 = -97106200LL;

	t53 = (x421%(x422/(x423<x424)));

	if (t53 != 31LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x441 = INT8_MAX;
	int64_t x443 = -1LL;
	uint32_t x444 = 29596912U;
	int32_t t54 = -2582126;

	t54 = (x441%(x442/(x443<x444)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x449 = INT64_MAX;
	volatile int16_t x450 = 346;
	int32_t x451 = -1;
	uint8_t x452 = 1U;

	t55 = (x449%(x450/(x451<x452)));

	if (t55 != 109LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x453 = 1021738;
	int32_t x454 = INT32_MIN;
	int16_t x455 = -90;
	uint64_t x456 = UINT64_MAX;
	static int32_t t56 = -1;

	t56 = (x453%(x454/(x455<x456)));

	if (t56 != 1021738) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x457 = INT8_MAX;
	uint16_t x458 = 16034U;
	int8_t x459 = INT8_MIN;
	int8_t x460 = 33;

	t57 = (x457%(x458/(x459<x460)));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x477 = INT8_MAX;
	uint64_t x480 = 1950774681676LLU;
	int32_t t58 = -34655295;

	t58 = (x477%(x478/(x479<x480)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x481 = INT32_MIN;
	int64_t x482 = INT64_MIN;
	static uint16_t x483 = 184U;
	static int32_t x484 = 20385147;
	static volatile int64_t t59 = -5213LL;

	t59 = (x481%(x482/(x483<x484)));

	if (t59 != -2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x505 = 1322696U;
	int16_t x506 = INT16_MIN;
	uint16_t x507 = 8766U;
	static int64_t x508 = 93981651LL;
	volatile uint32_t t60 = 428854U;

	t60 = (x505%(x506/(x507<x508)));

	if (t60 != 1322696U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x517 = 173436402908337694LLU;
	static int64_t x518 = INT64_MAX;
	static uint32_t x519 = 1102U;
	int32_t x520 = -1;

	t61 = (x517%(x518/(x519<x520)));

	if (t61 != 173436402908337694LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x521 = -1;
	int16_t x522 = INT16_MIN;
	int16_t x523 = 0;
	uint32_t x524 = 109529U;
	int32_t t62 = -276498244;

	t62 = (x521%(x522/(x523<x524)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x537 = INT64_MIN;
	static volatile int32_t x538 = INT32_MIN;
	static volatile int64_t t63 = -8435LL;

	t63 = (x537%(x538/(x539<x540)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x541 = 663988700U;
	uint8_t x542 = UINT8_MAX;
	volatile uint16_t x544 = 0U;
	volatile uint32_t t64 = 597815U;

	t64 = (x541%(x542/(x543<x544)));

	if (t64 != 65U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x549 = 2367U;
	volatile uint8_t x550 = UINT8_MAX;
	uint16_t x551 = UINT16_MAX;
	static volatile int32_t t65 = 1;

	t65 = (x549%(x550/(x551<x552)));

	if (t65 != 72) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x561 = 2098292759U;
	static int16_t x562 = -91;
	int32_t x563 = INT32_MIN;
	int16_t x564 = INT16_MAX;
	volatile uint32_t t66 = 190900U;

	t66 = (x561%(x562/(x563<x564)));

	if (t66 != 2098292759U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x570 = INT8_MIN;
	volatile uint16_t x571 = UINT16_MAX;
	static volatile int32_t t67 = 647349;

	t67 = (x569%(x570/(x571<x572)));

	if (t67 != -112) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x578 = 2079U;
	static volatile uint64_t x579 = 1784316LLU;
	int16_t x580 = INT16_MIN;
	volatile uint32_t t68 = 98681U;

	t68 = (x577%(x578/(x579<x580)));

	if (t68 != 7U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x589 = INT16_MIN;
	uint16_t x590 = 2397U;
	volatile int64_t x592 = -1LL;
	volatile int32_t t69 = -1;

	t69 = (x589%(x590/(x591<x592)));

	if (t69 != -1607) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x597 = INT16_MAX;
	int8_t x599 = INT8_MIN;
	volatile int32_t t70 = 9641;

	t70 = (x597%(x598/(x599<x600)));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x605 = -1;
	int16_t x606 = 147;
	volatile int64_t x607 = -3996LL;
	uint16_t x608 = 2194U;
	static int32_t t71 = 0;

	t71 = (x605%(x606/(x607<x608)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x610 = 3U;
	uint16_t x611 = 304U;
	int64_t x612 = 3276641848576LL;
	volatile int32_t t72 = -4894072;

	t72 = (x609%(x610/(x611<x612)));

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x613 = -1;
	static int8_t x614 = 3;
	uint64_t x615 = 97463663315484630LLU;
	static volatile int32_t t73 = -12910894;

	t73 = (x613%(x614/(x615<x616)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x622 = 15162190U;
	int16_t x623 = 4453;
	uint64_t x624 = 153663754012603LLU;
	uint32_t t74 = 720659970U;

	t74 = (x621%(x622/(x623<x624)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x633 = INT32_MAX;
	static int64_t x634 = INT64_MAX;
	int64_t x635 = 1LL;
	int8_t x636 = INT8_MAX;

	t75 = (x633%(x634/(x635<x636)));

	if (t75 != 2147483647LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x637 = 0U;
	static int8_t x638 = -1;
	int32_t t76 = -1333309;

	t76 = (x637%(x638/(x639<x640)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x649 = 263462765LLU;
	uint32_t x650 = 10U;
	int32_t x651 = -1;
	uint16_t x652 = 69U;
	uint64_t t77 = 8968152151196515067LLU;

	t77 = (x649%(x650/(x651<x652)));

	if (t77 != 5LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x673 = UINT32_MAX;
	uint16_t x674 = 1U;
	int16_t x675 = INT16_MIN;
	int32_t x676 = 9;

	t78 = (x673%(x674/(x675<x676)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x681 = -1;
	int64_t x682 = -1LL;
	volatile uint16_t x683 = 304U;
	static uint16_t x684 = UINT16_MAX;
	volatile int64_t t79 = -338333703406915217LL;

	t79 = (x681%(x682/(x683<x684)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x685 = INT8_MIN;
	int8_t x686 = INT8_MIN;
	static uint32_t x687 = 226U;
	int8_t x688 = INT8_MIN;
	static int32_t t80 = 142541;

	t80 = (x685%(x686/(x687<x688)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x697 = INT8_MAX;
	uint16_t x698 = 4768U;
	volatile int16_t x699 = INT16_MIN;
	int8_t x700 = 6;
	static int32_t t81 = -409;

	t81 = (x697%(x698/(x699<x700)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x701 = INT16_MIN;
	uint64_t x702 = 6342239759178364LLU;
	int16_t x703 = INT16_MIN;
	int8_t x704 = INT8_MAX;
	volatile uint64_t t82 = 35395573LLU;

	t82 = (x701%(x702/(x703<x704)));

	if (t82 != 3510854018836336LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x710 = 57135345;
	int64_t x711 = INT64_MIN;
	volatile int32_t t83 = -2055138;

	t83 = (x709%(x710/(x711<x712)));

	if (t83 != -1466) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x713 = -3;
	int8_t x714 = 1;
	int16_t x715 = INT16_MIN;
	uint8_t x716 = 0U;
	int32_t t84 = 1053;

	t84 = (x713%(x714/(x715<x716)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x717 = 405407182725668530LLU;
	volatile int32_t x719 = INT32_MIN;
	uint16_t x720 = 139U;

	t85 = (x717%(x718/(x719<x720)));

	if (t85 != 405407182725668530LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x737 = INT8_MAX;
	int32_t x738 = INT32_MIN;
	uint32_t x740 = UINT32_MAX;
	int32_t t86 = -959;

	t86 = (x737%(x738/(x739<x740)));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x753 = INT16_MAX;
	int64_t x754 = 1078910097298903LL;
	uint32_t x755 = 7U;
	int64_t t87 = -1875925357902LL;

	t87 = (x753%(x754/(x755<x756)));

	if (t87 != 32767LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x757 = 16243U;
	int8_t x759 = INT8_MIN;
	int32_t x760 = INT32_MAX;

	t88 = (x757%(x758/(x759<x760)));

	if (t88 != 19) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x769 = INT8_MIN;
	volatile int32_t x771 = -1;
	uint16_t x772 = UINT16_MAX;
	int32_t t89 = -7855;

	t89 = (x769%(x770/(x771<x772)));

	if (t89 != -37) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x782 = 30;
	int8_t x783 = INT8_MIN;
	int16_t x784 = 1;

	t90 = (x781%(x782/(x783<x784)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x785 = INT8_MAX;
	int32_t x786 = 1193148;
	int32_t t91 = -276537;

	t91 = (x785%(x786/(x787<x788)));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x813 = INT8_MIN;
	int16_t x814 = -1;
	volatile int32_t x815 = INT32_MIN;
	static int32_t x816 = INT32_MAX;

	t92 = (x813%(x814/(x815<x816)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x817 = 127480271173105LL;
	uint16_t x818 = 101U;
	static int16_t x819 = INT16_MIN;
	int64_t x820 = -1LL;
	static volatile int64_t t93 = 5634458199807812LL;

	t93 = (x817%(x818/(x819<x820)));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x821 = INT32_MIN;
	volatile int8_t x822 = INT8_MAX;
	int8_t x823 = INT8_MIN;
	static int64_t x824 = 5174LL;
	static volatile int32_t t94 = -1;

	t94 = (x821%(x822/(x823<x824)));

	if (t94 != -8) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x829 = INT64_MIN;
	int8_t x830 = -1;
	int16_t x831 = -1;
	uint16_t x832 = UINT16_MAX;

	t95 = (x829%(x830/(x831<x832)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x833 = INT8_MIN;
	static int16_t x835 = INT16_MIN;
	int32_t x836 = -317;
	int64_t t96 = 2593120447LL;

	t96 = (x833%(x834/(x835<x836)));

	if (t96 != -128LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x845 = 68647431521787937LLU;
	volatile int32_t x846 = INT32_MAX;
	int8_t x847 = -1;
	volatile int64_t x848 = 42758LL;
	uint64_t t97 = 73847593054792796LLU;

	t97 = (x845%(x846/(x847<x848)));

	if (t97 != 746661140LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x850 = 64636070LLU;
	int8_t x851 = -6;
	uint8_t x852 = 40U;
	uint64_t t98 = 779688LLU;

	t98 = (x849%(x850/(x851<x852)));

	if (t98 != 69LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x861 = INT64_MIN;
	static int32_t x862 = INT32_MIN;
	static uint8_t x863 = UINT8_MAX;
	static int32_t x864 = INT32_MAX;
	volatile int64_t t99 = 37930LL;

	t99 = (x861%(x862/(x863<x864)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

