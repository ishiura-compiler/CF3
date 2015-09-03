#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x1 = 474984796062427520LL;
int64_t t0 = -7031404462429LL;
uint16_t x5 = UINT16_MAX;
static volatile int16_t x6 = INT16_MIN;
uint8_t x8 = 111U;
static volatile int32_t t1 = -355;
uint16_t x21 = UINT16_MAX;
volatile int32_t t4 = -3620;
int8_t x27 = -1;
volatile int8_t x42 = INT8_MAX;
int8_t x45 = 1;
int32_t t7 = -908471;
uint32_t x57 = UINT32_MAX;
static volatile int8_t x58 = 23;
int64_t x61 = 93273004LL;
static int64_t t11 = -2047LL;
uint64_t x85 = UINT64_MAX;
uint64_t t13 = UINT64_MAX;
uint32_t x100 = UINT32_MAX;
int64_t t15 = -2733987645127LL;
static volatile int64_t x125 = 143872LL;
volatile int64_t x126 = -13397LL;
int64_t x127 = INT64_MIN;
uint8_t x137 = UINT8_MAX;
static int8_t x146 = INT8_MAX;
static int16_t x176 = INT16_MAX;
volatile int32_t t23 = 5912;
int16_t x195 = -1;
uint16_t x245 = 6077U;
volatile int16_t x258 = INT16_MIN;
static volatile int64_t x260 = -127652469428LL;
int32_t x262 = 23786620;
uint64_t t30 = UINT64_MAX;
uint64_t x281 = 10316LLU;
int16_t x284 = INT16_MIN;
int64_t x289 = INT64_MAX;
uint16_t x295 = 245U;
volatile uint8_t x296 = 48U;
uint16_t x306 = 6184U;
int64_t x307 = INT64_MAX;
int32_t t37 = 263;
volatile uint32_t x312 = 44716U;
volatile int32_t t38 = INT32_MAX;
volatile uint8_t x325 = 99U;
volatile int64_t x326 = -8LL;
int32_t t39 = -995;
static int32_t t44 = -23053577;
static volatile uint8_t x368 = 5U;
uint64_t t46 = 59570LLU;
uint8_t x369 = 58U;
uint64_t x371 = UINT64_MAX;
int32_t x373 = 13232496;
volatile int8_t x375 = INT8_MIN;
volatile uint8_t x376 = UINT8_MAX;
static volatile int32_t x383 = -1;
int32_t t50 = -1770;
int8_t x404 = -5;
int64_t x414 = -56051606878300LL;
int64_t x415 = 38LL;
uint16_t x416 = UINT16_MAX;
static int32_t t53 = -13093;
int32_t t54 = -30714891;
int16_t x422 = -1;
uint8_t x423 = 33U;
static volatile uint64_t t55 = UINT64_MAX;
volatile uint64_t x426 = 448016116799LLU;
int8_t x434 = -2;
uint64_t x440 = 439604690455LLU;
static uint16_t x457 = 8U;
int32_t x459 = 32353;
uint32_t x460 = UINT32_MAX;
int32_t t62 = 0;
uint64_t x475 = 14624734LLU;
int64_t t65 = 734787646321LL;
static uint32_t t66 = UINT32_MAX;
int64_t x495 = INT64_MIN;
uint8_t x498 = UINT8_MAX;
uint16_t x506 = UINT16_MAX;
int32_t x507 = -3682;
int32_t x515 = INT32_MIN;
uint16_t x527 = 4U;
uint64_t x547 = 330022421LLU;
uint32_t x548 = 1840U;
volatile uint64_t t78 = 14054856613648LLU;
volatile int8_t x567 = -1;
int32_t x570 = INT32_MAX;
int16_t x598 = -1;
uint64_t x599 = 72376373756503080LLU;
volatile uint16_t x611 = 21203U;
int32_t t83 = 0;
int64_t x638 = INT64_MAX;
int32_t x642 = 4912;
int32_t x643 = INT32_MAX;
volatile uint16_t x657 = UINT16_MAX;
int32_t x659 = -264900694;
static uint32_t x661 = UINT32_MAX;
static int32_t x662 = INT32_MAX;
int64_t x663 = -834885591807LL;
int32_t x666 = -1;
volatile int8_t x668 = 1;
int64_t x697 = 974170LL;
int64_t x698 = INT64_MIN;
volatile int64_t t92 = -60799490529LL;
uint16_t x712 = 5U;
uint8_t x729 = 15U;
int8_t x736 = INT8_MIN;
int64_t x748 = 208LL;


