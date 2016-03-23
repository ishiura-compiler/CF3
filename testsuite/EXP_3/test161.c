
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

int32_t x3 = -11913;
int32_t t1 = 0;
int16_t x11 = INT16_MIN;
int16_t x12 = -322;
volatile int32_t x16 = INT32_MIN;
uint64_t x21 = 1006835957LLU;
static volatile uint64_t x25 = 2269970202900555242LLU;
static int32_t x26 = INT32_MIN;
uint8_t x28 = UINT8_MAX;
int64_t x41 = -1LL;
int16_t x42 = -1;
volatile int32_t t8 = 1533056;
int8_t x54 = INT8_MIN;
int16_t x55 = INT16_MIN;
static int16_t x62 = -1;
volatile int32_t t12 = -4693230;
volatile int32_t x69 = INT32_MAX;
volatile int32_t x70 = -233812;
static int8_t x77 = INT8_MIN;
static volatile uint64_t x82 = 12391733098LLU;
int16_t x84 = INT16_MIN;
int64_t x94 = -1LL;
uint32_t x104 = 2388964U;
int64_t x107 = -735959467329272LL;
uint32_t x109 = 184237U;
int32_t t20 = 1349184;
int8_t x115 = INT8_MAX;
static int8_t x129 = -7;
uint8_t x131 = 27U;
uint8_t x132 = UINT8_MAX;
int8_t x133 = -1;
uint16_t x138 = 36U;
uint32_t x141 = UINT32_MAX;
static int16_t x149 = INT16_MAX;
volatile uint8_t x150 = 43U;
int16_t x152 = -1;
volatile int32_t t30 = 6884;
int32_t x163 = -78565;
static uint32_t x165 = 29699674U;
uint64_t x170 = UINT64_MAX;
int8_t x179 = -1;
int16_t x181 = INT16_MAX;
volatile int64_t x186 = -22285425224LL;
int8_t x187 = INT8_MAX;
int8_t x188 = INT8_MIN;
int64_t x193 = 561824975116956201LL;
int32_t t39 = -8;
int8_t x198 = -2;
int8_t x213 = INT8_MAX;
int64_t x222 = -1LL;
volatile int32_t t47 = -6;
uint32_t x233 = 4013654U;
static volatile int32_t t48 = 978;
int32_t x240 = INT32_MAX;
int16_t x250 = INT16_MAX;
volatile int16_t x252 = 15;
uint8_t x260 = UINT8_MAX;
int16_t x262 = INT16_MIN;
int16_t x264 = INT16_MIN;
uint64_t x265 = 376563611039307LLU;
int8_t x268 = INT8_MIN;
static volatile int32_t t57 = 68;
static int32_t x279 = INT32_MIN;
uint16_t x284 = UINT16_MAX;
static int64_t x285 = INT64_MAX;
int8_t x286 = INT8_MIN;
uint8_t x292 = UINT8_MAX;
static uint8_t x293 = 17U;
volatile int32_t t64 = -1737;
static volatile int64_t x302 = 3184956352233LL;
int16_t x316 = -1;
volatile int32_t x329 = INT32_MIN;
static uint16_t x338 = 19U;
int16_t x340 = INT16_MIN;
uint32_t x341 = 222219188U;
volatile int64_t x349 = 56612952963830LL;
static int8_t x360 = -1;
int32_t x369 = -1;
uint16_t x371 = 64U;
volatile int32_t t79 = -5046;
static uint64_t x385 = UINT64_MAX;
static int8_t x387 = -1;
int8_t x389 = -1;
volatile int8_t x392 = INT8_MIN;
volatile int32_t t83 = -4150;
static int8_t x403 = INT8_MAX;
int32_t x404 = -1;
int16_t x406 = INT16_MAX;
int64_t x416 = INT64_MAX;
volatile int32_t t88 = 104921265;
int32_t t89 = -28;
int16_t x422 = INT16_MAX;
volatile uint64_t x427 = UINT64_MAX;
int32_t t91 = -1305;
int8_t x433 = 13;
int8_t x443 = 0;
int16_t x445 = -1;
uint8_t x446 = 1U;
int8_t x449 = INT8_MAX;
volatile int32_t t97 = -124382165;
static int64_t x457 = INT64_MAX;
volatile int64_t x459 = -1749994382990657LL;
int32_t x465 = -1;
int16_t x468 = 84;
int32_t x469 = INT32_MAX;
volatile int32_t t101 = 227;
uint16_t x477 = UINT16_MAX;
uint32_t x478 = 3490U;
static uint8_t x479 = 118U;
int32_t x482 = 41377;
volatile int32_t t104 = 72634;
volatile uint32_t x493 = UINT32_MAX;
int8_t x497 = INT8_MIN;
volatile uint16_t x503 = 0U;
int8_t x506 = -2;
static int32_t t110 = -1;
volatile uint64_t x509 = 27314LLU;
int64_t x514 = INT64_MIN;
static uint16_t x516 = 1389U;
volatile int32_t x528 = INT32_MAX;
static int32_t x541 = 3;
int16_t x544 = INT16_MIN;
volatile uint32_t x545 = 55006U;
static uint32_t x555 = 174793U;
int16_t x569 = INT16_MAX;
volatile int16_t x579 = 37;
int64_t x581 = 8LL;
static int32_t x589 = -632;
volatile int16_t x595 = -1;
int32_t x607 = -1;
static volatile int8_t x609 = INT8_MIN;
volatile int32_t x613 = INT32_MAX;
static int32_t x614 = -29336572;
volatile int64_t x627 = -1LL;
static int8_t x630 = INT8_MAX;
volatile int32_t t138 = -161479356;
volatile int8_t x638 = INT8_MAX;
int32_t t140 = 0;
int16_t x646 = INT16_MIN;
int16_t x647 = -78;
int16_t x648 = INT16_MIN;
uint16_t x649 = 4284U;
static uint32_t x654 = UINT32_MAX;
int8_t x678 = -28;
volatile uint64_t x680 = UINT64_MAX;
int32_t x696 = 1906191;
int32_t t149 = 6959891;
volatile int64_t x720 = INT64_MIN;
int8_t x731 = 0;
uint8_t x737 = UINT8_MAX;
volatile int64_t x740 = INT64_MAX;
int32_t x741 = INT32_MAX;
int8_t x742 = -1;
int8_t x744 = INT8_MIN;
uint16_t x752 = 601U;
int32_t t160 = 558319220;
static int32_t x759 = INT32_MAX;
uint64_t x760 = UINT64_MAX;
int8_t x772 = -1;
volatile int16_t x780 = INT16_MIN;
static int16_t x782 = 9;
volatile uint16_t x800 = 945U;
uint32_t x803 = 603U;
int8_t x812 = INT8_MAX;
static int8_t x813 = -1;
volatile int32_t t174 = 27;
int32_t x818 = INT32_MAX;
int64_t x820 = 3019LL;
int64_t x829 = 16522301237063LL;
static int32_t x830 = INT32_MAX;
uint64_t x834 = 1218LLU;
volatile uint8_t x836 = UINT8_MAX;
static volatile uint8_t x843 = 35U;
int64_t x844 = INT64_MIN;
int32_t t180 = -10596;
uint8_t x847 = UINT8_MAX;
volatile int32_t t181 = 61455644;
static uint8_t x858 = 10U;
volatile int32_t t183 = -1;
uint64_t x873 = 1375297477321511324LLU;
volatile int32_t t187 = 377;
int32_t x881 = -1;
volatile uint16_t x884 = 113U;
static int16_t x886 = -1;
int32_t x890 = INT32_MIN;
volatile int64_t x897 = INT64_MAX;
volatile int64_t x900 = -730161215LL;
int16_t x902 = 1828;
uint8_t x907 = UINT8_MAX;
int32_t t195 = 37334;
static volatile int32_t t196 = -50693308;
int16_t x915 = -1;
int8_t x916 = -1;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	uint64_t x2 = 2568045304LLU;
	uint8_t x4 = 17U;
	int32_t t0 = 1030260;

    t0 = ((x1&x2)!=(x3+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -34;
	volatile int64_t x6 = -1LL;
	int16_t x7 = 3093;
	int64_t x8 = 480968911342LL;

    t1 = ((x5&x6)!=(x7+x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int16_t x10 = INT16_MAX;
	static int32_t t2 = -15766841;

    t2 = ((x9&x10)!=(x11+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 2238U;
	volatile uint16_t x14 = 254U;
	uint32_t x15 = 113U;
	static volatile int32_t t3 = -11;

    t3 = ((x13&x14)!=(x15+x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x22 = INT8_MIN;
	int32_t x23 = INT32_MAX;
	int8_t x24 = -1;
	volatile int32_t t4 = -344;

    t4 = ((x21&x22)!=(x23+x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x27 = INT8_MAX;
	static int32_t t5 = -402862;

    t5 = ((x25&x26)!=(x27+x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x33 = UINT8_MAX;
	int64_t x34 = 796964088926LL;
	uint64_t x35 = 123433902280624LLU;
	volatile int16_t x36 = -1;
	volatile int32_t t6 = 153;

    t6 = ((x33&x34)!=(x35+x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = -25729493563483200LL;
	int16_t x38 = INT16_MIN;
	int8_t x39 = -1;
	int32_t x40 = -48832075;
	volatile int32_t t7 = 29;

    t7 = ((x37&x38)!=(x39+x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x43 = 782;
	volatile int16_t x44 = 6;

    t8 = ((x41&x42)!=(x43+x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x45 = INT16_MIN;
	static uint64_t x46 = 6008710LLU;
	uint16_t x47 = 12U;
	static int16_t x48 = INT16_MAX;
	static int32_t t9 = -724;

    t9 = ((x45&x46)!=(x47+x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x53 = 19U;
	int16_t x56 = INT16_MAX;
	int32_t t10 = -1;

    t10 = ((x53&x54)!=(x55+x56));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x57 = INT32_MAX;
	int64_t x58 = -1LL;
	int16_t x59 = INT16_MIN;
	volatile int32_t x60 = 9265198;
	int32_t t11 = 233654;

    t11 = ((x57&x58)!=(x59+x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x61 = -1LL;
	int64_t x63 = -1LL;
	int16_t x64 = -1;

    t12 = ((x61&x62)!=(x63+x64));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x71 = 158883802031LLU;
	uint32_t x72 = 37716154U;
	int32_t t13 = -26900;

    t13 = ((x69&x70)!=(x71+x72));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x73 = 7;
	static int32_t x74 = -2;
	static volatile int16_t x75 = INT16_MAX;
	int64_t x76 = -1LL;
	int32_t t14 = 103165911;

    t14 = ((x73&x74)!=(x75+x76));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x78 = 1;
	int32_t x79 = INT32_MIN;
	int64_t x80 = 83LL;
	int32_t t15 = 1;

    t15 = ((x77&x78)!=(x79+x80));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x81 = UINT32_MAX;
	static int8_t x83 = -6;
	volatile int32_t t16 = 6121802;

    t16 = ((x81&x82)!=(x83+x84));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x93 = 0U;
	volatile uint64_t x95 = UINT64_MAX;
	int64_t x96 = -1LL;
	static int32_t t17 = 14;

    t17 = ((x93&x94)!=(x95+x96));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x101 = INT32_MAX;
	int8_t x102 = INT8_MIN;
	int32_t x103 = 60441106;
	volatile int32_t t18 = 48611;

    t18 = ((x101&x102)!=(x103+x104));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x105 = -1;
	volatile int16_t x106 = -7376;
	int32_t x108 = INT32_MIN;
	int32_t t19 = 102;

    t19 = ((x105&x106)!=(x107+x108));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x110 = INT64_MIN;
	uint32_t x111 = 6U;
	int8_t x112 = INT8_MIN;

    t20 = ((x109&x110)!=(x111+x112));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint32_t x113 = 290U;
	static int8_t x114 = -1;
	uint64_t x116 = 519937809466671LLU;
	static volatile int32_t t21 = -583356;

    t21 = ((x113&x114)!=(x115+x116));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x121 = INT8_MIN;
	int64_t x122 = INT64_MIN;
	int32_t x123 = 385;
	int16_t x124 = INT16_MAX;
	int32_t t22 = -6688854;

    t22 = ((x121&x122)!=(x123+x124));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x130 = INT32_MIN;
	int32_t t23 = -4;

    t23 = ((x129&x130)!=(x131+x132));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x134 = 19LL;
	int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MIN;
	int32_t t24 = -1117;

    t24 = ((x133&x134)!=(x135+x136));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x137 = 4U;
	int8_t x139 = 0;
	volatile int16_t x140 = 11;
	int32_t t25 = -1104;

    t25 = ((x137&x138)!=(x139+x140));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x142 = -1;
	volatile int8_t x143 = 4;
	static int32_t x144 = -1;
	int32_t t26 = -246904083;

    t26 = ((x141&x142)!=(x143+x144));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x145 = INT8_MIN;
	uint8_t x146 = 1U;
	static uint64_t x147 = 22LLU;
	uint16_t x148 = 646U;
	int32_t t27 = -1473;

    t27 = ((x145&x146)!=(x147+x148));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x151 = INT8_MAX;
	volatile int32_t t28 = -23;

    t28 = ((x149&x150)!=(x151+x152));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x153 = 3;
	static uint64_t x154 = UINT64_MAX;
	uint8_t x155 = 0U;
	int16_t x156 = 7783;
	int32_t t29 = -50676610;

    t29 = ((x153&x154)!=(x155+x156));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x157 = 882318221;
	int32_t x158 = 37310;
	uint32_t x159 = UINT32_MAX;
	static int8_t x160 = -13;

    t30 = ((x157&x158)!=(x159+x160));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x161 = INT16_MIN;
	volatile int64_t x162 = INT64_MIN;
	int16_t x164 = INT16_MAX;
	int32_t t31 = -1072198793;

    t31 = ((x161&x162)!=(x163+x164));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x166 = 22838U;
	int32_t x167 = 1938469;
	int16_t x168 = -702;
	volatile int32_t t32 = 2;

    t32 = ((x165&x166)!=(x167+x168));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x169 = 1;
	static int8_t x171 = 20;
	volatile uint64_t x172 = 4334093630713741134LLU;
	int32_t t33 = -314;

    t33 = ((x169&x170)!=(x171+x172));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x173 = -1;
	int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MAX;
	volatile uint32_t x176 = 1085804889U;
	int32_t t34 = -5664641;

    t34 = ((x173&x174)!=(x175+x176));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x177 = INT16_MIN;
	volatile uint8_t x178 = UINT8_MAX;
	int32_t x180 = -545054234;
	int32_t t35 = -282737;

    t35 = ((x177&x178)!=(x179+x180));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x182 = INT64_MIN;
	int64_t x183 = -1LL;
	static uint8_t x184 = UINT8_MAX;
	volatile int32_t t36 = 3742235;

    t36 = ((x181&x182)!=(x183+x184));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x185 = 1U;
	static volatile int32_t t37 = -1545;

    t37 = ((x185&x186)!=(x187+x188));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x189 = 3947093U;
	volatile uint64_t x190 = 1LLU;
	volatile uint16_t x191 = 14U;
	int8_t x192 = -1;
	volatile int32_t t38 = -231;

    t38 = ((x189&x190)!=(x191+x192));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint16_t x194 = 179U;
	int32_t x195 = -3;
	int32_t x196 = 95314595;

    t39 = ((x193&x194)!=(x195+x196));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x197 = 8823433U;
	int16_t x199 = 16295;
	int8_t x200 = INT8_MAX;
	int32_t t40 = -15;

    t40 = ((x197&x198)!=(x199+x200));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x201 = 85U;
	int8_t x202 = -1;
	volatile int16_t x203 = INT16_MAX;
	int8_t x204 = INT8_MIN;
	static int32_t t41 = 91;

    t41 = ((x201&x202)!=(x203+x204));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x205 = INT32_MIN;
	static int16_t x206 = INT16_MIN;
	uint32_t x207 = 30001066U;
	int16_t x208 = 15224;
	int32_t t42 = -29;

    t42 = ((x205&x206)!=(x207+x208));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MIN;
	static volatile int32_t x211 = INT32_MIN;
	int64_t x212 = -1LL;
	static int32_t t43 = 0;

    t43 = ((x209&x210)!=(x211+x212));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x214 = -1553;
	int64_t x215 = INT64_MIN;
	uint32_t x216 = 1355U;
	int32_t t44 = -30;

    t44 = ((x213&x214)!=(x215+x216));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x221 = 3236U;
	static volatile uint8_t x223 = UINT8_MAX;
	int32_t x224 = -1;
	int32_t t45 = 209;

    t45 = ((x221&x222)!=(x223+x224));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint16_t x225 = 0U;
	int32_t x226 = INT32_MAX;
	int64_t x227 = INT64_MAX;
	int64_t x228 = INT64_MIN;
	int32_t t46 = 481059458;

    t46 = ((x225&x226)!=(x227+x228));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x229 = 5192U;
	int64_t x230 = 12685LL;
	int16_t x231 = -238;
	uint64_t x232 = 124LLU;

    t47 = ((x229&x230)!=(x231+x232));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x234 = INT32_MIN;
	uint16_t x235 = UINT16_MAX;
	int8_t x236 = 36;

    t48 = ((x233&x234)!=(x235+x236));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x237 = 10U;
	static uint16_t x238 = 154U;
	int16_t x239 = INT16_MIN;
	static volatile int32_t t49 = 181727860;

    t49 = ((x237&x238)!=(x239+x240));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x241 = 3U;
	volatile int64_t x242 = INT64_MIN;
	int16_t x243 = -22;
	volatile int8_t x244 = INT8_MIN;
	int32_t t50 = 12066;

    t50 = ((x241&x242)!=(x243+x244));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x245 = UINT16_MAX;
	uint16_t x246 = UINT16_MAX;
	int32_t x247 = -1;
	uint32_t x248 = 54142759U;
	volatile int32_t t51 = 287618;

    t51 = ((x245&x246)!=(x247+x248));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x249 = -1;
	uint8_t x251 = UINT8_MAX;
	int32_t t52 = 30436128;

    t52 = ((x249&x250)!=(x251+x252));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x253 = UINT16_MAX;
	int32_t x254 = -1;
	static volatile int64_t x255 = -262625666083195666LL;
	static uint64_t x256 = UINT64_MAX;
	int32_t t53 = -10;

    t53 = ((x253&x254)!=(x255+x256));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x257 = INT8_MIN;
	int32_t x258 = -1;
	int16_t x259 = INT16_MAX;
	static int32_t t54 = 51319;

    t54 = ((x257&x258)!=(x259+x260));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x261 = 5286620U;
	int16_t x263 = INT16_MAX;
	static volatile int32_t t55 = -20920;

    t55 = ((x261&x262)!=(x263+x264));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x266 = INT32_MIN;
	uint8_t x267 = 3U;
	int32_t t56 = 135998708;

    t56 = ((x265&x266)!=(x267+x268));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x269 = 4;
	volatile int64_t x270 = INT64_MIN;
	int64_t x271 = -20264631841174321LL;
	uint32_t x272 = UINT32_MAX;

    t57 = ((x269&x270)!=(x271+x272));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x273 = UINT16_MAX;
	int16_t x274 = 187;
	int8_t x275 = -48;
	volatile int8_t x276 = INT8_MIN;
	volatile int32_t t58 = -7460;

    t58 = ((x273&x274)!=(x275+x276));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x277 = -313;
	int64_t x278 = INT64_MIN;
	static volatile uint64_t x280 = 7476799048333827LLU;
	static volatile int32_t t59 = -8703079;

    t59 = ((x277&x278)!=(x279+x280));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x281 = 2;
	uint8_t x282 = 52U;
	static int16_t x283 = INT16_MIN;
	int32_t t60 = -1380441;

    t60 = ((x281&x282)!=(x283+x284));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x287 = -1;
	volatile uint32_t x288 = 5675318U;
	int32_t t61 = -7917;

    t61 = ((x285&x286)!=(x287+x288));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x289 = -1;
	static int64_t x290 = INT64_MIN;
	volatile uint32_t x291 = 0U;
	int32_t t62 = -5577195;

    t62 = ((x289&x290)!=(x291+x292));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x294 = 2310U;
	int32_t x295 = INT32_MAX;
	int32_t x296 = INT32_MIN;
	volatile int32_t t63 = 6337;

    t63 = ((x293&x294)!=(x295+x296));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x297 = 111330046;
	int16_t x298 = INT16_MIN;
	volatile int32_t x299 = -1;
	int16_t x300 = -83;

    t64 = ((x297&x298)!=(x299+x300));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x301 = INT64_MAX;
	int32_t x303 = INT32_MIN;
	static volatile uint64_t x304 = UINT64_MAX;
	volatile int32_t t65 = -141445348;

    t65 = ((x301&x302)!=(x303+x304));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x305 = -1;
	volatile int64_t x306 = INT64_MIN;
	static int8_t x307 = 1;
	static uint32_t x308 = UINT32_MAX;
	int32_t t66 = -2;

    t66 = ((x305&x306)!=(x307+x308));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x309 = -1LL;
	uint8_t x310 = 6U;
	int16_t x311 = -1;
	static int32_t x312 = 114586;
	static int32_t t67 = -123853003;

    t67 = ((x309&x310)!=(x311+x312));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x313 = 31U;
	int8_t x314 = -22;
	int16_t x315 = INT16_MIN;
	int32_t t68 = -261;

    t68 = ((x313&x314)!=(x315+x316));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x317 = INT16_MAX;
	volatile uint8_t x318 = 4U;
	volatile uint64_t x319 = 1LLU;
	int64_t x320 = -1LL;
	volatile int32_t t69 = 0;

    t69 = ((x317&x318)!=(x319+x320));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x321 = INT16_MAX;
	static int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	volatile int32_t t70 = 7525;

    t70 = ((x321&x322)!=(x323+x324));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x325 = 0;
	int16_t x326 = INT16_MIN;
	int16_t x327 = -1;
	static int8_t x328 = -1;
	volatile int32_t t71 = -5;

    t71 = ((x325&x326)!=(x327+x328));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x330 = INT64_MIN;
	volatile int8_t x331 = INT8_MAX;
	static uint64_t x332 = UINT64_MAX;
	volatile int32_t t72 = 329439;

    t72 = ((x329&x330)!=(x331+x332));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x337 = 70499330LLU;
	int16_t x339 = INT16_MAX;
	int32_t t73 = -60590;

    t73 = ((x337&x338)!=(x339+x340));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x342 = -1;
	static int8_t x343 = INT8_MIN;
	int8_t x344 = -1;
	int32_t t74 = -2028498;

    t74 = ((x341&x342)!=(x343+x344));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x350 = 237180852103LLU;
	int64_t x351 = INT64_MIN;
	uint16_t x352 = 242U;
	volatile int32_t t75 = -1;

    t75 = ((x349&x350)!=(x351+x352));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x353 = -1;
	uint64_t x354 = 189604465453766LLU;
	int16_t x355 = INT16_MIN;
	int32_t x356 = -1;
	volatile int32_t t76 = -25;

    t76 = ((x353&x354)!=(x355+x356));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x357 = 557U;
	uint64_t x358 = 12097493LLU;
	uint16_t x359 = UINT16_MAX;
	volatile int32_t t77 = 41;

    t77 = ((x357&x358)!=(x359+x360));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x365 = UINT32_MAX;
	int16_t x366 = INT16_MIN;
	static volatile int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MIN;
	int32_t t78 = -28;

    t78 = ((x365&x366)!=(x367+x368));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x370 = 3;
	volatile int64_t x372 = -1LL;

    t79 = ((x369&x370)!=(x371+x372));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MAX;
	int8_t x383 = INT8_MIN;
	uint8_t x384 = UINT8_MAX;
	int32_t t80 = -62708;

    t80 = ((x381&x382)!=(x383+x384));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x386 = -1;
	int8_t x388 = INT8_MIN;
	static int32_t t81 = -220427;

    t81 = ((x385&x386)!=(x387+x388));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x390 = 4U;
	static int8_t x391 = 20;
	static int32_t t82 = 1022700916;

    t82 = ((x389&x390)!=(x391+x392));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int8_t x393 = 0;
	uint64_t x394 = UINT64_MAX;
	uint64_t x395 = 10019660054LLU;
	int8_t x396 = INT8_MAX;

    t83 = ((x393&x394)!=(x395+x396));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x397 = INT16_MAX;
	int16_t x398 = 7;
	volatile int64_t x399 = -1LL;
	int16_t x400 = INT16_MIN;
	volatile int32_t t84 = -115;

    t84 = ((x397&x398)!=(x399+x400));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x401 = 8LL;
	int16_t x402 = 2023;
	static volatile int32_t t85 = -22;

    t85 = ((x401&x402)!=(x403+x404));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x405 = -1;
	uint16_t x407 = 3U;
	int8_t x408 = INT8_MIN;
	int32_t t86 = -855316;

    t86 = ((x405&x406)!=(x407+x408));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x409 = 1U;
	int16_t x410 = -642;
	int64_t x411 = -1LL;
	volatile int8_t x412 = INT8_MAX;
	volatile int32_t t87 = 1955356;

    t87 = ((x409&x410)!=(x411+x412));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x413 = UINT8_MAX;
	int8_t x414 = INT8_MIN;
	volatile int32_t x415 = INT32_MIN;

    t88 = ((x413&x414)!=(x415+x416));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x417 = INT8_MAX;
	volatile int8_t x418 = INT8_MAX;
	static int32_t x419 = INT32_MIN;
	uint8_t x420 = 0U;

    t89 = ((x417&x418)!=(x419+x420));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x421 = 0;
	uint64_t x423 = 153549582130LLU;
	static int32_t x424 = -8255380;
	volatile int32_t t90 = -257673;

    t90 = ((x421&x422)!=(x423+x424));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x425 = INT32_MAX;
	int32_t x426 = -1;
	uint16_t x428 = UINT16_MAX;

    t91 = ((x425&x426)!=(x427+x428));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x429 = INT64_MAX;
	uint64_t x430 = 103653113220401LLU;
	int8_t x431 = -1;
	static int64_t x432 = INT64_MAX;
	int32_t t92 = 52370218;

    t92 = ((x429&x430)!=(x431+x432));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x434 = -1;
	int8_t x435 = INT8_MIN;
	int8_t x436 = INT8_MIN;
	volatile int32_t t93 = 1179;

    t93 = ((x433&x434)!=(x435+x436));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x437 = 1484438739U;
	int32_t x438 = -100196795;
	int16_t x439 = -2;
	int32_t x440 = -1;
	volatile int32_t t94 = -9009;

    t94 = ((x437&x438)!=(x439+x440));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x441 = INT64_MIN;
	int16_t x442 = INT16_MIN;
	int16_t x444 = -1;
	static int32_t t95 = 3;

    t95 = ((x441&x442)!=(x443+x444));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x447 = 1;
	volatile uint16_t x448 = 1U;
	volatile int32_t t96 = 791087;

    t96 = ((x445&x446)!=(x447+x448));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x450 = UINT8_MAX;
	uint32_t x451 = 1U;
	int8_t x452 = -1;

    t97 = ((x449&x450)!=(x451+x452));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x453 = -275028253565488048LL;
	uint64_t x454 = UINT64_MAX;
	volatile int64_t x455 = -4393317835458738070LL;
	int8_t x456 = INT8_MAX;
	int32_t t98 = -195682692;

    t98 = ((x453&x454)!=(x455+x456));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x458 = UINT64_MAX;
	uint16_t x460 = UINT16_MAX;
	static volatile int32_t t99 = -1;

    t99 = ((x457&x458)!=(x459+x460));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x466 = INT16_MIN;
	static uint8_t x467 = 3U;
	int32_t t100 = -10637;

    t100 = ((x465&x466)!=(x467+x468));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x470 = 7U;
	uint8_t x471 = 1U;
	int16_t x472 = INT16_MIN;

    t101 = ((x469&x470)!=(x471+x472));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x473 = INT64_MIN;
	uint16_t x474 = 3933U;
	static uint32_t x475 = UINT32_MAX;
	int64_t x476 = -1LL;
	volatile int32_t t102 = 10937650;

    t102 = ((x473&x474)!=(x475+x476));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x480 = -1;
	volatile int32_t t103 = 86;

    t103 = ((x477&x478)!=(x479+x480));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x481 = 475;
	int8_t x483 = -1;
	volatile uint16_t x484 = 29519U;

    t104 = ((x481&x482)!=(x483+x484));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x485 = 28940U;
	int16_t x486 = INT16_MIN;
	uint32_t x487 = 16606U;
	int16_t x488 = INT16_MIN;
	int32_t t105 = -118418393;

    t105 = ((x485&x486)!=(x487+x488));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x489 = -1LL;
	int32_t x490 = INT32_MIN;
	volatile int64_t x491 = 3982927199LL;
	static int32_t x492 = 250;
	volatile int32_t t106 = 1627817;

    t106 = ((x489&x490)!=(x491+x492));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x494 = -270570201302LL;
	int32_t x495 = -1;
	uint16_t x496 = 13465U;
	int32_t t107 = 129669320;

    t107 = ((x493&x494)!=(x495+x496));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x498 = -1;
	int64_t x499 = 7347LL;
	volatile int64_t x500 = INT64_MIN;
	volatile int32_t t108 = 49839;

    t108 = ((x497&x498)!=(x499+x500));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x501 = UINT16_MAX;
	int8_t x502 = -1;
	volatile uint16_t x504 = 7U;
	int32_t t109 = -515238481;

    t109 = ((x501&x502)!=(x503+x504));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x505 = 0U;
	int16_t x507 = -271;
	static uint8_t x508 = UINT8_MAX;

    t110 = ((x505&x506)!=(x507+x508));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x510 = 166638653734136LLU;
	uint16_t x511 = 5335U;
	int16_t x512 = INT16_MIN;
	volatile int32_t t111 = -4291368;

    t111 = ((x509&x510)!=(x511+x512));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x513 = -1;
	uint8_t x515 = 54U;
	static int32_t t112 = 57029098;

    t112 = ((x513&x514)!=(x515+x516));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x517 = -1LL;
	int16_t x518 = INT16_MIN;
	int32_t x519 = INT32_MAX;
	int64_t x520 = INT64_MIN;
	volatile int32_t t113 = 13541;

    t113 = ((x517&x518)!=(x519+x520));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x521 = 6;
	int16_t x522 = INT16_MIN;
	uint8_t x523 = 16U;
	static volatile int8_t x524 = INT8_MIN;
	volatile int32_t t114 = -5566;

    t114 = ((x521&x522)!=(x523+x524));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x525 = 10U;
	static uint16_t x526 = UINT16_MAX;
	static int16_t x527 = INT16_MIN;
	volatile int32_t t115 = 1828;

    t115 = ((x525&x526)!=(x527+x528));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x529 = INT16_MAX;
	int32_t x530 = INT32_MIN;
	volatile int64_t x531 = INT64_MIN;
	uint8_t x532 = 32U;
	volatile int32_t t116 = 15;

    t116 = ((x529&x530)!=(x531+x532));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x537 = 165U;
	uint16_t x538 = 1670U;
	int32_t x539 = -2;
	uint8_t x540 = 0U;
	int32_t t117 = -119321013;

    t117 = ((x537&x538)!=(x539+x540));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x542 = -1LL;
	int32_t x543 = -2583;
	volatile int32_t t118 = 1182;

    t118 = ((x541&x542)!=(x543+x544));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x546 = -28146675685945328LL;
	int8_t x547 = -1;
	uint8_t x548 = 6U;
	int32_t t119 = -179;

    t119 = ((x545&x546)!=(x547+x548));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x553 = 110U;
	int64_t x554 = INT64_MIN;
	int8_t x556 = INT8_MIN;
	volatile int32_t t120 = 10929;

    t120 = ((x553&x554)!=(x555+x556));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x557 = 5659U;
	uint16_t x558 = 147U;
	int32_t x559 = -1;
	uint8_t x560 = 0U;
	int32_t t121 = 38713618;

    t121 = ((x557&x558)!=(x559+x560));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x561 = UINT8_MAX;
	int8_t x562 = -1;
	int64_t x563 = INT64_MIN;
	int64_t x564 = 31689101630LL;
	volatile int32_t t122 = 39333;

    t122 = ((x561&x562)!=(x563+x564));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x565 = -1LL;
	int64_t x566 = INT64_MIN;
	int8_t x567 = INT8_MIN;
	int8_t x568 = INT8_MIN;
	volatile int32_t t123 = -206755;

    t123 = ((x565&x566)!=(x567+x568));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x570 = 5U;
	volatile int32_t x571 = 0;
	uint64_t x572 = 729595209022LLU;
	int32_t t124 = -6;

    t124 = ((x569&x570)!=(x571+x572));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x573 = INT32_MIN;
	volatile uint16_t x574 = 7268U;
	int16_t x575 = INT16_MIN;
	int8_t x576 = INT8_MAX;
	volatile int32_t t125 = 5768;

    t125 = ((x573&x574)!=(x575+x576));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x577 = -1;
	int32_t x578 = INT32_MAX;
	int32_t x580 = INT32_MIN;
	int32_t t126 = -2514;

    t126 = ((x577&x578)!=(x579+x580));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x582 = -1;
	int32_t x583 = INT32_MIN;
	uint64_t x584 = 413233066414182383LLU;
	volatile int32_t t127 = -3411590;

    t127 = ((x581&x582)!=(x583+x584));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x585 = -1;
	static int32_t x586 = -255758897;
	int32_t x587 = -1;
	int8_t x588 = INT8_MIN;
	static volatile int32_t t128 = 171;

    t128 = ((x585&x586)!=(x587+x588));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x590 = 518;
	int8_t x591 = -13;
	uint8_t x592 = 0U;
	static int32_t t129 = 34;

    t129 = ((x589&x590)!=(x591+x592));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x593 = -88;
	volatile int8_t x594 = INT8_MAX;
	int16_t x596 = -1;
	int32_t t130 = 3409693;

    t130 = ((x593&x594)!=(x595+x596));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x597 = INT32_MIN;
	int16_t x598 = -1;
	volatile int64_t x599 = INT64_MIN;
	uint16_t x600 = 21697U;
	volatile int32_t t131 = -751518;

    t131 = ((x597&x598)!=(x599+x600));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x601 = 239U;
	int64_t x602 = INT64_MIN;
	static int16_t x603 = -1;
	uint8_t x604 = UINT8_MAX;
	int32_t t132 = 245285;

    t132 = ((x601&x602)!=(x603+x604));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x605 = -1LL;
	int32_t x606 = -1;
	volatile int8_t x608 = -16;
	int32_t t133 = 9320064;

    t133 = ((x605&x606)!=(x607+x608));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x610 = UINT64_MAX;
	uint8_t x611 = 5U;
	volatile int8_t x612 = INT8_MIN;
	static volatile int32_t t134 = 0;

    t134 = ((x609&x610)!=(x611+x612));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x615 = 1U;
	int16_t x616 = -1;
	static int32_t t135 = -34792430;

    t135 = ((x613&x614)!=(x615+x616));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x621 = 4LLU;
	int16_t x622 = INT16_MAX;
	int16_t x623 = -5475;
	int8_t x624 = -1;
	static int32_t t136 = 0;

    t136 = ((x621&x622)!=(x623+x624));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x625 = -372676164;
	int32_t x626 = INT32_MIN;
	uint8_t x628 = UINT8_MAX;
	volatile int32_t t137 = 0;

    t137 = ((x625&x626)!=(x627+x628));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint16_t x629 = 1469U;
	int8_t x631 = INT8_MAX;
	static int32_t x632 = -1;

    t138 = ((x629&x630)!=(x631+x632));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x633 = 343;
	static int64_t x634 = -1LL;
	volatile uint8_t x635 = 5U;
	uint8_t x636 = UINT8_MAX;
	int32_t t139 = -6881359;

    t139 = ((x633&x634)!=(x635+x636));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x637 = 2407587LLU;
	uint8_t x639 = 59U;
	static int64_t x640 = 234558597477498088LL;

    t140 = ((x637&x638)!=(x639+x640));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x641 = 235LL;
	uint16_t x642 = UINT16_MAX;
	uint32_t x643 = 82690142U;
	static int8_t x644 = 31;
	int32_t t141 = -1675;

    t141 = ((x641&x642)!=(x643+x644));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x645 = -1LL;
	int32_t t142 = 6857529;

    t142 = ((x645&x646)!=(x647+x648));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x650 = INT8_MAX;
	int8_t x651 = 0;
	int32_t x652 = INT32_MAX;
	int32_t t143 = -5;

    t143 = ((x649&x650)!=(x651+x652));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x653 = INT16_MIN;
	volatile int16_t x655 = -9835;
	volatile uint16_t x656 = 6U;
	int32_t t144 = 23;

    t144 = ((x653&x654)!=(x655+x656));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x661 = INT64_MAX;
	uint32_t x662 = UINT32_MAX;
	int32_t x663 = INT32_MAX;
	uint64_t x664 = UINT64_MAX;
	volatile int32_t t145 = -10;

    t145 = ((x661&x662)!=(x663+x664));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x665 = -1LL;
	static uint8_t x666 = UINT8_MAX;
	static uint8_t x667 = UINT8_MAX;
	int16_t x668 = INT16_MIN;
	volatile int32_t t146 = 953;

    t146 = ((x665&x666)!=(x667+x668));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x677 = INT64_MIN;
	int16_t x679 = -1;
	int32_t t147 = 950265066;

    t147 = ((x677&x678)!=(x679+x680));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x681 = 3U;
	volatile int32_t x682 = INT32_MAX;
	static volatile int16_t x683 = -1;
	uint8_t x684 = UINT8_MAX;
	static int32_t t148 = 3297083;

    t148 = ((x681&x682)!=(x683+x684));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x693 = INT16_MIN;
	volatile int8_t x694 = -14;
	volatile int32_t x695 = 13879746;

    t149 = ((x693&x694)!=(x695+x696));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x697 = 91U;
	int32_t x698 = 704197324;
	volatile int8_t x699 = INT8_MIN;
	int64_t x700 = -4LL;
	volatile int32_t t150 = -138;

    t150 = ((x697&x698)!=(x699+x700));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x709 = 4319153334284760588LLU;
	uint32_t x710 = 60157U;
	int32_t x711 = INT32_MIN;
	uint8_t x712 = UINT8_MAX;
	int32_t t151 = -602381305;

    t151 = ((x709&x710)!=(x711+x712));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x713 = 2U;
	int64_t x714 = -1069502433535198258LL;
	static int64_t x715 = INT64_MIN;
	uint16_t x716 = 2U;
	volatile int32_t t152 = -1193;

    t152 = ((x713&x714)!=(x715+x716));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x717 = INT64_MAX;
	int8_t x718 = INT8_MIN;
	uint32_t x719 = 1013298U;
	int32_t t153 = 498;

    t153 = ((x717&x718)!=(x719+x720));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x721 = 57U;
	volatile int8_t x722 = INT8_MIN;
	static volatile int32_t x723 = -2528179;
	uint64_t x724 = 405353LLU;
	int32_t t154 = 244;

    t154 = ((x721&x722)!=(x723+x724));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x725 = 266;
	uint16_t x726 = 58U;
	int32_t x727 = 1710;
	int64_t x728 = 4233924507LL;
	volatile int32_t t155 = -27;

    t155 = ((x725&x726)!=(x727+x728));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x729 = 15852177;
	volatile int8_t x730 = -1;
	uint32_t x732 = UINT32_MAX;
	int32_t t156 = 532403;

    t156 = ((x729&x730)!=(x731+x732));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x738 = 281336024469LL;
	uint64_t x739 = 7358719289194LLU;
	volatile int32_t t157 = -99619;

    t157 = ((x737&x738)!=(x739+x740));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x743 = 101U;
	int32_t t158 = -210934;

    t158 = ((x741&x742)!=(x743+x744));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x745 = 22068687U;
	int64_t x746 = -30605019LL;
	int32_t x747 = -1;
	uint32_t x748 = UINT32_MAX;
	volatile int32_t t159 = 159506903;

    t159 = ((x745&x746)!=(x747+x748));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x749 = INT32_MIN;
	int64_t x750 = INT64_MIN;
	int32_t x751 = -975279;

    t160 = ((x749&x750)!=(x751+x752));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x753 = -1;
	int32_t x754 = INT32_MAX;
	uint8_t x755 = 1U;
	int8_t x756 = INT8_MAX;
	static int32_t t161 = 2434186;

    t161 = ((x753&x754)!=(x755+x756));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x757 = -1;
	static uint64_t x758 = 179LLU;
	volatile int32_t t162 = -37666364;

    t162 = ((x757&x758)!=(x759+x760));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x761 = -1;
	static volatile int64_t x762 = INT64_MIN;
	int32_t x763 = INT32_MIN;
	static volatile uint8_t x764 = 1U;
	int32_t t163 = 31;

    t163 = ((x761&x762)!=(x763+x764));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x765 = -1;
	static uint8_t x766 = 10U;
	uint64_t x767 = 22352723282784LLU;
	volatile int32_t x768 = -1;
	volatile int32_t t164 = -668207;

    t164 = ((x765&x766)!=(x767+x768));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x769 = UINT8_MAX;
	int8_t x770 = INT8_MIN;
	volatile int16_t x771 = INT16_MIN;
	int32_t t165 = -5163;

    t165 = ((x769&x770)!=(x771+x772));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x777 = -42737269850066LL;
	int16_t x778 = INT16_MAX;
	int16_t x779 = INT16_MIN;
	volatile int32_t t166 = -90291807;

    t166 = ((x777&x778)!=(x779+x780));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint32_t x781 = UINT32_MAX;
	volatile uint32_t x783 = 6508U;
	int32_t x784 = INT32_MAX;
	int32_t t167 = 732;

    t167 = ((x781&x782)!=(x783+x784));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x785 = 1;
	int64_t x786 = -1LL;
	int8_t x787 = -5;
	uint64_t x788 = UINT64_MAX;
	volatile int32_t t168 = 95;

    t168 = ((x785&x786)!=(x787+x788));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x789 = -1LL;
	int32_t x790 = INT32_MIN;
	int32_t x791 = INT32_MAX;
	static volatile int16_t x792 = INT16_MIN;
	volatile int32_t t169 = -386120381;

    t169 = ((x789&x790)!=(x791+x792));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x793 = INT64_MAX;
	uint16_t x794 = UINT16_MAX;
	int16_t x795 = INT16_MIN;
	uint8_t x796 = 28U;
	volatile int32_t t170 = -239420;

    t170 = ((x793&x794)!=(x795+x796));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x797 = INT64_MIN;
	static volatile int32_t x798 = INT32_MAX;
	int8_t x799 = -10;
	int32_t t171 = -982869;

    t171 = ((x797&x798)!=(x799+x800));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x801 = INT32_MIN;
	int32_t x802 = -6;
	int64_t x804 = -469843773LL;
	int32_t t172 = 1736;

    t172 = ((x801&x802)!=(x803+x804));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x809 = INT16_MIN;
	static volatile int64_t x810 = 47337112LL;
	uint32_t x811 = 39U;
	volatile int32_t t173 = -79;

    t173 = ((x809&x810)!=(x811+x812));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x814 = INT8_MAX;
	static int8_t x815 = 50;
	uint16_t x816 = UINT16_MAX;

    t174 = ((x813&x814)!=(x815+x816));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x817 = UINT8_MAX;
	int64_t x819 = INT64_MIN;
	static int32_t t175 = 483138954;

    t175 = ((x817&x818)!=(x819+x820));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x825 = 7U;
	volatile int64_t x826 = INT64_MIN;
	uint16_t x827 = 7U;
	static int16_t x828 = -3735;
	int32_t t176 = -26463815;

    t176 = ((x825&x826)!=(x827+x828));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x831 = INT32_MIN;
	uint64_t x832 = 20037894LLU;
	static int32_t t177 = -478242930;

    t177 = ((x829&x830)!=(x831+x832));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x833 = -1;
	int64_t x835 = -34232982538LL;
	int32_t t178 = 965;

    t178 = ((x833&x834)!=(x835+x836));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x837 = -1861303621LL;
	int64_t x838 = INT64_MAX;
	uint16_t x839 = UINT16_MAX;
	volatile int16_t x840 = 6356;
	int32_t t179 = 36;

    t179 = ((x837&x838)!=(x839+x840));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x841 = INT32_MIN;
	int8_t x842 = -1;

    t180 = ((x841&x842)!=(x843+x844));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x845 = UINT16_MAX;
	volatile uint32_t x846 = 16941345U;
	static uint16_t x848 = UINT16_MAX;

    t181 = ((x845&x846)!=(x847+x848));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x853 = UINT64_MAX;
	int64_t x854 = -1LL;
	uint32_t x855 = 49384924U;
	volatile int64_t x856 = INT64_MIN;
	int32_t t182 = -2077927;

    t182 = ((x853&x854)!=(x855+x856));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x857 = 31;
	volatile int32_t x859 = -1;
	int16_t x860 = INT16_MAX;

    t183 = ((x857&x858)!=(x859+x860));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x861 = INT64_MIN;
	int64_t x862 = -1LL;
	uint16_t x863 = UINT16_MAX;
	int32_t x864 = 109234;
	int32_t t184 = -153078;

    t184 = ((x861&x862)!=(x863+x864));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x865 = INT16_MIN;
	static uint8_t x866 = 36U;
	static int64_t x867 = -1LL;
	volatile uint16_t x868 = UINT16_MAX;
	int32_t t185 = -19;

    t185 = ((x865&x866)!=(x867+x868));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x869 = 849798;
	uint8_t x870 = 54U;
	uint64_t x871 = 14LLU;
	int32_t x872 = INT32_MIN;
	volatile int32_t t186 = -18;

    t186 = ((x869&x870)!=(x871+x872));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x874 = INT32_MIN;
	int16_t x875 = 2;
	int64_t x876 = 2305497914758907LL;

    t187 = ((x873&x874)!=(x875+x876));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint16_t x877 = 46U;
	int8_t x878 = INT8_MIN;
	int16_t x879 = INT16_MIN;
	static uint16_t x880 = 5852U;
	volatile int32_t t188 = -7556185;

    t188 = ((x877&x878)!=(x879+x880));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x882 = -196;
	int16_t x883 = INT16_MIN;
	volatile int32_t t189 = -257894;

    t189 = ((x881&x882)!=(x883+x884));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x885 = UINT16_MAX;
	int8_t x887 = INT8_MIN;
	uint32_t x888 = UINT32_MAX;
	volatile int32_t t190 = 0;

    t190 = ((x885&x886)!=(x887+x888));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x889 = 21U;
	uint64_t x891 = UINT64_MAX;
	uint16_t x892 = UINT16_MAX;
	static int32_t t191 = 1017;

    t191 = ((x889&x890)!=(x891+x892));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x893 = 1785LL;
	volatile int16_t x894 = INT16_MIN;
	int64_t x895 = -36LL;
	static int32_t x896 = INT32_MIN;
	static volatile int32_t t192 = 1703553;

    t192 = ((x893&x894)!=(x895+x896));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x898 = INT32_MIN;
	volatile int16_t x899 = -7;
	volatile int32_t t193 = -2393762;

    t193 = ((x897&x898)!=(x899+x900));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint32_t x901 = 184218577U;
	int64_t x903 = -1LL;
	static uint32_t x904 = UINT32_MAX;
	static volatile int32_t t194 = 426503092;

    t194 = ((x901&x902)!=(x903+x904));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x905 = INT8_MIN;
	int64_t x906 = -130LL;
	int16_t x908 = INT16_MIN;

    t195 = ((x905&x906)!=(x907+x908));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x909 = INT8_MIN;
	int32_t x910 = 190433065;
	int8_t x911 = -10;
	uint16_t x912 = 1250U;

    t196 = ((x909&x910)!=(x911+x912));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x913 = 71489281324744LL;
	int8_t x914 = INT8_MIN;
	int32_t t197 = 1;

    t197 = ((x913&x914)!=(x915+x916));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x917 = INT16_MIN;
	uint8_t x918 = UINT8_MAX;
	static uint16_t x919 = UINT16_MAX;
	static uint8_t x920 = 1U;
	volatile int32_t t198 = 83361577;

    t198 = ((x917&x918)!=(x919+x920));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x921 = INT8_MIN;
	int8_t x922 = INT8_MAX;
	static uint16_t x923 = UINT16_MAX;
	static uint32_t x924 = UINT32_MAX;
	int32_t t199 = 707715692;

    t199 = ((x921&x922)!=(x923+x924));

    if (t199 != 1) { NG(); } else { ; }
	
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

