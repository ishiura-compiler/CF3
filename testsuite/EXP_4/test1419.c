#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 9U;
static int32_t x4 = INT32_MIN;
int32_t t0 = -1;
volatile int64_t t1 = -3LL;
uint16_t x31 = 26068U;
volatile int64_t t2 = -27665394354260153LL;
static int64_t x35 = -2LL;
static uint8_t x56 = 21U;
int8_t x65 = INT8_MIN;
uint32_t x66 = 34351U;
static volatile int8_t x67 = INT8_MIN;
int8_t x72 = -15;
volatile uint32_t x75 = 1593775850U;
int64_t x88 = INT64_MIN;
volatile uint64_t x93 = UINT64_MAX;
int16_t x95 = INT16_MAX;
uint32_t x109 = 27544U;
uint8_t x114 = UINT8_MAX;
int16_t x119 = -1;
int32_t x120 = INT32_MIN;
int32_t x124 = 1490;
static volatile uint32_t t19 = 11U;
int8_t x128 = INT8_MAX;
uint32_t t20 = 154929610U;
uint16_t x151 = UINT16_MAX;
uint16_t x163 = UINT16_MAX;
int8_t x164 = INT8_MIN;
int32_t t24 = 3027187;
int32_t x169 = -1;
uint16_t x197 = 3425U;
int16_t x199 = -1653;
int32_t t27 = 361855984;
volatile int32_t t29 = 29;
int64_t x247 = -37LL;
uint8_t x248 = 1U;
uint8_t x290 = UINT8_MAX;
static int32_t x303 = -98837;
uint16_t x304 = UINT16_MAX;
volatile int32_t t36 = 67;
int16_t x311 = -1;
int64_t x314 = 1524677LL;
static int64_t x315 = INT64_MIN;
static int8_t x324 = INT8_MAX;
volatile int32_t t40 = -9;
int16_t x339 = INT16_MIN;
int32_t t43 = 13209955;
volatile int64_t t44 = 33829978LL;
int64_t x409 = 0LL;
uint8_t x411 = UINT8_MAX;
static int16_t x412 = 0;
static int64_t t52 = -302LL;
int32_t x455 = -101613266;
int8_t x465 = -2;
volatile int64_t x471 = 3609LL;
volatile int8_t x472 = INT8_MAX;
int64_t x480 = 3417336009598963227LL;
volatile uint64_t x487 = 429995LLU;
static uint8_t x498 = UINT8_MAX;
uint8_t x499 = UINT8_MAX;
static int32_t t61 = -63;
int32_t x509 = -93456967;
volatile uint8_t x510 = 2U;
int16_t x511 = -1;
static volatile uint64_t t64 = 14271547835801763LLU;
volatile int32_t x529 = INT32_MAX;
int64_t x541 = 147321596709002LL;
int8_t x542 = INT8_MAX;
static uint32_t x546 = UINT32_MAX;
static uint8_t x548 = 2U;
static uint16_t x549 = 6791U;
uint32_t x550 = 489U;
volatile int16_t x551 = -10;
uint64_t x572 = 602656838776LLU;
static volatile int32_t x575 = -10;
uint64_t t70 = 27LLU;
volatile uint8_t x602 = 0U;
int32_t x603 = 158908547;
volatile int32_t t74 = 239269090;
static uint64_t t75 = 22873LLU;
uint32_t x614 = 99519U;
uint32_t x622 = 333U;
volatile int16_t x623 = 649;
static volatile uint64_t t77 = 5LLU;
volatile int64_t x627 = INT64_MIN;
static int32_t x628 = INT32_MAX;
volatile int8_t x630 = INT8_MAX;
uint32_t x636 = UINT32_MAX;
uint64_t x637 = 10108167363LLU;
static uint64_t t81 = 2429208966771727815LLU;
static int64_t x641 = INT64_MIN;
uint64_t x642 = UINT64_MAX;
uint64_t t82 = 1281593LLU;
int16_t x649 = -1;
uint16_t x651 = 195U;
static int16_t x665 = INT16_MIN;
static int32_t x677 = -51549;
static int16_t x687 = -6;
static int8_t x688 = -1;
uint32_t x712 = UINT32_MAX;
static int32_t x722 = 198711;
static uint16_t x734 = UINT16_MAX;
uint32_t x735 = 1U;
int16_t x736 = 7;
int32_t t92 = -11834256;
int64_t x764 = -12743814555378LL;
int64_t t95 = -68529810752075721LL;
volatile int32_t t96 = -70;
uint64_t x813 = 495131159660LLU;
static uint32_t x826 = 449309205U;
int64_t t98 = -12895134326346124LL;


