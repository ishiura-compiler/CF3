#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x23 = 1;
volatile int32_t t1 = -931;
uint8_t x41 = UINT8_MAX;
volatile int64_t x44 = INT64_MIN;
int8_t x53 = 1;
int64_t x55 = INT64_MIN;
static int32_t t6 = 109;
static int32_t x59 = INT32_MIN;
int32_t t7 = -73;
uint64_t x74 = 1LLU;
int64_t x76 = -1LL;
volatile uint64_t x81 = 37015791667641LLU;
int64_t x82 = INT64_MAX;
int64_t x83 = INT64_MIN;
int8_t x99 = INT8_MIN;
uint8_t x117 = UINT8_MAX;
volatile int16_t x138 = 1;
volatile int8_t x140 = INT8_MAX;
static uint64_t x148 = UINT64_MAX;
volatile int32_t x187 = -1;
volatile uint32_t t19 = 691U;
volatile int32_t t21 = -13879049;
volatile uint32_t t22 = 3481187U;
int16_t x239 = INT16_MIN;
int32_t t25 = INT32_MAX;
int32_t t27 = INT32_MAX;
int32_t t28 = 372;
int8_t x306 = -1;
uint32_t x307 = UINT32_MAX;
static uint32_t x313 = 3U;
uint32_t x325 = 388597994U;
int32_t x328 = -1;
int8_t x329 = INT8_MAX;
uint16_t x341 = 7U;
int32_t x344 = INT32_MAX;
static int32_t t35 = 41401997;
uint32_t x357 = UINT32_MAX;
int32_t x359 = -1;
static uint64_t x365 = 61LLU;
int16_t x367 = INT16_MAX;
static volatile int64_t x375 = 33212790555LL;
volatile uint16_t x378 = 18100U;
static volatile int32_t t40 = -3;
uint64_t x386 = 90109297539376LLU;
int16_t x416 = -37;
int16_t x426 = INT16_MIN;
static uint8_t x427 = UINT8_MAX;
uint64_t x428 = 384287LLU;
uint32_t x481 = 445U;
uint16_t x494 = 4U;
static int16_t x510 = INT16_MIN;
int32_t x511 = -871433;
uint8_t x520 = 89U;
volatile int32_t t56 = -13730;
uint32_t x526 = UINT32_MAX;
volatile uint8_t x529 = UINT8_MAX;
int32_t t58 = -10;
int8_t x546 = 11;
volatile int64_t x548 = INT64_MIN;
volatile uint32_t x560 = 15407U;
volatile int64_t t62 = INT64_MAX;
static int64_t x568 = INT64_MIN;
volatile int8_t x575 = -29;
volatile uint64_t t65 = 103525057LLU;
uint8_t x598 = UINT8_MAX;
int16_t x603 = -1;
int64_t x612 = INT64_MIN;
volatile int32_t t69 = 30887;
uint64_t x621 = 10527LLU;
int32_t x627 = INT32_MAX;
uint16_t x629 = 30059U;
int8_t x632 = -1;
volatile int32_t t72 = -16293;
int8_t x633 = 3;
static int8_t x638 = 1;
int32_t x649 = 74232;
int32_t x655 = -1;
static uint16_t x656 = 1993U;
uint8_t x676 = 10U;
volatile int32_t x679 = INT32_MIN;
uint16_t x680 = UINT16_MAX;
static uint16_t x685 = UINT16_MAX;
int32_t x693 = 3762156;
uint8_t x700 = UINT8_MAX;
int8_t x719 = INT8_MIN;
volatile int32_t x756 = -1;
int8_t x772 = INT8_MAX;
int32_t t89 = -54;
static int8_t x787 = INT8_MIN;
uint32_t t90 = 8495U;
static uint32_t x791 = 244001U;
int16_t x796 = -3;
static uint8_t x805 = 41U;
volatile uint64_t x807 = UINT64_MAX;
static int8_t x809 = INT8_MAX;
volatile int32_t t95 = -1630670;
uint64_t x813 = 171759346345425499LLU;
int32_t x816 = INT32_MIN;
volatile int32_t t97 = -54;


