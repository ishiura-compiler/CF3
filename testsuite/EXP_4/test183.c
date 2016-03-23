
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

int64_t x2 = INT64_MAX;
static int64_t x5 = -1LL;
int32_t x10 = -7;
int8_t x15 = -4;
uint8_t x18 = UINT8_MAX;
static int16_t x20 = -5;
int16_t x24 = -80;
uint64_t x53 = 1168088573291090424LLU;
volatile uint8_t x56 = UINT8_MAX;
int16_t x75 = INT16_MAX;
uint64_t x79 = UINT64_MAX;
int64_t x80 = INT64_MAX;
static int32_t x81 = -1;
int32_t x86 = 65799;
volatile int16_t x91 = -1;
static volatile uint64_t x96 = 7480LLU;
int16_t x100 = INT16_MIN;
int8_t x102 = INT8_MIN;
int32_t x103 = -1;
uint64_t x130 = 6344485627LLU;
static int16_t x133 = -1;
int64_t t26 = 195725867089117091LL;
int32_t x137 = -4912;
static uint32_t x138 = 1U;
static int16_t x140 = INT16_MAX;
int16_t x145 = 83;
int64_t x147 = -1LL;
uint64_t t29 = 4705853281832LLU;
volatile int64_t t30 = -29562LL;
volatile uint8_t x160 = 66U;
static int8_t x164 = -5;
static int8_t x169 = INT8_MIN;
int16_t x171 = INT16_MIN;
int8_t x174 = INT8_MAX;
volatile int8_t x178 = -1;
int8_t x180 = INT8_MAX;
volatile int32_t t36 = 435791940;
volatile uint64_t t37 = 468527LLU;
uint64_t x196 = UINT64_MAX;
uint32_t x202 = 4848294U;
int8_t x203 = INT8_MIN;
int32_t x207 = INT32_MIN;
static volatile int32_t t41 = -569;
volatile int8_t x210 = INT8_MIN;
static uint32_t t42 = 28U;
int16_t x218 = INT16_MAX;
static int16_t x226 = INT16_MAX;
volatile int16_t x228 = 1818;
int32_t x230 = INT32_MAX;
volatile int8_t x232 = INT8_MAX;
static volatile int32_t t46 = 95386;
static uint64_t x233 = 7LLU;
int16_t x241 = 3;
uint32_t x248 = UINT32_MAX;
volatile uint64_t t50 = 2767455926430900576LLU;
uint64_t t51 = 2793661561LLU;
volatile uint8_t x253 = 0U;
int8_t x254 = -1;
static int64_t x264 = 52645692514LL;
int64_t x278 = -1LL;
volatile int64_t t56 = -54988249200020485LL;
int64_t x292 = -178541351855786LL;
volatile uint64_t x304 = 1019028LLU;
volatile uint64_t t59 = 15LLU;
uint32_t x314 = UINT32_MAX;
uint8_t x316 = 2U;
uint64_t x317 = 1119956015LLU;
volatile int64_t x323 = 567LL;
int64_t x357 = INT64_MIN;
int32_t x359 = 105482;
uint64_t x366 = 6285660338474788LLU;
int64_t t76 = -40895761LL;
static int32_t x378 = -66493883;
int16_t x384 = 74;
volatile int64_t x386 = -162648LL;
static int32_t x391 = 376743393;
volatile uint64_t t80 = 232587449141538LLU;
static volatile uint8_t x396 = 9U;
int32_t t81 = 0;
uint32_t t83 = 424526U;
uint64_t x407 = UINT64_MAX;
static volatile uint64_t t84 = 5868LLU;
static int16_t x411 = INT16_MIN;
volatile int64_t t85 = -64LL;
int64_t x431 = 0LL;
volatile uint16_t x432 = 3982U;
volatile uint16_t x438 = UINT16_MAX;
int8_t x441 = INT8_MIN;
int64_t x445 = 0LL;
int64_t x453 = INT64_MIN;
volatile uint64_t t94 = 8776296702653889622LLU;
volatile uint8_t x462 = 1U;
int32_t t96 = 9;
volatile int64_t x465 = INT64_MIN;
int16_t x470 = -12;
int8_t x471 = 54;
uint64_t t98 = 55233594LLU;
static uint64_t t100 = 235513229165901LLU;
uint8_t x494 = 37U;
volatile int32_t x496 = -1;
int32_t x515 = 1339539;
int32_t x518 = -1;
int16_t x523 = INT16_MAX;
volatile int8_t x528 = 0;
int32_t x537 = 481;
int16_t x540 = -534;
volatile uint64_t t117 = 92LLU;
uint32_t x561 = 2U;
int16_t x568 = INT16_MIN;
int64_t x571 = INT64_MAX;
int64_t t120 = -493647268LL;
int8_t x581 = 24;
uint64_t x588 = 521921LLU;
static volatile int32_t x594 = INT32_MAX;
int64_t t126 = -45738466999752268LL;
int8_t x599 = INT8_MIN;
static uint32_t x600 = UINT32_MAX;
static int64_t t127 = 10648215LL;
volatile int16_t x602 = 1;
uint64_t x604 = 109020676016LLU;
uint8_t x612 = 9U;
static int16_t x614 = -5853;
static int32_t x618 = -7796656;
static int64_t x626 = INT64_MAX;
static int8_t x639 = -1;
static uint8_t x640 = 1U;
int32_t t137 = 56;
static int8_t x641 = INT8_MAX;
uint32_t x645 = UINT32_MAX;
volatile int64_t t139 = 2LL;
uint16_t x663 = 27U;
int32_t t142 = -45527199;
int16_t x669 = INT16_MAX;
volatile uint8_t x672 = UINT8_MAX;
int32_t t143 = 0;
static int32_t x680 = -539592;
uint64_t t145 = 13240675LLU;
int8_t x681 = INT8_MAX;
int32_t x686 = INT32_MAX;
uint32_t x689 = 380U;
int8_t x694 = -1;
static int16_t x697 = INT16_MAX;
volatile int16_t x704 = INT16_MAX;
uint32_t x709 = UINT32_MAX;
int64_t x710 = -1LL;
volatile uint64_t t153 = 50315859LLU;
int8_t x714 = INT8_MAX;
int64_t x717 = 563687843455LL;
static int8_t x720 = 1;
int32_t x727 = -7331530;
volatile int32_t x730 = INT32_MAX;
uint16_t x732 = UINT16_MAX;
volatile int32_t t158 = 148946245;
int64_t x748 = INT64_MAX;
int32_t t161 = 2261;
static int8_t x771 = 0;
volatile uint16_t x772 = 26U;
volatile uint64_t x777 = 10295733574LLU;
uint32_t x778 = 570150699U;
int16_t x779 = 0;
volatile uint64_t t164 = 552226675000512981LLU;
int64_t t165 = 0LL;
static int64_t t166 = -70694001808LL;
int16_t x792 = INT16_MAX;
int64_t t167 = 327936856652LL;
static int8_t x806 = 1;
int16_t x808 = -3;
int32_t t171 = 166199;
int64_t x829 = -1LL;
int64_t x832 = INT64_MIN;
static int64_t x842 = -1LL;
int64_t x844 = -251565284150LL;
volatile int64_t x851 = INT64_MIN;
int16_t x866 = INT16_MAX;
volatile uint64_t x867 = 1812293712406353533LLU;
int32_t x870 = -15;
int32_t t184 = -458922182;
static int64_t x883 = -106167LL;
int64_t x884 = -10193LL;
int64_t x887 = 2LL;
uint64_t t186 = 740250848385283LLU;
volatile int16_t x893 = INT16_MIN;
int32_t x899 = -11389;
int64_t t188 = -2436762003LL;
volatile int32_t x902 = INT32_MIN;
static uint32_t x915 = UINT32_MAX;
uint32_t x920 = 28706878U;
volatile uint64_t t193 = 6262891627083165LLU;
int16_t x922 = INT16_MAX;
int64_t x924 = 298LL;
int32_t x926 = -5866785;
int32_t x927 = 489550;
int64_t x932 = -1LL;
uint8_t x942 = 3U;
int8_t x949 = INT8_MIN;
static uint16_t x950 = 527U;
static int64_t t199 = 92497203LL;


