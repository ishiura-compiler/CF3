
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

volatile uint32_t x1 = UINT32_MAX;
volatile int32_t x8 = INT32_MAX;
static int32_t t1 = -1902;
static volatile uint32_t x13 = 269U;
static int32_t x16 = 1;
static int16_t x23 = -1;
int32_t t5 = 3850;
static volatile int32_t t6 = -12;
static volatile int32_t t7 = 0;
volatile int32_t t10 = 61;
int32_t t11 = -25944;
uint16_t x50 = 3U;
int8_t x53 = INT8_MAX;
volatile int32_t t13 = -904482;
static int32_t x61 = INT32_MIN;
volatile uint32_t x62 = 1U;
int16_t x74 = -3;
volatile uint32_t x79 = 1539504251U;
uint16_t x80 = UINT16_MAX;
int32_t t22 = 146009005;
static uint16_t x97 = 8134U;
uint64_t x101 = 3463277293349073277LLU;
int32_t t24 = -53958;
static uint64_t x106 = UINT64_MAX;
uint16_t x107 = 82U;
volatile int64_t x118 = INT64_MAX;
uint8_t x121 = UINT8_MAX;
int64_t x122 = -1LL;
volatile int8_t x125 = 2;
uint8_t x127 = 9U;
static uint64_t x136 = UINT64_MAX;
int16_t x140 = INT16_MIN;
volatile int32_t t33 = 663;
int16_t x150 = 3167;
static uint8_t x155 = UINT8_MAX;
int32_t t37 = -463448334;
int8_t x158 = 6;
int32_t x163 = INT32_MAX;
volatile int32_t t40 = -702;
int32_t x169 = INT32_MIN;
uint64_t x174 = 22619783198LLU;
uint32_t x182 = 5449256U;
int64_t x183 = -32605360224513LL;
int32_t t46 = -46;
volatile int8_t x200 = INT8_MAX;
static uint64_t x201 = UINT64_MAX;
int32_t x206 = -10495;
int16_t x209 = -2;
static int8_t x213 = INT8_MAX;
static volatile uint8_t x215 = 40U;
int32_t x220 = -1;
int32_t t53 = 215708;
int16_t x222 = -14273;
volatile uint32_t x236 = 265U;
int16_t x238 = -1617;
uint8_t x242 = 1U;
volatile int64_t x243 = 4568103335375735127LL;
int32_t x244 = -78248;
int16_t x246 = -7357;
int16_t x249 = -1;
uint16_t x253 = 5471U;
int32_t x264 = INT32_MIN;
volatile int32_t t64 = 212335;
int32_t x268 = -1899;
int32_t x271 = INT32_MIN;
volatile uint32_t x284 = 12298U;
int64_t x295 = -391969889781588LL;
uint32_t x299 = UINT32_MAX;
volatile int32_t t74 = -65674;
int16_t x310 = -6459;
static int8_t x312 = -1;
volatile int32_t t76 = -49;
volatile uint16_t x313 = 10U;
int16_t x314 = INT16_MAX;
volatile int32_t t77 = 3;
int16_t x317 = -1;
volatile int32_t t78 = 16;
uint8_t x323 = 2U;
volatile int32_t x332 = INT32_MIN;
volatile int32_t t82 = -88973;
int8_t x345 = INT8_MAX;
int32_t x347 = -58520;
int32_t x349 = INT32_MIN;
int16_t x350 = 773;
uint64_t x356 = UINT64_MAX;
int8_t x361 = INT8_MIN;
int16_t x372 = 11365;
static uint16_t x374 = 14590U;
int32_t t92 = -10;
uint32_t x378 = 91U;
int8_t x382 = -1;
uint16_t x383 = UINT16_MAX;
static uint64_t x389 = 10331901348753071LLU;
static int32_t x393 = -1;
static int32_t x397 = -128130092;
uint16_t x398 = 17016U;
uint16_t x401 = UINT16_MAX;
uint64_t x402 = 5883322LLU;
volatile uint32_t x407 = 2044U;
static int32_t t100 = -461292;
int8_t x411 = 28;
uint8_t x413 = 7U;
volatile int64_t x414 = -1LL;
volatile int32_t t102 = -46735;
int8_t x417 = INT8_MAX;
int16_t x423 = INT16_MIN;
int64_t x424 = INT64_MIN;
int64_t x426 = -1LL;
volatile int32_t t105 = 960677970;
static int8_t x433 = -54;
int32_t t107 = -3365621;
volatile int16_t x442 = INT16_MIN;
volatile int32_t t109 = 1;
uint32_t x446 = UINT32_MAX;
int8_t x448 = INT8_MAX;
uint16_t x455 = 467U;
int16_t x465 = INT16_MIN;
int32_t x466 = 163;
static int8_t x473 = 1;
int64_t x477 = -30145571LL;
int32_t t118 = 93773034;
int32_t t119 = 646222;
volatile int32_t t121 = 14;
int16_t x497 = 15146;
int8_t x500 = -1;
static int32_t t122 = 6;
int64_t x504 = -349506LL;
int64_t x512 = 1944583224164783LL;
volatile int32_t t125 = 17;
volatile int16_t x518 = INT16_MIN;
int32_t t127 = -314;
int16_t x522 = -1;
volatile int32_t t128 = -1643940;
uint16_t x525 = 1U;
uint8_t x526 = 92U;
int32_t x530 = -1;
int32_t x533 = INT32_MIN;
int64_t x534 = INT64_MIN;
static int64_t x541 = -241LL;
static uint8_t x544 = 104U;
volatile int64_t x547 = INT64_MIN;
static int16_t x549 = INT16_MIN;
volatile int32_t x550 = INT32_MIN;
int32_t x551 = 17327;
int32_t t135 = -192;
int8_t x554 = -1;
int16_t x564 = INT16_MAX;
int64_t x573 = -1LL;
volatile int32_t t141 = -15;
volatile int32_t t142 = -11679;
volatile int8_t x582 = 3;
int16_t x590 = INT16_MIN;
static volatile int32_t t145 = 248129;
volatile uint8_t x594 = 49U;
int8_t x597 = 1;
static int32_t t148 = -285361865;
uint32_t x605 = UINT32_MAX;
int64_t x610 = INT64_MIN;
int8_t x613 = INT8_MIN;
uint64_t x619 = UINT64_MAX;
uint8_t x620 = 1U;
static int8_t x628 = -1;
int8_t x635 = -1;
int32_t t156 = -987;
int16_t x643 = -1;
int32_t t162 = 1868;
int32_t x668 = INT32_MAX;
volatile int32_t t168 = 4;
int8_t x696 = -1;
uint8_t x698 = 1U;
int32_t x699 = 1130;
int8_t x707 = INT8_MIN;
int16_t x708 = -1;
int16_t x710 = INT16_MIN;
int64_t x717 = INT64_MAX;
static volatile int8_t x720 = 0;
volatile int32_t t177 = 508;
volatile uint16_t x730 = 257U;
uint8_t x731 = 1U;
uint32_t x732 = 60079222U;
int64_t x734 = 46529LL;
static int32_t x738 = 3;
int32_t x742 = 7590;
static int64_t x747 = INT64_MIN;
int32_t x757 = -20641;
uint16_t x760 = 4U;
int8_t x762 = -20;
static int32_t x763 = INT32_MAX;
int64_t x770 = 4LL;
int16_t x787 = INT16_MIN;
int32_t x789 = 53091799;
int16_t x798 = -1;
int8_t x801 = 1;
volatile int64_t x803 = INT64_MIN;
int16_t x804 = -1;
int32_t x805 = -1;
uint8_t x810 = UINT8_MAX;


