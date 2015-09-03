#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
static int16_t x2 = -2322;
int64_t x4 = -1LL;
static int64_t t0 = 215272655564207197LL;
uint32_t x33 = UINT32_MAX;
int64_t x41 = -1LL;
static int16_t x62 = INT16_MIN;
static int32_t t6 = 61186;
static int16_t x81 = 1879;
int16_t x82 = INT16_MIN;
int32_t x92 = INT32_MAX;
uint16_t x95 = 1994U;
int8_t x105 = -1;
int32_t x107 = INT32_MAX;
int64_t x110 = -1LL;
volatile uint32_t t13 = 195720U;
static uint16_t x136 = 1U;
int8_t x149 = INT8_MAX;
int32_t x166 = INT32_MIN;
int16_t x167 = 0;
uint32_t x174 = 4368U;
volatile int64_t x182 = INT64_MIN;
int8_t x183 = INT8_MIN;
uint64_t t18 = 505656274419360919LLU;
volatile int32_t t20 = 2990;
int32_t x237 = 0;
uint32_t x253 = 370830829U;
volatile int64_t x256 = 4152244495038534LL;
uint32_t x258 = 929113U;
int8_t x259 = INT8_MIN;
int32_t x260 = -1;
volatile uint64_t x307 = UINT64_MAX;
uint64_t x308 = 30645744042469LLU;
volatile int64_t x309 = -1LL;
static int8_t x312 = INT8_MAX;
volatile int64_t t31 = -263358887993501743LL;
int32_t t32 = -124635456;
static uint64_t x326 = 7513692424LLU;
int16_t x328 = INT16_MIN;
int8_t x362 = 0;
uint64_t x363 = UINT64_MAX;
int32_t x364 = -6;
int32_t x365 = -17487;
static volatile int32_t t35 = 201;
int16_t x375 = INT16_MAX;
volatile uint64_t t36 = 26255369028358142LLU;
int32_t x377 = 174388;
volatile int8_t x380 = INT8_MAX;
int64_t x386 = INT64_MIN;
uint32_t x387 = 15635U;
volatile int32_t x399 = INT32_MAX;
static uint32_t x400 = 17U;
int16_t x428 = INT16_MAX;
uint64_t x431 = UINT64_MAX;
int8_t x432 = INT8_MIN;
int16_t x453 = INT16_MAX;
int32_t x463 = 80;
int32_t t47 = -12557;
volatile int8_t x467 = -1;
int16_t x469 = -1;
int32_t x510 = INT32_MIN;
volatile int32_t x511 = 190768482;
uint32_t x527 = UINT32_MAX;
int32_t t54 = 17881147;
static uint16_t x552 = 4839U;
static uint8_t x573 = 12U;
static int32_t x594 = INT32_MIN;
int64_t x610 = -131113547058LL;
uint64_t t61 = 31017617182537478LLU;
int32_t x614 = INT32_MIN;
uint8_t x626 = 4U;
uint64_t t66 = 189338665LLU;
static volatile int32_t t68 = 19359;
int32_t x689 = INT32_MAX;
int64_t x691 = -1LL;
volatile uint32_t t70 = 34U;
int8_t x705 = 12;
int16_t x708 = INT16_MIN;
volatile int16_t x744 = INT16_MIN;
static volatile uint64_t x755 = 1026212255256LLU;
volatile int64_t t77 = 29504640386LL;
volatile int8_t x769 = INT8_MIN;
volatile int8_t x770 = 62;
int32_t t78 = -446093;
static uint8_t x833 = 17U;
volatile int8_t x841 = INT8_MIN;
static int32_t x844 = -1;
int64_t x852 = 1059752252223LL;
int32_t x854 = INT32_MIN;
volatile int64_t x863 = INT64_MAX;
volatile int32_t t84 = 2051075;
int64_t x871 = INT64_MAX;
uint32_t x875 = UINT32_MAX;
static int64_t t87 = -26LL;
volatile int64_t x880 = INT64_MIN;
static volatile uint64_t x900 = 263102968LLU;
int8_t x901 = 21;
int32_t x948 = INT32_MIN;
volatile uint64_t t93 = 1570509LLU;
int32_t x950 = INT32_MIN;
volatile int32_t t95 = 1;
int8_t x963 = -1;
static volatile int32_t t96 = -1547072;
static volatile uint16_t x966 = 1U;
volatile uint64_t x967 = UINT64_MAX;
static int16_t x968 = 324;
volatile int64_t t98 = -2322041405648910395LL;
uint32_t x979 = UINT32_MAX;
int64_t t99 = 33498431883LL;