void f0(void) {
    	int64_t x1 = -1LL;
	int16_t x3 = INT16_MAX;
	int8_t x4 = INT8_MIN;
	volatile int64_t t0 = -5856LL;

    t0 = (x1+(x2^(x3+x4)));

    if (t0 != 9223372036854743167LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = 59U;
	int8_t x7 = INT8_MAX;
	volatile uint16_t x8 = 5U;
	int64_t t1 = -127457714LL;

    t1 = (x5+(x6^(x7+x8)));

    if (t1 != 190LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 0;
	volatile uint8_t x11 = 16U;
	int64_t x12 = -15089718870LL;
	int64_t t2 = -3915473LL;

    t2 = (x9+(x10^(x11+x12)));

    if (t2 != 15089718851LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = UINT32_MAX;
	volatile int8_t x14 = INT8_MIN;
	uint32_t x16 = 9755U;
	static volatile uint32_t t3 = 26247U;

    t3 = (x13+(x14^(x15+x16)));

    if (t3 != 4294957462U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	volatile int64_t x19 = -1LL;
	volatile int64_t t4 = -443490362LL;

    t4 = (x17+(x18^(x19+x20)));

    if (t4 != -33019LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = 1376271;
	static volatile int8_t x22 = 57;
	int32_t x23 = 12644;
	int32_t t5 = 0;

    t5 = (x21+(x22^(x23+x24)));

    if (t5 != 1388860) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = INT16_MIN;
	int64_t x30 = INT64_MIN;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = -1;
	uint64_t t6 = 66LLU;

    t6 = (x29+(x30^(x31+x32)));

    if (t6 != 9223372036854743038LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = 9702449;
	int16_t x34 = INT16_MIN;
	int8_t x35 = INT8_MIN;
	static uint32_t x36 = 6U;
	uint32_t t7 = 488402496U;

    t7 = (x33+(x34^(x35+x36)));

    if (t7 != 9735095U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MIN;
	int16_t x38 = 38;
	volatile int8_t x39 = 25;
	int8_t x40 = INT8_MAX;
	volatile int64_t t8 = 1113LL;

    t8 = (x37+(x38^(x39+x40)));

    if (t8 != -9223372036854775618LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x49 = -1876288;
	static int16_t x50 = INT16_MIN;
	volatile uint16_t x51 = 6966U;
	volatile uint16_t x52 = UINT16_MAX;
	int32_t t9 = -979833;

    t9 = (x49+(x50^(x51+x52)));

    if (t9 != -1967627) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x54 = INT16_MIN;
	uint32_t x55 = 200669U;
	volatile uint64_t t10 = 6984354LLU;

    t10 = (x53+(x54^(x55+x56)));

    if (t10 != 1168088577585832660LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x65 = -9;
	uint16_t x66 = UINT16_MAX;
	uint64_t x67 = 24923553LLU;
	int64_t x68 = INT64_MIN;
	uint64_t t11 = 9909590780422LLU;

    t11 = (x65+(x66^(x67+x68)));

    if (t11 != 9223372036879725141LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x69 = INT32_MIN;
	static int64_t x70 = INT64_MIN;
	int32_t x71 = -2337583;
	volatile uint32_t x72 = 609769U;
	static volatile int64_t t12 = 50982061293259LL;

    t12 = (x69+(x70^(x71+x72)));

    if (t12 != -9223372034709019974LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x73 = UINT16_MAX;
	static uint32_t x74 = 15652523U;
	uint8_t x76 = 74U;
	volatile uint32_t t13 = 95424U;

    t13 = (x73+(x74^(x75+x76)));

    if (t13 != 15685345U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x77 = -1LL;
	volatile uint8_t x78 = 4U;
	volatile uint64_t t14 = 280193857471908LLU;

    t14 = (x77+(x78^(x79+x80)));

    if (t14 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x82 = -1LL;
	static volatile int32_t x83 = -26869063;
	int64_t x84 = -1LL;
	int64_t t15 = -242073285828LL;

    t15 = (x81+(x82^(x83+x84)));

    if (t15 != 26869062LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x85 = 3U;
	int8_t x87 = -1;
	int16_t x88 = INT16_MIN;
	volatile int32_t t16 = 1;

    t16 = (x85+(x86^(x87+x88)));

    if (t16 != -98565) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x89 = 399LLU;
	int8_t x90 = 5;
	volatile uint64_t x92 = 435949298365LLU;
	uint64_t t17 = 6689LLU;

    t17 = (x89+(x90^(x91+x92)));

    if (t17 != 435949298760LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x93 = 21U;
	static uint64_t x94 = 274171412617LLU;
	volatile uint8_t x95 = UINT8_MAX;
	uint64_t t18 = 574603705155498LLU;

    t18 = (x93+(x94^(x95+x96)));

    if (t18 != 274171420371LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x97 = INT32_MIN;
	volatile int32_t x98 = -6613374;
	uint8_t x99 = UINT8_MAX;
	int32_t t19 = -13;

    t19 = (x97+(x98^(x99+x100)));

    if (t19 != -2140891523) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x101 = UINT64_MAX;
	volatile int16_t x104 = INT16_MIN;
	uint64_t t20 = 2566808LLU;

    t20 = (x101+(x102^(x103+x104)));

    if (t20 != 32894LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x105 = INT8_MIN;
	int64_t x106 = -44868711058125009LL;
	volatile int16_t x107 = -1;
	static int16_t x108 = INT16_MAX;
	int64_t t21 = 103457LL;

    t21 = (x105+(x106^(x107+x108)));

    if (t21 != -44868711058132911LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x109 = 4356422305195162892LLU;
	static int32_t x110 = 8470540;
	uint64_t x111 = 857229324359730088LLU;
	int16_t x112 = -1;
	volatile uint64_t t22 = 784347173427253552LLU;

    t22 = (x109+(x110^(x111+x112)));

    if (t22 != 5213651629546586295LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x117 = 897892100961998LLU;
	int8_t x118 = INT8_MIN;
	volatile uint64_t x119 = 211713678284LLU;
	int16_t x120 = -13;
	uint64_t t23 = 33188751LLU;

    t23 = (x117+(x118^(x119+x120)));

    if (t23 != 897680387283725LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x121 = INT16_MIN;
	int64_t x122 = -10LL;
	static uint16_t x123 = 0U;
	uint16_t x124 = UINT16_MAX;
	int64_t t24 = -64125904409LL;

    t24 = (x121+(x122^(x123+x124)));

    if (t24 != -98295LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x129 = -51;
	volatile uint16_t x131 = UINT16_MAX;
	uint16_t x132 = UINT16_MAX;
	volatile uint64_t t25 = 16520646336993999LLU;

    t25 = (x129+(x130^(x131+x132)));

    if (t25 != 6344463570LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x134 = INT64_MAX;
	volatile int8_t x135 = -1;
	int16_t x136 = INT16_MIN;

    t26 = (x133+(x134^(x135+x136)));

    if (t26 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x139 = INT8_MAX;
	static uint32_t t27 = 1975598887U;

    t27 = (x137+(x138^(x139+x140)));

    if (t27 != 27983U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x141 = 101;
	int64_t x142 = INT64_MIN;
	static uint8_t x143 = 44U;
	int16_t x144 = INT16_MAX;
	int64_t t28 = 30192648LL;

    t28 = (x141+(x142^(x143+x144)));

    if (t28 != -9223372036854742896LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x146 = INT32_MAX;
	uint64_t x148 = 15285072266166697LLU;

    t29 = (x145+(x146^(x147+x148)));

    if (t29 != 15285072575168170LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x149 = -1LL;
	static int64_t x150 = INT64_MIN;
	static int8_t x151 = -36;
	static volatile int16_t x152 = -84;

    t30 = (x149+(x150^(x151+x152)));

    if (t30 != 9223372036854775687LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x157 = UINT8_MAX;
	int8_t x158 = -1;
	int8_t x159 = 1;
	static volatile int32_t t31 = 1058;

    t31 = (x157+(x158^(x159+x160)));

    if (t31 != 187) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x161 = INT32_MIN;
	int64_t x162 = -1LL;
	uint16_t x163 = UINT16_MAX;
	static volatile int64_t t32 = 191745576020LL;

    t32 = (x161+(x162^(x163+x164)));

    if (t32 != -2147549179LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x165 = INT16_MAX;
	int8_t x166 = -1;
	uint16_t x167 = 3987U;
	int32_t x168 = -8941639;
	int32_t t33 = 1;

    t33 = (x165+(x166^(x167+x168)));

    if (t33 != 8970418) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x170 = INT16_MIN;
	uint8_t x172 = 26U;
	volatile int32_t t34 = -6;

    t34 = (x169+(x170^(x171+x172)));

    if (t34 != -102) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x173 = INT32_MIN;
	uint16_t x175 = 1624U;
	int8_t x176 = 2;
	volatile int32_t t35 = -18713103;

    t35 = (x173+(x174^(x175+x176)));

    if (t35 != -2147482075) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x177 = UINT16_MAX;
	static int16_t x179 = -1;

    t36 = (x177+(x178^(x179+x180)));

    if (t36 != 65408) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x181 = INT8_MAX;
	uint64_t x182 = UINT64_MAX;
	uint32_t x183 = 38483913U;
	int8_t x184 = -11;

    t37 = (x181+(x182^(x183+x184)));

    if (t37 != 18446744073671067840LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x189 = 113U;
	static int16_t x190 = -4;
	int32_t x191 = INT32_MAX;
	static int64_t x192 = 1036637760783033LL;
	int64_t t38 = 142121316LL;

    t38 = (x189+(x190^(x191+x192)));

    if (t38 != -1036639908266571LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x193 = 2U;
	static int16_t x194 = -1;
	static int8_t x195 = 0;
	uint64_t t39 = 139LLU;

    t39 = (x193+(x194^(x195+x196)));

    if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x201 = 57277789U;
	int16_t x204 = 390;
	uint32_t t40 = 45091U;

    t40 = (x201+(x202^(x203+x204)));

    if (t40 != 62126333U) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x205 = 4010U;
	volatile uint16_t x206 = 6U;
	int16_t x208 = INT16_MAX;

    t41 = (x205+(x206^(x207+x208)));

    if (t41 != -2147446877) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x209 = UINT32_MAX;
	uint8_t x211 = UINT8_MAX;
	int16_t x212 = INT16_MIN;

    t42 = (x209+(x210^(x211+x212)));

    if (t42 != 32638U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x213 = INT16_MIN;
	int64_t x214 = INT64_MAX;
	static int16_t x215 = -1;
	uint8_t x216 = UINT8_MAX;
	int64_t t43 = 1830023LL;

    t43 = (x213+(x214^(x215+x216)));

    if (t43 != 9223372036854742785LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x217 = 21U;
	static uint8_t x219 = 3U;
	int8_t x220 = INT8_MIN;
	int32_t t44 = 2330364;

    t44 = (x217+(x218^(x219+x220)));

    if (t44 != -32623) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x225 = -2;
	static uint64_t x227 = UINT64_MAX;
	static uint64_t t45 = 126481233LLU;

    t45 = (x225+(x226^(x227+x228)));

    if (t45 != 30948LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x229 = INT8_MIN;
	int16_t x231 = INT16_MIN;

    t46 = (x229+(x230^(x231+x232)));

    if (t46 != -2147451136) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x234 = 885397079LLU;
	uint32_t x235 = UINT32_MAX;
	static int8_t x236 = INT8_MAX;
	uint64_t t47 = 4025729132875LLU;

    t47 = (x233+(x234^(x235+x236)));

    if (t47 != 885397040LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x237 = -8LL;
	static volatile int16_t x238 = -1;
	int16_t x239 = -66;
	int64_t x240 = -3339540LL;
	int64_t t48 = -1187868173232819LL;

    t48 = (x237+(x238^(x239+x240)));

    if (t48 != 3339597LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x242 = INT16_MAX;
	volatile uint64_t x243 = UINT64_MAX;
	volatile uint8_t x244 = 1U;
	uint64_t t49 = 8309746436712LLU;

    t49 = (x241+(x242^(x243+x244)));

    if (t49 != 32770LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x245 = INT16_MIN;
	uint32_t x246 = 1U;
	uint64_t x247 = 949LLU;

    t50 = (x245+(x246^(x247+x248)));

    if (t50 != 4294935477LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x249 = 1U;
	volatile uint64_t x250 = 34160504906413LLU;
	int8_t x251 = -1;
	static int8_t x252 = 1;

    t51 = (x249+(x250^(x251+x252)));

    if (t51 != 34160504906414LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x255 = INT32_MIN;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t52 = 37027945;

    t52 = (x253+(x254^(x255+x256)));

    if (t52 != 2147418112) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x257 = 3;
	static uint16_t x258 = 21996U;
	static int64_t x259 = -1LL;
	static uint8_t x260 = UINT8_MAX;
	static volatile int64_t t53 = 471709LL;

    t53 = (x257+(x258^(x259+x260)));

    if (t53 != 21781LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x261 = UINT8_MAX;
	volatile uint16_t x262 = 1606U;
	static int64_t x263 = -158LL;
	volatile int64_t t54 = -203453LL;

    t54 = (x261+(x262^(x263+x264)));

    if (t54 != 52645693057LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x269 = UINT8_MAX;
	int16_t x270 = INT16_MIN;
	uint8_t x271 = UINT8_MAX;
	volatile int64_t x272 = -1LL;
	int64_t t55 = 53214327101LL;

    t55 = (x269+(x270^(x271+x272)));

    if (t55 != -32259LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x277 = -1;
	int16_t x279 = INT16_MAX;
	int16_t x280 = INT16_MIN;

    t56 = (x277+(x278^(x279+x280)));

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x289 = INT8_MIN;
	volatile uint8_t x290 = UINT8_MAX;
	int16_t x291 = -1;
	int64_t t57 = 1174732948783062LL;

    t57 = (x289+(x290^(x291+x292)));

    if (t57 != -178541351855830LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x297 = INT8_MAX;
	static uint32_t x298 = 1U;
	static volatile int32_t x299 = -35;
	int32_t x300 = INT32_MAX;
	volatile uint32_t t58 = 21780065U;

    t58 = (x297+(x298^(x299+x300)));

    if (t58 != 2147483740U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x301 = 14U;
	int8_t x302 = INT8_MIN;
	int32_t x303 = INT32_MAX;

    t59 = (x301+(x302^(x303+x304)));

    if (t59 != 18446744071561048865LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x305 = -1;
	int32_t x306 = INT32_MIN;
	volatile int16_t x307 = INT16_MIN;
	int64_t x308 = -39LL;
	volatile int64_t t60 = -7303586673LL;

    t60 = (x305+(x306^(x307+x308)));

    if (t60 != 2147450840LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x309 = -1;
	uint16_t x310 = 48U;
	int64_t x311 = -1LL;
	int64_t x312 = INT64_MAX;
	int64_t t61 = 797241684209LL;

    t61 = (x309+(x310^(x311+x312)));

    if (t61 != 9223372036854775757LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x313 = -146;
	int8_t x315 = INT8_MIN;
	uint32_t t62 = 38U;

    t62 = (x313+(x314^(x315+x316)));

    if (t62 != 4294967275U) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x318 = INT32_MIN;
	uint16_t x319 = 85U;
	int32_t x320 = -82974;
	uint64_t t63 = 929367967LLU;

    t63 = (x317+(x318^(x319+x320)));

    if (t63 != 3267356774LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x321 = 3;
	uint64_t x322 = 3895509406905051LLU;
	static volatile uint8_t x324 = 1U;
	uint64_t t64 = 154128169LLU;

    t64 = (x321+(x322^(x323+x324)));

    if (t64 != 3895509406904550LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x325 = 5U;
	int8_t x326 = -1;
	int8_t x327 = 2;
	int16_t x328 = 78;
	int32_t t65 = 10686;

    t65 = (x325+(x326^(x327+x328)));

    if (t65 != -76) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x333 = INT8_MAX;
	int64_t x334 = INT64_MAX;
	static int32_t x335 = -1;
	int64_t x336 = -1LL;
	int64_t t66 = 16292LL;

    t66 = (x333+(x334^(x335+x336)));

    if (t66 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x337 = -1;
	static volatile int8_t x338 = -1;
	int32_t x339 = -1;
	int16_t x340 = 1;
	static int32_t t67 = -203652417;

    t67 = (x337+(x338^(x339+x340)));

    if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x341 = -4;
	int16_t x342 = 63;
	uint64_t x343 = 0LLU;
	static int64_t x344 = -2993373485259349153LL;
	static uint64_t t68 = 257210490958835LLU;

    t68 = (x341+(x342^(x343+x344)));

    if (t68 != 15453370588450202460LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x345 = 0LL;
	static int64_t x346 = INT64_MIN;
	int32_t x347 = -1;
	static int8_t x348 = INT8_MIN;
	int64_t t69 = -16545765843109710LL;

    t69 = (x345+(x346^(x347+x348)));

    if (t69 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x349 = INT16_MIN;
	uint32_t x350 = 12471014U;
	uint64_t x351 = 13632419123655851LLU;
	int8_t x352 = INT8_MIN;
	uint64_t t70 = 2007LLU;

    t70 = (x349+(x350^(x351+x352)));

    if (t70 != 13632419134750413LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x353 = INT16_MIN;
	uint16_t x354 = UINT16_MAX;
	volatile uint32_t x355 = 498411762U;
	int32_t x356 = -5050126;
	uint32_t t71 = 361U;

    t71 = (x353+(x354^(x355+x356)));

    if (t71 != 493381147U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x358 = 6U;
	volatile uint64_t x360 = 174561LLU;
	uint64_t t72 = 0LLU;

    t72 = (x357+(x358^(x359+x360)));

    if (t72 != 9223372036855055853LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x361 = UINT8_MAX;
	volatile int16_t x362 = INT16_MIN;
	static volatile int64_t x363 = -1LL;
	int16_t x364 = INT16_MIN;
	int64_t t73 = -4730433007461LL;

    t73 = (x361+(x362^(x363+x364)));

    if (t73 != 65790LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x365 = 371113446;
	uint16_t x367 = 443U;
	int64_t x368 = INT64_MIN;
	uint64_t t74 = 3167LLU;

    t74 = (x365+(x366^(x367+x368)));

    if (t74 != 9229657697564363909LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x369 = UINT32_MAX;
	uint16_t x370 = 72U;
	uint16_t x371 = 7U;
	static int16_t x372 = INT16_MAX;
	uint32_t t75 = 358057U;

    t75 = (x369+(x370^(x371+x372)));

    if (t75 != 32845U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x373 = 16346U;
	volatile int32_t x374 = -1;
	volatile int64_t x375 = INT64_MIN;
	volatile int32_t x376 = INT32_MAX;

    t76 = (x373+(x374^(x375+x376)));

    if (t76 != 9223372034707308506LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x377 = 0U;
	int32_t x379 = INT32_MIN;
	int32_t x380 = 2;
	volatile uint32_t t77 = 64297561U;

    t77 = (x377+(x378^(x379+x380)));

    if (t77 != 2080989767U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x381 = -1LL;
	int16_t x382 = INT16_MAX;
	int64_t x383 = 1506768909688700954LL;
	int64_t t78 = -3424864316979691147LL;

    t78 = (x381+(x382^(x383+x384)));

    if (t78 != 1506768909688733594LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x385 = -1;
	uint64_t x387 = 1150983660357LLU;
	volatile int64_t x388 = -1LL;
	uint64_t t79 = 14638216LLU;

    t79 = (x385+(x386^(x387+x388)));

    if (t79 != 18446742922725779435LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x389 = -1;
	int32_t x390 = -148430;
	uint64_t x392 = 48078446456209LLU;

    t80 = (x389+(x390^(x391+x392)));

    if (t80 != 18446695994886205247LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x393 = -1;
	volatile uint16_t x394 = 32314U;
	int8_t x395 = 0;

    t81 = (x393+(x394^(x395+x396)));

    if (t81 != 32306) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x397 = UINT32_MAX;
	int16_t x398 = INT16_MIN;
	int64_t x399 = INT64_MAX;
	int32_t x400 = -854216;
	static volatile int64_t t82 = -784839602LL;

    t82 = (x397+(x398^(x399+x400)));

    if (t82 != -9223372032558926026LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x401 = 1594U;
	volatile int32_t x402 = 8092052;
	static int8_t x403 = INT8_MAX;
	uint16_t x404 = 218U;

    t83 = (x401+(x402^(x403+x404)));

    if (t83 != 8093447U) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x405 = INT32_MIN;
	static int64_t x406 = INT64_MIN;
	uint8_t x408 = 14U;

    t84 = (x405+(x406^(x407+x408)));

    if (t84 != 9223372034707292173LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x409 = INT32_MIN;
	int64_t x410 = 4LL;
	uint8_t x412 = 9U;

    t85 = (x409+(x410^(x411+x412)));

    if (t85 != -2147516403LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int64_t x421 = -5233821823715789LL;
	static uint8_t x422 = 67U;
	uint64_t x423 = 262LLU;
	int64_t x424 = INT64_MAX;
	volatile uint64_t t86 = 349589170431LLU;

    t86 = (x421+(x422^(x423+x424)));

    if (t86 != 9218138215031060345LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x425 = UINT32_MAX;
	static int32_t x426 = 1;
	volatile uint16_t x427 = 699U;
	static int32_t x428 = INT32_MIN;
	uint32_t t87 = 332264825U;

    t87 = (x425+(x426^(x427+x428)));

    if (t87 != 2147484345U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x429 = UINT64_MAX;
	volatile int32_t x430 = INT32_MIN;
	uint64_t t88 = 5022928638LLU;

    t88 = (x429+(x430^(x431+x432)));

    if (t88 != 18446744071562071949LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x433 = INT32_MAX;
	uint16_t x434 = 356U;
	volatile uint32_t x435 = 980U;
	volatile uint64_t x436 = 103493948251219LLU;
	static volatile uint64_t t89 = 205580244702LLU;

    t89 = (x433+(x434^(x435+x436)));

    if (t89 != 103496095736130LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x437 = 40U;
	uint32_t x439 = 612U;
	int32_t x440 = INT32_MIN;
	volatile uint32_t t90 = 1871781548U;

    t90 = (x437+(x438^(x439+x440)));

    if (t90 != 2147548611U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x442 = -1;
	int16_t x443 = -1;
	int8_t x444 = 20;
	int32_t t91 = 0;

    t91 = (x441+(x442^(x443+x444)));

    if (t91 != -148) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x446 = -1;
	uint16_t x447 = 1U;
	int64_t x448 = -383127664LL;
	int64_t t92 = -1095442877190494LL;

    t92 = (x445+(x446^(x447+x448)));

    if (t92 != 383127662LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x449 = INT8_MIN;
	uint8_t x450 = 0U;
	int8_t x451 = 1;
	int8_t x452 = -1;
	volatile int32_t t93 = -199;

    t93 = (x449+(x450^(x451+x452)));

    if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x454 = INT64_MIN;
	volatile uint64_t x455 = 674424LLU;
	int8_t x456 = 12;

    t94 = (x453+(x454^(x455+x456)));

    if (t94 != 674436LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x457 = -2025390592LL;
	int64_t x458 = -4148076394092LL;
	volatile uint64_t x459 = UINT64_MAX;
	static volatile uint32_t x460 = 11U;
	volatile uint64_t t95 = 943662LLU;

    t95 = (x457+(x458^(x459+x460)));

    if (t95 != 18446739923607766942LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x461 = INT8_MAX;
	int8_t x463 = INT8_MIN;
	uint16_t x464 = 780U;

    t96 = (x461+(x462^(x463+x464)));

    if (t96 != 780) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x466 = INT32_MIN;
	volatile int16_t x467 = -1;
	uint32_t x468 = 30379U;
	int64_t t97 = -2661978645408096LL;

    t97 = (x465+(x466^(x467+x468)));

    if (t97 != -9223372034707261782LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x469 = 62311LL;
	static uint64_t x472 = UINT64_MAX;

    t98 = (x469+(x470^(x471+x472)));

    if (t98 != 62248LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x473 = 0U;
	volatile uint64_t x474 = UINT64_MAX;
	static volatile int64_t x475 = -1LL;
	uint32_t x476 = UINT32_MAX;
	static volatile uint64_t t99 = 3109076LLU;

    t99 = (x473+(x474^(x475+x476)));

    if (t99 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x485 = INT64_MIN;
	static uint16_t x486 = UINT16_MAX;
	volatile int64_t x487 = -1LL;
	uint64_t x488 = UINT64_MAX;

    t100 = (x485+(x486^(x487+x488)));

    if (t100 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x489 = -83;
	static uint64_t x490 = 2484723886LLU;
	static volatile int64_t x491 = 7964LL;
	volatile uint32_t x492 = UINT32_MAX;
	volatile uint64_t t101 = 493999878102890631LLU;

    t101 = (x489+(x490^(x491+x492)));

    if (t101 != 6779699042LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x493 = 2789128U;
	uint8_t x495 = UINT8_MAX;
	static volatile uint32_t t102 = 101U;

    t102 = (x493+(x494^(x495+x496)));

    if (t102 != 2789347U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x497 = -122013862;
	volatile int8_t x498 = INT8_MIN;
	static int8_t x499 = -1;
	int16_t x500 = INT16_MAX;
	static int32_t t103 = 2386;

    t103 = (x497+(x498^(x499+x500)));

    if (t103 != -122046504) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x501 = -1;
	int8_t x502 = -18;
	int16_t x503 = INT16_MIN;
	int16_t x504 = -72;
	int32_t t104 = -981;

    t104 = (x501+(x502^(x503+x504)));

    if (t104 != 32853) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x505 = INT8_MIN;
	static volatile int32_t x506 = INT32_MIN;
	uint8_t x507 = 1U;
	static int8_t x508 = INT8_MIN;
	static volatile int32_t t105 = -24950950;

    t105 = (x505+(x506^(x507+x508)));

    if (t105 != 2147483393) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x513 = UINT64_MAX;
	int8_t x514 = INT8_MIN;
	uint16_t x516 = 0U;
	volatile uint64_t t106 = 0LLU;

    t106 = (x513+(x514^(x515+x516)));

    if (t106 != 18446744073708211986LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x517 = -7;
	static volatile int64_t x519 = 1871119521912LL;
	int16_t x520 = INT16_MAX;
	volatile int64_t t107 = 18372LL;

    t107 = (x517+(x518^(x519+x520)));

    if (t107 != -1871119554687LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x521 = INT64_MAX;
	uint64_t x522 = 14517865LLU;
	uint8_t x524 = 105U;
	volatile uint64_t t108 = 23940257LLU;

    t108 = (x521+(x522^(x523+x524)));

    if (t108 != 9223372036869260800LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x525 = -1LL;
	uint32_t x526 = UINT32_MAX;
	int16_t x527 = INT16_MAX;
	int64_t t109 = 3286947LL;

    t109 = (x525+(x526^(x527+x528)));

    if (t109 != 4294934527LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x529 = 1177704870U;
	static volatile int32_t x530 = -26;
	volatile int32_t x531 = INT32_MIN;
	int16_t x532 = INT16_MAX;
	volatile uint32_t t110 = 288889U;

    t110 = (x529+(x530^(x531+x532)));

    if (t110 != 3325155775U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x533 = 1388;
	int8_t x534 = 0;
	static int32_t x535 = -1;
	static volatile int8_t x536 = INT8_MIN;
	volatile int32_t t111 = 1;

    t111 = (x533+(x534^(x535+x536)));

    if (t111 != 1259) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x538 = 329382LLU;
	int16_t x539 = INT16_MIN;
	static volatile uint64_t t112 = 5808202265560LLU;

    t112 = (x537+(x538^(x539+x540)));

    if (t112 != 18446744073709190445LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x541 = 3U;
	static volatile int64_t x542 = 32710277967650LL;
	volatile int8_t x543 = INT8_MAX;
	int32_t x544 = 115584;
	volatile int64_t t113 = 114398544LL;

    t113 = (x541+(x542^(x543+x544)));

    if (t113 != 32710277885152LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint8_t x545 = 3U;
	int16_t x546 = 3;
	static int32_t x547 = INT32_MIN;
	int64_t x548 = -1LL;
	int64_t t114 = -4302541319412630LL;

    t114 = (x545+(x546^(x547+x548)));

    if (t114 != -2147483649LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x549 = INT8_MAX;
	volatile uint64_t x550 = 2219599LLU;
	int64_t x551 = INT64_MIN;
	int16_t x552 = INT16_MAX;
	uint64_t t115 = 13099LLU;

    t115 = (x549+(x550^(x551+x552)));

    if (t115 != 9223372036856980015LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x553 = UINT64_MAX;
	uint64_t x554 = 8051975595019LLU;
	int32_t x555 = INT32_MIN;
	static int8_t x556 = 18;
	static uint64_t t116 = 5LLU;

    t116 = (x553+(x554^(x555+x556)));

    if (t116 != 18446736021705270296LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x557 = -3;
	uint64_t x558 = UINT64_MAX;
	static volatile uint64_t x559 = 95596784465332369LLU;
	volatile int16_t x560 = INT16_MAX;

    t117 = (x557+(x558^(x559+x560)));

    if (t117 != 18351147289244186476LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x562 = INT64_MIN;
	uint32_t x563 = 29841194U;
	uint16_t x564 = 661U;
	volatile int64_t t118 = -470684506LL;

    t118 = (x561+(x562^(x563+x564)));

    if (t118 != -9223372036824933951LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x565 = INT64_MAX;
	int16_t x566 = INT16_MAX;
	static int16_t x567 = INT16_MAX;
	static int64_t t119 = 3965835508159LL;

    t119 = (x565+(x566^(x567+x568)));

    if (t119 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x569 = INT32_MIN;
	int64_t x570 = INT64_MIN;
	int8_t x572 = -1;

    t120 = (x569+(x570^(x571+x572)));

    if (t120 != -2147483650LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x573 = INT16_MIN;
	int16_t x574 = -1;
	static uint16_t x575 = 22726U;
	uint16_t x576 = 2U;
	int32_t t121 = -92886;

    t121 = (x573+(x574^(x575+x576)));

    if (t121 != -55497) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x577 = 23U;
	int64_t x578 = 153619068187951620LL;
	int16_t x579 = INT16_MIN;
	int16_t x580 = 0;
	int64_t t122 = -109694636341LL;

    t122 = (x577+(x578^(x579+x580)));

    if (t122 != -153619068187950565LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x582 = INT8_MAX;
	uint64_t x583 = 81683LLU;
	uint32_t x584 = 1600668U;
	uint64_t t123 = 8168775260LLU;

    t123 = (x581+(x582^(x583+x584)));

    if (t123 != 1682408LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x585 = INT32_MAX;
	uint64_t x586 = 222244LLU;
	int16_t x587 = INT16_MAX;
	static volatile uint64_t t124 = 55LLU;

    t124 = (x585+(x586^(x587+x588)));

    if (t124 != 2148209379LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x589 = 2311489835694352LL;
	int64_t x590 = INT64_MIN;
	static int8_t x591 = -1;
	volatile uint8_t x592 = UINT8_MAX;
	static volatile int64_t t125 = -41257466483LL;

    t125 = (x589+(x590^(x591+x592)));

    if (t125 != -9221060547019081202LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x593 = UINT16_MAX;
	int64_t x595 = -470509527608LL;
	int16_t x596 = 16;

    t126 = (x593+(x594^(x595+x596)));

    if (t126 != -472235728346LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x597 = 1679309U;
	static int64_t x598 = -1LL;

    t127 = (x597+(x598^(x599+x600)));

    if (t127 != -4293287859LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x601 = UINT8_MAX;
	static int8_t x603 = -43;
	volatile uint64_t t128 = 1864165627834689LLU;

    t128 = (x601+(x602^(x603+x604)));

    if (t128 != 109020676227LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x605 = -11LL;
	int64_t x606 = 7LL;
	static int64_t x607 = INT64_MAX;
	int64_t x608 = -3965331169LL;
	volatile int64_t t129 = 10293463270LL;

    t129 = (x605+(x606^(x607+x608)));

    if (t129 != 9223372032889444622LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x609 = 0;
	uint32_t x610 = UINT32_MAX;
	static int8_t x611 = INT8_MIN;
	uint32_t t130 = 8913U;

    t130 = (x609+(x610^(x611+x612)));

    if (t130 != 118U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x613 = -1;
	static int8_t x615 = 0;
	int32_t x616 = -1;
	volatile int32_t t131 = 16653532;

    t131 = (x613+(x614^(x615+x616)));

    if (t131 != 5851) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x617 = 203009695U;
	int8_t x619 = INT8_MAX;
	volatile uint32_t x620 = UINT32_MAX;
	uint32_t t132 = 44U;

    t132 = (x617+(x618^(x619+x620)));

    if (t132 != 195213005U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x621 = UINT32_MAX;
	volatile uint8_t x622 = UINT8_MAX;
	int16_t x623 = -1;
	uint16_t x624 = 17221U;
	static uint32_t t133 = 2U;

    t133 = (x621+(x622^(x623+x624)));

    if (t133 != 17338U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x625 = UINT32_MAX;
	uint8_t x627 = 100U;
	uint64_t x628 = 25146LLU;
	static volatile uint64_t t134 = 6001710LLU;

    t134 = (x625+(x626^(x627+x628)));

    if (t134 != 9223372041149717856LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x629 = INT32_MIN;
	int8_t x630 = -3;
	uint32_t x631 = UINT32_MAX;
	volatile int8_t x632 = -1;
	volatile uint32_t t135 = 3751957U;

    t135 = (x629+(x630^(x631+x632)));

    if (t135 != 2147483651U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x633 = UINT8_MAX;
	volatile int16_t x634 = 427;
	volatile int16_t x635 = 1674;
	uint16_t x636 = 116U;
	static volatile int32_t t136 = -10;

    t136 = (x633+(x634^(x635+x636)));

    if (t136 != 2132) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x637 = -18;
	int16_t x638 = INT16_MIN;

    t137 = (x637+(x638^(x639+x640)));

    if (t137 != -32786) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x642 = INT8_MAX;
	volatile uint16_t x643 = 1U;
	uint64_t x644 = UINT64_MAX;
	uint64_t t138 = 1245587088LLU;

    t138 = (x641+(x642^(x643+x644)));

    if (t138 != 254LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x646 = -5500;
	int64_t x647 = 1596LL;
	uint16_t x648 = 8792U;

    t139 = (x645+(x646^(x647+x648)));

    if (t139 != 4294951439LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x649 = INT16_MIN;
	int8_t x650 = -1;
	static uint32_t x651 = UINT32_MAX;
	static int8_t x652 = INT8_MIN;
	volatile uint32_t t140 = 1395001U;

    t140 = (x649+(x650^(x651+x652)));

    if (t140 != 4294934656U) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x653 = 21678531149156813LL;
	int32_t x654 = INT32_MIN;
	uint8_t x655 = UINT8_MAX;
	static uint16_t x656 = 6050U;
	static volatile int64_t t141 = 42LL;

    t141 = (x653+(x654^(x655+x656)));

    if (t141 != 21678529001679470LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x661 = -1;
	static volatile uint16_t x662 = UINT16_MAX;
	int32_t x664 = 12738;

    t142 = (x661+(x662^(x663+x664)));

    if (t142 != 52769) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x670 = 2;
	static volatile int32_t x671 = 3596175;

    t143 = (x669+(x670^(x671+x672)));

    if (t143 != 3629195) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x673 = 489U;
	volatile int16_t x674 = INT16_MIN;
	static volatile int32_t x675 = -3463;
	uint32_t x676 = 480206937U;
	uint32_t t144 = 1124U;

    t144 = (x673+(x674^(x675+x676)));

    if (t144 != 3814773947U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x677 = 6137327698904637627LLU;
	int64_t x678 = -25638801751689829LL;
	static int8_t x679 = 0;

    t145 = (x677+(x678^(x679+x680)));

    if (t145 != 6162966500656861790LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x682 = INT64_MAX;
	int32_t x683 = -1;
	int32_t x684 = -1;
	volatile int64_t t146 = -2277582914698965628LL;

    t146 = (x681+(x682^(x683+x684)));

    if (t146 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x685 = 10395524U;
	static volatile int16_t x687 = 235;
	volatile int8_t x688 = INT8_MIN;
	uint32_t t147 = 2134828503U;

    t147 = (x685+(x686^(x687+x688)));

    if (t147 != 2157879064U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x690 = -1;
	uint8_t x691 = 1U;
	int32_t x692 = 1;
	static volatile uint32_t t148 = 7694U;

    t148 = (x689+(x690^(x691+x692)));

    if (t148 != 377U) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x693 = INT16_MAX;
	volatile int32_t x695 = 4190221;
	int32_t x696 = INT32_MIN;
	int32_t t149 = -3;

    t149 = (x693+(x694^(x695+x696)));

    if (t149 != 2143326193) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x698 = -6;
	static int8_t x699 = -1;
	int16_t x700 = 1;
	static volatile int32_t t150 = 8;

    t150 = (x697+(x698^(x699+x700)));

    if (t150 != 32761) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x701 = 753235LLU;
	static int64_t x702 = -1LL;
	volatile int8_t x703 = INT8_MIN;
	uint64_t t151 = 709673912LLU;

    t151 = (x701+(x702^(x703+x704)));

    if (t151 != 720595LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x705 = 133U;
	int32_t x706 = INT32_MIN;
	int8_t x707 = -1;
	volatile int64_t x708 = -46312LL;
	static volatile int64_t t152 = 13668239004224662LL;

    t152 = (x705+(x706^(x707+x708)));

    if (t152 != 2147437468LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x711 = 693U;
	uint64_t x712 = UINT64_MAX;

    t153 = (x709+(x710^(x711+x712)));

    if (t153 != 4294966602LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x713 = -3;
	uint32_t x715 = UINT32_MAX;
	int32_t x716 = INT32_MIN;
	uint32_t t154 = 8833U;

    t154 = (x713+(x714^(x715+x716)));

    if (t154 != 2147483517U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x718 = 3U;
	static int16_t x719 = INT16_MIN;
	volatile int64_t t155 = 22829LL;

    t155 = (x717+(x718^(x719+x720)));

    if (t155 != 563687810689LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x721 = 1293520LLU;
	int16_t x722 = INT16_MIN;
	volatile uint32_t x723 = 2622920U;
	uint32_t x724 = UINT32_MAX;
	static volatile uint64_t t156 = 174400121853900LLU;

    t156 = (x721+(x722^(x723+x724)));

    if (t156 != 4293608087LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x725 = INT16_MAX;
	uint8_t x726 = UINT8_MAX;
	int32_t x728 = 0;
	int32_t t157 = -6503;

    t157 = (x725+(x726^(x727+x728)));

    if (t157 != -7298616) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x729 = INT16_MAX;
	uint16_t x731 = 8U;

    t158 = (x729+(x730^(x731+x732)));

    if (t158 != 2147450871) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x745 = 1;
	static int8_t x746 = INT8_MAX;
	uint64_t x747 = UINT64_MAX;
	volatile uint64_t t159 = 101LLU;

    t159 = (x745+(x746^(x747+x748)));

    if (t159 != 9223372036854775682LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x749 = -1;
	int32_t x750 = INT32_MIN;
	int64_t x751 = INT64_MIN;
	int8_t x752 = INT8_MAX;
	volatile int64_t t160 = 55LL;

    t160 = (x749+(x750^(x751+x752)));

    if (t160 != 9223372034707292286LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x753 = INT16_MAX;
	uint8_t x754 = 1U;
	static uint8_t x755 = 3U;
	int8_t x756 = 19;

    t161 = (x753+(x754^(x755+x756)));

    if (t161 != 32790) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x765 = 1U;
	uint8_t x766 = UINT8_MAX;
	static int8_t x767 = -1;
	static volatile uint16_t x768 = 20U;
	volatile int32_t t162 = 395449128;

    t162 = (x765+(x766^(x767+x768)));

    if (t162 != 237) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x769 = -1;
	int32_t x770 = -5731462;
	static int32_t t163 = -3;

    t163 = (x769+(x770^(x771+x772)));

    if (t163 != -5731489) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x780 = INT64_MAX;

    t164 = (x777+(x778^(x779+x780)));

    if (t164 != 9223372046580358682LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x781 = 127U;
	static int64_t x782 = 2979203073539LL;
	uint8_t x783 = UINT8_MAX;
	int16_t x784 = INT16_MAX;

    t165 = (x781+(x782^(x783+x784)));

    if (t165 != 2979203106684LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x785 = INT8_MIN;
	int64_t x786 = INT64_MIN;
	int32_t x787 = INT32_MIN;
	static volatile uint16_t x788 = 26476U;

    t166 = (x785+(x786^(x787+x788)));

    if (t166 != 9223372034707318508LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x789 = 95460172156431580LL;
	static int8_t x790 = 0;
	int32_t x791 = -1;

    t167 = (x789+(x790^(x791+x792)));

    if (t167 != 95460172156464346LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x793 = 37356170U;
	static int64_t x794 = -24078965656435LL;
	static volatile uint64_t x795 = 1065254383LLU;
	uint8_t x796 = UINT8_MAX;
	volatile uint64_t t168 = 6435619LLU;

    t168 = (x793+(x794^(x795+x796)));

    if (t168 != 18446719994326306029LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x797 = INT16_MIN;
	uint32_t x798 = 53609U;
	int32_t x799 = -1;
	int16_t x800 = INT16_MIN;
	volatile uint32_t t169 = 7U;

    t169 = (x797+(x798^(x799+x800)));

    if (t169 != 4294913686U) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x801 = 0;
	static int16_t x802 = -467;
	int8_t x803 = INT8_MAX;
	uint64_t x804 = 1269LLU;
	uint64_t t170 = 128675525828LLU;

    t170 = (x801+(x802^(x803+x804)));

    if (t170 != 18446744073709550425LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x805 = INT8_MIN;
	static uint8_t x807 = 49U;

    t171 = (x805+(x806^(x807+x808)));

    if (t171 != -81) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x809 = UINT64_MAX;
	static int32_t x810 = INT32_MIN;
	static uint32_t x811 = 1U;
	int32_t x812 = 22022172;
	volatile uint64_t t172 = 11LLU;

    t172 = (x809+(x810^(x811+x812)));

    if (t172 != 2169505820LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x817 = 1;
	volatile int64_t x818 = INT64_MIN;
	static int64_t x819 = 44LL;
	int64_t x820 = INT64_MIN;
	int64_t t173 = 52LL;

    t173 = (x817+(x818^(x819+x820)));

    if (t173 != 45LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x825 = INT64_MIN;
	int64_t x826 = INT64_MIN;
	uint64_t x827 = 3637914116201689LLU;
	uint64_t x828 = 4458041001051663962LLU;
	volatile uint64_t t174 = 396061928834955LLU;

    t174 = (x825+(x826^(x827+x828)));

    if (t174 != 4461678915167865651LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x830 = UINT8_MAX;
	uint32_t x831 = 1834466293U;
	int64_t t175 = 74976LL;

    t175 = (x829+(x830^(x831+x832)));

    if (t175 != -9223372035020309751LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x841 = 175905;
	uint16_t x843 = 357U;
	int64_t t176 = 3376793LL;

    t176 = (x841+(x842^(x843+x844)));

    if (t176 != 251565459697LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x845 = 22724668858LLU;
	static int8_t x846 = INT8_MIN;
	volatile int8_t x847 = -1;
	uint64_t x848 = 20LLU;
	static uint64_t t177 = 7246053494780LLU;

    t177 = (x845+(x846^(x847+x848)));

    if (t177 != 22724668749LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x849 = 711724U;
	uint16_t x850 = UINT16_MAX;
	uint16_t x852 = 3709U;
	static volatile int64_t t178 = 0LL;

    t178 = (x849+(x850^(x851+x852)));

    if (t178 != -9223372036854002258LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x853 = 1715484300069380239LLU;
	static int16_t x854 = INT16_MIN;
	int64_t x855 = INT64_MIN;
	uint32_t x856 = UINT32_MAX;
	uint64_t t179 = 0LLU;

    t179 = (x853+(x854^(x855+x856)));

    if (t179 != 10938856332629221518LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x861 = 2037U;
	int16_t x862 = INT16_MIN;
	static uint32_t x863 = 1197807385U;
	static volatile int16_t x864 = -1;
	uint32_t t180 = 51085U;

    t180 = (x861+(x862^(x863+x864)));

    if (t180 != 3097141005U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x865 = -1LL;
	int8_t x868 = -1;
	uint64_t t181 = 25LLU;

    t181 = (x865+(x866^(x867+x868)));

    if (t181 != 1812293712406374786LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x869 = -1;
	volatile uint8_t x871 = 1U;
	volatile int8_t x872 = INT8_MAX;
	volatile int32_t t182 = -6;

    t182 = (x869+(x870^(x871+x872)));

    if (t182 != -144) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int8_t x873 = -1;
	uint8_t x874 = UINT8_MAX;
	int8_t x875 = INT8_MAX;
	static uint32_t x876 = 16431442U;
	volatile uint32_t t183 = 184U;

    t183 = (x873+(x874^(x875+x876)));

    if (t183 != 16431405U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x877 = 51;
	int8_t x878 = -14;
	uint16_t x879 = 98U;
	volatile int8_t x880 = -1;

    t184 = (x877+(x878^(x879+x880)));

    if (t184 != -58) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x881 = 827U;
	volatile uint16_t x882 = UINT16_MAX;
	volatile int64_t t185 = -518863939LL;

    t185 = (x881+(x882^(x883+x884)));

    if (t185 != -79422LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x885 = 12872622536936366LLU;
	static volatile int16_t x886 = 106;
	uint64_t x888 = 135604029289125LLU;

    t186 = (x885+(x886^(x887+x888)));

    if (t186 != 13008226566225531LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x894 = INT32_MIN;
	int64_t x895 = -2021432623708223LL;
	static volatile int16_t x896 = -1;
	volatile int64_t t187 = 126988LL;

    t187 = (x893+(x894^(x895+x896)));

    if (t187 != 2021430829402048LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x897 = 1411572757970604538LL;
	volatile int32_t x898 = INT32_MAX;
	static int8_t x900 = INT8_MIN;

    t188 = (x897+(x898^(x899+x900)));

    if (t188 != 1411572755823132406LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x901 = INT32_MIN;
	uint64_t x903 = 3821641429660764LLU;
	static uint16_t x904 = 46U;
	uint64_t t189 = 196673LLU;

    t189 = (x901+(x902^(x903+x904)));

    if (t189 != 18442922429993956490LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x905 = 1LLU;
	int8_t x906 = -15;
	static volatile uint32_t x907 = 370U;
	int8_t x908 = 18;
	uint64_t t190 = 136839516558457LLU;

    t190 = (x905+(x906^(x907+x908)));

    if (t190 != 4294966902LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x909 = 3505411747121827LL;
	int16_t x910 = -1;
	uint32_t x911 = 1U;
	static volatile int16_t x912 = INT16_MAX;
	volatile int64_t t191 = 309700177LL;

    t191 = (x909+(x910^(x911+x912)));

    if (t191 != 3505416042056354LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x913 = 16U;
	int16_t x914 = -1;
	int64_t x916 = -1LL;
	int64_t t192 = 14470620940LL;

    t192 = (x913+(x914^(x915+x916)));

    if (t192 != -4294967279LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x917 = UINT64_MAX;
	uint16_t x918 = 8U;
	int64_t x919 = -3820903600LL;

    t193 = (x917+(x918^(x919+x920)));

    if (t193 != 18446744069917354885LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x921 = UINT64_MAX;
	volatile uint32_t x923 = 2U;
	uint64_t t194 = 459624795LLU;

    t194 = (x921+(x922^(x923+x924)));

    if (t194 != 32466LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x925 = -1;
	uint8_t x928 = 1U;
	volatile int32_t t195 = 39865608;

    t195 = (x925+(x926^(x927+x928)));

    if (t195 != -6225265) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x929 = -1582360;
	int32_t x930 = 7;
	uint64_t x931 = 155180203380LLU;
	uint64_t t196 = 203515541995185045LLU;

    t196 = (x929+(x930^(x931+x932)));

    if (t196 != 155178621020LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x937 = INT64_MIN;
	uint16_t x938 = UINT16_MAX;
	static int64_t x939 = 37753875LL;
	int16_t x940 = 1778;
	volatile int64_t t197 = 14486259173829LL;

    t197 = (x937+(x938^(x939+x940)));

    if (t197 != -9223372036816968454LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x941 = 52580388U;
	uint64_t x943 = 157293394559832320LLU;
	int16_t x944 = 13;
	volatile uint64_t t198 = 1405552115972264LLU;

    t198 = (x941+(x942^(x943+x944)));

    if (t198 != 157293394612412722LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x951 = 894420174126422LL;
	int64_t x952 = INT64_MIN;

    t199 = (x949+(x950^(x951+x952)));

    if (t199 != -9222477616680648999LL) { NG(); } else { ; }
	
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

