#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t t0 = 476252LLU;
volatile int32_t x13 = -1580389;
int16_t x15 = 6;
uint32_t x17 = 18066981U;
static volatile int32_t x20 = 363;
static volatile uint32_t t3 = 58984U;
int64_t x23 = INT64_MIN;
int16_t x41 = INT16_MIN;
volatile uint16_t x44 = 524U;
volatile int32_t t7 = 88834;
uint16_t x73 = 12960U;
volatile int8_t x100 = INT8_MIN;
int16_t x106 = INT16_MIN;
int64_t x113 = INT64_MIN;
int8_t x118 = INT8_MIN;
int16_t x119 = 0;
volatile int64_t t12 = -31773LL;
uint32_t x121 = 3256839U;
static uint8_t x135 = 24U;
volatile int32_t t15 = 125;
uint64_t x163 = 958399342830908258LLU;
uint8_t x211 = UINT8_MAX;
uint64_t x212 = 5810264900777787LLU;
int8_t x243 = INT8_MIN;
volatile int32_t x256 = -1;
int32_t t22 = 0;
static int64_t x261 = -263288317977120LL;
int8_t x263 = 1;
static uint8_t x264 = UINT8_MAX;
int32_t x269 = -1;
volatile uint16_t x271 = 0U;
volatile uint32_t t24 = 32464U;
volatile uint8_t x289 = 2U;
volatile int64_t x291 = INT64_MIN;
static uint16_t x315 = 145U;
uint32_t x316 = 23151U;
int64_t x320 = INT64_MAX;
int32_t t29 = -856091148;
int64_t x370 = -6124LL;
volatile uint32_t x388 = UINT32_MAX;
int16_t x419 = INT16_MAX;
int16_t x430 = -1;
volatile int8_t x456 = INT8_MIN;
volatile int64_t t42 = -17865576778151522LL;
int64_t x459 = INT64_MIN;
int64_t t44 = -46389976601LL;
int64_t x511 = INT64_MIN;
volatile uint64_t x515 = 242359LLU;
uint64_t x516 = 3432417746614LLU;
int64_t x529 = INT64_MIN;
int32_t x530 = -1;
int64_t t48 = 278012856006113982LL;
uint8_t x542 = 89U;
uint8_t x550 = 1U;
volatile int64_t x553 = -1LL;
uint8_t x563 = 4U;
static int32_t x564 = INT32_MAX;
static volatile int32_t t54 = 28539667;
volatile uint32_t t55 = 79284U;
int32_t x572 = INT32_MAX;
volatile int32_t t56 = 100396447;
uint16_t x611 = 4U;
int32_t x623 = -806330;
int32_t x628 = -1;
volatile int32_t t62 = 845;
uint16_t x631 = UINT16_MAX;
int32_t t64 = 366662474;
int16_t x646 = INT16_MIN;
int16_t x647 = INT16_MIN;
uint8_t x648 = UINT8_MAX;
volatile int64_t x657 = INT64_MIN;
int64_t x675 = INT64_MIN;
int64_t x677 = 26935965899796LL;
static volatile int64_t t69 = -1LL;
int64_t x681 = INT64_MAX;
static int32_t x688 = 234736;
static uint16_t x690 = 3U;
int16_t x701 = INT16_MIN;
uint16_t x702 = UINT16_MAX;
int64_t x707 = INT64_MIN;
volatile int32_t x714 = -483322;
volatile uint32_t t75 = 0U;
uint64_t x725 = UINT64_MAX;
static int32_t x742 = -1;
int8_t x756 = -1;
volatile uint32_t t79 = 22U;
int32_t x757 = INT32_MIN;
int8_t x765 = -1;
int8_t x767 = -1;
int32_t t81 = 5695972;
int32_t x772 = -255191;
static int64_t x777 = 1LL;
volatile uint16_t x778 = UINT16_MAX;
static volatile int8_t x779 = -1;
uint8_t x781 = 1U;
static int32_t x783 = 5326437;
static int32_t x789 = -1;
uint16_t x792 = 7785U;
int32_t x806 = -4635;
volatile int8_t x830 = INT8_MIN;
uint8_t x836 = 8U;
static int8_t x839 = -23;
int32_t x846 = -439918959;
volatile int32_t t91 = 11506410;
volatile int64_t x852 = INT64_MAX;
int8_t x872 = INT8_MIN;
volatile uint64_t t95 = 31907306LLU;
volatile uint16_t x896 = UINT16_MAX;
int32_t x908 = INT32_MIN;