void f0(void) {
    	volatile int8_t x2 = INT8_MIN;
	int64_t x3 = 122239833825019LL;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = 3000110;

    t0 = ((x1>(x2%x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	volatile int64_t x6 = -536186017519519459LL;
	volatile int16_t x7 = INT16_MIN;

    t1 = ((x5>(x6%x7))<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = INT32_MIN;
	static int8_t x10 = INT8_MIN;
	static uint16_t x11 = 2U;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = -35007493;

    t2 = ((x9>(x10%x11))<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x14 = UINT16_MAX;
	static uint64_t x15 = 6157002652LLU;
	int32_t t3 = -173756;

    t3 = ((x13>(x14%x15))<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	int64_t x18 = INT64_MAX;
	static volatile int64_t x19 = INT64_MIN;
	volatile uint8_t x20 = 24U;
	volatile int32_t t4 = 7001997;

    t4 = ((x17>(x18%x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = 1210117U;
	volatile int8_t x22 = -22;
	static uint16_t x24 = 7U;

    t5 = ((x21>(x22%x23))<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	uint64_t x26 = UINT64_MAX;
	static volatile uint64_t x27 = UINT64_MAX;
	uint64_t x28 = 515716941894327LLU;

    t6 = ((x25>(x26%x27))<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x29 = UINT8_MAX;
	volatile int8_t x30 = INT8_MAX;
	int64_t x31 = INT64_MAX;
	static int8_t x32 = 1;

    t7 = ((x29>(x30%x31))<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = UINT32_MAX;
	uint64_t x34 = 1598605535LLU;
	int8_t x35 = INT8_MAX;
	static uint64_t x36 = 54136LLU;
	int32_t t8 = 226;

    t8 = ((x33>(x34%x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = -1LL;
	int32_t x38 = -40;
	volatile int64_t x39 = 4LL;
	uint8_t x40 = UINT8_MAX;
	static volatile int32_t t9 = -2671;

    t9 = ((x37>(x38%x39))<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	int8_t x42 = INT8_MIN;
	static volatile uint32_t x43 = 284100U;
	int8_t x44 = 9;

    t10 = ((x41>(x42%x43))<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 2U;
	int16_t x46 = INT16_MAX;
	static uint16_t x47 = 41U;
	int8_t x48 = INT8_MIN;

    t11 = ((x45>(x46%x47))<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -1;
	int8_t x51 = INT8_MIN;
	volatile int8_t x52 = INT8_MAX;
	static int32_t t12 = 871781;

    t12 = ((x49>(x50%x51))<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x54 = UINT16_MAX;
	int32_t x55 = -1;
	static uint64_t x56 = 146361731771521LLU;

    t13 = ((x53>(x54%x55))<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = UINT16_MAX;
	int8_t x58 = -29;
	int16_t x59 = -1;
	volatile int16_t x60 = -1;
	static volatile int32_t t14 = 30851;

    t14 = ((x57>(x58%x59))<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x63 = -597784365;
	int16_t x64 = -788;
	int32_t t15 = 2176487;

    t15 = ((x61>(x62%x63))<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -3;
	int8_t x66 = 44;
	volatile int8_t x67 = -1;
	uint64_t x68 = UINT64_MAX;
	int32_t t16 = 414649;

    t16 = ((x65>(x66%x67))<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x73 = UINT16_MAX;
	static volatile int16_t x75 = INT16_MAX;
	int64_t x76 = INT64_MIN;
	static volatile int32_t t17 = -32552755;

    t17 = ((x73>(x74%x75))<=x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x77 = INT32_MAX;
	int8_t x78 = -7;
	int32_t t18 = -1011626815;

    t18 = ((x77>(x78%x79))<=x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MAX;
	volatile int64_t x82 = INT64_MAX;
	int32_t x83 = -1;
	int64_t x84 = INT64_MIN;
	volatile int32_t t19 = -367;

    t19 = ((x81>(x82%x83))<=x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = INT8_MAX;
	int16_t x86 = INT16_MIN;
	uint32_t x87 = UINT32_MAX;
	int32_t x88 = -5;
	int32_t t20 = 28410493;

    t20 = ((x85>(x86%x87))<=x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x89 = 11U;
	uint64_t x90 = UINT64_MAX;
	int8_t x91 = INT8_MAX;
	int32_t x92 = INT32_MIN;
	int32_t t21 = 7;

    t21 = ((x89>(x90%x91))<=x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x93 = 1;
	int16_t x94 = -897;
	int16_t x95 = 1;
	volatile int8_t x96 = 14;

    t22 = ((x93>(x94%x95))<=x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x98 = UINT32_MAX;
	uint8_t x99 = UINT8_MAX;
	static int32_t x100 = -54;
	static int32_t t23 = -229;

    t23 = ((x97>(x98%x99))<=x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x102 = -1LL;
	uint64_t x103 = 1671204102LLU;
	uint64_t x104 = 3983924280284LLU;

    t24 = ((x101>(x102%x103))<=x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x105 = -1;
	volatile int32_t x108 = INT32_MIN;
	static int32_t t25 = -38313;

    t25 = ((x105>(x106%x107))<=x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x109 = INT64_MAX;
	uint32_t x110 = UINT32_MAX;
	uint8_t x111 = 9U;
	uint8_t x112 = 1U;
	int32_t t26 = 2;

    t26 = ((x109>(x110%x111))<=x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x113 = -1;
	uint8_t x114 = 3U;
	int32_t x115 = INT32_MIN;
	uint32_t x116 = UINT32_MAX;
	int32_t t27 = -8219;

    t27 = ((x113>(x114%x115))<=x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x117 = INT64_MAX;
	uint64_t x119 = 3575LLU;
	static int8_t x120 = INT8_MIN;
	volatile int32_t t28 = 30836293;

    t28 = ((x117>(x118%x119))<=x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x123 = 3;
	volatile uint8_t x124 = 0U;
	int32_t t29 = -17076;

    t29 = ((x121>(x122%x123))<=x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x126 = UINT8_MAX;
	uint64_t x128 = 76510541LLU;
	int32_t t30 = 12450913;

    t30 = ((x125>(x126%x127))<=x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x129 = 2065943685LLU;
	int64_t x130 = INT64_MIN;
	static int64_t x131 = -1LL;
	static uint16_t x132 = 13190U;
	int32_t t31 = -24496;

    t31 = ((x129>(x130%x131))<=x132);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x133 = -1;
	uint32_t x134 = 203U;
	static int16_t x135 = INT16_MAX;
	int32_t t32 = 0;

    t32 = ((x133>(x134%x135))<=x136);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = INT32_MIN;
	int32_t x138 = 368707;
	int32_t x139 = INT32_MIN;

    t33 = ((x137>(x138%x139))<=x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x141 = 4U;
	volatile uint16_t x142 = 95U;
	uint16_t x143 = UINT16_MAX;
	volatile int8_t x144 = -11;
	static int32_t t34 = -241201;

    t34 = ((x141>(x142%x143))<=x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x145 = 48U;
	int64_t x146 = -397205LL;
	int8_t x147 = INT8_MAX;
	volatile int16_t x148 = INT16_MIN;
	static volatile int32_t t35 = -30;

    t35 = ((x145>(x146%x147))<=x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x149 = -15;
	uint64_t x151 = UINT64_MAX;
	static int64_t x152 = -1LL;
	int32_t t36 = -144383016;

    t36 = ((x149>(x150%x151))<=x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x153 = 160398709U;
	int16_t x154 = 5141;
	uint32_t x156 = UINT32_MAX;

    t37 = ((x153>(x154%x155))<=x156);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x157 = 6U;
	int16_t x159 = INT16_MIN;
	static int64_t x160 = INT64_MIN;
	int32_t t38 = -1;

    t38 = ((x157>(x158%x159))<=x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x161 = 13U;
	volatile int16_t x162 = -1;
	int64_t x164 = 126083133035668LL;
	volatile int32_t t39 = 239544031;

    t39 = ((x161>(x162%x163))<=x164);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x165 = INT32_MAX;
	int8_t x166 = INT8_MIN;
	int64_t x167 = 1256983977451966LL;
	uint32_t x168 = 108587896U;

    t40 = ((x165>(x166%x167))<=x168);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x170 = 3;
	volatile int64_t x171 = INT64_MAX;
	uint32_t x172 = 13206U;
	volatile int32_t t41 = -2807;

    t41 = ((x169>(x170%x171))<=x172);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x173 = UINT16_MAX;
	uint16_t x175 = UINT16_MAX;
	int8_t x176 = INT8_MAX;
	int32_t t42 = 2062;

    t42 = ((x173>(x174%x175))<=x176);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x177 = -1;
	int16_t x178 = 4;
	int64_t x179 = -11LL;
	int32_t x180 = INT32_MAX;
	volatile int32_t t43 = -45722;

    t43 = ((x177>(x178%x179))<=x180);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = -1;
	static volatile int32_t x184 = INT32_MAX;
	volatile int32_t t44 = -432486;

    t44 = ((x181>(x182%x183))<=x184);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = INT16_MIN;
	volatile uint8_t x186 = UINT8_MAX;
	uint64_t x187 = 24836492LLU;
	int8_t x188 = INT8_MIN;
	volatile int32_t t45 = 649488;

    t45 = ((x185>(x186%x187))<=x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x189 = 1;
	uint32_t x190 = 50001227U;
	int64_t x191 = 360893805422LL;
	uint16_t x192 = 240U;

    t46 = ((x189>(x190%x191))<=x192);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x193 = INT32_MAX;
	int8_t x194 = -3;
	uint32_t x195 = 470615440U;
	int16_t x196 = INT16_MIN;
	int32_t t47 = 2175;

    t47 = ((x193>(x194%x195))<=x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x197 = 260238417LL;
	int64_t x198 = INT64_MIN;
	static int32_t x199 = -1;
	int32_t t48 = 2259917;

    t48 = ((x197>(x198%x199))<=x200);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x202 = -1LL;
	int8_t x203 = INT8_MAX;
	int32_t x204 = -1;
	static int32_t t49 = 1;

    t49 = ((x201>(x202%x203))<=x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x205 = INT64_MIN;
	int64_t x207 = INT64_MIN;
	static volatile int8_t x208 = -1;
	volatile int32_t t50 = -9;

    t50 = ((x205>(x206%x207))<=x208);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x210 = UINT64_MAX;
	volatile int64_t x211 = INT64_MIN;
	uint16_t x212 = 5U;
	volatile int32_t t51 = -284431;

    t51 = ((x209>(x210%x211))<=x212);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x214 = INT8_MIN;
	volatile int8_t x216 = -1;
	int32_t t52 = 138393;

    t52 = ((x213>(x214%x215))<=x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x217 = INT16_MIN;
	uint32_t x218 = 68U;
	uint64_t x219 = 221LLU;

    t53 = ((x217>(x218%x219))<=x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x221 = INT16_MIN;
	static int16_t x223 = -47;
	volatile uint8_t x224 = 1U;
	int32_t t54 = -109758;

    t54 = ((x221>(x222%x223))<=x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x225 = INT32_MIN;
	static int8_t x226 = INT8_MAX;
	volatile int32_t x227 = 3882;
	static volatile int32_t x228 = INT32_MAX;
	volatile int32_t t55 = 157105;

    t55 = ((x225>(x226%x227))<=x228);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x229 = INT16_MIN;
	int64_t x230 = INT64_MAX;
	static volatile uint16_t x231 = UINT16_MAX;
	static int64_t x232 = INT64_MAX;
	volatile int32_t t56 = 0;

    t56 = ((x229>(x230%x231))<=x232);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x233 = UINT32_MAX;
	int16_t x234 = -1;
	static int32_t x235 = INT32_MIN;
	volatile int32_t t57 = -62993;

    t57 = ((x233>(x234%x235))<=x236);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x237 = -1LL;
	static int64_t x239 = -1LL;
	int32_t x240 = 946790338;
	int32_t t58 = 1;

    t58 = ((x237>(x238%x239))<=x240);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x241 = UINT64_MAX;
	int32_t t59 = 5604105;

    t59 = ((x241>(x242%x243))<=x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x245 = 1396098133LLU;
	static int32_t x247 = INT32_MAX;
	int64_t x248 = 15674885LL;
	static volatile int32_t t60 = 538;

    t60 = ((x245>(x246%x247))<=x248);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x250 = INT64_MIN;
	int16_t x251 = INT16_MIN;
	int32_t x252 = INT32_MIN;
	int32_t t61 = 907;

    t61 = ((x249>(x250%x251))<=x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x254 = 16883728752800053LLU;
	int32_t x255 = -45;
	volatile uint16_t x256 = UINT16_MAX;
	int32_t t62 = 4042673;

    t62 = ((x253>(x254%x255))<=x256);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x257 = 5U;
	uint32_t x258 = UINT32_MAX;
	int64_t x259 = INT64_MIN;
	int64_t x260 = INT64_MAX;
	static volatile int32_t t63 = 4;

    t63 = ((x257>(x258%x259))<=x260);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x261 = 116350826052930LLU;
	int8_t x262 = 19;
	int64_t x263 = -1765669396562865658LL;

    t64 = ((x261>(x262%x263))<=x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x265 = 2490LLU;
	uint64_t x266 = 11540LLU;
	int32_t x267 = 1525;
	int32_t t65 = 5689129;

    t65 = ((x265>(x266%x267))<=x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x269 = -1;
	uint16_t x270 = 2U;
	int32_t x272 = INT32_MIN;
	volatile int32_t t66 = -5488716;

    t66 = ((x269>(x270%x271))<=x272);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x273 = INT64_MIN;
	int8_t x274 = INT8_MAX;
	uint64_t x275 = UINT64_MAX;
	static uint32_t x276 = 3217U;
	static int32_t t67 = -1;

    t67 = ((x273>(x274%x275))<=x276);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x277 = INT8_MIN;
	int8_t x278 = -3;
	int64_t x279 = INT64_MIN;
	static volatile uint16_t x280 = 391U;
	int32_t t68 = 115669;

    t68 = ((x277>(x278%x279))<=x280);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x281 = INT16_MAX;
	volatile uint64_t x282 = UINT64_MAX;
	static int8_t x283 = INT8_MAX;
	int32_t t69 = -8338686;

    t69 = ((x281>(x282%x283))<=x284);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x285 = -36;
	volatile uint16_t x286 = 4U;
	int64_t x287 = -1LL;
	int8_t x288 = INT8_MIN;
	int32_t t70 = 25701;

    t70 = ((x285>(x286%x287))<=x288);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x289 = -1;
	volatile int16_t x290 = INT16_MIN;
	int8_t x291 = 11;
	uint64_t x292 = 32970933LLU;
	int32_t t71 = -48798;

    t71 = ((x289>(x290%x291))<=x292);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x293 = 27;
	volatile int8_t x294 = -1;
	int16_t x296 = INT16_MIN;
	int32_t t72 = -1029015322;

    t72 = ((x293>(x294%x295))<=x296);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x297 = 1;
	int8_t x298 = INT8_MAX;
	uint64_t x300 = UINT64_MAX;
	static int32_t t73 = -16093992;

    t73 = ((x297>(x298%x299))<=x300);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x301 = 186471U;
	int32_t x302 = INT32_MIN;
	volatile int16_t x303 = -1;
	uint32_t x304 = UINT32_MAX;

    t74 = ((x301>(x302%x303))<=x304);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x305 = INT16_MIN;
	volatile uint16_t x306 = 1855U;
	int64_t x307 = 119214050988794LL;
	int32_t x308 = INT32_MIN;
	volatile int32_t t75 = 2297574;

    t75 = ((x305>(x306%x307))<=x308);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x309 = 4;
	int32_t x311 = 27976245;

    t76 = ((x309>(x310%x311))<=x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x315 = -1;
	static int8_t x316 = 1;

    t77 = ((x313>(x314%x315))<=x316);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x318 = -1;
	int8_t x319 = 2;
	static uint16_t x320 = 32560U;

    t78 = ((x317>(x318%x319))<=x320);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x321 = INT16_MIN;
	static int64_t x322 = -1LL;
	int64_t x324 = INT64_MAX;
	volatile int32_t t79 = -12;

    t79 = ((x321>(x322%x323))<=x324);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x325 = -9;
	volatile int32_t x326 = INT32_MIN;
	volatile int16_t x327 = INT16_MIN;
	static volatile uint32_t x328 = 1070U;
	int32_t t80 = -1;

    t80 = ((x325>(x326%x327))<=x328);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x329 = INT64_MIN;
	uint16_t x330 = 30138U;
	int16_t x331 = INT16_MIN;
	int32_t t81 = 16047023;

    t81 = ((x329>(x330%x331))<=x332);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x333 = 1878;
	int8_t x334 = 4;
	volatile int16_t x335 = INT16_MIN;
	static volatile uint16_t x336 = 7074U;

    t82 = ((x333>(x334%x335))<=x336);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x337 = 15327;
	uint8_t x338 = 4U;
	int16_t x339 = -2;
	int64_t x340 = INT64_MAX;
	volatile int32_t t83 = 35792821;

    t83 = ((x337>(x338%x339))<=x340);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x341 = 0LL;
	static volatile int16_t x342 = -1;
	uint8_t x343 = 2U;
	int32_t x344 = INT32_MAX;
	static int32_t t84 = 45818236;

    t84 = ((x341>(x342%x343))<=x344);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x346 = 121U;
	int8_t x348 = INT8_MAX;
	volatile int32_t t85 = -176877;

    t85 = ((x345>(x346%x347))<=x348);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x351 = UINT64_MAX;
	static volatile uint64_t x352 = 762LLU;
	int32_t t86 = -233274342;

    t86 = ((x349>(x350%x351))<=x352);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x353 = INT32_MIN;
	uint8_t x354 = UINT8_MAX;
	volatile uint32_t x355 = UINT32_MAX;
	static int32_t t87 = -64290;

    t87 = ((x353>(x354%x355))<=x356);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x357 = -2263;
	int32_t x358 = -8179995;
	volatile int32_t x359 = -1;
	uint64_t x360 = 8482249770714984578LLU;
	volatile int32_t t88 = -109225;

    t88 = ((x357>(x358%x359))<=x360);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x362 = 1382701617271LLU;
	uint32_t x363 = 247201U;
	int8_t x364 = -1;
	int32_t t89 = -12;

    t89 = ((x361>(x362%x363))<=x364);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x365 = 0;
	volatile int8_t x366 = INT8_MIN;
	uint16_t x367 = 1U;
	volatile int16_t x368 = INT16_MAX;
	volatile int32_t t90 = -7;

    t90 = ((x365>(x366%x367))<=x368);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x369 = UINT32_MAX;
	int64_t x370 = -1LL;
	int32_t x371 = -1;
	volatile int32_t t91 = 36006;

    t91 = ((x369>(x370%x371))<=x372);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x373 = INT16_MIN;
	volatile int16_t x375 = -1;
	int64_t x376 = -1LL;

    t92 = ((x373>(x374%x375))<=x376);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x377 = INT64_MIN;
	int32_t x379 = -1;
	volatile uint8_t x380 = 18U;
	static int32_t t93 = 6193;

    t93 = ((x377>(x378%x379))<=x380);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x381 = UINT16_MAX;
	int16_t x384 = -1;
	static volatile int32_t t94 = 60870906;

    t94 = ((x381>(x382%x383))<=x384);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x385 = 0U;
	volatile int32_t x386 = -65919231;
	int8_t x387 = INT8_MIN;
	int8_t x388 = -2;
	volatile int32_t t95 = -217420115;

    t95 = ((x385>(x386%x387))<=x388);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x390 = 6U;
	volatile uint16_t x391 = 2064U;
	static int64_t x392 = INT64_MIN;
	int32_t t96 = -956326;

    t96 = ((x389>(x390%x391))<=x392);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x394 = -1LL;
	static uint64_t x395 = UINT64_MAX;
	uint16_t x396 = 8U;
	static int32_t t97 = -5667;

    t97 = ((x393>(x394%x395))<=x396);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x399 = -23;
	static volatile int64_t x400 = INT64_MIN;
	static int32_t t98 = -13385;

    t98 = ((x397>(x398%x399))<=x400);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x403 = 1;
	volatile uint16_t x404 = 1726U;
	volatile int32_t t99 = -205;

    t99 = ((x401>(x402%x403))<=x404);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x405 = UINT32_MAX;
	int32_t x406 = -1;
	static int64_t x408 = 619879462382722802LL;

    t100 = ((x405>(x406%x407))<=x408);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x409 = 33;
	static uint8_t x410 = 2U;
	uint32_t x412 = UINT32_MAX;
	int32_t t101 = 0;

    t101 = ((x409>(x410%x411))<=x412);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x415 = -1;
	volatile int64_t x416 = INT64_MIN;

    t102 = ((x413>(x414%x415))<=x416);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x418 = 10U;
	uint32_t x419 = 724072415U;
	int32_t x420 = INT32_MIN;
	int32_t t103 = -391490728;

    t103 = ((x417>(x418%x419))<=x420);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x421 = INT16_MAX;
	int8_t x422 = INT8_MIN;
	int32_t t104 = 81598558;

    t104 = ((x421>(x422%x423))<=x424);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x425 = 13U;
	static uint8_t x427 = UINT8_MAX;
	static volatile int16_t x428 = INT16_MIN;

    t105 = ((x425>(x426%x427))<=x428);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x429 = 8LLU;
	int32_t x430 = INT32_MIN;
	int8_t x431 = -1;
	int64_t x432 = INT64_MIN;
	volatile int32_t t106 = 125940535;

    t106 = ((x429>(x430%x431))<=x432);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x434 = -1;
	int32_t x435 = -1;
	volatile int8_t x436 = INT8_MIN;

    t107 = ((x433>(x434%x435))<=x436);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x437 = INT16_MAX;
	static int32_t x438 = 15101588;
	volatile int32_t x439 = -939;
	static int64_t x440 = -1LL;
	static volatile int32_t t108 = -2721491;

    t108 = ((x437>(x438%x439))<=x440);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x441 = INT64_MAX;
	volatile uint16_t x443 = 9574U;
	static int32_t x444 = INT32_MAX;

    t109 = ((x441>(x442%x443))<=x444);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x445 = INT8_MIN;
	static int16_t x447 = -6;
	int32_t t110 = 1;

    t110 = ((x445>(x446%x447))<=x448);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x449 = INT64_MIN;
	uint8_t x450 = 22U;
	volatile uint64_t x451 = 4202853303286719377LLU;
	volatile int64_t x452 = 708851867LL;
	int32_t t111 = -331827396;

    t111 = ((x449>(x450%x451))<=x452);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x453 = INT64_MAX;
	uint32_t x454 = 7313657U;
	uint8_t x456 = 3U;
	volatile int32_t t112 = 341662;

    t112 = ((x453>(x454%x455))<=x456);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x461 = 272U;
	uint8_t x462 = 27U;
	int32_t x463 = -1;
	int32_t x464 = 377;
	static int32_t t113 = 6;

    t113 = ((x461>(x462%x463))<=x464);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x467 = 5U;
	static volatile int64_t x468 = -12596LL;
	static volatile int32_t t114 = -45656322;

    t114 = ((x465>(x466%x467))<=x468);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x469 = -16411452;
	uint64_t x470 = 2756LLU;
	static int8_t x471 = -1;
	volatile uint64_t x472 = 235481LLU;
	static volatile int32_t t115 = -3641;

    t115 = ((x469>(x470%x471))<=x472);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x474 = INT8_MAX;
	volatile uint16_t x475 = 817U;
	int16_t x476 = INT16_MIN;
	static volatile int32_t t116 = -3;

    t116 = ((x473>(x474%x475))<=x476);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x478 = 63LLU;
	static int8_t x479 = INT8_MAX;
	int64_t x480 = INT64_MAX;
	volatile int32_t t117 = 3395;

    t117 = ((x477>(x478%x479))<=x480);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x481 = 875;
	int32_t x482 = INT32_MIN;
	volatile uint8_t x483 = 59U;
	int16_t x484 = 0;

    t118 = ((x481>(x482%x483))<=x484);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x485 = -112287919LL;
	static volatile int8_t x486 = -4;
	volatile uint16_t x487 = 7U;
	int64_t x488 = INT64_MIN;

    t119 = ((x485>(x486%x487))<=x488);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	static int8_t x490 = -4;
	int8_t x491 = INT8_MIN;
	uint32_t x492 = UINT32_MAX;
	volatile int32_t t120 = -489654;

    t120 = ((x489>(x490%x491))<=x492);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x493 = 225295414384903790LL;
	int64_t x494 = -28002LL;
	static uint64_t x495 = 4LLU;
	volatile int16_t x496 = -509;

    t121 = ((x493>(x494%x495))<=x496);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x498 = 14492071U;
	volatile uint8_t x499 = UINT8_MAX;

    t122 = ((x497>(x498%x499))<=x500);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x501 = INT8_MAX;
	int16_t x502 = -1558;
	uint32_t x503 = UINT32_MAX;
	static volatile int32_t t123 = -17472203;

    t123 = ((x501>(x502%x503))<=x504);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x505 = 2U;
	static volatile uint16_t x506 = 906U;
	static uint8_t x507 = 4U;
	int64_t x508 = -1LL;
	int32_t t124 = 78662447;

    t124 = ((x505>(x506%x507))<=x508);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x509 = INT64_MIN;
	int8_t x510 = INT8_MIN;
	int16_t x511 = -70;

    t125 = ((x509>(x510%x511))<=x512);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x513 = -1;
	static uint16_t x514 = 1229U;
	int16_t x515 = -1419;
	static int64_t x516 = INT64_MIN;
	volatile int32_t t126 = -1382964;

    t126 = ((x513>(x514%x515))<=x516);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x517 = -1;
	uint32_t x519 = UINT32_MAX;
	uint8_t x520 = UINT8_MAX;

    t127 = ((x517>(x518%x519))<=x520);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x521 = 130441756;
	static uint8_t x523 = 1U;
	int8_t x524 = 0;

    t128 = ((x521>(x522%x523))<=x524);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x527 = 438808426U;
	volatile int16_t x528 = INT16_MAX;
	volatile int32_t t129 = 9739527;

    t129 = ((x525>(x526%x527))<=x528);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x529 = -1321;
	uint32_t x531 = 298U;
	static volatile int16_t x532 = -1;
	volatile int32_t t130 = 837390;

    t130 = ((x529>(x530%x531))<=x532);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x535 = INT8_MIN;
	uint16_t x536 = UINT16_MAX;
	volatile int32_t t131 = 201613;

    t131 = ((x533>(x534%x535))<=x536);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x537 = -1LL;
	uint16_t x538 = 24U;
	static uint32_t x539 = UINT32_MAX;
	static uint8_t x540 = 1U;
	int32_t t132 = 1518;

    t132 = ((x537>(x538%x539))<=x540);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x542 = -56;
	static uint16_t x543 = UINT16_MAX;
	int32_t t133 = 1681975;

    t133 = ((x541>(x542%x543))<=x544);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x545 = UINT64_MAX;
	volatile int64_t x546 = 975356459965585780LL;
	uint16_t x548 = 686U;
	int32_t t134 = 45;

    t134 = ((x545>(x546%x547))<=x548);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x552 = INT8_MAX;

    t135 = ((x549>(x550%x551))<=x552);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x553 = INT16_MAX;
	static int16_t x555 = 4066;
	int16_t x556 = INT16_MAX;
	int32_t t136 = -260315;

    t136 = ((x553>(x554%x555))<=x556);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x557 = UINT16_MAX;
	int8_t x558 = -1;
	int32_t x559 = INT32_MIN;
	int16_t x560 = -23;
	static volatile int32_t t137 = 803246;

    t137 = ((x557>(x558%x559))<=x560);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x561 = 0U;
	volatile int64_t x562 = 1487190266643LL;
	uint32_t x563 = 15083U;
	int32_t t138 = 1;

    t138 = ((x561>(x562%x563))<=x564);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x565 = 12429U;
	uint8_t x566 = 22U;
	int32_t x567 = INT32_MIN;
	volatile uint8_t x568 = UINT8_MAX;
	int32_t t139 = -2;

    t139 = ((x565>(x566%x567))<=x568);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x569 = INT64_MIN;
	int16_t x570 = INT16_MIN;
	volatile uint16_t x571 = UINT16_MAX;
	volatile int8_t x572 = INT8_MAX;
	int32_t t140 = -113;

    t140 = ((x569>(x570%x571))<=x572);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x574 = UINT64_MAX;
	int64_t x575 = INT64_MAX;
	int32_t x576 = INT32_MIN;

    t141 = ((x573>(x574%x575))<=x576);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x577 = 13LLU;
	int32_t x578 = INT32_MIN;
	int64_t x579 = INT64_MIN;
	int64_t x580 = 4553LL;

    t142 = ((x577>(x578%x579))<=x580);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x581 = 1;
	uint64_t x583 = 16405535528502045LLU;
	int8_t x584 = 22;
	static int32_t t143 = 405741;

    t143 = ((x581>(x582%x583))<=x584);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x585 = UINT8_MAX;
	uint32_t x586 = 43960U;
	uint64_t x587 = UINT64_MAX;
	int32_t x588 = INT32_MIN;
	static volatile int32_t t144 = -5312;

    t144 = ((x585>(x586%x587))<=x588);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x589 = UINT32_MAX;
	int8_t x591 = INT8_MIN;
	uint16_t x592 = 140U;

    t145 = ((x589>(x590%x591))<=x592);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x593 = 6774306LLU;
	int32_t x595 = INT32_MIN;
	volatile uint32_t x596 = UINT32_MAX;
	volatile int32_t t146 = 1992366;

    t146 = ((x593>(x594%x595))<=x596);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x598 = UINT32_MAX;
	static int16_t x599 = 58;
	uint8_t x600 = 23U;
	static int32_t t147 = -930;

    t147 = ((x597>(x598%x599))<=x600);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x601 = INT16_MAX;
	int64_t x602 = INT64_MAX;
	static int64_t x603 = 309971LL;
	volatile int64_t x604 = 7653145LL;

    t148 = ((x601>(x602%x603))<=x604);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x606 = INT64_MIN;
	uint8_t x607 = 9U;
	static int32_t x608 = INT32_MIN;
	volatile int32_t t149 = 37;

    t149 = ((x605>(x606%x607))<=x608);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint8_t x609 = 33U;
	int32_t x611 = -1;
	static volatile int8_t x612 = INT8_MAX;
	int32_t t150 = -60348366;

    t150 = ((x609>(x610%x611))<=x612);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x614 = 8U;
	uint64_t x615 = 2574721924484865LLU;
	int32_t x616 = -1;
	static volatile int32_t t151 = -331979028;

    t151 = ((x613>(x614%x615))<=x616);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x617 = -1;
	uint64_t x618 = UINT64_MAX;
	volatile int32_t t152 = 14;

    t152 = ((x617>(x618%x619))<=x620);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x621 = INT8_MIN;
	volatile int64_t x622 = 299183581963891LL;
	static int64_t x623 = INT64_MIN;
	int64_t x624 = 131556740867LL;
	volatile int32_t t153 = 1946341;

    t153 = ((x621>(x622%x623))<=x624);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int32_t x625 = -1;
	int16_t x626 = -1;
	uint8_t x627 = 118U;
	int32_t t154 = 368225996;

    t154 = ((x625>(x626%x627))<=x628);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x629 = UINT16_MAX;
	int64_t x630 = -18LL;
	uint64_t x631 = UINT64_MAX;
	uint16_t x632 = 190U;
	int32_t t155 = 485845395;

    t155 = ((x629>(x630%x631))<=x632);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x633 = UINT32_MAX;
	uint32_t x634 = 52591521U;
	uint16_t x636 = 124U;

    t156 = ((x633>(x634%x635))<=x636);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x637 = INT64_MIN;
	int8_t x638 = -1;
	volatile uint64_t x639 = 31036752010196LLU;
	uint64_t x640 = 144LLU;
	volatile int32_t t157 = -3349;

    t157 = ((x637>(x638%x639))<=x640);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x641 = UINT8_MAX;
	static int16_t x642 = INT16_MAX;
	int16_t x644 = INT16_MIN;
	static int32_t t158 = 264594;

    t158 = ((x641>(x642%x643))<=x644);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x645 = INT8_MAX;
	uint64_t x646 = 3LLU;
	uint8_t x647 = 38U;
	int8_t x648 = INT8_MAX;
	int32_t t159 = 48824557;

    t159 = ((x645>(x646%x647))<=x648);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x649 = INT64_MIN;
	uint8_t x650 = UINT8_MAX;
	int16_t x651 = INT16_MAX;
	static uint64_t x652 = 53996514060LLU;
	static int32_t t160 = 308867858;

    t160 = ((x649>(x650%x651))<=x652);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x653 = INT64_MIN;
	uint32_t x654 = UINT32_MAX;
	int32_t x655 = -1;
	int8_t x656 = INT8_MIN;
	static int32_t t161 = -20716;

    t161 = ((x653>(x654%x655))<=x656);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x657 = -12;
	uint8_t x658 = UINT8_MAX;
	int8_t x659 = -37;
	volatile uint16_t x660 = 4U;

    t162 = ((x657>(x658%x659))<=x660);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x661 = INT64_MIN;
	static int64_t x662 = -1LL;
	static int32_t x663 = INT32_MAX;
	int16_t x664 = INT16_MAX;
	volatile int32_t t163 = 264760709;

    t163 = ((x661>(x662%x663))<=x664);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x665 = INT16_MIN;
	volatile int8_t x666 = -42;
	int64_t x667 = INT64_MAX;
	int32_t t164 = -2411797;

    t164 = ((x665>(x666%x667))<=x668);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x669 = 27U;
	int32_t x670 = 8691;
	int32_t x671 = INT32_MIN;
	int16_t x672 = 458;
	int32_t t165 = -30;

    t165 = ((x669>(x670%x671))<=x672);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x673 = 13265LLU;
	static int16_t x674 = 1241;
	uint64_t x675 = 26488470LLU;
	static volatile int16_t x676 = INT16_MIN;
	volatile int32_t t166 = -305;

    t166 = ((x673>(x674%x675))<=x676);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x677 = 8U;
	static int32_t x678 = 0;
	uint16_t x679 = UINT16_MAX;
	volatile int8_t x680 = INT8_MIN;
	volatile int32_t t167 = -52117726;

    t167 = ((x677>(x678%x679))<=x680);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x681 = 2U;
	int8_t x682 = -48;
	static uint8_t x683 = UINT8_MAX;
	int64_t x684 = -6727LL;

    t168 = ((x681>(x682%x683))<=x684);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x685 = -1;
	static int64_t x686 = -1LL;
	int16_t x687 = -15108;
	int16_t x688 = -23;
	int32_t t169 = 2;

    t169 = ((x685>(x686%x687))<=x688);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x689 = INT8_MIN;
	static uint64_t x690 = 9556LLU;
	uint64_t x691 = UINT64_MAX;
	volatile int8_t x692 = -59;
	volatile int32_t t170 = 883;

    t170 = ((x689>(x690%x691))<=x692);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x693 = INT64_MIN;
	volatile uint8_t x694 = 0U;
	int32_t x695 = 809172444;
	int32_t t171 = 5770858;

    t171 = ((x693>(x694%x695))<=x696);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x697 = UINT16_MAX;
	static int8_t x700 = INT8_MAX;
	static int32_t t172 = -56;

    t172 = ((x697>(x698%x699))<=x700);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x701 = 1;
	uint16_t x702 = 1486U;
	static uint64_t x703 = UINT64_MAX;
	static int8_t x704 = INT8_MIN;
	int32_t t173 = 4;

    t173 = ((x701>(x702%x703))<=x704);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x705 = INT64_MAX;
	volatile int16_t x706 = INT16_MAX;
	int32_t t174 = -235;

    t174 = ((x705>(x706%x707))<=x708);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x709 = -1;
	uint16_t x711 = UINT16_MAX;
	int8_t x712 = INT8_MAX;
	int32_t t175 = 2144736;

    t175 = ((x709>(x710%x711))<=x712);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x718 = INT64_MIN;
	int8_t x719 = INT8_MIN;
	volatile int32_t t176 = -2000;

    t176 = ((x717>(x718%x719))<=x720);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x721 = 106333LL;
	int8_t x722 = INT8_MIN;
	static int8_t x723 = INT8_MIN;
	int32_t x724 = 48;

    t177 = ((x721>(x722%x723))<=x724);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x725 = INT16_MIN;
	static int16_t x726 = 222;
	int64_t x727 = 230915636LL;
	int8_t x728 = INT8_MIN;
	int32_t t178 = -3;

    t178 = ((x725>(x726%x727))<=x728);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x729 = 24U;
	volatile int32_t t179 = 0;

    t179 = ((x729>(x730%x731))<=x732);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x733 = 2U;
	int8_t x735 = INT8_MAX;
	volatile int8_t x736 = INT8_MIN;
	volatile int32_t t180 = -835;

    t180 = ((x733>(x734%x735))<=x736);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x737 = 7;
	volatile uint32_t x739 = 950U;
	int32_t x740 = INT32_MIN;
	int32_t t181 = -470185961;

    t181 = ((x737>(x738%x739))<=x740);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x741 = INT8_MIN;
	uint64_t x743 = UINT64_MAX;
	static uint8_t x744 = UINT8_MAX;
	int32_t t182 = 2402;

    t182 = ((x741>(x742%x743))<=x744);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x745 = INT16_MIN;
	int64_t x746 = INT64_MIN;
	int16_t x748 = 2504;
	static volatile int32_t t183 = 30184;

    t183 = ((x745>(x746%x747))<=x748);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x749 = INT8_MIN;
	static int64_t x750 = -1LL;
	static volatile int32_t x751 = -1728415;
	int64_t x752 = 1081152088504LL;
	volatile int32_t t184 = -169451773;

    t184 = ((x749>(x750%x751))<=x752);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x753 = -53;
	int32_t x754 = -203271607;
	volatile int8_t x755 = INT8_MIN;
	int32_t x756 = INT32_MAX;
	volatile int32_t t185 = 1;

    t185 = ((x753>(x754%x755))<=x756);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x758 = INT16_MIN;
	int64_t x759 = INT64_MAX;
	int32_t t186 = 488495;

    t186 = ((x757>(x758%x759))<=x760);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x761 = 4U;
	uint32_t x764 = UINT32_MAX;
	static int32_t t187 = -183494308;

    t187 = ((x761>(x762%x763))<=x764);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x765 = -41;
	static int16_t x766 = -1;
	uint32_t x767 = 128U;
	int32_t x768 = -1;
	int32_t t188 = 228634762;

    t188 = ((x765>(x766%x767))<=x768);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x769 = UINT8_MAX;
	int64_t x771 = -238425LL;
	int32_t x772 = INT32_MIN;
	volatile int32_t t189 = -84750;

    t189 = ((x769>(x770%x771))<=x772);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x773 = INT8_MAX;
	uint64_t x774 = 1LLU;
	int32_t x775 = INT32_MIN;
	int16_t x776 = -822;
	volatile int32_t t190 = 170498;

    t190 = ((x773>(x774%x775))<=x776);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x777 = 74U;
	int64_t x778 = INT64_MIN;
	static uint64_t x779 = UINT64_MAX;
	static int32_t x780 = 50;
	int32_t t191 = -1;

    t191 = ((x777>(x778%x779))<=x780);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x781 = -1;
	static uint32_t x782 = UINT32_MAX;
	int8_t x783 = INT8_MIN;
	volatile int64_t x784 = INT64_MIN;
	volatile int32_t t192 = 119;

    t192 = ((x781>(x782%x783))<=x784);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x785 = -14;
	static volatile uint16_t x786 = UINT16_MAX;
	volatile int16_t x788 = INT16_MAX;
	int32_t t193 = -122534;

    t193 = ((x785>(x786%x787))<=x788);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x790 = INT32_MAX;
	int64_t x791 = INT64_MIN;
	uint32_t x792 = 99U;
	int32_t t194 = 416;

    t194 = ((x789>(x790%x791))<=x792);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x793 = INT32_MAX;
	int16_t x794 = INT16_MAX;
	int64_t x795 = -755882043694LL;
	int16_t x796 = INT16_MIN;
	volatile int32_t t195 = -1;

    t195 = ((x793>(x794%x795))<=x796);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x797 = 50671U;
	int64_t x799 = INT64_MIN;
	uint16_t x800 = 21U;
	static int32_t t196 = -7359018;

    t196 = ((x797>(x798%x799))<=x800);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x802 = INT64_MIN;
	volatile int32_t t197 = -30706;

    t197 = ((x801>(x802%x803))<=x804);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x806 = INT8_MAX;
	uint64_t x807 = UINT64_MAX;
	uint16_t x808 = 951U;
	volatile int32_t t198 = -1155;

    t198 = ((x805>(x806%x807))<=x808);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x809 = 1U;
	volatile uint32_t x811 = 3444U;
	volatile uint64_t x812 = 259592028LLU;
	volatile int32_t t199 = -24483030;

    t199 = ((x809>(x810%x811))<=x812);

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

