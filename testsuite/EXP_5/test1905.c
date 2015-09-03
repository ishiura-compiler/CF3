#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 61460724970LL;
int64_t x12 = INT64_MAX;
uint64_t x17 = 20120047LLU;
static int32_t t4 = 3;
volatile int8_t x66 = INT8_MIN;
volatile int32_t x68 = INT32_MIN;
int32_t t7 = -1;
static volatile uint32_t x119 = UINT32_MAX;
uint8_t x133 = 0U;
uint64_t x135 = UINT64_MAX;
static int32_t x156 = -5479839;
static int8_t x170 = INT8_MIN;
volatile int32_t t12 = -10;
uint8_t x179 = 4U;
volatile uint64_t t14 = 387LLU;
int8_t x200 = INT8_MAX;
static volatile int32_t x226 = -6790;
int16_t x252 = INT16_MIN;
int32_t x268 = 95;
static int64_t x279 = INT64_MAX;
int64_t x284 = 145026157378299496LL;
volatile uint32_t t22 = UINT32_MAX;
static volatile int32_t t23 = 2;
static int64_t x289 = 3538118607LL;
static uint8_t x290 = UINT8_MAX;
volatile int32_t t25 = 998;
int32_t x301 = INT32_MAX;
static int64_t x302 = -1LL;
int16_t x303 = INT16_MIN;
uint8_t x331 = 41U;
volatile int32_t t29 = 1;
int64_t x336 = INT64_MIN;
volatile int32_t t32 = 50513935;
volatile uint16_t x369 = UINT16_MAX;
static int8_t x386 = INT8_MIN;
volatile int32_t x388 = INT32_MIN;
static volatile uint64_t t36 = 44308149992863391LLU;
uint64_t x389 = 2641744064024525184LLU;
int32_t x402 = INT32_MIN;
int32_t x403 = -110476;
static int32_t x404 = INT32_MAX;
uint32_t x454 = UINT32_MAX;
static int16_t x458 = INT16_MIN;
int16_t x460 = -1;
volatile uint8_t x474 = 1U;
int32_t x475 = -513969;
volatile int32_t t44 = 109516241;
int64_t x477 = INT64_MAX;
int8_t x479 = -1;
static int64_t x544 = -1LL;
int64_t x554 = 5LL;
int64_t t49 = INT64_MAX;
volatile uint32_t x577 = 12285368U;
volatile int64_t x579 = -1LL;
int64_t x590 = -1LL;
volatile uint8_t x591 = UINT8_MAX;
int32_t x644 = INT32_MIN;
volatile uint8_t x661 = 90U;
uint8_t x678 = 0U;
static uint16_t x719 = 0U;
int32_t t64 = 18;
int32_t x729 = 468433220;
volatile int32_t t65 = -21;
uint64_t x761 = UINT64_MAX;
uint16_t x763 = 3681U;
static uint64_t t66 = 0LLU;
uint8_t x789 = 12U;
int64_t x827 = INT64_MAX;
static int8_t x830 = INT8_MAX;
uint8_t x838 = 42U;
int32_t x847 = -1;
int16_t x848 = INT16_MIN;
uint16_t x851 = 23U;
volatile int64_t x868 = -1LL;
int32_t t76 = 77130;
static uint8_t x903 = 68U;
int64_t x921 = 17340674097477554LL;
int16_t x922 = INT16_MAX;
int32_t x923 = INT32_MAX;
volatile int32_t x938 = -1;
volatile int16_t x939 = INT16_MIN;
int16_t x945 = 63;
volatile int32_t t84 = -17605775;
int8_t x963 = INT8_MIN;
int32_t x984 = INT32_MIN;
volatile int32_t t87 = 594782;
int64_t x995 = INT64_MIN;
volatile int32_t t89 = 4904199;
static int8_t x1010 = -1;
int8_t x1011 = -14;
int16_t x1036 = INT16_MIN;
volatile int32_t t91 = 16711916;
int8_t x1046 = 6;
static int32_t x1061 = 123;
static uint16_t x1062 = 677U;
static volatile int16_t x1063 = INT16_MIN;
volatile int16_t x1072 = -1162;
volatile int32_t t94 = 211;
static int64_t t95 = 2LL;
int16_t x1082 = -1;
static uint64_t x1083 = 52LLU;
volatile int64_t x1084 = INT64_MIN;
volatile int32_t t96 = -62066278;
int8_t x1097 = INT8_MAX;
static volatile uint8_t x1099 = 1U;
int32_t t97 = -7826325;
volatile int32_t t98 = -51;
static volatile int64_t x1146 = -1LL;