void f0(void) {
	uint64_t x1 = 18967LLU;
	int16_t x2 = INT16_MIN;
	static volatile int64_t x3 = INT64_MIN;
	int32_t x4 = INT32_MAX;

	t0 = ((x1-x2)%(x3<=x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	volatile uint32_t x6 = UINT32_MAX;
	uint8_t x7 = 123U;
	uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 872U;

	t1 = ((x5-x6)%(x7<=x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x14 = 13178182LLU;
	uint32_t x16 = 50U;
	volatile uint64_t t2 = 4037502597781LLU;

	t2 = ((x13-x14)%(x15<=x16));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MIN;
	volatile uint8_t x19 = UINT8_MAX;

	t3 = ((x17-x18)%(x19<=x20));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	uint8_t x22 = 59U;
	uint16_t x24 = UINT16_MAX;
	uint32_t t4 = 946197471U;

	t4 = ((x21-x22)%(x23<=x24));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 4U;
	int16_t x26 = INT16_MAX;
	uint8_t x27 = 11U;
	int8_t x28 = INT8_MAX;
	volatile int32_t t5 = -4399;

	t5 = ((x25-x26)%(x27<=x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x42 = 225U;
	static int32_t x43 = INT32_MIN;
	volatile int32_t t6 = -2649903;

	t6 = ((x41-x42)%(x43<=x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x49 = -1;
	int32_t x50 = INT32_MAX;
	int32_t x51 = INT32_MIN;
	int16_t x52 = -884;

	t7 = ((x49-x50)%(x51<=x52));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x74 = -1;
	static int8_t x75 = -1;
	uint64_t x76 = UINT64_MAX;
	int32_t t8 = 140356;

	t8 = ((x73-x74)%(x75<=x76));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x97 = 43097990U;
	static uint32_t x98 = 1765845U;
	int8_t x99 = INT8_MIN;
	uint32_t t9 = 2050368U;

	t9 = ((x97-x98)%(x99<=x100));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x105 = -1193;
	volatile uint64_t x107 = 1LLU;
	static uint64_t x108 = UINT64_MAX;
	int32_t t10 = -524;

	t10 = ((x105-x106)%(x107<=x108));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x114 = INT16_MIN;
	int32_t x115 = -1;
	uint8_t x116 = UINT8_MAX;
	volatile int64_t t11 = -69536560LL;

	t11 = ((x113-x114)%(x115<=x116));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x117 = -14387541606LL;
	int32_t x120 = 3;

	t12 = ((x117-x118)%(x119<=x120));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x122 = INT32_MAX;
	volatile uint64_t x123 = 52355294980823LLU;
	int16_t x124 = INT16_MIN;
	uint32_t t13 = 69197U;

	t13 = ((x121-x122)%(x123<=x124));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x125 = 15315778LLU;
	volatile uint8_t x126 = 12U;
	int16_t x127 = INT16_MIN;
	static volatile int32_t x128 = INT32_MAX;
	volatile uint64_t t14 = 7756167013682419LLU;

	t14 = ((x125-x126)%(x127<=x128));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x133 = 1;
	int16_t x134 = -19;
	static int64_t x136 = 330311LL;

	t15 = ((x133-x134)%(x135<=x136));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x137 = -7335139207350132LL;
	static int64_t x138 = INT64_MIN;
	volatile int16_t x139 = -3;
	uint16_t x140 = UINT16_MAX;
	static volatile int64_t t16 = -612LL;

	t16 = ((x137-x138)%(x139<=x140));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x161 = -3252350;
	int32_t x162 = -1272;
	int16_t x164 = INT16_MIN;
	volatile int32_t t17 = 349868786;

	t17 = ((x161-x162)%(x163<=x164));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x205 = INT16_MIN;
	int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MIN;
	int32_t x208 = -1;
	static int32_t t18 = -2909;

	t18 = ((x205-x206)%(x207<=x208));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x209 = INT8_MAX;
	int32_t x210 = -8023931;
	volatile int32_t t19 = -6;

	t19 = ((x209-x210)%(x211<=x212));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x229 = 1179U;
	int8_t x230 = INT8_MIN;
	static int16_t x231 = INT16_MIN;
	int8_t x232 = -1;
	uint32_t t20 = 2941U;

	t20 = ((x229-x230)%(x231<=x232));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x241 = UINT8_MAX;
	int16_t x242 = 1164;
	int8_t x244 = 2;
	volatile int32_t t21 = 12790;

	t21 = ((x241-x242)%(x243<=x244));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x253 = 21U;
	int32_t x254 = 2447;
	int16_t x255 = -1;

	t22 = ((x253-x254)%(x255<=x256));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x262 = UINT16_MAX;
	int64_t t23 = 34LL;

	t23 = ((x261-x262)%(x263<=x264));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x270 = 256596835U;
	uint32_t x272 = 10396U;

	t24 = ((x269-x270)%(x271<=x272));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x290 = INT8_MIN;
	static int16_t x292 = 0;
	int32_t t25 = -223;

	t25 = ((x289-x290)%(x291<=x292));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x313 = 523117739099159LLU;
	uint8_t x314 = 89U;
	uint64_t t26 = 519697LLU;

	t26 = ((x313-x314)%(x315<=x316));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x317 = INT16_MIN;
	int64_t x318 = INT64_MIN;
	int8_t x319 = 1;
	volatile int64_t t27 = -64145LL;

	t27 = ((x317-x318)%(x319<=x320));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x345 = UINT32_MAX;
	static volatile int16_t x346 = 37;
	volatile uint8_t x347 = UINT8_MAX;
	int64_t x348 = 17547313022830266LL;
	uint32_t t28 = 416U;

	t28 = ((x345-x346)%(x347<=x348));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = INT8_MIN;
	uint8_t x359 = UINT8_MAX;
	int64_t x360 = 571109900LL;

	t29 = ((x357-x358)%(x359<=x360));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x361 = 12356080753562220LL;
	int16_t x362 = -126;
	uint64_t x363 = UINT64_MAX;
	int64_t x364 = -1LL;
	int64_t t30 = 201LL;

	t30 = ((x361-x362)%(x363<=x364));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x369 = INT8_MAX;
	static int64_t x371 = INT64_MIN;
	uint8_t x372 = UINT8_MAX;
	int64_t t31 = -5013780LL;

	t31 = ((x369-x370)%(x371<=x372));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x385 = 1;
	int8_t x386 = INT8_MAX;
	uint32_t x387 = 895U;
	int32_t t32 = 1021774;

	t32 = ((x385-x386)%(x387<=x388));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x389 = -10384103901LL;
	int32_t x390 = INT32_MIN;
	int8_t x391 = INT8_MIN;
	int8_t x392 = -51;
	static int64_t t33 = -26LL;

	t33 = ((x389-x390)%(x391<=x392));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x401 = 6;
	int16_t x402 = -1;
	int32_t x403 = INT32_MIN;
	volatile uint16_t x404 = UINT16_MAX;
	static volatile int32_t t34 = -50207;

	t34 = ((x401-x402)%(x403<=x404));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x409 = 9223U;
	static int64_t x410 = INT64_MAX;
	int16_t x411 = -29;
	uint64_t x412 = UINT64_MAX;
	volatile int64_t t35 = -1017LL;

	t35 = ((x409-x410)%(x411<=x412));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x417 = 3686LLU;
	volatile int32_t x418 = INT32_MAX;
	int32_t x420 = INT32_MAX;
	volatile uint64_t t36 = 3537LLU;

	t36 = ((x417-x418)%(x419<=x420));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x421 = UINT16_MAX;
	volatile int16_t x422 = INT16_MAX;
	int64_t x423 = INT64_MIN;
	uint64_t x424 = UINT64_MAX;
	volatile int32_t t37 = 8913928;

	t37 = ((x421-x422)%(x423<=x424));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x425 = 540221048U;
	uint16_t x426 = 19323U;
	int8_t x427 = INT8_MIN;
	static int32_t x428 = INT32_MAX;
	uint32_t t38 = 709U;

	t38 = ((x425-x426)%(x427<=x428));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x429 = INT64_MIN;
	int32_t x431 = 30837;
	uint32_t x432 = UINT32_MAX;
	int64_t t39 = 0LL;

	t39 = ((x429-x430)%(x431<=x432));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x433 = -53;
	uint8_t x434 = 3U;
	int64_t x435 = INT64_MIN;
	volatile int8_t x436 = 4;
	int32_t t40 = -125;

	t40 = ((x433-x434)%(x435<=x436));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x449 = 1;
	uint8_t x450 = 27U;
	int32_t x451 = 4;
	volatile int32_t x452 = INT32_MAX;
	int32_t t41 = -35258;

	t41 = ((x449-x450)%(x451<=x452));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x453 = INT64_MIN;
	static int64_t x454 = INT64_MIN;
	int32_t x455 = INT32_MIN;

	t42 = ((x453-x454)%(x455<=x456));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x457 = -6;
	static uint64_t x458 = UINT64_MAX;
	uint32_t x460 = UINT32_MAX;
	uint64_t t43 = 517016851293618048LLU;

	t43 = ((x457-x458)%(x459<=x460));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x493 = -1;
	int64_t x494 = -1LL;
	int32_t x495 = -1;
	static uint64_t x496 = UINT64_MAX;

	t44 = ((x493-x494)%(x495<=x496));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x509 = -1;
	int8_t x510 = 3;
	static int16_t x512 = 19;
	int32_t t45 = -1286503;

	t45 = ((x509-x510)%(x511<=x512));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x513 = 1;
	int32_t x514 = INT32_MAX;
	volatile int32_t t46 = 0;

	t46 = ((x513-x514)%(x515<=x516));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x521 = 388U;
	uint16_t x522 = 1U;
	uint32_t x523 = 6307600U;
	int32_t x524 = INT32_MIN;
	uint32_t t47 = 299071555U;

	t47 = ((x521-x522)%(x523<=x524));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x531 = INT16_MIN;
	uint16_t x532 = UINT16_MAX;

	t48 = ((x529-x530)%(x531<=x532));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x537 = -1LL;
	uint64_t x538 = 1LLU;
	volatile uint32_t x539 = UINT32_MAX;
	static int64_t x540 = INT64_MAX;
	volatile uint64_t t49 = 423437177375647LLU;

	t49 = ((x537-x538)%(x539<=x540));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x541 = -1;
	uint8_t x543 = UINT8_MAX;
	uint16_t x544 = UINT16_MAX;
	volatile int32_t t50 = 0;

	t50 = ((x541-x542)%(x543<=x544));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x549 = 48U;
	uint8_t x551 = 114U;
	uint64_t x552 = UINT64_MAX;
	int32_t t51 = -2446;

	t51 = ((x549-x550)%(x551<=x552));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x554 = -51;
	volatile int16_t x555 = 29;
	uint64_t x556 = 100064048438573109LLU;
	int64_t t52 = -10LL;

	t52 = ((x553-x554)%(x555<=x556));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x557 = 4720;
	static volatile uint32_t x558 = 41U;
	static uint32_t x559 = 593168U;
	uint64_t x560 = 292627075LLU;
	volatile uint32_t t53 = 1U;

	t53 = ((x557-x558)%(x559<=x560));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x561 = 30U;
	uint16_t x562 = 474U;

	t54 = ((x561-x562)%(x563<=x564));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x565 = UINT32_MAX;
	int32_t x566 = INT32_MIN;
	int32_t x567 = -1948385;
	int16_t x568 = 13385;

	t55 = ((x565-x566)%(x567<=x568));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x569 = 0U;
	static int16_t x570 = INT16_MIN;
	int8_t x571 = -1;

	t56 = ((x569-x570)%(x571<=x572));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x597 = -169166463405LL;
	int16_t x598 = -1594;
	static uint8_t x599 = UINT8_MAX;
	static uint64_t x600 = UINT64_MAX;
	static int64_t t57 = 1879116LL;

	t57 = ((x597-x598)%(x599<=x600));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x605 = INT16_MIN;
	uint64_t x606 = UINT64_MAX;
	volatile int64_t x607 = INT64_MIN;
	static int16_t x608 = -26;
	volatile uint64_t t58 = 1150666981817LLU;

	t58 = ((x605-x606)%(x607<=x608));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x609 = 13500U;
	int8_t x610 = -1;
	volatile int8_t x612 = 26;
	static volatile uint32_t t59 = 123U;

	t59 = ((x609-x610)%(x611<=x612));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x613 = -44405LL;
	static int32_t x614 = INT32_MAX;
	uint64_t x615 = UINT64_MAX;
	static int32_t x616 = -1;
	volatile int64_t t60 = -75256LL;

	t60 = ((x613-x614)%(x615<=x616));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x621 = 1U;
	uint16_t x622 = UINT16_MAX;
	static int16_t x624 = -1;
	static uint32_t t61 = 7952231U;

	t61 = ((x621-x622)%(x623<=x624));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x625 = INT8_MIN;
	static volatile int16_t x626 = 1022;
	volatile int64_t x627 = INT64_MIN;

	t62 = ((x625-x626)%(x627<=x628));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x629 = -1;
	static uint8_t x630 = 77U;
	volatile uint32_t x632 = 4882245U;
	static int32_t t63 = 7466;

	t63 = ((x629-x630)%(x631<=x632));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x641 = INT8_MIN;
	int32_t x642 = INT32_MIN;
	int8_t x643 = INT8_MAX;
	static volatile uint64_t x644 = 230LLU;

	t64 = ((x641-x642)%(x643<=x644));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x645 = UINT8_MAX;
	volatile int32_t t65 = 10;

	t65 = ((x645-x646)%(x647<=x648));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x658 = -1;
	volatile int32_t x659 = INT32_MIN;
	int16_t x660 = INT16_MAX;
	volatile int64_t t66 = -48414969352268573LL;

	t66 = ((x657-x658)%(x659<=x660));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x665 = INT8_MIN;
	static int8_t x666 = -1;
	volatile int16_t x667 = -1;
	volatile int64_t x668 = INT64_MAX;
	volatile int32_t t67 = -1293825;

	t67 = ((x665-x666)%(x667<=x668));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x673 = -1;
	int64_t x674 = -118490163606LL;
	int16_t x676 = INT16_MAX;
	int64_t t68 = -1LL;

	t68 = ((x673-x674)%(x675<=x676));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x678 = INT8_MIN;
	uint8_t x679 = 103U;
	int16_t x680 = 357;

	t69 = ((x677-x678)%(x679<=x680));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x682 = INT8_MAX;
	int64_t x683 = -68919449955164481LL;
	int8_t x684 = INT8_MAX;
	volatile int64_t t70 = -2LL;

	t70 = ((x681-x682)%(x683<=x684));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x685 = -1;
	static int64_t x686 = INT64_MIN;
	uint64_t x687 = 116LLU;
	volatile int64_t t71 = 47156999LL;

	t71 = ((x685-x686)%(x687<=x688));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x689 = 10U;
	int16_t x691 = INT16_MAX;
	static uint16_t x692 = UINT16_MAX;
	static volatile int32_t t72 = 460;

	t72 = ((x689-x690)%(x691<=x692));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x703 = 15U;
	int8_t x704 = INT8_MAX;
	volatile int32_t t73 = 230797528;

	t73 = ((x701-x702)%(x703<=x704));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x705 = INT8_MIN;
	uint32_t x706 = UINT32_MAX;
	int32_t x708 = 2979;
	volatile uint32_t t74 = 30216U;

	t74 = ((x705-x706)%(x707<=x708));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x713 = UINT32_MAX;
	int8_t x715 = INT8_MIN;
	static uint32_t x716 = UINT32_MAX;

	t75 = ((x713-x714)%(x715<=x716));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x726 = 7U;
	int16_t x727 = INT16_MAX;
	uint16_t x728 = UINT16_MAX;
	volatile uint64_t t76 = 166770253LLU;

	t76 = ((x725-x726)%(x727<=x728));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x741 = UINT64_MAX;
	volatile int64_t x743 = -1LL;
	int32_t x744 = 126;
	volatile uint64_t t77 = 3271LLU;

	t77 = ((x741-x742)%(x743<=x744));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x745 = -1;
	volatile int8_t x746 = -1;
	uint64_t x747 = UINT64_MAX;
	uint64_t x748 = UINT64_MAX;
	volatile int32_t t78 = 1314571;

	t78 = ((x745-x746)%(x747<=x748));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x753 = 0;
	uint32_t x754 = 29820U;
	int32_t x755 = -248474;

	t79 = ((x753-x754)%(x755<=x756));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x758 = INT8_MIN;
	uint64_t x759 = 107074374046756816LLU;
	static int8_t x760 = INT8_MIN;
	volatile int32_t t80 = 303543;

	t80 = ((x757-x758)%(x759<=x760));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x766 = -1;
	int64_t x768 = INT64_MAX;

	t81 = ((x765-x766)%(x767<=x768));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x769 = 68U;
	volatile uint64_t x770 = UINT64_MAX;
	int32_t x771 = INT32_MIN;
	volatile uint64_t t82 = 1107740760063989LLU;

	t82 = ((x769-x770)%(x771<=x772));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x773 = -1;
	int32_t x774 = 1048434380;
	uint8_t x775 = 10U;
	volatile int8_t x776 = INT8_MAX;
	static int32_t t83 = 395;

	t83 = ((x773-x774)%(x775<=x776));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x780 = INT16_MAX;
	int64_t t84 = -518072LL;

	t84 = ((x777-x778)%(x779<=x780));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x782 = 388LLU;
	static uint64_t x784 = 41748463870413148LLU;
	volatile uint64_t t85 = 16700162LLU;

	t85 = ((x781-x782)%(x783<=x784));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x790 = -10;
	int16_t x791 = -12773;
	int32_t t86 = 72865;

	t86 = ((x789-x790)%(x791<=x792));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x805 = INT16_MIN;
	static int16_t x807 = INT16_MIN;
	int64_t x808 = -1LL;
	int32_t t87 = 303900;

	t87 = ((x805-x806)%(x807<=x808));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x829 = 0;
	int32_t x831 = -109287;
	int8_t x832 = -1;
	static volatile int32_t t88 = 2;

	t88 = ((x829-x830)%(x831<=x832));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x833 = 6035U;
	int32_t x834 = -47;
	int64_t x835 = INT64_MIN;
	volatile int32_t t89 = 3;

	t89 = ((x833-x834)%(x835<=x836));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x837 = UINT64_MAX;
	uint32_t x838 = UINT32_MAX;
	uint64_t x840 = UINT64_MAX;
	uint64_t t90 = 15062137598LLU;

	t90 = ((x837-x838)%(x839<=x840));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x845 = INT8_MIN;
	uint64_t x847 = 28495374552880LLU;
	volatile int64_t x848 = INT64_MAX;

	t91 = ((x845-x846)%(x847<=x848));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x849 = -4067775339LL;
	volatile int32_t x850 = INT32_MIN;
	uint16_t x851 = 263U;
	volatile int64_t t92 = -15655609163LL;

	t92 = ((x849-x850)%(x851<=x852));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x853 = -1;
	static int32_t x854 = INT32_MAX;
	int8_t x855 = -1;
	uint16_t x856 = 84U;
	volatile int32_t t93 = -28712;

	t93 = ((x853-x854)%(x855<=x856));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x865 = 35LLU;
	uint8_t x866 = 61U;
	int16_t x867 = INT16_MAX;
	int16_t x868 = INT16_MAX;
	volatile uint64_t t94 = 35807LLU;

	t94 = ((x865-x866)%(x867<=x868));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x869 = 334254LLU;
	int64_t x870 = INT64_MIN;
	int32_t x871 = INT32_MIN;

	t95 = ((x869-x870)%(x871<=x872));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x889 = 2U;
	static int16_t x890 = INT16_MIN;
	static int32_t x891 = -1;
	static uint16_t x892 = 917U;
	int32_t t96 = 1548;

	t96 = ((x889-x890)%(x891<=x892));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x893 = INT16_MIN;
	uint8_t x894 = UINT8_MAX;
	uint8_t x895 = UINT8_MAX;
	int32_t t97 = -195570;

	t97 = ((x893-x894)%(x895<=x896));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x905 = UINT8_MAX;
	uint8_t x906 = 117U;
	uint32_t x907 = 2608947U;
	volatile int32_t t98 = 1;

	t98 = ((x905-x906)%(x907<=x908));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x933 = UINT64_MAX;
	uint16_t x934 = UINT16_MAX;
	uint64_t x935 = UINT64_MAX;
	volatile int64_t x936 = -1LL;
	uint64_t t99 = 1666686228LLU;

	t99 = ((x933-x934)%(x935<=x936));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

