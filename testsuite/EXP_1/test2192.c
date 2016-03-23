
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x8 = 29U;
static uint16_t x12 = 1U;
volatile int32_t t1 = 7;
int8_t x27 = INT8_MIN;
uint32_t x29 = 1U;
static int32_t x30 = -4308;
int32_t x37 = -1;
int32_t t8 = 0;
static int64_t x48 = -1LL;
volatile int32_t t9 = -832625;
static uint64_t x58 = 39980968616LLU;
uint8_t x72 = 1U;
static int32_t t14 = -891;
volatile int32_t t15 = 3168966;
static int64_t x92 = 14292092704LL;
volatile int32_t t17 = -3;
uint16_t x97 = UINT16_MAX;
static volatile int16_t x105 = INT16_MIN;
uint16_t x107 = 20618U;
int32_t x108 = 2601;
volatile int16_t x111 = INT16_MIN;
static uint16_t x115 = UINT16_MAX;
int64_t x117 = INT64_MIN;
int8_t x118 = -1;
static int8_t x129 = INT8_MIN;
uint32_t x134 = UINT32_MAX;
volatile uint16_t x136 = 9411U;
int16_t x137 = INT16_MIN;
uint32_t x149 = 946776336U;
static int8_t x158 = 2;
volatile uint8_t x161 = UINT8_MAX;
static volatile int32_t t30 = 1288;
volatile int32_t t32 = -13477;
uint64_t x182 = UINT64_MAX;
uint16_t x187 = UINT16_MAX;
int16_t x194 = INT16_MIN;
uint32_t x195 = UINT32_MAX;
static int32_t x204 = INT32_MIN;
volatile int32_t t40 = 32242804;
volatile int16_t x240 = INT16_MIN;
int64_t x246 = INT64_MIN;
int32_t x247 = INT32_MIN;
int32_t t46 = 1882317;
static int32_t x251 = INT32_MIN;
volatile uint32_t x252 = UINT32_MAX;
static int16_t x254 = 2455;
int32_t x261 = -1;
int32_t t49 = -4;
int32_t x275 = INT32_MIN;
static uint16_t x287 = 2U;
int32_t x290 = -453;
int8_t x291 = INT8_MIN;
uint16_t x301 = 14270U;
int8_t x304 = INT8_MAX;
static volatile int32_t t58 = 231;
int8_t x314 = INT8_MAX;
static int64_t x318 = -1LL;
int32_t t63 = -391;
int32_t t65 = -1364094;
int64_t x357 = INT64_MAX;
static uint32_t x364 = 44U;
volatile int32_t t68 = 1;
int32_t t70 = 139957867;
int8_t x391 = 0;
static uint8_t x392 = UINT8_MAX;
static uint64_t x405 = 12632649333652LLU;
volatile int64_t x410 = INT64_MIN;
uint16_t x414 = 26U;
static int16_t x415 = -1;
int8_t x426 = INT8_MIN;
int32_t t81 = -37558134;
int8_t x433 = -1;
uint8_t x442 = 0U;
int32_t t84 = 279105;
volatile int8_t x458 = INT8_MIN;
uint32_t x460 = 1017243788U;
int16_t x463 = 0;
int8_t x464 = 1;
int64_t x481 = -7917074695LL;
volatile int16_t x490 = INT16_MIN;
int64_t x493 = -218100827390274LL;
int32_t x496 = INT32_MIN;
uint32_t x500 = UINT32_MAX;
int16_t x504 = 6219;
uint64_t x505 = UINT64_MAX;
volatile int32_t x508 = -11;
int8_t x510 = 13;
int32_t t98 = 0;
static int32_t t99 = 550312238;
uint8_t x522 = 1U;
int64_t x523 = -1LL;
int64_t x537 = -1LL;
int32_t t104 = 154593;
int8_t x547 = -1;
int32_t x551 = INT32_MIN;
uint32_t x556 = 26U;
int32_t t107 = -11784;
uint64_t x559 = 940517694661LLU;
static uint8_t x562 = 3U;
static int64_t x578 = INT64_MIN;
int16_t x580 = INT16_MIN;
volatile uint64_t x584 = 2893440LLU;
int64_t x585 = 39LL;
static uint8_t x598 = 23U;
static volatile int64_t x601 = INT64_MIN;
volatile int64_t x608 = INT64_MAX;
volatile int64_t x614 = INT64_MAX;
static int16_t x616 = -1;
volatile uint16_t x617 = 105U;
int32_t t121 = 3357;
uint8_t x626 = UINT8_MAX;
uint8_t x627 = UINT8_MAX;
int32_t x631 = INT32_MIN;
volatile int32_t t124 = 0;
int8_t x638 = INT8_MAX;
int8_t x646 = INT8_MAX;
int8_t x647 = INT8_MIN;
int16_t x655 = INT16_MIN;
static int32_t t129 = 111512768;
uint32_t x657 = 1U;
uint64_t x668 = UINT64_MAX;
uint32_t x671 = UINT32_MAX;
static uint16_t x673 = 29U;
int8_t x675 = INT8_MIN;
uint16_t x676 = 2232U;
int64_t x677 = -108359757LL;
int8_t x690 = INT8_MIN;
volatile int8_t x693 = INT8_MAX;
uint32_t x694 = 26516832U;
static uint16_t x695 = UINT16_MAX;
uint8_t x709 = 39U;
int32_t x712 = INT32_MAX;
static int16_t x720 = INT16_MIN;
volatile int32_t t140 = -1733953;
static uint32_t x734 = UINT32_MAX;
int8_t x735 = INT8_MIN;
static uint16_t x744 = 3687U;
static int64_t x747 = -3367LL;
int32_t t145 = 100934;
static uint32_t x750 = 3424U;
int16_t x751 = INT16_MAX;
int64_t x753 = INT64_MAX;
uint32_t x754 = 0U;
int16_t x755 = INT16_MIN;
volatile int32_t t147 = -14301914;
uint32_t x757 = 1U;
static uint64_t x770 = UINT64_MAX;
uint64_t x773 = 18LLU;
int64_t x777 = -35035799075655828LL;
int32_t x792 = -1;
uint64_t x794 = 3744917084990LLU;
volatile int32_t t156 = -2;
volatile int32_t t157 = 7883;
static int16_t x804 = INT16_MIN;
uint32_t x811 = UINT32_MAX;
int64_t x829 = -58034LL;
uint64_t x830 = UINT64_MAX;
uint16_t x832 = UINT16_MAX;
uint64_t x839 = 357133286347969087LLU;
static volatile int8_t x841 = 1;
int16_t x843 = INT16_MIN;
static int32_t x848 = INT32_MIN;
uint16_t x849 = UINT16_MAX;
int16_t x851 = INT16_MIN;
static int32_t x852 = INT32_MAX;
int16_t x859 = -60;
uint8_t x860 = UINT8_MAX;
int16_t x875 = -757;
int32_t t169 = 764746;
volatile int32_t x884 = INT32_MIN;
int32_t x891 = INT32_MIN;
volatile int64_t x903 = INT64_MIN;
int64_t x904 = INT64_MIN;
int32_t t175 = -135925;
volatile uint64_t x906 = 208027LLU;
int64_t x908 = -1LL;
static int32_t t176 = 344;
uint64_t x910 = UINT64_MAX;
int32_t x912 = 4312701;
int32_t x923 = INT32_MAX;
int32_t t180 = -20911;
int16_t x926 = INT16_MIN;
uint64_t x928 = 786634873778830LLU;
int64_t x930 = INT64_MIN;
int16_t x931 = INT16_MIN;
int8_t x932 = INT8_MIN;
int32_t x933 = INT32_MIN;
int64_t x935 = -2625784LL;
volatile int32_t t183 = -1;
int64_t x938 = INT64_MAX;
int32_t x952 = -77;
static volatile int32_t t185 = 1854;
uint32_t x957 = 2569179U;
int16_t x965 = -25;
int16_t x970 = 533;
static volatile int8_t x972 = -1;
static int8_t x979 = -1;
static int64_t x986 = INT64_MIN;
int32_t t192 = 98302931;
int8_t x990 = INT8_MAX;
static volatile int8_t x1003 = INT8_MAX;
int32_t x1005 = 0;
volatile int32_t t196 = 30;
int8_t x1015 = 44;
int16_t x1016 = -1;
uint8_t x1017 = UINT8_MAX;
volatile int32_t t198 = 48267;


