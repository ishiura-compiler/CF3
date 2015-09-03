#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = INT64_MIN;
uint64_t t1 = 17704LLU;
int32_t x18 = INT32_MAX;
uint16_t x20 = 26743U;
int32_t x39 = INT32_MIN;
int32_t x40 = 502418395;
static int64_t t3 = 352398982964LL;
static uint16_t x44 = 7U;
int8_t x54 = INT8_MAX;
uint32_t t5 = 90445870U;
int8_t x65 = INT8_MIN;
volatile int32_t t6 = 2;
static volatile uint8_t x93 = 4U;
int32_t x137 = INT32_MAX;
int32_t x138 = -2608;
volatile int8_t x152 = INT8_MAX;
int16_t x169 = 78;
uint32_t x219 = 2U;
volatile int32_t x231 = 230644;
int64_t x238 = 8842504LL;
static uint16_t x242 = 4U;
int64_t x244 = INT64_MIN;
volatile uint32_t t22 = 91U;
int8_t x329 = -1;
static int64_t x347 = -1458841761LL;
uint16_t x355 = 89U;
int64_t x356 = 8413430889190689LL;
static int64_t x371 = 15768612LL;
uint64_t t27 = 37LLU;
uint64_t x389 = 246247828453104LLU;
int16_t x391 = 0;
static int32_t x399 = 11;
volatile uint16_t x406 = 17U;
uint8_t x444 = 13U;
volatile int16_t x495 = INT16_MIN;
int16_t x496 = 5;
int64_t x498 = INT64_MAX;
uint32_t x517 = UINT32_MAX;
static int16_t x520 = INT16_MIN;
static volatile uint64_t t37 = 603777LLU;
int32_t t39 = 30;
volatile uint64_t x566 = UINT64_MAX;
static int32_t x567 = INT32_MIN;
uint32_t x568 = 101523U;
uint64_t t40 = 6778457551093101950LLU;
int16_t x573 = INT16_MIN;
int8_t x574 = INT8_MAX;
uint64_t x576 = 5484LLU;
uint16_t x578 = UINT16_MAX;
volatile uint32_t x585 = UINT32_MAX;
uint64_t x586 = 48708631795066LLU;
int64_t x596 = INT64_MIN;
uint32_t x622 = 1421473294U;
static int8_t x664 = 0;
volatile uint64_t x691 = 8537665608981167LLU;
volatile int64_t t51 = 8LL;
uint8_t x769 = UINT8_MAX;
volatile int8_t x770 = 1;
int32_t t54 = -2189;
static int32_t t56 = -88458577;
int8_t x830 = -1;
uint64_t t59 = 42724522LLU;
uint32_t x850 = 2U;
static int64_t x916 = INT64_MIN;
int8_t x923 = 1;
static int8_t x947 = INT8_MAX;
volatile int32_t t67 = -417101;
volatile uint64_t x994 = 342746LLU;
uint16_t x995 = UINT16_MAX;
volatile uint32_t x996 = 2U;
volatile uint64_t t68 = 6221LLU;
uint8_t x1007 = 4U;
static volatile uint64_t t69 = 125LLU;
volatile uint32_t t72 = 130833U;
static uint16_t x1053 = 156U;
int32_t x1054 = INT32_MIN;
int32_t t75 = -8682696;
int32_t x1081 = -1;
volatile uint64_t t78 = 1942LLU;
static int16_t x1112 = INT16_MIN;
int16_t x1203 = INT16_MIN;
int64_t t87 = -1LL;
volatile int8_t x1216 = 2;
uint16_t x1226 = 7U;
int8_t x1229 = -9;
volatile int16_t x1243 = INT16_MAX;
uint32_t x1269 = 0U;
static volatile uint64_t t94 = 180481808105LLU;
int8_t x1343 = INT8_MAX;
int32_t x1352 = INT32_MIN;


