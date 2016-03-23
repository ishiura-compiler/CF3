
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

static volatile int8_t x3 = INT8_MAX;
volatile uint8_t x12 = 78U;
uint32_t x14 = 42U;
int16_t x15 = -237;
uint8_t x23 = 41U;
volatile uint16_t x29 = 13U;
int64_t x55 = INT64_MIN;
uint64_t x63 = 2886376691LLU;
int32_t t14 = -44016;
volatile int64_t x69 = INT64_MAX;
static uint32_t x71 = 206925808U;
static int8_t x76 = -1;
volatile int32_t t17 = 413;
int32_t x79 = INT32_MIN;
int64_t x88 = INT64_MIN;
volatile uint8_t x89 = UINT8_MAX;
int32_t x96 = -1;
int8_t x107 = 1;
int16_t x108 = INT16_MAX;
int32_t t24 = 10276;
int32_t x114 = INT32_MIN;
uint32_t x123 = 7808U;
uint32_t x131 = UINT32_MAX;
volatile int16_t x132 = -1;
volatile int32_t t30 = -1;
static int16_t x139 = INT16_MIN;
int32_t x142 = -1;
int32_t t32 = -3158170;
uint8_t x145 = 1U;
int32_t x148 = -1;
int32_t x153 = INT32_MIN;
int32_t x156 = -1849356;
volatile int32_t x158 = -1;
uint16_t x160 = 16087U;
static int16_t x163 = INT16_MIN;
int16_t x165 = INT16_MIN;
uint8_t x166 = UINT8_MAX;
int16_t x177 = 22;
uint16_t x180 = UINT16_MAX;
uint64_t x183 = 487LLU;
int32_t x184 = -1;
static volatile int32_t t42 = 99408;
static volatile uint32_t x189 = UINT32_MAX;
volatile int32_t t44 = -501;
static uint8_t x206 = 1U;
uint64_t x207 = 8636899LLU;
static volatile int8_t x208 = 22;
volatile int64_t x209 = INT64_MIN;
uint16_t x218 = UINT16_MAX;
int16_t x225 = -1;
uint32_t x241 = 4U;
int32_t x245 = -2692578;
int16_t x249 = -3;
int16_t x253 = -4;
volatile uint32_t x259 = 52U;
uint32_t x270 = 61U;
uint64_t x271 = UINT64_MAX;
static uint16_t x274 = 23334U;
int32_t t61 = 25684;
int8_t x277 = INT8_MAX;
static volatile int16_t x278 = INT16_MIN;
static int8_t x280 = 1;
static volatile int32_t x281 = INT32_MIN;
static uint32_t x282 = UINT32_MAX;
int16_t x283 = -16;
static uint8_t x284 = UINT8_MAX;
static uint32_t x287 = UINT32_MAX;
int32_t t65 = -4845425;
static int64_t x294 = INT64_MIN;
static int16_t x296 = -1;
int64_t x301 = INT64_MIN;
volatile int32_t t72 = -17644073;
int16_t x325 = 2264;
int32_t t75 = 9;
int8_t x337 = -5;
int32_t t77 = -2863;
uint8_t x345 = 4U;
uint64_t x346 = UINT64_MAX;
static volatile int32_t t78 = 18;
uint8_t x352 = 3U;
int8_t x356 = INT8_MIN;
int32_t t80 = 168;
static int16_t x358 = INT16_MIN;
int8_t x360 = 3;
volatile int32_t t82 = -58;
static int32_t x365 = -5905991;
volatile int8_t x366 = INT8_MAX;
volatile int32_t x378 = -1;
int16_t x387 = INT16_MIN;
int32_t x390 = INT32_MIN;
uint64_t x392 = 14597234852LLU;
static int32_t t89 = 5;
volatile int16_t x396 = 1;
int64_t x397 = -1LL;
volatile int16_t x402 = 1;
int32_t t92 = 0;
int64_t x412 = 191LL;
int32_t t94 = -84408;
static uint8_t x418 = 9U;
volatile int32_t t99 = 3578;
static int32_t t100 = -10;
int32_t x446 = -1;
int64_t x449 = -1LL;
uint16_t x451 = 0U;
int8_t x455 = INT8_MIN;
uint32_t x457 = 10236395U;
volatile int32_t t106 = 30;
int64_t x464 = INT64_MIN;
uint32_t x466 = UINT32_MAX;
static uint32_t x467 = 13399U;
int32_t x468 = INT32_MIN;
int8_t x473 = INT8_MAX;
static uint64_t x476 = 33190536445143LLU;
int32_t t110 = -1252787;
int16_t x480 = INT16_MIN;
uint32_t x481 = 33982U;
static volatile int32_t t112 = 86907;
volatile int64_t x488 = -1LL;
int32_t x503 = INT32_MAX;
int8_t x504 = -1;
volatile int32_t t118 = -1288;
uint64_t x514 = UINT64_MAX;
static int32_t x517 = 2140807;
volatile int16_t x528 = -1;
int32_t t122 = -14816083;
static uint16_t x529 = UINT16_MAX;
int64_t x531 = INT64_MIN;
int16_t x534 = INT16_MIN;
static volatile int16_t x537 = -88;
volatile int16_t x540 = -1;
volatile int16_t x545 = -1;
int32_t x548 = 1492;
static uint32_t x551 = 200588368U;
volatile int8_t x553 = INT8_MAX;
static volatile uint8_t x555 = 1U;
int64_t x562 = INT64_MAX;
volatile int32_t x565 = 29403522;
int16_t x566 = INT16_MIN;
volatile int32_t t132 = 32;
volatile uint32_t x589 = 2491982U;
static volatile int8_t x591 = 12;
int64_t x593 = INT64_MIN;
int32_t t137 = 114;
volatile int8_t x606 = 1;
int32_t t141 = 56;
uint16_t x623 = 7U;
int32_t t142 = -5767;
static int8_t x628 = INT8_MAX;
uint8_t x633 = 1U;
uint16_t x642 = 45U;
int32_t t148 = 4;
uint8_t x649 = UINT8_MAX;
uint16_t x657 = UINT16_MAX;
volatile uint32_t x680 = 28547282U;
int32_t t158 = 59624;
int8_t x693 = INT8_MIN;
int16_t x702 = -1;
static volatile int8_t x709 = INT8_MIN;
volatile int16_t x711 = 0;
int32_t x715 = 5414;
static volatile uint8_t x716 = 65U;
uint16_t x720 = 22750U;
int32_t t164 = -49;
static int16_t x721 = 11610;
static int32_t x727 = -1;
uint32_t x731 = 20405778U;
int32_t t167 = -220404091;
uint32_t x736 = 3U;
int64_t x738 = -14912479387088418LL;
int32_t x755 = INT32_MIN;
volatile int32_t x757 = -1;
volatile int32_t x760 = INT32_MIN;
int32_t x762 = INT32_MIN;
int8_t x764 = INT8_MAX;
int8_t x765 = INT8_MIN;
int16_t x770 = INT16_MIN;
int16_t x771 = INT16_MAX;
int8_t x772 = INT8_MAX;
volatile int32_t t177 = -79054;
int8_t x781 = -1;
int64_t x786 = -1LL;
uint8_t x788 = 8U;
volatile uint64_t x790 = UINT64_MAX;
int32_t x799 = -1;
static int8_t x805 = INT8_MIN;
int16_t x814 = 1;
int32_t x824 = 301;
int8_t x826 = -1;
int16_t x827 = 70;
static int16_t x833 = INT16_MIN;
volatile int32_t t190 = 1476588;
volatile int32_t t191 = 341376730;
uint64_t x841 = UINT64_MAX;
static int64_t x843 = -1010043838436LL;
volatile int32_t x848 = INT32_MIN;
int32_t t193 = -25;
volatile int32_t t194 = 0;
uint32_t x859 = 25290317U;
int64_t x860 = -1LL;
uint32_t x861 = 3647895U;
volatile uint8_t x864 = UINT8_MAX;
int32_t t197 = -320398512;
volatile int32_t t198 = -2468;
volatile uint8_t x874 = 0U;
uint32_t x876 = 19219U;
int32_t t199 = -10897287;