void f0(void) {
	static uint64_t x5 = 14356LLU;
	int16_t x6 = 10487;
	int8_t x7 = -1;
	int16_t x8 = INT16_MAX;
	uint64_t t0 = 15977LLU;

	t0 = (x5>>((x6+x7)<=x8));

	if (t0 != 7178LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x21 = 0U;
	int8_t x22 = -7;
	uint64_t x24 = 6650LLU;

	t1 = (x21>>((x22+x23)<=x24));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x25 = 57;
	volatile int8_t x26 = 0;
	uint32_t x27 = 16387253U;
	volatile int64_t x28 = 508LL;
	volatile int32_t t2 = 4;

	t2 = (x25>>((x26+x27)<=x28));

	if (t2 != 57) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x29 = 495307739U;
	uint16_t x30 = 52U;
	int32_t x31 = 378;
	int16_t x32 = 4;
	volatile uint32_t t3 = 13U;

	t3 = (x29>>((x30+x31)<=x32));

	if (t3 != 495307739U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x33 = 15769LL;
	static int16_t x34 = INT16_MIN;
	uint8_t x35 = 20U;
	int8_t x36 = INT8_MIN;
	int64_t t4 = -559338151422175405LL;

	t4 = (x33>>((x34+x35)<=x36));

	if (t4 != 7884LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x42 = 3;
	int16_t x43 = -1;
	int32_t t5 = 421821;

	t5 = (x41>>((x42+x43)<=x44));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x54 = INT16_MAX;
	int32_t x56 = 2;

	t6 = (x53>>((x54+x55)<=x56));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x57 = 7;
	int8_t x58 = 1;
	static int8_t x60 = INT8_MIN;

	t7 = (x57>>((x58+x59)<=x60));

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x65 = UINT32_MAX;
	static uint8_t x66 = UINT8_MAX;
	uint64_t x67 = 8157615150202823LLU;
	int8_t x68 = 4;
	static volatile uint32_t t8 = UINT32_MAX;

	t8 = (x65>>((x66+x67)<=x68));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x73 = 113LL;
	static int64_t x75 = INT64_MIN;
	int64_t t9 = 82LL;

	t9 = (x73>>((x74+x75)<=x76));

	if (t9 != 56LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x84 = INT32_MAX;
	uint64_t t10 = 4632569136631LLU;

	t10 = (x81>>((x82+x83)<=x84));

	if (t10 != 18507895833820LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x93 = UINT32_MAX;
	uint16_t x94 = 3224U;
	int64_t x95 = INT64_MIN;
	int64_t x96 = INT64_MAX;
	volatile uint32_t t11 = 80U;

	t11 = (x93>>((x94+x95)<=x96));

	if (t11 != 2147483647U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x97 = INT8_MAX;
	uint8_t x98 = 40U;
	uint32_t x100 = 4667U;
	static int32_t t12 = -545354;

	t12 = (x97>>((x98+x99)<=x100));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x101 = 1U;
	int32_t x102 = 10914060;
	int32_t x103 = INT32_MIN;
	static int16_t x104 = INT16_MIN;
	int32_t t13 = -36499458;

	t13 = (x101>>((x102+x103)<=x104));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x113 = INT8_MAX;
	uint32_t x114 = 323138855U;
	volatile int8_t x115 = -1;
	volatile int64_t x116 = -1LL;
	volatile int32_t t14 = -6467897;

	t14 = (x113>>((x114+x115)<=x116));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x118 = UINT8_MAX;
	int32_t x119 = -1;
	uint16_t x120 = 6333U;
	int32_t t15 = 15;

	t15 = (x117>>((x118+x119)<=x120));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x129 = 62U;
	static int16_t x130 = -487;
	static uint64_t x131 = 3027235147240LLU;
	int64_t x132 = INT64_MAX;
	volatile int32_t t16 = 46450698;

	t16 = (x129>>((x130+x131)<=x132));

	if (t16 != 31) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x137 = 2421449;
	int16_t x139 = -1;
	static int32_t t17 = -108;

	t17 = (x137>>((x138+x139)<=x140));

	if (t17 != 1210724) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x145 = 26U;
	volatile int8_t x146 = 41;
	int32_t x147 = INT32_MIN;
	volatile int32_t t18 = -11908924;

	t18 = (x145>>((x146+x147)<=x148));

	if (t18 != 13) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x185 = 50U;
	int8_t x186 = INT8_MIN;
	static volatile int8_t x188 = INT8_MAX;

	t19 = (x185>>((x186+x187)<=x188));

	if (t19 != 25U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x197 = UINT8_MAX;
	int16_t x198 = 10052;
	uint32_t x199 = 740437U;
	int16_t x200 = INT16_MIN;
	volatile int32_t t20 = 89106199;

	t20 = (x197>>((x198+x199)<=x200));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x209 = 10542;
	volatile int8_t x210 = 1;
	int16_t x211 = INT16_MIN;
	uint64_t x212 = 12148893686661LLU;

	t21 = (x209>>((x210+x211)<=x212));

	if (t21 != 10542) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x221 = 1731U;
	uint64_t x222 = 7860810005424850792LLU;
	int32_t x223 = INT32_MIN;
	uint64_t x224 = 2LLU;

	t22 = (x221>>((x222+x223)<=x224));

	if (t22 != 1731U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x225 = 43614579733LL;
	uint64_t x226 = 10670865LLU;
	int16_t x227 = INT16_MAX;
	uint64_t x228 = 1672980983227044751LLU;
	static int64_t t23 = 292267229LL;

	t23 = (x225>>((x226+x227)<=x228));

	if (t23 != 21807289866LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x237 = INT8_MAX;
	static int16_t x238 = 132;
	int64_t x240 = -1778LL;
	int32_t t24 = -117335;

	t24 = (x237>>((x238+x239)<=x240));

	if (t24 != 63) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x245 = INT32_MAX;
	int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MAX;
	int32_t x248 = INT32_MAX;

	t25 = (x245>>((x246+x247)<=x248));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x265 = 1365194U;
	volatile uint16_t x266 = 2U;
	int64_t x267 = -216246343596362513LL;
	uint64_t x268 = 70176115039LLU;
	volatile uint32_t t26 = 3U;

	t26 = (x265>>((x266+x267)<=x268));

	if (t26 != 1365194U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x277 = INT32_MAX;
	static volatile int32_t x278 = -84446163;
	static int32_t x279 = -1;
	volatile uint64_t x280 = 148129LLU;

	t27 = (x277>>((x278+x279)<=x280));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x281 = 3U;
	uint64_t x282 = UINT64_MAX;
	static int32_t x283 = -258;
	volatile int16_t x284 = 439;

	t28 = (x281>>((x282+x283)<=x284));

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x293 = 2U;
	uint16_t x294 = UINT16_MAX;
	int16_t x295 = -1;
	int32_t x296 = INT32_MIN;
	static int32_t t29 = 31;

	t29 = (x293>>((x294+x295)<=x296));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x305 = UINT64_MAX;
	volatile int16_t x308 = INT16_MIN;
	uint64_t t30 = UINT64_MAX;

	t30 = (x305>>((x306+x307)<=x308));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x314 = INT16_MIN;
	int8_t x315 = -7;
	int16_t x316 = INT16_MIN;
	uint32_t t31 = 3871U;

	t31 = (x313>>((x314+x315)<=x316));

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x326 = -1;
	uint8_t x327 = 0U;
	uint32_t t32 = 112420654U;

	t32 = (x325>>((x326+x327)<=x328));

	if (t32 != 194298997U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x330 = INT16_MAX;
	static int64_t x331 = INT64_MIN;
	static int16_t x332 = -15857;
	volatile int32_t t33 = 448;

	t33 = (x329>>((x330+x331)<=x332));

	if (t33 != 63) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x333 = 52U;
	uint8_t x334 = 1U;
	volatile int32_t x335 = INT32_MIN;
	int16_t x336 = -1;
	int32_t t34 = -255791;

	t34 = (x333>>((x334+x335)<=x336));

	if (t34 != 26) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x342 = -50;
	volatile int8_t x343 = INT8_MIN;

	t35 = (x341>>((x342+x343)<=x344));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x345 = 57U;
	uint32_t x346 = 8541U;
	int32_t x347 = -1320;
	int32_t x348 = INT32_MIN;
	uint32_t t36 = 0U;

	t36 = (x345>>((x346+x347)<=x348));

	if (t36 != 28U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x358 = 12288581U;
	static volatile uint8_t x360 = UINT8_MAX;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = (x357>>((x358+x359)<=x360));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x366 = 815398926295LLU;
	int16_t x368 = INT16_MIN;
	volatile uint64_t t38 = 635LLU;

	t38 = (x365>>((x366+x367)<=x368));

	if (t38 != 30LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x373 = 967;
	uint64_t x374 = 1LLU;
	int64_t x376 = -329713836075LL;
	int32_t t39 = -749;

	t39 = (x373>>((x374+x375)<=x376));

	if (t39 != 483) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x377 = 4;
	static uint64_t x379 = UINT64_MAX;
	int8_t x380 = INT8_MIN;

	t40 = (x377>>((x378+x379)<=x380));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x381 = INT16_MAX;
	int16_t x382 = -1;
	int16_t x383 = 7;
	int16_t x384 = INT16_MAX;
	volatile int32_t t41 = -143532;

	t41 = (x381>>((x382+x383)<=x384));

	if (t41 != 16383) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x385 = 13376U;
	volatile int64_t x387 = INT64_MAX;
	uint8_t x388 = UINT8_MAX;
	int32_t t42 = -1;

	t42 = (x385>>((x386+x387)<=x388));

	if (t42 != 13376) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x393 = 6U;
	static uint32_t x394 = 4570U;
	int16_t x395 = -3038;
	static int32_t x396 = INT32_MIN;
	static volatile int32_t t43 = -7882460;

	t43 = (x393>>((x394+x395)<=x396));

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x401 = INT32_MAX;
	uint16_t x402 = 223U;
	uint64_t x403 = 11502511LLU;
	uint16_t x404 = 6982U;
	volatile int32_t t44 = INT32_MAX;

	t44 = (x401>>((x402+x403)<=x404));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x413 = INT16_MAX;
	int32_t x414 = INT32_MAX;
	int32_t x415 = INT32_MIN;
	int32_t t45 = -805507;

	t45 = (x413>>((x414+x415)<=x416));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x425 = 2U;
	uint32_t t46 = 0U;

	t46 = (x425>>((x426+x427)<=x428));

	if (t46 != 2U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x429 = 58U;
	volatile uint64_t x430 = 31890464061815LLU;
	int32_t x431 = INT32_MAX;
	static int8_t x432 = -1;
	uint32_t t47 = 2837769U;

	t47 = (x429>>((x430+x431)<=x432));

	if (t47 != 29U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x465 = 1764893LLU;
	uint16_t x466 = 3190U;
	volatile int8_t x467 = INT8_MAX;
	volatile int64_t x468 = INT64_MAX;
	uint64_t t48 = 1707638397600915LLU;

	t48 = (x465>>((x466+x467)<=x468));

	if (t48 != 882446LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x482 = INT32_MAX;
	static int16_t x483 = -1;
	static uint8_t x484 = 0U;
	volatile uint32_t t49 = 688U;

	t49 = (x481>>((x482+x483)<=x484));

	if (t49 != 445U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x485 = INT16_MAX;
	static volatile int8_t x486 = 1;
	volatile uint16_t x487 = 136U;
	int64_t x488 = -1LL;
	volatile int32_t t50 = -736991409;

	t50 = (x485>>((x486+x487)<=x488));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x493 = UINT16_MAX;
	static int8_t x495 = INT8_MIN;
	static volatile uint16_t x496 = 71U;
	static volatile int32_t t51 = 78160275;

	t51 = (x493>>((x494+x495)<=x496));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x497 = 44123;
	int16_t x498 = 3;
	static int32_t x499 = INT32_MIN;
	volatile int8_t x500 = 5;
	static int32_t t52 = -8;

	t52 = (x497>>((x498+x499)<=x500));

	if (t52 != 22061) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x509 = 14U;
	int8_t x512 = INT8_MAX;
	volatile uint32_t t53 = 2U;

	t53 = (x509>>((x510+x511)<=x512));

	if (t53 != 7U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x513 = INT8_MAX;
	uint32_t x514 = UINT32_MAX;
	static int16_t x515 = -1;
	static int8_t x516 = INT8_MIN;
	volatile int32_t t54 = 99;

	t54 = (x513>>((x514+x515)<=x516));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x517 = UINT64_MAX;
	uint16_t x518 = 0U;
	int8_t x519 = INT8_MIN;
	uint64_t t55 = 22078623LLU;

	t55 = (x517>>((x518+x519)<=x520));

	if (t55 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x521 = 19;
	uint8_t x522 = 107U;
	uint32_t x523 = 478705126U;
	int8_t x524 = INT8_MIN;

	t56 = (x521>>((x522+x523)<=x524));

	if (t56 != 9) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x525 = 1786834016607LLU;
	volatile uint32_t x527 = 8452507U;
	int32_t x528 = INT32_MIN;
	uint64_t t57 = 31571745041846LLU;

	t57 = (x525>>((x526+x527)<=x528));

	if (t57 != 893417008303LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x530 = INT32_MAX;
	uint64_t x531 = UINT64_MAX;
	uint32_t x532 = 59085512U;

	t58 = (x529>>((x530+x531)<=x532));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x533 = INT16_MAX;
	int8_t x534 = INT8_MIN;
	int8_t x535 = INT8_MIN;
	static int16_t x536 = INT16_MIN;
	int32_t t59 = -995975806;

	t59 = (x533>>((x534+x535)<=x536));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x537 = 25779U;
	uint64_t x538 = UINT64_MAX;
	uint32_t x539 = 4081803U;
	volatile int8_t x540 = INT8_MIN;
	int32_t t60 = 8;

	t60 = (x537>>((x538+x539)<=x540));

	if (t60 != 12889) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x545 = UINT8_MAX;
	volatile int16_t x547 = INT16_MAX;
	int32_t t61 = -4338;

	t61 = (x545>>((x546+x547)<=x548));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x557 = INT64_MAX;
	uint16_t x558 = 850U;
	uint64_t x559 = 48410LLU;

	t62 = (x557>>((x558+x559)<=x560));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x561 = 0;
	int8_t x562 = -10;
	int8_t x563 = INT8_MIN;
	static volatile uint32_t x564 = 497803426U;
	int32_t t63 = 120;

	t63 = (x561>>((x562+x563)<=x564));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x565 = 1;
	int32_t x566 = -66610;
	uint8_t x567 = 35U;
	static volatile int32_t t64 = -26;

	t64 = (x565>>((x566+x567)<=x568));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x573 = UINT64_MAX;
	int16_t x574 = INT16_MIN;
	int64_t x576 = -1LL;

	t65 = (x573>>((x574+x575)<=x576));

	if (t65 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x585 = INT64_MAX;
	int64_t x586 = -887431821948711465LL;
	volatile uint16_t x587 = UINT16_MAX;
	volatile int16_t x588 = -1;
	volatile int64_t t66 = 0LL;

	t66 = (x585>>((x586+x587)<=x588));

	if (t66 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x597 = 2446U;
	uint64_t x599 = 672087979805LLU;
	int64_t x600 = -1LL;
	static uint32_t t67 = 219407U;

	t67 = (x597>>((x598+x599)<=x600));

	if (t67 != 1223U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x601 = INT32_MAX;
	static int8_t x602 = INT8_MAX;
	static int8_t x604 = -1;
	int32_t t68 = INT32_MAX;

	t68 = (x601>>((x602+x603)<=x604));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x609 = 6U;
	uint16_t x610 = 36U;
	int32_t x611 = -32671;

	t69 = (x609>>((x610+x611)<=x612));

	if (t69 != 6) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x622 = 16051U;
	volatile int64_t x623 = INT64_MIN;
	int16_t x624 = 824;
	uint64_t t70 = 110749438LLU;

	t70 = (x621>>((x622+x623)<=x624));

	if (t70 != 5263LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x625 = INT16_MAX;
	int32_t x626 = INT32_MIN;
	int8_t x628 = -1;
	volatile int32_t t71 = -307;

	t71 = (x625>>((x626+x627)<=x628));

	if (t71 != 16383) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x630 = -1;
	int64_t x631 = 10471LL;

	t72 = (x629>>((x630+x631)<=x632));

	if (t72 != 30059) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x634 = 355170048U;
	volatile uint32_t x635 = UINT32_MAX;
	int16_t x636 = -1;
	volatile int32_t t73 = -534374;

	t73 = (x633>>((x634+x635)<=x636));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x637 = 32638U;
	int16_t x639 = INT16_MAX;
	uint16_t x640 = UINT16_MAX;
	static volatile int32_t t74 = 206;

	t74 = (x637>>((x638+x639)<=x640));

	if (t74 != 16319) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x650 = -1;
	uint16_t x651 = 36U;
	uint16_t x652 = 15106U;
	int32_t t75 = 39;

	t75 = (x649>>((x650+x651)<=x652));

	if (t75 != 37116) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x653 = 41070343U;
	volatile int8_t x654 = INT8_MAX;
	uint32_t t76 = 0U;

	t76 = (x653>>((x654+x655)<=x656));

	if (t76 != 20535171U) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x673 = INT8_MAX;
	static int16_t x674 = INT16_MAX;
	static volatile uint32_t x675 = UINT32_MAX;
	volatile int32_t t77 = -451136504;

	t77 = (x673>>((x674+x675)<=x676));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x677 = 829U;
	uint64_t x678 = UINT64_MAX;
	volatile int32_t t78 = 223772210;

	t78 = (x677>>((x678+x679)<=x680));

	if (t78 != 829) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x686 = 54U;
	int16_t x687 = -265;
	static int64_t x688 = INT64_MIN;
	volatile int32_t t79 = -36093204;

	t79 = (x685>>((x686+x687)<=x688));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x694 = 62530U;
	uint16_t x695 = 2U;
	int64_t x696 = INT64_MIN;
	volatile int32_t t80 = -11828;

	t80 = (x693>>((x694+x695)<=x696));

	if (t80 != 3762156) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x697 = UINT32_MAX;
	volatile int32_t x698 = INT32_MAX;
	static uint32_t x699 = 383366U;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = (x697>>((x698+x699)<=x700));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x713 = UINT32_MAX;
	uint8_t x714 = 0U;
	int16_t x715 = -1;
	int16_t x716 = -1;
	volatile uint32_t t82 = 53U;

	t82 = (x713>>((x714+x715)<=x716));

	if (t82 != 2147483647U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x717 = 3754U;
	static int16_t x718 = INT16_MAX;
	int64_t x720 = 15604948LL;
	static int32_t t83 = 2823318;

	t83 = (x717>>((x718+x719)<=x720));

	if (t83 != 1877) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x721 = 468424927U;
	int8_t x722 = INT8_MIN;
	static volatile uint64_t x723 = 11LLU;
	volatile int64_t x724 = 11266LL;
	static volatile uint32_t t84 = 9367936U;

	t84 = (x721>>((x722+x723)<=x724));

	if (t84 != 468424927U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x729 = UINT64_MAX;
	volatile int64_t x730 = -1LL;
	int32_t x731 = INT32_MIN;
	static int32_t x732 = INT32_MIN;
	volatile uint64_t t85 = 1952241031LLU;

	t85 = (x729>>((x730+x731)<=x732));

	if (t85 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x749 = UINT32_MAX;
	static volatile int64_t x750 = INT64_MAX;
	int64_t x751 = -1LL;
	int64_t x752 = INT64_MAX;
	uint32_t t86 = 286142U;

	t86 = (x749>>((x750+x751)<=x752));

	if (t86 != 2147483647U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x753 = 1312479178U;
	uint32_t x754 = UINT32_MAX;
	int8_t x755 = INT8_MAX;
	static uint32_t t87 = 0U;

	t87 = (x753>>((x754+x755)<=x756));

	if (t87 != 656239589U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x769 = 0U;
	static int32_t x770 = 917;
	uint8_t x771 = 14U;
	static int32_t t88 = -204102;

	t88 = (x769>>((x770+x771)<=x772));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x773 = 1;
	uint64_t x774 = UINT64_MAX;
	uint8_t x775 = UINT8_MAX;
	uint64_t x776 = 524435159071LLU;

	t89 = (x773>>((x774+x775)<=x776));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x785 = 267873956U;
	int8_t x786 = -1;
	uint32_t x788 = 5559632U;

	t90 = (x785>>((x786+x787)<=x788));

	if (t90 != 267873956U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x789 = INT8_MAX;
	uint16_t x790 = 7U;
	uint16_t x792 = UINT16_MAX;
	volatile int32_t t91 = -6506;

	t91 = (x789>>((x790+x791)<=x792));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x793 = UINT32_MAX;
	int32_t x794 = -93346;
	volatile int64_t x795 = 61804351127726LL;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = (x793>>((x794+x795)<=x796));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x797 = 13880U;
	uint32_t x798 = 25547U;
	int64_t x799 = -1LL;
	static int16_t x800 = INT16_MIN;
	static volatile int32_t t93 = -190364466;

	t93 = (x797>>((x798+x799)<=x800));

	if (t93 != 13880) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x806 = 24U;
	uint32_t x808 = 6952U;
	static int32_t t94 = 8;

	t94 = (x805>>((x806+x807)<=x808));

	if (t94 != 20) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x810 = -1;
	uint32_t x811 = 172U;
	uint32_t x812 = 675631U;

	t95 = (x809>>((x810+x811)<=x812));

	if (t95 != 63) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x814 = -43;
	volatile uint64_t x815 = UINT64_MAX;
	volatile uint64_t t96 = 56547292402260LLU;

	t96 = (x813>>((x814+x815)<=x816));

	if (t96 != 171759346345425499LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x817 = UINT8_MAX;
	uint32_t x818 = 0U;
	uint32_t x819 = UINT32_MAX;
	int64_t x820 = -1LL;

	t97 = (x817>>((x818+x819)<=x820));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x821 = UINT64_MAX;
	volatile uint16_t x822 = 9143U;
	uint32_t x823 = UINT32_MAX;
	uint8_t x824 = 1U;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x821>>((x822+x823)<=x824));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x825 = 241502;
	static uint16_t x826 = 35U;
	uint8_t x827 = UINT8_MAX;
	volatile int32_t x828 = INT32_MIN;
	static int32_t t99 = 40583;

	t99 = (x825>>((x826+x827)<=x828));

	if (t99 != 241502) { NG(); } else { ; }
	
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

