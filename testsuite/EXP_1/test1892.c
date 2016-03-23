
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

static int8_t x1 = -1;
volatile int8_t x3 = INT8_MIN;
int16_t x8 = INT16_MIN;
volatile int64_t x12 = -1LL;
volatile uint32_t x26 = 0U;
static int8_t x29 = INT8_MIN;
static int64_t x38 = INT64_MAX;
uint16_t x46 = 1U;
volatile uint64_t t13 = 554LLU;
static int64_t x58 = INT64_MAX;
int64_t x59 = INT64_MAX;
int32_t x61 = INT32_MIN;
uint8_t x69 = UINT8_MAX;
volatile int32_t t17 = -2;
static uint8_t x73 = UINT8_MAX;
int32_t x76 = 53262;
volatile int32_t t18 = -218597839;
int32_t x78 = -7639022;
volatile int64_t x82 = -1LL;
uint32_t x87 = 4075239U;
volatile int32_t x88 = 102454;
int16_t x89 = INT16_MIN;
volatile int32_t t22 = 188398810;
int16_t x93 = -15;
volatile uint32_t x95 = UINT32_MAX;
volatile int8_t x96 = -1;
volatile int32_t t24 = -2054;
uint8_t x109 = 2U;
uint16_t x110 = 26U;
static int32_t x111 = -79;
uint16_t x112 = 24097U;
static uint16_t x118 = 79U;
int16_t x128 = 0;
int32_t t30 = 1;
static int32_t x140 = INT32_MAX;
static uint64_t x153 = 487413926LLU;
static volatile int8_t x158 = -8;
int64_t x161 = -25654LL;
int64_t x165 = INT64_MIN;
int64_t x172 = -1LL;
int8_t x176 = 55;
int64_t x178 = INT64_MIN;
static uint64_t x179 = 1LLU;
static int16_t x185 = -1;
uint8_t x190 = UINT8_MAX;
uint8_t x193 = 93U;
static int64_t x199 = 4859688LL;
volatile int8_t x220 = INT8_MAX;
int32_t x223 = -1;
int16_t x243 = INT16_MIN;
volatile int32_t t58 = -140540;
static uint16_t x249 = UINT16_MAX;
int8_t x255 = -42;
int8_t x260 = 0;
uint16_t x261 = UINT16_MAX;
static uint64_t x264 = 47256773061040514LLU;
volatile uint64_t t62 = 1LLU;
int8_t x273 = 1;
static uint16_t x280 = UINT16_MAX;
int32_t x282 = 0;
int8_t x291 = -1;
int32_t t69 = -28850;
int64_t x296 = -249286536913566263LL;
int16_t x303 = INT16_MIN;
uint32_t x304 = 57U;
static volatile int8_t x306 = 6;
static int16_t x307 = -358;
static volatile uint64_t x309 = UINT64_MAX;
static uint16_t x310 = UINT16_MAX;
static int32_t x313 = INT32_MIN;
int16_t x327 = -1;
static uint8_t x338 = 8U;
static int32_t x339 = -1;
volatile int32_t t79 = -595765833;
int32_t t80 = 1699;
static uint32_t x346 = UINT32_MAX;
volatile int32_t t81 = 5018;
int64_t x351 = 422494949149128LL;
int8_t x352 = -1;
volatile int32_t x359 = -248;
volatile int64_t x369 = INT64_MIN;
int32_t x374 = -1;
volatile int64_t x398 = -43416137689142013LL;
static volatile int16_t x401 = INT16_MIN;
uint16_t x404 = 0U;
static int16_t x406 = INT16_MIN;
volatile uint16_t x407 = UINT16_MAX;
int64_t x410 = -1LL;
int32_t t94 = 384996;
static int64_t x419 = INT64_MIN;
static volatile int32_t t95 = 16886;
volatile int32_t x427 = INT32_MIN;
static volatile int64_t x428 = -30880119945667LL;
volatile uint8_t x441 = 111U;
uint64_t x446 = 8139938228416949755LLU;
volatile int16_t x448 = INT16_MIN;
uint8_t x451 = UINT8_MAX;
volatile int16_t x456 = -10366;
volatile int64_t x461 = INT64_MAX;
uint16_t x464 = 868U;
volatile int32_t t104 = 107779;
uint16_t x465 = UINT16_MAX;
volatile int8_t x466 = 15;
int64_t x467 = INT64_MAX;
int8_t x483 = INT8_MIN;
int32_t t109 = -6;
int64_t x496 = 3727378870LL;
uint32_t x501 = UINT32_MAX;
static int8_t x503 = -14;
volatile int8_t x506 = INT8_MIN;
volatile int64_t x510 = INT64_MIN;
int32_t x514 = -54280;
static int32_t x517 = INT32_MIN;
volatile int32_t x521 = INT32_MIN;
volatile int8_t x522 = 0;
uint16_t x530 = UINT16_MAX;
volatile uint16_t x531 = 21279U;
uint64_t x532 = 7LLU;
volatile uint32_t x534 = 245U;
volatile int64_t x535 = 0LL;
static uint64_t x552 = 135712747515315LLU;
volatile int32_t x554 = 23944;
static volatile int64_t x558 = 3LL;
static int8_t x560 = -27;
volatile int32_t t128 = 2776502;
uint16_t x566 = UINT16_MAX;
int16_t x573 = 553;
volatile int32_t t130 = -1893;
uint32_t x581 = 10922278U;
int8_t x582 = -7;
static uint32_t x586 = 6501154U;
uint8_t x591 = UINT8_MAX;
volatile int32_t t134 = 1170359;
int32_t x594 = 0;
int16_t x596 = 1;
int64_t x603 = INT64_MIN;
int32_t x605 = INT32_MAX;
static uint16_t x606 = UINT16_MAX;
volatile uint16_t x610 = UINT16_MAX;
int32_t t139 = 16510;
uint16_t x620 = UINT16_MAX;
int32_t x621 = -106967;
int32_t x635 = -1;
static int64_t x636 = -2LL;
volatile int16_t x643 = -1;
volatile int32_t t145 = 2045084;
volatile uint32_t x652 = 5144U;
int32_t x654 = -9231;
volatile int32_t t148 = -10974036;
static volatile uint32_t t150 = 5U;
int64_t x669 = 5751830954514LL;
int32_t x670 = INT32_MIN;
volatile int32_t x673 = INT32_MIN;
int16_t x674 = INT16_MIN;
uint8_t x675 = 64U;
int8_t x682 = 2;
int16_t x683 = INT16_MIN;
volatile int32_t t154 = -7015;
int16_t x694 = 3;
int64_t t156 = 1623959159313LL;
int64_t x705 = -534439209976LL;
uint8_t x709 = UINT8_MAX;
int32_t x712 = INT32_MAX;
static uint64_t x713 = 10865124LLU;
int8_t x714 = INT8_MIN;
int32_t x715 = INT32_MIN;
int8_t x717 = INT8_MAX;
uint8_t x718 = UINT8_MAX;
static int16_t x721 = INT16_MAX;
static int64_t x723 = INT64_MIN;
volatile uint64_t x725 = 798LLU;
volatile int64_t x726 = INT64_MIN;
static uint64_t x731 = 6766082924682LLU;
static int8_t x732 = INT8_MIN;
volatile uint64_t x733 = 9883322704LLU;
int16_t x747 = INT16_MAX;
static volatile int16_t x748 = -909;
uint16_t x753 = 29768U;
uint32_t x757 = 200868U;
int8_t x758 = INT8_MIN;
uint8_t x763 = 1U;
uint64_t x764 = UINT64_MAX;
volatile int8_t x768 = -1;
int8_t x770 = 0;
int8_t x793 = INT8_MIN;
int16_t x796 = -1;
uint64_t x798 = 3368926040997LLU;
volatile uint16_t x806 = 39U;
static int16_t x810 = -1;
int16_t x811 = -1;
int16_t x818 = 0;
int8_t x826 = INT8_MIN;
static volatile uint64_t x833 = 1507LLU;
int16_t x836 = INT16_MIN;
volatile uint16_t x843 = UINT16_MAX;
int8_t x845 = INT8_MAX;
uint64_t x846 = 124782008469543LLU;
uint16_t x850 = 31351U;
volatile int16_t x851 = INT16_MAX;
volatile int32_t t192 = -702;
static uint16_t x853 = 3943U;
uint32_t x858 = 8225370U;
volatile int32_t x866 = INT32_MIN;
static int64_t x869 = -13110416LL;
static volatile uint16_t x876 = 252U;
uint8_t x884 = UINT8_MAX;


