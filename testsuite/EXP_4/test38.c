
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

int64_t x1 = INT64_MIN;
int32_t t2 = 812;
int8_t x34 = INT8_MAX;
uint32_t x35 = UINT32_MAX;
int32_t t4 = 227346;
static volatile int64_t x42 = -1LL;
int8_t x49 = -62;
uint8_t x57 = 2U;
static uint8_t x59 = 0U;
int32_t t10 = 443770217;
uint64_t x73 = UINT64_MAX;
int32_t x85 = -1;
volatile uint64_t x87 = 2196402599500LLU;
int32_t x88 = INT32_MIN;
int32_t t13 = -161041214;
static uint64_t x93 = 408344981093963999LLU;
volatile int32_t x99 = 174;
static int8_t x109 = -6;
volatile int32_t t18 = 3136038;
volatile int16_t x130 = INT16_MAX;
int16_t x134 = -3115;
int16_t x136 = INT16_MAX;
volatile int32_t t22 = -14728547;
int64_t x141 = INT64_MIN;
uint32_t x143 = 2665U;
uint32_t x149 = UINT32_MAX;
uint64_t x150 = 3339302853443139LLU;
static int32_t t25 = -3;
static volatile uint16_t x163 = UINT16_MAX;
static int8_t x166 = INT8_MIN;
static int32_t t29 = -3300;
int32_t x169 = -888366251;
int64_t x170 = -1LL;
volatile uint32_t x188 = 138472U;
static int64_t x193 = INT64_MIN;
uint16_t x196 = 0U;
int32_t x204 = INT32_MIN;
uint8_t x205 = 11U;
static int32_t x206 = -260;
int32_t t37 = -119;
static volatile int32_t t38 = -184329573;
int32_t t40 = -4093;
volatile int32_t t43 = 852638;
int8_t x261 = 0;
int16_t x262 = 224;
volatile int32_t t44 = -259;
int8_t x278 = -1;
int32_t t47 = 65173320;
int16_t x286 = INT16_MAX;
int8_t x287 = 1;
uint16_t x289 = 29729U;
static int16_t x292 = INT16_MIN;
int64_t x313 = -7075669559998134LL;
int32_t x316 = -6069;
uint32_t x318 = 2U;
int16_t x319 = -1;
uint32_t x330 = 291U;
volatile uint32_t x332 = 27U;
uint8_t x358 = UINT8_MAX;
volatile int32_t t58 = -968736751;
static int16_t x362 = -7303;
uint32_t x363 = UINT32_MAX;
int8_t x368 = INT8_MIN;
int8_t x370 = -1;
int32_t t61 = 32560;
uint16_t x380 = 183U;
int32_t x397 = 3920507;
uint32_t x399 = 1569U;
volatile uint16_t x427 = 0U;
uint64_t x428 = 475798142502LLU;
uint32_t x445 = UINT32_MAX;
int32_t x449 = INT32_MIN;
static int32_t t71 = -353816637;
int16_t x454 = -1;
static uint8_t x467 = 48U;
volatile int16_t x500 = INT16_MIN;
int32_t t77 = -12951;
volatile uint8_t x505 = 0U;
static volatile int32_t t79 = 780;
int8_t x523 = -50;
volatile uint64_t x524 = 223375840195990326LLU;
static int8_t x526 = INT8_MIN;
static uint32_t x532 = 3041315U;
volatile uint16_t x569 = 916U;
volatile int64_t x574 = -8498547923974626LL;
static uint16_t x585 = 5U;
int16_t x586 = INT16_MIN;
int32_t t92 = 20713858;
uint16_t x598 = UINT16_MAX;
uint8_t x606 = 1U;
uint32_t x607 = 1903519265U;
int32_t x609 = 14026;
int16_t x612 = 0;
uint64_t x618 = 39LLU;
int32_t x621 = -1;
volatile int32_t t98 = -15713596;
volatile int8_t x630 = -7;
uint64_t x637 = 13LLU;
int8_t x651 = -1;
uint32_t x656 = 1U;
volatile int16_t x662 = -140;
static uint64_t x663 = 7840922550LLU;
volatile int16_t x664 = INT16_MIN;
int32_t t104 = -514729;
volatile uint8_t x672 = 1U;
static uint64_t x679 = 98804LLU;
volatile uint16_t x687 = UINT16_MAX;
int32_t x698 = -1;
int8_t x700 = 0;
static int64_t x702 = -1LL;
int8_t x704 = INT8_MIN;
static volatile int32_t x705 = 194507;
int16_t x711 = 3;
int64_t x714 = -1LL;
int32_t t115 = -37923373;
uint8_t x726 = 31U;
static int16_t x730 = -133;
int16_t x736 = -1;
uint64_t x754 = 420766743LLU;
int16_t x761 = 4894;
static uint32_t x774 = UINT32_MAX;
int16_t x781 = INT16_MAX;
int32_t x782 = INT32_MAX;
int32_t t127 = -117872620;
uint16_t x803 = 3814U;
int32_t x805 = INT32_MIN;
static volatile int16_t x822 = 624;
volatile int16_t x823 = INT16_MIN;
int8_t x835 = INT8_MIN;
int16_t x837 = -1;
int32_t x841 = -4065;
volatile uint64_t x844 = 19471629LLU;
int8_t x850 = INT8_MIN;
volatile int32_t x852 = -450309;
uint8_t x854 = UINT8_MAX;
int64_t x869 = INT64_MIN;
static int64_t x877 = -1LL;
int64_t x889 = INT64_MIN;
static uint8_t x890 = 66U;
int8_t x907 = 1;
uint8_t x913 = 0U;
uint64_t x920 = UINT64_MAX;
volatile int32_t t147 = -823021;
uint8_t x932 = UINT8_MAX;
int8_t x936 = INT8_MIN;
static volatile int32_t t151 = -639846471;
static int16_t x938 = INT16_MIN;
uint8_t x942 = 10U;
static volatile uint64_t x944 = 8515061745398851417LLU;
static volatile int32_t t153 = 2;
volatile uint64_t x947 = UINT64_MAX;
uint64_t x948 = 2630748442435023622LLU;
int32_t t156 = 570130033;
int16_t x984 = INT16_MIN;
volatile int16_t x990 = 477;
int64_t x1011 = -1LL;
int16_t x1017 = -12012;
int32_t t165 = 2458618;
uint32_t x1026 = 7055244U;
static volatile int32_t t166 = -133102323;
uint16_t x1032 = UINT16_MAX;
volatile int32_t t167 = -1779;
volatile uint64_t x1036 = UINT64_MAX;
volatile uint16_t x1046 = UINT16_MAX;
int32_t t170 = -90;
volatile uint32_t x1062 = 3U;
int16_t x1065 = INT16_MIN;
int32_t x1067 = 137151;
int64_t x1069 = -1LL;
static int8_t x1075 = 1;
volatile int32_t t174 = -491;
int8_t x1078 = INT8_MAX;
int16_t x1085 = INT16_MIN;
int8_t x1087 = -7;
volatile int32_t t176 = -111841728;
volatile int16_t x1089 = INT16_MAX;
uint32_t x1091 = 22372U;
int32_t x1092 = INT32_MIN;
int8_t x1102 = 59;
uint64_t x1103 = 1627132LLU;
uint32_t x1118 = UINT32_MAX;
uint32_t x1120 = 841U;
int16_t x1122 = -1;
uint32_t x1123 = 4U;
int32_t t182 = -1;
int8_t x1126 = -1;
volatile int32_t x1131 = 132766038;
static volatile int32_t t184 = -228798080;
int64_t x1135 = -95LL;
int32_t x1145 = -1;
int32_t x1146 = -40;
uint32_t x1148 = UINT32_MAX;
int32_t x1149 = -1;
static int32_t x1151 = -1;
int64_t x1160 = -1LL;
int16_t x1162 = -1;
static volatile int64_t x1172 = 12839826131LL;
volatile int8_t x1173 = INT8_MAX;
int16_t x1174 = INT16_MIN;
static uint16_t x1180 = 81U;
int32_t t195 = -9941;
static uint16_t x1191 = 524U;
uint8_t x1199 = UINT8_MAX;
int8_t x1200 = 25;
int32_t x1201 = INT32_MAX;
int32_t t199 = 0;


