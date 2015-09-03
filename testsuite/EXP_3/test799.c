#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 67U;
static int16_t x4 = 1;
static uint32_t x8 = 1U;
volatile int64_t x29 = -1LL;
static int32_t t3 = 24254;
int8_t x53 = -1;
static int8_t x55 = 1;
volatile int32_t t6 = -66726;
int8_t x71 = INT8_MIN;
volatile int32_t t8 = 13691094;
volatile int32_t t9 = -4;
int8_t x93 = 11;
int32_t x103 = 0;
volatile int32_t t15 = 5;
uint32_t x137 = UINT32_MAX;
int16_t x138 = 236;
uint64_t x141 = UINT64_MAX;
uint32_t x143 = 3U;
static int32_t t17 = -117425945;
volatile int16_t x169 = INT16_MAX;
int16_t x189 = INT16_MAX;
int64_t x190 = -3980450LL;
static int32_t t22 = 831;
uint16_t x215 = UINT16_MAX;
uint64_t x226 = 217663062062341812LLU;
int32_t x228 = -5;
static volatile int64_t x235 = -1LL;
volatile int8_t x277 = INT8_MIN;
uint16_t x284 = 2U;
uint8_t x303 = 0U;
uint16_t x304 = 12U;
volatile int8_t x307 = INT8_MAX;
int32_t x308 = -7;
volatile int32_t t32 = 0;
uint16_t x326 = 236U;
int64_t x327 = -7906610619LL;
uint16_t x328 = 3U;
static int32_t x333 = INT32_MIN;
int32_t x334 = -104878852;
int16_t x377 = -12;
int32_t x378 = INT32_MIN;
volatile int32_t x379 = INT32_MIN;
volatile int32_t t36 = 75807527;
int32_t x397 = 36009;
int8_t x398 = INT8_MIN;
int16_t x428 = -1;
int32_t t40 = -429;
int32_t x438 = INT32_MAX;
int64_t x444 = -1LL;
int8_t x458 = INT8_MIN;
static uint16_t x466 = 16344U;
static volatile int32_t t47 = 350180252;
static volatile int8_t x546 = INT8_MAX;
static int8_t x547 = 29;
int32_t t51 = -1046371412;
int8_t x577 = 31;
volatile int16_t x582 = 15103;
volatile uint16_t x641 = UINT16_MAX;
int16_t x649 = 2023;
uint8_t x686 = 6U;
volatile uint32_t x687 = 19U;
volatile int32_t t61 = -128698167;
static volatile uint8_t x735 = UINT8_MAX;
int8_t x750 = -1;
volatile int32_t t68 = 1596;
uint16_t x789 = UINT16_MAX;
static int8_t x790 = INT8_MIN;
int64_t x809 = INT64_MAX;
int8_t x812 = -4;
static uint32_t x822 = 786543U;
int64_t x825 = -1LL;
volatile int32_t x826 = 3;
int16_t x833 = -1;
int8_t x837 = INT8_MIN;
volatile uint16_t x838 = UINT16_MAX;
int32_t t78 = 1;
int32_t x849 = INT32_MAX;
int8_t x850 = -1;
int8_t x851 = 28;
int32_t x858 = INT32_MAX;
int32_t x866 = -2363;
volatile int32_t t81 = -15166977;
volatile uint8_t x885 = 78U;
uint32_t x910 = 512928U;
int16_t x949 = INT16_MIN;
static volatile int32_t x951 = -89;
uint64_t x952 = 133LLU;
volatile int64_t x957 = 1724083762LL;
uint64_t x958 = 5LLU;
static int32_t t91 = 6;
int8_t x964 = INT8_MIN;
int8_t x975 = INT8_MIN;
volatile int32_t t93 = 7788343;
int32_t x987 = INT32_MIN;
uint64_t x1010 = 62635LLU;
uint32_t x1015 = UINT32_MAX;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	int8_t x3 = INT8_MAX;
	volatile int32_t t0 = 53561;

	t0 = ((x1<=x2)<<(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 29874U;
	int8_t x6 = -1;
	int32_t x7 = 1;
	volatile int32_t t1 = -14849432;

	t1 = ((x5<=x6)<<(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x17 = UINT16_MAX;
	int8_t x18 = INT8_MIN;
	static int32_t x19 = INT32_MIN;
	int16_t x20 = INT16_MIN;
	int32_t t2 = -212;

	t2 = ((x17<=x18)<<(x19%x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x30 = UINT16_MAX;
	uint32_t x31 = 85924U;
	volatile uint8_t x32 = 4U;

	t3 = ((x29<=x30)<<(x31%x32));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x54 = INT16_MIN;
	static int64_t x56 = 1LL;
	static int32_t t4 = 2903360;

	t4 = ((x53<=x54)<<(x55%x56));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x57 = 1;
	volatile int64_t x58 = INT64_MAX;
	volatile int32_t x59 = -1;
	uint64_t x60 = UINT64_MAX;
	static int32_t t5 = -1877938;

	t5 = ((x57<=x58)<<(x59%x60));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x61 = -37;
	int64_t x62 = -1LL;
	static volatile uint16_t x63 = 15U;
	uint16_t x64 = UINT16_MAX;

	t6 = ((x61<=x62)<<(x63%x64));

	if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x69 = INT32_MIN;
	int16_t x70 = -133;
	int16_t x72 = -1;
	volatile int32_t t7 = 47909847;

	t7 = ((x69<=x70)<<(x71%x72));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x73 = INT32_MAX;
	volatile int8_t x74 = 7;
	uint8_t x75 = 90U;
	static int16_t x76 = -1;

	t8 = ((x73<=x74)<<(x75%x76));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x81 = INT64_MAX;
	int8_t x82 = -1;
	int64_t x83 = -1LL;
	int8_t x84 = -1;

	t9 = ((x81<=x82)<<(x83%x84));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x89 = 3;
	static int32_t x90 = INT32_MIN;
	int32_t x91 = INT32_MAX;
	uint32_t x92 = 2U;
	volatile int32_t t10 = -274565;

	t10 = ((x89<=x90)<<(x91%x92));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x94 = UINT16_MAX;
	uint16_t x95 = UINT16_MAX;
	volatile int8_t x96 = 2;
	static volatile int32_t t11 = -7;

	t11 = ((x93<=x94)<<(x95%x96));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x101 = 1;
	uint8_t x102 = 19U;
	int16_t x104 = INT16_MIN;
	volatile int32_t t12 = 244;

	t12 = ((x101<=x102)<<(x103%x104));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x113 = INT32_MIN;
	static volatile uint64_t x114 = 121591716728LLU;
	static int64_t x115 = 1LL;
	int16_t x116 = INT16_MAX;
	static int32_t t13 = 2;

	t13 = ((x113<=x114)<<(x115%x116));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x129 = 1491108LL;
	int32_t x130 = INT32_MIN;
	uint16_t x131 = 2795U;
	uint16_t x132 = 5U;
	volatile int32_t t14 = 120;

	t14 = ((x129<=x130)<<(x131%x132));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x133 = 4;
	volatile int8_t x134 = INT8_MIN;
	int32_t x135 = INT32_MAX;
	int32_t x136 = INT32_MAX;

	t15 = ((x133<=x134)<<(x135%x136));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x139 = 345U;
	static volatile uint16_t x140 = 2U;
	int32_t t16 = -9;

	t16 = ((x137<=x138)<<(x139%x140));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x142 = INT64_MIN;
	volatile uint32_t x144 = UINT32_MAX;

	t17 = ((x141<=x142)<<(x143%x144));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x170 = 521U;
	uint8_t x171 = UINT8_MAX;
	int8_t x172 = -32;
	int32_t t18 = 21;

	t18 = ((x169<=x170)<<(x171%x172));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x191 = INT64_MIN;
	int16_t x192 = -1;
	static volatile int32_t t19 = 88;

	t19 = ((x189<=x190)<<(x191%x192));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x197 = UINT8_MAX;
	uint64_t x198 = UINT64_MAX;
	int16_t x199 = 15553;
	uint8_t x200 = 60U;
	volatile int32_t t20 = -47932;

	t20 = ((x197<=x198)<<(x199%x200));

	if (t20 != 8192) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x201 = INT16_MAX;
	int64_t x202 = -2693224655435111956LL;
	int64_t x203 = INT64_MIN;
	int16_t x204 = INT16_MIN;
	volatile int32_t t21 = -126;

	t21 = ((x201<=x202)<<(x203%x204));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x209 = 0;
	uint8_t x210 = 1U;
	int64_t x211 = INT64_MIN;
	static int8_t x212 = -1;

	t22 = ((x209<=x210)<<(x211%x212));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x213 = INT32_MIN;
	int32_t x214 = -7;
	static int8_t x216 = -1;
	volatile int32_t t23 = -83933969;

	t23 = ((x213<=x214)<<(x215%x216));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x225 = -76256774805808LL;
	int64_t x227 = INT64_MAX;
	int32_t t24 = -4302;

	t24 = ((x225<=x226)<<(x227%x228));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x229 = INT64_MIN;
	uint32_t x230 = 174529U;
	static volatile uint64_t x231 = UINT64_MAX;
	int16_t x232 = INT16_MAX;
	volatile int32_t t25 = 14870018;

	t25 = ((x229<=x230)<<(x231%x232));

	if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x233 = -1;
	volatile uint64_t x234 = 80LLU;
	int16_t x236 = -1;
	int32_t t26 = -1209993;

	t26 = ((x233<=x234)<<(x235%x236));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x278 = UINT32_MAX;
	volatile int32_t x279 = -772225071;
	int8_t x280 = -1;
	volatile int32_t t27 = 94;

	t27 = ((x277<=x278)<<(x279%x280));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x281 = INT32_MIN;
	int32_t x282 = -1;
	int8_t x283 = -4;
	static int32_t t28 = -245;

	t28 = ((x281<=x282)<<(x283%x284));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x293 = INT8_MAX;
	int8_t x294 = 33;
	int64_t x295 = INT64_MAX;
	uint16_t x296 = 7U;
	int32_t t29 = -13267852;

	t29 = ((x293<=x294)<<(x295%x296));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x301 = 1;
	static int8_t x302 = -1;
	volatile int32_t t30 = 21;

	t30 = ((x301<=x302)<<(x303%x304));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x305 = -198021950;
	static uint8_t x306 = 1U;
	volatile int32_t t31 = -76050;

	t31 = ((x305<=x306)<<(x307%x308));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x317 = 289;
	uint32_t x318 = UINT32_MAX;
	static int8_t x319 = 34;
	int8_t x320 = 18;

	t32 = ((x317<=x318)<<(x319%x320));

	if (t32 != 65536) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x325 = -1;
	int32_t t33 = -343;

	t33 = ((x325<=x326)<<(x327%x328));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x335 = INT16_MIN;
	volatile int16_t x336 = INT16_MIN;
	static volatile int32_t t34 = 0;

	t34 = ((x333<=x334)<<(x335%x336));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x353 = -1;
	uint16_t x354 = 107U;
	int8_t x355 = -1;
	volatile uint64_t x356 = UINT64_MAX;
	volatile int32_t t35 = -13339347;

	t35 = ((x353<=x354)<<(x355%x356));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x380 = INT8_MIN;

	t36 = ((x377<=x378)<<(x379%x380));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x385 = -1;
	int8_t x386 = 1;
	volatile uint8_t x387 = 8U;
	int32_t x388 = -8612;
	volatile int32_t t37 = 113057465;

	t37 = ((x385<=x386)<<(x387%x388));

	if (t37 != 256) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x399 = 49U;
	int64_t x400 = -1LL;
	volatile int32_t t38 = 227718469;

	t38 = ((x397<=x398)<<(x399%x400));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x413 = -4;
	volatile uint16_t x414 = UINT16_MAX;
	volatile uint16_t x415 = 16U;
	int16_t x416 = 12426;
	int32_t t39 = -233;

	t39 = ((x413<=x414)<<(x415%x416));

	if (t39 != 65536) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x425 = INT16_MIN;
	int16_t x426 = 14148;
	volatile int32_t x427 = -1;

	t40 = ((x425<=x426)<<(x427%x428));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x437 = 25U;
	int8_t x439 = INT8_MAX;
	static int8_t x440 = -55;
	static int32_t t41 = 76668;

	t41 = ((x437<=x438)<<(x439%x440));

	if (t41 != 131072) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x441 = 14U;
	uint64_t x442 = 803095927514631LLU;
	int64_t x443 = -543LL;
	volatile int32_t t42 = 810647;

	t42 = ((x441<=x442)<<(x443%x444));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x457 = INT8_MIN;
	uint8_t x459 = 13U;
	int8_t x460 = INT8_MIN;
	volatile int32_t t43 = -65904284;

	t43 = ((x457<=x458)<<(x459%x460));

	if (t43 != 8192) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x461 = -1;
	int8_t x462 = INT8_MIN;
	int16_t x463 = -1;
	int8_t x464 = -1;
	volatile int32_t t44 = -3;

	t44 = ((x461<=x462)<<(x463%x464));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x465 = 15889930349347230LLU;
	uint16_t x467 = 3U;
	uint64_t x468 = 53684238334013562LLU;
	static int32_t t45 = -281953;

	t45 = ((x465<=x466)<<(x467%x468));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x493 = INT16_MIN;
	static volatile int64_t x494 = -1LL;
	int16_t x495 = INT16_MIN;
	volatile int16_t x496 = -1;
	static int32_t t46 = 84;

	t46 = ((x493<=x494)<<(x495%x496));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x497 = 21294U;
	uint64_t x498 = UINT64_MAX;
	int8_t x499 = INT8_MIN;
	int64_t x500 = -1LL;

	t47 = ((x497<=x498)<<(x499%x500));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x509 = -1;
	static volatile uint16_t x510 = 878U;
	volatile int16_t x511 = INT16_MAX;
	int8_t x512 = 5;
	volatile int32_t t48 = 31966239;

	t48 = ((x509<=x510)<<(x511%x512));

	if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x521 = 252823LLU;
	uint32_t x522 = UINT32_MAX;
	int8_t x523 = INT8_MAX;
	int16_t x524 = 1;
	static volatile int32_t t49 = -1836606;

	t49 = ((x521<=x522)<<(x523%x524));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x545 = 539U;
	int16_t x548 = INT16_MIN;
	static volatile int32_t t50 = 217437154;

	t50 = ((x545<=x546)<<(x547%x548));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x553 = UINT16_MAX;
	volatile int8_t x554 = INT8_MIN;
	volatile int8_t x555 = INT8_MIN;
	int32_t x556 = -1;

	t51 = ((x553<=x554)<<(x555%x556));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x561 = -1;
	uint64_t x562 = 104LLU;
	uint8_t x563 = 5U;
	int8_t x564 = -4;
	static volatile int32_t t52 = -7772;

	t52 = ((x561<=x562)<<(x563%x564));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x578 = INT32_MAX;
	int8_t x579 = INT8_MIN;
	int8_t x580 = INT8_MIN;
	volatile int32_t t53 = -31183939;

	t53 = ((x577<=x578)<<(x579%x580));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x581 = -1;
	static uint8_t x583 = UINT8_MAX;
	static int8_t x584 = INT8_MAX;
	int32_t t54 = 423;

	t54 = ((x581<=x582)<<(x583%x584));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x601 = UINT64_MAX;
	static uint64_t x602 = 363LLU;
	uint16_t x603 = UINT16_MAX;
	volatile int16_t x604 = INT16_MAX;
	volatile int32_t t55 = -44;

	t55 = ((x601<=x602)<<(x603%x604));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x625 = -4234LL;
	int16_t x626 = INT16_MAX;
	volatile uint16_t x627 = 4625U;
	static int8_t x628 = 1;
	int32_t t56 = 287;

	t56 = ((x625<=x626)<<(x627%x628));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x633 = 321438662LLU;
	static volatile uint8_t x634 = UINT8_MAX;
	int8_t x635 = -38;
	static volatile int8_t x636 = 1;
	int32_t t57 = -2638216;

	t57 = ((x633<=x634)<<(x635%x636));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x642 = INT32_MIN;
	int64_t x643 = INT64_MIN;
	int64_t x644 = INT64_MIN;
	volatile int32_t t58 = -153211;

	t58 = ((x641<=x642)<<(x643%x644));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x650 = -1LL;
	uint16_t x651 = UINT16_MAX;
	uint8_t x652 = UINT8_MAX;
	static int32_t t59 = -43;

	t59 = ((x649<=x650)<<(x651%x652));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x661 = 4021892;
	int8_t x662 = INT8_MAX;
	volatile int8_t x663 = 5;
	int8_t x664 = INT8_MIN;
	int32_t t60 = 7;

	t60 = ((x661<=x662)<<(x663%x664));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x685 = INT16_MAX;
	volatile int16_t x688 = -87;

	t61 = ((x685<=x686)<<(x687%x688));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x721 = 1U;
	int64_t x722 = -33602087189LL;
	static uint16_t x723 = 15U;
	volatile uint64_t x724 = 3374061437962279457LLU;
	volatile int32_t t62 = -406425;

	t62 = ((x721<=x722)<<(x723%x724));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x733 = -1801506;
	static int32_t x734 = -1;
	uint8_t x736 = 3U;
	volatile int32_t t63 = 1;

	t63 = ((x733<=x734)<<(x735%x736));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x741 = INT64_MAX;
	int16_t x742 = INT16_MIN;
	volatile int64_t x743 = -1LL;
	int64_t x744 = -1LL;
	int32_t t64 = 251262558;

	t64 = ((x741<=x742)<<(x743%x744));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x745 = INT8_MIN;
	static uint32_t x746 = 53135647U;
	int32_t x747 = -15;
	uint8_t x748 = 1U;
	volatile int32_t t65 = 326343;

	t65 = ((x745<=x746)<<(x747%x748));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x749 = 11787U;
	static int8_t x751 = INT8_MIN;
	int8_t x752 = INT8_MIN;
	int32_t t66 = -20;

	t66 = ((x749<=x750)<<(x751%x752));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x765 = 2;
	int32_t x766 = -1;
	volatile int32_t x767 = -1;
	uint32_t x768 = UINT32_MAX;
	volatile int32_t t67 = 166954;

	t67 = ((x765<=x766)<<(x767%x768));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x769 = UINT8_MAX;
	uint32_t x770 = 327623U;
	static uint8_t x771 = 0U;
	volatile int32_t x772 = INT32_MIN;

	t68 = ((x769<=x770)<<(x771%x772));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x773 = 14028;
	volatile int16_t x774 = INT16_MIN;
	int32_t x775 = INT32_MIN;
	int32_t x776 = INT32_MIN;
	int32_t t69 = 323;

	t69 = ((x773<=x774)<<(x775%x776));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x791 = 1;
	int64_t x792 = 1386699142975LL;
	int32_t t70 = 1077;

	t70 = ((x789<=x790)<<(x791%x792));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x805 = 1U;
	int32_t x806 = 0;
	volatile uint8_t x807 = 1U;
	int32_t x808 = INT32_MIN;
	int32_t t71 = 327;

	t71 = ((x805<=x806)<<(x807%x808));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x810 = 658;
	static int8_t x811 = INT8_MAX;
	volatile int32_t t72 = -2;

	t72 = ((x809<=x810)<<(x811%x812));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x813 = INT16_MIN;
	uint8_t x814 = 12U;
	uint8_t x815 = 3U;
	uint8_t x816 = 12U;
	static volatile int32_t t73 = 217574;

	t73 = ((x813<=x814)<<(x815%x816));

	if (t73 != 8) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x821 = UINT32_MAX;
	static uint16_t x823 = 270U;
	uint16_t x824 = 4U;
	int32_t t74 = 113077907;

	t74 = ((x821<=x822)<<(x823%x824));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x827 = -1;
	volatile uint64_t x828 = UINT64_MAX;
	int32_t t75 = 2;

	t75 = ((x825<=x826)<<(x827%x828));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x834 = 68493141660293LLU;
	static uint16_t x835 = 1U;
	static uint8_t x836 = 1U;
	static int32_t t76 = 10;

	t76 = ((x833<=x834)<<(x835%x836));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x839 = -1;
	int64_t x840 = -1LL;
	volatile int32_t t77 = -1;

	t77 = ((x837<=x838)<<(x839%x840));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x841 = UINT16_MAX;
	uint64_t x842 = 33070698LLU;
	uint16_t x843 = 1U;
	int32_t x844 = 158460;

	t78 = ((x841<=x842)<<(x843%x844));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x852 = -1;
	static volatile int32_t t79 = -166762;

	t79 = ((x849<=x850)<<(x851%x852));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x857 = 100U;
	uint32_t x859 = UINT32_MAX;
	uint8_t x860 = 14U;
	volatile int32_t t80 = -117678326;

	t80 = ((x857<=x858)<<(x859%x860));

	if (t80 != 8) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x865 = INT16_MAX;
	uint16_t x867 = UINT16_MAX;
	uint8_t x868 = 17U;

	t81 = ((x865<=x866)<<(x867%x868));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x886 = INT32_MIN;
	int16_t x887 = 0;
	int32_t x888 = INT32_MIN;
	int32_t t82 = -4050737;

	t82 = ((x885<=x886)<<(x887%x888));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x889 = 1U;
	uint32_t x890 = 243534392U;
	uint64_t x891 = UINT64_MAX;
	int32_t x892 = INT32_MAX;
	int32_t t83 = 62;

	t83 = ((x889<=x890)<<(x891%x892));

	if (t83 != 8) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x897 = INT64_MIN;
	int16_t x898 = 6;
	int32_t x899 = INT32_MIN;
	int32_t x900 = INT32_MIN;
	volatile int32_t t84 = 976036;

	t84 = ((x897<=x898)<<(x899%x900));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x901 = 1845401LLU;
	uint32_t x902 = 5550369U;
	int32_t x903 = 1;
	uint8_t x904 = UINT8_MAX;
	static int32_t t85 = 1999618;

	t85 = ((x901<=x902)<<(x903%x904));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x909 = -194;
	volatile uint16_t x911 = 1U;
	uint32_t x912 = 1U;
	int32_t t86 = -66338922;

	t86 = ((x909<=x910)<<(x911%x912));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x925 = INT16_MIN;
	volatile uint16_t x926 = UINT16_MAX;
	uint16_t x927 = 0U;
	volatile int32_t x928 = -228622;
	int32_t t87 = -1079445;

	t87 = ((x925<=x926)<<(x927%x928));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x941 = -23;
	uint64_t x942 = 13LLU;
	static volatile int16_t x943 = INT16_MIN;
	int16_t x944 = -1;
	static int32_t t88 = -2770;

	t88 = ((x941<=x942)<<(x943%x944));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x950 = 516915U;
	int32_t t89 = 44892;

	t89 = ((x949<=x950)<<(x951%x952));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x953 = 1;
	uint64_t x954 = UINT64_MAX;
	uint16_t x955 = 1U;
	volatile int8_t x956 = -1;
	volatile int32_t t90 = -16199831;

	t90 = ((x953<=x954)<<(x955%x956));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x959 = 3080U;
	static volatile uint32_t x960 = 27U;

	t91 = ((x957<=x958)<<(x959%x960));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x961 = INT8_MIN;
	volatile int16_t x962 = -7114;
	volatile int32_t x963 = INT32_MIN;
	static int32_t t92 = -43602693;

	t92 = ((x961<=x962)<<(x963%x964));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x973 = 738U;
	int8_t x974 = INT8_MIN;
	int16_t x976 = -4;

	t93 = ((x973<=x974)<<(x975%x976));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x977 = 34;
	int64_t x978 = -17075030LL;
	int64_t x979 = INT64_MAX;
	int8_t x980 = -1;
	volatile int32_t t94 = 736;

	t94 = ((x977<=x978)<<(x979%x980));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x981 = -81;
	int8_t x982 = INT8_MIN;
	static uint64_t x983 = 15508LLU;
	uint16_t x984 = 196U;
	int32_t t95 = -325760899;

	t95 = ((x981<=x982)<<(x983%x984));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x985 = 0U;
	int8_t x986 = -1;
	int16_t x988 = INT16_MIN;
	int32_t t96 = 1;

	t96 = ((x985<=x986)<<(x987%x988));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x989 = UINT64_MAX;
	int32_t x990 = -1;
	int64_t x991 = INT64_MAX;
	int32_t x992 = INT32_MAX;
	volatile int32_t t97 = -127805751;

	t97 = ((x989<=x990)<<(x991%x992));

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x1009 = 1U;
	int8_t x1011 = INT8_MIN;
	int8_t x1012 = INT8_MIN;
	volatile int32_t t98 = 494144906;

	t98 = ((x1009<=x1010)<<(x1011%x1012));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1013 = -12301530;
	static int8_t x1014 = INT8_MAX;
	int8_t x1016 = 14;
	int32_t t99 = -591;

	t99 = ((x1013<=x1014)<<(x1015%x1016));

	if (t99 != 8) { NG(); } else { ; }
	
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

