#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
volatile int16_t x2 = 1;
int64_t x17 = INT64_MIN;
int16_t x18 = INT16_MIN;
static uint8_t x19 = 113U;
volatile int32_t t2 = 18239;
volatile int16_t x44 = -1;
int64_t x46 = 3175803LL;
int16_t x55 = -14770;
int64_t x58 = 1LL;
int32_t x60 = -1;
volatile int64_t t6 = 10866367LL;
static int8_t x67 = -1;
static uint16_t x68 = 42U;
uint16_t x88 = 1982U;
int32_t t9 = 560339654;
uint32_t x93 = UINT32_MAX;
volatile int64_t x95 = -74897272150526LL;
volatile int8_t x102 = INT8_MIN;
int16_t x118 = INT16_MIN;
uint8_t x120 = UINT8_MAX;
int64_t x133 = INT64_MIN;
volatile int16_t x135 = INT16_MIN;
volatile uint32_t t15 = 1016U;
uint8_t x181 = 0U;
static int64_t x187 = INT64_MIN;
static int32_t t19 = 3;
int32_t t21 = 926430;
uint16_t x209 = 1U;
int64_t x210 = INT64_MIN;
int8_t x211 = INT8_MIN;
int16_t x212 = 100;
int32_t t23 = 157;
volatile int32_t x225 = 720807719;
volatile uint64_t t26 = 33116924557LLU;
uint32_t x233 = 100U;
uint8_t x236 = 100U;
uint16_t x253 = UINT16_MAX;
int16_t x256 = INT16_MIN;
int8_t x262 = INT8_MAX;
volatile int16_t x267 = 2;
uint64_t x275 = 13LLU;
int64_t x282 = INT64_MAX;
int64_t t32 = -2LL;
int16_t x287 = -802;
static int8_t x321 = 17;
static int16_t x355 = INT16_MIN;
volatile int32_t x374 = INT32_MIN;
int8_t x411 = INT8_MIN;
static int16_t x418 = -1;
static volatile int32_t t48 = 879;
int8_t x456 = -1;
static int32_t x458 = INT32_MIN;
int8_t x459 = -3;
int8_t x461 = INT8_MIN;
int16_t x526 = -563;
volatile int8_t x552 = INT8_MAX;
volatile uint64_t x561 = UINT64_MAX;
uint8_t x569 = 8U;
uint16_t x571 = 0U;
int16_t x581 = -1;
volatile uint16_t x584 = UINT16_MAX;
static int32_t x603 = INT32_MIN;
int8_t x604 = INT8_MIN;
volatile int64_t x611 = INT64_MIN;
volatile uint32_t t71 = 518745738U;
int64_t x635 = -1LL;
static volatile int64_t t72 = -2LL;
volatile int32_t t73 = 3;
int32_t t74 = -1;
int8_t x656 = INT8_MAX;
volatile int32_t x659 = INT32_MIN;
int8_t x669 = 1;
volatile int32_t t79 = -64300196;
int64_t x674 = INT64_MAX;
int16_t x677 = 3408;
uint16_t x689 = 4U;
int16_t x691 = 7420;
volatile uint16_t x702 = 2280U;
volatile int32_t t84 = 95824;
int32_t x705 = INT32_MIN;
uint8_t x709 = 5U;
volatile uint64_t x717 = 90549571200383947LLU;
static uint8_t x720 = 3U;
volatile int32_t t88 = -1;
static int64_t x746 = 4067139483068736324LL;
volatile uint64_t t91 = 17960599LLU;
volatile int32_t t92 = 1;
volatile int32_t x777 = -1;
int64_t x780 = 113034311160588LL;
volatile int32_t t93 = -114205881;
volatile int64_t x807 = 939502LL;
int64_t x813 = 674937LL;
volatile uint64_t t95 = 1762LLU;
int64_t x821 = -1LL;
volatile int64_t t98 = 6459838856151569LL;
int16_t x853 = -1;
int32_t x855 = INT32_MAX;