void f0(void) {
    	int16_t x1 = -10109;
	uint64_t x2 = 179221183151LLU;
	int32_t x4 = -28029408;
	int32_t t0 = 210;

    t0 = (x1>(x2-(x3%x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -115624543683829LL;
	static int8_t x6 = INT8_MAX;
	volatile uint32_t x7 = 23U;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -1;

    t1 = (x5>(x6-(x7%x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	uint64_t x10 = 1322741862957901LLU;
	int8_t x11 = -1;
	static int32_t t2 = -22997989;

    t2 = (x9>(x10-(x11%x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 140179U;
	static volatile int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -41124;

    t3 = (x13>(x14-(x15%x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = 927101629522084LLU;
	static int64_t x22 = -1LL;
	uint8_t x24 = 45U;
	volatile int32_t t4 = -76;

    t4 = (x21>(x22-(x23%x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x25 = -96817424921LL;
	uint32_t x26 = UINT32_MAX;
	static uint64_t x27 = 196243375LLU;
	int8_t x28 = INT8_MIN;
	static int32_t t5 = -13;

    t5 = (x25>(x26-(x27%x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x30 = INT16_MIN;
	volatile uint64_t x31 = 7612305819570853LLU;
	static int8_t x32 = -1;
	static volatile int32_t t6 = -24950;

    t6 = (x29>(x30-(x31%x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = INT64_MIN;
	uint32_t x34 = 370U;
	int16_t x35 = INT16_MAX;
	static int32_t x36 = -1723;
	int32_t t7 = 7;

    t7 = (x33>(x34-(x35%x36)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = -85;
	int32_t x38 = -1;
	static int8_t x39 = -39;
	static uint64_t x40 = 2539819529LLU;
	volatile int32_t t8 = -31191;

    t8 = (x37>(x38-(x39%x40)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = -1LL;
	uint8_t x42 = 28U;
	static int16_t x43 = INT16_MIN;
	int32_t x44 = 2402895;
	static volatile int32_t t9 = 2214418;

    t9 = (x41>(x42-(x43%x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MIN;
	int8_t x47 = -1;
	int64_t x48 = -14970473584705LL;
	static volatile int32_t t10 = 498;

    t10 = (x45>(x46-(x47%x48)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = 1450380339U;
	uint32_t x50 = UINT32_MAX;
	volatile int8_t x51 = -3;
	int8_t x52 = INT8_MIN;
	int32_t t11 = 793230628;

    t11 = (x49>(x50-(x51%x52)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = 10480U;
	uint8_t x54 = UINT8_MAX;
	int64_t x56 = -29531LL;
	static volatile int32_t t12 = 974;

    t12 = (x53>(x54-(x55%x56)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x57 = -1;
	int8_t x58 = INT8_MAX;
	int16_t x59 = -1;
	int64_t x60 = INT64_MIN;
	static volatile int32_t t13 = -95;

    t13 = (x57>(x58-(x59%x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = 147985095124122539LL;
	int8_t x62 = INT8_MIN;
	int64_t x64 = -1LL;

    t14 = (x61>(x62-(x63%x64)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = -1;
	uint64_t x66 = 22233LLU;
	int16_t x67 = -1;
	volatile int32_t x68 = INT32_MIN;
	volatile int32_t t15 = 8;

    t15 = (x65>(x66-(x67%x68)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x70 = 94U;
	uint8_t x72 = UINT8_MAX;
	static int32_t t16 = -48888;

    t16 = (x69>(x70-(x71%x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x73 = UINT64_MAX;
	int64_t x74 = -1LL;
	uint8_t x75 = 3U;

    t17 = (x73>(x74-(x75%x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MIN;
	static volatile int32_t x78 = -1;
	int16_t x80 = INT16_MIN;
	volatile int32_t t18 = -93003164;

    t18 = (x77>(x78-(x79%x80)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = 5;
	int64_t x82 = 135459LL;
	int64_t x83 = INT64_MAX;
	static int8_t x84 = INT8_MIN;
	volatile int32_t t19 = -1754;

    t19 = (x81>(x82-(x83%x84)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x85 = INT64_MIN;
	volatile int16_t x86 = INT16_MAX;
	int16_t x87 = 3373;
	int32_t t20 = -66282;

    t20 = (x85>(x86-(x87%x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x90 = -1;
	static uint8_t x91 = UINT8_MAX;
	int32_t x92 = -56474;
	static volatile int32_t t21 = -488932;

    t21 = (x89>(x90-(x91%x92)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = -1;
	static int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MAX;
	int32_t t22 = 780319129;

    t22 = (x93>(x94-(x95%x96)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x97 = UINT16_MAX;
	static int8_t x98 = INT8_MIN;
	static uint8_t x99 = 1U;
	static int16_t x100 = -1;
	int32_t t23 = 11937;

    t23 = (x97>(x98-(x99%x100)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = INT8_MIN;
	int64_t x106 = INT64_MAX;

    t24 = (x105>(x106-(x107%x108)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = -1;
	int32_t x110 = -240573995;
	volatile int8_t x111 = -1;
	volatile int64_t x112 = INT64_MAX;
	int32_t t25 = -228;

    t25 = (x109>(x110-(x111%x112)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = 9388;
	volatile int64_t x115 = INT64_MIN;
	int32_t x116 = INT32_MAX;
	int32_t t26 = 1880;

    t26 = (x113>(x114-(x115%x116)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = -5;
	uint64_t x122 = 2324074406LLU;
	int32_t x124 = 5;
	volatile int32_t t27 = 0;

    t27 = (x121>(x122-(x123%x124)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x125 = -1;
	volatile int64_t x126 = -1LL;
	int8_t x127 = -12;
	int16_t x128 = -1;
	int32_t t28 = 877;

    t28 = (x125>(x126-(x127%x128)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x129 = 1;
	uint16_t x130 = UINT16_MAX;
	volatile int32_t t29 = 12146;

    t29 = (x129>(x130-(x131%x132)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x133 = -15203850093806LL;
	volatile int64_t x134 = -1LL;
	static int32_t x135 = -1;
	static volatile uint32_t x136 = 4U;

    t30 = (x133>(x134-(x135%x136)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = -6;
	int64_t x138 = -1LL;
	uint16_t x140 = 87U;
	volatile int32_t t31 = 0;

    t31 = (x137>(x138-(x139%x140)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x141 = -13LL;
	uint32_t x143 = 140188U;
	int64_t x144 = -1LL;

    t32 = (x141>(x142-(x143%x144)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x146 = UINT64_MAX;
	int64_t x147 = INT64_MIN;
	static volatile int32_t t33 = -7451097;

    t33 = (x145>(x146-(x147%x148)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x154 = 56U;
	int8_t x155 = INT8_MIN;
	volatile int32_t t34 = -3450949;

    t34 = (x153>(x154-(x155%x156)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x157 = INT64_MAX;
	uint64_t x159 = UINT64_MAX;
	static volatile int32_t t35 = -1;

    t35 = (x157>(x158-(x159%x160)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x161 = UINT32_MAX;
	volatile int64_t x162 = INT64_MIN;
	int64_t x164 = -109956LL;
	volatile int32_t t36 = -7;

    t36 = (x161>(x162-(x163%x164)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x167 = -29;
	int32_t x168 = 17395;
	int32_t t37 = -3641290;

    t37 = (x165>(x166-(x167%x168)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x169 = -53;
	uint8_t x170 = 1U;
	uint8_t x171 = UINT8_MAX;
	int16_t x172 = -1;
	static volatile int32_t t38 = -364190;

    t38 = (x169>(x170-(x171%x172)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x173 = INT32_MAX;
	volatile uint16_t x174 = UINT16_MAX;
	int32_t x175 = INT32_MIN;
	int64_t x176 = INT64_MIN;
	int32_t t39 = 48;

    t39 = (x173>(x174-(x175%x176)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x178 = -1;
	int32_t x179 = INT32_MIN;
	static volatile int32_t t40 = 374;

    t40 = (x177>(x178-(x179%x180)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x181 = -27369042LL;
	static volatile uint16_t x182 = UINT16_MAX;
	volatile int32_t t41 = -1236867;

    t41 = (x181>(x182-(x183%x184)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x185 = -1LL;
	int8_t x186 = -40;
	volatile int64_t x187 = INT64_MIN;
	int64_t x188 = 1501821577LL;

    t42 = (x185>(x186-(x187%x188)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x190 = 35U;
	volatile int8_t x191 = -2;
	int32_t x192 = INT32_MAX;
	volatile int32_t t43 = 436012;

    t43 = (x189>(x190-(x191%x192)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x201 = 24U;
	volatile int16_t x202 = 1018;
	int8_t x203 = INT8_MAX;
	volatile uint16_t x204 = 3U;

    t44 = (x201>(x202-(x203%x204)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x205 = 3;
	int32_t t45 = -3;

    t45 = (x205>(x206-(x207%x208)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x210 = 10767597001LLU;
	uint16_t x211 = 20U;
	uint16_t x212 = 3362U;
	static volatile int32_t t46 = 1056291;

    t46 = (x209>(x210-(x211%x212)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x213 = UINT8_MAX;
	volatile uint64_t x214 = 123629LLU;
	static int8_t x215 = INT8_MIN;
	uint64_t x216 = 1093736739618083LLU;
	static volatile int32_t t47 = -13092371;

    t47 = (x213>(x214-(x215%x216)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x217 = 73201;
	int32_t x219 = 264919243;
	static int16_t x220 = INT16_MIN;
	int32_t t48 = 49969;

    t48 = (x217>(x218-(x219%x220)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x221 = 15U;
	uint16_t x222 = 44U;
	uint32_t x223 = UINT32_MAX;
	uint32_t x224 = 801U;
	int32_t t49 = 1;

    t49 = (x221>(x222-(x223%x224)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x226 = -360LL;
	uint16_t x227 = 273U;
	volatile int16_t x228 = INT16_MAX;
	volatile int32_t t50 = 38;

    t50 = (x225>(x226-(x227%x228)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x229 = INT8_MAX;
	int32_t x230 = -2;
	volatile int16_t x231 = -1;
	static int16_t x232 = 58;
	volatile int32_t t51 = 10440;

    t51 = (x229>(x230-(x231%x232)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x237 = 10U;
	int32_t x238 = -1225;
	int32_t x239 = INT32_MAX;
	uint8_t x240 = 26U;
	volatile int32_t t52 = -31254424;

    t52 = (x237>(x238-(x239%x240)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x242 = UINT64_MAX;
	int32_t x243 = INT32_MIN;
	static volatile int32_t x244 = INT32_MIN;
	int32_t t53 = -404;

    t53 = (x241>(x242-(x243%x244)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x246 = -38;
	static uint32_t x247 = 494954482U;
	uint8_t x248 = 39U;
	int32_t t54 = 50881;

    t54 = (x245>(x246-(x247%x248)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x250 = -1;
	int64_t x251 = 51242364735724097LL;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t55 = 6;

    t55 = (x249>(x250-(x251%x252)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x254 = -33307457286LL;
	int64_t x255 = 202LL;
	uint64_t x256 = UINT64_MAX;
	int32_t t56 = -4882;

    t56 = (x253>(x254-(x255%x256)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x257 = 14526333324551LL;
	uint8_t x258 = 14U;
	int16_t x260 = -1;
	volatile int32_t t57 = 24267;

    t57 = (x257>(x258-(x259%x260)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x261 = INT16_MAX;
	static volatile int16_t x262 = INT16_MAX;
	volatile uint8_t x263 = 54U;
	volatile uint32_t x264 = UINT32_MAX;
	int32_t t58 = -10383894;

    t58 = (x261>(x262-(x263%x264)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x265 = -1861;
	volatile int16_t x266 = -1;
	int32_t x267 = -1;
	static uint32_t x268 = 219264U;
	volatile int32_t t59 = 186316929;

    t59 = (x265>(x266-(x267%x268)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x269 = 15805958;
	int64_t x272 = -126078921689132055LL;
	int32_t t60 = 1049846;

    t60 = (x269>(x270-(x271%x272)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x273 = INT8_MAX;
	int16_t x275 = -1;
	volatile uint16_t x276 = 8U;

    t61 = (x273>(x274-(x275%x276)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x279 = INT64_MAX;
	int32_t t62 = -184895206;

    t62 = (x277>(x278-(x279%x280)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t t63 = 1;

    t63 = (x281>(x282-(x283%x284)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x285 = 375U;
	static uint64_t x286 = UINT64_MAX;
	int64_t x288 = -16948942871380LL;
	int32_t t64 = 134;

    t64 = (x285>(x286-(x287%x288)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x289 = UINT8_MAX;
	uint16_t x290 = UINT16_MAX;
	volatile int16_t x291 = INT16_MAX;
	int16_t x292 = INT16_MIN;

    t65 = (x289>(x290-(x291%x292)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x293 = -1;
	static int64_t x295 = INT64_MAX;
	int32_t t66 = -1;

    t66 = (x293>(x294-(x295%x296)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x302 = -497;
	static int32_t x303 = 40015075;
	static int64_t x304 = -1LL;
	int32_t t67 = 0;

    t67 = (x301>(x302-(x303%x304)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x305 = -3073;
	int8_t x306 = INT8_MAX;
	int8_t x307 = -1;
	uint16_t x308 = 3U;
	volatile int32_t t68 = -56582782;

    t68 = (x305>(x306-(x307%x308)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x309 = 0;
	int16_t x310 = INT16_MAX;
	uint64_t x311 = 24LLU;
	int32_t x312 = INT32_MAX;
	int32_t t69 = -21974;

    t69 = (x309>(x310-(x311%x312)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x313 = -404793070;
	int64_t x314 = INT64_MIN;
	volatile int16_t x315 = INT16_MIN;
	static uint64_t x316 = UINT64_MAX;
	int32_t t70 = -61530;

    t70 = (x313>(x314-(x315%x316)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x317 = -1;
	volatile int32_t x318 = INT32_MAX;
	static uint8_t x319 = 34U;
	int32_t x320 = -94;
	int32_t t71 = -1439;

    t71 = (x317>(x318-(x319%x320)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x321 = INT64_MAX;
	uint32_t x322 = 1351428U;
	uint64_t x323 = UINT64_MAX;
	volatile uint32_t x324 = UINT32_MAX;

    t72 = (x321>(x322-(x323%x324)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x326 = INT16_MIN;
	static volatile int32_t x327 = -1;
	volatile int32_t x328 = -1;
	volatile int32_t t73 = 11234343;

    t73 = (x325>(x326-(x327%x328)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x329 = -1;
	int16_t x330 = -1;
	uint8_t x331 = 120U;
	volatile int32_t x332 = INT32_MAX;
	int32_t t74 = -94298;

    t74 = (x329>(x330-(x331%x332)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x333 = -2441565972535LL;
	static int8_t x334 = -1;
	static int64_t x335 = 337923366LL;
	volatile uint16_t x336 = UINT16_MAX;

    t75 = (x333>(x334-(x335%x336)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x338 = 24955U;
	static uint64_t x339 = 837LLU;
	uint16_t x340 = 2640U;
	int32_t t76 = -7315682;

    t76 = (x337>(x338-(x339%x340)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x341 = -1;
	int32_t x342 = INT32_MIN;
	uint64_t x343 = UINT64_MAX;
	int16_t x344 = -1;

    t77 = (x341>(x342-(x343%x344)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x347 = INT32_MIN;
	int16_t x348 = 25;

    t78 = (x345>(x346-(x347%x348)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x349 = -1;
	uint16_t x350 = 14989U;
	int32_t x351 = INT32_MAX;
	int32_t t79 = -5;

    t79 = (x349>(x350-(x351%x352)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x353 = INT64_MIN;
	uint16_t x354 = 25U;
	volatile int64_t x355 = 178LL;

    t80 = (x353>(x354-(x355%x356)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x357 = INT16_MIN;
	int8_t x359 = 1;
	int32_t t81 = -70;

    t81 = (x357>(x358-(x359%x360)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x361 = -2258238;
	int8_t x362 = INT8_MIN;
	int16_t x363 = INT16_MIN;
	int32_t x364 = INT32_MIN;

    t82 = (x361>(x362-(x363%x364)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x367 = -1;
	volatile uint32_t x368 = 414U;
	int32_t t83 = -58;

    t83 = (x365>(x366-(x367%x368)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x369 = INT16_MAX;
	uint64_t x370 = 1518458770760354245LLU;
	uint32_t x371 = 3U;
	int32_t x372 = INT32_MIN;
	int32_t t84 = 3864;

    t84 = (x369>(x370-(x371%x372)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x373 = -15445964LL;
	int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MIN;
	int64_t x376 = 1500903LL;
	volatile int32_t t85 = -107;

    t85 = (x373>(x374-(x375%x376)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x377 = INT8_MIN;
	int16_t x379 = INT16_MAX;
	int64_t x380 = 372658420LL;
	static volatile int32_t t86 = -57175;

    t86 = (x377>(x378-(x379%x380)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x381 = UINT32_MAX;
	uint64_t x382 = 201414517943137259LLU;
	uint16_t x383 = 5623U;
	int32_t x384 = INT32_MAX;
	volatile int32_t t87 = 976;

    t87 = (x381>(x382-(x383%x384)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x385 = -214203LL;
	uint64_t x386 = 10LLU;
	static volatile uint64_t x388 = 2673539LLU;
	static volatile int32_t t88 = -3220;

    t88 = (x385>(x386-(x387%x388)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x389 = INT64_MAX;
	static int16_t x391 = 1;

    t89 = (x389>(x390-(x391%x392)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x393 = INT16_MIN;
	int64_t x394 = -1LL;
	uint32_t x395 = UINT32_MAX;
	int32_t t90 = 2;

    t90 = (x393>(x394-(x395%x396)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x398 = -1LL;
	static uint16_t x399 = 0U;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t91 = -5827872;

    t91 = (x397>(x398-(x399%x400)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x401 = 3U;
	static int64_t x403 = INT64_MAX;
	volatile int32_t x404 = INT32_MAX;

    t92 = (x401>(x402-(x403%x404)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x405 = 3;
	volatile int64_t x406 = -1LL;
	volatile int32_t x407 = -1;
	static uint16_t x408 = 17249U;
	static volatile int32_t t93 = -1052825516;

    t93 = (x405>(x406-(x407%x408)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x409 = INT32_MAX;
	static int16_t x410 = INT16_MAX;
	int32_t x411 = INT32_MIN;

    t94 = (x409>(x410-(x411%x412)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x413 = 16732926899054LLU;
	volatile uint32_t x414 = UINT32_MAX;
	uint8_t x415 = 121U;
	static int64_t x416 = INT64_MIN;
	static int32_t t95 = -476110521;

    t95 = (x413>(x414-(x415%x416)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x417 = -612441117170290LL;
	volatile int16_t x419 = -1;
	int32_t x420 = 53518;
	volatile int32_t t96 = -555652864;

    t96 = (x417>(x418-(x419%x420)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x421 = INT32_MIN;
	static int32_t x422 = INT32_MIN;
	volatile uint32_t x423 = 51573593U;
	uint64_t x424 = 3940LLU;
	volatile int32_t t97 = -1008446191;

    t97 = (x421>(x422-(x423%x424)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x425 = INT8_MAX;
	static int64_t x426 = INT64_MIN;
	int64_t x427 = -14762764191LL;
	int32_t x428 = 2096744;
	int32_t t98 = -410034;

    t98 = (x425>(x426-(x427%x428)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x429 = -1;
	int8_t x430 = INT8_MIN;
	int32_t x431 = INT32_MIN;
	uint16_t x432 = 485U;

    t99 = (x429>(x430-(x431%x432)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x433 = 7515227LLU;
	volatile int64_t x434 = -3711271534967LL;
	int64_t x435 = -1LL;
	uint8_t x436 = 22U;

    t100 = (x433>(x434-(x435%x436)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x437 = -1LL;
	int64_t x438 = INT64_MIN;
	int64_t x439 = INT64_MIN;
	volatile uint64_t x440 = 487858LLU;
	volatile int32_t t101 = -147098501;

    t101 = (x437>(x438-(x439%x440)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x441 = UINT16_MAX;
	int32_t x442 = INT32_MAX;
	volatile int8_t x443 = INT8_MAX;
	static uint16_t x444 = 14301U;
	int32_t t102 = 10;

    t102 = (x441>(x442-(x443%x444)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x445 = -8;
	uint16_t x447 = 0U;
	static volatile int8_t x448 = -1;
	static volatile int32_t t103 = 384543;

    t103 = (x445>(x446-(x447%x448)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x450 = UINT8_MAX;
	uint16_t x452 = 24501U;
	volatile int32_t t104 = 42;

    t104 = (x449>(x450-(x451%x452)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x453 = INT8_MAX;
	static uint16_t x454 = 0U;
	static int64_t x456 = INT64_MIN;
	static int32_t t105 = -120;

    t105 = (x453>(x454-(x455%x456)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x458 = -1LL;
	static int64_t x459 = 24077644631246LL;
	static int64_t x460 = 437LL;

    t106 = (x457>(x458-(x459%x460)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x461 = UINT32_MAX;
	volatile int16_t x462 = INT16_MIN;
	int32_t x463 = 938905;
	static volatile int32_t t107 = 421434;

    t107 = (x461>(x462-(x463%x464)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x465 = 7U;
	volatile int32_t t108 = 2;

    t108 = (x465>(x466-(x467%x468)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x469 = INT16_MIN;
	int64_t x470 = 28LL;
	uint8_t x471 = UINT8_MAX;
	volatile uint16_t x472 = UINT16_MAX;
	int32_t t109 = -5710176;

    t109 = (x469>(x470-(x471%x472)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x474 = UINT32_MAX;
	int64_t x475 = -1LL;

    t110 = (x473>(x474-(x475%x476)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x477 = 18U;
	static volatile int16_t x478 = -1;
	volatile int64_t x479 = -105710007860453136LL;
	volatile int32_t t111 = 42442947;

    t111 = (x477>(x478-(x479%x480)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x482 = -30852849LL;
	static volatile int8_t x483 = INT8_MAX;
	uint32_t x484 = UINT32_MAX;

    t112 = (x481>(x482-(x483%x484)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x485 = UINT16_MAX;
	uint64_t x486 = 638986122060459LLU;
	int8_t x487 = -1;
	static int32_t t113 = -5445591;

    t113 = (x485>(x486-(x487%x488)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x489 = -4;
	int8_t x490 = 6;
	static uint32_t x491 = 609792U;
	uint8_t x492 = 84U;
	int32_t t114 = -149450;

    t114 = (x489>(x490-(x491%x492)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x493 = INT8_MIN;
	volatile int16_t x494 = INT16_MIN;
	volatile int64_t x495 = INT64_MIN;
	int16_t x496 = 14824;
	volatile int32_t t115 = -4645039;

    t115 = (x493>(x494-(x495%x496)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x497 = INT32_MIN;
	int64_t x498 = -3967784758539367970LL;
	volatile int32_t x499 = INT32_MAX;
	int32_t x500 = INT32_MAX;
	int32_t t116 = -4;

    t116 = (x497>(x498-(x499%x500)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x501 = UINT64_MAX;
	uint8_t x502 = 0U;
	volatile int32_t t117 = -7893;

    t117 = (x501>(x502-(x503%x504)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x505 = -17;
	int16_t x506 = 12520;
	static uint8_t x507 = UINT8_MAX;
	static int8_t x508 = INT8_MAX;

    t118 = (x505>(x506-(x507%x508)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x509 = 3U;
	static volatile int16_t x510 = INT16_MIN;
	int16_t x511 = -1410;
	uint32_t x512 = 85U;
	int32_t t119 = 23171;

    t119 = (x509>(x510-(x511%x512)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x513 = 30500739U;
	static int64_t x515 = 398954876LL;
	int32_t x516 = INT32_MIN;
	static int32_t t120 = 9;

    t120 = (x513>(x514-(x515%x516)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x518 = -1;
	int64_t x519 = 908857364LL;
	volatile int64_t x520 = INT64_MAX;
	volatile int32_t t121 = 365;

    t121 = (x517>(x518-(x519%x520)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x525 = 2LL;
	int8_t x526 = INT8_MIN;
	int8_t x527 = -5;

    t122 = (x525>(x526-(x527%x528)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x530 = INT32_MAX;
	static volatile uint16_t x532 = 6U;
	volatile int32_t t123 = 17965;

    t123 = (x529>(x530-(x531%x532)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x533 = 1788559LLU;
	uint64_t x535 = 5275701579974LLU;
	volatile uint64_t x536 = 22852LLU;
	int32_t t124 = 7452;

    t124 = (x533>(x534-(x535%x536)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x538 = UINT64_MAX;
	int32_t x539 = INT32_MIN;
	static int32_t t125 = 451976353;

    t125 = (x537>(x538-(x539%x540)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x546 = 4;
	uint16_t x547 = 1007U;
	static volatile int32_t t126 = -46536;

    t126 = (x545>(x546-(x547%x548)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x549 = -1;
	uint64_t x550 = 2448718181921LLU;
	static int32_t x552 = INT32_MIN;
	int32_t t127 = 4093;

    t127 = (x549>(x550-(x551%x552)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x554 = UINT64_MAX;
	int16_t x556 = INT16_MIN;
	int32_t t128 = -6;

    t128 = (x553>(x554-(x555%x556)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x561 = UINT8_MAX;
	volatile uint16_t x563 = UINT16_MAX;
	volatile int8_t x564 = INT8_MAX;
	static volatile int32_t t129 = 4634;

    t129 = (x561>(x562-(x563%x564)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x567 = INT32_MIN;
	static volatile int64_t x568 = -1LL;
	volatile int32_t t130 = 850599083;

    t130 = (x565>(x566-(x567%x568)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x569 = UINT16_MAX;
	uint16_t x570 = 1038U;
	uint8_t x571 = 27U;
	volatile int16_t x572 = INT16_MIN;
	volatile int32_t t131 = -338109213;

    t131 = (x569>(x570-(x571%x572)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x573 = 1650461603104455326LLU;
	int8_t x574 = INT8_MIN;
	int16_t x575 = 11;
	int64_t x576 = -1LL;

    t132 = (x573>(x574-(x575%x576)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x577 = INT32_MIN;
	uint32_t x578 = 224182U;
	uint32_t x579 = 3556U;
	uint32_t x580 = 3U;
	int32_t t133 = 0;

    t133 = (x577>(x578-(x579%x580)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x581 = 221491187;
	int32_t x582 = INT32_MIN;
	int16_t x583 = INT16_MIN;
	uint32_t x584 = 2519U;
	volatile int32_t t134 = -179;

    t134 = (x581>(x582-(x583%x584)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x590 = INT16_MIN;
	uint64_t x592 = 2043527LLU;
	int32_t t135 = 32125;

    t135 = (x589>(x590-(x591%x592)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x594 = INT16_MAX;
	volatile int64_t x595 = INT64_MIN;
	int8_t x596 = INT8_MIN;
	volatile int32_t t136 = -18;

    t136 = (x593>(x594-(x595%x596)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x601 = 203;
	volatile int16_t x602 = -12;
	static int32_t x603 = -1;
	volatile uint16_t x604 = UINT16_MAX;

    t137 = (x601>(x602-(x603%x604)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x605 = -847303792LL;
	int8_t x607 = -6;
	uint8_t x608 = 4U;
	volatile int32_t t138 = 162;

    t138 = (x605>(x606-(x607%x608)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x609 = 1;
	static uint32_t x610 = 13U;
	static volatile int8_t x611 = INT8_MIN;
	int64_t x612 = -1710LL;
	int32_t t139 = -1526528;

    t139 = (x609>(x610-(x611%x612)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x613 = 10781447U;
	int16_t x614 = -1;
	int64_t x615 = 28LL;
	static int8_t x616 = INT8_MAX;
	int32_t t140 = 3;

    t140 = (x613>(x614-(x615%x616)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x617 = -762;
	static int32_t x618 = INT32_MAX;
	uint32_t x619 = 281U;
	int32_t x620 = -964508995;

    t141 = (x617>(x618-(x619%x620)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x621 = -1;
	int8_t x622 = INT8_MIN;
	static uint16_t x624 = 23640U;

    t142 = (x621>(x622-(x623%x624)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x625 = INT16_MIN;
	int8_t x626 = 30;
	int64_t x627 = INT64_MIN;
	int32_t t143 = -1;

    t143 = (x625>(x626-(x627%x628)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x629 = INT64_MAX;
	int64_t x630 = INT64_MIN;
	static volatile uint16_t x631 = 5364U;
	volatile uint64_t x632 = UINT64_MAX;
	int32_t t144 = 11;

    t144 = (x629>(x630-(x631%x632)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x634 = INT8_MIN;
	static int64_t x635 = -1LL;
	int8_t x636 = INT8_MIN;
	int32_t t145 = 774;

    t145 = (x633>(x634-(x635%x636)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x637 = 1;
	int16_t x638 = -5;
	int8_t x639 = INT8_MIN;
	static int8_t x640 = INT8_MAX;
	int32_t t146 = -95871401;

    t146 = (x637>(x638-(x639%x640)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x641 = 15509U;
	static int16_t x643 = INT16_MAX;
	int16_t x644 = INT16_MAX;
	volatile int32_t t147 = -7258173;

    t147 = (x641>(x642-(x643%x644)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x645 = INT16_MIN;
	volatile int16_t x646 = INT16_MIN;
	volatile uint8_t x647 = UINT8_MAX;
	int32_t x648 = INT32_MIN;

    t148 = (x645>(x646-(x647%x648)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x650 = -1LL;
	int8_t x651 = INT8_MAX;
	int64_t x652 = INT64_MIN;
	int32_t t149 = -5552;

    t149 = (x649>(x650-(x651%x652)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x653 = 7814;
	volatile uint64_t x654 = 87125157LLU;
	int64_t x655 = -1181741496LL;
	int16_t x656 = INT16_MAX;
	int32_t t150 = 2582;

    t150 = (x653>(x654-(x655%x656)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x658 = 13481U;
	static int64_t x659 = INT64_MAX;
	int8_t x660 = INT8_MAX;
	int32_t t151 = 187913;

    t151 = (x657>(x658-(x659%x660)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x665 = 3010194U;
	int16_t x666 = INT16_MAX;
	static uint64_t x667 = UINT64_MAX;
	uint64_t x668 = UINT64_MAX;
	static int32_t t152 = -1223493;

    t152 = (x665>(x666-(x667%x668)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x669 = -4;
	int64_t x670 = INT64_MIN;
	volatile int32_t x671 = INT32_MIN;
	int32_t x672 = INT32_MIN;
	volatile int32_t t153 = 13;

    t153 = (x669>(x670-(x671%x672)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x673 = INT64_MAX;
	uint32_t x674 = 5549U;
	int64_t x675 = INT64_MIN;
	int32_t x676 = 7882;
	volatile int32_t t154 = 6020480;

    t154 = (x673>(x674-(x675%x676)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x677 = 64932LLU;
	int16_t x678 = INT16_MIN;
	static int64_t x679 = INT64_MIN;
	static int32_t t155 = 44999;

    t155 = (x677>(x678-(x679%x680)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x681 = 72LL;
	volatile int32_t x682 = INT32_MIN;
	volatile int8_t x683 = -1;
	volatile int32_t x684 = 8666146;
	static volatile int32_t t156 = 124514557;

    t156 = (x681>(x682-(x683%x684)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x685 = -1;
	volatile uint16_t x686 = 13U;
	volatile int32_t x687 = -1;
	volatile uint32_t x688 = UINT32_MAX;
	int32_t t157 = -782361296;

    t157 = (x685>(x686-(x687%x688)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x689 = INT32_MIN;
	int64_t x690 = INT64_MIN;
	int64_t x691 = INT64_MIN;
	uint8_t x692 = 42U;

    t158 = (x689>(x690-(x691%x692)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x694 = UINT8_MAX;
	static uint8_t x695 = 0U;
	static int64_t x696 = -15871433LL;
	int32_t t159 = 1746839;

    t159 = (x693>(x694-(x695%x696)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x701 = UINT8_MAX;
	int8_t x703 = -21;
	static volatile int16_t x704 = INT16_MAX;
	int32_t t160 = -65576;

    t160 = (x701>(x702-(x703%x704)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x705 = UINT8_MAX;
	int64_t x706 = INT64_MIN;
	int64_t x707 = -1LL;
	int16_t x708 = INT16_MIN;
	volatile int32_t t161 = -154184856;

    t161 = (x705>(x706-(x707%x708)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x710 = 101162002906417481LLU;
	int16_t x712 = INT16_MIN;
	static volatile int32_t t162 = -949029855;

    t162 = (x709>(x710-(x711%x712)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x713 = INT16_MIN;
	volatile int32_t x714 = INT32_MAX;
	static int32_t t163 = 64906;

    t163 = (x713>(x714-(x715%x716)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x717 = 1U;
	uint16_t x718 = 235U;
	uint64_t x719 = 66221LLU;

    t164 = (x717>(x718-(x719%x720)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x722 = UINT32_MAX;
	uint32_t x723 = UINT32_MAX;
	static uint32_t x724 = 129808U;
	static int32_t t165 = 3;

    t165 = (x721>(x722-(x723%x724)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x725 = 262289990U;
	uint32_t x726 = 22U;
	static volatile int16_t x728 = INT16_MIN;
	volatile int32_t t166 = 6;

    t166 = (x725>(x726-(x727%x728)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x729 = 452LLU;
	int32_t x730 = INT32_MIN;
	uint8_t x732 = 111U;

    t167 = (x729>(x730-(x731%x732)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x733 = 1U;
	static int32_t x734 = 134;
	int64_t x735 = 4131612028925383LL;
	volatile int32_t t168 = -2127473;

    t168 = (x733>(x734-(x735%x736)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x737 = INT8_MIN;
	int8_t x739 = -1;
	uint64_t x740 = 87074LLU;
	int32_t t169 = 737;

    t169 = (x737>(x738-(x739%x740)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x741 = UINT64_MAX;
	uint64_t x742 = 55505589LLU;
	int32_t x743 = -1;
	int64_t x744 = INT64_MAX;
	volatile int32_t t170 = 13817;

    t170 = (x741>(x742-(x743%x744)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x745 = INT16_MIN;
	int8_t x746 = 1;
	static int32_t x747 = INT32_MAX;
	int16_t x748 = -1;
	static volatile int32_t t171 = 228425;

    t171 = (x745>(x746-(x747%x748)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x749 = INT16_MIN;
	int64_t x750 = -1LL;
	static volatile int32_t x751 = -7814140;
	int32_t x752 = INT32_MIN;
	int32_t t172 = -17;

    t172 = (x749>(x750-(x751%x752)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x753 = INT32_MIN;
	int32_t x754 = 2;
	int8_t x756 = INT8_MIN;
	volatile int32_t t173 = 1045447523;

    t173 = (x753>(x754-(x755%x756)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x758 = 94LLU;
	static uint8_t x759 = UINT8_MAX;
	static int32_t t174 = 0;

    t174 = (x757>(x758-(x759%x760)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x761 = 4176U;
	int16_t x763 = INT16_MIN;
	volatile int32_t t175 = -3364691;

    t175 = (x761>(x762-(x763%x764)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x766 = INT8_MIN;
	volatile int8_t x767 = -1;
	int32_t x768 = -1;
	volatile int32_t t176 = -19;

    t176 = (x765>(x766-(x767%x768)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x769 = INT16_MAX;

    t177 = (x769>(x770-(x771%x772)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x782 = INT16_MIN;
	uint8_t x783 = 117U;
	int8_t x784 = INT8_MAX;
	volatile int32_t t178 = -1;

    t178 = (x781>(x782-(x783%x784)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x785 = INT64_MAX;
	volatile int8_t x787 = INT8_MIN;
	int32_t t179 = -95887;

    t179 = (x785>(x786-(x787%x788)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x789 = 64643U;
	int64_t x791 = -1LL;
	static volatile int64_t x792 = INT64_MAX;
	static volatile int32_t t180 = 29973;

    t180 = (x789>(x790-(x791%x792)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x793 = 230140350417LL;
	int8_t x794 = -1;
	int16_t x795 = INT16_MAX;
	volatile int32_t x796 = INT32_MIN;
	static volatile int32_t t181 = -119;

    t181 = (x793>(x794-(x795%x796)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x797 = INT16_MIN;
	uint16_t x798 = UINT16_MAX;
	int16_t x800 = INT16_MIN;
	int32_t t182 = 6325;

    t182 = (x797>(x798-(x799%x800)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x801 = 221U;
	uint8_t x802 = 1U;
	static uint8_t x803 = UINT8_MAX;
	uint16_t x804 = UINT16_MAX;
	static volatile int32_t t183 = -10529;

    t183 = (x801>(x802-(x803%x804)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint16_t x806 = 21U;
	static int8_t x807 = -1;
	uint32_t x808 = UINT32_MAX;
	int32_t t184 = 1815013;

    t184 = (x805>(x806-(x807%x808)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x809 = INT16_MIN;
	uint16_t x810 = 15U;
	int16_t x811 = -4;
	uint16_t x812 = UINT16_MAX;
	volatile int32_t t185 = 4143900;

    t185 = (x809>(x810-(x811%x812)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x813 = UINT32_MAX;
	int8_t x815 = INT8_MIN;
	static uint32_t x816 = 128U;
	volatile int32_t t186 = 10851058;

    t186 = (x813>(x814-(x815%x816)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x817 = UINT64_MAX;
	uint8_t x818 = 11U;
	volatile int8_t x819 = -2;
	int8_t x820 = -42;
	static int32_t t187 = -10930;

    t187 = (x817>(x818-(x819%x820)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x821 = INT8_MAX;
	int8_t x822 = INT8_MIN;
	int8_t x823 = INT8_MIN;
	volatile int32_t t188 = 0;

    t188 = (x821>(x822-(x823%x824)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x825 = UINT8_MAX;
	uint8_t x828 = 1U;
	volatile int32_t t189 = 11692;

    t189 = (x825>(x826-(x827%x828)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x834 = INT32_MAX;
	volatile int8_t x835 = INT8_MAX;
	int32_t x836 = INT32_MIN;

    t190 = (x833>(x834-(x835%x836)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x837 = 1397U;
	int16_t x838 = INT16_MIN;
	int64_t x839 = -1LL;
	int64_t x840 = -1LL;

    t191 = (x837>(x838-(x839%x840)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x842 = INT32_MAX;
	volatile int8_t x844 = INT8_MIN;
	int32_t t192 = -7;

    t192 = (x841>(x842-(x843%x844)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x845 = -1;
	int64_t x846 = INT64_MIN;
	int64_t x847 = INT64_MIN;

    t193 = (x845>(x846-(x847%x848)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x849 = INT64_MIN;
	uint64_t x850 = 3173031LLU;
	uint32_t x851 = UINT32_MAX;
	uint64_t x852 = UINT64_MAX;

    t194 = (x849>(x850-(x851%x852)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x853 = 2568077U;
	int32_t x854 = 0;
	int8_t x855 = INT8_MIN;
	int16_t x856 = INT16_MIN;
	volatile int32_t t195 = -851480;

    t195 = (x853>(x854-(x855%x856)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x857 = 36940215519498075LLU;
	int16_t x858 = 8;
	static int32_t t196 = 398;

    t196 = (x857>(x858-(x859%x860)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x862 = UINT16_MAX;
	int8_t x863 = INT8_MAX;

    t197 = (x861>(x862-(x863%x864)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x865 = -14733160789LL;
	uint64_t x866 = 53716LLU;
	uint64_t x867 = 1506695512528615667LLU;
	int64_t x868 = INT64_MIN;

    t198 = (x865>(x866-(x867%x868)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x873 = UINT16_MAX;
	int16_t x875 = 96;

    t199 = (x873>(x874-(x875%x876)));

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

