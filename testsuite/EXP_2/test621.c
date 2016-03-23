
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

volatile int8_t x1 = INT8_MAX;
uint32_t x10 = 13U;
uint8_t x16 = 1U;
int8_t x17 = INT8_MAX;
static uint8_t x18 = 1U;
static int64_t x24 = 3246LL;
uint32_t t8 = 1873717325U;
uint16_t x48 = 1U;
int32_t x52 = INT32_MAX;
static volatile uint64_t t12 = 777LLU;
int8_t x62 = -2;
int16_t x63 = 1;
uint32_t x64 = 100204U;
int64_t t16 = -43095168LL;
volatile uint32_t x87 = 2541792U;
int64_t x90 = INT64_MAX;
int16_t x103 = -1;
int16_t x107 = INT16_MIN;
uint8_t x112 = 12U;
static volatile int64_t t23 = 5997293176946LL;
uint16_t x117 = 32U;
int32_t x118 = INT32_MIN;
static uint32_t x119 = UINT32_MAX;
uint8_t x123 = UINT8_MAX;
static int32_t x126 = -1;
int64_t t27 = 0LL;
static uint64_t x130 = 28558225911103897LLU;
uint8_t x132 = UINT8_MAX;
int32_t x137 = INT32_MAX;
volatile uint16_t x140 = 10U;
int64_t x141 = INT64_MIN;
volatile uint8_t x149 = UINT8_MAX;
uint16_t x170 = 1U;
int32_t x174 = INT32_MIN;
int64_t x181 = -1LL;
int8_t x183 = INT8_MIN;
uint64_t t38 = 104LLU;
int8_t x185 = INT8_MAX;
uint64_t x188 = 13442938338590LLU;
uint64_t t39 = 338655LLU;
int16_t x194 = -8;
volatile int16_t x198 = -76;
uint64_t x204 = 60LLU;
int64_t x207 = INT64_MAX;
int64_t x210 = INT64_MIN;
uint64_t t45 = 24799052LLU;
int32_t x221 = 463;
static volatile int64_t x229 = INT64_MAX;
static int64_t t48 = -214482536438810LL;
static uint64_t x252 = 78170350LLU;
static volatile int32_t t54 = 294;
static volatile int64_t t55 = 1143304599746606LL;
volatile int32_t t56 = 318;
int16_t x296 = INT16_MAX;
volatile int16_t x300 = INT16_MIN;
int32_t x311 = 280347418;
int64_t x312 = INT64_MIN;
volatile int64_t x316 = INT64_MIN;
int64_t x317 = -1079525LL;
static volatile int16_t x319 = 133;
static int8_t x327 = 34;
uint16_t x328 = UINT16_MAX;
int32_t x332 = 460251843;
static volatile int64_t t67 = 66145525879266LL;
int8_t x350 = INT8_MAX;
uint16_t x358 = 3094U;
int32_t x368 = INT32_MAX;
uint32_t x370 = 25U;
volatile uint64_t t75 = 500628998264LLU;
volatile int16_t x375 = -1;
uint64_t t79 = 52793LLU;
volatile uint64_t x392 = 417117260917527LLU;
volatile uint32_t x398 = 120606U;
uint16_t x399 = 239U;
int32_t x405 = 37095;
volatile int32_t t83 = 2752;
uint8_t x410 = UINT8_MAX;
volatile uint16_t x413 = 33U;
int64_t x415 = 23307116700000647LL;
int32_t x416 = INT32_MIN;
volatile uint16_t x420 = 3U;
int64_t t88 = -890407LL;
int8_t x435 = -1;
static volatile uint32_t x439 = 3692U;
int32_t x445 = INT32_MIN;
static int32_t x448 = INT32_MAX;
volatile int32_t x449 = -1;
volatile int16_t x461 = 3876;
static int64_t x481 = 1LL;
uint16_t x484 = 3704U;
uint32_t x488 = 109379566U;
volatile uint64_t x494 = 2139LLU;
uint32_t x495 = 3U;
uint64_t t100 = 1930949LLU;
int64_t x499 = INT64_MAX;
static int8_t x504 = INT8_MIN;
uint64_t x516 = UINT64_MAX;
static volatile uint64_t t104 = 431903228708LLU;
int8_t x518 = 0;
int32_t x520 = INT32_MIN;
volatile int32_t x522 = INT32_MAX;
uint8_t x526 = 0U;
int8_t x528 = 5;
volatile int16_t x531 = INT16_MIN;
int8_t x549 = 0;
static uint8_t x551 = UINT8_MAX;
int8_t x552 = 1;
volatile int32_t t112 = -4837739;
static volatile int16_t x556 = INT16_MAX;
static uint16_t x557 = UINT16_MAX;
uint64_t x559 = 2266168342LLU;
uint64_t x568 = UINT64_MAX;
int32_t x572 = INT32_MAX;
static int8_t x574 = -16;
uint64_t x579 = 36690864LLU;
volatile uint64_t t118 = 431878677LLU;
static int16_t x588 = -49;
volatile uint64_t t120 = 4LLU;
int64_t x594 = INT64_MIN;
uint64_t x596 = UINT64_MAX;
int64_t x603 = -26374LL;
volatile uint8_t x634 = 99U;
volatile uint64_t t132 = 2867395073LLU;
int8_t x642 = INT8_MIN;
uint16_t x652 = 231U;
static uint32_t x654 = UINT32_MAX;
uint32_t x658 = 13500418U;
int64_t x668 = INT64_MAX;
volatile int32_t x684 = INT32_MAX;
static int16_t x690 = -5130;
int64_t x703 = INT64_MAX;
int16_t x705 = INT16_MIN;
static int16_t x706 = INT16_MAX;
uint32_t x717 = 1246U;
int64_t x718 = -141709757118397958LL;
int32_t x720 = INT32_MIN;
int32_t x722 = 19288;
int8_t x727 = INT8_MIN;
uint8_t x743 = UINT8_MAX;
int8_t x754 = -1;
static int8_t x782 = 26;
volatile int32_t t155 = 8567644;
static uint8_t x788 = 9U;
volatile int32_t t156 = 14;
static uint16_t x791 = 41U;
int64_t x803 = -1LL;
static int64_t x808 = -1LL;
uint8_t x809 = 0U;
volatile int32_t x826 = INT32_MIN;
static int32_t t164 = -60;
static uint16_t x829 = 1U;
uint32_t t166 = 10942U;
static int16_t x839 = 3976;
int32_t x845 = -1;
int8_t x853 = INT8_MAX;
int16_t x855 = -1;
static int64_t x864 = INT64_MIN;
int64_t t172 = 2263834LL;
int32_t t173 = 8;
volatile int16_t x869 = 1;
int64_t x872 = -1LL;
int16_t x879 = 163;
int16_t x881 = -1;
static volatile int16_t x885 = INT16_MIN;
int16_t x891 = 50;
uint8_t x893 = 4U;
static int32_t t180 = -3;
int64_t x897 = INT64_MIN;
uint16_t x900 = UINT16_MAX;
static int64_t x904 = -13513934342205113LL;
volatile uint64_t t182 = 652556641058219733LLU;
volatile int8_t x915 = -2;
uint8_t x924 = UINT8_MAX;
static int64_t x930 = INT64_MAX;
uint64_t t189 = 9LLU;
volatile uint16_t x934 = 150U;
volatile uint32_t t190 = 3926U;
int32_t x941 = -1;
static int32_t t192 = 839;
volatile int64_t x959 = INT64_MIN;
int32_t x974 = -1;
volatile uint8_t x976 = 14U;
static int32_t t197 = -26;
int64_t t198 = 3516495737076433475LL;