void f0(void) {
	int8_t x3 = -1;

	t0 = ((x1/(x2<x3))-x4);

	if (t0 != -32767LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x17 = INT32_MIN;
	volatile int8_t x18 = 6;
	int32_t x19 = INT32_MAX;
	int64_t x20 = -1905173647LL;
	volatile int64_t t1 = 113671LL;

	t1 = ((x17/(x18<x19))-x20);

	if (t1 != -242310001LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x34 = 14542076LLU;
	int16_t x35 = INT16_MIN;
	static volatile uint64_t x36 = 2176LLU;
	volatile uint64_t t2 = 33LLU;

	t2 = ((x33/(x34<x35))-x36);

	if (t2 != 4294965119LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x37 = INT16_MIN;
	int32_t x38 = INT32_MIN;
	int8_t x39 = -1;
	int64_t x40 = -2065204401LL;
	static volatile int64_t t3 = -15818LL;

	t3 = ((x37/(x38<x39))-x40);

	if (t3 != 2065171633LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x42 = INT32_MIN;
	int8_t x43 = -1;
	int64_t x44 = INT64_MAX;
	volatile int64_t t4 = INT64_MIN;

	t4 = ((x41/(x42<x43))-x44);

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x61 = -1;
	volatile int32_t x63 = INT32_MAX;
	uint8_t x64 = 9U;
	static volatile int32_t t5 = -8;

	t5 = ((x61/(x62<x63))-x64);

	if (t5 != -10) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x73 = -5;
	volatile int64_t x74 = -26LL;
	uint64_t x75 = UINT64_MAX;
	int32_t x76 = -79;

	t6 = ((x73/(x74<x75))-x76);

	if (t6 != 74) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x83 = -437;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t7 = -5073826;

	t7 = ((x81/(x82<x83))-x84);

	if (t7 != 1624) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x89 = UINT16_MAX;
	int64_t x90 = -16996859384LL;
	uint8_t x91 = UINT8_MAX;
	static volatile int32_t t8 = 43286477;

	t8 = ((x89/(x90<x91))-x92);

	if (t8 != -2147418112) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x93 = 39534;
	static int64_t x94 = -152550LL;
	static uint64_t x96 = UINT64_MAX;
	static volatile uint64_t t9 = 274LLU;

	t9 = ((x93/(x94<x95))-x96);

	if (t9 != 39535LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x101 = -1;
	int32_t x102 = -34706193;
	int8_t x103 = 1;
	static volatile int64_t x104 = -18233134082448LL;
	int64_t t10 = 600972110049936772LL;

	t10 = ((x101/(x102<x103))-x104);

	if (t10 != 18233134082447LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x106 = 26U;
	uint32_t x108 = 5287U;
	uint32_t t11 = 3U;

	t11 = ((x105/(x106<x107))-x108);

	if (t11 != 4294962008U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x109 = UINT8_MAX;
	static volatile uint8_t x111 = 17U;
	int8_t x112 = INT8_MIN;
	static int32_t t12 = -344;

	t12 = ((x109/(x110<x111))-x112);

	if (t12 != 383) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x117 = 1779668U;
	static uint32_t x118 = UINT32_MAX;
	uint64_t x119 = 14452327450877738LLU;
	uint16_t x120 = UINT16_MAX;

	t13 = ((x117/(x118<x119))-x120);

	if (t13 != 1714133U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x133 = 59;
	uint64_t x134 = 7591697910LLU;
	int32_t x135 = INT32_MIN;
	volatile int32_t t14 = -9;

	t14 = ((x133/(x134<x135))-x136);

	if (t14 != 58) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x150 = INT32_MIN;
	static volatile int16_t x151 = 0;
	volatile uint16_t x152 = 1U;
	volatile int32_t t15 = 0;

	t15 = ((x149/(x150<x151))-x152);

	if (t15 != 126) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x165 = INT16_MIN;
	static volatile uint64_t x168 = 7360LLU;
	uint64_t t16 = 9077408051977418261LLU;

	t16 = ((x165/(x166<x167))-x168);

	if (t16 != 18446744073709511488LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x173 = -2462193;
	static volatile int32_t x175 = 61780899;
	volatile int32_t x176 = INT32_MIN;
	volatile int32_t t17 = 23030664;

	t17 = ((x173/(x174<x175))-x176);

	if (t17 != 2145021455) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x181 = 144570099773317LL;
	static uint64_t x184 = 677615LLU;

	t18 = ((x181/(x182<x183))-x184);

	if (t18 != 144570099095702LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x189 = -1;
	static uint8_t x190 = 3U;
	uint16_t x191 = UINT16_MAX;
	static int32_t x192 = INT32_MIN;
	int32_t t19 = INT32_MAX;

	t19 = ((x189/(x190<x191))-x192);

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x193 = UINT8_MAX;
	volatile int16_t x194 = -1;
	int8_t x195 = 6;
	volatile uint16_t x196 = 1189U;

	t20 = ((x193/(x194<x195))-x196);

	if (t20 != -934) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x197 = -930363;
	int8_t x198 = INT8_MIN;
	int8_t x199 = -17;
	volatile int8_t x200 = -63;
	volatile int32_t t21 = -363826405;

	t21 = ((x197/(x198<x199))-x200);

	if (t21 != -930300) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x213 = 1;
	int32_t x214 = -1;
	int64_t x215 = 375987245LL;
	int32_t x216 = 228260;
	static volatile int32_t t22 = -239946124;

	t22 = ((x213/(x214<x215))-x216);

	if (t22 != -228259) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x238 = 1851LLU;
	volatile int64_t x239 = INT64_MAX;
	uint64_t x240 = 564814279684293937LLU;
	static volatile uint64_t t23 = 126024452135807LLU;

	t23 = ((x237/(x238<x239))-x240);

	if (t23 != 17881929794025257679LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x254 = 31164986LLU;
	int64_t x255 = 312101371839723LL;
	volatile int64_t t24 = -107899LL;

	t24 = ((x253/(x254<x255))-x256);

	if (t24 != -4152244124207705LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x257 = 0U;
	volatile int32_t t25 = -25447;

	t25 = ((x257/(x258<x259))-x260);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x261 = 1049433600082LLU;
	static int64_t x262 = INT64_MIN;
	int16_t x263 = 1;
	static int8_t x264 = INT8_MIN;
	uint64_t t26 = 8122LLU;

	t26 = ((x261/(x262<x263))-x264);

	if (t26 != 1049433600210LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x265 = -1;
	uint32_t x266 = 152U;
	int32_t x267 = INT32_MIN;
	volatile int32_t x268 = INT32_MAX;
	static volatile int32_t t27 = INT32_MIN;

	t27 = ((x265/(x266<x267))-x268);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x285 = UINT64_MAX;
	int8_t x286 = -1;
	static uint16_t x287 = 1U;
	uint32_t x288 = 1950958943U;
	uint64_t t28 = 7715994LLU;

	t28 = ((x285/(x286<x287))-x288);

	if (t28 != 18446744071758592672LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x301 = -6162;
	volatile uint64_t x302 = 3030LLU;
	uint16_t x303 = UINT16_MAX;
	int16_t x304 = -1;
	static int32_t t29 = -134;

	t29 = ((x301/(x302<x303))-x304);

	if (t29 != -6161) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x305 = INT8_MIN;
	static volatile int32_t x306 = INT32_MIN;
	volatile uint64_t t30 = 7846922595964514373LLU;

	t30 = ((x305/(x306<x307))-x308);

	if (t30 != 18446713427965509019LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x310 = INT8_MIN;
	volatile int64_t x311 = INT64_MAX;

	t31 = ((x309/(x310<x311))-x312);

	if (t31 != -128LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x321 = -1;
	static int32_t x322 = INT32_MIN;
	uint16_t x323 = 3162U;
	int16_t x324 = INT16_MIN;

	t32 = ((x321/(x322<x323))-x324);

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x325 = INT32_MIN;
	uint64_t x327 = UINT64_MAX;
	int32_t t33 = 19304336;

	t33 = ((x325/(x326<x327))-x328);

	if (t33 != -2147450880) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x361 = INT16_MIN;
	static int32_t t34 = 3;

	t34 = ((x361/(x362<x363))-x364);

	if (t34 != -32762) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x366 = INT8_MIN;
	static int8_t x367 = 1;
	static int32_t x368 = -1;

	t35 = ((x365/(x366<x367))-x368);

	if (t35 != -17486) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x373 = UINT8_MAX;
	volatile int16_t x374 = -1;
	uint64_t x376 = UINT64_MAX;

	t36 = ((x373/(x374<x375))-x376);

	if (t36 != 256LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x378 = INT16_MIN;
	int64_t x379 = -1LL;
	volatile int32_t t37 = 1;

	t37 = ((x377/(x378<x379))-x380);

	if (t37 != 174261) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x381 = INT8_MIN;
	uint16_t x382 = 5U;
	uint16_t x383 = 94U;
	int16_t x384 = -1;
	volatile int32_t t38 = 301;

	t38 = ((x381/(x382<x383))-x384);

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x385 = INT8_MAX;
	int16_t x388 = INT16_MAX;
	volatile int32_t t39 = -204;

	t39 = ((x385/(x386<x387))-x388);

	if (t39 != -32640) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x393 = UINT32_MAX;
	int8_t x394 = INT8_MIN;
	uint64_t x395 = UINT64_MAX;
	int32_t x396 = INT32_MAX;
	uint32_t t40 = 297461563U;

	t40 = ((x393/(x394<x395))-x396);

	if (t40 != 2147483648U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x397 = -1LL;
	static uint64_t x398 = 1902919573LLU;
	volatile int64_t t41 = 8482734779171LL;

	t41 = ((x397/(x398<x399))-x400);

	if (t41 != -18LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x409 = -1LL;
	volatile int32_t x410 = -22;
	int32_t x411 = INT32_MAX;
	int64_t x412 = INT64_MIN;
	volatile int64_t t42 = INT64_MAX;

	t42 = ((x409/(x410<x411))-x412);

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x425 = 84U;
	int8_t x426 = INT8_MIN;
	uint8_t x427 = 48U;
	volatile int32_t t43 = 9352;

	t43 = ((x425/(x426<x427))-x428);

	if (t43 != -32683) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x429 = INT16_MAX;
	static int16_t x430 = INT16_MAX;
	int32_t t44 = -114;

	t44 = ((x429/(x430<x431))-x432);

	if (t44 != 32895) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x441 = 26U;
	volatile uint8_t x442 = 2U;
	static volatile uint32_t x443 = UINT32_MAX;
	int32_t x444 = INT32_MAX;
	volatile int32_t t45 = -239991563;

	t45 = ((x441/(x442<x443))-x444);

	if (t45 != -2147483621) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x454 = 0;
	static int32_t x455 = 20144;
	static volatile int32_t x456 = 3460;
	int32_t t46 = -5004637;

	t46 = ((x453/(x454<x455))-x456);

	if (t46 != 29307) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x461 = -1;
	int16_t x462 = INT16_MIN;
	static int32_t x464 = -1;

	t47 = ((x461/(x462<x463))-x464);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x465 = 1U;
	static volatile int16_t x466 = -5;
	int8_t x468 = INT8_MIN;
	int32_t t48 = -222100425;

	t48 = ((x465/(x466<x467))-x468);

	if (t48 != 129) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x470 = 324U;
	static int32_t x471 = INT32_MAX;
	static volatile int64_t x472 = -1LL;
	volatile int64_t t49 = 17528766398210LL;

	t49 = ((x469/(x470<x471))-x472);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x477 = UINT32_MAX;
	uint32_t x478 = 687U;
	uint32_t x479 = 59168368U;
	static int64_t x480 = -1LL;
	int64_t t50 = 9742237287430122LL;

	t50 = ((x477/(x478<x479))-x480);

	if (t50 != 4294967296LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x485 = 7U;
	uint8_t x486 = 5U;
	uint8_t x487 = 33U;
	int32_t x488 = -1;
	volatile int32_t t51 = 12;

	t51 = ((x485/(x486<x487))-x488);

	if (t51 != 8) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x509 = -238LL;
	uint16_t x512 = 2U;
	int64_t t52 = 4965LL;

	t52 = ((x509/(x510<x511))-x512);

	if (t52 != -240LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x525 = -1;
	uint32_t x526 = 73986U;
	int32_t x528 = INT32_MIN;
	volatile int32_t t53 = INT32_MAX;

	t53 = ((x525/(x526<x527))-x528);

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x533 = -2;
	static uint8_t x534 = 1U;
	int8_t x535 = INT8_MAX;
	uint16_t x536 = UINT16_MAX;

	t54 = ((x533/(x534<x535))-x536);

	if (t54 != -65537) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x549 = -1;
	int32_t x550 = -2;
	volatile uint64_t x551 = UINT64_MAX;
	volatile int32_t t55 = 29;

	t55 = ((x549/(x550<x551))-x552);

	if (t55 != -4840) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x561 = 771U;
	int32_t x562 = INT32_MIN;
	int16_t x563 = INT16_MIN;
	int16_t x564 = -2449;
	static uint32_t t56 = 6730840U;

	t56 = ((x561/(x562<x563))-x564);

	if (t56 != 3220U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x574 = 0U;
	uint32_t x575 = 2181866U;
	volatile int8_t x576 = INT8_MIN;
	volatile int32_t t57 = 0;

	t57 = ((x573/(x574<x575))-x576);

	if (t57 != 140) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x585 = INT8_MIN;
	static int64_t x586 = 6452LL;
	volatile uint64_t x587 = UINT64_MAX;
	int64_t x588 = -1LL;
	int64_t t58 = -1249911LL;

	t58 = ((x585/(x586<x587))-x588);

	if (t58 != -127LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x593 = 36U;
	static uint8_t x595 = 1U;
	volatile int64_t x596 = -1LL;
	volatile int64_t t59 = -509915LL;

	t59 = ((x593/(x594<x595))-x596);

	if (t59 != 37LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x601 = 133663115;
	int16_t x602 = INT16_MIN;
	int16_t x603 = INT16_MAX;
	volatile uint16_t x604 = 60U;
	int32_t t60 = 16182;

	t60 = ((x601/(x602<x603))-x604);

	if (t60 != 133663055) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x609 = UINT64_MAX;
	static uint64_t x611 = UINT64_MAX;
	int8_t x612 = -1;

	t61 = ((x609/(x610<x611))-x612);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x613 = 540990954LLU;
	int64_t x615 = -1LL;
	volatile int16_t x616 = INT16_MAX;
	volatile uint64_t t62 = 134822949125LLU;

	t62 = ((x613/(x614<x615))-x616);

	if (t62 != 540958187LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x625 = 1398LLU;
	int32_t x627 = INT32_MAX;
	int64_t x628 = 2LL;
	volatile uint64_t t63 = 1004774438230228LLU;

	t63 = ((x625/(x626<x627))-x628);

	if (t63 != 1396LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x633 = -4LL;
	volatile int8_t x634 = -2;
	uint8_t x635 = 8U;
	int64_t x636 = 27721226703LL;
	volatile int64_t t64 = -127LL;

	t64 = ((x633/(x634<x635))-x636);

	if (t64 != -27721226707LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x637 = -1;
	int8_t x638 = -1;
	volatile int8_t x639 = 0;
	int64_t x640 = INT64_MIN;
	int64_t t65 = INT64_MAX;

	t65 = ((x637/(x638<x639))-x640);

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x641 = INT64_MIN;
	int8_t x642 = INT8_MIN;
	volatile int64_t x643 = 7571404239784844LL;
	uint64_t x644 = UINT64_MAX;

	t66 = ((x641/(x642<x643))-x644);

	if (t66 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x657 = UINT32_MAX;
	int64_t x658 = INT64_MIN;
	static uint16_t x659 = UINT16_MAX;
	static int16_t x660 = INT16_MAX;
	uint32_t t67 = 6U;

	t67 = ((x657/(x658<x659))-x660);

	if (t67 != 4294934528U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x677 = -1;
	int16_t x678 = INT16_MAX;
	int64_t x679 = INT64_MAX;
	int16_t x680 = INT16_MIN;

	t68 = ((x677/(x678<x679))-x680);

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x681 = 5838402LLU;
	uint32_t x682 = 14799U;
	int16_t x683 = INT16_MIN;
	int16_t x684 = INT16_MIN;
	volatile uint64_t t69 = 484LLU;

	t69 = ((x681/(x682<x683))-x684);

	if (t69 != 5871170LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x690 = INT32_MIN;
	static uint32_t x692 = 11U;

	t70 = ((x689/(x690<x691))-x692);

	if (t70 != 2147483636U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x701 = 21907U;
	int16_t x702 = INT16_MIN;
	uint8_t x703 = 13U;
	int16_t x704 = INT16_MIN;
	static uint32_t t71 = 1386710850U;

	t71 = ((x701/(x702<x703))-x704);

	if (t71 != 54675U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x706 = -1;
	volatile int16_t x707 = 1;
	static int32_t t72 = -404;

	t72 = ((x705/(x706<x707))-x708);

	if (t72 != 32780) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x709 = UINT16_MAX;
	int64_t x710 = -4009120875235728LL;
	int32_t x711 = INT32_MIN;
	int16_t x712 = -1;
	int32_t t73 = -292628105;

	t73 = ((x709/(x710<x711))-x712);

	if (t73 != 65536) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x741 = -1;
	uint64_t x742 = 39189124232LLU;
	static int8_t x743 = INT8_MIN;
	int32_t t74 = 3337252;

	t74 = ((x741/(x742<x743))-x744);

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x753 = 43329370820162LL;
	int32_t x754 = 13115;
	int16_t x756 = 460;
	int64_t t75 = -571824575815LL;

	t75 = ((x753/(x754<x755))-x756);

	if (t75 != 43329370819702LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x761 = UINT32_MAX;
	int64_t x762 = -100LL;
	uint16_t x763 = 30001U;
	static volatile int16_t x764 = -627;
	uint32_t t76 = 4U;

	t76 = ((x761/(x762<x763))-x764);

	if (t76 != 626U) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x765 = 2;
	volatile uint16_t x766 = 0U;
	uint64_t x767 = UINT64_MAX;
	int64_t x768 = 105504405218058LL;

	t77 = ((x765/(x766<x767))-x768);

	if (t77 != -105504405218056LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x771 = 280369462585430388LLU;
	int8_t x772 = INT8_MAX;

	t78 = ((x769/(x770<x771))-x772);

	if (t78 != -255) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x825 = UINT16_MAX;
	int16_t x826 = INT16_MIN;
	static int16_t x827 = -15;
	static uint64_t x828 = UINT64_MAX;
	static volatile uint64_t t79 = 0LLU;

	t79 = ((x825/(x826<x827))-x828);

	if (t79 != 65536LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x834 = INT8_MIN;
	int32_t x835 = -1;
	static uint8_t x836 = 2U;
	volatile int32_t t80 = -1311630;

	t80 = ((x833/(x834<x835))-x836);

	if (t80 != 15) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x842 = INT64_MIN;
	int8_t x843 = 5;
	volatile int32_t t81 = 6968279;

	t81 = ((x841/(x842<x843))-x844);

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x849 = 8936U;
	static int8_t x850 = INT8_MIN;
	uint16_t x851 = UINT16_MAX;
	volatile int64_t t82 = -290510832825426LL;

	t82 = ((x849/(x850<x851))-x852);

	if (t82 != -1059752243287LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x853 = 40;
	volatile int32_t x855 = 9070;
	int64_t x856 = -1LL;
	volatile int64_t t83 = 2728624770737949LL;

	t83 = ((x853/(x854<x855))-x856);

	if (t83 != 41LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x861 = -64;
	static volatile int32_t x862 = 1377776;
	int32_t x864 = -37256642;

	t84 = ((x861/(x862<x863))-x864);

	if (t84 != 37256578) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x865 = 2U;
	static int8_t x866 = -21;
	uint8_t x867 = 23U;
	int16_t x868 = INT16_MAX;
	static int32_t t85 = -470436;

	t85 = ((x865/(x866<x867))-x868);

	if (t85 != -32765) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x869 = UINT8_MAX;
	int64_t x870 = -1LL;
	int16_t x872 = -423;
	int32_t t86 = 22717275;

	t86 = ((x869/(x870<x871))-x872);

	if (t86 != 678) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x873 = 27824U;
	int8_t x874 = INT8_MIN;
	volatile int64_t x876 = INT64_MAX;

	t87 = ((x873/(x874<x875))-x876);

	if (t87 != -9223372036854747983LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x877 = INT32_MIN;
	uint64_t x878 = 163444LLU;
	int64_t x879 = INT64_MAX;
	static volatile int64_t t88 = 10LL;

	t88 = ((x877/(x878<x879))-x880);

	if (t88 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x897 = 14U;
	int8_t x898 = INT8_MIN;
	int8_t x899 = 40;
	volatile uint64_t t89 = 15772418856LLU;

	t89 = ((x897/(x898<x899))-x900);

	if (t89 != 18446744073446448662LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x902 = -1;
	int16_t x903 = 1985;
	int8_t x904 = INT8_MIN;
	int32_t t90 = 6346029;

	t90 = ((x901/(x902<x903))-x904);

	if (t90 != 149) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x909 = 52335LLU;
	static int64_t x910 = INT64_MIN;
	int32_t x911 = INT32_MAX;
	uint16_t x912 = 446U;
	uint64_t t91 = 52LLU;

	t91 = ((x909/(x910<x911))-x912);

	if (t91 != 51889LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x937 = -1;
	volatile int8_t x938 = 42;
	uint32_t x939 = 5352851U;
	uint16_t x940 = 6790U;
	static int32_t t92 = -32932804;

	t92 = ((x937/(x938<x939))-x940);

	if (t92 != -6791) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x945 = 433487330287LLU;
	static int8_t x946 = -1;
	uint8_t x947 = 74U;

	t93 = ((x945/(x946<x947))-x948);

	if (t93 != 435634813935LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x949 = 7388495810LLU;
	int32_t x951 = INT32_MAX;
	static int64_t x952 = 3147368242LL;
	static volatile uint64_t t94 = 7625618995131LLU;

	t94 = ((x949/(x950<x951))-x952);

	if (t94 != 4241127568LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x957 = 4;
	volatile uint16_t x958 = 2U;
	uint16_t x959 = UINT16_MAX;
	int8_t x960 = INT8_MIN;

	t95 = ((x957/(x958<x959))-x960);

	if (t95 != 132) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x961 = INT8_MIN;
	int8_t x962 = -52;
	int16_t x964 = 2896;

	t96 = ((x961/(x962<x963))-x964);

	if (t96 != -3024) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x965 = 72667006039LLU;
	uint64_t t97 = 2LLU;

	t97 = ((x965/(x966<x967))-x968);

	if (t97 != 72667005715LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x969 = 6388LL;
	volatile int64_t x970 = -1980550LL;
	static int64_t x971 = 537269930LL;
	static int8_t x972 = -1;

	t98 = ((x969/(x970<x971))-x972);

	if (t98 != 6389LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x977 = INT64_MIN;
	volatile int32_t x978 = INT32_MIN;
	int32_t x980 = INT32_MIN;

	t99 = ((x977/(x978<x979))-x980);

	if (t99 != -9223372034707292160LL) { NG(); } else { ; }
	
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

