#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x37 = 0;
int32_t x38 = 0;
int32_t x39 = INT32_MIN;
static int32_t x61 = INT32_MAX;
static volatile int64_t x63 = INT64_MIN;
volatile uint32_t x77 = 13854U;
int32_t t6 = -823475;
int32_t x128 = INT32_MAX;
uint64_t x129 = 690470LLU;
int64_t x130 = 4040205LL;
uint64_t t8 = 10LLU;
static int64_t x154 = INT64_MIN;
int64_t x156 = -1LL;
volatile int8_t x176 = INT8_MAX;
uint64_t t11 = 6768LLU;
int8_t x193 = INT8_MAX;
volatile uint64_t x195 = 127LLU;
uint64_t x255 = 3541912984LLU;
static volatile int8_t x257 = INT8_MAX;
int64_t x258 = 1139273758899012430LL;
volatile int32_t t18 = 7627;
int32_t t20 = -626705342;
volatile int32_t t22 = -50;
static uint32_t x350 = UINT32_MAX;
volatile uint16_t x369 = 221U;
int32_t x381 = INT32_MAX;
int32_t t25 = INT32_MAX;
static uint8_t x385 = 1U;
int64_t x388 = -4912LL;
static int64_t x418 = -1LL;
volatile int8_t x444 = INT8_MIN;
volatile int64_t t28 = INT64_MAX;
static uint32_t x509 = 1U;
uint8_t x534 = UINT8_MAX;
int8_t x536 = INT8_MIN;
volatile uint64_t t34 = UINT64_MAX;
static int16_t x562 = 3816;
static uint16_t x563 = 30U;
uint16_t x632 = UINT16_MAX;
volatile int32_t t39 = -133862732;
volatile int32_t t40 = 1;
volatile int64_t t42 = -5099160316259LL;
volatile int16_t x694 = INT16_MAX;
int8_t x698 = -1;
volatile int16_t x734 = -9;
static int16_t x748 = INT16_MAX;
uint8_t x753 = 7U;
int8_t x754 = 17;
int32_t x755 = -876;
int64_t x776 = -3099264LL;
static volatile int8_t x794 = 35;
static volatile uint64_t x802 = 259106381082953139LLU;
volatile int8_t x803 = 0;
int8_t x827 = INT8_MAX;
static int32_t x854 = -127856;
static int32_t t57 = -2672;
static volatile int16_t x871 = INT16_MIN;
int32_t x875 = -202;
uint16_t x918 = 4U;
int32_t x925 = 1926;
int16_t x926 = -1;
volatile int32_t t65 = 133571351;
uint16_t x942 = UINT16_MAX;
volatile int16_t x954 = -1;
uint64_t x968 = 0LLU;
int32_t t68 = -60863800;
volatile uint64_t x973 = 5684579851756LLU;
static uint32_t x974 = 2924U;
uint32_t x975 = 117U;
uint64_t t69 = 946LLU;
volatile int32_t t71 = 500733;
volatile int16_t x1008 = INT16_MIN;
uint32_t x1040 = UINT32_MAX;
static uint64_t x1045 = 6LLU;
uint64_t t76 = 11915LLU;
static int8_t x1080 = -3;
static int16_t x1091 = -1;
int16_t x1114 = INT16_MIN;
uint32_t x1117 = 1162U;
uint16_t x1157 = UINT16_MAX;
uint8_t x1158 = 93U;
volatile uint32_t t86 = UINT32_MAX;
uint32_t x1182 = 1253246735U;
int16_t x1184 = -86;
uint64_t x1203 = 133683096283142LLU;
uint64_t t88 = 1645LLU;
uint64_t x1238 = 889965657541081LLU;
int32_t x1248 = -75116;
int8_t x1262 = 0;
int8_t x1263 = INT8_MIN;
int16_t x1264 = -1;
int32_t t93 = -501281561;
uint64_t x1265 = 8697791LLU;
int16_t x1291 = INT16_MIN;
static uint16_t x1321 = UINT16_MAX;
uint16_t x1324 = UINT16_MAX;
volatile int32_t t98 = -288988734;
int32_t t99 = 557481;