void f0(void) {
	static uint16_t x5 = 3U;
	static uint64_t x7 = 20LLU;
	volatile uint16_t x8 = 1221U;
	int64_t t0 = 16987238821300163LL;

	t0 = ((x5&x6)>>(x7&x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x13 = -1LL;
	static uint64_t x14 = 47LLU;
	volatile uint16_t x15 = 3139U;
	uint16_t x16 = 0U;

	t1 = ((x13&x14)>>(x15&x16));

	if (t1 != 47LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 1U;
	int16_t x19 = 3;
	volatile uint32_t t2 = 2830866U;

	t2 = ((x17&x18)>>(x19&x20));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x37 = INT64_MIN;
	uint8_t x38 = 20U;

	t3 = ((x37&x38)>>(x39&x40));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x41 = 46U;
	uint64_t x42 = UINT64_MAX;
	uint16_t x43 = 1220U;
	static uint64_t t4 = 342729073LLU;

	t4 = ((x41&x42)>>(x43&x44));

	if (t4 != 2LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x53 = 15823U;
	volatile int8_t x55 = INT8_MAX;
	int64_t x56 = INT64_MIN;

	t5 = ((x53&x54)>>(x55&x56));

	if (t5 != 79U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x66 = UINT8_MAX;
	uint64_t x67 = UINT64_MAX;
	uint64_t x68 = 11LLU;

	t6 = ((x65&x66)>>(x67&x68));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x69 = 6U;
	int64_t x70 = INT64_MAX;
	uint8_t x71 = 58U;
	static int32_t x72 = -668060730;
	int64_t t7 = 334145345077716LL;

	t7 = ((x69&x70)>>(x71&x72));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x85 = -1;
	static uint64_t x86 = UINT64_MAX;
	int16_t x87 = INT16_MIN;
	uint8_t x88 = UINT8_MAX;
	uint64_t t8 = UINT64_MAX;

	t8 = ((x85&x86)>>(x87&x88));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x94 = 0U;
	int8_t x95 = 1;
	uint16_t x96 = 4796U;
	uint32_t t9 = 200355679U;

	t9 = ((x93&x94)>>(x95&x96));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x133 = 0U;
	int64_t x134 = -2785503910257384423LL;
	int16_t x135 = INT16_MIN;
	static int16_t x136 = INT16_MAX;
	volatile int64_t t10 = -253762484236LL;

	t10 = ((x133&x134)>>(x135&x136));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x139 = 0;
	volatile int8_t x140 = INT8_MAX;
	int32_t t11 = 1593220;

	t11 = ((x137&x138)>>(x139&x140));

	if (t11 != 2147481040) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x141 = 125167U;
	int32_t x142 = 69601466;
	static uint64_t x143 = UINT64_MAX;
	uint8_t x144 = 21U;
	volatile uint32_t t12 = 59723928U;

	t12 = ((x141&x142)>>(x143&x144));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x149 = 49U;
	static int32_t x150 = -12;
	uint16_t x151 = 792U;
	static volatile int32_t t13 = 0;

	t13 = ((x149&x150)>>(x151&x152));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x170 = -116675649792978113LL;
	int8_t x171 = INT8_MAX;
	uint64_t x172 = 28066LLU;
	int64_t t14 = 12577010905775LL;

	t14 = ((x169&x170)>>(x171&x172));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x193 = UINT16_MAX;
	int64_t x194 = INT64_MIN;
	uint8_t x195 = 1U;
	volatile int16_t x196 = 1403;
	int64_t t15 = -17634951698443033LL;

	t15 = ((x193&x194)>>(x195&x196));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x217 = -13;
	uint32_t x218 = 118U;
	static int8_t x220 = INT8_MAX;
	volatile uint32_t t16 = 2U;

	t16 = ((x217&x218)>>(x219&x220));

	if (t16 != 28U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x221 = INT32_MIN;
	uint32_t x222 = 157953U;
	static int32_t x223 = 12;
	volatile uint8_t x224 = 111U;
	static volatile uint32_t t17 = 8139867U;

	t17 = ((x221&x222)>>(x223&x224));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x229 = 0;
	int64_t x230 = INT64_MIN;
	uint16_t x232 = 19U;
	volatile int64_t t18 = -11626930357360655LL;

	t18 = ((x229&x230)>>(x231&x232));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x237 = INT8_MIN;
	int64_t x239 = 2323193192865759970LL;
	volatile uint8_t x240 = 1U;
	static volatile int64_t t19 = 2238819438100214597LL;

	t19 = ((x237&x238)>>(x239&x240));

	if (t19 != 8842496LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x241 = INT8_MAX;
	static int32_t x243 = INT32_MAX;
	volatile int32_t t20 = -15127294;

	t20 = ((x241&x242)>>(x243&x244));

	if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x277 = INT8_MIN;
	static uint64_t x278 = UINT64_MAX;
	volatile int8_t x279 = 2;
	int8_t x280 = INT8_MIN;
	uint64_t t21 = 182821935LLU;

	t21 = ((x277&x278)>>(x279&x280));

	if (t21 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x317 = UINT32_MAX;
	static uint16_t x318 = 7631U;
	int8_t x319 = 18;
	int16_t x320 = INT16_MAX;

	t22 = ((x317&x318)>>(x319&x320));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x330 = 0U;
	int32_t x331 = 486;
	volatile int16_t x332 = INT16_MIN;
	int32_t t23 = -2212;

	t23 = ((x329&x330)>>(x331&x332));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x345 = UINT64_MAX;
	static uint8_t x346 = UINT8_MAX;
	static int8_t x348 = 55;
	volatile uint64_t t24 = 29024664732LLU;

	t24 = ((x345&x346)>>(x347&x348));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x353 = -1473636992082649LL;
	uint32_t x354 = 66733198U;
	static int64_t t25 = -172416391504LL;

	t25 = ((x353&x354)>>(x355&x356));

	if (t25 != 21299715LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x369 = INT8_MAX;
	uint64_t x370 = UINT64_MAX;
	uint8_t x372 = 117U;
	static uint64_t t26 = 108220264130408LLU;

	t26 = ((x369&x370)>>(x371&x372));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x385 = INT16_MIN;
	static uint64_t x386 = UINT64_MAX;
	int16_t x387 = 2;
	int8_t x388 = 1;

	t27 = ((x385&x386)>>(x387&x388));

	if (t27 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x390 = INT64_MIN;
	int8_t x392 = INT8_MIN;
	uint64_t t28 = 119229046892LLU;

	t28 = ((x389&x390)>>(x391&x392));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x397 = -383852LL;
	int8_t x398 = 0;
	int16_t x400 = INT16_MIN;
	volatile int64_t t29 = 19LL;

	t29 = ((x397&x398)>>(x399&x400));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x405 = INT16_MIN;
	int32_t x407 = INT32_MIN;
	uint8_t x408 = 1U;
	volatile int32_t t30 = 1058142939;

	t30 = ((x405&x406)>>(x407&x408));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x441 = -27659228028LL;
	uint32_t x442 = UINT32_MAX;
	volatile int8_t x443 = 0;
	volatile int64_t t31 = -15079329384379588LL;

	t31 = ((x441&x442)>>(x443&x444));

	if (t31 != 2405543044LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x493 = UINT8_MAX;
	static volatile int64_t x494 = 121486042811401LL;
	int64_t t32 = -453443653LL;

	t32 = ((x493&x494)>>(x495&x496));

	if (t32 != 9LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x497 = 205191100048LLU;
	volatile int8_t x499 = 2;
	static uint32_t x500 = 328U;
	volatile uint64_t t33 = 2083761695270839LLU;

	t33 = ((x497&x498)>>(x499&x500));

	if (t33 != 205191100048LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x501 = 0;
	volatile int32_t x502 = -1;
	int32_t x503 = INT32_MIN;
	volatile uint8_t x504 = UINT8_MAX;
	volatile int32_t t34 = 1592;

	t34 = ((x501&x502)>>(x503&x504));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x513 = -1LL;
	int64_t x514 = 563004738LL;
	uint16_t x515 = 12U;
	volatile int8_t x516 = -1;
	volatile int64_t t35 = 321224730261518LL;

	t35 = ((x513&x514)>>(x515&x516));

	if (t35 != 137452LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x518 = -1LL;
	uint32_t x519 = 41U;
	volatile int64_t t36 = -68LL;

	t36 = ((x517&x518)>>(x519&x520));

	if (t36 != 4294967295LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x525 = 526439397930LLU;
	int32_t x526 = -83;
	static int8_t x527 = 0;
	int32_t x528 = INT32_MIN;

	t37 = ((x525&x526)>>(x527&x528));

	if (t37 != 526439397928LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x545 = UINT16_MAX;
	int8_t x546 = -1;
	volatile uint16_t x547 = 1U;
	int32_t x548 = -1;
	static int32_t t38 = 1410;

	t38 = ((x545&x546)>>(x547&x548));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x549 = -13;
	volatile uint8_t x550 = 0U;
	uint16_t x551 = 3U;
	static int16_t x552 = -53;

	t39 = ((x549&x550)>>(x551&x552));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x565 = 2U;

	t40 = ((x565&x566)>>(x567&x568));

	if (t40 != 2LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x575 = INT32_MIN;
	int32_t t41 = 2570;

	t41 = ((x573&x574)>>(x575&x576));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x577 = INT16_MAX;
	int8_t x579 = INT8_MIN;
	uint32_t x580 = 0U;
	volatile int32_t t42 = 5;

	t42 = ((x577&x578)>>(x579&x580));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x587 = 16648190525LL;
	int64_t x588 = INT64_MIN;
	uint64_t t43 = 58209668672933679LLU;

	t43 = ((x585&x586)>>(x587&x588));

	if (t43 != 3702658426LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x593 = INT32_MAX;
	uint64_t x594 = 45LLU;
	uint32_t x595 = 429312U;
	static uint64_t t44 = 503LLU;

	t44 = ((x593&x594)>>(x595&x596));

	if (t44 != 45LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x601 = UINT32_MAX;
	static uint16_t x602 = 11241U;
	int8_t x603 = 0;
	static int64_t x604 = -1LL;
	volatile uint32_t t45 = 45U;

	t45 = ((x601&x602)>>(x603&x604));

	if (t45 != 11241U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x613 = 1U;
	int32_t x614 = INT32_MIN;
	static volatile uint64_t x615 = 154133958773851393LLU;
	int64_t x616 = 8LL;
	int32_t t46 = -371;

	t46 = ((x613&x614)>>(x615&x616));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x621 = 8528LLU;
	uint8_t x623 = 0U;
	static int64_t x624 = 245452447782410609LL;
	static uint64_t t47 = 64049LLU;

	t47 = ((x621&x622)>>(x623&x624));

	if (t47 != 8192LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x661 = 30U;
	uint16_t x662 = 2U;
	int32_t x663 = INT32_MIN;
	static int32_t t48 = -1;

	t48 = ((x661&x662)>>(x663&x664));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x689 = UINT8_MAX;
	int64_t x690 = INT64_MIN;
	int64_t x692 = INT64_MIN;
	int64_t t49 = 0LL;

	t49 = ((x689&x690)>>(x691&x692));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x737 = INT64_MIN;
	int64_t x738 = 1662LL;
	int16_t x739 = INT16_MIN;
	int16_t x740 = 31;
	volatile int64_t t50 = -3928LL;

	t50 = ((x737&x738)>>(x739&x740));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x745 = INT64_MIN;
	uint8_t x746 = 61U;
	int32_t x747 = 15011735;
	volatile int8_t x748 = INT8_MAX;

	t51 = ((x745&x746)>>(x747&x748));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x761 = UINT16_MAX;
	int32_t x762 = -3;
	int64_t x763 = INT64_MIN;
	uint64_t x764 = 810183872LLU;
	int32_t t52 = -55;

	t52 = ((x761&x762)>>(x763&x764));

	if (t52 != 65533) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x771 = INT64_MIN;
	int8_t x772 = 46;
	int32_t t53 = 23;

	t53 = ((x769&x770)>>(x771&x772));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x773 = INT8_MAX;
	int16_t x774 = 3670;
	int32_t x775 = INT32_MIN;
	static uint64_t x776 = 3572768LLU;

	t54 = ((x773&x774)>>(x775&x776));

	if (t54 != 86) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x781 = UINT16_MAX;
	int64_t x782 = -1LL;
	volatile int32_t x783 = INT32_MIN;
	uint8_t x784 = 4U;
	int64_t t55 = 910317647487338LL;

	t55 = ((x781&x782)>>(x783&x784));

	if (t55 != 65535LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x801 = INT16_MIN;
	uint8_t x802 = 1U;
	int32_t x803 = INT32_MIN;
	uint8_t x804 = UINT8_MAX;

	t56 = ((x801&x802)>>(x803&x804));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x821 = INT64_MAX;
	static int8_t x822 = 4;
	static int8_t x823 = INT8_MAX;
	int64_t x824 = 16622229LL;
	int64_t t57 = -489LL;

	t57 = ((x821&x822)>>(x823&x824));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x829 = 1;
	uint64_t x831 = 1649022LLU;
	int64_t x832 = 0LL;
	volatile int32_t t58 = 41083502;

	t58 = ((x829&x830)>>(x831&x832));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x833 = UINT64_MAX;
	uint16_t x834 = 0U;
	int8_t x835 = 14;
	uint16_t x836 = UINT16_MAX;

	t59 = ((x833&x834)>>(x835&x836));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x849 = -1;
	static volatile uint32_t x851 = 8834U;
	volatile uint8_t x852 = 0U;
	volatile uint32_t t60 = 443711890U;

	t60 = ((x849&x850)>>(x851&x852));

	if (t60 != 2U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x913 = INT64_MAX;
	uint8_t x914 = 30U;
	uint16_t x915 = 71U;
	volatile int64_t t61 = 6LL;

	t61 = ((x913&x914)>>(x915&x916));

	if (t61 != 30LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x921 = 0U;
	int64_t x922 = INT64_MIN;
	static int64_t x924 = INT64_MAX;
	static volatile int64_t t62 = 0LL;

	t62 = ((x921&x922)>>(x923&x924));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x929 = INT16_MAX;
	static volatile int64_t x930 = -24LL;
	volatile int32_t x931 = INT32_MIN;
	static int32_t x932 = INT32_MAX;
	int64_t t63 = 3267138934897LL;

	t63 = ((x929&x930)>>(x931&x932));

	if (t63 != 32744LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x933 = -23;
	uint64_t x934 = UINT64_MAX;
	uint64_t x935 = 6198LLU;
	int64_t x936 = INT64_MIN;
	uint64_t t64 = 7634905593439222LLU;

	t64 = ((x933&x934)>>(x935&x936));

	if (t64 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x945 = 115U;
	volatile int8_t x946 = INT8_MAX;
	int32_t x948 = INT32_MIN;
	volatile int32_t t65 = -64006817;

	t65 = ((x945&x946)>>(x947&x948));

	if (t65 != 115) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x961 = -1LL;
	volatile int16_t x962 = 9;
	static uint8_t x963 = 0U;
	int16_t x964 = -1;
	int64_t t66 = 0LL;

	t66 = ((x961&x962)>>(x963&x964));

	if (t66 != 9LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x985 = UINT8_MAX;
	static int32_t x986 = INT32_MIN;
	int8_t x987 = 49;
	int64_t x988 = -51693LL;

	t67 = ((x985&x986)>>(x987&x988));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x993 = INT8_MAX;

	t68 = ((x993&x994)>>(x995&x996));

	if (t68 != 22LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x1005 = UINT64_MAX;
	int16_t x1006 = INT16_MAX;
	volatile int64_t x1008 = -1LL;

	t69 = ((x1005&x1006)>>(x1007&x1008));

	if (t69 != 2047LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x1009 = 50LLU;
	static int8_t x1010 = INT8_MAX;
	static int16_t x1011 = 0;
	volatile int8_t x1012 = -1;
	volatile uint64_t t70 = 234576LLU;

	t70 = ((x1009&x1010)>>(x1011&x1012));

	if (t70 != 50LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x1017 = 18171233;
	uint64_t x1018 = UINT64_MAX;
	int8_t x1019 = 5;
	int64_t x1020 = -2122057745419LL;
	uint64_t t71 = 3LLU;

	t71 = ((x1017&x1018)>>(x1019&x1020));

	if (t71 != 567851LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x1021 = 2U;
	uint32_t x1022 = 2U;
	uint16_t x1023 = 17U;
	uint16_t x1024 = 100U;

	t72 = ((x1021&x1022)>>(x1023&x1024));

	if (t72 != 2U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x1045 = 182130416864935LLU;
	int16_t x1046 = 7766;
	int32_t x1047 = -1;
	uint16_t x1048 = 26U;
	volatile uint64_t t73 = 9021LLU;

	t73 = ((x1045&x1046)>>(x1047&x1048));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x1055 = 2;
	int32_t x1056 = INT32_MIN;
	int32_t t74 = -616824;

	t74 = ((x1053&x1054)>>(x1055&x1056));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1065 = INT8_MIN;
	volatile int8_t x1066 = 2;
	uint16_t x1067 = 0U;
	int64_t x1068 = 648437LL;

	t75 = ((x1065&x1066)>>(x1067&x1068));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x1073 = 1561369333763LL;
	static int8_t x1074 = -22;
	volatile uint16_t x1075 = UINT16_MAX;
	static int32_t x1076 = INT32_MIN;
	volatile int64_t t76 = 0LL;

	t76 = ((x1073&x1074)>>(x1075&x1076));

	if (t76 != 1561369333762LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1077 = 3U;
	volatile uint8_t x1078 = 11U;
	int16_t x1079 = 18;
	static int32_t x1080 = INT32_MIN;
	volatile int32_t t77 = 425;

	t77 = ((x1077&x1078)>>(x1079&x1080));

	if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1082 = UINT64_MAX;
	volatile int64_t x1083 = -1LL;
	int16_t x1084 = 1;

	t78 = ((x1081&x1082)>>(x1083&x1084));

	if (t78 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x1093 = UINT32_MAX;
	uint32_t x1094 = UINT32_MAX;
	uint16_t x1095 = 651U;
	volatile int32_t x1096 = INT32_MIN;
	volatile uint32_t t79 = UINT32_MAX;

	t79 = ((x1093&x1094)>>(x1095&x1096));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x1105 = UINT16_MAX;
	int16_t x1106 = -1326;
	int8_t x1107 = INT8_MAX;
	uint32_t x1108 = 1U;
	int32_t t80 = -7;

	t80 = ((x1105&x1106)>>(x1107&x1108));

	if (t80 != 32105) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x1109 = 7705637LLU;
	uint64_t x1110 = 2365858375LLU;
	volatile int8_t x1111 = INT8_MAX;
	uint64_t t81 = 2474LLU;

	t81 = ((x1109&x1110)>>(x1111&x1112));

	if (t81 != 262149LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1133 = INT8_MAX;
	static uint64_t x1134 = UINT64_MAX;
	static int32_t x1135 = -258169714;
	int8_t x1136 = 0;
	uint64_t t82 = 492LLU;

	t82 = ((x1133&x1134)>>(x1135&x1136));

	if (t82 != 127LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x1137 = 1927975887U;
	uint16_t x1138 = UINT16_MAX;
	volatile uint64_t x1139 = 2120684170421578LLU;
	int16_t x1140 = 0;
	volatile uint32_t t83 = 17072U;

	t83 = ((x1137&x1138)>>(x1139&x1140));

	if (t83 != 37839U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x1161 = UINT8_MAX;
	int32_t x1162 = INT32_MIN;
	uint8_t x1163 = 2U;
	volatile uint16_t x1164 = 2301U;
	volatile int32_t t84 = -2650776;

	t84 = ((x1161&x1162)>>(x1163&x1164));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1165 = UINT64_MAX;
	static int64_t x1166 = INT64_MAX;
	uint16_t x1167 = UINT16_MAX;
	int32_t x1168 = INT32_MIN;
	uint64_t t85 = 42161702082345359LLU;

	t85 = ((x1165&x1166)>>(x1167&x1168));

	if (t85 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x1193 = INT64_MIN;
	uint8_t x1194 = 0U;
	static volatile int16_t x1195 = INT16_MIN;
	volatile int8_t x1196 = INT8_MAX;
	volatile int64_t t86 = 106292662LL;

	t86 = ((x1193&x1194)>>(x1195&x1196));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x1201 = INT64_MAX;
	static int32_t x1202 = 2286636;
	int16_t x1204 = INT16_MAX;

	t87 = ((x1201&x1202)>>(x1203&x1204));

	if (t87 != 2286636LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1213 = 179307U;
	uint64_t x1214 = UINT64_MAX;
	int32_t x1215 = INT32_MIN;
	volatile uint64_t t88 = 34352139531546LLU;

	t88 = ((x1213&x1214)>>(x1215&x1216));

	if (t88 != 179307LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x1225 = -1;
	int16_t x1227 = INT16_MAX;
	volatile int32_t x1228 = INT32_MIN;
	volatile int32_t t89 = 97;

	t89 = ((x1225&x1226)>>(x1227&x1228));

	if (t89 != 7) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x1230 = UINT8_MAX;
	int8_t x1231 = INT8_MAX;
	int16_t x1232 = INT16_MIN;
	static volatile int32_t t90 = -477;

	t90 = ((x1229&x1230)>>(x1231&x1232));

	if (t90 != 247) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x1237 = 1U;
	uint8_t x1238 = 11U;
	int8_t x1239 = -1;
	int8_t x1240 = 12;
	int32_t t91 = 5606768;

	t91 = ((x1237&x1238)>>(x1239&x1240));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x1241 = UINT16_MAX;
	volatile int32_t x1242 = INT32_MAX;
	int16_t x1244 = INT16_MIN;
	int32_t t92 = -181510361;

	t92 = ((x1241&x1242)>>(x1243&x1244));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x1257 = 178409451918LLU;
	int16_t x1258 = INT16_MAX;
	uint16_t x1259 = 698U;
	int16_t x1260 = INT16_MIN;
	uint64_t t93 = 18LLU;

	t93 = ((x1257&x1258)>>(x1259&x1260));

	if (t93 != 12686LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x1270 = 174820112916957970LLU;
	uint64_t x1271 = 1LLU;
	volatile int16_t x1272 = INT16_MAX;

	t94 = ((x1269&x1270)>>(x1271&x1272));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x1297 = -1;
	int16_t x1298 = 11930;
	volatile uint8_t x1299 = UINT8_MAX;
	volatile int8_t x1300 = 11;
	volatile int32_t t95 = 13721084;

	t95 = ((x1297&x1298)>>(x1299&x1300));

	if (t95 != 5) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x1341 = INT8_MIN;
	static int8_t x1342 = 59;
	int8_t x1344 = 17;
	volatile int32_t t96 = 737883307;

	t96 = ((x1341&x1342)>>(x1343&x1344));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x1349 = 1585;
	static uint8_t x1350 = UINT8_MAX;
	static uint8_t x1351 = 1U;
	volatile int32_t t97 = -3;

	t97 = ((x1349&x1350)>>(x1351&x1352));

	if (t97 != 49) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1353 = 45LL;
	int16_t x1354 = -2898;
	int8_t x1355 = INT8_MIN;
	uint8_t x1356 = 11U;
	volatile int64_t t98 = -395555078300040LL;

	t98 = ((x1353&x1354)>>(x1355&x1356));

	if (t98 != 44LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1357 = INT32_MAX;
	int16_t x1358 = INT16_MAX;
	uint8_t x1359 = 3U;
	static volatile int8_t x1360 = INT8_MAX;
	volatile int32_t t99 = 37260560;

	t99 = ((x1357&x1358)>>(x1359&x1360));

	if (t99 != 4095) { NG(); } else { ; }
	
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

