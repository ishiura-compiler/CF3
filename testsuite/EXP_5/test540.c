#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x18 = -1LL;
uint32_t x22 = 719992U;
volatile uint16_t x24 = 54U;
int16_t x36 = INT16_MIN;
volatile int32_t t4 = 5459;
int64_t x51 = INT64_MAX;
volatile uint8_t x76 = 2U;
static int8_t x77 = INT8_MAX;
int32_t t10 = 30904282;
static int8_t x154 = INT8_MAX;
static volatile int32_t t13 = 2800536;
static volatile int64_t x257 = 0LL;
uint16_t x259 = UINT16_MAX;
int64_t t14 = 14380263LL;
static int16_t x299 = 233;
int8_t x310 = INT8_MAX;
uint64_t x337 = 47199551420189LLU;
int64_t x339 = INT64_MAX;
uint64_t t19 = 37810LLU;
static volatile uint64_t t20 = 64301655845729664LLU;
volatile uint16_t x357 = 0U;
volatile int32_t x359 = INT32_MIN;
volatile int32_t x360 = INT32_MIN;
volatile int32_t t21 = -873;
volatile uint32_t x381 = 3U;
uint64_t x384 = 3694482362LLU;
volatile int64_t x409 = 1473LL;
int32_t x412 = 20;
volatile uint64_t t25 = 116636316471LLU;
uint8_t x437 = 10U;
volatile int64_t x447 = INT64_MIN;
int32_t x477 = INT32_MAX;
uint8_t x479 = UINT8_MAX;
int16_t x491 = INT16_MIN;
volatile uint16_t x492 = UINT16_MAX;
uint16_t x496 = 19U;
int32_t x522 = -1;
int32_t x536 = -1;
int32_t x543 = -328;
static int64_t t37 = 175324LL;
static int64_t x575 = INT64_MIN;
volatile int8_t x601 = 1;
int8_t x622 = -1;
static uint64_t x629 = UINT64_MAX;
volatile int8_t x677 = 28;
int32_t t45 = 274481;
uint16_t x702 = UINT16_MAX;
int64_t x704 = -1122166184583791LL;
static int8_t x725 = INT8_MAX;
uint64_t t48 = 480564190519060LLU;
int64_t x737 = INT64_MAX;
int8_t x738 = 62;
static int8_t x739 = -1;
volatile int8_t x749 = 6;
uint64_t x750 = 18119740620LLU;
static int64_t x759 = 153621111422072261LL;
int8_t x768 = 1;
int64_t t53 = INT64_MAX;
int16_t x774 = INT16_MIN;
uint16_t x776 = UINT16_MAX;
static volatile int32_t t54 = 140842;
int32_t x799 = INT32_MAX;
static volatile int64_t x813 = INT64_MAX;
int64_t x816 = -1LL;
int64_t t57 = INT64_MAX;
int8_t x825 = 32;
uint8_t x826 = 3U;
int8_t x827 = INT8_MAX;
volatile int16_t x837 = INT16_MAX;
int64_t x851 = INT64_MIN;
static volatile int32_t x863 = 83950174;
volatile uint16_t x865 = 50U;
uint64_t x875 = UINT64_MAX;
int16_t x904 = 0;
volatile int32_t t66 = -3304743;
static volatile int32_t x907 = -166947947;
uint64_t x937 = 14109670680111552LLU;
uint64_t x940 = UINT64_MAX;
uint8_t x945 = 14U;
int16_t x964 = -170;
static uint8_t x988 = 0U;
int32_t t73 = INT32_MAX;
int16_t x1008 = -1;
uint64_t x1013 = 15627842259043LLU;
int64_t t77 = -1740726078LL;
uint8_t x1029 = 14U;
int32_t x1031 = INT32_MIN;
volatile int8_t x1034 = -1;
volatile int32_t t79 = -236589;
volatile int32_t t81 = -17;
static int32_t x1115 = 141;
volatile uint16_t x1117 = 0U;
uint16_t x1120 = 679U;
volatile int16_t x1144 = 12;
static volatile int32_t t84 = -2848;
int16_t x1154 = 191;
volatile int8_t x1169 = 6;
int32_t t86 = 764;
static int64_t x1174 = -264004673087791LL;
static volatile int32_t t89 = -430;
uint8_t x1193 = UINT8_MAX;
int8_t x1202 = 2;
int64_t x1203 = INT64_MAX;
volatile uint64_t x1204 = 1208543852212LLU;
int16_t x1217 = 1846;
volatile int32_t t96 = 107432;
int32_t x1307 = INT32_MAX;
volatile int32_t x1308 = -106351471;