void f0(void) {
	int32_t x2 = INT32_MIN;
	int16_t x3 = 25;
	int64_t x4 = -1LL;

	t0 = (x1>>((x2==x3)%x4));

	if (t0 != 474984796062427520LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x7 = -14544317799LL;

	t1 = (x5>>((x6==x7)%x8));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = 29U;
	static volatile uint32_t x14 = UINT32_MAX;
	volatile int8_t x15 = -1;
	static int64_t x16 = -1LL;
	volatile int32_t t2 = 19572780;

	t2 = (x13>>((x14==x15)%x16));

	if (t2 != 29) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 1U;
	int64_t x18 = INT64_MIN;
	volatile uint64_t x19 = UINT64_MAX;
	int32_t x20 = -20426510;
	int32_t t3 = -3509898;

	t3 = (x17>>((x18==x19)%x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = 279;
	int32_t x23 = 8853;
	int16_t x24 = INT16_MAX;

	t4 = (x21>>((x22==x23)%x24));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 4340U;
	uint32_t x26 = 53011426U;
	uint64_t x28 = UINT64_MAX;
	static volatile int32_t t5 = -967999949;

	t5 = (x25>>((x26==x27)%x28));

	if (t5 != 4340) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = 0LL;
	uint64_t x43 = 0LLU;
	int16_t x44 = INT16_MIN;
	int64_t t6 = -111423108440393LL;

	t6 = (x41>>((x42==x43)%x44));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x46 = 3U;
	volatile int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MIN;

	t7 = (x45>>((x46==x47)%x48));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = 7070199438852LLU;
	int32_t x50 = 121036;
	uint32_t x51 = 942U;
	int32_t x52 = INT32_MIN;
	volatile uint64_t t8 = 6837LLU;

	t8 = (x49>>((x50==x51)%x52));

	if (t8 != 7070199438852LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x53 = 3U;
	int8_t x54 = INT8_MIN;
	static int32_t x55 = INT32_MIN;
	int64_t x56 = INT64_MIN;
	int32_t t9 = 3459474;

	t9 = (x53>>((x54==x55)%x56));

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x59 = INT8_MIN;
	volatile int16_t x60 = INT16_MIN;
	volatile uint32_t t10 = UINT32_MAX;

	t10 = (x57>>((x58==x59)%x60));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x62 = INT32_MIN;
	int8_t x63 = INT8_MIN;
	int8_t x64 = INT8_MIN;

	t11 = (x61>>((x62==x63)%x64));

	if (t11 != 93273004LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x73 = UINT64_MAX;
	static int8_t x74 = -14;
	int16_t x75 = -1;
	int8_t x76 = -1;
	uint64_t t12 = UINT64_MAX;

	t12 = (x73>>((x74==x75)%x76));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x86 = INT32_MIN;
	uint32_t x87 = 35007U;
	int8_t x88 = INT8_MIN;

	t13 = (x85>>((x86==x87)%x88));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x97 = UINT8_MAX;
	uint8_t x98 = 1U;
	uint16_t x99 = 435U;
	volatile int32_t t14 = 873;

	t14 = (x97>>((x98==x99)%x100));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x109 = 33LL;
	int64_t x110 = INT64_MIN;
	int64_t x111 = -1LL;
	uint16_t x112 = 57U;

	t15 = (x109>>((x110==x111)%x112));

	if (t15 != 33LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x113 = 0U;
	uint32_t x114 = UINT32_MAX;
	int16_t x115 = INT16_MAX;
	int16_t x116 = -1843;
	uint32_t t16 = 7U;

	t16 = (x113>>((x114==x115)%x116));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x117 = 31040U;
	volatile int16_t x118 = -1;
	int64_t x119 = INT64_MIN;
	static uint32_t x120 = 38009U;
	volatile uint32_t t17 = 869372U;

	t17 = (x117>>((x118==x119)%x120));

	if (t17 != 31040U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x128 = INT8_MAX;
	int64_t t18 = 252365LL;

	t18 = (x125>>((x126==x127)%x128));

	if (t18 != 143872LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x133 = INT8_MAX;
	int8_t x134 = INT8_MIN;
	volatile int32_t x135 = -1;
	int8_t x136 = INT8_MAX;
	volatile int32_t t19 = 26;

	t19 = (x133>>((x134==x135)%x136));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x138 = 28U;
	static uint16_t x139 = 0U;
	static uint64_t x140 = 1LLU;
	static int32_t t20 = -33;

	t20 = (x137>>((x138==x139)%x140));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x145 = 2;
	uint32_t x147 = 5529U;
	int32_t x148 = 16;
	volatile int32_t t21 = 2;

	t21 = (x145>>((x146==x147)%x148));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x149 = 16759U;
	volatile int32_t x150 = -1;
	int16_t x151 = 79;
	static uint64_t x152 = 126724880663523LLU;
	volatile uint32_t t22 = 1042193232U;

	t22 = (x149>>((x150==x151)%x152));

	if (t22 != 16759U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x173 = 1;
	uint8_t x174 = 1U;
	int8_t x175 = INT8_MIN;

	t23 = (x173>>((x174==x175)%x176));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x181 = UINT16_MAX;
	int16_t x182 = INT16_MIN;
	int16_t x183 = INT16_MAX;
	int16_t x184 = INT16_MIN;
	volatile int32_t t24 = -409;

	t24 = (x181>>((x182==x183)%x184));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x193 = 39;
	uint16_t x194 = UINT16_MAX;
	static volatile int32_t x196 = -393;
	int32_t t25 = -15669;

	t25 = (x193>>((x194==x195)%x196));

	if (t25 != 39) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x201 = UINT8_MAX;
	uint8_t x202 = 105U;
	int64_t x203 = -1534945489LL;
	int16_t x204 = INT16_MIN;
	volatile int32_t t26 = 6;

	t26 = (x201>>((x202==x203)%x204));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x241 = 425U;
	int32_t x242 = INT32_MAX;
	int16_t x243 = INT16_MAX;
	int8_t x244 = INT8_MIN;
	volatile int32_t t27 = 2414;

	t27 = (x241>>((x242==x243)%x244));

	if (t27 != 425) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x246 = INT16_MIN;
	int64_t x247 = 13990298589806618LL;
	int32_t x248 = INT32_MAX;
	static volatile int32_t t28 = -41785;

	t28 = (x245>>((x246==x247)%x248));

	if (t28 != 6077) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x257 = UINT8_MAX;
	uint8_t x259 = 2U;
	static int32_t t29 = 53;

	t29 = (x257>>((x258==x259)%x260));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x261 = UINT64_MAX;
	int8_t x263 = -1;
	int16_t x264 = INT16_MIN;

	t30 = (x261>>((x262==x263)%x264));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x265 = 0;
	int32_t x266 = INT32_MAX;
	static uint8_t x267 = 46U;
	static volatile int16_t x268 = -1;
	volatile int32_t t31 = -2631388;

	t31 = (x265>>((x266==x267)%x268));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x273 = 12LL;
	uint64_t x274 = UINT64_MAX;
	int16_t x275 = INT16_MIN;
	volatile int16_t x276 = INT16_MIN;
	volatile int64_t t32 = 10874995238LL;

	t32 = (x273>>((x274==x275)%x276));

	if (t32 != 12LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x282 = -1259986135018LL;
	int8_t x283 = INT8_MIN;
	volatile uint64_t t33 = 2130880417344744090LLU;

	t33 = (x281>>((x282==x283)%x284));

	if (t33 != 10316LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x290 = INT32_MIN;
	uint16_t x291 = UINT16_MAX;
	static uint64_t x292 = UINT64_MAX;
	int64_t t34 = INT64_MAX;

	t34 = (x289>>((x290==x291)%x292));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x293 = 7;
	int64_t x294 = -1LL;
	volatile int32_t t35 = 215486;

	t35 = (x293>>((x294==x295)%x296));

	if (t35 != 7) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x297 = 2;
	int8_t x298 = 48;
	int32_t x299 = INT32_MAX;
	int8_t x300 = -6;
	static int32_t t36 = 0;

	t36 = (x297>>((x298==x299)%x300));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x305 = INT16_MAX;
	uint8_t x308 = 13U;

	t37 = (x305>>((x306==x307)%x308));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x309 = INT32_MAX;
	static int8_t x310 = INT8_MIN;
	int32_t x311 = -358094;

	t38 = (x309>>((x310==x311)%x312));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x327 = UINT8_MAX;
	volatile int64_t x328 = -256637960680333813LL;

	t39 = (x325>>((x326==x327)%x328));

	if (t39 != 99) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x329 = 1790LLU;
	static volatile uint16_t x330 = UINT16_MAX;
	static int32_t x331 = INT32_MIN;
	int32_t x332 = INT32_MIN;
	uint64_t t40 = 72LLU;

	t40 = (x329>>((x330==x331)%x332));

	if (t40 != 1790LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x337 = INT16_MAX;
	static int64_t x338 = INT64_MAX;
	volatile int16_t x339 = INT16_MIN;
	int64_t x340 = -156330996113739LL;
	static volatile int32_t t41 = 575;

	t41 = (x337>>((x338==x339)%x340));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x341 = UINT8_MAX;
	int16_t x342 = 10;
	uint32_t x343 = UINT32_MAX;
	uint32_t x344 = 896783691U;
	int32_t t42 = 1485554;

	t42 = (x341>>((x342==x343)%x344));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x353 = UINT16_MAX;
	uint32_t x354 = 40859U;
	uint64_t x355 = 62866084LLU;
	static int64_t x356 = INT64_MAX;
	volatile int32_t t43 = 26721;

	t43 = (x353>>((x354==x355)%x356));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x357 = UINT16_MAX;
	static uint16_t x358 = 366U;
	int64_t x359 = INT64_MIN;
	volatile uint32_t x360 = 47681132U;

	t44 = (x357>>((x358==x359)%x360));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x361 = INT8_MAX;
	uint32_t x362 = UINT32_MAX;
	uint8_t x363 = 64U;
	int64_t x364 = -538763998451LL;
	static int32_t t45 = 23049;

	t45 = (x361>>((x362==x363)%x364));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x365 = 0LLU;
	int16_t x366 = 43;
	uint64_t x367 = 125815452965493LLU;

	t46 = (x365>>((x366==x367)%x368));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x370 = -57;
	volatile uint8_t x372 = UINT8_MAX;
	int32_t t47 = 477;

	t47 = (x369>>((x370==x371)%x372));

	if (t47 != 58) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x374 = UINT32_MAX;
	static volatile int32_t t48 = -124;

	t48 = (x373>>((x374==x375)%x376));

	if (t48 != 13232496) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x381 = INT8_MAX;
	int16_t x382 = INT16_MIN;
	int16_t x384 = -1;
	int32_t t49 = 27;

	t49 = (x381>>((x382==x383)%x384));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x385 = 2667612;
	uint32_t x386 = UINT32_MAX;
	uint8_t x387 = 29U;
	volatile int64_t x388 = -1LL;

	t50 = (x385>>((x386==x387)%x388));

	if (t50 != 2667612) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x393 = INT8_MAX;
	volatile int8_t x394 = -2;
	static volatile int8_t x395 = INT8_MIN;
	static int32_t x396 = -1;
	int32_t t51 = 239142487;

	t51 = (x393>>((x394==x395)%x396));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x401 = 1U;
	int16_t x402 = INT16_MIN;
	volatile int32_t x403 = INT32_MAX;
	int32_t t52 = 126911351;

	t52 = (x401>>((x402==x403)%x404));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x413 = 7443;

	t53 = (x413>>((x414==x415)%x416));

	if (t53 != 7443) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x417 = 72;
	volatile int32_t x418 = INT32_MIN;
	uint16_t x419 = 5U;
	static int16_t x420 = -1;

	t54 = (x417>>((x418==x419)%x420));

	if (t54 != 72) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x421 = UINT64_MAX;
	int16_t x424 = 437;

	t55 = (x421>>((x422==x423)%x424));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x425 = 0U;
	int8_t x427 = -1;
	volatile int32_t x428 = -1;
	int32_t t56 = 5672545;

	t56 = (x425>>((x426==x427)%x428));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x429 = 8115U;
	int8_t x430 = INT8_MIN;
	static int64_t x431 = INT64_MAX;
	int16_t x432 = -31;
	volatile int32_t t57 = -3876684;

	t57 = (x429>>((x430==x431)%x432));

	if (t57 != 8115) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x433 = INT16_MAX;
	uint64_t x435 = UINT64_MAX;
	int16_t x436 = -1;
	volatile int32_t t58 = 36;

	t58 = (x433>>((x434==x435)%x436));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x437 = 1U;
	static int32_t x438 = 167638247;
	uint16_t x439 = 58U;
	int32_t t59 = -44431;

	t59 = (x437>>((x438==x439)%x440));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x441 = 3572;
	uint8_t x442 = 3U;
	static int64_t x443 = 86563358932888LL;
	uint8_t x444 = UINT8_MAX;
	static volatile int32_t t60 = -4;

	t60 = (x441>>((x442==x443)%x444));

	if (t60 != 3572) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x458 = UINT16_MAX;
	int32_t t61 = -3;

	t61 = (x457>>((x458==x459)%x460));

	if (t61 != 8) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x461 = 1678U;
	volatile int32_t x462 = 0;
	volatile uint16_t x463 = 33U;
	uint16_t x464 = 27U;

	t62 = (x461>>((x462==x463)%x464));

	if (t62 != 1678) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x469 = 54;
	int64_t x470 = -18LL;
	volatile uint8_t x471 = 3U;
	int16_t x472 = -1;
	int32_t t63 = -93;

	t63 = (x469>>((x470==x471)%x472));

	if (t63 != 54) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x473 = INT64_MAX;
	volatile int8_t x474 = INT8_MAX;
	uint64_t x476 = 1008985974256681318LLU;
	volatile int64_t t64 = INT64_MAX;

	t64 = (x473>>((x474==x475)%x476));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x481 = 0LL;
	int32_t x482 = -1;
	int64_t x483 = 856718904771908924LL;
	int64_t x484 = -1LL;

	t65 = (x481>>((x482==x483)%x484));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x485 = UINT32_MAX;
	int16_t x486 = 3;
	int16_t x487 = 3118;
	uint32_t x488 = 15U;

	t66 = (x485>>((x486==x487)%x488));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x489 = UINT8_MAX;
	volatile uint64_t x490 = 4685563935235LLU;
	int16_t x491 = 0;
	volatile int64_t x492 = INT64_MIN;
	static int32_t t67 = 1511;

	t67 = (x489>>((x490==x491)%x492));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x493 = UINT32_MAX;
	uint32_t x494 = 159563U;
	int32_t x496 = -969;
	static uint32_t t68 = UINT32_MAX;

	t68 = (x493>>((x494==x495)%x496));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x497 = 0;
	static uint64_t x499 = UINT64_MAX;
	int16_t x500 = INT16_MAX;
	static int32_t t69 = -28760578;

	t69 = (x497>>((x498==x499)%x500));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x505 = INT64_MAX;
	static int16_t x508 = -1;
	static int64_t t70 = INT64_MAX;

	t70 = (x505>>((x506==x507)%x508));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x513 = 141;
	int16_t x514 = 3344;
	int64_t x516 = -1LL;
	volatile int32_t t71 = 1;

	t71 = (x513>>((x514==x515)%x516));

	if (t71 != 141) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x525 = UINT32_MAX;
	uint16_t x526 = UINT16_MAX;
	uint32_t x528 = 205U;
	uint32_t t72 = UINT32_MAX;

	t72 = (x525>>((x526==x527)%x528));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x529 = INT16_MAX;
	static int16_t x530 = INT16_MAX;
	int16_t x531 = -1;
	uint16_t x532 = 22476U;
	volatile int32_t t73 = 0;

	t73 = (x529>>((x530==x531)%x532));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x533 = 1U;
	volatile int64_t x534 = INT64_MAX;
	volatile uint32_t x535 = 2086449U;
	volatile uint16_t x536 = UINT16_MAX;
	volatile int32_t t74 = 2;

	t74 = (x533>>((x534==x535)%x536));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x537 = 290U;
	uint64_t x538 = 16165769661574691LLU;
	int64_t x539 = INT64_MIN;
	static uint64_t x540 = UINT64_MAX;
	volatile uint32_t t75 = 633412U;

	t75 = (x537>>((x538==x539)%x540));

	if (t75 != 290U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x545 = INT64_MAX;
	static int64_t x546 = -114256200104939LL;
	int64_t t76 = INT64_MAX;

	t76 = (x545>>((x546==x547)%x548));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x557 = INT64_MAX;
	static volatile int32_t x558 = INT32_MIN;
	uint32_t x559 = UINT32_MAX;
	static int8_t x560 = INT8_MAX;
	int64_t t77 = INT64_MAX;

	t77 = (x557>>((x558==x559)%x560));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x561 = 38521318928LLU;
	uint64_t x562 = 477345993927391232LLU;
	int32_t x563 = INT32_MAX;
	int64_t x564 = INT64_MIN;

	t78 = (x561>>((x562==x563)%x564));

	if (t78 != 38521318928LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x565 = 179939513;
	int8_t x566 = INT8_MIN;
	int8_t x568 = -9;
	static volatile int32_t t79 = -24321;

	t79 = (x565>>((x566==x567)%x568));

	if (t79 != 179939513) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x569 = 253LLU;
	int64_t x571 = 4549LL;
	int16_t x572 = 39;
	volatile uint64_t t80 = 1LLU;

	t80 = (x569>>((x570==x571)%x572));

	if (t80 != 253LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x585 = 20563899U;
	int8_t x586 = INT8_MIN;
	static volatile uint8_t x587 = 104U;
	uint32_t x588 = 4192U;
	volatile uint32_t t81 = 793073863U;

	t81 = (x585>>((x586==x587)%x588));

	if (t81 != 20563899U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x597 = INT16_MAX;
	int16_t x600 = -1;
	volatile int32_t t82 = 0;

	t82 = (x597>>((x598==x599)%x600));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x609 = 14U;
	volatile uint8_t x610 = 1U;
	int32_t x612 = -1;

	t83 = (x609>>((x610==x611)%x612));

	if (t83 != 14) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x637 = 1U;
	static int32_t x639 = -18108;
	uint32_t x640 = 12U;
	int32_t t84 = -23180288;

	t84 = (x637>>((x638==x639)%x640));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x641 = INT32_MAX;
	uint64_t x644 = 890343350LLU;
	int32_t t85 = INT32_MAX;

	t85 = (x641>>((x642==x643)%x644));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x645 = UINT32_MAX;
	uint64_t x646 = UINT64_MAX;
	int16_t x647 = -761;
	uint64_t x648 = 50LLU;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = (x645>>((x646==x647)%x648));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x649 = INT16_MAX;
	static int16_t x650 = 70;
	int32_t x651 = -1;
	static int64_t x652 = -11238LL;
	volatile int32_t t87 = -192;

	t87 = (x649>>((x650==x651)%x652));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x653 = UINT16_MAX;
	uint16_t x654 = 215U;
	uint32_t x655 = 327740081U;
	static volatile int16_t x656 = INT16_MIN;
	static volatile int32_t t88 = -46;

	t88 = (x653>>((x654==x655)%x656));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x658 = INT32_MIN;
	int32_t x660 = INT32_MIN;
	volatile int32_t t89 = 15;

	t89 = (x657>>((x658==x659)%x660));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x664 = INT32_MIN;
	static uint32_t t90 = UINT32_MAX;

	t90 = (x661>>((x662==x663)%x664));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x665 = 50;
	volatile uint8_t x667 = 1U;
	int32_t t91 = -39;

	t91 = (x665>>((x666==x667)%x668));

	if (t91 != 50) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x699 = INT64_MAX;
	int32_t x700 = -1;

	t92 = (x697>>((x698==x699)%x700));

	if (t92 != 974170LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x705 = 132085522U;
	volatile int8_t x706 = INT8_MIN;
	static volatile int32_t x707 = -1;
	volatile uint16_t x708 = UINT16_MAX;
	uint32_t t93 = 4128272U;

	t93 = (x705>>((x706==x707)%x708));

	if (t93 != 132085522U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x709 = 19;
	static int64_t x710 = INT64_MAX;
	int8_t x711 = 55;
	static int32_t t94 = -453204362;

	t94 = (x709>>((x710==x711)%x712));

	if (t94 != 19) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x730 = -1LL;
	uint64_t x731 = 164662LLU;
	static volatile int32_t x732 = 1738;
	int32_t t95 = -12521;

	t95 = (x729>>((x730==x731)%x732));

	if (t95 != 15) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x733 = 7U;
	static int32_t x734 = -335522;
	static int8_t x735 = INT8_MAX;
	int32_t t96 = 56094;

	t96 = (x733>>((x734==x735)%x736));

	if (t96 != 7) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x737 = INT64_MAX;
	int8_t x738 = 1;
	volatile int32_t x739 = -1;
	static int64_t x740 = INT64_MIN;
	int64_t t97 = INT64_MAX;

	t97 = (x737>>((x738==x739)%x740));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x741 = 460592662LLU;
	int16_t x742 = -1;
	int32_t x743 = INT32_MIN;
	uint16_t x744 = UINT16_MAX;
	uint64_t t98 = 506642191208850989LLU;

	t98 = (x741>>((x742==x743)%x744));

	if (t98 != 460592662LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x745 = 13U;
	int32_t x746 = INT32_MIN;
	int64_t x747 = -1LL;
	volatile int32_t t99 = -2804;

	t99 = (x745>>((x746==x747)%x748));

	if (t99 != 13) { NG(); } else { ; }
	
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