void f0(void) {
    	int16_t x2 = -1;
	uint32_t x4 = 809502U;
	uint32_t t0 = 231944752U;

    t0 = (((x1<=x2)<=x3)-x4);

    if (t0 != 4294157794U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -15153984393LL;
	volatile int8_t x6 = 1;
	volatile uint32_t x7 = UINT32_MAX;
	int32_t t1 = -4509;

    t1 = (((x5<=x6)<=x7)-x8);

    if (t1 != 32769) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int8_t x10 = 0;
	int8_t x11 = INT8_MIN;
	volatile int64_t t2 = 23414322LL;

    t2 = (((x9<=x10)<=x11)-x12);

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	int8_t x14 = -1;
	int64_t x15 = -1LL;
	int8_t x16 = 0;
	static int32_t t3 = -1667170;

    t3 = (((x13<=x14)<=x15)-x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 92;
	volatile int16_t x18 = -1;
	volatile int8_t x19 = INT8_MIN;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = -18643;

    t4 = (((x17<=x18)<=x19)-x20);

    if (t4 != -65535) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 275;
	int8_t x22 = INT8_MIN;
	uint8_t x23 = 38U;
	static int64_t x24 = -1LL;
	static int64_t t5 = -249LL;

    t5 = (((x21<=x22)<=x23)-x24);

    if (t5 != 2LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint8_t x25 = 2U;
	uint8_t x27 = 11U;
	int64_t x28 = -1LL;
	volatile int64_t t6 = -47992785713LL;

    t6 = (((x25<=x26)<=x27)-x28);

    if (t6 != 2LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = 59030873568LL;
	int64_t x31 = -54357813198015422LL;
	static volatile uint8_t x32 = 18U;
	volatile int32_t t7 = -43466261;

    t7 = (((x29<=x30)<=x31)-x32);

    if (t7 != -18) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	int8_t x34 = -1;
	int8_t x35 = INT8_MIN;
	uint8_t x36 = UINT8_MAX;
	int32_t t8 = -286235;

    t8 = (((x33<=x34)<=x35)-x36);

    if (t8 != -255) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 19;
	int8_t x39 = -1;
	int32_t x40 = -2128283;
	int32_t t9 = -8;

    t9 = (((x37<=x38)<=x39)-x40);

    if (t9 != 2128283) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	int64_t x42 = 151136LL;
	uint64_t x43 = 137511474500204911LLU;
	volatile int16_t x44 = INT16_MAX;
	static int32_t t10 = -3275;

    t10 = (((x41<=x42)<=x43)-x44);

    if (t10 != -32766) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = -1;
	static int32_t x47 = 28330;
	static int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 476;

    t11 = (((x45<=x46)<=x47)-x48);

    if (t11 != -126) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 51U;
	static uint32_t x50 = 5678U;
	volatile int8_t x51 = -32;
	volatile uint8_t x52 = 12U;
	static int32_t t12 = -40594;

    t12 = (((x49<=x50)<=x51)-x52);

    if (t12 != -12) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -199281909;
	uint16_t x54 = 736U;
	int32_t x55 = INT32_MIN;
	uint64_t x56 = 0LLU;

    t13 = (((x53<=x54)<=x55)-x56);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	volatile uint64_t x60 = UINT64_MAX;
	uint64_t t14 = 29657931LLU;

    t14 = (((x57<=x58)<=x59)-x60);

    if (t14 != 2LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x62 = 176116U;
	static int32_t x63 = INT32_MIN;
	uint8_t x64 = 32U;
	static int32_t t15 = -238;

    t15 = (((x61<=x62)<=x63)-x64);

    if (t15 != -32) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = -2482489;
	static int32_t x66 = -1;
	volatile int8_t x67 = INT8_MIN;
	static int8_t x68 = INT8_MIN;
	volatile int32_t t16 = 113;

    t16 = (((x65<=x66)<=x67)-x68);

    if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x70 = UINT8_MAX;
	static int64_t x71 = 183LL;
	uint16_t x72 = UINT16_MAX;

    t17 = (((x69<=x70)<=x71)-x72);

    if (t17 != -65534) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x74 = INT8_MIN;
	int8_t x75 = INT8_MAX;

    t18 = (((x73<=x74)<=x75)-x76);

    if (t18 != -53261) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	int16_t x79 = INT16_MIN;
	static uint32_t x80 = 31989045U;
	uint32_t t19 = 58136U;

    t19 = (((x77<=x78)<=x79)-x80);

    if (t19 != 4262978251U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	int32_t x83 = -1;
	uint16_t x84 = UINT16_MAX;
	int32_t t20 = 473633194;

    t20 = (((x81<=x82)<=x83)-x84);

    if (t20 != -65535) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 0;
	int8_t x86 = INT8_MIN;
	volatile int32_t t21 = -1;

    t21 = (((x85<=x86)<=x87)-x88);

    if (t21 != -102453) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x90 = INT64_MIN;
	int64_t x91 = -1030287662505178LL;
	int32_t x92 = INT32_MAX;

    t22 = (((x89<=x90)<=x91)-x92);

    if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = INT64_MIN;
	volatile int32_t t23 = 20925;

    t23 = (((x93<=x94)<=x95)-x96);

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = UINT16_MAX;
	volatile int8_t x98 = 50;
	int8_t x99 = 2;
	static int8_t x100 = INT8_MIN;

    t24 = (((x97<=x98)<=x99)-x100);

    if (t24 != 129) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x101 = 4731912515001LL;
	uint16_t x102 = 104U;
	int16_t x103 = -1;
	volatile int32_t x104 = -1;
	int32_t t25 = -521313759;

    t25 = (((x101<=x102)<=x103)-x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t t26 = 118719;

    t26 = (((x109<=x110)<=x111)-x112);

    if (t26 != -24097) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = 47596;
	int8_t x119 = INT8_MAX;
	uint32_t x120 = UINT32_MAX;
	uint32_t t27 = 1U;

    t27 = (((x117<=x118)<=x119)-x120);

    if (t27 != 2U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = -14;
	uint64_t x122 = 80LLU;
	int32_t x123 = INT32_MAX;
	static int32_t x124 = -227;
	static volatile int32_t t28 = -37636869;

    t28 = (((x121<=x122)<=x123)-x124);

    if (t28 != 228) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x125 = -64402;
	int8_t x126 = INT8_MIN;
	volatile int64_t x127 = 626976663387LL;
	int32_t t29 = -1932238;

    t29 = (((x125<=x126)<=x127)-x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int8_t x129 = INT8_MAX;
	int16_t x130 = INT16_MIN;
	int8_t x131 = -1;
	int8_t x132 = INT8_MIN;

    t30 = (((x129<=x130)<=x131)-x132);

    if (t30 != 128) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = -1;
	static int8_t x134 = INT8_MAX;
	volatile int8_t x135 = -1;
	int8_t x136 = INT8_MIN;
	int32_t t31 = 454;

    t31 = (((x133<=x134)<=x135)-x136);

    if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = -43;
	int32_t x138 = 17702;
	uint8_t x139 = UINT8_MAX;
	int32_t t32 = -1;

    t32 = (((x137<=x138)<=x139)-x140);

    if (t32 != -2147483646) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = 29;
	static int16_t x142 = INT16_MAX;
	static volatile int8_t x143 = INT8_MAX;
	volatile uint32_t x144 = 58912666U;
	volatile uint32_t t33 = 85U;

    t33 = (((x141<=x142)<=x143)-x144);

    if (t33 != 4236054631U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x145 = 4;
	uint32_t x146 = 13951U;
	int16_t x147 = -1;
	int32_t x148 = -45;
	int32_t t34 = 229373585;

    t34 = (((x145<=x146)<=x147)-x148);

    if (t34 != 45) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x149 = INT32_MIN;
	volatile uint16_t x150 = 23888U;
	volatile int64_t x151 = -1LL;
	static uint8_t x152 = UINT8_MAX;
	volatile int32_t t35 = -1;

    t35 = (((x149<=x150)<=x151)-x152);

    if (t35 != -255) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x154 = 44087862LLU;
	int8_t x155 = -1;
	static uint64_t x156 = 130020777857358LLU;
	static uint64_t t36 = 4534141343961LLU;

    t36 = (((x153<=x154)<=x155)-x156);

    if (t36 != 18446614052931694258LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x157 = UINT64_MAX;
	int32_t x159 = -1;
	static int64_t x160 = -79169593456LL;
	volatile int64_t t37 = -202339LL;

    t37 = (((x157<=x158)<=x159)-x160);

    if (t37 != 79169593456LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x162 = -1;
	volatile int16_t x163 = 0;
	static uint16_t x164 = UINT16_MAX;
	int32_t t38 = -11634;

    t38 = (((x161<=x162)<=x163)-x164);

    if (t38 != -65535) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x166 = 59U;
	static uint8_t x167 = 2U;
	volatile int16_t x168 = INT16_MIN;
	volatile int32_t t39 = 43362443;

    t39 = (((x165<=x166)<=x167)-x168);

    if (t39 != 32769) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x169 = 8LLU;
	int16_t x170 = INT16_MIN;
	static uint64_t x171 = 965LLU;
	volatile int64_t t40 = -31294683844LL;

    t40 = (((x169<=x170)<=x171)-x172);

    if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x173 = INT64_MIN;
	int8_t x174 = INT8_MIN;
	volatile uint8_t x175 = 1U;
	static int32_t t41 = 24905;

    t41 = (((x173<=x174)<=x175)-x176);

    if (t41 != -54) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x177 = 78620492990406564LLU;
	static volatile int16_t x180 = -1;
	static int32_t t42 = 4442;

    t42 = (((x177<=x178)<=x179)-x180);

    if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x181 = -873263606;
	int64_t x182 = INT64_MIN;
	volatile int64_t x183 = -1LL;
	static uint32_t x184 = UINT32_MAX;
	uint32_t t43 = 5125U;

    t43 = (((x181<=x182)<=x183)-x184);

    if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x186 = INT16_MAX;
	static int32_t x187 = INT32_MAX;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t44 = 1082337692587490020LLU;

    t44 = (((x185<=x186)<=x187)-x188);

    if (t44 != 2LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x189 = INT64_MIN;
	uint8_t x191 = 42U;
	int8_t x192 = INT8_MAX;
	volatile int32_t t45 = 7467736;

    t45 = (((x189<=x190)<=x191)-x192);

    if (t45 != -126) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x194 = -1;
	int8_t x195 = INT8_MIN;
	uint64_t x196 = 2442308933270118LLU;
	uint64_t t46 = 2209696LLU;

    t46 = (((x193<=x194)<=x195)-x196);

    if (t46 != 18444301764776281498LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x197 = 56;
	int32_t x198 = 7616;
	int64_t x200 = -1LL;
	volatile int64_t t47 = 15259247725LL;

    t47 = (((x197<=x198)<=x199)-x200);

    if (t47 != 2LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint8_t x201 = 14U;
	int64_t x202 = 7478042331237LL;
	volatile uint16_t x203 = 5U;
	volatile int64_t x204 = -1LL;
	volatile int64_t t48 = 38983033398LL;

    t48 = (((x201<=x202)<=x203)-x204);

    if (t48 != 2LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = INT8_MIN;
	volatile int8_t x206 = 1;
	static int8_t x207 = INT8_MAX;
	int16_t x208 = INT16_MIN;
	int32_t t49 = 45;

    t49 = (((x205<=x206)<=x207)-x208);

    if (t49 != 32769) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x209 = INT8_MAX;
	uint32_t x210 = 3742U;
	volatile int16_t x211 = -1;
	volatile uint32_t x212 = 420U;
	volatile uint32_t t50 = 788U;

    t50 = (((x209<=x210)<=x211)-x212);

    if (t50 != 4294966876U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x213 = INT32_MAX;
	volatile int8_t x214 = INT8_MAX;
	int64_t x215 = -2257300LL;
	uint32_t x216 = 2199U;
	uint32_t t51 = 111294625U;

    t51 = (((x213<=x214)<=x215)-x216);

    if (t51 != 4294965097U) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = -8032239;
	int16_t x218 = INT16_MAX;
	int64_t x219 = 4899112092LL;
	static volatile int32_t t52 = 3675127;

    t52 = (((x217<=x218)<=x219)-x220);

    if (t52 != -126) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = INT16_MAX;
	int64_t x222 = INT64_MIN;
	int64_t x224 = 85616925535737729LL;
	int64_t t53 = 616664LL;

    t53 = (((x221<=x222)<=x223)-x224);

    if (t53 != -85616925535737729LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x225 = UINT16_MAX;
	int64_t x226 = 204182332448LL;
	int32_t x227 = -1;
	volatile int32_t x228 = INT32_MAX;
	volatile int32_t t54 = -2;

    t54 = (((x225<=x226)<=x227)-x228);

    if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x233 = INT64_MAX;
	static uint16_t x234 = 2609U;
	volatile uint8_t x235 = UINT8_MAX;
	int8_t x236 = -2;
	int32_t t55 = 177767600;

    t55 = (((x233<=x234)<=x235)-x236);

    if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x237 = INT32_MAX;
	static volatile uint32_t x238 = 4960U;
	uint16_t x239 = 1185U;
	static uint64_t x240 = 47125233152897LLU;
	volatile uint64_t t56 = 33787899394010992LLU;

    t56 = (((x237<=x238)<=x239)-x240);

    if (t56 != 18446696948476398720LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x241 = -28;
	int64_t x242 = -1462181LL;
	volatile int16_t x244 = INT16_MAX;
	int32_t t57 = 120639;

    t57 = (((x241<=x242)<=x243)-x244);

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = -1;
	uint32_t x246 = UINT32_MAX;
	int64_t x247 = -11147605LL;
	volatile int32_t x248 = INT32_MAX;

    t58 = (((x245<=x246)<=x247)-x248);

    if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x250 = -1;
	volatile int32_t x251 = 151627404;
	volatile int16_t x252 = -1;
	static int32_t t59 = 915359922;

    t59 = (((x249<=x250)<=x251)-x252);

    if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x253 = INT8_MAX;
	uint16_t x254 = 13U;
	uint8_t x256 = 74U;
	volatile int32_t t60 = -15827299;

    t60 = (((x253<=x254)<=x255)-x256);

    if (t60 != -74) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x257 = INT8_MAX;
	volatile int16_t x258 = INT16_MIN;
	volatile int8_t x259 = INT8_MIN;
	int32_t t61 = -48527189;

    t61 = (((x257<=x258)<=x259)-x260);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MIN;

    t62 = (((x261<=x262)<=x263)-x264);

    if (t62 != 18399487300648511102LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x265 = INT32_MAX;
	uint32_t x266 = 783833527U;
	volatile uint16_t x267 = UINT16_MAX;
	static uint64_t x268 = 397686306490LLU;
	uint64_t t63 = 299858LLU;

    t63 = (((x265<=x266)<=x267)-x268);

    if (t63 != 18446743676023245127LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x269 = INT32_MAX;
	uint32_t x270 = 94631U;
	int64_t x271 = INT64_MAX;
	volatile int16_t x272 = INT16_MAX;
	static int32_t t64 = -5423717;

    t64 = (((x269<=x270)<=x271)-x272);

    if (t64 != -32766) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x274 = -1;
	static uint32_t x275 = 0U;
	int8_t x276 = INT8_MIN;
	volatile int32_t t65 = 5;

    t65 = (((x273<=x274)<=x275)-x276);

    if (t65 != 129) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x277 = 0U;
	static uint32_t x278 = 2733970U;
	volatile int32_t x279 = 44950;
	static volatile int32_t t66 = -15703832;

    t66 = (((x277<=x278)<=x279)-x280);

    if (t66 != -65534) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x281 = 134980LL;
	volatile int8_t x283 = INT8_MIN;
	uint8_t x284 = UINT8_MAX;
	static volatile int32_t t67 = -4;

    t67 = (((x281<=x282)<=x283)-x284);

    if (t67 != -255) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x285 = UINT8_MAX;
	static int16_t x286 = -1449;
	int64_t x287 = INT64_MIN;
	int64_t x288 = -1LL;
	volatile int64_t t68 = -41381691155354LL;

    t68 = (((x285<=x286)<=x287)-x288);

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x289 = -1;
	uint8_t x290 = 5U;
	int32_t x292 = -613660698;

    t69 = (((x289<=x290)<=x291)-x292);

    if (t69 != 613660698) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x293 = 45862984394337LL;
	uint64_t x294 = 151169LLU;
	int16_t x295 = -8993;
	int64_t t70 = -3589163318195809471LL;

    t70 = (((x293<=x294)<=x295)-x296);

    if (t70 != 249286536913566263LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x297 = 2129636371655594LLU;
	uint32_t x298 = 3373899U;
	int64_t x299 = -714LL;
	uint32_t x300 = 1854638U;
	volatile uint32_t t71 = 99607447U;

    t71 = (((x297<=x298)<=x299)-x300);

    if (t71 != 4293112658U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x301 = INT16_MIN;
	uint32_t x302 = UINT32_MAX;
	volatile uint32_t t72 = 1U;

    t72 = (((x301<=x302)<=x303)-x304);

    if (t72 != 4294967239U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x305 = INT16_MIN;
	int16_t x308 = INT16_MIN;
	volatile int32_t t73 = -370;

    t73 = (((x305<=x306)<=x307)-x308);

    if (t73 != 32768) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x311 = 24717U;
	static int64_t x312 = -2093697LL;
	static int64_t t74 = 1511364095044428079LL;

    t74 = (((x309<=x310)<=x311)-x312);

    if (t74 != 2093698LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x314 = -1;
	static int64_t x315 = INT64_MIN;
	int16_t x316 = INT16_MIN;
	static int32_t t75 = 136014;

    t75 = (((x313<=x314)<=x315)-x316);

    if (t75 != 32768) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x317 = 0U;
	int64_t x318 = -1LL;
	uint64_t x319 = 3004906057025LLU;
	uint32_t x320 = UINT32_MAX;
	uint32_t t76 = 431739521U;

    t76 = (((x317<=x318)<=x319)-x320);

    if (t76 != 2U) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x325 = 815424U;
	int64_t x326 = INT64_MIN;
	int16_t x328 = INT16_MIN;
	volatile int32_t t77 = -95;

    t77 = (((x325<=x326)<=x327)-x328);

    if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x333 = -1LL;
	uint8_t x334 = 61U;
	int16_t x335 = -1;
	int16_t x336 = INT16_MAX;
	int32_t t78 = -10441;

    t78 = (((x333<=x334)<=x335)-x336);

    if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x337 = INT32_MIN;
	int16_t x340 = INT16_MAX;

    t79 = (((x337<=x338)<=x339)-x340);

    if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x341 = 0U;
	int64_t x342 = INT64_MIN;
	int32_t x343 = INT32_MIN;
	volatile int8_t x344 = INT8_MIN;

    t80 = (((x341<=x342)<=x343)-x344);

    if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x345 = 3535807;
	static volatile int32_t x347 = -1;
	static int16_t x348 = 9;

    t81 = (((x345<=x346)<=x347)-x348);

    if (t81 != -9) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x349 = -94786LL;
	uint64_t x350 = 57695LLU;
	int32_t t82 = -1;

    t82 = (((x349<=x350)<=x351)-x352);

    if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x353 = INT32_MAX;
	uint32_t x354 = 0U;
	volatile int64_t x355 = 16483234832LL;
	volatile uint8_t x356 = 14U;
	static volatile int32_t t83 = 530142562;

    t83 = (((x353<=x354)<=x355)-x356);

    if (t83 != -13) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x357 = 127672858483166465LL;
	volatile uint8_t x358 = UINT8_MAX;
	uint32_t x360 = UINT32_MAX;
	uint32_t t84 = 0U;

    t84 = (((x357<=x358)<=x359)-x360);

    if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x370 = -886948959845641LL;
	static uint64_t x371 = 5614LLU;
	int32_t x372 = -127952150;
	static volatile int32_t t85 = -86068;

    t85 = (((x369<=x370)<=x371)-x372);

    if (t85 != 127952151) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x373 = INT16_MIN;
	int32_t x375 = 229629003;
	volatile int16_t x376 = INT16_MAX;
	static int32_t t86 = -4;

    t86 = (((x373<=x374)<=x375)-x376);

    if (t86 != -32766) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x377 = 101917951;
	uint16_t x378 = 295U;
	int8_t x379 = -1;
	volatile int8_t x380 = INT8_MIN;
	int32_t t87 = -3591;

    t87 = (((x377<=x378)<=x379)-x380);

    if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x381 = -1;
	volatile int16_t x382 = -12;
	int64_t x383 = INT64_MIN;
	uint32_t x384 = 583002585U;
	uint32_t t88 = 165402U;

    t88 = (((x381<=x382)<=x383)-x384);

    if (t88 != 3711964711U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x385 = -1;
	int64_t x386 = INT64_MAX;
	uint16_t x387 = 18284U;
	static volatile int64_t x388 = INT64_MAX;
	int64_t t89 = 105830416785420LL;

    t89 = (((x385<=x386)<=x387)-x388);

    if (t89 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x397 = INT16_MAX;
	int64_t x399 = INT64_MAX;
	static int8_t x400 = INT8_MIN;
	static volatile int32_t t90 = -1;

    t90 = (((x397<=x398)<=x399)-x400);

    if (t90 != 129) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x402 = INT32_MIN;
	int8_t x403 = INT8_MIN;
	int32_t t91 = -40075968;

    t91 = (((x401<=x402)<=x403)-x404);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x405 = -3777;
	int8_t x408 = -1;
	int32_t t92 = -489932;

    t92 = (((x405<=x406)<=x407)-x408);

    if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x409 = INT64_MAX;
	uint16_t x411 = 0U;
	static int32_t x412 = 22830;
	static int32_t t93 = 88;

    t93 = (((x409<=x410)<=x411)-x412);

    if (t93 != -22829) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x413 = INT64_MIN;
	int64_t x414 = INT64_MIN;
	volatile int64_t x415 = 4276754506LL;
	uint8_t x416 = UINT8_MAX;

    t94 = (((x413<=x414)<=x415)-x416);

    if (t94 != -254) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x417 = -14;
	volatile int32_t x418 = -515564;
	int16_t x420 = INT16_MAX;

    t95 = (((x417<=x418)<=x419)-x420);

    if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint16_t x425 = 5751U;
	int32_t x426 = INT32_MIN;
	int64_t t96 = -850983470LL;

    t96 = (((x425<=x426)<=x427)-x428);

    if (t96 != 30880119945667LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x429 = 106U;
	uint8_t x430 = 4U;
	volatile int32_t x431 = INT32_MAX;
	volatile uint64_t x432 = UINT64_MAX;
	uint64_t t97 = 115107560196353529LLU;

    t97 = (((x429<=x430)<=x431)-x432);

    if (t97 != 2LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x433 = UINT32_MAX;
	int8_t x434 = INT8_MIN;
	int8_t x435 = -1;
	int32_t x436 = 31;
	int32_t t98 = 34036306;

    t98 = (((x433<=x434)<=x435)-x436);

    if (t98 != -31) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x442 = INT16_MIN;
	int16_t x443 = INT16_MIN;
	int32_t x444 = 6;
	volatile int32_t t99 = -17361593;

    t99 = (((x441<=x442)<=x443)-x444);

    if (t99 != -6) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x445 = INT64_MIN;
	volatile uint8_t x447 = 50U;
	int32_t t100 = 3;

    t100 = (((x445<=x446)<=x447)-x448);

    if (t100 != 32769) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x449 = -1LL;
	volatile int64_t x450 = INT64_MIN;
	int8_t x452 = INT8_MIN;
	int32_t t101 = -61340;

    t101 = (((x449<=x450)<=x451)-x452);

    if (t101 != 129) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x453 = UINT32_MAX;
	int16_t x454 = -1;
	volatile uint8_t x455 = 6U;
	static int32_t t102 = -199034;

    t102 = (((x453<=x454)<=x455)-x456);

    if (t102 != 10367) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint8_t x457 = 47U;
	int8_t x458 = -35;
	int32_t x459 = INT32_MAX;
	int32_t x460 = INT32_MAX;
	static volatile int32_t t103 = 1;

    t103 = (((x457<=x458)<=x459)-x460);

    if (t103 != -2147483646) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x462 = INT64_MIN;
	int16_t x463 = 5606;

    t104 = (((x461<=x462)<=x463)-x464);

    if (t104 != -867) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x468 = 0;
	static volatile int32_t t105 = -5213766;

    t105 = (((x465<=x466)<=x467)-x468);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x469 = 421U;
	static int8_t x470 = INT8_MIN;
	int64_t x471 = INT64_MAX;
	static int32_t x472 = -226282857;
	int32_t t106 = 990;

    t106 = (((x469<=x470)<=x471)-x472);

    if (t106 != 226282858) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x473 = 196;
	static volatile int8_t x474 = 25;
	uint16_t x475 = UINT16_MAX;
	int16_t x476 = -1;
	int32_t t107 = -4033242;

    t107 = (((x473<=x474)<=x475)-x476);

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x477 = 549099125254LLU;
	int8_t x478 = 9;
	int64_t x479 = -931036918777733006LL;
	volatile uint16_t x480 = 26783U;
	static volatile int32_t t108 = -130;

    t108 = (((x477<=x478)<=x479)-x480);

    if (t108 != -26783) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x481 = -1;
	uint16_t x482 = 7015U;
	int8_t x484 = INT8_MIN;

    t109 = (((x481<=x482)<=x483)-x484);

    if (t109 != 128) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x485 = UINT16_MAX;
	int64_t x486 = 8LL;
	int32_t x487 = -6;
	uint64_t x488 = 259155548LLU;
	volatile uint64_t t110 = 10764059LLU;

    t110 = (((x485<=x486)<=x487)-x488);

    if (t110 != 18446744073450396068LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x489 = -12;
	volatile int32_t x490 = INT32_MAX;
	int64_t x491 = INT64_MAX;
	uint64_t x492 = UINT64_MAX;
	static uint64_t t111 = 0LLU;

    t111 = (((x489<=x490)<=x491)-x492);

    if (t111 != 2LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x493 = 26329U;
	static int8_t x494 = -1;
	uint16_t x495 = 445U;
	volatile int64_t t112 = -24954205368LL;

    t112 = (((x493<=x494)<=x495)-x496);

    if (t112 != -3727378869LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x497 = 5;
	int16_t x498 = INT16_MAX;
	static volatile uint32_t x499 = UINT32_MAX;
	uint16_t x500 = 3004U;
	int32_t t113 = -6613;

    t113 = (((x497<=x498)<=x499)-x500);

    if (t113 != -3003) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x502 = 12603U;
	static int64_t x504 = -36236834686040282LL;
	static int64_t t114 = 117670635192313764LL;

    t114 = (((x501<=x502)<=x503)-x504);

    if (t114 != 36236834686040282LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x505 = -1;
	int64_t x507 = -466LL;
	int8_t x508 = INT8_MIN;
	volatile int32_t t115 = -21129;

    t115 = (((x505<=x506)<=x507)-x508);

    if (t115 != 128) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x509 = INT8_MAX;
	int8_t x511 = INT8_MAX;
	int64_t x512 = INT64_MAX;
	static volatile int64_t t116 = -63672LL;

    t116 = (((x509<=x510)<=x511)-x512);

    if (t116 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x513 = INT64_MIN;
	int8_t x515 = INT8_MIN;
	static int64_t x516 = INT64_MAX;
	int64_t t117 = 8418868837LL;

    t117 = (((x513<=x514)<=x515)-x516);

    if (t117 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x518 = INT32_MIN;
	volatile int64_t x519 = -3841029848892235530LL;
	uint32_t x520 = UINT32_MAX;
	volatile uint32_t t118 = 456U;

    t118 = (((x517<=x518)<=x519)-x520);

    if (t118 != 1U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x523 = 2U;
	uint8_t x524 = 106U;
	int32_t t119 = -58852;

    t119 = (((x521<=x522)<=x523)-x524);

    if (t119 != -105) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x525 = -1480447LL;
	static volatile int64_t x526 = INT64_MIN;
	int32_t x527 = -1;
	uint16_t x528 = UINT16_MAX;
	volatile int32_t t120 = 16042;

    t120 = (((x525<=x526)<=x527)-x528);

    if (t120 != -65535) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint64_t x529 = 4923389723LLU;
	volatile uint64_t t121 = 28248218404701669LLU;

    t121 = (((x529<=x530)<=x531)-x532);

    if (t121 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x533 = 0;
	int16_t x536 = 466;
	volatile int32_t t122 = 2817;

    t122 = (((x533<=x534)<=x535)-x536);

    if (t122 != -466) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x537 = UINT16_MAX;
	int16_t x538 = -1;
	int16_t x539 = -1;
	static int8_t x540 = INT8_MAX;
	volatile int32_t t123 = 37;

    t123 = (((x537<=x538)<=x539)-x540);

    if (t123 != -127) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x541 = 1550085551585532914LLU;
	int32_t x542 = INT32_MIN;
	uint8_t x543 = 11U;
	volatile int16_t x544 = INT16_MAX;
	volatile int32_t t124 = -64757712;

    t124 = (((x541<=x542)<=x543)-x544);

    if (t124 != -32766) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x545 = 4U;
	static volatile int8_t x546 = INT8_MIN;
	int8_t x547 = INT8_MAX;
	uint16_t x548 = 5882U;
	volatile int32_t t125 = 5839402;

    t125 = (((x545<=x546)<=x547)-x548);

    if (t125 != -5881) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x549 = INT64_MIN;
	int8_t x550 = INT8_MIN;
	uint64_t x551 = UINT64_MAX;
	volatile uint64_t t126 = 38414153507LLU;

    t126 = (((x549<=x550)<=x551)-x552);

    if (t126 != 18446608360962036302LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x553 = -1;
	static volatile int8_t x555 = -9;
	int64_t x556 = 0LL;
	int64_t t127 = 1008295LL;

    t127 = (((x553<=x554)<=x555)-x556);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x557 = INT16_MIN;
	int64_t x559 = 1933443013180474LL;

    t128 = (((x557<=x558)<=x559)-x560);

    if (t128 != 28) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x565 = INT64_MIN;
	volatile uint32_t x567 = 9706051U;
	uint32_t x568 = 442606U;
	volatile uint32_t t129 = 8U;

    t129 = (((x565<=x566)<=x567)-x568);

    if (t129 != 4294524691U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x574 = 3U;
	static int8_t x575 = 9;
	uint16_t x576 = 4939U;

    t130 = (((x573<=x574)<=x575)-x576);

    if (t130 != -4938) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x577 = INT16_MIN;
	int8_t x578 = -9;
	uint32_t x579 = UINT32_MAX;
	uint32_t x580 = 448084U;
	uint32_t t131 = 6U;

    t131 = (((x577<=x578)<=x579)-x580);

    if (t131 != 4294519213U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x583 = INT16_MIN;
	int64_t x584 = INT64_MAX;
	int64_t t132 = 11LL;

    t132 = (((x581<=x582)<=x583)-x584);

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x585 = -138457427619LL;
	int32_t x587 = INT32_MIN;
	volatile int16_t x588 = 332;
	int32_t t133 = -71;

    t133 = (((x585<=x586)<=x587)-x588);

    if (t133 != -332) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x589 = -1;
	volatile uint64_t x590 = UINT64_MAX;
	static volatile int16_t x592 = -112;

    t134 = (((x589<=x590)<=x591)-x592);

    if (t134 != 113) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x593 = 39U;
	int16_t x595 = INT16_MIN;
	int32_t t135 = 1981863;

    t135 = (((x593<=x594)<=x595)-x596);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x601 = 0;
	uint16_t x602 = 1U;
	uint32_t x604 = 642957U;
	uint32_t t136 = 3141773U;

    t136 = (((x601<=x602)<=x603)-x604);

    if (t136 != 4294324339U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x607 = INT16_MIN;
	volatile uint32_t x608 = 12220U;
	uint32_t t137 = 475104U;

    t137 = (((x605<=x606)<=x607)-x608);

    if (t137 != 4294955076U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x609 = INT8_MIN;
	int32_t x611 = INT32_MIN;
	volatile int32_t x612 = 1;
	int32_t t138 = -5073;

    t138 = (((x609<=x610)<=x611)-x612);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x613 = INT8_MIN;
	int64_t x614 = 236234400LL;
	static volatile int16_t x615 = INT16_MAX;
	int16_t x616 = 6849;

    t139 = (((x613<=x614)<=x615)-x616);

    if (t139 != -6848) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x617 = UINT32_MAX;
	int32_t x618 = INT32_MAX;
	uint64_t x619 = UINT64_MAX;
	volatile int32_t t140 = 689;

    t140 = (((x617<=x618)<=x619)-x620);

    if (t140 != -65534) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x622 = INT16_MAX;
	uint32_t x623 = UINT32_MAX;
	uint16_t x624 = 6523U;
	int32_t t141 = 1;

    t141 = (((x621<=x622)<=x623)-x624);

    if (t141 != -6522) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x633 = 1U;
	static volatile int16_t x634 = INT16_MIN;
	int64_t t142 = -1208743863033776LL;

    t142 = (((x633<=x634)<=x635)-x636);

    if (t142 != 2LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x637 = UINT8_MAX;
	uint64_t x638 = UINT64_MAX;
	int16_t x639 = -114;
	static uint32_t x640 = 104745817U;
	uint32_t t143 = 1507435204U;

    t143 = (((x637<=x638)<=x639)-x640);

    if (t143 != 4190221479U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x641 = INT16_MAX;
	uint64_t x642 = 16865180703471LLU;
	volatile int64_t x644 = -1LL;
	volatile int64_t t144 = 14700740256LL;

    t144 = (((x641<=x642)<=x643)-x644);

    if (t144 != 1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x645 = INT32_MAX;
	uint32_t x646 = UINT32_MAX;
	uint32_t x647 = 12805991U;
	int8_t x648 = -1;

    t145 = (((x645<=x646)<=x647)-x648);

    if (t145 != 2) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x649 = UINT32_MAX;
	static uint16_t x650 = UINT16_MAX;
	static uint32_t x651 = 3025U;
	volatile uint32_t t146 = 581U;

    t146 = (((x649<=x650)<=x651)-x652);

    if (t146 != 4294962153U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x653 = -1;
	volatile int8_t x655 = INT8_MAX;
	volatile int64_t x656 = 115190675877LL;
	volatile int64_t t147 = 889828717965LL;

    t147 = (((x653<=x654)<=x655)-x656);

    if (t147 != -115190675876LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x657 = INT32_MAX;
	static volatile uint32_t x658 = UINT32_MAX;
	volatile uint8_t x659 = 5U;
	int8_t x660 = 1;

    t148 = (((x657<=x658)<=x659)-x660);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x661 = UINT64_MAX;
	static volatile int64_t x662 = INT64_MIN;
	static uint64_t x663 = UINT64_MAX;
	volatile uint32_t x664 = 97154244U;
	uint32_t t149 = 45775951U;

    t149 = (((x661<=x662)<=x663)-x664);

    if (t149 != 4197813053U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x665 = INT16_MIN;
	int64_t x666 = -1LL;
	static volatile int16_t x667 = INT16_MIN;
	static uint32_t x668 = UINT32_MAX;

    t150 = (((x665<=x666)<=x667)-x668);

    if (t150 != 1U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x671 = -3925035498849332341LL;
	uint64_t x672 = UINT64_MAX;
	volatile uint64_t t151 = 788914008211280983LLU;

    t151 = (((x669<=x670)<=x671)-x672);

    if (t151 != 1LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x676 = INT16_MIN;
	int32_t t152 = -103274189;

    t152 = (((x673<=x674)<=x675)-x676);

    if (t152 != 32769) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x681 = 2U;
	static int64_t x684 = -474348709LL;
	int64_t t153 = 17739598537907401LL;

    t153 = (((x681<=x682)<=x683)-x684);

    if (t153 != 474348709LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x685 = UINT8_MAX;
	volatile int32_t x686 = 14066954;
	int64_t x687 = INT64_MAX;
	int32_t x688 = 29835;

    t154 = (((x685<=x686)<=x687)-x688);

    if (t154 != -29834) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x693 = 31U;
	static int32_t x695 = 3;
	static int32_t x696 = INT32_MAX;
	volatile int32_t t155 = -18;

    t155 = (((x693<=x694)<=x695)-x696);

    if (t155 != -2147483646) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x697 = -1;
	int8_t x698 = INT8_MAX;
	static int16_t x699 = -3473;
	int64_t x700 = -1LL;

    t156 = (((x697<=x698)<=x699)-x700);

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x701 = -107642065004827593LL;
	uint16_t x702 = 0U;
	static int32_t x703 = 823;
	volatile int32_t x704 = -1;
	static int32_t t157 = 446;

    t157 = (((x701<=x702)<=x703)-x704);

    if (t157 != 2) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x706 = -1LL;
	static uint8_t x707 = 74U;
	static int8_t x708 = INT8_MIN;
	static int32_t t158 = 2751;

    t158 = (((x705<=x706)<=x707)-x708);

    if (t158 != 129) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x710 = INT8_MAX;
	static uint16_t x711 = 595U;
	int32_t t159 = 25;

    t159 = (((x709<=x710)<=x711)-x712);

    if (t159 != -2147483646) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x716 = 23068403954654293LLU;
	volatile uint64_t t160 = 8537670298208486099LLU;

    t160 = (((x713<=x714)<=x715)-x716);

    if (t160 != 18423675669754897323LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x719 = UINT64_MAX;
	volatile int16_t x720 = -1;
	static volatile int32_t t161 = 86925779;

    t161 = (((x717<=x718)<=x719)-x720);

    if (t161 != 2) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x722 = 126187204364809LL;
	static volatile uint64_t x724 = 7223603860829690LLU;
	uint64_t t162 = 109419710634419090LLU;

    t162 = (((x721<=x722)<=x723)-x724);

    if (t162 != 18439520469848721926LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x727 = -1LL;
	volatile int64_t x728 = 18373434663LL;
	volatile int64_t t163 = -138506491LL;

    t163 = (((x725<=x726)<=x727)-x728);

    if (t163 != -18373434663LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x729 = INT64_MIN;
	int32_t x730 = INT32_MAX;
	volatile int32_t t164 = 25534919;

    t164 = (((x729<=x730)<=x731)-x732);

    if (t164 != 129) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x734 = INT64_MAX;
	uint32_t x735 = 7082609U;
	static int16_t x736 = -7;
	int32_t t165 = -616225;

    t165 = (((x733<=x734)<=x735)-x736);

    if (t165 != 8) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x737 = 0;
	int16_t x738 = -1;
	int64_t x739 = -1LL;
	int8_t x740 = INT8_MAX;
	static int32_t t166 = 176272288;

    t166 = (((x737<=x738)<=x739)-x740);

    if (t166 != -127) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x745 = -1LL;
	uint32_t x746 = UINT32_MAX;
	volatile int32_t t167 = 11;

    t167 = (((x745<=x746)<=x747)-x748);

    if (t167 != 910) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x749 = UINT8_MAX;
	int32_t x750 = INT32_MIN;
	int64_t x751 = INT64_MIN;
	static int16_t x752 = INT16_MAX;
	volatile int32_t t168 = -2;

    t168 = (((x749<=x750)<=x751)-x752);

    if (t168 != -32767) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x754 = 4U;
	volatile int8_t x755 = -1;
	uint8_t x756 = 36U;
	int32_t t169 = -785;

    t169 = (((x753<=x754)<=x755)-x756);

    if (t169 != -36) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x759 = INT32_MIN;
	volatile uint64_t x760 = 4LLU;
	uint64_t t170 = 2415677604383480796LLU;

    t170 = (((x757<=x758)<=x759)-x760);

    if (t170 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x761 = UINT64_MAX;
	uint8_t x762 = UINT8_MAX;
	volatile uint64_t t171 = 56591764LLU;

    t171 = (((x761<=x762)<=x763)-x764);

    if (t171 != 2LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x765 = 515242664U;
	static uint32_t x766 = 1777584365U;
	int64_t x767 = INT64_MAX;
	int32_t t172 = -46;

    t172 = (((x765<=x766)<=x767)-x768);

    if (t172 != 2) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x769 = INT64_MAX;
	static uint64_t x771 = 7569227565111232LLU;
	int8_t x772 = INT8_MIN;
	volatile int32_t t173 = 12;

    t173 = (((x769<=x770)<=x771)-x772);

    if (t173 != 129) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x773 = -1;
	uint8_t x774 = 5U;
	volatile int64_t x775 = 399132187517306420LL;
	int32_t x776 = 8078013;
	volatile int32_t t174 = -2989;

    t174 = (((x773<=x774)<=x775)-x776);

    if (t174 != -8078012) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x777 = INT64_MIN;
	int32_t x778 = INT32_MIN;
	int32_t x779 = INT32_MAX;
	uint32_t x780 = 2829U;
	static volatile uint32_t t175 = 7053U;

    t175 = (((x777<=x778)<=x779)-x780);

    if (t175 != 4294964468U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x781 = UINT64_MAX;
	volatile int64_t x782 = INT64_MIN;
	static uint16_t x783 = 2U;
	volatile int8_t x784 = INT8_MIN;
	int32_t t176 = 16244;

    t176 = (((x781<=x782)<=x783)-x784);

    if (t176 != 129) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x785 = INT8_MIN;
	static int32_t x786 = 18;
	volatile int16_t x787 = INT16_MIN;
	int8_t x788 = INT8_MAX;
	volatile int32_t t177 = 3018691;

    t177 = (((x785<=x786)<=x787)-x788);

    if (t177 != -127) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint8_t x789 = 9U;
	int32_t x790 = INT32_MIN;
	int32_t x791 = -1;
	int64_t x792 = INT64_MAX;
	volatile int64_t t178 = -377LL;

    t178 = (((x789<=x790)<=x791)-x792);

    if (t178 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x794 = INT32_MIN;
	int64_t x795 = 1LL;
	volatile int32_t t179 = -104853922;

    t179 = (((x793<=x794)<=x795)-x796);

    if (t179 != 2) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x797 = 4678;
	volatile int8_t x799 = INT8_MIN;
	int32_t x800 = INT32_MAX;
	volatile int32_t t180 = -485098518;

    t180 = (((x797<=x798)<=x799)-x800);

    if (t180 != -2147483647) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x801 = 2U;
	uint16_t x802 = 217U;
	volatile int16_t x803 = INT16_MIN;
	uint32_t x804 = UINT32_MAX;
	static volatile uint32_t t181 = 62U;

    t181 = (((x801<=x802)<=x803)-x804);

    if (t181 != 1U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x805 = 26U;
	uint32_t x807 = 10322U;
	int64_t x808 = -38889633217832363LL;
	volatile int64_t t182 = -20187582163LL;

    t182 = (((x805<=x806)<=x807)-x808);

    if (t182 != 38889633217832364LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x809 = INT32_MAX;
	int8_t x812 = INT8_MIN;
	volatile int32_t t183 = -2500;

    t183 = (((x809<=x810)<=x811)-x812);

    if (t183 != 128) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x813 = 726969337U;
	volatile uint16_t x814 = 205U;
	int8_t x815 = INT8_MIN;
	int8_t x816 = INT8_MIN;
	volatile int32_t t184 = 73081361;

    t184 = (((x813<=x814)<=x815)-x816);

    if (t184 != 128) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x817 = UINT64_MAX;
	static volatile int8_t x819 = -25;
	int16_t x820 = 29;
	int32_t t185 = -263372234;

    t185 = (((x817<=x818)<=x819)-x820);

    if (t185 != -29) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x821 = INT8_MIN;
	uint8_t x822 = 1U;
	int32_t x823 = -427190677;
	int32_t x824 = -1;
	int32_t t186 = 3877;

    t186 = (((x821<=x822)<=x823)-x824);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x825 = INT32_MIN;
	int32_t x827 = -1;
	int16_t x828 = -1;
	static volatile int32_t t187 = 1;

    t187 = (((x825<=x826)<=x827)-x828);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x834 = 8701LLU;
	uint32_t x835 = 394U;
	int32_t t188 = -5587519;

    t188 = (((x833<=x834)<=x835)-x836);

    if (t188 != 32769) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint8_t x837 = UINT8_MAX;
	volatile int32_t x838 = INT32_MIN;
	static int32_t x839 = -1;
	volatile uint32_t x840 = UINT32_MAX;
	uint32_t t189 = 41571334U;

    t189 = (((x837<=x838)<=x839)-x840);

    if (t189 != 1U) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x841 = 2U;
	uint16_t x842 = 0U;
	int64_t x844 = 5LL;
	int64_t t190 = 351224082676647227LL;

    t190 = (((x841<=x842)<=x843)-x844);

    if (t190 != -4LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x847 = INT8_MIN;
	int8_t x848 = INT8_MIN;
	static volatile int32_t t191 = 0;

    t191 = (((x845<=x846)<=x847)-x848);

    if (t191 != 128) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x849 = 59U;
	int8_t x852 = -1;

    t192 = (((x849<=x850)<=x851)-x852);

    if (t192 != 2) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x854 = 229U;
	int8_t x855 = -1;
	uint64_t x856 = 14029690101621264LLU;
	static uint64_t t193 = 33043LLU;

    t193 = (((x853<=x854)<=x855)-x856);

    if (t193 != 18432714383607930352LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x857 = 0;
	volatile uint16_t x859 = 3357U;
	uint32_t x860 = 5980523U;
	uint32_t t194 = 127652158U;

    t194 = (((x857<=x858)<=x859)-x860);

    if (t194 != 4288986774U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x861 = UINT32_MAX;
	volatile uint64_t x862 = UINT64_MAX;
	uint8_t x863 = UINT8_MAX;
	static volatile int64_t x864 = -1LL;
	static volatile int64_t t195 = -51223035480LL;

    t195 = (((x861<=x862)<=x863)-x864);

    if (t195 != 2LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x865 = INT8_MAX;
	volatile int8_t x867 = -1;
	uint16_t x868 = 9077U;
	int32_t t196 = 1624;

    t196 = (((x865<=x866)<=x867)-x868);

    if (t196 != -9077) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x870 = -1;
	int8_t x871 = INT8_MIN;
	int16_t x872 = INT16_MIN;
	static int32_t t197 = -627148;

    t197 = (((x869<=x870)<=x871)-x872);

    if (t197 != 32768) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x873 = 1U;
	static volatile uint8_t x874 = UINT8_MAX;
	static int8_t x875 = -35;
	static volatile int32_t t198 = 3;

    t198 = (((x873<=x874)<=x875)-x876);

    if (t198 != -252) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x881 = -1LL;
	int32_t x882 = -1;
	int16_t x883 = -5989;
	static int32_t t199 = 22;

    t199 = (((x881<=x882)<=x883)-x884);

    if (t199 != -255) { NG(); } else { ; }
	
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