void f0(void) {
    	uint64_t x5 = 1103682752486783LLU;
	static uint16_t x6 = UINT16_MAX;
	uint32_t x7 = UINT32_MAX;
	volatile int32_t t0 = 31957954;

    t0 = (((x5&x6)*x7)==x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x9 = INT8_MIN;
	uint16_t x10 = 3965U;
	uint64_t x11 = 439649856573LLU;

    t1 = (((x9&x10)*x11)==x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = 96442U;
	int16_t x14 = -1;
	int16_t x15 = INT16_MIN;
	uint8_t x16 = 3U;
	volatile int32_t t2 = -102093;

    t2 = (((x13&x14)*x15)==x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = -26893;
	volatile int32_t x18 = -1;
	volatile uint16_t x19 = UINT16_MAX;
	int8_t x20 = INT8_MIN;
	volatile int32_t t3 = -4638;

    t3 = (((x17&x18)*x19)==x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x25 = 0;
	uint32_t x26 = 127900300U;
	int32_t x28 = -281260;
	int32_t t4 = -40277600;

    t4 = (((x25&x26)*x27)==x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x31 = INT32_MIN;
	static int64_t x32 = INT64_MIN;
	int32_t t5 = -442386815;

    t5 = (((x29&x30)*x31)==x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x33 = INT8_MAX;
	static volatile uint8_t x34 = 112U;
	int8_t x35 = INT8_MAX;
	volatile uint32_t x36 = UINT32_MAX;
	volatile int32_t t6 = -149427;

    t6 = (((x33&x34)*x35)==x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x38 = 6;
	int16_t x39 = INT16_MIN;
	uint32_t x40 = 8973679U;
	int32_t t7 = -5;

    t7 = (((x37&x38)*x39)==x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x41 = 18402LLU;
	int16_t x42 = -1;
	uint32_t x43 = UINT32_MAX;
	uint8_t x44 = 7U;

    t8 = (((x41&x42)*x43)==x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = -1;
	static int32_t x46 = INT32_MAX;
	volatile uint32_t x47 = 18771U;

    t9 = (((x45&x46)*x47)==x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = 0;
	int16_t x50 = INT16_MIN;
	int64_t x51 = INT64_MIN;
	uint32_t x52 = 2911U;
	static int32_t t10 = -78;

    t10 = (((x49&x50)*x51)==x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x53 = UINT16_MAX;
	static volatile uint32_t x54 = 1U;
	int8_t x55 = -1;
	int32_t x56 = INT32_MAX;
	int32_t t11 = -630;

    t11 = (((x53&x54)*x55)==x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = INT64_MIN;
	volatile int16_t x59 = INT16_MAX;
	int32_t x60 = INT32_MAX;
	static int32_t t12 = -193300;

    t12 = (((x57&x58)*x59)==x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x61 = 561770875795133LLU;
	int64_t x62 = 14710207726681341LL;
	static int8_t x63 = INT8_MAX;
	static int16_t x64 = -1;
	int32_t t13 = 1060;

    t13 = (((x61&x62)*x63)==x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x69 = -31256112LL;
	volatile int32_t x70 = INT32_MAX;
	volatile uint16_t x71 = 50U;

    t14 = (((x69&x70)*x71)==x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x81 = 121507;
	uint32_t x82 = UINT32_MAX;
	static int8_t x83 = 1;
	uint8_t x84 = 0U;

    t15 = (((x81&x82)*x83)==x84);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x85 = INT8_MIN;
	volatile uint32_t x86 = 115011654U;
	static int16_t x87 = INT16_MIN;
	uint32_t x88 = 22574640U;
	static volatile int32_t t16 = -81;

    t16 = (((x85&x86)*x87)==x88);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x89 = 27030U;
	volatile uint64_t x90 = 1986947425187973LLU;
	static int16_t x91 = INT16_MAX;

    t17 = (((x89&x90)*x91)==x92);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x98 = 112951131784748LL;
	int8_t x99 = INT8_MIN;
	uint8_t x100 = 104U;
	volatile int32_t t18 = 13;

    t18 = (((x97&x98)*x99)==x100);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x106 = -1;
	volatile int32_t t19 = 8729;

    t19 = (((x105&x106)*x107)==x108);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x109 = 2592LLU;
	int8_t x110 = 52;
	int32_t x112 = -1;
	volatile int32_t t20 = -472;

    t20 = (((x109&x110)*x111)==x112);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x113 = 112;
	volatile uint64_t x114 = 64648LLU;
	int16_t x116 = INT16_MIN;
	volatile int32_t t21 = 51249058;

    t21 = (((x113&x114)*x115)==x116);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x119 = 1LL;
	int16_t x120 = INT16_MIN;
	int32_t t22 = 374315;

    t22 = (((x117&x118)*x119)==x120);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x130 = INT32_MAX;
	uint8_t x131 = 1U;
	uint8_t x132 = 2U;
	int32_t t23 = -866;

    t23 = (((x129&x130)*x131)==x132);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x133 = -231LL;
	static volatile uint8_t x135 = 1U;
	volatile int32_t t24 = -180379706;

    t24 = (((x133&x134)*x135)==x136);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x138 = 937U;
	uint8_t x139 = UINT8_MAX;
	uint64_t x140 = 126069734731901077LLU;
	int32_t t25 = -138811979;

    t25 = (((x137&x138)*x139)==x140);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x141 = UINT64_MAX;
	uint64_t x142 = 2683401322793LLU;
	int16_t x143 = INT16_MIN;
	int8_t x144 = 1;
	volatile int32_t t26 = -2;

    t26 = (((x141&x142)*x143)==x144);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x150 = INT32_MAX;
	int32_t x151 = -1;
	volatile int16_t x152 = INT16_MIN;
	static volatile int32_t t27 = -16771;

    t27 = (((x149&x150)*x151)==x152);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x153 = INT16_MIN;
	static int8_t x154 = -56;
	int64_t x155 = -255LL;
	int8_t x156 = INT8_MIN;
	static int32_t t28 = 49;

    t28 = (((x153&x154)*x155)==x156);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x157 = INT8_MIN;
	volatile int64_t x159 = INT64_MAX;
	uint64_t x160 = UINT64_MAX;
	static volatile int32_t t29 = 6;

    t29 = (((x157&x158)*x159)==x160);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x162 = INT32_MIN;
	uint16_t x163 = 0U;
	uint64_t x164 = 1160487161648004LLU;

    t30 = (((x161&x162)*x163)==x164);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint16_t x169 = 1U;
	uint64_t x170 = 252682563471027059LLU;
	int8_t x171 = INT8_MIN;
	int16_t x172 = INT16_MIN;
	volatile int32_t t31 = -100;

    t31 = (((x169&x170)*x171)==x172);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x177 = UINT16_MAX;
	volatile uint16_t x178 = 1U;
	uint32_t x179 = UINT32_MAX;
	uint32_t x180 = UINT32_MAX;

    t32 = (((x177&x178)*x179)==x180);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x181 = 26U;
	uint64_t x183 = 347761637550545LLU;
	int8_t x184 = INT8_MIN;
	volatile int32_t t33 = -7629;

    t33 = (((x181&x182)*x183)==x184);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x185 = 7U;
	volatile uint16_t x186 = UINT16_MAX;
	volatile int16_t x188 = -1295;
	volatile int32_t t34 = 4;

    t34 = (((x185&x186)*x187)==x188);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x189 = -1;
	uint32_t x190 = 88U;
	int16_t x191 = -775;
	uint64_t x192 = UINT64_MAX;
	static volatile int32_t t35 = 314070;

    t35 = (((x189&x190)*x191)==x192);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x193 = 95956;
	uint64_t x196 = 3234095498647121720LLU;
	static int32_t t36 = 1;

    t36 = (((x193&x194)*x195)==x196);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x197 = 2828927684537LLU;
	int64_t x198 = 1111498021521010LL;
	uint16_t x199 = 31U;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t37 = 0;

    t37 = (((x197&x198)*x199)==x200);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x201 = -12LL;
	int8_t x202 = INT8_MIN;
	volatile int32_t x203 = -3511;
	static int32_t t38 = 8113877;

    t38 = (((x201&x202)*x203)==x204);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x205 = INT32_MIN;
	volatile int16_t x206 = 18;
	int32_t x207 = 8;
	int32_t x208 = 25;
	static volatile int32_t t39 = 0;

    t39 = (((x205&x206)*x207)==x208);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x213 = INT64_MAX;
	int64_t x214 = INT64_MIN;
	int32_t x215 = -1;
	int64_t x216 = -1LL;

    t40 = (((x213&x214)*x215)==x216);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x217 = UINT64_MAX;
	uint8_t x218 = 0U;
	uint8_t x219 = 122U;
	uint32_t x220 = 80U;
	int32_t t41 = 0;

    t41 = (((x217&x218)*x219)==x220);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x229 = INT16_MIN;
	static int8_t x230 = INT8_MIN;
	static int16_t x231 = 6342;
	int64_t x232 = INT64_MIN;
	volatile int32_t t42 = -230;

    t42 = (((x229&x230)*x231)==x232);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x233 = 103621054284205LLU;
	uint16_t x234 = UINT16_MAX;
	uint64_t x235 = 79259LLU;
	static volatile uint8_t x236 = 5U;
	static int32_t t43 = 48745;

    t43 = (((x233&x234)*x235)==x236);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x237 = UINT8_MAX;
	int16_t x238 = INT16_MIN;
	volatile int64_t x239 = -1LL;
	volatile int32_t t44 = 1;

    t44 = (((x237&x238)*x239)==x240);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x241 = 0;
	uint16_t x242 = 27U;
	uint64_t x243 = UINT64_MAX;
	uint8_t x244 = 67U;
	int32_t t45 = 0;

    t45 = (((x241&x242)*x243)==x244);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x245 = UINT16_MAX;
	uint32_t x248 = UINT32_MAX;

    t46 = (((x245&x246)*x247)==x248);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x249 = 1006U;
	int64_t x250 = INT64_MAX;
	int32_t t47 = 12317345;

    t47 = (((x249&x250)*x251)==x252);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x253 = INT8_MAX;
	int32_t x255 = 62819;
	int16_t x256 = -5;
	volatile int32_t t48 = 0;

    t48 = (((x253&x254)*x255)==x256);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x262 = 2;
	volatile uint64_t x263 = 570129460LLU;
	static int8_t x264 = INT8_MIN;

    t49 = (((x261&x262)*x263)==x264);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x269 = INT64_MAX;
	static volatile int8_t x270 = INT8_MAX;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = 236U;
	static volatile int32_t t50 = -1866435;

    t50 = (((x269&x270)*x271)==x272);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x273 = 19U;
	uint32_t x274 = 4174682U;
	int64_t x276 = -1LL;
	static int32_t t51 = -486;

    t51 = (((x273&x274)*x275)==x276);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x277 = INT64_MIN;
	static volatile int32_t x278 = INT32_MAX;
	int64_t x279 = INT64_MIN;
	volatile uint16_t x280 = UINT16_MAX;
	static volatile int32_t t52 = 42384121;

    t52 = (((x277&x278)*x279)==x280);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint16_t x285 = 6269U;
	int32_t x286 = INT32_MIN;
	uint32_t x288 = 15U;
	static int32_t t53 = 6970;

    t53 = (((x285&x286)*x287)==x288);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x289 = 1U;
	int16_t x292 = -100;
	static volatile int32_t t54 = 31051485;

    t54 = (((x289&x290)*x291)==x292);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x293 = INT64_MIN;
	volatile int64_t x294 = 255606257409916424LL;
	static volatile int64_t x295 = -6LL;
	static int32_t x296 = -5631;
	int32_t t55 = -1;

    t55 = (((x293&x294)*x295)==x296);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x297 = -1;
	int64_t x298 = 31LL;
	static uint64_t x299 = 768711673530157LLU;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t56 = -1452;

    t56 = (((x297&x298)*x299)==x300);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x302 = 1;
	uint64_t x303 = 58948649350321232LLU;
	volatile int32_t t57 = 5734;

    t57 = (((x301&x302)*x303)==x304);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x305 = INT64_MIN;
	static uint16_t x306 = 30565U;
	volatile int64_t x307 = INT64_MIN;
	static int32_t x308 = INT32_MIN;

    t58 = (((x305&x306)*x307)==x308);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x309 = -6943;
	int16_t x310 = INT16_MIN;
	uint32_t x311 = UINT32_MAX;
	uint16_t x312 = 3732U;
	int32_t t59 = -2;

    t59 = (((x309&x310)*x311)==x312);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x313 = INT16_MIN;
	uint8_t x315 = UINT8_MAX;
	int16_t x316 = INT16_MIN;
	int32_t t60 = -4;

    t60 = (((x313&x314)*x315)==x316);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x317 = -1;
	uint64_t x319 = UINT64_MAX;
	uint32_t x320 = 49047U;
	volatile int32_t t61 = -128628;

    t61 = (((x317&x318)*x319)==x320);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int8_t x321 = INT8_MAX;
	int16_t x322 = -1;
	uint32_t x323 = 5368U;
	uint32_t x324 = 4U;
	int32_t t62 = 125797;

    t62 = (((x321&x322)*x323)==x324);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x325 = 1U;
	int64_t x326 = INT64_MAX;
	int16_t x327 = -3458;
	int16_t x328 = 24;

    t63 = (((x325&x326)*x327)==x328);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x341 = 39U;
	volatile uint32_t x342 = 2U;
	int16_t x343 = INT16_MIN;
	uint16_t x344 = 57U;
	int32_t t64 = -25459964;

    t64 = (((x341&x342)*x343)==x344);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x345 = 89U;
	int16_t x346 = -4;
	volatile int8_t x347 = 2;
	volatile int64_t x348 = 20727294661401789LL;

    t65 = (((x345&x346)*x347)==x348);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x353 = UINT64_MAX;
	int8_t x354 = -1;
	uint64_t x355 = 36LLU;
	static uint64_t x356 = 15176963LLU;
	int32_t t66 = -50668;

    t66 = (((x353&x354)*x355)==x356);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x358 = INT8_MAX;
	volatile uint32_t x359 = 755961854U;
	static volatile int8_t x360 = -16;
	static volatile int32_t t67 = -632;

    t67 = (((x357&x358)*x359)==x360);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x361 = INT32_MIN;
	uint64_t x362 = 62119011076408094LLU;
	int16_t x363 = INT16_MIN;

    t68 = (((x361&x362)*x363)==x364);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x365 = 238261272597LLU;
	static volatile uint8_t x366 = 1U;
	static int64_t x367 = -6LL;
	volatile uint32_t x368 = 1883U;
	int32_t t69 = 39332;

    t69 = (((x365&x366)*x367)==x368);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x373 = UINT8_MAX;
	int64_t x374 = -6479LL;
	static uint8_t x375 = 1U;
	static int64_t x376 = 592174523426778668LL;

    t70 = (((x373&x374)*x375)==x376);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x377 = INT8_MIN;
	uint8_t x378 = UINT8_MAX;
	static int8_t x379 = INT8_MIN;
	uint32_t x380 = 1002826U;
	volatile int32_t t71 = 11101;

    t71 = (((x377&x378)*x379)==x380);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x385 = 1U;
	int8_t x386 = 0;
	volatile int64_t x387 = -1LL;
	static uint32_t x388 = UINT32_MAX;
	volatile int32_t t72 = 1966;

    t72 = (((x385&x386)*x387)==x388);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x389 = UINT32_MAX;
	int16_t x390 = INT16_MIN;
	int32_t t73 = -43128365;

    t73 = (((x389&x390)*x391)==x392);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x401 = 120U;
	volatile int16_t x402 = -1;
	uint16_t x403 = 499U;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t74 = 233870;

    t74 = (((x401&x402)*x403)==x404);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x406 = 48615307728638886LLU;
	int64_t x407 = INT64_MAX;
	uint16_t x408 = UINT16_MAX;
	int32_t t75 = 2438658;

    t75 = (((x405&x406)*x407)==x408);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x409 = INT64_MAX;
	uint64_t x411 = 263263426012LLU;
	volatile int16_t x412 = INT16_MIN;
	static volatile int32_t t76 = -37705;

    t76 = (((x409&x410)*x411)==x412);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x413 = 27U;
	volatile int32_t x416 = INT32_MIN;
	int32_t t77 = -9992421;

    t77 = (((x413&x414)*x415)==x416);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x417 = UINT32_MAX;
	volatile uint32_t x418 = 35U;
	int16_t x419 = INT16_MAX;
	int16_t x420 = INT16_MIN;
	int32_t t78 = -6980479;

    t78 = (((x417&x418)*x419)==x420);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x421 = INT64_MAX;
	uint64_t x422 = 494547LLU;
	uint64_t x423 = 8LLU;
	uint32_t x424 = 6462U;
	volatile int32_t t79 = -134806812;

    t79 = (((x421&x422)*x423)==x424);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x425 = 531399455700370LL;
	int8_t x427 = -1;
	volatile int8_t x428 = INT8_MAX;
	int32_t t80 = -512235;

    t80 = (((x425&x426)*x427)==x428);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x429 = 5560;
	volatile int64_t x430 = 79561LL;
	volatile int32_t x431 = INT32_MIN;
	static int32_t x432 = -1;

    t81 = (((x429&x430)*x431)==x432);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x434 = -17;
	int8_t x435 = INT8_MAX;
	static int64_t x436 = -1LL;
	int32_t t82 = -14082182;

    t82 = (((x433&x434)*x435)==x436);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x437 = -566;
	volatile uint16_t x438 = 203U;
	int16_t x439 = INT16_MIN;
	int32_t x440 = INT32_MAX;
	volatile int32_t t83 = -78;

    t83 = (((x437&x438)*x439)==x440);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x441 = -3;
	volatile int32_t x443 = -1309;
	volatile int8_t x444 = INT8_MAX;

    t84 = (((x441&x442)*x443)==x444);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x445 = -110LL;
	int32_t x446 = -94410;
	int8_t x447 = 10;
	int32_t x448 = -1;
	static volatile int32_t t85 = -526;

    t85 = (((x445&x446)*x447)==x448);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x457 = 37586U;
	volatile int8_t x459 = -44;
	int32_t t86 = 3733025;

    t86 = (((x457&x458)*x459)==x460);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x461 = -1;
	uint16_t x462 = UINT16_MAX;
	volatile int32_t t87 = -208;

    t87 = (((x461&x462)*x463)==x464);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x465 = 181337277U;
	uint32_t x466 = UINT32_MAX;
	int16_t x467 = INT16_MIN;
	uint8_t x468 = 10U;
	volatile int32_t t88 = -22808428;

    t88 = (((x465&x466)*x467)==x468);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x469 = 92893197U;
	uint16_t x470 = 36U;
	volatile int32_t x471 = 457;
	uint32_t x472 = 2049516U;
	volatile int32_t t89 = -1994;

    t89 = (((x469&x470)*x471)==x472);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x473 = 880654143032782359LLU;
	volatile uint8_t x474 = UINT8_MAX;
	uint16_t x475 = 23U;
	static int8_t x476 = INT8_MIN;
	static volatile int32_t t90 = -589589402;

    t90 = (((x473&x474)*x475)==x476);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x477 = INT16_MIN;
	uint8_t x478 = 5U;
	int8_t x479 = INT8_MAX;
	int32_t x480 = INT32_MIN;
	int32_t t91 = 32632060;

    t91 = (((x477&x478)*x479)==x480);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x482 = INT32_MAX;
	int8_t x483 = INT8_MIN;
	static int64_t x484 = INT64_MIN;
	static int32_t t92 = -40897;

    t92 = (((x481&x482)*x483)==x484);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x489 = 0;
	static int64_t x491 = INT64_MIN;
	int64_t x492 = 114745175350368534LL;
	volatile int32_t t93 = -5214;

    t93 = (((x489&x490)*x491)==x492);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x494 = 108U;
	static int32_t x495 = INT32_MIN;
	volatile int32_t t94 = -90475814;

    t94 = (((x493&x494)*x495)==x496);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x497 = INT16_MAX;
	volatile int8_t x498 = -38;
	volatile int64_t x499 = 110374233671130LL;
	static int32_t t95 = 6;

    t95 = (((x497&x498)*x499)==x500);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x501 = INT64_MIN;
	uint16_t x502 = UINT16_MAX;
	int8_t x503 = INT8_MAX;
	volatile int32_t t96 = -584;

    t96 = (((x501&x502)*x503)==x504);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x506 = UINT16_MAX;
	uint16_t x507 = 1660U;
	int32_t t97 = 1;

    t97 = (((x505&x506)*x507)==x508);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x509 = 1302860789159LL;
	volatile int32_t x511 = INT32_MIN;
	uint32_t x512 = 7419U;

    t98 = (((x509&x510)*x511)==x512);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x513 = INT32_MIN;
	static uint64_t x514 = 1679489510767LLU;
	int8_t x515 = INT8_MAX;
	int32_t x516 = INT32_MIN;

    t99 = (((x513&x514)*x515)==x516);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x517 = UINT32_MAX;
	int32_t x518 = 1988513;
	uint8_t x519 = 105U;
	uint64_t x520 = UINT64_MAX;
	int32_t t100 = -314777225;

    t100 = (((x517&x518)*x519)==x520);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x521 = -1;
	static int64_t x524 = INT64_MAX;
	static int32_t t101 = -1946;

    t101 = (((x521&x522)*x523)==x524);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x533 = -1390;
	uint32_t x534 = 2197U;
	int32_t x535 = INT32_MIN;
	static volatile int16_t x536 = 26;
	int32_t t102 = -467;

    t102 = (((x533&x534)*x535)==x536);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x538 = INT8_MIN;
	volatile int8_t x539 = 26;
	volatile int64_t x540 = 4LL;
	static int32_t t103 = 143657;

    t103 = (((x537&x538)*x539)==x540);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x541 = 0;
	uint16_t x542 = 43U;
	uint64_t x543 = 6LLU;
	volatile int64_t x544 = INT64_MAX;

    t104 = (((x541&x542)*x543)==x544);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x545 = UINT8_MAX;
	int32_t x546 = -1508449;
	int32_t x548 = INT32_MIN;
	int32_t t105 = -732651;

    t105 = (((x545&x546)*x547)==x548);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x549 = -406;
	uint32_t x550 = 343521U;
	int32_t x552 = -38;
	int32_t t106 = 13345647;

    t106 = (((x549&x550)*x551)==x552);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x553 = 87U;
	int16_t x554 = -1;
	uint64_t x555 = 156506020LLU;

    t107 = (((x553&x554)*x555)==x556);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x557 = 292U;
	uint16_t x558 = UINT16_MAX;
	static int16_t x560 = 2872;
	volatile int32_t t108 = 292791990;

    t108 = (((x557&x558)*x559)==x560);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x561 = 767102822916LLU;
	int8_t x563 = INT8_MAX;
	int16_t x564 = INT16_MAX;
	int32_t t109 = 22555;

    t109 = (((x561&x562)*x563)==x564);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x565 = -1;
	int16_t x566 = -6;
	int16_t x567 = INT16_MAX;
	static int16_t x568 = INT16_MIN;
	volatile int32_t t110 = -1;

    t110 = (((x565&x566)*x567)==x568);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x573 = INT32_MIN;
	volatile uint8_t x574 = UINT8_MAX;
	int64_t x575 = INT64_MAX;
	volatile int64_t x576 = INT64_MIN;
	int32_t t111 = 0;

    t111 = (((x573&x574)*x575)==x576);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x577 = INT64_MAX;
	static int32_t x579 = 1;
	volatile int32_t t112 = 45586;

    t112 = (((x577&x578)*x579)==x580);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x581 = INT64_MIN;
	volatile int16_t x582 = INT16_MAX;
	uint64_t x583 = 1175818657LLU;
	static int32_t t113 = -3250362;

    t113 = (((x581&x582)*x583)==x584);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x586 = UINT32_MAX;
	volatile uint16_t x587 = 18U;
	int16_t x588 = INT16_MAX;
	volatile int32_t t114 = -4;

    t114 = (((x585&x586)*x587)==x588);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x589 = -6;
	int8_t x590 = INT8_MIN;
	static int8_t x591 = INT8_MAX;
	volatile int32_t x592 = INT32_MIN;
	volatile int32_t t115 = -145940;

    t115 = (((x589&x590)*x591)==x592);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x593 = 3191U;
	int32_t x594 = 1;
	int16_t x595 = -905;
	volatile uint8_t x596 = 1U;
	static int32_t t116 = 2528371;

    t116 = (((x593&x594)*x595)==x596);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x597 = -1LL;
	int16_t x599 = INT16_MAX;
	int16_t x600 = INT16_MAX;
	int32_t t117 = 59;

    t117 = (((x597&x598)*x599)==x600);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x602 = 1LL;
	int64_t x603 = INT64_MAX;
	volatile uint32_t x604 = 85U;
	int32_t t118 = 452;

    t118 = (((x601&x602)*x603)==x604);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x605 = INT8_MIN;
	static int16_t x606 = INT16_MIN;
	int16_t x607 = INT16_MAX;
	static volatile int32_t t119 = -2854863;

    t119 = (((x605&x606)*x607)==x608);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x613 = INT64_MIN;
	int8_t x615 = 1;
	int32_t t120 = 7806;

    t120 = (((x613&x614)*x615)==x616);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x618 = INT64_MAX;
	static volatile int32_t x619 = INT32_MIN;
	uint64_t x620 = 71406877738247181LLU;

    t121 = (((x617&x618)*x619)==x620);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x621 = UINT16_MAX;
	uint64_t x622 = UINT64_MAX;
	volatile int16_t x623 = INT16_MAX;
	volatile int64_t x624 = INT64_MIN;
	volatile int32_t t122 = 975;

    t122 = (((x621&x622)*x623)==x624);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x625 = -1;
	int64_t x628 = INT64_MAX;
	static int32_t t123 = 430414;

    t123 = (((x625&x626)*x627)==x628);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x629 = INT16_MAX;
	static int64_t x630 = -1077023354LL;
	uint16_t x632 = 505U;

    t124 = (((x629&x630)*x631)==x632);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x637 = -1;
	volatile int16_t x639 = INT16_MIN;
	int64_t x640 = INT64_MIN;
	volatile int32_t t125 = 43;

    t125 = (((x637&x638)*x639)==x640);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x641 = 14585438U;
	uint8_t x642 = 32U;
	uint8_t x643 = UINT8_MAX;
	int8_t x644 = INT8_MIN;
	static volatile int32_t t126 = -1;

    t126 = (((x641&x642)*x643)==x644);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x645 = -59;
	int16_t x648 = INT16_MIN;
	volatile int32_t t127 = -13;

    t127 = (((x645&x646)*x647)==x648);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x649 = 6221U;
	volatile int32_t x650 = -1073687;
	volatile int16_t x651 = INT16_MIN;
	int32_t x652 = INT32_MIN;
	int32_t t128 = 0;

    t128 = (((x649&x650)*x651)==x652);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x653 = INT16_MIN;
	uint64_t x654 = UINT64_MAX;
	uint64_t x656 = 851367LLU;

    t129 = (((x653&x654)*x655)==x656);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x658 = INT16_MIN;
	int32_t x659 = INT32_MAX;
	static uint32_t x660 = 3331448U;
	volatile int32_t t130 = 46;

    t130 = (((x657&x658)*x659)==x660);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x665 = 106U;
	int64_t x666 = INT64_MIN;
	int64_t x667 = -1LL;
	volatile int32_t t131 = -446093;

    t131 = (((x665&x666)*x667)==x668);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x669 = UINT8_MAX;
	uint32_t x670 = 22912973U;
	int32_t x672 = INT32_MAX;
	int32_t t132 = 7550512;

    t132 = (((x669&x670)*x671)==x672);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x674 = INT64_MAX;
	int32_t t133 = -7;

    t133 = (((x673&x674)*x675)==x676);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x678 = UINT32_MAX;
	uint64_t x679 = 501771519637565LLU;
	int32_t x680 = -17;
	int32_t t134 = -330182847;

    t134 = (((x677&x678)*x679)==x680);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x681 = INT32_MAX;
	uint16_t x682 = 28U;
	int16_t x683 = INT16_MIN;
	int32_t x684 = -1;
	volatile int32_t t135 = 4;

    t135 = (((x681&x682)*x683)==x684);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x689 = 176217588342937LLU;
	uint8_t x691 = UINT8_MAX;
	uint8_t x692 = UINT8_MAX;
	int32_t t136 = -8;

    t136 = (((x689&x690)*x691)==x692);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int8_t x696 = INT8_MAX;
	volatile int32_t t137 = -182754183;

    t137 = (((x693&x694)*x695)==x696);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x710 = 3U;
	static int8_t x711 = 37;
	int32_t t138 = -49316;

    t138 = (((x709&x710)*x711)==x712);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x713 = 3054;
	volatile int16_t x714 = -1;
	int8_t x715 = INT8_MIN;
	static int32_t x716 = -4;
	int32_t t139 = -434645632;

    t139 = (((x713&x714)*x715)==x716);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x717 = 34;
	int64_t x718 = 46810139133028LL;
	int8_t x719 = INT8_MIN;

    t140 = (((x717&x718)*x719)==x720);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x721 = INT64_MAX;
	volatile int64_t x722 = 183LL;
	uint64_t x723 = 24971408LLU;
	static uint64_t x724 = UINT64_MAX;
	volatile int32_t t141 = 2837;

    t141 = (((x721&x722)*x723)==x724);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x729 = -133377970670LL;
	uint64_t x730 = UINT64_MAX;
	int8_t x731 = -8;
	int8_t x732 = INT8_MIN;
	static volatile int32_t t142 = 645;

    t142 = (((x729&x730)*x731)==x732);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x733 = 20U;
	volatile uint32_t x736 = 1724U;
	volatile int32_t t143 = -180;

    t143 = (((x733&x734)*x735)==x736);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x741 = INT64_MIN;
	int32_t x742 = 1206602;
	uint32_t x743 = UINT32_MAX;
	static volatile int32_t t144 = 307;

    t144 = (((x741&x742)*x743)==x744);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x745 = INT8_MAX;
	uint8_t x746 = 28U;
	int64_t x748 = 151730148LL;

    t145 = (((x745&x746)*x747)==x748);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x749 = 14U;
	static uint8_t x752 = UINT8_MAX;
	volatile int32_t t146 = 64;

    t146 = (((x749&x750)*x751)==x752);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x756 = 1;

    t147 = (((x753&x754)*x755)==x756);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x758 = 3U;
	int8_t x759 = -2;
	static int64_t x760 = -1LL;
	volatile int32_t t148 = 124833176;

    t148 = (((x757&x758)*x759)==x760);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x761 = 1380;
	volatile uint32_t x762 = 599572668U;
	volatile int8_t x763 = -3;
	uint16_t x764 = UINT16_MAX;
	int32_t t149 = -26511912;

    t149 = (((x761&x762)*x763)==x764);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x769 = INT64_MIN;
	int32_t x771 = INT32_MIN;
	volatile uint8_t x772 = 24U;
	int32_t t150 = -2434599;

    t150 = (((x769&x770)*x771)==x772);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x774 = -2LL;
	int64_t x775 = INT64_MIN;
	static uint16_t x776 = 15318U;
	volatile int32_t t151 = -1907592;

    t151 = (((x773&x774)*x775)==x776);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x778 = UINT16_MAX;
	static int32_t x779 = INT32_MAX;
	uint64_t x780 = 92426080527LLU;
	volatile int32_t t152 = -6336;

    t152 = (((x777&x778)*x779)==x780);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x781 = UINT16_MAX;
	uint32_t x782 = 178U;
	static int64_t x783 = 8694569992808412LL;
	static int8_t x784 = INT8_MIN;
	int32_t t153 = 160407800;

    t153 = (((x781&x782)*x783)==x784);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x785 = INT16_MIN;
	uint64_t x786 = UINT64_MAX;
	int32_t x787 = INT32_MIN;
	int32_t x788 = INT32_MIN;
	volatile int32_t t154 = -6489444;

    t154 = (((x785&x786)*x787)==x788);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x789 = INT8_MIN;
	int64_t x790 = -1LL;
	volatile int32_t x791 = -1;
	volatile int32_t t155 = 36570354;

    t155 = (((x789&x790)*x791)==x792);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x793 = 29732054780572LLU;
	uint8_t x795 = 0U;
	uint8_t x796 = 11U;

    t156 = (((x793&x794)*x795)==x796);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x797 = INT16_MIN;
	uint8_t x798 = 32U;
	int16_t x799 = -1;
	volatile uint32_t x800 = 320U;

    t157 = (((x797&x798)*x799)==x800);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x801 = 1U;
	volatile int16_t x802 = INT16_MIN;
	int64_t x803 = -1784254469745LL;
	volatile int32_t t158 = -1027;

    t158 = (((x801&x802)*x803)==x804);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x809 = 14;
	uint16_t x810 = 0U;
	int8_t x812 = -34;
	volatile int32_t t159 = 391444;

    t159 = (((x809&x810)*x811)==x812);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x831 = -1LL;
	int32_t t160 = -4188;

    t160 = (((x829&x830)*x831)==x832);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x833 = INT16_MIN;
	uint16_t x834 = 55U;
	static volatile int32_t x835 = -46;
	int8_t x836 = INT8_MIN;
	volatile int32_t t161 = -17366;

    t161 = (((x833&x834)*x835)==x836);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x837 = 7674U;
	static int8_t x838 = INT8_MIN;
	static int64_t x840 = INT64_MIN;
	volatile int32_t t162 = 324398;

    t162 = (((x837&x838)*x839)==x840);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x842 = INT32_MIN;
	int8_t x844 = INT8_MIN;
	volatile int32_t t163 = -957282973;

    t163 = (((x841&x842)*x843)==x844);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x845 = 3230183;
	int16_t x846 = INT16_MAX;
	int8_t x847 = 1;
	int32_t t164 = -5;

    t164 = (((x845&x846)*x847)==x848);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x850 = 53;
	volatile int32_t t165 = 92;

    t165 = (((x849&x850)*x851)==x852);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x853 = 12U;
	int32_t x854 = INT32_MIN;
	static int32_t x855 = 470965639;
	uint16_t x856 = 49U;
	int32_t t166 = 98;

    t166 = (((x853&x854)*x855)==x856);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int16_t x857 = INT16_MAX;
	static int16_t x858 = -329;
	int32_t t167 = -11414875;

    t167 = (((x857&x858)*x859)==x860);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint32_t x865 = 2012U;
	int8_t x866 = 26;
	uint64_t x867 = 1530LLU;
	int8_t x868 = INT8_MAX;
	volatile int32_t t168 = 640872;

    t168 = (((x865&x866)*x867)==x868);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x873 = -124;
	uint8_t x874 = UINT8_MAX;
	static int8_t x876 = INT8_MIN;

    t169 = (((x873&x874)*x875)==x876);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x881 = UINT16_MAX;
	uint16_t x882 = 1U;
	uint64_t x883 = UINT64_MAX;
	int32_t t170 = 3;

    t170 = (((x881&x882)*x883)==x884);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x885 = UINT32_MAX;
	int8_t x886 = INT8_MIN;
	volatile int32_t x887 = 50;
	uint16_t x888 = 6U;
	int32_t t171 = 455;

    t171 = (((x885&x886)*x887)==x888);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x889 = 126700;
	static volatile uint32_t x890 = UINT32_MAX;
	int64_t x892 = INT64_MIN;
	static volatile int32_t t172 = -11;

    t172 = (((x889&x890)*x891)==x892);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x893 = INT32_MAX;
	static uint32_t x894 = 10703U;
	int64_t x895 = 167778258LL;
	int64_t x896 = INT64_MAX;
	volatile int32_t t173 = -53078;

    t173 = (((x893&x894)*x895)==x896);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x897 = INT32_MAX;
	int64_t x898 = 1627878LL;
	static uint32_t x899 = 0U;
	static int32_t x900 = INT32_MAX;
	static volatile int32_t t174 = -219567159;

    t174 = (((x897&x898)*x899)==x900);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint64_t x901 = 462LLU;
	int16_t x902 = -1094;

    t175 = (((x901&x902)*x903)==x904);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x905 = INT16_MIN;
	uint16_t x907 = 26151U;

    t176 = (((x905&x906)*x907)==x908);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x909 = -8123037;
	static volatile int8_t x911 = 10;
	int32_t t177 = 923203;

    t177 = (((x909&x910)*x911)==x912);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x913 = 0U;
	int32_t x914 = -1;
	uint16_t x915 = 19U;
	int16_t x916 = -2;
	int32_t t178 = 1;

    t178 = (((x913&x914)*x915)==x916);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x917 = 0;
	volatile int32_t x918 = INT32_MIN;
	uint16_t x919 = UINT16_MAX;
	uint8_t x920 = UINT8_MAX;
	int32_t t179 = 60;

    t179 = (((x917&x918)*x919)==x920);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x921 = 217936458U;
	int64_t x922 = -1LL;
	int32_t x924 = -1;

    t180 = (((x921&x922)*x923)==x924);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x925 = INT8_MIN;
	int64_t x927 = -6LL;
	static int32_t t181 = -244;

    t181 = (((x925&x926)*x927)==x928);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x929 = 209;
	int32_t t182 = -5186;

    t182 = (((x929&x930)*x931)==x932);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x934 = -1;
	int8_t x936 = -1;

    t183 = (((x933&x934)*x935)==x936);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x937 = 88U;
	volatile uint32_t x939 = 11U;
	int32_t x940 = INT32_MIN;
	int32_t t184 = -457;

    t184 = (((x937&x938)*x939)==x940);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x949 = 1160952565571198260LL;
	volatile uint8_t x950 = 0U;
	int64_t x951 = -370164965590857873LL;

    t185 = (((x949&x950)*x951)==x952);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x958 = INT32_MAX;
	int16_t x959 = INT16_MIN;
	volatile int16_t x960 = -1;
	int32_t t186 = -37256;

    t186 = (((x957&x958)*x959)==x960);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x966 = -1;
	volatile uint32_t x967 = 15616U;
	static int16_t x968 = -88;
	int32_t t187 = -328434;

    t187 = (((x965&x966)*x967)==x968);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x969 = 189246U;
	int64_t x971 = 3776995226273613LL;
	volatile int32_t t188 = 59549;

    t188 = (((x969&x970)*x971)==x972);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x973 = INT8_MAX;
	volatile int8_t x974 = INT8_MIN;
	int16_t x975 = 265;
	int8_t x976 = 3;
	int32_t t189 = 8793;

    t189 = (((x973&x974)*x975)==x976);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x977 = 1U;
	uint8_t x978 = 34U;
	uint16_t x980 = 2870U;
	static volatile int32_t t190 = 189652;

    t190 = (((x977&x978)*x979)==x980);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x981 = INT8_MIN;
	static int16_t x982 = -1;
	static volatile int32_t x983 = 10;
	int16_t x984 = INT16_MIN;
	int32_t t191 = -7932;

    t191 = (((x981&x982)*x983)==x984);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x985 = 1592013291U;
	static uint64_t x987 = 2801LLU;
	uint8_t x988 = 29U;

    t192 = (((x985&x986)*x987)==x988);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x989 = INT16_MIN;
	uint16_t x991 = 27122U;
	volatile int8_t x992 = INT8_MIN;
	volatile int32_t t193 = 8135034;

    t193 = (((x989&x990)*x991)==x992);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x997 = 16U;
	int8_t x998 = 46;
	int64_t x999 = -1LL;
	int32_t x1000 = INT32_MAX;
	volatile int32_t t194 = 2;

    t194 = (((x997&x998)*x999)==x1000);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x1001 = 0;
	int64_t x1002 = INT64_MAX;
	uint32_t x1004 = 42U;
	int32_t t195 = -318;

    t195 = (((x1001&x1002)*x1003)==x1004);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1006 = -14652;
	int8_t x1007 = -1;
	int16_t x1008 = -225;

    t196 = (((x1005&x1006)*x1007)==x1008);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1013 = INT32_MAX;
	uint64_t x1014 = UINT64_MAX;
	int32_t t197 = 6;

    t197 = (((x1013&x1014)*x1015)==x1016);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1018 = -1LL;
	static volatile int16_t x1019 = -1;
	int64_t x1020 = INT64_MIN;

    t198 = (((x1017&x1018)*x1019)==x1020);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1021 = -29;
	static int16_t x1022 = -2252;
	volatile int16_t x1023 = -1;
	uint32_t x1024 = 28U;
	volatile int32_t t199 = -20151;

    t199 = (((x1021&x1022)*x1023)==x1024);

    if (t199 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