void f0(void) {
	int16_t x9 = 1916;
	static int16_t x10 = -2;
	uint8_t x11 = 17U;
	int16_t x12 = 2;
	static int32_t t0 = -596788336;

	t0 = (x9>>((x10/x11)*x12));

	if (t0 != 1916) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x17 = 99U;
	static int16_t x19 = -363;
	volatile int64_t x20 = 333343126LL;
	uint32_t t1 = 31948U;

	t1 = (x17>>((x18/x19)*x20));

	if (t1 != 99U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x21 = INT8_MAX;
	int32_t x23 = -1;
	volatile int32_t t2 = -5923;

	t2 = (x21>>((x22/x23)*x24));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x33 = INT8_MAX;
	static int8_t x34 = -1;
	volatile uint16_t x35 = 30844U;
	volatile int32_t t3 = 311440432;

	t3 = (x33>>((x34/x35)*x36));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x45 = INT8_MAX;
	int64_t x46 = -139184056056691LL;
	int8_t x47 = INT8_MIN;
	int32_t x48 = 0;

	t4 = (x45>>((x46/x47)*x48));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x49 = 13U;
	int8_t x50 = -1;
	int8_t x52 = -9;
	volatile int32_t t5 = 19134;

	t5 = (x49>>((x50/x51)*x52));

	if (t5 != 13) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x53 = INT16_MAX;
	uint8_t x54 = 1U;
	int8_t x55 = -25;
	int16_t x56 = INT16_MIN;
	int32_t t6 = 166075437;

	t6 = (x53>>((x54/x55)*x56));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x61 = 624729U;
	uint32_t x62 = 119U;
	volatile int8_t x63 = -11;
	uint8_t x64 = 7U;
	volatile uint32_t t7 = 37213658U;

	t7 = (x61>>((x62/x63)*x64));

	if (t7 != 624729U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x73 = UINT16_MAX;
	static uint32_t x74 = UINT32_MAX;
	static uint32_t x75 = UINT32_MAX;
	int32_t t8 = 141;

	t8 = (x73>>((x74/x75)*x76));

	if (t8 != 16383) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x78 = 21U;
	static int16_t x79 = INT16_MIN;
	volatile int16_t x80 = INT16_MIN;
	int32_t t9 = -1;

	t9 = (x77>>((x78/x79)*x80));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x101 = 1;
	uint16_t x102 = 11U;
	volatile uint64_t x103 = UINT64_MAX;
	int64_t x104 = INT64_MIN;

	t10 = (x101>>((x102/x103)*x104));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x153 = UINT16_MAX;
	int64_t x155 = INT64_MIN;
	int64_t x156 = -1LL;
	int32_t t11 = -10497;

	t11 = (x153>>((x154/x155)*x156));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x157 = 188LLU;
	int64_t x158 = 776LL;
	int16_t x159 = INT16_MAX;
	volatile uint8_t x160 = 10U;
	volatile uint64_t t12 = 11LLU;

	t12 = (x157>>((x158/x159)*x160));

	if (t12 != 188LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x237 = 1;
	static volatile int8_t x238 = -1;
	uint8_t x239 = UINT8_MAX;
	int32_t x240 = 454755;

	t13 = (x237>>((x238/x239)*x240));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x258 = 3U;
	static int16_t x260 = INT16_MIN;

	t14 = (x257>>((x258/x259)*x260));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x261 = 764U;
	int32_t x262 = INT32_MAX;
	static int32_t x263 = INT32_MIN;
	int64_t x264 = INT64_MIN;
	volatile int32_t t15 = 235809;

	t15 = (x261>>((x262/x263)*x264));

	if (t15 != 764) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x297 = INT8_MAX;
	int32_t x298 = -1;
	int32_t x300 = INT32_MAX;
	static volatile int32_t t16 = -690323980;

	t16 = (x297>>((x298/x299)*x300));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x309 = 10LL;
	uint64_t x311 = 1978304LLU;
	volatile uint32_t x312 = 1151064219U;
	static volatile int64_t t17 = -20349035005LL;

	t17 = (x309>>((x310/x311)*x312));

	if (t17 != 10LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x338 = 252;
	uint64_t x340 = 472864204603023LLU;
	static volatile uint64_t t18 = 133760LLU;

	t18 = (x337>>((x338/x339)*x340));

	if (t18 != 47199551420189LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x341 = 3LLU;
	static volatile int16_t x342 = -1;
	volatile int16_t x343 = INT16_MIN;
	int64_t x344 = INT64_MIN;

	t19 = (x341>>((x342/x343)*x344));

	if (t19 != 3LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x353 = 344773845LLU;
	uint8_t x354 = 21U;
	int64_t x355 = INT64_MIN;
	volatile int64_t x356 = INT64_MAX;

	t20 = (x353>>((x354/x355)*x356));

	if (t20 != 344773845LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x358 = 1991855U;

	t21 = (x357>>((x358/x359)*x360));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x369 = 15U;
	int16_t x370 = INT16_MIN;
	uint32_t x371 = 61U;
	uint8_t x372 = 0U;
	int32_t t22 = 1812965;

	t22 = (x369>>((x370/x371)*x372));

	if (t22 != 15) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x382 = 17U;
	uint16_t x383 = UINT16_MAX;
	volatile uint32_t t23 = 2984U;

	t23 = (x381>>((x382/x383)*x384));

	if (t23 != 3U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x410 = INT8_MIN;
	volatile int32_t x411 = 196;
	static int64_t t24 = 65861LL;

	t24 = (x409>>((x410/x411)*x412));

	if (t24 != 1473LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x429 = 3722280491886LLU;
	volatile int8_t x430 = -1;
	int16_t x431 = INT16_MAX;
	int16_t x432 = INT16_MAX;

	t25 = (x429>>((x430/x431)*x432));

	if (t25 != 3722280491886LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x438 = INT8_MAX;
	uint64_t x439 = 272LLU;
	static volatile uint32_t x440 = 71118U;
	int32_t t26 = -264;

	t26 = (x437>>((x438/x439)*x440));

	if (t26 != 10) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x445 = 0U;
	int8_t x446 = -1;
	uint64_t x448 = 13268965159368LLU;
	int32_t t27 = 512657;

	t27 = (x445>>((x446/x447)*x448));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x449 = 16;
	volatile int8_t x450 = INT8_MIN;
	int32_t x451 = INT32_MAX;
	static int16_t x452 = 10;
	static int32_t t28 = -2;

	t28 = (x449>>((x450/x451)*x452));

	if (t28 != 16) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x465 = 5U;
	int32_t x466 = INT32_MIN;
	int64_t x467 = INT64_MIN;
	int32_t x468 = INT32_MAX;
	int32_t t29 = 21049376;

	t29 = (x465>>((x466/x467)*x468));

	if (t29 != 5) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x478 = 0;
	int64_t x480 = INT64_MAX;
	volatile int32_t t30 = INT32_MAX;

	t30 = (x477>>((x478/x479)*x480));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x485 = 3549;
	uint8_t x486 = 9U;
	volatile uint8_t x487 = 17U;
	volatile uint32_t x488 = 1962965868U;
	static volatile int32_t t31 = 126127323;

	t31 = (x485>>((x486/x487)*x488));

	if (t31 != 3549) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x489 = 1U;
	uint32_t x490 = 271202821U;
	int32_t t32 = 149001;

	t32 = (x489>>((x490/x491)*x492));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x493 = 312LL;
	int8_t x494 = -1;
	static int32_t x495 = -1;
	volatile int64_t t33 = 17166064459740641LL;

	t33 = (x493>>((x494/x495)*x496));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x521 = INT32_MAX;
	static uint16_t x523 = UINT16_MAX;
	uint64_t x524 = UINT64_MAX;
	static int32_t t34 = INT32_MAX;

	t34 = (x521>>((x522/x523)*x524));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x525 = 0;
	uint64_t x526 = 610276352730LLU;
	volatile int8_t x527 = -13;
	static volatile int8_t x528 = INT8_MIN;
	int32_t t35 = -8555;

	t35 = (x525>>((x526/x527)*x528));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x533 = 0U;
	volatile uint8_t x534 = UINT8_MAX;
	uint32_t x535 = 2054952554U;
	volatile uint32_t t36 = 1896635512U;

	t36 = (x533>>((x534/x535)*x536));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x541 = 209523279LL;
	uint8_t x542 = UINT8_MAX;
	volatile int16_t x544 = -1;

	t37 = (x541>>((x542/x543)*x544));

	if (t37 != 209523279LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x573 = 100U;
	volatile uint16_t x574 = 98U;
	static int64_t x576 = -1LL;
	volatile int32_t t38 = 1190;

	t38 = (x573>>((x574/x575)*x576));

	if (t38 != 100) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x577 = 9;
	int64_t x578 = -1LL;
	uint16_t x579 = UINT16_MAX;
	static volatile int64_t x580 = INT64_MIN;
	int32_t t39 = 0;

	t39 = (x577>>((x578/x579)*x580));

	if (t39 != 9) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x602 = INT8_MIN;
	int32_t x603 = INT32_MIN;
	int8_t x604 = INT8_MIN;
	int32_t t40 = 9;

	t40 = (x601>>((x602/x603)*x604));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x621 = INT64_MAX;
	static uint16_t x623 = 597U;
	int64_t x624 = INT64_MAX;
	volatile int64_t t41 = INT64_MAX;

	t41 = (x621>>((x622/x623)*x624));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x630 = INT32_MAX;
	uint64_t x631 = 5106880197185336LLU;
	static int64_t x632 = INT64_MIN;
	uint64_t t42 = UINT64_MAX;

	t42 = (x629>>((x630/x631)*x632));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x669 = 6;
	uint8_t x670 = 7U;
	static uint64_t x671 = 476609200542LLU;
	volatile int32_t x672 = INT32_MIN;
	int32_t t43 = -53553319;

	t43 = (x669>>((x670/x671)*x672));

	if (t43 != 6) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x678 = -1;
	uint8_t x679 = 9U;
	uint8_t x680 = UINT8_MAX;
	int32_t t44 = 29;

	t44 = (x677>>((x678/x679)*x680));

	if (t44 != 28) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x697 = UINT8_MAX;
	volatile uint64_t x698 = 295601605LLU;
	uint64_t x699 = UINT64_MAX;
	int32_t x700 = INT32_MAX;

	t45 = (x697>>((x698/x699)*x700));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x701 = 1923581;
	static int32_t x703 = INT32_MIN;
	static volatile int32_t t46 = 29;

	t46 = (x701>>((x702/x703)*x704));

	if (t46 != 1923581) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x726 = 80;
	int64_t x727 = INT64_MIN;
	int64_t x728 = INT64_MAX;
	int32_t t47 = -12151;

	t47 = (x725>>((x726/x727)*x728));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x729 = 368070740664LLU;
	uint16_t x730 = 708U;
	volatile int32_t x731 = 225457333;
	int8_t x732 = INT8_MIN;

	t48 = (x729>>((x730/x731)*x732));

	if (t48 != 368070740664LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x740 = -1;
	int64_t t49 = 2655LL;

	t49 = (x737>>((x738/x739)*x740));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x751 = -776;
	static volatile int32_t x752 = INT32_MIN;
	volatile int32_t t50 = 364761361;

	t50 = (x749>>((x750/x751)*x752));

	if (t50 != 6) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x757 = INT64_MAX;
	int32_t x758 = INT32_MAX;
	int8_t x760 = 0;
	int64_t t51 = INT64_MAX;

	t51 = (x757>>((x758/x759)*x760));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x765 = UINT8_MAX;
	int8_t x766 = -1;
	int64_t x767 = INT64_MIN;
	volatile int32_t t52 = 103;

	t52 = (x765>>((x766/x767)*x768));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x769 = INT64_MAX;
	int8_t x770 = INT8_MIN;
	int64_t x771 = 1801LL;
	uint8_t x772 = 1U;

	t53 = (x769>>((x770/x771)*x772));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x773 = 24300U;
	static int32_t x775 = INT32_MIN;

	t54 = (x773>>((x774/x775)*x776));

	if (t54 != 24300) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x777 = UINT8_MAX;
	static int16_t x778 = -1;
	static int8_t x779 = -7;
	static uint16_t x780 = 378U;
	int32_t t55 = 2;

	t55 = (x777>>((x778/x779)*x780));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x797 = 49;
	uint32_t x798 = 181U;
	volatile uint8_t x800 = 0U;
	static volatile int32_t t56 = -435238;

	t56 = (x797>>((x798/x799)*x800));

	if (t56 != 49) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x814 = -22;
	int8_t x815 = INT8_MAX;

	t57 = (x813>>((x814/x815)*x816));

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x828 = -32845441;
	static volatile int32_t t58 = 142015;

	t58 = (x825>>((x826/x827)*x828));

	if (t58 != 32) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x829 = INT16_MAX;
	uint32_t x830 = 13393U;
	static uint64_t x831 = 4164134785LLU;
	int32_t x832 = -1;
	int32_t t59 = -26;

	t59 = (x829>>((x830/x831)*x832));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x838 = INT8_MIN;
	uint16_t x839 = 8601U;
	int8_t x840 = -1;
	int32_t t60 = -9176168;

	t60 = (x837>>((x838/x839)*x840));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x849 = 0U;
	uint64_t x850 = 3814653895833888LLU;
	int64_t x852 = INT64_MIN;
	int32_t t61 = -2354;

	t61 = (x849>>((x850/x851)*x852));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x861 = 76395913LLU;
	static int8_t x862 = INT8_MIN;
	static int32_t x864 = INT32_MIN;
	uint64_t t62 = 2LLU;

	t62 = (x861>>((x862/x863)*x864));

	if (t62 != 76395913LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x866 = 620U;
	volatile int32_t x867 = 177258243;
	uint8_t x868 = 1U;
	volatile int32_t t63 = 40489113;

	t63 = (x865>>((x866/x867)*x868));

	if (t63 != 50) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x869 = 1327496LLU;
	volatile int16_t x870 = INT16_MIN;
	uint32_t x871 = UINT32_MAX;
	uint8_t x872 = 1U;
	volatile uint64_t t64 = 115195LLU;

	t64 = (x869>>((x870/x871)*x872));

	if (t64 != 1327496LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x873 = UINT64_MAX;
	int32_t x874 = INT32_MIN;
	uint8_t x876 = UINT8_MAX;
	uint64_t t65 = UINT64_MAX;

	t65 = (x873>>((x874/x875)*x876));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x901 = 266;
	static int32_t x902 = INT32_MIN;
	uint32_t x903 = 3522644U;

	t66 = (x901>>((x902/x903)*x904));

	if (t66 != 266) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x905 = UINT16_MAX;
	int32_t x906 = 48;
	volatile uint64_t x908 = 460LLU;
	volatile int32_t t67 = 741702;

	t67 = (x905>>((x906/x907)*x908));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x917 = INT8_MAX;
	volatile uint8_t x918 = UINT8_MAX;
	int8_t x919 = INT8_MIN;
	int8_t x920 = -1;
	static volatile int32_t t68 = 1;

	t68 = (x917>>((x918/x919)*x920));

	if (t68 != 63) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x938 = 2U;
	volatile int32_t x939 = -799;
	static volatile uint64_t t69 = 8579LLU;

	t69 = (x937>>((x938/x939)*x940));

	if (t69 != 14109670680111552LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x946 = -1;
	static int8_t x947 = -35;
	int8_t x948 = 21;
	volatile int32_t t70 = -168314909;

	t70 = (x945>>((x946/x947)*x948));

	if (t70 != 14) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x949 = INT64_MAX;
	int32_t x950 = -1;
	int64_t x951 = INT64_MAX;
	int16_t x952 = -18;
	int64_t t71 = INT64_MAX;

	t71 = (x949>>((x950/x951)*x952));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x961 = INT8_MAX;
	int8_t x962 = -10;
	int16_t x963 = INT16_MAX;
	volatile int32_t t72 = -117002066;

	t72 = (x961>>((x962/x963)*x964));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x985 = INT32_MAX;
	int8_t x986 = -1;
	int16_t x987 = INT16_MAX;

	t73 = (x985>>((x986/x987)*x988));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x993 = INT8_MAX;
	static volatile int32_t x994 = INT32_MIN;
	int64_t x995 = INT64_MIN;
	volatile uint16_t x996 = 25U;
	int32_t t74 = -9052;

	t74 = (x993>>((x994/x995)*x996));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x1005 = INT8_MAX;
	volatile int8_t x1006 = 4;
	int8_t x1007 = INT8_MIN;
	static int32_t t75 = 0;

	t75 = (x1005>>((x1006/x1007)*x1008));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x1014 = -352602;
	static volatile int64_t x1015 = -7851666979LL;
	static int16_t x1016 = INT16_MIN;
	static uint64_t t76 = 771505160382LLU;

	t76 = (x1013>>((x1014/x1015)*x1016));

	if (t76 != 15627842259043LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x1025 = 580LL;
	uint32_t x1026 = 24234U;
	int64_t x1027 = -669911300LL;
	static uint64_t x1028 = 4610693660723920950LLU;

	t77 = (x1025>>((x1026/x1027)*x1028));

	if (t77 != 580LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x1030 = UINT8_MAX;
	int32_t x1032 = -1;
	int32_t t78 = 2202161;

	t78 = (x1029>>((x1030/x1031)*x1032));

	if (t78 != 14) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x1033 = INT32_MAX;
	int16_t x1035 = -1;
	int8_t x1036 = 5;

	t79 = (x1033>>((x1034/x1035)*x1036));

	if (t79 != 67108863) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x1045 = 0;
	int8_t x1046 = INT8_MAX;
	uint8_t x1047 = UINT8_MAX;
	int16_t x1048 = INT16_MAX;
	int32_t t80 = 77353527;

	t80 = (x1045>>((x1046/x1047)*x1048));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1081 = 4U;
	static int64_t x1082 = INT64_MIN;
	static volatile int8_t x1083 = INT8_MIN;
	volatile int16_t x1084 = 0;

	t81 = (x1081>>((x1082/x1083)*x1084));

	if (t81 != 4) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1113 = 782811569214392LLU;
	int8_t x1114 = INT8_MIN;
	int32_t x1116 = 7;
	uint64_t t82 = 1LLU;

	t82 = (x1113>>((x1114/x1115)*x1116));

	if (t82 != 782811569214392LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x1118 = 0;
	int64_t x1119 = INT64_MAX;
	static int32_t t83 = -686730;

	t83 = (x1117>>((x1118/x1119)*x1120));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x1141 = 2U;
	uint8_t x1142 = 0U;
	volatile uint64_t x1143 = 14605604LLU;

	t84 = (x1141>>((x1142/x1143)*x1144));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x1153 = 13;
	int32_t x1155 = INT32_MAX;
	volatile int64_t x1156 = INT64_MIN;
	int32_t t85 = 448;

	t85 = (x1153>>((x1154/x1155)*x1156));

	if (t85 != 13) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x1170 = 0;
	int8_t x1171 = INT8_MIN;
	volatile int64_t x1172 = 100160189252946LL;

	t86 = (x1169>>((x1170/x1171)*x1172));

	if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x1173 = 1;
	static int64_t x1175 = -1046648593624011761LL;
	volatile uint8_t x1176 = UINT8_MAX;
	static volatile int32_t t87 = 31475;

	t87 = (x1173>>((x1174/x1175)*x1176));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x1185 = INT32_MAX;
	uint16_t x1186 = 67U;
	int64_t x1187 = INT64_MIN;
	int64_t x1188 = 13562LL;
	volatile int32_t t88 = INT32_MAX;

	t88 = (x1185>>((x1186/x1187)*x1188));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x1189 = 3U;
	int64_t x1190 = -1LL;
	int32_t x1191 = INT32_MIN;
	uint16_t x1192 = UINT16_MAX;

	t89 = (x1189>>((x1190/x1191)*x1192));

	if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1194 = -1LL;
	int16_t x1195 = -513;
	static int16_t x1196 = -1;
	static int32_t t90 = 878794;

	t90 = (x1193>>((x1194/x1195)*x1196));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x1201 = INT32_MAX;
	static volatile int32_t t91 = INT32_MAX;

	t91 = (x1201>>((x1202/x1203)*x1204));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x1218 = 25786U;
	int32_t x1219 = INT32_MIN;
	int32_t x1220 = 0;
	int32_t t92 = 272;

	t92 = (x1217>>((x1218/x1219)*x1220));

	if (t92 != 1846) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x1221 = 3158651114369627LLU;
	int8_t x1222 = INT8_MIN;
	int32_t x1223 = INT32_MIN;
	uint16_t x1224 = 13U;
	uint64_t t93 = 893681000LLU;

	t93 = (x1221>>((x1222/x1223)*x1224));

	if (t93 != 3158651114369627LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1233 = INT32_MAX;
	static uint8_t x1234 = 57U;
	int64_t x1235 = INT64_MAX;
	volatile int32_t x1236 = INT32_MIN;
	volatile int32_t t94 = INT32_MAX;

	t94 = (x1233>>((x1234/x1235)*x1236));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1237 = 402U;
	int16_t x1238 = -19;
	static uint8_t x1239 = UINT8_MAX;
	uint16_t x1240 = 7295U;
	uint32_t t95 = 4U;

	t95 = (x1237>>((x1238/x1239)*x1240));

	if (t95 != 402U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1265 = 3032;
	int16_t x1266 = -1;
	uint8_t x1267 = UINT8_MAX;
	int64_t x1268 = 305218382998580600LL;

	t96 = (x1265>>((x1266/x1267)*x1268));

	if (t96 != 3032) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x1305 = 30U;
	int16_t x1306 = 5040;
	static volatile int32_t t97 = -493168164;

	t97 = (x1305>>((x1306/x1307)*x1308));

	if (t97 != 30) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x1317 = 735;
	static int32_t x1318 = -1;
	int16_t x1319 = 1964;
	static int8_t x1320 = INT8_MAX;
	volatile int32_t t98 = -4;

	t98 = (x1317>>((x1318/x1319)*x1320));

	if (t98 != 735) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x1341 = 10U;
	static int32_t x1342 = INT32_MIN;
	int8_t x1343 = INT8_MIN;
	int64_t x1344 = 0LL;
	int32_t t99 = -1;

	t99 = (x1341>>((x1342/x1343)*x1344));

	if (t99 != 10) { NG(); } else { ; }
	
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