void f0(void) {
    	int32_t x2 = -36;
	uint16_t x3 = 338U;
	int64_t x4 = -14070865186LL;
	volatile int64_t t0 = 74583727LL;

    t0 = ((x1*(x2/x3))%x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	volatile int64_t x6 = INT64_MIN;
	static int32_t x7 = INT32_MAX;
	int64_t x8 = INT64_MIN;
	int64_t t1 = -18569785686LL;

    t1 = ((x5*(x6/x7))%x8);

    if (t1 != 4294967298LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	uint32_t x11 = 470420701U;
	int64_t x12 = INT64_MIN;
	static volatile int64_t t2 = -6905529033459567LL;

    t2 = ((x9*(x10/x11))%x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = -3;
	volatile int16_t x14 = INT16_MAX;
	int64_t x15 = 15821LL;
	int64_t t3 = 16838179460828LL;

    t3 = ((x13*(x14/x15))%x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x19 = -1LL;
	volatile uint32_t x20 = 232956U;
	volatile int64_t t4 = 1LL;

    t4 = ((x17*(x18/x19))%x20);

    if (t4 != -127LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 14;
	uint8_t x22 = 3U;
	int16_t x23 = 1;
	int64_t t5 = 703485476094845108LL;

    t5 = ((x21*(x22/x23))%x24);

    if (t5 != 42LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -10LL;
	int32_t x26 = -1;
	volatile int64_t x27 = -1LL;
	volatile int16_t x28 = INT16_MAX;
	static int64_t t6 = 916866536132LL;

    t6 = ((x25*(x26/x27))%x28);

    if (t6 != -10LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	volatile uint16_t x30 = UINT16_MAX;
	int32_t x31 = -1;
	static int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 185;

    t7 = ((x29*(x30/x31))%x32);

    if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MIN;
	int16_t x34 = -2;
	uint8_t x35 = UINT8_MAX;
	uint32_t x36 = UINT32_MAX;

    t8 = ((x33*(x34/x35))%x36);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	volatile uint64_t x38 = 3917782545726LLU;
	static volatile int64_t x39 = INT64_MAX;
	static int32_t x40 = INT32_MIN;
	uint64_t t9 = 99LLU;

    t9 = ((x37*(x38/x39))%x40);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = -1;
	int32_t x42 = -1;
	uint32_t x43 = 3587U;
	volatile uint8_t x44 = 5U;
	volatile uint32_t t10 = 545896737U;

    t10 = ((x41*(x42/x43))%x44);

    if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 3941816LLU;
	int64_t x46 = INT64_MAX;
	uint32_t x47 = 4589837U;
	static uint64_t t11 = 3584625568LLU;

    t11 = ((x45*(x46/x47))%x48);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -1LL;
	static volatile uint64_t x50 = UINT64_MAX;
	uint16_t x51 = UINT16_MAX;

    t12 = ((x49*(x50/x51))%x52);

    if (t12 != 2147287040LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 7116481U;
	volatile int8_t x54 = -1;
	static int32_t x55 = INT32_MAX;
	static int16_t x56 = INT16_MIN;
	volatile uint32_t t13 = 14091U;

    t13 = ((x53*(x54/x55))%x56);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = 14319;
	uint32_t t14 = 1222938707U;

    t14 = ((x61*(x62/x63))%x64);

    if (t14 != 95014U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x65 = 1596U;
	static volatile int32_t x66 = -1;
	static uint16_t x67 = UINT16_MAX;
	volatile uint16_t x68 = UINT16_MAX;
	volatile int32_t t15 = -14262476;

    t15 = ((x65*(x66/x67))%x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MAX;
	int16_t x70 = 3;
	int64_t x71 = INT64_MIN;
	int32_t x72 = -1;

    t16 = ((x69*(x70/x71))%x72);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint8_t x77 = 14U;
	uint8_t x78 = 94U;
	int32_t x79 = -1;
	static int16_t x80 = INT16_MIN;
	volatile int32_t t17 = 0;

    t17 = ((x77*(x78/x79))%x80);

    if (t17 != -1316) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x85 = INT32_MAX;
	volatile int8_t x86 = INT8_MIN;
	uint64_t x88 = 43901496137284LLU;
	volatile uint64_t t18 = 42279059441005LLU;

    t18 = ((x85*(x86/x87))%x88);

    if (t18 != 2147481959LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x89 = INT32_MAX;
	static volatile int64_t x91 = INT64_MIN;
	volatile uint16_t x92 = 384U;
	int64_t t19 = -553LL;

    t19 = ((x89*(x90/x91))%x92);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x97 = 5121543923625LLU;
	int8_t x98 = INT8_MIN;
	uint64_t x99 = 8158165523282LLU;
	static volatile uint16_t x100 = 122U;
	uint64_t t20 = 192031704041543413LLU;

    t20 = ((x97*(x98/x99))%x100);

    if (t20 != 80LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x101 = -13;
	uint64_t x102 = 503686261702501523LLU;
	uint16_t x104 = 2U;
	uint64_t t21 = 907500154479191LLU;

    t21 = ((x101*(x102/x103))%x104);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MAX;
	int16_t x108 = INT16_MIN;
	static int32_t t22 = -11181;

    t22 = ((x105*(x106/x107))%x108);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x109 = -1;
	int64_t x110 = -2654112385912LL;
	int32_t x111 = -1;

    t23 = ((x109*(x110/x111))%x112);

    if (t23 != -4LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x113 = -1LL;
	int32_t x114 = -1;
	int64_t x115 = INT64_MIN;
	int32_t x116 = -90;
	int64_t t24 = 550353535824860993LL;

    t24 = ((x113*(x114/x115))%x116);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x120 = -1;
	uint32_t t25 = 4022U;

    t25 = ((x117*(x118/x119))%x120);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x121 = 4909;
	static int8_t x122 = INT8_MIN;
	int8_t x124 = INT8_MIN;
	int32_t t26 = -23;

    t26 = ((x121*(x122/x123))%x124);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x125 = 5U;
	int64_t x127 = -516689808859410LL;
	static int8_t x128 = INT8_MAX;

    t27 = ((x125*(x126/x127))%x128);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x129 = INT32_MIN;
	int32_t x131 = INT32_MIN;
	volatile uint64_t t28 = 122642987149191816LLU;

    t28 = ((x129*(x130/x131))%x132);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x138 = -1LL;
	static int32_t x139 = 467;
	volatile int64_t t29 = 14441923306LL;

    t29 = ((x137*(x138/x139))%x140);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x142 = INT8_MAX;
	int64_t x143 = INT64_MIN;
	int64_t x144 = -1LL;
	static int64_t t30 = 0LL;

    t30 = ((x141*(x142/x143))%x144);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x150 = 121424332LL;
	volatile int32_t x151 = INT32_MAX;
	uint64_t x152 = 1LLU;
	uint64_t t31 = 4LLU;

    t31 = ((x149*(x150/x151))%x152);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x153 = INT8_MIN;
	int16_t x154 = -2;
	static volatile uint64_t x155 = 11591LLU;
	static int64_t x156 = INT64_MIN;
	volatile uint64_t t32 = 5365057468452LLU;

    t32 = ((x153*(x154/x155))%x156);

    if (t32 != 9019663707855136256LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int32_t x157 = INT32_MIN;
	static uint64_t x158 = UINT64_MAX;
	static uint32_t x159 = UINT32_MAX;
	int8_t x160 = -1;
	volatile uint64_t t33 = 18074200468821LLU;

    t33 = ((x157*(x158/x159))%x160);

    if (t33 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x161 = INT16_MAX;
	int32_t x162 = -135;
	static volatile int8_t x163 = INT8_MIN;
	uint64_t x164 = 1158551782480LLU;
	uint64_t t34 = 6985448347856389LLU;

    t34 = ((x161*(x162/x163))%x164);

    if (t34 != 32767LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x165 = -9LL;
	static int8_t x166 = -10;
	int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MIN;
	int64_t t35 = 3834LL;

    t35 = ((x165*(x166/x167))%x168);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x169 = -1;
	volatile uint16_t x171 = 2U;
	int16_t x172 = -1;
	volatile int32_t t36 = -78355;

    t36 = ((x169*(x170/x171))%x172);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x173 = 1U;
	int16_t x175 = 850;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t37 = 50043287LLU;

    t37 = ((x173*(x174/x175))%x176);

    if (t37 != 18446744073707025165LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x182 = 230288404291475815LLU;
	uint16_t x184 = UINT16_MAX;

    t38 = ((x181*(x182/x183))%x184);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x186 = INT64_MIN;
	int32_t x187 = 27680;

    t39 = ((x185*(x186/x187))%x188);

    if (t39 != 8164851160506LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x189 = INT64_MIN;
	int64_t x190 = -952344897224466188LL;
	uint64_t x191 = UINT64_MAX;
	volatile int32_t x192 = INT32_MIN;
	static volatile uint64_t t40 = 687LLU;

    t40 = ((x189*(x190/x191))%x192);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x193 = INT8_MIN;
	uint32_t x195 = 474923875U;
	int16_t x196 = INT16_MIN;
	uint32_t t41 = 747648U;

    t41 = ((x193*(x194/x195))%x196);

    if (t41 != 31616U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x197 = 2U;
	uint64_t x199 = UINT64_MAX;
	uint8_t x200 = 12U;
	volatile uint64_t t42 = 9923432060274LLU;

    t42 = ((x197*(x198/x199))%x200);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x201 = 30921832033954LLU;
	int16_t x202 = INT16_MIN;
	int8_t x203 = -10;
	volatile uint64_t t43 = 245820228285593948LLU;

    t43 = ((x201*(x202/x203))%x204);

    if (t43 != 24LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x205 = UINT16_MAX;
	uint64_t x206 = UINT64_MAX;
	int64_t x208 = -187032216219LL;
	volatile uint64_t t44 = 1760632985LLU;

    t44 = ((x205*(x206/x207))%x208);

    if (t44 != 131070LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x209 = 4529126405902LLU;
	int32_t x211 = 15953;
	int32_t x212 = INT32_MAX;

    t45 = ((x209*(x210/x211))%x212);

    if (t45 != 463387952LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x217 = INT8_MIN;
	uint16_t x218 = 6U;
	int16_t x219 = INT16_MAX;
	int64_t x220 = 260962243303138608LL;
	int64_t t46 = -193214880331301LL;

    t46 = ((x217*(x218/x219))%x220);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x222 = UINT8_MAX;
	uint8_t x223 = 50U;
	int64_t x224 = INT64_MAX;
	volatile int64_t t47 = 3947139171539523LL;

    t47 = ((x221*(x222/x223))%x224);

    if (t47 != 2315LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x230 = -1;
	int32_t x231 = -912556735;
	volatile int16_t x232 = -1;

    t48 = ((x229*(x230/x231))%x232);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x249 = INT8_MIN;
	volatile uint16_t x250 = UINT16_MAX;
	int16_t x251 = -1;
	uint64_t t49 = 12680449327652LLU;

    t49 = ((x249*(x250/x251))%x252);

    if (t49 != 8388480LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x253 = INT64_MAX;
	static volatile uint32_t x254 = 0U;
	int64_t x255 = -4893LL;
	int16_t x256 = INT16_MAX;
	volatile int64_t t50 = -87143LL;

    t50 = ((x253*(x254/x255))%x256);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x257 = -1LL;
	volatile int32_t x258 = INT32_MIN;
	static int32_t x259 = 127620271;
	int8_t x260 = INT8_MAX;
	volatile int64_t t51 = -647LL;

    t51 = ((x257*(x258/x259))%x260);

    if (t51 != 16LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x261 = -1;
	uint32_t x262 = 67582617U;
	volatile uint64_t x263 = 39733LLU;
	uint64_t x264 = 11LLU;
	volatile uint64_t t52 = 176586LLU;

    t52 = ((x261*(x262/x263))%x264);

    if (t52 != 10LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x265 = 53604650;
	int32_t x266 = -1;
	static uint8_t x267 = UINT8_MAX;
	int8_t x268 = INT8_MAX;
	volatile int32_t t53 = -1;

    t53 = ((x265*(x266/x267))%x268);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x281 = INT32_MIN;
	int32_t x282 = -1;
	volatile int32_t x283 = INT32_MAX;
	static int16_t x284 = 6416;

    t54 = ((x281*(x282/x283))%x284);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x285 = INT8_MIN;
	volatile int8_t x286 = -1;
	volatile int16_t x287 = INT16_MIN;
	int64_t x288 = INT64_MIN;

    t55 = ((x285*(x286/x287))%x288);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x289 = 1U;
	volatile int8_t x290 = INT8_MAX;
	uint8_t x291 = 3U;
	uint16_t x292 = 30U;

    t56 = ((x289*(x290/x291))%x292);

    if (t56 != 12) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x293 = UINT64_MAX;
	static uint16_t x294 = 1965U;
	int8_t x295 = 14;
	volatile uint64_t t57 = 6347LLU;

    t57 = ((x293*(x294/x295))%x296);

    if (t57 != 32643LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x297 = 967LL;
	uint64_t x298 = UINT64_MAX;
	uint32_t x299 = 3U;
	volatile uint64_t t58 = 30826721624129LLU;

    t58 = ((x297*(x298/x299))%x300);

    if (t58 != 6148914691236516883LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x305 = 96036424278656LL;
	static int16_t x306 = INT16_MIN;
	volatile uint16_t x307 = 26U;
	uint64_t x308 = 111LLU;
	uint64_t t59 = 6630941802455805463LLU;

    t59 = ((x305*(x306/x307))%x308);

    if (t59 != 103LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x309 = 10988324U;
	uint32_t x310 = 414U;
	static volatile int64_t t60 = -9056583LL;

    t60 = ((x309*(x310/x311))%x312);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x313 = 205237LLU;
	int16_t x314 = 5;
	uint32_t x315 = UINT32_MAX;
	uint64_t t61 = 0LLU;

    t61 = ((x313*(x314/x315))%x316);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x318 = UINT8_MAX;
	int8_t x320 = INT8_MIN;
	int64_t t62 = -532825706446496803LL;

    t62 = ((x317*(x318/x319))%x320);

    if (t62 != -101LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x321 = UINT64_MAX;
	static int64_t x322 = -1LL;
	volatile int16_t x323 = -1;
	int16_t x324 = 2;
	uint64_t t63 = 60796956197863LLU;

    t63 = ((x321*(x322/x323))%x324);

    if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x325 = -1;
	static uint16_t x326 = UINT16_MAX;
	volatile int32_t t64 = 0;

    t64 = ((x325*(x326/x327))%x328);

    if (t64 != -1927) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x329 = -1;
	int32_t x330 = -20;
	volatile uint32_t x331 = 27342U;
	static volatile uint32_t t65 = 47077652U;

    t65 = ((x329*(x330/x331))%x332);

    if (t65 != 152543626U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x333 = 12341LLU;
	int32_t x334 = -1;
	static volatile int8_t x335 = -2;
	volatile uint64_t x336 = 5074298076857991LLU;
	volatile uint64_t t66 = 263594434403318579LLU;

    t66 = ((x333*(x334/x335))%x336);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint16_t x337 = UINT16_MAX;
	uint8_t x338 = UINT8_MAX;
	int64_t x339 = INT64_MAX;
	volatile int16_t x340 = INT16_MIN;

    t67 = ((x337*(x338/x339))%x340);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x341 = INT32_MIN;
	int8_t x342 = INT8_MAX;
	static int16_t x343 = -454;
	uint32_t x344 = 19998U;
	static volatile uint32_t t68 = 55198U;

    t68 = ((x341*(x342/x343))%x344);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x345 = INT8_MIN;
	static uint64_t x346 = UINT64_MAX;
	int16_t x347 = INT16_MIN;
	uint8_t x348 = 1U;
	uint64_t t69 = 1827091952LLU;

    t69 = ((x345*(x346/x347))%x348);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x349 = 9665160LLU;
	static int8_t x351 = -1;
	int32_t x352 = 803474449;
	uint64_t t70 = 47903193LLU;

    t70 = ((x349*(x350/x351))%x352);

    if (t70 != 725902113LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x353 = 7U;
	int64_t x354 = -1LL;
	volatile int8_t x355 = -1;
	int16_t x356 = INT16_MAX;
	int64_t t71 = -8068287LL;

    t71 = ((x353*(x354/x355))%x356);

    if (t71 != 7LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x357 = INT32_MAX;
	uint64_t x359 = 1319196075659644LLU;
	volatile int8_t x360 = 26;
	volatile uint64_t t72 = 875LLU;

    t72 = ((x357*(x358/x359))%x360);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint16_t x361 = 907U;
	volatile int8_t x362 = -1;
	int64_t x363 = INT64_MIN;
	int64_t x364 = -237606652850LL;
	volatile int64_t t73 = 7261LL;

    t73 = ((x361*(x362/x363))%x364);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x365 = 16880;
	static uint32_t x366 = 53205065U;
	uint64_t x367 = 38436LLU;
	uint64_t t74 = 16626767683761LLU;

    t74 = ((x365*(x366/x367))%x368);

    if (t74 != 23361920LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x369 = -1165;
	static volatile int64_t x371 = INT64_MAX;
	uint64_t x372 = 4657373825137251LLU;

    t75 = ((x369*(x370/x371))%x372);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x373 = INT64_MAX;
	int32_t x374 = -1;
	volatile int64_t x376 = 1159953674872LL;
	volatile int64_t t76 = 2613796622309LL;

    t76 = ((x373*(x374/x375))%x376);

    if (t76 != 391110067807LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x377 = INT16_MIN;
	int64_t x378 = 0LL;
	static int32_t x379 = -1;
	volatile int8_t x380 = 59;
	volatile int64_t t77 = 100LL;

    t77 = ((x377*(x378/x379))%x380);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x381 = UINT16_MAX;
	uint32_t x382 = 3U;
	int32_t x383 = INT32_MIN;
	int8_t x384 = -1;
	volatile uint32_t t78 = 8355489U;

    t78 = ((x381*(x382/x383))%x384);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x385 = UINT64_MAX;
	volatile int64_t x386 = 82LL;
	volatile int16_t x387 = INT16_MIN;
	static int8_t x388 = -1;

    t79 = ((x385*(x386/x387))%x388);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x389 = INT8_MAX;
	int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MIN;
	uint64_t t80 = 1793LLU;

    t80 = ((x389*(x390/x391))%x392);

    if (t80 != 545460846592LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x397 = UINT64_MAX;
	uint32_t x400 = 4089020U;
	static uint64_t t81 = 2031613073255665906LLU;

    t81 = ((x397*(x398/x399))%x400);

    if (t81 != 3797332LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x401 = 171U;
	int16_t x402 = INT16_MIN;
	int16_t x403 = -63;
	volatile int16_t x404 = 10;
	static volatile int32_t t82 = 312;

    t82 = ((x401*(x402/x403))%x404);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x406 = INT16_MIN;
	uint8_t x407 = UINT8_MAX;
	static int32_t x408 = -1;

    t83 = ((x405*(x406/x407))%x408);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x409 = UINT16_MAX;
	int32_t x411 = INT32_MIN;
	static int64_t x412 = -90706008LL;
	volatile int64_t t84 = 1129183336830641331LL;

    t84 = ((x409*(x410/x411))%x412);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x414 = 45U;
	int64_t t85 = -12LL;

    t85 = ((x413*(x414/x415))%x416);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x417 = 93592279333485LLU;
	volatile int16_t x418 = INT16_MIN;
	uint64_t x419 = 1945802248068768LLU;
	static volatile uint64_t t86 = 17490365647054457LLU;

    t86 = ((x417*(x418/x419))%x420);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x421 = 1;
	static int8_t x422 = INT8_MIN;
	uint32_t x423 = 9323991U;
	static volatile int16_t x424 = INT16_MAX;
	volatile uint32_t t87 = 34573U;

    t87 = ((x421*(x422/x423))%x424);

    if (t87 != 460U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x429 = INT32_MIN;
	static int64_t x430 = INT64_MIN;
	static uint32_t x431 = UINT32_MAX;
	uint16_t x432 = 9964U;

    t88 = ((x429*(x430/x431))%x432);

    if (t88 != 2932LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x433 = 11605U;
	volatile uint64_t x434 = UINT64_MAX;
	volatile uint8_t x436 = UINT8_MAX;
	volatile uint64_t t89 = 3446LLU;

    t89 = ((x433*(x434/x435))%x436);

    if (t89 != 130LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x437 = 0;
	volatile uint16_t x438 = 9U;
	int8_t x440 = INT8_MIN;
	uint32_t t90 = 234372906U;

    t90 = ((x437*(x438/x439))%x440);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x441 = -11;
	static uint16_t x442 = UINT16_MAX;
	int32_t x443 = INT32_MAX;
	int16_t x444 = -1;
	volatile int32_t t91 = 284894;

    t91 = ((x441*(x442/x443))%x444);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x446 = UINT8_MAX;
	volatile uint16_t x447 = UINT16_MAX;
	volatile int32_t t92 = -109818;

    t92 = ((x445*(x446/x447))%x448);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x450 = INT64_MIN;
	static uint16_t x451 = 3U;
	static uint16_t x452 = UINT16_MAX;
	int64_t t93 = 21542LL;

    t93 = ((x449*(x450/x451))%x452);

    if (t93 != 10922LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x453 = -1;
	volatile int16_t x454 = -1;
	uint64_t x455 = UINT64_MAX;
	static int16_t x456 = INT16_MIN;
	static volatile uint64_t t94 = 6835393LLU;

    t94 = ((x453*(x454/x455))%x456);

    if (t94 != 32767LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x462 = 3U;
	int8_t x463 = INT8_MAX;
	volatile int32_t x464 = -183;
	uint32_t t95 = 17884U;

    t95 = ((x461*(x462/x463))%x464);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x473 = -1;
	volatile int16_t x474 = -156;
	int16_t x475 = INT16_MIN;
	int16_t x476 = INT16_MAX;
	volatile int32_t t96 = -482173551;

    t96 = ((x473*(x474/x475))%x476);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x477 = 4;
	uint8_t x478 = 23U;
	uint64_t x479 = UINT64_MAX;
	int64_t x480 = -1LL;
	volatile uint64_t t97 = 116571621LLU;

    t97 = ((x477*(x478/x479))%x480);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x482 = -8;
	uint32_t x483 = 1347086465U;
	int64_t t98 = 3103463835521327107LL;

    t98 = ((x481*(x482/x483))%x484);

    if (t98 != 3LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x485 = INT16_MIN;
	uint64_t x486 = 603996LLU;
	int16_t x487 = INT16_MIN;
	uint64_t t99 = 1804706000685549786LLU;

    t99 = ((x485*(x486/x487))%x488);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x493 = 3U;
	int32_t x496 = -1;

    t100 = ((x493*(x494/x495))%x496);

    if (t100 != 2139LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x497 = 2U;
	static uint8_t x498 = 4U;
	uint32_t x500 = 29075U;
	int64_t t101 = 3279971LL;

    t101 = ((x497*(x498/x499))%x500);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x501 = INT32_MIN;
	uint64_t x502 = 49056354602981374LLU;
	static volatile uint64_t x503 = 1582971979128994051LLU;
	volatile uint64_t t102 = 77901LLU;

    t102 = ((x501*(x502/x503))%x504);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x509 = 25U;
	uint32_t x510 = 11U;
	int64_t x511 = INT64_MAX;
	volatile int16_t x512 = INT16_MAX;
	volatile int64_t t103 = -16770541LL;

    t103 = ((x509*(x510/x511))%x512);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x513 = -1;
	int64_t x514 = INT64_MAX;
	uint64_t x515 = UINT64_MAX;

    t104 = ((x513*(x514/x515))%x516);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x517 = 4733LL;
	int16_t x519 = INT16_MAX;
	int64_t t105 = -991849594566003LL;

    t105 = ((x517*(x518/x519))%x520);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int16_t x521 = -1;
	volatile int16_t x523 = INT16_MIN;
	int64_t x524 = INT64_MAX;
	volatile int64_t t106 = 240667844346412LL;

    t106 = ((x521*(x522/x523))%x524);

    if (t106 != 65535LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x525 = -86LL;
	int16_t x527 = -1;
	int64_t t107 = -758540LL;

    t107 = ((x525*(x526/x527))%x528);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x529 = -308;
	static int32_t x530 = INT32_MIN;
	int64_t x532 = -1LL;
	int64_t t108 = 492LL;

    t108 = ((x529*(x530/x531))%x532);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x533 = UINT16_MAX;
	uint16_t x534 = 0U;
	int32_t x535 = -1;
	uint32_t x536 = 20760572U;
	static uint32_t t109 = 707U;

    t109 = ((x533*(x534/x535))%x536);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int16_t x537 = INT16_MIN;
	static int16_t x538 = 5;
	int16_t x539 = INT16_MIN;
	int8_t x540 = -1;
	volatile int32_t t110 = 7441627;

    t110 = ((x537*(x538/x539))%x540);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x541 = 1U;
	int16_t x542 = INT16_MIN;
	static int8_t x543 = INT8_MIN;
	int8_t x544 = INT8_MAX;
	volatile int32_t t111 = 16168359;

    t111 = ((x541*(x542/x543))%x544);

    if (t111 != 2) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x550 = -1;

    t112 = ((x549*(x550/x551))%x552);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x553 = 992959620477455263LLU;
	int32_t x554 = 443;
	int32_t x555 = -1;
	uint64_t t113 = 869289194395368722LLU;

    t113 = ((x553*(x554/x555))%x556);

    if (t113 != 6622LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x558 = -1;
	int64_t x560 = INT64_MIN;
	volatile uint64_t t114 = 2664128LLU;

    t114 = ((x557*(x558/x559))%x560);

    if (t114 != 533458768465515LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x565 = UINT64_MAX;
	int16_t x566 = -1;
	static int8_t x567 = INT8_MIN;
	volatile uint64_t t115 = 6138323622LLU;

    t115 = ((x565*(x566/x567))%x568);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x569 = INT64_MAX;
	uint16_t x570 = 719U;
	volatile int64_t x571 = 12797LL;
	int64_t t116 = 127LL;

    t116 = ((x569*(x570/x571))%x572);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x573 = 24U;
	volatile int8_t x575 = INT8_MAX;
	static volatile uint8_t x576 = 12U;
	int32_t t117 = 3673;

    t117 = ((x573*(x574/x575))%x576);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x577 = 1927437052LL;
	volatile uint16_t x578 = UINT16_MAX;
	int64_t x580 = INT64_MIN;

    t118 = ((x577*(x578/x579))%x580);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x581 = 39517612999LL;
	static uint32_t x582 = UINT32_MAX;
	volatile int8_t x583 = -1;
	int32_t x584 = INT32_MIN;
	volatile int64_t t119 = -14218549408782770LL;

    t119 = ((x581*(x582/x583))%x584);

    if (t119 != 862907335LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x585 = UINT8_MAX;
	int8_t x586 = INT8_MIN;
	static uint64_t x587 = 459587423699674LLU;

    t120 = ((x585*(x586/x587))%x588);

    if (t120 != 10234935LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x589 = INT8_MIN;
	uint8_t x590 = 61U;
	int32_t x591 = -1;
	volatile uint64_t x592 = 370870518LLU;
	volatile uint64_t t121 = 326507600737844LLU;

    t121 = ((x589*(x590/x591))%x592);

    if (t121 != 7808LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x593 = 6U;
	uint16_t x595 = UINT16_MAX;
	uint64_t t122 = 8882929009384703125LLU;

    t122 = ((x593*(x594/x595))%x596);

    if (t122 != 18445899635894321152LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x597 = INT16_MIN;
	uint64_t x598 = UINT64_MAX;
	volatile uint8_t x599 = 3U;
	uint64_t x600 = 104688861622527LLU;
	volatile uint64_t t123 = 388517508LLU;

    t123 = ((x597*(x598/x599))%x600);

    if (t123 != 14403837404783LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x601 = UINT64_MAX;
	uint16_t x602 = 13U;
	volatile int64_t x604 = -1LL;
	uint64_t t124 = 149385506958LLU;

    t124 = ((x601*(x602/x603))%x604);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x605 = 70U;
	int32_t x606 = INT32_MAX;
	uint64_t x607 = UINT64_MAX;
	uint32_t x608 = 1865880692U;
	uint64_t t125 = 56103200LLU;

    t125 = ((x605*(x606/x607))%x608);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x609 = INT8_MIN;
	uint8_t x610 = 2U;
	uint64_t x611 = 4093LLU;
	int32_t x612 = 4;
	uint64_t t126 = 6420728348578605LLU;

    t126 = ((x609*(x610/x611))%x612);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x613 = -3;
	int8_t x614 = INT8_MIN;
	volatile int8_t x615 = INT8_MAX;
	uint8_t x616 = UINT8_MAX;
	int32_t t127 = -29;

    t127 = ((x613*(x614/x615))%x616);

    if (t127 != 3) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x621 = 421LLU;
	volatile uint64_t x622 = 38549933344LLU;
	int8_t x623 = INT8_MAX;
	volatile uint64_t x624 = 7968LLU;
	static volatile uint64_t t128 = 3758651212909LLU;

    t128 = ((x621*(x622/x623))%x624);

    if (t128 != 2134LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x625 = -1;
	volatile int16_t x626 = INT16_MIN;
	int32_t x627 = -58419993;
	int64_t x628 = 19LL;
	int64_t t129 = 761776609075713729LL;

    t129 = ((x625*(x626/x627))%x628);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x629 = -1;
	uint16_t x630 = 143U;
	int8_t x631 = 1;
	static uint32_t x632 = UINT32_MAX;
	volatile uint32_t t130 = 0U;

    t130 = ((x629*(x630/x631))%x632);

    if (t130 != 4294967153U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x633 = INT16_MIN;
	static int32_t x635 = 530639263;
	uint8_t x636 = UINT8_MAX;
	int32_t t131 = -62495190;

    t131 = ((x633*(x634/x635))%x636);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x637 = 23119U;
	volatile uint64_t x638 = UINT64_MAX;
	uint8_t x639 = 49U;
	uint32_t x640 = 122U;

    t132 = ((x637*(x638/x639))%x640);

    if (t132 != 28LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x641 = INT8_MIN;
	uint64_t x643 = 83651499935800205LLU;
	uint64_t x644 = 29LLU;
	uint64_t t133 = 247247936410859LLU;

    t133 = ((x641*(x642/x643))%x644);

    if (t133 != 23LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x649 = INT64_MIN;
	int64_t x650 = INT64_MAX;
	static uint64_t x651 = 143180401469189453LLU;
	volatile uint64_t t134 = 642LLU;

    t134 = ((x649*(x650/x651))%x652);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x653 = 191U;
	int32_t x655 = INT32_MIN;
	int16_t x656 = -1;
	static volatile uint32_t t135 = 4600225U;

    t135 = ((x653*(x654/x655))%x656);

    if (t135 != 191U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x657 = UINT8_MAX;
	volatile int32_t x659 = 3;
	int64_t x660 = 111LL;
	int64_t t136 = -3414887LL;

    t136 = ((x657*(x658/x659))%x660);

    if (t136 != 18LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x661 = UINT16_MAX;
	volatile uint8_t x662 = 7U;
	int32_t x663 = -923;
	int8_t x664 = INT8_MIN;
	volatile int32_t t137 = 310594582;

    t137 = ((x661*(x662/x663))%x664);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x665 = -1;
	volatile uint64_t x666 = 101LLU;
	int64_t x667 = 1434514146317LL;
	uint64_t t138 = 11708826191LLU;

    t138 = ((x665*(x666/x667))%x668);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x673 = 1260U;
	static int16_t x674 = INT16_MAX;
	static volatile int32_t x675 = -572758;
	int16_t x676 = -1;
	volatile uint32_t t139 = 6470147U;

    t139 = ((x673*(x674/x675))%x676);

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x681 = 661U;
	static int64_t x682 = -211675LL;
	uint32_t x683 = UINT32_MAX;
	int64_t t140 = -931731LL;

    t140 = ((x681*(x682/x683))%x684);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x685 = -1LL;
	int16_t x686 = -52;
	uint64_t x687 = 564094201253LLU;
	int8_t x688 = -1;
	uint64_t t141 = 19500708LLU;

    t141 = ((x685*(x686/x687))%x688);

    if (t141 != 18446744073676850085LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x689 = 0;
	int8_t x691 = -1;
	int8_t x692 = -1;
	int32_t t142 = -5;

    t142 = ((x689*(x690/x691))%x692);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x693 = -46;
	static uint8_t x694 = 76U;
	int16_t x695 = INT16_MAX;
	int8_t x696 = INT8_MIN;
	int32_t t143 = -2419056;

    t143 = ((x693*(x694/x695))%x696);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x701 = INT8_MAX;
	volatile uint32_t x702 = 493164934U;
	volatile int64_t x704 = -1LL;
	volatile int64_t t144 = -61LL;

    t144 = ((x701*(x702/x703))%x704);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x707 = -6;
	static volatile int16_t x708 = -2277;
	volatile int32_t t145 = 3202516;

    t145 = ((x705*(x706/x707))%x708);

    if (t145 != 1172) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x719 = -560675592726772665LL;
	volatile int64_t t146 = 6650490488931LL;

    t146 = ((x717*(x718/x719))%x720);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x721 = 117U;
	volatile uint8_t x723 = 29U;
	static int64_t x724 = -10058818887533378LL;
	volatile int64_t t147 = -12412298523223LL;

    t147 = ((x721*(x722/x723))%x724);

    if (t147 != 77805LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x725 = -133442694LL;
	volatile uint32_t x726 = 2655195U;
	int32_t x728 = INT32_MIN;
	volatile int64_t t148 = 759602187158043LL;

    t148 = ((x725*(x726/x727))%x728);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x729 = -892;
	uint64_t x730 = 1734012196263852LLU;
	uint32_t x731 = 29333436U;
	int8_t x732 = -11;
	uint64_t t149 = 12639339886899LLU;

    t149 = ((x729*(x730/x731))%x732);

    if (t149 != 18446744020980001876LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x733 = UINT8_MAX;
	static uint64_t x734 = UINT64_MAX;
	int8_t x735 = 1;
	int64_t x736 = INT64_MIN;
	static volatile uint64_t t150 = 206617776LLU;

    t150 = ((x733*(x734/x735))%x736);

    if (t150 != 9223372036854775553LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x737 = UINT16_MAX;
	uint16_t x738 = 2226U;
	int8_t x739 = -3;
	int64_t x740 = INT64_MIN;
	volatile int64_t t151 = 48061783335538LL;

    t151 = ((x737*(x738/x739))%x740);

    if (t151 != -48626970LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x741 = INT8_MAX;
	static uint16_t x742 = 17U;
	static volatile uint8_t x744 = 4U;
	volatile int32_t t152 = -489;

    t152 = ((x741*(x742/x743))%x744);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x745 = INT8_MIN;
	volatile uint8_t x746 = UINT8_MAX;
	int8_t x747 = INT8_MAX;
	uint16_t x748 = UINT16_MAX;
	int32_t t153 = 23732;

    t153 = ((x745*(x746/x747))%x748);

    if (t153 != -256) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x753 = INT16_MIN;
	int16_t x755 = 3755;
	static uint16_t x756 = 29U;
	static volatile int32_t t154 = 34327;

    t154 = ((x753*(x754/x755))%x756);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x781 = 8235;
	static volatile int16_t x783 = -1;
	int32_t x784 = -1;

    t155 = ((x781*(x782/x783))%x784);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x785 = INT8_MIN;
	volatile int32_t x786 = 3735;
	static uint8_t x787 = UINT8_MAX;

    t156 = ((x785*(x786/x787))%x788);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x789 = 5U;
	volatile int32_t x790 = 142067135;
	uint64_t x792 = UINT64_MAX;
	uint64_t t157 = 63404002LLU;

    t157 = ((x789*(x790/x791))%x792);

    if (t157 != 17325260LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x793 = INT64_MAX;
	static int16_t x794 = -1;
	uint8_t x795 = UINT8_MAX;
	int8_t x796 = -1;
	int64_t t158 = 5387426LL;

    t158 = ((x793*(x794/x795))%x796);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x801 = UINT8_MAX;
	static uint8_t x802 = 32U;
	static volatile int16_t x804 = -143;
	int64_t t159 = 1932LL;

    t159 = ((x801*(x802/x803))%x804);

    if (t159 != -9LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x805 = -376062LL;
	int32_t x806 = -263376726;
	static volatile int8_t x807 = 7;
	int64_t t160 = 35515684618LL;

    t160 = ((x805*(x806/x807))%x808);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x810 = -1;
	static int16_t x811 = 1;
	int16_t x812 = INT16_MIN;
	volatile int32_t t161 = 12691148;

    t161 = ((x809*(x810/x811))%x812);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x817 = INT16_MIN;
	int16_t x818 = INT16_MIN;
	static int64_t x819 = INT64_MIN;
	static int8_t x820 = INT8_MIN;
	static int64_t t162 = 209223783468LL;

    t162 = ((x817*(x818/x819))%x820);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x821 = 379U;
	uint64_t x822 = 103326942202272LLU;
	static int16_t x823 = -215;
	int32_t x824 = INT32_MIN;
	uint64_t t163 = 544549596935311LLU;

    t163 = ((x821*(x822/x823))%x824);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x825 = INT16_MIN;
	uint16_t x827 = UINT16_MAX;
	volatile int32_t x828 = INT32_MAX;

    t164 = ((x825*(x826/x827))%x828);

    if (t164 != 1073741824) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x830 = INT8_MIN;
	uint32_t x831 = 1044582U;
	uint32_t x832 = UINT32_MAX;
	uint32_t t165 = 27U;

    t165 = ((x829*(x830/x831))%x832);

    if (t165 != 4111U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x833 = 0U;
	uint32_t x834 = 1573U;
	uint32_t x835 = 511U;
	int8_t x836 = INT8_MIN;

    t166 = ((x833*(x834/x835))%x836);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x837 = 11832960LLU;
	uint32_t x838 = UINT32_MAX;
	static int64_t x840 = -11184LL;
	uint64_t t167 = 331LLU;

    t167 = ((x837*(x838/x839))%x840);

    if (t167 != 12782235550080LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x841 = UINT64_MAX;
	static volatile int16_t x842 = 1;
	volatile int16_t x843 = 1;
	int32_t x844 = -374668;
	uint64_t t168 = 77333524945027LLU;

    t168 = ((x841*(x842/x843))%x844);

    if (t168 != 374667LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x846 = 16598U;
	static int32_t x847 = -1;
	uint64_t x848 = 1171LLU;
	uint64_t t169 = 306LLU;

    t169 = ((x845*(x846/x847))%x848);

    if (t169 != 204LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x854 = INT8_MAX;
	int64_t x856 = INT64_MAX;
	volatile int64_t t170 = 822358LL;

    t170 = ((x853*(x854/x855))%x856);

    if (t170 != -16129LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x857 = 1244428LLU;
	volatile uint16_t x858 = UINT16_MAX;
	uint8_t x859 = 2U;
	int32_t x860 = -1;
	volatile uint64_t t171 = 1165736707158576LLU;

    t171 = ((x857*(x858/x859))%x860);

    if (t171 != 40776172276LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x861 = INT16_MAX;
	uint8_t x862 = 114U;
	uint16_t x863 = UINT16_MAX;

    t172 = ((x861*(x862/x863))%x864);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x865 = UINT8_MAX;
	int16_t x866 = -7;
	volatile int16_t x867 = INT16_MAX;
	int8_t x868 = 1;

    t173 = ((x865*(x866/x867))%x868);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x870 = 14U;
	static int32_t x871 = INT32_MIN;
	static int64_t t174 = -1297475LL;

    t174 = ((x869*(x870/x871))%x872);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x873 = UINT64_MAX;
	volatile uint16_t x874 = UINT16_MAX;
	int8_t x875 = INT8_MIN;
	volatile int32_t x876 = INT32_MAX;
	volatile uint64_t t175 = 2010078723816276617LLU;

    t175 = ((x873*(x874/x875))%x876);

    if (t175 != 511LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x877 = INT16_MIN;
	int8_t x878 = INT8_MIN;
	int8_t x880 = INT8_MIN;
	volatile int32_t t176 = -34238;

    t176 = ((x877*(x878/x879))%x880);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x882 = 1U;
	int16_t x883 = -1;
	int16_t x884 = -3;
	volatile int32_t t177 = 3487247;

    t177 = ((x881*(x882/x883))%x884);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x886 = 9U;
	int32_t x887 = INT32_MIN;
	int32_t x888 = -1;
	static int32_t t178 = -1457;

    t178 = ((x885*(x886/x887))%x888);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x889 = 13581402U;
	static int64_t x890 = 6880LL;
	int8_t x892 = INT8_MIN;
	static int64_t t179 = 252431197014670560LL;

    t179 = ((x889*(x890/x891))%x892);

    if (t179 != 42LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x894 = -5439;
	int16_t x895 = -1;
	int32_t x896 = INT32_MAX;

    t180 = ((x893*(x894/x895))%x896);

    if (t180 != 21756) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x898 = 0U;
	int32_t x899 = INT32_MIN;
	int64_t t181 = 1LL;

    t181 = ((x897*(x898/x899))%x900);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x901 = INT16_MIN;
	int16_t x902 = 113;
	uint64_t x903 = 4118973035281LLU;

    t182 = ((x901*(x902/x903))%x904);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x905 = 184U;
	int32_t x906 = INT32_MIN;
	uint16_t x907 = 209U;
	volatile uint64_t x908 = 469943939LLU;
	volatile uint64_t t183 = 570423787446208649LLU;

    t183 = ((x905*(x906/x907))%x908);

    if (t183 != 54640057LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x909 = 247205643906776287LLU;
	int16_t x910 = INT16_MAX;
	uint16_t x911 = 110U;
	volatile uint8_t x912 = 24U;
	volatile uint64_t t184 = 5707176572631817306LLU;

    t184 = ((x909*(x910/x911))%x912);

    if (t184 != 15LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x913 = 109U;
	volatile int32_t x914 = INT32_MAX;
	static uint32_t x916 = 3550556U;
	volatile uint32_t t185 = 28245432U;

    t185 = ((x913*(x914/x915))%x916);

    if (t185 != 871289U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x917 = INT64_MAX;
	int8_t x918 = INT8_MIN;
	int32_t x919 = 6360;
	int32_t x920 = 11980948;
	static int64_t t186 = 1116463947414LL;

    t186 = ((x917*(x918/x919))%x920);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x921 = -2;
	uint8_t x922 = 1U;
	uint16_t x923 = UINT16_MAX;
	volatile int32_t t187 = 7;

    t187 = ((x921*(x922/x923))%x924);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x925 = 60U;
	static int16_t x926 = -1;
	volatile int16_t x927 = INT16_MIN;
	int16_t x928 = INT16_MAX;
	int32_t t188 = -969629;

    t188 = ((x925*(x926/x927))%x928);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x929 = 25281605049LLU;
	volatile uint64_t x931 = 1289687LLU;
	uint32_t x932 = 53831240U;

    t189 = ((x929*(x930/x931))%x932);

    if (t189 != 38890247LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x933 = -13;
	uint32_t x935 = UINT32_MAX;
	uint32_t x936 = 12U;

    t190 = ((x933*(x934/x935))%x936);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x937 = 63831266376098LLU;
	volatile int8_t x938 = INT8_MAX;
	static int64_t x939 = 222LL;
	int16_t x940 = -1;
	volatile uint64_t t191 = 15168890108LLU;

    t191 = ((x937*(x938/x939))%x940);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x942 = INT8_MIN;
	int32_t x943 = -1;
	uint16_t x944 = 1698U;

    t192 = ((x941*(x942/x943))%x944);

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x945 = INT8_MIN;
	uint16_t x946 = UINT16_MAX;
	int16_t x947 = INT16_MAX;
	uint32_t x948 = 4008068U;
	uint32_t t193 = 24571U;

    t193 = ((x945*(x946/x947))%x948);

    if (t193 != 2326212U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x949 = 61U;
	uint8_t x950 = 3U;
	int32_t x951 = INT32_MIN;
	int16_t x952 = INT16_MAX;
	static volatile int32_t t194 = 0;

    t194 = ((x949*(x950/x951))%x952);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x957 = UINT8_MAX;
	int16_t x958 = INT16_MIN;
	int64_t x960 = INT64_MIN;
	volatile int64_t t195 = 133356798LL;

    t195 = ((x957*(x958/x959))%x960);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x961 = INT8_MIN;
	volatile uint64_t x962 = UINT64_MAX;
	static int8_t x963 = -1;
	uint8_t x964 = UINT8_MAX;
	volatile uint64_t t196 = 558106LLU;

    t196 = ((x961*(x962/x963))%x964);

    if (t196 != 128LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x973 = INT32_MIN;
	uint16_t x975 = UINT16_MAX;

    t197 = ((x973*(x974/x975))%x976);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x977 = -8LL;
	static int32_t x978 = INT32_MAX;
	int64_t x979 = INT64_MIN;
	int32_t x980 = -1;

    t198 = ((x977*(x978/x979))%x980);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x981 = -1;
	static uint32_t x982 = 41955981U;
	volatile int64_t x983 = -118822618212LL;
	uint16_t x984 = 72U;
	int64_t t199 = 229326223779201LL;

    t199 = ((x981*(x982/x983))%x984);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