void f0(void) {
	volatile int8_t x9 = 26;
	int32_t x10 = INT32_MAX;
	volatile int16_t x11 = INT16_MIN;
	uint16_t x12 = 1U;
	volatile int32_t t0 = -24725407;

	t0 = (x9<<((x10<=x11)*x12));

	if (t0 != 26) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x40 = 14LL;
	volatile int32_t t1 = 10320;

	t1 = (x37<<((x38<=x39)*x40));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x57 = 229350108;
	volatile int64_t x58 = 48LL;
	int16_t x59 = -1;
	uint8_t x60 = 7U;
	volatile int32_t t2 = 33536939;

	t2 = (x57<<((x58<=x59)*x60));

	if (t2 != 229350108) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x62 = INT8_MAX;
	volatile int16_t x64 = INT16_MAX;
	int32_t t3 = INT32_MAX;

	t3 = (x61<<((x62<=x63)*x64));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x78 = INT32_MAX;
	int64_t x79 = -1LL;
	uint64_t x80 = 40257344LLU;
	uint32_t t4 = 40295235U;

	t4 = (x77<<((x78<=x79)*x80));

	if (t4 != 13854U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x89 = 48U;
	int32_t x90 = -1;
	volatile int32_t x91 = INT32_MIN;
	int16_t x92 = 1989;
	volatile int32_t t5 = -1173435;

	t5 = (x89<<((x90<=x91)*x92));

	if (t5 != 48) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x113 = 185U;
	int16_t x114 = -1;
	uint64_t x115 = 1605282LLU;
	int32_t x116 = INT32_MAX;

	t6 = (x113<<((x114<=x115)*x116));

	if (t6 != 185) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x125 = UINT64_MAX;
	volatile int32_t x126 = 321351284;
	int16_t x127 = -1;
	uint64_t t7 = UINT64_MAX;

	t7 = (x125<<((x126<=x127)*x128));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x131 = -1LL;
	int32_t x132 = 2;

	t8 = (x129<<((x130<=x131)*x132));

	if (t8 != 690470LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x145 = 0U;
	int16_t x146 = 10;
	static int8_t x147 = -4;
	static int16_t x148 = INT16_MIN;
	int32_t t9 = -224878211;

	t9 = (x145<<((x146<=x147)*x148));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x153 = UINT16_MAX;
	uint64_t x155 = 277812422787664LLU;
	static volatile int32_t t10 = 97477;

	t10 = (x153<<((x154<=x155)*x156));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x173 = 348531389961460LLU;
	int32_t x174 = INT32_MAX;
	int8_t x175 = INT8_MAX;

	t11 = (x173<<((x174<=x175)*x176));

	if (t11 != 348531389961460LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x194 = INT8_MIN;
	int64_t x196 = INT64_MIN;
	volatile int32_t t12 = 582176852;

	t12 = (x193<<((x194<=x195)*x196));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x197 = INT8_MAX;
	uint16_t x198 = 75U;
	int32_t x199 = INT32_MIN;
	static int8_t x200 = -28;
	volatile int32_t t13 = 40488777;

	t13 = (x197<<((x198<=x199)*x200));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x225 = 766289LLU;
	uint32_t x226 = UINT32_MAX;
	int16_t x227 = -277;
	uint16_t x228 = 1U;
	uint64_t t14 = 913LLU;

	t14 = (x225<<((x226<=x227)*x228));

	if (t14 != 766289LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x253 = 4LLU;
	static int16_t x254 = -1;
	int32_t x256 = INT32_MAX;
	uint64_t t15 = 7100338251501LLU;

	t15 = (x253<<((x254<=x255)*x256));

	if (t15 != 4LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x259 = INT16_MIN;
	int32_t x260 = INT32_MAX;
	static int32_t t16 = 50884;

	t16 = (x257<<((x258<=x259)*x260));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x273 = INT16_MAX;
	static int64_t x274 = INT64_MAX;
	int32_t x275 = INT32_MIN;
	uint32_t x276 = UINT32_MAX;
	int32_t t17 = 167;

	t17 = (x273<<((x274<=x275)*x276));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x281 = UINT16_MAX;
	uint8_t x282 = UINT8_MAX;
	int32_t x283 = 0;
	uint64_t x284 = UINT64_MAX;

	t18 = (x281<<((x282<=x283)*x284));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x285 = 102199U;
	uint16_t x286 = 69U;
	static int8_t x287 = INT8_MIN;
	uint64_t x288 = 268218437LLU;
	uint32_t t19 = 1789973U;

	t19 = (x285<<((x286<=x287)*x288));

	if (t19 != 102199U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x313 = 10025;
	int32_t x314 = INT32_MIN;
	uint64_t x315 = 22LLU;
	int32_t x316 = INT32_MAX;

	t20 = (x313<<((x314<=x315)*x316));

	if (t20 != 10025) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x329 = 241885887186LLU;
	int16_t x330 = INT16_MAX;
	int64_t x331 = INT64_MIN;
	volatile uint32_t x332 = UINT32_MAX;
	volatile uint64_t t21 = 12871148LLU;

	t21 = (x329<<((x330<=x331)*x332));

	if (t21 != 241885887186LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x333 = 126U;
	volatile int64_t x334 = INT64_MAX;
	uint16_t x335 = UINT16_MAX;
	int32_t x336 = INT32_MAX;

	t22 = (x333<<((x334<=x335)*x336));

	if (t22 != 126) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x349 = 117U;
	uint64_t x351 = 82LLU;
	uint64_t x352 = 2478340LLU;
	int32_t t23 = -803;

	t23 = (x349<<((x350<=x351)*x352));

	if (t23 != 117) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x370 = INT32_MAX;
	uint8_t x371 = UINT8_MAX;
	uint64_t x372 = 4256688500LLU;
	int32_t t24 = 1;

	t24 = (x369<<((x370<=x371)*x372));

	if (t24 != 221) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x382 = UINT32_MAX;
	static volatile uint8_t x383 = 1U;
	int8_t x384 = INT8_MAX;

	t25 = (x381<<((x382<=x383)*x384));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x386 = INT8_MAX;
	volatile uint32_t x387 = 1U;
	static volatile int32_t t26 = -462311;

	t26 = (x385<<((x386<=x387)*x388));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x417 = 98;
	int32_t x419 = INT32_MIN;
	uint64_t x420 = UINT64_MAX;
	volatile int32_t t27 = -43;

	t27 = (x417<<((x418<=x419)*x420));

	if (t27 != 98) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x441 = INT64_MAX;
	int16_t x442 = -1;
	volatile int8_t x443 = INT8_MIN;

	t28 = (x441<<((x442<=x443)*x444));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x449 = INT32_MAX;
	uint64_t x450 = UINT64_MAX;
	uint8_t x451 = 0U;
	int64_t x452 = 82879386862306653LL;
	int32_t t29 = INT32_MAX;

	t29 = (x449<<((x450<=x451)*x452));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x469 = 9076023909754LLU;
	int64_t x470 = INT64_MAX;
	uint16_t x471 = 16480U;
	int64_t x472 = INT64_MAX;
	uint64_t t30 = 224657847146224LLU;

	t30 = (x469<<((x470<=x471)*x472));

	if (t30 != 9076023909754LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x489 = UINT64_MAX;
	static uint32_t x490 = UINT32_MAX;
	volatile int64_t x491 = INT64_MIN;
	uint8_t x492 = 1U;
	static volatile uint64_t t31 = UINT64_MAX;

	t31 = (x489<<((x490<=x491)*x492));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x510 = 6771U;
	static int16_t x511 = -14735;
	volatile int32_t x512 = -29077358;
	volatile uint32_t t32 = 28894U;

	t32 = (x509<<((x510<=x511)*x512));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x533 = 0;
	int8_t x535 = -1;
	volatile int32_t t33 = 1652;

	t33 = (x533<<((x534<=x535)*x536));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x537 = UINT64_MAX;
	uint64_t x538 = UINT64_MAX;
	volatile int64_t x539 = 5334LL;
	uint16_t x540 = 3U;

	t34 = (x537<<((x538<=x539)*x540));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x541 = INT64_MAX;
	volatile uint32_t x542 = UINT32_MAX;
	int32_t x543 = INT32_MAX;
	uint32_t x544 = 11755U;
	volatile int64_t t35 = INT64_MAX;

	t35 = (x541<<((x542<=x543)*x544));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x561 = 57;
	uint8_t x564 = 105U;
	volatile int32_t t36 = 75152273;

	t36 = (x561<<((x562<=x563)*x564));

	if (t36 != 57) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x613 = INT32_MAX;
	int8_t x614 = 49;
	static uint8_t x615 = UINT8_MAX;
	volatile uint8_t x616 = 0U;
	static volatile int32_t t37 = INT32_MAX;

	t37 = (x613<<((x614<=x615)*x616));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x629 = 269607LLU;
	uint16_t x630 = 7852U;
	int8_t x631 = 1;
	uint64_t t38 = 2LLU;

	t38 = (x629<<((x630<=x631)*x632));

	if (t38 != 269607LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x633 = 1U;
	int8_t x634 = INT8_MIN;
	volatile int64_t x635 = INT64_MIN;
	uint64_t x636 = UINT64_MAX;

	t39 = (x633<<((x634<=x635)*x636));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x645 = 2U;
	uint16_t x646 = 2808U;
	static int8_t x647 = -1;
	int64_t x648 = INT64_MIN;

	t40 = (x645<<((x646<=x647)*x648));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x669 = 33U;
	volatile uint8_t x670 = UINT8_MAX;
	static int8_t x671 = INT8_MIN;
	volatile int8_t x672 = INT8_MIN;
	int32_t t41 = 282920;

	t41 = (x669<<((x670<=x671)*x672));

	if (t41 != 33) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x673 = 169280302872LL;
	int32_t x674 = 28348;
	int32_t x675 = -1;
	uint8_t x676 = UINT8_MAX;

	t42 = (x673<<((x674<=x675)*x676));

	if (t42 != 169280302872LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x681 = 94943887507288LL;
	uint8_t x682 = 86U;
	volatile int32_t x683 = INT32_MIN;
	int8_t x684 = INT8_MAX;
	int64_t t43 = -7033241LL;

	t43 = (x681<<((x682<=x683)*x684));

	if (t43 != 94943887507288LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x693 = UINT32_MAX;
	uint64_t x695 = 52749397LLU;
	int8_t x696 = 0;
	uint32_t t44 = UINT32_MAX;

	t44 = (x693<<((x694<=x695)*x696));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x697 = UINT16_MAX;
	static int32_t x699 = -13;
	volatile int8_t x700 = 1;
	static volatile int32_t t45 = -2;

	t45 = (x697<<((x698<=x699)*x700));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x729 = INT8_MAX;
	static uint16_t x730 = 39U;
	volatile int64_t x731 = -332259916LL;
	int32_t x732 = -1;
	int32_t t46 = -2478;

	t46 = (x729<<((x730<=x731)*x732));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x733 = INT8_MAX;
	int32_t x735 = INT32_MIN;
	int64_t x736 = INT64_MIN;
	static volatile int32_t t47 = 1019910019;

	t47 = (x733<<((x734<=x735)*x736));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x745 = 42U;
	uint64_t x746 = UINT64_MAX;
	int8_t x747 = INT8_MIN;
	uint32_t t48 = 970040U;

	t48 = (x745<<((x746<=x747)*x748));

	if (t48 != 42U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x756 = INT64_MIN;
	int32_t t49 = 4;

	t49 = (x753<<((x754<=x755)*x756));

	if (t49 != 7) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x773 = 6131493LL;
	int8_t x774 = INT8_MAX;
	int32_t x775 = INT32_MIN;
	volatile int64_t t50 = -274LL;

	t50 = (x773<<((x774<=x775)*x776));

	if (t50 != 6131493LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x789 = 350;
	uint64_t x790 = 791218LLU;
	uint64_t x791 = 47903540310528660LLU;
	int8_t x792 = 1;
	int32_t t51 = 186;

	t51 = (x789<<((x790<=x791)*x792));

	if (t51 != 700) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x793 = UINT8_MAX;
	static int8_t x795 = 5;
	int64_t x796 = -1LL;
	volatile int32_t t52 = -4030171;

	t52 = (x793<<((x794<=x795)*x796));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x801 = INT8_MAX;
	int16_t x804 = INT16_MIN;
	int32_t t53 = 20643;

	t53 = (x801<<((x802<=x803)*x804));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x817 = 7792623452975835780LLU;
	int16_t x818 = 14199;
	int64_t x819 = -107LL;
	static uint16_t x820 = 19U;
	volatile uint64_t t54 = 517013LLU;

	t54 = (x817<<((x818<=x819)*x820));

	if (t54 != 7792623452975835780LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x825 = 768939784LL;
	uint32_t x826 = 43601457U;
	uint64_t x828 = 825821393356LLU;
	static volatile int64_t t55 = 29626766718836LL;

	t55 = (x825<<((x826<=x827)*x828));

	if (t55 != 768939784LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x845 = UINT32_MAX;
	int8_t x846 = -1;
	int8_t x847 = INT8_MIN;
	int64_t x848 = INT64_MAX;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = (x845<<((x846<=x847)*x848));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x853 = 192U;
	int32_t x855 = INT32_MIN;
	volatile int32_t x856 = 7508;

	t57 = (x853<<((x854<=x855)*x856));

	if (t57 != 192) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x861 = 12478941U;
	uint16_t x862 = UINT16_MAX;
	volatile int32_t x863 = 3056357;
	uint8_t x864 = 2U;
	volatile uint32_t t58 = 33830550U;

	t58 = (x861<<((x862<=x863)*x864));

	if (t58 != 49915764U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x869 = 4;
	int32_t x870 = -1;
	volatile uint8_t x872 = UINT8_MAX;
	volatile int32_t t59 = -31;

	t59 = (x869<<((x870<=x871)*x872));

	if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x873 = 35255898276962340LLU;
	static int64_t x874 = INT64_MAX;
	int16_t x876 = -243;
	static volatile uint64_t t60 = 23883LLU;

	t60 = (x873<<((x874<=x875)*x876));

	if (t60 != 35255898276962340LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x889 = 3;
	volatile int64_t x890 = INT64_MAX;
	int32_t x891 = INT32_MAX;
	volatile int32_t x892 = 642663;
	static volatile int32_t t61 = 3;

	t61 = (x889<<((x890<=x891)*x892));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x897 = INT64_MAX;
	int64_t x898 = -1LL;
	volatile uint64_t x899 = 14940980822013479LLU;
	static volatile int8_t x900 = -5;
	int64_t t62 = INT64_MAX;

	t62 = (x897<<((x898<=x899)*x900));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x917 = UINT64_MAX;
	volatile int8_t x919 = -1;
	int64_t x920 = INT64_MAX;
	static uint64_t t63 = UINT64_MAX;

	t63 = (x917<<((x918<=x919)*x920));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x927 = 100891U;
	int16_t x928 = -1;
	static volatile int32_t t64 = 3;

	t64 = (x925<<((x926<=x927)*x928));

	if (t64 != 1926) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x929 = 1242U;
	static int16_t x930 = 114;
	volatile int32_t x931 = INT32_MIN;
	uint64_t x932 = 2861692441451169LLU;

	t65 = (x929<<((x930<=x931)*x932));

	if (t65 != 1242) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x941 = 36587536U;
	uint8_t x943 = UINT8_MAX;
	int32_t x944 = -197;
	volatile uint32_t t66 = 1424U;

	t66 = (x941<<((x942<=x943)*x944));

	if (t66 != 36587536U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x953 = 671;
	int64_t x955 = INT64_MAX;
	uint8_t x956 = 2U;
	volatile int32_t t67 = 176899;

	t67 = (x953<<((x954<=x955)*x956));

	if (t67 != 2684) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x965 = UINT16_MAX;
	uint8_t x966 = 1U;
	int64_t x967 = INT64_MAX;

	t68 = (x965<<((x966<=x967)*x968));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x976 = INT32_MIN;

	t69 = (x973<<((x974<=x975)*x976));

	if (t69 != 5684579851756LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x997 = INT8_MAX;
	uint8_t x998 = 8U;
	static int64_t x999 = INT64_MIN;
	static volatile int64_t x1000 = INT64_MIN;
	volatile int32_t t70 = -85955;

	t70 = (x997<<((x998<=x999)*x1000));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x1001 = UINT8_MAX;
	int64_t x1002 = 4191123739LL;
	uint32_t x1003 = 23U;
	volatile int16_t x1004 = INT16_MIN;

	t71 = (x1001<<((x1002<=x1003)*x1004));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1005 = UINT16_MAX;
	int16_t x1006 = INT16_MAX;
	int64_t x1007 = -1326LL;
	int32_t t72 = 6741;

	t72 = (x1005<<((x1006<=x1007)*x1008));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x1037 = 1;
	int64_t x1038 = 3751089LL;
	int16_t x1039 = -1;
	volatile int32_t t73 = 6;

	t73 = (x1037<<((x1038<=x1039)*x1040));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x1046 = -1;
	static int64_t x1047 = -116894842705857067LL;
	volatile uint32_t x1048 = 44914U;
	volatile uint64_t t74 = 59087LLU;

	t74 = (x1045<<((x1046<=x1047)*x1048));

	if (t74 != 6LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1049 = 59253909LLU;
	int32_t x1050 = INT32_MAX;
	volatile int64_t x1051 = INT64_MIN;
	int8_t x1052 = -1;
	uint64_t t75 = 2400958027378LLU;

	t75 = (x1049<<((x1050<=x1051)*x1052));

	if (t75 != 59253909LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x1069 = 68302LLU;
	int32_t x1070 = 53749866;
	uint8_t x1071 = 2U;
	volatile int8_t x1072 = INT8_MIN;

	t76 = (x1069<<((x1070<=x1071)*x1072));

	if (t76 != 68302LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1077 = UINT16_MAX;
	int8_t x1078 = -33;
	int32_t x1079 = -14614708;
	int32_t t77 = -22464;

	t77 = (x1077<<((x1078<=x1079)*x1080));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x1085 = UINT16_MAX;
	uint16_t x1086 = 358U;
	volatile int32_t x1087 = -1;
	uint16_t x1088 = 9972U;
	volatile int32_t t78 = 967074;

	t78 = (x1085<<((x1086<=x1087)*x1088));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1089 = UINT16_MAX;
	static int32_t x1090 = 6;
	static volatile int16_t x1092 = -1;
	volatile int32_t t79 = -4051;

	t79 = (x1089<<((x1090<=x1091)*x1092));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x1113 = INT8_MAX;
	int64_t x1115 = -9087586367LL;
	int8_t x1116 = INT8_MIN;
	int32_t t80 = 394603;

	t80 = (x1113<<((x1114<=x1115)*x1116));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x1118 = 25U;
	volatile int8_t x1119 = 0;
	volatile int16_t x1120 = INT16_MIN;
	uint32_t t81 = 97202955U;

	t81 = (x1117<<((x1118<=x1119)*x1120));

	if (t81 != 1162U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x1129 = 336U;
	static volatile int32_t x1130 = -1;
	int32_t x1131 = INT32_MIN;
	int64_t x1132 = -197LL;
	int32_t t82 = 0;

	t82 = (x1129<<((x1130<=x1131)*x1132));

	if (t82 != 336) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x1133 = 229U;
	int32_t x1134 = 217765;
	static int16_t x1135 = -11;
	volatile uint64_t x1136 = 129345639LLU;
	static volatile uint32_t t83 = 110613877U;

	t83 = (x1133<<((x1134<=x1135)*x1136));

	if (t83 != 229U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1145 = 32975;
	volatile int32_t x1146 = 5;
	int8_t x1147 = -1;
	static uint64_t x1148 = 4LLU;
	static volatile int32_t t84 = 646;

	t84 = (x1145<<((x1146<=x1147)*x1148));

	if (t84 != 32975) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x1159 = -1;
	static int32_t x1160 = 1292;
	int32_t t85 = 4540;

	t85 = (x1157<<((x1158<=x1159)*x1160));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x1177 = UINT32_MAX;
	volatile uint16_t x1178 = UINT16_MAX;
	int8_t x1179 = -1;
	uint32_t x1180 = UINT32_MAX;

	t86 = (x1177<<((x1178<=x1179)*x1180));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x1181 = 3949U;
	int64_t x1183 = -798759112270LL;
	int32_t t87 = -1266;

	t87 = (x1181<<((x1182<=x1183)*x1184));

	if (t87 != 3949) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1201 = 508069501LLU;
	volatile int8_t x1202 = INT8_MIN;
	int8_t x1204 = INT8_MIN;

	t88 = (x1201<<((x1202<=x1203)*x1204));

	if (t88 != 508069501LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x1229 = 2918U;
	static volatile int64_t x1230 = -1LL;
	static int8_t x1231 = INT8_MIN;
	int16_t x1232 = INT16_MIN;
	int32_t t89 = 819;

	t89 = (x1229<<((x1230<=x1231)*x1232));

	if (t89 != 2918) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x1237 = INT32_MAX;
	static volatile int64_t x1239 = 0LL;
	int16_t x1240 = INT16_MAX;
	int32_t t90 = INT32_MAX;

	t90 = (x1237<<((x1238<=x1239)*x1240));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x1241 = 21U;
	uint8_t x1242 = UINT8_MAX;
	int8_t x1243 = INT8_MIN;
	volatile uint64_t x1244 = 91246290881LLU;
	volatile int32_t t91 = -2661953;

	t91 = (x1241<<((x1242<=x1243)*x1244));

	if (t91 != 21) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x1245 = 63U;
	int8_t x1246 = INT8_MIN;
	volatile int64_t x1247 = INT64_MIN;
	int32_t t92 = -1382703;

	t92 = (x1245<<((x1246<=x1247)*x1248));

	if (t92 != 63) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x1261 = 391U;

	t93 = (x1261<<((x1262<=x1263)*x1264));

	if (t93 != 391) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x1266 = UINT64_MAX;
	uint8_t x1267 = 0U;
	int8_t x1268 = INT8_MIN;
	volatile uint64_t t94 = 3091388LLU;

	t94 = (x1265<<((x1266<=x1267)*x1268));

	if (t94 != 8697791LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1285 = INT32_MAX;
	uint64_t x1286 = 1297LLU;
	static uint8_t x1287 = 36U;
	static uint16_t x1288 = 3U;
	static volatile int32_t t95 = INT32_MAX;

	t95 = (x1285<<((x1286<=x1287)*x1288));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x1289 = 13U;
	uint8_t x1290 = 0U;
	int16_t x1292 = -53;
	volatile int32_t t96 = -12649005;

	t96 = (x1289<<((x1290<=x1291)*x1292));

	if (t96 != 13) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x1313 = 3578228116086761LLU;
	static uint32_t x1314 = UINT32_MAX;
	uint32_t x1315 = 9759794U;
	int8_t x1316 = 0;
	uint64_t t97 = 22LLU;

	t97 = (x1313<<((x1314<=x1315)*x1316));

	if (t97 != 3578228116086761LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x1322 = 113482023U;
	static int64_t x1323 = 139LL;

	t98 = (x1321<<((x1322<=x1323)*x1324));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x1325 = 10U;
	int64_t x1326 = -1LL;
	volatile uint64_t x1327 = UINT64_MAX;
	uint16_t x1328 = 9U;

	t99 = (x1325<<((x1326<=x1327)*x1328));

	if (t99 != 5120) { NG(); } else { ; }
	
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