void f0(void) {
    	volatile uint16_t x2 = 65U;
	int16_t x3 = 5;
	static uint32_t x4 = 52724943U;
	int32_t t0 = -2738;

    t0 = (x1<=(x2*(x3+x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x13 = INT16_MIN;
	volatile uint32_t x14 = UINT32_MAX;
	static int32_t x15 = -1;
	int32_t x16 = INT32_MAX;
	int32_t t1 = -62922870;

    t1 = (x13<=(x14*(x15+x16)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x25 = 79U;
	int64_t x26 = -1LL;
	static uint32_t x27 = 67U;
	int8_t x28 = INT8_MIN;

    t2 = (x25<=(x26*(x27+x28)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x29 = 1LLU;
	int32_t x30 = 1442;
	uint16_t x31 = 5U;
	uint8_t x32 = UINT8_MAX;
	static int32_t t3 = 0;

    t3 = (x29<=(x30*(x31+x32)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x33 = INT8_MAX;
	static int64_t x36 = -32137575720LL;

    t4 = (x33<=(x34*(x35+x36)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x37 = INT8_MIN;
	volatile int16_t x38 = INT16_MIN;
	int8_t x39 = 1;
	uint16_t x40 = 20598U;
	volatile int32_t t5 = -3440767;

    t5 = (x37<=(x38*(x39+x40)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x41 = -44;
	uint64_t x43 = 13562114178LLU;
	static int16_t x44 = 116;
	volatile int32_t t6 = -394886245;

    t6 = (x41<=(x42*(x43+x44)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x45 = -56;
	volatile uint64_t x46 = 430LLU;
	uint64_t x47 = UINT64_MAX;
	static uint8_t x48 = UINT8_MAX;
	volatile int32_t t7 = -474185;

    t7 = (x45<=(x46*(x47+x48)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x50 = -2387;
	uint64_t x51 = UINT64_MAX;
	volatile uint8_t x52 = UINT8_MAX;
	int32_t t8 = -82;

    t8 = (x49<=(x50*(x51+x52)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x53 = 48U;
	int16_t x54 = -1;
	int16_t x55 = -1;
	volatile int8_t x56 = INT8_MAX;
	static int32_t t9 = 183;

    t9 = (x53<=(x54*(x55+x56)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x58 = UINT64_MAX;
	static uint8_t x60 = UINT8_MAX;

    t10 = (x57<=(x58*(x59+x60)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x74 = -1961;
	int8_t x75 = INT8_MIN;
	static uint32_t x76 = 238045203U;
	volatile int32_t t11 = 72;

    t11 = (x73<=(x74*(x75+x76)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x86 = 0U;
	volatile int32_t t12 = 6965400;

    t12 = (x85<=(x86*(x87+x88)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x89 = INT16_MIN;
	int32_t x90 = INT32_MAX;
	uint64_t x91 = 21683LLU;
	int32_t x92 = INT32_MIN;

    t13 = (x89<=(x90*(x91+x92)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x94 = -1LL;
	uint8_t x95 = UINT8_MAX;
	uint8_t x96 = UINT8_MAX;
	int32_t t14 = 0;

    t14 = (x93<=(x94*(x95+x96)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x97 = INT16_MIN;
	volatile int32_t x98 = INT32_MIN;
	volatile uint32_t x100 = UINT32_MAX;
	int32_t t15 = 51136;

    t15 = (x97<=(x98*(x99+x100)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x105 = 413877LLU;
	int16_t x106 = INT16_MIN;
	uint16_t x107 = UINT16_MAX;
	int8_t x108 = 0;
	int32_t t16 = -1634;

    t16 = (x105<=(x106*(x107+x108)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x110 = 9U;
	int16_t x111 = -1;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t17 = 1913;

    t17 = (x109<=(x110*(x111+x112)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x117 = 272436242840063207LLU;
	static volatile int16_t x118 = INT16_MIN;
	int64_t x119 = -1LL;
	static volatile int32_t x120 = INT32_MIN;

    t18 = (x117<=(x118*(x119+x120)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x125 = 732354048020LL;
	uint16_t x126 = UINT16_MAX;
	volatile int16_t x127 = INT16_MIN;
	volatile int64_t x128 = -12635015506756LL;
	volatile int32_t t19 = 6155;

    t19 = (x125<=(x126*(x127+x128)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x129 = 150610571654281LL;
	volatile int16_t x131 = INT16_MIN;
	uint16_t x132 = 1947U;
	static int32_t t20 = 42;

    t20 = (x129<=(x130*(x131+x132)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x133 = INT8_MAX;
	uint8_t x135 = UINT8_MAX;
	volatile int32_t t21 = -4;

    t21 = (x133<=(x134*(x135+x136)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x137 = INT16_MIN;
	volatile int64_t x138 = -32501329260510472LL;
	uint32_t x139 = 27U;
	uint64_t x140 = 250889457LLU;

    t22 = (x137<=(x138*(x139+x140)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x142 = -6;
	uint32_t x144 = 4088869U;
	int32_t t23 = 25005169;

    t23 = (x141<=(x142*(x143+x144)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x145 = -1;
	volatile int8_t x146 = INT8_MIN;
	int8_t x147 = -1;
	int8_t x148 = INT8_MAX;
	static int32_t t24 = 2061275;

    t24 = (x145<=(x146*(x147+x148)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x151 = -1LL;
	volatile int32_t x152 = 3345;

    t25 = (x149<=(x150*(x151+x152)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x153 = INT16_MIN;
	int16_t x154 = 0;
	int16_t x155 = INT16_MAX;
	uint32_t x156 = 19047U;
	int32_t t26 = 27;

    t26 = (x153<=(x154*(x155+x156)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x157 = 53;
	int8_t x158 = -1;
	int16_t x159 = INT16_MAX;
	int8_t x160 = -4;
	volatile int32_t t27 = 530405;

    t27 = (x157<=(x158*(x159+x160)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x161 = UINT16_MAX;
	static int16_t x162 = -1;
	uint64_t x164 = UINT64_MAX;
	int32_t t28 = 461;

    t28 = (x161<=(x162*(x163+x164)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x165 = 4178542294052LL;
	int16_t x167 = INT16_MAX;
	uint32_t x168 = 83391U;

    t29 = (x165<=(x166*(x167+x168)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x171 = INT64_MIN;
	int32_t x172 = 55901;
	int32_t t30 = -554624513;

    t30 = (x169<=(x170*(x171+x172)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x173 = INT16_MAX;
	static uint64_t x174 = 3675011785798740LLU;
	int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MIN;
	volatile int32_t t31 = 77447;

    t31 = (x173<=(x174*(x175+x176)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x177 = UINT8_MAX;
	static uint64_t x178 = 11009LLU;
	int64_t x179 = 49093082072501LL;
	int64_t x180 = INT64_MIN;
	static volatile int32_t t32 = -1;

    t32 = (x177<=(x178*(x179+x180)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MAX;
	static volatile int32_t t33 = -2;

    t33 = (x185<=(x186*(x187+x188)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x189 = 2256692LLU;
	static volatile uint32_t x190 = 5420625U;
	volatile int32_t x191 = -1;
	static volatile uint8_t x192 = UINT8_MAX;
	static volatile int32_t t34 = -221687;

    t34 = (x189<=(x190*(x191+x192)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x194 = 17240LLU;
	volatile int32_t x195 = INT32_MIN;
	static volatile int32_t t35 = 1;

    t35 = (x193<=(x194*(x195+x196)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x201 = INT8_MAX;
	uint8_t x202 = 13U;
	int64_t x203 = -1LL;
	int32_t t36 = 1564935;

    t36 = (x201<=(x202*(x203+x204)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x207 = 15818U;
	static volatile uint64_t x208 = 1994061926340430LLU;

    t37 = (x205<=(x206*(x207+x208)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x209 = 32982LL;
	int16_t x210 = 0;
	int16_t x211 = INT16_MIN;
	volatile int16_t x212 = -1;

    t38 = (x209<=(x210*(x211+x212)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x225 = -1;
	uint32_t x226 = UINT32_MAX;
	uint8_t x227 = 5U;
	static int16_t x228 = INT16_MAX;
	volatile int32_t t39 = -1;

    t39 = (x225<=(x226*(x227+x228)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x233 = 62;
	uint8_t x234 = 5U;
	int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MAX;

    t40 = (x233<=(x234*(x235+x236)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x241 = INT64_MIN;
	static volatile int16_t x242 = INT16_MIN;
	volatile int8_t x243 = -1;
	int8_t x244 = -1;
	static volatile int32_t t41 = -3673103;

    t41 = (x241<=(x242*(x243+x244)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x245 = 0U;
	volatile uint16_t x246 = UINT16_MAX;
	int32_t x247 = -10;
	volatile int8_t x248 = INT8_MIN;
	volatile int32_t t42 = -685;

    t42 = (x245<=(x246*(x247+x248)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x257 = 3943359682LLU;
	int8_t x258 = INT8_MIN;
	static uint16_t x259 = 359U;
	int8_t x260 = -1;

    t43 = (x257<=(x258*(x259+x260)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x263 = UINT32_MAX;
	volatile int16_t x264 = INT16_MIN;

    t44 = (x261<=(x262*(x263+x264)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x265 = INT32_MIN;
	static volatile uint16_t x266 = 1704U;
	volatile uint8_t x267 = UINT8_MAX;
	static uint32_t x268 = UINT32_MAX;
	volatile int32_t t45 = -57749886;

    t45 = (x265<=(x266*(x267+x268)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x273 = INT64_MIN;
	static int8_t x274 = INT8_MIN;
	int8_t x275 = 1;
	uint8_t x276 = 119U;
	static int32_t t46 = 29;

    t46 = (x273<=(x274*(x275+x276)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x277 = 126228270277LLU;
	int16_t x279 = 179;
	uint32_t x280 = UINT32_MAX;

    t47 = (x277<=(x278*(x279+x280)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x281 = UINT16_MAX;
	int32_t x282 = -1963239;
	int8_t x283 = INT8_MIN;
	static uint64_t x284 = 332510LLU;
	volatile int32_t t48 = 3193914;

    t48 = (x281<=(x282*(x283+x284)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x285 = INT8_MAX;
	int8_t x288 = INT8_MAX;
	int32_t t49 = 1526659;

    t49 = (x285<=(x286*(x287+x288)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x290 = 90U;
	int16_t x291 = INT16_MIN;
	volatile int32_t t50 = -111886;

    t50 = (x289<=(x290*(x291+x292)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x314 = UINT16_MAX;
	static volatile int8_t x315 = -1;
	int32_t t51 = 34041606;

    t51 = (x313<=(x314*(x315+x316)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x317 = 107690522U;
	uint32_t x320 = UINT32_MAX;
	static int32_t t52 = -1317;

    t52 = (x317<=(x318*(x319+x320)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x325 = INT8_MIN;
	int64_t x326 = -1LL;
	uint64_t x327 = 13LLU;
	int8_t x328 = INT8_MIN;
	static int32_t t53 = 330025028;

    t53 = (x325<=(x326*(x327+x328)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x329 = 102U;
	int8_t x331 = -1;
	static volatile int32_t t54 = 19263;

    t54 = (x329<=(x330*(x331+x332)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x333 = 1U;
	int16_t x334 = -1;
	uint64_t x335 = 9713LLU;
	int32_t x336 = 1;
	volatile int32_t t55 = -62844;

    t55 = (x333<=(x334*(x335+x336)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x337 = 961330129;
	int8_t x338 = INT8_MAX;
	uint16_t x339 = 3U;
	int8_t x340 = INT8_MIN;
	int32_t t56 = 0;

    t56 = (x337<=(x338*(x339+x340)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x353 = 1485;
	int8_t x354 = -1;
	int8_t x355 = INT8_MAX;
	uint32_t x356 = UINT32_MAX;
	static volatile int32_t t57 = -108;

    t57 = (x353<=(x354*(x355+x356)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x357 = 2;
	int16_t x359 = -1;
	int8_t x360 = INT8_MAX;

    t58 = (x357<=(x358*(x359+x360)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x361 = INT16_MIN;
	int32_t x364 = INT32_MAX;
	volatile int32_t t59 = -116;

    t59 = (x361<=(x362*(x363+x364)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x365 = INT16_MAX;
	int64_t x366 = -6044453802447LL;
	volatile uint16_t x367 = 2468U;
	volatile int32_t t60 = -23103;

    t60 = (x365<=(x366*(x367+x368)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x369 = -474445216627554LL;
	int16_t x371 = INT16_MIN;
	static volatile int16_t x372 = INT16_MAX;

    t61 = (x369<=(x370*(x371+x372)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x377 = UINT64_MAX;
	uint64_t x378 = UINT64_MAX;
	int32_t x379 = -991892436;
	volatile int32_t t62 = -372382755;

    t62 = (x377<=(x378*(x379+x380)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x393 = INT64_MIN;
	volatile uint8_t x394 = 2U;
	int16_t x395 = INT16_MAX;
	volatile uint16_t x396 = 7U;
	int32_t t63 = 1521403;

    t63 = (x393<=(x394*(x395+x396)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x398 = INT8_MIN;
	volatile int64_t x400 = -1LL;
	volatile int32_t t64 = 79698759;

    t64 = (x397<=(x398*(x399+x400)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x401 = UINT32_MAX;
	static uint8_t x402 = 27U;
	int32_t x403 = -1;
	int16_t x404 = INT16_MIN;
	static volatile int32_t t65 = 1266921;

    t65 = (x401<=(x402*(x403+x404)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x417 = INT32_MAX;
	int32_t x418 = -1;
	volatile uint16_t x419 = UINT16_MAX;
	uint8_t x420 = UINT8_MAX;
	static volatile int32_t t66 = -143443;

    t66 = (x417<=(x418*(x419+x420)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x421 = -1;
	static int32_t x422 = 33;
	uint16_t x423 = UINT16_MAX;
	int16_t x424 = INT16_MAX;
	static int32_t t67 = -216191;

    t67 = (x421<=(x422*(x423+x424)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x425 = INT32_MIN;
	uint32_t x426 = 39391721U;
	int32_t t68 = 2250180;

    t68 = (x425<=(x426*(x427+x428)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x433 = -1LL;
	static int8_t x434 = 0;
	static int32_t x435 = -1;
	static volatile int64_t x436 = -8871268259LL;
	volatile int32_t t69 = 78534035;

    t69 = (x433<=(x434*(x435+x436)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x446 = UINT64_MAX;
	uint64_t x447 = UINT64_MAX;
	volatile int16_t x448 = INT16_MAX;
	volatile int32_t t70 = -1605;

    t70 = (x445<=(x446*(x447+x448)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x450 = 0;
	static uint32_t x451 = 965U;
	static uint32_t x452 = 33U;

    t71 = (x449<=(x450*(x451+x452)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x453 = INT16_MAX;
	uint64_t x455 = 197286963520757LLU;
	volatile int64_t x456 = -1LL;
	volatile int32_t t72 = 3754024;

    t72 = (x453<=(x454*(x455+x456)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x461 = UINT8_MAX;
	int32_t x462 = INT32_MIN;
	static uint64_t x463 = 1097LLU;
	uint8_t x464 = 12U;
	static volatile int32_t t73 = -58;

    t73 = (x461<=(x462*(x463+x464)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x465 = 104U;
	volatile uint32_t x466 = UINT32_MAX;
	uint32_t x468 = 50U;
	volatile int32_t t74 = -1;

    t74 = (x465<=(x466*(x467+x468)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x481 = -1;
	uint64_t x482 = 61759008506LLU;
	volatile int32_t x483 = -1;
	uint8_t x484 = 18U;
	volatile int32_t t75 = -3584128;

    t75 = (x481<=(x482*(x483+x484)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x485 = -11;
	int8_t x486 = -1;
	uint16_t x487 = 1U;
	int16_t x488 = INT16_MIN;
	volatile int32_t t76 = 985;

    t76 = (x485<=(x486*(x487+x488)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x497 = -376540090127517LL;
	volatile int64_t x498 = INT64_MAX;
	uint64_t x499 = UINT64_MAX;

    t77 = (x497<=(x498*(x499+x500)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x501 = -1376164453796060562LL;
	static int8_t x502 = -1;
	uint64_t x503 = 107LLU;
	volatile uint16_t x504 = UINT16_MAX;
	int32_t t78 = -389997;

    t78 = (x501<=(x502*(x503+x504)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x506 = 2U;
	uint64_t x507 = 120LLU;
	static int8_t x508 = -1;

    t79 = (x505<=(x506*(x507+x508)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x513 = 178378866U;
	int16_t x514 = 5;
	int32_t x515 = -32428139;
	int16_t x516 = INT16_MIN;
	int32_t t80 = -15;

    t80 = (x513<=(x514*(x515+x516)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x517 = 314095406902LL;
	static int16_t x518 = INT16_MIN;
	static uint16_t x519 = 0U;
	int64_t x520 = -12005934LL;
	int32_t t81 = 299141017;

    t81 = (x517<=(x518*(x519+x520)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x521 = 5U;
	volatile int64_t x522 = INT64_MAX;
	int32_t t82 = -199586456;

    t82 = (x521<=(x522*(x523+x524)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x525 = INT16_MIN;
	int64_t x527 = 57LL;
	uint8_t x528 = UINT8_MAX;
	volatile int32_t t83 = 765;

    t83 = (x525<=(x526*(x527+x528)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x529 = 51U;
	uint16_t x530 = 5U;
	static int8_t x531 = -52;
	static volatile int32_t t84 = -1814162;

    t84 = (x529<=(x530*(x531+x532)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x541 = 831;
	static int8_t x542 = INT8_MAX;
	volatile int16_t x543 = -1;
	volatile int64_t x544 = -1LL;
	int32_t t85 = -205802;

    t85 = (x541<=(x542*(x543+x544)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x549 = 326183283LLU;
	static int8_t x550 = -1;
	uint8_t x551 = UINT8_MAX;
	uint8_t x552 = 2U;
	volatile int32_t t86 = 4;

    t86 = (x549<=(x550*(x551+x552)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x561 = 90U;
	int16_t x562 = -61;
	static uint64_t x563 = 8176407757LLU;
	static uint8_t x564 = 18U;
	volatile int32_t t87 = -9526040;

    t87 = (x561<=(x562*(x563+x564)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x570 = -1LL;
	int32_t x571 = 146982563;
	static int64_t x572 = INT64_MIN;
	int32_t t88 = -85131549;

    t88 = (x569<=(x570*(x571+x572)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x573 = 52;
	uint8_t x575 = UINT8_MAX;
	static int32_t x576 = -1;
	volatile int32_t t89 = -1061730190;

    t89 = (x573<=(x574*(x575+x576)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x581 = UINT32_MAX;
	static int64_t x582 = -1LL;
	int8_t x583 = INT8_MIN;
	volatile int32_t x584 = -129760133;
	volatile int32_t t90 = -261230830;

    t90 = (x581<=(x582*(x583+x584)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x587 = INT16_MIN;
	int32_t x588 = -1;
	int32_t t91 = -361;

    t91 = (x585<=(x586*(x587+x588)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x589 = -28;
	int32_t x590 = -1;
	uint64_t x591 = 13807370099838643LLU;
	int64_t x592 = INT64_MAX;

    t92 = (x589<=(x590*(x591+x592)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x593 = 10;
	int16_t x594 = INT16_MIN;
	uint64_t x595 = 129650107219069619LLU;
	volatile int64_t x596 = INT64_MIN;
	int32_t t93 = -14;

    t93 = (x593<=(x594*(x595+x596)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x597 = -1;
	uint16_t x599 = 1878U;
	static int16_t x600 = -42;
	volatile int32_t t94 = 6687;

    t94 = (x597<=(x598*(x599+x600)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x605 = 7949LL;
	static int32_t x608 = INT32_MAX;
	volatile int32_t t95 = -191635624;

    t95 = (x605<=(x606*(x607+x608)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x610 = -22;
	int8_t x611 = INT8_MIN;
	volatile int32_t t96 = 12001;

    t96 = (x609<=(x610*(x611+x612)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x617 = -7;
	int8_t x619 = INT8_MIN;
	static int8_t x620 = INT8_MIN;
	int32_t t97 = -3;

    t97 = (x617<=(x618*(x619+x620)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x622 = 97994328104LLU;
	uint32_t x623 = UINT32_MAX;
	int32_t x624 = INT32_MAX;

    t98 = (x621<=(x622*(x623+x624)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x629 = 214LL;
	static uint16_t x631 = UINT16_MAX;
	uint16_t x632 = 62U;
	static int32_t t99 = -11602;

    t99 = (x629<=(x630*(x631+x632)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x638 = INT16_MAX;
	int8_t x639 = INT8_MAX;
	volatile int8_t x640 = INT8_MIN;
	volatile int32_t t100 = 15815358;

    t100 = (x637<=(x638*(x639+x640)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x649 = UINT8_MAX;
	int8_t x650 = INT8_MIN;
	static volatile int8_t x652 = INT8_MAX;
	int32_t t101 = 528992;

    t101 = (x649<=(x650*(x651+x652)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x653 = 1;
	int16_t x654 = 1;
	static int16_t x655 = INT16_MIN;
	static volatile int32_t t102 = 2971;

    t102 = (x653<=(x654*(x655+x656)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x657 = -4030;
	int32_t x658 = 374;
	uint64_t x659 = UINT64_MAX;
	volatile int16_t x660 = INT16_MIN;
	static volatile int32_t t103 = -316579;

    t103 = (x657<=(x658*(x659+x660)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x661 = -1386;

    t104 = (x661<=(x662*(x663+x664)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x669 = INT32_MIN;
	int8_t x670 = INT8_MIN;
	static volatile uint16_t x671 = 669U;
	volatile int32_t t105 = 3512433;

    t105 = (x669<=(x670*(x671+x672)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x673 = INT64_MAX;
	int16_t x674 = -1;
	int32_t x675 = 360480;
	uint8_t x676 = 1U;
	static volatile int32_t t106 = 765;

    t106 = (x673<=(x674*(x675+x676)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x677 = 22;
	uint32_t x678 = 35584U;
	uint16_t x680 = 1373U;
	volatile int32_t t107 = -45196566;

    t107 = (x677<=(x678*(x679+x680)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x685 = -11LL;
	int16_t x686 = 20;
	uint16_t x688 = 18U;
	volatile int32_t t108 = 11189678;

    t108 = (x685<=(x686*(x687+x688)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x689 = 19818316190910LL;
	static volatile uint16_t x690 = UINT16_MAX;
	volatile uint32_t x691 = 65499502U;
	uint8_t x692 = UINT8_MAX;
	volatile int32_t t109 = -35;

    t109 = (x689<=(x690*(x691+x692)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x697 = 986735383U;
	int64_t x699 = 8817183LL;
	static int32_t t110 = -3;

    t110 = (x697<=(x698*(x699+x700)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x701 = -31;
	static int64_t x703 = -122080894217696600LL;
	int32_t t111 = 3;

    t111 = (x701<=(x702*(x703+x704)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x706 = INT8_MIN;
	int64_t x707 = 2887782LL;
	static int8_t x708 = INT8_MAX;
	int32_t t112 = -610;

    t112 = (x705<=(x706*(x707+x708)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x709 = 5651267LLU;
	int16_t x710 = INT16_MIN;
	uint8_t x712 = 11U;
	int32_t t113 = 13369262;

    t113 = (x709<=(x710*(x711+x712)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x713 = 0;
	int16_t x715 = -1;
	int32_t x716 = INT32_MAX;
	int32_t t114 = -57629606;

    t114 = (x713<=(x714*(x715+x716)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x721 = INT32_MAX;
	int32_t x722 = 216290;
	int8_t x723 = -1;
	uint16_t x724 = 1U;

    t115 = (x721<=(x722*(x723+x724)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x725 = 1561U;
	int8_t x727 = INT8_MIN;
	uint8_t x728 = 0U;
	volatile int32_t t116 = -92;

    t116 = (x725<=(x726*(x727+x728)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x729 = UINT64_MAX;
	uint32_t x731 = 174245338U;
	volatile int8_t x732 = -1;
	volatile int32_t t117 = 7;

    t117 = (x729<=(x730*(x731+x732)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x733 = 495U;
	int64_t x734 = -715461LL;
	int16_t x735 = INT16_MIN;
	int32_t t118 = 7092438;

    t118 = (x733<=(x734*(x735+x736)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x741 = INT16_MIN;
	uint32_t x742 = 156U;
	uint64_t x743 = 2056221314LLU;
	int64_t x744 = INT64_MIN;
	volatile int32_t t119 = 1006;

    t119 = (x741<=(x742*(x743+x744)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x749 = -6;
	volatile uint16_t x750 = 41U;
	uint8_t x751 = UINT8_MAX;
	uint64_t x752 = UINT64_MAX;
	volatile int32_t t120 = 1;

    t120 = (x749<=(x750*(x751+x752)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x753 = INT8_MIN;
	int16_t x755 = INT16_MAX;
	volatile uint64_t x756 = UINT64_MAX;
	int32_t t121 = -46436413;

    t121 = (x753<=(x754*(x755+x756)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x762 = -1;
	uint8_t x763 = UINT8_MAX;
	int64_t x764 = 7LL;
	int32_t t122 = 13653;

    t122 = (x761<=(x762*(x763+x764)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x773 = INT32_MIN;
	uint32_t x775 = 144U;
	volatile int32_t x776 = INT32_MIN;
	static int32_t t123 = -1662016;

    t123 = (x773<=(x774*(x775+x776)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x777 = 107675862U;
	int8_t x778 = -1;
	volatile uint64_t x779 = 102471953370280101LLU;
	static uint16_t x780 = UINT16_MAX;
	static int32_t t124 = -5939549;

    t124 = (x777<=(x778*(x779+x780)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x783 = 0;
	uint8_t x784 = 1U;
	int32_t t125 = -39381;

    t125 = (x781<=(x782*(x783+x784)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x785 = -1LL;
	uint64_t x786 = 100737819369LLU;
	uint16_t x787 = 349U;
	int64_t x788 = INT64_MIN;
	int32_t t126 = -14;

    t126 = (x785<=(x786*(x787+x788)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x797 = INT32_MIN;
	uint64_t x798 = 11338389980799LLU;
	int16_t x799 = 768;
	static int32_t x800 = -1;

    t127 = (x797<=(x798*(x799+x800)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x801 = INT64_MIN;
	volatile int8_t x802 = -1;
	volatile uint16_t x804 = 440U;
	volatile int32_t t128 = -915;

    t128 = (x801<=(x802*(x803+x804)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x806 = 41450781673629030LLU;
	uint8_t x807 = UINT8_MAX;
	int8_t x808 = -1;
	int32_t t129 = -30;

    t129 = (x805<=(x806*(x807+x808)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x817 = -1;
	static volatile int64_t x818 = -1LL;
	int8_t x819 = -1;
	int8_t x820 = INT8_MIN;
	static volatile int32_t t130 = -9016;

    t130 = (x817<=(x818*(x819+x820)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x821 = 4;
	uint8_t x824 = 34U;
	static int32_t t131 = 0;

    t131 = (x821<=(x822*(x823+x824)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x833 = 35813443LL;
	int16_t x834 = -8263;
	int8_t x836 = -1;
	static int32_t t132 = 0;

    t132 = (x833<=(x834*(x835+x836)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x838 = INT32_MIN;
	static volatile uint64_t x839 = 2090593946608327947LLU;
	uint64_t x840 = 8599619185617586LLU;
	static volatile int32_t t133 = 25516121;

    t133 = (x837<=(x838*(x839+x840)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x842 = 78U;
	int32_t x843 = INT32_MIN;
	int32_t t134 = -411875;

    t134 = (x841<=(x842*(x843+x844)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x845 = 0;
	uint8_t x846 = 125U;
	uint64_t x847 = 23422999396978176LLU;
	int64_t x848 = -1LL;
	volatile int32_t t135 = 356;

    t135 = (x845<=(x846*(x847+x848)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x849 = -6;
	static int16_t x851 = INT16_MIN;
	volatile int32_t t136 = 4096;

    t136 = (x849<=(x850*(x851+x852)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x853 = INT16_MIN;
	uint64_t x855 = UINT64_MAX;
	volatile int64_t x856 = INT64_MAX;
	volatile int32_t t137 = 223261123;

    t137 = (x853<=(x854*(x855+x856)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x861 = 9U;
	uint8_t x862 = 24U;
	int64_t x863 = -66854206923966LL;
	volatile uint32_t x864 = UINT32_MAX;
	int32_t t138 = 48;

    t138 = (x861<=(x862*(x863+x864)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x870 = 679U;
	static uint32_t x871 = 117U;
	static int64_t x872 = 5914419945572LL;
	int32_t t139 = -222;

    t139 = (x869<=(x870*(x871+x872)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x878 = -1LL;
	int16_t x879 = 3278;
	int64_t x880 = INT64_MIN;
	volatile int32_t t140 = 82257975;

    t140 = (x877<=(x878*(x879+x880)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x885 = INT16_MAX;
	static volatile int64_t x886 = 505456458755LL;
	uint32_t x887 = UINT32_MAX;
	uint16_t x888 = 19U;
	int32_t t141 = -21292;

    t141 = (x885<=(x886*(x887+x888)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x891 = INT64_MIN;
	uint64_t x892 = 13312950148LLU;
	int32_t t142 = -2;

    t142 = (x889<=(x890*(x891+x892)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x893 = INT64_MIN;
	static int32_t x894 = -43;
	static volatile int16_t x895 = INT16_MAX;
	static int8_t x896 = 6;
	int32_t t143 = -1;

    t143 = (x893<=(x894*(x895+x896)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x905 = 2246212LL;
	int32_t x906 = INT32_MIN;
	uint32_t x908 = 43U;
	volatile int32_t t144 = 47672;

    t144 = (x905<=(x906*(x907+x908)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x909 = 2592774U;
	int16_t x910 = -3759;
	int8_t x911 = -1;
	int8_t x912 = INT8_MIN;
	volatile int32_t t145 = -552924;

    t145 = (x909<=(x910*(x911+x912)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x914 = 105U;
	uint64_t x915 = 14273067578703857LLU;
	int16_t x916 = 728;
	int32_t t146 = -6;

    t146 = (x913<=(x914*(x915+x916)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x917 = INT16_MAX;
	int32_t x918 = INT32_MIN;
	int32_t x919 = INT32_MAX;

    t147 = (x917<=(x918*(x919+x920)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x921 = INT16_MIN;
	volatile int64_t x922 = INT64_MIN;
	uint64_t x923 = UINT64_MAX;
	int16_t x924 = INT16_MIN;
	int32_t t148 = -192;

    t148 = (x921<=(x922*(x923+x924)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x925 = INT64_MAX;
	int8_t x926 = 37;
	uint16_t x927 = 430U;
	uint8_t x928 = 48U;
	int32_t t149 = 238521515;

    t149 = (x925<=(x926*(x927+x928)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x929 = -1;
	static int32_t x930 = -31676001;
	uint64_t x931 = UINT64_MAX;
	static volatile int32_t t150 = -1342355;

    t150 = (x929<=(x930*(x931+x932)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x933 = INT32_MIN;
	volatile int8_t x934 = -1;
	static uint8_t x935 = 0U;

    t151 = (x933<=(x934*(x935+x936)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x937 = INT16_MAX;
	uint8_t x939 = 80U;
	volatile int16_t x940 = INT16_MIN;
	int32_t t152 = 1185474;

    t152 = (x937<=(x938*(x939+x940)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x941 = 49179263LLU;
	static int8_t x943 = -1;

    t153 = (x941<=(x942*(x943+x944)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x945 = -627;
	uint8_t x946 = 1U;
	volatile int32_t t154 = -153511;

    t154 = (x945<=(x946*(x947+x948)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x949 = 9;
	static int8_t x950 = -1;
	static volatile int64_t x951 = -1LL;
	static uint8_t x952 = UINT8_MAX;
	int32_t t155 = -1537;

    t155 = (x949<=(x950*(x951+x952)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x961 = UINT8_MAX;
	uint8_t x962 = 21U;
	volatile uint16_t x963 = 3749U;
	volatile int32_t x964 = 5;

    t156 = (x961<=(x962*(x963+x964)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x965 = -1LL;
	volatile int32_t x966 = 43;
	int32_t x967 = INT32_MAX;
	int64_t x968 = -1LL;
	volatile int32_t t157 = -63720;

    t157 = (x965<=(x966*(x967+x968)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x973 = -1;
	int16_t x974 = -47;
	volatile uint32_t x975 = UINT32_MAX;
	uint8_t x976 = 79U;
	int32_t t158 = -412;

    t158 = (x973<=(x974*(x975+x976)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x977 = 2584059LL;
	uint16_t x978 = UINT16_MAX;
	volatile uint8_t x979 = 29U;
	static int64_t x980 = -1LL;
	int32_t t159 = 0;

    t159 = (x977<=(x978*(x979+x980)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x981 = INT64_MIN;
	uint8_t x982 = 0U;
	static int16_t x983 = INT16_MIN;
	volatile int32_t t160 = -80;

    t160 = (x981<=(x982*(x983+x984)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x989 = -1LL;
	uint16_t x991 = 143U;
	int8_t x992 = INT8_MIN;
	static volatile int32_t t161 = -491511;

    t161 = (x989<=(x990*(x991+x992)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x1001 = -1LL;
	int64_t x1002 = -1LL;
	uint16_t x1003 = 866U;
	volatile int8_t x1004 = INT8_MIN;
	volatile int32_t t162 = -16;

    t162 = (x1001<=(x1002*(x1003+x1004)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1009 = -972;
	int16_t x1010 = 655;
	int8_t x1012 = INT8_MIN;
	static int32_t t163 = 14807423;

    t163 = (x1009<=(x1010*(x1011+x1012)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1013 = 69LL;
	volatile uint8_t x1014 = 19U;
	int8_t x1015 = INT8_MIN;
	volatile int64_t x1016 = -684264296514159LL;
	static int32_t t164 = 28947358;

    t164 = (x1013<=(x1014*(x1015+x1016)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1018 = UINT32_MAX;
	int16_t x1019 = -7;
	static int32_t x1020 = -6;

    t165 = (x1017<=(x1018*(x1019+x1020)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1025 = INT16_MIN;
	int16_t x1027 = INT16_MAX;
	uint32_t x1028 = 6161U;

    t166 = (x1025<=(x1026*(x1027+x1028)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1029 = 11361;
	int16_t x1030 = INT16_MIN;
	volatile uint64_t x1031 = UINT64_MAX;

    t167 = (x1029<=(x1030*(x1031+x1032)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1033 = 0U;
	int8_t x1034 = INT8_MIN;
	int64_t x1035 = -1LL;
	static volatile int32_t t168 = -407983;

    t168 = (x1033<=(x1034*(x1035+x1036)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1045 = 707643U;
	uint8_t x1047 = UINT8_MAX;
	volatile int16_t x1048 = INT16_MIN;
	static int32_t t169 = 2019233;

    t169 = (x1045<=(x1046*(x1047+x1048)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x1053 = INT64_MAX;
	static int32_t x1054 = 3022;
	int32_t x1055 = 93;
	static int8_t x1056 = INT8_MAX;

    t170 = (x1053<=(x1054*(x1055+x1056)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x1061 = 1U;
	uint64_t x1063 = 1716752998LLU;
	volatile uint32_t x1064 = 233625713U;
	int32_t t171 = -511266;

    t171 = (x1061<=(x1062*(x1063+x1064)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1066 = -1LL;
	int64_t x1068 = 18046LL;
	int32_t t172 = -42;

    t172 = (x1065<=(x1066*(x1067+x1068)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1070 = UINT64_MAX;
	volatile uint64_t x1071 = 140454LLU;
	volatile uint64_t x1072 = 3482898782102184LLU;
	volatile int32_t t173 = 243;

    t173 = (x1069<=(x1070*(x1071+x1072)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1073 = INT8_MIN;
	volatile int16_t x1074 = INT16_MIN;
	int64_t x1076 = 425497973LL;

    t174 = (x1073<=(x1074*(x1075+x1076)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1077 = -169LL;
	static volatile int64_t x1079 = -1LL;
	volatile uint8_t x1080 = 3U;
	static volatile int32_t t175 = 37;

    t175 = (x1077<=(x1078*(x1079+x1080)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1086 = 2039U;
	volatile int16_t x1088 = -7;

    t176 = (x1085<=(x1086*(x1087+x1088)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1090 = INT16_MAX;
	int32_t t177 = 42629;

    t177 = (x1089<=(x1090*(x1091+x1092)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1101 = -1;
	int8_t x1104 = INT8_MIN;
	static int32_t t178 = -872;

    t178 = (x1101<=(x1102*(x1103+x1104)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x1105 = -1;
	int16_t x1106 = INT16_MIN;
	int32_t x1107 = INT32_MIN;
	int32_t x1108 = INT32_MAX;
	volatile int32_t t179 = 537572875;

    t179 = (x1105<=(x1106*(x1107+x1108)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x1113 = 419U;
	static int64_t x1114 = -1LL;
	int64_t x1115 = INT64_MIN;
	uint8_t x1116 = UINT8_MAX;
	static volatile int32_t t180 = -30179000;

    t180 = (x1113<=(x1114*(x1115+x1116)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1117 = 0LL;
	volatile int8_t x1119 = -1;
	static volatile int32_t t181 = -3879;

    t181 = (x1117<=(x1118*(x1119+x1120)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1121 = INT32_MIN;
	int16_t x1124 = -1;

    t182 = (x1121<=(x1122*(x1123+x1124)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1125 = INT16_MIN;
	int16_t x1127 = INT16_MIN;
	volatile uint32_t x1128 = 1037339U;
	static volatile int32_t t183 = 54613763;

    t183 = (x1125<=(x1126*(x1127+x1128)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1129 = INT8_MIN;
	int32_t x1130 = -47;
	int64_t x1132 = 6199234686LL;

    t184 = (x1129<=(x1130*(x1131+x1132)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1133 = -1;
	uint64_t x1134 = UINT64_MAX;
	int8_t x1136 = INT8_MIN;
	int32_t t185 = 30001027;

    t185 = (x1133<=(x1134*(x1135+x1136)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x1141 = UINT8_MAX;
	static uint64_t x1142 = 249623474465LLU;
	int64_t x1143 = -1LL;
	int32_t x1144 = -62926741;
	volatile int32_t t186 = 38342;

    t186 = (x1141<=(x1142*(x1143+x1144)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1147 = INT16_MIN;
	volatile int32_t t187 = 969958;

    t187 = (x1145<=(x1146*(x1147+x1148)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1150 = 1888U;
	static uint8_t x1152 = 3U;
	int32_t t188 = 12738;

    t188 = (x1149<=(x1150*(x1151+x1152)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x1157 = UINT16_MAX;
	static uint64_t x1158 = UINT64_MAX;
	int8_t x1159 = 7;
	volatile int32_t t189 = -2751;

    t189 = (x1157<=(x1158*(x1159+x1160)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1161 = 27681675627321074LLU;
	volatile int8_t x1163 = 2;
	static int64_t x1164 = -1LL;
	int32_t t190 = 29892398;

    t190 = (x1161<=(x1162*(x1163+x1164)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1165 = -1;
	int8_t x1166 = INT8_MIN;
	int16_t x1167 = 4;
	int16_t x1168 = INT16_MAX;
	int32_t t191 = 5540;

    t191 = (x1165<=(x1166*(x1167+x1168)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1169 = 30;
	int64_t x1170 = 17441LL;
	uint32_t x1171 = 2178U;
	int32_t t192 = 185847;

    t192 = (x1169<=(x1170*(x1171+x1172)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1175 = 230U;
	int8_t x1176 = 3;
	int32_t t193 = 52;

    t193 = (x1173<=(x1174*(x1175+x1176)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint8_t x1177 = 30U;
	static int16_t x1178 = INT16_MAX;
	static uint8_t x1179 = 0U;
	volatile int32_t t194 = 6;

    t194 = (x1177<=(x1178*(x1179+x1180)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x1181 = 70799LL;
	static volatile int8_t x1182 = INT8_MIN;
	static volatile uint8_t x1183 = 1U;
	static int16_t x1184 = INT16_MIN;

    t195 = (x1181<=(x1182*(x1183+x1184)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1185 = INT16_MIN;
	int64_t x1186 = -3520358132167LL;
	static uint32_t x1187 = 2004U;
	uint8_t x1188 = 1U;
	int32_t t196 = 102023364;

    t196 = (x1185<=(x1186*(x1187+x1188)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1189 = 78U;
	volatile uint16_t x1190 = 25U;
	int16_t x1192 = INT16_MAX;
	int32_t t197 = -6;

    t197 = (x1189<=(x1190*(x1191+x1192)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1197 = INT32_MAX;
	int8_t x1198 = INT8_MAX;
	int32_t t198 = -4;

    t198 = (x1197<=(x1198*(x1199+x1200)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1202 = 2386900420638LLU;
	static int64_t x1203 = -94684384411495451LL;
	uint32_t x1204 = UINT32_MAX;

    t199 = (x1201<=(x1202*(x1203+x1204)));

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