void f0(void) {
	uint32_t x1 = 2U;
	int64_t x3 = -95716910801443769LL;
	uint64_t x4 = UINT64_MAX;
	volatile uint32_t t0 = 3005596U;

	t0 = (x1>>((x2|x3)/x4));

	if (t0 != 2U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 63528891979567921LLU;
	volatile int16_t x6 = -1;
	static volatile uint16_t x7 = 2U;
	volatile uint8_t x8 = UINT8_MAX;
	volatile uint64_t t1 = 32707LLU;

	t1 = (x5>>((x6|x7)/x8));

	if (t1 != 63528891979567921LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 1412;
	static uint8_t x10 = UINT8_MAX;
	int32_t x11 = -1;
	volatile int32_t t2 = 49762428;

	t2 = (x9>>((x10|x11)/x12));

	if (t2 != 1412) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = -1;
	static int64_t x19 = INT64_MIN;
	int8_t x20 = INT8_MAX;
	uint64_t t3 = 30232031218LLU;

	t3 = (x17>>((x18|x19)/x20));

	if (t3 != 20120047LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x41 = UINT16_MAX;
	int32_t x42 = INT32_MIN;
	static int16_t x43 = INT16_MAX;
	static int64_t x44 = INT64_MIN;

	t4 = (x41>>((x42|x43)/x44));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x65 = 63007350U;
	int64_t x67 = INT64_MAX;
	volatile uint32_t t5 = 19U;

	t5 = (x65>>((x66|x67)/x68));

	if (t5 != 63007350U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x77 = 9U;
	uint64_t x78 = UINT64_MAX;
	int32_t x79 = INT32_MIN;
	int64_t x80 = INT64_MAX;
	volatile uint32_t t6 = 60410U;

	t6 = (x77>>((x78|x79)/x80));

	if (t6 != 2U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x85 = UINT16_MAX;
	int32_t x86 = INT32_MIN;
	int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MIN;

	t7 = (x85>>((x86|x87)/x88));

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x109 = 67U;
	int32_t x110 = INT32_MAX;
	int16_t x111 = 45;
	int32_t x112 = INT32_MAX;
	volatile int32_t t8 = 51;

	t8 = (x109>>((x110|x111)/x112));

	if (t8 != 33) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x117 = INT16_MAX;
	int64_t x118 = -1LL;
	int32_t x120 = INT32_MIN;
	int32_t t9 = -419885877;

	t9 = (x117>>((x118|x119)/x120));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x134 = 526883712U;
	volatile int32_t x136 = INT32_MIN;
	static int32_t t10 = -154;

	t10 = (x133>>((x134|x135)/x136));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x153 = UINT8_MAX;
	int16_t x154 = INT16_MIN;
	int16_t x155 = -1;
	volatile int32_t t11 = 356242550;

	t11 = (x153>>((x154|x155)/x156));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x169 = 5U;
	uint16_t x171 = UINT16_MAX;
	int8_t x172 = INT8_MIN;

	t12 = (x169>>((x170|x171)/x172));

	if (t12 != 5) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x177 = UINT64_MAX;
	int16_t x178 = 32;
	volatile uint16_t x180 = UINT16_MAX;
	uint64_t t13 = UINT64_MAX;

	t13 = (x177>>((x178|x179)/x180));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x189 = 51659779LLU;
	int16_t x190 = -83;
	int64_t x191 = INT64_MAX;
	volatile int64_t x192 = 1598552639LL;

	t14 = (x189>>((x190|x191)/x192));

	if (t14 != 51659779LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x197 = 0U;
	static int64_t x198 = -1LL;
	static uint32_t x199 = 425U;
	int32_t t15 = 119;

	t15 = (x197>>((x198|x199)/x200));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x217 = 36U;
	uint8_t x218 = 39U;
	int8_t x219 = INT8_MIN;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t16 = 10;

	t16 = (x217>>((x218|x219)/x220));

	if (t16 != 36) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x225 = UINT64_MAX;
	volatile uint64_t x227 = 1276687587849660LLU;
	int16_t x228 = INT16_MIN;
	static volatile uint64_t t17 = 10163707472399371LLU;

	t17 = (x225>>((x226|x227)/x228));

	if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x237 = 61U;
	int8_t x238 = 12;
	uint64_t x239 = UINT64_MAX;
	uint64_t x240 = UINT64_MAX;
	int32_t t18 = -482873596;

	t18 = (x237>>((x238|x239)/x240));

	if (t18 != 30) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x249 = INT16_MAX;
	int8_t x250 = INT8_MAX;
	static int16_t x251 = INT16_MIN;
	volatile int32_t t19 = 0;

	t19 = (x249>>((x250|x251)/x252));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x265 = 261097119LL;
	int8_t x266 = INT8_MAX;
	uint8_t x267 = UINT8_MAX;
	volatile int64_t t20 = -63351175108LL;

	t20 = (x265>>((x266|x267)/x268));

	if (t20 != 65274279LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x277 = 350880596U;
	volatile int32_t x278 = INT32_MAX;
	volatile int64_t x280 = INT64_MIN;
	uint32_t t21 = 109607U;

	t21 = (x277>>((x278|x279)/x280));

	if (t21 != 350880596U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x281 = UINT32_MAX;
	static volatile int8_t x282 = INT8_MIN;
	int64_t x283 = INT64_MIN;

	t22 = (x281>>((x282|x283)/x284));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x285 = 8355171;
	int16_t x286 = -1;
	uint8_t x287 = 1U;
	static uint8_t x288 = 11U;

	t23 = (x285>>((x286|x287)/x288));

	if (t23 != 8355171) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x291 = 82898U;
	uint64_t x292 = 436023340LLU;
	volatile int64_t t24 = -9LL;

	t24 = (x289>>((x290|x291)/x292));

	if (t24 != 3538118607LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x297 = UINT16_MAX;
	int32_t x298 = INT32_MIN;
	uint32_t x299 = 2063540232U;
	int16_t x300 = -1;

	t25 = (x297>>((x298|x299)/x300));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x304 = INT64_MIN;
	static int32_t t26 = INT32_MAX;

	t26 = (x301>>((x302|x303)/x304));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x305 = 16;
	int8_t x306 = INT8_MAX;
	int8_t x307 = INT8_MIN;
	volatile uint16_t x308 = 7U;
	volatile int32_t t27 = 14;

	t27 = (x305>>((x306|x307)/x308));

	if (t27 != 16) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x309 = INT32_MAX;
	int64_t x310 = -1LL;
	int16_t x311 = INT16_MIN;
	volatile int16_t x312 = 675;
	volatile int32_t t28 = INT32_MAX;

	t28 = (x309>>((x310|x311)/x312));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x329 = 1U;
	volatile int32_t x330 = -1;
	int64_t x332 = -1LL;

	t29 = (x329>>((x330|x331)/x332));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x333 = 7781049015202475859LLU;
	uint32_t x334 = UINT32_MAX;
	int32_t x335 = INT32_MIN;
	volatile uint64_t t30 = 25490LLU;

	t30 = (x333>>((x334|x335)/x336));

	if (t30 != 7781049015202475859LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x337 = INT64_MAX;
	int8_t x338 = -1;
	uint16_t x339 = UINT16_MAX;
	static int8_t x340 = INT8_MAX;
	int64_t t31 = INT64_MAX;

	t31 = (x337>>((x338|x339)/x340));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x341 = UINT8_MAX;
	static uint32_t x342 = 298882184U;
	uint8_t x343 = 7U;
	int32_t x344 = -1;

	t32 = (x341>>((x342|x343)/x344));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x353 = 1966U;
	volatile int16_t x354 = 28;
	int8_t x355 = 56;
	int16_t x356 = 1715;
	int32_t t33 = -479517903;

	t33 = (x353>>((x354|x355)/x356));

	if (t33 != 1966) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x357 = 4U;
	static int16_t x358 = INT16_MIN;
	int8_t x359 = -1;
	uint64_t x360 = UINT64_MAX;
	int32_t t34 = -14;

	t34 = (x357>>((x358|x359)/x360));

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x370 = INT64_MAX;
	volatile int16_t x371 = -1;
	int64_t x372 = INT64_MAX;
	int32_t t35 = 33;

	t35 = (x369>>((x370|x371)/x372));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x385 = 5738903LLU;
	volatile int64_t x387 = 1211871LL;

	t36 = (x385>>((x386|x387)/x388));

	if (t36 != 5738903LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x390 = -1;
	volatile uint32_t x391 = 1000257U;
	int32_t x392 = INT32_MIN;
	uint64_t t37 = 8980847063560LLU;

	t37 = (x389>>((x390|x391)/x392));

	if (t37 != 1320872032012262592LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x397 = 34U;
	int16_t x398 = -1;
	volatile int32_t x399 = 337;
	volatile int16_t x400 = INT16_MIN;
	static int32_t t38 = -1032971688;

	t38 = (x397>>((x398|x399)/x400));

	if (t38 != 34) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x401 = UINT8_MAX;
	int32_t t39 = -4;

	t39 = (x401>>((x402|x403)/x404));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x409 = INT8_MAX;
	int64_t x410 = -2698057LL;
	static uint32_t x411 = UINT32_MAX;
	volatile uint32_t x412 = UINT32_MAX;
	volatile int32_t t40 = -29887;

	t40 = (x409>>((x410|x411)/x412));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x425 = 510U;
	int64_t x426 = 14558104047346LL;
	volatile int8_t x427 = INT8_MIN;
	uint8_t x428 = UINT8_MAX;
	int32_t t41 = -201;

	t41 = (x425>>((x426|x427)/x428));

	if (t41 != 510) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x453 = INT16_MAX;
	volatile uint16_t x455 = 1104U;
	int32_t x456 = -5375718;
	volatile int32_t t42 = -8;

	t42 = (x453>>((x454|x455)/x456));

	if (t42 != 16383) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x457 = 702839LLU;
	volatile int16_t x459 = INT16_MAX;
	volatile uint64_t t43 = 6514322LLU;

	t43 = (x457>>((x458|x459)/x460));

	if (t43 != 351419LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x473 = 7;
	int32_t x476 = INT32_MIN;

	t44 = (x473>>((x474|x475)/x476));

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x478 = 400889LLU;
	volatile int8_t x480 = -3;
	int64_t t45 = 770348LL;

	t45 = (x477>>((x478|x479)/x480));

	if (t45 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x485 = 10442;
	int8_t x486 = INT8_MIN;
	int16_t x487 = INT16_MIN;
	int16_t x488 = INT16_MIN;
	static volatile int32_t t46 = -115812011;

	t46 = (x485>>((x486|x487)/x488));

	if (t46 != 10442) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x541 = 17U;
	volatile uint64_t x542 = 102531746903940816LLU;
	static int32_t x543 = -430;
	volatile int32_t t47 = -1;

	t47 = (x541>>((x542|x543)/x544));

	if (t47 != 17) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x553 = INT8_MAX;
	static uint16_t x555 = 928U;
	volatile int32_t x556 = -20223;
	int32_t t48 = 121260860;

	t48 = (x553>>((x554|x555)/x556));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x569 = INT64_MAX;
	static uint8_t x570 = 0U;
	uint8_t x571 = 0U;
	int32_t x572 = -1;

	t49 = (x569>>((x570|x571)/x572));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x578 = 2U;
	volatile uint32_t x580 = UINT32_MAX;
	uint32_t t50 = 26009128U;

	t50 = (x577>>((x578|x579)/x580));

	if (t50 != 12285368U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x589 = 11LL;
	static int16_t x592 = 113;
	int64_t t51 = 0LL;

	t51 = (x589>>((x590|x591)/x592));

	if (t51 != 11LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x597 = INT64_MAX;
	int8_t x598 = 8;
	static int32_t x599 = INT32_MAX;
	uint64_t x600 = UINT64_MAX;
	int64_t t52 = INT64_MAX;

	t52 = (x597>>((x598|x599)/x600));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x605 = 3551816167483LLU;
	volatile int16_t x606 = 52;
	static int32_t x607 = 2951;
	int32_t x608 = INT32_MIN;
	static uint64_t t53 = 27807590654359LLU;

	t53 = (x605>>((x606|x607)/x608));

	if (t53 != 3551816167483LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x629 = 0U;
	static uint16_t x630 = UINT16_MAX;
	static volatile int8_t x631 = -1;
	volatile uint16_t x632 = 11760U;
	static volatile uint32_t t54 = 30U;

	t54 = (x629>>((x630|x631)/x632));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x633 = 7440U;
	int32_t x634 = 39162054;
	uint64_t x635 = UINT64_MAX;
	volatile int32_t x636 = INT32_MIN;
	uint32_t t55 = 27742277U;

	t55 = (x633>>((x634|x635)/x636));

	if (t55 != 3720U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x637 = 83285LLU;
	int16_t x638 = -1;
	uint32_t x639 = UINT32_MAX;
	static int32_t x640 = INT32_MIN;
	volatile uint64_t t56 = 142751LLU;

	t56 = (x637>>((x638|x639)/x640));

	if (t56 != 41642LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x641 = 7U;
	static uint32_t x642 = UINT32_MAX;
	int32_t x643 = -35;
	static int32_t t57 = -5522970;

	t57 = (x641>>((x642|x643)/x644));

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x662 = INT8_MIN;
	int64_t x663 = -1LL;
	int8_t x664 = INT8_MIN;
	int32_t t58 = -1;

	t58 = (x661>>((x662|x663)/x664));

	if (t58 != 90) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x673 = INT16_MAX;
	uint16_t x674 = 2341U;
	uint16_t x675 = 0U;
	volatile uint32_t x676 = 3346824U;
	volatile int32_t t59 = -3922332;

	t59 = (x673>>((x674|x675)/x676));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x677 = INT32_MAX;
	int16_t x679 = -1;
	int8_t x680 = -1;
	static int32_t t60 = 63;

	t60 = (x677>>((x678|x679)/x680));

	if (t60 != 1073741823) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x681 = 2U;
	volatile int8_t x682 = INT8_MAX;
	volatile int32_t x683 = 125610;
	uint32_t x684 = 46678099U;
	int32_t t61 = -154197;

	t61 = (x681>>((x682|x683)/x684));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x693 = 1092U;
	volatile int16_t x694 = INT16_MIN;
	uint64_t x695 = UINT64_MAX;
	static int8_t x696 = INT8_MIN;
	volatile int32_t t62 = 121;

	t62 = (x693>>((x694|x695)/x696));

	if (t62 != 546) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x713 = 3U;
	int16_t x714 = -743;
	static int16_t x715 = INT16_MIN;
	static uint32_t x716 = UINT32_MAX;
	volatile uint32_t t63 = 741U;

	t63 = (x713>>((x714|x715)/x716));

	if (t63 != 3U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x717 = UINT8_MAX;
	int64_t x718 = INT64_MIN;
	int64_t x720 = INT64_MIN;

	t64 = (x717>>((x718|x719)/x720));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x730 = UINT32_MAX;
	int64_t x731 = -1LL;
	int64_t x732 = INT64_MIN;

	t65 = (x729>>((x730|x731)/x732));

	if (t65 != 468433220) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x762 = INT8_MIN;
	volatile uint32_t x764 = 851406569U;

	t66 = (x761>>((x762|x763)/x764));

	if (t66 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x769 = INT8_MAX;
	int64_t x770 = -124LL;
	int16_t x771 = -13;
	volatile int16_t x772 = INT16_MAX;
	volatile int32_t t67 = 47302;

	t67 = (x769>>((x770|x771)/x772));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x781 = 67U;
	uint32_t x782 = 17U;
	int32_t x783 = 44;
	int16_t x784 = -1;
	int32_t t68 = -595459;

	t68 = (x781>>((x782|x783)/x784));

	if (t68 != 67) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x790 = INT64_MIN;
	int16_t x791 = INT16_MAX;
	volatile int64_t x792 = INT64_MIN;
	int32_t t69 = 641000;

	t69 = (x789>>((x790|x791)/x792));

	if (t69 != 12) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x825 = 1785U;
	int32_t x826 = -1;
	int32_t x828 = INT32_MAX;
	uint32_t t70 = 2520U;

	t70 = (x825>>((x826|x827)/x828));

	if (t70 != 1785U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x829 = UINT8_MAX;
	int32_t x831 = INT32_MAX;
	static int32_t x832 = INT32_MIN;
	volatile int32_t t71 = 28270;

	t71 = (x829>>((x830|x831)/x832));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x837 = 4U;
	int8_t x839 = -1;
	int16_t x840 = INT16_MIN;
	volatile int32_t t72 = -47;

	t72 = (x837>>((x838|x839)/x840));

	if (t72 != 4) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x845 = 161U;
	int32_t x846 = INT32_MIN;
	uint32_t t73 = 99844U;

	t73 = (x845>>((x846|x847)/x848));

	if (t73 != 161U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x849 = 311;
	static int32_t x850 = -1;
	uint32_t x852 = 205953010U;
	static volatile int32_t t74 = -1;

	t74 = (x849>>((x850|x851)/x852));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x853 = 6503074672LLU;
	uint64_t x854 = UINT64_MAX;
	uint64_t x855 = UINT64_MAX;
	volatile int16_t x856 = INT16_MIN;
	volatile uint64_t t75 = 266697LLU;

	t75 = (x853>>((x854|x855)/x856));

	if (t75 != 3251537336LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x865 = UINT16_MAX;
	volatile int64_t x866 = -1LL;
	static uint8_t x867 = UINT8_MAX;

	t76 = (x865>>((x866|x867)/x868));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x897 = 2U;
	static volatile int32_t x898 = 2813;
	uint8_t x899 = 0U;
	int64_t x900 = INT64_MAX;
	uint32_t t77 = 7U;

	t77 = (x897>>((x898|x899)/x900));

	if (t77 != 2U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x901 = 792473U;
	volatile uint16_t x902 = 11U;
	volatile int16_t x904 = INT16_MIN;
	volatile uint32_t t78 = 50236847U;

	t78 = (x901>>((x902|x903)/x904));

	if (t78 != 792473U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x913 = 37348774271LLU;
	volatile int64_t x914 = INT64_MIN;
	volatile int64_t x915 = -1LL;
	static int32_t x916 = INT32_MAX;
	static volatile uint64_t t79 = 601685154864007LLU;

	t79 = (x913>>((x914|x915)/x916));

	if (t79 != 37348774271LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x917 = 119;
	int16_t x918 = INT16_MAX;
	static uint32_t x919 = 17389U;
	int8_t x920 = -3;
	int32_t t80 = 329523138;

	t80 = (x917>>((x918|x919)/x920));

	if (t80 != 119) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x924 = INT64_MAX;
	int64_t t81 = -8144751401LL;

	t81 = (x921>>((x922|x923)/x924));

	if (t81 != 17340674097477554LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x933 = 47868278743LL;
	int16_t x934 = -1;
	int8_t x935 = 1;
	int64_t x936 = 280669291LL;
	volatile int64_t t82 = -1496952307223532LL;

	t82 = (x933>>((x934|x935)/x936));

	if (t82 != 47868278743LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x937 = 7472268U;
	uint16_t x940 = 7U;
	volatile uint32_t t83 = 35U;

	t83 = (x937>>((x938|x939)/x940));

	if (t83 != 7472268U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x946 = UINT16_MAX;
	int16_t x947 = -13;
	int64_t x948 = -425602358020868552LL;

	t84 = (x945>>((x946|x947)/x948));

	if (t84 != 63) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x961 = UINT16_MAX;
	uint16_t x962 = UINT16_MAX;
	static int8_t x964 = 3;
	volatile int32_t t85 = 3055207;

	t85 = (x961>>((x962|x963)/x964));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x973 = UINT64_MAX;
	volatile int32_t x974 = INT32_MIN;
	volatile int32_t x975 = -1;
	volatile uint64_t x976 = UINT64_MAX;
	uint64_t t86 = 14LLU;

	t86 = (x973>>((x974|x975)/x976));

	if (t86 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x981 = INT16_MAX;
	int16_t x982 = -1;
	uint64_t x983 = UINT64_MAX;

	t87 = (x981>>((x982|x983)/x984));

	if (t87 != 16383) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x993 = 116U;
	int8_t x994 = -4;
	static int16_t x996 = INT16_MAX;
	volatile int32_t t88 = -38845792;

	t88 = (x993>>((x994|x995)/x996));

	if (t88 != 116) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x997 = UINT8_MAX;
	uint32_t x998 = UINT32_MAX;
	volatile int64_t x999 = -1LL;
	uint32_t x1000 = UINT32_MAX;

	t89 = (x997>>((x998|x999)/x1000));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x1009 = 536428213U;
	int32_t x1012 = -1;
	volatile uint32_t t90 = 10U;

	t90 = (x1009>>((x1010|x1011)/x1012));

	if (t90 != 268214106U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x1033 = UINT16_MAX;
	static int32_t x1034 = INT32_MIN;
	static int16_t x1035 = INT16_MIN;

	t91 = (x1033>>((x1034|x1035)/x1036));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1045 = INT64_MAX;
	static uint16_t x1047 = UINT16_MAX;
	uint64_t x1048 = UINT64_MAX;
	int64_t t92 = INT64_MAX;

	t92 = (x1045>>((x1046|x1047)/x1048));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x1064 = UINT16_MAX;
	volatile int32_t t93 = -510521366;

	t93 = (x1061>>((x1062|x1063)/x1064));

	if (t93 != 123) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1069 = INT8_MAX;
	int16_t x1070 = INT16_MAX;
	int8_t x1071 = -1;

	t94 = (x1069>>((x1070|x1071)/x1072));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x1073 = 12788753797LL;
	uint32_t x1074 = UINT32_MAX;
	int8_t x1075 = 2;
	int8_t x1076 = -1;

	t95 = (x1073>>((x1074|x1075)/x1076));

	if (t95 != 6394376898LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x1081 = 27U;

	t96 = (x1081>>((x1082|x1083)/x1084));

	if (t96 != 13) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x1098 = 0;
	int64_t x1100 = 3932872563759886567LL;

	t97 = (x1097>>((x1098|x1099)/x1100));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x1125 = 21U;
	static int8_t x1126 = INT8_MAX;
	uint16_t x1127 = UINT16_MAX;
	static int64_t x1128 = INT64_MIN;

	t98 = (x1125>>((x1126|x1127)/x1128));

	if (t98 != 21) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x1145 = 29647U;
	static volatile int64_t x1147 = 201252486495634007LL;
	volatile int16_t x1148 = -1;
	volatile int32_t t99 = 2;

	t99 = (x1145>>((x1146|x1147)/x1148));

	if (t99 != 14823) { NG(); } else { ; }
	
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