void f0(void) {
	static uint8_t x1 = 73U;
	int8_t x3 = INT8_MIN;

	t0 = (x1-(x2<<(x3<x4)));

	if (t0 != 64) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -946927LL;
	int32_t x10 = 14;
	int64_t x11 = -1LL;
	int64_t x12 = 0LL;

	t1 = (x9-(x10<<(x11<x12)));

	if (t1 != -946955LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x29 = 1LL;
	static volatile int32_t x30 = 0;
	volatile uint8_t x32 = 1U;

	t2 = (x29-(x30<<(x31<x32)));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x33 = 117U;
	static int32_t x34 = INT32_MAX;
	volatile int8_t x36 = INT8_MIN;
	int32_t t3 = 12;

	t3 = (x33-(x34<<(x35<x36)));

	if (t3 != -2147483530) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x37 = INT32_MAX;
	uint16_t x38 = 18713U;
	volatile int8_t x39 = INT8_MIN;
	int32_t x40 = -1;
	int32_t t4 = 345377;

	t4 = (x37-(x38<<(x39<x40)));

	if (t4 != 2147446221) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x41 = 13U;
	uint32_t x42 = 85678U;
	int8_t x43 = -1;
	int32_t x44 = INT32_MAX;
	volatile uint32_t t5 = 1441338U;

	t5 = (x41-(x42<<(x43<x44)));

	if (t5 != 4294795953U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = INT8_MIN;
	int16_t x46 = 96;
	volatile int32_t x47 = -1;
	int8_t x48 = 1;
	int32_t t6 = 2172;

	t6 = (x45-(x46<<(x47<x48)));

	if (t6 != -320) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x53 = -53;
	uint32_t x54 = UINT32_MAX;
	int16_t x55 = -1466;
	uint32_t t7 = 54421U;

	t7 = (x53-(x54<<(x55<x56)));

	if (t7 != 4294967245U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x57 = 8U;
	uint64_t x58 = UINT64_MAX;
	uint32_t x59 = 15689U;
	uint32_t x60 = 4118581U;
	volatile uint64_t t8 = 2710861688333LLU;

	t8 = (x57-(x58<<(x59<x60)));

	if (t8 != 10LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x68 = -2;
	uint32_t t9 = 1998262U;

	t9 = (x65-(x66<<(x67<x68)));

	if (t9 != 4294898466U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x69 = 860415222U;
	static uint16_t x70 = 20285U;
	uint32_t x71 = 2911527U;
	uint32_t t10 = 102885U;

	t10 = (x69-(x70<<(x71<x72)));

	if (t10 != 860374652U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x73 = 42144173U;
	volatile uint8_t x74 = 5U;
	int32_t x76 = -1;
	volatile uint32_t t11 = 41U;

	t11 = (x73-(x74<<(x75<x76)));

	if (t11 != 42144163U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x85 = -1;
	int64_t x86 = INT64_MAX;
	volatile int8_t x87 = INT8_MIN;
	int64_t t12 = INT64_MIN;

	t12 = (x85-(x86<<(x87<x88)));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x94 = INT32_MAX;
	int16_t x96 = -1;
	uint64_t t13 = 17186185870998LLU;

	t13 = (x93-(x94<<(x95<x96)));

	if (t13 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x97 = -1;
	volatile uint8_t x98 = 7U;
	int64_t x99 = INT64_MIN;
	volatile int16_t x100 = 5389;
	int32_t t14 = -42450;

	t14 = (x97-(x98<<(x99<x100)));

	if (t14 != -15) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x105 = -5966;
	static uint8_t x106 = 16U;
	int16_t x107 = INT16_MIN;
	uint32_t x108 = 155U;
	volatile int32_t t15 = -167;

	t15 = (x105-(x106<<(x107<x108)));

	if (t15 != -5982) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x110 = INT16_MAX;
	volatile uint8_t x111 = 0U;
	uint8_t x112 = 59U;
	volatile uint32_t t16 = 3617584U;

	t16 = (x109-(x110<<(x111<x112)));

	if (t16 != 4294929306U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x113 = UINT16_MAX;
	uint64_t x115 = UINT64_MAX;
	uint8_t x116 = UINT8_MAX;
	int32_t t17 = -27;

	t17 = (x113-(x114<<(x115<x116)));

	if (t17 != 65280) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x117 = INT32_MIN;
	static volatile int8_t x118 = 0;
	static volatile int32_t t18 = INT32_MIN;

	t18 = (x117-(x118<<(x119<x120)));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x121 = UINT32_MAX;
	int8_t x122 = 46;
	int8_t x123 = INT8_MIN;

	t19 = (x121-(x122<<(x123<x124)));

	if (t19 != 4294967203U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x125 = INT32_MAX;
	uint32_t x126 = 139U;
	int16_t x127 = -1357;

	t20 = (x125-(x126<<(x127<x128)));

	if (t20 != 2147483369U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x145 = 12U;
	volatile uint32_t x146 = 7550U;
	int32_t x147 = -1;
	uint16_t x148 = 9U;
	static volatile uint32_t t21 = 395U;

	t21 = (x145-(x146<<(x147<x148)));

	if (t21 != 4294952208U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x149 = UINT8_MAX;
	volatile uint64_t x150 = 48099508409106LLU;
	int32_t x152 = INT32_MIN;
	static uint64_t t22 = 21014873LLU;

	t22 = (x149-(x150<<(x151<x152)));

	if (t22 != 18446695974201142765LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x153 = 5148U;
	int16_t x154 = INT16_MAX;
	volatile int8_t x155 = 10;
	static int64_t x156 = INT64_MAX;
	volatile int32_t t23 = 2;

	t23 = (x153-(x154<<(x155<x156)));

	if (t23 != -60386) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x161 = INT16_MAX;
	volatile int8_t x162 = INT8_MAX;

	t24 = (x161-(x162<<(x163<x164)));

	if (t24 != 32640) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x170 = 1;
	static int64_t x171 = 1038841346341117176LL;
	volatile uint64_t x172 = UINT64_MAX;
	volatile int32_t t25 = 642582604;

	t25 = (x169-(x170<<(x171<x172)));

	if (t25 != -3) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x198 = INT8_MAX;
	static uint8_t x200 = 10U;
	volatile int32_t t26 = 5;

	t26 = (x197-(x198<<(x199<x200)));

	if (t26 != 3171) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x205 = INT8_MAX;
	static uint16_t x206 = 6U;
	int32_t x207 = INT32_MAX;
	int8_t x208 = INT8_MIN;

	t27 = (x205-(x206<<(x207<x208)));

	if (t27 != 121) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x217 = INT8_MAX;
	static uint32_t x218 = 12819280U;
	uint32_t x219 = 483303U;
	int64_t x220 = INT64_MIN;
	volatile uint32_t t28 = 31U;

	t28 = (x217-(x218<<(x219<x220)));

	if (t28 != 4282148143U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x229 = INT8_MIN;
	uint16_t x230 = UINT16_MAX;
	uint64_t x231 = 68LLU;
	uint16_t x232 = 207U;

	t29 = (x229-(x230<<(x231<x232)));

	if (t29 != -131198) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x237 = 790727057U;
	uint8_t x238 = 1U;
	uint32_t x239 = UINT32_MAX;
	uint32_t x240 = 497695U;
	volatile uint32_t t30 = 240717823U;

	t30 = (x237-(x238<<(x239<x240)));

	if (t30 != 790727056U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x245 = -29;
	int64_t x246 = 377339975291LL;
	static int64_t t31 = 114337878LL;

	t31 = (x245-(x246<<(x247<x248)));

	if (t31 != -754679950611LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x265 = -147448LL;
	int16_t x266 = INT16_MAX;
	static uint8_t x267 = UINT8_MAX;
	static int64_t x268 = INT64_MIN;
	static int64_t t32 = 242041000610025LL;

	t32 = (x265-(x266<<(x267<x268)));

	if (t32 != -180215LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x269 = 39U;
	volatile uint64_t x270 = 185LLU;
	int16_t x271 = INT16_MIN;
	volatile uint16_t x272 = 1075U;
	volatile uint64_t t33 = 20808369LLU;

	t33 = (x269-(x270<<(x271<x272)));

	if (t33 != 18446744073709551285LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x289 = 67848414LL;
	uint16_t x291 = UINT16_MAX;
	static int8_t x292 = 41;
	volatile int64_t t34 = -5582500LL;

	t34 = (x289-(x290<<(x291<x292)));

	if (t34 != 67848159LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x301 = -1LL;
	uint8_t x302 = 34U;
	volatile int64_t t35 = 20353393728663670LL;

	t35 = (x301-(x302<<(x303<x304)));

	if (t35 != -69LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x305 = 21075;
	uint16_t x306 = UINT16_MAX;
	int8_t x307 = 4;
	uint16_t x308 = 24939U;

	t36 = (x305-(x306<<(x307<x308)));

	if (t36 != -109995) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x309 = -1;
	static uint32_t x310 = UINT32_MAX;
	uint8_t x312 = 3U;
	volatile uint32_t t37 = 6162U;

	t37 = (x309-(x310<<(x311<x312)));

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x313 = INT8_MAX;
	int16_t x316 = 4532;
	static int64_t t38 = 1779760721LL;

	t38 = (x313-(x314<<(x315<x316)));

	if (t38 != -3049227LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x321 = -1;
	uint32_t x322 = 8156U;
	static volatile int32_t x323 = 387091422;
	uint32_t t39 = 372116U;

	t39 = (x321-(x322<<(x323<x324)));

	if (t39 != 4294959139U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x329 = 0U;
	int8_t x330 = INT8_MAX;
	int64_t x331 = -523635961LL;
	uint64_t x332 = 21541820166031194LLU;

	t40 = (x329-(x330<<(x331<x332)));

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x333 = INT8_MAX;
	uint8_t x334 = 3U;
	int64_t x335 = INT64_MIN;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t41 = -1668050;

	t41 = (x333-(x334<<(x335<x336)));

	if (t41 != 121) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x337 = -1;
	uint32_t x338 = UINT32_MAX;
	uint32_t x340 = UINT32_MAX;
	volatile uint32_t t42 = 116584263U;

	t42 = (x337-(x338<<(x339<x340)));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x357 = 61U;
	int16_t x358 = 16071;
	volatile uint16_t x359 = UINT16_MAX;
	int64_t x360 = INT64_MAX;

	t43 = (x357-(x358<<(x359<x360)));

	if (t43 != -32081) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x361 = -1;
	int64_t x362 = 1593070016LL;
	int16_t x363 = INT16_MAX;
	int16_t x364 = INT16_MIN;

	t44 = (x361-(x362<<(x363<x364)));

	if (t44 != -1593070017LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x369 = INT32_MAX;
	static int32_t x370 = 0;
	int32_t x371 = 49250;
	volatile int32_t x372 = INT32_MIN;
	int32_t t45 = INT32_MAX;

	t45 = (x369-(x370<<(x371<x372)));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x373 = 450;
	uint64_t x374 = UINT64_MAX;
	uint16_t x375 = 646U;
	uint32_t x376 = 1902474U;
	uint64_t t46 = 152357641LLU;

	t46 = (x373-(x374<<(x375<x376)));

	if (t46 != 452LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x377 = INT16_MIN;
	uint8_t x378 = 46U;
	volatile int32_t x379 = INT32_MAX;
	int16_t x380 = INT16_MIN;
	int32_t t47 = -326938;

	t47 = (x377-(x378<<(x379<x380)));

	if (t47 != -32814) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x385 = 1055533481015942LLU;
	uint64_t x386 = 123646570301739LLU;
	int16_t x387 = -1;
	int16_t x388 = INT16_MIN;
	uint64_t t48 = 1165596235529979997LLU;

	t48 = (x385-(x386<<(x387<x388)));

	if (t48 != 931886910714203LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x393 = -1501346LL;
	int16_t x394 = INT16_MAX;
	uint64_t x395 = 2933621LLU;
	volatile int16_t x396 = INT16_MIN;
	static int64_t t49 = -1879LL;

	t49 = (x393-(x394<<(x395<x396)));

	if (t49 != -1566880LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x410 = 16665733U;
	int64_t t50 = -9384778419068082LL;

	t50 = (x409-(x410<<(x411<x412)));

	if (t50 != -16665733LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x421 = INT16_MAX;
	uint32_t x422 = UINT32_MAX;
	uint16_t x423 = UINT16_MAX;
	int32_t x424 = -1;
	volatile uint32_t t51 = 6032U;

	t51 = (x421-(x422<<(x423<x424)));

	if (t51 != 32768U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x433 = -117947816865594489LL;
	int16_t x434 = 33;
	uint16_t x435 = 9U;
	uint32_t x436 = 24128U;

	t52 = (x433-(x434<<(x435<x436)));

	if (t52 != -117947816865594555LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x453 = -1LL;
	volatile int8_t x454 = INT8_MAX;
	volatile uint16_t x456 = 7U;
	volatile int64_t t53 = 1285490906LL;

	t53 = (x453-(x454<<(x455<x456)));

	if (t53 != -255LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x466 = 21U;
	volatile int8_t x467 = INT8_MIN;
	uint32_t x468 = 5199U;
	volatile int32_t t54 = -3;

	t54 = (x465-(x466<<(x467<x468)));

	if (t54 != -23) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x469 = UINT64_MAX;
	int32_t x470 = INT32_MAX;
	volatile uint64_t t55 = 82398LLU;

	t55 = (x469-(x470<<(x471<x472)));

	if (t55 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x477 = UINT8_MAX;
	uint64_t x478 = UINT64_MAX;
	static volatile uint32_t x479 = 1U;
	uint64_t t56 = 7530479LLU;

	t56 = (x477-(x478<<(x479<x480)));

	if (t56 != 257LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x485 = -1;
	int16_t x486 = INT16_MAX;
	volatile uint16_t x488 = 972U;
	volatile int32_t t57 = -795406260;

	t57 = (x485-(x486<<(x487<x488)));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x489 = 459U;
	uint8_t x490 = UINT8_MAX;
	int64_t x491 = INT64_MAX;
	int16_t x492 = 0;
	volatile uint32_t t58 = 3177890U;

	t58 = (x489-(x490<<(x491<x492)));

	if (t58 != 204U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x493 = 1;
	int8_t x494 = INT8_MAX;
	uint16_t x495 = 6098U;
	static uint16_t x496 = 3U;
	int32_t t59 = 4867390;

	t59 = (x493-(x494<<(x495<x496)));

	if (t59 != -126) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x497 = 61511U;
	uint8_t x500 = 6U;
	uint32_t t60 = 43299U;

	t60 = (x497-(x498<<(x499<x500)));

	if (t60 != 61256U) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x505 = INT32_MAX;
	volatile uint8_t x506 = UINT8_MAX;
	static volatile uint8_t x507 = 10U;
	int8_t x508 = -1;

	t61 = (x505-(x506<<(x507<x508)));

	if (t61 != 2147483392) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x512 = -1;
	int32_t t62 = 2;

	t62 = (x509-(x510<<(x511<x512)));

	if (t62 != -93456969) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x521 = INT16_MIN;
	static uint8_t x522 = UINT8_MAX;
	static int64_t x523 = 1LL;
	static uint16_t x524 = 6U;
	int32_t t63 = 47850550;

	t63 = (x521-(x522<<(x523<x524)));

	if (t63 != -33278) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x525 = INT16_MIN;
	uint64_t x526 = 6485434LLU;
	int16_t x527 = -1;
	uint8_t x528 = 14U;

	t64 = (x525-(x526<<(x527<x528)));

	if (t64 != 18446744073696547980LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x530 = 36U;
	uint8_t x531 = 50U;
	uint64_t x532 = UINT64_MAX;
	volatile int32_t t65 = -15;

	t65 = (x529-(x530<<(x531<x532)));

	if (t65 != 2147483575) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x543 = 183U;
	volatile int16_t x544 = INT16_MIN;
	int64_t t66 = 569LL;

	t66 = (x541-(x542<<(x543<x544)));

	if (t66 != 147321596708875LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x545 = 11U;
	uint16_t x547 = UINT16_MAX;
	volatile uint32_t t67 = 426184512U;

	t67 = (x545-(x546<<(x547<x548)));

	if (t67 != 12U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x552 = -512782668LL;
	static uint32_t t68 = 22722718U;

	t68 = (x549-(x550<<(x551<x552)));

	if (t68 != 6302U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x569 = -1;
	int16_t x570 = INT16_MAX;
	static volatile int64_t x571 = 2077246602LL;
	volatile int32_t t69 = 1;

	t69 = (x569-(x570<<(x571<x572)));

	if (t69 != -65535) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x573 = INT16_MIN;
	volatile uint64_t x574 = 56984141LLU;
	static volatile uint8_t x576 = 0U;

	t70 = (x573-(x574<<(x575<x576)));

	if (t70 != 18446744073595550566LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x581 = 347U;
	uint8_t x582 = 63U;
	int64_t x583 = INT64_MIN;
	uint32_t x584 = UINT32_MAX;
	volatile int32_t t71 = 894721;

	t71 = (x581-(x582<<(x583<x584)));

	if (t71 != 221) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x593 = -2;
	uint16_t x594 = UINT16_MAX;
	int8_t x595 = 0;
	static volatile int16_t x596 = -803;
	int32_t t72 = 746;

	t72 = (x593-(x594<<(x595<x596)));

	if (t72 != -65537) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x597 = 113921U;
	uint64_t x598 = UINT64_MAX;
	uint16_t x599 = 5U;
	int16_t x600 = 7573;
	static uint64_t t73 = 674563185982773184LLU;

	t73 = (x597-(x598<<(x599<x600)));

	if (t73 != 113923LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x601 = 0U;
	volatile uint16_t x604 = 2U;

	t74 = (x601-(x602<<(x603<x604)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x605 = 2U;
	static uint64_t x606 = 1193749510048415LLU;
	int16_t x607 = -1;
	static volatile int16_t x608 = -278;

	t75 = (x605-(x606<<(x607<x608)));

	if (t75 != 18445550324199503203LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x613 = INT16_MAX;
	volatile uint16_t x615 = 0U;
	uint8_t x616 = 2U;
	uint32_t t76 = 38165149U;

	t76 = (x613-(x614<<(x615<x616)));

	if (t76 != 4294801025U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x621 = UINT64_MAX;
	uint32_t x624 = 823U;

	t77 = (x621-(x622<<(x623<x624)));

	if (t77 != 18446744073709550949LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x625 = 8U;
	int8_t x626 = INT8_MAX;
	static int32_t t78 = 213760;

	t78 = (x625-(x626<<(x627<x628)));

	if (t78 != -246) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x629 = 1;
	uint8_t x631 = 13U;
	static volatile uint8_t x632 = UINT8_MAX;
	static int32_t t79 = 229;

	t79 = (x629-(x630<<(x631<x632)));

	if (t79 != -253) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x633 = 1U;
	uint32_t x634 = UINT32_MAX;
	int32_t x635 = -28693;
	uint32_t t80 = 1410096U;

	t80 = (x633-(x634<<(x635<x636)));

	if (t80 != 3U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x638 = 31;
	int8_t x639 = 7;
	int64_t x640 = INT64_MAX;

	t81 = (x637-(x638<<(x639<x640)));

	if (t81 != 10108167301LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x643 = UINT16_MAX;
	int64_t x644 = -7LL;

	t82 = (x641-(x642<<(x643<x644)));

	if (t82 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x645 = 8088U;
	int16_t x646 = INT16_MAX;
	int8_t x647 = INT8_MIN;
	uint8_t x648 = UINT8_MAX;
	static volatile int32_t t83 = 1123156;

	t83 = (x645-(x646<<(x647<x648)));

	if (t83 != -57446) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x650 = UINT8_MAX;
	uint16_t x652 = 62U;
	int32_t t84 = -1762;

	t84 = (x649-(x650<<(x651<x652)));

	if (t84 != -256) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x666 = 0;
	uint32_t x667 = 141949U;
	static volatile int32_t x668 = -15594965;
	volatile int32_t t85 = -1;

	t85 = (x665-(x666<<(x667<x668)));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x678 = 45072998U;
	volatile int8_t x679 = INT8_MIN;
	uint64_t x680 = UINT64_MAX;
	volatile uint32_t t86 = 19137U;

	t86 = (x677-(x678<<(x679<x680)));

	if (t86 != 4204769751U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x685 = INT64_MAX;
	uint32_t x686 = 0U;
	static volatile int64_t t87 = INT64_MAX;

	t87 = (x685-(x686<<(x687<x688)));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x693 = 320;
	int32_t x694 = 23930;
	int64_t x695 = 493717LL;
	static int32_t x696 = INT32_MIN;
	static int32_t t88 = -86061;

	t88 = (x693-(x694<<(x695<x696)));

	if (t88 != -23610) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x709 = INT8_MIN;
	static uint64_t x710 = UINT64_MAX;
	int8_t x711 = INT8_MIN;
	uint64_t t89 = 24LLU;

	t89 = (x709-(x710<<(x711<x712)));

	if (t89 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x721 = -1;
	int16_t x723 = 0;
	int64_t x724 = INT64_MIN;
	volatile int32_t t90 = -9145883;

	t90 = (x721-(x722<<(x723<x724)));

	if (t90 != -198712) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x733 = UINT16_MAX;
	volatile int32_t t91 = -6;

	t91 = (x733-(x734<<(x735<x736)));

	if (t91 != -65535) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x749 = INT16_MIN;
	volatile int8_t x750 = INT8_MAX;
	uint64_t x751 = 572207635403344LLU;
	volatile int8_t x752 = 1;

	t92 = (x749-(x750<<(x751<x752)));

	if (t92 != -32895) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x761 = INT32_MAX;
	int8_t x762 = INT8_MAX;
	uint8_t x763 = 52U;
	volatile int32_t t93 = -326943751;

	t93 = (x761-(x762<<(x763<x764)));

	if (t93 != 2147483520) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x765 = UINT16_MAX;
	uint16_t x766 = UINT16_MAX;
	volatile int16_t x767 = 11;
	int32_t x768 = 2;
	int32_t t94 = 39966066;

	t94 = (x765-(x766<<(x767<x768)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x781 = INT64_MAX;
	volatile int64_t x782 = INT64_MAX;
	uint8_t x783 = 12U;
	static int16_t x784 = 1;

	t95 = (x781-(x782<<(x783<x784)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x789 = -1;
	static uint16_t x790 = 12U;
	int32_t x791 = INT32_MIN;
	int16_t x792 = INT16_MAX;

	t96 = (x789-(x790<<(x791<x792)));

	if (t96 != -25) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x814 = 9313388326LLU;
	volatile int32_t x815 = -1;
	static int8_t x816 = 0;
	volatile uint64_t t97 = 4434729613297031459LLU;

	t97 = (x813-(x814<<(x815<x816)));

	if (t97 != 476504383008LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x825 = -394450180996798LL;
	volatile int16_t x827 = 56;
	uint64_t x828 = 562389786451725861LLU;

	t98 = (x825-(x826<<(x827<x828)));

	if (t98 != -394451079615208LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x833 = INT16_MAX;
	int16_t x834 = 0;
	volatile int8_t x835 = INT8_MIN;
	static int64_t x836 = 9497530263971LL;
	volatile int32_t t99 = 125058447;

	t99 = (x833-(x834<<(x835<x836)));

	if (t99 != 32767) { NG(); } else { ; }
	
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

