#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 569476925329758LL;
volatile int32_t x4 = -1;
int8_t x7 = 4;
int32_t x8 = -1;
volatile int64_t t4 = 40LL;
uint64_t x24 = 102681357684043603LLU;
volatile int16_t x27 = -3886;
uint16_t x31 = 7207U;
volatile int64_t t8 = -217275669404037408LL;
uint32_t x61 = 835U;
int32_t x62 = 674340;
volatile int32_t x64 = INT32_MIN;
volatile int8_t x73 = -1;
int8_t x75 = 8;
int64_t x83 = 7LL;
static int16_t x112 = -12;
int32_t x123 = INT32_MIN;
int64_t t15 = -19997871381LL;
uint32_t x151 = UINT32_MAX;
int64_t x170 = INT64_MIN;
static int8_t x199 = INT8_MAX;
static uint32_t x220 = 487U;
volatile int64_t x226 = INT64_MAX;
int64_t x227 = 13894095134401166LL;
static volatile uint64_t x228 = 71298157LLU;
uint32_t x233 = 21414U;
volatile int64_t x242 = 17556812646213LL;
uint32_t t34 = 658988U;
static uint64_t t35 = 46144LLU;
uint32_t x288 = UINT32_MAX;
int64_t t36 = -127465282LL;
uint64_t x293 = UINT64_MAX;
int16_t x310 = -1;
volatile int32_t x326 = INT32_MIN;
uint64_t x329 = UINT64_MAX;
uint16_t x330 = 24U;
int8_t x342 = 1;
int8_t x343 = -1;
static volatile int64_t x344 = INT64_MIN;
static volatile int32_t x359 = INT32_MIN;
volatile uint64_t x362 = UINT64_MAX;
volatile int8_t x364 = -2;
int8_t x371 = -11;
int8_t x389 = 1;
volatile int32_t t48 = -4086401;
static volatile int32_t x402 = 110533;
static uint64_t x437 = UINT64_MAX;
uint64_t x461 = UINT64_MAX;
static int8_t x464 = INT8_MIN;
volatile int32_t t56 = -163;
int8_t x503 = 29;
uint16_t x504 = 4388U;
int16_t x513 = 6;
uint64_t x516 = UINT64_MAX;
uint16_t x518 = 40U;
volatile int64_t x525 = INT64_MIN;
static uint32_t x526 = UINT32_MAX;
static uint8_t x530 = 120U;
volatile int32_t x533 = INT32_MIN;
volatile uint8_t x555 = 29U;
uint16_t x559 = 438U;
static int32_t x560 = INT32_MAX;
int64_t x566 = INT64_MIN;
int64_t x567 = 1LL;
uint32_t t67 = 22337586U;
int64_t x577 = INT64_MIN;
volatile uint64_t t69 = 2618LLU;
static volatile uint32_t x598 = 79204U;
int32_t x604 = -1;
volatile uint32_t t72 = 2116U;
int32_t x614 = INT32_MAX;
int8_t x615 = INT8_MIN;
uint32_t t73 = 2U;
uint16_t x627 = 35U;
volatile uint64_t t75 = 94LLU;
uint64_t t76 = 305463438219LLU;
uint64_t t77 = 76LLU;
static uint16_t x646 = UINT16_MAX;
int64_t x654 = INT64_MAX;
int16_t x670 = INT16_MIN;
volatile int64_t x671 = -1LL;
int16_t x672 = 1098;
static uint64_t t83 = 15119433LLU;
volatile uint32_t x698 = 283550U;
uint8_t x703 = 2U;
static int16_t x717 = -1;
int32_t x722 = INT32_MIN;
int16_t x725 = 3;
int8_t x728 = -1;
static int64_t t89 = -20LL;
uint32_t x754 = 1868U;
int8_t x755 = INT8_MAX;
int64_t t90 = -43924185934159LL;
static int32_t x765 = INT32_MIN;
int8_t x766 = -1;
int16_t x768 = INT16_MIN;
int64_t t91 = -2047LL;
volatile uint64_t x779 = 25951LLU;
int64_t x786 = -4098446189055LL;
int64_t x787 = -1LL;
uint8_t x820 = UINT8_MAX;
int8_t x825 = INT8_MIN;
int64_t x826 = INT64_MIN;
volatile int64_t t98 = 58165274LL;
volatile uint32_t t99 = 5285U;