void f0(void) {
	int32_t x3 = INT32_MIN;
	volatile int32_t x4 = -1;
	volatile int32_t t0 = -704449013;

	t0 = (x1%(x2*(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x20 = INT32_MAX;
	int64_t t1 = 4297615LL;

	t1 = (x17%(x18*(x19<x20)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x29 = 1;
	uint8_t x30 = 7U;
	uint64_t x31 = 85267965776LLU;
	int64_t x32 = INT64_MAX;

	t2 = (x29%(x30*(x31<x32)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x41 = -1;
	uint16_t x42 = 2659U;
	int16_t x43 = INT16_MIN;
	volatile int32_t t3 = 575059956;

	t3 = (x41%(x42*(x43<x44)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x45 = 680311856;
	uint16_t x47 = 2U;
	uint32_t x48 = UINT32_MAX;
	int64_t t4 = 8608LL;

	t4 = (x45%(x46*(x47<x48)));

	if (t4 != 690014LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x53 = UINT32_MAX;
	static volatile int64_t x54 = -27979774LL;
	int16_t x56 = -777;
	volatile int64_t t5 = 10818161762735373LL;

	t5 = (x53%(x54*(x55<x56)));

	if (t5 != 14061873LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x57 = -1LL;
	static uint32_t x59 = 29U;

	t6 = (x57%(x58*(x59<x60)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x61 = 212579096592315LLU;
	int64_t x62 = INT64_MAX;
	volatile int64_t x63 = INT64_MIN;
	int64_t x64 = 41023631LL;
	volatile uint64_t t7 = 2801LLU;

	t7 = (x61%(x62*(x63<x64)));

	if (t7 != 212579096592315LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x65 = UINT32_MAX;
	volatile uint16_t x66 = 789U;
	volatile uint32_t t8 = 15582U;

	t8 = (x65%(x66*(x67<x68)));

	if (t8 != 33U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x85 = -1;
	int32_t x86 = INT32_MAX;
	int16_t x87 = -27;

	t9 = (x85%(x86*(x87<x88)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x94 = INT32_MAX;
	int32_t x96 = 213867;
	uint32_t t10 = 31U;

	t10 = (x93%(x94*(x95<x96)));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x101 = INT16_MIN;
	int8_t x103 = -3;
	int16_t x104 = -1;
	volatile int32_t t11 = -55942;

	t11 = (x101%(x102*(x103<x104)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x109 = UINT32_MAX;
	volatile uint32_t x110 = UINT32_MAX;
	volatile uint64_t x111 = 3489453969LLU;
	uint64_t x112 = UINT64_MAX;
	uint32_t t12 = 4164643U;

	t12 = (x109%(x110*(x111<x112)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x117 = 40U;
	volatile int64_t x119 = -890LL;
	volatile int32_t t13 = 86111237;

	t13 = (x117%(x118*(x119<x120)));

	if (t13 != 40) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x134 = 2;
	volatile int16_t x136 = 9;
	int64_t t14 = -324068198142LL;

	t14 = (x133%(x134*(x135<x136)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x137 = -3;
	static uint32_t x138 = UINT32_MAX;
	int8_t x139 = 0;
	static volatile uint32_t x140 = UINT32_MAX;

	t15 = (x137%(x138*(x139<x140)));

	if (t15 != 4294967293U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x145 = INT64_MAX;
	int64_t x146 = INT64_MAX;
	int8_t x147 = -14;
	int8_t x148 = -1;
	int64_t t16 = -2019979068386100901LL;

	t16 = (x145%(x146*(x147<x148)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x177 = INT64_MAX;
	int8_t x178 = INT8_MIN;
	static int64_t x179 = -2257710436767LL;
	uint8_t x180 = 6U;
	int64_t t17 = 24854LL;

	t17 = (x177%(x178*(x179<x180)));

	if (t17 != 127LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x182 = 103U;
	int64_t x183 = INT64_MIN;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t18 = -194099;

	t18 = (x181%(x182*(x183<x184)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MAX;
	int16_t x188 = -51;

	t19 = (x185%(x186*(x187<x188)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x193 = INT16_MIN;
	int64_t x194 = INT64_MIN;
	volatile int16_t x195 = -1181;
	static uint8_t x196 = UINT8_MAX;
	volatile int64_t t20 = 76399236LL;

	t20 = (x193%(x194*(x195<x196)));

	if (t20 != -32768LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x205 = INT16_MAX;
	static int16_t x206 = INT16_MIN;
	uint32_t x207 = 4U;
	volatile int16_t x208 = INT16_MAX;

	t21 = (x205%(x206*(x207<x208)));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t t22 = -3499331LL;

	t22 = (x209%(x210*(x211<x212)));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x217 = -1;
	volatile uint8_t x218 = UINT8_MAX;
	volatile int16_t x219 = -1;
	uint8_t x220 = 16U;

	t23 = (x217%(x218*(x219<x220)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x221 = 18U;
	int32_t x222 = -3;
	int16_t x223 = INT16_MIN;
	uint8_t x224 = UINT8_MAX;
	static int32_t t24 = -80;

	t24 = (x221%(x222*(x223<x224)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x226 = INT32_MIN;
	int8_t x227 = 27;
	static int16_t x228 = 743;
	int32_t t25 = 237;

	t25 = (x225%(x226*(x227<x228)));

	if (t25 != 720807719) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x229 = INT64_MIN;
	uint64_t x230 = UINT64_MAX;
	uint32_t x231 = 48U;
	volatile uint64_t x232 = 81300597617395LLU;

	t26 = (x229%(x230*(x231<x232)));

	if (t26 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x234 = -1;
	int16_t x235 = 65;
	volatile uint32_t t27 = 25243U;

	t27 = (x233%(x234*(x235<x236)));

	if (t27 != 100U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x254 = INT8_MAX;
	int32_t x255 = -460101;
	static int32_t t28 = 9614280;

	t28 = (x253%(x254*(x255<x256)));

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x261 = INT64_MIN;
	volatile int64_t x263 = 0LL;
	int8_t x264 = INT8_MAX;
	volatile int64_t t29 = 15125LL;

	t29 = (x261%(x262*(x263<x264)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x265 = -1;
	int32_t x266 = -82925952;
	static uint16_t x268 = 297U;
	volatile int32_t t30 = -127;

	t30 = (x265%(x266*(x267<x268)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x273 = 3;
	int64_t x274 = INT64_MIN;
	int8_t x276 = -15;
	int64_t t31 = 763LL;

	t31 = (x273%(x274*(x275<x276)));

	if (t31 != 3LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x281 = 13;
	static volatile int64_t x283 = INT64_MIN;
	int8_t x284 = INT8_MIN;

	t32 = (x281%(x282*(x283<x284)));

	if (t32 != 13LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x285 = -141403227LL;
	int32_t x286 = INT32_MAX;
	static int16_t x288 = INT16_MAX;
	int64_t t33 = 73139413981048810LL;

	t33 = (x285%(x286*(x287<x288)));

	if (t33 != -141403227LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x305 = INT32_MIN;
	int16_t x306 = -345;
	static volatile int32_t x307 = -1;
	uint8_t x308 = 2U;
	volatile int32_t t34 = -959718936;

	t34 = (x305%(x306*(x307<x308)));

	if (t34 != -98) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x309 = INT16_MIN;
	static volatile int64_t x310 = -1LL;
	volatile int64_t x311 = INT64_MIN;
	volatile int16_t x312 = -626;
	int64_t t35 = -116580616LL;

	t35 = (x309%(x310*(x311<x312)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x322 = -1LL;
	static uint32_t x323 = 156U;
	int32_t x324 = INT32_MIN;
	int64_t t36 = 34028359374LL;

	t36 = (x321%(x322*(x323<x324)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x325 = 0;
	uint16_t x326 = UINT16_MAX;
	int64_t x327 = INT64_MIN;
	int16_t x328 = 174;
	int32_t t37 = -115;

	t37 = (x325%(x326*(x327<x328)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x333 = 12772U;
	uint64_t x334 = UINT64_MAX;
	volatile int32_t x335 = -1;
	volatile int16_t x336 = INT16_MAX;
	static volatile uint64_t t38 = 12395852704895LLU;

	t38 = (x333%(x334*(x335<x336)));

	if (t38 != 12772LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x353 = 209226U;
	int8_t x354 = INT8_MAX;
	volatile uint16_t x356 = UINT16_MAX;
	volatile uint32_t t39 = 244U;

	t39 = (x353%(x354*(x355<x356)));

	if (t39 != 57U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x365 = INT8_MAX;
	uint16_t x366 = 37U;
	int16_t x367 = INT16_MIN;
	static int32_t x368 = -1;
	int32_t t40 = 1582958;

	t40 = (x365%(x366*(x367<x368)));

	if (t40 != 16) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x369 = 24;
	volatile int16_t x370 = -1;
	volatile int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MAX;
	volatile int32_t t41 = 12154;

	t41 = (x369%(x370*(x371<x372)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x373 = INT8_MAX;
	volatile uint32_t x375 = 13U;
	int8_t x376 = INT8_MAX;
	static int32_t t42 = -234;

	t42 = (x373%(x374*(x375<x376)));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x385 = INT32_MIN;
	static volatile int32_t x386 = INT32_MIN;
	int64_t x387 = INT64_MIN;
	uint64_t x388 = UINT64_MAX;
	int32_t t43 = 648034;

	t43 = (x385%(x386*(x387<x388)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x409 = -1LL;
	uint32_t x410 = UINT32_MAX;
	uint16_t x412 = UINT16_MAX;
	volatile int64_t t44 = -2252508LL;

	t44 = (x409%(x410*(x411<x412)));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x417 = 12U;
	volatile uint64_t x419 = 3157110192315281LLU;
	int64_t x420 = INT64_MIN;
	volatile uint32_t t45 = 1U;

	t45 = (x417%(x418*(x419<x420)));

	if (t45 != 12U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x421 = -1;
	int64_t x422 = -210847121818691576LL;
	static volatile int16_t x423 = INT16_MIN;
	static uint16_t x424 = UINT16_MAX;
	volatile int64_t t46 = 8185632065LL;

	t46 = (x421%(x422*(x423<x424)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x441 = 30933280;
	uint32_t x442 = 426U;
	int32_t x443 = INT32_MIN;
	volatile int16_t x444 = INT16_MIN;
	uint32_t t47 = 431188U;

	t47 = (x441%(x442*(x443<x444)));

	if (t47 != 142U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x449 = -722;
	static int8_t x450 = 3;
	int64_t x451 = -5789435256411LL;
	volatile int8_t x452 = INT8_MAX;

	t48 = (x449%(x450*(x451<x452)));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x453 = -1;
	static int64_t x454 = INT64_MAX;
	int64_t x455 = -1515098477514645LL;
	int64_t t49 = 255468416LL;

	t49 = (x453%(x454*(x455<x456)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x457 = 10U;
	static int8_t x460 = -1;
	int32_t t50 = -233;

	t50 = (x457%(x458*(x459<x460)));

	if (t50 != 10) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x462 = 5911U;
	static uint8_t x463 = 0U;
	uint8_t x464 = UINT8_MAX;
	volatile uint32_t t51 = 3292736U;

	t51 = (x461%(x462*(x463<x464)));

	if (t51 != 5013U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x465 = INT32_MIN;
	volatile int8_t x466 = -24;
	int8_t x467 = INT8_MIN;
	uint16_t x468 = 71U;
	volatile int32_t t52 = 16058077;

	t52 = (x465%(x466*(x467<x468)));

	if (t52 != -8) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x469 = 1U;
	int16_t x470 = INT16_MIN;
	int8_t x471 = INT8_MAX;
	uint32_t x472 = 4865426U;
	static int32_t t53 = 970859310;

	t53 = (x469%(x470*(x471<x472)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x485 = 652LL;
	int64_t x486 = -130268596175561LL;
	int16_t x487 = -1;
	int64_t x488 = INT64_MAX;
	int64_t t54 = -2526536138434LL;

	t54 = (x485%(x486*(x487<x488)));

	if (t54 != 652LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x489 = 6U;
	uint8_t x490 = 2U;
	uint8_t x491 = UINT8_MAX;
	volatile int16_t x492 = INT16_MAX;
	volatile int32_t t55 = -221881;

	t55 = (x489%(x490*(x491<x492)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x505 = 1990;
	int32_t x506 = -14;
	volatile int16_t x507 = INT16_MIN;
	static volatile uint16_t x508 = 88U;
	int32_t t56 = 110;

	t56 = (x505%(x506*(x507<x508)));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x509 = 0U;
	int16_t x510 = -1;
	volatile int32_t x511 = INT32_MIN;
	static volatile int32_t x512 = 7;
	int32_t t57 = 120696;

	t57 = (x509%(x510*(x511<x512)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x517 = UINT16_MAX;
	static volatile uint32_t x518 = UINT32_MAX;
	static int32_t x519 = -3;
	int64_t x520 = 6585LL;
	volatile uint32_t t58 = 102141862U;

	t58 = (x517%(x518*(x519<x520)));

	if (t58 != 65535U) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x525 = -778999LL;
	uint16_t x527 = UINT16_MAX;
	static int32_t x528 = INT32_MAX;
	int64_t t59 = -283LL;

	t59 = (x525%(x526*(x527<x528)));

	if (t59 != -370LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x537 = 739467027U;
	int16_t x538 = -1;
	int16_t x539 = INT16_MIN;
	uint16_t x540 = UINT16_MAX;
	volatile uint32_t t60 = 2U;

	t60 = (x537%(x538*(x539<x540)));

	if (t60 != 739467027U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x541 = 3731805LLU;
	volatile int32_t x542 = 89;
	int8_t x543 = 1;
	volatile uint64_t x544 = 4911195393208004223LLU;
	static uint64_t t61 = 4817LLU;

	t61 = (x541%(x542*(x543<x544)));

	if (t61 != 35LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x549 = -1;
	int8_t x550 = INT8_MIN;
	static int32_t x551 = INT32_MIN;
	int32_t t62 = -23728042;

	t62 = (x549%(x550*(x551<x552)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x562 = -19;
	volatile uint64_t x563 = 4467974975368452LLU;
	int64_t x564 = INT64_MAX;
	volatile uint64_t t63 = 134465380969LLU;

	t63 = (x561%(x562*(x563<x564)));

	if (t63 != 18LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x570 = UINT32_MAX;
	volatile uint8_t x572 = 39U;
	volatile uint32_t t64 = 3465537U;

	t64 = (x569%(x570*(x571<x572)));

	if (t64 != 8U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x582 = 90604193LLU;
	int8_t x583 = -1;
	volatile uint64_t t65 = 1047843974443877096LLU;

	t65 = (x581%(x582*(x583<x584)));

	if (t65 != 44935524LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x589 = 53U;
	int16_t x590 = INT16_MIN;
	int8_t x591 = INT8_MAX;
	int32_t x592 = INT32_MAX;
	volatile int32_t t66 = -568;

	t66 = (x589%(x590*(x591<x592)));

	if (t66 != 53) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x597 = 241U;
	volatile uint16_t x598 = UINT16_MAX;
	volatile uint8_t x599 = 114U;
	int64_t x600 = 412309579LL;
	static volatile int32_t t67 = -140264;

	t67 = (x597%(x598*(x599<x600)));

	if (t67 != 241) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x601 = 2U;
	int16_t x602 = -1;
	volatile int32_t t68 = -371;

	t68 = (x601%(x602*(x603<x604)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x609 = -2;
	int64_t x610 = INT64_MIN;
	int16_t x612 = INT16_MIN;
	volatile int64_t t69 = 0LL;

	t69 = (x609%(x610*(x611<x612)));

	if (t69 != -2LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x617 = -3965030654311372767LL;
	volatile int32_t x618 = INT32_MIN;
	uint32_t x619 = UINT32_MAX;
	volatile uint64_t x620 = 1800265715386LLU;
	volatile int64_t t70 = 198680LL;

	t70 = (x617%(x618*(x619<x620)));

	if (t70 != -1505990623LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x625 = INT16_MAX;
	uint32_t x626 = 512817701U;
	volatile int16_t x627 = -1;
	int32_t x628 = 1448287;

	t71 = (x625%(x626*(x627<x628)));

	if (t71 != 32767U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x633 = INT64_MIN;
	static volatile int16_t x634 = INT16_MIN;
	int16_t x636 = 63;

	t72 = (x633%(x634*(x635<x636)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x641 = 0;
	uint8_t x642 = UINT8_MAX;
	int8_t x643 = -3;
	int32_t x644 = -1;

	t73 = (x641%(x642*(x643<x644)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x649 = 6926U;
	volatile int32_t x650 = -1;
	uint64_t x651 = 7743784623938669997LLU;
	static int16_t x652 = -1;

	t74 = (x649%(x650*(x651<x652)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x653 = -1;
	volatile uint32_t x654 = 5594U;
	static int64_t x655 = INT64_MIN;
	static volatile uint32_t t75 = 0U;

	t75 = (x653%(x654*(x655<x656)));

	if (t75 != 381U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x657 = 4752669625645234LLU;
	uint32_t x658 = 83070418U;
	volatile uint8_t x660 = UINT8_MAX;
	uint64_t t76 = 1872050LLU;

	t76 = (x657%(x658*(x659<x660)));

	if (t76 != 13003514LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x661 = 196U;
	int32_t x662 = INT32_MIN;
	int8_t x663 = -40;
	static int8_t x664 = 0;
	int32_t t77 = 16;

	t77 = (x661%(x662*(x663<x664)));

	if (t77 != 196) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x665 = -12960LL;
	uint8_t x666 = 10U;
	int16_t x667 = 2065;
	static int32_t x668 = INT32_MAX;
	static int64_t t78 = -10441307LL;

	t78 = (x665%(x666*(x667<x668)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x670 = INT8_MIN;
	int8_t x671 = 28;
	uint32_t x672 = 470U;

	t79 = (x669%(x670*(x671<x672)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x673 = INT16_MIN;
	static int8_t x675 = INT8_MIN;
	int8_t x676 = -1;
	int64_t t80 = 3LL;

	t80 = (x673%(x674*(x675<x676)));

	if (t80 != -32768LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x678 = INT64_MAX;
	static int8_t x679 = 3;
	static volatile int32_t x680 = 7301;
	volatile int64_t t81 = -4487493039392218LL;

	t81 = (x677%(x678*(x679<x680)));

	if (t81 != 3408LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x681 = INT64_MAX;
	volatile int64_t x682 = INT64_MIN;
	int32_t x683 = -1;
	uint8_t x684 = 9U;
	int64_t t82 = INT64_MAX;

	t82 = (x681%(x682*(x683<x684)));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x690 = 8550843LLU;
	int32_t x692 = 58803993;
	uint64_t t83 = 5075865877134LLU;

	t83 = (x689%(x690*(x691<x692)));

	if (t83 != 4LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x701 = INT16_MIN;
	int16_t x703 = -1;
	static uint8_t x704 = 89U;

	t84 = (x701%(x702*(x703<x704)));

	if (t84 != -848) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x706 = UINT8_MAX;
	int64_t x707 = INT64_MIN;
	int64_t x708 = 1755391026291910344LL;
	volatile int32_t t85 = -89812252;

	t85 = (x705%(x706*(x707<x708)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x710 = INT16_MIN;
	uint64_t x711 = 12669877LLU;
	int16_t x712 = INT16_MIN;
	volatile int32_t t86 = 58465;

	t86 = (x709%(x710*(x711<x712)));

	if (t86 != 5) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x718 = INT8_MAX;
	volatile int8_t x719 = -6;
	static volatile uint64_t t87 = 18460398578999LLU;

	t87 = (x717%(x718*(x719<x720)));

	if (t87 != 53LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x741 = 3;
	static int8_t x742 = 2;
	static int16_t x743 = INT16_MIN;
	int32_t x744 = INT32_MAX;

	t88 = (x741%(x742*(x743<x744)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x745 = 718012726936811LLU;
	int16_t x747 = INT16_MIN;
	static int8_t x748 = INT8_MAX;
	static volatile uint64_t t89 = 3324930922247129562LLU;

	t89 = (x745%(x746*(x747<x748)));

	if (t89 != 718012726936811LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x753 = 16510769641434LLU;
	int16_t x754 = -1;
	int8_t x755 = INT8_MIN;
	volatile int16_t x756 = INT16_MAX;
	volatile uint64_t t90 = 1921145475627LLU;

	t90 = (x753%(x754*(x755<x756)));

	if (t90 != 16510769641434LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x761 = 616435LLU;
	uint16_t x762 = 56U;
	int64_t x763 = INT64_MIN;
	uint8_t x764 = 121U;

	t91 = (x761%(x762*(x763<x764)));

	if (t91 != 43LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x773 = 21536;
	static int8_t x774 = 2;
	uint64_t x775 = 191486715LLU;
	int16_t x776 = -2;

	t92 = (x773%(x774*(x775<x776)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x778 = -1;
	int8_t x779 = INT8_MAX;

	t93 = (x777%(x778*(x779<x780)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x805 = INT32_MIN;
	int32_t x806 = -1;
	static uint32_t x808 = 53909552U;
	volatile int32_t t94 = 559145290;

	t94 = (x805%(x806*(x807<x808)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x814 = 29219LLU;
	volatile int16_t x815 = INT16_MIN;
	int64_t x816 = INT64_MAX;

	t95 = (x813%(x814*(x815<x816)));

	if (t95 != 2900LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x822 = 245U;
	int64_t x823 = INT64_MIN;
	int32_t x824 = INT32_MIN;
	int64_t t96 = -251022229LL;

	t96 = (x821%(x822*(x823<x824)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x845 = INT16_MIN;
	volatile int16_t x846 = INT16_MIN;
	int8_t x847 = -1;
	volatile uint16_t x848 = 0U;
	volatile int32_t t97 = 4;

	t97 = (x845%(x846*(x847<x848)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x849 = INT8_MIN;
	int64_t x850 = -9LL;
	int32_t x851 = -1;
	volatile int8_t x852 = INT8_MAX;

	t98 = (x849%(x850*(x851<x852)));

	if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x854 = -1LL;
	static uint64_t x856 = UINT64_MAX;
	volatile int64_t t99 = 713892030744LL;

	t99 = (x853%(x854*(x855<x856)));

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