void f0(void) {
	int64_t x2 = INT64_MAX;
	uint8_t x3 = 15U;
	volatile int64_t t0 = 72431113LL;

	t0 = ((x1/(x2/x3))%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 11U;
	static volatile uint8_t x6 = 52U;
	volatile int32_t t1 = -5;

	t1 = ((x5/(x6/x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 50U;
	int16_t x10 = INT16_MIN;
	uint32_t x11 = 32890105U;
	static int64_t x12 = INT64_MIN;
	int64_t t2 = -24844712997653LL;

	t2 = ((x9/(x10/x11))%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int32_t x14 = -1;
	uint64_t x15 = UINT64_MAX;
	volatile uint8_t x16 = UINT8_MAX;
	volatile uint64_t t3 = 3366673830474LLU;

	t3 = ((x13/(x14/x15))%x16);

	if (t3 != 127LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 44U;
	int16_t x18 = 424;
	int32_t x19 = -1;
	static int64_t x20 = -1LL;

	t4 = ((x17/(x18/x19))%x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int32_t x22 = INT32_MIN;
	uint16_t x23 = 254U;
	volatile uint64_t t5 = 0LLU;

	t5 = ((x21/(x22/x23))%x24);

	if (t5 != 66781048265746425LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	volatile int64_t x26 = INT64_MIN;
	static uint8_t x28 = UINT8_MAX;
	static volatile int64_t t6 = -78LL;

	t6 = ((x25/(x26/x27))%x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = UINT64_MAX;
	volatile uint64_t x30 = 20409868367484LLU;
	static int8_t x32 = -2;
	volatile uint64_t t7 = 46886622543047LLU;

	t7 = ((x29/(x30/x31))%x32);

	if (t7 != 6513794316LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 57U;
	int64_t x42 = INT64_MIN;
	int8_t x43 = -43;
	int8_t x44 = INT8_MAX;

	t8 = ((x41/(x42/x43))%x44);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x63 = INT8_MIN;
	uint32_t t9 = 207392468U;

	t9 = ((x61/(x62/x63))%x64);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x74 = UINT32_MAX;
	int32_t x76 = INT32_MAX;
	volatile uint32_t t10 = 567999U;

	t10 = ((x73/(x74/x75))%x76);

	if (t10 != 8U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x81 = INT64_MAX;
	uint8_t x82 = 26U;
	uint32_t x84 = UINT32_MAX;
	int64_t t11 = -21223745LL;

	t11 = ((x81/(x82/x83))%x84);

	if (t11 != 3579139412LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x105 = 18U;
	uint16_t x106 = UINT16_MAX;
	volatile uint64_t x107 = 1LLU;
	int32_t x108 = 813;
	static uint64_t t12 = 3LLU;

	t12 = ((x105/(x106/x107))%x108);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x109 = 718U;
	uint32_t x110 = UINT32_MAX;
	volatile int16_t x111 = -1;
	static uint32_t t13 = 1U;

	t13 = ((x109/(x110/x111))%x112);

	if (t13 != 718U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x113 = UINT8_MAX;
	static int64_t x114 = INT64_MIN;
	volatile int16_t x115 = INT16_MAX;
	uint64_t x116 = 116914747LLU;
	volatile uint64_t t14 = 0LLU;

	t14 = ((x113/(x114/x115))%x116);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x121 = INT8_MIN;
	int64_t x122 = INT64_MIN;
	int64_t x124 = 2770LL;

	t15 = ((x121/(x122/x123))%x124);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x129 = INT16_MAX;
	static int64_t x130 = INT64_MIN;
	int32_t x131 = -205528387;
	static int8_t x132 = INT8_MIN;
	volatile int64_t t16 = -8859478355899581LL;

	t16 = ((x129/(x130/x131))%x132);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x133 = 8;
	int16_t x134 = INT16_MIN;
	uint16_t x135 = 7389U;
	static uint32_t x136 = UINT32_MAX;
	uint32_t t17 = 20U;

	t17 = ((x133/(x134/x135))%x136);

	if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x137 = 2;
	static int16_t x138 = INT16_MIN;
	uint8_t x139 = 7U;
	uint16_t x140 = 10412U;
	int32_t t18 = -1;

	t18 = ((x137/(x138/x139))%x140);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x141 = INT64_MIN;
	int64_t x142 = INT64_MAX;
	volatile uint8_t x143 = 11U;
	int64_t x144 = -78177125LL;
	int64_t t19 = -14642509981LL;

	t19 = ((x141/(x142/x143))%x144);

	if (t19 != -11LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x145 = 116LLU;
	int16_t x146 = INT16_MIN;
	int16_t x147 = INT16_MIN;
	static int8_t x148 = INT8_MIN;
	uint64_t t20 = 404117634346LLU;

	t20 = ((x145/(x146/x147))%x148);

	if (t20 != 116LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x149 = 1U;
	int64_t x150 = INT64_MIN;
	static int64_t x152 = INT64_MAX;
	static volatile int64_t t21 = -72LL;

	t21 = ((x149/(x150/x151))%x152);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x153 = INT32_MIN;
	int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MIN;
	static uint32_t x156 = 9980U;
	int64_t t22 = 847119LL;

	t22 = ((x153/(x154/x155))%x156);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x169 = -1;
	volatile uint8_t x171 = UINT8_MAX;
	static uint64_t x172 = UINT64_MAX;
	static uint64_t t23 = 8001645LLU;

	t23 = ((x169/(x170/x171))%x172);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x189 = 92U;
	int32_t x190 = -1;
	volatile uint8_t x191 = 1U;
	volatile int16_t x192 = -29;
	volatile uint32_t t24 = 23360U;

	t24 = ((x189/(x190/x191))%x192);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x197 = -23;
	uint64_t x198 = 61794LLU;
	static int32_t x200 = INT32_MIN;
	uint64_t t25 = 3730703480173616017LLU;

	t25 = ((x197/(x198/x199))%x200);

	if (t25 != 37956263526151340LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x205 = INT32_MAX;
	static uint16_t x206 = UINT16_MAX;
	int8_t x207 = INT8_MIN;
	int16_t x208 = INT16_MIN;
	int32_t t26 = 286091;

	t26 = ((x205/(x206/x207))%x208);

	if (t26 != -8208) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x217 = 480U;
	uint64_t x218 = UINT64_MAX;
	uint32_t x219 = UINT32_MAX;
	uint64_t t27 = 946064585578983LLU;

	t27 = ((x217/(x218/x219))%x220);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x225 = 30U;
	volatile uint64_t t28 = 396242208LLU;

	t28 = ((x225/(x226/x227))%x228);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x234 = INT32_MAX;
	static int64_t x235 = 55876LL;
	uint16_t x236 = UINT16_MAX;
	volatile int64_t t29 = -15165LL;

	t29 = ((x233/(x234/x235))%x236);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x237 = UINT32_MAX;
	int16_t x238 = INT16_MIN;
	volatile uint16_t x239 = 7230U;
	static int32_t x240 = -1;
	volatile uint32_t t30 = 97U;

	t30 = ((x237/(x238/x239))%x240);

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x241 = -5959943002269262LL;
	static int16_t x243 = -1;
	static int16_t x244 = INT16_MAX;
	static int64_t t31 = 233LL;

	t31 = ((x241/(x242/x243))%x244);

	if (t31 != 339LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x245 = INT8_MAX;
	int16_t x246 = 1;
	int32_t x247 = -1;
	static int16_t x248 = -18;
	int32_t t32 = 425;

	t32 = ((x245/(x246/x247))%x248);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x249 = -19;
	int64_t x250 = -8011046045221330LL;
	static int8_t x251 = INT8_MIN;
	int8_t x252 = 6;
	volatile int64_t t33 = 1938801525360873934LL;

	t33 = ((x249/(x250/x251))%x252);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x257 = 753219;
	int32_t x258 = -1;
	uint32_t x259 = 2450U;
	static uint32_t x260 = 2527122U;

	t34 = ((x257/(x258/x259))%x260);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x269 = 34LLU;
	int32_t x270 = INT32_MIN;
	int8_t x271 = -4;
	static uint16_t x272 = UINT16_MAX;

	t35 = ((x269/(x270/x271))%x272);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x285 = INT64_MAX;
	int64_t x286 = INT64_MIN;
	volatile int16_t x287 = INT16_MIN;

	t36 = ((x285/(x286/x287))%x288);

	if (t36 != 32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x294 = INT8_MAX;
	volatile int16_t x295 = -1;
	static int64_t x296 = 9510170LL;
	uint64_t t37 = 6798995736404LLU;

	t37 = ((x293/(x294/x295))%x296);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x309 = 355U;
	static volatile int8_t x311 = 1;
	int32_t x312 = INT32_MIN;
	static volatile uint32_t t38 = 549905U;

	t38 = ((x309/(x310/x311))%x312);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x325 = 3242026336168609LLU;
	int8_t x327 = 13;
	int64_t x328 = INT64_MIN;
	static uint64_t t39 = 1893201699758LLU;

	t39 = ((x325/(x326/x327))%x328);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x331 = -1;
	volatile int64_t x332 = INT64_MAX;
	static uint64_t t40 = 12383043LLU;

	t40 = ((x329/(x330/x331))%x332);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x341 = INT8_MAX;
	int64_t t41 = -355LL;

	t41 = ((x341/(x342/x343))%x344);

	if (t41 != -127LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x353 = 0U;
	int64_t x354 = -7373455347899LL;
	int8_t x355 = -5;
	static int32_t x356 = 32306;
	int64_t t42 = 1585506594LL;

	t42 = ((x353/(x354/x355))%x356);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x357 = UINT16_MAX;
	uint32_t x358 = UINT32_MAX;
	volatile int64_t x360 = -1LL;
	int64_t t43 = -118961875LL;

	t43 = ((x357/(x358/x359))%x360);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x361 = INT16_MIN;
	static volatile int16_t x363 = INT16_MIN;
	uint64_t t44 = 77886557283LLU;

	t44 = ((x361/(x362/x363))%x364);

	if (t44 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x365 = UINT8_MAX;
	int32_t x366 = -1;
	uint64_t x367 = 7648128299048325LLU;
	uint32_t x368 = 166U;
	uint64_t t45 = 752707LLU;

	t45 = ((x365/(x366/x367))%x368);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x369 = 28064;
	int32_t x370 = INT32_MIN;
	volatile int64_t x372 = INT64_MAX;
	volatile int64_t t46 = -60126281263373LL;

	t46 = ((x369/(x370/x371))%x372);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x381 = -55;
	uint32_t x382 = 65175621U;
	static int64_t x383 = -1LL;
	uint8_t x384 = UINT8_MAX;
	static volatile int64_t t47 = 306LL;

	t47 = ((x381/(x382/x383))%x384);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x390 = 14;
	int32_t x391 = -1;
	uint8_t x392 = UINT8_MAX;

	t48 = ((x389/(x390/x391))%x392);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x397 = 58U;
	int32_t x398 = -2234155;
	int8_t x399 = -1;
	int16_t x400 = -1;
	volatile int32_t t49 = 568;

	t49 = ((x397/(x398/x399))%x400);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x401 = INT16_MAX;
	volatile int16_t x403 = -1;
	uint32_t x404 = UINT32_MAX;
	static volatile uint32_t t50 = 21U;

	t50 = ((x401/(x402/x403))%x404);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x409 = INT32_MAX;
	static uint64_t x410 = UINT64_MAX;
	int8_t x411 = INT8_MIN;
	int8_t x412 = -1;
	uint64_t t51 = 15LLU;

	t51 = ((x409/(x410/x411))%x412);

	if (t51 != 2147483647LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x438 = INT32_MIN;
	static int16_t x439 = INT16_MIN;
	static int32_t x440 = 26410;
	static uint64_t t52 = 16215LLU;

	t52 = ((x437/(x438/x439))%x440);

	if (t52 != 105LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x449 = INT8_MAX;
	uint16_t x450 = UINT16_MAX;
	static int8_t x451 = INT8_MIN;
	uint16_t x452 = 26750U;
	int32_t t53 = -140069179;

	t53 = ((x449/(x450/x451))%x452);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x457 = -1;
	uint64_t x458 = 1670LLU;
	int64_t x459 = 298LL;
	static int32_t x460 = 5707;
	static uint64_t t54 = 12274209154LLU;

	t54 = ((x457/(x458/x459))%x460);

	if (t54 != 2018LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x462 = INT16_MAX;
	volatile int16_t x463 = -1;
	volatile uint64_t t55 = 252LLU;

	t55 = ((x461/(x462/x463))%x464);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x497 = INT32_MIN;
	int8_t x498 = INT8_MAX;
	volatile uint16_t x499 = 8U;
	int16_t x500 = INT16_MIN;

	t56 = ((x497/(x498/x499))%x500);

	if (t56 != -2184) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x501 = INT32_MIN;
	int32_t x502 = INT32_MIN;
	volatile int32_t t57 = -1;

	t57 = ((x501/(x502/x503))%x504);

	if (t57 != 29) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x509 = 24U;
	int16_t x510 = INT16_MAX;
	volatile int8_t x511 = -6;
	int64_t x512 = INT64_MAX;
	static volatile int64_t t58 = 1242980685573LL;

	t58 = ((x509/(x510/x511))%x512);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x514 = INT64_MAX;
	volatile int64_t x515 = INT64_MAX;
	volatile uint64_t t59 = 25532341021687LLU;

	t59 = ((x513/(x514/x515))%x516);

	if (t59 != 6LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x517 = -1;
	static volatile uint8_t x519 = 6U;
	volatile int16_t x520 = -3;
	volatile int32_t t60 = -2520576;

	t60 = ((x517/(x518/x519))%x520);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x527 = 208U;
	uint16_t x528 = UINT16_MAX;
	volatile int64_t t61 = -8464540397537LL;

	t61 = ((x525/(x526/x527))%x528);

	if (t61 != -5096LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x529 = INT64_MAX;
	int16_t x531 = 1;
	int32_t x532 = -23;
	static int64_t t62 = 46742424LL;

	t62 = ((x529/(x530/x531))%x532);

	if (t62 != 22LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x534 = INT64_MAX;
	int16_t x535 = -5;
	int16_t x536 = -4;
	volatile int64_t t63 = -135902335709LL;

	t63 = ((x533/(x534/x535))%x536);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x553 = INT16_MIN;
	int16_t x554 = INT16_MIN;
	static uint8_t x556 = 21U;
	static int32_t t64 = 94482;

	t64 = ((x553/(x554/x555))%x556);

	if (t64 != 8) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x557 = INT32_MIN;
	volatile uint16_t x558 = UINT16_MAX;
	volatile int32_t t65 = -104865;

	t65 = ((x557/(x558/x559))%x560);

	if (t65 != -14412641) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x565 = INT16_MAX;
	uint32_t x568 = 669109149U;
	int64_t t66 = -53LL;

	t66 = ((x565/(x566/x567))%x568);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x569 = INT16_MIN;
	volatile uint32_t x570 = UINT32_MAX;
	uint8_t x571 = UINT8_MAX;
	volatile int16_t x572 = INT16_MIN;

	t67 = ((x569/(x570/x571))%x572);

	if (t67 != 254U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x573 = INT8_MAX;
	volatile int32_t x574 = 2;
	static int16_t x575 = 1;
	int16_t x576 = INT16_MAX;
	volatile int32_t t68 = -1877;

	t68 = ((x573/(x574/x575))%x576);

	if (t68 != 63) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x578 = 3523132LLU;
	uint8_t x579 = 99U;
	int8_t x580 = INT8_MAX;

	t69 = ((x577/(x578/x579))%x580);

	if (t69 != 6LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x581 = UINT32_MAX;
	int32_t x582 = -1;
	uint64_t x583 = 383972358244236LLU;
	uint32_t x584 = UINT32_MAX;
	static uint64_t t70 = 505104LLU;

	t70 = ((x581/(x582/x583))%x584);

	if (t70 != 89402LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x597 = UINT8_MAX;
	int16_t x599 = 1;
	static int64_t x600 = INT64_MIN;
	static int64_t t71 = -945028LL;

	t71 = ((x597/(x598/x599))%x600);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x601 = 0;
	volatile uint32_t x602 = UINT32_MAX;
	static int16_t x603 = INT16_MIN;

	t72 = ((x601/(x602/x603))%x604);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x613 = 461U;
	uint16_t x616 = 1U;

	t73 = ((x613/(x614/x615))%x616);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x617 = INT8_MAX;
	volatile int32_t x618 = INT32_MIN;
	static int32_t x619 = 1;
	int8_t x620 = INT8_MAX;
	int32_t t74 = -2733410;

	t74 = ((x617/(x618/x619))%x620);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x625 = UINT64_MAX;
	static uint64_t x626 = 21058831544456295LLU;
	int64_t x628 = INT64_MIN;

	t75 = ((x625/(x626/x627))%x628);

	if (t75 != 30658LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x629 = 25LLU;
	uint8_t x630 = UINT8_MAX;
	static uint8_t x631 = 10U;
	volatile int64_t x632 = INT64_MIN;

	t76 = ((x629/(x630/x631))%x632);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x637 = -1LL;
	int32_t x638 = -1;
	uint64_t x639 = UINT64_MAX;
	static int32_t x640 = INT32_MIN;

	t77 = ((x637/(x638/x639))%x640);

	if (t77 != 2147483647LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x645 = 397;
	int8_t x647 = INT8_MAX;
	int64_t x648 = INT64_MIN;
	volatile int64_t t78 = 9LL;

	t78 = ((x645/(x646/x647))%x648);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x653 = INT8_MIN;
	int64_t x655 = INT64_MAX;
	static int16_t x656 = -1;
	static volatile int64_t t79 = 9LL;

	t79 = ((x653/(x654/x655))%x656);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x657 = -8;
	static int16_t x658 = INT16_MIN;
	int16_t x659 = INT16_MIN;
	uint8_t x660 = 55U;
	volatile int32_t t80 = 25238675;

	t80 = ((x657/(x658/x659))%x660);

	if (t80 != -8) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x665 = INT32_MIN;
	uint8_t x666 = 14U;
	int32_t x667 = -1;
	int64_t x668 = INT64_MIN;
	volatile int64_t t81 = 129913861981LL;

	t81 = ((x665/(x666/x667))%x668);

	if (t81 != 153391689LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x669 = -47;
	volatile int64_t t82 = -15729621291LL;

	t82 = ((x669/(x670/x671))%x672);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x685 = 241920LLU;
	uint64_t x686 = 38LLU;
	uint64_t x687 = 20LLU;
	static uint16_t x688 = 38U;

	t83 = ((x685/(x686/x687))%x688);

	if (t83 != 12LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x697 = INT32_MAX;
	volatile uint8_t x699 = 6U;
	static int8_t x700 = INT8_MIN;
	uint32_t t84 = 68112488U;

	t84 = ((x697/(x698/x699))%x700);

	if (t84 != 45441U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x701 = 39109865808074LL;
	int32_t x702 = INT32_MIN;
	static int64_t x704 = 87LL;
	int64_t t85 = -1093LL;

	t85 = ((x701/(x702/x703))%x704);

	if (t85 != -57LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x713 = UINT8_MAX;
	int32_t x714 = -63;
	uint32_t x715 = 9910U;
	static int32_t x716 = 7;
	static uint32_t t86 = 313544885U;

	t86 = ((x713/(x714/x715))%x716);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x718 = INT32_MIN;
	static int64_t x719 = -1LL;
	int16_t x720 = INT16_MIN;
	static int64_t t87 = -3340242969102162075LL;

	t87 = ((x717/(x718/x719))%x720);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x721 = 1U;
	uint64_t x723 = 334138LLU;
	uint32_t x724 = 6744220U;
	volatile uint64_t t88 = 55LLU;

	t88 = ((x721/(x722/x723))%x724);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x726 = INT8_MIN;
	volatile int64_t x727 = -1LL;

	t89 = ((x725/(x726/x727))%x728);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x753 = INT16_MIN;
	volatile int64_t x756 = INT64_MIN;

	t90 = ((x753/(x754/x755))%x756);

	if (t90 != 306781037LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x767 = -1LL;

	t91 = ((x765/(x766/x767))%x768);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x773 = INT8_MIN;
	int8_t x774 = INT8_MIN;
	int8_t x775 = INT8_MAX;
	int64_t x776 = INT64_MIN;
	int64_t t92 = -7658369LL;

	t92 = ((x773/(x774/x775))%x776);

	if (t92 != 128LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x777 = 1;
	uint32_t x778 = UINT32_MAX;
	static int32_t x780 = INT32_MAX;
	uint64_t t93 = 17895LLU;

	t93 = ((x777/(x778/x779))%x780);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x785 = INT16_MIN;
	static int64_t x788 = INT64_MIN;
	int64_t t94 = -1LL;

	t94 = ((x785/(x786/x787))%x788);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x789 = -12;
	int8_t x790 = INT8_MAX;
	uint8_t x791 = 2U;
	volatile int8_t x792 = INT8_MIN;
	int32_t t95 = -16;

	t95 = ((x789/(x790/x791))%x792);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x793 = INT8_MAX;
	int8_t x794 = -1;
	uint8_t x795 = 1U;
	uint32_t x796 = UINT32_MAX;
	static volatile uint32_t t96 = 16546U;

	t96 = ((x793/(x794/x795))%x796);

	if (t96 != 4294967169U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x817 = INT16_MIN;
	volatile int32_t x818 = 6987;
	uint16_t x819 = 3U;
	static volatile int32_t t97 = -26;

	t97 = ((x817/(x818/x819))%x820);

	if (t97 != -14) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x827 = UINT32_MAX;
	uint16_t x828 = 187U;

	t98 = ((x825/(x826/x827))%x828);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x841 = UINT32_MAX;
	static int16_t x842 = -2006;
	uint32_t x843 = 1579U;
	int8_t x844 = INT8_MIN;

	t99 = ((x841/(x842/x843))%x844);

	if (t99 != 1579U) { NG(); } else { ; }
	
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

